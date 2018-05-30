<h1><center>Vagrant Seis Dígitos</center></h1>

<h3>Guia de utilização</h3>
Depois de baixar este repositório, siga este guia:
<ul>
	<li>Baixar e instalar o Virtual Box. Versões do Virtual Box suportadas: 4.0.x, 4.1.x, 4.2.x, 4.3.x, 5.0.x, 5.1.xe 5.2.x. As versões beta e pré-lançamento do VirtualBox não são suportadas.<br>
	<a href="https://www.virtualbox.org/wiki/Downloads">Link Download Virtual Box</a>
	</li>

	<li>Baixar e instalar o Vagrant.
	<a href="https://releases.hashicorp.com/vagrant/2.1.1/">Link Download Vagrant</a>
	</li>

	<li>Pelo prompt de comando, entre na pasta onde você baixou este respositório e rode o comando:<br>
	<b>vagrant up</b><br>
	Aguarde a instalção até ser exibido a mensagem: "[OK] --- Ambiente de desenvolvimento concluido"
	</li>

	<li>Ainda pelo prompt de comando, entre na pasta www/html e faça o clone do Seis Dígitos <br>
	<b>git clone -b dev https://github.com/lzanette/seisdigitosv2.git</b>
	</li>

	<li>Crie o banco de dados para o Seis Dígitos. O banco poderá ser criado por um gerenciador de banco de dados uo pelo prompt de comando. <br>
	<b>sudo mysql -u root --password='vagrant' -e "CREATE DATABASE IF NOT EXISTS seisdigitos"</b>
	</li>

	<li>Na pasta do Seis Dígitos deverá ser criado um arquivo chamado .env, copiar o conteudo do arquivo .env.example em .env e preencher o valor da variáveis.</li>

	<li>Pelo prompt de comando, dentro da pasta do Seis Dígitos rodar os comandos:
	<ul>
		<li><b>composer update</b></li>
		<li><b>php artisan key:generate</b></li>
		<li><b>php artisan migrate</b></li>
		<li><b>php artisan db:seed</b></li>
		<li></li>
	</ul>
	</li>

</ul>

