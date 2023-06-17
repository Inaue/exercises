<!DOCTYPE html>

<html>
	<body>
		<?php include 'index.inc'; ?>
		
		<form action='no_inj.php' method='GET'>
			<fieldset>
				<legend>Tente me hackear!</legend>
				<label for='code'>Insira aqui seu codigo:</label>
				<input type='text' name='code'></input><br>
			</fieldset>
		</form>

		<?php include 'no_inj.inc'; ?>
	</body>
</html>
