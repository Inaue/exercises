const modulo_http	= require('http');
const host_ip		= '127.0.0.1';
const host_porta	= 5250;

const servidor = modulo_http.createServer((request, response) =>
{
	response.statusCode = 200;
	response.setHeader('Content-Type', 'text/plain');
	response.end('Textinho simples.');
});

servidor.listen(host_porta, host_ip, () =>
{
	console.log(`serv rodando em http://${host_ip}:${host_porta}/`);
});
