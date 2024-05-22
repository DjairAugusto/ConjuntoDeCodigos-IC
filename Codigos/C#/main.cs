using System;

class Program
{
    public static void Main()
    {
        float[] temperaturas = new float[7];

        Console.WriteLine("Digite as temperaturas para cada dia da semana:");
        for (int i = 0; i < 7; i++)
        {
            Console.Write($"Dia {i + 1}: ");
            temperaturas[i] = float.Parse(Console.ReadLine());
        }

        float menor = temperaturas[0], maior = temperaturas[0];
        for (int i = 1; i < 7; i++)
        {
            if (temperaturas[i] < menor)
            {
                menor = temperaturas[i];
            }
            if (temperaturas[i] > maior)
            {
                maior = temperaturas[i];
            }
        }

        float soma = 0;
        for (int i = 0; i < 7; i++)
        {
            soma += temperaturas[i];
        }
        float media = soma / 7;

        int abaixo_media = 0, acima_media = 0;
        for (int i = 0; i < 7; i++)
        {
            if (temperaturas[i] < media)
            {
                abaixo_media++;
            }
            else if (temperaturas[i] > media)
            {
                acima_media++;
            }
        }

        Console.WriteLine($"\nMenor temperatura: {menor:F2}°C");
        Console.WriteLine($"Maior temperatura: {maior:F2}°C");
        Console.WriteLine($"Temperatura média: {media:F2}°C");
        Console.WriteLine($"Temperaturas inferiores à média: {abaixo_media} dias");
        Console.WriteLine($"Temperaturas superiores à média: {acima_media} dias");
    }
}