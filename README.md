# PRINTF project for [Holberton School](https://holbertonschool.uy)

Working team:

* Matias Mancini
[@EMME-ESSE](https://github.com/EMME-ESSE)
* Adrian Belen
[@Adrianbelend](https://github.com/Adrianbelend)


### Content
> The index

- [_printf](#_printf)
- [Dependencies](#dependencies)
- [Description](#description)
- [Flowchart](#flowchart)



## _printf

Formatted version of the ````printf```` C command for [Holberton School](https://holbertonschool.uy) being part
of [holberton-school-low_level_programming](https://github.com/search?q=holbertonschool-low_level_programming). 

[Back to the top](#Content)

## Dependencies

* The ````_printf```` function was coded on an Ubuntu 20.04 LTS machine with ````gcc```` version 4.8.4.
* The gcc code to compile is: ````gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c````

[[Back to the top](#Content)
## Flowchart



[Back to the top](#proyecto-de-blog-para-coderhouse)
## Estructura del proyecto

* Carpeta blog del proyecto<br>
  Contiene las views para renderizar el inicio con todos sus posts

* Static Folder<br>
  Se creo usando el comando collectstatic

* Carpeta media<br>
  En esta carpeta se suben todos las imagenes de post como tambien las imagenes de perfil de cada usuario.

* Carpeta template <br>
  Se crearon templates bases y se creo una carpeta include donde se separo los contenidos de cada pagina separandolo en sidebar, secciones principales, navbar, footer

  El proyecto se dividio en tres app diferentes. Estas son:
* Mensajes
  - Modelo Mensajes
  - Las views para crear, ver mensajes
  - Formularios para crear mensajes

* Users

  - Modelo Perfil
  - Views para iniciar sesion, registrarse, cerrar sesion y editar perfil


* Blogapp
  - Modelos categorias, tag, escritor, post y comentarios
  - Views agregar post, actualizar post, ver post, buscar post
  - Formularios comentarios y post


[Back to the top](#proyecto-de-blog-para-coderhouse)



##  
