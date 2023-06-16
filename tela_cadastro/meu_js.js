// selecione o formulário e os campos
const form = document.querySelector('form');
const nome = document.querySelector('#nome');
const email = document.querySelector('#email');
const senha = document.querySelector('#senha');
const confirmaSenha = document.querySelector('#confirmaSenha');

// adicione um ouvinte de evento no formulário
form.addEventListener('submit', function(event) {
	// previna o envio do formulário se houver erros
	event.preventDefault();

	// verifique se o nome é válido
	if (nome.value.trim() === '') {
		alert('Por favor, informe seu nome.');
		nome.focus();
		return false;
	}

	// verifique se o e-mail é válido
	if (!validarEmail(email.value.trim())) {
		alert('Por favor, informe um e-mail válido.');
		email.focus();
		return false;
	}

	// verifique se a senha é válida
	if (senha.value.trim() === '') {
		alert('Por favor, informe sua senha.');
		senha.focus();
		return false;
	}

	// verifique se a senha foi confirmada corretamente
	if (confirmaSenha.value.trim() === '') {
		alert('Por favor, confirme sua senha.');
		confirmaSenha.focus();
		return false;
	}

	if (senha.value.trim() !== confirmaSenha.value.trim()) {
		alert('As senhas não coincidem. Por favor, tente novamente.');
		senha.focus();
		return false;
	}

	// se tudo estiver correto, envie o formulário
	alert('Cadastro realizado com sucesso!');
	form.submit();
});