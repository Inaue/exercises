import { __dirname } from './root_dir.mjs'

const index	= (req, res) =>
{
	res.sendFile(__dirname + '/E01-HTML-master/index.html')
}

const news	= (req, res) =>
{
	res.sendFile(__dirname + '/E01-HTML-master/noticia.html')
}

const exam	= (req, res) =>
{
	res.sendFile(__dirname + '/E01-HTML-master/prova.html')
}

const form	= (req, res) =>
{
	res.sendFile(__dirname + '/E01-HTML-master/formulario.html')
}

const answer	= (req, res) =>
{
	res.sendFile(__dirname + '/E01-HTML-master/gabarito.html')
}

export { index, news, exam, form, answer }
