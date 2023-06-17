<!DOCTYPE html>
<html>
    <body>
    	<?php include 'index.php'; ?>

        <form action="/print_array.php" method="GET">
            <fieldset>
                <legend>Enderecos para Cobranca</legend>
                <label for="end1">Endereco 1: </label>
                <input type="text" id="end1" name="end1"></input><br>
                <label for="end2">Endereco 2: </label>
                <input type="text" id="end2" name="end2"></input><br>
                <label for="end3">Endereco 3: </label>
                <input type="text" id="end3" name="end3"></input><br>
            </fieldset>

            <fieldset>
                <legend>Numeros dos Enderecos</legend>
                <label for="num1">Numero 1: </label>
                <input type="number" id="num1" name="num1"></input><br>
                <label for="num2">Numero 2: </label>
                <input type="number" id="num2" name="num2"></input><br>
                <label for="num3">Numero 3: </label>
                <input type="number" id="num3" name="num3"></input><br>
            </fieldset>

            <input type="submit" value="Cadastrar"></input>
        </form>
    
        <?php include 'print_array.inc'; ?>
    </body>
</html>
