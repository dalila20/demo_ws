# demo_ws
*Workspace simples de ROS2 para fins educacionais/demonstrativos.*

----------------------------------
###### *OBS: não é necessário incluir o texto precedido de # na hora de rodar os comandos*  

<b>Para buildar uma workspace:</b>

$ cd <nome_workspace>
$ colcon build # apenas na raiz

<b>Para rodar um arquivo launch:</b>

$ ros2 launch <nome_pacote> <nome_arquivo>

* Exemplo:  
$ ros2 launch carro_pkg rviz.launch.py

<b>Para rodar um script em python:</b>

$ cd <caminho_do_script>  
$ python3 <nome_arquivo>

* Exemplo:  
$ cd demo_ws/src/exec_pkg/scripts  
$ python3 publisher.py

<b>Para criar um pacote na ws:</b>

$ cd <nome_workspace>/src  
$ ros2 pkg create --build-type ament_cmake <nome_pacote> # pacote em CMake  
$ ros2 pkg create --build_type ament_python <nome_pacote> # pacote em python

<b>Comandos importantes do terminal:</b>

$ cd .. # voltar um diretório  
$ cd <nome_pasta> # mudar de diretório  
$ cd # voltar para a root do computador  
$ mkdir <nome_pasta> # criar uma pasta  
$ mv <nome_arquivo> <novo_caminho> # mover um arquivo para outro diretório  
$ mv <nome_arquivo> <nome2_arquivo> # mudar o nome de um arquivo  
$ rm <nome_arquivo> # remover arquivo  
$ rm -r <nome_pasta> # remover pasta  
$ cp <nome_arquivo> <caminho_destino> # copiar um arquivo para outro caminho

