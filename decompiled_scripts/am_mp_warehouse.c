#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	float fLocal_87 = 0f;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	float fLocal_112 = 0f;
	var uLocal_113 = 0;
	char* sLocal_114 = NULL;
	int iLocal_115 = 0;
	struct<3> Local_116 = { 0, 0, 0 } ;
	char* sLocal_119 = NULL;
	char* sLocal_120 = NULL;
	char* sLocal_121 = NULL;
	char* sLocal_122 = NULL;
	char* sLocal_123 = NULL;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	struct<6> Local_129 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_135 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_141 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_147 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_153 = { 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_159 = { 0, 0, 0, 0 } ;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	struct<6> Local_165 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_171 = { 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_177 = { 0, 0, 0, 0 } ;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	struct<6> Local_183 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_189 = { 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_195 = { 0, 0, 0, 0 } ;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	struct<4> Local_201 = { 0, 0, 0, 0 } ;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	struct<6> Local_207 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_213 = { 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_219 = { 0, 0, 0, 0 } ;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	struct<6> Local_225 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_231 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	struct<700> Local_239 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0 } ;
	int iLocal_939 = 0;
	var uLocal_940 = 0;
	struct<168> Local_941 = { 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86 } ;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	struct<18> Local_1195[32];
	struct<651> Local_1772 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2423 = 0;
	struct<12> Local_2424 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 2;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	struct<3> Local_2443[2];
	struct<3> ScriptParam_0 = { 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_87 = ((0.05f + 0.275f) - 0.01f);
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	fLocal_98 = 3f;
	fLocal_99 = 0f;
	fLocal_100 = 2f;
	fLocal_101 = 100f;
	fLocal_112 = 0.5f;
	if (unk_0x17CC0D5008835470())
	{
		func_389(&ScriptParam_0);
	}
	else
	{
		func_380();
	}
	while (true)
	{
		func_379();
		if (func_369())
		{
			func_380();
		}
		if (func_368(ScriptParam_0.f_2))
		{
			func_380();
		}
		func_58();
		if (unk_0x587E5997B76F47FE())
		{
			func_1();
		}
	}
}

void func_1()
{
	func_4(&(Local_941.f_113), &(Local_1195[Local_239.f_9 /*18*/].f_1), &Local_239, &Global_3932160);
	func_2(&(Local_1195[iLocal_939 /*18*/].f_17), &(Local_941.f_167), &iLocal_939);
}

void func_2(var uParam0, var uParam1, int iParam2)
{
	if (*uParam0 > 0)
	{
		if ((*uParam1)[*uParam0] == 0)
		{
			if (func_3(unk_0x801C03D92F1C6755(*iParam2), 1, 1))
			{
				unk_0xE27C8E42A97895CF(uParam1[*uParam0], *iParam2);
			}
		}
	}
	iParam2->f_1 = 0;
	iParam2->f_1 = 0;
	while (iParam2->f_1 < 86)
	{
		if ((*uParam1)[iParam2->f_1] != 0)
		{
			if (unk_0x7DA173D4FD42F36B((*uParam1)[iParam2->f_1], *iParam2))
			{
				if (!func_3(unk_0x801C03D92F1C6755(*iParam2), 0, 1))
				{
					unk_0x99BCB15F954AF579(uParam1[iParam2->f_1], *iParam2);
				}
				else
				{
					if (!unk_0x605885F0A8AC6672(unk_0x801C03D92F1C6755(*iParam2)))
					{
						unk_0x99BCB15F954AF579(uParam1[iParam2->f_1], *iParam2);
					}
					if (*uParam0 != iParam2->f_1)
					{
						unk_0x99BCB15F954AF579(uParam1[iParam2->f_1], *iParam2);
					}
				}
			}
		}
		iParam2->f_1++;
	}
	*iParam2++;
	if (*iParam2 >= 32)
	{
		*iParam2 = 0;
	}
}

int func_3(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7868479D9B6694C0(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428549.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_4(var uParam0, var uParam1, var uParam2, var uParam3)
{
	bool bVar0;
	
	if (Global_1722818 == 1)
	{
		if (uParam0->f_50 != 1)
		{
			func_57(uParam0, 1, 0);
		}
		if (uParam0->f_1 != 27)
		{
			uParam0->f_1 = 27;
		}
		Global_1722818 = 0;
	}
	switch (uParam0->f_50)
	{
		case 0:
			uParam0->f_53 = uParam2->f_699;
			bVar0 = false;
			if (((((func_56(uParam3->f_31) || func_55(uParam3->f_31, -1)) || func_54(uParam3->f_31)) || func_53(uParam3->f_31)) || func_50(unk_0xE0BDAFA1A39552D6())) || uParam0->f_49)
			{
				bVar0 = true;
				if (uParam0->f_4 == 1)
				{
					if (func_34(uParam0, uParam3))
					{
						bVar0 = false;
					}
				}
				else
				{
					func_27(uParam0, uParam3);
				}
			}
			if (func_56(uParam3->f_31))
			{
			}
			if (!bVar0)
			{
				if (!Global_1587800)
				{
					if (uParam0->f_49 == 0)
					{
						if (unk_0x605885F0A8AC6672(unk_0x801C03D92F1C6755(uParam2->f_9)))
						{
							if (uParam2->f_698 == unk_0x801C03D92F1C6755(uParam2->f_9))
							{
								if (unk_0x7DA173D4FD42F36B(*uParam1, 1))
								{
									uParam0->f_1 = uParam1->f_7;
									if (unk_0x7DA173D4FD42F36B(*uParam1, 2) && !Global_1587800)
									{
										func_57(uParam0, 1, 0);
									}
									else
									{
										func_57(uParam0, 2, 0);
									}
								}
							}
							else if (uParam2->f_698 > -1)
							{
							}
						}
						else if (uParam2->f_9 > -1 && unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(uParam2->f_9)))
						{
						}
					}
					else if (uParam2->f_698 == unk_0x801C03D92F1C6755(uParam2->f_9))
					{
						if (unk_0x605885F0A8AC6672(unk_0x801C03D92F1C6755(uParam2->f_9)))
						{
							if (unk_0x7DA173D4FD42F36B(*uParam1, 1))
							{
								uParam0->f_1 = uParam1->f_7;
								if (unk_0x7DA173D4FD42F36B(*uParam1, 2) && !Global_1587800)
								{
									func_57(uParam0, 1, 0);
								}
								else
								{
									func_57(uParam0, 2, 0);
								}
							}
						}
						else
						{
							uParam0->f_1 = 11;
							func_57(uParam0, 2, 0);
						}
					}
					else if (uParam2->f_698 > -1)
					{
					}
				}
				else
				{
					uParam0->f_1 = 0;
					func_57(uParam0, 2, 0);
				}
			}
			break;
		
		case 1:
			if ((unk_0x7DA173D4FD42F36B(uParam1->f_3, 1) && !unk_0x7DA173D4FD42F36B(*uParam1, 0)) || Global_1587800)
			{
				func_57(uParam0, 2, 0);
			}
			else
			{
				func_23(uParam0, uParam1, uParam2, 0);
			}
			break;
		
		case 2:
			if ((((unk_0x7DA173D4FD42F36B(uParam1->f_3, 0) && !unk_0x7DA173D4FD42F36B(*uParam1, 0)) || unk_0x7DA173D4FD42F36B(*uParam2, 8)) && !Global_1587800) || func_22())
			{
				func_57(uParam0, 1, 0);
			}
			break;
	}
	if ((((!func_55(uParam3->f_31, -1) && !func_54(uParam3->f_31)) && !func_56(uParam3->f_31)) && !func_53(uParam3->f_31)) && !func_50(unk_0xE0BDAFA1A39552D6()))
	{
		switch (uParam0->f_52)
		{
			case 0:
				if (!Global_1587800)
				{
					if (func_3(unk_0x801C03D92F1C6755(uParam2->f_9), 0, 0))
					{
						if (unk_0x605885F0A8AC6672(unk_0x801C03D92F1C6755(uParam2->f_9)))
						{
							if (unk_0x5AC268491EB42198() == unk_0xBD1E178ABA0E03F1(unk_0x801C03D92F1C6755(uParam2->f_9)))
							{
								if (uParam3->f_33 == 10)
								{
									if (unk_0x7DA173D4FD42F36B(*uParam1, 2) && !Global_1587800)
									{
										func_21(uParam0, 3, 0);
									}
									else
									{
										func_21(uParam0, 4, 0);
									}
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_1 = 0;
					func_21(uParam0, 4, 0);
				}
				break;
			
			case 3:
				if (unk_0x7DA173D4FD42F36B(uParam1->f_4, 5) || Global_1587800)
				{
					func_21(uParam0, 4, 0);
				}
				else
				{
					func_23(uParam0, uParam1, uParam2, 0);
				}
				if (func_19())
				{
					func_5(uParam1, uParam2);
				}
				break;
			
			case 4:
				if ((unk_0x7DA173D4FD42F36B(uParam1->f_4, 4) && !Global_1587800) || func_22())
				{
					func_21(uParam0, 3, 0);
				}
				break;
			}
	}
	switch (uParam0->f_51)
	{
		case 0:
			if (!Global_1587800)
			{
				if (func_3(unk_0x801C03D92F1C6755(uParam2->f_9), 0, 0))
				{
					if (unk_0x605885F0A8AC6672(unk_0x801C03D92F1C6755(uParam2->f_9)))
					{
						if (unk_0x5AC268491EB42198() == unk_0xBD1E178ABA0E03F1(unk_0x801C03D92F1C6755(uParam2->f_9)))
						{
							if (unk_0x7DA173D4FD42F36B(*uParam1, 1))
							{
								uParam0->f_2 = uParam1->f_8;
								if (unk_0x7DA173D4FD42F36B(*uParam1, 4) && !Global_1587800)
								{
									func_57(uParam0, 1, 1);
								}
								else
								{
									func_57(uParam0, 2, 1);
								}
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_2 = 0;
				func_57(uParam0, 2, 1);
			}
			break;
		
		case 1:
			if ((unk_0x7DA173D4FD42F36B(uParam1->f_3, 1) && unk_0x7DA173D4FD42F36B(*uParam1, 0)) || Global_1587800)
			{
				func_57(uParam0, 2, 1);
			}
			else
			{
				func_23(uParam0, uParam1, uParam2, 1);
			}
			break;
		
		case 2:
			if ((unk_0x7DA173D4FD42F36B(uParam1->f_3, 0) && unk_0x7DA173D4FD42F36B(*uParam1, 0)) && !Global_1587800)
			{
				func_57(uParam0, 1, 1);
			}
			break;
	}
	uParam2->f_9++;
	if (uParam2->f_9 >= 32)
	{
		uParam2->f_9 = 0;
	}
}

void func_5(var uParam0, var uParam1)
{
	Global_25418 = 0;
	func_8(uParam1);
	unk_0x99BCB15F954AF579(uParam0, 15);
	func_6(&(uParam1->f_1));
	func_6(&(uParam1->f_2));
	*uParam1 = 0;
	uParam1->f_3 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_10 = -1;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_6(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_7(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36442[iVar0 /*32*/])
		{
			Global_36442[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_7(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36442[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_8(var uParam0)
{
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		unk_0x9A12E803B1184012(unk_0x06736567F820A39E());
	}
	if (unk_0x7DA173D4FD42F36B(*uParam0, 10))
	{
		unk_0x8D72E02348CB74D2("MP_APT_STRIPPER_SCENE");
		unk_0x99BCB15F954AF579(uParam0, 10);
	}
	unk_0x0E4537BE1D04DAC7(&(uParam0->f_697));
	unk_0x99BCB15F954AF579(&Global_2359301, 15);
	func_18();
	func_16();
	func_9();
}

void func_9()
{
	func_10(0);
}

void func_10(bool bParam0)
{
	if (bParam0)
	{
		func_15();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0xE27C8E42A97895CF(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_14(0))
		{
			func_11(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_11(int iParam0)
{
	if (Global_14571)
	{
		func_13(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0xE27C8E42A97895CF(&Global_2284, 16);
	}
	if (unk_0x1FB728BC68674B71())
	{
		unk_0xC48487554D051523(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 30);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 30);
	}
	if (!func_12())
	{
		Global_14413.f_1 = 3;
	}
}

int func_12()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_14(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3919EC2F8BB0A522(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x362168BE71696AF1(Global_14350);
		}
		else
		{
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
}

int func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x7DA173D4FD42F36B(Global_2283, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_15()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_16()
{
	func_17(unk_0xE0BDAFA1A39552D6(), 0);
}

void func_17(int iParam0, int iParam1)
{
	Global_2418529[iParam0 /*313*/].f_64.f_3 = iParam1;
}

void func_18()
{
	Global_2428549.f_648.f_10 = 0;
}

int func_19()
{
	if (func_20() == 1 || func_20() == 4)
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	return Global_1312466.f_18;
}

void func_21(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_51 = iParam1;
	}
	else
	{
		uParam0->f_52 = iParam1;
	}
}

bool func_22()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_180 != 0;
}

void func_23(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = false;
	bVar1 = false;
	bVar3 = false;
	if (bParam3)
	{
		iVar2 = uParam0->f_2;
		if (!unk_0x7DA173D4FD42F36B(*uParam2, 3) || unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), uParam2->f_8) > 1000)
		{
			bVar0 = true;
			if (unk_0x7DA173D4FD42F36B(*uParam1, 0))
			{
				if (uParam1->f_9 == iVar2)
				{
					bVar3 = true;
				}
			}
		}
	}
	else
	{
		iVar2 = uParam0->f_1;
		if (!unk_0x7DA173D4FD42F36B(*uParam2, 1) || unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), uParam2->f_7) > 1000)
		{
			bVar0 = true;
			if (!unk_0x7DA173D4FD42F36B(*uParam1, 0))
			{
				if (uParam1->f_9 == iVar2)
				{
					bVar3 = true;
				}
			}
		}
	}
	if (bVar0)
	{
		if (bVar3)
		{
			if (unk_0x7DA173D4FD42F36B(uParam1->f_3, 2) || unk_0x7DA173D4FD42F36B(uParam1->f_4, 2))
			{
				func_26(uParam0, bParam3);
				bVar1 = true;
			}
			else if (unk_0x7DA173D4FD42F36B(uParam1->f_3, 3) || unk_0x7DA173D4FD42F36B(uParam1->f_4, 3))
			{
				func_24(uParam0, bParam3);
				bVar1 = true;
			}
		}
	}
	if (bVar1)
	{
		if (bParam3)
		{
			iVar2 = uParam0->f_2;
		}
		else
		{
			iVar2 = uParam0->f_1;
		}
		if (bParam3)
		{
			uParam2->f_8 = unk_0x201D90648B2AE3CE();
			unk_0xE27C8E42A97895CF(uParam2, 3);
		}
		else
		{
			uParam2->f_7 = unk_0x201D90648B2AE3CE();
			unk_0xE27C8E42A97895CF(uParam2, 1);
		}
	}
}

void func_24(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
	}
	iVar1 = iVar0;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 == 0)
	{
		iVar1 = (iVar1 - 1);
		if (iVar1 < 0)
		{
			iVar1 = (unk_0x6897284770644E60() - 1);
		}
		if (iVar1 == iVar0)
		{
			iVar3 = 1;
		}
		else
		{
			iVar2 = iVar1;
			iVar3 = 1;
		}
	}
	if (iVar2 != -1)
	{
		func_25(uParam0, bParam1, iVar2);
	}
}

void func_25(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		uParam0->f_2 = iParam2;
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
}

void func_26(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
	}
	iVar1 = iVar0;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 == 0)
	{
		iVar1++;
		if (iVar1 > (unk_0x6897284770644E60() - 1))
		{
			iVar1 = 0;
		}
		if (iVar1 == iVar0)
		{
			iVar3 = 1;
		}
		else
		{
			iVar2 = iVar1;
			iVar3 = 1;
		}
	}
	if (iVar2 != -1)
	{
		func_25(uParam0, bParam1, iVar2);
	}
}

void func_27(var uParam0, var uParam1)
{
	if (uParam0->f_4 == 0)
	{
		if (func_56(uParam1->f_31) && !uParam0->f_49)
		{
			if (func_28(unk_0x2A5ED1AA56D1D7EA(false) + 4, 0, 1))
			{
				unk_0x1E2BF4457AC05E16(unk_0x2A5ED1AA56D1D7EA(false) + 4);
				uParam0->f_4 = 1;
			}
		}
		else if (uParam0->f_49)
		{
			if (func_28(unk_0x2A5ED1AA56D1D7EA(false) + 4, 0, 1))
			{
				unk_0x1E2BF4457AC05E16(unk_0x2A5ED1AA56D1D7EA(false) + 4);
				uParam0->f_4 = 1;
			}
		}
		else if (func_55(uParam1->f_31, -1))
		{
			if (func_28(unk_0x2A5ED1AA56D1D7EA(false) + 6, 0, 1))
			{
				unk_0x1E2BF4457AC05E16(unk_0x2A5ED1AA56D1D7EA(false) + 6);
				uParam0->f_4 = 1;
			}
		}
		else if (func_54(uParam1->f_31))
		{
			if (func_28(unk_0x2A5ED1AA56D1D7EA(false) + 3, 0, 1))
			{
				unk_0x1E2BF4457AC05E16(unk_0x2A5ED1AA56D1D7EA(false) + 3);
				uParam0->f_4 = 1;
			}
		}
		else if (func_53(uParam1->f_31) || func_50(unk_0xE0BDAFA1A39552D6()))
		{
			if (func_28(unk_0x2A5ED1AA56D1D7EA(false) + 1, 0, 1))
			{
				unk_0x1E2BF4457AC05E16(unk_0x2A5ED1AA56D1D7EA(false) + 1);
				uParam0->f_4 = 1;
			}
		}
	}
}

bool func_28(int iParam0, bool bParam1, bool bParam2)
{
	return func_29(2, iParam0, 1, bParam1, bParam2);
}

int func_29(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7DA173D4FD42F36B(Global_1348828, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_33(iParam0) - func_32(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_32(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_33(iParam0) - func_31(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_32(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_33(iParam0) - func_32(iParam0, 1));
		}
		if (!bParam4 && Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] != 3)
		{
			iVar1 = (iVar1 - func_30(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348828.f_1;
			break;
		
		case 1:
			return Global_1348828.f_2;
			break;
		
		case 2:
			return Global_1348828.f_3;
			break;
	}
	return 0;
}

int func_32(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xE0BDAFA1A39552D6();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x992E302DC36A4251())
			{
				return Global_2418529[iVar0 /*313*/].f_207;
			}
			else
			{
				return unk_0x5C49D3B9A41B0F55(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x992E302DC36A4251())
			{
				return Global_2418529[iVar0 /*313*/].f_208;
			}
			else
			{
				return unk_0xF4E3DD2031F77659(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x992E302DC36A4251())
			{
				return Global_2418529[iVar0 /*313*/].f_209;
			}
			else
			{
				return unk_0x2A5ED1AA56D1D7EA(!bParam1);
			}
			break;
	}
	return 0;
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348836;
			break;
		
		case 1:
			return Global_1348837;
			break;
		
		case 2:
			return Global_1348838;
			break;
	}
	return 0;
}

int func_34(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	struct<3> Var12;
	struct<3> Var18;
	struct<4> Var24;
	struct<3> Var30;
	struct<4> Var36;
	struct<4> Var42;
	struct<3> Var48;
	struct<3> Var54;
	struct<3> Var60;
	struct<3> Var66;
	
	if (func_56(uParam1->f_31) && !uParam0->f_49)
	{
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_5))
		{
			if (func_49(joaat("prop_boombox_01")))
			{
				if (unk_0xC25F5313AD214090(0, 0, 1, 0))
				{
					if (func_48(unk_0xE0BDAFA1A39552D6(), 0) >= 0)
					{
						func_46(func_48(unk_0xE0BDAFA1A39552D6(), 0), 421, &Var0, 0);
						uParam0->f_9 = { Var0 };
						uParam0->f_5 = unk_0xE0E063A077171A2A(unk_0x690B17DE4159577D(joaat("prop_boombox_01"), uParam0->f_9, 1, 1, 0));
						unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bar", 1);
						unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Bar", unk_0x4C4151C3DEC199DC(uParam0->f_5));
						unk_0xB2C123C54D84E6A7(unk_0x4C4151C3DEC199DC(uParam0->f_5), 1);
						unk_0x93F4FB97D1F2E7A1(unk_0x4C4151C3DEC199DC(uParam0->f_5), true);
						unk_0xE110948ECF59689C(unk_0x4C4151C3DEC199DC(uParam0->f_5), false, 0);
						unk_0x13B79909077BBD84(unk_0x4C4151C3DEC199DC(uParam0->f_5), false, 0);
						unk_0xC06CC43874774FA5(unk_0x4C4151C3DEC199DC(uParam0->f_5), 1);
					}
				}
			}
		}
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_6))
		{
			if (func_49(joaat("prop_boombox_01")))
			{
				if (unk_0xC25F5313AD214090(0, 0, 1, 0))
				{
					if (func_48(unk_0xE0BDAFA1A39552D6(), 0) >= 0)
					{
						func_46(func_48(unk_0xE0BDAFA1A39552D6(), 0), 420, &Var6, 0);
						uParam0->f_12 = { Var6 };
						uParam0->f_6 = unk_0xE0E063A077171A2A(unk_0x690B17DE4159577D(joaat("prop_boombox_01"), uParam0->f_12, 1, 1, 0));
						unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bedroom", 1);
						unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Bedroom", unk_0x4C4151C3DEC199DC(uParam0->f_6));
						unk_0xB2C123C54D84E6A7(unk_0x4C4151C3DEC199DC(uParam0->f_6), 1);
						unk_0x93F4FB97D1F2E7A1(unk_0x4C4151C3DEC199DC(uParam0->f_6), true);
						unk_0xE110948ECF59689C(unk_0x4C4151C3DEC199DC(uParam0->f_6), false, 0);
						unk_0x13B79909077BBD84(unk_0x4C4151C3DEC199DC(uParam0->f_6), false, 0);
						unk_0xC06CC43874774FA5(unk_0x4C4151C3DEC199DC(uParam0->f_6), 1);
					}
				}
			}
		}
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_7))
		{
			if (func_49(joaat("prop_boombox_01")))
			{
				if (unk_0xC25F5313AD214090(0, 0, 1, 0))
				{
					if (func_48(unk_0xE0BDAFA1A39552D6(), 0) >= 0)
					{
						func_46(func_48(unk_0xE0BDAFA1A39552D6(), 0), 586, &Var12, 0);
						uParam0->f_15 = { Var12 };
						uParam0->f_7 = unk_0xE0E063A077171A2A(unk_0x690B17DE4159577D(joaat("prop_boombox_01"), uParam0->f_15, 1, 1, 0));
						unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bedroom_02", 1);
						unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Bedroom_02", unk_0x4C4151C3DEC199DC(uParam0->f_7));
						unk_0xB2C123C54D84E6A7(unk_0x4C4151C3DEC199DC(uParam0->f_7), 1);
						unk_0x93F4FB97D1F2E7A1(unk_0x4C4151C3DEC199DC(uParam0->f_7), true);
						unk_0xE110948ECF59689C(unk_0x4C4151C3DEC199DC(uParam0->f_7), false, 0);
						unk_0x13B79909077BBD84(unk_0x4C4151C3DEC199DC(uParam0->f_7), false, 0);
						unk_0xC06CC43874774FA5(unk_0x4C4151C3DEC199DC(uParam0->f_7), 1);
					}
				}
			}
		}
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_8))
		{
			if (func_49(joaat("prop_boombox_01")))
			{
				if (unk_0xC25F5313AD214090(0, 0, 1, 0))
				{
					if (func_48(unk_0xE0BDAFA1A39552D6(), 0) >= 0)
					{
						func_46(func_48(unk_0xE0BDAFA1A39552D6(), 0), 585, &Var18, 0);
						uParam0->f_18 = { Var18 };
						uParam0->f_8 = unk_0xE0E063A077171A2A(unk_0x690B17DE4159577D(joaat("prop_boombox_01"), uParam0->f_18, 1, 1, 0));
						unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bedroom_03", 1);
						unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Bedroom_03", unk_0x4C4151C3DEC199DC(uParam0->f_8));
						unk_0xB2C123C54D84E6A7(unk_0x4C4151C3DEC199DC(uParam0->f_8), 1);
						unk_0x93F4FB97D1F2E7A1(unk_0x4C4151C3DEC199DC(uParam0->f_8), true);
						unk_0xE110948ECF59689C(unk_0x4C4151C3DEC199DC(uParam0->f_8), false, 0);
						unk_0x13B79909077BBD84(unk_0x4C4151C3DEC199DC(uParam0->f_8), false, 0);
						unk_0xC06CC43874774FA5(unk_0x4C4151C3DEC199DC(uParam0->f_8), 1);
					}
				}
			}
		}
	}
	else if (uParam0->f_49)
	{
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_24))
		{
			if (func_49(joaat("prop_boombox_01")))
			{
				if (unk_0xC25F5313AD214090(0, 0, 1, 0))
				{
					func_46(uParam0->f_3, 550, &Var24, 0);
					uParam0->f_37 = { Var24 };
					uParam0->f_24 = unk_0xE0E063A077171A2A(unk_0x690B17DE4159577D(joaat("prop_boombox_01"), uParam0->f_37, 1, 1, 0));
					unk_0x5C5B23A2682A1514(unk_0xE65C345C8E8CDA4A(uParam0->f_24), Var24.f_3, 2, 1);
					unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_01", 0);
					unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Exterior_01", unk_0x4C4151C3DEC199DC(uParam0->f_24));
					unk_0xB2C123C54D84E6A7(unk_0x4C4151C3DEC199DC(uParam0->f_24), 1);
					unk_0x93F4FB97D1F2E7A1(unk_0x4C4151C3DEC199DC(uParam0->f_24), true);
					unk_0xC06CC43874774FA5(unk_0x4C4151C3DEC199DC(uParam0->f_24), 1);
				}
			}
		}
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_25))
		{
			if (func_49(joaat("prop_boombox_01")))
			{
				if (unk_0xC25F5313AD214090(0, 0, 1, 0))
				{
					func_46(uParam0->f_3, 551, &Var30, 0);
					uParam0->f_40 = { Var30 };
					uParam0->f_25 = unk_0xE0E063A077171A2A(unk_0x690B17DE4159577D(joaat("prop_boombox_01"), uParam0->f_40, 1, 1, 0));
					unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_02", 0);
					unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Exterior_02", unk_0x4C4151C3DEC199DC(uParam0->f_25));
					unk_0xB2C123C54D84E6A7(unk_0x4C4151C3DEC199DC(uParam0->f_25), 1);
					unk_0x93F4FB97D1F2E7A1(unk_0x4C4151C3DEC199DC(uParam0->f_25), true);
					unk_0xE110948ECF59689C(unk_0x4C4151C3DEC199DC(uParam0->f_25), false, 0);
					unk_0x13B79909077BBD84(unk_0x4C4151C3DEC199DC(uParam0->f_25), false, 0);
					unk_0xC06CC43874774FA5(unk_0x4C4151C3DEC199DC(uParam0->f_25), 1);
				}
			}
		}
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_26))
		{
			if (func_49(joaat("prop_boombox_01")))
			{
				if (unk_0xC25F5313AD214090(0, 0, 1, 0))
				{
					func_46(uParam0->f_3, 552, &Var36, 0);
					uParam0->f_43 = { Var36 };
					uParam0->f_26 = unk_0xE0E063A077171A2A(unk_0x690B17DE4159577D(joaat("prop_boombox_01"), uParam0->f_43, 1, 1, 0));
					unk_0x5C5B23A2682A1514(unk_0xE65C345C8E8CDA4A(uParam0->f_26), Var36.f_3, 2, 1);
					unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_03", 0);
					unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Exterior_03", unk_0x4C4151C3DEC199DC(uParam0->f_26));
					unk_0xB2C123C54D84E6A7(unk_0x4C4151C3DEC199DC(uParam0->f_26), 1);
					unk_0x93F4FB97D1F2E7A1(unk_0x4C4151C3DEC199DC(uParam0->f_26), true);
					unk_0xC06CC43874774FA5(unk_0x4C4151C3DEC199DC(uParam0->f_26), 1);
				}
			}
		}
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_27))
		{
			if (func_49(joaat("prop_boombox_01")))
			{
				if (unk_0xC25F5313AD214090(0, 0, 1, 0))
				{
					func_46(uParam0->f_3, 553, &Var42, 0);
					uParam0->f_46 = { Var42 };
					uParam0->f_27 = unk_0xE0E063A077171A2A(unk_0x690B17DE4159577D(joaat("prop_boombox_01"), uParam0->f_46, 1, 1, 0));
					unk_0x5C5B23A2682A1514(unk_0xE65C345C8E8CDA4A(uParam0->f_27), Var42.f_3, 2, 1);
					unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_04", 0);
					unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Exterior_04", unk_0x4C4151C3DEC199DC(uParam0->f_27));
					unk_0xB2C123C54D84E6A7(unk_0x4C4151C3DEC199DC(uParam0->f_27), 1);
					unk_0x93F4FB97D1F2E7A1(unk_0x4C4151C3DEC199DC(uParam0->f_27), true);
					unk_0xC06CC43874774FA5(unk_0x4C4151C3DEC199DC(uParam0->f_27), 1);
				}
			}
		}
	}
	else if (func_55(uParam1->f_31, -1) || func_54(uParam1->f_31))
	{
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_22))
		{
			if (func_49(joaat("prop_boombox_01")))
			{
				if (unk_0xC25F5313AD214090(0, 0, 1, 0))
				{
					func_36(uParam1->f_31, 474, &Var48, func_45(uParam1->f_31));
					uParam0->f_34 = { Var48 };
					uParam0->f_22 = unk_0xE0E063A077171A2A(unk_0x690B17DE4159577D(joaat("prop_boombox_01"), uParam0->f_34, 1, 1, 0));
					unk_0xEDADB2C5312DE2A3(func_35(uParam1->f_31, 1, 0, 0), 1);
					unk_0x3D5F8AB2BD44F4C2(func_35(uParam1->f_31, 1, 0, 0), unk_0x4C4151C3DEC199DC(uParam0->f_22));
					unk_0xB2C123C54D84E6A7(unk_0x4C4151C3DEC199DC(uParam0->f_22), 1);
					unk_0x93F4FB97D1F2E7A1(unk_0x4C4151C3DEC199DC(uParam0->f_22), true);
					unk_0xE110948ECF59689C(unk_0x4C4151C3DEC199DC(uParam0->f_22), false, 0);
					unk_0x13B79909077BBD84(unk_0x4C4151C3DEC199DC(uParam0->f_22), false, 0);
					unk_0xC06CC43874774FA5(unk_0x4C4151C3DEC199DC(uParam0->f_22), 1);
				}
			}
		}
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_21))
		{
			if (func_49(joaat("prop_boombox_01")))
			{
				if (unk_0xC25F5313AD214090(0, 0, 1, 0))
				{
					func_36(uParam1->f_31, 473, &Var54, func_45(uParam1->f_31));
					uParam0->f_31 = { Var54 };
					uParam0->f_21 = unk_0xE0E063A077171A2A(unk_0x690B17DE4159577D(joaat("prop_boombox_01"), uParam0->f_31, 1, 1, 0));
					unk_0xEDADB2C5312DE2A3(func_35(uParam1->f_31, 2, 0, 0), 1);
					unk_0x3D5F8AB2BD44F4C2(func_35(uParam1->f_31, 2, 0, 0), unk_0x4C4151C3DEC199DC(uParam0->f_21));
					unk_0xB2C123C54D84E6A7(unk_0x4C4151C3DEC199DC(uParam0->f_21), 1);
					unk_0x93F4FB97D1F2E7A1(unk_0x4C4151C3DEC199DC(uParam0->f_21), true);
					unk_0xE110948ECF59689C(unk_0x4C4151C3DEC199DC(uParam0->f_21), false, 0);
					unk_0x13B79909077BBD84(unk_0x4C4151C3DEC199DC(uParam0->f_21), false, 0);
					unk_0xC06CC43874774FA5(unk_0x4C4151C3DEC199DC(uParam0->f_21), 1);
				}
			}
		}
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_23))
		{
			if (func_49(joaat("prop_boombox_01")))
			{
				if (unk_0xC25F5313AD214090(0, 0, 1, 0))
				{
					func_36(uParam1->f_31, 475, &Var60, func_45(uParam1->f_31));
					uParam0->f_28 = { Var60 };
					uParam0->f_23 = unk_0xE0E063A077171A2A(unk_0x690B17DE4159577D(joaat("prop_boombox_01"), uParam0->f_28, 1, 1, 0));
					unk_0xEDADB2C5312DE2A3(func_35(uParam1->f_31, 3, 0, 0), 1);
					unk_0x3D5F8AB2BD44F4C2(func_35(uParam1->f_31, 3, 0, 0), unk_0x4C4151C3DEC199DC(uParam0->f_23));
					unk_0xB2C123C54D84E6A7(unk_0x4C4151C3DEC199DC(uParam0->f_23), 1);
					unk_0x93F4FB97D1F2E7A1(unk_0x4C4151C3DEC199DC(uParam0->f_23), true);
					unk_0xE110948ECF59689C(unk_0x4C4151C3DEC199DC(uParam0->f_23), false, 0);
					unk_0x13B79909077BBD84(unk_0x4C4151C3DEC199DC(uParam0->f_23), false, 0);
					unk_0xC06CC43874774FA5(unk_0x4C4151C3DEC199DC(uParam0->f_23), 1);
				}
			}
		}
	}
	else if (func_53(uParam1->f_31))
	{
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_22))
		{
			if (func_49(joaat("prop_boombox_01")))
			{
				if (unk_0xC25F5313AD214090(0, 0, 1, 0))
				{
					func_36(uParam1->f_31, 474, &Var66, func_45(uParam1->f_31));
					uParam0->f_34 = { Var66 };
					uParam0->f_22 = unk_0xE0E063A077171A2A(unk_0x690B17DE4159577D(joaat("prop_boombox_01"), uParam0->f_34, 1, 1, 0));
					unk_0xEDADB2C5312DE2A3(func_35(uParam1->f_31, 1, 0, 0), 1);
					unk_0x3D5F8AB2BD44F4C2(func_35(uParam1->f_31, 1, 0, 0), unk_0x4C4151C3DEC199DC(uParam0->f_22));
					unk_0xB2C123C54D84E6A7(unk_0x4C4151C3DEC199DC(uParam0->f_22), 1);
					unk_0x93F4FB97D1F2E7A1(unk_0x4C4151C3DEC199DC(uParam0->f_22), true);
					unk_0xE110948ECF59689C(unk_0x4C4151C3DEC199DC(uParam0->f_22), false, 0);
					unk_0x13B79909077BBD84(unk_0x4C4151C3DEC199DC(uParam0->f_22), false, 0);
					unk_0xC06CC43874774FA5(unk_0x4C4151C3DEC199DC(uParam0->f_22), 1);
				}
			}
		}
	}
	else if (func_50(unk_0xE0BDAFA1A39552D6()))
	{
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_22))
		{
			if (func_49(joaat("prop_boombox_01")))
			{
				if (unk_0xC25F5313AD214090(0, 0, 1, 0))
				{
					if (uParam0->f_53 == 111)
					{
						uParam0->f_34 = { 995.6363f, -3098.016f, -38.3565f };
					}
					else if (uParam0->f_53 == 42)
					{
						uParam0->f_34 = { 1048.328f, -3100.148f, -38.3521f };
					}
					else if (uParam0->f_53 == 16)
					{
						uParam0->f_34 = { 1087.526f, -3100.677f, -38.4417f };
					}
					uParam0->f_22 = unk_0xE0E063A077171A2A(unk_0x690B17DE4159577D(joaat("prop_boombox_01"), uParam0->f_34, 1, 1, 0));
					unk_0xEDADB2C5312DE2A3(func_35(uParam1->f_31, 1, 1, uParam0->f_53), 1);
					unk_0x3D5F8AB2BD44F4C2(func_35(uParam1->f_31, 1, 1, uParam0->f_53), unk_0x4C4151C3DEC199DC(uParam0->f_22));
					unk_0xB2C123C54D84E6A7(unk_0x4C4151C3DEC199DC(uParam0->f_22), 1);
					unk_0x93F4FB97D1F2E7A1(unk_0x4C4151C3DEC199DC(uParam0->f_22), true);
					unk_0xE110948ECF59689C(unk_0x4C4151C3DEC199DC(uParam0->f_22), false, 0);
					unk_0x13B79909077BBD84(unk_0x4C4151C3DEC199DC(uParam0->f_22), false, 0);
					unk_0xC06CC43874774FA5(unk_0x4C4151C3DEC199DC(uParam0->f_22), 1);
				}
			}
		}
	}
	if (func_56(uParam1->f_31) && !uParam0->f_49)
	{
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_5) && unk_0xC3A7CFC6468E0BAE(uParam0->f_6))
		{
			return 1;
		}
	}
	else if (uParam0->f_49)
	{
		if (((unk_0xC3A7CFC6468E0BAE(uParam0->f_25) && unk_0xC3A7CFC6468E0BAE(uParam0->f_26)) && unk_0xC3A7CFC6468E0BAE(uParam0->f_27)) && unk_0xC3A7CFC6468E0BAE(uParam0->f_24))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (func_55(uParam1->f_31, -1))
	{
		if ((unk_0xC3A7CFC6468E0BAE(uParam0->f_23) && unk_0xC3A7CFC6468E0BAE(uParam0->f_21)) && unk_0xC3A7CFC6468E0BAE(uParam0->f_22))
		{
			return 1;
		}
	}
	else if (func_54(uParam1->f_31))
	{
		if ((unk_0xC3A7CFC6468E0BAE(uParam0->f_23) && unk_0xC3A7CFC6468E0BAE(uParam0->f_21)) && unk_0xC3A7CFC6468E0BAE(uParam0->f_22))
		{
			return 1;
		}
	}
	else if (func_53(uParam1->f_31) || func_50(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_22))
		{
			return 1;
		}
	}
	return 0;
}

char* func_35(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	
	sVar0 = "";
	if (bParam2)
	{
		if (iParam3 == 16)
		{
			sVar0 = "SE_EXEC_WH_S_RADIO";
		}
		else if (iParam3 == 42)
		{
			sVar0 = "SE_EXEC_WH_M_RADIO";
		}
		else if (iParam3 == 111)
		{
			sVar0 = "SE_EXEC_WH_L_RADIO";
		}
	}
	switch (iParam1)
	{
		case 1:
			switch (func_45(iParam0))
			{
				case 77:
					sVar0 = "SE_DLC_APT_Stilts_A_Living_Room";
					break;
				
				case 73:
					sVar0 = "SE_DLC_APT_Stilts_B_Living_Room";
					break;
				
				case 83:
					sVar0 = "SE_DLC_APT_Custom_Living_Room";
					break;
				
				case 88:
					switch (Global_3934085)
					{
						case 1:
							sVar0 = "SE_ex_int_office_01a_Radio_01";
							break;
						
						case 2:
							sVar0 = "SE_ex_int_office_01b_Radio_01";
							break;
						
						case 3:
							sVar0 = "SE_ex_int_office_01c_Radio_01";
							break;
						
						case 4:
							sVar0 = "SE_ex_int_office_02a_Radio_01";
							break;
						
						case 5:
							sVar0 = "SE_ex_int_office_02b_Radio_01";
							break;
						
						case 6:
							sVar0 = "SE_ex_int_office_02c_Radio_01";
							break;
						
						case 7:
							sVar0 = "SE_ex_int_office_03a_Radio_01";
							break;
						
						case 8:
							sVar0 = "SE_ex_int_office_03b_Radio_01";
							break;
						
						case 9:
							sVar0 = "SE_ex_int_office_03c_Radio_01";
							break;
					}
					break;
			}
			break;
		
		case 2:
			switch (func_45(iParam0))
			{
				case 77:
					sVar0 = "SE_DLC_APT_Stilts_A_Bedroom";
					break;
				
				case 73:
					sVar0 = "SE_DLC_APT_Stilts_B_Bedroom";
					break;
				
				case 83:
					sVar0 = "SE_DLC_APT_Custom_Bedroom";
					break;
			}
			break;
		
		case 3:
			switch (func_45(iParam0))
			{
				case 77:
					sVar0 = "SE_DLC_APT_Stilts_A_Heist_Room";
					break;
				
				case 73:
					sVar0 = "SE_DLC_APT_Stilts_B_Heist_Room";
					break;
				
				case 83:
					sVar0 = "SE_DLC_APT_Custom_Heist_Room";
					break;
			}
			break;
	}
	return sVar0;
}

void func_36(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<6> Var0[2];
	struct<3> Var13;
	
	Var0[0 /*6*/] = { func_44(iParam3) };
	Var0[1 /*6*/] = { func_44(iParam0) };
	*uParam2 = { func_38(iParam1, iParam3) };
	Var13 = { *uParam2 - Var0[0 /*6*/] };
	Var13 = { func_37(Var13, -Var0[0 /*6*/].f_3.f_2) };
	Var13 = { func_37(Var13, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0x90B89006901451E8(Var0[1 /*6*/], 0f, Var13) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_37(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_38(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	bool bVar6;
	struct<6> Var7;
	
	switch (iParam1)
	{
		case -1:
		case 1:
		case 61:
			return func_43(iParam0, iParam1);
			break;
		
		case 73:
		case 77:
			return func_42(iParam0, iParam1);
			break;
		
		case 83:
			return func_41(iParam0, iParam1);
			break;
		
		case 86:
			return func_40(iParam0, iParam1);
			break;
		
		case 88:
			return func_39(iParam0, iParam1);
			break;
	}
	bVar6 = iParam1 == 61;
	unk_0xED89A0464E204F9A(&Var0, &Var3, iParam0, bVar6);
	Var7 = { Var0 };
	Var7.f_3 = { Var3 };
	return Var7;
}

struct<6> func_39(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 88:
			switch (iParam0)
			{
				case 278:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 279:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 280:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 281:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 282:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 283:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 0:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 1:
					Var0 = { -1391.014f, -476.7234f, 70.79213f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 2:
					Var0 = { -1398.001f, -477.7338f, 74.10992f };
					Var0.f_3 = { 0f, 0f, 12f };
					break;
				
				case 3:
					Var0 = { -1383.954f, -476.7112f, 73.57f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 4:
					Var0 = { -1386.187f, -477.2281f, 70.79214f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 5:
					Var0 = { -1367.155f, -474.5449f, 74.6421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 276:
					Var0 = { -1401.071f, -480.6923f, 70.79214f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 277:
					Var0 = { -1385.056f, -478.5239f, 74.6421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 6:
					Var0 = { -1386.264f, -478.5925f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 278.0621f };
					break;
				
				case 169:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 170:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 201:
					Var0 = { -1389.674f, -477.9422f, 72.6524f };
					Var0.f_3 = { -2.3097f, 0f, 128.6406f };
					break;
				
				case 14:
					Var0 = { -1373.873f, -476.794f, 72.457f };
					Var0.f_3 = { 0f, 0f, 98f };
					break;
				
				case 557:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 558:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 559:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 15:
					Var0 = { -1380.402f, -478.5354f, 71.9893f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 9:
					Var0 = { -1374.076f, -467.7501f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 227.614f;
					break;
				
				case 10:
					Var0 = { -1371.95f, -480.9255f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 289.1039f;
					break;
				
				case 11:
					Var0 = { -1369.476f, -487.2183f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 285.5383f;
					break;
				
				case 12:
					Var0 = { -1382.257f, -480.487f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 308.8578f;
					break;
				
				case 13:
					Var0 = { -1380.136f, -470.4213f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 9.8797f;
					break;
				
				case 16:
					Var0 = { -1369.507f, -476.9786f, 71.0529f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 22:
					Var0 = { -1369.393f, -477.3502f, 71.05289f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 28:
					Var0 = { -1369.491f, -476.5785f, 72.55289f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 17:
					Var0 = { -1369.618f, -476.2482f, 71.0529f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 23:
					Var0 = { -1369.637f, -475.7314f, 71.05289f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 29:
					Var0 = { -1369.491f, -476.5785f, 72.55289f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 18:
					Var0 = { -1369.702f, -475.2167f, 71.0529f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 24:
					Var0 = { -1369.637f, -475.7314f, 71.05289f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 30:
					Var0 = { -1369.757f, -474.8527f, 72.55289f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 34:
					Var0 = { -1368.181f, -476.5546f, 72.5085f };
					Var0.f_3 = { -0.3097f, 0f, 92.7977f };
					break;
				
				case 35:
					Var0 = { -1372.001f, -476.5192f, 72.7309f };
					Var0.f_3 = { 3.9233f, 0f, 98.3755f };
					break;
				
				case 36:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 560:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 37:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 38:
					Var0 = { -1386.944f, -478.496f, 71.7512f };
					Var0.f_3 = { 5.1825f, 0.5013f, -84.0825f };
					break;
				
				case 39:
					Var0 = { -1385.975f, -478.4063f, 71.9382f };
					Var0.f_3 = { 5.1825f, 0.5013f, -84.1376f };
					break;
				
				case 767:
					Var0 = { -1381.953f, -478.9279f, 72.2409f };
					Var0.f_3 = { -1.9217f, 0.535f, -54.7591f };
					break;
				
				case 768:
					Var0 = { -1381.828f, -478.5973f, 72.2329f };
					Var0.f_3 = { -1.9217f, 0.535f, -61.4327f };
					break;
				
				case 872:
					Var0 = { -1381.967f, -478.0454f, 72.1758f };
					Var0.f_3 = { 4.3412f, 0.0669f, -78.3888f };
					break;
				
				case 873:
					Var0 = { -1382.475f, -478.1498f, 72.1364f };
					Var0.f_3 = { 4.3412f, 0.0669f, -78.3888f };
					break;
				
				case 765:
					Var0 = { -1375.141f, -465.8974f, 72.3304f };
					Var0.f_3 = { -2.5795f, 0.7965f, 161.0134f };
					break;
				
				case 766:
					Var0 = { -1374.248f, -467.3159f, 72.3885f };
					Var0.f_3 = { -3.1244f, 0.7965f, -167.5461f };
					break;
				
				case 120:
					Var0 = { -1371.305f, -486.9218f, 72.5809f };
					Var0.f_3 = { -13.7347f, 0.4385f, -35.5008f };
					break;
				
				case 121:
					Var0 = { -1371.435f, -486.9694f, 72.6092f };
					Var0.f_3 = { -13.7347f, 0.4385f, -35.8794f };
					break;
				
				case 759:
					Var0 = { -1371.715f, -467.7556f, 72.5438f };
					Var0.f_3 = { -10.7018f, 0.0514f, 11.934f };
					break;
				
				case 760:
					Var0 = { -1371.848f, -467.295f, 72.8527f };
					Var0.f_3 = { -8.4597f, 0.0514f, 11.275f };
					break;
				
				case 874:
					Var0 = { -1371.98f, -467.0934f, 72.6878f };
					Var0.f_3 = { -10.9607f, 0.0409f, 28.715f };
					break;
				
				case 875:
					Var0 = { -1372.057f, -466.9533f, 72.7673f };
					Var0.f_3 = { -10.1999f, 0.0409f, 28.715f };
					break;
				
				case 876:
					Var0 = { -1371.523f, -466.3904f, 72.533f };
					Var0.f_3 = { -8.4142f, 0.0409f, -3.37f };
					break;
				
				case 877:
					Var0 = { -1371.411f, -466.139f, 72.4949f };
					Var0.f_3 = { -6.5039f, 0.0409f, -2.6958f };
					break;
				
				case 761:
					Var0 = { -1378.041f, -470.9332f, 72.5258f };
					Var0.f_3 = { -1.2251f, 0.3877f, 5.3465f };
					break;
				
				case 762:
					Var0 = { -1377.583f, -469.6385f, 72.4225f };
					Var0.f_3 = { -1.065f, 0.3877f, 8.569f };
					break;
				
				case 870:
					Var0 = { -1378.027f, -467.2617f, 72.5326f };
					Var0.f_3 = { -4.8769f, 0.3877f, 48.9157f };
					break;
				
				case 871:
					Var0 = { -1378.312f, -466.5706f, 72.3701f };
					Var0.f_3 = { -7.0403f, 0.3877f, 51.3359f };
					break;
				
				case 763:
					Var0 = { -1372.144f, -462.4252f, 72.5529f };
					Var0.f_3 = { -6.9621f, 0f, -173.3613f };
					break;
				
				case 764:
					Var0 = { -1374.89f, -462.9107f, 72.4553f };
					Var0.f_3 = { -5.9688f, 0f, -143.2814f };
					break;
				
				case 881:
					Var0 = { -1392.938f, -479.831f, 71.042f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 882:
					Var0 = { -1391.958f, -479.9294f, 71.0422f };
					Var0.f_3 = { 0f, 0f, 22.34f };
					break;
				
				case 883:
					Var0 = { -1391.285f, -479.2309f, 71.0422f };
					Var0.f_3 = { 0f, 0f, 52.14f };
					break;
				
				case 884:
					Var0 = { -1394.986f, -479.2755f, 72.251f };
					Var0.f_3 = { 0.6344f, 0.0182f, -49.3494f };
					break;
				
				case 885:
					Var0 = { -1392.95f, -478.1647f, 71.1922f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 886:
					Var0 = { -1393.623f, -475.4102f, 71.1949f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 888:
					Var0 = { -1392.058f, -478.5261f, 71.0422f };
					Var0.f_3 = { 0f, 0f, 167.25f };
					break;
				
				case 889:
					Var0 = { -1393.005f, -478.564f, 71.0422f };
					Var0.f_3 = { 0f, 0f, -171.18f };
					break;
				
				case 890:
					Var0 = { -1393.877f, -478.9391f, 71.0422f };
					Var0.f_3 = { 0f, 0f, -131.95f };
					break;
				
				case 891:
					Var0 = { -1390.469f, -479.7867f, 72.1899f };
					Var0.f_3 = { 3.3931f, 0.0137f, 121.5152f };
					break;
				
				case 892:
					Var0 = { -1392.549f, -481.0493f, 71.2005f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 893:
					Var0 = { -1391.323f, -483.4211f, 71.162f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 125:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 40:
					Var0 = { -1379.844f, -470.5661f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 15.031f };
					break;
				
				case 41:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 126:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 127:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 42:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 46:
					Var0 = { -1381.782f, -466.131f, 72.081f };
					Var0.f_3 = { 0f, 0f, -43.56f };
					break;
				
				case 47:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, -172.8f };
					break;
				
				case 48:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 49:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 51:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 612:
					Var0 = { -1381.782f, -466.131f, 72.081f };
					Var0.f_3 = { 0f, 0f, -43.56f };
					break;
				
				case 615:
					Var0 = { -1382.044f, -465.412f, 71.04213f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 616:
					Var0 = { -1379.822f, -465.0819f, 72.79213f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 56:
					Var0 = { -1386.124f, -471.4142f, 72.2421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 57:
					Var0 = { -1385.42f, -470.797f, 71.203f };
					Var0.f_3 = { 0f, 0f, -82.16f };
					break;
				
				case 64:
					Var0 = { -1385.72f, -471.56f, 73.37f };
					Var0.f_3 = { -45f, 0f, 0f };
					break;
				
				case 65:
					Var0 = { -1385.42f, -470.797f, 72.3f };
					Var0.f_3 = { 0f, 0f, -82.16f };
					break;
				
				case 58:
					Var0 = { -1384.641f, -471.3463f, 72.9289f };
					Var0.f_3 = { -0.7841f, 0f, 77.4962f };
					break;
				
				case 59:
					Var0 = { -1384.366f, -471.2928f, 72.845f };
					Var0.f_3 = { -7.3248f, 0f, 118.1501f };
					break;
				
				case 60:
					Var0 = { -1384.316f, -471.2809f, 73.1692f };
					Var0.f_3 = { -20.2395f, -0.0003f, 102.8101f };
					break;
				
				case 61:
					Var0 = { -1384.568f, -471.3008f, 73.2522f };
					Var0.f_3 = { -15.012f, 0.0423f, 105.2809f };
					break;
				
				case 62:
					Var0 = { -1385.197f, -470.0034f, 73.7174f };
					Var0.f_3 = { -52.8011f, -0.0058f, 91.9435f };
					break;
				
				case 63:
					Var0 = { -1384.927f, -470.5415f, 72.8936f };
					Var0.f_3 = { -20.0458f, 0f, 53.9154f };
					break;
				
				case 66:
					Var0 = { -1386.093f, -471.48f, 71.1422f };
					break;
				
				case 67:
					Var0 = { -1384.294f, -471.2281f, 73.54627f };
					break;
				
				case 110:
					Var0 = { -1385.937f, -470.1181f, 70.9901f };
					Var0.f_3 = { 0f, 0f, 258.2184f };
					break;
				
				case 68:
					Var0 = { -1384.366f, -469.3365f, 72.2902f };
					break;
				
				case 109:
					Var0 = { -1384.366f, -469.3365f, 72.2902f };
					break;
				
				case 69:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 70:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 71:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 72:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 73:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 74:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 75:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 76:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 89:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 91:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 90:
					Var0 = { -1379.25f, -488.464f, 71.049f };
					Var0.f_3 = { 0f, 0f, 13.32f };
					break;
				
				case 92:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 135:
					Var0 = { -1378.361f, -488.3603f, 71.0421f };
					break;
				
				case 136:
					Var0 = { -1379.683f, -488.5495f, 72.7921f };
					break;
				
				case 77:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case joaat("mpsv_lp0_31"):
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 80:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 81:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 82:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 78:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 83:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 85:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 88:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 84:
					Var0 = { -1368.3f, -480.492f, 71.042f };
					Var0.f_3 = { 0f, 0f, -177.84f };
					break;
				
				case 86:
					Var0 = { -1367.615f, -480.0959f, 71.04215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 87:
					Var0 = { -1368.761f, -480.2637f, 72.54215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 93:
					Var0 = { -1398.157f, -479.3889f, 72.1924f };
					Var0.f_3 = { 0f, 0f, 97f };
					break;
				
				case 94:
					Var0 = { -1397.917f, -479.589f, 72.192f };
					Var0.f_3 = { 0f, 0f, 98f };
					break;
				
				case 95:
					Var0 = { -1383.879f, -477.9557f, 71.0422f };
					Var0.f_3 = { 0f, 0f, 95.66f };
					break;
				
				case 96:
					Var0 = { -1398.447f, -480.4256f, 72.105f };
					Var0.f_3 = { 0f, 0f, -80.26f };
					break;
				
				case 97:
					Var0 = { -1392.006f, -479.5026f, 72.105f };
					Var0.f_3 = { 0f, 0f, 144.06f };
					break;
				
				case 98:
					Var0 = { -1396.753f, -480.6128f, 72.105f };
					Var0.f_3 = { 0f, 0f, -31.76f };
					break;
				
				case 99:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 100:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 101:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 181:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 106:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 107:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 108:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 117:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 118:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 119:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 122:
					Var0 = { -1390.29f, -479.0549f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 277.8842f };
					break;
				
				case 123:
					Var0 = { -1383.99f, -477.7994f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 285.7773f };
					break;
				
				case 124:
					Var0 = { -1371.485f, -472.5331f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 247.7497f };
					break;
				
				case 137:
					Var0 = { -1371.795f, -470.0197f, 71.0421f };
					break;
				
				case 202:
					Var0 = { -1389.332f, -479.0194f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 203:
					Var0 = { -1389.008f, -480.0021f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 303.181f;
					break;
				
				case 204:
					Var0 = { -1389.814f, -479.6433f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 205:
					Var0 = { -1390.755f, -478.6367f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 273.1809f;
					break;
				
				case 206:
					Var0 = { -1390.449f, -479.4955f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 207:
					Var0 = { -1390.09f, -478.5259f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 208:
					Var0 = { -1390.938f, -479.7606f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 209:
					Var0 = { -1389.573f, -477.7128f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 249.181f;
					break;
				
				case 210:
					Var0 = { -1386.425f, -477.8782f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 211:
					Var0 = { -1386.284f, -479.1848f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 279.1809f;
					break;
				
				case 212:
					Var0 = { -1389.597f, -480.8671f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 305.1809f;
					break;
				
				case 213:
					Var0 = { -1391.379f, -478.654f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 214:
					Var0 = { -1388.966f, -478.3716f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 215:
					Var0 = { -1388.649f, -479.3325f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 216:
					Var0 = { -1391.445f, -479.7018f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 278.1809f;
					break;
				
				case 217:
					Var0 = { -1390.214f, -477.4063f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 253.181f;
					break;
			}
			switch (iParam0)
			{
				case 435:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 436:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 437:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 470:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 477:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 445:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 446:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 447:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 448:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 449:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 450:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 471:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 472:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 478:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 479:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 504:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 505:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 506:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 507:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 508:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 509:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 510:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 511:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 512:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 513:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 514:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 515:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 528:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 529:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 530:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 531:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 532:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 533:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 534:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 535:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 536:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 537:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 538:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 539:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 540:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 541:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 542:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 547:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 548:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 549:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 237:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 238:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 239:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 240:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 241:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 242:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 243:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 244:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 245:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 246:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 247:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 248:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 249:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 250:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 251:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 252:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 253:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 254:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 255:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 256:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 257:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 258:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 259:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 260:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 307:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 331:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 332:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 333:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 334:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 298:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 299:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 311:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 431:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 133:
					Var0 = { -1375.394f, -467.9827f, 71.04215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 134:
					Var0 = { -1375.542f, -467.0287f, 73.04215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 130:
					Var0 = { -1375.271f, -467.526f, 71.042f };
					Var0.f_3 = { 0f, 0f, -92.16f };
					break;
				
				case 433:
					Var0 = { -1375.906f, -469.4503f, 71.04215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 434:
					Var0 = { -1374.99f, -468.8127f, 73.04215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 432:
					Var0 = { -1375.309f, -469.039f, 71.042f };
					Var0.f_3 = { 0f, 0f, -149.4f };
					break;
				
				case 102:
					Var0 = { -1375.297f, -466.8609f, 71.04215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 103:
					Var0 = { -1375.448f, -465.9375f, 73.04215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 182:
					Var0 = { -1375.943f, -467.129f, 72.067f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 501:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 502:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 500:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 104:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 105:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 183:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 473:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 474:
					Var0 = { -1372.745f, -476.2592f, 73.9259f };
					Var0.f_3 = { -17.5489f, 0f, -82.352f };
					break;
				
				case 169:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 170:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 181:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 629:
					Var0 = { -1379.512f, -477.629f, 71.649f };
					Var0.f_3 = { 0f, 0f, -82f };
					break;
				
				case 630:
					Var0 = { -1375.371f, -462.5318f, 71.04215f };
					Var0.f_3 = { 1f, 0f, 1f };
					break;
				
				case 631:
					Var0 = { -1370.158f, -462.2543f, 71.04214f };
					Var0.f_3 = { 1.75f, 0f, 0f };
					break;
				
				case 714:
					Var0 = { -1371.393f, -461.2212f, 71.3765f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 633:
					Var0 = { -1391.066f, -480.86f, 71.0421f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 634:
					Var0 = { -1391.796f, -480.9668f, 71.0421f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 635:
					Var0 = { -1394.002f, -481.286f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 8f };
					break;
				
				case 636:
					Var0 = { -1393.282f, -481.1756f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 8f };
					break;
				
				case 637:
					Var0 = { -1394.44f, -478.038f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 8f };
					break;
				
				case 638:
					Var0 = { -1393.74f, -477.938f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 8f };
					break;
				
				case 639:
					Var0 = { -1391.554f, -477.6193f, 71.0421f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 640:
					Var0 = { -1392.254f, -477.7293f, 71.0421f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 643:
					Var0 = { -1393.645f, -479.5984f, 72.2997f };
					Var0.f_3 = { 23.1365f, 0.0223f, -16.3365f };
					break;
				
				case 644:
					Var0 = { -1393.645f, -479.5984f, 72.2997f };
					Var0.f_3 = { 3.6162f, 0.0223f, -16.3365f };
					break;
				
				case 641:
					Var0 = { -1391.824f, -479.9584f, 72.3454f };
					Var0.f_3 = { 34.4208f, 0f, 154.6562f };
					break;
				
				case 642:
					Var0 = { -1391.824f, -479.9584f, 72.3454f };
					Var0.f_3 = { -2.2683f, 0f, 154.6562f };
					break;
				
				case 646:
					Var0 = { -1393.123f, -477.881f, 71.04f };
					Var0.f_3 = { 0f, 0f, -140.4f };
					break;
				
				case 645:
					Var0 = { -1392.415f, -481.031f, 71.04f };
					Var0.f_3 = { 0f, 0f, 40f };
					break;
				
				case 648:
					Var0 = { -1392.685f, -480.3315f, 71.0422f };
					Var0.f_3 = { 0f, 0f, 191.9762f };
					break;
				
				case 649:
					Var0 = { -1392.392f, -482.4386f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 5.3172f };
					break;
				
				case 650:
					Var0 = { -1392.644f, -479.376f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 7.1773f };
					break;
				
				case 651:
					Var0 = { -1382.967f, -480.9828f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 652:
					Var0 = { -1382.788f, -482.5349f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 653:
					Var0 = { -1383.662f, -485.6873f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 654:
					Var0 = { 1384.186f, -486.728f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 655:
					Var0 = { -1383.403f, -487.5066f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 656:
					Var0 = { -1382.708f, -488.3592f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 657:
					Var0 = { -1381.329f, -488.1656f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 658:
					Var0 = { -1371.906f, -478.3103f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 659:
					Var0 = { -1372.407f, -474.9426f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 660:
					break;
				
				case 661:
					break;
				
				case 662:
					break;
				
				case 663:
					Var0 = { -1371.851f, -466.166f, 71.049f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 664:
					Var0 = { -1372.581f, -466.2719f, 71.049f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 665:
					Var0 = { -1377.777f, -464.8911f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 672:
					Var0 = { -1390.344f, -481.4404f, 70.79213f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 673:
					Var0 = { -1397.326f, -482.5123f, 74.08271f };
					Var0.f_3 = { 0f, 0f, -169.52f };
					break;
				
				case 666:
					Var0 = { -1375.277f, -462.3159f, 72.0926f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 667:
					Var0 = { -1370.489f, -461.6438f, 72.0926f };
					Var0.f_3 = { 0f, 0f, 8.11f };
					break;
				
				case 668:
					Var0 = { -1375.277f, -462.3159f, 72.0926f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 669:
					Var0 = { -1370.489f, -461.6438f, 72.0926f };
					Var0.f_3 = { 0f, 0f, 8f };
					break;
				
				case 670:
					Var0 = { -1372.022f, -463.9919f, 74.1304f };
					Var0.f_3 = { -40.8924f, 0.0193f, -23.9982f };
					break;
				
				case 671:
					Var0 = { -1370.7f, -463.5f, 72f };
					Var0.f_3 = { -35.87f, 0f, 8.02f };
					break;
				
				case 674:
					Var0 = { -1375.277f, -462.3159f, 72.0926f };
					Var0.f_3 = { 0f, 0.0102f, 87.88f };
					break;
				
				case 675:
					Var0 = { -1372.02f, -463.9937f, 74.1322f };
					Var0.f_3 = { -35.4306f, 0f, 57.5758f };
					break;
				
				case 676:
					Var0 = { -1374.308f, -462.7904f, 71.0514f };
					Var0.f_3 = { 0f, 0f, 26.5462f };
					break;
				
				case 677:
					Var0 = { -1370.489f, -461.6438f, 72.0926f };
					Var0.f_3 = { 0f, 0f, 98.86f };
					break;
				
				case 678:
					Var0 = { -1368.419f, -485.913f, 71.638f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 679:
					Var0 = { -1368.686f, -483.781f, 71.638f };
					Var0.f_3 = { 0f, 0f, 8f };
					break;
				
				case 680:
					Var0 = { -1369.891f, -483.951f, 71.638f };
					Var0.f_3 = { 0f, 0f, 8f };
					break;
				
				case 681:
					Var0 = { -1371.052f, -484.114f, 71.638f };
					Var0.f_3 = { 0f, 0f, 8f };
					break;
				
				case 682:
					Var0 = { -1370.785f, -486.245f, 71.638f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 683:
					Var0 = { -1369.597f, -486.079f, 71.638f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 684:
					Var0 = { -1372.187f, -463.935f, 71.662f };
					Var0.f_3 = { 0f, 0f, -37f };
					break;
				
				case 685:
					Var0 = { -1367.419f, -484.652f, 71.638f };
					Var0.f_3 = { 0f, 0f, -82f };
					break;
				
				case 689:
					Var0 = { -1373.629f, -478.7528f, 71.06213f };
					Var0.f_3 = { 0.75f, 0f, 0f };
					break;
				
				case 690:
					Var0 = { -1374.166f, -474.9032f, 73.54213f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 691:
					Var0 = { -1372.819f, -476.6167f, 71.0529f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 692:
					Var0 = { -1375.222f, -466.2753f, 71.0621f };
					Var0.f_3 = { 1f, 0f, 0f };
					break;
				
				case 693:
					Var0 = { -1375.789f, -462.2126f, 73.54211f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 694:
					Var0 = { -1374.244f, -465.2611f, 71.049f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 695:
					Var0 = { -1380.604f, -476.8068f, 71.14214f };
					Var0.f_3 = { 1.5f, 0f, 0f };
					break;
				
				case 696:
					Var0 = { -1380.937f, -475.1835f, 73.54211f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 697:
					Var0 = { -1384.38f, -478.0885f, 71.0422f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 698:
					Var0 = { -1384.355f, -476.2908f, 71.05213f };
					Var0.f_3 = { 0.75f, 0f, 0f };
					break;
				
				case 699:
					Var0 = { -1384.825f, -473.0208f, 73.54213f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 700:
					Var0 = { -1383.51f, -474.9492f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 701:
					Var0 = { -1368.4f, -472.6109f, 71.04213f };
					Var0.f_3 = { 1.5f, 0f, 0f };
					break;
				
				case 702:
					Var0 = { -1368.804f, -469.5392f, 73.29213f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 703:
					Var0 = { -1369.993f, -471.4322f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 704:
					Var0 = { -1378.779f, -474.3721f, 71.05211f };
					Var0.f_3 = { 0.5f, 0f, 0f };
					break;
				
				case 705:
					Var0 = { -1377.923f, -480.5733f, 73.54211f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 706:
					Var0 = { -1379.317f, -475.9338f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 707:
					Var0 = { -1386.979f, -476.6814f, 71.04211f };
					Var0.f_3 = { 1f, 0f, 0f };
					break;
				
				case 708:
					Var0 = { -1386.429f, -480.5289f, 73.79211f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 709:
					Var0 = { -1385.6f, -478.2664f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 710:
					Var0 = { -1369.435f, -461.8229f, 71.04211f };
					Var0.f_3 = { 1f, 0f, 0f };
					break;
				
				case 711:
					Var0 = { -1376.22f, -462.8445f, 73.29211f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 712:
					Var0 = { -1373.835f, -463.8867f, 71.0621f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 713:
					Var0 = { -1375.476f, -472.02f, 71.04213f };
					Var0.f_3 = { 0.75f, 0f, 0f };
					break;
				
				case 632:
					Var0 = { -1381.54f, -472.8741f, 73.29213f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 715:
					Var0 = { -1370.833f, -461.1512f, 71.3765f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 716:
					Var0 = { -1371.393f, -461.2212f, 71.6065f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 717:
					Var0 = { -1370.833f, -461.1512f, 71.6065f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 718:
					Var0 = { -1371.383f, -461.4812f, 71.3765f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 719:
					Var0 = { -1370.803f, -461.4112f, 71.3865f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 720:
					Var0 = { -1371.383f, -461.4812f, 71.6065f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 721:
					Var0 = { -1370.803f, -461.4112f, 71.6065f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 722:
					Var0 = { -1371.393f, -461.2112f, 71.9765f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 723:
					Var0 = { -1370.853f, -461.1512f, 71.9765f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 724:
					Var0 = { -1371.393f, -461.2112f, 72.2065f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 725:
					Var0 = { -1370.853f, -461.1512f, 72.2065f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 726:
					Var0 = { -1371.373f, -461.4712f, 71.9765f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 727:
					Var0 = { -1370.813f, -461.3912f, 71.9765f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 728:
					Var0 = { -1371.373f, -461.4712f, 72.2065f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 729:
					Var0 = { -1370.813f, -461.3912f, 72.2065f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 730:
					Var0 = { -1371.393f, -461.2212f, 72.5065f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 731:
					Var0 = { -1370.853f, -461.1512f, 72.5065f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 732:
					Var0 = { -1371.393f, -461.2212f, 72.7365f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 733:
					Var0 = { -1370.853f, -461.1512f, 72.7365f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 734:
					Var0 = { -1371.373f, -461.4612f, 72.4965f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 735:
					Var0 = { -1370.813f, -461.3912f, 72.4965f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 736:
					Var0 = { -1371.373f, -461.4612f, 72.7365f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 737:
					Var0 = { -1370.813f, -461.3912f, 72.7365f };
					Var0.f_3 = { 0f, 0f, 7f };
					break;
				
				case 738:
					Var0 = { -1373.116f, -488.2086f, 71.04217f };
					Var0.f_3 = { 1.25f, 0f, 0f };
					break;
				
				case 739:
					Var0 = { -1365.72f, -487.1443f, 73.79217f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 740:
					Var0 = { -1372.851f, -485.1789f, 71.0422f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 741:
					Var0 = { -1368.093f, -482.4732f, 71.04211f };
					Var0.f_3 = { 3.5f, 0f, 0f };
					break;
				
				case 742:
					Var0 = { -1368.34f, -480.3129f, 73.29211f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 743:
					Var0 = { -1370.5f, -481.3f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 744:
					Var0 = { -1380.242f, -486.2507f, 71.04211f };
					Var0.f_3 = { 5.5f, 0f, 0f };
					break;
				
				case 745:
					Var0 = { -1384.697f, -486.9442f, 73.29217f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 746:
					Var0 = { -1379.289f, -486.2473f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 747:
					Var0 = { -1374.37f, -461.766f, 72.241f };
					Var0.f_3 = { -90f, 0f, 35.5f };
					break;
				
				case 748:
					Var0 = { -1374.638f, -461.769f, 72.246f };
					Var0.f_3 = { -90f, 0f, 35.5f };
					break;
				
				case 749:
					Var0 = { -1374.81f, -461.8721f, 71.645f };
					Var0.f_3 = { -2.5f, -66.5f, 91.3f };
					break;
				
				case 750:
					Var0 = { -1374.922f, -461.908f, 71.645f };
					Var0.f_3 = { -2.75f, -66.5f, 91.3f };
					break;
				
				case 751:
					Var0 = { -1383.28f, -472.7275f, 73.44767f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 752:
					Var0 = { -1376.303f, -470.6783f, 73.4041f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 753:
					Var0 = { -1381.757f, -472.5135f, 70.95429f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 754:
					Var0 = { -1376.52f, -469.1397f, 70.98588f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 755:
					Var0 = { -1376.395f, -470.5647f, 72.1921f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 756:
					Var0 = { -1383.19f, -472.639f, 72.1921f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 757:
					Var0 = { -1375.052f, -461.8455f, 72.261f };
					Var0.f_3 = { 0f, 0f, 10.1f };
					break;
				
				case 758:
					Var0 = { -1375.242f, -461.8469f, 72.29f };
					Var0.f_3 = { 0f, 0f, 41.4f };
					break;
				
				case 769:
					Var0 = { -1392.573f, -480.1384f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 276.5135f };
					break;
				
				case 770:
					Var0 = { -1393.545f, -478.9945f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 281.3589f };
					break;
				
				case 771:
					Var0 = { -1396.718f, -479.3686f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 276.951f };
					break;
				
				case 772:
					Var0 = { -1395.378f, -480.6437f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 281.0696f };
					break;
				
				case 773:
					Var0 = { -1392.69f, -479.6239f, 72.5297f };
					Var0.f_3 = { 14.0402f, 0f, 7.4741f };
					break;
				
				case 774:
					Var0 = { -1378.496f, -481.8039f, 72.0891f };
					Var0.f_3 = { 0.8273f, 0f, -82.807f };
					break;
				
				case 775:
					Var0 = { -1380.646f, -481.2209f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 273.8102f };
					break;
				
				case 776:
					Var0 = { -1380.025f, -482.464f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 274.1362f };
					break;
				
				case 777:
					Var0 = { -1379.174f, -481.1526f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 273.546f };
					break;
				
				case 778:
					Var0 = { -1378.641f, -482.5946f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 272.5229f };
					break;
			}
			switch (iParam0)
			{
				case 779:
					Var0 = { -1370.4f, -479.8142f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 283.0016f };
					break;
				
				case 780:
					Var0 = { -1370.507f, -480.7826f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 281.4162f };
					break;
				
				case 781:
					Var0 = { -1370.4f, -479.8142f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 283.0016f };
					break;
				
				case 782:
					Var0 = { -1370.507f, -480.7826f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 281.4162f };
					break;
				
				case 783:
					Var0 = { -1372.42f, -477.419f, 72.043f };
					Var0.f_3 = { 0f, 0f, -129.25f };
					break;
				
				case 784:
					Var0 = { -1371.118f, -478.731f, 72.043f };
					Var0.f_3 = { 0f, 0f, -27.25f };
					break;
				
				case 785:
					Var0 = { -1373.091f, -476.2664f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 311.3689f };
					break;
				
				case 786:
					Var0 = { -1371.497f, -473.9364f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 151.6133f };
					break;
				
				case 787:
					Var0 = { -1372.355f, -478.725f, 71.561f };
					Var0.f_3 = { 0f, 0f, -37.5f };
					break;
				
				case 788:
					Var0 = { -1372.859f, -474.543f, 71.561f };
					Var0.f_3 = { 0f, 0f, -133.5f };
					break;
				
				case 789:
					Var0 = { -1372.758f, -477.7887f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 302.8123f };
					break;
				
				case 790:
					Var0 = { -1371.446f, -478.7147f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 332.7965f };
					break;
				
				case 791:
					Var0 = { -1371.96f, -474.174f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 205.0822f };
					break;
				
				case 792:
					Var0 = { -1373.104f, -475.6295f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 246.6334f };
					break;
				
				case 793:
					Var0 = { -1372.537f, -477.7263f, 71.0529f };
					Var0.f_3 = { 0f, 0f, 233.9974f };
					break;
				
				case 794:
					Var0 = { -1371.131f, -478.5096f, 71.0529f };
					Var0.f_3 = { 0f, 0f, 60.3401f };
					break;
				
				case 795:
					Var0 = { -1371.84f, -474.4755f, 71.0529f };
					Var0.f_3 = { 0f, 0f, 150.8988f };
					break;
				
				case 796:
					Var0 = { -1372.604f, -475.7714f, 71.0529f };
					Var0.f_3 = { 0f, 0f, 320.6061f };
					break;
				
				case 797:
					Var0 = { -1371.508f, -477.4651f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 146.0641f };
					break;
				
				case 798:
					Var0 = { -1371.854f, -475.3757f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 47.8768f };
					break;
				
				case 799:
					Var0 = { -1371.889f, -478.1164f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 144.5707f };
					break;
				
				case 800:
					Var0 = { -1372.4f, -474.8434f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 51.6376f };
					break;
				
				case 802:
					Var0 = { -1372.38f, -478.752f, 71.573f };
					Var0.f_3 = { 0f, 0f, -35.75f };
					break;
				
				case 801:
					Var0 = { -1388.033f, -478.7589f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 286.3443f };
					break;
				
				case 805:
					Var0 = { -1382.268f, -481.5285f, 71.0422f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 803:
					Var0 = { -1383.237f, -483.2296f, 71.04217f };
					Var0.f_3 = { 1.1f, 0f, 0f };
					break;
				
				case 804:
					Var0 = { -1383.649f, -480.2233f, 73.29217f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 808:
					Var0 = { -1368.617f, -479.5128f, 71.0621f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 806:
					Var0 = { -1371.157f, -479.4782f, 71.04215f };
					Var0.f_3 = { 3.25f, 0f, 0f };
					break;
				
				case 807:
					Var0 = { -1372.074f, -473.3848f, 73.54215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 809:
					Var0 = { -1375.031f, -461.896f, 71.6313f };
					Var0.f_3 = { -1.8f, -66.5f, 93.9f };
					break;
				
				case 810:
					Var0 = { -1371.426f, -465.332f, 71.835f };
					Var0.f_3 = { 0f, 0f, -141.25f };
					break;
				
				case 811:
					Var0 = { -1376.985f, -482.3501f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 80.6965f };
					break;
				
				case 812:
					Var0 = { -1376.912f, -480.9891f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 74.6858f };
					break;
				
				case 813:
					Var0 = { -1375.364f, -481.7466f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 92.578f };
					break;
				
				case 814:
					Var0 = { -1374.097f, -481.0571f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 98.0056f };
					break;
				
				case 815:
					Var0 = { -1386.889f, -477.0505f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 80f };
					break;
				
				case 816:
					Var0 = { -1374.043f, -462.3639f, 73.29215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 818:
					Var0 = { -1372.768f, -464.8512f, 71.04905f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 819:
					Var0 = { -1374.161f, -463.5122f, 72.79215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 820:
					Var0 = { -0.1372f, -463.9352f, 71.6622f };
					Var0.f_3 = { 0f, 0f, 37f };
					break;
				
				case 821:
					Var0 = { -1372.619f, -464.239f, 71.432f };
					Var0.f_3 = { 0f, 0f, -32.76f };
					break;
				
				case 817:
					Var0 = { -1371.571f, -462.438f, 73.54214f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 647:
					Var0 = { -1393.194f, -477.075f, 71.042f };
					Var0.f_3 = { 0f, 0f, -170f };
					break;
				
				case 822:
					Var0 = { -1392.657f, -476.4261f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 163.87f };
					break;
				
				case 823:
					Var0 = { -1392.09f, -476.787f, 71.042f };
					Var0.f_3 = { 0f, 0f, 111.15f };
					break;
				
				case 824:
					Var0 = { -1393.702f, -476.1204f, 71.0421f };
					Var0.f_3 = { 0f, 0f, -167.88f };
					break;
				
				case 825:
					Var0 = { -1393.058f, -477.8514f, 71.2513f };
					Var0.f_3 = { 0f, 0f, 191.9762f };
					break;
				
				case 826:
					Var0 = { -1380.775f, -474.2398f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 827:
					Var0 = { -1370.688f, -479.6639f, 72.0422f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 828:
					Var0 = { -1371.642f, -472.7743f, 72.0422f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 829:
					Var0 = { -1368.66f, -478.0478f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 101.807f };
					break;
				
				case 830:
					Var0 = { -1369.159f, -479.3572f, 72.0422f };
					Var0.f_3 = { 0f, 0f, 19.6959f };
					break;
				
				case 831:
					Var0 = { -1369.618f, -476.4316f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 168.1197f };
					break;
				
				case 832:
					Var0 = { -1374.543f, -481.3387f, 72.0422f };
					Var0.f_3 = { 0f, 0f, 277.0777f };
					break;
				
				case 833:
					Var0 = { -1369.872f, -475.1957f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 61.6439f };
					break;
				
				case 834:
					Var0 = { -1369.106f, -473.6916f, 72.0529f };
					Var0.f_3 = { 0f, 0f, 70.5975f };
					break;
				
				case 835:
					Var0 = { -1368.954f, -471.6623f, 72.0422f };
					Var0.f_3 = { 0f, 0f, 76.359f };
					break;
				
				case 836:
					Var0 = { -1370.482f, -470.7346f, 72.0422f };
					Var0.f_3 = { 0f, 0f, 155.9964f };
					break;
				
				case 838:
					Var0 = { -1378.063f, -467.0028f, 71.04215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 839:
					Var0 = { -1377.933f, -467.785f, 73.04215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 837:
					Var0 = { -1377.825f, -467.389f, 71.05f };
					Var0.f_3 = { 0f, 0f, 87.84f };
					break;
				
				case 842:
					Var0 = { -1372.015f, -468.9812f, 71.0422f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 840:
					Var0 = { -1373.58f, -466.8963f, 71.04905f };
					Var0.f_3 = { 1.5f, 0f, 0f };
					break;
				
				case 841:
					Var0 = { -1370.55f, -466.4406f, 73.54905f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 843:
					Var0 = { -1375.149f, -461.8709f, 71.63f };
					Var0.f_3 = { -1.8f, -66.5f, 93.9f };
					break;
				
				case 844:
					Var0 = { -1369.763f, -485.0164f, 72.1498f };
					Var0.f_3 = { -23.7676f, 0f, -80.7839f };
					break;
				
				case 845:
					Var0 = { -1380.299f, -481.8173f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 846:
					Var0 = { -1384.702f, -478.7025f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 847:
					Var0 = { -1380.176f, -480.645f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 848:
					Var0 = { -1384.398f, -478.1262f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 849:
					Var0 = { -1377.932f, -481.5936f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 850:
					Var0 = { -1384.41f, -479.2907f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 851:
					Var0 = { -1380.405f, -481.5397f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 852:
					Var0 = { -1383.782f, -478.5861f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 853:
					Var0 = { -1392.677f, -479.7237f, 72.4105f };
					Var0.f_3 = { 0.7434f, 0f, 7.4741f };
					break;
				
				case 854:
					Var0 = { -1377.628f, -481.6943f, 72.1015f };
					Var0.f_3 = { 0.8273f, 0f, -82.807f };
					break;
				
				case 855:
					Var0 = { -1382.699f, -479.8376f, 72.2729f };
					Var0.f_3 = { 0.8044f, 0f, -111.6133f };
					break;
				
				case 856:
					Var0 = { -1383.487f, -479.5229f, 72.2603f };
					Var0.f_3 = { 0.8044f, 0f, -111.6133f };
					break;
				
				case 686:
					Var0 = { -1378.393f, -484.121f, 71.643f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 687:
					Var0 = { -1376.883f, -483.909f, 71.643f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 688:
					Var0 = { -1375.373f, -483.697f, 71.643f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
			}
			switch (iParam0)
			{
				case 857:
					Var0 = { -1371.476f, -480.6698f, 31.04214f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 858:
					Var0 = { -1377.564f, -481.4189f, 73.72964f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 859:
					Var0 = { -1378.863f, -479.5141f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 156f };
					break;
				
				case 860:
					Var0 = { -1381.632f, -478.6535f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 190f };
					break;
				
				case 861:
					Var0 = { -1382.021f, -482.9339f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 324f };
					break;
				
				case 862:
					Var0 = { -1369.401f, -482.3335f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 44f };
					break;
				
				case 863:
					Var0 = { -1379.681f, -477.5754f, 71.6343f };
					Var0.f_3 = { 0f, 0f, -78.12f };
					break;
				
				case 864:
					Var0 = { -1367.611f, -473.8776f, 71.04215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 865:
					Var0 = { -1369.875f, -474.216f, 72.55293f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 866:
					Var0 = { -1366.966f, -477.8354f, 71.04215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 867:
					Var0 = { -1369.294f, -478.1736f, 72.55293f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 899:
					Var0 = { -1367.721f, -477.4963f, 71.04215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 900:
					Var0 = { -1368.16f, -474.3671f, 72.54215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 868:
					Var0 = { -1392.101f, -478.448f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 869:
					Var0 = { -1388.971f, -478.1062f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 880:
					Var0 = { -1376.621f, -485.3536f, 71.0422f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 878:
					Var0 = { -1374.779f, -483.3618f, 71.04215f };
					Var0.f_3 = { 1.75f, 0f, 0f };
					break;
				
				case 879:
					Var0 = { -1379.531f, -484.1284f, 73.04215f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 887:
					Var0 = { -1369.734f, -484.9951f, 71.8463f };
					Var0.f_3 = { 0f, 0f, 8f };
					break;
				
				case 894:
					Var0 = { -1385.207f, -478.4178f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 279.748f;
					break;
				
				case 895:
					Var0 = { -1384.483f, -479.1004f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 279.748f;
					break;
				
				case 896:
					Var0 = { -1385.59f, -479.3416f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 279.748f;
					break;
				
				case 897:
					Var0 = { -1385.831f, -477.7351f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 279.7484f;
					break;
				
				case 898:
					Var0 = { -1384.825f, -477.4939f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 279.748f;
					break;
				
				case 901:
					Var0 = { -1392.254f, -477.7293f, 71.0421f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 902:
					Var0 = { -1393.74f, -477.938f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 8f };
					break;
				
				case 903:
					Var0 = { -1395.517f, -478.1879f, 71.0421f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 904:
					Var0 = { -1397.004f, -478.3966f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 8f };
					break;
				
				case 905:
					Var0 = { -1391.796f, -480.9668f, 71.0421f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 906:
					Var0 = { -1393.282f, -481.1756f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 8f };
					break;
				
				case 907:
					Var0 = { -1395.059f, -481.4254f, 71.0421f };
					Var0.f_3 = { 0f, 0f, -172f };
					break;
				
				case 908:
					Var0 = { -1396.545f, -481.6342f, 71.0421f };
					Var0.f_3 = { 0f, 0f, 8f };
					break;
				
				case 909:
					Var0 = { -1372.66f, -476.5803f, 70.80293f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 910:
					Var0 = { -1373.991f, -476.762f, 73.93909f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_40(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 86:
			switch (iParam0)
			{
				case 1:
					Var0 = { -1446.808f, -3762.878f, 4.8851f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 2:
					Var0 = { -1447.32f, -3764.615f, 7.1351f };
					Var0.f_3 = { 0f, 0f, -105.421f };
					break;
				
				case 3:
					Var0 = { -1472.317f, -3754.113f, 4.9666f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 4:
					Var0 = { -1442.132f, -3765.401f, 4.6422f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 5:
					Var0 = { -1491.069f, -3749.399f, 7.8848f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 6:
					Var0 = { -1447.664f, -3763.538f, 4.8851f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 9:
					Var0 = { -1477.099f, -3753.808f, 7.9712f };
					Var0.f_3 = { 0f, 0f, 72.0645f };
					break;
				
				case 10:
					Var0 = { -1469.098f, -3756.622f, 7.9712f };
					Var0.f_3 = { 0f, 0f, -108.8264f };
					break;
				
				case 11:
					Var0 = { -1462.95f, -3755.3f, 4.8842f };
					Var0.f_3 = { 0f, 0f, -17.3354f };
					break;
				
				case 12:
					Var0 = { -1484.953f, -3757.543f, 4.8811f };
					Var0.f_3 = { 0f, 0f, -100.4841f };
					break;
				
				case 14:
					Var0 = { -1464.4f, -3758.122f, 9.4872f };
					Var0.f_3 = { 0f, 0f, 72f };
					break;
				
				case 15:
					Var0 = { -1447.537f, -3764.701f, 7.2679f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 562:
					Var0 = { -1468.309f, -3761.743f, 8.464f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 563:
					Var0 = { -1470.705f, -3760.114f, 8.466f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 564:
					Var0 = { -1468.763f, -3754.111f, 8.464f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 565:
					Var0 = { -1468.523f, -3752.656f, 8.431f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 566:
					Var0 = { -1466.566f, -3752.179f, 8.434f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 567:
					Var0 = { -1469.603f, -3761.323f, 8.464f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 568:
					Var0 = { -1465.59f, -3752.742f, 8.469f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 569:
					Var0 = { -1467.868f, -3761.448f, 7.9712f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 570:
					Var0 = { -1470.374f, -3760.535f, 7.9712f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 571:
					Var0 = { -1468.372f, -3754.463f, 7.9712f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 572:
					Var0 = { -1467.756f, -3752.503f, 7.9712f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 573:
					Var0 = { -1466.979f, -3752.699f, 7.9712f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 574:
					Var0 = { -1468.851f, -3760.945f, 7.971219f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 575:
					Var0 = { -1465.823f, -3753.801f, 7.97122f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 576:
					Var0 = { -1468.691f, -3761.233f, 9.9712f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 577:
					Var0 = { -1470.116f, -3759.786f, 9.9712f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 578:
					Var0 = { -1468.126f, -3753.701f, 9.4712f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 579:
					Var0 = { -1467.965f, -3753.221f, 9.4712f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 580:
					Var0 = { -1466.372f, -3752.868f, 9.4712f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 581:
					Var0 = { -1469.704f, -3760.67f, 9.971219f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 582:
					Var0 = { -1465.417f, -3752.599f, 9.721219f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 34:
					Var0 = { -1466.258f, -3757.699f, 9.501f };
					Var0.f_3 = { -1.2041f, 0.3327f, -104.2489f };
					break;
				
				case 35:
					Var0 = { -1469.413f, -3754.47f, 9.8603f };
					Var0.f_3 = { -9.4021f, 0f, -124.0641f };
					break;
				
				case 40:
					Var0 = { -1480.999f, -3750.434f, 4.8844f };
					Var0.f_3 = { 0f, 0f, 74.7582f };
					break;
				
				case 41:
					Var0 = { -1469.779f, -3759.773f, 8.99f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 42:
					Var0 = { -1469.304f, -3759.843f, 7.99f };
					Var0.f_3 = { 0f, 0f, 70.92f };
					break;
				
				case 46:
					Var0 = { -1484.913f, -3751.229f, 4.88439f };
					Var0.f_3 = { 0f, 0f, -16.57f };
					break;
				
				case 47:
					Var0 = { -1485.11f, -3749.337f, 5.349f };
					Var0.f_3 = { 0f, 0f, -20.16f };
					break;
				
				case 50:
					Var0 = { -1486.254f, -3750.081f, 4.911377f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 51:
					Var0 = { -1484.091f, -3750.708f, 6.911377f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 612:
					Var0 = { -1483.299f, -3747.215f, 5.915f };
					Var0.f_3 = { 0f, 0f, 110.52f };
					break;
				
				case 615:
					Var0 = { -1485.33f, -3747.146f, 4.911378f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 616:
					Var0 = { -1483.3f, -3747.885f, 6.911377f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 56:
					Var0 = { -1487.777f, -3745.036f, 4.8842f };
					Var0.f_3 = { 0f, 0f, 116.7347f };
					break;
				
				case 58:
					Var0 = { -1489.353f, -3745.367f, 7.0828f };
					Var0.f_3 = { -3.8443f, -0.028f, -81.512f };
					break;
				
				case 59:
					Var0 = { -1489.111f, -3744.742f, 7.0897f };
					Var0.f_3 = { -13.452f, -0.0144f, -128.8492f };
					break;
				
				case 60:
					Var0 = { -1489.171f, -3744.723f, 6.9663f };
					Var0.f_3 = { -11.7216f, -0.0144f, -158.9758f };
					break;
				
				case 61:
					Var0 = { -1489.528f, -3745.62f, 6.8107f };
					Var0.f_3 = { -15.2796f, -0.0144f, -107.6647f };
					break;
				
				case 62:
					Var0 = { -1486.3f, -3744.352f, 6.443f };
					Var0.f_3 = { 4.3878f, -0.3949f, 127.0602f };
					break;
				
				case 63:
					Var0 = { -1488.215f, -3746.252f, 7.0088f };
					Var0.f_3 = { -16.9377f, -0.0626f, 23.247f };
					break;
				
				case 64:
					Var0 = { -1488.644f, -3745.901f, 7.1418f };
					Var0.f_3 = { -45f, 0f, 0f };
					break;
				
				case 65:
					Var0 = { -1488.548f, -3745.67f, 5.4501f };
					Var0.f_3 = { -51.3342f, 0f, -18.5131f };
					break;
				
				case 66:
					Var0 = { -1488.019f, -3746.062f, 4.811914f };
					Var0.f_3 = { 0f, 0f, -179f };
					break;
				
				case 67:
					Var0 = { -1488.63f, -3744.632f, 7.136929f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 68:
					Var0 = { -1485.86f, -3744.431f, 4.8846f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 69:
					Var0 = { -1477.398f, -3750.441f, 7.9712f };
					Var0.f_3 = { 0f, 0f, 135.1895f };
					break;
				
				case 70:
					Var0 = { -1478.481f, -3750.172f, 8.471f };
					Var0.f_3 = { 0f, 0f, -134.36f };
					break;
				
				case 71:
					Var0 = { -1480.469f, -3757.628f, 7.969229f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 72:
					Var0 = { -1477.972f, -3749.26f, 10.34622f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 73:
					Var0 = { -1478.017f, -3750.726f, 7.9712f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 74:
					Var0 = { -1478.209f, -3751.382f, 8.9712f };
					Var0.f_3 = { 0f, 0f, 306.4598f };
					break;
				
				case 75:
					Var0 = { -1477.742f, -3750.582f, 8.9712f };
					Var0.f_3 = { 0f, 0f, 169.4526f };
					break;
				
				case 76:
					Var0 = { -1478.209f, -3751.382f, 8.9712f };
					Var0.f_3 = { 0f, 0f, 306.4598f };
					break;
				
				case 78:
					Var0 = { -1483.029f, -3754.988f, 7.978f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 81:
					Var0 = { -1483.636f, -3754.824f, 7.9805f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 82:
					Var0 = { -1482.618f, -3754.687f, 9.7305f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 84:
					Var0 = { -1481.445f, -3749.58f, 7.98f };
					Var0.f_3 = { 0f, 0f, 139.2f };
					break;
				
				case 86:
					Var0 = { -1481.279f, -3750.068f, 7.9805f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 87:
					Var0 = { -1481.873f, -3749.484f, 9.7305f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 89:
					Var0 = { -1461.222f, -3760.608f, 8.97f };
					Var0.f_3 = { 0f, 0f, 69.91f };
					break;
				
				case 90:
					Var0 = { -1461.222f, -3760.608f, 7.97f };
					Var0.f_3 = { 0f, 0f, -110.88f };
					break;
				
				case 93:
					Var0 = { -1446.683f, -3764.576f, 6.0341f };
					Var0.f_3 = { 0f, 0f, -108f };
					break;
				
				case 94:
					Var0 = { -1445.094f, -3764.118f, 4.947f };
					Var0.f_3 = { 0f, 0f, -108f };
					break;
				
				case 95:
					Var0 = { -1447.214f, -3763.414f, 5.947f };
					Var0.f_3 = { 0f, 0f, -109.34f };
					break;
				
				case 96:
					Var0 = { -1445.979f, -3763.761f, 5.947f };
					Var0.f_3 = { 0f, 0f, 74.74f };
					break;
				
				case 97:
					Var0 = { -1448.581f, -3763.566f, 5.947f };
					Var0.f_3 = { 0f, 0f, -60.94f };
					break;
				
				case 98:
					Var0 = { -1447.435f, -3762.875f, 5.947f };
					Var0.f_3 = { 0f, 0f, 123.24f };
					break;
				
				case 99:
					Var0 = { -1445.094f, -3764.118f, 4.947f };
					Var0.f_3 = { 0f, 0f, -108f };
					break;
				
				case 100:
					Var0 = { -1447.406f, -3763.303f, 5.96f };
					Var0.f_3 = { 0f, 0f, -105.26f };
					break;
				
				case 101:
					Var0 = { -1444.846f, -3763.649f, 6.3325f };
					Var0.f_3 = { 1.1681f, 0.0076f, -77.9873f };
					break;
				
				case 102:
					Var0 = { -1471.817f, -3756.322f, 4.8842f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 103:
					Var0 = { -1472.123f, -3757.26f, 6.8842f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 104:
					Var0 = { -1464.724f, -3758.992f, 4.8842f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 105:
					Var0 = { -1464.471f, -3758.163f, 6.8842f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 110:
					Var0 = { -1487.114f, -3744.942f, 4.8842f };
					Var0.f_3 = { 0f, 0f, 307.2348f };
					break;
				
				case 119:
					Var0 = { -1444.848f, -3765.358f, 4.8847f };
					Var0.f_3 = { 0f, 0f, 42.619f };
					break;
				
				case 126:
					Var0 = { -1469.953f, -3760.144f, 7.9712f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 127:
					Var0 = { -1469.652f, -3759.159f, 9.7212f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 130:
					Var0 = { -1483.029f, -3754.988f, 7.978f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 133:
					Var0 = { -1483.636f, -3754.824f, 7.9805f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 134:
					Var0 = { -1482.618f, -3754.687f, 9.7305f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 135:
					Var0 = { -1461.493f, -3760.982f, 7.9715f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 136:
					Var0 = { -1461.05f, -3759.931f, 9.9715f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 169:
					Var0 = { -1463.954f, -3755.54f, 7.971219f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 170:
					Var0 = { -1464.205f, -3756.409f, 9.971219f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 181:
					Var0 = { -1463.829f, -3755.636f, 8.851f };
					Var0.f_3 = { 0f, 0f, -110.727f };
					break;
				
				case 182:
					Var0 = { -1471.324f, -3756.496f, 5.76f };
					Var0.f_3 = { 0f, 0f, -123.12f };
					break;
				
				case 183:
					Var0 = { -1465.113f, -3758.882f, 5.75f };
					Var0.f_3 = { 0f, 0f, 74.88f };
					break;
				
				case 588:
					Var0 = { -1463.023f, -3758.697f, 7.971219f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 587:
					Var0 = { -1462.763f, -3757.992f, 9.971219f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 589:
					Var0 = { -1463.29f, -3758.862f, 8.851f };
					Var0.f_3 = { 0f, 0f, 85.32f };
					break;
				
				case 591:
					Var0 = { -1483.584f, -3745.06f, 6.884395f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 590:
					Var0 = { -1484.416f, -3744.834f, 4.884395f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 592:
					Var0 = { -1484.373f, -3744.65f, 5.75f };
					Var0.f_3 = { 0f, 0f, -16f };
					break;
				
				case 201:
					Var0 = { -1447.458f, -3762.726f, 6.486f };
					Var0.f_3 = { -2.7455f, 0.0091f, -130.6178f };
					break;
				
				case 202:
					Var0 = { -1447.664f, -3763.538f, 4.8851f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 203:
					Var0 = { -1448.587f, -3763.156f, 4.8851f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 204:
					Var0 = { -1447.481f, -3762.614f, 4.8851f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 205:
					Var0 = { -1449.94f, -3765.321f, 4.8851f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 206:
					Var0 = { -1448.046f, -3764.462f, 4.8851f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 207:
					Var0 = { -1448.205f, -3762.231f, 4.8851f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 208:
					Var0 = { -1448.657f, -3759.897f, 4.885f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 209:
					Var0 = { -1450.222f, -3766.645f, 4.8819f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 210:
					Var0 = { -1448.97f, -3764.079f, 4.8851f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 211:
					Var0 = { -1449.211f, -3765.073f, 4.8851f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 212:
					Var0 = { -1447.198f, -3761.39f, 4.8851f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 213:
					Var0 = { -1449.216f, -3766.903f, 4.8846f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 214:
					Var0 = { -1448.629f, -3765.786f, 4.8851f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 215:
					Var0 = { -1447.946f, -3760.925f, 4.8851f };
					Var0.f_3 = { 0f, 0f, 255.7055f };
					break;
				
				case 216:
					Var0 = { -1447.55f, -3759.656f, 4.8821f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 217:
					Var0 = { -1446.781f, -3760.051f, 4.882f };
					Var0.f_3 = { 0f, 0f, 75.7055f };
					break;
				
				case 276:
					Var0 = { -1468.683f, -3756.704f, 4.6207f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 277:
					Var0 = { -1491.069f, -3749.399f, 7.8848f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 298:
					Var0 = { -1483.188f, -3754.52f, 8.9789f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 299:
					Var0 = { -1481.603f, -3750.063f, 8.93f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 311:
					Var0 = { -1462.11f, -3758.155f, 8.0775f };
					Var0.f_3 = { 0f, 0f, 106.1f };
					break;
				
				case 341:
					Var0 = { -1479.579f, -3753.227f, 7.7212f };
					Var0.f_3 = { 0f, 0f, 5.8f };
					break;
				
				case 343:
					Var0 = { -1477.056f, -3749.575f, 5.315f };
					Var0.f_3 = { 0f, 0f, -20.88f };
					break;
				
				case 346:
					Var0 = { -1478.391f, -3750.33f, 4.884243f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 347:
					Var0 = { -1476.525f, -3750.974f, 6.884243f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 618:
					Var0 = { -1475.45f, -3747.539f, 5.915f };
					Var0.f_3 = { 0f, 0f, 110.52f };
					break;
				
				case 621:
					Var0 = { -1477.482f, -3747.602f, 4.884243f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 622:
					Var0 = { -1475.804f, -3748.159f, 6.884243f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 349:
					Var0 = { -1459.512f, -3758.9f, 5.349f };
					Var0.f_3 = { 0f, 0f, 161.64f };
					break;
				
				case 352:
					Var0 = { -1458.289f, -3758.243f, 4.8898f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 353:
					Var0 = { -1460.635f, -3757.476f, 6.8842f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 624:
					Var0 = { -1461.202f, -3761.051f, 5.915f };
					Var0.f_3 = { 0f, 0f, -65.52f };
					break;
				
				case 627:
					Var0 = { -1459.431f, -3761.208f, 4.884149f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 628:
					Var0 = { -1461.364f, -3760.571f, 6.884149f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 354:
					Var0 = { -1486.442f, -3749.991f, 5.78f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 355:
					Var0 = { -1478.653f, -3750.469f, 5.78f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 356:
					Var0 = { -1458.24f, -3758.581f, 5.78f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
			}
			switch (iParam0)
			{
				case 357:
					Var0 = { -1488.263f, -3744.759f, 6.1615f };
					Var0.f_3 = { 0f, 0f, 117f };
					break;
				
				case 358:
					Var0 = { -1479.48f, -3754.686f, 6.1355f };
					Var0.f_3 = { 0f, 0f, 117f };
					break;
				
				case 359:
					Var0 = { -1467.563f, -3757.183f, 6.1355f };
					Var0.f_3 = { 0f, 0f, 117f };
					break;
				
				case 360:
					Var0 = { -1478.651f, -3755.416f, 4.8889f };
					Var0.f_3 = { 0f, 0f, -179f };
					break;
				
				case 361:
					Var0 = { -1479.187f, -3754.366f, 6.8889f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 362:
					Var0 = { -1479.755f, -3755.78f, 7.1482f };
					Var0.f_3 = { -45f, 0f, 0f };
					break;
				
				case 363:
					Var0 = { -1479.755f, -3755.775f, 5.3251f };
					Var0.f_3 = { -62.0222f, 0f, -17.696f };
					break;
				
				case 364:
					Var0 = { -1479.497f, -3756.253f, 6.9088f };
					Var0.f_3 = { 1.2958f, 0.1689f, 20.4999f };
					break;
				
				case 365:
					Var0 = { -1479.497f, -3756.253f, 6.9088f };
					Var0.f_3 = { -7.427f, 0.1171f, 20.4063f };
					break;
				
				case 366:
					Var0 = { -1480.318f, -3754.569f, 7.1457f };
					Var0.f_3 = { -21.5455f, 0.2229f, -158.8809f };
					break;
				
				case 367:
					Var0 = { -1480.159f, -3754.812f, 7.0318f };
					Var0.f_3 = { -14.0111f, 0.1714f, -175.8724f };
					break;
				
				case 368:
					Var0 = { -1480.266f, -3754.571f, 6.6033f };
					Var0.f_3 = { 3.3357f, 0.2198f, -149.3704f };
					break;
				
				case 369:
					Var0 = { -1478.26f, -3754.211f, 4.8889f };
					Var0.f_3 = { 0f, 0f, 312.4691f };
					break;
				
				case 370:
					Var0 = { -1466.68f, -3757.925f, 4.8817f };
					Var0.f_3 = { 0f, 0f, -179f };
					break;
				
				case 371:
					Var0 = { -1467.205f, -3756.834f, 6.8817f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 372:
					Var0 = { -1467.907f, -3758.286f, 7.0358f };
					Var0.f_3 = { -45f, 0f, 0f };
					break;
				
				case 373:
					Var0 = { -1467.909f, -3758.083f, 5.1862f };
					Var0.f_3 = { -62.0222f, 0f, -17.696f };
					break;
				
				case 374:
					Var0 = { -1468.696f, -3758.387f, 6.7899f };
					Var0.f_3 = { 3.1594f, -0.1537f, -52.4148f };
					break;
				
				case 375:
					Var0 = { -1468.696f, -3758.387f, 6.7899f };
					Var0.f_3 = { 3.1594f, -0.1537f, -52.4148f };
					break;
				
				case 376:
					Var0 = { -1468.448f, -3757.17f, 7.21f };
					Var0.f_3 = { -21.8662f, -0.1252f, -161.5497f };
					break;
				
				case 377:
					Var0 = { -1468.4f, -3757.185f, 6.3925f };
					Var0.f_3 = { 0.8043f, -0.1812f, -165.0518f };
					break;
				
				case 378:
					Var0 = { -1468.44f, -3756.969f, 6.7422f };
					Var0.f_3 = { -0.3434f, -0.307f, -153.0706f };
					break;
				
				case 379:
					Var0 = { -1466.88f, -3757.383f, 4.8731f };
					Var0.f_3 = { 0f, 0f, 311.9359f };
					break;
				
				case 380:
					Var0 = { -1485.36f, -3744.655f, 5.8877f };
					Var0.f_3 = { 0f, 0f, 72f };
					break;
				
				case 381:
					Var0 = { -1477.239f, -3753.594f, 5.8927f };
					Var0.f_3 = { 0f, 0f, -63.2f };
					break;
				
				case 382:
					Var0 = { -1465.516f, -3756.622f, 5.8927f };
					Var0.f_3 = { 0f, 0f, -63.2f };
					break;
				
				case 383:
					Var0 = { -1478.103f, -3752.667f, 4.8889f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 384:
					Var0 = { -1466.408f, -3755.691f, 4.8818f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 385:
					Var0 = { -1486.232f, -3745.631f, 7.1342f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 386:
					Var0 = { -1477.522f, -3753.809f, 7.1389f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 387:
					Var0 = { -1465.799f, -3756.852f, 7.1318f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 388:
					Var0 = { -1424.162f, -3771.192f, 4.6323f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 389:
					Var0 = { -1425.755f, -3770.688f, 7.6323f };
					Var0.f_3 = { 0f, 0f, 78.4651f };
					break;
				
				case 390:
					Var0 = { -1425.334f, -3770.985f, 4.8876f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 391:
					Var0 = { -1423.754f, -3769.757f, 6.6128f };
					Var0.f_3 = { -16.1178f, 0f, 116.8816f };
					break;
				
				case 392:
					Var0 = { -1424.657f, -3770.128f, 4.885f };
					Var0.f_3 = { -0.067f, 0f, 52.003f };
					break;
				
				case 393:
					Var0 = { -1424.824f, -3771.119f, 4.874f };
					Var0.f_3 = { 0f, 0f, 74.52f };
					break;
				
				case 394:
					Var0 = { -1424.182f, -3769.503f, 6.2866f };
					Var0.f_3 = { 2.1025f, 0.0535f, 159.5091f };
					break;
				
				case 395:
					Var0 = { -1411.107f, -3768.087f, 8.1648f };
					Var0.f_3 = { -10.4774f, 0f, 96.1273f };
					break;
				
				case 396:
					Var0 = { -1408.346f, -3748.977f, 14.3548f };
					Var0.f_3 = { -8.6722f, 0f, 110.6113f };
					break;
				
				case 397:
					Var0 = { -1422.037f, -3771.962f, 4.8822f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 398:
					Var0 = { -1422.961f, -3771.58f, 4.8822f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 399:
					Var0 = { -1421.655f, -3771.038f, 4.8824f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 400:
					Var0 = { -1421.114f, -3772.345f, 4.8822f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 401:
					Var0 = { -1422.42f, -3772.886f, 4.8827f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 402:
					Var0 = { -1422.578f, -3770.656f, 4.8824f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 403:
					Var0 = { -1420.731f, -3771.421f, 4.8824f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 404:
					Var0 = { -1421.496f, -3773.269f, 4.8827f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 405:
					Var0 = { -1423.344f, -3772.503f, 4.8827f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 406:
					Var0 = { -1423.885f, -3771.197f, 4.8822f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 407:
					Var0 = { -1421.272f, -3770.115f, 4.8828f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 408:
					Var0 = { -1420.19f, -3772.728f, 4.8822f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 409:
					Var0 = { -1422.803f, -3773.81f, 4.8828f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 410:
					Var0 = { -1423.12f, -3769.349f, 4.8829f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 411:
					Var0 = { -1419.424f, -3770.88f, 4.8828f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 412:
					Var0 = { -1420.955f, -3774.575f, 4.8831f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 413:
					Var0 = { -1422.037f, -3771.962f, 4.8822f };
					Var0.f_3 = { 0f, 0f, -111.9612f };
					break;
				
				case 414:
					Var0 = { -1424.983f, -3771.068f, 4.865f };
					Var0.f_3 = { 0f, 0f, 72f };
					break;
				
				case 415:
					Var0 = { -1424.182f, -3769.503f, 6.2866f };
					Var0.f_3 = { 2.1025f, 0.0535f, 159.5091f };
					break;
				
				case 416:
					Var0 = { -1424.629f, -3770.126f, 6.318f };
					Var0.f_3 = { 0f, 0f, 77.2f };
					break;
				
				case 417:
					Var0 = { -1504.034f, -3721.481f, 18.6389f };
					Var0.f_3 = { -20.8595f, 0f, -153.4179f };
					break;
				
				case 418:
					Var0 = { -1425.131f, -3771.658f, 6.08f };
					Var0.f_3 = { 0f, 0f, 72f };
					break;
				
				case 419:
					Var0 = { -1425.331f, -3772.208f, 4.63f };
					Var0.f_3 = { 0f, 0f, -108f };
					break;
				
				case 420:
					Var0 = { -1472.25f, -3753.718f, 6.5f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 586:
					Var0 = { -1462.875f, -3757.102f, 6.5f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 585:
					Var0 = { -1482.616f, -3749.898f, 6.5f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 421:
					Var0 = { -1477.534f, -3753.708f, 9f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 550:
					Var0 = { -1416.474f, -3771.997f, 5.5693f };
					Var0.f_3 = { 0f, 0f, 163.44f };
					break;
				
				case 551:
					Var0 = { -1423.845f, -3771.194f, 7.2235f };
					Var0.f_3 = { 6.157f, -0.5868f, -114.8645f };
					break;
				
				case 552:
					Var0 = { -1448.08f, -3765.959f, 12.2481f };
					Var0.f_3 = { 0f, 0f, 161.525f };
					break;
				
				case 553:
					Var0 = { -1504.292f, -3747.308f, 7.03f };
					Var0.f_3 = { 0f, 0f, -91.08f };
					break;
				
				case 554:
					Var0 = { -1448.323f, -3765.571f, 11.938f };
					Var0.f_3 = { 0f, 0f, 161.54f };
					break;
				
				case 555:
					Var0 = { -1447.279f, -3765.672f, 10.90751f };
					break;
				
				case 556:
					Var0 = { -1448.415f, -3765.298f, 12.65751f };
					break;
				
				case 593:
					Var0 = { -1415.715f, -3771.379f, 4.882401f };
					break;
				
				case 594:
					Var0 = { -1416.696f, -3771.028f, 6.632306f };
					break;
				
				case 595:
					Var0 = { -1504.859f, -3746.824f, 6.820841f };
					break;
				
				case 596:
					Var0 = { -1504.818f, -3747.812f, 8.310176f };
					break;
				
				case 118:
					Var0 = { -1416.474f, -3771.997f, 5.5693f };
					break;
				
				case 117:
					Var0 = { -1448.08f, -3765.959f, 12.281f };
					break;
				
				case 597:
					Var0 = { -1504.292f, 3747.308f, 7.03f };
					break;
				
				case 438:
					Var0 = { -1482.661f, -3753.946f, 9.1149f };
					Var0.f_3 = { 0f, 0f, 90.67f };
					break;
				
				case 439:
					Var0 = { -1482.428f, -3753.661f, -9.0072f };
					Var0.f_3 = { 0f, 0f, 136.08f };
					break;
				
				case 440:
					Var0 = { -1482.195f, -3752.423f, 8.9881f };
					Var0.f_3 = { 0f, 0f, -109.08f };
					break;
				
				case 441:
					Var0 = { -1480.779f, -3753.358f, 7.9805f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 442:
					Var0 = { -1480.385f, -3752.208f, 9.9805f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 443:
					Var0 = { -1482.369f, -3750.713f, 9.797f };
					Var0.f_3 = { 0f, 0f, 160.92f };
					break;
				
				case 451:
					Var0 = { -1412.098f, -3776.824f, 4.6095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 452:
					Var0 = { -1410.334f, -3776.322f, 4.6095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 453:
					Var0 = { -1410.334f, -3776.322f, 4.6095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 454:
					Var0 = { -1409.817f, -3774.685f, 4.6095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 455:
					Var0 = { -1409.817f, -3774.685f, 4.6095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 456:
					Var0 = { -1411.213f, -3773.381f, 4.6095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 457:
					Var0 = { -1412.801f, -3777.227f, 4.6097f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 458:
					Var0 = { -1412.741f, -3773.397f, 4.6097f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 459:
					Var0 = { -1411.074f, -3776.781f, 6.1095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 460:
					Var0 = { -1411.074f, -3776.781f, 6.1095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 461:
					Var0 = { -1409.814f, -3775.525f, 6.1095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 462:
					Var0 = { -1409.814f, -3775.525f, 6.1095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 463:
					Var0 = { -1410.314f, -3773.913f, 6.1095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 464:
					Var0 = { -1410.314f, -3773.913f, 6.1095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 465:
					Var0 = { -1413.634f, -3776.301f, 6.3597f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 466:
					Var0 = { -1411.531f, -3773.027f, 6.3597f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 467:
					Var0 = { -1473.431f, -3755.282f, 11.7769f };
					Var0.f_3 = { 0f, 0f, 73.6618f };
					break;
				
				case 468:
					Var0 = { -1462.827f, -3757.944f, 7.9712f };
					Var0.f_3 = { 0f, 0f, -116.3799f };
					break;
				
				case 469:
					Var0 = { -1475.21f, -3761.727f, 4.8823f };
					Var0.f_3 = { 0f, 0f, -68.2425f };
					break;
				
				case 476:
					Var0 = { -1464.017f, -3755.137f, 4.8842f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 483:
					Var0 = { -1452.078f, -3762.095f, 5.5102f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 484:
					Var0 = { -1477.694f, -3753.838f, 10.7213f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 485:
					Var0 = { -1411.949f, -3777.132f, 4.595f };
					Var0.f_3 = { 0f, 0f, -12.96f };
					break;
				
				case 599:
					Var0 = { -1411.802f, -3777.198f, 4.593f };
					Var0.f_3 = { 0f, 0f, -10.8f };
					break;
				
				case 605:
					Var0 = { -1411.802f, -3777.198f, 4.593f };
					Var0.f_3 = { 0f, 0f, -10.8f };
					break;
				
				case 486:
					Var0 = { -1410.77f, -3776.988f, 4.595f };
					Var0.f_3 = { 0f, 0f, 5.4f };
					break;
				
				case 600:
					Var0 = { -1410.848f, -3777.035f, 4.593f };
					Var0.f_3 = { 0f, 0f, 23.4f };
					break;
				
				case 606:
					Var0 = { -1410.848f, -3777.035f, 4.593f };
					Var0.f_3 = { 0f, 0f, 23.4f };
					break;
				
				case 487:
					Var0 = { -1410.151f, -3776.356f, 4.595f };
					Var0.f_3 = { 0f, 0f, 57.6f };
					break;
				
				case 601:
				case 607:
					Var0 = { -1410.062f, -3776.337f, 4.593f };
					Var0.f_3 = { 0f, 0f, 49.68f };
					break;
				
				case 488:
					Var0 = { -1409.828f, -3775.41f, 4.595f };
					Var0.f_3 = { 0f, 0f, 82.8f };
					break;
				
				case 602:
				case 608:
					Var0 = { -1409.749f, -3775.25f, 4.593f };
					Var0.f_3 = { 0f, 0f, 77.76f };
					break;
				
				case 489:
					Var0 = { -1410.04f, -3774.39f, 4.595f };
					Var0.f_3 = { 0f, 0f, 114.12f };
					break;
				
				case 603:
				case 609:
					Var0 = { -1409.985f, -3774.344f, 4.593f };
					Var0.f_3 = { 0f, 0f, 110.16f };
					break;
				
				case 490:
					Var0 = { -1410.756f, -3773.671f, 4.595f };
					Var0.f_3 = { 0f, 0f, 147.24f };
					break;
				
				case 604:
				case 610:
					Var0 = { -1410.734f, -3773.636f, 4.593f };
					Var0.f_3 = { 0f, 0f, 147.24f };
					break;
				
				case 491:
					Var0 = { -1413.856f, -3774.906f, 4.565f };
					Var0.f_3 = { 0f, 0f, -3.6f };
					break;
				
				case 492:
					Var0 = { -1413.922f, -3775.091f, 4.568f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 545:
					Var0 = { -1422.092f, -3771.913f, 8.99f };
					Var0.f_3 = { 0f, 0f, -105.48f };
					break;
				
				case 543:
					Var0 = { -1421.924f, -3771.311f, 7.980618f };
					break;
				
				case 544:
					Var0 = { -1422.29f, -3772.494f, 9.730741f };
					break;
				
				case 493:
					Var0 = { -1487.771f, -3755.084f, 4.8841f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 494:
					Var0 = { -1473.982f, -3748.51f, 4.8842f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 495:
					Var0 = { -1471.58f, -3751.941f, 4.8842f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 496:
					Var0 = { -1458.156f, -3756.48f, 4.8842f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 497:
					Var0 = { -1457.04f, -3760.4f, 4.7f };
					Var0.f_3 = { 2f, -0.7f, 165.7f };
					break;
				
				case 498:
					Var0 = { -1457.855f, -3762.939f, 5.3f };
					Var0.f_3 = { 0f, 0f, 160.625f };
					break;
				
				case 499:
					Var0 = { -1460.637f, -3761.931f, 5.3f };
					Var0.f_3 = { 0f, 0f, 162.494f };
					break;
				
				case 503:
					Var0 = { -1470.853f, -3756.249f, 14.9899f };
					break;
				
				case 516:
					Var0 = { -1458.544f, -3759.33f, 10.84487f };
					break;
				
				case 517:
					Var0 = { -1458.574f, -3757.84f, 13.21987f };
					break;
				
				case 583:
					Var0 = { -1460.078f, -3761.072f, 10.84484f };
					break;
				
				case 584:
					Var0 = { -1459.093f, -3758.036f, 13.15734f };
					break;
				
				case 518:
					Var0 = { -1464.525f, -3756.986f, 10.72609f };
					break;
				
				case 519:
					Var0 = { -1465.161f, -3759.006f, 13.16036f };
					break;
				
				case 520:
					Var0 = { -1467.205f, -3756.822f, 11.7822f };
					Var0.f_3 = { 0f, 0f, 72.5473f };
					break;
				
				case 521:
					Var0 = { -1458.401f, -3760.269f, 10.9074f };
					Var0.f_3 = { 0f, 0f, 250f };
					break;
				
				case 522:
					Var0 = { -1458.855f, -3757.521f, 12.21145f };
					Var0.f_3 = { 0.68509f, -0.496208f, 163.4133f };
					break;
				
				case 523:
					Var0 = { -1459.906f, -3760.123f, 10.925f };
					Var0.f_3 = { 0f, 0f, 71.73f };
					break;
				
				case 524:
					Var0 = { -1458.855f, -3757.521f, 12.21145f };
					Var0.f_3 = { 0.68509f, -0.496208f, 163.4133f };
					break;
				
				case 525:
					Var0 = { -1460.229f, -3760.121f, 10.925f };
					Var0.f_3 = { 0f, 0f, 71.73f };
					break;
				
				case 526:
					Var0 = { -1460.354f, -3760.894f, 12.09f };
					Var0.f_3 = { 0f, 0f, 72.25f };
					break;
				
				case 527:
					Var0 = { -1411.424f, -3775.375f, 4.7548f };
					Var0.f_3 = { -89.5007f, 0.3909f, -105.0659f };
					break;
				
				case 561:
					Var0 = { -1424.229f, -3768.595f, 7.3809f };
					Var0.f_3 = { -28.298f, -0.2891f, -177.0236f };
					break;
				
				case 598:
					Var0 = { -1462.959f, -3758.295f, 25.7771f };
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_41(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 83:
			switch (iParam0)
			{
				case 278:
					Var0 = { -780.3696f, 342.9996f, 186.1041f };
					break;
				
				case 279:
					Var0 = { -790.949f, 343.2666f, 190.1135f };
					break;
				
				case 280:
					Var0 = { -801.4162f, 325.805f, 205.0629f };
					break;
				
				case 281:
					Var0 = { -801.5137f, 342.8037f, 209.2183f };
					break;
				
				case 282:
					Var0 = { -796.1956f, 440.2408f, 79.64348f };
					Var0.f_3 = { 100f, 200f, 0f };
					break;
				
				case 283:
					Var0 = { -862.6429f, 353.2339f, 74.35394f };
					Var0.f_3 = { 100f, 200f, 0f };
					break;
				
				case 0:
					Var0 = { -795.23f, 326.754f, 207.017f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 1:
					Var0 = { -780.4277f, 318.1914f, 186.9136f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 2:
					Var0 = { -783.2335f, 318.1667f, 189.6636f };
					Var0.f_3 = { 0f, 0f, 180.0391f };
					break;
				
				case 3:
					Var0 = { -773.2f, 322.8f, 195.9f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 4:
					Var0 = { -793.4061f, 317.2896f, 185.7757f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 5:
					Var0 = { -793.4227f, 343.811f, 190.2164f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 276:
					Var0 = { -798.6541f, 325.8727f, 189.2506f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 277:
					Var0 = { -798.7937f, 340.662f, 194.0852f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 6:
					Var0 = { -782.0123f, 319.0174f, 186.9539f };
					Var0.f_3 = { 0f, 0f, 4.405f };
					break;
				
				case 7:
					Var0 = { -797.852f, 325.335f, 186.321f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 8:
					Var0 = { -794.578f, 321.323f, 188.731f };
					Var0.f_3 = { -7.632f, 0f, -211.063f };
					break;
				
				case 141:
					Var0 = { -800.012f, 325.846f, 187.895f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 142:
					Var0 = { -799.987f, 325.496f, 189.045f };
					Var0.f_3 = { 180f, -180f, -90f };
					break;
				
				case 143:
					Var0 = { -799.987f, 323.601f, 189.04f };
					Var0.f_3 = { 180f, -180f, -90f };
					break;
				
				case 144:
					Var0 = { -797.079f, 325.817f, 187.844f };
					Var0.f_3 = { 0.1322f, 0.0536f, -269.934f };
					break;
				
				case 158:
					Var0 = { -797.944f, 325.029f, 187.849f };
					Var0.f_3 = { -2.3423f, 0.0392f, -267.756f };
					break;
				
				case 145:
					Var0 = { -797.073f, 324.826f, 187.845f };
					Var0.f_3 = { -0.2118f, 0.062f, -268.343f };
					break;
				
				case 146:
					Var0 = { -797.079f, 325.817f, 187.844f };
					Var0.f_3 = { 0.994f, 0.0536f, 83.2112f };
					break;
				
				case 147:
					Var0 = { -798.294f, 327.416f, 188.283f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 148:
					Var0 = { -798.786f, 327.386f, 187.26f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 153:
					Var0 = { -799.622f, 325.8f, 186.317f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 154:
					Var0 = { -798.042f, 325.939f, 188.428f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 155:
					Var0 = { -798.042f, 325.938f, 187.483f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 157:
					Var0 = { -797.421f, 325.817f, 187.845f };
					Var0.f_3 = { -7.145f, 0.0536f, -41.7083f };
					break;
				
				case 234:
					Var0 = { -798.4081f, 327.0646f, 188.498f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 149:
					Var0 = { -798.0435f, 322.5277f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 1.7263f };
					break;
				
				case 150:
					Var0 = { -795.0529f, 323.3902f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 53.5498f };
					break;
				
				case 151:
					Var0 = { -795.3783f, 326.7546f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 89.7247f };
					break;
				
				case 152:
					Var0 = { -797.6187f, 327.2416f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 107.3385f };
					break;
				
				case 169:
					Var0 = { -778.2188f, 332.2201f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 170:
					Var0 = { -776.9868f, 332.502f, 208.3432f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 173:
					Var0 = { -794.218f, 323.43f, 186.316f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 174:
					Var0 = { -797.392f, 327.146f, 186.325f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 175:
					Var0 = { -797.282f, 327.806f, 186.325f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 176:
					Var0 = { -797.172f, 328.466f, 186.325f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 177:
					Var0 = { -797.062f, 329.126f, 186.325f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 178:
					Var0 = { -785.307f, 324.03f, 186.316f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 179:
					Var0 = { -788.996f, 326.935f, 187.055f };
					Var0.f_3 = { 9.1439f, 0f, -226.355f };
					break;
				
				case 180:
					Var0 = { -788.295f, 326.2f, 187.055f };
					Var0.f_3 = { 9.1439f, 0f, -226.355f };
					break;
				
				case 201:
					Var0 = { -781.1226f, 318.9703f, 188.2957f };
					Var0.f_3 = { -3.5408f, 0.0466f, 166.3594f };
					break;
				
				case 235:
					Var0 = { -787.896f, 347.644f, 186.115f };
					Var0.f_3 = { -0.3015f, 0f, -197.848f };
					break;
				
				case 261:
					Var0 = { -798.174f, 324.572f, 187.308f };
					Var0.f_3 = { 0f, 0f, 57f };
					break;
				
				case 262:
					Var0 = { -798.174f, 324.572f, 187.308f };
					Var0.f_3 = { 0f, 0f, 57f };
					break;
				
				case 263:
					Var0 = { -786.274f, 343.352f, 187.139f };
					Var0.f_3 = { 0f, 0f, -40.68f };
					break;
				
				case 264:
					Var0 = { -786.274f, 343.352f, 187.139f };
					Var0.f_3 = { 0f, 0f, -40.68f };
					break;
				
				case 265:
					Var0 = { -786.274f, 343.352f, 187.139f };
					Var0.f_3 = { 0f, 0f, -40.68f };
					break;
				
				case 266:
					Var0 = { -786.274f, 343.352f, 187.139f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 267:
					Var0 = { -785.961f, 338.227f, 187.164f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 268:
					Var0 = { -785.961f, 338.227f, 187.164f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 269:
					Var0 = { -785.961f, 338.227f, 187.164f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 270:
					Var0 = { -785.961f, 338.227f, 187.164f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 312:
					Var0 = { -785.874f, 337.952f, 187.164f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 313:
					Var0 = { -785.874f, 337.952f, 187.164f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 314:
					Var0 = { -785.874f, 337.952f, 187.164f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 315:
					Var0 = { -785.874f, 337.952f, 187.164f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 316:
					Var0 = { -785.874f, 337.952f, 187.164f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 317:
					Var0 = { -785.874f, 337.952f, 187.164f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 318:
					Var0 = { -786.099f, 340.452f, 187.17f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 319:
					Var0 = { -786.099f, 340.452f, 187.17f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 320:
					Var0 = { -786.099f, 340.452f, 187.17f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 321:
					Var0 = { -786.099f, 340.452f, 187.17f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 322:
					Var0 = { -786.099f, 340.452f, 187.17f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 323:
					Var0 = { -786.099f, 340.452f, 187.17f };
					Var0.f_3 = { 0f, 0f, -91.8f };
					break;
				
				case 324:
					Var0 = { -785.522f, 327.189f, 187.361f };
					Var0.f_3 = { 0f, 0f, 83.88f };
					break;
				
				case 325:
					Var0 = { -785.522f, 327.189f, 187.361f };
					Var0.f_3 = { 0f, 0f, 83.88f };
					break;
				
				case 326:
					Var0 = { -785.522f, 327.189f, 187.361f };
					Var0.f_3 = { 0f, 0f, 83.88f };
					break;
				
				case 327:
					Var0 = { -785.449f, 327.827f, 187.326f };
					Var0.f_3 = { 0f, 0f, 83.88f };
					break;
				
				case 328:
					Var0 = { -785.449f, 327.827f, 187.326f };
					Var0.f_3 = { 0f, 0f, 83.88f };
					break;
				
				case 329:
					Var0 = { -785.449f, 327.827f, 187.326f };
					Var0.f_3 = { 0f, 0f, 83.88f };
					break;
				
				case 271:
					Var0 = { -786.042f, 337.4311f, 186.1135f };
					Var0.f_3 = { 0f, 0f, -97.3161f };
					break;
				
				case 272:
					Var0 = { -786.0505f, 338.8861f, 186.1135f };
					Var0.f_3 = { 0f, 0f, -89.4383f };
					break;
				
				case 273:
					Var0 = { -785.3838f, 339.5632f, 186.1135f };
					Var0.f_3 = { 0f, 0f, 7.7813f };
					break;
				
				case 274:
					Var0 = { -783.6962f, 339.5856f, 186.1135f };
					Var0.f_3 = { 0f, 0f, 27.9575f };
					break;
				
				case 275:
					Var0 = { -787.7805f, 334.9232f, 186.1134f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 304:
					Var0 = { -789.041f, 335.29f, 180.108f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 305:
					Var0 = { -782.449f, 317.53f, 188.062f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 308:
					Var0 = { -787.783f, 322.956f, 186.316f };
					Var0.f_3 = { 0f, 0f, -156.402f };
					break;
				
				case 309:
					Var0 = { -786.884f, 318.407f, 186.316f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 14:
					Var0 = { -780.405f, 338.4678f, 186.1134f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 557:
					Var0 = { -780.4701f, 338.4247f, 187.5084f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 558:
					Var0 = { -780.3515f, 338.4704f, 186.1632f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 559:
					Var0 = { -780.3515f, 338.4704f, 186.1134f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 15:
					Var0 = { -780.5159f, 317.8105f, 189.9103f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 9:
					Var0 = { -787.512f, 321.1864f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 343.1089f;
					break;
				
				case 10:
					Var0 = { -789.3117f, 341.6458f, 186.1135f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 239.3656f;
					break;
				
				case 11:
					Var0 = { -784.5588f, 325.9694f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 52.8327f;
					break;
				
				case 12:
					Var0 = { -787.5304f, 335.4393f, 186.1135f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 290.6938f;
					break;
				
				case 13:
					Var0 = { -805.6618f, 332.3758f, 189.7133f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 175.5243f;
					break;
				
				case 16:
					Var0 = { -786.672f, 337.58f, 186.613f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 22:
					Var0 = { -786.3284f, 337.1518f, 186.15f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 28:
					Var0 = { -786.335f, 338.0908f, 187.65f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 17:
					Var0 = { -785.343f, 340.278f, 186.613f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 23:
					Var0 = { -785.9196f, 339.7838f, 186.15f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 29:
					Var0 = { -784.7827f, 339.8064f, 187.65f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 18:
					Var0 = { -784.286f, 340.278f, 186.613f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 24:
					Var0 = { -783.6854f, 339.7922f, 186.15f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 30:
					Var0 = { -784.7827f, 339.8064f, 187.65f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 34:
					Var0 = { -788.0222f, 340.1685f, 187.9267f };
					Var0.f_3 = { -7.239f, 0f, -102.9762f };
					break;
				
				case 35:
					Var0 = { -782.9066f, 338.4675f, 187.2776f };
					Var0.f_3 = { 1.9639f, 0f, -89.4888f };
					break;
				
				case 36:
					Var0 = { -782.9214f, 338.467f, 187.6588f };
					Var0.f_3 = { 2.0141f, -0.008f, -89.539f };
					break;
				
				case 560:
					Var0 = { -782.9009f, 337.7527f, 187.2779f };
					Var0.f_3 = { 2.0696f, -0.0281f, -89.4518f };
					break;
				
				case 37:
					Var0 = { -795.085f, 333.845f, 205.221f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 38:
					Var0 = { -781.9872f, 343.5015f, 188.2368f };
					Var0.f_3 = { -12.4175f, 0f, 153.0748f };
					break;
				
				case 39:
					Var0 = { -788.0585f, 343.5015f, 188.2368f };
					Var0.f_3 = { -12.4175f, 0f, -174.9393f };
					break;
				
				case 120:
					Var0 = { -795.7497f, 339.9315f, 191.1167f };
					Var0.f_3 = { -3.984f, 0f, 149.8896f };
					break;
				
				case 121:
					Var0 = { -799.9801f, 340.0232f, 191.1167f };
					Var0.f_3 = { -3.984f, 0f, -148.3764f };
					break;
				
				case 125:
					Var0 = { -777.5101f, 328.2689f, 208.0708f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 40:
					Var0 = { -797.7752f, 327.1325f, 189.7135f };
					Var0.f_3 = { 0f, 0f, 357.0931f };
					break;
				
				case 41:
					Var0 = { -792.9531f, 341.6f, 206.2202f };
					Var0.f_3 = { 0f, 0f, 119.72f };
					break;
				
				case 126:
					Var0 = { -786.1208f, 337.9957f, 186.1135f };
					break;
				
				case 127:
					Var0 = { -786.1259f, 339.1616f, 187.8635f };
					break;
				
				case 42:
					Var0 = { -785.625f, 338.649f, 186.103f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 46:
					Var0 = { -795.8572f, 336.1213f, 190.7138f };
					Var0.f_3 = { 0f, 0f, 125.23f };
					break;
				
				case 47:
					Var0 = { -797.682f, 335.683f, 190.155f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 48:
					Var0 = { -616.5919f, 65.3481f, 101.8033f };
					Var0.f_3 = { 0.9407f, 0.0521f, 147.8146f };
					break;
				
				case 49:
					Var0 = { -619.5043f, 62.4537f, 102.0873f };
					Var0.f_3 = { -1.4768f, -0.0422f, -101.6693f };
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = { -796.5303f, 334.3555f, 189.7135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 51:
					Var0 = { -796.5093f, 336.8433f, 191.7135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 612:
					Var0 = { -799.787f, 336.563f, 190.75f };
					Var0.f_3 = { 0f, 0f, -133.2f };
					break;
				
				case 615:
					Var0 = { -799.1369f, 334.6384f, 189.7135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 616:
					Var0 = { -799.1272f, 336.8023f, 191.7135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 56:
					Var0 = { -804.0815f, 335.5993f, 190.8021f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 57:
					Var0 = { -804.216f, 335.065f, 189.952f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 64:
					Var0 = { -803.8332f, 335.6036f, 192.1505f };
					Var0.f_3 = { -45f, 0f, 0f };
					break;
				
				case 65:
					Var0 = { -803.7757f, 335.7051f, 192.0836f };
					Var0.f_3 = { -64.3203f, 0f, 90.0509f };
					break;
				
				case 58:
					Var0 = { -787.2075f, 330.4225f, 201.8932f };
					Var0.f_3 = { 0.0309f, 0.0078f, 94.294f };
					break;
				
				case 59:
					Var0 = { -804.6812f, 335.9174f, 191.8717f };
					Var0.f_3 = { 3.6086f, 0f, -100.4403f };
					break;
				
				case 60:
					Var0 = { -805.2352f, 335.686f, 191.5975f };
					Var0.f_3 = { -7.8804f, 0f, -90f };
					break;
				
				case 61:
					Var0 = { -805.226f, 335.5853f, 192.2601f };
					Var0.f_3 = { -18.726f, 0.0564f, -65.9443f };
					break;
				
				case 62:
					Var0 = { -806.9933f, 331.4514f, 192.5549f };
					Var0.f_3 = { -24.3193f, 0f, -37.258f };
					break;
				
				case 63:
					Var0 = { -806.9933f, 331.4514f, 192.5549f };
					Var0.f_3 = { -24.3193f, 0f, -37.258f };
					break;
				
				case 66:
					Var0 = { -805.214f, 335.7104f, 189.7554f };
					Var0.f_3 = { 0f, 0f, 1f };
					break;
				
				case 67:
					Var0 = { -803.511f, 335.6873f, 192.2554f };
					break;
				
				case 110:
					Var0 = { -804.4796f, 334.4111f, 189.7136f };
					Var0.f_3 = { 0f, 0f, 164.7228f };
					break;
				
				case 68:
					Var0 = { -803.2f, 333.1f, 189.8f };
					break;
				
				case 109:
					Var0 = { -803.209f, 332.229f, 190.863f };
					break;
				
				case 69:
					Var0 = { -783.0114f, 336.0096f, 186.1135f };
					Var0.f_3 = { 0f, 0f, 318.1693f };
					break;
				
				case 70:
					Var0 = { -781.938f, 335.66f, 186.65f };
					Var0.f_3 = { 0f, 0f, 42.25f };
					break;
				
				case 71:
					Var0 = { -787.1086f, 335.7561f, 186.1136f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 72:
					Var0 = { -781.3259f, 337.3147f, 188.6136f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 73:
					Var0 = { -782.9689f, 336.8207f, 187.1f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 74:
					Var0 = { -782.2608f, 336.8359f, 187.1499f };
					Var0.f_3 = { 0f, 0f, 131.8715f };
					break;
				
				case 75:
					Var0 = { -782.9863f, 336.1273f, 187.1136f };
					Var0.f_3 = { 0f, 0f, 309.98f };
					break;
				
				case 76:
					Var0 = { -782.2608f, 336.8359f, 187.1499f };
					Var0.f_3 = { 0f, 0f, 318.1693f };
					break;
				
				case 89:
					Var0 = { -792.8026f, 330.2704f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0.11f };
					break;
				
				case 91:
					Var0 = { -791.3608f, 331.6151f, 206.7155f };
					Var0.f_3 = { -6.1061f, 0f, 124.716f };
					break;
				
				case 90:
					Var0 = { -784.825f, 327.887f, 186.314f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 92:
					Var0 = { -791.1231f, 329.0256f, 207.0468f };
					Var0.f_3 = { -10.5496f, 0f, 38.2733f };
					break;
				
				case 135:
					Var0 = { -784.7092f, 327.2737f, 186.3132f };
					break;
				
				case 136:
					Var0 = { -784.7196f, 328.3914f, 188.1346f };
					break;
				
				case 77:
					Var0 = { -795.4578f, 337.2369f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 82.6775f };
					break;
				
				case joaat("mpsv_lp0_31"):
					Var0 = { -796.8416f, 336.5425f, 206.3782f };
					Var0.f_3 = { 4.1239f, 0.032f, -35.7362f };
					break;
				
				case 80:
					Var0 = { -794.1184f, 339.0253f, 207.2513f };
					Var0.f_3 = { -14.3736f, 0f, 132.7127f };
					break;
				
				case 81:
					Var0 = { -796.8088f, 337.2715f, 207.0081f };
					break;
				
				case 82:
					Var0 = { -794.73f, 337.4924f, 205.2183f };
					break;
				
				case 78:
					Var0 = { Vector(206.15f, 337.263f, -796.115f) + Vector(0.0084f, -0.1213f, -0.0385f) + Vector(-0.0001f, 0.0008f, 0.0245f) };
					Var0.f_3 = { Vector(84.6f, 0f, 0f) + Vector(5.64f, 0f, 0f) };
					break;
				
				case 83:
					Var0 = { -793.3814f, 333.4903f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 182.6354f };
					break;
				
				case 85:
					Var0 = { -792.4017f, 332.1834f, 206.589f };
					Var0.f_3 = { -0.4759f, 0f, 56.2407f };
					break;
				
				case 88:
					Var0 = { -792.6917f, 334.5816f, 206.9306f };
					Var0.f_3 = { -15.2511f, -0.1442f, 161.552f };
					break;
				
				case 84:
					Var0 = { -784.798f, 330.004f, 186.315f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 86:
					Var0 = { -784.6601f, 330.8065f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 87:
					Var0 = { -784.6879f, 329.7155f, 188.1622f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 93:
					Var0 = { -782.4497f, 317.5156f, 188.0627f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 94:
					Var0 = { -781.52f, 316.153f, 186.9748f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 95:
					Var0 = { -781.506f, 318.387f, 187.9748f };
					Var0.f_3 = { 0f, 0f, 178.664f };
					break;
				
				case 96:
					Var0 = { -781.4541f, 317.1049f, 187.9748f };
					Var0.f_3 = { 0f, 0f, 2.74f };
					break;
				
				case 97:
					Var0 = { -792.0729f, 319.6482f, 187.9748f };
					Var0.f_3 = { 0f, 0f, -132.94f };
					break;
				
				case 98:
					Var0 = { -781.0619f, 318.7636f, 187.9748f };
					Var0.f_3 = { 0f, 0f, 141.24f };
					break;
				
				case 99:
					Var0 = { -782.45f, 317.52f, 188.03f };
					Var0.f_3 = { 0.18f, 0f, 180f };
					break;
				
				case 100:
					Var0 = { -781.4619f, 318.6847f, 187.9561f };
					Var0.f_3 = { 0f, 0f, -177.26f };
					break;
				
				case 101:
					Var0 = { -781.0864f, 316.1974f, 188.3137f };
					Var0.f_3 = { 3.2417f, 0f, 13.251f };
					break;
				
				case 181:
					Var0 = { -777.695f, 332.054f, 207.34f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 106:
					Var0 = { -796.3882f, 336.8372f, 202.5976f };
					Var0.f_3 = { -22.7361f, 0f, -129.0221f };
					break;
				
				case 107:
					Var0 = { -801.9172f, 326.3802f, 207.4878f };
					Var0.f_3 = { -35.2381f, 0f, -111.7465f };
					break;
				
				case 108:
					Var0 = { -781.9736f, 316.5539f, 187.9136f };
					Var0.f_3 = { 90f, 0f, 0f };
					break;
				
				case 117:
					Var0 = { -794.9332f, 335.1039f, 201.5308f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 118:
					Var0 = { -800.421f, 325.5437f, 206.1822f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 119:
					Var0 = { -784.6674f, 316.7436f, 186.9136f };
					Var0.f_3 = { 0f, 0f, 280.1147f };
					break;
				
				case 122:
					Var0 = { -782.0186f, 321.1352f, 186.9539f };
					Var0.f_3 = { 0f, 0f, 82.882f };
					break;
				
				case 123:
					Var0 = { -788.7533f, 325.9305f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 353.52f };
					break;
				
				case 124:
					Var0 = { -785.7533f, 325.9305f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 353.52f };
					break;
				
				case 137:
					Var0 = { -787.9853f, 324.4699f, 186.3132f };
					break;
				
				case 139:
					Var0 = { -794.9999f, 334.6179f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 140:
					Var0 = { -797.3075f, 328.841f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 172:
					Var0 = { -794.003f, 324.638f, 187.485f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 187:
					Var0 = { -793.942f, 324.588f, 186.315f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 188:
					Var0 = { -786.312f, 325.696f, 187.795f };
					Var0.f_3 = { -0.7f, 0f, -205.1f };
					break;
				
				case 189:
					Var0 = { -786.412f, 325.796f, 187.795f };
					Var0.f_3 = { 0.1f, 0f, -232.3f };
					break;
				
				case 190:
					Var0 = { -796.684f, 322.784f, 187.754f };
					Var0.f_3 = { -3.1551f, 0f, -61.2858f };
					break;
				
				case 191:
					Var0 = { -796.733f, 322.872f, 187.754f };
					Var0.f_3 = { -3.1551f, 0f, -61.2858f };
					break;
				
				case 192:
					Var0 = { -795.412f, 327.796f, 187.795f };
					Var0.f_3 = { 1.3f, 0f, -250.8f };
					break;
				
				case 193:
					Var0 = { -795.242f, 326.996f, 187.795f };
					Var0.f_3 = { 1.3f, 0f, -264.596f };
					break;
				
				case 194:
					Var0 = { -781.8395f, 317.5467f, 186.9137f };
					Var0.f_3 = { 0f, 0f, 178.1117f };
					break;
				
				case 195:
					Var0 = { -793.9963f, 323.9361f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 87.3152f };
					break;
				
				case 196:
					Var0 = { -796.0561f, 324.0782f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 54.5574f };
					break;
				
				case 197:
					Var0 = { -796.0561f, 324.0782f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 87.3152f };
					break;
				
				case 198:
					Var0 = { -798.4224f, 325.4083f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 87.3152f };
					break;
				
				case 199:
					Var0 = { -792.4963f, 323.9361f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 87.3152f };
					break;
				
				case 200:
					Var0 = { -800.0872f, 325.8634f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 89.2238f };
					break;
				
				case 284:
					Var0 = { -797.997f, 323.205f, 187.717f };
					Var0.f_3 = { -3.027f, 0f, -34.1061f };
					break;
				
				case 285:
					Var0 = { -798.481f, 323.885f, 187.702f };
					Var0.f_3 = { -2.4917f, 0f, -43.7623f };
					break;
				
				case 286:
					Var0 = { -794.985f, 328.244f, 188.135f };
					Var0.f_3 = { -2.6168f, 0f, -242.364f };
					break;
				
				case 287:
					Var0 = { -795.018f, 327.653f, 188.121f };
					Var0.f_3 = { -2.7465f, 0f, -254.215f };
					break;
				
				case 202:
					Var0 = { -781.9592f, 319.4946f, 186.9539f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 45.9243f;
					break;
				
				case 203:
					Var0 = { -781.2353f, 319.1119f, 186.9539f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 45.9243f;
					break;
				
				case 204:
					Var0 = { -782.3419f, 318.7707f, 186.9539f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 45.9243f;
					break;
				
				case 205:
					Var0 = { -782.6831f, 319.4773f, 186.9185f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 45.9243f;
					break;
				
				case 206:
					Var0 = { -781.5765f, 320.4185f, 186.9539f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 60.9243f;
					break;
				
				case 207:
					Var0 = { -782.518f, 321.788f, 186.914f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 84.9243f;
					break;
				
				case 208:
					Var0 = { -782.2658f, 320.3534f, 186.9172f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 66.9243f;
					break;
				
				case 209:
					Var0 = { -782.7004f, 320.9011f, 186.9539f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 71.9243f;
					break;
				
				case 210:
					Var0 = { -781.1526f, 320.0358f, 186.915f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 75.9243f;
					break;
				
				case 211:
					Var0 = { -781.8115f, 321.6292f, 186.915f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 77.9243f;
					break;
				
				case 212:
					Var0 = { -787.7246f, 319.8468f, 186.314f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 0f;
					break;
				
				case 213:
					Var0 = { -786.407f, 319.6599f, 186.314f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 0f;
					break;
				
				case 214:
					Var0 = { -781.1938f, 321.3423f, 186.9539f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 84.9243f;
					break;
				
				case 215:
					Var0 = { -787.1768f, 321.6815f, 186.314f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 0f;
					break;
				
				case 216:
					Var0 = { -788.0723f, 320.8122f, 186.314f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 0f;
					break;
				
				case 217:
					Var0 = { -786.4416f, 320.9077f, 186.314f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 0f;
					break;
			}
			switch (iParam0)
			{
				case 435:
					Var0 = { -789.0784f, 333.4356f, 186.3136f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 436:
					Var0 = { -789.0784f, 333.4356f, 186.3136f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 437:
					Var0 = { -782.36f, 333.2263f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 470:
					Var0 = { -798.2663f, 330.7226f, 189.7135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 477:
					Var0 = { -799.2601f, 338.592f, 189.7135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 445:
					Var0 = { -789.5599f, 325.2023f, 186.3182f };
					Var0.f_3 = { 7.65f, 0f, 0f };
					break;
				
				case 446:
					Var0 = { -789.5522f, 332.7971f, 189.0635f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 447:
					Var0 = { -791.6868f, 337.492f, 186.1185f };
					Var0.f_3 = { 3.65f, 0f, 0f };
					break;
				
				case 448:
					Var0 = { -791.7123f, 332.791f, 187.8135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 449:
					Var0 = { -786.5101f, 334.9225f, 186.1358f };
					Var0.f_3 = { 2.75f, 0f, 0f };
					break;
				
				case 450:
					Var0 = { -780.6341f, 334.9514f, 189.0138f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 471:
					Var0 = { -799.9768f, 331.2536f, 189.7135f };
					Var0.f_3 = { 1.5f, 0f, 0f };
					break;
				
				case 472:
					Var0 = { -799.8502f, 326.0806f, 192.4562f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 478:
					Var0 = { -800.4473f, 336.3873f, 189.7135f };
					Var0.f_3 = { 1f, 0f, 0f };
					break;
				
				case 479:
					Var0 = { -800.4662f, 340.076f, 192.2135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 504:
					Var0 = { -782.8615f, 341.9581f, 186.1135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 505:
					Var0 = { -780.2718f, 342.0182f, 186.1208f };
					Var0.f_3 = { 4.25f, 0f, 0f };
					break;
				
				case 506:
					Var0 = { -782.438f, 342.0197f, 188.8635f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 507:
					Var0 = { -804.3848f, 333.8651f, 189.7135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 508:
					Var0 = { -805.4896f, 335.0002f, 189.7155f };
					Var0.f_3 = { 1f, 0f, 0f };
					break;
				
				case 509:
					Var0 = { -805.471f, 333.3125f, 191.9633f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 510:
					Var0 = { -788.6317f, 320.9997f, 186.3132f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 511:
					Var0 = { -789.5604f, 319.666f, 186.3132f };
					Var0.f_3 = { 1.57f, 0f, 0f };
					break;
				
				case 512:
					Var0 = { -788.0121f, 319.6924f, 188.5632f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 513:
					Var0 = { -792.0585f, 341.4463f, 186.1135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 514:
					Var0 = { -792.0259f, 340.3044f, 186.1136f };
					Var0.f_3 = { 2.65f, 0f, 0f };
					break;
				
				case 515:
					Var0 = { -792.1705f, 338.4408f, 189.8998f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 528:
					Var0 = { -788.878f, 338.0769f, 186.1136f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 529:
					Var0 = { -789.9435f, 337.4386f, 186.1135f };
					Var0.f_3 = { 1.25f, 0f, 0f };
					break;
				
				case 530:
					Var0 = { -789.9385f, 338.612f, 188.1136f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 531:
					Var0 = { -782.5031f, 338.2492f, 186.1135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 532:
					Var0 = { -785.4359f, 336.6565f, 186.1135f };
					Var0.f_3 = { 4.75f, 0f, 0f };
					break;
				
				case 533:
					Var0 = { -785.3582f, 341.1275f, 188.3635f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 534:
					Var0 = { -781.649f, 320.3884f, 186.9175f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 535:
					Var0 = { -780.7493f, 320.9498f, 186.9157f };
					Var0.f_3 = { 1.5f, 0f, 0f };
					break;
				
				case 536:
					Var0 = { -780.7726f, 318.901f, 189.1642f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 537:
					Var0 = { -791.6885f, 341.563f, 186.1535f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 538:
					Var0 = { -793.2805f, 340.489f, 186.1136f };
					Var0.f_3 = { 1.95f, 0f, 0f };
					break;
				
				case 539:
					Var0 = { -793.2911f, 343.794f, 188.3636f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 540:
					Var0 = { -797.9947f, 327.1148f, 189.7136f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 541:
					Var0 = { -796.0374f, 326.6479f, 189.7234f };
					Var0.f_3 = { 1f, 0f, 0f };
					break;
				
				case 542:
					Var0 = { -797.2122f, 326.6525f, 192.4635f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 547:
					Var0 = { -797.5703f, 338.8147f, 189.7159f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 548:
					Var0 = { -795.5723f, 336.2789f, 189.7159f };
					Var0.f_3 = { 1.75f, 0f, 0f };
					break;
				
				case 549:
					Var0 = { -795.6097f, 340.2508f, 191.9636f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = { -796.735f, 326.499f, 186.32f };
					Var0.f_3 = { 0f, 0f, -224.456f };
					break;
				
				case 237:
					Var0 = { -795.664f, 327.014f, 186.32f };
					Var0.f_3 = { 0f, 0f, -211.657f };
					break;
				
				case 238:
					Var0 = { -795.584f, 326.146f, 186.32f };
					Var0.f_3 = { 0f, 0f, -251.877f };
					break;
				
				case 239:
					Var0 = { -797.471f, 327.577f, 186.32f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 240:
					Var0 = { -798.102f, 324.236f, 187.882f };
					Var0.f_3 = { -2.8579f, 0f, -33.7881f };
					break;
				
				case 241:
					Var0 = { -795.653f, 326.818f, 186.325f };
					Var0.f_3 = { 0f, 0f, 61.4979f };
					break;
				
				case 242:
					Var0 = { -795.318f, 327.555f, 186.325f };
					Var0.f_3 = { 0f, 0f, -249.34f };
					break;
				
				case 243:
					Var0 = { -794.852f, 327.075f, 186.325f };
					Var0.f_3 = { 0f, 0f, 83.8199f };
					break;
				
				case 244:
					Var0 = { -795.173f, 326.222f, 186.325f };
					Var0.f_3 = { 0f, 0f, 67.3949f };
					break;
				
				case 245:
					Var0 = { -797.773f, 327.28f, 187.989f };
					Var0.f_3 = { -5.44662f, 0f, -87.9654f };
					break;
				
				case 246:
					Var0 = { -796.601f, 327.56f, 186.324f };
					Var0.f_3 = { 0f, 0f, -186.657f };
					break;
				
				case 247:
					Var0 = { -795.899f, 327.478f, 186.32f };
					Var0.f_3 = { 0f, 0f, -225.607f };
					break;
				
				case 248:
					Var0 = { -795.989f, 328.255f, 186.325f };
					Var0.f_3 = { 0f, 0f, -217.412f };
					break;
				
				case 249:
					Var0 = { -796.868f, 328.027f, 186.324f };
					Var0.f_3 = { 0f, 0f, -177.017f };
					break;
				
				case 250:
					Var0 = { -796.967f, 325.235f, 187.889f };
					Var0.f_3 = { -2.98413f, 0f, -6.62068f };
					break;
				
				case 251:
					Var0 = { -796.691f, 323.0321f, 186.316f };
					Var0.f_3 = { 0f, 0f, -11.3392f };
					break;
				
				case 252:
					Var0 = { -796.287f, 322.2451f, 186.316f };
					Var0.f_3 = { 0f, 0f, 3.3108f };
					break;
				
				case 253:
					Var0 = { -797.229f, 322.4801f, 186.316f };
					Var0.f_3 = { 0f, 0f, -22.7142f };
					break;
				
				case 254:
					Var0 = { -797.604f, 322.9381f, 186.316f };
					Var0.f_3 = { 0f, 0f, -34.6142f };
					break;
				
				case 255:
					Var0 = { -796.324f, 325.5321f, 187.742f };
					Var0.f_3 = { -0.2929f, 0f, -184.117f };
					break;
				
				case 256:
					Var0 = { -798.536f, 326.943f, 186.32f };
					Var0.f_3 = { 0f, 0f, -199.908f };
					break;
				
				case 257:
					Var0 = { -797.799f, 327.812f, 186.32f };
					Var0.f_3 = { 0f, 0f, -198.783f };
					break;
				
				case 258:
					Var0 = { -798.8f, 327.666f, 186.32f };
					Var0.f_3 = { 0f, 0f, -184.134f };
					break;
				
				case 259:
					Var0 = { -797.741f, 327.17f, 186.32f };
					Var0.f_3 = { 0f, 0f, -214.008f };
					break;
				
				case 260:
					Var0 = { -799.168f, 324.758f, 187.849f };
					Var0.f_3 = { -1.83503f, 0f, -11.7304f };
					break;
				
				case 307:
					Var0 = { -795.744f, 327.166f, 187.866f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 331:
					Var0 = { -795.744f, 327.166f, 187.866f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 332:
					Var0 = { -795.744f, 327.166f, 187.866f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 333:
					Var0 = { -797.114f, 318.666f, 187.183f };
					Var0.f_3 = { 0f, 0f, -216f };
					break;
				
				case 334:
					Var0 = { -795.084f, 326.453f, 187.984f };
					Var0.f_3 = { 0f, 0f, -107.85f };
					break;
				
				case 298:
					Var0 = { -793.858f, 341.4139f, 187.1133f };
					break;
				
				case 299:
					Var0 = { -784.331f, 330.2035f, 187.2646f };
					break;
				
				case 300:
					Var0 = { -790.502f, 323.522f, 186.316f };
					Var0.f_3 = { 0f, 0f, 0.836098f };
					break;
				
				case 301:
					Var0 = { -789.585f, 324.198f, 186.316f };
					Var0.f_3 = { 0f, 0f, 0.836098f };
					break;
				
				case 302:
					Var0 = { -791.426f, 323.905f, 186.316f };
					Var0.f_3 = { 0f, 0f, 0.836098f };
					break;
				
				case 303:
					Var0 = { -789.62f, 322.646f, 186.316f };
					Var0.f_3 = { 0f, 0f, 0.836098f };
					break;
				
				case 310:
				case 335:
				case 336:
					Var0 = { -787.8991f, 339.9203f, 187.1403f };
					Var0.f_3 = { 1.0275f, 0f, -103.1806f };
					break;
				
				case 337:
				case 338:
				case 339:
					Var0 = { -787.0869f, 339.7301f, 187.1553f };
					Var0.f_3 = { 1.0275f, 0f, -103.1806f };
					break;
				
				case 311:
					Var0 = { -788.0102f, 319.6611f, 186.5651f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 431:
					Var0 = { -790.1639f, 335.2293f, 187.1133f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 133:
					Var0 = { -793.5669f, 340.5959f, 186.1135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 134:
					Var0 = { -793.5555f, 341.7935f, 187.8635f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 130:
					Var0 = { -793.39f, 341.565f, 186.114f };
					Var0.f_3 = { 0f, 0f, -91f };
					break;
				
				case 433:
					Var0 = { -789.6328f, 334.3963f, 186.1135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 434:
					Var0 = { -789.6397f, 335.5693f, 187.8635f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 432:
					Var0 = { -789.696f, 335.38f, 186.114f };
					Var0.f_3 = { 0f, 0f, -91f };
					break;
				
				case 102:
					Var0 = { -793.5547f, 342.9295f, 186.1135f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 103:
					Var0 = { -793.5555f, 341.7935f, 187.8635f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 182:
					Var0 = { -793.808f, 341.84f, 187.01f };
					Var0.f_3 = { 0f, 0f, 88.51f };
					break;
				
				case 501:
					Var0 = { -789.6354f, 336.738f, 186.1136f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 502:
					Var0 = { -789.6397f, 335.5693f, 187.8635f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 500:
					Var0 = { -790.125f, 335.69f, 187.01f };
					Var0.f_3 = { 0f, 0f, 88.51f };
					break;
				
				case 104:
					Var0 = { -800.4421f, 325.256f, 207.2709f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 105:
					Var0 = { -800.4426f, 326.6761f, 205.1558f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 183:
					Var0 = { -795.07f, 321.699f, 187.035f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 473:
					Var0 = { -796.497f, 331.5252f, 192.2901f };
					Var0.f_3 = { -34.9118f, 0f, 21.4059f };
					break;
				
				case 474:
					Var0 = { -789.592f, 334.359f, 188.7709f };
					Var0.f_3 = { -26.6941f, 0f, -139.8585f };
					break;
				
				case 475:
					Var0 = { -796.4861f, 322.8627f, 188.785f };
					Var0.f_3 = { -27.0831f, 0f, 3.9303f };
					break;
				
				case 169:
					Var0 = { -794.368f, 322.0654f, 186.3132f };
					break;
				
				case 170:
					Var0 = { -795.291f, 322.0415f, 187.8132f };
					break;
				
				case 181:
					Var0 = { -795.102f, 321.527f, 187.025f };
					Var0.f_3 = { 0f, 0f, -152.431f };
					break;
				
				case 546:
					Var0 = { -787.7805f, 334.9232f, 186.1134f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_42(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 73:
			switch (iParam0)
			{
				case 278:
					Var0 = { -798.7061f, 341.8386f, 204.7183f };
					break;
				
				case 279:
					Var0 = { -785.138f, 341.7283f, 208.6144f };
					break;
				
				case 280:
					Var0 = { -801.4162f, 325.805f, 205.0629f };
					break;
				
				case 281:
					Var0 = { -801.5137f, 342.8037f, 209.2183f };
					break;
				
				case 282:
					Var0 = { -796.1956f, 440.2408f, 79.64348f };
					Var0.f_3 = { 100f, 200f, 0f };
					break;
				
				case 283:
					Var0 = { -862.6429f, 353.2339f, 74.35394f };
					Var0.f_3 = { 100f, 200f, 0f };
					break;
				
				case 0:
					Var0 = { -795.23f, 326.754f, 207.017f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 1:
					Var0 = { -175.0825f, 497.5359f, 136.6536f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 2:
					Var0 = { -172.8586f, 497.9793f, 139.1536f };
					Var0.f_3 = { 0f, 0f, 6.0703f };
					break;
				
				case 3:
					Var0 = { -170.4f, 487f, 133.8f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 4:
					Var0 = { -165.6559f, 478.3115f, 139.4199f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 5:
					Var0 = { -170.4f, 501.9f, 132.8f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 276:
					Var0 = { -179.25f, 494.9512f, 128.857f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 277:
					Var0 = { -167.6152f, 497.1908f, 139.6569f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 483:
					Var0 = { -168.8141f, 493.1552f, 128.8654f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 484:
					Var0 = { -176.7701f, 491.5644f, 132.2936f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 6:
					Var0 = { -775.0327f, 340.3672f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 90.0569f };
					break;
				
				case 7:
					Var0 = { -172.988f, 491.272f, 129.053f };
					Var0.f_3 = { 0f, 0f, 11f };
					break;
				
				case 8:
					Var0 = { -169.675f, 495.252f, 131.463f };
					Var0.f_3 = { -7.632f, 0f, -110.063f };
					break;
				
				case 141:
					Var0 = { -173.078f, 489.054f, 130.627f };
					Var0.f_3 = { 0f, 0f, 11f };
					break;
				
				case 142:
					Var0 = { -172.739f, 489.146f, 131.777f };
					Var0.f_3 = { 180f, -180f, 11f };
					break;
				
				case 143:
					Var0 = { -170.879f, 489.507f, 131.772f };
					Var0.f_3 = { 180f, -180f, 11f };
					break;
				
				case 144:
					Var0 = { -173.609f, 491.939f, 130.576f };
					Var0.f_3 = { 0.1322f, 0.0536f, -168.934f };
					break;
				
				case 145:
					Var0 = { -172.638f, 492.134f, 130.577f };
					Var0.f_3 = { -0.2118f, 0.062f, -167.343f };
					break;
				
				case 146:
					Var0 = { -173.609f, 491.939f, 130.576f };
					Var0.f_3 = { 0.994f, 0.0536f, 184.211f };
					break;
				
				case 147:
					Var0 = { -174.947f, 490.441f, 131.015f };
					Var0.f_3 = { 0f, 0f, 191f };
					break;
				
				case 148:
					Var0 = { -174.823f, 489.964f, 129.992f };
					Var0.f_3 = { 0f, 0f, 191f };
					break;
				
				case 149:
					Var0 = { -170.7103f, 491.0771f, 129.0436f };
					Var0.f_3 = { 0f, 0f, 114.6864f };
					break;
				
				case 150:
					Var0 = { -171.5056f, 493.8445f, 129.0436f };
					Var0.f_3 = { 0f, 0f, 156.2637f };
					break;
				
				case 151:
					Var0 = { -174.0269f, 493.4414f, 129.0436f };
					Var0.f_3 = { 0f, 0f, 183.8747f };
					break;
				
				case 152:
					Var0 = { -175.5986f, 491.8787f, 129.0436f };
					Var0.f_3 = { 0f, 0f, 205.0738f };
					break;
				
				case 153:
					Var0 = { -173.107f, 489.446f, 129.049f };
					Var0.f_3 = { 0f, 0f, 11f };
					break;
				
				case 154:
					Var0 = { -173.545f, 490.971f, 131.16f };
					Var0.f_3 = { 0f, 0f, 191f };
					break;
				
				case 155:
					Var0 = { -173.544f, 490.971f, 130.215f };
					Var0.f_3 = { 0f, 0f, 191f };
					break;
				
				case 157:
					Var0 = { -173.543f, 491.603f, 130.577f };
					Var0.f_3 = { -7.145f, 0.0536f, 59.2917f };
					break;
				
				case 158:
					Var0 = { -172.671f, 491.241f, 130.581f };
					Var0.f_3 = { -2.3423f, 0.0392f, -166.756f };
					break;
				
				case 169:
					Var0 = { -778.2188f, 332.2201f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 170:
					Var0 = { -776.9868f, 332.502f, 208.3432f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 173:
					Var0 = { -173.277f, 494.095f, 129.048f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 174:
					Var0 = { -176.451f, 497.811f, 129.057f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 175:
					Var0 = { -176.341f, 498.471f, 129.057f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 176:
					Var0 = { -176.231f, 499.131f, 129.057f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 177:
					Var0 = { -176.121f, 499.791f, 129.057f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 178:
					Var0 = { -164.366f, 494.695f, 129.048f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 179:
					Var0 = { -168.055f, 497.6f, 129.787f };
					Var0.f_3 = { 9.1439f, 0f, -226.355f };
					break;
				
				case 180:
					Var0 = { -167.354f, 496.865f, 129.787f };
					Var0.f_3 = { 9.1439f, 0f, -226.355f };
					break;
				
				case 201:
					Var0 = { -175.0776f, 496.811f, 138.0631f };
					Var0.f_3 = { -2.6572f, 0.071f, -18.613f };
					break;
				
				case 235:
					Var0 = { -196.787f, 496.789f, 128.847f };
					Var0.f_3 = { -0.3015f, 0f, -96.8483f };
					break;
				
				case 271:
					Var0 = { -164.2207f, 481.8606f, 136.2704f };
					Var0.f_3 = { 0f, 0f, 352.6839f };
					break;
				
				case 272:
					Var0 = { -166.0936f, 481.5848f, 136.2704f };
					Var0.f_3 = { 0f, 0f, 0.5617f };
					break;
				
				case 273:
					Var0 = { -166.7556f, 482.014f, 136.2704f };
					Var0.f_3 = { 0f, 0f, 97.7813f };
					break;
				
				case 274:
					Var0 = { -164.7762f, 485.2427f, 136.2442f };
					Var0.f_3 = { 0f, 0f, 117.9575f };
					break;
				
				case 275:
					Var0 = { -166.4324f, 481.537f, 136.2436f };
					Var0.f_3 = { 0f, 0f, 11f };
					break;
				
				case 304:
					Var0 = { -184.442f, 498.022f, 122.84f };
					Var0.f_3 = { 0f, 0f, 191f };
					break;
				
				case 305:
					Var0 = { -173.763f, 498.355f, 137.806f };
					Var0.f_3 = { 0f, 0f, 13f };
					break;
				
				case 308:
					Var0 = { -172.574f, 501.611f, 129.048f };
					Var0.f_3 = { 0f, 0f, -55.4023f };
					break;
				
				case 309:
					Var0 = { -168.281f, 503.361f, 129.048f };
					Var0.f_3 = { 0f, 0f, 101f };
					break;
				
				case 14:
					Var0 = { -161.6548f, 482.8907f, 136.2438f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 15:
					Var0 = { -172.3831f, 497.8868f, 138.1285f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 9:
					Var0 = { -169.4518f, 480.9929f, 136.2442f };
					Var0.f_3 = { 0f, 0f, 344.7783f };
					break;
				
				case 10:
					Var0 = { -164.8997f, 491.9128f, 136.4436f };
					Var0.f_3 = { 0f, 0f, 107.1011f };
					break;
				
				case 11:
					Var0 = { -173.0706f, 495.1959f, 136.6721f };
					Var0.f_3 = { 0f, 0f, 188.6403f };
					break;
				
				case 12:
					Var0 = { -168.3477f, 483.4451f, 132.879f };
					Var0.f_3 = { 0f, 0f, 190.8347f };
					break;
				
				case 16:
					Var0 = { -165.513f, 480.552f, 136.774f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 22:
					Var0 = { -165.2708f, 480.9601f, 136.3812f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 28:
					Var0 = { -166.0695f, 480.8013f, 138.1186f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 17:
					Var0 = { -166.55f, 480.35f, 136.774f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 23:
					Var0 = { -166.9543f, 480.5982f, 136.2704f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 29:
					Var0 = { -166.0695f, 480.8013f, 138.1186f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 18:
					Var0 = { -167.581f, 481.445f, 136.774f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 24:
					Var0 = { -167.0705f, 481.1044f, 136.2704f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 30:
					Var0 = { -167.2282f, 481.9047f, 138.0204f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 19:
					Var0 = { -167.912f, 482.804f, 136.774f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 25:
					Var0 = { -167.4854f, 483.3647f, 136.2704f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 31:
					Var0 = { -167.2751f, 482.3819f, 138.0204f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 20:
					Var0 = { -799.761f, 336.402f, 205.684f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 26:
					Var0 = { -799.757f, 337.57f, 205.244f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 32:
					Var0 = { -799.757f, 335.847f, 207.043f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 21:
					Var0 = { -800.721f, 336.402f, 205.684f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 27:
					Var0 = { -800.72f, 337.588f, 205.244f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 33:
					Var0 = { -800.733f, 335.888f, 207.224f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 34:
					Var0 = { -168.5386f, 482.6213f, 137.9076f };
					Var0.f_3 = { 0.3833f, 0f, -87.7897f };
					break;
				
				case 35:
					Var0 = { -164.0561f, 482.3845f, 137.3793f };
					Var0.f_3 = { 1.0126f, 0f, -79.1184f };
					break;
				
				case 36:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 37:
					Var0 = { -795.085f, 333.845f, 205.221f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 38:
					Var0 = { -172.0057f, 491.9648f, 138.085f };
					Var0.f_3 = { -5.7141f, 0f, -128.7489f };
					break;
				
				case 39:
					Var0 = { -172.0057f, 487.7235f, 138.085f };
					Var0.f_3 = { -5.7141f, 0f, -135.9926f };
					break;
				
				case 120:
					Var0 = { -168.9293f, 480.117f, 134.1824f };
					Var0.f_3 = { -4.9261f, 0f, -22.4311f };
					break;
				
				case 121:
					Var0 = { -166.2631f, 480.117f, 134.1824f };
					Var0.f_3 = { -4.9261f, 0f, -33.5511f };
					break;
				
				case 125:
					Var0 = { -777.5101f, 328.2689f, 208.0708f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 40:
					Var0 = { -167.3926f, 487.7373f, 132.8437f };
					Var0.f_3 = { 0f, 0f, 185.7943f };
					break;
				
				case 41:
					Var0 = { -166.37f, 482.274f, 136.267f };
					Var0.f_3 = { 0f, 0f, 101.16f };
					break;
				
				case 126:
					Var0 = { -166.6772f, 482.5891f, 136.2704f };
					break;
				
				case 127:
					Var0 = { -166.4967f, 481.5552f, 138.0204f };
					break;
				
				case 42:
					Var0 = { -166.37f, 482.274f, 136.267f };
					Var0.f_3 = { 0f, 0f, 101.16f };
					break;
				
				case 46:
					Var0 = { -164.2584f, 484.9542f, 133.8511f };
					Var0.f_3 = { 0f, 0f, -131.45f };
					break;
				
				case 47:
					Var0 = { -163.457f, 483.474f, 133.282f };
					Var0.f_3 = { 0f, 0f, -166.68f };
					break;
				
				case 48:
					Var0 = { -616.5919f, 65.3481f, 101.8033f };
					Var0.f_3 = { 0.9407f, 0.0521f, 147.8146f };
					break;
				
				case 49:
					Var0 = { -619.5043f, 62.4537f, 102.0873f };
					Var0.f_3 = { -1.4768f, -0.0422f, -101.6693f };
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = { -162.6263f, 484.8703f, 132.8697f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 51:
					Var0 = { -164.7478f, 484.4771f, 134.8697f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 340:
					Var0 = { -161.9514f, 483.8063f, 134.6804f };
					Var0.f_3 = { 0f, 0f, -79f };
					break;
				
				case 612:
					Var0 = { -163.988f, 481.337f, 133.863f };
					Var0.f_3 = { 0f, 0f, -31.68f };
					break;
				
				case 615:
					Var0 = { -162.3055f, 482.5231f, 132.8697f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 616:
					Var0 = { -164.4513f, 482.0749f, 134.8697f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 56:
					Var0 = { -168.338f, 490.5f, 133.028f };
					Var0.f_3 = { 0f, 0f, 81.0207f };
					break;
				
				case 57:
					Var0 = { -168.421f, 490.779f, 133.025f };
					Var0.f_3 = { 0f, 0f, -78.75f };
					break;
				
				case 64:
					Var0 = { -167.851f, 490.0606f, 135.7694f };
					Var0.f_3 = { -45f, 0f, 0f };
					break;
				
				case 65:
					Var0 = { -167.5152f, 490.5291f, 134.8193f };
					Var0.f_3 = { -8.5698f, 0f, 118.8549f };
					break;
				
				case 58:
					Var0 = { -166.1256f, 490.0562f, 135.3182f };
					Var0.f_3 = { 1.1132f, 0.1017f, 78.9651f };
					break;
				
				case 59:
					Var0 = { -166.589f, 489.7625f, 135.3233f };
					Var0.f_3 = { -7.0985f, 0.0535f, 82.2329f };
					break;
				
				case 60:
					Var0 = { -166.9374f, 490.8625f, 134.5452f };
					Var0.f_3 = { -6.8571f, 0f, 131.6332f };
					break;
				
				case 61:
					Var0 = { -166.9697f, 489.8927f, 135.6625f };
					Var0.f_3 = { -11.4914f, 0.1004f, 75.5478f };
					break;
				
				case 62:
					Var0 = { -167.7089f, 489.8488f, 135.6187f };
					Var0.f_3 = { -22.5721f, -0.0838f, 81.6919f };
					break;
				
				case 63:
					Var0 = { -168.5833f, 494.9f, 134.5053f };
					Var0.f_3 = { -1.0545f, 0f, -167.6487f };
					break;
				
				case 66:
					Var0 = { -166.4547f, 491.385f, 132.8437f };
					Var0.f_3 = { 0f, 0f, 2f };
					break;
				
				case 67:
					Var0 = { -169.3389f, 490.9203f, 135.2034f };
					break;
				
				case 110:
					Var0 = { -168.2406f, 491.6804f, 132.8611f };
					Var0.f_3 = { 0f, 0f, 18.306f };
					break;
				
				case 68:
					Var0 = { -164.5028f, 487.4701f, 134.0591f };
					break;
				
				case 109:
					Var0 = { -163.5246f, 487.6743f, 133.9934f };
					break;
				
				case 69:
					Var0 = { -164.5202f, 483.4868f, 137.2654f };
					Var0.f_3 = { 0f, 0f, 60.1065f };
					break;
				
				case 70:
					Var0 = { -164.163f, 484.498f, 136.784f };
					Var0.f_3 = { 0f, 0f, 142.25f };
					break;
				
				case 71:
					Var0 = { -163.0436f, 483.429f, 136.2442f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 72:
					Var0 = { -168.8236f, 482.4795f, 138.9579f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 73:
					Var0 = { -164.9669f, 483.3863f, 137.4704f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 74:
					Var0 = { -165.6417f, 484.3788f, 137.2653f };
					Var0.f_3 = { 0f, 0f, 237.9561f };
					break;
				
				case 75:
					Var0 = { -164.8447f, 483.716f, 137.2999f };
					Var0.f_3 = { 0f, 0f, -35.91f };
					break;
				
				case 76:
					Var0 = { -164.9954f, 484.6449f, 137.3065f };
					Var0.f_3 = { 0f, 0f, 237.9561f };
					break;
				
				case 89:
					Var0 = { -792.8026f, 330.2704f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0.11f };
					break;
				
				case 91:
					Var0 = { -791.3608f, 331.6151f, 206.7155f };
					Var0.f_3 = { -6.1061f, 0f, 124.716f };
					break;
				
				case 90:
					Var0 = { -166.444f, 496.71f, 136.653f };
					Var0.f_3 = { 0f, 0f, -163.44f };
					break;
				
				case 92:
					Var0 = { -791.1231f, 329.0256f, 207.0468f };
					Var0.f_3 = { -10.5496f, 0f, 38.2733f };
					break;
				
				case 135:
					Var0 = { -166.6697f, 496.8538f, 136.6536f };
					break;
				
				case 136:
					Var0 = { -165.9252f, 497.0006f, 138.4036f };
					break;
				
				case 77:
					Var0 = { -795.4578f, 337.2369f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 82.6775f };
					break;
				
				case joaat("mpsv_lp0_31"):
					Var0 = { -796.8416f, 336.5425f, 206.3782f };
					Var0.f_3 = { 4.1239f, 0.032f, -35.7362f };
					break;
				
				case 80:
					Var0 = { -794.1184f, 339.0253f, 207.2513f };
					Var0.f_3 = { -14.3736f, 0f, 132.7127f };
					break;
				
				case 81:
					Var0 = { -170.5805f, 481.6559f, 136.2442f };
					break;
				
				case 82:
					Var0 = { -170.6783f, 482.6563f, 137.9942f };
					break;
				
				case 78:
					Var0 = { -170.645f, 482.24f, 136.242f };
					Var0.f_3 = { 0f, 0f, -77.04f };
					break;
				
				case 133:
					Var0 = { -170.5805f, 481.6559f, 136.2442f };
					break;
				
				case 134:
					Var0 = { -170.6783f, 482.6563f, 137.9942f };
					break;
				
				case 130:
					Var0 = { -170.645f, 482.24f, 136.242f };
					Var0.f_3 = { 0f, 0f, -77.04f };
					break;
				
				case 83:
					Var0 = { -793.3814f, 333.4903f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 182.6354f };
					break;
				
				case 85:
					Var0 = { -792.4017f, 332.1834f, 206.589f };
					Var0.f_3 = { -0.4759f, 0f, 56.2407f };
					break;
				
				case 88:
					Var0 = { -792.6917f, 334.5816f, 206.9306f };
					Var0.f_3 = { -15.2511f, -0.1442f, 161.552f };
					break;
				
				case 84:
					Var0 = { -169.932f, 494.616f, 136.654f };
					Var0.f_3 = { 0f, 0f, -172.8f };
					break;
				
				case 86:
					Var0 = { -169.3039f, 494.8466f, 136.6536f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 87:
					Var0 = { -170.5257f, 494.6144f, 138.4035f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 93:
					Var0 = { -173.755f, 498.325f, 137.805f };
					Var0.f_3 = { 0f, 0f, 11.1f };
					break;
				
				case 94:
					Var0 = { -174.927f, 499.487f, 136.717f };
					Var0.f_3 = { 0f, 0f, 11f };
					break;
				
				case 95:
					Var0 = { -174.7326f, 497.7486f, 136.6536f };
					Var0.f_3 = { 0f, 0f, 9.66f };
					break;
				
				case 96:
					Var0 = { -174.81f, 498.54f, 137.7175f };
					Var0.f_3 = { 0f, 0f, -166.26f };
					break;
				
				case 97:
					Var0 = { -173.719f, 496.1693f, 137.7175f };
					Var0.f_3 = { 0f, 0f, 58.06f };
					break;
				
				case 98:
					Var0 = { -174.8786f, 496.8369f, 137.7175f };
					Var0.f_3 = { 0f, 0f, -117.76f };
					break;
				
				case 99:
					Var0 = { -775.316f, 340.308f, 206.654f };
					Var0.f_3 = { 0.18f, 0f, -90f };
					break;
				
				case 100:
					Var0 = { -174.5523f, 497.1214f, 136.6721f };
					Var0.f_3 = { 0f, 0f, 18.2729f };
					break;
				
				case 101:
					Var0 = { -775.1893f, 340.8357f, 208.0344f };
					Var0.f_3 = { -0.162607f, 0.264814f, 116.59f };
					break;
				
				case 102:
					Var0 = { -170.9538f, 482.8296f, 136.2442f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 103:
					Var0 = { -171.1906f, 483.9088f, 137.7442f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 182:
					Var0 = { -171.265f, 482.663f, 137.125f };
					Var0.f_3 = { 0f, 0f, 76.32f };
					break;
				
				case 104:
					Var0 = { -170.67f, 482.1911f, 132.8437f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 105:
					Var0 = { -170.8454f, 483.0067f, 134.3437f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 183:
					Var0 = { -170.865f, 482.245f, 133.705f };
					Var0.f_3 = { 0f, 0f, 110.16f };
					break;
				
				case 181:
					Var0 = { -169.938f, 494.725f, 129.775f };
					Var0.f_3 = { 0f, 0f, -78.84f };
					break;
				
				case 169:
					Var0 = { -170.4434f, 495.2874f, 129.0436f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 170:
					Var0 = { -170.2916f, 494.5287f, 130.5436f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 106:
					Var0 = { -796.3882f, 336.8372f, 202.5976f };
					Var0.f_3 = { -22.7361f, 0f, -129.0221f };
					break;
				
				case 107:
					Var0 = { -801.9172f, 326.3802f, 207.4878f };
					Var0.f_3 = { -35.2381f, 0f, -111.7465f };
					break;
				
				case 108:
					Var0 = { -174.4623f, 499.1877f, 137.9236f };
					Var0.f_3 = { 90f, 0f, 10.9f };
					break;
				
				case 117:
					Var0 = { -794.9332f, 335.1039f, 201.5308f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 118:
					Var0 = { -800.421f, 325.5437f, 206.1822f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 119:
					Var0 = { -173.1384f, 499.1628f, 136.6536f };
					Var0.f_3 = { 0f, 0f, 185.2395f };
					break;
				
				case 122:
					Var0 = { -172.4295f, 495.6633f, 136.7f };
					Var0.f_3 = { 0f, 0f, 192.7531f };
					break;
				
				case 123:
					Var0 = { -174.2972f, 494.7493f, 136.6536f };
					Var0.f_3 = { 0f, 0f, 203.5112f };
					break;
				
				case 124:
					Var0 = { -172.8577f, 494.0585f, 136.6535f };
					Var0.f_3 = { 0f, 0f, 207.16f };
					break;
				
				case 137:
					Var0 = { -792.5942f, 335.772f, 205.2183f };
					break;
				
				case 139:
					Var0 = { -794.9999f, 334.6179f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 140:
					Var0 = { -797.3075f, 328.841f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 172:
					Var0 = { -173.038f, 495.184f, 130.217f };
					Var0.f_3 = { 0f, 0f, 11f };
					break;
				
				case 187:
					Var0 = { -173.001f, 495.253f, 129.047f };
					Var0.f_3 = { 0f, 0f, 190.713f };
					break;
				
				case 188:
					Var0 = { -165.371f, 496.361f, 130.527f };
					Var0.f_3 = { -0.7f, 0f, -205.1f };
					break;
				
				case 189:
					Var0 = { -165.471f, 496.461f, 130.527f };
					Var0.f_3 = { 0.1f, 0f, -232.3f };
					break;
				
				case 190:
					Var0 = { -175.743f, 493.448f, 130.486f };
					Var0.f_3 = { -3.1551f, 0f, -61.2858f };
					break;
				
				case 191:
					Var0 = { -175.792f, 493.537f, 130.486f };
					Var0.f_3 = { -3.1551f, 0f, -61.2858f };
					break;
				
				case 192:
					Var0 = { -174.471f, 498.461f, 130.527f };
					Var0.f_3 = { 1.3f, 0f, -250.8f };
					break;
				
				case 193:
					Var0 = { -174.301f, 497.661f, 130.527f };
					Var0.f_3 = { 1.3f, 0f, -264.596f };
					break;
				
				case 194:
					Var0 = { -166.793f, 491.363f, 130.162f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 195:
					Var0 = { -173.171f, 495.661f, 130.427f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 196:
					Var0 = { -171.6152f, 492.7902f, 129.0436f };
					Var0.f_3 = { 0f, 0f, 151.6694f };
					break;
				
				case 197:
					Var0 = { -175.521f, 494.234f, 129.048f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 198:
					Var0 = { -178.105f, 496.171f, 129.051f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 199:
					Var0 = { -172.2417f, 496.4529f, 129.0436f };
					Var0.f_3 = { 0f, 0f, 188.6054f };
					break;
				
				case 200:
					Var0 = { -176.22f, 494.651f, 129.048f };
					Var0.f_3 = { 0f, 0f, -269.352f };
					break;
				
				case 284:
					Var0 = { -177.056f, 493.87f, 130.449f };
					Var0.f_3 = { -3.027f, 0f, -34.1061f };
					break;
				
				case 285:
					Var0 = { -177.54f, 494.55f, 130.434f };
					Var0.f_3 = { -2.4917f, 0f, -43.7623f };
					break;
				
				case 286:
					Var0 = { -174.044f, 498.909f, 130.867f };
					Var0.f_3 = { -2.6168f, 0f, -242.364f };
					break;
				
				case 287:
					Var0 = { -174.077f, 498.318f, 130.853f };
					Var0.f_3 = { -2.7465f, 0f, -254.215f };
					break;
				
				case 202:
					Var0 = { -172.7426f, 494.3526f, 136.6721f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 203:
					Var0 = { -171.8187f, 493.9699f, 136.6534f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 204:
					Var0 = { -173.1253f, 493.4287f, 136.6535f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 205:
					Var0 = { -173.6664f, 494.7353f, 136.6721f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 206:
					Var0 = { -172.3599f, 495.2765f, 136.6536f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 207:
					Var0 = { -172.2014f, 493.0461f, 136.6534f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 208:
					Var0 = { -174.0491f, 493.8114f, 136.6536f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 209:
					Var0 = { -173.2838f, 495.6591f, 136.6721f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 210:
					Var0 = { -171.436f, 494.8938f, 136.6534f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 211:
					Var0 = { -170.8948f, 493.5872f, 136.6534f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 212:
					Var0 = { -173.5079f, 492.5049f, 136.6535f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 213:
					Var0 = { -174.5903f, 495.118f, 136.6536f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 214:
					Var0 = { -171.9772f, 496.2003f, 136.6536f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 215:
					Var0 = { -171.6602f, 491.7395f, 136.6534f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 216:
					Var0 = { -175.3557f, 493.2702f, 136.6536f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
				
				case 217:
					Var0 = { -173.825f, 496.0657f, 136.6721f };
					Var0.f_3 = { 0f, 0f, 204.2824f };
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = { -174.344f, 492.146f, 129.052f };
					Var0.f_3 = { 0f, 0f, -123.456f };
					break;
				
				case 237:
					Var0 = { -175.054f, 493.099f, 129.052f };
					Var0.f_3 = { 0f, 0f, -110.657f };
					break;
				
				case 238:
					Var0 = { -174.218f, 493.344f, 129.052f };
					Var0.f_3 = { 0f, 0f, -150.877f };
					break;
				
				case 239:
					Var0 = { -175.262f, 491.218f, 129.052f };
					Var0.f_3 = { 0f, 0f, -79f };
					break;
				
				case 240:
					Var0 = { -171.862f, 491.237f, 130.614f };
					Var0.f_3 = { -2.8579f, 0f, 67.2119f };
					break;
				
				case 241:
					Var0 = { -174.864f, 493.148f, 129.057f };
					Var0.f_3 = { 0f, 0f, 162.498f };
					break;
				
				case 242:
					Var0 = { -175.651f, 493.336f, 129.057f };
					Var0.f_3 = { 0f, 0f, -148.34f };
					break;
				
				case 243:
					Var0 = { -175.269f, 493.885f, 129.057f };
					Var0.f_3 = { 0f, 0f, 184.82f };
					break;
				
				case 244:
					Var0 = { -174.37f, 493.733f, 129.057f };
					Var0.f_3 = { 0f, 0f, 168.395f };
					break;
				
				case 245:
					Var0 = { -174.913f, 490.978f, 130.721f };
					Var0.f_3 = { -5.44662f, 0f, 13.0346f };
					break;
				
				case 246:
					Var0 = { -175.411f, 492.076f, 129.056f };
					Var0.f_3 = { 0f, 0f, -85.6566f };
					break;
				
				case 247:
					Var0 = { -175.465f, 492.78f, 129.052f };
					Var0.f_3 = { 0f, 0f, -124.607f };
					break;
				
				case 248:
					Var0 = { -176.21f, 492.544f, 129.057f };
					Var0.f_3 = { 0f, 0f, -116.412f };
					break;
				
				case 249:
					Var0 = { -175.819f, 491.724f, 129.056f };
					Var0.f_3 = { 0f, 0f, -76.0166f };
					break;
				
				case 250:
					Var0 = { -173.059f, 492.16f, 130.621f };
					Var0.f_3 = { -2.98413f, 0f, 94.3793f };
					break;
				
				case 251:
					Var0 = { -170.994f, 492.854f, 129.048f };
					Var0.f_3 = { 0f, 0f, 89.6608f };
					break;
				
				case 252:
					Var0 = { -170.299f, 493.401f, 129.048f };
					Var0.f_3 = { 0f, 0f, 104.311f };
					break;
				
				case 253:
					Var0 = { -170.349f, 492.432f, 129.048f };
					Var0.f_3 = { 0f, 0f, 78.2858f };
					break;
				
				case 254:
					Var0 = { -170.727f, 491.976f, 129.048f };
					Var0.f_3 = { 0f, 0f, 66.3858f };
					break;
				
				case 255:
					Var0 = { -173.163f, 492.738f, 130.474f };
					Var0.f_3 = { -0.2929f, 0f, -83.1173f };
					break;
				
				case 256:
					Var0 = { -173.518f, 490.294f, 129.052f };
					Var0.f_3 = { 0f, 0f, -98.9085f };
					break;
				
				case 257:
					Var0 = { -175.43f, 490.851f, 129.052f };
					Var0.f_3 = { 0f, 0f, -97.7835f };
					break;
				
				case 258:
					Var0 = { -175.096f, 489.897f, 129.052f };
					Var0.f_3 = { 0f, 0f, -83.1335f };
					break;
				
				case 259:
					Var0 = { -174.811f, 491.031f, 129.052f };
					Var0.f_3 = { 0f, 0f, -113.008f };
					break;
				
				case 260:
					Var0 = { -172.17f, 490.09f, 130.581f };
					Var0.f_3 = { -1.83503f, 0f, 89.2696f };
					break;
				
				case 307:
					Var0 = { -175.188f, 492.992f, 130.598f };
					Var0.f_3 = { 0f, 0f, 11f };
					break;
				
				case 331:
					Var0 = { -175.188f, 492.992f, 130.598f };
					Var0.f_3 = { 0f, 0f, 11f };
					break;
				
				case 332:
					Var0 = { -175.188f, 492.992f, 130.598f };
					Var0.f_3 = { 0f, 0f, 11f };
					break;
				
				case 333:
					Var0 = { -166.583f, 493.269f, 129.915f };
					Var0.f_3 = { 0f, 0f, -115f };
					break;
				
				case 334:
					Var0 = { -174.614f, 493.776f, 130.716f };
					Var0.f_3 = { 0f, 0f, -6.85f };
					break;
				
				case 298:
					Var0 = { -171.0628f, 481.9798f, 137.2427f };
					break;
				
				case 299:
					Var0 = { -169.6761f, 494.188f, 137.6043f };
					break;
				
				case 300:
					Var0 = { -173.8131f, 496.8874f, 129.0412f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 26.882f;
					break;
				
				case 301:
					Var0 = { -172.2603f, 496.7129f, 129.0436f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 8.9738f;
					break;
				
				case 302:
					Var0 = { -172.5036f, 498.7915f, 129.0418f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 55.0647f;
					break;
				
				case 303:
					Var0 = { -174.2426f, 498.6731f, 129.0391f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 49.5334f;
					break;
				
				case 310:
				case 335:
				case 336:
					Var0 = { -163.1103f, 484.7386f, 137.2687f };
					Var0.f_3 = { -0.0155f, -0.5599f, 126.1069f };
					break;
				
				case 337:
				case 338:
				case 339:
					Var0 = { -163.6812f, 484.3223f, 137.2687f };
					Var0.f_3 = { -0.0155f, -0.5599f, 126.1069f };
					break;
				
				case 311:
					Var0 = { -172.215f, 490.042f, 136.69f };
					Var0.f_3 = { 0f, 0f, -15.3f };
					break;
				
				case 234:
					Var0 = { -174.569f, 490.772f, 131.048f };
					Var0.f_3 = { 0f, 0f, 191f };
					break;
				
				case 261:
					Var0 = { -172.178f, 491.102f, 130.04f };
					Var0.f_3 = { 0f, 0f, 158f };
					break;
				
				case 262:
					Var0 = { -172.178f, 491.102f, 130.04f };
					Var0.f_3 = { 0f, 0f, 158f };
					break;
				
				case 263:
					Var0 = { -163.159f, 479.715f, 137.242f };
					Var0.f_3 = { 0f, 0f, 172.08f };
					break;
				
				case 264:
					Var0 = { -163.159f, 479.715f, 137.242f };
					Var0.f_3 = { 0f, 0f, 172.08f };
					break;
				
				case 265:
					Var0 = { -163.159f, 479.715f, 137.205f };
					Var0.f_3 = { 0f, 0f, 172.08f };
					break;
				
				case 266:
					Var0 = { -163.159f, 479.715f, 137.205f };
					Var0.f_3 = { 0f, 0f, 172.08f };
					break;
				
				case 267:
					Var0 = { -167.134f, 483.09f, 137.305f };
					Var0.f_3 = { 0f, 0f, -77.4f };
					break;
				
				case 268:
					Var0 = { -167.134f, 483.09f, 137.305f };
					Var0.f_3 = { 0f, 0f, -77.4f };
					break;
				
				case 269:
					Var0 = { -167.134f, 483.09f, 137.305f };
					Var0.f_3 = { 0f, 0f, -77.4f };
					break;
				
				case 270:
					Var0 = { -167.134f, 483.09f, 137.305f };
					Var0.f_3 = { 0f, 0f, -77.4f };
					break;
				
				case 312:
					Var0 = { -166.878f, 481.908f, 137.291f };
					Var0.f_3 = { 0f, 0f, -82.44f };
					break;
				
				case 313:
					Var0 = { -166.878f, 481.908f, 137.291f };
					Var0.f_3 = { 0f, 0f, -82.44f };
					break;
				
				case 314:
					Var0 = { -166.878f, 481.908f, 137.291f };
					Var0.f_3 = { 0f, 0f, -82.44f };
					break;
				
				case 315:
					Var0 = { -166.878f, 481.908f, 137.291f };
					Var0.f_3 = { 0f, 0f, -82.44f };
					break;
				
				case 316:
					Var0 = { -166.878f, 481.908f, 137.291f };
					Var0.f_3 = { 0f, 0f, -82.44f };
					break;
				
				case 317:
					Var0 = { -166.878f, 481.908f, 137.291f };
					Var0.f_3 = { 0f, 0f, -82.44f };
					break;
				
				case 318:
					Var0 = { -165.389f, 482.113f, 137.309f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 319:
					Var0 = { -165.389f, 482.113f, 137.309f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 320:
					Var0 = { -165.389f, 482.113f, 137.309f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 321:
					Var0 = { -165.389f, 482.113f, 137.309f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 322:
					Var0 = { -165.389f, 482.113f, 137.309f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 323:
					Var0 = { -165.389f, 482.113f, 137.309f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 324:
					Var0 = { -164.528f, 493.608f, 137.691f };
					Var0.f_3 = { 0f, 0f, -174.96f };
					break;
				
				case 325:
					Var0 = { -164.528f, 493.608f, 137.691f };
					Var0.f_3 = { 0f, 0f, -174.96f };
					break;
				
				case 326:
					Var0 = { -164.528f, 493.608f, 137.691f };
					Var0.f_3 = { 0f, 0f, -174.96f };
					break;
				
				case 327:
					Var0 = { -164.528f, 493.696f, 137.666f };
					Var0.f_3 = { 0f, 0f, -174.96f };
					break;
				
				case 328:
					Var0 = { -164.528f, 493.696f, 137.666f };
					Var0.f_3 = { 0f, 0f, -174.96f };
					break;
				
				case 329:
					Var0 = { -164.528f, 493.696f, 137.666f };
					Var0.f_3 = { 0f, 0f, -174.96f };
					break;
				
				case 475:
					Var0 = { -172.5f, 493.1f, 130f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 473:
					Var0 = { -168.7f, 483.9f, 133.9f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 474:
					Var0 = { -169.1f, 485.3f, 137.4f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 546:
					Var0 = { -166.432f, 481.537f, 136.243f };
					Var0.f_3 = { 0f, 0f, 11f };
					break;
			}
			break;
		
		case 77:
			switch (iParam0)
			{
				case 278:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 279:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 280:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 281:
					Var0 = { 0f, 0f, 0f };
					break;
				
				case 282:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 100f, 200f, 0f };
					break;
				
				case 283:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 100f, 200f, 0f };
					break;
				
				case 0:
					Var0 = { -795.23f, 326.754f, 207.017f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 1:
					Var0 = { 116.4776f, 559.8413f, 183.2967f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 2:
					Var0 = { 117.9619f, 560.0188f, 185.8099f };
					Var0.f_3 = { 0f, 0f, 1.1032f };
					break;
				
				case 3:
					Var0 = { 119.2f, 550.6f, 180.5f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 4:
					Var0 = { 122.8527f, 539.0169f, 179.3677f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 5:
					Var0 = { 120.3379f, 563.1256f, 186.385f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 276:
					Var0 = { 123.4507f, 561.6588f, 179.8728f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 277:
					Var0 = { 113.1089f, 560.6088f, 175.4467f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 483:
					Var0 = { 121.3152f, 567.02f, 178.8824f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 484:
					Var0 = { 112.4321f, 566.0848f, 175.5437f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 6:
					Var0 = { 117.2947f, 559.1152f, 183.3195f };
					Var0.f_3 = { 0f, 0f, 184.2975f };
					break;
				
				case 7:
					Var0 = { 117.247f, 568.7f, 175.703f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 8:
					Var0 = { 113.599f, 565.024f, 178.113f };
					Var0.f_3 = { -7.632f, 0f, 64.937f };
					break;
				
				case 141:
					Var0 = { 117.53f, 570.901f, 177.277f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 142:
					Var0 = { 117.184f, 570.84f, 178.427f };
					Var0.f_3 = { 180f, -180f, 186f };
					break;
				
				case 143:
					Var0 = { 115.3f, 570.642f, 178.422f };
					Var0.f_3 = { 180f, -180f, 186f };
					break;
				
				case 144:
					Var0 = { 117.807f, 567.981f, 177.226f };
					Var0.f_3 = { 0.1322f, 0.0536f, 6.0657f };
					break;
				
				case 158:
					Var0 = { 116.934f, 568.759f, 177.231f };
					Var0.f_3 = { -2.3423f, 0.0392f, 8.2442f };
					break;
				
				case 145:
					Var0 = { 116.823f, 567.871f, 177.227f };
					Var0.f_3 = { -0.2118f, 0.062f, 7.6568f };
					break;
				
				case 146:
					Var0 = { 117.807f, 567.981f, 177.226f };
					Var0.f_3 = { 0.994f, 0.0536f, 359.211f };
					break;
				
				case 147:
					Var0 = { 119.271f, 569.357f, 177.665f };
					Var0.f_3 = { 0f, 0f, 366f };
					break;
				
				case 148:
					Var0 = { 119.189f, 569.843f, 176.642f };
					Var0.f_3 = { 0f, 0f, 366f };
					break;
				
				case 153:
					Var0 = { 117.525f, 570.508f, 175.699f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 154:
					Var0 = { 117.828f, 568.952f, 177.81f };
					Var0.f_3 = { 0f, 0f, 366f };
					break;
				
				case 155:
					Var0 = { 117.827f, 568.951f, 176.865f };
					Var0.f_3 = { 0f, 0f, 366f };
					break;
				
				case 157:
					Var0 = { 117.771f, 568.321f, 177.227f };
					Var0.f_3 = { -7.145f, 0.0536f, 234.292f };
					break;
				
				case 234:
					Var0 = { 118.866f, 569.061f, 177.698f };
					Var0.f_3 = { 0f, 0f, 366f };
					break;
				
				case 149:
					Var0 = { 114.8325f, 569.0005f, 175.6971f };
					Var0.f_3 = { 0f, 0f, 287.6271f };
					break;
				
				case 150:
					Var0 = { 115.0929f, 565.8835f, 175.6971f };
					Var0.f_3 = { 0f, 0f, 337.041f };
					break;
				
				case 151:
					Var0 = { 117.4577f, 566.4731f, 175.6971f };
					Var0.f_3 = { 0f, 0f, 340.7748f };
					break;
				
				case 152:
					Var0 = { 119.8496f, 567.2011f, 175.6971f };
					Var0.f_3 = { 0f, 0f, 19.3824f };
					break;
				
				case 169:
					Var0 = { -778.2188f, 332.2201f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 170:
					Var0 = { -776.9868f, 332.502f, 208.3432f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 173:
					Var0 = { 115.733f, 564.887f, 175.698f };
					Var0.f_3 = { 0f, 0f, 366f };
					break;
				
				case 174:
					Var0 = { 119.096f, 568.431f, 175.707f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 175:
					Var0 = { 119.764f, 568.391f, 175.707f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 176:
					Var0 = { 120.432f, 568.351f, 175.707f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 177:
					Var0 = { 121.1f, 568.31f, 175.707f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 178:
					Var0 = { 117.261f, 556.087f, 175.698f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 179:
					Var0 = { 119.764f, 560.06f, 176.437f };
					Var0.f_3 = { 9.1439f, 0f, 49.6453f };
					break;
				
				case 180:
					Var0 = { 119.106f, 559.285f, 176.437f };
					Var0.f_3 = { 9.1439f, 0f, 49.6453f };
					break;
				
				case 201:
					Var0 = { 116.2337f, 558.9236f, 184.8102f };
					Var0.f_3 = { -1.2605f, -0.117f, -20.7566f };
					break;
				
				case 235:
					Var0 = { 140.474f, 561.13f, 175.497f };
					Var0.f_3 = { -0.3015f, 0f, 78.1517f };
					break;
				
				case 261:
					Var0 = { 116.455f, 568.94f, 176.69f };
					Var0.f_3 = { 0f, 0f, 333f };
					break;
				
				case 262:
					Var0 = { 116.455f, 568.94f, 176.69f };
					Var0.f_3 = { 0f, 0f, 333f };
					break;
				
				case 263:
					Var0 = { 125.669f, 540.35f, 183.878f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 264:
					Var0 = { 125.669f, 540.35f, 183.878f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 265:
					Var0 = { 125.669f, 540.35f, 183.878f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 266:
					Var0 = { 125.669f, 540.35f, 183.878f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 267:
					Var0 = { 122.019f, 542.775f, 183.928f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 268:
					Var0 = { 122.019f, 542.775f, 183.928f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 269:
					Var0 = { 122.019f, 542.775f, 183.928f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 270:
					Var0 = { 122.019f, 542.775f, 183.928f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 312:
					Var0 = { 121.98f, 543.279f, 183.939f };
					Var0.f_3 = { 0f, 0f, -95.04f };
					break;
				
				case 313:
					Var0 = { 121.98f, 543.279f, 183.939f };
					Var0.f_3 = { 0f, 0f, -95.04f };
					break;
				
				case 314:
					Var0 = { 121.98f, 543.279f, 183.939f };
					Var0.f_3 = { 0f, 0f, -95.04f };
					break;
				
				case 315:
					Var0 = { 121.98f, 543.279f, 183.939f };
					Var0.f_3 = { 0f, 0f, -95.04f };
					break;
				
				case 316:
					Var0 = { 121.98f, 543.279f, 183.939f };
					Var0.f_3 = { 0f, 0f, -95.04f };
					break;
				
				case 317:
					Var0 = { 121.98f, 543.279f, 183.939f };
					Var0.f_3 = { 0f, 0f, -95.04f };
					break;
				
				case 318:
					Var0 = { 123.311f, 542.738f, 183.922f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 319:
					Var0 = { 123.311f, 542.738f, 183.922f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 320:
					Var0 = { 123.311f, 542.738f, 183.922f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 321:
					Var0 = { 123.311f, 542.738f, 183.922f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 322:
					Var0 = { 123.311f, 542.738f, 183.922f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 323:
					Var0 = { 123.311f, 542.738f, 183.922f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 324:
					Var0 = { 125.169f, 554.163f, 184.353f };
					Var0.f_3 = { 0f, 0f, 177.48f };
					break;
				
				case 325:
					Var0 = { 125.169f, 554.163f, 184.353f };
					Var0.f_3 = { 0f, 0f, 177.48f };
					break;
				
				case 326:
					Var0 = { 125.169f, 554.163f, 184.353f };
					Var0.f_3 = { 0f, 0f, 177.48f };
					break;
				
				case 327:
					Var0 = { 125.169f, 554.25f, 184.353f };
					Var0.f_3 = { 0f, 0f, 177.48f };
					break;
				
				case 328:
					Var0 = { 125.169f, 554.25f, 184.353f };
					Var0.f_3 = { 0f, 0f, 177.48f };
					break;
				
				case 329:
					Var0 = { 125.169f, 554.25f, 184.353f };
					Var0.f_3 = { 0f, 0f, 177.48f };
					break;
				
				case 271:
					Var0 = { 124.8518f, 542.6487f, 182.9297f };
					Var0.f_3 = { 0f, 0f, 178.684f };
					break;
				
				case 272:
					Var0 = { 123.4077f, 542.3077f, 182.9297f };
					Var0.f_3 = { 0f, 0f, 186.562f };
					break;
				
				case 273:
					Var0 = { 122.5815f, 542.4899f, 182.9297f };
					Var0.f_3 = { 0f, 0f, 283.781f };
					break;
				
				case 274:
					Var0 = { 122.1604f, 543.7183f, 182.9297f };
					Var0.f_3 = { 0f, 0f, 303.957f };
					break;
				
				case 275:
					Var0 = { 122.5349f, 542.5076f, 182.8967f };
					Var0.f_3 = { 0f, 0f, 6f };
					break;
				
				case 304:
					Var0 = { 128.069f, 560.977f, 169.49f };
					Var0.f_3 = { 0f, 0f, 366f };
					break;
				
				case 305:
					Var0 = { 117.8f, 560.5f, 184.448f };
					Var0.f_3 = { 0f, 0f, 5.04f };
					break;
				
				case 308:
					Var0 = { 115.934f, 558.437f, 175.698f };
					Var0.f_3 = { 0f, 0f, 119.598f };
					break;
				
				case 309:
					Var0 = { 111.504f, 557.067f, 175.698f };
					Var0.f_3 = { 0f, 0f, 276f };
					break;
				
				case 14:
					Var0 = { 127.2918f, 543.401f, 182.9871f };
					Var0.f_3 = { 0f, 0f, -84f };
					break;
				
				case 15:
					Var0 = { 115.9149f, 562.2825f, 185.9155f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 9:
					Var0 = { 119.1077f, 541.812f, 182.8972f };
					Var0.f_3 = { 0f, 0f, 346.5059f };
					break;
				
				case 10:
					Var0 = { 124.206f, 552.4236f, 183.0967f };
					Var0.f_3 = { 0f, 0f, 99.2318f };
					break;
				
				case 11:
					Var0 = { 117.5891f, 557.4708f, 183.3f };
					Var0.f_3 = { 0f, 0f, 203.9372f };
					break;
				
				case 12:
					Var0 = { 120.6515f, 543.9923f, 179.532f };
					Var0.f_3 = { 0f, 0f, 196.4342f };
					break;
				
				case 16:
					Var0 = { 124.036f, 541.498f, 183.425f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 22:
					Var0 = { 124.4782f, 542.0929f, 182.9297f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 28:
					Var0 = { 123.4112f, 541.9592f, 183.9297f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 17:
					Var0 = { 122.985f, 541.388f, 183.425f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 23:
					Var0 = { 122.3936f, 541.8428f, 182.9297f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 29:
					Var0 = { 123.4112f, 541.9592f, 183.9297f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 18:
					Var0 = { 121.233f, 544.03f, 183.425f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 24:
					Var0 = { 121.8474f, 543.66f, 182.9297f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 30:
					Var0 = { 121.7479f, 544.5643f, 183.9297f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 19:
					Var0 = { -798.831f, 336.392f, 205.684f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 25:
					break;
				
				case 31:
					break;
				
				case 20:
					break;
				
				case 26:
					break;
				
				case 32:
					break;
				
				case 21:
					break;
				
				case 27:
					break;
				
				case 33:
					break;
				
				case 34:
					Var0 = { 120.0193f, 543.7301f, 184.7616f };
					Var0.f_3 = { -6.4435f, 0f, -93.4584f };
					break;
				
				case 35:
					Var0 = { 124.7541f, 543.1176f, 184.1151f };
					Var0.f_3 = { 0.3841f, 0f, -84.0241f };
					break;
				
				case 36:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 37:
					Var0 = { -795.085f, 333.845f, 205.221f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 38:
					Var0 = { 117.5934f, 553.3547f, 184.6455f };
					Var0.f_3 = { -4.9687f, 0f, -128.8533f };
					break;
				
				case 39:
					Var0 = { 117.5968f, 549.5334f, 184.6455f };
					Var0.f_3 = { -4.9687f, 0f, -135.5197f };
					break;
				
				case 120:
					Var0 = { 120.1006f, 540.8033f, 181.1527f };
					Var0.f_3 = { -7.7205f, 0f, -31.997f };
					break;
				
				case 121:
					Var0 = { 123.0448f, 540.8033f, 181.1527f };
					Var0.f_3 = { -7.7205f, 0f, -31.997f };
					break;
				
				case 125:
					Var0 = { -777.5101f, 328.2689f, 208.0708f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 40:
					Var0 = { 122.2105f, 548.7648f, 179.4972f };
					Var0.f_3 = { 0f, 0f, 174.6041f };
					break;
				
				case 41:
					Var0 = { 122.63f, 543.209f, 182.917f };
					Var0.f_3 = { 0f, 0f, 88.2f };
					break;
				
				case 126:
					Var0 = { 122.2454f, 543.8647f, 182.9297f };
					break;
				
				case 127:
					Var0 = { 122.3742f, 542.7989f, 184.6797f };
					break;
				
				case 42:
					Var0 = { 122.63f, 543.209f, 182.917f };
					Var0.f_3 = { 0f, 0f, 88.2f };
					break;
				
				case 46:
					Var0 = { 125.1505f, 546.0822f, 180.5208f };
					Var0.f_3 = { 0f, 0f, -142.61f };
					break;
				
				case 47:
					Var0 = { 125.65f, 544.475f, 179.97f };
					Var0.f_3 = { 0f, 0f, -177.84f };
					break;
				
				case 48:
					Var0 = { -616.5919f, 65.3481f, 101.8033f };
					Var0.f_3 = { 0.9407f, 0.0521f, 147.8146f };
					break;
				
				case 49:
					Var0 = { -619.5043f, 62.4537f, 102.0873f };
					Var0.f_3 = { -1.4768f, -0.0422f, -101.6693f };
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = { 126.4232f, 545.7162f, 179.5227f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 51:
					Var0 = { 124.3618f, 545.5223f, 181.5227f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 612:
					Var0 = { 124.887f, 541.925f, 180.512f };
					Var0.f_3 = { 0f, 0f, -41.76f };
					break;
				
				case 615:
					Var0 = { 126.7189f, 542.8882f, 179.5227f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 616:
					Var0 = { 124.6794f, 542.6829f, 181.5227f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 56:
					Var0 = { 121.75f, 551.25f, 179.7f };
					Var0.f_3 = { 0f, 0f, -132.84f };
					break;
				
				case 57:
					Var0 = { 121.371f, 551.86f, 179.677f };
					Var0.f_3 = { 0f, 0f, -84.24f };
					break;
				
				case 64:
					Var0 = { 121.9528f, 551.1089f, 182.449f };
					Var0.f_3 = { -45f, 0f, 0f };
					break;
				
				case 65:
					Var0 = { 121.6896f, 551.3428f, 181.282f };
					Var0.f_3 = { -12.7072f, 0f, 106.2162f };
					break;
				
				case 58:
					Var0 = { 123.4637f, 550.5748f, 182.0598f };
					Var0.f_3 = { 1.3316f, 0.0211f, 63.1983f };
					break;
				
				case 59:
					Var0 = { 123.2292f, 550.7562f, 182.0586f };
					Var0.f_3 = { -2.6725f, 0.0252f, 75.3702f };
					break;
				
				case 60:
					Var0 = { 122.8969f, 551.7355f, 181.568f };
					Var0.f_3 = { -12.6595f, -0.0559f, 111.6776f };
					break;
				
				case 61:
					Var0 = { 121.9945f, 550.6105f, 182.3346f };
					Var0.f_3 = { -24.0093f, 0.0018f, 52.9632f };
					break;
				
				case 62:
					Var0 = { 121.5827f, 551.2434f, 181.6459f };
					Var0.f_3 = { -23.0919f, 0.0869f, 74.3553f };
					break;
				
				case 63:
					Var0 = { 121.3262f, 555.3304f, 180.9944f };
					Var0.f_3 = { -4.7479f, 0f, -174.122f };
					break;
				
				case 66:
					Var0 = { 120.2884f, 552.1728f, 179.5101f };
					Var0.f_3 = { 0f, 0f, 2.5f };
					break;
				
				case 67:
					Var0 = { 123.3423f, 552.4438f, 181.7469f };
					break;
				
				case 110:
					Var0 = { 121.8218f, 552.3264f, 179.5141f };
					Var0.f_3 = { 0f, 0f, 346.8389f };
					break;
				
				case 68:
					Var0 = { 125.3961f, 548.2598f, 180.7278f };
					break;
				
				case 109:
					Var0 = { 125.9697f, 548.3368f, 180.6464f };
					break;
				
				case 69:
					Var0 = { 124.7203f, 544.2501f, 182.9296f };
					Var0.f_3 = { 0f, 0f, 52.8871f };
					break;
				
				case 70:
					Var0 = { 124.988f, 545.185f, 183.445f };
					Var0.f_3 = { 0f, 0f, 137f };
					break;
				
				case 71:
					Var0 = { 126.3463f, 543.9017f, 182.8975f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 72:
					Var0 = { 120.2029f, 543.7465f, 185.6171f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 73:
					Var0 = { 124.3153f, 544.3066f, 182.9296f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 74:
					Var0 = { 123.87f, 544.7672f, 183.9245f };
					Var0.f_3 = { 0f, 0f, 229.824f };
					break;
				
				case 75:
					Var0 = { 124.2379f, 544.4689f, 183.961f };
					Var0.f_3 = { 0f, 0f, -41.02f };
					break;
				
				case 76:
					Var0 = { 124.1725f, 545.4073f, 183.9675f };
					Var0.f_3 = { 0f, 0f, 137.2f };
					break;
				
				case 89:
					Var0 = { -792.8026f, 330.2704f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0.11f };
					break;
				
				case 91:
					Var0 = { -791.3608f, 331.6151f, 206.7155f };
					Var0.f_3 = { -6.1061f, 0f, 124.716f };
					break;
				
				case 90:
					Var0 = { 123.681f, 557.632f, 183.304f };
					Var0.f_3 = { 0f, 0f, -180f };
					break;
				
				case 92:
					Var0 = { -791.1231f, 329.0256f, 207.0468f };
					Var0.f_3 = { -10.5496f, 0f, 38.2733f };
					break;
				
				case 135:
					Var0 = { 123.5052f, 557.7494f, 183.2967f };
					break;
				
				case 136:
					Var0 = { 124.3367f, 557.8538f, 185.2967f };
					break;
				
				case 77:
					Var0 = { -795.4578f, 337.2369f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 82.6775f };
					break;
				
				case joaat("mpsv_lp0_31"):
					Var0 = { -796.8416f, 336.5425f, 206.3782f };
					Var0.f_3 = { 4.1239f, 0.032f, -35.7362f };
					break;
				
				case 80:
					Var0 = { -794.1184f, 339.0253f, 207.2513f };
					Var0.f_3 = { -14.3736f, 0f, 132.7127f };
					break;
				
				case 81:
					Var0 = { -796.8088f, 337.2715f, 207.0081f };
					break;
				
				case 82:
					Var0 = { -794.73f, 337.4924f, 205.2183f };
					break;
				
				case 78:
					Var0 = { Vector(206.15f, 337.263f, -796.115f) + Vector(0.0084f, -0.1213f, -0.0385f) + Vector(-0.0001f, 0.0008f, 0.0245f) };
					Var0.f_3 = { Vector(84.6f, 0f, 0f) + Vector(5.64f, 0f, 0f) };
					break;
				
				case 133:
					Var0 = { 118.3172f, 543.0574f, 182.8972f };
					break;
				
				case 134:
					Var0 = { 118.2704f, 543.7819f, 184.6472f };
					break;
				
				case 130:
					Var0 = { 118.373f, 543.555f, 182.89f };
					Var0.f_3 = { 0f, 0f, -82.44f };
					break;
				
				case 83:
					Var0 = { -793.3814f, 333.4903f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 182.6354f };
					break;
				
				case 85:
					Var0 = { -792.4017f, 332.1834f, 206.589f };
					Var0.f_3 = { -0.4759f, 0f, 56.2407f };
					break;
				
				case 88:
					Var0 = { -792.6917f, 334.5816f, 206.9306f };
					Var0.f_3 = { -15.2511f, -0.1442f, 161.552f };
					break;
				
				case 84:
					Var0 = { 120.136f, 555.817f, 183.309f };
					Var0.f_3 = { 0f, 0f, -174.4f };
					break;
				
				case 86:
					Var0 = { 120.666f, 555.8313f, 183.2967f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 87:
					Var0 = { 119.6679f, 555.7427f, 185.0471f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 93:
					Var0 = { 117.7951f, 560.5258f, 184.4464f };
					Var0.f_3 = { 0f, 0f, 6f };
					break;
				
				case 94:
					Var0 = { 116.708f, 561.789f, 183.359f };
					Var0.f_3 = { 0f, 0f, 6.9f };
					break;
				
				case 95:
					Var0 = { 116.8164f, 559.4781f, 183.31f };
					Var0.f_3 = { 0f, 0f, 5.56f };
					break;
				
				case 96:
					Var0 = { 116.757f, 560.8361f, 184.359f };
					Var0.f_3 = { 0f, 0f, -170.36f };
					break;
				
				case 97:
					Var0 = { 117.6757f, 558.3934f, 184.359f };
					Var0.f_3 = { 0f, 0f, 53.96f };
					break;
				
				case 98:
					Var0 = { 116.5668f, 559.1422f, 184.359f };
					Var0.f_3 = { 0f, 0f, -121.86f };
					break;
				
				case 99:
					Var0 = { 117.555f, 562.81f, 184.445f };
					Var0.f_3 = { 0f, 0f, 6f };
					break;
				
				case 100:
					Var0 = { 116.7616f, 559.5724f, 183.31f };
					Var0.f_3 = { 0f, 0f, 8.74f };
					break;
				
				case 101:
					Var0 = { 115.7786f, 564.577f, 184.6896f };
					Var0.f_3 = { -2.5476f, 0.7873f, -144.1641f };
					break;
				
				case 102:
					Var0 = { 118.1845f, 544.1455f, 182.8975f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 103:
					Var0 = { 118.0736f, 545.0422f, 184.6475f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 182:
					Var0 = { 117.901f, 544.088f, 183.798f };
					Var0.f_3 = { 0f, 0f, 85.32f };
					break;
				
				case 104:
					Var0 = { 118.5495f, 543.521f, 179.4969f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 105:
					Var0 = { 118.442f, 544.4215f, 181.2469f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 183:
					Var0 = { 118.075f, 543.55f, 180.363f };
					Var0.f_3 = { 0f, 0f, 91.8f };
					break;
				
				case 181:
					Var0 = { 113.863f, 565.563f, 176.399f };
					Var0.f_3 = { 0f, 0f, 106.56f };
					break;
				
				case 169:
					Var0 = { 114.3477f, 564.9015f, 175.7084f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 170:
					Var0 = { 114.2297f, 565.869f, 177.4467f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 475:
					Var0 = { 115.9057f, 567.5313f, 177f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 473:
					Var0 = { 121.8264f, 544.0052f, 181f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 474:
					Var0 = { 120.1062f, 546.6083f, 185f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 106:
					Var0 = { -796.3882f, 336.8372f, 202.5976f };
					Var0.f_3 = { -22.7361f, 0f, -129.0221f };
					break;
				
				case 107:
					Var0 = { -801.9172f, 326.3802f, 207.4878f };
					Var0.f_3 = { -35.2381f, 0f, -111.7465f };
					break;
				
				case 108:
					Var0 = { 117.13f, 561.44f, 184.56f };
					Var0.f_3 = { 90f, 0f, 6f };
					break;
				
				case 117:
					Var0 = { -794.9332f, 335.1039f, 201.5308f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 118:
					Var0 = { -800.421f, 325.5437f, 206.1822f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 119:
					Var0 = { 118.8059f, 561.6073f, 183.2968f };
					Var0.f_3 = { 0f, 0f, 144.7546f };
					break;
				
				case 122:
					Var0 = { 117.7512f, 556.8251f, 183.3013f };
					Var0.f_3 = { 0f, 0f, 192.1243f };
					break;
				
				case 123:
					Var0 = { 118.9029f, 555.9317f, 183.2983f };
					Var0.f_3 = { 0f, 0f, 198.3833f };
					break;
				
				case 124:
					Var0 = { 117.4407f, 554.3014f, 183.3021f };
					Var0.f_3 = { 0f, 0f, 185.1604f };
					break;
				
				case 137:
					Var0 = { -792.5942f, 335.772f, 205.2183f };
					break;
				
				case 139:
					Var0 = { -794.9999f, 334.6179f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 140:
					Var0 = { -797.3075f, 328.841f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 156:
					Var0 = { 117.5551f, 562.8094f, 184.4464f };
					Var0.f_3 = { 0f, 0f, 6f };
					break;
				
				case 172:
					Var0 = { 116.956f, 564.799f, 176.867f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 187:
					Var0 = { -173.001f, 495.253f, 129.047f };
					Var0.f_3 = { 0f, 0f, 190.713f };
					break;
				
				case 188:
					Var0 = { 118.813f, 557.261f, 177.177f };
					Var0.f_3 = { -0.7f, 0f, 70.9f };
					break;
				
				case 189:
					Var0 = { 118.901f, 557.37f, 177.177f };
					Var0.f_3 = { 0.1f, 0f, 43.7f };
					break;
				
				case 190:
					Var0 = { 114.832f, 567.272f, 177.136f };
					Var0.f_3 = { -3.1551f, 0f, 214.714f };
					break;
				
				case 191:
					Var0 = { 114.915f, 567.329f, 177.136f };
					Var0.f_3 = { -3.1551f, 0f, 214.714f };
					break;
				
				case 192:
					Var0 = { 119.95f, 566.53f, 177.177f };
					Var0.f_3 = { 1.3f, 0f, 25.2f };
					break;
				
				case 193:
					Var0 = { 119.172f, 566.277f, 177.177f };
					Var0.f_3 = { 1.3f, 0f, 11.4037f };
					break;
				
				case 194:
					Var0 = { 113.693f, 558.153f, 176.812f };
					Var0.f_3 = { 0f, 0f, 96f };
					break;
				
				case 195:
					Var0 = { 117.301f, 564.945f, 177.077f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 196:
					Var0 = { 115.8271f, 568.0894f, 175.6971f };
					Var0.f_3 = { 0f, 0f, 320.5218f };
					break;
				
				case 197:
					Var0 = { 115.636f, 567.133f, 175.698f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 198:
					Var0 = { 117.293f, 569.905f, 175.701f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 199:
					Var0 = { 116.208f, 563.5542f, 175.6971f };
					Var0.f_3 = { 0f, 0f, 12.1319f };
					break;
				
				case 200:
					Var0 = { 115.978f, 567.871f, 175.698f };
					Var0.f_3 = { 0f, 0f, 6.6476f };
					break;
				
				case 284:
					Var0 = { -779.2086f, 329.115f, 208.0224f };
					Var0.f_3 = { -3.027f, 0f, 55.8939f };
					break;
				
				case 285:
					Var0 = { -779.8893f, 328.631f, 208.0071f };
					Var0.f_3 = { -2.4917f, 0f, 46.2377f };
					break;
				
				case 286:
					Var0 = { -784.2476f, 332.1267f, 208.4403f };
					Var0.f_3 = { -2.6168f, 0f, -152.3636f };
					break;
				
				case 287:
					Var0 = { -783.6574f, 332.094f, 208.4264f };
					Var0.f_3 = { -2.7465f, 0f, -164.2146f };
					break;
				
				case 202:
					Var0 = { 117.4257f, 559.3446f, 183.3099f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 203:
					Var0 = { 118.9018f, 554.9273f, 183.2967f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 204:
					Var0 = { 117.5083f, 554.8685f, 183.2967f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 205:
					Var0 = { 117.9669f, 558.038f, 183.3099f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 206:
					Var0 = { 117.0191f, 556.1034f, 183.2784f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 207:
					Var0 = { 117.1845f, 556.7512f, 183.2967f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 208:
					Var0 = { 118.1322f, 555.6858f, 183.2967f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 209:
					Var0 = { 117.173f, 558.5792f, 183.2967f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 210:
					Var0 = { 116.6603f, 557.4968f, 183.2987f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 211:
					Var0 = { 118.5779f, 554.11f, 183.3495f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 212:
					Var0 = { 118.291f, 557.3924f, 183.2967f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 213:
					Var0 = { 118.508f, 556.7315f, 183.2984f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 214:
					Var0 = { 117.5126f, 554.0622f, 183.297f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 215:
					Var0 = { 117.8724f, 557.2373f, 183.32f };
					Var0.f_3 = { 0f, 0f, 184.5629f };
					break;
				
				case 216:
					Var0 = { 119.221f, 559.7747f, 183.2968f };
					Var0.f_3 = { 0f, 0f, 135.2553f };
					break;
				
				case 217:
					Var0 = { 120.1753f, 556.7762f, 183.2971f };
					Var0.f_3 = { 0f, 0f, 121.9463f };
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = { 118.521f, 567.71f, 175.702f };
					Var0.f_3 = { 0f, 0f, 51.5437f };
					break;
				
				case 237:
					Var0 = { 119.145f, 566.699f, 175.702f };
					Var0.f_3 = { 0f, 0f, 64.3427f };
					break;
				
				case 238:
					Var0 = { 118.291f, 566.529f, 175.702f };
					Var0.f_3 = { 0f, 0f, 24.123f };
					break;
				
				case 239:
					Var0 = { 119.517f, 568.555f, 175.702f };
					Var0.f_3 = { 0f, 0f, 96f };
					break;
				
				case 240:
					Var0 = { 116.128f, 568.833f, 177.264f };
					Var0.f_3 = { -2.8579f, 0f, 242.212f };
					break;
				
				case 241:
					Var0 = { 118.952f, 566.668f, 175.707f };
					Var0.f_3 = { 0f, 0f, 337.498f };
					break;
				
				case 242:
					Var0 = { 119.72f, 566.411f, 175.707f };
					Var0.f_3 = { 0f, 0f, 26.6596f };
					break;
				
				case 243:
					Var0 = { 119.291f, 565.897f, 175.707f };
					Var0.f_3 = { 0f, 0f, 359.82f };
					break;
				
				case 244:
					Var0 = { 118.409f, 566.128f, 175.707f };
					Var0.f_3 = { 0f, 0f, 343.395f };
					break;
				
				case 245:
					Var0 = { 119.19f, 568.824f, 177.371f };
					Var0.f_3 = { -5.44662f, 0f, 188.035f };
					break;
				
				case 246:
					Var0 = { 119.59f, 567.688f, 175.706f };
					Var0.f_3 = { 0f, 0f, 89.3434f };
					break;
				
				case 247:
					Var0 = { 119.583f, 566.981f, 175.702f };
					Var0.f_3 = { 0f, 0f, 50.3927f };
					break;
				
				case 248:
					Var0 = { 120.345f, 567.151f, 175.707f };
					Var0.f_3 = { 0f, 0f, 58.5877f };
					break;
				
				case 249:
					Var0 = { 120.027f, 568.003f, 175.706f };
					Var0.f_3 = { 0f, 0f, 98.9834f };
					break;
				
				case 250:
					Var0 = { 117.24f, 567.809f, 177.271f };
					Var0.f_3 = { -2.98413f, 0f, 269.379f };
					break;
				
				case 251:
					Var0 = { 114.765f, 567.285f, 175.698f };
					Var0.f_3 = { 0f, 0f, 264.661f };
					break;
				
				case 252:
					Var0 = { 114.025f, 566.801f, 175.698f };
					Var0.f_3 = { 0f, 0f, 279.311f };
					break;
				
				case 253:
					Var0 = { 114.159f, 567.762f, 175.698f };
					Var0.f_3 = { 0f, 0f, 253.286f };
					break;
				
				case 254:
					Var0 = { 114.576f, 568.183f, 175.698f };
					Var0.f_3 = { 0f, 0f, 241.386f };
					break;
				
				case 255:
					Var0 = { 117.289f, 567.181f, 177.124f };
					Var0.f_3 = { -0.2929f, 0f, 91.8827f };
					break;
				
				case 256:
					Var0 = { 118.775f, 569.547f, 175.702f };
					Var0.f_3 = { 0f, 0f, 76.0915f };
					break;
				
				case 257:
					Var0 = { 119.716f, 568.906f, 175.702f };
					Var0.f_3 = { 0f, 0f, 77.2165f };
					break;
				
				case 258:
					Var0 = { 119.466f, 569.886f, 175.702f };
					Var0.f_3 = { 0f, 0f, 91.8665f };
					break;
				
				case 259:
					Var0 = { 119.083f, 568.781f, 175.702f };
					Var0.f_3 = { 0f, 0f, 61.9915f };
					break;
				
				case 260:
					Var0 = { 116.535f, 569.948f, 177.231f };
					Var0.f_3 = { -1.83503f, 0f, 264.27f };
					break;
				
				case 307:
					Var0 = { 119.288f, 566.794f, 177.248f };
					Var0.f_3 = { 0f, 0f, 174f };
					break;
				
				case 331:
					Var0 = { 119.288f, 566.794f, 177.248f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 332:
					Var0 = { 119.288f, 566.794f, 177.248f };
					Var0.f_3 = { 0f, 0f, 186f };
					break;
				
				case 333:
					Var0 = { 110.692f, 567.268f, 176.565f };
					Var0.f_3 = { 0f, 0f, 60f };
					break;
				
				case 334:
					Var0 = { 118.648f, 566.064f, 177.366f };
					Var0.f_3 = { 0f, 0f, 168.15f };
					break;
				
				case 298:
					Var0 = { 117.9327f, 543.3307f, 183.8931f };
					break;
				
				case 299:
					Var0 = { 120.3781f, 555.3716f, 184.2547f };
					break;
				
				case 300:
					Var0 = { 116.212f, 561.201f, 175.698f };
					Var0.f_3 = { 0f, 0f, 276.836f };
					break;
				
				case 301:
					Var0 = { 116.98f, 560.359f, 175.698f };
					Var0.f_3 = { 0f, 0f, 276.836f };
					break;
				
				case 302:
					Var0 = { 116.496f, 562.159f, 175.698f };
					Var0.f_3 = { 0f, 0f, 276.836f };
					break;
				
				case 303:
					Var0 = { 115.433f, 560.231f, 175.698f };
					Var0.f_3 = { 0f, 0f, 276.836f };
					break;
				
				case 310:
				case 335:
				case 336:
					Var0 = { 126.3562f, 545.3469f, 183.9628f };
					Var0.f_3 = { 0.2302f, -0.2706f, 120.8358f };
					break;
				
				case 337:
				case 338:
				case 339:
					Var0 = { 125.944f, 545.1008f, 183.9648f };
					Var0.f_3 = { 0.2302f, -0.2706f, 120.8358f };
					break;
				
				case 311:
					Var0 = { 117.523f, 551.659f, 183.343f };
					Var0.f_3 = { 0f, 0f, -51.7f };
					break;
				
				case 546:
					Var0 = { 122.534f, 542.507f, 182.896f };
					Var0.f_3 = { 0f, 0f, 6f };
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_43(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 61:
			switch (iParam0)
			{
				case 0:
					break;
				
				case 1:
					Var0 = { -776.5227f, 323.7823f, 210.7473f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 2:
					Var0 = { -778.5126f, 323.7496f, 214.2471f };
					Var0.f_3 = { 0f, 0f, 108.6861f };
					break;
				
				case 3:
					Var0 = { -776.3f, 334.6f, 212.5f };
					break;
				
				case 4:
					Var0 = { -777.8493f, 320.4183f, 209.5652f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 5:
					Var0 = { -777.3683f, 344.2699f, 214.7482f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 276:
					Var0 = { -761.3398f, 329.3192f, 209.6467f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 277:
					Var0 = { -800.4241f, 329.2564f, 214.8797f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 6:
					Var0 = { -782.5724f, 324.1019f, 211.4972f };
					Var0.f_3 = { 0f, 0f, 250.3059f };
					break;
				
				case 7:
					Var0 = { -764.6471f, 328.812f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 8:
					Var0 = { -764.9313f, 331.6124f, 212.429f };
					Var0.f_3 = { -7.632f, 0f, -121.063f };
					break;
				
				case 141:
					Var0 = { -761.73f, 328.945f, 211.979f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 142:
					Var0 = { -761.755f, 329.29f, 213.133f };
					Var0.f_3 = { 180f, -180f, 90f };
					break;
				
				case 143:
					Var0 = { -761.745f, 331.19f, 213.135f };
					Var0.f_3 = { 180f, -180f, 90f };
					break;
				
				case 144:
					Var0 = { -764.599f, 328.964f, 211.952f };
					Var0.f_3 = { 0.1322f, 0.0536f, -449.934f };
					break;
				
				case 158:
					Var0 = { -763.714f, 330.001f, 212.01f };
					Var0.f_3 = { -2.3423f, 0.0392f, -447.756f };
					break;
				
				case 145:
					Var0 = { -764.6001f, 329.8803f, 211.9535f };
					Var0.f_3 = { 0.1045f, 0.0948f, -86.912f };
					break;
				
				case 146:
					Var0 = { -764.599f, 328.964f, 211.952f };
					Var0.f_3 = { 0.994f, 0.0536f, -96.7888f };
					break;
				
				case 147:
					Var0 = { -763.408f, 327.378f, 212.375f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 148:
					Var0 = { -762.916f, 327.408f, 211.352f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 153:
					Var0 = { -762.5432f, 329.3139f, 210.3965f };
					Var0.f_3 = { 180f, -180f, 0f };
					break;
				
				case 154:
					Var0 = { -763.66f, 328.855f, 212.52f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 155:
					Var0 = { -763.66f, 328.856f, 211.575f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 157:
					Var0 = { -764.237f, 329.214f, 212.005f };
					Var0.f_3 = { -7.145f, 0.0536f, -221.708f };
					break;
				
				case 234:
					Var0 = { -763.4594f, 327.7491f, 212.2718f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 149:
					Var0 = { -765.3744f, 327.4776f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 284.6798f };
					break;
				
				case 150:
					Var0 = { -766.7778f, 330.676f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 263.0767f };
					break;
				
				case 151:
					Var0 = { -766.3467f, 332.6851f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 209.9717f };
					break;
				
				case 152:
					Var0 = { -763.444f, 332.6569f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 159.6486f };
					break;
				
				case 174:
					Var0 = { -763.4923f, 327.3426f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 47.9457f };
					break;
				
				case 175:
					Var0 = { -763.5795f, 327.9056f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 176:
					Var0 = { -763.6245f, 328.2909f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 177:
					Var0 = { -763.6774f, 328.756f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 178:
					Var0 = { -774.7498f, 331.1707f, 210.4373f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 179:
					Var0 = { -782.939f, 338.1156f, 207.3599f };
					Var0.f_3 = { 9.1439f, 0f, -136.3547f };
					break;
				
				case 180:
					Var0 = { -782.2037f, 338.8171f, 207.3599f };
					Var0.f_3 = { 9.1439f, 0f, -136.3547f };
					break;
				
				case 235:
					Var0 = { -784.2213f, 341.3405f, 211.3644f };
					Var0.f_3 = { -2.2923f, 0f, -135.1282f };
					break;
				
				case 261:
					Var0 = { -763.713f, 329.725f, 211.387f };
					Var0.f_3 = { 0f, 0f, -131.25f };
					break;
				
				case 263:
					Var0 = { -773.075f, 341.675f, 211.4f };
					Var0.f_3 = { 0f, 0f, -45.25f };
					break;
				
				case 264:
					Var0 = { -773.075f, 341.675f, 211.4f };
					Var0.f_3 = { 0f, 0f, -45.25f };
					break;
				
				case 265:
					Var0 = { -773.075f, 341.675f, 211.4f };
					Var0.f_3 = { 0f, 0f, -45.25f };
					break;
				
				case 266:
					Var0 = { -773.075f, 341.675f, 211.4f };
					Var0.f_3 = { 0f, 0f, -45.25f };
					break;
				
				case 267:
					Var0 = { -782.338f, 336.612f, 211.238f };
					Var0.f_3 = { 0f, 0f, -9f };
					break;
				
				case 268:
					Var0 = { -782.338f, 336.612f, 211.238f };
					Var0.f_3 = { 0f, 0f, -9f };
					break;
				
				case 269:
					Var0 = { -782.338f, 336.612f, 211.238f };
					Var0.f_3 = { 0f, 0f, -9f };
					break;
				
				case 270:
					Var0 = { -782.338f, 336.612f, 211.238f };
					Var0.f_3 = { 0f, 0f, -9f };
					break;
				
				case 271:
					Var0 = { -783.2791f, 338.3737f, 210.2371f };
					Var0.f_3 = { 0f, 0f, 220.2962f };
					break;
				
				case 272:
					Var0 = { -783.4805f, 337.3643f, 210.197f };
					Var0.f_3 = { 0f, 0f, 257.2607f };
					break;
				
				case 273:
					Var0 = { -780.0349f, 337.0173f, 210.197f };
					Var0.f_3 = { 0f, 0f, 40.2944f };
					break;
				
				case 274:
					Var0 = { -780.9129f, 336.5271f, 210.197f };
					Var0.f_3 = { 0f, 0f, 17.7598f };
					break;
				
				case 275:
					Var0 = { -779.1f, 333.8f, 211.7f };
					Var0.f_3 = { -4.9f, 0f, 40.3f };
					break;
				
				case 304:
					Var0 = { -772.701f, 319.501f, 204.192f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 305:
					Var0 = { -777.968f, 324.294f, 212.126f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 306:
					Var0 = { -778.506f, 331.316f, 210.397f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 308:
					Var0 = { -775.9152f, 323.6722f, 211.0376f };
					Var0.f_3 = { 0f, 0f, 93.6366f };
					break;
				
				case 309:
					Var0 = { -780.331f, 323.8253f, 210.9971f };
					Var0.f_3 = { 0f, 0f, 265.1681f };
					break;
				
				case 14:
					Var0 = { -781.8525f, 342.028f, 211.188f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 15:
					Var0 = { -777.7648f, 322.8674f, 214.2165f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 9:
					Var0 = { -779.1797f, 333.9276f, 210.197f };
					Var0.f_3 = { 0f, 0f, 15.0747f };
					break;
				
				case 10:
					Var0 = { -764.1613f, 330.934f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 130.9707f };
					break;
				
				case 11:
					Var0 = { -791.767f, 332.9774f, 210.7966f };
					Var0.f_3 = { 0f, 0f, 18.201f };
					break;
				
				case 12:
					Var0 = { -772.1329f, 323.2887f, 210.997f };
					Var0.f_3 = { 0f, 0f, 69.4807f };
					break;
				
				case 16:
					Var0 = { -781.31f, 335.92f, 210.65f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 22:
					Var0 = { -781.1396f, 337.2012f, 210.2371f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 28:
					Var0 = { -781.1335f, 335.2529f, 212.3327f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 17:
					Var0 = { -782.17f, 335.91f, 210.65f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 23:
					Var0 = { -782.0966f, 337.2361f, 210.2371f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 29:
					Var0 = { -782.0477f, 335.1334f, 212.286f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 18:
					Var0 = { -783.07f, 335.91f, 210.65f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 24:
					Var0 = { -782.9213f, 336.8988f, 210.2371f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 30:
					Var0 = { -782.8946f, 335.5682f, 213.2568f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 19:
					Var0 = { -783.82f, 336.97f, 210.66f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 25:
					Var0 = { -783.1451f, 336.9444f, 210.2371f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 31:
					Var0 = { -784.7938f, 336.9716f, 212.286f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 20:
					Var0 = { -783.82f, 337.83f, 210.66f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 26:
					Var0 = { -783.1597f, 337.8318f, 210.2371f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 32:
					Var0 = { -784.7744f, 337.8362f, 212.286f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 21:
					Var0 = { -783.81f, 338.68f, 210.66f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 27:
					Var0 = { -783.133f, 338.7082f, 210.2371f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 33:
					Var0 = { -784.8043f, 338.6786f, 212.286f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 34:
					Var0 = { -781.8131f, 339.4708f, 211.6216f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 35:
					Var0 = { -780.9454f, 332.7312f, 211.7032f };
					Var0.f_3 = { -4.539f, 0f, 16.647f };
					break;
				
				case 36:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 37:
					break;
				
				case 38:
					Var0 = { -786.1395f, 341.9217f, 211.3448f };
					Var0.f_3 = { 0.0124f, 0.0003f, -121.9123f };
					break;
				
				case 39:
					Var0 = { -786.8088f, 340.5944f, 211.3448f };
					Var0.f_3 = { 0.8049f, 0.0003f, -115.7942f };
					break;
				
				case 120:
					Var0 = { -789.6643f, 335.5028f, 211.0014f };
					Var0.f_3 = { -3.5475f, 0.0003f, 132.4699f };
					break;
				
				case 121:
					Var0 = { -790.9958f, 335.9232f, 211.0014f };
					Var0.f_3 = { -0.8993f, 0.0003f, 148.8257f };
					break;
				
				case 125:
					break;
				
				case 40:
					Var0 = { -793.3626f, 326.2888f, 209.7966f };
					Var0.f_3 = { 0f, 0f, 352.2422f };
					break;
				
				case 41:
					Var0 = { -780.5624f, 338.0597f, 211.227f };
					Var0.f_3.f_2 = 90f;
					break;
				
				case 42:
					Var0 = { -781.034f, 337.971f, 210.227f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 126:
					Var0 = { -780.2787f, 337.1397f, 210.197f };
					break;
				
				case 127:
					Var0 = { -780.4131f, 338.3048f, 212.2371f };
					break;
				
				case 43:
					break;
				
				case 44:
					break;
				
				case 45:
					break;
				
				case 46:
					Var0 = { -793.2892f, 332.1312f, 209.7966f };
					Var0.f_3 = { 0f, 0f, 72.63f };
					break;
				
				case 47:
					Var0 = { -793.594f, 333.759f, 210.225f };
					Var0.f_3 = { 0f, 0f, -1f };
					break;
				
				case 48:
					break;
				
				case 49:
					break;
				
				case 50:
					Var0 = { -792.4382f, 332.6826f, 209.7966f };
					break;
				
				case 51:
					Var0 = { -794.6772f, 332.6597f, 211.7966f };
					break;
				
				case 612:
					Var0 = { -792.625f, 335.862f, 210.813f };
					Var0.f_3 = { 0f, 0f, 133.2f };
					break;
				
				case 615:
					Var0 = { -794.6525f, 335.1653f, 209.7966f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 616:
					Var0 = { -792.5333f, 335.1687f, 211.7966f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 56:
					Var0 = { -797.3611f, 333.4506f, 210.7966f };
					Var0.f_3 = { 0f, 0f, 264.6319f };
					break;
				
				case 57:
					Var0 = { -796.8f, 332.849f, 209.951f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 64:
					Var0 = { -796.4452f, 333.5307f, 212.1467f };
					Var0.f_3 = { -45f, 0f, 0f };
					break;
				
				case 65:
					Var0 = { -796.3611f, 333.2506f, 210.7966f };
					Var0.f_3 = { 315f, 0f, 264.6319f };
					break;
				
				case 58:
					Var0 = { -797.3146f, 333.8285f, 211.7727f };
					Var0.f_3 = { 15.7322f, -0.0116f, -109.2361f };
					break;
				
				case 59:
					Var0 = { -797.4847f, 333.8927f, 211.7222f };
					Var0.f_3 = { 13.1712f, 0.0002f, -108.5568f };
					break;
				
				case 60:
					Var0 = { -797.849f, 333.55f, 211.2733f };
					Var0.f_3 = { 4.9339f, -0.0651f, -89.7198f };
					break;
				
				case 61:
					Var0 = { -797.665f, 333.5193f, 212.3671f };
					Var0.f_3 = { -28.4554f, -0.0194f, -91.8209f };
					break;
				
				case 62:
					Var0 = { -787.6302f, 329.9987f, 203.0104f };
					Var0.f_3 = { -31.5824f, 0.0118f, 90.1879f };
					break;
				
				case 63:
					Var0 = { -797.2556f, 330.9376f, 211.385f };
					Var0.f_3 = { -5.2724f, 0f, -0.1483f };
					break;
				
				case 66:
					Var0 = { -795.6288f, 331.7296f, 209.5466f };
					Var0.f_3 = { 0f, 0f, 5.25f };
					break;
				
				case 67:
					Var0 = { -800.379f, 331.6541f, 213.85f };
					break;
				
				case 110:
					Var0 = { -797.2831f, 332.5585f, 209.8139f };
					Var0.f_3 = { 0f, 0f, 175.3101f };
					break;
				
				case 68:
					Var0 = { -795.6696f, 330.9879f, 209.7966f };
					break;
				
				case 109:
					Var0 = { -795.574f, 330.2081f, 210.9462f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 69:
					Var0 = { -786.083f, 339.5002f, 211.197f };
					Var0.f_3 = { 0f, 0f, 142.9192f };
					break;
				
				case 70:
					Var0 = { -786.89f, 340.565f, 210.73f };
					Var0.f_3 = { 0f, 0f, -92f };
					break;
				
				case 71:
					Var0 = { -786.0963f, 338.6112f, 209.947f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 72:
					Var0 = { -785.8922f, 342.4188f, 212.5402f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 73:
					Var0 = { -786.083f, 339.5002f, 211.197f };
					Var0.f_3 = { 0f, 0f, -28.07f };
					break;
				
				case 74:
					Var0 = { -786.083f, 339.5002f, 211.197f };
					Var0.f_3 = { 0f, 0f, -75.82f };
					break;
				
				case 75:
					Var0 = { -785.853f, 340.4683f, 211.2459f };
					Var0.f_3 = { 0f, 0f, 88f };
					break;
				
				case 76:
					Var0 = { -786.5244f, 339.8033f, 211.2525f };
					Var0.f_3 = { 0f, 0f, -92f };
					break;
				
				case 89:
					Var0 = { -772.427f, 337.641f, 210.397f };
					Var0.f_3 = { 0f, 0f, 270.7889f };
					break;
				
				case 91:
					break;
				
				case 90:
					Var0 = { -772.427f, 337.641f, 210.398f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 92:
					break;
				
				case 135:
					Var0 = { -772.3922f, 338.159f, 210.397f };
					break;
				
				case 136:
					Var0 = { -772.3887f, 336.9825f, 212.397f };
					break;
				
				case 77:
					break;
				
				case joaat("mpsv_lp0_31"):
					break;
				
				case 80:
					break;
				
				case 81:
					break;
				
				case 82:
					break;
				
				case 78:
					break;
				
				case 128:
					Var0 = { -786.243f, 336.793f, 211.196f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 131:
					break;
				
				case 132:
					break;
				
				case 133:
					Var0 = { -786.0952f, 335.7543f, 210.197f };
					break;
				
				case 134:
					Var0 = { -786.105f, 337.229f, 212.197f };
					break;
				
				case 130:
					Var0 = { -786.243f, 336.793f, 210.196f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 83:
					Var0 = { -772.401f, 339.7611f, 211.3992f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 85:
					break;
				
				case 88:
					break;
				
				case 84:
					Var0 = { -772.401f, 339.761f, 210.399f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 86:
					Var0 = { -772.3981f, 339.0866f, 210.397f };
					break;
				
				case 87:
					Var0 = { -772.4125f, 340.542f, 212.397f };
					break;
				
				case 93:
					Var0 = { -777.9681f, 324.2937f, 212.1467f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 94:
					Var0 = { -779.334f, 323.366f, 211.039f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 95:
					Var0 = { -777.1005f, 323.352f, 212.039f };
					Var0.f_3 = { 0f, 0f, 88.66f };
					break;
				
				case 96:
					Var0 = { -782.5724f, 324.1019f, 210.9972f };
					Var0.f_3 = { 0f, 0f, 250.3059f };
					break;
				
				case 97:
					Var0 = { -775.8468f, 323.9188f, 212.039f };
					Var0.f_3 = { 0f, 0f, 137.06f };
					break;
				
				case 98:
					Var0 = { -776.7234f, 322.9079f, 212.039f };
					Var0.f_3 = { 0f, 0f, -38.76f };
					break;
				
				case 99:
					Var0 = { -777.968f, 324.294f, 212.126f };
					Var0.f_3 = { 0.18f, 0f, 90f };
					break;
				
				case 100:
					Var0 = { -776.8833f, 323.3055f, 212.0525f };
					Var0.f_3 = { 0f, 0f, 92.74f };
					break;
				
				case 101:
					Var0 = { -779.9111f, 322.7118f, 212.371f };
					Var0.f_3 = { -2.5476f, 0.7873f, -60.1641f };
					break;
				
				case 102:
					Var0 = { -785.9226f, 338.5676f, 210.197f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 103:
					Var0 = { -787.3499f, 338.5698f, 212.397f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 104:
					Var0 = { -790.3068f, 333.9099f, 209.8369f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 105:
					Var0 = { -788.9803f, 333.9269f, 212.0424f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 182:
					Var0 = { -786.995f, 337.645f, 211.15f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 183:
					Var0 = { -789.262f, 333.715f, 210.79f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 169:
					Var0 = { -767.2747f, 332.7098f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 170:
					Var0 = { -766.3311f, 332.7101f, 212.3965f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 181:
					Var0 = { -766.61f, 333.15f, 211.113f };
					Var0.f_3 = { 0f, 0f, 11.52f };
					break;
				
				case 187:
					Var0 = { -767.79f, 330.2081f, 210.394f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 173:
					Var0 = { -767.7999f, 330.2081f, 211.5462f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 172:
					Var0 = { -767.799f, 330.2f, 211.54f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 201:
					Var0 = { -776.4926f, 322.5599f, 212.4393f };
					Var0.f_3 = { 1.846f, -0.0314f, 55.0867f };
					break;
				
				case 106:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 107:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 108:
					Var0 = { -778.979f, 323.526f, 211.997f };
					Var0.f_3 = { 90f, 0f, 0f };
					break;
				
				case 117:
					Var0 = { -786.97f, 337.87f, 211.23f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 118:
					Var0 = { -789.28f, 333.94f, 210.87f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 119:
					Var0 = { -781.3228f, 324.9367f, 210.9971f };
					Var0.f_3 = { 0f, 0f, 155.399f };
					break;
				
				case 122:
					Var0 = { -774.2581f, 324.3845f, 211.0376f };
					Var0.f_3 = { 0f, 0f, 359.6826f };
					break;
				
				case 123:
					Var0 = { -770.5826f, 322.8713f, 210.997f };
					Var0.f_3 = { 0f, 0f, 44.1694f };
					break;
				
				case 124:
					Var0 = { -774.3812f, 330.5458f, 210.4373f };
					Var0.f_3 = { 0f, 0f, 12.1428f };
					break;
				
				case 137:
					Var0 = { -776.7812f, 335.7841f, 210.397f };
					break;
				
				case 138:
					Var0 = { -787.4073f, 341.3253f, 211.4155f };
					Var0.f_3 = { -11.2423f, 0f, -122.0545f };
					break;
				
				case 139:
					Var0 = { -770.7645f, 323.2468f, 210.997f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 140:
					Var0 = { -775.7316f, 334.9848f, 210.397f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 156:
					Var0 = { -777.9761f, 322.9964f, 212.1467f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 480:
					Var0 = { -774.0504f, 323.412f, 211.0376f };
					Var0.f_3 = { 359.9196f, 0f, 0f };
					break;
				
				case 481:
					Var0 = { -778.4175f, 323.7099f, 210.9971f };
					Var0.f_3 = { 3.5f, 0f, 0f };
					break;
				
				case 482:
					Var0 = { -785.2412f, 323.6552f, 213.7473f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
			}
			switch (iParam0)
			{
				case 188:
					Var0 = { -775.4138f, 332.4451f, 211.7283f };
					Var0.f_3 = { 3.0037f, 0f, -170.7307f };
					break;
				
				case 189:
					Var0 = { -775.4138f, 332.4451f, 211.7283f };
					Var0.f_3 = { -2.7705f, 0f, -108.8474f };
					break;
				
				case 190:
					Var0 = { -765.5242f, 331.7669f, 211.8768f };
					Var0.f_3 = { -3.3052f, 0f, 109.5992f };
					break;
				
				case 191:
					Var0 = { -765.4753f, 331.6203f, 211.8768f };
					Var0.f_3 = { -3.3052f, 0f, 107.0265f };
					break;
				
				case 192:
					Var0 = { -766.5858f, 327.0256f, 211.8885f };
					Var0.f_3 = { -0.4145f, 0f, -70.3221f };
					break;
				
				case 193:
					Var0 = { -766.6987f, 327.4344f, 211.8885f };
					Var0.f_3 = { -0.4145f, 0f, -77.6678f };
					break;
				
				case 194:
					Var0 = { -777.9681f, 324.2937f, 212.1264f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 195:
					Var0 = { -768f, 330f, 211f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 196:
					Var0 = { -764.7206f, 331.1032f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 225.1773f };
					break;
				
				case 197:
					Var0 = { -765.2438f, 331.0884f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 198:
					Var0 = { -762.7346f, 329.6304f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 199:
					Var0 = { -770.2153f, 331.3272f, 210.397f };
					Var0.f_3 = { 0f, 0f, 259.9557f };
					break;
				
				case 200:
					Var0 = { -764.171f, 331.3927f, 210.3965f };
					Var0.f_3 = { 0f, 0f, 211.3965f };
					break;
				
				case 284:
					Var0 = { -763.511f, 332.1678f, 212.1505f };
					Var0.f_3 = { -4.7773f, 0f, 149.1447f };
					break;
				
				case 285:
					Var0 = { -763.1504f, 331.66f, 212.1303f };
					Var0.f_3 = { -4.7773f, 0f, 141.9896f };
					break;
				
				case 286:
					Var0 = { -766.4193f, 326.5125f, 212.5311f };
					Var0.f_3 = { -11.4509f, 0f, -44.0223f };
					break;
				
				case 287:
					Var0 = { -766.4193f, 326.5125f, 212.5311f };
					Var0.f_3 = { -11.4509f, 0f, -60.4506f };
					break;
				
				case 202:
					Var0 = { -775.9611f, 323.5558f, 211.0376f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 203:
					Var0 = { -775.0372f, 323.1731f, 211.0376f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 204:
					Var0 = { -772.7438f, 322.6319f, 210.9973f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 205:
					Var0 = { -773.885f, 323.9385f, 210.9974f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 206:
					Var0 = { -775.5784f, 324.4797f, 211.0376f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 207:
					Var0 = { -774.5199f, 325.2492f, 210.9972f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 208:
					Var0 = { -773.3677f, 323.0146f, 210.9975f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 209:
					Var0 = { -773.8023f, 324.8623f, 210.9973f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 210:
					Var0 = { -774.6545f, 324.097f, 211.0376f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 211:
					Var0 = { -774.1133f, 322.7904f, 211.0376f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 212:
					Var0 = { -774.9265f, 326.208f, 211.038f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 213:
					Var0 = { -773.3089f, 325.8212f, 210.9972f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 214:
					Var0 = { -775.1957f, 325.4035f, 210.9971f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 215:
					Var0 = { -773.0787f, 323.9427f, 211.038f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 216:
					Var0 = { -774.0742f, 326.0734f, 210.997f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 217:
					Var0 = { -775.5435f, 326.1689f, 211.038f };
					Var0.f_3 = { 0f, 0f, 268.8991f };
					break;
				
				case 278:
					Var0 = { -787.4547f, 341.7032f, 209.918f };
					break;
				
				case 279:
					Var0 = { -768.1786f, 343.2638f, 214.6127f };
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = { -764.992f, 328.58f, 210.422f };
					Var0.f_3 = { 0f, 0f, -44.4563f };
					break;
				
				case 237:
					Var0 = { -766.013f, 327.767f, 210.428f };
					Var0.f_3 = { 0f, 0f, -391.657f };
					break;
				
				case 238:
					Var0 = { -766.094f, 328.635f, 210.428f };
					Var0.f_3 = { 0f, 0f, -431.877f };
					break;
				
				case 239:
					Var0 = { -764.291f, 327.454f, 210.422f };
					Var0.f_3 = { 0f, 0f, 19.2554f };
					break;
				
				case 240:
					Var0 = { -763.809f, 330.573f, 211.974f };
					Var0.f_3 = { -3.55867f, 0f, -212.394f };
					break;
				
				case 241:
					Var0 = { -766.074f, 328.26f, 210.427f };
					Var0.f_3 = { 0f, 0f, -118.502f };
					break;
				
				case 242:
					Var0 = { -766.41f, 327.523f, 210.426f };
					Var0.f_3 = { 0f, 0f, -69.3404f };
					break;
				
				case 243:
					Var0 = { -766.876f, 328.004f, 210.427f };
					Var0.f_3 = { 0f, 0f, -96.1801f };
					break;
				
				case 244:
					Var0 = { -766.555f, 328.857f, 210.426f };
					Var0.f_3 = { 0f, 0f, -112.605f };
					break;
				
				case 245:
					Var0 = { -763.954f, 327.798f, 212.09f };
					Var0.f_3 = { -5.44662f, 0f, -267.965f };
					break;
				
				case 246:
					Var0 = { -765.127f, 327.519f, 210.426f };
					Var0.f_3 = { 0f, 0f, -6.65659f };
					break;
				
				case 247:
					Var0 = { -765.828f, 327.652f, 210.422f };
					Var0.f_3 = { 0f, 0f, -45.6073f };
					break;
				
				case 248:
					Var0 = { -765.739f, 326.824f, 210.426f };
					Var0.f_3 = { 0f, 0f, -37.4123f };
					break;
				
				case 249:
					Var0 = { -764.859f, 327.051f, 210.426f };
					Var0.f_3 = { 0f, 0f, 2.9834f };
					break;
				
				case 250:
					Var0 = { -764.761f, 329.844f, 211.99f };
					Var0.f_3 = { -2.98413f, 0f, -186.621f };
					break;
				
				case 251:
					Var0 = { -764.973f, 332.062f, 210.424f };
					Var0.f_3 = { 0f, 0f, -191.339f };
					break;
				
				case 252:
					Var0 = { -765.377f, 332.849f, 210.424f };
					Var0.f_3 = { 0f, 0f, -176.689f };
					break;
				
				case 253:
					Var0 = { -764.435f, 332.614f, 210.424f };
					Var0.f_3 = { 0f, 0f, -202.714f };
					break;
				
				case 254:
					Var0 = { -764.06f, 332.156f, 210.424f };
					Var0.f_3 = { 0f, 0f, -214.614f };
					break;
				
				case 255:
					Var0 = { -765.34f, 329.562f, 211.85f };
					Var0.f_3 = { -0.2929f, 0f, -364.117f };
					break;
				
				case 256:
					Var0 = { -763.142f, 327.838f, 210.428f };
					Var0.f_3 = { 0f, 0f, -379.909f };
					break;
				
				case 257:
					Var0 = { -763.879f, 326.969f, 210.428f };
					Var0.f_3 = { 0f, 0f, -378.784f };
					break;
				
				case 258:
					Var0 = { -762.878f, 327.115f, 210.428f };
					Var0.f_3 = { 0f, 0f, -364.134f };
					break;
				
				case 259:
					Var0 = { -763.937f, 327.611f, 210.428f };
					Var0.f_3 = { 0f, 0f, -394.008f };
					break;
				
				case 260:
					Var0 = { -762.51f, 330.023f, 211.957f };
					Var0.f_3 = { -1.83503f, 0f, -191.73f };
					break;
				
				case 307:
					Var0 = { -765.9982f, 327.6255f, 211.9497f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 331:
					Var0 = { -765.9982f, 327.6255f, 211.9497f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 332:
					Var0 = { -765.9982f, 327.6255f, 211.9497f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 333:
					Var0 = { -764.564f, 336.115f, 211.291f };
					Var0.f_3 = { 0f, 0f, -396f };
					break;
				
				case 334:
					Var0 = { -766.594f, 328.328f, 212.092f };
					Var0.f_3 = { 0f, 0f, -287.85f };
					break;
				
				case 298:
					Var0 = { -786.7094f, 336.6323f, 211.1975f };
					break;
				
				case 299:
					Var0 = { -771.9327f, 339.9579f, 211.3496f };
					break;
				
				case 300:
					Var0 = { -771.7077f, 330.874f, 210.397f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 87.5541f;
					break;
				
				case 301:
					Var0 = { -770.7838f, 331.6742f, 210.3968f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 87.5541f;
					break;
				
				case 302:
					Var0 = { -770.0904f, 330.633f, 210.397f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 88.5541f;
					break;
				
				case 303:
					Var0 = { -769.0316f, 330.9395f, 210.397f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 87.5541f;
					break;
				
				case 310:
					Var0 = { -777.1f, 342.2f, 211.6f };
					Var0.f_3 = { -3.4f, 0f, 132.4f };
					break;
				
				case 337:
					Var0 = { -777.8727f, 341.4907f, 211.5446f };
					Var0.f_3 = { -1.8116f, 0.05f, 133.352f };
					break;
				
				case 335:
					Var0 = { -772.6966f, 331.9936f, 211.381f };
					Var0.f_3 = { 0.3868f, 0f, 56.8358f };
					break;
				
				case 338:
					Var0 = { -773.5449f, 332.5226f, 211.3917f };
					Var0.f_3 = { 0.6157f, -0.0123f, 58.2345f };
					break;
				
				case 336:
					Var0 = { -786.1434f, 329.2248f, 211.4969f };
					Var0.f_3 = { 0.8433f, 0.0824f, -17.4418f };
					break;
				
				case 339:
					Var0 = { -786.217f, 329.6877f, 211.5049f };
					Var0.f_3 = { 1.056f, 0.1046f, -16.8046f };
					break;
				
				case 311:
					Var0 = { -769.6929f, 323.9527f, 211.2633f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 312:
					Var0 = { -782.338f, 336.612f, 211.238f };
					Var0.f_3 = { 0f, 0f, -9f };
					break;
				
				case 313:
					Var0 = { -782.338f, 336.612f, 211.238f };
					Var0.f_3 = { 0f, 0f, -9f };
					break;
				
				case 314:
					Var0 = { -782.338f, 336.612f, 211.238f };
					Var0.f_3 = { 0f, 0f, -9f };
					break;
				
				case 315:
					Var0 = { -781.888f, 336.562f, 211.242f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 316:
					Var0 = { -781.888f, 336.562f, 211.242f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 317:
					Var0 = { -781.888f, 336.562f, 211.242f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 318:
					Var0 = { -772.555f, 340.33f, 211.43f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 319:
					Var0 = { -772.555f, 340.33f, 211.43f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 320:
					Var0 = { -772.555f, 340.33f, 211.43f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 321:
					Var0 = { -772.425f, 339.575f, 211.516f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 322:
					Var0 = { -772.425f, 339.575f, 211.516f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 323:
					Var0 = { -772.425f, 339.575f, 211.516f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 324:
					Var0 = { -773.775f, 335.855f, 211.43f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 325:
					Var0 = { -773.775f, 335.855f, 211.43f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 326:
					Var0 = { -773.775f, 335.855f, 211.43f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 327:
					Var0 = { -773.775f, 335.2f, 211.516f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 328:
					Var0 = { -773.775f, 335.2f, 211.516f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 329:
					Var0 = { -773.775f, 335.2f, 211.516f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
			}
			break;
		
		case -1:
		case 1:
			switch (iParam0)
			{
				case 278:
					Var0 = { -798.7061f, 341.8386f, 204.7183f };
					break;
				
				case 279:
					Var0 = { -785.138f, 341.7283f, 208.6144f };
					break;
				
				case 280:
					Var0 = { -801.4162f, 325.805f, 205.0629f };
					break;
				
				case 281:
					Var0 = { -801.5137f, 342.8037f, 209.2183f };
					break;
				
				case 282:
					Var0 = { -796.1956f, 440.2408f, 79.64348f };
					Var0.f_3 = { 100f, 200f, 0f };
					break;
				
				case 283:
					Var0 = { -862.6429f, 353.2339f, 74.35394f };
					Var0.f_3 = { 100f, 200f, 0f };
					break;
				
				case 0:
					Var0 = { -795.23f, 326.754f, 207.017f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 1:
					Var0 = { -777.986f, 340.524f, 206.371f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 2:
					Var0 = { -775.679f, 340.355f, 209.621f };
					Var0.f_3 = { 0f, 0f, -81.2011f };
					break;
				
				case 3:
					Var0 = { -790.411f, 337.121f, 200.414f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 4:
					Var0 = { -804.4529f, 334.1814f, 205.146f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 5:
					Var0 = { -772.4561f, 334.1661f, 210.103f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 276:
					Var0 = { -797.6042f, 336.3656f, 200.2337f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 277:
					Var0 = { -777.6318f, 336.4067f, 205.821f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 6:
					Var0 = { -775.0327f, 340.3672f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 90.0569f };
					break;
				
				case 7:
					Var0 = { -781.339f, 329.26f, 206.626f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 8:
					Var0 = { -777.327f, 332.534f, 209.036f };
					Var0.f_3 = { -7.632f, 0f, -121.063f };
					break;
				
				case 141:
					Var0 = { -781.85f, 327.1f, 208.2f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 142:
					Var0 = { -781.5f, 327.125f, 209.35f };
					Var0.f_3 = { 180f, -180f, 0f };
					break;
				
				case 143:
					Var0 = { -779.605f, 327.125f, 209.345f };
					Var0.f_3 = { 180f, -180f, 0f };
					break;
				
				case 144:
					Var0 = { -781.8206f, 330.0332f, 208.1489f };
					Var0.f_3 = { 0.1322f, 0.0536f, -179.9343f };
					break;
				
				case 158:
					Var0 = { -781.0333f, 329.1684f, 208.1541f };
					Var0.f_3 = { -2.3423f, 0.0392f, -177.7558f };
					break;
				
				case 145:
					Var0 = { -780.8303f, 330.0394f, 208.1503f };
					Var0.f_3 = { -0.2118f, 0.062f, -178.3432f };
					break;
				
				case 146:
					Var0 = { -781.8206f, 330.0332f, 208.1489f };
					Var0.f_3 = { 0.994f, 0.0536f, 173.2112f };
					break;
				
				case 147:
					Var0 = { -783.42f, 328.818f, 208.588f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 148:
					Var0 = { -783.39f, 328.3264f, 207.5647f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 153:
					Var0 = { -781.804f, 327.4904f, 206.6219f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 154:
					Var0 = { -781.9431f, 329.0702f, 208.7333f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 155:
					Var0 = { -781.9422f, 329.0702f, 207.7881f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 157:
					Var0 = { -781.8206f, 329.6909f, 208.1497f };
					Var0.f_3 = { -7.145f, 0.0536f, 48.2917f };
					break;
				
				case 234:
					Var0 = { -782.9864f, 329.0702f, 208.6212f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 149:
					Var0 = { -783.0602f, 330.8799f, 206.6294f };
					Var0.f_3 = { 0f, 0f, 249.5208f };
					break;
				
				case 150:
					Var0 = { -779.8566f, 331.8636f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 144.9461f };
					break;
				
				case 151:
					Var0 = { -778.3817f, 330.2339f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 108.2755f };
					break;
				
				case 152:
					Var0 = { -779.6613f, 328.0661f, 206.6224f };
					Var0.f_3 = { 0f, 0f, 2.1244f };
					break;
				
				case 169:
					Var0 = { -778.2188f, 332.2201f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 170:
					Var0 = { -776.9868f, 332.502f, 208.3432f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 173:
					Var0 = { -779.4343f, 332.8936f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 174:
					Var0 = { -783.15f, 329.72f, 206.63f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 175:
					Var0 = { -783.81f, 329.83f, 206.63f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 176:
					Var0 = { -784.47f, 329.94f, 206.63f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 177:
					Var0 = { -785.13f, 330.05f, 206.63f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 178:
					Var0 = { -780.0342f, 341.8051f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 179:
					Var0 = { -782.939f, 338.1156f, 207.3599f };
					Var0.f_3 = { 9.1439f, 0f, -136.3547f };
					break;
				
				case 180:
					Var0 = { -782.2037f, 338.8171f, 207.3599f };
					Var0.f_3 = { 9.1439f, 0f, -136.3547f };
					break;
				
				case 201:
					Var0 = { -778.9756f, 341.8501f, 208.1999f };
					Var0.f_3 = { -3.0273f, -0.0245f, -131.691f };
					break;
				
				case 235:
					Var0 = { -803.6476f, 339.2161f, 206.4198f };
					Var0.f_3 = { -0.3015f, 0f, -107.8483f };
					break;
				
				case 261:
					Var0 = { -780.576f, 328.938f, 207.613f };
					Var0.f_3 = { 0f, 0f, 147f };
					break;
				
				case 262:
					Var0 = { -780.576f, 328.938f, 207.613f };
					Var0.f_3 = { 0f, 0f, 147f };
					break;
				
				case 263:
					Var0 = { -803.75f, 338.61f, 206.23f };
					Var0.f_3 = { 0f, 0f, 88.75f };
					break;
				
				case 264:
					Var0 = { -803.75f, 338.61f, 206.23f };
					Var0.f_3 = { 0f, 0f, 88.75f };
					break;
				
				case 265:
					Var0 = { -803.75f, 338.61f, 206.23f };
					Var0.f_3 = { 0f, 0f, 88.75f };
					break;
				
				case 266:
					Var0 = { -803.75f, 338.61f, 206.23f };
					Var0.f_3 = { 0f, 0f, 88.75f };
					break;
				
				case 267:
					Var0 = { -800.273f, 337.075f, 206.282f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 268:
					Var0 = { -800.273f, 337.075f, 206.282f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 269:
					Var0 = { -800.273f, 337.075f, 206.282f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 270:
					Var0 = { -800.273f, 337.075f, 206.282f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 271:
					Var0 = { -800.5109f, 337.0358f, 205.2443f };
					Var0.f_3 = { 0f, 0f, 352.6839f };
					break;
				
				case 272:
					Var0 = { -799.0406f, 337.0152f, 205.2443f };
					Var0.f_3 = { 0f, 0f, 0.5617f };
					break;
				
				case 273:
					Var0 = { -798.2809f, 338.6735f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 97.7813f };
					break;
				
				case 274:
					Var0 = { -798.5187f, 340.1423f, 205.2443f };
					Var0.f_3 = { 0f, 0f, 117.9575f };
					break;
				
				case 275:
					Var0 = { -794.7f, 341.5f, 206.6f };
					Var0.f_3 = { -2.6f, 0f, 126.4f };
					break;
				
				case 304:
					Var0 = { -791.294f, 338.071f, 200.413f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 305:
					Var0 = { -776.752f, 339.378f, 207.73f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 308:
					Var0 = { -778.9598f, 339.3295f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 293.5977f };
					break;
				
				case 309:
					Var0 = { -774.4114f, 340.2285f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 14:
					Var0 = { -800.302f, 342.911f, 207.254f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 15:
					Var0 = { -777.35f, 341.299f, 209.269f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 9:
					Var0 = { -795.653f, 336.958f, 200.441f };
					Var0.f_3 = { 0f, 0f, -94.1775f };
					break;
				
				case 10:
					Var0 = { -796.9207f, 329.1438f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 314.7556f };
					break;
				
				case 11:
					Var0 = { -800.836f, 337.378f, 205.244f };
					Var0.f_3 = { 0f, 0f, -0.979401f };
					break;
				
				case 12:
					Var0 = { -793.525f, 341.505f, 205.244f };
					Var0.f_3 = { 0f, 0f, 150.429f };
					break;
				
				case 16:
					Var0 = { -797.691f, 339.522f, 205.693f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 22:
					Var0 = { -798.984f, 339.539f, 205.244f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 28:
					Var0 = { -797.24f, 339.524f, 207.169f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 17:
					Var0 = { -797.671f, 338.612f, 205.693f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 23:
					Var0 = { -798.992f, 338.65f, 205.244f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 29:
					Var0 = { -797.13f, 338.628f, 207.037f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 18:
					Var0 = { -797.671f, 337.652f, 205.693f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 24:
					Var0 = { -798.984f, 337.647f, 205.244f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 30:
					Var0 = { -797.104f, 337.627f, 207.072f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 19:
					Var0 = { -798.831f, 336.392f, 205.684f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 25:
					Var0 = { -798.826f, 337.569f, 205.244f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 31:
					Var0 = { -798.822f, 335.815f, 207.095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 20:
					Var0 = { -799.761f, 336.402f, 205.684f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 26:
					Var0 = { -799.757f, 337.57f, 205.244f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 32:
					Var0 = { -799.757f, 335.847f, 207.043f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 21:
					Var0 = { -800.721f, 336.402f, 205.684f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 27:
					Var0 = { -800.72f, 337.588f, 205.244f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 33:
					Var0 = { -800.733f, 335.888f, 207.224f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 34:
					Var0 = { -801.7045f, 339.0622f, 206.8001f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 35:
					Var0 = { -796.8376f, 333.3725f, 207.3909f };
					Var0.f_3 = { -9.4648f, 0f, 32.451f };
					break;
				
				case 36:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 37:
					Var0 = { -795.085f, 333.845f, 205.221f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 38:
					Var0 = { -803.8287f, 342.3719f, 206.3142f };
					Var0.f_3 = { 0.0594f, 0f, -121.121f };
					break;
				
				case 39:
					Var0 = { -804.1694f, 341.7474f, 206.3142f };
					Var0.f_3 = { 0.0111f, 0f, -126.9666f };
					break;
				
				case 120:
					Var0 = { -790.2173f, 342.8064f, 201.4386f };
					Var0.f_3 = { 1.2116f, 0f, 126.699f };
					break;
				
				case 121:
					Var0 = { -790.019f, 342.5399f, 201.4386f };
					Var0.f_3 = { 1.2116f, 0f, 132.3405f };
					break;
				
				case 125:
					Var0 = { -777.5101f, 328.2689f, 208.0708f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 40:
					Var0 = { -796.22f, 331.85f, 200.414f };
					Var0.f_3 = { 0f, 0f, -85.518f };
					break;
				
				case 41:
					Var0 = { -792.9531f, 341.6f, 206.2202f };
					Var0.f_3 = { 0f, 0f, 119.72f };
					break;
				
				case 126:
					Var0 = { -792.7816f, 341.9671f, 205.2202f };
					break;
				
				case 127:
					Var0 = { -793.8069f, 340.9885f, 207.2202f };
					break;
				
				case 42:
					Var0 = { Vector(205.673f, 341.996f, -794.072f) + Vector(0.002f, 0.2081f, 0.0758f) };
					Var0.f_3 = { 0f, 0f, 45.72f };
					break;
				
				case 340:
					Var0 = { -796.2623f, 338.737f, 201.2637f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 46:
					Var0 = { -795.6178f, 337.0022f, 201.3958f };
					Var0.f_3 = { 0f, 0f, 30.2104f };
					break;
				
				case 47:
					Var0 = { -795.891f, 338.663f, 200.827f };
					Var0.f_3 = { 0f, 0f, -5.76f };
					break;
				
				case 48:
					Var0 = { -616.5919f, 65.3481f, 101.8033f };
					Var0.f_3 = { 0.9407f, 0.0521f, 147.8146f };
					break;
				
				case 49:
					Var0 = { -619.5043f, 62.4537f, 102.0873f };
					Var0.f_3 = { -1.4768f, -0.0422f, -101.6693f };
					break;
				
				case 612:
					Var0 = { -794.937f, 340.63f, 201.428f };
					Var0.f_3 = { 0f, 0f, 129.24f };
					break;
				
				case 615:
					Var0 = { -794.1949f, 339.969f, 200.4136f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 616:
					Var0 = { -796.447f, 339.9556f, 202.4136f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = { -796.3056f, 337.3367f, 202.4136f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 51:
					Var0 = { -793.9697f, 337.3367f, 200.4136f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 56:
					Var0 = { -787.837f, 329.8524f, 201.5026f };
					Var0.f_3 = { 0f, 0f, 81.0207f };
					break;
				
				case 57:
					Var0 = { -788.33f, 330.65f, 200.612f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 64:
					Var0 = { -788.731f, 330f, 202.775f };
					Var0.f_3 = { -45f, 0f, 0f };
					break;
				
				case 65:
					Var0 = { -787.9f, 329.6f, 202.5f };
					Var0.f_3 = { 315f, 0f, 270f };
					break;
				
				case 58:
					Var0 = { -787.2075f, 330.4225f, 201.8932f };
					Var0.f_3 = { 0.0309f, 0.0078f, 94.294f };
					break;
				
				case 59:
					Var0 = { -787.7042f, 329.7779f, 202.4025f };
					Var0.f_3 = { 13.0276f, -0.0448f, 76.7381f };
					break;
				
				case 60:
					Var0 = { -787.3719f, 329.972f, 202.0055f };
					Var0.f_3 = { -1.5606f, 0.051f, 89.4345f };
					break;
				
				case 61:
					Var0 = { -787.6302f, 329.9987f, 203.0104f };
					Var0.f_3 = { -31.5824f, 0.0118f, 90.1879f };
					break;
				
				case 62:
					Var0 = { -787.6302f, 329.9987f, 203.0104f };
					Var0.f_3 = { -31.5824f, 0.0118f, 90.1879f };
					break;
				
				case 63:
					Var0 = { -787.8431f, 333.6357f, 201.671f };
					Var0.f_3 = { -7.1813f, 0.0176f, 176.9822f };
					break;
				
				case 66:
					Var0 = { -789.2f, 331.9405f, 200.2136f };
					Var0.f_3 = { 0f, 0f, 6.8f };
					break;
				
				case 67:
					Var0 = { -784.3f, 331.9405f, 203.4136f };
					break;
				
				case 110:
					Var0 = { -787.9185f, 330.928f, 200.4275f };
					Var0.f_3 = { 0f, 0f, 356.6557f };
					break;
				
				case 68:
					Var0 = { -789.3445f, 332.7155f, 201f };
					break;
				
				case 109:
					Var0 = { -789.3017f, 332.0119f, 201.5596f };
					break;
				
				case 69:
					Var0 = { -793.4663f, 339.1717f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 241.5163f };
					break;
				
				case 70:
					Var0 = { -793.609f, 338.332f, 205.696f };
					Var0.f_3 = { 0f, 0f, -28.08f };
					break;
				
				case 71:
					Var0 = { -793.9657f, 334.1319f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 72:
					Var0 = { -793.9049f, 343.3448f, 206.2567f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 73:
					Var0 = { -793.8227f, 336.3578f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 74:
					Var0 = { -792.57f, 338.76f, 206.2183f };
					Var0.f_3 = { 0f, 0f, 320f };
					break;
				
				case 75:
					Var0 = { -793.07f, 339.22f, 206.31f };
					Var0.f_3 = { 0f, 0f, 151.92f };
					break;
				
				case 76:
					Var0 = { -792.76f, 338.33f, 206.32f };
					Var0.f_3 = { 0f, 0f, -28.08f };
					break;
				
				case 89:
					Var0 = { -792.8026f, 330.2704f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0.11f };
					break;
				
				case 91:
					Var0 = { -791.3608f, 331.6151f, 206.7155f };
					Var0.f_3 = { -6.1061f, 0f, 124.716f };
					break;
				
				case 90:
					Var0 = { -791.55f, 331.098f, 206.346f };
					Var0.f_3 = { 0f, 0f, -89.64f };
					break;
				
				case 92:
					Var0 = { -791.1231f, 329.0256f, 207.0468f };
					Var0.f_3 = { -10.5496f, 0f, 38.2733f };
					break;
				
				case 135:
					Var0 = { -792.3248f, 330.4116f, 205.2183f };
					break;
				
				case 136:
					Var0 = { -793.3149f, 330.4896f, 207.2183f };
					break;
				
				case 77:
					Var0 = { -795.4578f, 337.2369f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 82.6775f };
					break;
				
				case joaat("mpsv_lp0_31"):
					Var0 = { -796.8416f, 336.5425f, 206.3782f };
					Var0.f_3 = { 4.1239f, 0.032f, -35.7362f };
					break;
				
				case 80:
					Var0 = { -794.1184f, 339.0253f, 207.2513f };
					Var0.f_3 = { -14.3736f, 0f, 132.7127f };
					break;
				
				case 81:
					Var0 = { -796.8088f, 337.2715f, 207.0081f };
					break;
				
				case 82:
					Var0 = { -794.73f, 337.4924f, 205.2183f };
					break;
				
				case 78:
					Var0 = { Vector(206.15f, 337.263f, -796.115f) + Vector(0.0084f, -0.1213f, -0.0385f) + Vector(-0.0001f, 0.0008f, 0.0245f) };
					Var0.f_3 = { Vector(84.6f, 0f, 0f) + Vector(5.64f, 0f, 0f) };
					break;
				
				case 83:
					Var0 = { -793.3814f, 333.4903f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 182.6354f };
					break;
				
				case 85:
					Var0 = { -792.4017f, 332.1834f, 206.589f };
					Var0.f_3 = { -0.4759f, 0f, 56.2407f };
					break;
				
				case 88:
					Var0 = { -792.6917f, 334.5816f, 206.9306f };
					Var0.f_3 = { -15.2511f, -0.1442f, 161.552f };
					break;
				
				case 84:
					Var0 = { Vector(205.209f, 332.875f, -793.279f) - Vector(0.0001f, -0.0385f, -0.024f) + Vector(0.0002f, 0.0024f, -0.0121f) };
					Var0.f_3 = { Vector(-178.56f, 0f, 0f) + Vector(2.39f, 0f, 0f) };
					break;
				
				case 86:
					Var0 = { -793.25f, 332.5f, 207f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 87:
					Var0 = { -793.25f, 333.75f, 205f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 93:
					Var0 = { -776.7022f, 339.3779f, 207.7347f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 94:
					Var0 = { -775.303f, 340.308f, 206.661f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 95:
					Var0 = { -777.537f, 340.322f, 206.648f };
					Var0.f_3 = { 0f, 0f, -89.39f };
					break;
				
				case 96:
					Var0 = { -774.1763f, 330.914f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 0.1966f };
					break;
				
				case 97:
					Var0 = { -778.79f, 339.755f, 206.648f };
					Var0.f_3 = { 0f, 0f, -42.94f };
					break;
				
				case 98:
					Var0 = { -777.914f, 340.766f, 206.648f };
					Var0.f_3 = { 0f, 0f, 141.24f };
					break;
				
				case 99:
					Var0 = { -775.316f, 340.308f, 206.654f };
					Var0.f_3 = { 0.18f, 0f, -90f };
					break;
				
				case 100:
					Var0 = { -777.77f, 340.369f, 206.659f };
					Var0.f_3 = { 0f, 0f, -87.26f };
					break;
				
				case 101:
					Var0 = { -775.1893f, 340.8357f, 208.0344f };
					Var0.f_3 = { -0.162607f, 0.264814f, 116.59f };
					break;
				
				case 102:
					Var0 = { -794.8591f, 335.3709f, 202.3962f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 103:
					Var0 = { -794.8546f, 336.6222f, 200.3511f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 182:
					Var0 = { -794.419f, 335.328f, 201.441f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 104:
					Var0 = { -800.4421f, 325.256f, 207.2709f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 105:
					Var0 = { -800.4426f, 326.6761f, 205.1558f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 183:
					Var0 = { -800.012f, 325.807f, 206.097f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 181:
					Var0 = { -777.695f, 332.054f, 207.34f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 106:
					Var0 = { -796.3882f, 336.8372f, 202.5976f };
					Var0.f_3 = { -22.7361f, 0f, -129.0221f };
					break;
				
				case 107:
					Var0 = { -801.9172f, 326.3802f, 207.4878f };
					Var0.f_3 = { -35.2381f, 0f, -111.7465f };
					break;
				
				case 108:
					Var0 = { -775.7377f, 340.0719f, 207.6209f };
					Var0.f_3 = { 90f, 0f, 0f };
					break;
				
				case 117:
					Var0 = { -794.9332f, 335.1039f, 201.5308f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 118:
					Var0 = { -800.421f, 325.5437f, 206.1822f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 119:
					Var0 = { -774.0972f, 334.244f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 352.8303f };
					break;
				
				case 122:
					Var0 = { -779.7051f, 338.5465f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 123:
					Var0 = { -786.6962f, 335.6548f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 90f };
					break;
				
				case 124:
					Var0 = { -787.4521f, 337.461f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 360f };
					break;
				
				case 137:
					Var0 = { -792.5942f, 335.772f, 205.2183f };
					break;
				
				case 139:
					Var0 = { -794.9999f, 334.6179f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 140:
					Var0 = { -797.3075f, 328.841f, 205.2183f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 480:
					Var0 = { -778.8162f, 337.2836f, 206.6209f };
					Var0.f_3 = { 81.5959f, 0f, 0f };
					break;
				
				case 481:
					Var0 = { -774.3743f, 342.161f, 206.8709f };
					Var0.f_3 = { 3.25f, 0f, 0f };
					break;
				
				case 482:
					Var0 = { -774.4149f, 333.1899f, 209.1209f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 172:
					Var0 = { -780.6417f, 333.1093f, 207.79f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 187:
					Var0 = { -780.592f, 333.17f, 206.62f };
					Var0.f_3 = { 0f, 0f, 180f };
					break;
				
				case 188:
					Var0 = { -781.7f, 340.8f, 208.1f };
					Var0.f_3 = { -0.7f, 0f, -115.1f };
					break;
				
				case 189:
					Var0 = { -781.8f, 340.7f, 208.1f };
					Var0.f_3 = { 0.1f, 0f, -142.3f };
					break;
				
				case 190:
					Var0 = { -778.7875f, 330.4278f, 208.0589f };
					Var0.f_3 = { -3.1551f, 0f, 28.7142f };
					break;
				
				case 191:
					Var0 = { -778.8762f, 330.3792f, 208.0589f };
					Var0.f_3 = { -3.1551f, 0f, 28.7142f };
					break;
				
				case 192:
					Var0 = { -783.8f, 331.7f, 208.1f };
					Var0.f_3 = { 1.3f, 0f, -160.8f };
					break;
				
				case 193:
					Var0 = { -782.9999f, 331.8702f, 208.1f };
					Var0.f_3 = { 1.3f, 0f, -174.5963f };
					break;
				
				case 194:
					Var0 = { -776.7022f, 339.3779f, 207.7347f };
					Var0.f_3 = { 0f, 0f, -90f };
					break;
				
				case 195:
					Var0 = { -781f, 333f, 208f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 196:
					Var0 = { -780.0269f, 330.2854f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 134.6611f };
					break;
				
				case 197:
					Var0 = { -779.5729f, 330.6496f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 198:
					Var0 = { -781.5103f, 328.0656f, 206.6237f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 199:
					Var0 = { -779.7507f, 334.918f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 178.965f };
					break;
				
				case 200:
					Var0 = { -779.9905f, 329.9511f, 206.6214f };
					Var0.f_3 = { 0f, 0f, 180.6476f };
					break;
				
				case 284:
					Var0 = { -779.2086f, 329.115f, 208.0224f };
					Var0.f_3 = { -3.027f, 0f, 55.8939f };
					break;
				
				case 285:
					Var0 = { -779.8893f, 328.631f, 208.0071f };
					Var0.f_3 = { -2.4917f, 0f, 46.2377f };
					break;
				
				case 286:
					Var0 = { -784.2476f, 332.1267f, 208.4403f };
					Var0.f_3 = { -2.6168f, 0f, -152.3636f };
					break;
				
				case 287:
					Var0 = { -783.6574f, 332.094f, 208.4264f };
					Var0.f_3 = { -2.7465f, 0f, -164.2146f };
					break;
				
				case 202:
					Var0 = { -778.2794f, 340.0222f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 203:
					Var0 = { -778.2555f, 339.0395f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 204:
					Var0 = { -778.3621f, 340.8983f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 205:
					Var0 = { -779f, 340.4049f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 206:
					Var0 = { -779f, 339.4461f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 207:
					Var0 = { -779f, 341.4157f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 208:
					Var0 = { -779f, 338.581f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 209:
					Var0 = { -779.6f, 340.981f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 210:
					Var0 = { -779.6728f, 339.9634f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 211:
					Var0 = { -779.7316f, 338.9568f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 212:
					Var0 = { -779.6448f, 338.1745f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 213:
					Var0 = { -779.5272f, 341.9876f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 214:
					Var0 = { -778.414f, 337.97f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 215:
					Var0 = { -778.997f, 337.4091f, 206.621f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 216:
					Var0 = { -780.2925f, 338.9398f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
				
				case 217:
					Var0 = { -780.2618f, 337.8353f, 206.621f };
					Var0.f_3 = { 0f, 0f, 91.062f };
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = { -782.5022f, 330.3769f, 206.625f };
					Var0.f_3 = { 0f, 0f, 225.5437f };
					break;
				
				case 237:
					Var0 = { -783.0176f, 331.4477f, 206.625f };
					Var0.f_3 = { 0f, 0f, 238.3427f };
					break;
				
				case 238:
					Var0 = { -782.15f, 331.5283f, 206.625f };
					Var0.f_3 = { 0f, 0f, 198.123f };
					break;
				
				case 239:
					Var0 = { -783.581f, 329.641f, 206.625f };
					Var0.f_3 = { 0f, 0f, 270f };
					break;
				
				case 240:
					Var0 = { -780.2399f, 329.0106f, 208.1872f };
					Var0.f_3 = { -2.857897f, 0f, 56.2119f };
					break;
				
				case 241:
					Var0 = { -782.822f, 331.4591f, 206.63f };
					Var0.f_3 = { 0f, 0f, 151.4979f };
					break;
				
				case 242:
					Var0 = { -783.5588f, 331.7943f, 206.6295f };
					Var0.f_3 = { 0f, 0f, 200.6596f };
					break;
				
				case 243:
					Var0 = { -783.0787f, 332.2606f, 206.6301f };
					Var0.f_3 = { 0f, 0f, 173.8199f };
					break;
				
				case 244:
					Var0 = { -782.2255f, 331.9394f, 206.6295f };
					Var0.f_3 = { 0f, 0f, 157.3949f };
					break;
				
				case 245:
					Var0 = { -783.2838f, 329.3391f, 208.2937f };
					Var0.f_3 = { -5.446615f, 0f, 2.034569f };
					break;
				
				case 246:
					Var0 = { -783.5632f, 330.5113f, 206.6291f };
					Var0.f_3 = { 0f, 0f, 263.3434f };
					break;
				
				case 247:
					Var0 = { -783.482f, 331.213f, 206.625f };
					Var0.f_3 = { 0f, 0f, 224.3927f };
					break;
				
				case 248:
					Var0 = { -784.2584f, 331.1237f, 206.6295f };
					Var0.f_3 = { 0f, 0f, 232.5877f };
					break;
				
				case 249:
					Var0 = { -784.0311f, 330.2437f, 206.629f };
					Var0.f_3 = { 0f, 0f, 272.9834f };
					break;
				
				case 250:
					Var0 = { -781.2383f, 330.1453f, 208.1935f };
					Var0.f_3 = { -2.984129f, 0f, 83.37932f };
					break;
				
				case 251:
					Var0 = { -778.7227f, 330.4073f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 78.6608f };
					break;
				
				case 252:
					Var0 = { -777.936f, 330.8115f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 93.3108f };
					break;
				
				case 253:
					Var0 = { -778.1702f, 329.8693f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 67.2858f };
					break;
				
				case 254:
					Var0 = { -778.6282f, 329.4945f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 55.3858f };
					break;
				
				case 255:
					Var0 = { -781.2223f, 330.7747f, 208.0468f };
					Var0.f_3 = { -0.2929f, 0f, -94.1173f };
					break;
				
				case 256:
					Var0 = { -782.9468f, 328.5765f, 206.6246f };
					Var0.f_3 = { 0f, 0f, 250.0915f };
					break;
				
				case 257:
					Var0 = { -783.8154f, 329.3127f, 206.6246f };
					Var0.f_3 = { 0f, 0f, 251.2165f };
					break;
				
				case 258:
					Var0 = { -783.6699f, 328.3123f, 206.6246f };
					Var0.f_3 = { 0f, 0f, 265.8665f };
					break;
				
				case 259:
					Var0 = { -783.1733f, 329.3715f, 206.6246f };
					Var0.f_3 = { 0f, 0f, 235.9915f };
					break;
				
				case 260:
					Var0 = { -780.7612f, 327.9438f, 208.1539f };
					Var0.f_3 = { -1.835026f, 0f, 78.26962f };
					break;
				
				case 307:
					Var0 = { -783.1698f, 331.3681f, 208.1709f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 331:
					Var0 = { -783.1698f, 331.3681f, 208.1709f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 332:
					Var0 = { -783.1698f, 331.3681f, 208.1709f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 333:
					Var0 = { -774.6698f, 329.9981f, 207.4879f };
					Var0.f_3 = { 0f, 0f, -126f };
					break;
				
				case 334:
					Var0 = { -782.4568f, 332.0281f, 208.2889f };
					Var0.f_3 = { 0f, 0f, -17.85f };
					break;
				
				case 298:
					Var0 = { -796.1306f, 337.1404f, 206.1808f };
					break;
				
				case 299:
					Var0 = { -793.1521f, 332.7068f, 206.3769f };
					break;
				
				case 300:
					Var0 = { -779.5258f, 336.6098f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 90.8361f;
					break;
				
				case 301:
					Var0 = { -780.2019f, 337.5271f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 90.8361f;
					break;
				
				case 302:
					Var0 = { -779.9085f, 335.6859f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 90.8361f;
					break;
				
				case 303:
					Var0 = { -778.6497f, 337.4925f, 206.6209f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_3.f_2 = 90.8361f;
					break;
				
				case 310:
					Var0 = { -803.8f, 340.1f, 206.4f };
					Var0.f_3 = { -3.9f, -0.2f, -122.1f };
					break;
				
				case 337:
					Var0 = { -803.5448f, 340.019f, 206.3814f };
					Var0.f_3 = { -3.33f, -0.1433f, -122.0807f };
					break;
				
				case 335:
					Var0 = { -792.1119f, 328.9167f, 206.7493f };
					Var0.f_3 = { -0.9549f, 0f, 28.6771f };
					break;
				
				case 338:
					Var0 = { -792.2817f, 329.3245f, 206.7437f };
					Var0.f_3 = { -0.7326f, -0.0475f, 27.4558f };
					break;
				
				case 336:
					Var0 = { -789.8785f, 332.0506f, 206.8976f };
					Var0.f_3 = { -1.9523f, 0f, 61.3248f };
					break;
				
				case 339:
					Var0 = { -790.3087f, 332.2463f, 206.88f };
					Var0.f_3 = { -2.5427f, 0.0051f, 62.3184f };
					break;
				
				case 311:
					Var0 = { -788.0662f, 342.4757f, 205.5004f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 312:
					Var0 = { -800.273f, 337.075f, 206.282f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 313:
					Var0 = { -800.273f, 337.075f, 206.282f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 314:
					Var0 = { -800.273f, 337.075f, 206.282f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 315:
					Var0 = { -800.088f, 337.221f, 206.265f };
					Var0.f_3 = { 0f, 0f, -5.25f };
					break;
				
				case 316:
					Var0 = { -800.088f, 337.221f, 206.265f };
					Var0.f_3 = { 0f, 0f, -5.25f };
					break;
				
				case 317:
					Var0 = { -800.088f, 337.221f, 206.265f };
					Var0.f_3 = { 0f, 0f, -5.25f };
					break;
				
				case 318:
					Var0 = { -800.586f, 337.375f, 206.265f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 319:
					Var0 = { -800.586f, 337.375f, 206.265f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 320:
					Var0 = { -800.586f, 337.375f, 206.265f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 321:
					Var0 = { -800.273f, 337.075f, 206.282f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 322:
					Var0 = { -800.273f, 337.075f, 206.282f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 323:
					Var0 = { -800.273f, 337.075f, 206.282f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 324:
					Var0 = { -800.586f, 337.375f, 206.265f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 325:
					Var0 = { -800.586f, 337.375f, 206.265f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 326:
					Var0 = { -800.586f, 337.375f, 206.265f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 327:
					Var0 = { -800.273f, 337.075f, 206.282f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 328:
					Var0 = { -800.273f, 337.075f, 206.282f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 329:
					Var0 = { -800.273f, 337.075f, 206.282f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_44(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
	}
	return Var0;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			return 17;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
			break;
		
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
			return 77;
			break;
		
		case 83:
		case 84:
		case 85:
			return 83;
			break;
		
		case 86:
			return 86;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
			break;
	}
	return -1;
}

void func_46(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<6> Var0[2];
	struct<3> Var13;
	
	if (!bParam3)
	{
		Var0[0 /*6*/] = { func_47(-1) };
	}
	else
	{
		Var0[0 /*6*/] = { Global_4005550[iParam0 /*45*/].f_4 };
		Var0[0 /*6*/].f_3 = { 0f, 0f, Global_4005550[iParam0 /*45*/].f_7 };
	}
	if (!bParam3)
	{
		Var0[1 /*6*/] = { func_47(iParam0) };
	}
	else
	{
		Var0[1 /*6*/] = { Global_4005550[iParam0 /*45*/].f_4 };
		Var0[1 /*6*/].f_3 = { 0f, 0f, Global_4005550[iParam0 /*45*/].f_7 };
	}
	*uParam2 = { func_38(iParam1, 86) };
	Var13 = { *uParam2 - Var0[0 /*6*/] };
	Var13 = { func_37(Var13, -Var0[0 /*6*/].f_3.f_2) };
	Var13 = { func_37(Var13, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0x90B89006901451E8(Var0[1 /*6*/], 0f, Var13) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 560:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 343:
		case 349:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 201:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 311:
		case 340:
		case 391:
		case 392:
		case 393:
		case 394:
		case 395:
		case 396:
		case 397:
		case 398:
		case 399:
		case 400:
		case 401:
		case 402:
		case 403:
		case 404:
		case 405:
		case 406:
		case 407:
		case 408:
		case 409:
		case 410:
		case 411:
		case 412:
		case 413:
		case 414:
		case 415:
		case 416:
		case 417:
		case 418:
		case 419:
		case 438:
		case 439:
		case 440:
		case 441:
		case 442:
		case 443:
		case 357:
		case 358:
		case 359:
		case 467:
		case 468:
		case 469:
		case 497:
		case 498:
		case 499:
		case 503:
		case 598:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 362:
		case 363:
		case 364:
		case 365:
		case 366:
		case 367:
		case 368:
		case 360:
		case 361:
		case 383:
		case 386:
		case 372:
		case 373:
		case 374:
		case 375:
		case 376:
		case 377:
		case 378:
		case 370:
		case 371:
		case 384:
		case 387:
		case 486:
		case 487:
		case 488:
		case 489:
		case 490:
		case 491:
		case 492:
		case 485:
		case 544:
		case 543:
		case 545:
		case 516:
		case 517:
		case 583:
		case 584:
		case 518:
		case 519:
		case 520:
		case 521:
		case 522:
		case 523:
		case 524:
		case 525:
		case 526:
		case 527:
		case 553:
		case 552:
		case 551:
		case 550:
		case 556:
		case 555:
		case 593:
		case 594:
		case 595:
		case 596:
		case 554:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 597:
		case 118:
		case 117:
		case 599:
		case 600:
		case 601:
		case 602:
		case 603:
		case 604:
		case 605:
		case 606:
		case 607:
		case 608:
		case 609:
		case 610:
		case 612:
		case 618:
		case 624:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

struct<6> func_47(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
		case default:
			Var0 = { -1478.436f, -3753.538f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 0:
			Var0 = { -3555.115f, 1473.013f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 1:
			Var0 = { -3147.049f, 2827.088f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 2:
			Var0 = { -3277.473f, 2159.85f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 3:
			Var0 = { -2822.419f, 4054.84f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 4:
			Var0 = { -3249.849f, 3704.681f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 5:
			Var0 = { -2383.193f, 4685.003f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 6:
			Var0 = { -3224.686f, -215.9825f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 7:
			Var0 = { -3447.876f, 291.9275f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 97f };
			break;
		
		case 8:
			Var0 = { -2713.098f, -528.3185f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -33f };
			break;
		
		case 9:
			Var0 = { -1981.618f, -1537.269f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 142f };
			break;
		
		case 10:
			Var0 = { -2100.817f, -2533.233f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -143f };
			break;
		
		case 11:
			Var0 = { -1599.642f, -1891.277f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 112f };
			break;
		
		case 12:
			Var0 = { -733.6151f, -3916.985f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -168f };
			break;
		
		case 13:
			Var0 = { -363.3534f, -3568.56f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 14:
			Var0 = { -1478.436f, -3753.538f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 15:
			Var0 = { 1535.974f, -3061.877f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 62f };
			break;
		
		case 16:
			Var0 = { 2471.418f, -2430.93f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 12f };
			break;
		
		case 17:
			Var0 = { 2067.371f, -2813.01f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 18:
			Var0 = { 3021.088f, -1513.602f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 19:
			Var0 = { 3025.956f, -704.3854f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 20:
			Var0 = { 2961.863f, -2007.631f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 21:
			Var0 = { 3398.169f, 1958.521f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 77f };
			break;
		
		case 22:
			Var0 = { 3428.681f, 1202.06f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 23:
			Var0 = { 3787.83f, 2567.884f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 24:
			Var0 = { 4235.946f, 4004.252f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -118f };
			break;
		
		case 25:
			Var0 = { 4245.151f, 4595.375f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -68f };
			break;
		
		case 26:
			Var0 = { 4209.057f, 3392.705f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 27:
			Var0 = { 3738.81f, 5768.252f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -43f };
			break;
		
		case 28:
			Var0 = { 3472.966f, 6315.245f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -23f };
			break;
		
		case 29:
			Var0 = { 3693.468f, 5194.659f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 122f };
			break;
		
		case 30:
			Var0 = { 572.9806f, 7142.138f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -58f };
			break;
		
		case 31:
			Var0 = { 2024.036f, 6907.536f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -173f };
			break;
		
		case 32:
			Var0 = { 1377.296f, 6863.23f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 33:
			Var0 = { -1169.36f, 6000.214f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 34:
			Var0 = { -759.2205f, 6573.955f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -153f };
			break;
		
		case 35:
			Var0 = { -373.8432f, 6964.86f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -108f };
			break;
	}
	return Var0;
}

int func_48(int iParam0, bool bParam1)
{
	if (func_3(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			return Global_2418529[iParam0 /*313*/].f_257.f_14;
		}
		else
		{
			return Global_2418529[iParam0 /*313*/].f_257.f_16;
		}
	}
	return -1;
}

bool func_49(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xBECC89ACB4E5D4ED(iParam0);
	return unk_0x5C9FE32E2FF37989(iParam0);
}

int func_50(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_3(iParam0, 1, 1))
		{
			if (Global_2418529[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_51(Global_2418529[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
	}
	return -1;
}

int func_52()
{
	return -1;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
			return 1;
			break;
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 73:
			case 77:
			case 74:
			case 75:
			case 76:
			case 78:
			case joaat("mpsv_lp0_31"):
			case 80:
			case 81:
			case 82:
				return 1;
			
			default:
		}
	}
	else if (iParam1 == 77)
	{
		switch (iParam0)
		{
			case 77:
			case 78:
			case joaat("mpsv_lp0_31"):
			case 80:
			case 81:
			case 82:
				return 1;
			
			default:
		}
	}
	else if (iParam1 == 73)
	{
		switch (iParam0)
		{
			case 73:
			case 74:
			case 75:
			case 76:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 1;
			break;
	}
	return 0;
}

void func_57(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_51 = iParam1;
	}
	else
	{
		uParam0->f_50 = iParam1;
	}
}

void func_58()
{
	bool bVar0;
	
	func_335();
	func_208(&(Local_1772.f_96));
	func_204(&uLocal_2437);
	func_201();
	func_195();
	if (unk_0xE0BDAFA1A39552D6() != -1)
	{
		func_130(&(Local_941.f_113), &(Local_1195[unk_0xE0BDAFA1A39552D6() /*18*/].f_1), &Local_239, &Global_3932160, &(Local_1195[unk_0xE0BDAFA1A39552D6() /*18*/].f_17), &(Local_941.f_167));
	}
	if (func_129(0))
	{
		func_128();
		bVar0 = true;
		if (!unk_0xC1EDB61CE0A4B94E(Local_1772.f_96.f_1))
		{
			bVar0 = false;
		}
		if (Global_1736065.f_36)
		{
			Global_1736065.f_36 = 0;
			func_127(1);
			bVar0 = false;
		}
		if (func_126(&(Global_1736065.f_34)))
		{
			if (func_125(&(Global_1736065.f_34), 6000, 0) && bVar0)
			{
				if (!func_122())
				{
					func_127(0);
				}
			}
			else
			{
				bVar0 = false;
				func_127(1);
			}
		}
		if (Local_1772.f_14)
		{
			func_127(1);
			bVar0 = false;
		}
		if (bVar0)
		{
			if (func_122())
			{
				if (func_121())
				{
					func_120();
					func_119(2);
				}
			}
			else
			{
				func_118(1);
				func_119(1);
			}
		}
	}
	else if (func_129(1))
	{
		if (!func_117())
		{
			if ((unk_0x58269F25C361D8C5() % 10) == 0 || unk_0x4FF34B5B023875E1())
			{
				if (func_122())
				{
					if (func_116(Local_1772.f_3))
					{
						func_127(1);
						func_118(0);
					}
					if (!unk_0x4FF34B5B023875E1())
					{
						if (!unk_0x58CFBE8B8644D59B())
						{
							unk_0xEBA0934AA600C515(322);
						}
					}
					else
					{
						func_120();
						func_119(2);
					}
				}
			}
			if (func_115())
			{
				Global_1735933.f_130 = 1;
				if (Global_1735933.f_131)
				{
					func_110();
				}
			}
			else
			{
				Global_1735933.f_130 = 0;
			}
		}
		else if (Local_1195[unk_0xE0BDAFA1A39552D6() /*18*/].f_1.f_13 != 0)
		{
			func_5(&(Local_1195[unk_0xE0BDAFA1A39552D6() /*18*/].f_1), &Local_239);
			if (func_109())
			{
				func_18();
			}
		}
	}
	else if (func_129(2))
	{
		if (func_116(Local_1772.f_3))
		{
			if (!unk_0x7DA173D4FD42F36B(Global_1735933.f_110, Local_1772.f_3))
			{
				return;
			}
		}
		func_92();
		if (!Local_2424.f_0)
		{
			if (!func_91())
			{
				func_118(1);
				func_127(0);
				Global_1735933.f_5 = 1;
			}
			func_119(1);
		}
	}
	else if (func_129(3))
	{
		if (func_90(7, &(Local_1772.f_591)))
		{
			func_68(&(Local_1772.f_591), 1);
			return;
		}
		if (!func_90(2, &(Local_1772.f_591)))
		{
			if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
			{
				func_65(0);
				unk_0xC26C4630EB1979DB(unk_0x06736567F820A39E(), 1, 1);
				func_60(unk_0xE0BDAFA1A39552D6(), 0, 524288);
			}
			func_119(4);
		}
	}
	else if (func_129(4))
	{
		if (func_90(5, &(Local_1772.f_591)))
		{
			unk_0xEBA0934AA600C515(322);
			func_119(5);
		}
	}
	else if (func_129(5))
	{
		if (unk_0x4FF34B5B023875E1())
		{
			if (!unk_0x7DA173D4FD42F36B(Local_1772.f_591, 0))
			{
				if (!unk_0x226FA58470A21AEF(Local_1772.f_591.f_53) && !unk_0x226FA58470A21AEF(Local_1772.f_591.f_54))
				{
					unk_0x962E604CCA53388F(-1, Local_1772.f_591.f_53, Local_1772.f_591.f_54, 1);
				}
				unk_0xE27C8E42A97895CF(&(Local_1772.f_591), 0);
			}
			func_68(&(Local_1772.f_591), 0);
			func_59();
		}
	}
}

void func_59()
{
	Global_1735933.f_121 = 1;
}

void func_60(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xFBE359B42DB321F9())
		{
			unk_0x5C79CA2A987CA637(0);
		}
	}
	if (!unk_0x17CC0D5008835470())
	{
		uVar0 = iParam2;
		unk_0x4E7DF84FE130E1D6(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_64())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xA27C9E8196C79D22(iParam0) && unk_0x7868479D9B6694C0(iParam0))
		{
			uVar25 = unk_0x44A9253132E1DDE0(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x17CC0D5008835470())
				{
					unk_0xDBB63C901885FBB6(1);
				}
				else
				{
					unk_0x13B79909077BBD84(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x17CC0D5008835470() && !bVar18)
					{
						unk_0xDBB63C901885FBB6(0);
					}
					Global_2418529[iParam0 /*313*/].f_240 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_63(uVar25) && !unk_0xE9942DD32A3660D6(uVar25))
				{
					if (!bVar21)
					{
						unk_0xE110948ECF59689C(uVar25, true, 0);
					}
				}
				if (!unk_0xBC572626B3578AD2(uVar25))
				{
					if (!bVar20)
					{
						unk_0x93F4FB97D1F2E7A1(uVar25, false);
					}
					unk_0xE2098C4F0BF55A98(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x93F4FB97D1F2E7A1(uVar25, false);
				}
				unk_0xA26A1133034ECD59(uVar25, true);
				unk_0xFEC8E17ADA862FEA(iParam0, 0);
				unk_0x21C81380E41AF58F(uVar25);
				unk_0x7F075F9DEA8FE763(uVar25, 1);
				func_62();
				func_61();
				if (unk_0xD5E38D8AF6718D92())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x7B3F18DBCFF7AB42())
				{
				}
				Global_2418529[iParam0 /*313*/].f_241 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_63(uVar25) && !unk_0xE9942DD32A3660D6(uVar25))
				{
					if (!bVar21)
					{
						unk_0xE110948ECF59689C(uVar25, !bVar14, 0);
					}
					if (!unk_0xBC572626B3578AD2(uVar25))
					{
						if (!bVar20)
						{
							unk_0x93F4FB97D1F2E7A1(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xE2098C4F0BF55A98(uVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xFEC8E17ADA862FEA(iParam0, 0);
				}
				else
				{
					unk_0xFEC8E17ADA862FEA(iParam0, 1);
				}
				unk_0xA26A1133034ECD59(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xD8F198A7650361B8(uVar25) && !unk_0x0FDFEC0DD29106EE(uVar25, 0))
					{
						unk_0x66F20C27DFBDFC38(uVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x4E7DF84FE130E1D6(iParam0, bParam1, iVar26);
		}
	}
}

void func_61()
{
	struct<2> Var0;
	
	Global_2428549.f_724 = 0;
	Global_2428549.f_725 = 0;
	Global_2428549.f_726 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404993.f_1678 = { Var0 };
}

void func_62()
{
	Global_2404993.f_627 = 0;
	Global_2404993.f_1719 = 0;
	Global_2404993.f_484 = 0;
	Global_2404993.f_559 = 0;
	Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_205 = 0;
}

int func_63(var uParam0)
{
	int iVar0;
	
	if (unk_0x0FDFEC0DD29106EE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xFB900D9EE2ACC400(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (func_20() == 0)
	{
		return 1;
	}
	return 0;
}

void func_65(bool bParam0)
{
	if (!bParam0)
	{
		func_67(&Global_2471747, 1, 0);
	}
	else
	{
		func_66(&Global_2471747);
	}
}

void func_66(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_67(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x17CC0D5008835470() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
			}
			else
			{
				*uParam0 = unk_0xED6DF4F701311AF8();
			}
		}
		else
		{
			*uParam0 = unk_0x1ADBAAC322D61F73();
		}
		uParam0->f_1 = 1;
	}
}

void func_68(var uParam0, bool bParam1)
{
	if ((func_90(5, uParam0) || func_90(6, uParam0)) || bParam1)
	{
		if (unk_0x4958900440DDE4E4(uParam0->f_13))
		{
			unk_0x1ACFD66996D85C8F(uParam0->f_13);
		}
		if (unk_0xC1EDB61CE0A4B94E(uParam0->f_2))
		{
			unk_0xDAF1451794AD09A3(&(uParam0->f_2));
		}
		unk_0xA7E1DB47F3F4BCD1(0, 0, 3000, 1, 0, 0);
		unk_0xC2F547D33F9342CC(uParam0->f_5, 0);
		func_70(1, 0);
		if (bParam1)
		{
			func_69(7, uParam0);
		}
		else
		{
			func_69(3, uParam0);
		}
		Global_1735933.f_10 = 0;
	}
}

void func_69(int iParam0, var uParam1)
{
	if (iParam0 != uParam1->f_1)
	{
		uParam1->f_1 = iParam0;
	}
}

void func_70(bool bParam0, int iParam1)
{
	func_88();
	if (bParam0)
	{
		func_86(1);
		unk_0x310F6B4E168A8F5D(1);
	}
	unk_0x1AEFC2FB20822515();
	func_9();
	unk_0x39BAF43F2AF28048(0);
	func_83(0, 1, 1, 0);
	func_82();
	func_81(12, 0, -1);
	func_80(1);
	unk_0xFA6584EFD4754E3A(0, -1);
	unk_0xC2FFF2F24C49CE3E(1);
	unk_0xEB57C3B228D6B95F(1);
	func_79();
	unk_0x5BC661D1FF0D731E(1);
	if (unk_0x17CC0D5008835470())
	{
		if (unk_0x8122B656FB23F1C7())
		{
			unk_0x4B92FC6C4F9E51CC(0, 0);
		}
	}
	func_78(0);
	if (((func_77() == 0 && func_76() == 0) && iParam1) && !func_71(unk_0xE0BDAFA1A39552D6()))
	{
		func_60(unk_0xE0BDAFA1A39552D6(), 1, 0);
	}
	Global_2428549.f_3189 = 0;
}

int func_71(int iParam0)
{
	if (func_73(iParam0, 0))
	{
		return 1;
	}
	if (func_72())
	{
		if (iParam0 == unk_0xE0BDAFA1A39552D6())
		{
			return 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_72()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

bool func_73(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_74(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_74(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_75();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_75()
{
	return Global_1312747;
}

bool func_76()
{
	return unk_0x7DA173D4FD42F36B(Global_2434839, 7);
}

int func_77()
{
	return Global_1315913;
}

void func_78(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 13);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 13);
	}
}

void func_79()
{
	Global_17118.f_5 = 0;
}

void func_80(int iParam0)
{
	Global_2464975.f_4390 = iParam0;
}

void func_81(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1338622.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xE27C8E42A97895CF(&(Global_1338622.f_947), iParam0);
			}
			else
			{
				unk_0x99BCB15F954AF579(&(Global_1338622.f_947), iParam0);
			}
			break;
	}
}

void func_82()
{
	func_80(1);
	func_81(4, 0, -1);
	func_81(6, 0, -1);
	func_81(7, 0, -1);
	func_81(3, 0, -1);
	func_81(1, 0, -1);
	func_81(2, 0, -1);
	func_81(11, 0, -1);
	func_81(13, 0, -1);
	func_81(14, 0, -1);
	func_81(16, 0, -1);
}

void func_83(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x0E7D7A2D525FF714(unk_0xE0BDAFA1A39552D6());
		unk_0x1B9B62BFD193B2DC(unk_0xE0BDAFA1A39552D6(), 1);
		unk_0xA7151FEC760FCDE4(unk_0xE0BDAFA1A39552D6(), 1);
		func_78(1);
		unk_0xBB767E7625FB7ED6();
		unk_0xCE3C0BD3070B4018();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x1FB728BC68674B71())
			{
				unk_0xC48487554D051523(0);
			}
			if (!func_12())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_85(1, iParam3, iParam2, 0);
		Global_55786 = 1;
		Global_68092 = 1;
		Global_69519 = 1;
	}
	else
	{
		func_78(0);
		unk_0x8355AD5145EA3FA6();
		Global_55786 = 0;
		if (bParam1)
		{
			unk_0xEC46418588F2FEF5();
		}
		unk_0x1B9B62BFD193B2DC(unk_0xE0BDAFA1A39552D6(), 0);
		unk_0xA7151FEC760FCDE4(unk_0xE0BDAFA1A39552D6(), 0);
		func_85(0, iParam3, iParam2, 0);
		if (unk_0x17CC0D5008835470())
		{
			if (((!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !func_71(unk_0xE0BDAFA1A39552D6())) && !func_73(unk_0xE0BDAFA1A39552D6(), 0)) && !func_84())
			{
				unk_0xB2C123C54D84E6A7(unk_0x06736567F820A39E(), 0);
			}
		}
		else if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !func_71(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xB2C123C54D84E6A7(unk_0x06736567F820A39E(), 0);
		}
		Global_69519 = 0;
	}
}

bool func_84()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 14);
}

int func_85(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0x640152C8EE973B5B() != iParam0 && uParam2)
		{
			unk_0x1ECC86329E4F43F8(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_99840)
	{
		unk_0xCE816A9B77723E81(iVar0, iParam0);
		func_87(iVar0);
		iVar0++;
	}
}

void func_87(int iParam0)
{
	Global_99840[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_99840[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_99840[iParam0 /*28*/].f_4), "", 64);
	Global_99840[iParam0 /*28*/].f_23 = 0;
	Global_99840[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_99840[iParam0 /*28*/].f_27 = 0;
	Global_99840[iParam0 /*28*/].f_20 = 0;
	Global_99840[iParam0 /*28*/].f_22 = 0;
}

void func_88()
{
	if (!Global_1312569)
	{
		return;
	}
	func_89();
}

void func_89()
{
	Global_1312569 = 0;
	StringCopy(&(Global_1312569.f_1), "", 24);
	Global_1312569.f_7 = 0;
}

bool func_90(int iParam0, var uParam1)
{
	return uParam1->f_1 == iParam0;
}

bool func_91()
{
	return Global_1735933.f_3;
}

void func_92()
{
	char* sVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	
	if (!Local_2424.f_0)
	{
		return;
	}
	if (Local_2424.f_2 == 0)
	{
		unk_0xADDAAC391F0532E2(0, 0);
		func_106(1, 1);
		func_60(unk_0xE0BDAFA1A39552D6(), 0, 0);
		unk_0x8EA2EEF67922F899(1500);
		Local_2424.f_2 = 1;
		unk_0xE27C8E42A97895CF(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_310), 1);
	}
	if (!unk_0x7DA173D4FD42F36B(Local_2424.f_5, Local_2424.f_2))
	{
		if (unk_0xEC708A793EB17979())
		{
			func_105(&(Local_2424.f_8), 0, 0);
		}
		sVar0 = func_104(Local_2424.f_2);
		if ((!unk_0x226FA58470A21AEF(sVar0) && !unk_0xEC708A793EB17979()) && (!func_126(&(Local_2424.f_8)) || func_125(&(Local_2424.f_8), 300, 0)))
		{
			unk_0x310F6B4E168A8F5D(1);
			func_102(sVar0, func_103(Local_2424.f_2));
			unk_0xE27C8E42A97895CF(&(Local_2424.f_5), Local_2424.f_2);
			func_66(&(Local_2424.f_8));
		}
	}
	if (!unk_0x7DA173D4FD42F36B(Local_2424.f_4, Local_2424.f_2))
	{
		func_105(&(Local_2424.f_6), 0, 0);
		if (!unk_0x97A9CC2DDCDAA0A8(Local_2424.f_3))
		{
			Local_2424.f_3 = unk_0x485DB0A1B0F664FC(26379945, 1);
			unk_0xA7E1DB47F3F4BCD1(1, 0, 3000, 1, 0, 0);
		}
		func_97(&Var1, &Var4, &uVar7, Local_2424.f_2, 1);
		unk_0x025959B85926F031(Local_2424.f_3, Var1, Var4, uVar7, 0, 1, 1, 2);
		func_97(&Var1, &Var4, &uVar7, Local_2424.f_2, 0);
		unk_0x025959B85926F031(Local_2424.f_3, Var1, Var4, uVar7, func_103(Local_2424.f_2), 0, 0, 2);
		unk_0x80ABC7E285A257CD(Local_2424.f_3, 1);
		unk_0x1CB53231E96DF097(Local_2424.f_3, "Hand_shake", 0.05f);
		unk_0xE27C8E42A97895CF(&(Local_2424.f_4), Local_2424.f_2);
	}
	if ((!Local_2424.f_10 && !func_91()) && !(func_116(Local_1772.f_3) && unk_0x7DA173D4FD42F36B(Global_1735933.f_14, Local_1772.f_3)))
	{
		if (Local_2424.f_2 == 4 && func_125(&(Local_2424.f_6), (func_103(Local_2424.f_2) - 400), 0))
		{
			if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
			{
				unk_0x17D596A764B68D37(unk_0xE0BDAFA1A39552D6(), 1f, 850, 0, 1, 0);
			}
			Local_2424.f_10 = 1;
		}
	}
	if (func_125(&(Local_2424.f_6), func_103(Local_2424.f_2), 0))
	{
		if (Local_2424.f_2 == 4)
		{
			unk_0xA7E1DB47F3F4BCD1(0, 0, 3000, 1, 0, 0);
			unk_0x80ABC7E285A257CD(Local_2424.f_3, 1);
			unk_0xC2F547D33F9342CC(Local_2424.f_3, 0);
			func_70(1, 0);
			if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0) && !Local_2424.f_10)
			{
				unk_0x66F20C27DFBDFC38(unk_0x06736567F820A39E());
			}
			func_60(unk_0xE0BDAFA1A39552D6(), 1, 524288);
			func_96();
			if (Local_1772.f_15 == unk_0xE0BDAFA1A39552D6())
			{
				func_93(1);
				unk_0x99BCB15F954AF579(&(Local_1195[unk_0x490BA5FDD7EE47A9() /*18*/]), 0);
				unk_0x99BCB15F954AF579(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_310), 0);
			}
			unk_0x99BCB15F954AF579(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_310), 1);
		}
		else
		{
			Local_2424.f_2++;
		}
	}
}

void func_93(bool bParam0)
{
	var uVar0;
	
	uVar0 = Global_1347809[func_95(-1)];
	if (bParam0)
	{
		unk_0xE27C8E42A97895CF(&uVar0, 14);
	}
	else
	{
		unk_0x99BCB15F954AF579(&uVar0, 14);
	}
	func_94(1296, uVar0, -1, 1);
}

void func_94(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_95(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, uParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347761[func_95(iParam2)] = uParam1;
			break;
		
		case 781:
			Global_1347767[func_95(iParam2)] = uParam1;
			break;
		
		case 782:
			Global_1347773[func_95(iParam2)] = uParam1;
			break;
		
		case 783:
			Global_1347779[func_95(iParam2)] = uParam1;
			break;
		
		case 770:
			Global_1347737[func_95(iParam2)] = uParam1;
			break;
		
		case 771:
			Global_1347743[func_95(iParam2)] = uParam1;
			break;
		
		case 772:
			Global_1347749[func_95(iParam2)] = uParam1;
			break;
		
		case 773:
			Global_1347755[func_95(iParam2)] = uParam1;
			break;
		
		case 760:
			Global_1347713[func_95(iParam2)] = uParam1;
			break;
		
		case 761:
			Global_1347719[func_95(iParam2)] = uParam1;
			break;
		
		case 762:
			Global_1347725[func_95(iParam2)] = uParam1;
			break;
		
		case 763:
			Global_1347731[func_95(iParam2)] = uParam1;
			break;
		
		case 750:
			Global_1347785[func_95(iParam2)] = uParam1;
			break;
		
		case 751:
			Global_1347791[func_95(iParam2)] = uParam1;
			break;
		
		case 752:
			Global_1347797[func_95(iParam2)] = uParam1;
			break;
		
		case 753:
			Global_1347803[func_95(iParam2)] = uParam1;
			break;
		
		case 1296:
			Global_1347809[func_95(iParam2)] = uParam1;
			break;
		
		case 632:
			Global_1347815[func_95(iParam2)] = uParam1;
			break;
		
		case 1271:
			Global_1347821[func_95(iParam2)] = uParam1;
			break;
		
		case 1868:
			Global_2497579[0 /*6*/][func_95(iParam2)] = uParam1;
			break;
		
		case 2259:
			Global_2497579[1 /*6*/][func_95(iParam2)] = uParam1;
			break;
		
		case 2907:
			Global_2497579[2 /*6*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3036:
			Global_2497579[3 /*6*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3918:
			Global_2497641[func_95(iParam2)] = uParam1;
			break;
		
		case 757:
			Global_1347827[func_95(iParam2)] = uParam1;
			break;
		
		case 758:
			Global_1347833[func_95(iParam2)] = uParam1;
			break;
		
		case 759:
			Global_1347839[func_95(iParam2)] = uParam1;
			break;
		
		case 1229:
			Global_1347845[func_95(iParam2)] = uParam1;
			break;
		
		case 3031:
			Global_2497610[0 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3032:
			Global_2497610[1 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3033:
			Global_2497610[2 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3034:
			Global_2497610[3 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3035:
			Global_2497610[4 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3216:
			Global_2497646[0 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3217:
			Global_2497646[1 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3218:
			Global_2497646[2 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3219:
			Global_2497646[3 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3220:
			Global_2497646[4 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3221:
			Global_2497672[0 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3222:
			Global_2497672[1 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3223:
			Global_2497672[2 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3224:
			Global_2497672[3 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3225:
			Global_2497672[4 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3199:
			Global_2497610[5 /*5*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3205:
			Global_2497579[4 /*6*/][func_95(iParam2)] = uParam1;
			break;
		
		case 3243:
			Global_2497698[func_95(iParam2)] = uParam1;
			break;
		
		case 3244:
			Global_2497713[func_95(iParam2)] = uParam1;
			break;
		
		case 3245:
			Global_2497703[func_95(iParam2)] = uParam1;
			break;
		
		case 3246:
			Global_2497718[func_95(iParam2)] = uParam1;
			break;
		
		case 3247:
			Global_2497708[func_95(iParam2)] = uParam1;
			break;
		
		case 3248:
			Global_2497723[func_95(iParam2)] = uParam1;
			break;
		
		case 3269:
			Global_2497728[func_95(iParam2)] = uParam1;
			break;
		
		default:
			break;
	}
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_75();
		if (iVar1 > -1)
		{
			Global_2473567 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2473567 = 1;
		}
	}
	return iVar0;
}

void func_96()
{
	Local_2424.f_0 = false;
	Local_2424.f_11 = 1;
	Local_2424.f_2 = 0;
	Local_2424.f_4 = 0;
	Local_2424.f_5 = 0;
	Local_2424.f_10 = 0;
	func_66(&(Local_2424.f_6));
	func_66(&(Local_2424.f_8));
}

void func_97(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam2 = 50f;
	switch (func_100(Local_1772.f_2))
	{
		case 0:
			switch (iParam3)
			{
				case 1:
					if (bParam4)
					{
						*uParam0 = { -7.1196f, 3.2861f, 2.8433f };
						*uParam1 = { -19.6293f, 0f, 333.452f };
					}
					else
					{
						*uParam0 = { -6.3047f, 3.0896f, 2.7625f };
						*uParam1 = { -11.607f, 0f, 312.8062f };
					}
					break;
				
				case 2:
					if (bParam4)
					{
						*uParam0 = { -3.4564f, 1.7634f, 1.2512f };
						*uParam1 = { -6.0992f, -0.1015f, 60.6463f };
						*uParam2 = 38.6078f;
					}
					else
					{
						*uParam0 = { -4.2775f, 2.4607f, 1.1418f };
						*uParam1 = { -5.1609f, -0.1015f, 67.4538f };
						*uParam2 = 38.6078f;
					}
					break;
				
				case 3:
					if (bParam4)
					{
						*uParam0 = { -6.0286f, 3.8225f, 1.0241f };
						*uParam1 = { -4.3623f, 0.0444f, 106.4585f };
						*uParam2 = 28.297f;
					}
					else
					{
						*uParam0 = { -6.2509f, 3.5f, 1.0037f };
						*uParam1 = { -4.3623f, 0.0444f, 92.1481f };
						*uParam2 = 28.297f;
					}
					break;
				
				case 4:
					if (bParam4)
					{
						*uParam0 = { 3.6038f, 5.6936f, 2.0449f };
						*uParam1 = { -20.4804f, 0.0625f, 213.8164f };
						*uParam2 = 28.395f;
					}
					else
					{
						*uParam0 = { 4.7391f, 5.2048f, 1.7035f };
						*uParam1 = { -21.5119f, 0.0625f, 198.2077f };
						*uParam2 = 28.395f;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam3)
			{
				case 1:
					if (bParam4)
					{
						*uParam0 = { -7.6022f, 7.3909f, 2.1957f };
						*uParam1 = { -12.9481f, 0f, 297.5837f };
					}
					else
					{
						*uParam0 = { -7.4956f, 7.4302f, 2.7878f };
						*uParam1 = { -7.5138f, 0f, 262.3093f };
					}
					break;
				
				case 2:
					if (bParam4)
					{
						*uParam0 = { -5.099f, 3.7043f, 1.1646f };
						*uParam1 = { -7.5678f, 0.0046f, 62.1785f };
						*uParam2 = 39.8779f;
					}
					else
					{
						*uParam0 = { -5.5675f, 4.4756f, 1.0903f };
						*uParam1 = { -5.4211f, 0.0046f, 76.1272f };
						*uParam2 = 39.8779f;
					}
					break;
				
				case 3:
					if (bParam4)
					{
						*uParam0 = { -6.7205f, 5.0757f, 1.6231f };
						*uParam1 = { -27.3485f, 0.034f, 89.7984f };
						*uParam2 = 20.7048f;
					}
					else
					{
						*uParam0 = { -6.7211f, 5.0364f, 1.2929f };
						*uParam1 = { -15.4737f, 0.034f, 88.9673f };
						*uParam2 = 20.7048f;
					}
					break;
				
				case 4:
					if (bParam4)
					{
						*uParam0 = { -4.6832f, 8.6699f, 1.7686f };
						*uParam1 = { -18.8337f, 0f, 26.1666f };
						*uParam2 = 28.3081f;
					}
					else
					{
						*uParam0 = { -5.5229f, 8.9958f, 1.5728f };
						*uParam1 = { -19.4507f, 0f, 13.3843f };
						*uParam2 = 28.3081f;
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam3)
			{
				case 1:
					if (bParam4)
					{
						*uParam0 = { -12.6272f, 1.9094f, 4.7287f };
						*uParam1 = { -7.6941f, 0f, 296.7407f };
						*uParam2 = 40.9609f;
					}
					else
					{
						*uParam0 = { -12.5826f, 0.116f, 4.7625f };
						*uParam1 = { -7.6941f, 0f, 254.3179f };
						*uParam2 = 40.9609f;
					}
					break;
				
				case 2:
					if (bParam4)
					{
						*uParam0 = { -13.6392f, 2.7698f, 1.5693f };
						*uParam1 = { -19.6345f, 0f, 246.2228f };
					}
					else
					{
						*uParam0 = { -13.7108f, 1.7075f, 1.5693f };
						*uParam1 = { -19.5723f, 0f, 276.87f };
					}
					break;
				
				case 3:
					if (bParam4)
					{
						*uParam0 = { -12.6261f, 1.9292f, 1.1417f };
						*uParam1 = { -21.7849f, 0f, 269.8269f };
					}
					else
					{
						*uParam0 = { -12.6261f, 2.1062f, 1.1417f };
						*uParam1 = { -21.7849f, 0f, 269.8269f };
					}
					break;
				
				case 4:
					if (bParam4)
					{
						*uParam0 = { -6.9604f, 5.4856f, 2.0835f };
						*uParam1 = { -19.2545f, 0f, 121.8405f };
					}
					else
					{
						*uParam0 = { -7.6966f, 3.0127f, 1.6129f };
						*uParam1 = { -20.9611f, 0f, 89.4295f };
					}
					break;
			}
			break;
	}
	*uParam0 = { func_99(*uParam0, &(Local_1772.f_16)) };
	uParam1->f_2 = func_98(uParam1->f_2, &(Local_1772.f_16));
}

float func_98(float fParam0, var uParam1)
{
	float fVar0;
	
	fVar0 = (fParam0 + uParam1->f_3);
	while (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	while (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

Vector3 func_99(struct<3> Param0, var uParam3)
{
	return unk_0x90B89006901451E8(*uParam3, uParam3->f_3, Param0);
}

int func_100(int iParam0)
{
	if (func_101(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			}
		
		default:
	}
	return 3;
}

int func_101(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

void func_102(char* sParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 0, 1, iParam1);
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 8600;
			break;
		
		case 2:
			return 7100;
			break;
		
		case 3:
			return 6800;
			break;
		
		case 4:
			return 8800;
			break;
	}
	return 7100;
}

char* func_104(int iParam0)
{
	if (Local_2424.f_1)
	{
		switch (iParam0)
		{
			case 1:
				return "WHOUSE_TUT_1";
				break;
			
			case 2:
				return "WHOUSE_TUT_2";
				break;
			
			case 3:
				return "WHOUSE_TUT_3";
				break;
			
			case 4:
				return "WHOUSE_TUT_4";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return "WHOUSE_TUT_1b";
				break;
			
			case 2:
				return "WHOUSE_TUT_2b";
				break;
			
			case 3:
				return "WHOUSE_TUT_3b";
				break;
			
			case 4:
				return "WHOUSE_TUT_4b";
				break;
			}
	}
	return "";
}

void func_105(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x17CC0D5008835470() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x201D90648B2AE3CE();
		}
		else
		{
			*uParam0 = unk_0xED6DF4F701311AF8();
		}
	}
	else
	{
		*uParam0 = unk_0x1ADBAAC322D61F73();
	}
	uParam0->f_1 = 1;
}

void func_106(bool bParam0, int iParam1)
{
	func_108();
	func_86(1);
	unk_0x310F6B4E168A8F5D(1);
	unk_0x1AEFC2FB20822515();
	func_83(1, 1, 1, 0);
	func_107();
	func_81(12, 1, -1);
	func_80(0);
	unk_0xFA6584EFD4754E3A(1, -1);
	unk_0xC2FFF2F24C49CE3E(0);
	unk_0xEB57C3B228D6B95F(0);
	func_86(1);
	func_78(1);
	Global_2428549.f_3189 = 1;
	if (bParam0)
	{
		if (!unk_0x8122B656FB23F1C7())
		{
			unk_0x4B92FC6C4F9E51CC(1, iParam1);
		}
	}
}

void func_107()
{
	func_80(0);
	func_81(4, 1, -1);
	func_81(6, 1, -1);
	func_81(7, 1, -1);
	func_81(3, 1, -1);
	func_81(1, 1, -1);
	func_81(2, 1, -1);
	func_81(11, 1, -1);
	func_81(13, 1, -1);
	func_81(14, 1, -1);
	func_81(16, 1, -1);
}

void func_108()
{
	Global_1312569 = 1;
	StringCopy(&(Global_1312569.f_1), unk_0x47B34031F915C179(), 24);
	Global_1312569.f_7 = unk_0x9F7CDE7B20BCB675(&(Global_1312569.f_1));
}

bool func_109()
{
	return Global_2428549.f_648.f_10;
}

void func_110()
{
	Global_1735933.f_130 = 0;
	func_111(&(Local_1772.f_591));
	func_119(3);
}

void func_111(var uParam0)
{
	if (!func_90(3, uParam0))
	{
		if (unk_0x4958900440DDE4E4(uParam0->f_13))
		{
			unk_0x1ACFD66996D85C8F(uParam0->f_13);
		}
		if (unk_0xC1EDB61CE0A4B94E(uParam0->f_2))
		{
			unk_0xDAF1451794AD09A3(&(uParam0->f_2));
		}
		unk_0xA7E1DB47F3F4BCD1(0, 0, 3000, 1, 0, 0);
		if (unk_0x97A9CC2DDCDAA0A8(uParam0->f_5))
		{
			unk_0xC2F547D33F9342CC(uParam0->f_5, 0);
		}
		if (unk_0x8122B656FB23F1C7())
		{
			func_70(1, 0);
		}
		func_69(3, uParam0);
	}
	*uParam0 = 0;
	uParam0->f_45 = 0;
	unk_0x198E497B820DA913(uParam0->f_3);
	func_112(uParam0);
	func_69(2, uParam0);
	Global_1735933.f_10 = 1;
}

void func_112(var uParam0)
{
	if (!unk_0xC1EDB61CE0A4B94E(uParam0->f_2))
	{
		if (!func_113())
		{
			uParam0->f_2 = unk_0xB500796AAD639F82(4, unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()), unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) + Vector(-10f, 0f, 0f), unk_0x3CAD22C2D36A7F14(unk_0x06736567F820A39E()), 0, 0);
		}
		else
		{
			uParam0->f_2 = unk_0xB500796AAD639F82(5, unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()), unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) + Vector(-10f, 0f, 0f), unk_0x3CAD22C2D36A7F14(unk_0x06736567F820A39E()), 0, 0);
		}
		unk_0xE934D0F93AE2581E(unk_0x06736567F820A39E(), uParam0->f_2);
		unk_0x93F4FB97D1F2E7A1(uParam0->f_2, true);
		unk_0x858D1F9702879828(uParam0->f_2, 1, 1, 1, 1, 1, 1, 0, 0);
	}
}

bool func_113()
{
	return func_114(unk_0xE0BDAFA1A39552D6());
}

int func_114(int iParam0)
{
	if (unk_0x79469DA5833EACA8(unk_0x44A9253132E1DDE0(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_115()
{
	if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0) && unk_0x9AED998C13EFD0E4(unk_0x06736567F820A39E(), Local_1772.f_585, Local_1772.f_588, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_116(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1735933.f_13, iParam0);
}

bool func_117()
{
	return Global_1735933.f_7;
}

void func_118(int iParam0)
{
	Global_1735933.f_3 = iParam0;
}

void func_119(int iParam0)
{
	Local_1772.f_1 = iParam0;
}

void func_120()
{
	Local_2424.f_0 = true;
	if (Local_1772.f_15 == unk_0xE0BDAFA1A39552D6())
	{
		unk_0xE27C8E42A97895CF(&(Local_1195[unk_0x490BA5FDD7EE47A9() /*18*/]), 0);
		Local_2424.f_1 = 1;
	}
}

bool func_121()
{
	return Global_1735933.f_6;
}

int func_122()
{
	if (unk_0x7DA173D4FD42F36B(Global_1736065, 1))
	{
		unk_0x99BCB15F954AF579(&Global_1736065, 1);
		return 0;
	}
	if (func_124())
	{
		return 0;
	}
	if (Local_2424.f_11)
	{
		return 0;
	}
	if (!Local_1772.f_15 == unk_0xE0BDAFA1A39552D6())
	{
		if (((unk_0x605885F0A8AC6672(Local_1772.f_15) && unk_0xBD1E178ABA0E03F1(Local_1772.f_15) > -1) && unk_0x7DA173D4FD42F36B(Local_1195[unk_0xBD1E178ABA0E03F1(Local_1772.f_15) /*18*/], 0)) || unk_0x7DA173D4FD42F36B(Global_2418529[Local_1772.f_15 /*313*/].f_310, 0))
		{
			return 1;
		}
		return 0;
	}
	if (!func_123())
	{
		return 1;
	}
	return 0;
}

int func_123()
{
	var uVar0;
	
	uVar0 = Global_1347809[func_95(-1)];
	if (unk_0x7DA173D4FD42F36B(uVar0, 14))
	{
		return 1;
	}
	return 0;
}

bool func_124()
{
	return Global_68089;
}

int func_125(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_67(uParam0, bParam2, 0);
	if (unk_0x17CC0D5008835470() && !bParam2)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_126(var uParam0)
{
	return uParam0->f_1;
}

void func_127(bool bParam0)
{
	Global_1735933.f_4 = bParam0;
	if (!bParam0)
	{
		Global_1735933.f_6 = 0;
	}
}

void func_128()
{
	Local_2443[0 /*3*/] = { 992.419f, -3101.735f, -39.489f };
	Local_2443[1 /*3*/] = { 992.419f, -3100.978f, -39.489f };
}

bool func_129(int iParam0)
{
	return Local_1772.f_1 == iParam0;
}

void func_130(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (Global_3934085 != uParam1->f_11)
	{
		uParam1->f_11 = Global_3934085;
		unk_0xE27C8E42A97895CF(uParam1, 16);
	}
	if (unk_0x7DA173D4FD42F36B(*uParam1, 16))
	{
		uParam1->f_13 = 0;
		unk_0x99BCB15F954AF579(uParam1, 16);
	}
	if (func_19() || unk_0xA377A07A615A27A8(unk_0xE0BDAFA1A39552D6()))
	{
		func_5(uParam1, uParam2);
		return;
	}
	if (iLocal_128 > 5)
	{
		iLocal_128 = 0;
	}
	if (iLocal_127 > 30)
	{
		iLocal_127 = 0;
	}
	if (uParam1->f_13 > 0 || uParam1->f_14 > 0)
	{
		func_187(uParam0, uParam1, uParam2, uParam3, 0);
	}
	if (unk_0x17CC0D5008835470())
	{
		if (unk_0x605885F0A8AC6672(unk_0xE0BDAFA1A39552D6()))
		{
			if (unk_0x5AC268491EB42198() == unk_0xBD1E178ABA0E03F1(unk_0xE0BDAFA1A39552D6()))
			{
				func_186(uParam0);
			}
		}
	}
	if (uParam1->f_13 != 2)
	{
		if (uParam1->f_3 != 0)
		{
			uParam1->f_3 = 0;
		}
	}
	if (uParam1->f_14 != 3)
	{
		if (uParam1->f_4 != 0)
		{
			uParam1->f_4 = 0;
		}
	}
	if (((((uParam3->f_33 == 10 || func_54(uParam3->f_31)) || func_55(uParam3->f_31, -1)) || func_56(uParam3->f_31)) || func_53(uParam3->f_31)) || (func_50(unk_0xE0BDAFA1A39552D6()) && !unk_0x7DA173D4FD42F36B(*uParam1, 0)))
	{
		if (((uParam0->f_50 > 0 && uParam0->f_52 > 0) && !unk_0x7DA173D4FD42F36B(*uParam1, 15)) || ((uParam0->f_50 > 0 && !unk_0x7DA173D4FD42F36B(*uParam1, 15)) && ((((func_54(uParam3->f_31) || func_55(uParam3->f_31, -1)) || func_56(uParam3->f_31)) || func_53(uParam3->f_31)) || func_50(unk_0xE0BDAFA1A39552D6()))))
		{
			func_183(uParam1, uParam3);
			unk_0xE27C8E42A97895CF(uParam1, 15);
			if ((((func_54(uParam3->f_31) || func_55(uParam3->f_31, -1)) || func_56(uParam3->f_31)) || func_53(uParam3->f_31)) || func_50(unk_0xE0BDAFA1A39552D6()))
			{
				func_182(uParam0, uParam3);
			}
		}
	}
	else if (uParam0->f_50 > 0 && !unk_0x7DA173D4FD42F36B(*uParam1, 15))
	{
		func_183(uParam1, uParam3);
		unk_0xE27C8E42A97895CF(uParam1, 15);
	}
	if ((iLocal_128 % 2) == 0)
	{
		switch (uParam1->f_13)
		{
			case 0:
				if (!Global_1587800)
				{
					uParam1->f_11 = Global_3934085;
					func_180(uParam1);
					if ((uParam0->f_50 > 0 && unk_0x7DA173D4FD42F36B(*uParam1, 15)) && func_179(uParam1, uParam3))
					{
						func_187(uParam0, uParam1, uParam2, uParam3, 0);
						unk_0xE27C8E42A97895CF(uParam2, 0);
						uParam2->f_4 = ((0f + -36f) / 2f);
						func_178(uParam1, 1);
					}
					else
					{
						if (uParam0->f_50 != 0)
						{
						}
						if (!unk_0x7DA173D4FD42F36B(*uParam1, 15))
						{
						}
					}
				}
				break;
			
			case 1:
				if (func_161(uParam1, uParam2, uParam3, &(uParam2->f_1), &(uParam1->f_6), &(uParam1->f_3), uParam4, uParam5, 0))
				{
					func_160();
					func_178(uParam1, 2);
				}
				break;
			
			case 2:
				func_158(1);
				unk_0xCD6FA32B5C11A1C5(16);
				if (((((func_134(uParam0, uParam1, uParam2, &(uParam1->f_3), uParam4, 0) || Global_1587800) || Global_1722816) || func_133(uParam1, uParam2)) || func_132(unk_0xE0BDAFA1A39552D6()) == 5) || Global_2428549.f_3189 == 1)
				{
					if (Global_2428549.f_3189 == 1)
					{
					}
					if (func_132(unk_0xE0BDAFA1A39552D6()) == 5)
					{
					}
					if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
					{
						unk_0x1F6717C33A02B7AC(unk_0x06736567F820A39E());
					}
					func_8(uParam2);
					func_178(uParam1, 1);
				}
				break;
		}
	}
	else if (((((!unk_0x7DA173D4FD42F36B(*uParam1, 0) && !func_55(uParam3->f_31, -1)) && !func_54(uParam3->f_31)) && !func_56(uParam3->f_31)) && !func_53(uParam3->f_31)) && !func_50(unk_0xE0BDAFA1A39552D6()))
	{
		switch (uParam1->f_14)
		{
			case 0:
				if (uParam0->f_50 > 0 && unk_0x7DA173D4FD42F36B(*uParam1, 15))
				{
					func_187(uParam0, uParam1, uParam2, uParam3, 1);
					unk_0xE27C8E42A97895CF(uParam2, 0);
					uParam2->f_4 = ((0f + -36f) / 2f);
					func_131(uParam1, 1);
				}
				break;
			
			case 1:
				if (uParam3->f_33 == 10 && func_161(uParam1, uParam2, uParam3, &(uParam2->f_2), &(uParam1->f_5), &(uParam1->f_4), uParam4, uParam5, 1))
				{
					func_160();
					func_131(uParam1, 3);
				}
				break;
			
			case 3:
				func_158(1);
				unk_0xCD6FA32B5C11A1C5(16);
				if (((func_134(uParam0, uParam1, uParam2, &(uParam1->f_4), uParam4, 1) || Global_1587800) || Global_1722816) || func_133(uParam1, uParam2))
				{
					if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
					{
						unk_0x1F6717C33A02B7AC(unk_0x06736567F820A39E());
					}
					func_8(uParam2);
					func_131(uParam1, 1);
				}
				break;
			}
	}
	if (((!unk_0x7DA173D4FD42F36B(*uParam1, 9) && !unk_0x7DA173D4FD42F36B(*uParam1, 13)) && !unk_0x7DA173D4FD42F36B(*uParam1, 10)) && !unk_0x7DA173D4FD42F36B(Global_2359301, 15))
	{
		if (!bLocal_126)
		{
			iLocal_128++;
		}
	}
	iLocal_127++;
}

void func_131(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

int func_132(int iParam0)
{
	return Global_1587816[iParam0 /*444*/].f_180;
}

int func_133(var uParam0, var uParam1)
{
	if (!unk_0x7DA173D4FD42F36B(*uParam0, 0))
	{
		if (unk_0x7DA173D4FD42F36B(*uParam1, 9))
		{
			return 1;
		}
	}
	return 0;
}

int func_134(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	iVar0 = 0;
	func_157();
	func_156();
	unk_0xB59585F3067CC93E(0);
	unk_0xBF73BBC1BBC2A612(0);
	unk_0x9AD5FF38501E64A6(19);
	unk_0x9AD5FF38501E64A6(2);
	unk_0xEA8377A713D575EE();
	func_155();
	if (func_154(uParam1))
	{
		if (!unk_0x7DA173D4FD42F36B(*uParam3, 12))
		{
			if (func_136(uParam0, uParam1, uParam2, uParam3, bParam5))
			{
				uLocal_124 = unk_0xC2F899BFC87B57E7(Local_116, 0f, 0f, IntToFloat(iLocal_115), 2, 0, 0, 1065353216, 0, 1065353216);
				unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), uLocal_124, sLocal_114, sLocal_123, 2f, -1.5f, 13, 16, 2f, 0);
				unk_0x2D818F2925754469(uLocal_124);
				unk_0xE27C8E42A97895CF(uParam3, 12);
			}
		}
		if (unk_0x7DA173D4FD42F36B(*uParam3, 12))
		{
			func_135(uParam4);
			iVar0 = unk_0x111736C2C9FCA3D0(uLocal_124);
			if (iVar0 >= 0 && unk_0x4958900440DDE4E4(iVar0))
			{
				if (unk_0x8DC3C8E197F6A40D() != 4)
				{
					if (unk_0x3B5FD456D45F2AAE(iVar0) >= 0.35f)
					{
						unk_0xE9394EF4D98EC0C7(uLocal_124);
						unk_0x99BCB15F954AF579(uParam3, 8);
						unk_0x99BCB15F954AF579(uParam3, 12);
						uParam1->f_10 = -1;
						unk_0x99BCB15F954AF579(uParam3, 2);
						unk_0x99BCB15F954AF579(uParam3, 3);
						if (bParam5 == 1)
						{
							unk_0x99BCB15F954AF579(uParam3, 4);
							unk_0x99BCB15F954AF579(uParam3, 5);
						}
						else
						{
							unk_0x99BCB15F954AF579(uParam3, 0);
							unk_0x99BCB15F954AF579(uParam3, 1);
						}
						return 1;
					}
				}
				else if (unk_0x3B5FD456D45F2AAE(iVar0) >= 0.9f)
				{
					unk_0xE9394EF4D98EC0C7(uLocal_124);
					unk_0x99BCB15F954AF579(uParam3, 8);
					unk_0x99BCB15F954AF579(uParam3, 12);
					uParam1->f_10 = -1;
					unk_0x99BCB15F954AF579(uParam3, 2);
					unk_0x99BCB15F954AF579(uParam3, 3);
					if (bParam5 == 1)
					{
						unk_0x99BCB15F954AF579(uParam3, 4);
						unk_0x99BCB15F954AF579(uParam3, 5);
					}
					else
					{
						unk_0x99BCB15F954AF579(uParam3, 0);
						unk_0x99BCB15F954AF579(uParam3, 1);
					}
					return 1;
				}
			}
		}
	}
	else if (func_136(uParam0, uParam1, uParam2, uParam3, bParam5))
	{
		uParam1->f_10 = -1;
		unk_0x99BCB15F954AF579(uParam3, 2);
		unk_0x99BCB15F954AF579(uParam3, 3);
		func_135(uParam4);
		if (bParam5 == 1)
		{
			unk_0x99BCB15F954AF579(uParam3, 4);
			unk_0x99BCB15F954AF579(uParam3, 5);
		}
		else
		{
			unk_0x99BCB15F954AF579(uParam3, 0);
			unk_0x99BCB15F954AF579(uParam3, 1);
		}
		return 1;
	}
	return 0;
}

void func_135(var uParam0)
{
	*uParam0 = 0;
}

int func_136(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	struct<9> Var1;
	
	if (func_154(uParam1))
	{
		iVar0 = 0;
		if (unk_0x7DA173D4FD42F36B(*uParam3, 8))
		{
			iVar0 = unk_0x111736C2C9FCA3D0(uLocal_124);
			if (iVar0 >= 0 && unk_0x4958900440DDE4E4(iVar0))
			{
				if (unk_0x3B5FD456D45F2AAE(iVar0) >= 0.9f)
				{
					unk_0x99BCB15F954AF579(uParam3, 8);
					uLocal_124 = unk_0xC2F899BFC87B57E7(Local_116, 0f, 0f, IntToFloat(iLocal_115), 2, 0, 1, 1065353216, 0, 1065353216);
					unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), uLocal_124, sLocal_114, sLocal_121, 2f, -1.5f, 13, 16, 2f, 0);
					unk_0x2D818F2925754469(uLocal_124);
					unk_0xE27C8E42A97895CF(uParam3, 11);
				}
			}
		}
	}
	if ((!unk_0x3DC360442A11BB38() && !func_14(0)) && !unk_0x526F2ADD5C54B89E())
	{
		if (unk_0x4A1EAF6BB2C862EA(2))
		{
			iLocal_125 = 51;
		}
		else
		{
			iLocal_125 = 222;
		}
		if (!bParam4)
		{
			if (unk_0x7DA173D4FD42F36B(*uParam3, 0))
			{
				if (func_153(uParam0, uParam1) == 1)
				{
					unk_0x99BCB15F954AF579(uParam3, 0);
				}
			}
			if (unk_0x7DA173D4FD42F36B(*uParam3, 1))
			{
				if (func_153(uParam0, uParam1) == 2)
				{
					unk_0x99BCB15F954AF579(uParam3, 1);
				}
			}
		}
		else
		{
			if (unk_0x7DA173D4FD42F36B(*uParam3, 5))
			{
				if (func_152(uParam0) == 4)
				{
					unk_0x99BCB15F954AF579(uParam3, 5);
				}
			}
			if (unk_0x7DA173D4FD42F36B(*uParam3, 4))
			{
				if (func_152(uParam0) == 3)
				{
					unk_0x99BCB15F954AF579(uParam3, 4);
				}
			}
		}
		if (uParam1->f_9 != func_151(uParam0, uParam1))
		{
			unk_0x99BCB15F954AF579(uParam3, 2);
			unk_0x99BCB15F954AF579(uParam3, 3);
			uParam1->f_9 = func_151(uParam0, uParam1);
		}
		if (unk_0xD471C64C0898A7BF(2, 225))
		{
			unk_0xE27C8E42A97895CF(uParam2, 0);
			unk_0x99BCB15F954AF579(uParam1, 6);
			return 1;
		}
		else
		{
			if ((unk_0xD471C64C0898A7BF(2, 235) || unk_0xD471C64C0898A7BF(2, 234)) || unk_0xD471C64C0898A7BF(2, iLocal_125))
			{
				unk_0x99BCB15F954AF579(uParam3, 2);
				unk_0x99BCB15F954AF579(uParam3, 3);
				if (bParam4 == 0)
				{
					unk_0x99BCB15F954AF579(uParam3, 0);
					unk_0x99BCB15F954AF579(uParam3, 1);
				}
				else
				{
					unk_0x99BCB15F954AF579(uParam3, 4);
					unk_0x99BCB15F954AF579(uParam3, 5);
				}
				if (func_154(uParam1))
				{
					if (!unk_0x7DA173D4FD42F36B(*uParam3, 8))
					{
						if (unk_0xD471C64C0898A7BF(2, 235) || unk_0xD471C64C0898A7BF(2, 234))
						{
							if (func_153(uParam0, uParam1) == 1 || func_152(uParam0) == 3)
							{
								uLocal_124 = unk_0xC2F899BFC87B57E7(Local_116, 0f, 0f, IntToFloat(iLocal_115), 2, 0, 0, 1065353216, 0, 1065353216);
								unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), uLocal_124, sLocal_114, sLocal_122, 2f, -1.5f, 13, 16, 2f, 0);
								unk_0x2D818F2925754469(uLocal_124);
								unk_0xE27C8E42A97895CF(uParam3, 8);
							}
						}
						else
						{
							uLocal_124 = unk_0xC2F899BFC87B57E7(Local_116, 0f, 0f, IntToFloat(iLocal_115), 2, 0, 0, 1065353216, 0, 1065353216);
							unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), uLocal_124, sLocal_114, sLocal_122, 2f, -1.5f, 13, 16, 2f, 0);
							unk_0x2D818F2925754469(uLocal_124);
							unk_0xE27C8E42A97895CF(uParam3, 8);
						}
					}
				}
				if (unk_0xD471C64C0898A7BF(2, 235))
				{
					unk_0xE27C8E42A97895CF(uParam3, 2);
				}
				else if (unk_0xD471C64C0898A7BF(2, 234))
				{
					unk_0xE27C8E42A97895CF(uParam3, 3);
				}
				else if (unk_0xD471C64C0898A7BF(2, iLocal_125))
				{
					if (bParam4 == 0)
					{
						if (func_153(uParam0, uParam1) == 2)
						{
							unk_0xE27C8E42A97895CF(uParam3, 0);
						}
						else if (func_153(uParam0, uParam1) == 1)
						{
							unk_0xE27C8E42A97895CF(uParam3, 1);
						}
					}
					else if (func_152(uParam0) == 4)
					{
						unk_0xE27C8E42A97895CF(uParam3, 4);
					}
					else if (func_152(uParam0) == 3)
					{
						unk_0xE27C8E42A97895CF(uParam3, 5);
					}
				}
			}
			if (bParam4 == 0)
			{
				if (unk_0x7DA173D4FD42F36B(*uParam2, 0) || unk_0x6FA5125835DABC72(2))
				{
					func_149(&(uParam2->f_10));
					func_148(unk_0xB1C8DCF6DB548BFD(0, 225, 1), "HUD_INPUT3", &(uParam2->f_10), 0);
					if (func_153(uParam0, uParam1) == 1)
					{
						func_148(unk_0x120C6DB43AE50AE1(0, 19, 1), "HUD_INPUT80", &(uParam2->f_10), 0);
						func_148(unk_0xB1C8DCF6DB548BFD(0, iLocal_125, 1), "HUD_INPUT82", &(uParam2->f_10), 0);
					}
					else if (func_153(uParam0, uParam1) == 2)
					{
						func_148(unk_0xB1C8DCF6DB548BFD(0, iLocal_125, 1), "HUD_INPUT81", &(uParam2->f_10), 0);
					}
					unk_0x99BCB15F954AF579(uParam2, 0);
				}
			}
			else if (unk_0x7DA173D4FD42F36B(*uParam2, 0))
			{
				func_149(&(uParam2->f_10));
				func_148(unk_0xB1C8DCF6DB548BFD(0, 225, 1), "HUD_INPUT3", &(uParam2->f_10), 0);
				if (func_152(uParam0) == 3)
				{
					func_148(unk_0x120C6DB43AE50AE1(0, 19, 1), "HUD_INPUT80", &(uParam2->f_10), 0);
					func_148(unk_0xB1C8DCF6DB548BFD(0, iLocal_125, 1), "HUD_INPUT82", &(uParam2->f_10), 0);
				}
				else if (func_152(uParam0) == 4)
				{
					func_148(unk_0xB1C8DCF6DB548BFD(0, iLocal_125, 1), "HUD_INPUT81", &(uParam2->f_10), 0);
				}
				unk_0x99BCB15F954AF579(uParam2, 0);
			}
			Var1 = { func_147() };
			func_146(&(uParam2->f_10), 1f);
			func_138(&(uParam2->f_697), &Var1, &(uParam2->f_10), func_145(&(uParam2->f_10)));
			func_137(1);
		}
	}
	return 0;
}

void func_137(int iParam0)
{
	Global_1339962.f_932 = iParam0;
}

void func_138(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || unk_0x6FA5125835DABC72(2))
	{
		*uParam2 = 0;
		if (unk_0x6A87921801178186(*uParam0))
		{
			if (unk_0x55812CD5A331E1F8())
			{
				unk_0x2B859AD680983623(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x504EDFAAB39BF764(0);
				unk_0xE97F1B22C5E8989F();
			}
			unk_0x2B859AD680983623(*uParam0, "CLEAR_ALL");
			unk_0xE97F1B22C5E8989F();
		}
		func_144(uParam2);
	}
	if (Global_1318755 < 2)
	{
		func_143(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x6A87921801178186(*uParam0))
		{
			*uParam0 = unk_0xDDEDAA5105426019("instructional_buttons");
		}
		if (unk_0x6A87921801178186(*uParam0))
		{
			unk_0xDD933A326326CB1D(*uParam0, "CLEAR_ALL");
			if (unk_0x55812CD5A331E1F8())
			{
				unk_0x2B859AD680983623(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x504EDFAAB39BF764(1);
				unk_0xE97F1B22C5E8989F();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0x7DA173D4FD42F36B(uParam2->f_676, iVar0))
				{
					unk_0x2B859AD680983623(*uParam0, "SET_DATA_SLOT");
					unk_0x7AF283DA3BA078CD(iVar0);
					if (!unk_0x7DA173D4FD42F36B(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_142(unk_0xB1C8DCF6DB548BFD(iVar1, iVar2, 1));
						if (iVar3 < 345)
						{
							func_142(unk_0xB1C8DCF6DB548BFD(iVar1, iVar3, 1));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_142(unk_0x120C6DB43AE50AE1(iVar4, iVar5, 1));
					}
					if (unk_0x7DA173D4FD42F36B(uParam2->f_674, iVar0))
					{
						unk_0x7291E2F821FCFC04(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x474EBA999C39492E(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xD92C45283BCDA624(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xD6360E18957BCDD3();
					}
					else if (unk_0x7DA173D4FD42F36B(uParam2->f_675, iVar0))
					{
						unk_0x7291E2F821FCFC04(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x9C174A0D56FFB64A(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xD6360E18957BCDD3();
					}
					else
					{
						func_141(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x55812CD5A331E1F8())
					{
						if (unk_0x7DA173D4FD42F36B(uParam2->f_678, iVar0))
						{
							unk_0x504EDFAAB39BF764(1);
							unk_0x7AF283DA3BA078CD(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x504EDFAAB39BF764(0);
							unk_0x7AF283DA3BA078CD(345);
						}
					}
					unk_0xE97F1B22C5E8989F();
				}
				else
				{
					unk_0x2B859AD680983623(*uParam0, "SET_DATA_SLOT");
					unk_0x7AF283DA3BA078CD(iVar0);
					func_142(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0x226FA58470A21AEF(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_142(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0x7DA173D4FD42F36B(uParam2->f_674, iVar0))
					{
						unk_0x7291E2F821FCFC04(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x474EBA999C39492E(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xD92C45283BCDA624(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xD6360E18957BCDD3();
					}
					else if (unk_0x7DA173D4FD42F36B(uParam2->f_675, iVar0))
					{
						unk_0x7291E2F821FCFC04(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x9C174A0D56FFB64A(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xD6360E18957BCDD3();
					}
					else
					{
						func_141(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x55812CD5A331E1F8())
					{
						unk_0x504EDFAAB39BF764(0);
						unk_0x7AF283DA3BA078CD(345);
					}
					unk_0xE97F1B22C5E8989F();
				}
				iVar0++;
			}
			unk_0x2B859AD680983623(*uParam0, "SET_MAX_WIDTH");
			unk_0xB62735E5BEC5ABF8(uParam2->f_686);
			unk_0xE97F1B22C5E8989F();
			unk_0x2B859AD680983623(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x7AF283DA3BA078CD(0);
			unk_0xE97F1B22C5E8989F();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_140(*uParam0, uParam1);
	}
	func_139();
}

void func_139()
{
	unk_0x9AD5FF38501E64A6(7);
	unk_0x9AD5FF38501E64A6(6);
	unk_0x9AD5FF38501E64A6(8);
	unk_0x9AD5FF38501E64A6(9);
}

void func_140(var uParam0, var uParam1)
{
	unk_0xA5C0BA1772140603(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_141(var uParam0)
{
	unk_0x7291E2F821FCFC04(uParam0);
	unk_0xD6360E18957BCDD3();
}

void func_142(char* sParam0)
{
	unk_0x8C64B9C850F2EFB2(sParam0);
}

void func_143(int iParam0)
{
	Global_1318755 = iParam0;
}

void func_144(var uParam0)
{
	uParam0->f_679 = 0;
}

int func_145(var uParam0)
{
	return uParam0->f_679;
}

void func_146(var uParam0, float fParam1)
{
	uParam0->f_686 = fParam1;
}

struct<9> func_147()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_148(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_680;
	StringCopy(&(uParam2->f_1[iVar0 /*56*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_32), sParam1, 16);
	uParam2->f_680++;
}

void func_149(var uParam0)
{
	func_150(uParam0);
	uParam0->f_679 = 1;
}

void func_150(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*56*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*56*/].f_36 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_37), "", 64);
		uParam0->f_1[iVar0 /*56*/].f_53 = 2;
		uParam0->f_1[iVar0 /*56*/].f_54 = 345;
		uParam0->f_1[iVar0 /*56*/].f_55 = 345;
		iVar0++;
	}
	uParam0->f_674 = 0;
	uParam0->f_675 = 0;
	uParam0->f_676 = 0;
	uParam0->f_678 = 0;
	uParam0->f_677 = 0;
	uParam0->f_679 = 0;
	uParam0->f_680 = 0;
	uParam0->f_682 = 0f;
	uParam0->f_683 = 0f;
	uParam0->f_684 = 0f;
	uParam0->f_685 = 0f;
	uParam0->f_686 = 1f;
}

int func_151(var uParam0, var uParam1)
{
	if (unk_0x7DA173D4FD42F36B(*uParam1, 0))
	{
		return uParam0->f_2;
	}
	return uParam0->f_1;
}

int func_152(var uParam0)
{
	return uParam0->f_52;
}

int func_153(var uParam0, var uParam1)
{
	if (unk_0x7DA173D4FD42F36B(*uParam1, 0))
	{
		return uParam0->f_51;
	}
	return uParam0->f_50;
}

int func_154(var uParam0)
{
	if (uParam0->f_12 == 1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_155()
{
	if (!unk_0x526F2ADD5C54B89E() && !unk_0x3DC360442A11BB38())
	{
		unk_0xD1CD744C0A89CC7D(0);
		unk_0xD1CD744C0A89CC7D(2);
		unk_0x99266F5A88BE7BA8(2, 225, 1);
		unk_0x99266F5A88BE7BA8(2, 234, 1);
		unk_0x99266F5A88BE7BA8(2, 235, 1);
		unk_0x99266F5A88BE7BA8(2, iLocal_125, 1);
		unk_0x99266F5A88BE7BA8(2, 199, 1);
		unk_0x99266F5A88BE7BA8(0, 26, 1);
		unk_0x99266F5A88BE7BA8(0, 2, 1);
		unk_0x99266F5A88BE7BA8(0, 1, 1);
	}
}

void func_156()
{
	Global_17118.f_6 = 1;
}

void func_157()
{
	Global_2464975.f_4391 = 0;
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		if (func_159())
		{
			Global_2434839.f_26 = 1;
		}
	}
	else
	{
		Global_2434839.f_26 = 0;
	}
}

bool func_159()
{
	return unk_0x7DA173D4FD42F36B(Global_2434839.f_2, 11);
}

void func_160()
{
	Global_2428549.f_648.f_10 = 1;
}

int func_161(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, bool bParam8)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (bParam8)
	{
	}
	if (*uParam4 > 0)
	{
		func_177();
	}
	switch (*uParam4)
	{
		case 0:
			if ((((!unk_0x7DA173D4FD42F36B(*uParam0, 9) && !unk_0x7DA173D4FD42F36B(*uParam0, 13)) && !unk_0x7DA173D4FD42F36B(*uParam0, 10)) && !unk_0x7DA173D4FD42F36B(Global_2359301, 15)) && !unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
			{
				if (bParam8 == 0)
				{
					iVar3 = func_176(uParam0, uParam2);
				}
				else
				{
					iVar3 = 2;
				}
				if (bParam8 == 0)
				{
					if (iLocal_237 > iVar3)
					{
						iLocal_237 = 0;
					}
				}
				if (bParam8 == 1)
				{
					iLocal_238 = iLocal_237;
					iLocal_237 = 2;
				}
				if (func_174(uParam0, uParam2, iLocal_237) && !unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
				{
					if (func_170((11 + iLocal_237), Local_116, uParam7))
					{
						bLocal_126 = true;
						if (!bVar0)
						{
							if (!Global_1722816 && !unk_0x83667584AACBB09C("MP_POSITIONED_RADIO_MUTE_SCENE"))
							{
								if (((((func_3(unk_0xE0BDAFA1A39552D6(), 1, 1) && !unk_0x7DA173D4FD42F36B(Global_2428549.f_690.f_4, 0)) && !func_169()) && !func_133(uParam0, uParam1)) && !func_168()) && !unk_0x62B40DCE3407C5E4(unk_0xE0BDAFA1A39552D6()))
								{
									if (bParam8 == 1)
									{
									}
									if (func_154(uParam0))
									{
										unk_0x198E497B820DA913(sLocal_114);
										if (unk_0x7B43775D6E0D7325(sLocal_114))
										{
											if (!unk_0x7DA173D4FD42F36B(Global_2359301, 7))
											{
												bVar0 = true;
											}
										}
										else
										{
											unk_0x198E497B820DA913(sLocal_114);
										}
									}
									else
									{
										bVar0 = true;
									}
								}
								else
								{
									if (func_3(unk_0xE0BDAFA1A39552D6(), 1, 1))
									{
									}
									if (!unk_0x7DA173D4FD42F36B(Global_2428549.f_690.f_4, 0))
									{
									}
									if (!func_169())
									{
									}
									if (!func_133(uParam0, uParam1))
									{
									}
								}
							}
							else
							{
								if (!Global_1722816)
								{
								}
								if (!unk_0x83667584AACBB09C("MP_POSITIONED_RADIO_MUTE_SCENE"))
								{
								}
							}
						}
					}
					else
					{
						iVar4 = 0;
						while (iVar4 < unk_0xC4A9F8E5EC59EB4F())
						{
							if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar4)))
							{
								iVar5 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar4));
								if (iVar5 != unk_0xE0BDAFA1A39552D6())
								{
									if (func_3(iVar5, 1, 1))
									{
										fVar6 = unk_0xA1F52EC3ECE1D42E(func_167(iVar5), func_167(unk_0xE0BDAFA1A39552D6()), 1);
										if (fVar6 < 2f && fVar6 != 0f)
										{
										}
									}
								}
							}
							iVar4++;
						}
					}
					if (bVar0)
					{
						if (Global_1587800)
						{
							if (*uParam3 == -1)
							{
								func_166(uParam3, 3, "MPRD_BILL", 0, 0, 0, 0);
							}
						}
						else if (*uParam3 == -1)
						{
							func_166(uParam3, 3, "MPRD_CTXT", 0, 0, 0, 0);
						}
						else if (func_165(*uParam3, 1))
						{
							func_6(uParam3);
							if (func_154(uParam0))
							{
								unk_0xE27C8E42A97895CF(uParam0, 13);
								uParam0->f_10 = iLocal_237;
								*uParam4++;
							}
							else
							{
								uParam0->f_10 = iLocal_237;
								unk_0xB825CA4B750354E2(unk_0x06736567F820A39E(), func_163(uParam0, uParam2), 0);
								unk_0xB0B53944EE49BF71(unk_0x06736567F820A39E(), func_163(uParam0, uParam2), -1, 0, 2);
								unk_0xE27C8E42A97895CF(uParam1, 0);
								unk_0xE27C8E42A97895CF(&Global_2359301, 15);
								return 1;
							}
						}
					}
				}
				else
				{
					bLocal_126 = false;
					if (bParam8 == 1)
					{
						iLocal_237 = iLocal_238;
					}
					else if (!bLocal_126)
					{
						iLocal_237++;
					}
				}
			}
			break;
		
		case 1:
			if (func_162((11 + iLocal_237), &iVar1, uParam6, uParam7))
			{
				if ((unk_0x7DA173D4FD42F36B(*uParam0, 13) && iVar1 == 1) || (uParam0->f_12 && iVar1 == 1))
				{
					Var7 = { unk_0xF368E2B5887962DB(sLocal_114, sLocal_119, Local_116, 0f, 0f, IntToFloat(iLocal_115), 0, 2) };
					Var10 = { unk_0xF7CF52D5D69E32BB(sLocal_114, sLocal_119, Local_116, 0f, 0f, IntToFloat(iLocal_115), 0, 2) };
					Var13 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
					unk_0x1F6717C33A02B7AC(unk_0x06736567F820A39E());
					unk_0x45B6AF61833199EC(unk_0x06736567F820A39E(), unk_0xF7CF52D5D69E32BB(sLocal_114, sLocal_119, Local_116, 0f, 0f, IntToFloat(iLocal_115), 0, 2), 1f, 2500, Var7.f_2, 0.1f);
					unk_0x99BCB15F954AF579(uParam0, 13);
					unk_0xE27C8E42A97895CF(uParam0, 9);
					*uParam4++;
				}
				else if (iVar1 == 2)
				{
					func_135(uParam6);
					unk_0x99BCB15F954AF579(uParam0, 13);
					unk_0x99BCB15F954AF579(&Global_2359301, 15);
					unk_0x99BCB15F954AF579(uParam1, 0);
					*uParam4 = 0;
				}
			}
			break;
		
		case 2:
			if (unk_0x7DA173D4FD42F36B(*uParam0, 9))
			{
				if (unk_0xFB900D9EE2ACC400(unk_0x06736567F820A39E(), 2106541073) == 7)
				{
					unk_0xE27C8E42A97895CF(uParam0, 10);
					uLocal_124 = unk_0xC2F899BFC87B57E7(Local_116, 0f, 0f, IntToFloat(iLocal_115), 2, 0, 0, 1065353216, 0, 1065353216);
					unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), uLocal_124, sLocal_114, sLocal_120, 2f, -1.5f, 13, 16, 2f, 0);
					unk_0x2D818F2925754469(uLocal_124);
					unk_0x99BCB15F954AF579(uParam0, 9);
					*uParam4++;
				}
			}
			break;
		
		case 3:
			if (unk_0x7DA173D4FD42F36B(*uParam0, 10))
			{
				iVar2 = unk_0x111736C2C9FCA3D0(uLocal_124);
				if (iVar2 >= 0 && unk_0x4958900440DDE4E4(iVar2))
				{
					if (unk_0x3B5FD456D45F2AAE(iVar2) >= 0.9f)
					{
						if (unk_0x7DA173D4FD42F36B(*uParam0, 5))
						{
							unk_0xE27C8E42A97895CF(uParam0, 6);
						}
						unk_0xE27C8E42A97895CF(uParam1, 0);
						unk_0xE27C8E42A97895CF(&Global_2359301, 15);
						unk_0x99BCB15F954AF579(uParam0, 10);
						uLocal_124 = unk_0xC2F899BFC87B57E7(Local_116, 0f, 0f, IntToFloat(iLocal_115), 2, 0, 1, 1065353216, 0, 1065353216);
						unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), uLocal_124, sLocal_114, sLocal_121, 2f, -1.5f, 13, 16, 2f, 0);
						unk_0x2D818F2925754469(uLocal_124);
						unk_0xE27C8E42A97895CF(uParam5, 11);
						*uParam4 = 0;
						return 1;
					}
				}
			}
			break;
	}
	if (!bVar0)
	{
		func_6(uParam3);
	}
	return 0;
}

int func_162(int iParam0, int iParam1, var uParam2, var uParam3)
{
	*uParam2 = iParam0;
	if ((*uParam3)[iParam0] != 0)
	{
		if (unk_0x7DA173D4FD42F36B((*uParam3)[iParam0], unk_0xE0BDAFA1A39552D6()))
		{
			*iParam1 = 1;
			return 1;
		}
		else
		{
			*iParam1 = 2;
			return 1;
		}
	}
	return 0;
}

Vector3 func_163(var uParam0, var uParam1)
{
	struct<3> Var0;
	
	if (!uParam0->f_12)
	{
		switch (uParam1->f_33)
		{
			case 2:
				if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
				{
					return 176.2662f, -999.429f, -98.8624f;
				}
				else
				{
					return 263.3552f, -994.6862f, -98.9227f;
				}
				break;
			
			case 6:
				if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
				{
					return 201.9062f, -993.8659f, -98.9293f;
				}
				else
				{
					return 341.5449f, -1001.063f, -99.0576f;
				}
				break;
			
			case 10:
				if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
				{
					return 230.6372f, -974.8629f, -98.8201f;
				}
				else
				{
					switch (uParam0->f_10)
					{
						case 0:
							if (func_164(uParam1->f_31))
							{
								func_36(uParam1->f_31, 117, &Var0, 61);
							}
							else
							{
								func_36(uParam1->f_31, 117, &Var0, -1);
							}
							return Var0;
							break;
						
						case 1:
							if (func_164(uParam1->f_31))
							{
								func_36(uParam1->f_31, 118, &Var0, 61);
							}
							else
							{
								func_36(uParam1->f_31, 118, &Var0, -1);
							}
							return Var0;
							break;
						}
				}
				break;
		}
	}
	else
	{
		switch (uParam0->f_10)
		{
			case 0:
				func_46(uParam0->f_2, 117, &Var0, 0);
				return Var0;
				break;
			
			case 1:
				func_46(uParam0->f_2, 118, &Var0, 0);
				return Var0;
				break;
			
			case 2:
				func_46(uParam0->f_2, 597, &Var0, 0);
				return Var0;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 1;
		
		default:
	}
	return 0;
}

int func_165(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_7(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x7868479D9B6694C0(unk_0xBC628C78D8ECD5F1()))
	{
		return 0;
	}
	if (func_14(0))
	{
		return 0;
	}
	if (unk_0xEE448F70B7098781())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36442[iVar0 /*32*/] == 1 && Global_36442[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36442[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36442[iVar0 /*32*/].f_5 = 1;
			Global_36442[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36442[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36442[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_166(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x98934607F8D0FB03(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xAD79840A082ADD7F())
	{
		if (!*uParam0 == -1)
		{
			func_6(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36442[iVar0 /*32*/])
		{
			Global_36442[iVar0 /*32*/] = 1;
			Global_36442[iVar0 /*32*/].f_1 = Global_36643;
			Global_36643++;
			Global_36442[iVar0 /*32*/].f_4 = 0;
			Global_36442[iVar0 /*32*/].f_29 = 0;
			Global_36442[iVar0 /*32*/].f_5 = 0;
			Global_36442[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36442[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36442[iVar0 /*32*/].f_6 = iParam3;
			Global_36442[iVar0 /*32*/].f_31 = unk_0xAE832DCCE9CD3242();
			Global_36442[iVar0 /*32*/].f_7 = 0;
			Global_36442[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x226FA58470A21AEF(sParam4))
			{
				Global_36442[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36442[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36442[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36442[iVar0 /*32*/].f_12 = 0;
				Global_36442[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_36442[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

Vector3 func_167(int iParam0)
{
	return unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iParam0), 0);
}

bool func_168()
{
	return unk_0x0FDDFFBD775C7598() != 0;
}

int func_169()
{
	if (Global_2428549.f_648.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_170(int iParam0, struct<3> Param1, var uParam4)
{
	if (!func_173(iParam0, Param1, uParam4))
	{
		return 0;
	}
	if (!func_171())
	{
		return 0;
	}
	return 1;
}

int func_171()
{
	if (((((((((((((((((!func_3(unk_0xE0BDAFA1A39552D6(), 1, 1) || func_172()) || unk_0x86970FE5BF5D650D(unk_0xE0BDAFA1A39552D6())) || unk_0x8E078D197865EF83(unk_0xE0BDAFA1A39552D6())) || unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E())) || unk_0xAD79840A082ADD7F()) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0xA4A5AC3C741A8704(unk_0x06736567F820A39E())) || unk_0x8B69AEF6B3EE75BF(unk_0x06736567F820A39E())) || unk_0xBA79743A17F6A7EC(unk_0x06736567F820A39E())) || unk_0xFAB21A1828B413FF(unk_0x06736567F820A39E())) || unk_0xD8F198A7650361B8(unk_0x06736567F820A39E())) || unk_0xDA637881D427DB40(unk_0x06736567F820A39E())) || unk_0x242E2C614D8CFBBD(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x71D4779BE8EB3270(unk_0x06736567F820A39E())) || unk_0x98D424FE7497139D(unk_0x06736567F820A39E())) || unk_0x55C761BDF0A5BB06(unk_0x06736567F820A39E(), 0))
	{
		return 0;
	}
	return 1;
}

int func_172()
{
	if (Global_2557205.f_770 == 1)
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	int iVar1;
	
	if ((*uParam4)[iParam0] != 0 && !unk_0x7DA173D4FD42F36B((*uParam4)[iParam0], unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (unk_0xD42729B812AEAF19(Param1, 0.05f, 0, 1, 0, 0, 0, 0, 0) || unk_0xD42729B812AEAF19(Param1, 0.05f, 0, 0, 1, 0, 0, unk_0x06736567F820A39E(), 1))
	{
		iVar0 = 0;
		while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
		{
			if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar0)))
			{
				iVar1 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar0));
				if (iVar1 != unk_0xE0BDAFA1A39552D6())
				{
					if (unk_0x8853522CEFF93BE9(unk_0x44A9253132E1DDE0(iVar1), Param1, 0.5f, 0.5f, 0.5f, 0, 1, 0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_174(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<6> Var6;
	struct<3> Var12;
	struct<3> Var15;
	float fVar18;
	int iVar19;
	struct<6> Var20;
	struct<6> Var26;
	struct<4> Var32;
	
	if (Global_1736242 && func_175())
	{
		return 0;
	}
	Var6 = { 0f, 0f, 0f };
	Var6.f_3 = { 0f, 0f, 0f };
	Var6 = { Var6 };
	fVar18 = 0f;
	iVar19 = 0;
	switch (uParam1->f_33)
	{
		case 2:
		case 6:
			unk_0x99BCB15F954AF579(uParam0, 5);
			break;
	}
	if (((((!func_56(uParam1->f_31) && !func_55(uParam1->f_31, -1)) && !func_54(uParam1->f_31)) && !uParam0->f_12) && !func_53(uParam1->f_31)) && !func_50(unk_0xE0BDAFA1A39552D6()))
	{
		switch (uParam1->f_33)
		{
			case 2:
				if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
				{
					if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 176.2736f, -999.4766f, -97.58723f, 176.2674f, -1000.868f, -100.0624f, 1.6875f, 0, 1, 0))
					{
						sLocal_114 = "anim@mp_radio@garage@low";
						iLocal_115 = 0;
						Local_116 = { 176.601f, -999.79f, -98.957f };
						sLocal_119 = "action_a";
						sLocal_120 = "enter";
						sLocal_121 = "idle_a";
						sLocal_122 = "button_press";
						sLocal_123 = "exit";
						return 1;
					}
				}
				else if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 263.615f, -994.4068f, -97.69791f, 263.6068f, -996.1709f, -100.0711f, 1.5f, 0, 1, 0))
				{
					sLocal_114 = "anim@mp_radio@low_apment";
					iLocal_115 = -1;
					Local_116 = { 263.035f, -995.132f, -99.04f };
					sLocal_119 = "action_a_kitchen";
					sLocal_120 = "enter_kitchen";
					sLocal_121 = "idle_a_kitchen";
					sLocal_122 = "button_press_kitchen";
					sLocal_123 = "exit_kitchen";
					return 1;
				}
				break;
			
			case 6:
				if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
				{
					if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 201.8828f, -993.9427f, -97.58112f, 202.0024f, -995.1277f, -100.0625f, 1.6875f, 0, 1, 0))
					{
						sLocal_114 = "anim@mp_radio@garage@medium";
						iLocal_115 = 0;
						Local_116 = { 201.455f, -994.257f, -98.979f };
						sLocal_119 = "action_a";
						sLocal_120 = "enter";
						sLocal_121 = "idle_a";
						sLocal_122 = "button_press";
						sLocal_123 = "exit";
						return 1;
					}
				}
				else if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 340.9294f, -1002.605f, -100.1962f, 340.9887f, -1000.322f, -98.19622f, 1f, 0, 1, 0))
				{
					sLocal_114 = "anim@mp_radio@medium_apment";
					iLocal_115 = -90;
					Local_116 = { 341.355f, -1000.652f, -99.14f };
					sLocal_119 = "action_a_kitchen";
					sLocal_120 = "enter_kitchen";
					sLocal_121 = "idle_a_kitchen";
					sLocal_122 = "button_press_kitchen";
					sLocal_123 = "exit_kitchen";
					return 1;
				}
				break;
			
			case 10:
				if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
				{
					if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 231.8411f, -975.6349f, -100.0898f, 230.3515f, -975.6111f, -96.0415f, 2.5f, 0, 1, 0))
					{
						sLocal_114 = "anim@mp_radio@garage@high";
						iLocal_115 = 0;
						Local_116 = { 230.302f, -975.685f, -98.979f };
						sLocal_119 = "action_a";
						sLocal_120 = "enter";
						sLocal_121 = "idle_a";
						sLocal_122 = "button_press";
						sLocal_123 = "exit";
						return 1;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							Var0 = { Local_129 };
							Var12 = { Var0 };
							Var0 = { Local_135 };
							if (func_164(uParam1->f_31))
							{
								Local_116 = { Local_159 };
								iLocal_115 = unk_0xF2DB717A73826179(Local_159.f_3.f_2);
								sLocal_114 = "anim@mp_radio@high_life_apment";
								sLocal_119 = "action_a_living_room";
								sLocal_120 = "enter_living_room";
								sLocal_121 = "idle_a_living_room";
								sLocal_122 = "button_press_living_room";
								sLocal_123 = "exit_living_room";
							}
							else
							{
								Local_116 = { Local_159 };
								iLocal_115 = unk_0xF2DB717A73826179(Local_159.f_3.f_2);
								sLocal_114 = "anim@mp_radio@high_apment";
								sLocal_119 = "action_a_bedroom";
								sLocal_120 = "enter_bedroom";
								sLocal_121 = "idle_a_bedroom";
								sLocal_122 = "button_press_bedroom";
								sLocal_123 = "exit_bedroom";
							}
							Var15 = { Var0 };
							fVar18 = 1.8125f;
							break;
						
						case 1:
							Var0 = { Local_165 };
							Var12 = { Var0 };
							Var0 = { Local_171 };
							if (func_164(uParam1->f_31))
							{
								sLocal_114 = "anim@mp_radio@high_life_apment";
								Local_116 = { Local_177 };
								iLocal_115 = unk_0xF2DB717A73826179(Local_177.f_3.f_2);
								sLocal_119 = "action_a_bedroom";
								sLocal_120 = "enter_bedroom";
								sLocal_121 = "idle_a_bedroom";
								sLocal_122 = "button_press_bedroom";
								sLocal_123 = "exit_bedroom";
							}
							else
							{
								Local_116 = { Local_177 };
								iLocal_115 = unk_0xF2DB717A73826179(Local_177.f_3.f_2);
								sLocal_114 = "anim@mp_radio@high_apment";
								sLocal_119 = "action_a_living_room";
								sLocal_120 = "enter_living_room";
								sLocal_121 = "idle_a_living_room";
								sLocal_122 = "button_press_living_room";
								sLocal_123 = "exit_living_room";
							}
							Var15 = { Var0 };
							fVar18 = 1.8125f;
							break;
						
						case 2:
							Var0 = { Local_183 };
							Var12 = { Var0 };
							Var0 = { Local_189 };
							if (func_164(uParam1->f_31))
							{
								Local_116 = { Local_195 };
								iLocal_115 = unk_0xF2DB717A73826179(Local_195.f_3.f_2);
								sLocal_114 = "anim@mp_radio@high_life_apment";
								sLocal_119 = "action_a_study";
								sLocal_120 = "enter_study";
								sLocal_121 = "idle_a_study";
								sLocal_122 = "button_press_study";
								sLocal_123 = "exit_study";
							}
							else
							{
								Local_116 = { Local_195 };
								iLocal_115 = unk_0xF2DB717A73826179(Local_195.f_3.f_2);
								sLocal_114 = "anim@mp_radio@high_apment";
								sLocal_119 = "action_a_study";
								sLocal_120 = "enter_study";
								sLocal_121 = "idle_a_study";
								sLocal_122 = "button_press_study";
								sLocal_123 = "exit_study";
							}
							Var15 = { Var0 };
							fVar18 = 1f;
							iVar19 = 1;
							break;
					}
					if ((Var12.f_0 != 0f && Var12.f_1 != 0f) && Var12.f_2 != 0f)
					{
						if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), Var12, Var15, fVar18, 0, 1, 0))
						{
							if (iVar19 == 1)
							{
								if (!unk_0x7DA173D4FD42F36B(*uParam0, 5))
								{
									unk_0xE27C8E42A97895CF(uParam0, 5);
								}
								iVar19 = 0;
							}
							return 1;
						}
						else
						{
							iVar19 = 0;
							unk_0x99BCB15F954AF579(uParam0, 5);
							Local_116 = { 0f, 0f, 0f };
							iLocal_115 = 0;
							sLocal_114 = "";
							sLocal_119 = "";
							sLocal_120 = "";
							sLocal_121 = "";
							sLocal_122 = "";
							sLocal_123 = "";
						}
					}
				}
				break;
		}
	}
	else if (((((func_56(uParam1->f_31) || func_55(uParam1->f_31, -1)) || func_54(uParam1->f_31)) || uParam0->f_12) || func_53(uParam1->f_31)) || func_50(unk_0xE0BDAFA1A39552D6()))
	{
		switch (iParam2)
		{
			case 0:
				Var20 = { Local_129 };
				Var26 = { Local_135 };
				Var32 = { Local_159 };
				if (func_54(uParam1->f_31))
				{
					if (((Global_3934085 == 1 || Global_3934085 == 4) || Global_3934085 == 5) || Global_3934085 == 8)
					{
						Var20 = { Local_153 };
						Var26 = { Local_147 };
						Var32 = { Local_141 };
					}
					else if (((Global_3934085 == 2 || Global_3934085 == 3) || Global_3934085 == 6) || Global_3934085 == 7)
					{
						Var20 = { Local_129 };
						Var26 = { Local_135 };
						Var32 = { Local_159 };
					}
				}
				Var0 = { Var20 };
				Var12 = { Var0 };
				Var0 = { Var26 };
				Local_116 = { Var32 };
				iLocal_115 = unk_0xF2DB717A73826179(Var32.f_3.f_2);
				sLocal_114 = "anim@mp_radio@high_apment";
				sLocal_119 = "action_a_living_room";
				sLocal_120 = "enter_living_room";
				sLocal_121 = "idle_a_living_room";
				sLocal_122 = "button_press_living_room";
				sLocal_123 = "exit_living_room";
				if (uParam0->f_12)
				{
					sLocal_114 = "anim@mp_radio@garage@low";
					Local_116 = { Local_159 };
					iLocal_115 = unk_0xF2DB717A73826179(Local_159.f_3.f_2);
					sLocal_119 = "action_a";
					sLocal_120 = "enter";
					sLocal_121 = "idle_a";
					sLocal_122 = "button_press";
					sLocal_123 = "exit";
				}
				if (func_53(uParam1->f_31))
				{
					sLocal_114 = "anim@mp_radio@high_apment";
					sLocal_119 = "action_a_bedroom";
					sLocal_120 = "enter_bedroom";
					sLocal_121 = "idle_a_bedroom";
					sLocal_122 = "button_press_bedroom";
					sLocal_123 = "exit_bedroom";
				}
				if (func_50(unk_0xE0BDAFA1A39552D6()))
				{
					sLocal_114 = "anim@mp_radio@high_apment";
					sLocal_119 = "action_a_living_room";
					sLocal_120 = "enter_living_room";
					sLocal_121 = "idle_a_living_room";
					sLocal_122 = "button_press_living_room";
					sLocal_123 = "exit_living_room";
				}
				Var15 = { Var0 };
				fVar18 = 1.8125f;
				break;
			
			case 1:
				Var0 = { Local_165 };
				Var12 = { Var0 };
				Var0 = { Local_171 };
				Local_116 = { Local_177 };
				iLocal_115 = unk_0xF2DB717A73826179(Local_177.f_3.f_2);
				sLocal_114 = "anim@mp_radio@high_apment";
				sLocal_119 = "action_a_living_room";
				sLocal_120 = "enter_living_room";
				sLocal_121 = "idle_a_living_room";
				sLocal_122 = "button_press_living_room";
				sLocal_123 = "exit_living_room";
				if (func_54(uParam1->f_31))
				{
					sLocal_114 = "anim@mp_radio@high_apment";
					sLocal_119 = "action_a_study";
					sLocal_120 = "enter_study";
					sLocal_121 = "idle_a_study";
					sLocal_122 = "button_press_study";
					sLocal_123 = "exit_study";
				}
				Var15 = { Var0 };
				fVar18 = 1.8125f;
				break;
			
			case 2:
				Var0 = { Local_183 };
				Var12 = { Var0 };
				Var0 = { Local_189 };
				Local_116 = { Local_195 };
				iLocal_115 = unk_0xF2DB717A73826179(Local_195.f_3.f_2);
				sLocal_114 = "anim@mp_radio@high_apment";
				sLocal_119 = "action_a_living_room";
				sLocal_120 = "enter_living_room";
				sLocal_121 = "idle_a_living_room";
				sLocal_122 = "button_press_living_room";
				sLocal_123 = "exit_living_room";
				if (func_55(uParam1->f_31, -1) || func_54(uParam1->f_31))
				{
					sLocal_119 = "action_a_study";
					sLocal_120 = "enter_study";
					sLocal_121 = "idle_a_study";
					sLocal_122 = "button_press_study";
					sLocal_123 = "exit_study";
				}
				Var15 = { Var0 };
				fVar18 = 1.8125f;
				break;
			
			case 3:
				Var0 = { Local_213 };
				Var12 = { Var0 };
				Var0 = { Local_207 };
				Local_116 = { Local_201 };
				iLocal_115 = unk_0xF2DB717A73826179(Local_201.f_3.f_2);
				sLocal_114 = "anim@mp_radio@high_apment";
				sLocal_119 = "action_a_living_room";
				sLocal_120 = "enter_living_room";
				sLocal_121 = "idle_a_living_room";
				sLocal_122 = "button_press_living_room";
				sLocal_123 = "exit_living_room";
				Var15 = { Var0 };
				fVar18 = 1.8125f;
				break;
			
			case 4:
				Var0 = { Local_231 };
				Var12 = { Var0 };
				Var0 = { Local_225 };
				Local_116 = { Local_219 };
				iLocal_115 = unk_0xF2DB717A73826179(Local_219.f_3.f_2);
				sLocal_114 = "anim@mp_radio@high_apment";
				sLocal_119 = "action_a_living_room";
				sLocal_120 = "enter_living_room";
				sLocal_121 = "idle_a_living_room";
				sLocal_122 = "button_press_living_room";
				sLocal_123 = "exit_living_room";
				Var15 = { Var0 };
				fVar18 = 1.8125f;
				break;
		}
		if ((Var12.f_0 != 0f && Var12.f_1 != 0f) && Var12.f_2 != 0f)
		{
			if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), Var12, Var15, fVar18, 0, 1, 0))
			{
				Global_25418 = 1;
				return 1;
			}
			else
			{
				iVar19 = 0;
				Global_25418 = 0;
				unk_0x99BCB15F954AF579(uParam0, 5);
				Local_116 = { 0f, 0f, 0f };
				iLocal_115 = 0;
				sLocal_114 = "";
				sLocal_119 = "";
				sLocal_120 = "";
				sLocal_121 = "";
				sLocal_122 = "";
				sLocal_123 = "";
			}
		}
		switch (uParam1->f_33)
		{
			case 10:
				if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
				{
					if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 231.8411f, -975.6349f, -100.0898f, 230.3515f, -975.6111f, -96.0415f, 2.5f, 0, 1, 0))
					{
						sLocal_114 = "anim@mp_radio@garage@high";
						iLocal_115 = 0;
						Local_116 = { 230.302f, -975.685f, -98.979f };
						sLocal_119 = "action_a";
						sLocal_120 = "enter";
						sLocal_121 = "idle_a";
						sLocal_122 = "button_press";
						sLocal_123 = "exit";
						return 1;
					}
				}
				break;
			}
	}
	return 0;
}

int func_175()
{
	if (func_50(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0x7DA173D4FD42F36B(Global_1735933.f_2, 0) || unk_0x7DA173D4FD42F36B(Global_1735933.f_2, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_176(var uParam0, var uParam1)
{
	if (func_55(uParam1->f_31, -1))
	{
		return 3;
	}
	if (func_54(uParam1->f_31))
	{
		return 2;
	}
	if (func_56(uParam1->f_31) && !uParam0->f_12)
	{
		return 5;
	}
	if (uParam0->f_12)
	{
		return 3;
	}
	if (func_53(uParam1->f_31) || func_50(unk_0xE0BDAFA1A39552D6()))
	{
		return 1;
	}
	if (uParam1->f_33 == 10)
	{
		if (!unk_0x7DA173D4FD42F36B(*uParam0, 0))
		{
			return 1;
		}
	}
	return 2;
}

void func_177()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_14(0))
		{
			func_11(0);
		}
		unk_0xE27C8E42A97895CF(&Global_2284, 2);
	}
}

void func_178(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
}

int func_179(var uParam0, var uParam1)
{
	int iVar0;
	
	if (((((!func_56(uParam1->f_31) && !func_55(uParam1->f_31, -1)) && !func_54(uParam1->f_31)) && !uParam0->f_12) && !func_53(uParam1->f_31)) && !func_50(unk_0xE0BDAFA1A39552D6()))
	{
		switch (uParam1->f_33)
		{
			case 2:
				break;
			
			case 6:
				break;
			
			case 10:
				if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
				{
				}
				else
				{
					if (func_164(uParam1->f_31))
					{
						func_36(uParam1->f_31, 102, &Local_129, 61);
					}
					else
					{
						func_36(uParam1->f_31, 102, &Local_129, -1);
					}
					if (func_164(uParam1->f_31))
					{
						func_36(uParam1->f_31, 103, &Local_135, 61);
					}
					else
					{
						func_36(uParam1->f_31, 103, &Local_135, -1);
					}
					if (func_164(uParam1->f_31))
					{
						func_36(uParam1->f_31, 182, &Local_159, 61);
					}
					else
					{
						func_36(uParam1->f_31, 182, &Local_159, -1);
					}
					if (func_164(uParam1->f_31))
					{
						func_36(uParam1->f_31, 104, &Local_165, 61);
					}
					else
					{
						func_36(uParam1->f_31, 104, &Local_165, -1);
					}
					if (func_164(uParam1->f_31))
					{
						func_36(uParam1->f_31, 105, &Local_171, 61);
					}
					else
					{
						func_36(uParam1->f_31, 105, &Local_171, -1);
					}
					if (func_164(uParam1->f_31))
					{
						sLocal_114 = "anim@mp_radio@high_life_apment";
						func_36(uParam1->f_31, 183, &Local_177, 61);
					}
					else
					{
						func_36(uParam1->f_31, 183, &Local_177, -1);
					}
					if (func_164(uParam1->f_31))
					{
						func_36(uParam1->f_31, 169, &Local_183, 61);
					}
					else
					{
						func_36(uParam1->f_31, 169, &Local_183, -1);
					}
					if (func_164(uParam1->f_31))
					{
						func_36(uParam1->f_31, 170, &Local_189, 61);
					}
					else
					{
						func_36(uParam1->f_31, 170, &Local_189, -1);
					}
					if (func_164(uParam1->f_31))
					{
						func_36(uParam1->f_31, 181, &Local_195, 61);
					}
					else
					{
						func_36(uParam1->f_31, 181, &Local_195, -1);
					}
				}
				break;
		}
	}
	else if (func_56(uParam1->f_31) && !uParam0->f_12)
	{
		iVar0 = uParam0->f_2;
		if (iVar0 == -1)
		{
			return 0;
		}
		func_46(iVar0, 102, &Local_129, 0);
		func_46(iVar0, 103, &Local_135, 0);
		func_46(iVar0, 182, &Local_159, 0);
		func_46(iVar0, 104, &Local_165, 0);
		func_46(iVar0, 105, &Local_171, 0);
		func_46(iVar0, 183, &Local_177, 0);
		func_46(iVar0, 169, &Local_183, 0);
		func_46(iVar0, 170, &Local_189, 0);
		func_46(iVar0, 181, &Local_195, 0);
		func_46(iVar0, 588, &Local_213, 0);
		func_46(iVar0, 587, &Local_207, 0);
		func_46(iVar0, 589, &Local_201, 0);
		func_46(iVar0, 591, &Local_231, 0);
		func_46(iVar0, 590, &Local_225, 0);
		func_46(iVar0, 592, &Local_219, 0);
	}
	else if (uParam0->f_12)
	{
		if (uParam0->f_2 == -1)
		{
			return 0;
		}
		func_46(uParam0->f_2, 555, &Local_129, 0);
		func_46(uParam0->f_2, 556, &Local_135, 0);
		func_46(uParam0->f_2, 554, &Local_159, 0);
		func_46(uParam0->f_2, 594, &Local_165, 0);
		func_46(uParam0->f_2, 593, &Local_171, 0);
		func_46(uParam0->f_2, 596, &Local_183, 0);
		func_46(uParam0->f_2, 595, &Local_189, 0);
	}
	else if (func_55(uParam1->f_31, -1))
	{
		func_36(uParam1->f_31, 102, &Local_129, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 103, &Local_135, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 182, &Local_159, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 104, &Local_165, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 105, &Local_171, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 183, &Local_177, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 169, &Local_183, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 170, &Local_189, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 181, &Local_195, func_45(uParam1->f_31));
	}
	else if (func_54(uParam1->f_31))
	{
		func_36(uParam1->f_31, 501, &Local_129, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 502, &Local_135, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 500, &Local_159, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 102, &Local_153, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 103, &Local_147, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 182, &Local_141, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 104, &Local_165, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 105, &Local_171, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 183, &Local_177, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 169, &Local_183, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 170, &Local_189, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 181, &Local_195, func_45(uParam1->f_31));
	}
	else if (func_53(uParam1->f_31))
	{
		func_36(uParam1->f_31, 102, &Local_129, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 103, &Local_135, func_45(uParam1->f_31));
		func_36(uParam1->f_31, 182, &Local_159, func_45(uParam1->f_31));
	}
	else if (func_50(unk_0xE0BDAFA1A39552D6()))
	{
		if (uParam0->f_15 == 111)
		{
			Local_129 = { 994.9379f, -3097.307f, -39.99083f };
			Local_135 = { 994.9346f, -3098.542f, -38.24083f };
			Local_159 = { 995.367f, -3097.48f, -39.115f };
			Local_159.f_3 = { 0f, 0f, -92.843f };
		}
		else if (uParam0->f_15 == 42)
		{
			Local_129 = { 1049.198f, -3100.077f, -39.99993f };
			Local_135 = { 1049.168f, -3099.13f, -38.24993f };
			Local_159 = { 1048.582f, -3100.444f, -39.115f };
			Local_159.f_3 = { 0f, 0f, 84.6f };
		}
		else if (uParam0->f_15 == 16)
		{
			Local_129 = { 1088.615f, -3100.932f, -39.99993f };
			Local_135 = { 1088.619f, -3099.957f, -38.24993f };
			Local_159 = { 1088.011f, -3100.987f, -39.125f };
			Local_159.f_3 = { 0f, 0f, 88.2f };
		}
	}
	return 1;
}

void func_180(var uParam0)
{
	if (!unk_0x7DA173D4FD42F36B(*uParam0, 1))
	{
		if (Global_2097152[func_181() /*10510*/].f_5388.f_2[0])
		{
			unk_0xE27C8E42A97895CF(uParam0, 2);
		}
		else
		{
			unk_0x99BCB15F954AF579(uParam0, 2);
		}
		uParam0->f_7 = Global_2097152[func_181() /*10510*/].f_5388.f_5[0];
		if (Global_2097152[func_181() /*10510*/].f_5388.f_10)
		{
			unk_0xE27C8E42A97895CF(uParam0, 4);
		}
		else
		{
			unk_0x99BCB15F954AF579(uParam0, 4);
		}
		uParam0->f_8 = Global_2097152[func_181() /*10510*/].f_5388.f_11;
		unk_0xE27C8E42A97895CF(uParam0, 1);
	}
}

int func_181()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_182(var uParam0, var uParam1)
{
	char* sVar0;
	char* sVar1;
	
	if (((func_55(uParam1->f_31, -1) || func_54(uParam1->f_31)) || func_53(uParam1->f_31)) || func_50(unk_0xE0BDAFA1A39552D6()))
	{
		sVar0 = unk_0x2E6EA44CA237AF31(uParam0->f_1);
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_22))
		{
			if (func_50(unk_0xE0BDAFA1A39552D6()))
			{
				sVar1 = func_35(uParam1->f_31, 1, 1, uParam0->f_53);
			}
			else
			{
				sVar1 = func_35(uParam1->f_31, 1, 0, 0);
			}
			unk_0x3D5F8AB2BD44F4C2(sVar1, unk_0x4C4151C3DEC199DC(uParam0->f_22));
			unk_0xEDADB2C5312DE2A3(sVar1, 1);
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Custom_Bedroom", sVar0);
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_21))
		{
			unk_0x3D5F8AB2BD44F4C2(func_35(uParam1->f_31, 2, 0, 0), unk_0x4C4151C3DEC199DC(uParam0->f_21));
			unk_0xEDADB2C5312DE2A3(func_35(uParam1->f_31, 2, 0, 0), 1);
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Custom_Bedroom", sVar0);
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_23))
		{
			unk_0x3D5F8AB2BD44F4C2(func_35(uParam1->f_31, 3, 0, 0), unk_0x4C4151C3DEC199DC(uParam0->f_23));
			unk_0xEDADB2C5312DE2A3(func_35(uParam1->f_31, 3, 0, 0), 1);
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Custom_Bedroom", sVar0);
		}
	}
	else if (func_56(uParam1->f_31) && !uParam0->f_49)
	{
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_5))
		{
			unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Bar", unk_0x4C4151C3DEC199DC(uParam0->f_5));
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bar", 1);
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_6))
		{
			unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Bedroom", unk_0x4C4151C3DEC199DC(uParam0->f_6));
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bedroom", 1);
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_7))
		{
			unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Bedroom_02", unk_0x4C4151C3DEC199DC(uParam0->f_7));
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bedroom_02", 1);
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_8))
		{
			unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Bedroom_03", unk_0x4C4151C3DEC199DC(uParam0->f_8));
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bedroom_03", 1);
		}
	}
	else if (uParam0->f_49)
	{
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_24))
		{
			unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Exterior_01", unk_0x4C4151C3DEC199DC(uParam0->f_24));
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_01", 1);
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_25))
		{
			unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Exterior_02", unk_0x4C4151C3DEC199DC(uParam0->f_25));
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_02", 1);
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_26))
		{
			unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Exterior_03", unk_0x4C4151C3DEC199DC(uParam0->f_26));
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_03", 1);
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_27))
		{
			unk_0x3D5F8AB2BD44F4C2("SE_DLC_APT_Yacht_Exterior_04", unk_0x4C4151C3DEC199DC(uParam0->f_27));
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_04", 1);
		}
	}
}

void func_183(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	unk_0xEDADB2C5312DE2A3(func_185(2), 0);
	unk_0xEDADB2C5312DE2A3(func_185(6), 0);
	unk_0xEDADB2C5312DE2A3(func_185(10), 0);
	unk_0xEDADB2C5312DE2A3(func_184(2, 0, 0), 0);
	unk_0xEDADB2C5312DE2A3(func_184(6, 0, 0), 0);
	if (func_56(uParam1->f_31) && !uParam0->f_12)
	{
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bar", 0);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bedroom", 0);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bedroom_02", 0);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bedroom_03", 0);
	}
	else if (func_56(uParam1->f_31) && uParam0->f_12)
	{
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_01", 0);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_02", 0);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_03", 0);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_04", 0);
	}
	else if (func_55(uParam1->f_31, 77))
	{
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Stilts_A_Bedroom", 0);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Stilts_A_Heist_Room", 0);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Stilts_A_Living_Room", 0);
	}
	else if (func_55(uParam1->f_31, 73))
	{
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Stilts_B_Bedroom", 0);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Stilts_B_Heist_Room", 0);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Stilts_B_Living_Room", 0);
	}
	else if (func_54(uParam1->f_31))
	{
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Custom_Bedroom", 0);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Custom_Heist_Room", 0);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Custom_Living_Room", 0);
	}
	else if (func_53(uParam1->f_31))
	{
		unk_0xEDADB2C5312DE2A3(func_35(uParam1->f_31, 1, 0, 0), 0);
	}
	else if (func_50(unk_0xE0BDAFA1A39552D6()))
	{
		unk_0xEDADB2C5312DE2A3(func_35(uParam1->f_31, 1, 1, uParam0->f_15), 0);
	}
	iVar0 = 0;
	while (iVar0 < 91)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			sVar2 = func_184(10, iVar0, iVar1);
			if (!unk_0x226FA58470A21AEF(sVar2))
			{
				unk_0xEDADB2C5312DE2A3(sVar2, 0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

char* func_184(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			return "SE_MP_AP_RAD_v_studio_lo_living";
			break;
		
		case 6:
			return "SE_MP_AP_RAD_v_apart_midspaz_lounge";
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_1_1";
							break;
						
						case 1:
							return "SE_MP_APT_1_2";
							break;
						
						case 2:
							return "SE_MP_APT_1_3";
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_2_1";
							break;
						
						case 1:
							return "SE_MP_APT_2_2";
							break;
						
						case 2:
							return "SE_MP_APT_2_3";
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_3_1";
							break;
						
						case 1:
							return "SE_MP_APT_3_2";
							break;
						
						case 2:
							return "SE_MP_APT_3_3";
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_4_1";
							break;
						
						case 1:
							return "SE_MP_APT_4_2";
							break;
						
						case 2:
							return "SE_MP_APT_4_3";
							break;
					}
					break;
				
				case 61:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_NEW_4_1";
							break;
						
						case 1:
							return "SE_MP_APT_NEW_4_2";
							break;
						
						case 2:
							return "SE_MP_APT_NEW_4_3";
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_5_1";
							break;
						
						case 1:
							return "SE_MP_APT_5_2";
							break;
						
						case 2:
							return "SE_MP_APT_5_3";
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_6_1";
							break;
						
						case 1:
							return "SE_MP_APT_6_2";
							break;
						
						case 2:
							return "SE_MP_APT_6_3";
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_7_1";
							break;
						
						case 1:
							return "SE_MP_APT_7_2";
							break;
						
						case 2:
							return "SE_MP_APT_7_3";
							break;
					}
					break;
				
				case 34:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_8_1";
							break;
						
						case 1:
							return "SE_MP_APT_8_2";
							break;
						
						case 2:
							return "SE_MP_APT_8_3";
							break;
					}
					break;
				
				case 62:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_NEW_1_1";
							break;
						
						case 1:
							return "SE_MP_APT_NEW_1_2";
							break;
						
						case 2:
							return "SE_MP_APT_NEW_1_3";
							break;
					}
					break;
				
				case 35:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_9_1";
							break;
						
						case 1:
							return "SE_MP_APT_9_2";
							break;
						
						case 2:
							return "SE_MP_APT_9_3";
							break;
					}
					break;
				
				case 36:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_10_1";
							break;
						
						case 1:
							return "SE_MP_APT_10_2";
							break;
						
						case 2:
							return "SE_MP_APT_10_3";
							break;
					}
					break;
				
				case 37:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_11_1";
							break;
						
						case 1:
							return "SE_MP_APT_11_2";
							break;
						
						case 2:
							return "SE_MP_APT_11_3";
							break;
					}
					break;
				
				case 38:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_12_1";
							break;
						
						case 1:
							return "SE_MP_APT_12_2";
							break;
						
						case 2:
							return "SE_MP_APT_12_3";
							break;
					}
					break;
				
				case 39:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_13_1";
							break;
						
						case 1:
							return "SE_MP_APT_13_2";
							break;
						
						case 2:
							return "SE_MP_APT_13_3";
							break;
					}
					break;
				
				case 65:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_NEW_5_1";
							break;
						
						case 1:
							return "SE_MP_APT_NEW_5_2";
							break;
						
						case 2:
							return "SE_MP_APT_NEW_5_3";
							break;
					}
					break;
				
				case 40:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_14_1";
							break;
						
						case 1:
							return "SE_MP_APT_14_2";
							break;
						
						case 2:
							return "SE_MP_APT_14_3";
							break;
					}
					break;
				
				case 41:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_15_1";
							break;
						
						case 1:
							return "SE_MP_APT_15_2";
							break;
						
						case 2:
							return "SE_MP_APT_15_3";
							break;
					}
					break;
				
				case 63:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_NEW_2_1";
							break;
						
						case 1:
							return "SE_MP_APT_NEW_2_2";
							break;
						
						case 2:
							return "SE_MP_APT_NEW_2_3";
							break;
					}
					break;
				
				case 42:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_16_1";
							break;
						
						case 1:
							return "SE_MP_APT_16_2";
							break;
						
						case 2:
							return "SE_MP_APT_16_3";
							break;
					}
					break;
				
				case 43:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_17_1";
							break;
						
						case 1:
							return "SE_MP_APT_17_2";
							break;
						
						case 2:
							return "SE_MP_APT_17_3";
							break;
					}
					break;
				
				case 64:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_NEW_3_1";
							break;
						
						case 1:
							return "SE_MP_APT_NEW_3_2";
							break;
						
						case 2:
							return "SE_MP_APT_NEW_3_3";
							break;
					}
					break;
			}
			break;
	}
	return "";
}

char* func_185(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "SE_MP_GARAGE_S_RADIO";
			break;
		
		case 6:
			return "SE_MP_GARAGE_M_RADIO";
			break;
		
		case 10:
			return "SE_MP_GARAGE_L_RADIO";
			break;
	}
	return "";
}

void func_186(var uParam0)
{
	if (uParam0->f_50 > 0)
	{
		if (uParam0->f_50 == 1)
		{
			if (!Global_2097152[func_181() /*10510*/].f_5388.f_2[0])
			{
				Global_2097152[func_181() /*10510*/].f_5388.f_2[0] = 1;
			}
		}
		if (uParam0->f_50 == 2)
		{
			if (Global_2097152[func_181() /*10510*/].f_5388.f_2[0])
			{
				Global_2097152[func_181() /*10510*/].f_5388.f_2[0] = 0;
			}
		}
		if (uParam0->f_1 != Global_2097152[func_181() /*10510*/].f_5388.f_5[0])
		{
			Global_2097152[func_181() /*10510*/].f_5388.f_5[0] = uParam0->f_1;
		}
	}
	if (uParam0->f_51 > 0)
	{
		if (uParam0->f_51 == 1)
		{
			if (!Global_2097152[func_181() /*10510*/].f_5388.f_10)
			{
				Global_2097152[func_181() /*10510*/].f_5388.f_10 = 1;
			}
		}
		if (uParam0->f_51 == 2)
		{
			if (Global_2097152[func_181() /*10510*/].f_5388.f_10)
			{
				Global_2097152[func_181() /*10510*/].f_5388.f_10 = 0;
			}
		}
		if (uParam0->f_2 != Global_2097152[func_181() /*10510*/].f_5388.f_11)
		{
			Global_2097152[func_181() /*10510*/].f_5388.f_11 = uParam0->f_2;
		}
	}
}

void func_187(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	
	bVar0 = iParam4;
	switch (func_153(uParam0, uParam1))
	{
		case 1:
			if (uParam2->f_3 != func_151(uParam0, uParam1))
			{
				uParam2->f_3 = func_151(uParam0, uParam1);
				if (uParam1->f_13 == 2)
				{
					if (func_50(unk_0xE0BDAFA1A39552D6()))
					{
						unk_0x962E604CCA53388F(-1, "Retune_Low", "MP_RADIO_SFX", 1);
					}
					else if (!func_56(uParam3->f_31) && !func_53(uParam3->f_31))
					{
						unk_0x962E604CCA53388F(-1, func_194(uParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					else
					{
						unk_0x962E604CCA53388F(-1, "Retune_High", "MP_RADIO_SFX", 1);
					}
				}
				bVar0 = true;
			}
			if (unk_0x7DA173D4FD42F36B(*uParam2, 6))
			{
				unk_0x99BCB15F954AF579(uParam2, 6);
			}
			if (!unk_0x7DA173D4FD42F36B(*uParam2, 4))
			{
				if (uParam1->f_13 == 2)
				{
					if (func_50(unk_0xE0BDAFA1A39552D6()))
					{
						unk_0x962E604CCA53388F(-1, "Retune_Low", "MP_RADIO_SFX", 1);
					}
					else if (!func_56(uParam3->f_31) && !func_53(uParam3->f_31))
					{
						unk_0x962E604CCA53388F(-1, func_194(uParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					else
					{
						unk_0x962E604CCA53388F(-1, "Retune_High", "MP_RADIO_SFX", 1);
					}
				}
				bVar0 = true;
				unk_0xE27C8E42A97895CF(uParam2, 4);
			}
			if (bVar0)
			{
				func_191(uParam1, uParam2, uParam3, 1, uParam2->f_3, 0);
			}
			break;
		
		case 2:
			if (unk_0x7DA173D4FD42F36B(*uParam2, 4))
			{
				unk_0x99BCB15F954AF579(uParam2, 4);
			}
			if (!unk_0x7DA173D4FD42F36B(*uParam2, 6))
			{
				if (uParam1->f_13 == 2)
				{
					if (func_50(unk_0xE0BDAFA1A39552D6()))
					{
						unk_0x962E604CCA53388F(-1, "Off_Low", "MP_RADIO_SFX", 1);
					}
					else if (!func_56(uParam3->f_31) && !func_53(uParam3->f_31))
					{
						unk_0x962E604CCA53388F(-1, func_190(uParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					else
					{
						unk_0x962E604CCA53388F(-1, "Off_High", "MP_RADIO_SFX", 1);
					}
				}
				bVar0 = true;
				unk_0xE27C8E42A97895CF(uParam2, 6);
			}
			if (bVar0)
			{
				func_191(uParam1, uParam2, uParam3, 0, uParam2->f_3, 0);
			}
			break;
	}
	if (!unk_0x7DA173D4FD42F36B(*uParam1, 0))
	{
		switch (func_152(uParam0))
		{
			case 3:
				if (uParam2->f_3 != func_151(uParam0, uParam1))
				{
					uParam2->f_3 = func_151(uParam0, uParam1);
					if (uParam1->f_14 == 3)
					{
						unk_0x962E604CCA53388F(-1, func_194(uParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					bVar0 = true;
				}
				if (unk_0x7DA173D4FD42F36B(*uParam2, 12))
				{
					unk_0x99BCB15F954AF579(uParam2, 12);
				}
				if (!unk_0x7DA173D4FD42F36B(*uParam2, 11))
				{
					if (uParam1->f_14 == 3)
					{
						unk_0x962E604CCA53388F(-1, func_189(uParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					bVar0 = true;
					unk_0xE27C8E42A97895CF(uParam2, 11);
					if ((func_22() && !func_188()) && !unk_0x21A36E2323FEA4B1())
					{
						unk_0xE491AB346B56AC9F("DLC_MPHEIST_LOBBY_FADE_IN_RADIO_SCENE");
					}
				}
				if (bVar0)
				{
					func_191(uParam1, uParam2, uParam3, 1, uParam2->f_3, 1);
				}
				break;
			
			case 4:
				if (unk_0x7DA173D4FD42F36B(*uParam2, 11))
				{
					unk_0x99BCB15F954AF579(uParam2, 11);
				}
				if (!unk_0x7DA173D4FD42F36B(*uParam2, 12))
				{
					if (uParam1->f_14 == 3)
					{
						unk_0x962E604CCA53388F(-1, func_190(uParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					bVar0 = true;
					unk_0xE27C8E42A97895CF(uParam2, 12);
				}
				if (bVar0)
				{
					func_191(uParam1, uParam2, uParam3, 0, uParam2->f_3, 1);
				}
				break;
			}
	}
	if (func_153(uParam0, uParam1) == 1 || func_152(uParam0) == 3)
	{
		if (uParam2->f_3 != func_151(uParam0, uParam1))
		{
			uParam2->f_3 = func_151(uParam0, uParam1);
		}
	}
	if (unk_0x7DA173D4FD42F36B(*uParam2, 8))
	{
		if (!unk_0x7DA173D4FD42F36B(*uParam2, 9))
		{
			unk_0xE27C8E42A97895CF(uParam2, 9);
			func_191(uParam1, uParam2, uParam3, 1, uParam2->f_3, 0);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(*uParam2, 9))
	{
		unk_0x99BCB15F954AF579(uParam2, 9);
	}
	if (func_133(uParam1, uParam2))
	{
		if (!unk_0x7DA173D4FD42F36B(*uParam2, 10))
		{
			unk_0xE491AB346B56AC9F("MP_APT_STRIPPER_SCENE");
			unk_0xE27C8E42A97895CF(uParam2, 10);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(*uParam2, 10))
	{
		unk_0x8D72E02348CB74D2("MP_APT_STRIPPER_SCENE");
		unk_0x99BCB15F954AF579(uParam2, 10);
	}
}

bool func_188()
{
	return Global_2434839.f_569;
}

char* func_189(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
			{
				return "On_Low";
			}
			else
			{
				return "On_Low";
			}
			break;
		
		case 6:
			if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
			{
				return "On_High";
			}
			else
			{
				return "On_Low";
			}
			break;
		
		case 10:
			if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
			{
				return "On_Low";
			}
			else
			{
				return "On_High";
			}
			break;
	}
	return "";
}

char* func_190(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
			{
				return "Off_Low";
			}
			else
			{
				return "Off_Low";
			}
			break;
		
		case 6:
			if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
			{
				return "Off_High";
			}
			else
			{
				return "Off_Low";
			}
			break;
		
		case 10:
			if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
			{
				return "Off_Low";
			}
			else
			{
				return "Off_High";
			}
			break;
	}
	return "";
}

void func_191(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4, bool bParam5)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	unk_0xE27C8E42A97895CF(uParam1, 0);
	if (func_133(uParam0, uParam1))
	{
		sVar1 = "HIDDEN_RADIO_STRIP_CLUB";
		iVar2 = 1;
	}
	else
	{
		sVar1 = unk_0x2E6EA44CA237AF31(uParam4);
		iVar2 = bParam3;
	}
	if (bParam5)
	{
	}
	func_193(uParam2);
	if (func_56(uParam2->f_31) && !uParam0->f_12)
	{
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bar", iVar2);
		if (bParam3)
		{
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Yacht_Bar", sVar1);
		}
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bedroom", iVar2);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bedroom_02", iVar2);
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Bedroom_03", iVar2);
		if (bParam3)
		{
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Yacht_Bedroom", sVar1);
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Yacht_Bedroom_02", sVar1);
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Yacht_Bedroom_03", sVar1);
		}
	}
	else if (uParam0->f_12)
	{
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_01", iVar2);
		if (bParam3)
		{
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Yacht_Exterior_01", sVar1);
		}
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_02", iVar2);
		if (bParam3)
		{
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Yacht_Exterior_02", sVar1);
		}
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_03", iVar2);
		if (bParam3)
		{
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Yacht_Exterior_03", sVar1);
		}
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Yacht_Exterior_04", iVar2);
		if (bParam3)
		{
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Yacht_Exterior_04", sVar1);
		}
	}
	else if (func_55(uParam2->f_31, -1))
	{
		if (func_55(uParam2->f_31, 77))
		{
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Stilts_A_Bedroom", iVar2);
			if (bParam3)
			{
				unk_0x2CB9B2A073080F7A("SE_DLC_APT_Stilts_A_Bedroom", sVar1);
			}
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Stilts_A_Heist_Room", iVar2);
			if (bParam3)
			{
				unk_0x2CB9B2A073080F7A("SE_DLC_APT_Stilts_A_Heist_Room", sVar1);
			}
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Stilts_A_Living_Room", iVar2);
			if (bParam3)
			{
				unk_0x2CB9B2A073080F7A("SE_DLC_APT_Stilts_A_Living_Room", sVar1);
			}
		}
		else if (func_55(uParam2->f_31, 73))
		{
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Stilts_B_Bedroom", iVar2);
			if (bParam3)
			{
				unk_0x2CB9B2A073080F7A("SE_DLC_APT_Stilts_B_Bedroom", sVar1);
			}
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Stilts_B_Heist_Room", iVar2);
			if (bParam3)
			{
				unk_0x2CB9B2A073080F7A("SE_DLC_APT_Stilts_B_Heist_Room", sVar1);
			}
			unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Stilts_B_Living_Room", iVar2);
			if (bParam3)
			{
				unk_0x2CB9B2A073080F7A("SE_DLC_APT_Stilts_B_Living_Room", sVar1);
			}
		}
	}
	else if (func_54(uParam2->f_31))
	{
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Custom_Bedroom", iVar2);
		if (bParam3)
		{
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Custom_Bedroom", sVar1);
		}
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Custom_Heist_Room", iVar2);
		if (bParam3)
		{
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Custom_Heist_Room", sVar1);
		}
		unk_0xEDADB2C5312DE2A3("SE_DLC_APT_Custom_Living_Room", iVar2);
		if (bParam3)
		{
			unk_0x2CB9B2A073080F7A("SE_DLC_APT_Custom_Living_Room", sVar1);
		}
	}
	else if (func_53(uParam2->f_31))
	{
		unk_0xEDADB2C5312DE2A3(func_35(uParam2->f_31, 1, 0, 0), iVar2);
		if (bParam3)
		{
			unk_0x2CB9B2A073080F7A(func_35(uParam2->f_31, 1, 0, 0), sVar1);
		}
	}
	else if (func_50(unk_0xE0BDAFA1A39552D6()))
	{
		unk_0xEDADB2C5312DE2A3(func_35(uParam2->f_31, 1, 1, uParam0->f_15), iVar2);
		if (bParam3)
		{
			unk_0x2CB9B2A073080F7A(func_35(uParam2->f_31, 1, 1, uParam0->f_15), sVar1);
		}
	}
	if ((((((!func_56(uParam2->f_31) && !func_55(uParam2->f_31, -1)) && !func_54(uParam2->f_31)) && !uParam0->f_12) && !func_53(uParam2->f_31)) && !func_50(unk_0xE0BDAFA1A39552D6())) || unk_0x7DA173D4FD42F36B(*uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < func_193(uParam2))
		{
			if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
			{
				if (!unk_0x226FA58470A21AEF(func_192(uParam0, uParam2, iVar0)))
				{
					unk_0xEDADB2C5312DE2A3(func_192(uParam0, uParam2, iVar0), iVar2);
					if (bParam3)
					{
						unk_0x2CB9B2A073080F7A(func_192(uParam0, uParam2, iVar0), sVar1);
					}
				}
			}
			else if (bParam5 == 1 && iVar0 == 2)
			{
				if (!unk_0x226FA58470A21AEF(func_192(uParam0, uParam2, iVar0)))
				{
					unk_0xEDADB2C5312DE2A3(func_192(uParam0, uParam2, iVar0), iVar2);
					if (bParam3)
					{
						unk_0x2CB9B2A073080F7A(func_192(uParam0, uParam2, iVar0), sVar1);
					}
				}
			}
			else if (bParam5 == 0 && iVar0 != 2)
			{
				if (!unk_0x226FA58470A21AEF(func_192(uParam0, uParam2, iVar0)))
				{
					unk_0xEDADB2C5312DE2A3(func_192(uParam0, uParam2, iVar0), iVar2);
					if (bParam3)
					{
						unk_0x2CB9B2A073080F7A(func_192(uParam0, uParam2, iVar0), sVar1);
					}
				}
			}
			iVar0++;
		}
	}
}

char* func_192(var uParam0, var uParam1, int iParam2)
{
	if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
	{
		return func_185(uParam1->f_33);
	}
	else
	{
		return func_184(uParam1->f_33, uParam1->f_31, iParam2);
	}
	return "";
}

int func_193(var uParam0)
{
	if (func_164(uParam0->f_31))
	{
		return 3;
	}
	else if (uParam0->f_33 == 10)
	{
		return 3;
	}
	return 1;
}

char* func_194(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
			{
				return "Retune_Low";
			}
			else
			{
				return "Retune_Low";
			}
			break;
		
		case 6:
			if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
			{
				return "Retune_High";
			}
			else
			{
				return "Retune_Low";
			}
			break;
		
		case 10:
			if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
			{
				return "Retune_Low";
			}
			else
			{
				return "Retune_High";
			}
			break;
	}
	return "";
}

void func_195()
{
	if (unk_0x7DA173D4FD42F36B(Local_1772.f_0, 0) || unk_0x7DA173D4FD42F36B(Global_1736065, 0))
	{
		return;
	}
	if (func_199(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if (!func_198(Local_1772.f_2))
		{
			unk_0xE27C8E42A97895CF(&Local_1772, 0);
			return;
		}
	}
	else
	{
		unk_0xE27C8E42A97895CF(&Local_1772, 0);
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(Global_1736065, 0))
	{
		if (((((!unk_0x8122B656FB23F1C7() && !unk_0x4FF34B5B023875E1()) && !unk_0x58CFBE8B8644D59B()) && !unk_0xEC708A793EB17979()) && !unk_0x6146EFE5BC2DD8DC()) && !func_117())
		{
			if (func_125(&(Local_1772.f_650), 1200, 0))
			{
				if (func_196(func_197()))
				{
					func_102("WHOUSE_GOONHLP2C", -1);
				}
				else
				{
					func_102("WHOUSE_GOON_HLP2", -1);
				}
				unk_0xE27C8E42A97895CF(&Global_1736065, 0);
			}
		}
		else
		{
			func_66(&(Local_1772.f_650));
		}
	}
}

bool func_196(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 26);
}

int func_197()
{
	return Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10;
}

int func_198(int iParam0)
{
	int iVar0;
	
	if (func_101(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_199(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_200(iParam0))
		{
			return 0;
		}
	}
	return Global_1610705[iParam0 /*178*/].f_10 != func_52();
}

int func_200(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (Global_1610705[iParam0 /*178*/].f_10 != func_52())
		{
			return Global_1610705[iParam0 /*178*/].f_10 == iParam0;
		}
	}
	return 0;
}

void func_201()
{
	func_202(&(Local_1772.f_591));
}

void func_202(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	if (func_90(0, uParam0))
	{
		if (uParam0->f_23 != 0)
		{
			unk_0xBECC89ACB4E5D4ED(uParam0->f_23);
		}
		if (uParam0->f_31 != 0)
		{
			unk_0xBECC89ACB4E5D4ED(uParam0->f_31);
		}
		func_69(1, uParam0);
	}
	else if (func_90(1, uParam0))
	{
		if (uParam0->f_23 == 0 && uParam0->f_31 == 0)
		{
			func_69(3, uParam0);
			return;
		}
		if (uParam0->f_23 != 0 && !unk_0x5C9FE32E2FF37989(uParam0->f_23))
		{
			return;
		}
		if (uParam0->f_31 != 0 && !unk_0x5C9FE32E2FF37989(uParam0->f_31))
		{
			return;
		}
		bVar0 = false;
		bVar1 = false;
		if (uParam0->f_23 != 0)
		{
			uParam0->f_30 = unk_0x690B17DE4159577D(uParam0->f_23, uParam0->f_24, 0, 0, 1);
			unk_0x5C5B23A2682A1514(uParam0->f_30, uParam0->f_27, 2, 1);
			unk_0x93F4FB97D1F2E7A1(uParam0->f_30, true);
			bVar0 = true;
		}
		if (uParam0->f_31 != 0)
		{
			uParam0->f_38 = unk_0x690B17DE4159577D(uParam0->f_31, uParam0->f_32, 0, 0, 1);
			unk_0x5C5B23A2682A1514(uParam0->f_38, uParam0->f_35, 2, 1);
			unk_0x93F4FB97D1F2E7A1(uParam0->f_38, true);
			bVar1 = true;
		}
		if (bVar0)
		{
			unk_0x0B87AFC0B2EECA19(uParam0->f_23);
		}
		if (bVar1)
		{
			unk_0x0B87AFC0B2EECA19(uParam0->f_31);
		}
		func_69(3, uParam0);
	}
	else if (func_90(3, uParam0))
	{
	}
	else if (func_90(2, uParam0))
	{
		if (unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			func_69(7, uParam0);
			return;
		}
		if ((unk_0x7B43775D6E0D7325(uParam0->f_3) && unk_0xC1EDB61CE0A4B94E(uParam0->f_2)) && !unk_0xBDA1F5E8A36BFA07(uParam0->f_2, 0))
		{
			if (unk_0xAF89CDD7CBF2C80A(uParam0->f_2))
			{
				unk_0xADDAAC391F0532E2(0, 1);
				func_106(1, 1);
				func_203(uParam0);
				unk_0x93F4FB97D1F2E7A1(uParam0->f_2, false);
				uParam0->f_13 = unk_0x70D62E1C98FBC411(uParam0->f_14, uParam0->f_17, 2);
				unk_0x13F17EF7A260536D(uParam0->f_2, uParam0->f_13, uParam0->f_3, uParam0->f_4, 1000f, -1000f, 4, 0, 1148846080, 0);
				unk_0x963D11E545E699A3(uParam0->f_13, uParam0->f_20);
				func_69(4, uParam0);
			}
		}
	}
	else if (func_90(4, uParam0))
	{
		if (unk_0x4958900440DDE4E4(uParam0->f_13))
		{
			uParam0->f_22 = unk_0x3B5FD456D45F2AAE(uParam0->f_13);
			if (!unk_0x226FA58470A21AEF(uParam0->f_52))
			{
				iVar2 = 0;
				while (iVar2 < 2)
				{
					if ((!unk_0x7DA173D4FD42F36B(uParam0->f_45, iVar2) && !unk_0x226FA58470A21AEF(uParam0->f_46[iVar2])) && uParam0->f_22 >= uParam0->f_49[iVar2])
					{
						if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_2, 0))
						{
							Var3 = { unk_0xF4745590D18D14B8(uParam0->f_2, 1) };
						}
						unk_0x2299DE0D50444F5B(-1, uParam0->f_46[iVar2], Var3, uParam0->f_52, 0, 0, 0);
						unk_0xE27C8E42A97895CF(&(uParam0->f_45), iVar2);
					}
					iVar2++;
				}
			}
			if (uParam0->f_22 > uParam0->f_21)
			{
				func_69(5, uParam0);
			}
		}
	}
	else if (func_90(7, uParam0))
	{
	}
}

void func_203(var uParam0)
{
	if (unk_0x97A9CC2DDCDAA0A8(uParam0->f_5))
	{
		unk_0xC2F547D33F9342CC(uParam0->f_5, 0);
	}
	uParam0->f_5 = unk_0x485DB0A1B0F664FC(26379945, 1);
	unk_0x025959B85926F031(uParam0->f_5, uParam0->f_6, uParam0->f_9, uParam0->f_12, 0, 1, 1, 2);
	unk_0x37F47D707289852F(uParam0->f_5, 1000f);
	unk_0x1CB53231E96DF097(uParam0->f_5, "HAND_SHAKE", 0.25f);
	unk_0xA7E1DB47F3F4BCD1(1, 0, 3000, 1, 0, 0);
}

void func_204(var uParam0)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	
	fVar0 = 0.45f;
	if (*uParam0 == uParam0->f_1)
	{
		uParam0->f_2 = 0;
	}
	if (unk_0xCE4A7178C782F52B(0, 51))
	{
		uParam0->f_2 = 1;
		uParam0->f_1 = *uParam0;
	}
	iVar1 = *uParam0;
	if (!func_207(Local_2443[iVar1 /*3*/]))
	{
		Var2 = { Local_2443[iVar1 /*3*/] };
		Var2.f_2 = (Var2.f_2 + 0.5f);
		Var2.f_0 = (Var2.f_0 + 0.5f);
		if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0) && !unk_0xD60AA22BDFBDDD10(unk_0x06736567F820A39E()))
		{
			if (unk_0x8853522CEFF93BE9(unk_0x06736567F820A39E(), Var2, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (unk_0xF63E891A722D90B6(Var2, 2f, 1))
				{
					if (!unk_0xA6F6A931D290B6E1(Var2, 2f, 1))
					{
						if (unk_0x7DA173D4FD42F36B(uParam0->f_3[iVar1], 1))
						{
							unk_0x99BCB15F954AF579(&(uParam0->f_3[iVar1]), 1);
							if (func_206("MPTV_STAND"))
							{
								unk_0x310F6B4E168A8F5D(1);
							}
						}
						if (!unk_0x7DA173D4FD42F36B(uParam0->f_3[iVar1], 0))
						{
							unk_0xE27C8E42A97895CF(&(uParam0->f_3[iVar1]), 0);
							func_102("MPTV_WALK", -1);
						}
						if (uParam0->f_2)
						{
							unk_0x6553935614875699(unk_0x06736567F820A39E(), 414, 1);
							unk_0xD937C50CBE3F443D(unk_0x06736567F820A39E(), Var2, 2f, 5000);
							uParam0->f_2 = 0;
							uParam0->f_1 = -1;
							if (func_206("MPTV_WALK"))
							{
								unk_0x310F6B4E168A8F5D(1);
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x7DA173D4FD42F36B(uParam0->f_3[iVar1], 0))
				{
					unk_0x99BCB15F954AF579(&(uParam0->f_3[iVar1]), 0);
					if (func_206("MPTV_WALK"))
					{
						unk_0x310F6B4E168A8F5D(1);
					}
				}
				if (unk_0x7DA173D4FD42F36B(uParam0->f_3[iVar1], 1))
				{
					unk_0x99BCB15F954AF579(&(uParam0->f_3[iVar1]), 1);
					if (func_206("MPTV_STAND"))
					{
						unk_0x310F6B4E168A8F5D(1);
					}
				}
			}
		}
		else
		{
			if (unk_0x7DA173D4FD42F36B(uParam0->f_3[iVar1], 0))
			{
				unk_0x99BCB15F954AF579(&(uParam0->f_3[iVar1]), 0);
				if (func_206("MPTV_WALK"))
				{
					unk_0x310F6B4E168A8F5D(1);
				}
			}
			func_205();
			if (unk_0xA6F6A931D290B6E1(Var2, 2f, 1))
			{
				if (!unk_0x7DA173D4FD42F36B(uParam0->f_3[iVar1], 1))
				{
					unk_0xE27C8E42A97895CF(&(uParam0->f_3[iVar1]), 1);
					func_102("MPTV_STAND", -1);
				}
				if (uParam0->f_2)
				{
					unk_0x67B49D4E454FC061(unk_0x06736567F820A39E(), 1);
					unk_0x1F6717C33A02B7AC(unk_0x06736567F820A39E());
					unk_0x6553935614875699(unk_0x06736567F820A39E(), 414, 0);
					uParam0->f_2 = 0;
					uParam0->f_1 = -1;
					if (func_206("MPTV_STAND"))
					{
						unk_0x310F6B4E168A8F5D(1);
					}
				}
			}
		}
	}
	*uParam0++;
	if (*uParam0 >= 2)
	{
		*uParam0 = 0;
	}
}

void func_205()
{
	unk_0xE27C8E42A97895CF(&Global_2284, 4);
}

bool func_206(char* sParam0)
{
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

int func_207(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_208(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			func_331(uParam0);
			break;
		
		case 1:
			unk_0x198E497B820DA913(uParam0->f_39);
			if ((((!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && func_330(uParam0->f_1, unk_0x06736567F820A39E(), 1) < 2f) && func_327(uParam0)) && func_320()) && !Local_2424.f_0)
			{
				if (uParam0->f_8 == -1)
				{
					if (!unk_0x02EB4679E7E8BC81())
					{
						func_166(&(uParam0->f_8), 4, "WARE_VEH_UPG", 0, 0, 0, 0);
					}
				}
				if (!func_169())
				{
					if (func_165(uParam0->f_8, 1))
					{
						func_318(0, -1, 0);
						func_316(uParam0);
						func_315(func_100(Local_1772.f_2), &(uParam0->f_2), 1);
						unk_0x45B6AF61833199EC(unk_0x06736567F820A39E(), unk_0xF7CF52D5D69E32BB(uParam0->f_39, "enter", uParam0->f_27, uParam0->f_27.f_3, 0, 2), 1f, 5000, uParam0->f_27.f_3.f_2, 0.05f);
						func_60(unk_0xE0BDAFA1A39552D6(), 0, 256);
						func_6(&(uParam0->f_8));
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_8 != -1)
			{
				func_6(&(uParam0->f_8));
			}
			break;
		
		case 2:
			if (unk_0xFB900D9EE2ACC400(unk_0x06736567F820A39E(), 2106541073) != 1 || unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), uParam0->f_33, uParam0->f_33.f_3, 1f, 0, 1, 0))
			{
				if (func_314(uParam0))
				{
					func_313(uParam0);
				}
			}
			break;
		
		case 3:
			if (!Local_2424.f_0)
			{
				func_215(uParam0);
			}
			else
			{
				func_212(1, -1);
				*uParam0 = 5;
			}
			break;
		
		case 4:
			if (func_211(uParam0))
			{
				func_210(uParam0);
			}
			break;
		
		case 5:
			func_209(uParam0, 0);
			break;
	}
}

void func_209(var uParam0, bool bParam1)
{
	func_6(&(uParam0->f_8));
	uParam0->f_8 = -1;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_40 = 3;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	if (unk_0x7DA173D4FD42F36B(uParam0->f_26, 0))
	{
		unk_0x99BCB15F954AF579(&(uParam0->f_26), 0);
	}
	if (unk_0x7DA173D4FD42F36B(uParam0->f_26, 1))
	{
		unk_0x99BCB15F954AF579(&(uParam0->f_26), 1);
	}
	if (unk_0x7DA173D4FD42F36B(uParam0->f_26, 2))
	{
		unk_0x99BCB15F954AF579(&(uParam0->f_26), 2);
	}
	if (bParam1)
	{
		if (unk_0xC1EDB61CE0A4B94E(uParam0->f_1))
		{
			unk_0xF30CBC00D9F6D48D(&(uParam0->f_1));
		}
		unk_0x0DBF9B65543A44DC("ShopUI_Title_Exec_VechUpgrade");
	}
	*uParam0 = 0;
}

void func_210(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x111736C2C9FCA3D0(uParam0->f_25);
	if (iVar0 >= 0)
	{
		if (unk_0x4958900440DDE4E4(iVar0))
		{
			if (unk_0x3B5FD456D45F2AAE(iVar0) >= 0.99f)
			{
				func_60(unk_0xE0BDAFA1A39552D6(), 1, 0);
				unk_0x1F6717C33A02B7AC(unk_0x06736567F820A39E());
				*uParam0 = 5;
			}
		}
	}
}

int func_211(var uParam0)
{
	if (!unk_0x7DA173D4FD42F36B(uParam0->f_26, 2))
	{
		uParam0->f_25 = unk_0xC2F899BFC87B57E7(uParam0->f_27, uParam0->f_27.f_3, 2, 1, 0, 1065353216, 0, 1065353216);
		unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), uParam0->f_25, uParam0->f_39, "exit", 1.5f, -1.5f, 13, 16, 1.5f, 0);
		unk_0x2D818F2925754469(uParam0->f_25);
		unk_0xE27C8E42A97895CF(&(uParam0->f_26), 2);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_212(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_214(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17257.f_7894)
	{
		unk_0x3DFBDB0A85A67077(15);
		Global_17257.f_7894 = 0;
	}
	unk_0x681D62E6F663F7E0(0f);
	if (Global_17257.f_5498[iVar0])
	{
		unk_0x035F40534E3C26BD(9, 0);
		Global_17257.f_5498[iVar0] = 0;
	}
	if (Global_17257.f_5484[iVar0])
	{
		unk_0x0DBF9B65543A44DC("CommonMenu");
		Global_17257.f_5484[iVar0] = 0;
	}
	if (Global_17257.f_5491[iVar0])
	{
		unk_0x0DBF9B65543A44DC("MPShopSale");
		Global_17257.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_213(&(Global_17257.f_5530[iVar0 /*10*/]));
		Global_17257.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17257.f_5591[iVar0] = 0;
	}
}

void func_213(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x6A87921801178186(*uParam0))
		{
			unk_0x0E4537BE1D04DAC7(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_214(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x17CC0D5008835470() && unk_0x992E302DC36A4251())
		{
			iParam2 = unk_0xE56012EB15CF2833();
		}
	}
	StringCopy(&cVar0, unk_0x47B34031F915C179(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x9F7CDE7B20BCB675(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17257.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_215(var uParam0)
{
	func_312(uParam0);
	func_311(uParam0);
	func_301(&(uParam0->f_9), &(uParam0->f_23));
	if (func_318(0, -1, 0))
	{
		if (uParam0->f_21)
		{
			func_280(uParam0);
			uParam0->f_21 = 0;
		}
		else
		{
			func_279(uParam0->f_23, 1, 1);
		}
		func_241(uParam0);
		func_216(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (*uParam0 != 3)
		{
			func_212(1, -1);
		}
	}
}

void func_216(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_214(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_238(0, bParam6))
	{
		return;
	}
	unk_0xF2C2AA10F5F1DDB2(76, 84);
	unk_0x44D592DED3924902(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_236(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17257 = 0;
		}
	}
	if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_1)) == unk_0x9F7CDE7B20BCB675("HIDE"))
	{
		fVar56 = Global_17255;
	}
	else
	{
		fVar56 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17256;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		unk_0x4C6D647F0AAA9B5B(&iVar57, &iVar58);
		fVar60 = unk_0x5050DF014C100DFF(0);
		if (func_235())
		{
			iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) * fVar60));
		}
		fVar61 = (unk_0xBBDA792448DB5A89(iVar57) / unk_0xBBDA792448DB5A89(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_235())
		{
			fVar59 = 1f;
		}
		iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar57) / fVar59));
		iVar58 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) / fVar59));
	}
	else
	{
		unk_0x50BF5AC65F0CC3B4(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5598)
		{
			if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_1)) == unk_0x9F7CDE7B20BCB675("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					unk_0x35CAAB894D008C00(func_234(29), func_232(29, 1), (Global_17254 + (fParam5 * 0.5f)), (Global_17255 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7864)
				{
					iVar1 = Global_17257.f_7860;
					iVar2 = Global_17257.f_7861;
					iVar3 = Global_17257.f_7862;
					iVar4 = Global_17257.f_7863;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_231(Global_17254, (Global_17255 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
				if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_1)) != 0)
				{
					func_230();
					unk_0x049CCB8537E77D8B(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							unk_0xD92C45283BCDA624(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							unk_0xCB4A32D75D69162C(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							unk_0x4C5D86B5B659C953(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							unk_0x4C5D86B5B659C953(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							unk_0x9C174A0D56FFB64A(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							unk_0x4C5D86B5B659C953(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							unk_0x9C174A0D56FFB64A(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xBF7878373D9EA4E7((Global_17254 + 0.00390625f), ((Global_17255 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17257.f_5601 > Global_17257.f_5095)
				{
					if (Global_17257.f_5604 != 0)
					{
						func_230();
						func_228((((Global_17254 + fParam5) - 0.00390625f) - func_229("CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603)), ((Global_17255 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603);
					}
				}
			}
			iVar6 = Global_17257.f_5605;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7874)
			{
				iVar1 = Global_17257.f_7870;
				iVar2 = Global_17257.f_7871;
				iVar3 = Global_17257.f_7872;
				iVar4 = Global_17257.f_7873;
			}
			else
			{
				unk_0xD06A5371300291A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5095 && iVar6 <= Global_17257.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5355[iVar6])
					{
						if (Global_17257.f_5226[iVar6] && iVar6 != Global_17257.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17257.f_5088 <= 1)
					{
						Global_17257.f_5088++;
					}
					iVar52 = 1;
				}
			}
			unk_0x35CAAB894D008C00("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5601 > Global_17257.f_5095)
			{
				if (Global_17257.f_7879)
				{
					iVar1 = Global_17257.f_7875;
					iVar2 = Global_17257.f_7876;
					iVar3 = Global_17257.f_7877;
					iVar4 = Global_17257.f_7878;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_231(Global_17254, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0xDD8A228E30DDC5CF("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17257.f_7892)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xD06A5371300291A8(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x35CAAB894D008C00("CommonMenu", "shop_arrows_upANDdown", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar59), ((Var37.f_1 / 720f) * fVar59), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_4562)) != 0 && Global_17257.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_17257.f_4638 != 0)
				{
					func_236(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_227(fVar41);
				unk_0x60AE73633EFC8075(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						unk_0xD92C45283BCDA624(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						unk_0xCB4A32D75D69162C(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						unk_0x4C5D86B5B659C953(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						unk_0x9C174A0D56FFB64A(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						unk_0x4C5D86B5B659C953(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						unk_0x9C174A0D56FFB64A(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xB6CF857C474AB165(fVar41, (fVar49 + 0.00277776f));
				unk_0xD06A5371300291A8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_231(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7884)
				{
					iVar1 = Global_17257.f_7880;
					iVar2 = Global_17257.f_7881;
					iVar3 = Global_17257.f_7882;
					iVar4 = Global_17257.f_7883;
				}
				else
				{
					unk_0xD06A5371300291A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x35CAAB894D008C00("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xC615314B52B8C80D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC615314B52B8C80D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_227(fVar41);
				unk_0x049CCB8537E77D8B(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						unk_0xD92C45283BCDA624(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						unk_0xCB4A32D75D69162C(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						unk_0x4C5D86B5B659C953(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						unk_0x9C174A0D56FFB64A(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						unk_0x4C5D86B5B659C953(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						unk_0x9C174A0D56FFB64A(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 8)
					{
						unk_0x4C5D86B5B659C953(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xBF7878373D9EA4E7(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17257.f_4638 != 0)
				{
					func_236(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_226(Global_17257.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0x35CAAB894D008C00(func_234(Global_17257.f_4638), func_232(Global_17257.f_4638, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xC615314B52B8C80D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17257.f_4636 > 0)
				{
					if ((unk_0x1ADBAAC322D61F73() - Global_17257.f_4637) > Global_17257.f_4636)
					{
						StringCopy(&(Global_17257.f_4562), "", 16);
						Global_17257.f_4636 = -1;
					}
				}
			}
			if (unk_0x9F7CDE7B20BCB675(&(Global_2566711.f_21)) != 0 && Global_2566711.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_2566711.f_67 != 0)
				{
					func_236(Global_2566711.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_227(fVar41);
				unk_0x60AE73633EFC8075(&(Global_2566711.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2566711.f_61)
				{
					if (Global_2566711.f_25[iVar14] == 2)
					{
						unk_0xD92C45283BCDA624(Global_2566711.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2566711.f_25[iVar14] == 3)
					{
						unk_0xCB4A32D75D69162C(Global_2566711.f_34[iVar16], Global_2566711.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2566711.f_25[iVar14] == 1)
					{
						unk_0x4C5D86B5B659C953(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 5)
					{
						unk_0x9C174A0D56FFB64A(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 6)
					{
						unk_0x4C5D86B5B659C953(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 7)
					{
						unk_0x9C174A0D56FFB64A(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 8)
					{
						unk_0x4C5D86B5B659C953(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xB6CF857C474AB165(fVar41, (fVar49 + 0.00277776f));
				unk_0xD06A5371300291A8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_231(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7884)
				{
					iVar1 = Global_17257.f_7880;
					iVar2 = Global_17257.f_7881;
					iVar3 = Global_17257.f_7882;
					iVar4 = Global_17257.f_7883;
				}
				else
				{
					unk_0xD06A5371300291A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x35CAAB894D008C00("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xC615314B52B8C80D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC615314B52B8C80D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_227(fVar41);
				unk_0x049CCB8537E77D8B(&(Global_2566711.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2566711.f_61)
				{
					if (Global_2566711.f_25[iVar14] == 2)
					{
						unk_0xD92C45283BCDA624(Global_2566711.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2566711.f_25[iVar14] == 3)
					{
						unk_0xCB4A32D75D69162C(Global_2566711.f_34[iVar16], Global_2566711.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2566711.f_25[iVar14] == 1)
					{
						unk_0x4C5D86B5B659C953(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 8)
					{
						unk_0x4C5D86B5B659C953(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 5)
					{
						unk_0x9C174A0D56FFB64A(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 6)
					{
						unk_0x4C5D86B5B659C953(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 7)
					{
						unk_0x9C174A0D56FFB64A(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xBF7878373D9EA4E7(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2566711.f_67 != 0)
				{
					func_236(Global_2566711.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_226(Global_2566711.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0x35CAAB894D008C00(func_234(Global_2566711.f_67), func_232(Global_2566711.f_67, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xC615314B52B8C80D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2566711.f_65 > 0)
				{
					if ((unk_0x1ADBAAC322D61F73() - Global_2566711.f_66) > Global_2566711.f_65)
					{
						StringCopy(&(Global_2566711.f_21), "", 16);
						Global_2566711.f_65 = -1;
					}
				}
			}
			func_223(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xF2C2AA10F5F1DDB2(76, 84);
			unk_0x44D592DED3924902(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17257.f_5088;
			if (Global_17257.f_5599)
			{
				iVar63 = (Global_17257.f_5602 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5612[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5612[iVar6];
				}
				if (Global_17257.f_5599)
				{
					iVar6 = Global_17257.f_7520[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17257.f_5605 && iVar9 < Global_17257.f_5095)
				{
					bVar32 = true;
					if (Global_17257.f_5606 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17257.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17254 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17257.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7886)
					{
						unk_0xD06A5371300291A8(Global_17257.f_7885, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0xD06A5371300291A8(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0x35CAAB894D008C00("CommonMenu", "Gradient_Nav", (Global_17254 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5744 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_221(bVar31, 1, 0, 0, 0, 0);
					unk_0x049CCB8537E77D8B("DFLT_MNU_OPT");
					unk_0xBF7878373D9EA4E7(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17257.f_5096)
					{
						if (unk_0x7DA173D4FD42F36B(Global_17257.f_4959[iVar6], iVar8) || Global_17257.f_4926[iVar8] == 5)
						{
							if (Global_17257.f_5599)
							{
								iVar19 = Global_17257.f_7531[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar20 = Global_17257.f_7572[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar21 = Global_17257.f_7613[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar22 = Global_17257.f_7654[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar23 = Global_17257.f_7695[((iVar9 * Global_17257.f_5096) + iVar8)];
							}
							else
							{
								Global_17257.f_7531[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar19;
								Global_17257.f_7572[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar20;
								Global_17257.f_7613[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar21;
								Global_17257.f_7654[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar22;
								Global_17257.f_7695[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17257.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5875[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5875[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17254 + 0.0046875f) + Global_17257.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17257.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17257.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17254 + Global_17256) - 0.0046875f) - fVar33);
							}
							if ((Global_17257.f_4945[iVar8] && Global_17257.f_5741) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17257.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_221(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, iVar70, bVar50);
												unk_0x9974146F2F7730D1(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C5D86B5B659C953(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C5D86B5B659C953(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9C174A0D56FFB64A(&(Global_2444596[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C5D86B5B659C953(&(Global_2444596[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9C174A0D56FFB64A(&(Global_2444596[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xD92C45283BCDA624(Global_17257.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xCB4A32D75D69162C(Global_17257.f_4175[(iVar21 + iVar27)], Global_17257.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0x4D3BCE911B81A969(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_236(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17257.f_4433[(iVar22 + iVar14)] == 2 || Global_17257.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7777[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
											Global_17257.f_7818[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7777[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar43 = Global_17257.f_7818[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_236(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_236(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_226(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x35CAAB894D008C00(func_234(26), func_232(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_236(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_236(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_226(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x35CAAB894D008C00(func_234(27), func_232(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_221(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, bVar50);
											if (Global_17257.f_7890 && Global_17257.f_7891 == iVar6)
											{
												func_220(bVar31);
											}
											unk_0x049CCB8537E77D8B(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C5D86B5B659C953(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C5D86B5B659C953(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9C174A0D56FFB64A(&(Global_2444596[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C5D86B5B659C953(&(Global_2444596[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9C174A0D56FFB64A(&(Global_2444596[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD92C45283BCDA624(Global_17257.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xCB4A32D75D69162C(Global_17257.f_4175[(iVar21 + iVar27)], Global_17257.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4433[(iVar22 + iVar28)] == 2 || Global_17257.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_236(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_236(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_226(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4953[iVar8] == 2)
															{
																unk_0x35CAAB894D008C00(func_234(Global_17257.f_4433[(iVar22 + iVar28)]), func_232(Global_17257.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0x35CAAB894D008C00(func_234(Global_17257.f_4433[(iVar22 + iVar28)]), func_232(Global_17257.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4953[iVar8] == 2)
											{
												unk_0xBF7878373D9EA4E7(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0xBF7878373D9EA4E7((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4433[(iVar22 + iVar14)] != 2 && Global_17257.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_236(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_236(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_226(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x35CAAB894D008C00(func_234(Global_17257.f_4433[(iVar22 + iVar14)]), func_232(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), (Global_17254 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4953[iVar8] == 2)
															{
																unk_0x35CAAB894D008C00(func_234(Global_17257.f_4433[(iVar22 + iVar14)]), func_232(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0x35CAAB894D008C00(func_234(Global_17257.f_4433[(iVar22 + iVar14)]), func_232(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_221(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7890 && Global_17257.f_7891 == iVar6)
											{
												func_220(bVar31);
											}
											unk_0x9974146F2F7730D1("NUMBER");
											unk_0xD92C45283BCDA624(Global_17257.f_3918[iVar20]);
											fVar42 = unk_0x4D3BCE911B81A969(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7777[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7777[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_236(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_236(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_226(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x35CAAB894D008C00(func_234(26), func_232(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_236(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_236(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_226(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x35CAAB894D008C00(func_234(27), func_232(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_221(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
										func_219((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_221(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7890 && Global_17257.f_7891 == iVar6)
											{
												func_220(bVar31);
											}
											unk_0x9974146F2F7730D1("NUMBER");
											unk_0xCB4A32D75D69162C(Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
											fVar42 = unk_0x4D3BCE911B81A969(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7777[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7777[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_236(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_236(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_226(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x35CAAB894D008C00(func_234(26), func_232(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_236(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_236(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_226(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x35CAAB894D008C00(func_234(27), func_232(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_221(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
										func_218((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_236(Global_17257.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17257.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17257.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
												Global_17257.f_7818[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)];
												fVar43 = Global_17257.f_7818[((iVar9 * Global_17257.f_5096) + iVar8)];
											}
											if (bVar51)
											{
												if (func_236(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17257.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_236(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_226(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0x35CAAB894D008C00(func_234(26), func_232(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_236(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_236(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_226(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0x35CAAB894D008C00(func_234(27), func_232(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_236(Global_17257.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_226(Global_17257.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0x35CAAB894D008C00(func_234(Global_17257.f_4433[iVar22]), func_232(Global_17257.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_217(Global_17257.f_4433[iVar22])), (fVar36 * func_217(Global_17257.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17257.f_4926[iVar8] == 5)
							{
								if (Global_17257.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
								if (Global_17257.f_4945[iVar8])
								{
									if (func_236(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17257.f_7520[iVar9] = iVar6;
						Global_17257.f_5607 = iVar6;
						iVar9++;
						if (Global_17257.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17257.f_5612[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17257.f_5598)
					{
						Global_17257.f_5355[iVar6] = 1;
						if (Global_17257.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17257.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17257.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5598)
			{
				Global_17257.f_5600 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17257.f_5603 = iVar11;
				Global_17257.f_5601 = iVar10;
				Global_17257.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5599)
	{
		Global_17257.f_5602 = iVar9;
		Global_17257.f_5599 = 1;
	}
	Global_17257.f_5743 = fVar49;
	Global_17257.f_5745 = unk_0x1ADBAAC322D61F73();
	unk_0x681D62E6F663F7E0(Global_17257.f_5743);
	if (!Global_17257.f_7859)
	{
		func_177();
	}
	Global_17257.f_7859 = 0;
	if (bParam2)
	{
		unk_0x9AD5FF38501E64A6(10);
	}
	unk_0x9AD5FF38501E64A6(6);
	unk_0x9AD5FF38501E64A6(7);
	unk_0x9AD5FF38501E64A6(9);
	unk_0x9AD5FF38501E64A6(8);
	if (bParam0)
	{
		func_137(1);
	}
	unk_0x50E2186E0E0244C6();
}

float func_217(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_218(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x049CCB8537E77D8B(sParam2);
	unk_0xCB4A32D75D69162C(uParam3, uParam4);
	unk_0xBF7878373D9EA4E7(fParam0, fParam1, 0);
}

void func_219(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x049CCB8537E77D8B(sParam2);
	unk_0xD92C45283BCDA624(iParam3);
	unk_0xBF7878373D9EA4E7(fParam0, fParam1, iParam4);
}

void func_220(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xD06A5371300291A8(Global_17257.f_7887[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xD06A5371300291A8(Global_17257.f_7887[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, 255);
}

void func_221(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_222(Global_17257.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xD06A5371300291A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xD06A5371300291A8(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xD06A5371300291A8(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x0D1D7FED407C809B(155, 155, 155, 255);
		}
		else
		{
			unk_0x0D1D7FED407C809B(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x0D1D7FED407C809B(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xD06A5371300291A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x0D1D7FED407C809B(155, 155, 155, 255);
	}
	else
	{
		unk_0x0D1D7FED407C809B(155, 155, 155, 255);
	}
	unk_0xE885E03E7032CE54(0f, 0.35f);
	unk_0x5B16E11B05BF6A76(1);
	if (bParam5)
	{
		unk_0xE885E03E7032CE54(0f, 0.425f);
		unk_0xC5AD19EFC0358776(4);
	}
	else
	{
		unk_0xC5AD19EFC0358776(0);
	}
	unk_0x12CC1234B1B7BFC5(0f, 1f);
	unk_0x85221773A398B339(0);
	unk_0x8A3F04304575D6B1(0, 0, 0, 0, 0);
	unk_0x0E14ECE9ADDF3B75(0, 0, 0, 0, 0);
}

void func_222(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_223(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_214(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_238(bParam4, bParam8))
	{
		return;
	}
	if (func_224())
	{
		return;
	}
	if (unk_0x28E650D9BD8DC870())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_73(unk_0xE0BDAFA1A39552D6(), 0))
		{
			return;
		}
	}
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0xB2E6456B1BD1C186() == 0 || unk_0x28E650D9BD8DC870())
		{
			return;
		}
	}
	if (Global_17257.f_4639 != 0)
	{
		if (unk_0x6FA5125835DABC72(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4639)
			{
				if (Global_17257.f_4896[iVar1] != 345)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), unk_0xB1C8DCF6DB548BFD(2, Global_17257.f_4896[iVar1], 1), 64);
				}
				else if (Global_17257.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), unk_0x120C6DB43AE50AE1(2, Global_17257.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17257.f_4640 = 0;
		}
		if (!Global_17257.f_4640)
		{
			unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE97F1B22C5E8989F();
			unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xB62735E5BEC5ABF8((1f - (Global_17257.f_4951 / 100f)));
			unk_0xE97F1B22C5E8989F();
			if (unk_0x55812CD5A331E1F8())
			{
				unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x504EDFAAB39BF764(1);
				unk_0xE97F1B22C5E8989F();
			}
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4639)
			{
				if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_4834[iVar1 /*4*/])) != unk_0x9F7CDE7B20BCB675("PREV"))
				{
					unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x7AF283DA3BA078CD(iVar1);
					func_142(&(Global_17257.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x9F7CDE7B20BCB675(&(Global_17257.f_4834[iVar2 /*4*/])) == unk_0x9F7CDE7B20BCB675("PREV"))
					{
						func_142(&(Global_17257.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4883[iVar1] == -1)
					{
						func_141(&(Global_17257.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x7291E2F821FCFC04(&(Global_17257.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x474EBA999C39492E(iParam2, 70);
						}
						else
						{
							unk_0xD92C45283BCDA624(iParam2);
						}
						unk_0xD6360E18957BCDD3();
					}
					if (unk_0x55812CD5A331E1F8())
					{
						if (Global_17257.f_4896[iVar1] != 345 && unk_0x7DA173D4FD42F36B(Global_17257.f_4922, iVar1))
						{
							unk_0x504EDFAAB39BF764(1);
							unk_0x7AF283DA3BA078CD(Global_17257.f_4896[iVar1]);
						}
						else
						{
							unk_0x504EDFAAB39BF764(0);
							unk_0x7AF283DA3BA078CD(345);
						}
					}
					unk_0xE97F1B22C5E8989F();
				}
				iVar1++;
			}
			if (unk_0x9F7CDE7B20BCB675(&(Global_2566711.f_16)) != unk_0x9F7CDE7B20BCB675(""))
			{
				unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x7AF283DA3BA078CD(Global_17257.f_4639);
				func_142(&Global_2566711);
				if (Global_2566711.f_20 == -1)
				{
					func_141(&(Global_2566711.f_16));
				}
				else
				{
					unk_0x7291E2F821FCFC04(&(Global_2566711.f_16));
					if (bParam5)
					{
						unk_0x474EBA999C39492E(iParam2, 70);
					}
					else
					{
						unk_0xD92C45283BCDA624(iParam2);
					}
					unk_0xD6360E18957BCDD3();
				}
				unk_0xE97F1B22C5E8989F();
			}
			unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x7AF283DA3BA078CD(0);
			unk_0x7AF283DA3BA078CD(0);
			unk_0x7AF283DA3BA078CD(0);
			unk_0x7AF283DA3BA078CD(80);
			unk_0xE97F1B22C5E8989F();
			unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4952)
			{
				unk_0x7AF283DA3BA078CD(1);
			}
			else
			{
				unk_0x7AF283DA3BA078CD(0);
			}
			unk_0xE97F1B22C5E8989F();
			Global_17257.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17257.f_4639)
		{
			if (Global_17257.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x7AF283DA3BA078CD(iVar1);
					unk_0x7291E2F821FCFC04(&(Global_17257.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x474EBA999C39492E(iParam2, 70);
					}
					else
					{
						unk_0xD92C45283BCDA624(iParam2);
					}
					unk_0xD6360E18957BCDD3();
					unk_0xE97F1B22C5E8989F();
				}
			}
			iVar1++;
		}
		if (Global_2566711.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x7AF283DA3BA078CD(iVar1);
				unk_0x7291E2F821FCFC04(&(Global_2566711.f_16));
				if (bParam5)
				{
					unk_0x474EBA999C39492E(iParam2, 70);
				}
				else
				{
					unk_0xD92C45283BCDA624(iParam2);
				}
				unk_0xD6360E18957BCDD3();
				unk_0xE97F1B22C5E8989F();
			}
		}
		unk_0xF2C2AA10F5F1DDB2(76, 66);
		unk_0x44D592DED3924902(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17257.f_7894)
			{
				unk_0x038CBA517D66D25E(15, 0f, -0.0375f);
				Global_17257.f_7894 = 1;
			}
		}
		else if (Global_17257.f_7894)
		{
			unk_0x3DFBDB0A85A67077(15);
			Global_17257.f_7894 = 0;
		}
		unk_0x50E2186E0E0244C6();
		if (Global_17257.f_4925)
		{
			unk_0xF2C2AA10F5F1DDB2(82, 66);
			unk_0x44D592DED3924902(0f, 0f, 0f, 0f);
			unk_0x85DC3CB6F30C7FE7(Global_17257.f_5530[iVar0 /*10*/], Global_17257.f_4923, Global_17257.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x50E2186E0E0244C6();
		}
		else
		{
			unk_0xA5C0BA1772140603(Global_17257.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

int func_224()
{
	struct<3> Var0;
	
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	if (func_225())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x3919EC2F8BB0A522(&Var0);
		if (Global_14358 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_225()
{
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_226(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0xD06A5371300291A8(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_227(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xD06A5371300291A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xC5AD19EFC0358776(0);
	unk_0xE885E03E7032CE54(0f, 0.35f);
	unk_0xF734D47C5786C762(2);
	unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, iVar3);
	unk_0x12CC1234B1B7BFC5(fParam0, ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x85221773A398B339(0);
	unk_0x8A3F04304575D6B1(0, 0, 0, 0, 0);
	unk_0x0E14ECE9ADDF3B75(0, 0, 0, 0, 0);
}

void func_228(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x049CCB8537E77D8B(sParam2);
	unk_0xD92C45283BCDA624(uParam3);
	unk_0xD92C45283BCDA624(uParam4);
	unk_0xBF7878373D9EA4E7(fParam0, fParam1, 0);
}

float func_229(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x60D87DA27F70EBBC(sParam0))
	{
		if (unk_0x9F7CDE7B20BCB675(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_230();
	unk_0x9974146F2F7730D1(sParam0);
	unk_0xD92C45283BCDA624(uParam1);
	unk_0xD92C45283BCDA624(uParam2);
	return unk_0x4D3BCE911B81A969(1);
}

void func_230()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xD06A5371300291A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7869)
	{
		iVar0 = Global_17257.f_7865;
		iVar1 = Global_17257.f_7866;
		iVar2 = Global_17257.f_7867;
		iVar3 = Global_17257.f_7868;
	}
	unk_0xC5AD19EFC0358776(0);
	unk_0xE885E03E7032CE54(0f, 0.35f);
	unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, iVar3);
	unk_0x12CC1234B1B7BFC5((Global_17254 + 0.0046875f), ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x85221773A398B339(0);
	unk_0x8A3F04304575D6B1(0, 0, 0, 0, 0);
	unk_0x0E14ECE9ADDF3B75(0, 0, 0, 0, 0);
}

void func_231(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xF2277E9F99F5ECC1((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_232(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0x226FA58470A21AEF(&(Global_17257.f_6703[iParam0 /*16*/])))
	{
		return func_233(&(Global_17257.f_6703[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_233(var uParam0)
{
	return uParam0;
}

char* func_234(int iParam0)
{
	if (!unk_0x226FA58470A21AEF(&(Global_17257.f_5886[iParam0 /*16*/])))
	{
		return func_233(&(Global_17257.f_5886[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_235()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x4C6D647F0AAA9B5B(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_234(iParam0);
	uVar1 = func_232(iParam0, bParam1);
	if (unk_0x9F7CDE7B20BCB675(uVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x4C6D647F0AAA9B5B(&iVar2, &iVar3);
			fVar5 = unk_0x5050DF014C100DFF(0);
			if (func_235())
			{
				iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar5));
			}
			fVar6 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_235())
			{
				fVar4 = 1f;
			}
			if (unk_0x98934607F8D0FB03(joaat("director_mode")) > 0)
			{
				unk_0x50BF5AC65F0CC3B4(&iVar2, &iVar3);
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0x50BF5AC65F0CC3B4(&iVar2, &iVar3);
		}
		Var7 = { unk_0xDD8A228E30DDC5CF(uVar0, sVar1) };
		Var7.f_0 = (Var7.f_0 * (func_237(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_237(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.f_0 = (Var7.f_0 - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.f_0 = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x62FCA7A01B5D2726() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17256)
			{
				*fParam4 = (*fParam4 * (Global_17256 / *fParam3));
				*fParam3 = Global_17256;
			}
		}
		return 1;
	}
	return 0;
}

float func_237(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_238(bool bParam0, bool bParam1)
{
	if (Global_2428549.f_1378.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xDF916BCF4D39E8C2() || (func_240(8, -1) && func_239() != 64)) || (unk_0x0FDDFFBD775C7598() != 0 && !bParam1)) || (unk_0xAD79840A082ADD7F() && !bParam0)) || unk_0x8F805F2A5D16C0F9()) || Global_69781) || Global_17257.f_7893) || unk_0x526F2ADD5C54B89E()) || Global_91362.f_1352)
	{
		return 0;
	}
	return 1;
}

int func_239()
{
	return Global_1315846;
}

bool func_240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0x7DA173D4FD42F36B(Global_1338622.f_949, iParam0);
}

void func_241(var uParam0)
{
	switch (uParam0->f_40)
	{
		case 3:
			func_278(uParam0);
			break;
		
		default:
			func_245(uParam0);
			break;
	}
	if (uParam0->f_21 == 0)
	{
		func_242(uParam0);
	}
	unk_0x9AD5FF38501E64A6(7);
	unk_0x9AD5FF38501E64A6(8);
	unk_0x9AD5FF38501E64A6(9);
}

void func_242(var uParam0)
{
	var uVar0;
	
	uVar0 = func_244();
	switch (uParam0->f_40)
	{
		case 3:
			if (uParam0->f_23 == 0)
			{
				func_243("WAR_VEH_DES_M1", 0, 0);
			}
			else if (uParam0->f_23 == 1)
			{
				func_243("WAR_VEH_DES_M2", 0, 0);
			}
			else if (uParam0->f_23 == 2)
			{
				func_243("WAR_VEH_DES_M3", 0, 0);
			}
			break;
		
		case 2:
			if (uParam0->f_23 == 0)
			{
				if (unk_0x7DA173D4FD42F36B(uVar0, 0))
				{
					func_243("WAR_UPG_PURC", 0, 0);
				}
				else if (Global_262145.f_12928)
				{
					func_243("PM_INF_QMF5", 0, 0);
				}
				else
				{
					func_243("WAR_VEH_DES_I5", 0, 0);
				}
			}
			else if (unk_0x7DA173D4FD42F36B(uVar0, 1))
			{
				func_243("WAR_UPG_PURC", 0, 0);
			}
			else if (Global_262145.f_12931)
			{
				func_243("PM_INF_QMF5", 0, 0);
			}
			else
			{
				func_243("WAR_VEH_DES_I6", 0, 0);
			}
			break;
		
		case 1:
			if (uParam0->f_23 == 0)
			{
				if (unk_0x7DA173D4FD42F36B(uVar0, 2))
				{
					func_243("WAR_UPG_PURC", 0, 0);
				}
				else if (Global_262145.f_12926)
				{
					func_243("PM_INF_QMF5", 0, 0);
				}
				else
				{
					func_243("WAR_VEH_DES_I3", 0, 0);
				}
			}
			else if (unk_0x7DA173D4FD42F36B(uVar0, 3))
			{
				func_243("WAR_UPG_PURC", 0, 0);
			}
			else if (Global_262145.f_12929)
			{
				func_243("PM_INF_QMF5", 0, 0);
			}
			else
			{
				func_243("WAR_VEH_DES_I4", 0, 0);
			}
			break;
		
		case 0:
			if (uParam0->f_23 == 0)
			{
				if (unk_0x7DA173D4FD42F36B(uVar0, 4))
				{
					func_243("WAR_UPG_PURC", 0, 0);
				}
				else if (Global_262145.f_12927)
				{
					func_243("PM_INF_QMF5", 0, 0);
				}
				else
				{
					func_243("WAR_VEH_DES_I1", 0, 0);
				}
			}
			else if (unk_0x7DA173D4FD42F36B(uVar0, 5))
			{
				func_243("WAR_UPG_PURC", 0, 0);
			}
			else if (Global_262145.f_12930)
			{
				func_243("PM_INF_QMF5", 0, 0);
			}
			else
			{
				func_243("WAR_VEH_DES_I2", 0, 0);
			}
			break;
	}
}

void func_243(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_4562), sParam0, 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = iParam1;
	Global_17257.f_4637 = unk_0x1ADBAAC322D61F73();
	Global_17257.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
}

var func_244()
{
	return Global_2497728[func_75()];
}

void func_245(var uParam0)
{
	bool bVar0;
	
	bVar0 = true;
	if ((((unk_0x3DC360442A11BB38() || unk_0xEC7F443A30E4E89C()) || unk_0x526F2ADD5C54B89E()) || unk_0x28E650D9BD8DC870()) || Global_91362.f_1352)
	{
		bVar0 = false;
	}
	if (((bVar0 && unk_0xD471C64C0898A7BF(2, 201)) || (bVar0 && uParam0->f_9.f_6)) || iLocal_2436 != 0)
	{
		if (unk_0xA375C016C5FB1DDD(func_277(uParam0->f_40, uParam0->f_23), 0, 0, 1, -1) == 0 || func_276(uParam0->f_40, uParam0->f_23))
		{
			if (unk_0xA375C016C5FB1DDD(func_277(uParam0->f_40, uParam0->f_23), 0, 0, 1, -1) == 0)
			{
				func_274(unk_0x9F7CDE7B20BCB675(func_275(uParam0->f_40, uParam0->f_23)), func_277(uParam0->f_40, uParam0->f_23), 0);
				func_267(0, 10, 3);
			}
			unk_0x962E604CCA53388F(-1, "ERROR", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		}
		else if (unk_0xA375C016C5FB1DDD(func_277(uParam0->f_40, uParam0->f_23), 0, 0, 1, -1) || iLocal_2436 != 0)
		{
			if (!func_276(uParam0->f_40, uParam0->f_23))
			{
				func_248(uParam0);
			}
		}
		uParam0->f_21 = 1;
		uParam0->f_20 = 0;
	}
	else if (!bVar0)
	{
	}
	else if (unk_0xD471C64C0898A7BF(2, 202) || uParam0->f_9.f_7)
	{
		uParam0->f_23 = uParam0->f_40;
		uParam0->f_40 = 3;
		uParam0->f_21 = 1;
		unk_0x962E604CCA53388F(-1, "BACK", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		uParam0->f_20 = 0;
		uParam0->f_24 = func_247();
	}
	else if ((unk_0xD471C64C0898A7BF(2, 188) && func_246(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)) || (uParam0->f_9.f_8 && func_246(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)))
	{
		if (uParam0->f_9.f_4 > 0)
		{
			uParam0->f_23 = (uParam0->f_23 - 1);
			if (uParam0->f_23 < 0)
			{
				uParam0->f_23 = 1;
			}
			func_279(uParam0->f_23, 1, 1);
			unk_0x962E604CCA53388F(-1, "NAV_UP_DOWN", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		}
	}
	else if ((unk_0xD471C64C0898A7BF(2, 187) && func_246(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)) || (uParam0->f_9.f_9 && func_246(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)))
	{
		if (uParam0->f_9.f_4 < 0)
		{
			uParam0->f_23++;
			if (uParam0->f_23 > 1)
			{
				uParam0->f_23 = 0;
			}
			func_279(uParam0->f_23, 1, 1);
			unk_0x962E604CCA53388F(-1, "NAV_UP_DOWN", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		}
	}
}

int func_246(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 150;
	if (bParam2)
	{
		if (((unk_0x7A4571218C06A722(2, 188) || unk_0x8482814342BB3160(2, 219) < -0.3f) || unk_0x7A4571218C06A722(2, 241)) || unk_0xD471C64C0898A7BF(2, 188))
		{
			if (unk_0x7A4571218C06A722(2, 241))
			{
				iVar1 = 100;
			}
			if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(*uParam0, unk_0x201D90648B2AE3CE())) > iVar1)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (((unk_0x7A4571218C06A722(2, 187) || unk_0x8482814342BB3160(2, 219) > 0.3f) || unk_0x7A4571218C06A722(2, 242)) || unk_0xD471C64C0898A7BF(2, 187))
		{
			if (unk_0x7A4571218C06A722(2, 242))
			{
				iVar1 = 100;
			}
			if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(*uParam0, unk_0x201D90648B2AE3CE())) > iVar1)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	else
	{
		if ((unk_0x7A4571218C06A722(2, 190) || unk_0x8482814342BB3160(2, 218) > 0.3f) || unk_0xCE4A7178C782F52B(2, 201))
		{
			if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(*uParam0, unk_0x201D90648B2AE3CE())) > iVar1)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (unk_0x7A4571218C06A722(2, 189) || unk_0x8482814342BB3160(2, 218) < -0.3f)
		{
			if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(*uParam0, unk_0x201D90648B2AE3CE())) > iVar1)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	return iVar0;
}

var func_247()
{
	return Global_17257.f_5605;
}

int func_248(var uParam0)
{
	bool bVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = true;
	if (func_266())
	{
		bVar0 = false;
		uVar1 = func_265(uParam0->f_40, uParam0->f_23);
		iVar2 = func_277(uParam0->f_40, uParam0->f_23);
		if (func_249(-1829708865, 537254313, uVar1, 1, iVar2, &iLocal_2436, func_264(uParam0->f_40, uParam0->f_23), unk_0x9F7CDE7B20BCB675(func_275(uParam0->f_40, uParam0->f_23))))
		{
			if (iLocal_2436 == 2)
			{
				bVar0 = true;
			}
			iLocal_2436 = 0;
		}
	}
	if (bVar0)
	{
		unk_0x962E604CCA53388F(-1, "Purchase_Upgrade", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		uVar3 = func_244();
		if (uParam0->f_40 == 2)
		{
			if (uParam0->f_23 == 0)
			{
				unk_0xE27C8E42A97895CF(&uVar3, 0);
			}
			else
			{
				unk_0xE27C8E42A97895CF(&uVar3, 1);
			}
		}
		else if (uParam0->f_40 == 1)
		{
			if (uParam0->f_23 == 0)
			{
				unk_0xE27C8E42A97895CF(&uVar3, 2);
			}
			else
			{
				unk_0xE27C8E42A97895CF(&uVar3, 3);
			}
		}
		else if (uParam0->f_40 == 0)
		{
			if (uParam0->f_23 == 0)
			{
				unk_0xE27C8E42A97895CF(&uVar3, 4);
			}
			else
			{
				unk_0xE27C8E42A97895CF(&uVar3, 5);
			}
		}
		iVar2 = func_277(uParam0->f_40, uParam0->f_23);
		func_94(3269, uVar3, -1, 1);
		if (!func_266())
		{
			bVar4 = unk_0x3D1E58EDBE304B09() >= iVar2;
			bVar5 = (!bVar4 && unk_0x3D1E58EDBE304B09() > 0);
			if (iVar2 > 0)
			{
				unk_0xE9415555457C2ACD(iVar2, func_264(uParam0->f_40, uParam0->f_23), 18, 1, bVar4, 0, 0, unk_0x9F7CDE7B20BCB675(func_275(uParam0->f_40, uParam0->f_23)), 0, bVar5);
			}
		}
		uParam0->f_21 = 1;
		uParam0->f_24 = func_247();
		uParam0->f_20 = 0;
		return 1;
	}
	return 0;
}

bool func_249(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, int iParam7)
{
	if (*iParam5 != 0 && *iParam5 != 1)
	{
		*iParam5 = 0;
	}
	switch (*iParam5)
	{
		case 0:
			if (func_260(78225582, iParam0, uParam2, iParam1, iParam3, uParam4, 1, 4, 0, 3))
			{
				if (func_258())
				{
					*iParam5 = 1;
				}
				else
				{
					*iParam5 = 3;
					func_253(func_257());
				}
			}
			else
			{
				*iParam5 = 3;
				func_253(func_257());
			}
			break;
		
		case 1:
			if (func_252(func_257()))
			{
				if (func_251(func_257()) == 2)
				{
					*iParam5 = 2;
					unk_0x76BEC5A68AD07CC3(func_250(func_257()));
					unk_0xE9415555457C2ACD(uParam4, uParam6, 18, 1, false, 0, 0, iParam7, 0, true);
					func_253(func_257());
				}
				else
				{
					*iParam5 = 3;
					func_253(func_257());
				}
			}
			break;
	}
	return *iParam5 != 1;
}

int func_250(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2562803[iParam0 /*73*/];
	}
	return -1;
}

int func_251(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2562803[iParam0 /*73*/].f_2;
	}
	return 0;
}

int func_252(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2562803[iParam0 /*73*/].f_2 != 1;
	}
	return 0;
}

void func_253(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_266())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_256(iParam0))
		{
			if (!bVar0)
			{
				unk_0x8FFE442E1A39D51A();
			}
		}
		else if (!bVar0)
		{
			unk_0x00C69F802173480C(Global_2562803[iParam0 /*73*/]);
		}
		func_254(&(Global_2562803[iParam0 /*73*/]));
	}
}

void func_254(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_255(&(uParam0->f_8.f_3));
	func_255(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
}

void func_255(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_256(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2562803[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

int func_257()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_250(iVar0) != 2147483647)
		{
			if (func_256(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_258()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (!func_266())
	{
		bVar0 = true;
	}
	iVar1 = func_257();
	if (iVar1 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x5A041CC4F10FF856(func_75()) || unk_0x8E2645554EC732F0())
		{
			if (func_259(Global_2562803[iVar1 /*73*/].f_6, Global_2562803[iVar1 /*73*/].f_4, Global_2562803[iVar1 /*73*/].f_1) == 1)
			{
				Global_2563294 = 1;
			}
			return 0;
		}
		if (Global_2445217)
		{
			if (Global_2562803[iVar1 /*73*/].f_6 == 1067618600 || Global_2562803[iVar1 /*73*/].f_6 == -1303831698)
			{
				Global_2563295 = 1;
				return 0;
			}
		}
	}
	iVar2 = func_250(iVar1);
	if (iVar2 != 2147483647)
	{
		if (bVar0 || unk_0x535D3302CA34FAFF(iVar2))
		{
			if (bVar0)
			{
				Global_2562803[iVar1 /*73*/].f_66 = 1;
			}
			Global_2562803[iVar1 /*73*/].f_72 = 0;
			Global_2563285 = 1;
			return 1;
		}
	}
	return 0;
}

int func_259(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case 1982688246:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_266())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5A041CC4F10FF856(func_75()) || unk_0x8E2645554EC732F0())
		{
			Global_2563294 = 1;
			return 0;
		}
		if (Global_2445217)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2563295 = 1;
				return 0;
			}
		}
	}
	iVar1 = func_257();
	if (iVar1 == -1)
	{
		if (!func_262(&iVar1, iParam0, iParam1, uParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_261(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = uParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = uParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_2562803[iVar1 /*73*/].f_70 = Var2.f_0;
		Global_2562803[iVar1 /*73*/].f_71 = Var2.f_1;
		if (bVar0 || unk_0x809AB5DD969454A9(&Var2, uParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
			return 1;
			break;
	}
	return 0;
}

int func_262(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_266())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5A041CC4F10FF856(func_75()) || unk_0x8E2645554EC732F0())
		{
			Global_2563294 = 1;
			return 0;
		}
		if (Global_2445217)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2563295 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2562803[iVar1 /*73*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_2562803[iVar1 /*73*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0xA6A1F7719666CD21())
		{
			unk_0x8FFE442E1A39D51A();
		}
	}
	if (bVar0 || unk_0x65CEB7DD61AC9B2E(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_263(uVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5);
		return 1;
	}
	return 0;
}

int func_263(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2562803[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_266())
			{
				uParam0 = iVar0 + 900;
			}
			Global_2562803[iVar0 /*73*/].f_2 = 1;
			Global_2562803[iVar0 /*73*/].f_1 = iParam5;
			Global_2562803[iVar0 /*73*/].f_3 = uParam1;
			Global_2562803[iVar0 /*73*/].f_4 = iParam2;
			Global_2562803[iVar0 /*73*/].f_7 = uParam3;
			Global_2562803[iVar0 /*73*/].f_5 = 0;
			Global_2562803[iVar0 /*73*/] = uParam0;
			Global_2562803[iVar0 /*73*/].f_6 = iParam4;
			Global_2562803[iVar0 /*73*/].f_69 = uParam8;
			Global_2562803[iVar0 /*73*/].f_68 = uParam7;
			Global_2562803[iVar0 /*73*/].f_72 = 0;
			Global_2563285 = 0;
			if (bParam6)
			{
				Global_2562803[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_264(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("tug");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("cuban800");
					break;
				
				case 1:
					return joaat("titan");
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("brickade");
					break;
			}
			break;
	}
	return 0;
}

int func_265(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return -727279930;
					break;
				
				case 1:
					return 47641170;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 772561640;
					break;
				
				case 1:
					return 1397424987;
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1109787368;
					break;
				
				case 1:
					return -982736358;
					break;
			}
			break;
	}
	return 0;
}

int func_266()
{
	if (unk_0x55812CD5A331E1F8())
	{
		return 1;
	}
	return 0;
}

void func_267(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x1EE47E6A456E8F1D())
	{
		return;
	}
	if (unk_0x17CC0D5008835470() && func_271(unk_0xE0BDAFA1A39552D6(), 1))
	{
		return;
	}
	if (unk_0xE9F7E89BC2352535(2, 199) || unk_0x7A4571218C06A722(2, 199))
	{
		return;
	}
	if (unk_0x0FDDFFBD775C7598() != 0)
	{
		return;
	}
	if (unk_0x3DC360442A11BB38())
	{
		return;
	}
	if (unk_0xEC7F443A30E4E89C())
	{
		return;
	}
	if (unk_0x526F2ADD5C54B89E())
	{
		return;
	}
	if (func_270())
	{
		return;
	}
	if (!func_268())
	{
		return;
	}
	if (unk_0x17CC0D5008835470() || iParam0)
	{
		if (!Global_91362.f_1352 && !unk_0x8F805F2A5D16C0F9())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2445110 = iParam1;
			Global_91362.f_1352 = 1;
			Global_91362.f_1353 = iParam2;
		}
	}
}

int func_268()
{
	if (func_269())
	{
		return 0;
	}
	if (unk_0x614D6A182129DE96() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_269()
{
	return Global_2444558;
}

bool func_270()
{
	return Global_2445217;
}

int func_271(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_272(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587816[iParam0 /*444*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_272(int iParam0)
{
	return func_273(iParam0);
}

bool func_273(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
}

void func_274(int iParam0, var uParam1, int iParam2)
{
	Global_91362.f_1354 = iParam0;
	Global_91362.f_1355 = uParam1;
	Global_91362.f_1356 = iParam2;
}

char* func_275(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return "WAR_BOAT_UP_1";
					break;
				
				case 1:
					return "WAR_BOAT_UP_2";
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return "WAR_BOAT_UP_1";
					break;
				
				case 1:
					return "WAR_PLANE_UP_2";
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return "WAR_BOAT_UP_1";
					break;
				
				case 1:
					return "WAR_TRUCK_UP_2";
					break;
			}
			break;
	}
	return "";
}

int func_276(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_244();
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					if (unk_0x7DA173D4FD42F36B(uVar0, 0) || Global_262145.f_12928)
					{
						return 1;
					}
					break;
				
				case 1:
					if (unk_0x7DA173D4FD42F36B(uVar0, 1) || Global_262145.f_12931)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (unk_0x7DA173D4FD42F36B(uVar0, 2) || Global_262145.f_12926)
					{
						return 1;
					}
					break;
				
				case 1:
					if (unk_0x7DA173D4FD42F36B(uVar0, 3) || Global_262145.f_12929)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					if (unk_0x7DA173D4FD42F36B(uVar0, 4) || Global_262145.f_12927)
					{
						return 1;
					}
					break;
				
				case 1:
					if (unk_0x7DA173D4FD42F36B(uVar0, 5) || Global_262145.f_12930)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_277(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_13138;
					break;
				
				case 1:
					return Global_262145.f_13137;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_13133;
					break;
				
				case 1:
					return Global_262145.f_13134;
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_13136;
					break;
				
				case 1:
					return Global_262145.f_13135;
					break;
			}
			break;
	}
	return 0;
}

void func_278(var uParam0)
{
	bool bVar0;
	
	bVar0 = true;
	if ((((unk_0x0FDDFFBD775C7598() != 0 || unk_0xEC7F443A30E4E89C()) || unk_0x526F2ADD5C54B89E()) || unk_0x28E650D9BD8DC870()) || Global_91362.f_1352)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
	}
	else if ((unk_0xD471C64C0898A7BF(2, 188) && func_246(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)) || (uParam0->f_9.f_8 && func_246(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)))
	{
		if (uParam0->f_9.f_4 > 0)
		{
			uParam0->f_23 = (uParam0->f_23 - 1);
			if (uParam0->f_23 < 0)
			{
				uParam0->f_23 = 2;
			}
			func_279(uParam0->f_23, 1, 1);
			unk_0x962E604CCA53388F(-1, "NAV_UP_DOWN", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		}
	}
	else if ((unk_0xD471C64C0898A7BF(2, 187) && func_246(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)) || (uParam0->f_9.f_9 && func_246(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)))
	{
		if (uParam0->f_9.f_4 < 0)
		{
			uParam0->f_23++;
			if (uParam0->f_23 > 2)
			{
				uParam0->f_23 = 0;
			}
			func_279(uParam0->f_23, 1, 1);
			unk_0x962E604CCA53388F(-1, "NAV_UP_DOWN", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		}
	}
	else if (unk_0xD471C64C0898A7BF(2, 202) || uParam0->f_9.f_7)
	{
		*uParam0 = 4;
		unk_0x962E604CCA53388F(-1, "CANCEL", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		uParam0->f_20 = 0;
	}
	else if (unk_0xD471C64C0898A7BF(2, 201) || uParam0->f_9.f_6)
	{
		unk_0x962E604CCA53388F(-1, "SELECT", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		if (uParam0->f_23 >= 0 && uParam0->f_23 < 3)
		{
			uParam0->f_40 = uParam0->f_23;
		}
		uParam0->f_21 = 1;
		uParam0->f_24 = func_247();
		uParam0->f_23 = 0;
		uParam0->f_20 = 0;
	}
}

void func_279(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_5606 = uParam0;
	Global_17257.f_5741 = iParam2;
	if (Global_17257.f_5606 < Global_17257.f_5605)
	{
		Global_17257.f_5605 = Global_17257.f_5606;
	}
	else if ((Global_17257.f_5599 && Global_17257.f_5606 > Global_17257.f_5607) || (!Global_17257.f_5599 && Global_17257.f_5606 >= (Global_17257.f_5605 + Global_17257.f_5095)))
	{
		iVar0 = Global_17257.f_5605;
		while (iVar0 <= Global_17257.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17257.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17257.f_5095 && Global_17257.f_5605 < 128)
		{
			Global_17257.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17257.f_5605;
			while (iVar0 <= Global_17257.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17257.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17257.f_4562), "", 16);
		StringCopy(&(Global_2566711.f_21), "", 16);
	}
}

void func_280(var uParam0)
{
	if (!uParam0->f_20)
	{
		switch (uParam0->f_40)
		{
			case 3:
				func_316(uParam0);
				break;
			
			case 2:
				func_300(uParam0);
				break;
			
			case 0:
				func_299(uParam0);
				break;
			
			case 1:
				func_281(uParam0);
				break;
		}
		uParam0->f_20 = 1;
	}
}

void func_281(var uParam0)
{
	var uVar0;
	
	func_298(0);
	func_296(func_297(uParam0->f_40, 1));
	func_295(1, 2, 1, 1, 1);
	func_294(1, 1, 0, 0, 0);
	func_293(47, 88, 109, 255, 1);
	func_291(1, "ShopUI_Title_Exec_VechUpgrade", "ShopUI_Title_Exec_VechUpgrade");
	uVar0 = func_244();
	if (unk_0x7DA173D4FD42F36B(uVar0, 2) || Global_262145.f_12926)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	func_287(0, "WAR_BOAT_UP_1", 0, uParam0->f_22, 0, 0);
	if (unk_0x7DA173D4FD42F36B(uVar0, 2))
	{
		func_287(0, "", 1, uParam0->f_22, 0, 0);
		func_286(12, 0);
	}
	else
	{
		func_287(0, "ITEM_COST", 1, uParam0->f_22, 0, 0);
		func_283(func_277(uParam0->f_40, 0), 0);
	}
	if (unk_0x7DA173D4FD42F36B(uVar0, 3) || Global_262145.f_12929)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	func_287(1, "WAR_PLANE_UP_2", 0, uParam0->f_22, 0, 0);
	if (unk_0x7DA173D4FD42F36B(uVar0, 3))
	{
		func_287(1, "", 1, uParam0->f_22, 0, 0);
		func_286(12, 0);
	}
	else
	{
		func_287(1, "ITEM_COST", 1, uParam0->f_22, 0, 0);
		func_283(func_277(uParam0->f_40, 1), 0);
	}
	func_279(uParam0->f_23, 1, 1);
	uParam0->f_21 = 1;
	uParam0->f_40 = 1;
	func_282(201, "ITEM_SELECT", -1, 0);
	func_282(202, "ITEM_BACK", -1, 0);
}

void func_282(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xB1C8DCF6DB548BFD(2, iParam0, 1);
	if (Global_17257.f_4639 >= 12)
	{
		StringCopy(&Global_2566711, sVar0, 64);
		StringCopy(&(Global_2566711.f_16), sParam1, 16);
		Global_2566711.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xE27C8E42A97895CF(&(Global_17257.f_4922), Global_17257.f_4639);
	}
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = iParam0;
	Global_17257.f_4909[Global_17257.f_4639] = 32;
	Global_17257.f_4639++;
}

void func_283(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5092 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	Global_17257.f_3918[Global_17257.f_5092] = uParam0;
	Global_17257.f_5092++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 2;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_285();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_236(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17257.f_4938[(Global_17257.f_5089 - 1)])
		{
			Global_17257.f_4938[(Global_17257.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_284();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
			}
		}
	}
}

float func_284()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17257.f_4433[((Global_17257.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_236(Global_17257.f_4433[((Global_17257.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xC615314B52B8C80D(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0xC615314B52B8C80D(0.35f, 0);
}

float func_285()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_221(0, 1, 0, 0, 0, iVar6 > 0);
	if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		unk_0x9974146F2F7730D1(&(Global_17257.f_73[Global_17257.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x4C5D86B5B659C953(&(Global_17257.f_73[(Global_17257.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x4C5D86B5B659C953(&(Global_17257.f_73[(Global_17257.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0xD92C45283BCDA624(Global_17257.f_3918[((Global_17257.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0xCB4A32D75D69162C(Global_17257.f_4175[((Global_17257.f_5093 - iVar4) + iVar10)], Global_17257.f_4304[((Global_17257.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x9C174A0D56FFB64A(&(Global_2444596[((Global_17257.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x4C5D86B5B659C953(&(Global_2444596[((Global_17257.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x9C174A0D56FFB64A(&(Global_2444596[((Global_17257.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0x4D3BCE911B81A969(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17257.f_4433[((Global_17257.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_236(Global_17257.f_4433[((Global_17257.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_286(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5094 >= 128)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	Global_17257.f_4433[Global_17257.f_5094] = iParam0;
	Global_17257.f_5094++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 4;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_285();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_236(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17257.f_4938[(Global_17257.f_5089 - 1)])
		{
			Global_17257.f_4938[(Global_17257.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_284();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
			}
		}
	}
}

void func_287(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17257.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5088 >= 128)
	{
		return;
	}
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 < Global_17257.f_5608)
	{
		return;
	}
	if (Global_17257.f_5088 != iParam0)
	{
		Global_17257.f_5088 = iParam0;
		Global_17257.f_5089 = 0;
	}
	iVar0 = Global_17257.f_4926[Global_17257.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5089 < 4 && iVar0 != 1)
		{
			Global_17257.f_5089++;
			iVar0 = Global_17257.f_4926[Global_17257.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0x226FA58470A21AEF(sParam1) && !unk_0xDC1F9F222D09400F(sParam1))
	{
	}
	Global_17257.f_1610[Global_17257.f_5090] = bParam3;
	Global_17257.f_1867[Global_17257.f_5090] = iParam4;
	Global_17257.f_5090++;
	if (!bParam3)
	{
		func_290(Global_17257.f_5088, 1);
	}
	else
	{
		func_290(Global_17257.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_289(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_236(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17257.f_4938[Global_17257.f_5089])
		{
			Global_17257.f_4938[Global_17257.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_288(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
			if (fVar4 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xE27C8E42A97895CF(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 1;
	Global_17257.f_5609 = (Global_17257.f_5090 - 1);
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = iParam2;
}

float func_288(char* sParam0)
{
	if (!unk_0xDC1F9F222D09400F(sParam0))
	{
	}
	return unk_0xC615314B52B8C80D(0.35f, 0);
}

float func_289(char* sParam0)
{
	if (!unk_0x60D87DA27F70EBBC(uParam0))
	{
		if (unk_0x9F7CDE7B20BCB675(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_221(0, 1, 0, 0, 0, 0);
	unk_0x9974146F2F7730D1(sParam0);
	return unk_0x4D3BCE911B81A969(1);
}

void func_290(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xE27C8E42A97895CF(&(Global_17257.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_17257.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_291(int iParam0, char* sParam1, char* sParam2)
{
	Global_17257 = iParam0;
	func_292(29, sParam1, sParam2);
}

void func_292(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17257.f_5886[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17257.f_6703[iParam0 /*16*/]), sParam2, 64);
}

void func_293(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_7864 = iParam4;
	Global_17257.f_7860 = iParam0;
	Global_17257.f_7861 = iParam1;
	Global_17257.f_7862 = iParam2;
	Global_17257.f_7863 = iParam3;
}

void func_294(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4926[0] = iParam0;
	Global_17257.f_4926[1] = iParam1;
	Global_17257.f_4926[2] = iParam2;
	Global_17257.f_4926[3] = iParam3;
	Global_17257.f_4926[4] = iParam4;
	Global_17257.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5096++;
	}
}

void func_295(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4953[0] = iParam0;
	Global_17257.f_4953[1] = iParam1;
	Global_17257.f_4953[2] = iParam2;
	Global_17257.f_4953[3] = iParam3;
	Global_17257.f_4953[4] = iParam4;
}

void func_296(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_1), sParam0, 16);
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
}

char* func_297(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 2:
			if (!bParam1)
			{
				return "WAR_VEH_MENUI1";
			}
			else
			{
				return "WAR_VEH_MENUT1";
			}
			break;
		
		case 0:
			if (!bParam1)
			{
				return "WAR_VEH_MENUI2";
			}
			else
			{
				return "WAR_VEH_MENUT2";
			}
			break;
		
		case 1:
			if (!bParam1)
			{
				return "WAR_VEH_MENUI3";
			}
			else
			{
				return "WAR_VEH_MENUT3";
			}
			break;
	}
	return "";
}

void func_298(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2444596[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17257.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4959[iVar0] = 0;
		Global_17257.f_5097[iVar0] = 0;
		Global_17257.f_5226[iVar0] = 0;
		Global_17257.f_5746[iVar0] = 0f;
		Global_17257.f_5355[iVar0] = 0;
		Global_17257.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4926[iVar0] = 0;
		Global_17257.f_4938[iVar0] = 0f;
		Global_17257.f_4932[iVar0] = -1f;
		Global_17257.f_4945[iVar0] = 0;
		Global_17257.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 345;
		Global_17257.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		StringCopy(&(Global_17257.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6703[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2566711.f_16), "", 16);
	Global_2566711.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5088 = 0;
	Global_17257.f_5089 = 0;
	Global_17257.f_5090 = 0;
	Global_17257.f_5092 = 0;
	Global_17257.f_5093 = 0;
	Global_17257.f_5094 = 0;
	Global_17257.f_5091 = 0;
	Global_17257.f_5741 = 0;
	Global_17257.f_5606 = 0;
	Global_17257.f_5605 = 0;
	Global_17257.f_5607 = 0;
	StringCopy(&(Global_17257.f_4562), "", 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = 0;
	Global_17257.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4638 = 0;
	StringCopy(&(Global_2566711.f_21), "", 16);
	Global_2566711.f_61 = 0;
	Global_2566711.f_62 = 0;
	Global_2566711.f_63 = 0;
	Global_2566711.f_64 = 0;
	Global_2566711.f_65 = 0;
	Global_2566711.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2566711.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2566711.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4944 = 0f;
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_5611 = 0;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = 0;
	Global_17257.f_5609 = 0;
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	Global_17257.f_5095 = 10;
	Global_17257.f_5096 = 0;
	Global_17257.f_5743 = 0f;
	Global_17257.f_5744 = 0f;
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	Global_17257.f_5600 = 0f;
	Global_17257.f_5601 = 0;
	Global_17257.f_5603 = 0;
	Global_17257.f_5602 = 0;
	Global_17257.f_5604 = 0;
	Global_17257.f_7890 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5875[iVar0] = -1;
		Global_17257.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4951 = 0f;
	Global_17257.f_4922 = 0;
	Global_17257.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5881)
	{
		Global_17257.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_7869 = 0;
	Global_17257.f_7864 = 0;
	Global_17257.f_7874 = 0;
	Global_17257.f_7879 = 0;
	Global_17257.f_7884 = 0;
	Global_17257.f_7886 = 0;
	Global_17257.f_7892 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = unk_0x5050DF014C100DFF(0);
	if (bParam0)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17256 = 0.225f;
	}
}

void func_299(var uParam0)
{
	var uVar0;
	
	func_298(0);
	func_296(func_297(uParam0->f_40, 1));
	func_295(1, 2, 1, 1, 1);
	func_294(1, 1, 0, 0, 0);
	func_293(47, 88, 109, 255, 1);
	func_291(1, "ShopUI_Title_Exec_VechUpgrade", "ShopUI_Title_Exec_VechUpgrade");
	uVar0 = func_244();
	if (unk_0x7DA173D4FD42F36B(uVar0, 4) || Global_262145.f_12927)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	func_287(0, "WAR_BOAT_UP_1", 0, uParam0->f_22, 0, 0);
	if (unk_0x7DA173D4FD42F36B(uVar0, 4))
	{
		func_287(0, "", 1, uParam0->f_22, 0, 0);
		func_286(12, 0);
	}
	else
	{
		func_287(0, "ITEM_COST", 1, uParam0->f_22, 0, 0);
		func_283(func_277(uParam0->f_40, 0), 0);
	}
	if (unk_0x7DA173D4FD42F36B(uVar0, 5) || Global_262145.f_12930)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	func_287(1, "WAR_TRUCK_UP_2", 0, uParam0->f_22, 0, 0);
	if (unk_0x7DA173D4FD42F36B(uVar0, 5))
	{
		func_287(1, "", 1, uParam0->f_22, 0, 0);
		func_286(12, 0);
	}
	else
	{
		func_287(1, "ITEM_COST", 1, uParam0->f_22, 0, 0);
		func_283(func_277(uParam0->f_40, 1), 0);
	}
	func_279(uParam0->f_23, 1, 1);
	uParam0->f_21 = 1;
	uParam0->f_40 = 0;
	func_282(201, "ITEM_SELECT", -1, 0);
	func_282(202, "ITEM_BACK", -1, 0);
}

void func_300(var uParam0)
{
	var uVar0;
	
	func_298(0);
	func_296(func_297(uParam0->f_40, 1));
	func_295(1, 2, 1, 1, 1);
	func_294(1, 1, 0, 0, 0);
	func_293(47, 88, 109, 255, 1);
	func_291(1, "ShopUI_Title_Exec_VechUpgrade", "ShopUI_Title_Exec_VechUpgrade");
	uVar0 = func_244();
	if (unk_0x7DA173D4FD42F36B(uVar0, 0) || Global_262145.f_12928)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	func_287(0, "WAR_BOAT_UP_1", 0, uParam0->f_22, 0, 0);
	if (unk_0x7DA173D4FD42F36B(uVar0, 0))
	{
		func_287(0, "", 1, uParam0->f_22, 0, 0);
		func_286(12, 0);
	}
	else
	{
		func_287(0, "ITEM_COST", 1, uParam0->f_22, 0, 0);
		func_283(func_277(uParam0->f_40, 0), 0);
	}
	if (unk_0x7DA173D4FD42F36B(uVar0, 1) || Global_262145.f_12931)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	func_287(1, "WAR_BOAT_UP_2", 0, uParam0->f_22, 0, 0);
	if (unk_0x7DA173D4FD42F36B(uVar0, 1))
	{
		func_287(1, "", 1, uParam0->f_22, 0, 0);
		func_286(12, 0);
	}
	else
	{
		func_287(1, "ITEM_COST", 1, uParam0->f_22, 0, 0);
		func_283(func_277(uParam0->f_40, 1), 0);
	}
	func_279(uParam0->f_23, 1, 1);
	uParam0->f_21 = 1;
	uParam0->f_40 = 2;
	func_282(201, "ITEM_SELECT", -1, 0);
	func_282(202, "ITEM_BACK", -1, 0);
}

void func_301(var uParam0, var uParam1)
{
	func_310(uParam0, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), 0);
	uParam0->f_6 = (unk_0xD471C64C0898A7BF(2, 201) || unk_0x36017A82F80B1E0E(2, 201));
	uParam0->f_7 = (unk_0xD471C64C0898A7BF(2, 202) || unk_0x36017A82F80B1E0E(2, 202));
	uParam0->f_8 = (uParam0->f_1 < -64 || unk_0xD471C64C0898A7BF(2, 188));
	uParam0->f_9 = (uParam0->f_1 > 64 || unk_0xD471C64C0898A7BF(2, 187));
	if (((((func_318(0, -1, 0) && unk_0x0FDDFFBD775C7598() == 0) && !unk_0xEC7F443A30E4E89C()) && !unk_0x526F2ADD5C54B89E()) && !unk_0x28E650D9BD8DC870()) && !Global_91362.f_1352)
	{
		if (unk_0x55812CD5A331E1F8() && !unk_0x28E650D9BD8DC870())
		{
			if (unk_0x1DAE3EDA366FAA16(2))
			{
				unk_0xC80D2B3478FFF428(0, 1, 1);
				unk_0xC80D2B3478FFF428(0, 2, 1);
				unk_0xC80D2B3478FFF428(2, 200, 1);
				unk_0x99266F5A88BE7BA8(0, 237, 1);
				unk_0x99266F5A88BE7BA8(0, 238, 1);
				unk_0x99266F5A88BE7BA8(0, 241, 1);
				unk_0x99266F5A88BE7BA8(0, 242, 1);
				if ((Global_2566787 == -1 || Global_2566787 == -4) || Global_2566787 == -6)
				{
					unk_0x99266F5A88BE7BA8(1, 1, 1);
					unk_0x99266F5A88BE7BA8(1, 2, 1);
				}
				else
				{
					unk_0xC80D2B3478FFF428(1, 1, 1);
					unk_0xC80D2B3478FFF428(1, 2, 1);
				}
				func_307(0, 0, 0, 1);
				func_306(0, -1, 1);
			}
			if (func_305())
			{
				if (Global_2566787 == *uParam1)
				{
					uParam0->f_6 = 1;
				}
				else
				{
					*uParam1 = Global_2566787;
					func_279(*uParam1, 1, 1);
				}
			}
			if (func_304())
			{
				uParam0->f_7 = 1;
			}
			if (func_303(0, 0, 0))
			{
				uParam0->f_8 = 1;
			}
			if (func_302(0, 0, 0))
			{
				uParam0->f_9 = 1;
			}
		}
	}
}

int func_302(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x4A1EAF6BB2C862EA(2))
	{
		if (Global_2566787 == -3)
		{
			if ((unk_0xE9F7E89BC2352535(2, 237) && iParam0) || unk_0xD471C64C0898A7BF(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0xE9F7E89BC2352535(2, 242) || (unk_0x7A4571218C06A722(2, 242) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_303(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x4A1EAF6BB2C862EA(2))
	{
		if (Global_2566787 == -2)
		{
			if ((unk_0xE9F7E89BC2352535(2, 237) && iParam0) || unk_0xD471C64C0898A7BF(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0xE9F7E89BC2352535(2, 241) || (unk_0x7A4571218C06A722(2, 241) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_304()
{
	if (unk_0x4A1EAF6BB2C862EA(2))
	{
		if (unk_0xD471C64C0898A7BF(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

int func_305()
{
	if (unk_0x4A1EAF6BB2C862EA(2))
	{
		if (Global_2566787 > -1)
		{
			if (unk_0xD471C64C0898A7BF(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_306(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x4A1EAF6BB2C862EA(2))
	{
		return 0;
	}
	if (unk_0x3DC360442A11BB38() || unk_0x526F2ADD5C54B89E())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x1C5CED75F2F7CD7F();
	}
	if (Global_2566787 == -6)
	{
		unk_0x45F6A695B73A4B47(4);
		if (iParam0 && unk_0xE9F7E89BC2352535(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2566787 = -1;
			return 0;
		}
	}
	if (((Global_2566787 > -1 || Global_2566787 == -3) || Global_2566787 == -2) || unk_0x3E7D7AD6DB946EBC())
	{
		unk_0x45F6A695B73A4B47(1);
		return 0;
	}
	if (Global_2566787 == -1 && iParam0)
	{
		if (unk_0xE9F7E89BC2352535(2, 237))
		{
			unk_0x45F6A695B73A4B47(4);
			Global_2566787 = -6;
			return 1;
		}
		else
		{
			unk_0x45F6A695B73A4B47(3);
			return 0;
		}
	}
	unk_0x45F6A695B73A4B47(1);
	return 0;
}

void func_307(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x4A1EAF6BB2C862EA(2))
	{
		Global_2566787 = -1;
		return;
	}
	unk_0xE29BC41E7B2FC59B(1);
	fVar0 = Global_17254;
	fVar2 = (fVar0 + Global_17256);
	fVar3 = Global_17257.f_5600;
	fVar1 = (Global_17257.f_5600 - (IntToFloat(Global_17257.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17257.f_5602 < 1)
	{
		fVar1 = (Global_17257.f_5600 - 0.034722f);
	}
	unk_0xF2C2AA10F5F1DDB2(76, 84);
	unk_0x44D592DED3924902(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x46DACC31F201CAAA(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x46DACC31F201CAAA(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x50E2186E0E0244C6();
	func_309();
	if (Global_2566787 == -6)
	{
		return;
	}
	Global_2566787 = -1;
	fVar7 = Global_2566781;
	fVar8 = Global_2566782;
	if (Global_17257.f_5603 > Global_17257.f_5602)
	{
		if (((Global_2566781 >= fVar0 && Global_2566781 <= fVar2) && Global_2566782 >= fVar3) && Global_2566782 < (fVar3 + fVar6))
		{
			Global_2566787 = -2;
			if (bParam3)
			{
				func_308(0);
			}
			return;
		}
		if (((Global_2566781 >= fVar0 && Global_2566781 <= fVar2) && Global_2566782 >= (fVar3 + fVar6)) && Global_2566782 < (fVar3 + 0.034722f))
		{
			Global_2566787 = -3;
			if (bParam3)
			{
				func_308(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17257.f_5603 == -1)
		{
			Global_2566787 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17257.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xF2C2AA10F5F1DDB2(76, 84);
				unk_0x44D592DED3924902(-0.05f, -0.05f, 0f, 0f);
				func_231(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17256, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x50E2186E0E0244C6();
			}
		}
		Global_2566787 = Global_17257.f_7520[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2566787 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2566787 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2566787 = -4;
		return;
	}
	Global_2566787 = -1;
}

void func_308(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17254;
	fVar1 = Global_17257.f_5600;
	unk_0xF2C2AA10F5F1DDB2(76, 84);
	unk_0x44D592DED3924902(-0.05f, -0.05f, 0f, 0f);
	if (Global_2566787 == -2)
	{
		func_231(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2566787 == -3)
	{
		func_231(fVar0, (fVar1 + fVar2), Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x50E2186E0E0244C6();
}

void func_309()
{
	Global_2566783 = Global_2566781;
	Global_2566784 = Global_2566782;
	Global_2566781 = unk_0x43AD8FF2B73AC2B6(2, 239);
	Global_2566782 = unk_0x43AD8FF2B73AC2B6(2, 240);
	Global_2566785 = (Global_2566781 - Global_2566783);
	Global_2566786 = (Global_2566782 - Global_2566784);
}

void func_310(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x8482814342BB3160(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x8482814342BB3160(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x8482814342BB3160(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x8482814342BB3160(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x43AD8FF2B73AC2B6(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x43AD8FF2B73AC2B6(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x43AD8FF2B73AC2B6(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x43AD8FF2B73AC2B6(2, 221) * 127f));
		}
	}
}

void func_311(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x111736C2C9FCA3D0(uParam0->f_25);
	if (iVar0 >= 0)
	{
		if (unk_0x4958900440DDE4E4(iVar0))
		{
			if (unk_0x3B5FD456D45F2AAE(iVar0) >= 0.99f)
			{
				unk_0x99BCB15F954AF579(&(uParam0->f_26), 1);
			}
		}
	}
}

int func_312(var uParam0)
{
	if (!unk_0x7DA173D4FD42F36B(uParam0->f_26, 1))
	{
		uParam0->f_25 = unk_0xC2F899BFC87B57E7(uParam0->f_27, uParam0->f_27.f_3, 2, 1, 0, 1065353216, 0, 1065353216);
		unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), uParam0->f_25, uParam0->f_39, "idle", 1.5f, -1.5f, 13, 16, 1.5f, 0);
		unk_0x2D818F2925754469(uParam0->f_25);
		unk_0xE27C8E42A97895CF(&(uParam0->f_26), 1);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_313(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x111736C2C9FCA3D0(uParam0->f_25);
	if (iVar0 >= 0)
	{
		if (unk_0x4958900440DDE4E4(iVar0))
		{
			if (unk_0x3B5FD456D45F2AAE(iVar0) >= 0.99f)
			{
				*uParam0 = 3;
			}
		}
	}
}

int func_314(var uParam0)
{
	unk_0x198E497B820DA913(uParam0->f_39);
	if (!unk_0x7B43775D6E0D7325(uParam0->f_39))
	{
		return 0;
	}
	if (!unk_0x7DA173D4FD42F36B(uParam0->f_26, 0))
	{
		uParam0->f_25 = unk_0xC2F899BFC87B57E7(uParam0->f_27, uParam0->f_27.f_3, 2, 1, 0, 1065353216, 0, 1065353216);
		unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), uParam0->f_25, uParam0->f_39, "enter", 1.5f, -1.5f, 13, 16, 1.5f, 0);
		unk_0x2D818F2925754469(uParam0->f_25);
		unk_0xE27C8E42A97895CF(&(uParam0->f_26), 0);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_315(int iParam0, var uParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 1100.6f, -3102.135f, -40.0007f };
				uParam1->f_3 = { 0f, 0f, -180f };
				break;
			
			case 1:
				*uParam1 = { 1050.281f, -3094.157f, -40.0207f };
				uParam1->f_3 = { 0f, 0f, 0f };
				break;
			
			case 2:
				*uParam1 = { 996.5728f, -3099.166f, -40.0206f };
				uParam1->f_3 = { 0f, 0f, 90f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 1100.458f, -3100.94f, -39.9999f };
				uParam1->f_3 = { 0f, 0f, 177.6192f };
				break;
			
			case 1:
				*uParam1 = { 1050.35f, -3095.426f, -39.9999f };
				uParam1->f_3 = { 0f, 0f, 1.937f };
				break;
			
			case 2:
				*uParam1 = { 997.4687f, -3098.992f, -39.9999f };
				uParam1->f_3 = { 0f, 0f, 93.524f };
				break;
			}
	}
}

void func_316(var uParam0)
{
	int iVar0;
	
	func_298(0);
	func_296("WAR_VEH_TITLE");
	func_295(1, 2, 1, 1, 1);
	func_294(1, 1, 0, 0, 0);
	func_293(47, 88, 109, 255, 1);
	func_291(1, "ShopUI_Title_Exec_VechUpgrade", "ShopUI_Title_Exec_VechUpgrade");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_287(iVar0, func_297(iVar0, 0), 1, 1, 0, 0);
		func_317(func_297(iVar0, 0), 0);
		iVar0++;
	}
	func_279(uParam0->f_23, 1, 1);
	uParam0->f_21 = 1;
	uParam0->f_40 = 3;
	func_282(201, "ITEM_SELECT", -1, 0);
	func_282(202, "ITEM_BACK", -1, 0);
}

void func_317(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam0, 24);
	Global_17257.f_5090++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 1;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_285();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_236(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17257.f_4938[(Global_17257.f_5089 - 1)])
		{
			Global_17257.f_4938[(Global_17257.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_284();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
			}
		}
	}
}

bool func_318(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_214(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17257.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x226FA58470A21AEF(&(Global_17257.f_5505[iVar0 /*4*/])))
	{
		unk_0x18DF389F542183A3(&(Global_17257.f_5505[iVar0 /*4*/]), 9);
		Global_17257.f_5498[iVar0] = 1;
		if (!unk_0xC39E0E322B2CBB14(&(Global_17257.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xC35C76B8E0A47F9F("CommonMenu", 0);
	Global_17257.f_5484[iVar0] = 1;
	if (!unk_0xF3DECB9D15F48CFF("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xC35C76B8E0A47F9F("MPShopSale", 0);
		Global_17257.f_5491[iVar0] = 1;
		if (!unk_0xF3DECB9D15F48CFF("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17257.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_319(&(Global_17257.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_319(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x6A87921801178186(*uParam0))
			{
				*uParam0 = unk_0xDDEDAA5105426019(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x6A87921801178186(*uParam0))
					{
						uParam0->f_8 = unk_0x1ADBAAC322D61F73();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1ADBAAC322D61F73();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x6A87921801178186(*uParam0))
			{
				uParam0->f_8 = unk_0x1ADBAAC322D61F73();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x6A87921801178186(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

int func_320()
{
	if ((((((((func_14(0) || func_326(unk_0xE0BDAFA1A39552D6())) || func_325(unk_0xE0BDAFA1A39552D6())) || Global_2428549.f_648.f_5 != -1) || Global_68089 == 1) || func_324(1)) || func_323()) || unk_0x20AD74A79F2A0869()) || func_321(unk_0xE0BDAFA1A39552D6()) == 168)
	{
		return 0;
	}
	return 1;
}

int func_321(int iParam0)
{
	if (func_322(iParam0, 0))
	{
		return Global_1610705[iParam0 /*178*/].f_10.f_28;
	}
	return -1;
}

int func_322(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_28 != -1 || (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_323()
{
	return unk_0x1ADBAAC322D61F73() <= Global_17257.f_5745 + 100;
}

bool func_324(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_325(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 7;
}

bool func_326(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 2;
}

bool func_327(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	func_315(func_100(Local_1772.f_2), &(uParam0->f_2), 0);
	Var0 = { uParam0->f_2 };
	Var3 = { func_329(Var0 - unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1)) };
	fVar6 = func_328(unk_0x1210C9F87A32AFD5(unk_0x06736567F820A39E()), Var3);
	return fVar6 >= 0f;
}

float func_328(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_329(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

float func_330(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xBDA1F5E8A36BFA07(uParam0, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(uParam0, 0) };
	}
	if (!unk_0xBDA1F5E8A36BFA07(uParam1, 0))
	{
		Var3 = { unk_0xF4745590D18D14B8(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF4745590D18D14B8(uParam1, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Var3, iParam2);
}

void func_331(var uParam0)
{
	func_315(func_100(Local_1772.f_2), &(uParam0->f_2), 0);
	func_334(func_100(Local_1772.f_2), &(uParam0->f_27));
	func_333(func_100(Local_1772.f_2), &(uParam0->f_33));
	uParam0->f_39 = "anim@amb@warehouse@toolbox@";
	if (!unk_0xC1EDB61CE0A4B94E(uParam0->f_1))
	{
		unk_0xBECC89ACB4E5D4ED(joaat("ex_prop_ex_toolchest_01"));
		if (unk_0x5C9FE32E2FF37989(joaat("ex_prop_ex_toolchest_01")))
		{
			Local_1772.f_96.f_1 = unk_0x690B17DE4159577D(joaat("ex_prop_ex_toolchest_01"), uParam0->f_2, 0, 0, 0);
			unk_0x5C5B23A2682A1514(uParam0->f_1, uParam0->f_2.f_3, 2, 1);
			unk_0x0B87AFC0B2EECA19(joaat("ex_prop_ex_toolchest_01"));
		}
	}
	else if (func_332(Local_1772.f_15) && unk_0xE0BDAFA1A39552D6() == Local_1772.f_15)
	{
		unk_0xC35C76B8E0A47F9F("ShopUI_Title_Exec_VechUpgrade", 0);
		if (unk_0xF3DECB9D15F48CFF("ShopUI_Title_Exec_VechUpgrade"))
		{
			*uParam0 = 1;
		}
	}
}

int func_332(int iParam0)
{
	if (iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_333(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1100.153f, -3101.792f, -39.99993f };
			uParam1->f_3 = { 1101.036f, -3101.806f, -37.74993f };
			break;
		
		case 1:
			*uParam1 = { 1049.852f, -3094.443f, -39.99994f };
			uParam1->f_3 = { 1050.702f, -3094.484f, -37.74993f };
			break;
		
		case 2:
			*uParam1 = { 997.0019f, -3099.545f, -39.99989f };
			uParam1->f_3 = { 997.0008f, -3098.654f, -37.74989f };
			break;
	}
}

void func_334(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1100.563f, -3102.106f, -39.995f };
			uParam1->f_3 = { 0f, 0f, -180f };
			break;
		
		case 1:
			*uParam1 = { 1050.3f, -3094.2f, -40.01f };
			uParam1->f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			*uParam1 = { 996.6f, -3099.15f, -40f };
			uParam1->f_3 = { 0f, 0f, 90.36f };
			break;
	}
}

void func_335()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_367(Local_1772.f_15, Local_1772.f_2);
	if (Local_1772.f_14)
	{
		func_366(iVar1);
		Local_1772.f_14 = 0;
	}
	if (unk_0x587E5997B76F47FE())
	{
		if (Local_1772.f_15 != unk_0xE0BDAFA1A39552D6())
		{
			func_366(iVar1);
		}
		func_358();
		func_357();
	}
	if (iVar1 > Local_1772.f_6)
	{
		if (unk_0x587E5997B76F47FE() && Local_1772.f_15 == unk_0xE0BDAFA1A39552D6())
		{
			if (!func_354(func_355(func_356(Local_1772.f_10, (iVar1 - 1), -1, -1))))
			{
				func_349(iVar1);
			}
		}
		if (unk_0x587E5997B76F47FE() && Local_1772.f_15 != unk_0xE0BDAFA1A39552D6())
		{
			Local_1772.f_14 = 1;
			func_347(Local_1772.f_15, Local_1772.f_2);
		}
		else
		{
			if (unk_0x587E5997B76F47FE())
			{
				iVar0 = Local_1772.f_6;
				while (iVar0 <= (iVar1 - 1))
				{
					if (iVar0 < Local_1772.f_9)
					{
						if (Local_941.f_1[iVar0] == 0)
						{
							Local_941.f_1[iVar0] = func_355(func_356(Local_1772.f_10, iVar0, -1, -1));
						}
					}
					iVar0++;
				}
			}
			iVar0 = Local_1772.f_6;
			while (iVar0 <= (iVar1 - 1))
			{
				if (iVar0 < Local_1772.f_9)
				{
					if (!func_346(iVar0))
					{
						if (!func_344(iVar0))
						{
							func_339(iVar0);
						}
					}
				}
				iVar0++;
			}
		}
		Local_1772.f_6 = iVar1;
	}
	else if (iVar1 < Local_1772.f_6)
	{
		iVar0 = iVar1;
		while (iVar0 <= (Local_1772.f_6 - 1))
		{
			if (Local_1772.f_249[iVar0])
			{
				Local_1772.f_249[iVar0] = 0;
			}
			iVar0++;
		}
		if (unk_0x587E5997B76F47FE())
		{
			if (Local_1772.f_15 == unk_0xE0BDAFA1A39552D6())
			{
				func_349(iVar1);
			}
			else
			{
				Local_1772.f_14 = 1;
				func_347(Local_1772.f_15, Local_1772.f_2);
			}
		}
		Local_1772.f_8 = Local_1772.f_6;
		Local_1772.f_6 = iVar1;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar0 < Local_1772.f_9)
		{
			if (Local_941.f_1[iVar0] != 0 || Local_941.f_1[iVar0] != func_355(Global_1736120[iVar0]))
			{
				if (!func_346(iVar0))
				{
					if (!func_344(iVar0))
					{
						if (unk_0x1D8189836184FF10(Local_941.f_1[iVar0]))
						{
							func_339(iVar0);
						}
					}
				}
				if (!func_344(iVar0))
				{
					if (!Local_1772.f_249[iVar0])
					{
						func_336(iVar0, 1);
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1772.f_8 - 1))
	{
		if (iVar0 < Local_1772.f_9)
		{
			if (Local_941.f_1[iVar0] != 0)
			{
				if (iVar0 > (iVar1 - 1) || Local_941.f_1[iVar0] != func_355(Global_1736120[iVar0]))
				{
					func_336(iVar0, 0);
				}
			}
			else if (Local_1772.f_8 > iVar1)
			{
				Local_1772.f_8 = (Local_1772.f_8 - 1);
			}
		}
		iVar0++;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar1 + 2)
	{
		if (iVar0 < Local_1772.f_9)
		{
			if (Local_941.f_1[iVar0] != 0)
			{
				if (!func_346(iVar0))
				{
					if (!func_344(iVar0))
					{
						if (unk_0x1D8189836184FF10(Local_941.f_1[iVar0]))
						{
							func_339(iVar0);
						}
					}
				}
				if (!func_344(iVar0))
				{
					if (!Local_1772.f_249[iVar0])
					{
						func_336(iVar0, 1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_336(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!Local_1772.f_137[iParam0])
	{
		Local_1772.f_361[iParam0] = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), 500);
		Local_1772.f_137[iParam0] = 1;
	}
	if (unk_0xE96D4FF9851C6F0F(unk_0x201D90648B2AE3CE(), Local_1772.f_361[iParam0]))
	{
		uVar0 = func_338(iParam0);
		if (unk_0xC1EDB61CE0A4B94E(uVar0))
		{
			iVar1 = unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Local_1772.f_361[iParam0]));
			iVar2 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) / 500f) * 255f));
			if (bParam1)
			{
				iVar2 = (255 - unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) / 500f) * 255f)));
			}
			unk_0x78849AC7F082C9D8(uVar0, iVar2, 0);
		}
	}
	else
	{
		uVar3 = func_338(iParam0);
		if (unk_0xC1EDB61CE0A4B94E(uVar3))
		{
			if (bParam1)
			{
				unk_0x78849AC7F082C9D8(uVar3, 255, 0);
				if (unk_0x1D8189836184FF10(func_355(func_356(Local_1772.f_10, iParam0, -1, -1))))
				{
					unk_0x0B87AFC0B2EECA19(func_355(func_356(Local_1772.f_10, iParam0, -1, -1)));
				}
				Local_1772.f_249[iParam0] = 1;
			}
			else
			{
				unk_0x78849AC7F082C9D8(uVar3, 0, 0);
				if (unk_0xA2C0F3D7469C0A0B(uVar3))
				{
					func_337(iParam0);
				}
				if (unk_0x587E5997B76F47FE())
				{
					Local_941.f_1[iParam0] = 0;
				}
			}
		}
		Local_1772.f_137[iParam0] = 0;
	}
}

void func_337(int iParam0)
{
	var uVar0;
	
	uVar0 = func_338(iParam0);
	if (unk_0xC1EDB61CE0A4B94E(uVar0) && unk_0xA2C0F3D7469C0A0B(uVar0))
	{
		unk_0xF30CBC00D9F6D48D(&uVar0);
		Local_1772.f_473[iParam0] = 0;
	}
}

var func_338(int iParam0)
{
	return Local_1772.f_473[iParam0];
}

void func_339(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	var uVar12;
	
	Var0 = { func_343(func_100(Local_1772.f_2)) };
	Var3 = { func_342(Local_1772.f_2, func_100(Local_1772.f_2), iParam0) };
	Var6 = { unk_0x90B89006901451E8(Var0, 0f, Var3) };
	Var9 = { func_341(Local_1772.f_2, func_100(Local_1772.f_2), iParam0) };
	if (Local_941.f_1[iParam0] != 0 && unk_0x1D8189836184FF10(Local_941.f_1[iParam0]))
	{
		unk_0xBECC89ACB4E5D4ED(Local_941.f_1[iParam0]);
		if (unk_0x5C9FE32E2FF37989(Local_941.f_1[iParam0]))
		{
			uVar12 = unk_0xE6B4261E1DAB4EE0(Local_941.f_1[iParam0], Var6, 0, 0, 0);
			unk_0x5C5B23A2682A1514(uVar12, Var9, 2, 1);
			unk_0x93F4FB97D1F2E7A1(uVar12, true);
			Local_1772.f_473[iParam0] = uVar12;
			Global_1736120[iParam0] = func_340(Local_941.f_1[iParam0]);
		}
	}
}

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case joaat("ex_prop_crate_closed_sc"):
			return 1;
		
		case joaat("ex_prop_crate_med_sc"):
			return 2;
		
		case joaat("ex_prop_crate_tob_sc"):
			return 3;
		
		case joaat("ex_prop_crate_art_sc"):
			return 4;
		
		case joaat("ex_prop_crate_elec_sc"):
			return 5;
		
		case joaat("ex_prop_crate_ammo_sc"):
			return 6;
		
		case joaat("ex_prop_crate_narc_sc"):
			return 7;
		
		case joaat("ex_prop_crate_gems_sc"):
			return 8;
		
		case joaat("ex_prop_crate_wlife_sc"):
			return 9;
		
		case joaat("ex_prop_crate_jewels_sc"):
			return 10;
		
		case joaat("ex_prop_crate_bull_sc_02"):
			return 11;
		
		case joaat("ex_prop_crate_closed_bc"):
			return 12;
		
		case joaat("ex_prop_crate_med_bc"):
			return 13;
		
		case joaat("ex_prop_crate_tob_bc"):
			return 14;
		
		case joaat("ex_prop_crate_art_bc"):
			return 15;
		
		case joaat("ex_prop_crate_elec_bc"):
			return 16;
		
		case joaat("ex_prop_crate_ammo_bc"):
			return 17;
		
		case joaat("ex_prop_crate_narc_bc"):
			return 18;
		
		case joaat("ex_prop_crate_gems_bc"):
			return 19;
		
		case joaat("ex_prop_crate_wlife_bc"):
			return 20;
		
		case joaat("ex_prop_crate_jewels_bc"):
			return 21;
		
		case joaat("ex_prop_crate_bull_bc_02"):
			return 22;
		
		case joaat("ex_prop_crate_oegg"):
			return 23;
		
		case joaat("ex_prop_crate_minig"):
			return 24;
		
		case joaat("ex_prop_crate_xldiam"):
			return 25;
		
		case joaat("ex_prop_crate_shide"):
			return 26;
		
		case joaat("ex_prop_crate_freel"):
			return 27;
		
		case joaat("ex_prop_crate_watch"):
			return 28;
		
		case joaat("ex_prop_crate_expl_sc"):
			return 29;
		
		case joaat("ex_prop_crate_expl_bc"):
			return 30;
		
		case joaat("ex_prop_crate_jewels_racks_sc"):
			return 31;
		
		case joaat("ex_prop_crate_jewels_racks_bc"):
			return 32;
		
		case joaat("ex_prop_crate_furjacket_sc"):
			return 33;
		
		case joaat("ex_prop_crate_furjacket_bc"):
			return 34;
		
		case joaat("ex_prop_crate_pharma_sc"):
			return 35;
		
		case joaat("ex_prop_crate_pharma_bc"):
			return 36;
		
		case joaat("ex_prop_crate_highend_pharma_sc"):
			return 37;
		
		case joaat("ex_prop_crate_highend_pharma_bc"):
			return 38;
		
		case joaat("ex_prop_crate_biohazard_sc"):
			return 39;
		
		case joaat("ex_prop_crate_biohazard_bc"):
			return 40;
		
		case joaat("ex_prop_crate_clothing_sc"):
			return 41;
		
		case joaat("ex_prop_crate_clothing_bc"):
			return 42;
		
		case joaat("ex_prop_crate_money_sc"):
			return 43;
		
		case joaat("ex_prop_crate_money_bc"):
			return 44;
		
		case joaat("ex_prop_crate_closed_ms"):
			return 45;
		
		case joaat("ex_prop_crate_closed_rw"):
			return 46;
		
		case joaat("ex_prop_crate_closed_mw"):
			return 47;
		
		case joaat("ex_prop_crate_art_02_bc"):
			return 48;
		
		case joaat("ex_prop_crate_art_02_sc"):
			return 49;
		
		default:
	}
	return 0;
}

Vector3 func_341(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (func_101(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				if (iParam2 >= 12)
				{
					Var0 = { 0f, 0f, 180f };
				}
				break;
			
			case 1:
				if ((((((iParam2 == 14 || iParam2 == 16) || iParam2 == 17) || iParam2 == 22) || iParam2 == 23) || iParam2 == 25) || iParam2 == 27)
				{
					Var0 = { 0f, 0f, 180f };
				}
				if (iParam2 > 27)
				{
					Var0 = { 0f, 0f, 180f };
				}
				break;
			
			case 2:
				if (((((((((((iParam2 == 21 || iParam2 == 22) || iParam2 == 24) || iParam2 == 27) || iParam2 == 28) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 36) || iParam2 == 37) || iParam2 == 40) || iParam2 == 41)
				{
					Var0 = { 0f, 0f, 180f };
				}
				if ((((((((((iParam2 == 21 || iParam2 == 42) || iParam2 == 45) || iParam2 == 46) || iParam2 == 49) || iParam2 == 53) || iParam2 == 54) || iParam2 == 56) || iParam2 == 59) || iParam2 == 60) || iParam2 == 62)
				{
					Var0 = { 0f, 0f, 180f };
				}
				if ((((((((((iParam2 == 63 || iParam2 == 64) || iParam2 == 66) || iParam2 == 69) || iParam2 == 70) || iParam2 == 74) || iParam2 == 76) || iParam2 == 77) || iParam2 == 80) || iParam2 == 81) || iParam2 == 83)
				{
					Var0 = { 0f, 0f, 180f };
				}
				if (iParam2 > 83 && iParam2 < 102)
				{
					Var0 = { 0f, 0f, 270f };
				}
				if (iParam2 >= 102 && iParam2 < 111)
				{
					Var0 = { 0f, 0f, 90f };
				}
				break;
			}
	}
	return Var0;
}

Vector3 func_342(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (func_101(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam2)
				{
					case 0:
						Var0 = { -7.575f, -0.15f, -1.56f };
						break;
					
					case 1:
						Var0 = { -5.05f, -0.15f, -1.56f };
						break;
					
					case 2:
						Var0 = { -7.575f, -0.15f, 0.647f };
						break;
					
					case 3:
						Var0 = { -5.05f, -0.15f, 0.647f };
						break;
					
					case 4:
						Var0 = { -1.275f, -0.15f, -1.56f };
						break;
					
					case 5:
						Var0 = { 1.25f, -0.15f, -1.56f };
						break;
					
					case 6:
						Var0 = { -1.275f, -0.15f, 0.647f };
						break;
					
					case 7:
						Var0 = { 1.25f, -0.15f, 0.647f };
						break;
					
					case 8:
						Var0 = { 4.925f, -0.15f, -1.56f };
						break;
					
					case 9:
						Var0 = { 7.45f, -0.15f, -1.56f };
						break;
					
					case 10:
						Var0 = { 4.925f, -0.15f, 0.647f };
						break;
					
					case 11:
						Var0 = { 7.45f, -0.15f, 0.647f };
						break;
					
					case 12:
						Var0 = { -6.25f, -5.875f, -1.56f };
						break;
					
					case 13:
						Var0 = { -4.2f, -5.875f, -1.56f };
						break;
					
					case 14:
						Var0 = { -1.92f, -5.875f, -1.56f };
						break;
					
					case 15:
						Var0 = { 0.1f, -5.875f, -1.56f };
						break;
				}
				break;
			
			case 1:
				switch (iParam2)
				{
					case 0:
						Var0 = { -5.375f, 13.25f, -3.185f };
						break;
					
					case 1:
						Var0 = { -2.95f, 13.25f, -3.185f };
						break;
					
					case 2:
						Var0 = { -0.525f, 13.25f, -3.185f };
						break;
					
					case 3:
						Var0 = { 1.9f, 13.25f, -3.185f };
						break;
					
					case 4:
						Var0 = { 4.325f, 13.25f, -3.185f };
						break;
					
					case 5:
						Var0 = { 6.75f, 13.25f, -3.185f };
						break;
					
					case 6:
						Var0 = { 9.175f, 13.25f, -3.185f };
						break;
					
					case 7:
						Var0 = { -5.375f, 13.25f, -0.974f };
						break;
					
					case 8:
						Var0 = { -2.95f, 13.25f, -0.974f };
						break;
					
					case 9:
						Var0 = { -0.525f, 13.25f, -0.974f };
						break;
					
					case 10:
						Var0 = { 1.9f, 13.25f, -0.974f };
						break;
					
					case 11:
						Var0 = { 4.325f, 13.25f, -0.974f };
						break;
					
					case 12:
						Var0 = { 6.75f, 13.25f, -0.974f };
						break;
					
					case 13:
						Var0 = { 9.175f, 13.25f, -0.974f };
						break;
					
					case 14:
						Var0 = { -5.375f, 6.05f, -3.185f };
						break;
					
					case 15:
						Var0 = { -2.95f, 6.05f, -3.185f };
						break;
					
					case 16:
						Var0 = { -0.525f, 6.05f, -3.185f };
						break;
					
					case 17:
						Var0 = { 1.9f, 6.05f, -3.185f };
						break;
					
					case 18:
						Var0 = { 4.325f, 6.05f, -3.185f };
						break;
					
					case 19:
						Var0 = { 6.75f, 6.05f, -3.185f };
						break;
					
					case 20:
						Var0 = { 9.175f, 6.05f, -3.185f };
						break;
					
					case 21:
						Var0 = { -5.375f, 6.05f, -0.974f };
						break;
					
					case 22:
						Var0 = { -2.95f, 6.05f, -0.974f };
						break;
					
					case 23:
						Var0 = { -0.525f, 6.05f, -0.974f };
						break;
					
					case 24:
						Var0 = { 1.9f, 6.05f, -0.974f };
						break;
					
					case 25:
						Var0 = { 4.325f, 6.05f, -0.974f };
						break;
					
					case 26:
						Var0 = { 6.75f, 6.05f, -0.974f };
						break;
					
					case 27:
						Var0 = { 9.175f, 6.05f, -0.974f };
						break;
					
					case 28:
						Var0 = { -5.375f, -1.15f, -3.185f };
						break;
					
					case 29:
						Var0 = { -2.95f, -1.15f, -3.185f };
						break;
					
					case 30:
						Var0 = { -0.525f, -1.15f, -3.185f };
						break;
					
					case 31:
						Var0 = { 1.9f, -1.15f, -3.185f };
						break;
					
					case 32:
						Var0 = { 4.325f, -1.15f, -3.185f };
						break;
					
					case 33:
						Var0 = { 6.75f, -1.15f, -3.185f };
						break;
					
					case 34:
						Var0 = { 9.175f, -1.15f, -3.185f };
						break;
					
					case 35:
						Var0 = { -5.375f, -1.15f, -0.974f };
						break;
					
					case 36:
						Var0 = { -2.95f, -1.15f, -0.974f };
						break;
					
					case 37:
						Var0 = { -0.525f, -1.15f, -0.974f };
						break;
					
					case 38:
						Var0 = { 1.9f, -1.15f, -0.974f };
						break;
					
					case 39:
						Var0 = { 4.325f, -1.15f, -0.974f };
						break;
					
					case 40:
						Var0 = { 6.75f, -1.15f, -0.974f };
						break;
					
					case 41:
						Var0 = { 9.175f, -1.15f, -0.974f };
						break;
				}
				break;
			
			case 2:
				switch (iParam2)
				{
					case 0:
						Var0 = { -7.25f, 16.85f, -3.18f };
						break;
					
					case 1:
						Var0 = { -4.825f, 16.85f, -3.18f };
						break;
					
					case 2:
						Var0 = { -2.4f, 16.85f, -3.18f };
						break;
					
					case 3:
						Var0 = { 0.025f, 16.85f, -3.18f };
						break;
					
					case 4:
						Var0 = { 2.45f, 16.85f, -3.18f };
						break;
					
					case 5:
						Var0 = { 4.875f, 16.85f, -3.18f };
						break;
					
					case 6:
						Var0 = { 7.3f, 16.85f, -3.18f };
						break;
					
					case 7:
						Var0 = { -7.25f, 16.85f, -0.971f };
						break;
					
					case 8:
						Var0 = { -4.825f, 16.85f, -0.971f };
						break;
					
					case 9:
						Var0 = { -2.4f, 16.85f, -0.971f };
						break;
					
					case 10:
						Var0 = { 0.025f, 16.85f, -0.971f };
						break;
					
					case 11:
						Var0 = { 2.45f, 16.85f, -0.971f };
						break;
					
					case 12:
						Var0 = { 4.875f, 16.85f, -0.971f };
						break;
					
					case 13:
						Var0 = { 7.3f, 16.85f, -0.971f };
						break;
					
					case 14:
						Var0 = { -7.25f, 16.85f, 1.059f };
						break;
					
					case 15:
						Var0 = { -4.825f, 16.85f, 1.059f };
						break;
					
					case 16:
						Var0 = { -2.4f, 16.85f, 1.059f };
						break;
					
					case 17:
						Var0 = { 0.025f, 16.85f, 1.059f };
						break;
					
					case 18:
						Var0 = { 2.45f, 16.85f, 1.059f };
						break;
					
					case 19:
						Var0 = { 4.875f, 16.85f, 1.059f };
						break;
					
					case 20:
						Var0 = { 7.3f, 16.85f, 1.059f };
						break;
					
					case 21:
						Var0 = { -7.25f, 11.5f, -3.18f };
						break;
					
					case 22:
						Var0 = { -4.825f, 11.5f, -3.18f };
						break;
					
					case 23:
						Var0 = { -2.4f, 11.5f, -3.18f };
						break;
					
					case 24:
						Var0 = { 0.025f, 11.5f, -3.18f };
						break;
					
					case 25:
						Var0 = { 2.45f, 11.5f, -3.18f };
						break;
					
					case 26:
						Var0 = { 4.875f, 11.5f, -3.18f };
						break;
					
					case 27:
						Var0 = { 7.3f, 11.5f, -3.18f };
						break;
					
					case 28:
						Var0 = { -7.25f, 11.5f, -0.971f };
						break;
					
					case 29:
						Var0 = { -4.825f, 11.5f, -0.971f };
						break;
					
					case 30:
						Var0 = { -2.4f, 11.5f, -0.971f };
						break;
					
					case 31:
						Var0 = { 0.025f, 11.5f, -0.971f };
						break;
					
					case 32:
						Var0 = { 2.45f, 11.5f, -0.971f };
						break;
					
					case 33:
						Var0 = { 4.875f, 11.5f, -0.971f };
						break;
					
					case 34:
						Var0 = { 7.3f, 11.5f, -0.971f };
						break;
					
					case 35:
						Var0 = { -7.25f, 11.5f, 1.059f };
						break;
					
					case 36:
						Var0 = { -4.825f, 11.5f, 1.059f };
						break;
					
					case 37:
						Var0 = { -2.4f, 11.5f, 1.059f };
						break;
					
					case 38:
						Var0 = { 0.025f, 11.5f, 1.059f };
						break;
					
					case 39:
						Var0 = { 2.45f, 11.5f, 1.059f };
						break;
					
					case 40:
						Var0 = { 4.875f, 11.5f, 1.059f };
						break;
					
					case 41:
						Var0 = { 7.3f, 11.5f, 1.059f };
						break;
					
					case 42:
						Var0 = { -7.25f, 5.65f, -3.18f };
						break;
					
					case 43:
						Var0 = { -4.825f, 5.65f, -3.18f };
						break;
					
					case 44:
						Var0 = { -2.4f, 5.65f, -3.18f };
						break;
					
					case 45:
						Var0 = { 0.025f, 5.65f, -3.18f };
						break;
					
					case 46:
						Var0 = { 2.45f, 5.65f, -3.18f };
						break;
					
					case 47:
						Var0 = { 4.875f, 5.65f, -3.18f };
						break;
					
					case 48:
						Var0 = { 7.3f, 5.65f, -3.18f };
						break;
					
					case 49:
						Var0 = { -7.25f, 5.65f, -0.971f };
						break;
					
					case 50:
						Var0 = { -4.825f, 5.65f, -0.971f };
						break;
					
					case 51:
						Var0 = { -2.4f, 5.65f, -0.971f };
						break;
					
					case 52:
						Var0 = { 0.025f, 5.65f, -0.971f };
						break;
					
					case 53:
						Var0 = { 2.45f, 5.65f, -0.971f };
						break;
					
					case 54:
						Var0 = { 4.875f, 5.65f, -0.971f };
						break;
					
					case 55:
						Var0 = { 7.3f, 5.65f, -0.971f };
						break;
					
					case 56:
						Var0 = { -7.25f, 5.65f, 1.059f };
						break;
					
					case 57:
						Var0 = { -4.825f, 5.65f, 1.059f };
						break;
					
					case 58:
						Var0 = { -2.4f, 5.65f, 1.059f };
						break;
					
					case 59:
						Var0 = { 0.025f, 5.65f, 1.059f };
						break;
					
					case 60:
						Var0 = { 2.45f, 5.65f, 1.059f };
						break;
					
					case 61:
						Var0 = { 4.875f, 5.65f, 1.059f };
						break;
					
					case 62:
						Var0 = { 7.3f, 5.65f, 1.059f };
						break;
					
					case 63:
						Var0 = { -7.25f, -0.05f, -3.18f };
						break;
					
					case 64:
						Var0 = { -4.825f, -0.05f, -3.18f };
						break;
					
					case 65:
						Var0 = { -2.4f, -0.05f, -3.18f };
						break;
					
					case 66:
						Var0 = { 0.025f, -0.05f, -3.18f };
						break;
					
					case 67:
						Var0 = { 2.45f, -0.05f, -3.18f };
						break;
					
					case 68:
						Var0 = { 4.875f, -0.05f, -3.18f };
						break;
					
					case 69:
						Var0 = { 7.3f, -0.05f, -3.18f };
						break;
					
					case 70:
						Var0 = { -7.25f, -0.05f, -0.971f };
						break;
					
					case 71:
						Var0 = { -4.825f, -0.05f, -0.971f };
						break;
					
					case 72:
						Var0 = { -2.4f, -0.05f, -0.971f };
						break;
					
					case 73:
						Var0 = { 0.025f, -0.05f, -0.971f };
						break;
					
					case 74:
						Var0 = { 2.45f, -0.05f, -0.971f };
						break;
					
					case 75:
						Var0 = { 4.875f, -0.05f, -0.971f };
						break;
					
					case 76:
						Var0 = { 7.3f, -0.05f, -0.971f };
						break;
					
					case 77:
						Var0 = { -7.25f, -0.05f, 1.059f };
						break;
					
					case 78:
						Var0 = { -4.825f, -0.05f, 1.059f };
						break;
					
					case joaat("mpsv_lp0_31"):
						Var0 = { -2.4f, -0.05f, 1.059f };
						break;
					
					case 80:
						Var0 = { 0.025f, -0.05f, 1.059f };
						break;
					
					case 81:
						Var0 = { 2.45f, -0.05f, 1.059f };
						break;
					
					case 82:
						Var0 = { 4.875f, -0.05f, 1.059f };
						break;
					
					case 83:
						Var0 = { 7.3f, -0.05f, 1.059f };
						break;
					
					case 84:
						Var0 = { 15.875f, 16.86f, -3.18f };
						break;
					
					case 85:
						Var0 = { 15.875f, 14.44f, -3.18f };
						break;
					
					case 86:
						Var0 = { 15.875f, 12.02f, -3.18f };
						break;
					
					case 87:
						Var0 = { 15.875f, 16.86f, -0.971f };
						break;
					
					case 88:
						Var0 = { 15.875f, 14.44f, -0.971f };
						break;
					
					case 89:
						Var0 = { 15.875f, 12.02f, -0.971f };
						break;
					
					case 90:
						Var0 = { 15.875f, 16.86f, 1.059f };
						break;
					
					case 91:
						Var0 = { 15.875f, 14.44f, 1.059f };
						break;
					
					case 92:
						Var0 = { 15.875f, 12.02f, 1.059f };
						break;
					
					case 93:
						Var0 = { 15.875f, 1.925f, -3.18f };
						break;
					
					case 94:
						Var0 = { 15.875f, -0.435f, -3.18f };
						break;
					
					case 95:
						Var0 = { 15.875f, -2.93f, -3.18f };
						break;
					
					case 96:
						Var0 = { 15.875f, 1.925f, -0.971f };
						break;
					
					case 97:
						Var0 = { 15.875f, -0.435f, -0.971f };
						break;
					
					case 98:
						Var0 = { 15.875f, -2.93f, -0.971f };
						break;
					
					case 99:
						Var0 = { 15.875f, 1.925f, 1.059f };
						break;
					
					case 100:
						Var0 = { 15.875f, -0.435f, 1.059f };
						break;
					
					case 101:
						Var0 = { 15.875f, -2.93f, 1.059f };
						break;
					
					case 102:
						Var0 = { -17.525f, -2.85f, -3.18f };
						break;
					
					case 103:
						Var0 = { -17.525f, -0.5f, -3.18f };
						break;
					
					case 104:
						Var0 = { -17.525f, 1.85f, -3.18f };
						break;
					
					case 105:
						Var0 = { -17.525f, -2.85f, -0.971f };
						break;
					
					case 106:
						Var0 = { -17.525f, -0.5f, -0.971f };
						break;
					
					case 107:
						Var0 = { -17.525f, 1.85f, -0.971f };
						break;
					
					case 108:
						Var0 = { -17.525f, -2.85f, 1.059f };
						break;
					
					case 109:
						Var0 = { -17.525f, -0.5f, 1.059f };
						break;
					
					case 110:
						Var0 = { -17.525f, 1.85f, 1.059f };
						break;
				}
				break;
			}
	}
	return Var0;
}

Vector3 func_343(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1096.336f, -3096.531f, -38.4359f;
		
		case 1:
			return 1058.476f, -3108.698f, -36.8147f;
		
		case 2:
			return 1010.88f, -3108.454f, -36.8147f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_344(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	
	Var0 = { func_343(func_100(Local_1772.f_2)) };
	Var3 = { func_342(Local_1772.f_2, func_100(Local_1772.f_2), iParam0) };
	Var6 = { unk_0x90B89006901451E8(Var0, 0f, Var3) };
	iVar9 = 0;
	while (iVar9 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar9)))
		{
			iVar10 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar9));
			if (func_3(iVar10, 1, 1))
			{
				if (func_345(func_167(iVar10), Var6, 1.5f, 0))
				{
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

int func_345(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xF87C669B882D93C0((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xF87C669B882D93C0((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xF87C669B882D93C0((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xF87C669B882D93C0((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xF87C669B882D93C0((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_346(int iParam0)
{
	return unk_0xC1EDB61CE0A4B94E(Local_1772.f_473[iParam0]);
}

void func_347(int iParam0, var uParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 500;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = uParam1;
	unk_0xCCAB9843EFA5C08A(1, &Var0, 3, func_348(iParam0));
}

var func_348(int iParam0)
{
	var uVar0;
	
	unk_0xE27C8E42A97895CF(&uVar0, iParam0);
	return uVar0;
}

void func_349(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (func_101(Local_1772.f_2))
	{
		if (func_350(Local_1772.f_2) > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iParam0 - 1))
			{
				if (iVar0 < Local_1772.f_9)
				{
					if (Local_941.f_1[iVar0] != func_355(func_356(Local_1772.f_10, iVar0, -1, -1)))
					{
						if (func_354(func_355(func_356(Local_1772.f_10, iVar0, -1, -1))))
						{
							uVar1 = func_338(iVar0);
							if (unk_0xC1EDB61CE0A4B94E(uVar1))
							{
								func_337(iVar0);
							}
							Local_941.f_1[iVar0] = func_355(func_356(Local_1772.f_10, iVar0, -1, -1));
							Local_941.f_1[(iParam0 - 1)] = func_355(func_356(Local_1772.f_10, (iParam0 - 1), -1, -1));
							if (!func_346(iVar0))
							{
								if (!func_344(iVar0))
								{
									func_339(iVar0);
								}
							}
						}
					}
				}
				iVar0++;
			}
		}
	}
}

int func_350(int iParam0)
{
	int iVar0;
	
	if (func_101(iParam0))
	{
		iVar0 = func_352(func_353(iParam0));
		return func_351(iVar0, -1, 0);
	}
	return 0;
}

int func_351(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2473854[iParam0 /*5*/][func_95(iParam1)];
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_352(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3226;
	}
	else if (iParam0 == 1)
	{
		return 3227;
	}
	else if (iParam0 == 2)
	{
		return 3228;
	}
	else if (iParam0 == 3)
	{
		return 3229;
	}
	else if (iParam0 == 4)
	{
		return 3230;
	}
	return 3226;
}

int func_353(int iParam0)
{
	int iVar0;
	
	if (func_101(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ex_prop_crate_oegg"):
		case joaat("ex_prop_crate_minig"):
		case joaat("ex_prop_crate_xldiam"):
		case joaat("ex_prop_crate_shide"):
		case joaat("ex_prop_crate_freel"):
		case joaat("ex_prop_crate_watch"):
			return 1;
		
		default:
	}
	return 0;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return joaat("ex_prop_crate_closed_sc");
		
		case 2:
			return joaat("ex_prop_crate_med_sc");
		
		case 3:
			return joaat("ex_prop_crate_tob_sc");
		
		case 4:
			return joaat("ex_prop_crate_art_sc");
		
		case 5:
			return joaat("ex_prop_crate_elec_sc");
		
		case 6:
			return joaat("ex_prop_crate_ammo_sc");
		
		case 7:
			return joaat("ex_prop_crate_narc_sc");
		
		case 8:
			return joaat("ex_prop_crate_gems_sc");
		
		case 9:
			return joaat("ex_prop_crate_wlife_sc");
		
		case 10:
			return joaat("ex_prop_crate_jewels_sc");
		
		case 11:
			return joaat("ex_prop_crate_bull_sc_02");
		
		case 12:
			return joaat("ex_prop_crate_closed_bc");
		
		case 13:
			return joaat("ex_prop_crate_med_bc");
		
		case 14:
			return joaat("ex_prop_crate_tob_bc");
		
		case 15:
			return joaat("ex_prop_crate_art_bc");
		
		case 16:
			return joaat("ex_prop_crate_elec_bc");
		
		case 17:
			return joaat("ex_prop_crate_ammo_bc");
		
		case 18:
			return joaat("ex_prop_crate_narc_bc");
		
		case 19:
			return joaat("ex_prop_crate_gems_bc");
		
		case 20:
			return joaat("ex_prop_crate_wlife_bc");
		
		case 21:
			return joaat("ex_prop_crate_jewels_bc");
		
		case 22:
			return joaat("ex_prop_crate_bull_bc_02");
		
		case 23:
			return joaat("ex_prop_crate_oegg");
		
		case 24:
			return joaat("ex_prop_crate_minig");
		
		case 25:
			return joaat("ex_prop_crate_xldiam");
		
		case 26:
			return joaat("ex_prop_crate_shide");
		
		case 27:
			return joaat("ex_prop_crate_freel");
		
		case 28:
			return joaat("ex_prop_crate_watch");
		
		case 29:
			return joaat("ex_prop_crate_expl_sc");
		
		case 30:
			return joaat("ex_prop_crate_expl_bc");
		
		case 31:
			return joaat("ex_prop_crate_jewels_racks_sc");
		
		case 32:
			return joaat("ex_prop_crate_jewels_racks_bc");
		
		case 33:
			return joaat("ex_prop_crate_furjacket_sc");
		
		case 34:
			return joaat("ex_prop_crate_furjacket_bc");
		
		case 35:
			return joaat("ex_prop_crate_pharma_sc");
		
		case 36:
			return joaat("ex_prop_crate_pharma_bc");
		
		case 37:
			return joaat("ex_prop_crate_highend_pharma_sc");
		
		case 38:
			return joaat("ex_prop_crate_highend_pharma_bc");
		
		case 39:
			return joaat("ex_prop_crate_biohazard_sc");
		
		case 40:
			return joaat("ex_prop_crate_biohazard_bc");
		
		case 41:
			return joaat("ex_prop_crate_clothing_sc");
		
		case 42:
			return joaat("ex_prop_crate_clothing_bc");
		
		case 43:
			return joaat("ex_prop_crate_money_sc");
		
		case 44:
			return joaat("ex_prop_crate_money_bc");
		
		case 45:
			return joaat("ex_prop_crate_closed_ms");
		
		case 46:
			return -1958;
		
		case 47:
			return joaat("ex_prop_crate_closed_mw");
		
		case 48:
			return joaat("ex_prop_crate_art_02_bc");
		
		case 49:
			return joaat("ex_prop_crate_art_02_sc");
		
		default:
	}
	return 0;
}

int func_356(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	int iVar18;
	int iVar19;
	
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			iParam1 += 111;
			break;
		
		case 2:
			iParam1 += 222;
			break;
		
		case 3:
			iParam1 += 333;
			break;
		
		case 4:
			iParam1 += 444;
			break;
	}
	iVar0 = 0;
	iVar1 = func_75();
	if (iParam3 > -1)
	{
		iVar1 = iParam3;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar18 = unk_0x9F7CDE7B20BCB675(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (0 != iVar18)
	{
		if (!unk_0xC4D41F5AA8205814(iVar18, &iVar0, iVar19, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_357()
{
	if ((!Global_1736232[0] && !Global_1736232[1]) && !Global_1736232[2])
	{
		if (Local_1772.f_7 != Local_1772.f_6)
		{
			Local_1772.f_7 = Local_1772.f_6;
		}
	}
}

void func_358()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1736232[iVar0])
		{
			iVar3 = Local_1772.f_7;
			iVar4 = (iVar1 + iVar3);
			if (Local_1772.f_15 == unk_0xE0BDAFA1A39552D6())
			{
				if (func_356(Local_1772.f_10, iVar4, -1, -1) == 0)
				{
					iVar2 = 1;
				}
			}
			else if (Global_1736120[iVar4] == 0)
			{
				iVar2 = 1;
			}
			if (Local_941.f_1[iVar4] == 0 && iVar2)
			{
				Var5 = { func_365(Local_1772.f_15) };
				iVar9 = func_362(Local_1772.f_2, iVar4, Var5.f_2);
				iVar10 = 0;
				if (iVar4 > 0 && !func_361(func_100(Local_1772.f_2), iVar4))
				{
					while (iVar9 == Local_941.f_1[(iVar4 - 1)] && iVar10 < 10)
					{
						iVar9 = func_362(Local_1772.f_2, iVar4, Var5.f_2);
						iVar10++;
					}
				}
				if (iVar9 != 0)
				{
					if (Local_1772.f_15 == unk_0xE0BDAFA1A39552D6())
					{
						func_360(Local_1772.f_10, iVar4, func_340(iVar9), 1, -1);
					}
					else
					{
						func_359(Local_1772.f_15, Local_1772.f_10, iVar4, func_340(iVar9));
					}
				}
				if (Local_941.f_1[iVar4] == 0)
				{
					Local_941.f_1[iVar4] = iVar9;
				}
				if (!func_346(iVar4))
				{
					if (!func_344(iVar4))
					{
						func_339(iVar4);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_359(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	
	Var0.f_0 = 504;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam1;
	unk_0xCCAB9843EFA5C08A(1, &Var0, 5, func_348(iParam0));
}

var func_360(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	char cVar2[64];
	int iVar18;
	int iVar19;
	
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			iParam1 += 111;
			break;
		
		case 2:
			iParam1 += 222;
			break;
		
		case 3:
			iParam1 += 333;
			break;
		
		case 4:
			iParam1 += 444;
			break;
	}
	iVar1 = func_75();
	if (iParam4 > -1)
	{
		iVar1 = iParam4;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar18 = unk_0x9F7CDE7B20BCB675(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (iParam2 < 0)
	{
		iParam2 = 255;
	}
	if (0 != iVar18)
	{
		uVar0 = unk_0xC60DF3F40775C421(iVar18, iParam2, iVar19, 8, iParam3);
	}
	return uVar0;
}

int func_361(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_362(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = unk_0xA6055C735E3DD877(0, 2);
	if (func_361(func_100(iParam0), iParam1))
	{
		iVar0 = unk_0xA6055C735E3DD877(0, 4);
	}
	bVar1 = false;
	if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
	{
		bVar1 = true;
	}
	uVar2 = func_364(func_100(iParam0), iParam1);
	return func_363(uParam2, uVar2, bVar1);
}

int func_363(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xA6055C735E3DD877(0, 2);
	iVar1 = uParam0;
	iVar2 = uParam1;
	if (bParam2)
	{
		switch (iVar1)
		{
			case 0:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							
							case 1:
								return joaat("ex_prop_crate_closed_ms");
							
							default:
						}
						break;
					
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			
			case 1:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							
							case 1:
								return -1958;
							
							default:
						}
						break;
					
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			
			case 4:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							
							case 1:
								return joaat("ex_prop_crate_closed_mw");
							
							default:
						}
						break;
					
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			}
	}
	switch (iVar1)
	{
		case 0:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_med_sc");
						
						case 1:
							return joaat("ex_prop_crate_biohazard_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_med_bc");
						
						case 1:
							return joaat("ex_prop_crate_biohazard_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_tob_sc");
				
				case 1:
					return joaat("ex_prop_crate_tob_bc");
				
				default:
			}
			break;
		
		case 2:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_art_sc");
						
						case 1:
							return joaat("ex_prop_crate_art_02_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_art_bc");
						
						case 1:
							return joaat("ex_prop_crate_art_02_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_elec_sc");
				
				case 1:
					return joaat("ex_prop_crate_elec_bc");
				
				default:
			}
			break;
		
		case 4:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_ammo_sc");
						
						case 1:
							return joaat("ex_prop_crate_expl_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_ammo_bc");
						
						case 1:
							return joaat("ex_prop_crate_expl_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 5:
			iVar0 = unk_0xA6055C735E3DD877(0, 3);
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_narc_sc");
						
						case 1:
							return joaat("ex_prop_crate_pharma_sc");
						
						case 2:
							return joaat("ex_prop_crate_highend_pharma_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_narc_bc");
						
						case 1:
							return joaat("ex_prop_crate_pharma_bc");
						
						case 2:
							return joaat("ex_prop_crate_highend_pharma_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 6:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_gems_sc");
				
				case 1:
					return joaat("ex_prop_crate_gems_bc");
				
				default:
			}
			break;
		
		case 7:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_wlife_sc");
						
						case 1:
							return joaat("ex_prop_crate_furjacket_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_wlife_bc");
						
						case 1:
							return joaat("ex_prop_crate_furjacket_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 8:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_money_sc");
						
						case 1:
							return joaat("ex_prop_crate_clothing_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_money_bc");
						
						case 1:
							return joaat("ex_prop_crate_clothing_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 9:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_jewels_sc");
						
						case 1:
							return joaat("ex_prop_crate_jewels_racks_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_jewels_bc");
						
						case 1:
							return joaat("ex_prop_crate_jewels_racks_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 10:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_bull_sc_02");
				
				case 1:
					return joaat("ex_prop_crate_bull_bc_02");
				
				default:
			}
			break;
	}
	return 0;
}

int func_364(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return unk_0xA6055C735E3DD877(0, 2);
		
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			else
			{
				return unk_0xA6055C735E3DD877(0, 2);
			}
			break;
	}
	return -1;
}

struct<4> func_365(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_122;
}

int func_366(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	while (iVar1 <= iParam0 + 2)
	{
		if (iVar1 < Local_1772.f_9)
		{
			if (Local_941.f_1[iVar1] != func_355(Global_1736120[iVar1]))
			{
				uVar2 = func_338(iVar1);
				if (unk_0xC1EDB61CE0A4B94E(uVar2))
				{
					func_337(iVar1);
				}
				Local_941.f_1[iVar1] = func_355(Global_1736120[iVar1]);
				if (!func_344(iVar1))
				{
					func_339(iVar1);
				}
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_367(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_101(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam1 == Global_1587816[iParam0 /*444*/].f_250.f_68[iVar0 /*2*/])
			{
				return Global_1587816[iParam0 /*444*/].f_250.f_68[iVar0 /*2*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_368(var uParam0)
{
	bool bVar0;
	
	bVar0 = !unk_0x5B003181D760D4E1("AM_MP_SMPL_INTERIOR_INT", uParam0, 1, 0);
	return bVar0;
}

int func_369()
{
	bool bVar0;
	
	func_376(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			return 1;
		}
	}
	if (func_375())
	{
		return 1;
	}
	if (Global_2446452)
	{
		return 1;
	}
	if (func_374())
	{
		return 1;
	}
	if (func_373(157))
	{
		if (!func_372())
		{
			return 1;
		}
	}
	if (func_373(155))
	{
		return 1;
	}
	if (!unk_0x2CB436C59D8FC08B())
	{
		return 1;
	}
	if (func_370() != 0)
	{
		if (unk_0x98934607F8D0FB03(func_370()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_370()
{
	switch (func_371())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_371()
{
	return Global_25152;
}

bool func_372()
{
	return Global_2434839.f_575;
}

int func_373(int iParam0)
{
	if (unk_0x1151827D6B6D09C7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_374()
{
	return Global_2444095;
}

bool func_375()
{
	return Global_2434839.f_570;
}

void func_376(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6E7EC37CC38579DB(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 347:
					func_377(iVar0);
					break;
				
				case 2:
					unk_0x6E7EC37CC38579DB(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_377(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		if (func_3(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x44A9253132E1DDE0(Var0.f_1);
			if (unk_0xC1EDB61CE0A4B94E(uVar3))
			{
				if (unk_0x0FDFEC0DD29106EE(uVar3, 0))
				{
					uVar4 = unk_0x34E1EF1E8BCD1BFC(uVar3, 0);
					if (unk_0xBBDEC099189867B6(uVar4, Var0.f_2) && unk_0x992E302DC36A4251())
					{
						if (func_378(uVar4, &bVar5))
						{
							unk_0x87332622AA717A1B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x768B37F1452D4834(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_378(var uParam0, var uParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xC9A01F9792B3D486(uParam0))
		{
			if (unk_0x2A3F30E37EB8FDD8(uParam0))
			{
				unk_0xB7E6C6AE18F1EDA6(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x7292AF41BC6C644F(uParam0, 0))
		{
			if (unk_0xA2C0F3D7469C0A0B(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_379()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_380()
{
	func_388();
	func_387();
	func_386(&(Local_1772.f_591));
	func_209(&(Local_1772.f_96), 1);
	func_5(&(Local_1195[unk_0xE0BDAFA1A39552D6() /*18*/].f_1), &Local_239);
	if (unk_0x992E302DC36A4251())
	{
		if (unk_0x587E5997B76F47FE())
		{
			func_382(&(Local_941.f_113), &Global_3932160);
		}
	}
	func_381();
}

void func_381()
{
	unk_0xF5DF8F3392CDD07B();
}

void func_382(var uParam0, var uParam1)
{
	func_186(uParam0);
	func_383(uParam0, uParam1);
	func_57(uParam0, 0, 0);
}

int func_383(var uParam0, var uParam1)
{
	if (func_56(uParam1->f_31) && !uParam0->f_49)
	{
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_5))
		{
			if (unk_0x40B3668D7226E0DF(uParam0->f_5))
			{
				func_385(&(uParam0->f_5));
				unk_0x1E2BF4457AC05E16((unk_0x2A5ED1AA56D1D7EA(false) - 1));
			}
			else
			{
				func_384(uParam0->f_5);
			}
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_6))
		{
			if (unk_0xC3A7CFC6468E0BAE(uParam0->f_6))
			{
				if (unk_0x40B3668D7226E0DF(uParam0->f_6))
				{
					func_385(&(uParam0->f_6));
					unk_0x1E2BF4457AC05E16((unk_0x2A5ED1AA56D1D7EA(false) - 1));
				}
				else
				{
					func_384(uParam0->f_6);
				}
			}
		}
	}
	else if (uParam0->f_49)
	{
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_24))
		{
			if (unk_0x40B3668D7226E0DF(uParam0->f_24))
			{
				func_385(&(uParam0->f_24));
				unk_0x1E2BF4457AC05E16((unk_0x2A5ED1AA56D1D7EA(false) - 1));
			}
			else
			{
				func_384(uParam0->f_24);
			}
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_25))
		{
			if (unk_0x40B3668D7226E0DF(uParam0->f_25))
			{
				func_385(&(uParam0->f_25));
				unk_0x1E2BF4457AC05E16((unk_0x2A5ED1AA56D1D7EA(false) - 1));
			}
			else
			{
				func_384(uParam0->f_25);
			}
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_26))
		{
			if (unk_0x40B3668D7226E0DF(uParam0->f_26))
			{
				func_385(&(uParam0->f_26));
				unk_0x1E2BF4457AC05E16((unk_0x2A5ED1AA56D1D7EA(false) - 1));
			}
			else
			{
				func_384(uParam0->f_26);
			}
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_27))
		{
			if (unk_0x40B3668D7226E0DF(uParam0->f_27))
			{
				func_385(&(uParam0->f_27));
				unk_0x1E2BF4457AC05E16((unk_0x2A5ED1AA56D1D7EA(false) - 1));
			}
			else
			{
				func_384(uParam0->f_27);
			}
		}
	}
	else if (func_55(uParam1->f_31, -1))
	{
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_22))
		{
			if (unk_0x40B3668D7226E0DF(uParam0->f_22))
			{
				func_385(&(uParam0->f_22));
				unk_0x1E2BF4457AC05E16((unk_0x2A5ED1AA56D1D7EA(false) - 1));
			}
			else
			{
				func_384(uParam0->f_22);
			}
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_21))
		{
			if (unk_0xC3A7CFC6468E0BAE(uParam0->f_21))
			{
				if (unk_0x40B3668D7226E0DF(uParam0->f_21))
				{
					func_385(&(uParam0->f_21));
					unk_0x1E2BF4457AC05E16((unk_0x2A5ED1AA56D1D7EA(false) - 1));
				}
				else
				{
					func_384(uParam0->f_21);
				}
			}
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_23))
		{
			if (unk_0xC3A7CFC6468E0BAE(uParam0->f_23))
			{
				if (unk_0x40B3668D7226E0DF(uParam0->f_23))
				{
					func_385(&(uParam0->f_23));
					unk_0x1E2BF4457AC05E16((unk_0x2A5ED1AA56D1D7EA(false) - 1));
				}
				else
				{
					func_384(uParam0->f_23);
				}
			}
		}
	}
	else if (func_54(uParam1->f_31))
	{
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_22))
		{
			if (unk_0x40B3668D7226E0DF(uParam0->f_22))
			{
				func_385(&(uParam0->f_22));
				unk_0x1E2BF4457AC05E16((unk_0x2A5ED1AA56D1D7EA(false) - 1));
			}
			else
			{
				func_384(uParam0->f_22);
			}
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_21))
		{
			if (unk_0xC3A7CFC6468E0BAE(uParam0->f_21))
			{
				if (unk_0x40B3668D7226E0DF(uParam0->f_21))
				{
					func_385(&(uParam0->f_21));
					unk_0x1E2BF4457AC05E16((unk_0x2A5ED1AA56D1D7EA(false) - 1));
				}
				else
				{
					func_384(uParam0->f_21);
				}
			}
		}
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_23))
		{
			if (unk_0xC3A7CFC6468E0BAE(uParam0->f_23))
			{
				if (unk_0x40B3668D7226E0DF(uParam0->f_23))
				{
					func_385(&(uParam0->f_23));
					unk_0x1E2BF4457AC05E16((unk_0x2A5ED1AA56D1D7EA(false) - 1));
				}
				else
				{
					func_384(uParam0->f_23);
				}
			}
		}
	}
	else if (func_53(uParam1->f_31) || func_50(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0xC3A7CFC6468E0BAE(uParam0->f_22))
		{
			if (unk_0x40B3668D7226E0DF(uParam0->f_22))
			{
				func_385(&(uParam0->f_22));
				unk_0x1E2BF4457AC05E16((unk_0x2A5ED1AA56D1D7EA(false) - 1));
			}
			else
			{
				func_384(uParam0->f_22);
			}
		}
	}
	if (func_56(uParam1->f_31) && !uParam0->f_49)
	{
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_5) && !unk_0xC3A7CFC6468E0BAE(uParam0->f_6))
		{
			uParam0->f_4 = 0;
			return 1;
		}
	}
	else if (uParam0->f_49)
	{
		if (((!unk_0xC3A7CFC6468E0BAE(uParam0->f_27) && !unk_0xC3A7CFC6468E0BAE(uParam0->f_26)) && !unk_0xC3A7CFC6468E0BAE(uParam0->f_25)) && !unk_0xC3A7CFC6468E0BAE(uParam0->f_24))
		{
			uParam0->f_4 = 0;
			return 1;
		}
	}
	else if (func_55(uParam1->f_31, -1))
	{
		if ((!unk_0xC3A7CFC6468E0BAE(uParam0->f_23) && !unk_0xC3A7CFC6468E0BAE(uParam0->f_21)) && !unk_0xC3A7CFC6468E0BAE(uParam0->f_22))
		{
			uParam0->f_4 = 0;
			return 1;
		}
	}
	else if (func_54(uParam1->f_31))
	{
		if ((!unk_0xC3A7CFC6468E0BAE(uParam0->f_23) && !unk_0xC3A7CFC6468E0BAE(uParam0->f_21)) && !unk_0xC3A7CFC6468E0BAE(uParam0->f_22))
		{
			uParam0->f_4 = 0;
			return 1;
		}
	}
	else if (func_53(uParam1->f_31) || func_50(unk_0xE0BDAFA1A39552D6()))
	{
		if (!unk_0xC3A7CFC6468E0BAE(uParam0->f_22))
		{
			uParam0->f_4 = 0;
			return 1;
		}
	}
	return 0;
}

int func_384(var uParam0)
{
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		unk_0x05482B0CE9645411(uParam0);
		return unk_0x40B3668D7226E0DF(uParam0);
	}
	return 0;
}

void func_385(var uParam0)
{
	var uVar0;
	
	if (unk_0xC7A68C5C107A1253(*uParam0))
	{
		if (!unk_0x40B3668D7226E0DF(*uParam0))
		{
		}
	}
	if (unk_0xC3A7CFC6468E0BAE(*uParam0))
	{
		uVar0 = unk_0x4C4151C3DEC199DC(*uParam0);
		unk_0x68BC4628D1B1B784(&uVar0);
	}
}

void func_386(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0->f_30))
	{
		unk_0xF30CBC00D9F6D48D(&(uParam0->f_30));
	}
	if (unk_0xC1EDB61CE0A4B94E(uParam0->f_38))
	{
		unk_0xF30CBC00D9F6D48D(&(uParam0->f_38));
	}
}

void func_387()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 110)
	{
		Global_1736120[iVar0] = -1;
		iVar0++;
	}
}

void func_388()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= (Local_1772.f_9 - 1))
	{
		uVar1 = func_338(iVar0);
		if (unk_0xC1EDB61CE0A4B94E(uVar1) && unk_0xA2C0F3D7469C0A0B(uVar1))
		{
			unk_0xF30CBC00D9F6D48D(&uVar1);
			Local_1772.f_473[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_389(var uParam0)
{
	Local_1772.f_3 = *uParam0;
	Local_1772.f_4 = uParam0->f_2;
	Local_1772.f_5 = uParam0->f_1;
	Local_1772.f_2 = func_413(*uParam0);
	Local_1772.f_15 = func_410(Local_1772.f_2);
	Local_1772.f_10 = func_409(Local_1772.f_2, Local_1772.f_15);
	Global_3932160.f_31 = -1;
	Local_239.f_699 = func_408(Local_1772.f_2);
	Local_239.f_698 = Local_1772.f_15;
	Local_1195[unk_0xE0BDAFA1A39552D6() /*18*/].f_1.f_15 = func_408(Local_1772.f_2);
	if (Local_1772.f_15 == func_52())
	{
		func_118(1);
		func_380();
	}
	unk_0xEC43D0BC14815F9E(32, 0, Local_1772.f_4);
	func_406(0, -1, 0);
	unk_0x8C2CCD685DA243F6(&Local_941, 254);
	unk_0xE51AD091F27ECBFF(&Local_1195, 577);
	if (!func_405())
	{
		func_380();
	}
	if (unk_0x17CC0D5008835470())
	{
	}
	else
	{
		func_380();
	}
	func_390();
}

void func_390()
{
	func_398(Local_1772.f_3, &(Local_1772.f_16));
	func_393();
	func_391();
	if (func_122())
	{
		func_127(1);
	}
}

void func_391()
{
	Local_1772.f_591.f_3 = "anim@apt_trans@garage";
	Local_1772.f_591.f_4 = "gar_open_1_left";
	Local_1772.f_591.f_20 = 0f;
	Local_1772.f_591.f_21 = 0.45f;
	Local_1772.f_591.f_54 = "GTAO_EXEC_WH_GARAGE_DOOR_SOUNDS";
	Local_1772.f_591.f_53 = "Door_Open";
	switch (func_100(Local_1772.f_2))
	{
		case 0:
			Local_1772.f_585 = { 1104.275f, -3101.614f, -40f };
			Local_1772.f_588 = { 1105.483f, -3097.071f, -36.9999f };
			Local_1772.f_591.f_14 = { 1105.095f, -3099.446f, -40f };
			Local_1772.f_591.f_17 = { 0f, 0f, 26.64f };
			break;
		
		case 1:
			Local_1772.f_585 = { 1071.821f, -3105.487f, -40f };
			Local_1772.f_588 = { 1073.979f, -3099.819f, -36.9999f };
			Local_1772.f_591.f_14 = { 1073.092f, -3102.483f, -40f };
			Local_1772.f_591.f_17 = { 0f, 0f, 26.64f };
			break;
		
		case 2:
			Local_1772.f_585 = { 1026.509f, -3104.374f, -40f };
			Local_1772.f_588 = { 1028.926f, -3098.688f, -36.9999f };
			Local_1772.f_591.f_14 = { 1027.822f, -3101.432f, -40f };
			Local_1772.f_591.f_17 = { 0f, 0f, 26.64f };
			break;
	}
	func_392(&(Local_1772.f_591));
}

void func_392(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	struct<3> Var13;
	float fVar16;
	
	Var0 = { func_37(231.848f, -1006.707f, -99.992f, 63.36f) };
	Var3 = { 0f, 0f, -63.36f };
	Var6 = { func_37(233.2975f, -1005.81f, -98.5457f, 63.36f) };
	Var9 = { -26.8902f, -0.038f, 129.5137f };
	fVar12 = 30.3982f;
	Var13 = { Var6 - Var0 };
	fVar16 = (Var9.f_2 - Var3.f_2);
	uParam0->f_6 = { func_37(func_37(uParam0->f_14, (-1f * uParam0->f_17.f_2)) + Var13, uParam0->f_17.f_2) };
	uParam0->f_9 = { Var9 };
	uParam0->f_9.f_2 = (uParam0->f_17.f_2 + fVar16);
	uParam0->f_12 = fVar12;
}

void func_393()
{
	int iVar0;
	
	Local_1772.f_9 = func_397(func_100(Local_1772.f_2));
	if (func_332(Local_1772.f_15))
	{
		Local_1772.f_6 = func_367(Local_1772.f_15, Local_1772.f_2);
		Local_1772.f_8 = Local_1772.f_6;
		Local_1772.f_7 = Local_1772.f_6;
		if (unk_0x587E5997B76F47FE())
		{
			if (Local_1772.f_15 != unk_0xE0BDAFA1A39552D6())
			{
				Local_1772.f_14 = 1;
				func_387();
				func_347(Local_1772.f_15, Local_1772.f_2);
				func_396();
			}
			else
			{
				func_394();
			}
			func_358();
		}
		iVar0 = 0;
		while (iVar0 <= (Local_1772.f_6 - 1))
		{
			if (iVar0 < Local_1772.f_9)
			{
				if (!func_346(iVar0))
				{
					if (!func_344(iVar0))
					{
						if (unk_0x1D8189836184FF10(Local_941.f_1[iVar0]))
						{
							func_339(iVar0);
							Local_1772.f_249[iVar0] = 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_394()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_409(Local_1772.f_2, Local_1772.f_15);
	iVar1 = 0;
	while (iVar1 <= func_367(Local_1772.f_15, Local_1772.f_2) + 2)
	{
		if (iVar1 < func_395(Local_1772.f_2))
		{
			Local_941.f_1[iVar1] = func_355(func_356(iVar0, iVar1, -1, -1));
			if (iVar1 >= func_367(Local_1772.f_15, Local_1772.f_2))
			{
			}
		}
		iVar1++;
	}
}

int func_395(int iParam0)
{
	int iVar0;
	
	if (func_101(iParam0))
	{
		iVar0 = func_100(iParam0);
		if (iVar0 == 0)
		{
			return 16;
		}
		else if (iVar0 == 1)
		{
			return 42;
		}
		else
		{
			return 111;
		}
	}
	return 0;
}

void func_396()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= func_367(Local_1772.f_15, Local_1772.f_2) + 2)
	{
		if (iVar0 < func_395(Local_1772.f_2))
		{
			Local_941.f_1[iVar0] = func_355(Global_1736120[iVar0]);
			if (iVar0 >= func_367(Local_1772.f_15, Local_1772.f_2))
			{
			}
		}
		iVar0++;
	}
}

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16;
			break;
		
		case 1:
			return 42;
			break;
		
		case 2:
			return 111;
			break;
	}
	return 0;
}

void func_398(int iParam0, var uParam1)
{
	switch (func_51(iParam0))
	{
		case 0:
			func_399(iParam0, uParam1);
			break;
	}
}

void func_399(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_413(iParam0);
	switch (func_100(iVar0))
	{
		case 0:
			func_404(uParam1);
			break;
		
		case 1:
			func_403(uParam1);
			break;
		
		case 2:
			func_402(uParam1);
			break;
	}
	func_401(iParam0, &(uParam1->f_73));
	func_400(iParam0, uParam1);
	uParam1->f_5 = "AM_MP_WAREHOUSE";
	switch (iParam0)
	{
		case 0:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { 55.6698f, -2562.517f, 9.7216f };
			uParam1->f_6.f_9 = { -26.9934f, 0f, 158.2394f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { 55.173f, -2569.18f, 5.005f };
			uParam1->f_6.f_17 = { 0f, 0f, 88.92f };
			uParam1->f_6.f_20 = 0.185f;
			uParam1->f_6.f_21 = 0.45f;
			uParam1->f_6.f_39 = { 44.7715f, -2557.584f, 10.1455f };
			uParam1->f_6.f_42 = { -8.0643f, 0f, -152.2484f };
			break;
		
		case 1:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { -1085.303f, -1258.34f, 6.2175f };
			uParam1->f_6.f_9 = { -8.7714f, 0f, -149.6619f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { -1083.55f, -1262.168f, 4.584f };
			uParam1->f_6.f_17 = { 0f, 0f, 120f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			uParam1->f_6.f_39 = { -1059.413f, -1258.688f, 9.2647f };
			uParam1->f_6.f_42 = { -0.8577f, -0.0673f, 101.8546f };
			uParam1->f_6.f_23 = joaat("prop_damdoor_01");
			uParam1->f_6.f_24 = { -1083.314f, -1262.911f, 6.048f };
			uParam1->f_6.f_27 = { 0f, 0f, 120f };
			uParam1->f_6.f_31 = joaat("prop_damdoor_01");
			uParam1->f_6.f_32 = { -1083.289f, -1262.854f, 3.742f };
			uParam1->f_6.f_35 = { 0f, 0f, 120f };
			break;
		
		case 2:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { 894.9501f, -1036.63f, 35.7994f };
			uParam1->f_6.f_9 = { -6.6207f, 0f, -74.3905f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { 896.377f, -1036.943f, 34.114f };
			uParam1->f_6.f_17 = { 0f, 0f, -176.04f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			uParam1->f_6.f_39 = { 910.2495f, -1025.511f, 38.8374f };
			uParam1->f_6.f_42 = { -9.788f, 0f, 130.8543f };
			break;
		
		case 3:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { 249.927f, -1959.511f, 23.9722f };
			uParam1->f_6.f_9 = { 0.0683f, 0f, 47.4904f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { 246.915f, -1957.426f, 22.234f };
			uParam1->f_6.f_17 = { 0f, 0f, -41.4f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			uParam1->f_6.f_39 = { 257.5783f, -1951.699f, 24.6414f };
			uParam1->f_6.f_42 = { -0.1556f, 0f, 115.5168f };
			break;
		
		case 4:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { -422.9159f, 186.277f, 81.3179f };
			uParam1->f_6.f_9 = { 0.2632f, 0f, 96.0908f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { -424.77f, 186.591f, 79.806f };
			uParam1->f_6.f_17 = { 0f, 0f, 6.84f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			break;
		
		case 5:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { -1040.969f, -2022.84f, 13.8865f };
			uParam1->f_6.f_9 = { -4.3062f, 0f, 128.7958f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { -1041.771f, -2024.093f, 12.262f };
			uParam1->f_6.f_17 = { 0f, 0f, 48.6f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			break;
		
		case 6:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { -1269.049f, -810.1869f, 17.6841f };
			uParam1->f_6.f_9 = { -5.2284f, 0f, -154.3061f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { -1267.408f, -811.694f, 16.108f };
			uParam1->f_6.f_17 = { 0f, 0f, 129.24f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			break;
		
		case 7:
			uParam1->f_6.f_3 = "anim@apt_trans@garage";
			uParam1->f_6.f_4 = "gar_open_1_left";
			uParam1->f_6.f_14 = { -873.02f, -2736.37f, 12.96f };
			uParam1->f_6.f_17 = { 0f, 0f, -1.44f };
			uParam1->f_6.f_20 = 0f;
			uParam1->f_6.f_21 = 0.45f;
			func_392(&(uParam1->f_6));
			break;
		
		case 8:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { 275.3322f, -3009.54f, 10.6753f };
			uParam1->f_6.f_9 = { -38.649f, 0f, 167.1707f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { 276.13f, -3015.219f, 5.299f };
			uParam1->f_6.f_17 = { 0f, 0f, 89.64f };
			uParam1->f_6.f_20 = 0.22f;
			uParam1->f_6.f_21 = 0.48f;
			uParam1->f_6.f_23 = joaat("prop_damdoor_01");
			uParam1->f_6.f_24 = { 276.161f, -3016.038f, 6.4456f };
			uParam1->f_6.f_27 = { 0f, 0f, 90f };
			break;
		
		case 9:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { 1575.451f, -2129.365f, 80.8606f };
			uParam1->f_6.f_9 = { -16.8649f, 0f, 103.5603f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { 1569.734f, -2129.194f, 77.335f };
			uParam1->f_6.f_17 = { 0f, 0f, 15.48f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			uParam1->f_6.f_23 = joaat("prop_damdoor_01");
			uParam1->f_6.f_24 = { 1568.861f, -2129.332f, 78.573f };
			uParam1->f_6.f_27 = { 0f, 0f, 15.3f };
			break;
		
		case 10:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { -307.5915f, -2705.994f, 11.3516f };
			uParam1->f_6.f_9 = { -13.9349f, 0f, 44.8217f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { -316.077f, -2698.804f, 6.55f };
			uParam1->f_6.f_17 = { 0f, 0f, 134.28f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			break;
		
		case 11:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { 501.5328f, -645.445f, 28.0574f };
			uParam1->f_6.f_9 = { -22.2649f, 0f, 160.9995f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { 499.179f, -651.811f, 23.909f };
			uParam1->f_6.f_17 = { 0f, 0f, 84.24f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			break;
		
		case 12:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { -539.1638f, -1778.434f, 23.8737f };
			uParam1->f_6.f_9 = { -9.2253f, 0f, -119.9646f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { -528.827f, -1784.887f, 20.598f };
			uParam1->f_6.f_17 = { 0f, 0f, 149.04f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			break;
		
		case 13:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { -294.106f, -1359.92f, 32.7505f };
			uParam1->f_6.f_9 = { -4.7499f, 0f, -0.9732f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { -296.605f, -1353.023f, 30.308f };
			uParam1->f_6.f_17 = { 0f, 0f, -89.64f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			break;
		
		case 14:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { 356.1015f, 326.3331f, 107.5898f };
			uParam1->f_6.f_9 = { -18.8627f, 0f, 59.592f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { 350.351f, 330.055f, 103.445f };
			uParam1->f_6.f_17 = { 0f, 0f, -13.68f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			break;
		
		case 15:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { 925.8218f, -1564.616f, 34.3633f };
			uParam1->f_6.f_9 = { -32.8521f, 0f, -19.6456f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { 927.6f, -1560.443f, 29.943f };
			uParam1->f_6.f_17 = { 0f, 0f, -90.72f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			uParam1->f_6.f_23 = joaat("prop_damdoor_01");
			uParam1->f_6.f_24 = { 927.711f, -1559.567f, 31.094f };
			uParam1->f_6.f_27 = { 0f, 0f, -90f };
			break;
		
		case 16:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { 759.1849f, -906.91f, 26.0423f };
			uParam1->f_6.f_9 = { -1.1809f, 0f, -179.4534f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { 758.631f, -909.267f, 24.438f };
			uParam1->f_6.f_17 = { 0f, 0f, 91.44f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			break;
		
		case 17:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { 1038f, -2170.053f, 32.9912f };
			uParam1->f_6.f_9 = { -22.5347f, 0f, 175.7987f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { 1037.014f, -2172.944f, 30.55f };
			uParam1->f_6.f_17 = { 0f, 0f, 84.96f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			break;
		
		case 18:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { 1017.937f, -2517.583f, 30.4418f };
			uParam1->f_6.f_9 = { -18.4157f, 0f, -15.4654f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { 1019.739f, -2511.918f, 27.445f };
			uParam1->f_6.f_17 = { 0f, 0f, -96.12f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			break;
		
		case 19:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { -248.4653f, 203.9834f, 86.8847f };
			uParam1->f_6.f_9 = { -36.3135f, 0f, -102.8081f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { -245.054f, 204.085f, 83f };
			uParam1->f_6.f_17 = { 0f, 0f, -3.6f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			break;
		
		case 20:
			uParam1->f_6.f_3 = "anim@apt_trans@garage";
			uParam1->f_6.f_4 = "gar_open_1_right";
			uParam1->f_6.f_14 = { 539.003f, -1945.851f, 23.984f };
			uParam1->f_6.f_17 = { 0f, 0f, -131.04f };
			uParam1->f_6.f_20 = 0f;
			uParam1->f_6.f_21 = 0.45f;
			func_392(&(uParam1->f_6));
			break;
		
		case 21:
			uParam1->f_6.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_6.f_4 = "ext_player";
			uParam1->f_6.f_6 = { 97.0925f, -2218.317f, 6.9921f };
			uParam1->f_6.f_9 = { -1.0588f, 0f, -3.5294f };
			uParam1->f_6.f_12 = 40f;
			uParam1->f_6.f_14 = { 97.293f, -2215.945f, 5.502f };
			uParam1->f_6.f_17 = { 0f, 0f, -88.2f };
			uParam1->f_6.f_20 = 0.2f;
			uParam1->f_6.f_21 = 0.46f;
			break;
	}
}

void func_400(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_413(iParam0);
	if (iVar0 == 8 || iVar0 == 21)
	{
		uParam1->f_6.f_54 = "GTAO_EXEC_WH_GARAGE_DOOR_SOUNDS";
		uParam1->f_6.f_53 = "Door_Open";
		uParam1->f_6.f_56 = "GTAO_EXEC_WH_GARAGE_DOOR_SOUNDS";
		uParam1->f_6.f_55 = "Door_Close";
	}
	else
	{
		uParam1->f_6.f_46[0] = "PUSH";
		uParam1->f_6.f_46[1] = "LIMIT";
		uParam1->f_6.f_49[0] = 0.271f;
		uParam1->f_6.f_49[1] = 0.411f;
		uParam1->f_6.f_52 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
		uParam1->f_6.f_56 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
		uParam1->f_6.f_55 = "Closed";
	}
}

void func_401(int iParam0, var uParam1)
{
	switch (func_100(func_413(iParam0)))
	{
		case 0:
			*uParam1 = { 1086.836f, -3103.88f, -41f };
			uParam1->f_3 = { 1105.807f, -3094.803f, -36.0099f };
			break;
		
		case 1:
			*uParam1 = { 1047.356f, -3112.175f, -41f };
			uParam1->f_3 = { 1074.308f, -3092.826f, -33.7074f };
			break;
		
		case 2:
			*uParam1 = { 990.5693f, -3113.382f, -41f };
			uParam1->f_3 = { 1030.264f, -3088.479f, -28.7216f };
			break;
	}
}

void func_402(var uParam0)
{
	*uParam0 = { 1007.135f, -3102.079f, -40f };
	uParam0->f_4 = "ex_int_warehouse_l_dlc";
	uParam0->f_65.f_1 = { -15.091f, 2.575f, 0f };
	uParam0->f_65.f_4 = { -15.091f, 5.875f, 2.2f };
	uParam0->f_65.f_7 = 3.86f;
	uParam0->f_65 = 90f;
}

void func_403(var uParam0)
{
	*uParam0 = { 1056.488f, -3105.724f, -40f };
	uParam0->f_4 = "ex_int_warehouse_m_dlc";
	uParam0->f_65.f_1 = { -8.78f, 6.917f, 0f };
	uParam0->f_65.f_4 = { -8.78f, 10f, 2.2f };
	uParam0->f_65.f_7 = 3.86f;
	uParam0->f_65 = 90f;
}

void func_404(var uParam0)
{
	*uParam0 = { 1094.988f, -3104.776f, -40f };
	uParam0->f_4 = "ex_int_warehouse_s_dlc";
	uParam0->f_65.f_1 = { -7.911f, 4.559f, 0f };
	uParam0->f_65.f_4 = { -7.911f, 6.989f, 2.2f };
	uParam0->f_65.f_7 = 3.86f;
	uParam0->f_65 = 90f;
}

int func_405()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x17CC0D5008835470())
		{
			return 0;
		}
		if (unk_0x9D9BDEBCB8E7ADC5())
		{
			return 1;
		}
		if (func_375())
		{
			return 0;
		}
		if (func_373(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_406(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD225119541DF4E45();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_381();
			}
			else
			{
				return 0;
			}
		}
		if (!func_407())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x17CC0D5008835470())
				{
					if (!bParam2)
					{
						func_381();
					}
					else
					{
						return 0;
					}
				}
				if (func_375())
				{
					if (!bParam2)
					{
						func_381();
					}
					else
					{
						return 0;
					}
				}
				if (func_373(155))
				{
					if (!bParam2)
					{
						func_381();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE5302F426D0500D6())
			{
				if (!bParam2)
				{
					func_381();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD225119541DF4E45();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			if (!bParam2)
			{
				func_381();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE5302F426D0500D6())
	{
		if (!bParam2)
		{
			func_381();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_407()
{
	return Global_1315888;
}

int func_408(int iParam0)
{
	if (func_101(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 16;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 42;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 111;
			}
		
		default:
	}
	return 0;
}

int func_409(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_101(iParam0) && iParam1 != func_52())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587816[iParam1 /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_410(int iParam0)
{
	int iVar0;
	
	if (func_199(unk_0xE0BDAFA1A39552D6(), 1))
	{
		iVar0 = func_412(unk_0xE0BDAFA1A39552D6());
		if (func_3(iVar0, 0, 1))
		{
			if (func_411(iVar0, iParam0))
			{
				return iVar0;
			}
		}
	}
	else if (func_198(iParam0))
	{
		return unk_0xE0BDAFA1A39552D6();
	}
	return func_52();
}

int func_411(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_101(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587816[iParam0 /*444*/].f_250.f_68[iVar0 /*2*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_412(int iParam0)
{
	if (iParam0 != func_52())
	{
		return Global_1610705[iParam0 /*178*/].f_10;
	}
	return func_52();
}

int func_413(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 3;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
			return 6;
			break;
		
		case 6:
			return 7;
			break;
		
		case 7:
			return 8;
			break;
		
		case 8:
			return 9;
			break;
		
		case 9:
			return 10;
			break;
		
		case 10:
			return 11;
			break;
		
		case 11:
			return 12;
			break;
		
		case 12:
			return 13;
			break;
		
		case 13:
			return 14;
			break;
		
		case 14:
			return 15;
			break;
		
		case 15:
			return 16;
			break;
		
		case 16:
			return 17;
			break;
		
		case 17:
			return 18;
			break;
		
		case 18:
			return 19;
			break;
		
		case 19:
			return 20;
			break;
		
		case 20:
			return 21;
			break;
		
		case 21:
			return 22;
			break;
	}
	return 0;
}

