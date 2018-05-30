# Vagrant Seis Dígitos

### Guia de utilização

Depois de baixar este repositório, siga este guia:

*   Baixar e instalar o Virtual Box. Versões do Virtual Box suportadas: 4.0.x, 4.1.x, 4.2.x, 4.3.x, 5.0.x, 5.1.xe 5.2.x. As versões beta e pré-lançamento do VirtualBox não são suportadas.  
    [Link Download Virtual Box](https://www.virtualbox.org/wiki/Downloads)
*   Baixar e instalar o Vagrant. [Link Download Vagrant](https://releases.hashicorp.com/vagrant/2.1.1/)
*   Pelo prompt de comando, entre na pasta onde você baixou este respositório e rode o comando:  
    **vagrant up**  
    Aguarde a instalação até ser exibido a mensagem: "[OK] --- Ambiente de desenvolvimento concluido"
*   Ainda pelo prompt de comando, entre na pasta www/html e faça o clone do Seis Dígitos  
    **git clone -b dev https://github.com/lzanette/seisdigitosv2.git**
*   Crie o banco de dados para o Seis Dígitos. O banco poderá ser criado por um gerenciador de banco de dados uo pelo prompt de comando.  
    **sudo mysql -u root --password='vagrant' -e "CREATE DATABASE IF NOT EXISTS seisdigitos"**
*   Na pasta do Seis Dígitos deverá ser criado um arquivo chamado .env, copiar o conteudo do arquivo .env.example, colar em .env e preencher o valor da variáveis.
*   Pelo prompt de comando, dentro da pasta do Seis Dígitos rodar os comandos:
    *   **composer update**
    *   **php artisan key:generate**
    *   **php artisan migrate**
    *   **php artisan db:seed**
*	Alterar estas configurações para aumentar o tempo de espera de resposta do servidor  
	Alterar o parâmetro max_execution_time no arquivo /etc/php/7.2/fpm/php.ini  
	max_execution_time = 300

	Alterar o parâmetro request_terminate_timeout no arquivo /etc/php/7.0/fpm/pool.d/www.conf 
	request_terminate_timeout = 300

	Reiniciar o Nginx e o php-fpm.  
	sudo service nginx restart  
	sudo service php7.2-fpm restart  
