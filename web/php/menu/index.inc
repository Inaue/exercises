<?php

echo "<hr><br>\n";

$paginas[]	= 'index';
$paginas[]	= 'print_array';
$paginas[]	= 'no_inj';

foreach($paginas as $pagina)
	echo "<a href=\"" . $pagina . ".php\">" . $pagina . "</a><br>\n";

echo "<hr><br>\n";

?>
