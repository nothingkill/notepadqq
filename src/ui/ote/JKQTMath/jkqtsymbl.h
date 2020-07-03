#ifndef JKQTSYMBL_H
#define JKQTSYMBL_H

#include <QMap>

class JKQtMap {
public:
  static void InitMap();
  static QString getWinMap(QString key);
  static QChar getWinChar(QString key);

  static QMap<QString, QChar> charWinMap;
  static QMap<QString, QString> strWinMap;

  static QMap<QString, QChar> charUniMap;
  static QMap<QString, QChar> charFgreekMap;
  static QMap<QString, QChar> charFsyMap;

  static QMap<QString, QString> strMathMap;

private:
  static bool isInit;
};

QString JKQtMap::getWinMap(QString key) {
  if (strWinMap.contains(key))
    return strWinMap.value(key);
  return nullptr;
}

QChar JKQtMap::getWinChar(QString key) {
  if (charWinMap.contains(key))
    return charWinMap.value(key);
  return QChar(0);
}

void JKQtMap::InitMap() {
  if (isInit)
    return;
  isInit = true;
  charWinMap.insert("leftrightarrow", QChar(0xAB));
  charWinMap.insert("leftarrow", QChar(0xAC));
  charWinMap.insert("rightarrow", QChar(0xAE));
  charWinMap.insert("to", QChar(0xAE));
  charWinMap.insert("uparrow", QChar(0xAD));
  charWinMap.insert("downarrow", QChar(0xAF));
  charWinMap.insert("Leftrightarrow", QChar(0xDB));
  charWinMap.insert("iff", QChar(0xDB));
  charWinMap.insert("Leftarrow", QChar(0xDC));
  charWinMap.insert("Rightarrow", QChar(0xDE));
  charWinMap.insert("Uparrow", QChar(0xDD));
  charWinMap.insert("Downarrow", QChar(0xFF));
  charWinMap.insert("pm", QChar(0xB1));
  charWinMap.insert("leq", QChar(0xA3));
  charWinMap.insert("geq", QChar(0xB3));
  charWinMap.insert("times", QChar(0xB4));
  charWinMap.insert("propto", QChar(0xB5));
  charWinMap.insert("partial", QChar(0xB6));
  charWinMap.insert("bullet", QChar(0xB7));
  charWinMap.insert("neq", QChar(0xB9));
  charWinMap.insert("ne", QChar(0xB9));
  charWinMap.insert("equiv", QChar(0xBA));
  charWinMap.insert("approx", QChar(0xBB));
  charWinMap.insert("ellipsis", QChar(0xBC));
  charWinMap.insert("Im", QChar(0xC1));
  charWinMap.insert("Re", QChar(0xC2));
  charWinMap.insert("otimes", QChar(0xC4));
  charWinMap.insert("oplus", QChar(0xC5));
  charWinMap.insert("oslash", QChar(0xC6));
  charWinMap.insert("cap", QChar(0xC7));
  charWinMap.insert("land", QChar(0xC7));
  charWinMap.insert("cup", QChar(0xC8));
  charWinMap.insert("lor", QChar(0xC8));
  charWinMap.insert("supset", QChar(0xC9));
  charWinMap.insert("supseteq", QChar(0xCA));
  charWinMap.insert("supsetnot", QChar(0xCB));
  charWinMap.insert("subset", QChar(0xCC));
  charWinMap.insert("subseteq", QChar(0xCD));
  charWinMap.insert("in", QChar(0xCE));
  charWinMap.insert("notin", QChar(0xCF));
  charWinMap.insert("angle", QChar(0xD0));
  charWinMap.insert("nabla", QChar(0xD1));
  charWinMap.insert("copyright", QChar(0xD3));
  charWinMap.insert("registered", QChar(0xD2));
  charWinMap.insert("trademark", QChar(0xD4));
  charWinMap.insert("cdot", QChar(0xD7));
  charWinMap.insert("neg", QChar(0xD8));
  charWinMap.insert("wedge", QChar(0xD9));
  charWinMap.insert("vee", QChar(0xDA));
  charWinMap.insert("diamond", QChar(0xE0));
  charWinMap.insert("langle", QChar(0xE1));
  charWinMap.insert("rangle", QChar(0xF1));
  charWinMap.insert("int", QChar(0xF2));
  charWinMap.insert("forall", QChar(0x22));
  charWinMap.insert("exists", QChar(0x24));
  charWinMap.insert("cong", QChar(0x40));
  charWinMap.insert("bot", QChar(0x5E));
  charWinMap.insert("Alef", QChar(0xC0));
  charWinMap.insert("alef", QChar(0xC0));
  charWinMap.insert("emptyset", QChar(0xC6));
  charWinMap.insert("varnothing", QChar(0xC6));
  charWinMap.insert("lceil", QChar(0xE9));
  charWinMap.insert("rceil", QChar(0xF9));
  charWinMap.insert("lfloor", QChar(0xEB));
  charWinMap.insert("rfloor", QChar(0xFB));
  charWinMap.insert("subsetnot", QChar(0xCB));
  charWinMap.insert("bot", QChar(0x5E));
  charWinMap.insert("dots", QChar(0xDC));
  charWinMap.insert("ldots", QChar(0xDC));
  charWinMap.insert("bigcap", QChar(0xC7));
  charWinMap.insert("bigcup", QChar(0xC8));
  charWinMap.insert("bigvee", QChar(0xDA));
  charWinMap.insert("bighat", QChar(0xD9));

  strWinMap.insert("ll", "<<");
  strWinMap.insert("gg", ">>");
  strWinMap.insert("bbC", "C");
  strWinMap.insert("bbH", "H");
  strWinMap.insert("bbN", "N");
  strWinMap.insert("bbP", "P");
  strWinMap.insert("bbQ", "Q");
  strWinMap.insert("bbR", "R");
  strWinMap.insert("bbZ", "Z");
  strWinMap.insert("tilde", "~");
  strWinMap.insert("DC", "=");
  strWinMap.insert("cent", "c");
  strWinMap.insert("iint", QString(2, QChar(0xF2)));
  strWinMap.insert("iiint", QString(3, QChar(0xF2)));
  strWinMap.insert("cdots", QString(3, QChar(0xD7)));

  //unicode
  charUniMap.insert("leftrightarrow", QChar(0x2194));
  charUniMap.insert("leftarrow", QChar(0x2190));
  charUniMap.insert("rightarrow", QChar(0x2192));
  charUniMap.insert("to", QChar(0x2192));
  charUniMap.insert("uparrow", QChar(0x2191));
  charUniMap.insert("downarrow", QChar(0x2193));
  charUniMap.insert("updownarrow", QChar(0x2195));
  charUniMap.insert("Leftrightarrow", QChar(0x21D4));
  charUniMap.insert("iff", QChar(0x21D4));
  charUniMap.insert("Leftarrow", QChar(0x21D0));
  charUniMap.insert("Rightarrow", QChar(0x21D2));
  charUniMap.insert("Uparrow", QChar(0x21D1));
  charUniMap.insert("Downarrow", QChar(0x21D3));
  charUniMap.insert("Updownarrow", QChar(0x21D5));
  charUniMap.insert("sum", QChar(0x2211));
  charUniMap.insert("prod", QChar(0x220F));
  charUniMap.insert("pm", QChar(0x00B1));
  charUniMap.insert("mp", QChar(0x2213));
  charUniMap.insert("leq", QChar(0x2264));
  charUniMap.insert("geq", QChar(0x2265));
  charUniMap.insert("ll", QChar(0x226A));
  charUniMap.insert("gg", QChar(0x226B));
  charUniMap.insert("hbar", QChar(0x210F));
  charUniMap.insert("euro", QChar(0x20AC));
  charUniMap.insert("bbC", QChar(0x2102));
  charUniMap.insert("bbH", QChar(0x210D));
  charUniMap.insert("bbN", QChar(0x2115));
  charUniMap.insert("bbP", QChar(0x2119));
  charUniMap.insert("bbQ", QChar(0x211A));
  charUniMap.insert("bbR", QChar(0x211D));
  charUniMap.insert("bbZ", QChar(0x2124));
  charUniMap.insert("Angstrom", QChar(0x212B));
  charUniMap.insert("Alef", QChar(0x2135));
  charUniMap.insert("alef", QChar(0x2135));
  charUniMap.insert("Bet", QChar(0x2136));
  charUniMap.insert("bet", QChar(0x2136));
  charUniMap.insert("Gimel", QChar(0x2137));
  charUniMap.insert("gimel", QChar(0x2137));
  charUniMap.insert("Dalet", QChar(0x2138));
  charUniMap.insert("dalet", QChar(0x2138));
  charUniMap.insert("nexists", QChar(0x2204));
  charUniMap.insert("ni", QChar(0x220B));
  charUniMap.insert("notni", QChar(0x220C));
  charUniMap.insert("circ", QChar(0x2218));

  charUniMap.insert("tilde", QChar(0x223C));
  charUniMap.insert("iint", QChar(0x222C));
  charUniMap.insert("iiint", QChar(0x222D));
  charUniMap.insert("oint", QChar(0x222E));
  charUniMap.insert("oiint", QChar(0x222F));
  charUniMap.insert("oiiint", QChar(0x2230));
  charUniMap.insert("emptyset", QChar(0x2300));
  charUniMap.insert("varnothing", QChar(0x2300));
  charUniMap.insert("odot", QChar(0x2299));
  charUniMap.insert("ominus", QChar(0x2296));
  charUniMap.insert("lceil", QChar(0x2308));
  charUniMap.insert("rceil", QChar(0x2309));
  charUniMap.insert("lfloor", QChar(0x230A));
  charUniMap.insert("rfloor", QChar(0x230B));
  charUniMap.insert("subsetnot", QChar(0x2284));
  charUniMap.insert("DC", QChar(0x2393));
  charUniMap.insert("bot", QChar(0x22A4));
  charUniMap.insert("vdots", QChar(0x22EE));
  charUniMap.insert("iddots", QChar(0x22F0));
  charUniMap.insert("ddots", QChar(0x22F1));
  charUniMap.insert("perthousand", QChar(0x2030));
  charUniMap.insert("leftharpoonup", QChar(0x21BC));
  charUniMap.insert("rightharpoonup", QChar(0x21C0));
  charUniMap.insert("upharpoonleft", QChar(0x21BF));
  charUniMap.insert("downharpoonleft", QChar(0x21C3));
  charUniMap.insert("leftrightharpoon", QChar(0x21CB));
  charUniMap.insert("rightleftharpoon", QChar(0x21CC));
  charUniMap.insert("coprod", QChar(0x2210));
  charUniMap.insert("leftharpoondown", QChar(0x21BD));
  charUniMap.insert("rightharpoondown", QChar(0x21C1));
  charUniMap.insert("upharpoonright", QChar(0x21BE));
  charUniMap.insert("downharpoonright", QChar(0x21C2));
  charUniMap.insert("nwarrow", QChar(0x2196));
  charUniMap.insert("nearrow", QChar(0x2197));
  charUniMap.insert("searrow", QChar(0x2198));
  charUniMap.insert("swarrow", QChar(0x2199));
  charUniMap.insert("mapsto", QChar(0x21A6));
  charUniMap.insert("cent", QChar(0x00A2));
  charUniMap.insert("pound", QChar(0x00A3));
  charUniMap.insert("yen", QChar(0x00A5));
  charUniMap.insert("div", QChar(0x00F7));
  charUniMap.insert("multimap", QChar(0x22B8));
  charUniMap.insert("maporiginal", QChar(0x22B6));
  charUniMap.insert("mapimage", QChar(0x22B7));
  charUniMap.insert("bigcap", QChar(0x22C2));
  charUniMap.insert("bigcup", QChar(0x22C3));
  charUniMap.insert("bigvee", QChar(0x22C1));
  charUniMap.insert("bighat", QChar(0x22C0));
  charUniMap.insert("benzene", QChar(0x232C));
  charUniMap.insert("times", QChar(0x21A6));
  charUniMap.insert("propto", QChar(0x221D));
  charUniMap.insert("partial", QChar(0x2202));
  charUniMap.insert("bullet", QChar(0x2219));
  charUniMap.insert("neq", QChar(0x2260));
  charUniMap.insert("ne", QChar(0x2260));
  charUniMap.insert("equiv", QChar(0x2261));
  charUniMap.insert("approx", QChar(0x2245));
  charUniMap.insert("ellipsis", QChar(0x2026));
  charUniMap.insert("Im", QChar(0x2111));
  charUniMap.insert("Re", QChar(0x211C));
  charUniMap.insert("otimes", QChar(0x2297));
  charUniMap.insert("oplus", QChar(0x2295));
  charUniMap.insert("oslash", QChar(0x2298));
  charUniMap.insert("cap", QChar(0x2229));
  charUniMap.insert("land", QChar(0x2229));
  charUniMap.insert("cup", QChar(0x222A));
  charUniMap.insert("lor", QChar(0x222A));
  charUniMap.insert("supset", QChar(0x2283));
  charUniMap.insert("supseteq", QChar(0x2286));
  charUniMap.insert("supsetnot", QChar(0x2285));
  charUniMap.insert("subset", QChar(0x2282));
  charUniMap.insert("subseteq", QChar(0x2286));
  charUniMap.insert("in", QChar(0x2208));
  charUniMap.insert("notin", QChar(0x2209));
  charUniMap.insert("angle", QChar(0x2221));
  charUniMap.insert("nabla", QChar(0x2207));
  charUniMap.insert("copyright", QChar(0x00A9));
  charUniMap.insert("registered", QChar(0x00AE));
  charUniMap.insert("trademark", QChar(0x2122));
  charUniMap.insert("cdot", QChar(0x00B7));
  charUniMap.insert("neg", QChar(0x00AC));
  charUniMap.insert("wedge", QChar(0x2227));
  charUniMap.insert("vee", QChar(0x2228));
  charUniMap.insert("diamond", QChar(0xE0));
  charUniMap.insert("langle", QChar(0x2329));
  charUniMap.insert("rangle", QChar(0x232A));
  charUniMap.insert("int", QChar(0x222B));
  charUniMap.insert("infty", QChar(0x221E));
  charUniMap.insert("forall", QChar(0x2200));
  charUniMap.insert("exists", QChar(0x2203));
  charUniMap.insert("cong", QChar(0x2245));
  charUniMap.insert("bot", QChar(0x22A5));

  charFgreekMap.insert("alpha", QChar(0xAE));
  charFgreekMap.insert("beta", QChar(0xAF));
  charFgreekMap.insert("gamma", QChar(0xB0));
  charFgreekMap.insert("delta", QChar(0xB1));
  charFgreekMap.insert("epsilon", QChar(0x22));
  charFgreekMap.insert("varepsilon", QChar(0xB2));
  charFgreekMap.insert("zeta", QChar(0xB3));
  charFgreekMap.insert("eta", QChar(0xB4));
  charFgreekMap.insert("theta", QChar(0xB5));
  charFgreekMap.insert("vartheta", QChar(0x23));
  charFgreekMap.insert("iota", QChar(0xB6));
  charFgreekMap.insert("kappa", QChar(0xB7));
  charFgreekMap.insert("lambda", QChar(0xB8));
  charFgreekMap.insert("mu", QChar(0xB9));
  charFgreekMap.insert("nu", QChar(0xBA));
  charFgreekMap.insert("xi", QChar(0xBB));
  charFgreekMap.insert("pi", QChar(0xBC));
  charFgreekMap.insert("varpi", QChar(0x24));
  charFgreekMap.insert("rho", QChar(0xBD));
  charFgreekMap.insert("varrho", QChar(0x25));
  charFgreekMap.insert("sigma", QChar(0xBE));
  charFgreekMap.insert("varsigma", QChar(0x26));
  charFgreekMap.insert("tau", QChar(0xBF));
  charFgreekMap.insert("upsilon", QChar(0xC0));
  charFgreekMap.insert("phi", QChar(0xC1));
  charFgreekMap.insert("varphi", QChar(0x27));
  charFgreekMap.insert("chi", QChar(0xC2));
  charFgreekMap.insert("psi", QChar(0xC3));
  charFgreekMap.insert("omega", QChar(0x21));
  charFgreekMap.insert("Gamma", QChar(0xA1));
  charFgreekMap.insert("Delta", QChar(0xA2));
  charFgreekMap.insert("Theta", QChar(0xA3));
  charFgreekMap.insert("Lambda", QChar(0xA4));
  charFgreekMap.insert("Xi", QChar(0xA5));
  charFgreekMap.insert("Pi", QChar(0xA6));
  charFgreekMap.insert("Sigma", QChar(0xA7));
  charFgreekMap.insert("Upsilon", QChar(0xA8));
  charFgreekMap.insert("Phi", QChar(0xA9));
  charFgreekMap.insert("Psi", QChar(0xAA));
  charFgreekMap.insert("leftharpoonup", QChar(0x28));
  charFgreekMap.insert("rightharpoonup", QChar(0x2A));
  charFgreekMap.insert("leftharpoondown", QChar(0x29));
  charFgreekMap.insert("rightharpoondown", QChar(0x2B));
  charFgreekMap.insert("neg", QChar(0xAC));
  charFgreekMap.insert("star", QChar(0x3F));

  charFsyMap.insert("leftrightarrow", QChar(0x24));
  charFsyMap.insert("leftarrow", QChar(0xc3));
  charFsyMap.insert("rightarrow", QChar(0x21));
  charFsyMap.insert("to", QChar(0x21));
  charFsyMap.insert("uparrow", QChar(0x22));
  charFsyMap.insert("downarrow", QChar(0x23));
  charFsyMap.insert("updownarrow", QChar(0x6c));
  charFsyMap.insert("Leftrightarrow", QChar(0x2c));
  charFsyMap.insert("iff", QChar(0x2c));
  charFsyMap.insert("Leftarrow", QChar(0x28));
  charFsyMap.insert("Rightarrow", QChar(0x29));
  charFsyMap.insert("Uparrow", QChar(0x2a));
  charFsyMap.insert("Downarrow", QChar(0x2b));
  charFsyMap.insert("Updownarrow", QChar(0x6d));
  charFsyMap.insert("pm", QChar(0xa7));
  charFsyMap.insert("mp", QChar(0xa8));
  charFsyMap.insert("leq", QChar(0xb7));
  charFsyMap.insert("geq", QChar(0xb8));
  charFsyMap.insert("ll", QChar(0xbf));
  charFsyMap.insert("gg", QChar(0xc0));
  charFsyMap.insert("Alef", QChar(0x40));
  charFsyMap.insert("alef", QChar(0x40));
  charFsyMap.insert("ni", QChar(0x33));
  charFsyMap.insert("circ", QChar(0xb1));
  charFsyMap.insert("tilde", QChar(0xbb));
  charFsyMap.insert("emptyset", QChar(0x3b));
  charFsyMap.insert("odot", QChar(0xaf));
  charFsyMap.insert("ominus", QChar(0xaa));
  charFsyMap.insert("odiv", QChar(0xae));
  charFsyMap.insert("oplus", QChar(0xa9));
  charFsyMap.insert("lceil", QChar(0x64));
  charFsyMap.insert("rceil", QChar(0x65));
  charFsyMap.insert("lfloor", QChar(0x62));
  charFsyMap.insert("rfloor", QChar(0x63));
  charFsyMap.insert("bot", QChar(0x3f));
  charFsyMap.insert("nwarrow", QChar(0x2d));
  charFsyMap.insert("nearrow", QChar(0x25));
  charFsyMap.insert("searrow", QChar(0x26));
  charFsyMap.insert("swarrow", QChar(0x2e));
  charFsyMap.insert("div", QChar(0xa5));
  charFsyMap.insert("times", QChar(0xa3));
  charFsyMap.insert("propto", QChar(0x2f));
  charFsyMap.insert("bullet", QChar(0x2b));
  charFsyMap.insert("equiv", QChar(0xb4));
  charFsyMap.insert("approx", QChar(0xbc));
  charFsyMap.insert("Im", QChar(0x3D));
  charFsyMap.insert("Re", QChar(0x3C));
  charFsyMap.insert("oplus", QChar(0xa9));
  charFsyMap.insert("oslash", QChar(0xae));
  charFsyMap.insert("cap", QChar(0x5c));
  charFsyMap.insert("land", QChar(0x5c));
  charFsyMap.insert("cup", QChar(0x5b));
  charFsyMap.insert("lor", QChar(0x5b));

  charFsyMap.insert("supset", QChar(0xbe));
  charFsyMap.insert("supseteq", QChar(0xb6));
  charFsyMap.insert("subset", QChar(0xbd));
  charFsyMap.insert("subseteq", QChar(0xb5));
  charFsyMap.insert("in", QChar(0x32));
  charFsyMap.insert("nabla", QChar(0x35));
  charFsyMap.insert("cdot", QChar(0xa2));
  charFsyMap.insert("wedge", QChar(0x5e));
  charFsyMap.insert("vee", QChar(0x5f));
  charFsyMap.insert("diamond", QChar(0xE0));
  charFsyMap.insert("langle", QChar(0x68));
  charFsyMap.insert("rangle", QChar(0x69));
  charFsyMap.insert("infty", QChar(0x31));
  charFsyMap.insert("forall", QChar(0x38));
  charFsyMap.insert("exists", QChar(0x39));
  charFsyMap.insert("cong", QChar(0xbb));
  charFsyMap.insert("bot", QChar(0x3f));

  strMathMap.insert("sin", "sin");
  strMathMap.insert("cos", "cos");
  strMathMap.insert("tan", "tan");
  strMathMap.insert("sinh", "sinh");
  strMathMap.insert("cosh", "cosh");
  strMathMap.insert("tanh", "tanh");
  strMathMap.insert("atan", "atan");
  strMathMap.insert("acos", "acos");
  strMathMap.insert("asin", "asin");
  strMathMap.insert("arcsin", "arcsin");
  strMathMap.insert("arccos", "arccos");
  strMathMap.insert("arctan", "arctan");
  strMathMap.insert("ii", "i");
  strMathMap.insert("dd", "d");
  strMathMap.insert("exp", "exp");
  strMathMap.insert("log", "log");
  strMathMap.insert("ln", "ln");
  strMathMap.insert("ld", "ld");
  strMathMap.insert("lb", "lb");
  strMathMap.insert("erf", "erf");
  strMathMap.insert("min", "min");
  strMathMap.insert("max", "max");
  strMathMap.insert("argmin", "argmin");
  strMathMap.insert("argmax", "argmax");
  strMathMap.insert("inf", "inf");
  strMathMap.insert("sup", "sup");
  strMathMap.insert("liminf", "liminf");
  strMathMap.insert("limsup", "limsup");
  strMathMap.insert("lim", "lim");
  strMathMap.insert("sec", "sec");
  strMathMap.insert("gcd", "gcd");
  strMathMap.insert("hom", "hom");
  strMathMap.insert("ker", "ker");
  strMathMap.insert("dim", "dim");
  strMathMap.insert("cot", "cot");
  strMathMap.insert("arg", "arg");
  strMathMap.insert("det", "det");
  strMathMap.insert("deg", "deg");
  strMathMap.insert("Pr", "Pr");
  strMathMap.insert("coth", "coth");
  strMathMap.insert("alpha", "&alpha;");
  strMathMap.insert("beta", "&beta;");
  strMathMap.insert("gamma", "&gamma;");
  strMathMap.insert("delta", "&delta;");
  strMathMap.insert("epsilon", "&epsilon;");
  strMathMap.insert("varepsilon", "&epsilon;");
  strMathMap.insert("zeta", "&zeta;");
  strMathMap.insert("eta", "&eta;");
  strMathMap.insert("theta", "&theta;");
  strMathMap.insert("vartheta", "&thetasym;");
  strMathMap.insert("iota", "&iota;");
  strMathMap.insert("kappa", "&kappa;");
  strMathMap.insert("lambda", "&lambda;");
  strMathMap.insert("mu", "&mu;");
  strMathMap.insert("nu", "&nu;");
  strMathMap.insert("xi", "&xi;");
  strMathMap.insert("pi", "&pi;");
  strMathMap.insert("varpi", "&varpi;");
  strMathMap.insert("rho", "&rho;");
  strMathMap.insert("sigma", "&sigma;");
  strMathMap.insert("varsigma", "&varsigma;");
  strMathMap.insert("tau", "&tau;");
  strMathMap.insert("upsilon", "&upsilon;");
  strMathMap.insert("phi", "&phi;");
  strMathMap.insert("varphi", "&varphi;");
  strMathMap.insert("chi", "&chi;");
  strMathMap.insert("psi", "&psi;");
  strMathMap.insert("omega", "&omega;");
  strMathMap.insert("Gamma", "&Gamma;");
  strMathMap.insert("Delta", "&Delta;");
  strMathMap.insert("Theta", "&Theta;");
  strMathMap.insert("Lambda", "&Lambda;");
  strMathMap.insert("Omega", "&Omega;");
  strMathMap.insert("Xi", "&Xi;");
  strMathMap.insert("Pi", "&Pi;");
  strMathMap.insert("Sigma", "&Sigma;");
  strMathMap.insert("Upsilon", "&Upsilon;");
  strMathMap.insert("Phi", "&Phi;");
  strMathMap.insert("Psi", "&Psi;");
  strMathMap.insert("leftrightarrow", "&harr;");
  strMathMap.insert("leftarrow", "&larr;");
  strMathMap.insert("rightarrow", "&rarr;");
  strMathMap.insert("uparrow", "&uarr;");
  strMathMap.insert("downarrow", "&darr;");
  strMathMap.insert("Leftrightarrow", "&hArr;");
  strMathMap.insert("iff", "&hArr;");
  strMathMap.insert("Leftarrow", "&lArr;");
  strMathMap.insert("Rightarrow", "&rArr;");
  strMathMap.insert("Uparrow", "&uArr;");
  strMathMap.insert("Downarrow", "&dArr;");
  strMathMap.insert("pm", "&plusmn;");
  strMathMap.insert("leq", "&le;");
  strMathMap.insert("geq", "&ge;");
  strMathMap.insert("times", "&times;");
  strMathMap.insert("propto", "&prop;");
  strMathMap.insert("partial", "&part;");
  strMathMap.insert("bullet", "&bull;");
  strMathMap.insert("neq", "&ne;");
  strMathMap.insert("ne", "&ne;");
  strMathMap.insert("equiv", "&equiv;");
  strMathMap.insert("approx", "&asymp;");
  strMathMap.insert("ellipsis", "...");
  strMathMap.insert("Im", "&image;");
  strMathMap.insert("Re", "&real;");
  strMathMap.insert("otimes", "&otimes;");
  strMathMap.insert("oplus", "&oplus;");
  strMathMap.insert("oslash", "/");
  strMathMap.insert("cap", "&cap;");
  strMathMap.insert("land", "&cap;");
  strMathMap.insert("cup", "&cup;");
  strMathMap.insert("lor", "&cup;");
  strMathMap.insert("supset", "&sup;");
  strMathMap.insert("supseteq", "&supe;");
  strMathMap.insert("supsetnot", "&nsup;");
  strMathMap.insert("subset", "&sub;");
  strMathMap.insert("subseteq", "&sube;");
  strMathMap.insert("in", "&isin;");
  strMathMap.insert("notin", "&notin;");
  strMathMap.insert("angle", "&ang;");
  strMathMap.insert("nabla", "&nabla;");
  strMathMap.insert("copyright", "&copy;");
  strMathMap.insert("registered", "&reg;");
  strMathMap.insert("trademark", "&trade;");
  strMathMap.insert("cdot", "&sdot;");
  strMathMap.insert("neg", "&not;");
  strMathMap.insert("wedge", "&and;");
  strMathMap.insert("vee", "&vee;");
  strMathMap.insert("diamond", "&loz;");
  strMathMap.insert("langle", "&lang;");
  strMathMap.insert("rangle", "&rang;");
  strMathMap.insert("int", "&int;");
  strMathMap.insert("forall", "&forall;");
  strMathMap.insert("exists", "&exist;");
  strMathMap.insert("cong", "&sim;");
  strMathMap.insert("bot", "&perp;");

  strMathMap.insert("ll", "<<");
  strMathMap.insert("gg", ">>");
  strMathMap.insert("bbC", "<b>C</b");
  strMathMap.insert("bbH", "<b>H</b>");
  strMathMap.insert("bbN", "<b>N</b>");
  strMathMap.insert("bbP", "<b>P</b>");
  strMathMap.insert("bbQ", "<b>Q</b>");
  strMathMap.insert("bbR", "<b>R</b>");
  strMathMap.insert("bbZ", "<b>Z</b>");
  strMathMap.insert("Alef", "&alefsym;");
  strMathMap.insert("alef", "&alefsym;");
  strMathMap.insert("tilde", "~");
  strMathMap.insert("iint", "&int;&int;");
  strMathMap.insert("iiint", "&int;&int;&int;");
  strMathMap.insert("emptyset", "&empty;");
  strMathMap.insert("varnothing", "&empty;");
  strMathMap.insert("lceil", "&lceil;");
  strMathMap.insert("rceil", "&rceil;");
  strMathMap.insert("lfloor", "&lfloor;");
  strMathMap.insert("rfloor", "&rfloor;");
  strMathMap.insert("subsetnot", "&nsub;");
  strMathMap.insert("DC", "=");
  strMathMap.insert("cdots", "&sdot;&sdot;&sdot;");
  strMathMap.insert("dots", "...");
  strMathMap.insert("cent", "&cent;");

  strMathMap.insert("_", "_");
  strMathMap.insert("}", "}");
  strMathMap.insert("{", "{");
  strMathMap.insert("hbar", "&#8463;");
  strMathMap.insert("euro", "&euro;");
  strMathMap.insert("pound", "&pound;");
  strMathMap.insert("yen", "&yen;");
  strMathMap.insert("div", "&divide;");
  strMathMap.insert("backslash", "\\");
  strMathMap.insert("$", "$");
  strMathMap.insert("%", "%");
  strMathMap.insert("&", "&");
  strMathMap.insert("#", "#");
  strMathMap.insert("ast", "*");
  strMathMap.insert("glq", "'");
  strMathMap.insert("grq", "'");
  strMathMap.insert("glqq", "\"");
  strMathMap.insert("grqq", "\"");
  strMathMap.insert("flq", "&lt;");
  strMathMap.insert("frq", "&gt;");
  strMathMap.insert("flqq", "");
  strMathMap.insert("frqq", "");

}


#endif // JKQTSYMBL_H