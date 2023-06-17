import { teste, func as func2, func3 } from './simple_module.mjs'
import * as modulo_http from 'node:http'

const host_ip		= '127.0.0.1';
const host_porta	= 5250;

const servidor = modulo_http.createServer((request, response) =>
{
	let teste2		= teste
	teste2			= 'hamburguer de grao-de-bico'
	func3()
	response.statusCode	= 200;
	response.setHeader('Content-Type', 'text/plain');
	response.end(func2());
});

servidor.listen(host_porta, host_ip, () =>
{
	console.log(`serv rodando em http://${host_ip}:${host_porta}/`);
});

