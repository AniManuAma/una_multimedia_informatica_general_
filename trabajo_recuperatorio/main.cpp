#include <iostream>
#include <string>
#include <unistd.h> // Para usar sleep()
#include <cstdlib>  // Para system("clear")

using namespace std;

int main() {
    int opcionMenu;
    bool salir = false;
    
    while (!salir) {
        // Variables reiniciadas cada nueva partida
        string respuesta;
        float tiempoRestante = 10; // Tiempo inicial
        float contadorMuertes = 0;
        bool escape = false;
        bool tercerFinal = false;

        // Menú principal
        cout << R"(                                                                                                    
                       ......................................................................       
                    .;;;,,,,,,,,,,,,,,,,,,,,,,,,''''''''''''''''''''''''''''''''''''.......,::.     
                   .c:.;ll:..;lllc.   .clo;.;lllllooooooc..cooooooooool'.:llllllllll;.      .o:     
                   ,l.:XWWx.;KWWWWx.  lWWWo,OWWWWMWWWMWWO.lWWWWWWWWWWWK,;XWWWWWWWWMMNO,     'o'     
                  .c;.kWWX:.oWMWWWNl 'OWWK;.clo0WWWWOoll'.OWWWOo      ;.oWWWKl;  dXWWWo     :c      
                  ;l.:NWWx.,KWMWWWWKcoNWWx.   'OWWWX:    :NWWN0xxxxx:  'OWWWk    oXWWX;    .l,      
                 .l;.xWWN: oWWWOxNWWXXWMN:    cNWWMk.   .xMWWWNXXNNXl  cNWWWNXXXNWWXO;     :c.      
                 :c.;XWWk.,KWWX:.kNWWWWWO.   .xWWNXl    ,KWWNx:     . .kWWWXXWWWWNx:....  .l,       
            ....,l'.xWWNc.oWWWx. ,0WWWMNc    ;KWWOl.    lWWWWX000000o.,KWWNl.cONWWK000Ok, ;l.       
         ;:,,,,;,. ,OKKx..xKK0:   :0XKKk.    cKKKc.    .dKKKKKKKKKK0c :KKKk,  .;oOKKKKKx..l;        
        'l. .......,;;;,.';;'.    .,::c:'..  ..... ...........,;;;,.  ....'............. ,l.        
        c: .kKKKKXXKKXKKXKK0;  .;lk0XNNXXKOd;.   ,dOKKKKo.   .dKKKd.    .l0KKXXXO,       c:         
       'l. :KNXXNXNWWWWWWWNk'.l0NWWNKOOKNWWWNk.  oNWWWWWNo.  ;XWWWo    .oNWWWMWWWl      'o'         
       cc  ...''';dXWNWMNOc.;ONWNOl,....,kWWWWd.'0MWWMWWWNl .xWWMK,   .dNMMXOXWWWk.     cc          
      ,l.      .cONWWWKd,. 'OWWWk.       ;KWWWx.cNWMWWWWMWXc;0WWMd.  .kWMWNo'dWWWX;    .l'          
      cc    .,oKWWWNOl.    lNWWNc        cNWWNl.xWWWWKd0MWWX0NWWX:  'OWWMWx  lWWWWo    cc           
     'l'  .cONWWWNk:..  .  oWMWWx.     .lKWWNx.;XMMWWx.:XWWWWWWWk. ,OWWWMWKO0KWWWWO.  .l,           
    .l: .cKWWWWWWN0kOOOOx' 'OWWWN0xdddkKNWWKl..dWWWMX:  cXWWWWWNl ;0WWWNKKKKKKXWWMX;  :l            
    ,o' 'OMWWMWWMMMWWWWMk.  .o0NWWMMMWWNKkc.  ;KWWMWk.  .oNWWWWO,:KWWW0:......oNWWWo .l,            
    ,l' .;c::c::::::::::'     .':coooc:,.     .:::::'    .;::::'.,::::.       .;:::'.:c.            
     ,:,,,,,,,,,,,,,,,,,,,;,,,,,,,,,,,,,,;,,,;,,,;;;,,,,,,;,,,;,,;;,,,,,,,,,,,,,;,,;:;.             
          .  .  .......  ...................... ....................................                
                                                                                                    
                                                                                                    )" << endl;
        cout << "\n+------------------------------------------+\n";
        cout << "|       INTERZONA: PRUEBA CERO            |\n";
        cout << "|     \"La inactividad es una elección\"     |\n";
        cout << "+------------------------------------------+\n";
        cout << "1. Iniciar la prueba\n";
        cout << "2. Ver instrucciones\n";
        cout << "3. Salir del juego\n";
        cout << "Elegí una opción: ";
        cin >> opcionMenu;

        switch (opcionMenu) {
            case 1: // Iniciar juego
                system("clear");
                
                // Cuenta regresiva inicial
                for (int i = 3; i > 0; i--) {
                    cout << "Comenzando en " << i << "...\n";
                    sleep(1);
                }
                
                // Introducción a la historia
                cout << R"(██████████████████████████████████████████████████████████
────────────┐████████████████████████████████┌────────────
░░░░░░░░░░░░│████████████████████████████████│░░░░░░░░░░░░
░░░░░░░░░░░░│─────────┐████████████┌─────────│░░░░░░░░░░░░
════════════╡▒░░░░░░░░│████████████│░░░░░░░░▒╞════════════
░░░░░░░░░░░░│▒░░░░░░░░│████████████│░░░░░░░░▒│░░░░░░░░░░░░
░░░░░░░░░░░░│═════════╡████████████╞═════════│░░░░░░░░░░░░
════════════╡▒░░░░░░░░│████████████│░░░░░░░░▒╞════════════
░░░░░░░░░░░░│▒░░░░░░░░│████████████│░░░░░░░░▒│░░░░░░░░░░░░
░░░░░░░░░░░░│═════════╡████████████╞═════════│░░░░░░░░░░░░
════════════╡▒░░░░░░░░│████████████│░░░░░░░░▒╞════════════
░░░░░░░░░░░░│▒░░░░░░░░│████████████│░░░░░░░░▒│░░░░░░░░░░░░
░░░░░░░░░░░░│═════════╡████████████╞═════════│░░░░░░░░░░░░
════════════╡▒░░░░░░░░│████████████│░░░░░░░░▒╞════════════
░░░░░░░░░░░░│▒░░░░░░░░│████████████│░░░░░░░░▒│░░░░░░░░░░░░
░░░░░░░░░░░░│═════════╡████████████╞═════════│░░░░░░░░░░░░
════════════╡▒░░░░░░░░│████████████│░░░░░░░░▒╞════════════
░░░░░░░░░░░░│▒░░░░░░░░│███┼┼┼██████│░░░░░░░░▒│░░░░░░░░░░░░
░░░░░░░░░░░░│═════════╡██┼┼┼┼┼█████╞═════════│░░░░░░░░░░░░
════════════╡▒░░░░░░░░│███┼┼┼██████│░░░░░░░░▒╞════════════
░░░░░░░░░░░░│▒▒░░░░░░░│██┼┼┼┼┼█████│░░░░░░░░▒│░░░░░░░░░░░░
░░░░░░░░░░░░│▒▒▒▒▒▒▒▒▒██┼█┼┼┼█┼████╞═════════│░░░░░░░░░░░░
════════════╡▒▒▒▒▒▒▒▒███┼█┼┼┼█┼████│░░░░░░░▒▒╞════════════
░░░░░░░░░░░░│▒▒▒▒▒▒▒█████┼┼┼┼┼█████│░░░░░▒▒▒▒│░░░░░░░░░░░░
░░░░░░░░░░░░│▒▒▒▒▒▒██████┼███┼██████▒▒▒▒▒▒▒▒▒│░░░░░░░░░░░░
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
)" << endl;
                cout << "\n** Bienvenido a la INTERZONA **\n";
                sleep(2);
                cout << "Te despertás en tu ciudad, en la que siempre viviste, en la que conoces tan bien, pero hay algo extraño...\n";
                sleep(2);
                cout << "Está desolada, silenciosa, no hay gente, no hay ruido. Sabes que algo malo va a sucederte.\n";
                sleep(2);
                cout << "El tiempo corre en tu contra.\n";
                sleep(2);
                
                // Bucle principal del juego
                while (tiempoRestante > 0 && !escape) {
                    cout << "\nTe quedan " << tiempoRestante << " minutos. ¿Qué hacés?\n";
                    cout << "A) Intentás buscar una salida.\n";
                    cout << "B) Esperás a que algo suceda\n";
                    cout << "C) Llamás por ayuda\n";
                    cout << "Elegí una opción (A/B/C): ";
                    cin >> respuesta;

                    // Procesar elección del jugador
                    if (respuesta == "A" || respuesta == "a") {
                        // Opción A: Buscar salida
                        cout << "\nDecidiste intentar escapar.\n";
                        tiempoRestante -= 3;
                        cout << "\nPresiona ENTER para continuar...";
                        cin.get();
                        
                        // Escenario de la puerta
                        system("clear");
                        cout << "\nTe quedan " << tiempoRestante << " minutos.\n";
                        cout << "No haz dejado de dar vueltas, buscando alguna pista que te indique el camino correcto para escapar.:\n";
                        sleep(1);
                        cout << "Al final de la calle, te encuentras con una puerta enmarcada en luces rojo neón.\n";
                        sleep(1);
                        cout << "Brillando en la oscuridad de la ciudad como un faro... O como una puerta directo al infierno.\n";
                        sleep(1);
                        cout << "Del otro lado, te encontrás con un pasillo interminable sumido en una oscuridad casi absoluta.\n";
                        sleep(1);
                        cout << "No hay sonidos, ni ecos, ni paredes visibles. Solo el tacto del suelo bajo tus pies y una sensación persistente de que algo te observa.\n";
                        sleep(1);
                        cout << "\nAvanzás con cautela, guiado únicamente por una luz tenue que parpadea al final del pasillo.\n";
                        sleep(1);
                        cout << "Te aferrás a la esperanza de que sea la salida. Apurás el paso...\n";
                        sleep(1);
                        cout << "La luz se hace más grande… hasta que llegás y te das cuenta de que no es la salida, sino un viejo televisor.\n";
                        sleep(1);
                        cout << "Su pantalla titila con estática blanca, emitiendo un zumbido inquietante.\n";
                        sleep(1);

                        cout << "\nDe repente, la imagen cambia.\n";
                        sleep(1);
                        cout << "\nPresiona ENTER para continuar...";
                        cin.get();
                        system("clear");

                        while (tiempoRestante > 0 && !escape) {
                        cout << R"(██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
█████████████████████████████┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██████████████
█████████████████████████████┼▒▒░░░▒▒▒░░▒▒┼▒┼┼████████████
█████████████████████████████┼░░░░░░░░░░░▒┼▒▒▒┼███████████
██████████┼┼┼┼┼██████████████┼▒░░░░░░░░░░░┼▒▒▒┼███████████
████████┼┼┼┼┼┼┼┼┼████████████┼▒▒░░░░░░░▒▒▒┼▒┼┼████████████
██████████┼┼┼┼┼██████████████┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██████████████
██████████┼┼┼┼┼████████████╔╦╦╦╦╦╦╦╦╦╦╦╦╦╦╦╦╦╦╗███████████
███████████┼┼██████████████╚╬╬╩╩╩╩╩╩╩╩╩╩╩╩╩╩╬╬╝███████████
████████┼┼┼┼┼┼┼┼┼███████████║║██████████████║║████████████
███████┼██┼┼┼┼┼██┼██████████║║██████████████║║████████████
██████┼███┼┼┼┼┼███┼█████████║║██████████████║║████████████
██████┼███┼┼┼┼┼███┼███████▒▒╚╝▒▒▒▒▒▒▒▒▒▒▒▒▒▒╚╝▒▒██████████
██████████┼┼┼┼┼████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒███████████
██████████┼███┼██████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█████████████
██████████┼███┼███████████████████████████████████████████
██████▒▒▒▒┼┼▒▒┼┼▒▒▒███████████████████████████████████████
████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█████████████████████████████████████
██████▒▒▒▒▒▒▒▒▒▒▒▒▒███████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
)" << endl;
                        cout << "Ya no hay estática, sino un fondo negro con un acertijo escrito en blanco:\n";
                        sleep(1);
                        cout << "\"Te tengo cuando me compartís, pero si me nombrás, desaparezco. ¿Qué soy?\"\n";
                        sleep(1);

                        cout << "A) La sombra \n";
                        cout << "B) La confianza\n";
                        cout << "C) El silencio\n";
                        cout << "D) Un secreto\n";
                        cout << "E) La duda\n";
                        cout << "Elegí una opción (A/B/C/D/E): ";
                        cin >> respuesta;
                        
                        if (respuesta == "D" || respuesta == "d") {
                          system("clear");
                            cout << "\nTe sentás frente al televisor.\n";
                            sleep(1);
                            cout << "El zumbido se intensifica como si el tiempo se comprimiera.\n";
                            sleep(1);
                            cout << "Concentrás tu mente y, tras unos segundos de duda, encontrás la respuesta.\n";
                            sleep(1);
                            cout << "Apenas la pronunciás, la pantalla se apaga y el silencio te envuelve.\n";
                            sleep(1);
                            cout << "\nPresiona ENTER para continuar...";
                            cin.get();
                            escape = true;
                            system("clear");
                        } 
                        else if (respuesta == "B" || respuesta == "b" || respuesta == "A" || respuesta == "a" || respuesta == "C" || respuesta == "c" || respuesta == "E" || respuesta == "e") {
                            cout << "\nNo confiás en lo que ves. Tal vez es una trampa. Tal vez no estás listo.\n";
                            sleep(1);
                            cout << "Dices tu respuesta pero nada sucede, crees que debes salir de ahí.\n";
                            sleep(1);
                            cout << "Das la espalda al televisor y vuelves al largo pasillo.\n";
                            sleep(1);
                            cout << "Encuentras rápidamente otra habitación, pero el escenario es el mismo.\n";
                            sleep(1);
                            cout << "El televisor es el mismo, el acertijo es el mismo.\n";
                            sleep(1);
                            cout << "Estás condenado a repetir este momento, una y otra vez, hasta que decidas enfrentar el desafío.\n";
                            sleep(1);
                            cout << "\nPresiona ENTER para continuar...";
                            cin.get();
                            tiempoRestante -= 2;
                            system("clear");
                            
                            
                        }
                        else {
                            cout << "Opción no válida. El tiempo pasa...\n";
                            tiempoRestante -= 3;
                        }
                        }
                        
                    } 
                    else if (respuesta == "B" || respuesta == "b") {
                        // Opción B: Esperar
                        cout << "\nDecidiste esperar.\n";
                        tiempoRestante -= 5;
                        cout << "\nPresiona ENTER para continuar...";
                        cin.get();
                        system ("clear");

                        cout << R"(██████████████████████████████████████████████████████████
──────────┐████████████████████████████████████┌──────────
░░░░░░░░░░│████████████████████████████████████│░░░░░░░░░░
░░░░░░░░░░│────────┐██████████████████┌────────│░░░░░░░░░░
══════════╡▒░░░░░░░│██████████████████│░░░░░░░▒╞══════════
░░░░░░░░░░│▒░░░░░░░│██████████████████│░░░░░░░▒│░░░░░░░░░░
░░░░░░░░░░│════════╡██████████████████╞════════│░░░░░░░░░░
══════════╡▒░░░░░░░│██████████████████│░░░░░░░▒╞══════════
░░░░░░░░░░│▒░░░░░░░│██████████████████│░░░░░░░▒│░░░░░░░░░░
░░░░░░░░░░│════════╡██████████████████╞════════│░░░░░░░░░░
══════════╡▒░░░░░░░│██████████████████│░░░░░░░▒╞══════════
░░░░░░░░░░│▒░░░░░░░│██████████████████│░░░░░░░▒│░░░░░░░░░░
░░░░░░░░░░│════════╡██████████████████╞════════│░░░░░░░░░░
══════════╡▒░░░░░░░│███┼┼┼┼┼██████████│░░░░░░░▒╞══════════
░░░░░░░░░░│▒▒░░░░░░██┼┼┼┼┼┼┼┼┼████████│░░░░░░░▒│░░░░░░░░░░
░░░░░░░░░░│▒▒▒░░░░█████┼┼┼┼┼██████████╞════════│░░░░░░░░░░
══════════╡▒▒▒▒░░▒▒████┼┼┼┼┼██████████│░░░░░░░▒╞══════════
░░░░░░░░░░│▒▒▒▒▒▒▒▒▒████┼┼████████████│░░░░░░▒▒│░░░░░░░░░░
░░░░░░░░░░│▒▒▒▒▒▒▒█████┼┼┼┼██████████▒│░░░░░▒▒▒│░░░░░░░░░░
══════════╡▒▒▒▒███████┼┼┼┼┼┼████████▒▒▒▒░░░▒▒▒▒╞══════════
░░░░░░░░░░│██████████┼┼┼┼┼┼█┼█████████▒▒▒▒▒▒▒▒▒│░░░░░░░░░░
░░░░░░░░░░│█████████┼█┼┼┼┼┼██┼██┼████████▒▒▒▒▒▒│░░░░░░░░░░
░░░░░░░░░░│▒▒██████┼██┼┼┼┼┼┼┼┼┼┼┼█┼███████████▒│░░░░░░░░░░
▒▒▒▒▒▒▒▒▒▒▒▒██▒▒▒┼┼▒▒▒┼┼┼┼┼┼┼┼┼┼┼┼┼▒▒▒▒██████▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒██████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██████████▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒███████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████████████████▒▒▒▒▒
███████████████████████████████████████████████████████▒▒▒
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████)" << endl;
                        cout << "El tiempo pasa lentamente... nada sucede.\n";
                        cout << "\nPresiona ENTER para continuar...";
                        cin.get();
                        system ("clear");
                    } 
                    else if (respuesta == "C" || respuesta == "c") {
                        // Opción C: Pedir ayuda
                        system("clear");
                        tiempoRestante -= 3;
                        cout << "\nTe quedan " << tiempoRestante << " minutos.\n";
                        cout << "Llamaste por ayuda... pero nadie responde.\n";
                        sleep(2);
                        cout << R"(██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████
██████████████████████████████████████████┼┼┼┼████████████
████████┼┼┼┼┼████████████████████████████┼┼┼┼┼┼███████████
██████┼┼┼┼┼┼┼┼┼███████████████████████████┼┼┼┼████████████
████████┼┼┼┼┼██████████████████████████████┼┼█████████████
████████┼┼┼┼┼████████████████████████████┼┼┼┼┼┼███████████
█████████┼┼█████████████████████████████┼█┼┼┼┼█┼██████████
██████┼┼┼┼┼┼┼┼┼████████████████████████┼██┼┼┼┼█┼██████████
█████┼┼┼┼┼┼┼┼┼┼┼█████████████████████┼┼┼██┼┼┼┼█┼██████████
████┼┼██┼┼┼┼┼██┼┼████████████████████┼▐█▒█┼██┼██▒▒▒▒▒█████
████┼┼██┼┼┼┼┼██┼┼████████████████████┼█▒▒█┼██┼█▒▒▒▒▒██████
████┼┼██┼┼┼┼┼██┼┼█████████████████████▒▒▒▒┼▒▒┼▒▒▒▒▒███████
████████┼┼┼┼┼███████████████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒███████
████████┼┼┼┼┼██████████████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████████
███████┼┼┼┼┼┼┼███████████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█████████
███████┼┼███┼┼█████████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██████████
███████┼┼███┼┼██████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████████████
███████┼┼███┼┼███████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█████████████
██████┼┼┼███┼┼┼████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██████████████
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒)" << endl;
                        cout << "Escuchás pasos... Se acerca alguien, .\n";
                        sleep(2);
                        
                        // Sub-decisión
                        cout << "\nLa persona intenta atacarte. ¿Qué hacés?\n";
                        cout << "A) Atacás primero\n";
                        cout << "B) Intentás defenderte\n";
                        cout << "C) Escapás\n";
                        cout << "Elegí una opción (A/B/C): ";
                        cin >> respuesta;
                        
                        if (respuesta == "C" || respuesta == "c") {
                            cout << R"(████████████████████████████████████████████████████████████████
████████████████████████████████████████████████████████████████
████████████████████████████████████████████████████████████████
████████████████████████████████████████████████████████████████
████████████████████████████████████████████████████████████████
████████████████████████████████████████████████████████████████
█████████████████████████████████████████████┼┼┼┼███████████████
████████████████████████████████████████████┼┼┼┼┼┼██████████████
████████████┼┼┼┼┼┼┼┼┼████████████████████████┼┼┼┼███████████████
████████████┼┼┼┼┼┼┼┼┼██████████████████████████┼████████████████
██████████┼┼┼┼┼┼┼┼┼┼┼┼┼██████████████████┼██┼┼┼┼┼┼┼█████████████
████████████┼┼┼┼┼┼┼┼┼█████████████████████┼┼█┼┼┼┼┼█┼████████████
██████┼┼████┼┼┼┼┼┼┼┼┼████████████████████████┼┼┼┼┼██┼███████████
██████┼┼┼███┼┼┼┼┼┼┼┼┼████████████████████████┼┼┼┼┼█┼████████████
███████┼┼┼██████┼┼┼██████████████████████████┼███┼██████████████
████████┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██████████████████▒▒┼┼▒▒┼┼▒▒▒███████████
█████████┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██████████████████▒▒▒▒▒▒▒▒▒████████████
████████████┼┼┼┼┼┼┼┼┼┼█┼┼┼██████████████████▒▒▒▒▒▒▒█████████████
████████████┼┼┼┼┼┼┼┼┼┼██┼┼┼█████████████████████████████████████
████████████┼┼┼┼┼┼┼┼┼┼███┼┼█████████████████████████████████████
████████████┼┼┼┼┼┼┼┼┼┼██┼┼┼█████████████████████████████████████
████████████┼┼┼┼┼┼┼┼┼┼██┼┼██████████████████████████████████████
████████████┼┼┼┼┼┼┼┼┼┼██████████████████████████████████████████
████████████┼┼┼████┼┼┼██████████████████████████████████████████
████████████┼┼██████┼┼██████████████████████████████████████████
████████████┼┼██████┼┼██████████████████████████████████████████
██████▒▒▒▒┼┼┼┼▒▒▒▒┼┼┼┼▒▒▒▒██████████████████████████████████████
███████▒▒▒┼┼┼┼▒▒▒▒┼┼┼┼▒▒▒███████████████████████████████████████
█████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒█████████████████████████████████████████
███████████▒▒▒▒▒▒▒▒▒▒███████████████████████████████████████████
████████████████████████████████████████████████████████████████
)" << endl;
                            cout << "Lográs escapar corriendo por un pasillo oscuro.\n";
                            cout << "\nPresiona ENTER para continuar...";
                            tiempoRestante -= 2;
                            cin.ignore(1000, '\n');
                            cin.get();
                        }
                        else if (respuesta == "B" || respuesta == "b" || respuesta == "A" || respuesta == "a") {
                            cout << "Luchás con fuerza, pero perdés mucho tiempo...\n";
                            cout << "\nPresiona ENTER para continuar...";
                            tiempoRestante = 0; // Pierde todo el tiempo
                            cin.ignore(1000, '\n');
                            cin.get();
                        } 
                        else {
                            cout << "Opción no válida. La duda te cuesta caro...\n";
                            cout << "\nPresiona ENTER para continuar...";
                            cin.ignore(1000, '\n');
                            tiempoRestante = 0;
                            cin.get();
                        }
                    } 
                    else {
                        cout << "Opción no válida. El tiempo pasa...\n";
                        tiempoRestante -= 1;
                        cout << "\nPresiona ENTER para continuar...";
                        cin.ignore(1000, '\n');
                        cin.get();
                    }
                } // Fin del bucle del juego
                
                // Mostrar resultado final
                system("clear");

                if (tiempoRestante <= 0) {
                  cout << R"(                        :NWc                                                                        
                        :NWc                                                                        
                        :NWc                                                                        
                        :NWc                                                                        
                        :NWc                                                                        
                       .:XWc                                                                        
                    ...'dXNo,. .                                                                    
                   ..';cOWWKo:;..                                                                   
                   ..,l0NMMWNOc'..                                                                  
                   ..'oXMMMMMNd,..       ..        .',.                                             
                   ..,c0MWKxl:.......',,'..     .....':'                                            
                   ..;dOd;.        .'cdl'.    ...     .c;..                                         
                   .:oc.             .';,,'..          .'',.                                        
                 .,,'.                                    ';.',.                                    
                .:.                       .l'             .,.  .'.'.                                
               .;.                        .'.                      .'.                              
               .'                                                   ..                              
               ,.                                                  .'.                              
             .,.                                                   ..                               
            ',                                                    .,                                
           .,.                                                    ,;                                
           .;.                                                    .l'                               
           .:.                                                     .c;.                             
           .,.                                                       ':;.                           
                                                                       ',                           
                                                                        '.                          
             .                                                          ',                          
             ''                                                         .:.                         
             .;.                                                         ,:                         
              .'.                                                        .:'                        
                ..                                                        .:.                       
                    ....                                                   ':.                      
                      .,,'                                                  .;;.                    
                        .',. ..         .....  ..                            .dk'                   
                           ,'cc.......  ....   .','..'                     .cOWWk.                  
                           ,OXd     .      .    ';...::.               .,cxXWMMMWO,                 
                           ,KMd                      .k0xoc:;;,,,;:cldkKWMMMMMMMMMNd.               
                           ,KMd            ..      ...xMMMMMMMWWMMMMMMMMMMMMMMMMMMMMXl.             
                           ,KMd           ,:.        'OMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0;            
                           ,KMd                      lNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNx.          
                           ,KMd                     '0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0;         
                           ,KMd                    .dWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo.       
                           ,KMd                    :XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWk.      
                           ,KMd                  .,xMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWO'     
                           ,KMd                  ;OXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0,    
                           ,KMd                  dWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0'   
                           ,KMd                 '0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWO.  
                           ,KMd                 ;XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWd. 
                           ,KMd                 cWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNc 
                           ,KMd                 lWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMO.
)" << endl;
sleep(1);
                  cout << "\nLo sabías, todo se acabó, tenías cada segundo contando en tu mente.";
                  cout << "No importa dónde te encontraras, si no terminas el juego, el juego terminará contigo.\n";
                  cout << "Un rayo es disparado desde el cielo, cae directo sobre tu cabeza, sin tiempo para esquivar, termina con tu vida en un solo instante.\n";
                  cout << "\nPresiona ENTER para continuar...";
                  cin.get();
                  system("clear");

                  cout << R"(                                                                                                    
                                                                                                    
               .........''.       .'''''''.      .'.''..       .'',.  .''''''''''',''',.            
              .dKKK0KKXXXX0;     ,ONXXXXNNO;     :KXNXKc.    .'xNNWk' :XWNNNXXXXXXXXXNXd.           
            'x0NWO:'',,,,,'.   ,k0NWO;,:OWNKk,   cXWWWWX0d. ,kKNWWWO' cNMMWk,.'''''',',.            
          ,oONNx:'           'dKWWO:.   .;xWW0d, cXWMMMMMNOx0WMWMMM0' cNMMWo                        
          lWMWX:    ':;;;;;. cNWWMd       cWWWNc cXNMMWMMMMWMMWWMMM0' cNMMWOcc::::::;.              
          lWWMN:   .oKXWWWX: cNWWWk'.....'oNWWNc cNWMMMXOKWWKkOXMMM0' cNMWWXO0OO00OOx,              
          cXWMX:     .lNMWK; cNWWMNKKKKKKKNWWWNl cNWWWWo.,0Kc .kMWM0' cNMWWd.  .                    
          .'lXWKkc.   cNMWX; cNWWWO;',,'',xWMMWc cXWMWWo  ..  .kWWM0' :NMWWo                        
            .;lOMXxddoOWMWX; cNWWMd       oMWWNc cNNWWWo      .xMWW0' :NMWWKxdddddddxdd:            
               ;xxxxdxxxxxo. 'dxxx;       ;xdxd' 'odxxd;       :dddc. 'oddddddddddddddx:            
                                                                                                    
                                                                                                    
             :doddddddodd,    ;xddd,      .:ddxl.  ;dddddddddddddddd:..cxxdddddddddddo'             
          .:l0WXxdddddONWOl;. oMMMWl      .kMWWK, .oMMMW0ddddddddodd:..kWMWW0dddddd0MWkc.           
          :NWWWx.     ;KWMW0, dMMMWl      .OMWWK, .dWWMWo             .kMMMNc      oWWWWo           
          :NMMMx.     ;XMWW0, dMMMWl      .OWWMK,..xWMMMx.........    .kMWWNc    ..xWMMWo           
          :NMMMx.     ;XMMM0'.dWMWWo      .OMWWK,..dMMWMNKKKK0KK0k'   .kMMMNc   .xKNWWWWl           
          :NMMMx.     ;XMWW0' .;dNMKxc. 'oOXWO:,. .dMWWMOc::::ccc:.   .kMMMW0dddkNWO:,,,.           
          :NMWWk.     ;KWWW0,   .ldKMXdckWWOo'   ..dMMMMo             .kMMMWOo0WMMW0l;.             
          ,xOKW0;',,,,oXWXOo.      :OKNWXOx'      .dMWMMk:,,,,,,,,',. .kWMMN: ;k0NMWWNo'.           
            .oXXKKXXXKKXKl.          ;OXo.        .lNNNNNXXXXXXXXXXXo..dXNX0:   'ONXXNXK:           
             .'...........            ...          .''.''.'''''...''.  ..'...    .''''...           
                                                                                                    )" << endl;
                    cout << "El tiempo se acabó... no lograste escapar.\n";
                cout << "\nPresiona ENTER para volver al menú...";
                cin.get();
                system("clear");
                }

                if (tiempoRestante <= 0) {
                  contadorMuertes ++;

                  if (contadorMuertes = 2 ) {
                  cout << "Has perdido. Eso es demasiado.\n";
                  cout << "\n¿A caso el juego te es muy difícil?";
                  cout << "Tal vez no estás preparado para INTERZONA.\n";
                  cout << "\nTal vez INTERZONA sea los amigos que haces en el camino...";
                  cout << "\nPresiona ENTER para volver al menú...";
                  cin.get();
                  system("clear");
                  }
                  }

                if (escape == true) {
                  cout << R"(██████████████████████████▒▒▒███████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒
███████▒▒▒▒▒▒████████████▒▒▒▒▒███▒▒▒▒▒▒▒▒███▒▒▒▒▒▒▒▒▒▒▒▒▒▒
████▒▒▒▒▒▒▒▒▒▒▒▒█████▒▒▒████████████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒
███▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▒▒▒▒▒███████████████▒▒▒██▒▒▒▒▒▒▒▒▒▒▒▒▒
█████████████████████████████████████▒▒▒███████▒▒▒▒▒▒▒▒▒▒▒
█████████████████████████████████████████████▒██▒▒▒▒▒▒▒▒▒▒
██████████████████████████████████████████▒▒▒▒█████▒▒▒▒▒▒▒
███████████████████████┼┼┼┼┼┼┼┼███████████▒███████▒███████
████████████████┼┼█████┼┼┼┼┼┼┼┼█████┼┼██████████▒▒▒█████▒█
████████████████┼┼███┼┼┼┼┼┼┼┼┼┼┼┼███┼┼██████████▒███████▒█
████████████████┼┼█████┼┼┼┼┼┼┼┼█████┼┼█████████▒████████▒█
████████████████┼┼█████┼┼┼┼┼┼┼┼█████┼┼█████████████████▒██
████████████████┼┼┼████┼┼┼┼┼┼┼┼████┼┼┼████████████████████
█████████████████┼┼┼█████┼┼┼┼█████┼┼┼█████████████████████
██████████████████┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██████████████████████
███████████████████┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼███████████████████████
█████████████████████┼┼┼┼┼┼┼┼┼┼┼┼█████████████████████████
█████████████████████┼┼┼┼┼┼┼┼┼┼┼┼█████████████████████████
█████████████████████┼┼┼┼┼┼┼┼┼┼┼┼█████████████████████████
█████████████████████┼┼┼┼┼┼┼┼┼┼┼┼█████████████████████████
█████████████████████┼┼┼┼┼┼┼┼┼┼┼┼█████████████████████████
█████████████████████┼┼┼┼┼┼┼┼┼┼┼┼█████████████████████████
█████████████████████┼┼┼┼┼┼┼┼┼┼┼┼█████████████████████████
█████████████████████┼┼┼██████┼┼┼█████████████████████████
█████████████████████┼┼┼██████┼┼┼█████████████████████████
█████████████████████┼┼┼██████┼┼┼█████████████████████████
░░░░░░░░░░░░░░░░░░░░░┼┼┼░░░░░░┼┼┼░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░┼┼┼┼░░░░░░┼┼┼┼░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
)" << endl;
                  cout << "\nUna puerta blanca se materializa frente a vos.\n";
                  sleep(1);
                  cout << "Al abrirla, un resplandor inunda la habitación.\n";
                  sleep(1);
                  cout << "Detrás hay un paisaje familiar: el cielo azul, el sol brillante, el sonido del viento y de los árboles.\n";
                  sleep(1);
                  cout << "Sentís alivio. Caminás hacia la luz, pero mientras lo hacés, una voz susurra:\n";
                  sleep(1);
                  cout << "\"Esto no es el final, solo una capa más...\"\n";
                  sleep(1);
                  cout << "\nPresiona ENTER para continuar...";
                    cin.get();
                    system("clear");

                    cout << R"(                                                                                                  
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
      .,:;;;;'   ,:::.     .::::,.   .;'     .,;;:;,.    .;,.     .':::. .;:;;;;;;..,;;;;;. .'.     
       oWOc:ll..xx;,ll.  ;do:;;ld,   cNK;    .kNx::cxx'  ;KNc    .dx;,lc':l:dXKl:o,.kWx::o: c0;     
       cWd     cXo   .  lKl     ..  .o0Xx.    dN:   ,0d. l0XO.   :Xo        ,Kk.   .dNc     :O;     
       lWd. .  '0Xd'   ;Kk.         ;d,dX:    dN:   ,0d ,d;oNl   'OXx,      ,Kk.   .dNc  .  ;x'     
       cNO::o,  .oKXx, cWd         .oc ;Kk.   dWd,;:xd' ll '0O'   .lKXk;    ,Kk.    dNx:cl. ,o.     
       lNd. ..    .cKK:cNx.        :Odcl0Xc   dNx;;;.  ,kdclONo     .c0Xc   ,Kk.    dNc  .. 'c.     
       cNd          :Xo'kX:       .oc...;0O. .dNc      lo...,OK,      ;Kx.  ,Kk.    dNc     ..      
       lWk,',;.;c'.'dO, .xKd;..;:'cd.    dNo..dNc     ;x,    lNx.,l,.'oO;   ;KO'   .xWd'',;.,d,     
      .;llccl:..:lcc:.    ,collc'.::.    ,oc..;o,    .:c.    'll'.:lll:.    ,lc'   .:ollcl; 'l'     
                                                                                                    
        .;::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::;.        
         ..................................................................................         
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    )" << endl;
                    cout << "¡Has logrado escapar de la INTERZONA!\n";
                    cout << "\nO eso crees...";
                    cout << "\nPresiona ENTER para volver al menú...";
                    cin.get();
                    system("clear");
                    
                  }
                break;
                
            case 2: // Mostrar instrucciones
                system("clear");
                cout << "\n** INSTRUCCIONES **\n";
                cout << "Estás atrapado en un lugar extraño y debés tomar decisiones.\n";
                cout << "Tenés un tiempo limitado para escapar antes de que el juego termine.\n";
                cout << "Cada vez que tomes una decisión, el tiempo disminuirá.\n";
                cout << "El objetivo es escapar antes de que se acabe el tiempo.\n";
                cout << "\nPresiona ENTER para volver al menú...";
                cin.ignore(1000, '\n');
                cin.get();
                break;
                
            case 3: // Salir del juego
                salir = true;
                cout << "Gracias por jugar. ¡Hasta luego!\n";
                sleep(2);
                break;
                
            default: // Opción inválida
                cout << "Opción no válida, intentá de nuevo.\n";
                sleep(1);
        }
    }
    
    return 0;
}
