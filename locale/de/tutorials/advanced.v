//: version "2.2"
//: property encoding = "utf-8"
//: property locale = "de"
//: property prefix = "_GG"
//: property title = "Advanced Editing Methods"
//: property showSwitchNets = 0
//: property discardChanges = 1
//: property timingViolationMode = 2
//: property initTime = "0 ns"

`timescale 1ns/1ns

//: /netlistBegin PAGE1
module PAGE1;    //: root_module
//: enddecls

  //: comment g4 @(10,310) /sn:0 /anc:1
  //: /line:"<tutorial-navigation>"
  //: /end
  //: comment g9 @(10,10) /anc:1
  //: /line:"<h3>Fortgeschrittene Editiertechniken</h3>"
  //: /line:""
  //: /line:"In diesem Abschnitt lernen wir weitere Techniken, um noch effizienter"
  //: /line:"Schaltungen in TkGate editieren zu können."
  //: /end
  //: comment g0 @(150,93) /sn:0 /anc:1
  //: /line:"<img src=bigiface.gif>"
  //: /end

endmodule
//: /netlistEnd

//: /netlistBegin PAGE6
module PAGE6();
//: interface  /sz:(40, 40) /bd:[ ] /pd: 0 /pi: 0 /pe: 0 /pp: 1
wire w23;    //: /sn:0 {0}(309,247)(319,247){1}
wire w24;    //: /sn:0 {0}(319,194)(254,194){1}
//: {2}(252,192)(252,134)(318,134){3}
//: {4}(250,194)(187,194){5}
wire w25;    //: /sn:0 {0}(334,134)(344,134){1}
wire w22;    //: /sn:0 {0}(156,196)(166,196){1}
wire w10;    //: /sn:0 {0}(156,191)(166,191){1}
wire w27;    //: /sn:0 {0}(335,247)(345,247){1}
wire w26;    //: /sn:0 {0}(335,194)(345,194){1}
//: enddecls

  //: comment g4 @(10,310) /sn:0
  //: /line:"<tutorial-navigation>"
  //: /end
  _GGBUF #(4) g28 (.I(w24), .Z(w26));   //: @(325,194) /sn:0 /w:[ 0 0 ]
  //: joint g27 (w24) @(252, 194) /w:[ 1 2 4 -1 ]
  //: comment g9 @(10,9) /anc:1
  //: /line:"<h3>Leitungen editieren</h3> <b>(Erzeugen von Lötstellen)</b>"
  //: /line:""
  //: /line:"Nun noch einmal das gleiche, diesmal aber lasse das Invertereingangssegment näher am AND-Ausgang los,"
  //: /line:"weg von der Lötstelle. Diesmal wird eine neue Lötstelle automatischerzeugt."
  //: /line:""
  //: /end
  _GGNBUF #(2) g29 (.I(w23), .Z(w27));   //: @(325,247) /sn:0 /w:[ 1 0 ]
  _GGAND2 #(6) g25 (.I0(w10), .I1(w22), .Z(w24));   //: @(177,194) /sn:0 /w:[ 1 1 5 ] /eb:0
  _GGBUF #(4) g26 (.I(w24), .Z(w25));   //: @(324,134) /sn:0 /w:[ 3 0 ]

endmodule
//: /netlistEnd

//: /netlistBegin PAGE3
module PAGE3();
//: interface  /sz:(40, 40) /bd:[ ] /pd: 0 /pi: 0 /pe: 0 /pp: 1
wire w4;    //: /sn:0 {0}(131,166)(141,166){1}
wire w0;    //: /sn:0 {0}(131,161)(141,161){1}
wire w1;    //: /sn:0 {0}(171,176)(171,201)(285,201)(285,164)(237,164)(237,144)(193,144)(193,164)(162,164){1}
//: enddecls

  //: comment g4 @(10,310) /sn:0 /anc:1
  //: /line:"<tutorial-navigation>"
  //: /end
  _GGXOR2 #(8) g8 (.I0(w0), .I1(w4), .Z(w1));   //: @(152,164) /sn:0 /w:[ 1 1 1 ] /eb:0
  //: comment g9 @(10,10) /anc:1
  //: /line:"<h3>Leitungen editieren</h3> <b>(Automatische Schleifenerkennung)</b>"
  //: /line:""
  //: /line:"Fasse das Ende der XOR-Ausgangsleitung in der Schaltung unten an und ziehe es hoch, bis es das horizontale"
  //: /line:"Segment dicht am Gatter kreuzt und lasse los. TkGate wird die Leitungsschleife automatisch beseitigen."
  //: /line:""
  //: /end

endmodule
//: /netlistEnd

//: /netlistBegin PAGE8
module PAGE8();
//: interface  /sz:(40, 40) /bd:[ ] /pd: 0 /pi: 0 /pe: 0 /pp: 1
wire w46;    //: /sn:0 {0}(421,254)(374,254)(374,196){1}
//: {2}(376,194)(397,194)(397,127)(422,127){3}
//: {4}(372,194)(339,194){5}
wire w0;    //: /sn:0 {0}(67,208)(82,208){1}
wire w43;    //: /sn:0 {0}(308,191)(318,191){1}
wire w1;    //: /sn:0 {0}(67,213)(82,213){1}
wire w44;    //: /sn:0 {0}(308,196)(318,196){1}
wire w2;    //: /sn:0 {0}(103,211)(130,211)(130,135){1}
wire w48;    //: /sn:0 {0}(438,127)(448,127){1}
wire w47;    //: /sn:0 {0}(437,254)(447,254){1}
//: enddecls

  //: comment g4 @(10,310) /sn:0 /anc:1
  //: /line:"<tutorial-navigation>"
  //: /end
  _GGXOR2 #(8) g2 (.I0(w0), .I1(w1), .Z(w2));   //: @(93,211) /sn:0 /w:[ 1 1 0 ]
  _GGAND2 #(6) hari (.I0(w43), .I1(w44), .Z(w46));   //: @(329,194) /sn:0 /anc:1 /w:[ 1 1 5 ] /eb:0
  //: joint g50 (w46) @(374, 194) /anc:1 /w:[ 2 -1 4 1 ]
  //: comment g9 @(10,10) /anc:1
  //: /line:"<h3>Leitungen editieren</h3> <b>(Neuverbinden)</b>"
  //: /line:""
  //: /line:"TkGate verbindet automatisch Leitungen neu, die ein Gatter oder eine Lötstelle nicht in die richtige Richtung"
  //: /line:"verlassen. Versuche in den beiden Beispielen unten, die Leitung an der Pfeilstelle anzufassen und nach links zu ziehen."
  //: /line:"Im XOR-Beispiel werden zwei neue Leitungssegmente hinzugefügt. Im Lötstellenbeispiel wird ein Segment"
  //: /line:"hinzugefügt und die Verbindungsstelle angepaßt."
  //: /line:""
  //: /end
  _GGBUF #(4) g48 (.I(w46), .Z(w47));   //: @(427,254) /sn:0 /anc:1 /w:[ 0 0 ]
  //: comment g0 @(405,147) /sn:0
  //: /line:"<font color=blue4 size=7>&lArr;</font>"
  //: /end
  //: comment g12 @(141,164) /sn:0
  //: /line:"<font color=blue4 size=7>&lArr;</font>"
  //: /end
  _GGBUF #(4) g49 (.I(w46), .Z(w48));   //: @(428,127) /sn:0 /anc:1 /w:[ 3 0 ]

endmodule
//: /netlistEnd

//: /netlistBegin PAGE9
module PAGE9();
//: interface  /sz:(40, 40) /bd:[ ] /pd: 0 /pi: 0 /pe: 0 /pp: 1
wire w6;    //: /sn:0 {0}(85,173)(100,173){1}
wire w32;    //: /sn:0 {0}(316,199)(316,214){1}
wire w7;    //: /sn:0 {0}(85,178)(100,178){1}
wire w14;    //: /sn:0 {0}(107,216)(122,216){1}
wire w16;    //: /sn:0 {0}(80,237)(95,237){1}
wire w4;    //: /sn:0 {0}(97,157)(112,157){1}
wire w15;    //: /sn:0 {0}(80,232)(95,232){1}
wire w19;    //: /sn:0 {0}(85,256)(100,256){1}
wire w38;    //: /sn:0 {0}(335,190)(335,205){1}
wire w0;    //: /sn:0 {0}(91,132)(106,132){1}
wire w3;    //: /sn:0 {0}(97,152)(112,152){1}
wire w37;    //: /sn:0 {0}(333,154)(333,169){1}
wire w34;    //: /sn:0 {0}(295,168)(295,183){1}
wire w21;    //: /sn:0 {0}(359,164)(359,179){1}
wire w31;    //: /sn:0 {0}(314,163)(314,178){1}
wire w28;    //: /sn:0 {0}(394,182)(394,197){1}
wire w20;    //: /sn:0 {0}(121,254)(136,254){1}
wire w23;    //: /sn:0 {0}(356,200)(356,215){1}
wire w24;    //: /sn:0 {0}(378,168)(378,183){1}
wire w36;    //: /sn:0 {0}(338,154)(338,169){1}
wire w41;    //: /sn:0 {0}(416,210)(416,225){1}
wire w1;    //: /sn:0 {0}(91,137)(106,137){1}
wire w25;    //: /sn:0 {0}(373,168)(373,183){1}
wire w8;    //: /sn:0 {0}(121,176)(136,176){1}
wire w18;    //: /sn:0 {0}(85,251)(100,251){1}
wire w35;    //: /sn:0 {0}(297,204)(297,219){1}
wire w40;    //: /sn:0 {0}(414,174)(414,189){1}
wire w30;    //: /sn:0 {0}(319,163)(319,178){1}
wire w17;    //: /sn:0 {0}(116,235)(131,235){1}
wire w22;    //: /sn:0 {0}(354,164)(354,179){1}
wire w2;    //: /sn:0 {0}(127,135)(142,135){1}
wire w11;    //: /sn:0 {0}(117,195)(132,195){1}
wire w12;    //: /sn:0 {0}(71,213)(86,213){1}
wire w10;    //: /sn:0 {0}(81,197)(96,197){1}
wire w13;    //: /sn:0 {0}(71,218)(86,218){1}
wire w27;    //: /sn:0 {0}(399,182)(399,197){1}
wire w5;    //: /sn:0 {0}(133,155)(148,155){1}
wire w33;    //: /sn:0 {0}(300,168)(300,183){1}
wire w29;    //: /sn:0 {0}(396,218)(396,233){1}
wire w9;    //: /sn:0 {0}(81,192)(96,192){1}
wire w26;    //: /sn:0 {0}(375,204)(375,219){1}
wire w39;    //: /sn:0 {0}(419,174)(419,189){1}
//: enddecls

  _GGAND2 #(6) g3 (.I0(w9), .I1(w10), .Z(w11));   //: @(107,195) /sn:0 /w:[ 1 1 0 ]
  _GGAND2 #(6) g13 (.I0(w30), .I1(w31), .Z(w32));   //: @(316,189) /sn:0 /R:3 /w:[ 1 1 0 ]
  _GGAND2 #(6) g2 (.I0(w6), .I1(w7), .Z(w8));   //: @(111,176) /sn:0 /w:[ 1 1 0 ]
  _GGAND2 #(6) g1 (.I0(w3), .I1(w4), .Z(w5));   //: @(123,155) /sn:0 /w:[ 1 1 0 ]
  _GGAND2 #(6) g16 (.I0(w27), .I1(w28), .Z(w29));   //: @(396,208) /sn:0 /R:3 /w:[ 1 1 0 ]
  _GGAND2 #(6) g10 (.I0(w12), .I1(w13), .Z(w14));   //: @(97,216) /sn:0 /w:[ 1 1 0 ]
  //: comment g19 @(10,310) /sn:0 /anc:1
  //: /line:"<tutorial-navigation>"
  //: /end
  _GGAND2 #(6) g6 (.I0(w18), .I1(w19), .Z(w20));   //: @(111,254) /sn:0 /w:[ 1 1 0 ]
  _GGAND2 #(6) g7 (.I0(w33), .I1(w34), .Z(w35));   //: @(297,194) /sn:0 /R:3 /w:[ 1 1 0 ]
  //: comment g15 @(10,10) /anc:1
  //: /line:"<h3>Leitungen editieren</h3> <b>(Gatter ausrichten)</b>"
  //: /line:""
  //: /line:"Eine Gruppe von Gattern kann man durch Auswählen und Drücken von<img src=edit_valgn.gif bgcolor=gray> vertikal ausrichten"
  //: /line:"und mit <img src=edit_halgn.gif bgcolor=gray> horizontal. Versuche das mit der Gruppe von Gattern unten."
  //: /end
  _GGAND2 #(6) g17 (.I0(w24), .I1(w25), .Z(w26));   //: @(375,194) /sn:0 /R:3 /w:[ 1 1 0 ]
  _GGAND2 #(6) g5 (.I0(w15), .I1(w16), .Z(w17));   //: @(106,235) /sn:0 /w:[ 1 1 0 ]
  _GGAND2 #(6) g14 (.I0(w21), .I1(w22), .Z(w23));   //: @(356,190) /sn:0 /R:3 /w:[ 1 1 0 ]
  _GGAND2 #(6) g0 (.I0(w0), .I1(w1), .Z(w2));   //: @(117,135) /sn:0 /w:[ 1 1 0 ]
  _GGAND2 #(6) g12 (.I0(w36), .I1(w37), .Z(w38));   //: @(335,180) /sn:0 /R:3 /w:[ 1 1 0 ]
  _GGAND2 #(6) g18 (.I0(w39), .I1(w40), .Z(w41));   //: @(416,200) /sn:0 /R:3 /w:[ 1 1 0 ]

endmodule
//: /netlistEnd

//: /netlistBegin PAGE7
module PAGE7();
//: interface  /sz:(40, 40) /bd:[ ] /pd: 0 /pi: 0 /pe: 0 /pp: 1
wire w7;    //: /sn:0 {0}(85,137)(95,137){1}
wire w19;    //: /sn:0 {0}(322,140)(332,140){1}
wire w21;    //: /sn:0 {0}(321,242)(331,242){1}
wire w20;    //: /sn:0 {0}(305,242)(288,242)(288,140)(306,140){1}
wire w18;    //: /sn:0 {0}(162,245)(172,245){1}
wire w40;    //: /sn:0 {0}(193,243)(203,243){1}
wire w17;    //: /sn:0 {0}(172,240)(153,240)(153,140)(116,140){1}
wire w9;    //: /sn:0 {0}(85,142)(95,142){1}
//: enddecls

  //: comment g4 @(10,310) /sn:0 /anc:1
  //: /line:"<tutorial-navigation>"
  //: /end
  _GGOR2 #(6) g13 (.I0(w17), .I1(w18), .Z(w40));   //: @(183,243) /sn:0 /anc:1 /w:[ 0 1 0 ] /eb:0
  //: comment g1 @(120,178) /sn:0 /anc:1
  //: /line:"<font color=blue4 size=7>&rArr;</font>"
  //: /end
  _GGBUF #(4) g19 (.I(w20), .Z(w19));   //: @(312,140) /sn:0 /anc:1 /w:[ 1 0 ]
  //: comment g9 @(10,10) /anc:1
  //: /line:"<h3>Leitungen editieren</h3> <b>(Leitungssegmente)</b>"
  //: /line:""
  //: /line:"Manchmal gibt es keine freien Enden von zwei Leitungen, die verbunden werden sollen. Klicke mit rechts auf den"
  //: /line:"mit dem AND-Gatter verbundenen Ausgang an der durch den Pfeil angezeigten Stelle. Wähle die"
  //: /line:"<font color=red2>Leitungssegment hinzufügen</font> Option aus dem Popup Menu. Jetzt kann die neu erzeugte Leitung"
  //: /line:"zu den Puffereingängen hinzugefügt werden."
  //: /line:""
  //: /end
  _GGAND2 #(6) g5 (.I0(w7), .I1(w9), .Z(w17));   //: @(106,140) /sn:0 /anc:1 /w:[ 1 1 1 ] /eb:0
  _GGBUF #(4) g23 (.I(w20), .Z(w21));   //: @(311,242) /sn:0 /anc:1 /w:[ 0 0 ]

endmodule
//: /netlistEnd

//: /netlistBegin PAGE5
module PAGE5();
//: interface  /sz:(40, 40) /bd:[ ] /pd: 0 /pi: 0 /pe: 0 /pp: 1
wire w24;    //: /sn:0 {0}(319,194)(254,194){1}
//: {2}(252,192)(252,134)(318,134){3}
//: {4}(250,194)(187,194){5}
wire w23;    //: /sn:0 {0}(309,247)(319,247){1}
wire w25;    //: /sn:0 {0}(334,134)(344,134){1}
wire w22;    //: /sn:0 {0}(156,196)(166,196){1}
wire w10;    //: /sn:0 {0}(156,191)(166,191){1}
wire w27;    //: /sn:0 {0}(335,247)(345,247){1}
wire w26;    //: /sn:0 {0}(335,194)(345,194){1}
//: enddecls

  //: comment g4 @(10,310) /sn:0 /anc:1
  //: /line:"<tutorial-navigation>"
  //: /end
  _GGBUF #(4) g28 (.I(w24), .Z(w26));   //: @(325,194) /sn:0 /w:[ 0 0 ]
  //: joint g27 (w24) @(252, 194) /w:[ 1 2 4 -1 ]
  //: comment g9 @(10,9) /anc:1
  //: /line:"<h3>Leitungen editieren</h3> <b>(Erzeugen von Lötstellen)</b>"
  //: /line:""
  //: /line:"Wähle das <img src=\"mov_curs.gif\" bgcolor=gray> Werkzeug und ziehe den Eingang des Inverters in der Schaltung unten"
  //: /line:"nahe an die Lötstelle in der Mitte des AND-Gatterausgangssegments und lasse los. Die Leitung sollte sich"
  //: /line:"von selbst mit der Lötstelle verbinden."
  //: /line:""
  //: /end
  _GGNBUF #(2) g29 (.I(w23), .Z(w27));   //: @(325,247) /sn:0 /w:[ 1 0 ]
  _GGAND2 #(6) g25 (.I0(w10), .I1(w22), .Z(w24));   //: @(177,194) /sn:0 /w:[ 1 1 5 ] /eb:0
  _GGBUF #(4) g26 (.I(w24), .Z(w25));   //: @(324,134) /sn:0 /w:[ 3 0 ]

endmodule
//: /netlistEnd

//: /netlistBegin PAGE4
module PAGE4();
//: interface  /sz:(40, 40) /bd:[ ] /pd: 0 /pi: 0 /pe: 0 /pp: 1
wire w6;    //: /sn:0 {0}(325,245)(373,245){1}
//: {2}(377,245)(468,245){3}
//: {4}(375,243)(375,163)(436,163){5}
wire w7;    //: /sn:0 {0}(421,158)(436,158){1}
wire w4;    //: /sn:0 {0}(289,247)(304,247){1}
wire w3;    //: /sn:0 {0}(61,247)(114,247){1}
//: {2}(118,247)(201,247){3}
//: {4}(116,245)(116,161)(169,161){5}
wire w0;    //: /sn:0 {0}(289,242)(304,242){1}
wire w1;    //: /sn:0 {0}(30,244)(40,244){1}
wire w8;    //: /sn:0 {0}(190,159)(200,159){1}
wire w2;    //: /sn:0 {0}(30,249)(40,249){1}
wire w10;    //: /sn:0 {0}(457,161)(472,161){1}
wire w5;    //: /sn:0 {0}(159,156)(169,156){1}
//: enddecls

  //: comment g4 @(10,310) /sn:0 /anc:1
  //: /line:"<tutorial-navigation>"
  //: /end
  //: joint g3 (w3) @(116, 247) /w:[ 2 4 1 -1 ]
  _GGAND2 #(6) g2 (.I0(w5), .I1(w3), .Z(w8));   //: @(180,159) /sn:0 /anc:1 /w:[ 1 5 0 ] /eb:0
  _GGOR2 #(6) g1 (.I0(w0), .I1(w4), .Z(w6));   //: @(315,245) /sn:0 /anc:1 /w:[ 1 1 0 ]
  //: comment g11 @(363,264) /sn:0 /anc:1
  //: /line:"OR-Gatterschaltung"
  //: /end
  //: comment g10 @(70,264) /sn:0 /anc:1
  //: /line:"AND-Gatterschaltung"
  //: /end
  //: joint g6 (w6) @(375, 245) /w:[ 2 4 1 -1 ]
  //: comment g7 @(413,213) /sn:0 /anc:1
  //: /line:"<font color=blue4 size=7>&dArr;</font>"
  //: /end
  //: comment g9 @(10,10) /anc:1
  //: /line:"<h3>Leitungen editieren</h3> <b>(Automatisches Aufräumen von Leitungen)</b>"
  //: /line:""
  //: /line:"Wähle das <img src=\"cut_curs.gif\" bgcolor=gray> Werkzeug und schneide die Leitung in der AND-Schaltung an der durch den Pfeil bezeichneten Stelle durch."
  //: /line:"TkGate wird automatisch die Leitungsverbindung lösen. Schneide dann auch in der OR-Schaltung"
  //: /line:"an der durch den Pfeil bezeichneten Stelle die Leitung ab. Das freie Leitungsende wird automatisch gelöscht."
  //: /line:""
  //: /end
  _GGOR2 #(6) g5 (.I0(w7), .I1(w6), .Z(w10));   //: @(447,161) /sn:0 /anc:1 /w:[ 1 5 0 ]
  _GGAND2 #(6) g0 (.I0(w1), .I1(w2), .Z(w3));   //: @(51,247) /sn:0 /anc:1 /w:[ 1 1 0 ] /eb:0
  //: comment g12 @(123,184) /sn:0 /anc:1
  //: /line:"<font color=blue4 size=7>&lArr;</font>"
  //: /end

endmodule
//: /netlistEnd

//: /netlistBegin PAGE2
module PAGE2();
//: interface  /sz:(40, 40) /bd:[ ] /pd: 0 /pi: 0 /pe: 0 /pp: 1
wire w14;    //: /sn:0 {0}(292,263)(226,263)(226,200)(245,200)(245,140)(178,140){1}
wire w16;    //: /sn:0 {0}(313,266)(323,266){1}
wire w15;    //: /sn:0 {0}(282,268)(292,268){1}
wire w11;    //: /sn:0 {0}(147,137)(157,137){1}
wire w12;    //: /sn:0 {0}(147,142)(157,142){1}
//: enddecls

  //: comment g4 @(10,310) /sn:0 /anc:1
  //: /line:"<tutorial-navigation>"
  //: /end
  _GGAND2 #(6) g11 (.I0(w14), .I1(w15), .Z(w16));   //: @(303,266) /sn:0 /w:[ 0 1 0 ] /eb:0
  _GGAND2 #(6) g10 (.I0(w11), .I1(w12), .Z(w14));   //: @(168,140) /sn:0 /w:[ 1 1 1 ] /eb:0
  //: comment g9 @(10,10) /anc:1
  //: /line:"<h3>Leitungen editieren</h3> <b>(Anziehungskraft)</b>"
  //: /line:""
  //: /line:"Klicke in der Schaltung unten auf die Leitung an der Stelle mit dem Pfeil und ziehe sie solange nach links"
  //: /line:"bis sie mit dem anderen vertikalen Element nahezu auf Linie ist. Wird die Leitung losgelassen, führt \"Anziehungskraft\" dazu,"
  //: /line:"daß die beiden vertikalen Segmente zu einem einzigen Segment einrasten."
  //: /line:""
  //: /end
  //: comment g0 @(500,122) /sn:0 /anc:1
  //: /line:"<font color=green4>Hinweis: Die automatische Bereinigung"
  //: /line:"beim Editieren von Leitungen kann durch"
  //: /line:"Halten der Alt Taste während der Bewegung"
  //: /line:"verhindert werden.</font>"
  //: /end
  //: comment g12 @(252,158) /sn:0 /anc:1
  //: /line:"<font color=blue4 size=7>&lArr;</font>"
  //: /end

endmodule
//: /netlistEnd

//: /netlistBegin PAGE10
module PAGE10();
//: interface  /sz:(40, 40) /bd:[ ] /pd: 0 /pi: 0 /pe: 0 /pp: 1
reg crete;    //: {0}(7:215,136)(359,136)(359,189){1}
//: {2}(361,191)(416,191){3}
//: {4}(359,193)(359,203){5}
reg ithaca;    //: {0}(18:215,183)(259,183){1}
//: {2}(263,183)(271,183){3}
//: {4}(261,185)(261,238)(278,238){5}
reg toledo;    //: {0}(-21:213,243)(254,243){1}
//: {2}(258,243)(278,243){3}
//: {4}(256,241)(256,188)(271,188){5}
wire styx;    //: {0}(99:355,275)(355,295){1}
wire athens;    //: {0}(416,186)(356,186){1}
//: {2}(71:352,186)(292,186){3}
//: {4}(354,188)(354,203){5}
wire pheneos;    //: {0}(76:357,224)(357,254){1}
wire olympus;    //: {0}(-15:437,189)(506,189){1}
wire delphi;    //: {0}(-22:299,241)(352,241)(352,254){1}
//: enddecls

  //: comment g4 @(10,310) /sn:0 /anc:1
  //: /line:"<tutorial-navigation>"
  //: /end
  //: LED g37 (olympus) @(513,189) /sn:0 /R:3 /w:[ 1 ] /type:0
  _GGXOR2 #(8) Athena (.I0(ithaca), .I1(toledo), .Z(athens));   //: @(282,186) /w:[ 3 5 3 ] /eb:0
  _GGNAND2 #(4) Hermes (.I0(athens), .I1(crete), .Z(pheneos));   //: @(357,214) /R:3 /w:[ 5 5 0 ] /eb:0
  _GGNAND2 #(4) Hades (.I0(delphi), .I1(pheneos), .Z(styx));   //: @(355,265) /R:3 /w:[ 1 1 0 ] /eb:0
  _GGXOR2 #(8) Zeus (.I0(athens), .I1(crete), .Z(olympus));   //: @(427,189) /w:[ 0 3 0 ] /eb:0
  //: joint g32 (athens) @(354, 186) /w:[ 1 -1 2 4 ]
  //: comment g9 @(10,10) /anc:1
  //: /line:"<h3>Leitungen editieren</h3> <b>(Suchen)</b>"
  //: /line:""
  //: /line:"In der ganzen Schaltung kann mit einem Namen nach einer bestimmten Leitung oder einem bestimmten Gatter mit dem Suchwerkzeug"
  //: /line:"gesucht werden. Klicke zum Öffnen auf das <img src=edit_find.gif bgcolor=gray> Werkzeug. Die Liste der Treffer wird dynamisch angepaßt, während der Suchstring"
  //: /line:"getippt wird. Mit einem Doppelklick auf einen Eintrag in den <font color=red2>Suchergebnissen</font> gelangt man zu diesem Objekt."
  //: /line:"Probiere das Suchwerkzeug für einige der Leitungen und Gatter in der untenstehenden Schaltung aus."
  //: /line:""
  //: /end
  //: joint g29 (ithaca) @(261, 183) /w:[ 2 -1 1 4 ]
  //: SWITCH Bob (toledo) @(196,243) /w:[ 0 ] /st:0 /dn:0
  //: SWITCH Thesus (crete) @(198,136) /w:[ 0 ] /st:0 /dn:0
  _GGNAND2 #(4) Apollo (.I0(ithaca), .I1(toledo), .Z(delphi));   //: @(289,241) /w:[ 5 3 0 ] /eb:0
  //: SWITCH Odyseus (ithaca) @(198,183) /w:[ 0 ] /st:0 /dn:0
  //: comment g0 @(588,148) /sn:0
  //: /line:"<font color=green4>Hinweis: Das Suchwerkzeug schaut"
  //: /line:"in allen Modulen der Schaltung"
  //: /line:"nach dem Suchstring. Suche nach"
  //: /line:"einem Gatter namens \"hari\".</font>"
  //: /end
  //: joint g33 (crete) @(359, 191) /w:[ 2 1 -1 4 ]
  //: joint g30 (toledo) @(256, 243) /w:[ 2 4 1 -1 ]

endmodule
//: /netlistEnd

