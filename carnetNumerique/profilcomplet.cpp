#include "profilcomplet.h"

// a mettre dans la classe profilPrive
/*namespace
{
	const QByteArray printables()
	{
			QByteArray list;
			for(int i = 0; i < 256; ++i)
			{
				if (QChar(char(i)).isPrint())
					list+= char(i);
			}
			return list;
	}
}

const QString crypter(const QString & chaineACrypter)
{
	// Pour éviter de décoder en "%xx" les caractères affichables
	static const QByteArray exclude = printables();

	QByteArray texteEnOctet = QByteArray::fromPercentEncoding(chaineACrypter.toAscii());
	static const QByteArray clef = "clé, pas tricher !$";
	QByteArray codeFinal;
	int tailleClef = clef.length();

	for (int i = 0; i < texteEnOctet.length(); ++i) {
		codeFinal += char(texteEnOctet[i] ^ clef[i % tailleClef]);
	}

	return codeFinal.toPercentEncoding(exclude);
}

const QString decrypter(const QString & chaineADecrypter)
{
	return crypter(chaineADecrypter);
}*/


profilComplet::profilComplet()
{

}

void profilComplet::saveProfilComplet(){

}
