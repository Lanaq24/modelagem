#include<GL/freeglut.h>
void desenha(void) {
    glClear(GL_COLOR_BUFFER_BIT); // limpa o buffer de cor da tela  para que desenhos antigos nao fiquem "grudados" na tela

    gluOrtho2D(-5, 20, -5, 20); // define o sistema de coordenadas que vão ser usadas para desenhar (x0, )

    glBegin(GL_LINE_LOOP);
    glVertex2f(2,6);
    glVertex2f(2,2);
    glVertex2f(2,2);
    glVertex2f(4,2);

    glEnd();

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv); //Inicializa a biblioteca GLUT, processando quaisquer argumentos relevantes. Sem essa chamada, nada mais do GLUT funciona.
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600); //define o tamanho da janela(LARGURA, ALTURA)
    glutInitWindowPosition(300, 100); //define onde a janela vai aparecer na tela(ESQUERDA, TOPO)
    glutCreateWindow("Ola Glut"); //cria a janela, só a partir dessa linha que qualquer comando OpenGL passa a funcionar.
    glutDisplayFunc(desenha); //registra a função desenha como callback de renderização
    glClearColor(0, 0, 0.1, 1); //define a cor usada para limpar a tela, só será usada quando o glclear for chamado dentro da função desenha
    glutMainLoop(); // fica rodando indefinidamente, esperando eventos (redesenhar, redimensionar, teclado, mouse) e chamando as funções de callback registradas (como desenha). O programa fica "preso" aqui até a janela ser fechada.
    return 0;
}
