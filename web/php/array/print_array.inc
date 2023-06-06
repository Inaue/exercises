<?php
if (sizeof($_GET) != 0 && !empty($_GET['end1']))
{
    echo "<h1>Dados Cadastrados com Sucesso!</h1>";
    foreach ($_GET as $campo => $valor)
    {
        if(is_numeric($valor))
            echo "<b>" . $campo . ": nº " . $valor . "</b>" . "<br>";
        elseif(is_string($valor))
            echo "<i>" . $campo . ": " . $valor . "</i>" . "<br>";
    }
}
?>