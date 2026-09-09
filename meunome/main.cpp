#include<GL/freeglut.h>
//GLfloat escala = 1;
GLfloat x =1.0f;
GLfloat y=1.0f;
GLfloat xdireita=1.0f;
GLfloat xesquerda=1.0f;
GLfloat rotn =1.0f;
GLfloat rotm =1.0f;

void desenha(void) {
    glClear(GL_COLOR_BUFFER_BIT); // limpa o buffer de cor da tela  para que desenhos antigos nao fiquem "grudados" na tela

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5, 20, -5, 20); // define o sistema de coordenadas que vão ser usadas para desenhar (x0, )

    glScalef (x, y, 0);
    glTranslatef(xdireita, xesquerda, 0);
    glRotated()
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

glBegin(GL_LINES);
        glVertex2f(2,6);
        glVertex2f(2,2);

        glVertex2f(2,2);
        glVertex2f(4,2);

        glVertex2f(5,2);
        glVertex2f(6,6);
        glVertex2f(6,6);
        glVertex2f(7, 2);

        glVertex2f(5.3,3);
        glVertex2f(6.7, 3);

        glVertex2f(8,2);
        glVertex2f(8,6);

        glVertex2f(8,6);
        glVertex2f(9.5,2);

        glVertex2f(9.5, 2);
        glVertex2f(9.5, 6);


        glVertex2f(10.5, 2);
        glVertex2f(11.5, 6);

        glVertex2f(11.5, 6);
        glVertex2f(12.5, 2);

        glVertex2f(10.9, 3);
        glVertex2f(12.3, 3);


    glEnd();

    glFlush();
}
void listeningKey (unsigned char tecla, GLint xt, GLint yt)//x e y referem as coordenadas de teclado, linha e coluna
 {
    switch(tecla){
        case '+': y = y+0.5;
    break;
        case '-': y--;
    break;
        case 'i': x = x+0.1;
    break;
        case 'k': x--;
    break;
        case 'g': xdireita = xdireita+0.1;
    break;
        case 'h': x=1.0f;direita=xdireita-0.1;
    break;
        case 'n'
    }
    desenha();
}



int main(int argc, char* argv[])
{
    glutInit(&argc, argv); //Inicializa a biblioteca GLUT, processando quaisquer argumentos relevantes. Sem essa chamada, nada mais do GLUT funciona.
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600); //define o tamanho da janela(LARGURA, ALTURA)
    glutInitWindowPosition(300, 100); //define onde a janela vai aparecer na tela(ESQUERDA, TOPO)
    glutCreateWindow("Ola Glut"); //cria a janela, só a partir dessa linha que qualquer comando OpenGL passa a funcionar.
    glutKeyboardFunc (listeningKey);
    glutDisplayFunc(desenha); //registra a função desenha como callback de renderização
    glClearColor(0, 0, 0.1, 1); //define a cor usada para limpar a tela, só será usada quando o glclear for chamado dentro da função desenha
    glutMainLoop(); // fica rodando indefinidamente, esperando eventos (redesenhar, redimensionar, teclado, mouse) e chamando as funções de callback registradas (como desenha). O programa fica "preso" aqui até a janela ser fechada.
    return 0;
}

