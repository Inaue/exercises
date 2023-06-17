<?php

echo "<hr><br>\n";
if (sizeof($_GET) != 0)
{
	$code	= $_GET['code'];
	
	echo "Resultado do hack:<br>\n";
	echo $code;
	echo "<hr><br>\n";
	echo "Hack filtrado:<br>\n";
	echo htmlspecialchars($code);
}

echo "<hr><br>\n";
?>
