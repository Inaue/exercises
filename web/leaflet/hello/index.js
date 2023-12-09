let center  = { x: -20.0579752, y: -44.033977 }

/* MAP */
var map = L.map('map').setView([center.x, center.y], 15, { drawControl: true });

/* LAYERS */
let default_layer = L.tileLayer('https://tile.openstreetmap.org/{z}/{x}/{y}.png', {
    attribution: '&copy; <a href="https://www.openstreetmap.org/copyright">OpenStreetMap</a> contributors'
})

let g_terrain = L.tileLayer('http://{s}.google.com/vt/lyrs=p&x={x}&y={y}&z={z}',{
    maxZoom: 20,
    subdomains:['mt0','mt1','mt2','mt3']
});

/* CHOOSING LAYER */
g_terrain.addTo(map);

/* CREATING POLYLINE */

let line = new L.Polyline([[center.x, center.y], [center.x + .5, center.y + .5]])

line.addTo(map)

let user_figures = localStorage.getItem('figures')

if(user_figures == null)
{
    user_figures = new L.FeatureGroup()
}
else
{
    user_figures = L.geoJSON(JSON.parse(user_figures))
}

let draw_ctrl = new L.Control.Draw
({
    edit:
    {
        featureGroup: user_figures
    }
})

map.addControl(draw_ctrl)
map.addLayer(user_figures)
map.on('draw:created', e => user_figures.addLayer(e.layer))

document.getElementById('btn_save').addEventListener('click', e =>
    {
        localStorage.setItem('figures', JSON.stringify(user_figures.toGeoJSON()))
    })
