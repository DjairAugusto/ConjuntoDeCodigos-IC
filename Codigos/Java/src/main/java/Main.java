import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        float[] temperaturas = new float[7];
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite a temperatura de cada dia da semana:");
        for (int i = 0; i < 7; i++) {
            System.out.print("Dia " + (i + 1) + ": ");
            temperaturas[i] = scanner.nextFloat();
        }

        float menor = temperaturas[0];
        float maior = temperaturas[0];
        for (int i = 0; i < 7; i++) {
            if (temperaturas[i] < menor) {
                menor = temperaturas[i];
            }
            if (temperaturas[i] > maior) {
                maior = temperaturas[i];
            }
        }

        float soma = 0;
        for (int i = 0; i < 7; i++) {
            soma += temperaturas[i];
        }
        float media = soma / 7;

        int abaixo_media = 0;
        int acima_media = 0;
        for (int i = 0; i < 7; i++) {
            if (temperaturas[i] < media) {
                abaixo_media++;
            } else if (temperaturas[i] > media) {
                acima_media++;
            }
        }

        System.out.println("Menor temperatura: " + menor);
        System.out.println("Maior temperatura: " + maior);
        System.out.println("Temperatura média: " + media);
        System.out.println("Dias com temperatura abaixo da média: " + abaixo_media);
        System.out.println("Dias com temperatura acima da média: " + acima_media);

        scanner.close();
    }
}
