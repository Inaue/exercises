const NTP = require('ntp-time').Client;
const client = new NTP('a.st1.ntp.br', 123, { timeout: 3000 });

const clock = function()
{
	setTimeout(() =>
	{
		client
		.syncTime()
		.then(now =>
		{
			console.log(now.time)
		})
		clock()
	}, 1000)
}

clock()