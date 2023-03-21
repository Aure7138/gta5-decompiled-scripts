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
	var uLocal_56 = 10;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 2;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 8;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 8;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	float fLocal_114 = 0f;
	var uLocal_115 = 0;
	char* sLocal_116 = NULL;
	int iLocal_117 = 0;
	struct<3> Local_118 = { 0, 0, 0 } ;
	char* sLocal_121 = NULL;
	char* sLocal_122 = NULL;
	char* sLocal_123 = NULL;
	char* sLocal_124 = NULL;
	char* sLocal_125 = NULL;
	var uLocal_126 = 0;
	int iLocal_127 = 0;
	bool bLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	struct<6> Local_131 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_137 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_143 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_149 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_155 = { 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_161 = { 0, 0, 0, 0 } ;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	struct<6> Local_167 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_173 = { 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_179 = { 0, 0, 0, 0 } ;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	struct<6> Local_185 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_191 = { 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_197 = { 0, 0, 0, 0 } ;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	struct<4> Local_203 = { 0, 0, 0, 0 } ;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	struct<6> Local_209 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_215 = { 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_221 = { 0, 0, 0, 0 } ;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	struct<6> Local_227 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_233 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	struct<700> Local_241 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0 } ;
	var uLocal_941 = 0;
	int iLocal_942 = 0;
	var uLocal_943 = 0;
	struct<169> Local_944 = { 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141 } ;
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
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	struct<19> Local_1254[32];
	struct<683> Local_1863 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, -1, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, -1, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2546 = 0;
	struct<12> Local_2547 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 2;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	struct<3> Local_2566[2];
	struct<3> ScriptParam_0 = { 0, 0, 0 } ;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	fLocal_101 = 3f;
	fLocal_102 = 0f;
	fLocal_103 = 2f;
	fLocal_104 = 100f;
	fLocal_114 = 0.5f;
	if (unk_0x63C468D583002D23())
	{
		func_400(&ScriptParam_0);
	}
	else
	{
		func_391();
	}
	while (true)
	{
		func_390();
		if (func_380())
		{
			func_379(1);
			func_378(1);
			func_391();
		}
		if (func_377(ScriptParam_0.f_2))
		{
			func_379(1);
			func_378(1);
			func_391();
		}
		func_60();
		if (unk_0x415DF132F15085E8())
		{
			func_1();
		}
	}
}

void func_1()
{
	func_4(&(Local_944.f_113), &(Local_1254[Local_241.f_9 /*19*/].f_1), &Local_241, &Global_3932160);
	func_2(&(Local_1254[iLocal_942 /*19*/].f_18), &(Local_944.f_168), &iLocal_942);
}

void func_2(var uParam0, var uParam1, int iParam2)
{
	if (*uParam0 > 0)
	{
		if ((*uParam1)[*uParam0] == 0)
		{
			if (func_3(unk_0x0C36F33B3F746611(*iParam2), 1, 1))
			{
				unk_0xEB79FECD9022AAF0(uParam1[*uParam0], *iParam2);
			}
		}
	}
	iParam2->f_1 = 0;
	iParam2->f_1 = 0;
	while (iParam2->f_1 < 141)
	{
		if ((*uParam1)[iParam2->f_1] != 0)
		{
			if (unk_0x48B8265059381CD0((*uParam1)[iParam2->f_1], *iParam2))
			{
				if (!func_3(unk_0x0C36F33B3F746611(*iParam2), 0, 1))
				{
					unk_0x21E7933CCC7B3724(uParam1[iParam2->f_1], *iParam2);
				}
				else
				{
					if (!unk_0xD54DE3C9493BFEC2(unk_0x0C36F33B3F746611(*iParam2)))
					{
						unk_0x21E7933CCC7B3724(uParam1[iParam2->f_1], *iParam2);
					}
					if (*uParam0 != iParam2->f_1)
					{
						unk_0x21E7933CCC7B3724(uParam1[iParam2->f_1], *iParam2);
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
	if (iVar0 != -1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCF7855B965948E97(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433125.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_4(var uParam0, var uParam1, var uParam2, var uParam3)
{
	bool bVar0;
	
	if (Global_1751034 == 1)
	{
		if (uParam0->f_50 != 1)
		{
			func_59(uParam0, 1, 0);
		}
		if (uParam0->f_1 != 27)
		{
			uParam0->f_1 = 27;
		}
		Global_1751034 = 0;
	}
	switch (uParam0->f_50)
	{
		case 0:
			uParam0->f_53 = uParam2->f_699;
			uParam0->f_54 = uParam2->f_700;
			bVar0 = false;
			if ((((((((func_58(uParam3->f_31) || func_57(uParam3->f_31, -1)) || func_56(uParam3->f_31)) || func_55(uParam3->f_31)) || func_54(unk_0xBE369BE1BC57A796())) || func_50(uParam3->f_31, 0, 0)) || func_49(unk_0xBE369BE1BC57A796())) || uParam0->f_49) || func_46(unk_0xBE369BE1BC57A796()))
			{
				bVar0 = true;
				if (uParam0->f_4 == 1)
				{
					if (func_34(uParam0, uParam3, 0))
					{
						bVar0 = false;
					}
				}
				else
				{
					func_27(uParam0, uParam3);
				}
			}
			if (func_58(uParam3->f_31))
			{
			}
			if (!bVar0)
			{
				if (!Global_1591073)
				{
					if (uParam0->f_49 == 0)
					{
						if (unk_0xD54DE3C9493BFEC2(unk_0x0C36F33B3F746611(uParam2->f_9)))
						{
							if (uParam2->f_698 == unk_0x0C36F33B3F746611(uParam2->f_9))
							{
								if (unk_0x48B8265059381CD0(*uParam1, 1))
								{
									uParam0->f_1 = uParam1->f_7;
									if (unk_0x48B8265059381CD0(*uParam1, 2) && !Global_1591073)
									{
										func_59(uParam0, 1, 0);
									}
									else
									{
										func_59(uParam0, 2, 0);
									}
								}
							}
							else if (uParam2->f_698 > -1)
							{
							}
						}
						else if (uParam2->f_9 > -1 && unk_0x7268A1112372AA44(unk_0x0C36F33B3F746611(uParam2->f_9)))
						{
						}
					}
					else if (uParam2->f_698 == unk_0x0C36F33B3F746611(uParam2->f_9))
					{
						if (unk_0xD54DE3C9493BFEC2(unk_0x0C36F33B3F746611(uParam2->f_9)))
						{
							if (unk_0x48B8265059381CD0(*uParam1, 1))
							{
								uParam0->f_1 = uParam1->f_7;
								if (unk_0x48B8265059381CD0(*uParam1, 2) && !Global_1591073)
								{
									func_59(uParam0, 1, 0);
								}
								else
								{
									func_59(uParam0, 2, 0);
								}
							}
						}
						else
						{
							uParam0->f_1 = 11;
							func_59(uParam0, 2, 0);
						}
					}
					else if (uParam2->f_698 > -1)
					{
					}
				}
				else
				{
					uParam0->f_1 = 0;
					func_59(uParam0, 2, 0);
				}
			}
			break;
		
		case 1:
			if ((unk_0x48B8265059381CD0(uParam1->f_3, 1) && !unk_0x48B8265059381CD0(*uParam1, 0)) || Global_1591073)
			{
				func_59(uParam0, 2, 0);
			}
			else
			{
				func_23(uParam0, uParam1, uParam2, 0);
			}
			break;
		
		case 2:
			if ((((unk_0x48B8265059381CD0(uParam1->f_3, 0) && !unk_0x48B8265059381CD0(*uParam1, 0)) || unk_0x48B8265059381CD0(*uParam2, 8)) && !Global_1591073) || func_22())
			{
				func_59(uParam0, 1, 0);
			}
			break;
	}
	if ((((((!func_57(uParam3->f_31, -1) && !func_56(uParam3->f_31)) && !func_58(uParam3->f_31)) && !func_55(uParam3->f_31)) && !func_54(unk_0xBE369BE1BC57A796())) && !func_49(unk_0xBE369BE1BC57A796())) && !func_46(unk_0xBE369BE1BC57A796()))
	{
		switch (uParam0->f_52)
		{
			case 0:
				if (!Global_1591073)
				{
					if (func_3(unk_0x0C36F33B3F746611(uParam2->f_9), 0, 0))
					{
						if (unk_0xD54DE3C9493BFEC2(unk_0x0C36F33B3F746611(uParam2->f_9)))
						{
							if (unk_0xDC0834EFCFBBC8C6() == unk_0xB421DCBFBBE3286E(unk_0x0C36F33B3F746611(uParam2->f_9)))
							{
								if (uParam3->f_33 == 10)
								{
									if (unk_0x48B8265059381CD0(*uParam1, 2) && !Global_1591073)
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
				if (unk_0x48B8265059381CD0(uParam1->f_4, 5) || Global_1591073)
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
				if ((unk_0x48B8265059381CD0(uParam1->f_4, 4) && !Global_1591073) || func_22())
				{
					func_21(uParam0, 3, 0);
				}
				break;
			}
	}
	switch (uParam0->f_51)
	{
		case 0:
			if (!Global_1591073)
			{
				if (func_3(unk_0x0C36F33B3F746611(uParam2->f_9), 0, 0))
				{
					if (unk_0xD54DE3C9493BFEC2(unk_0x0C36F33B3F746611(uParam2->f_9)))
					{
						if (unk_0xDC0834EFCFBBC8C6() == unk_0xB421DCBFBBE3286E(unk_0x0C36F33B3F746611(uParam2->f_9)))
						{
							if (unk_0x48B8265059381CD0(*uParam1, 1))
							{
								uParam0->f_2 = uParam1->f_8;
								if (unk_0x48B8265059381CD0(*uParam1, 4) && !Global_1591073)
								{
									func_59(uParam0, 1, 1);
								}
								else
								{
									func_59(uParam0, 2, 1);
								}
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_2 = 0;
				func_59(uParam0, 2, 1);
			}
			break;
		
		case 1:
			if ((unk_0x48B8265059381CD0(uParam1->f_3, 1) && unk_0x48B8265059381CD0(*uParam1, 0)) || Global_1591073)
			{
				func_59(uParam0, 2, 1);
			}
			else
			{
				func_23(uParam0, uParam1, uParam2, 1);
			}
			break;
		
		case 2:
			if ((unk_0x48B8265059381CD0(uParam1->f_3, 0) && unk_0x48B8265059381CD0(*uParam1, 0)) && !Global_1591073)
			{
				func_59(uParam0, 1, 1);
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
	Global_25456 = 0;
	func_8(uParam1);
	unk_0x21E7933CCC7B3724(uParam0, 15);
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
		if (Global_36484[iVar0 /*32*/])
		{
			Global_36484[iVar0 /*32*/].f_7 = 1;
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
		if (Global_36484[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_8(var uParam0)
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0xEF9294ED57E4AC3D(unk_0x17B5CC8A8615737D());
	}
	if (unk_0x48B8265059381CD0(*uParam0, 10))
	{
		unk_0xB8CAC5F3774894A1("MP_APT_STRIPPER_SCENE");
		unk_0x21E7933CCC7B3724(uParam0, 10);
	}
	unk_0x33CBABDFE7B17924(&(uParam0->f_697));
	unk_0x21E7933CCC7B3724(&Global_2359301, 15);
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
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xEB79FECD9022AAF0(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_14(0))
		{
			func_11(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_11(int iParam0)
{
	if (Global_14604)
	{
		func_13(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xEB79FECD9022AAF0(&Global_2314, 16);
	}
	if (unk_0x3ED8A07C6FA41E1B())
	{
		unk_0x660E8E7836E95077(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 30);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 30);
	}
	if (!func_12())
	{
		Global_14443.f_1 = 3;
	}
}

int func_12()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
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
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EA69F96033BA4FB(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0xBB4FC17174B4A105(Global_14380);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
}

int func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_15()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_16()
{
	func_17(unk_0xBE369BE1BC57A796(), 0);
}

void func_17(int iParam0, int iParam1)
{
	Global_2421664[iParam0 /*358*/].f_64.f_3 = iParam1;
}

void func_18()
{
	Global_2433125.f_655.f_10 = 0;
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
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_188 != 0;
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
		if (!unk_0x48B8265059381CD0(*uParam2, 3) || unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), uParam2->f_8) > 1000)
		{
			bVar0 = true;
			if (unk_0x48B8265059381CD0(*uParam1, 0))
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
		if (!unk_0x48B8265059381CD0(*uParam2, 1) || unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), uParam2->f_7) > 1000)
		{
			bVar0 = true;
			if (!unk_0x48B8265059381CD0(*uParam1, 0))
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
			if (unk_0x48B8265059381CD0(uParam1->f_3, 2) || unk_0x48B8265059381CD0(uParam1->f_4, 2))
			{
				func_26(uParam0, bParam3);
				bVar1 = true;
			}
			else if (unk_0x48B8265059381CD0(uParam1->f_3, 3) || unk_0x48B8265059381CD0(uParam1->f_4, 3))
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
			uParam2->f_8 = unk_0xCB150A8B81012128();
			unk_0xEB79FECD9022AAF0(uParam2, 3);
		}
		else
		{
			uParam2->f_7 = unk_0xCB150A8B81012128();
			unk_0xEB79FECD9022AAF0(uParam2, 1);
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
			iVar1 = (unk_0xAF919E368384882D() - 1);
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
		if (iVar1 > (unk_0xAF919E368384882D() - 1))
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
		if (func_58(uParam1->f_31) && !uParam0->f_49)
		{
			if (func_28(unk_0xC124B46B968EA962(false) + 4, 0, 1))
			{
				unk_0x79AA4F6EE2078BCD(unk_0xC124B46B968EA962(false) + 4);
				uParam0->f_4 = 1;
			}
		}
		else if (uParam0->f_49)
		{
			if (func_28(unk_0xC124B46B968EA962(false) + 4, 0, 1))
			{
				unk_0x79AA4F6EE2078BCD(unk_0xC124B46B968EA962(false) + 4);
				uParam0->f_4 = 1;
			}
		}
		else if (func_57(uParam1->f_31, -1))
		{
			if (func_28(unk_0xC124B46B968EA962(false) + 6, 0, 1))
			{
				unk_0x79AA4F6EE2078BCD(unk_0xC124B46B968EA962(false) + 6);
				uParam0->f_4 = 1;
			}
		}
		else if (func_56(uParam1->f_31))
		{
			if (func_28(unk_0xC124B46B968EA962(false) + 3, 0, 1))
			{
				unk_0x79AA4F6EE2078BCD(unk_0xC124B46B968EA962(false) + 3);
				uParam0->f_4 = 1;
			}
		}
		else if (func_50(uParam1->f_31, 0, 0))
		{
			if (func_28(unk_0xC124B46B968EA962(false) + 2, 0, 1))
			{
				unk_0x79AA4F6EE2078BCD(unk_0xC124B46B968EA962(false) + 2);
				uParam0->f_4 = 1;
			}
		}
		else if (((func_55(uParam1->f_31) || func_54(unk_0xBE369BE1BC57A796())) || func_49(unk_0xBE369BE1BC57A796())) || func_46(unk_0xBE369BE1BC57A796()))
		{
			if (func_28(unk_0xC124B46B968EA962(false) + 1, 0, 1))
			{
				unk_0x79AA4F6EE2078BCD(unk_0xC124B46B968EA962(false) + 1);
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
	
	if (!unk_0x48B8265059381CD0(Global_1364290, 0))
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
		if (!bParam4 && Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] != 3)
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
			return Global_1364290.f_1;
			break;
		
		case 1:
			return Global_1364290.f_2;
			break;
		
		case 2:
			return Global_1364290.f_3;
			break;
	}
	return 0;
}

int func_32(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xBE369BE1BC57A796();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_212;
			}
			else
			{
				return unk_0xA2D6CF086A2F622F(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_213;
			}
			else
			{
				return unk_0x71726B5B622E1778(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_214;
			}
			else
			{
				return unk_0xC124B46B968EA962(!bParam1);
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
			return Global_1364298;
			break;
		
		case 1:
			return Global_1364299;
			break;
		
		case 2:
			return Global_1364300;
			break;
	}
	return 0;
}

int func_34(var uParam0, var uParam1, int iParam2)
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
	struct<3> Var72;
	struct<3> Var78;
	float fVar84;
	
	if (unk_0xEE1438344034E8AA())
	{
		unk_0xC9929D396A4491EE(1);
	}
	if (func_58(uParam1->f_31) && !uParam0->f_49)
	{
		if (!unk_0x841F312D66362BF7(uParam0->f_5))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					if (func_44(unk_0xBE369BE1BC57A796(), 0) >= 0)
					{
						func_42(func_44(unk_0xBE369BE1BC57A796(), 0), 421, &Var0, 0);
						uParam0->f_9 = { Var0 };
						uParam0->f_5 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_9, 1, 1, 0));
						unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bar", iParam2);
						unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Bar", unk_0x03981D6F4893D7D0(uParam0->f_5));
						unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_5), 1);
						unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_5), true);
						unk_0xCEDF2A713644AEDA(unk_0x03981D6F4893D7D0(uParam0->f_5), false, 0);
						unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_5), false, 0);
						unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_5), 1);
					}
				}
			}
		}
		if (!unk_0x841F312D66362BF7(uParam0->f_6))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					if (func_44(unk_0xBE369BE1BC57A796(), 0) >= 0)
					{
						func_42(func_44(unk_0xBE369BE1BC57A796(), 0), 420, &Var6, 0);
						uParam0->f_12 = { Var6 };
						uParam0->f_6 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_12, 1, 1, 0));
						unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bedroom", iParam2);
						unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Bedroom", unk_0x03981D6F4893D7D0(uParam0->f_6));
						unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_6), 1);
						unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_6), true);
						unk_0xCEDF2A713644AEDA(unk_0x03981D6F4893D7D0(uParam0->f_6), false, 0);
						unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_6), false, 0);
						unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_6), 1);
					}
				}
			}
		}
		if (!unk_0x841F312D66362BF7(uParam0->f_7))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					if (func_44(unk_0xBE369BE1BC57A796(), 0) >= 0)
					{
						func_42(func_44(unk_0xBE369BE1BC57A796(), 0), 586, &Var12, 0);
						uParam0->f_15 = { Var12 };
						uParam0->f_7 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_15, 1, 1, 0));
						unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bedroom_02", iParam2);
						unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Bedroom_02", unk_0x03981D6F4893D7D0(uParam0->f_7));
						unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_7), 1);
						unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_7), true);
						unk_0xCEDF2A713644AEDA(unk_0x03981D6F4893D7D0(uParam0->f_7), false, 0);
						unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_7), false, 0);
						unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_7), 1);
					}
				}
			}
		}
		if (!unk_0x841F312D66362BF7(uParam0->f_8))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					if (func_44(unk_0xBE369BE1BC57A796(), 0) >= 0)
					{
						func_42(func_44(unk_0xBE369BE1BC57A796(), 0), 585, &Var18, 0);
						uParam0->f_18 = { Var18 };
						uParam0->f_8 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_18, 1, 1, 0));
						unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bedroom_03", iParam2);
						unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Bedroom_03", unk_0x03981D6F4893D7D0(uParam0->f_8));
						unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_8), 1);
						unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_8), true);
						unk_0xCEDF2A713644AEDA(unk_0x03981D6F4893D7D0(uParam0->f_8), false, 0);
						unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_8), false, 0);
						unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_8), 1);
					}
				}
			}
		}
	}
	else if (uParam0->f_49)
	{
		if (!unk_0x841F312D66362BF7(uParam0->f_24))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					func_42(uParam0->f_3, 550, &Var24, 0);
					uParam0->f_37 = { Var24 };
					uParam0->f_24 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_37, 1, 1, 0));
					unk_0x04A5FAE5B1EB8E28(unk_0xF9D7EA2FA85E2505(uParam0->f_24), Var24.f_3, 2, 1);
					unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_01", iParam2);
					unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Exterior_01", unk_0x03981D6F4893D7D0(uParam0->f_24));
					unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_24), 1);
					unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_24), true);
					unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_24), 1);
				}
			}
		}
		if (!unk_0x841F312D66362BF7(uParam0->f_25))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					func_42(uParam0->f_3, 551, &Var30, 0);
					uParam0->f_40 = { Var30 };
					uParam0->f_25 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_40, 1, 1, 0));
					unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_02", iParam2);
					unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Exterior_02", unk_0x03981D6F4893D7D0(uParam0->f_25));
					unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_25), 1);
					unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_25), true);
					unk_0xCEDF2A713644AEDA(unk_0x03981D6F4893D7D0(uParam0->f_25), false, 0);
					unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_25), false, 0);
					unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_25), 1);
				}
			}
		}
		if (!unk_0x841F312D66362BF7(uParam0->f_26))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					func_42(uParam0->f_3, 552, &Var36, 0);
					uParam0->f_43 = { Var36 };
					uParam0->f_26 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_43, 1, 1, 0));
					unk_0x04A5FAE5B1EB8E28(unk_0xF9D7EA2FA85E2505(uParam0->f_26), Var36.f_3, 2, 1);
					unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_03", iParam2);
					unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Exterior_03", unk_0x03981D6F4893D7D0(uParam0->f_26));
					unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_26), 1);
					unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_26), true);
					unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_26), 1);
				}
			}
		}
		if (!unk_0x841F312D66362BF7(uParam0->f_27))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					func_42(uParam0->f_3, 553, &Var42, 0);
					uParam0->f_46 = { Var42 };
					uParam0->f_27 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_46, 1, 1, 0));
					unk_0x04A5FAE5B1EB8E28(unk_0xF9D7EA2FA85E2505(uParam0->f_27), Var42.f_3, 2, 1);
					unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_04", iParam2);
					unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Exterior_04", unk_0x03981D6F4893D7D0(uParam0->f_27));
					unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_27), 1);
					unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_27), true);
					unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_27), 1);
				}
			}
		}
	}
	else if (func_57(uParam1->f_31, -1) || func_56(uParam1->f_31))
	{
		if (!unk_0x841F312D66362BF7(uParam0->f_22))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					func_36(uParam1->f_31, 474, &Var48, func_41(uParam1->f_31), 0);
					uParam0->f_34 = { Var48 };
					uParam0->f_22 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_34, 1, 1, 0));
					unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 1, 0, 0, 0, 0, 0), iParam2);
					unk_0xA4CF24EDE24B129D(func_35(uParam1->f_31, 1, 0, 0, 0, 0, 0), unk_0x03981D6F4893D7D0(uParam0->f_22));
					unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_22), 1);
					unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_22), true);
					unk_0xCEDF2A713644AEDA(unk_0x03981D6F4893D7D0(uParam0->f_22), false, 0);
					unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_22), false, 0);
					unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_22), 1);
				}
			}
		}
		if (!unk_0x841F312D66362BF7(uParam0->f_21))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					func_36(uParam1->f_31, 473, &Var54, func_41(uParam1->f_31), 0);
					uParam0->f_31 = { Var54 };
					uParam0->f_21 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_31, 1, 1, 0));
					unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 2, 0, 0, 0, 0, 0), iParam2);
					unk_0xA4CF24EDE24B129D(func_35(uParam1->f_31, 2, 0, 0, 0, 0, 0), unk_0x03981D6F4893D7D0(uParam0->f_21));
					unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_21), 1);
					unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_21), true);
					unk_0xCEDF2A713644AEDA(unk_0x03981D6F4893D7D0(uParam0->f_21), false, 0);
					unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_21), false, 0);
					unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_21), 1);
				}
			}
		}
		if (!unk_0x841F312D66362BF7(uParam0->f_23))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					func_36(uParam1->f_31, 475, &Var60, func_41(uParam1->f_31), 0);
					uParam0->f_28 = { Var60 };
					uParam0->f_23 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_28, 1, 1, 0));
					unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 3, 0, 0, 0, 0, 0), iParam2);
					unk_0xA4CF24EDE24B129D(func_35(uParam1->f_31, 3, 0, 0, 0, 0, 0), unk_0x03981D6F4893D7D0(uParam0->f_23));
					unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_23), 1);
					unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_23), true);
					unk_0xCEDF2A713644AEDA(unk_0x03981D6F4893D7D0(uParam0->f_23), false, 0);
					unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_23), false, 0);
					unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_23), 1);
				}
			}
		}
	}
	else if (func_55(uParam1->f_31))
	{
		if (!unk_0x841F312D66362BF7(uParam0->f_22))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					func_36(uParam1->f_31, 474, &Var66, func_41(uParam1->f_31), 0);
					uParam0->f_34 = { Var66 };
					uParam0->f_22 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_34, 1, 1, 0));
					unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 1, 0, 0, 0, 0, 0), iParam2);
					unk_0xA4CF24EDE24B129D(func_35(uParam1->f_31, 1, 0, 0, 0, 0, 0), unk_0x03981D6F4893D7D0(uParam0->f_22));
					unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_22), 1);
					unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_22), true);
					unk_0xCEDF2A713644AEDA(unk_0x03981D6F4893D7D0(uParam0->f_22), false, 0);
					unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_22), false, 0);
					unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_22), 1);
				}
			}
		}
	}
	else if (func_50(uParam1->f_31, 0, 0))
	{
		if (!unk_0x841F312D66362BF7(uParam0->f_22))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					func_36(uParam1->f_31, 474, &Var72, func_41(uParam1->f_31), 0);
					uParam0->f_34 = { Var72 };
					uParam0->f_22 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_34, 1, 1, 0));
					unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 4, 0, 0, 0, 0, 0), iParam2);
					unk_0xA4CF24EDE24B129D(func_35(uParam1->f_31, 4, 0, 0, 0, 0, 0), unk_0x03981D6F4893D7D0(uParam0->f_22));
					unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_22), 1);
					unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_22), true);
					unk_0xCEDF2A713644AEDA(unk_0x03981D6F4893D7D0(uParam0->f_22), false, 0);
					unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_22), false, 0);
					unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_22), 1);
				}
			}
		}
		if (!unk_0x841F312D66362BF7(uParam0->f_21))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					func_36(uParam1->f_31, 473, &Var78, func_41(uParam1->f_31), 1);
					uParam0->f_31 = { Var78 };
					uParam0->f_21 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_31, 1, 1, 0));
					unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 5, 0, 0, 0, 0, 0), iParam2);
					unk_0xA4CF24EDE24B129D(func_35(uParam1->f_31, 5, 0, 0, 0, 0, 0), unk_0x03981D6F4893D7D0(uParam0->f_21));
					unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_21), 1);
					unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_21), true);
					unk_0xCEDF2A713644AEDA(unk_0x03981D6F4893D7D0(uParam0->f_21), false, 0);
					unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_21), false, 0);
					unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_21), 1);
				}
			}
		}
	}
	else if (func_54(unk_0xBE369BE1BC57A796()))
	{
		if (!unk_0x841F312D66362BF7(uParam0->f_22))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
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
					uParam0->f_22 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_34, 1, 1, 0));
					unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 1, 1, uParam0->f_53, 0, 0, 0), iParam2);
					unk_0xA4CF24EDE24B129D(func_35(uParam1->f_31, 1, 1, uParam0->f_53, 0, 0, 0), unk_0x03981D6F4893D7D0(uParam0->f_22));
					unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_22), 1);
					unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_22), true);
					unk_0xCEDF2A713644AEDA(unk_0x03981D6F4893D7D0(uParam0->f_22), false, 0);
					unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_22), false, 0);
					unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_22), 1);
				}
			}
		}
	}
	else if (func_49(unk_0xBE369BE1BC57A796()))
	{
		if (!unk_0x841F312D66362BF7(uParam0->f_22))
		{
			if (func_45(joaat("prop_radio_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					if (uParam0->f_54 == 3)
					{
						uParam0->f_34 = { 1001.94f, -3193.765f, -39.106f };
						fVar84 = 0f;
					}
					else if (uParam0->f_54 == 1)
					{
						uParam0->f_34 = { 1030.66f, -3204.52f, -38.2192f };
						fVar84 = 75.52f;
					}
					else if (uParam0->f_54 == 4)
					{
						uParam0->f_34 = { 1086.06f, -3195.56f, -39.11f };
						fVar84 = 90f;
					}
					else if (uParam0->f_54 == 2)
					{
						uParam0->f_34 = { 1130.093f, -3193.262f, -40.4976f };
						fVar84 = 0f;
					}
					else if (uParam0->f_54 == 0)
					{
						uParam0->f_34 = { 1156.18f, -3196.333f, -38.0976f };
						fVar84 = 90f;
					}
					uParam0->f_22 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_radio_01"), uParam0->f_34, 1, 1, 0));
					unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 1, 0, 0, 1, uParam0->f_54, 0), iParam2);
					unk_0xA4CF24EDE24B129D(func_35(uParam1->f_31, 1, 0, 0, 1, uParam0->f_54, 0), unk_0x03981D6F4893D7D0(uParam0->f_22));
					unk_0x0608D50823C6AA6D(unk_0x03981D6F4893D7D0(uParam0->f_22), fVar84);
					unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_22), 1);
					unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_22), true);
					unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_22), true, 0);
					unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_22), 1);
				}
			}
		}
	}
	else if (func_46(unk_0xBE369BE1BC57A796()))
	{
		if (!unk_0x841F312D66362BF7(uParam0->f_22))
		{
			if (func_45(joaat("prop_boombox_01")))
			{
				if (unk_0x4B112D7DC17F0DDE(0, 0, 1, 0))
				{
					uParam0->f_34 = { 965.5109f, -2991.265f, -39.7606f };
					uParam0->f_22 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(joaat("prop_boombox_01"), uParam0->f_34, 1, 1, 0));
					unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 1, 0, 0, 0, uParam0->f_54, 1), iParam2);
					unk_0xA4CF24EDE24B129D(func_35(uParam1->f_31, 1, 0, 0, 0, uParam0->f_54, 1), unk_0x03981D6F4893D7D0(uParam0->f_22));
					unk_0xC6042F55A6EA17B2(unk_0x03981D6F4893D7D0(uParam0->f_22), 1);
					unk_0x98F0FA127445E343(unk_0x03981D6F4893D7D0(uParam0->f_22), true);
					unk_0xCEDF2A713644AEDA(unk_0x03981D6F4893D7D0(uParam0->f_22), false, 0);
					unk_0x027DB6817AB239EB(unk_0x03981D6F4893D7D0(uParam0->f_22), false, 0);
					unk_0x71924C351AFEAC4D(unk_0x03981D6F4893D7D0(uParam0->f_22), 1);
				}
			}
		}
	}
	if (func_58(uParam1->f_31) && !uParam0->f_49)
	{
		if (unk_0x841F312D66362BF7(uParam0->f_5) && unk_0x841F312D66362BF7(uParam0->f_6))
		{
			return 1;
		}
	}
	else if (uParam0->f_49)
	{
		if (((unk_0x841F312D66362BF7(uParam0->f_25) && unk_0x841F312D66362BF7(uParam0->f_26)) && unk_0x841F312D66362BF7(uParam0->f_27)) && unk_0x841F312D66362BF7(uParam0->f_24))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (func_57(uParam1->f_31, -1))
	{
		if ((unk_0x841F312D66362BF7(uParam0->f_23) && unk_0x841F312D66362BF7(uParam0->f_21)) && unk_0x841F312D66362BF7(uParam0->f_22))
		{
			return 1;
		}
	}
	else if (func_56(uParam1->f_31))
	{
		if ((unk_0x841F312D66362BF7(uParam0->f_23) && unk_0x841F312D66362BF7(uParam0->f_21)) && unk_0x841F312D66362BF7(uParam0->f_22))
		{
			return 1;
		}
	}
	else if (func_50(uParam1->f_31, 0, 0))
	{
		if (unk_0x841F312D66362BF7(uParam0->f_22) && unk_0x841F312D66362BF7(uParam0->f_21))
		{
			return 1;
		}
	}
	else if (((func_55(uParam1->f_31) || func_54(unk_0xBE369BE1BC57A796())) || func_49(unk_0xBE369BE1BC57A796())) || func_46(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x841F312D66362BF7(uParam0->f_22))
		{
			return 1;
		}
	}
	return 0;
}

char* func_35(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	char* sVar0;
	
	sVar0 = "";
	if (bParam6)
	{
		sVar0 = "DLC_IE_Warehouse_Radio_01";
	}
	if (bParam4)
	{
		if (iParam5 == 3)
		{
			sVar0 = "SE_DLC_Biker_Meth_Warehouse_Radio";
		}
		else if (iParam5 == 1)
		{
			sVar0 = "SE_DLC_Biker_Weed_Warehouse_Radio";
		}
		else if (iParam5 == 4)
		{
			sVar0 = "SE_DLC_Biker_Crack_Warehouse_Radio";
		}
		else if (iParam5 == 2)
		{
			sVar0 = "SE_DLC_Biker_Cash_Warehouse_Radio";
		}
		else if (iParam5 == 0)
		{
			sVar0 = "SE_DLC_Biker_FakeID_Warehouse_Radio";
		}
	}
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
			switch (func_41(iParam0))
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
					switch (Global_3934103)
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
			switch (func_41(iParam0))
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
			switch (func_41(iParam0))
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
		
		case 4:
			switch (func_41(iParam0))
			{
				case 109:
					sVar0 = "DLC_IE_Office_Garage_Radio_01";
					break;
			}
			break;
		
		case 5:
			switch (func_41(iParam0))
			{
				case 109:
					sVar0 = "DLC_IE_Office_Garage_Mod_Shop_Radio_01";
					break;
			}
			break;
	}
	return sVar0;
}

void func_36(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<6> Var0[2];
	struct<3> Var13;
	
	Var0[0 /*6*/] = { func_40(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_40(iParam0, bParam4) };
	*uParam2 = { func_38(iParam1, iParam3) };
	Var13 = { *uParam2 - Var0[0 /*6*/] };
	Var13 = { func_37(Var13, -Var0[0 /*6*/].f_3.f_2) };
	Var13 = { func_37(Var13, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0x3CE07141081BBC2B(Var0[1 /*6*/], 0f, Var13) };
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
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 971:
		case 972:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
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

struct<6> func_38(var uParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar23;
	
	iVar23 = 0;
	if (func_39(iParam1, &uVar6))
	{
		iVar23 = 1;
	}
	if (iVar23 && unk_0x72AEA8485D9E85F1(&Var0, &(Var0.f_3), uParam0, uVar6))
	{
		return Var0;
	}
	return Var0;
}

int func_39(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_40(int iParam0, bool bParam1)
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
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_41(int iParam0)
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
		case 70:
		case 71:
		case 72:
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
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			return 91;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 97;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 109;
			break;
	}
	return -1;
}

void func_42(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<6> Var0[2];
	struct<3> Var13;
	
	if (!bParam3)
	{
		Var0[0 /*6*/] = { func_43(-1) };
	}
	else
	{
		Var0[0 /*6*/] = { Global_4006219[iParam0 /*45*/].f_4 };
		Var0[0 /*6*/].f_3 = { 0f, 0f, Global_4006219[iParam0 /*45*/].f_7 };
	}
	if (!bParam3)
	{
		Var0[1 /*6*/] = { func_43(iParam0) };
	}
	else
	{
		Var0[1 /*6*/] = { Global_4006219[iParam0 /*45*/].f_4 };
		Var0[1 /*6*/].f_3 = { 0f, 0f, Global_4006219[iParam0 /*45*/].f_7 };
	}
	*uParam2 = { func_38(iParam1, 86) };
	Var13 = { *uParam2 - Var0[0 /*6*/] };
	Var13 = { func_37(Var13, -Var0[0 /*6*/].f_3.f_2) };
	Var13 = { func_37(Var13, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0x3CE07141081BBC2B(Var0[1 /*6*/], 0f, Var13) };
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

struct<6> func_43(int iParam0)
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

int func_44(int iParam0, bool bParam1)
{
	if (func_3(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			return Global_2421664[iParam0 /*358*/].f_264.f_14;
		}
		else
		{
			return Global_2421664[iParam0 /*358*/].f_264.f_16;
		}
	}
	return -1;
}

bool func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xE1324F59713746FA(iParam0);
	return unk_0x9F746898F7881612(iParam0);
}

int func_46(int iParam0)
{
	if (iParam0 != func_48())
	{
		if (func_3(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_47(Global_2421664[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_47(int iParam0)
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
		
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
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
			return 3;
			break;
	}
	return -1;
}

int func_48()
{
	return -1;
}

int func_49(int iParam0)
{
	if (iParam0 != func_48())
	{
		if (func_3(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_47(Global_2421664[iParam0 /*358*/].f_312.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_51(unk_0xBE369BE1BC57A796(), 0);
	}
	if (bParam1)
	{
		if (func_51(unk_0xBE369BE1BC57A796(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_51(int iParam0, bool bParam1)
{
	if (Global_1591069 != func_48())
	{
		if (!func_53(Global_1591069))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xBE369BE1BC57A796() != Global_1591069)
			{
				if (unk_0x48B8265059381CD0(Global_2421664[Global_1591069 /*358*/].f_198, 24) || func_52(Global_1591069))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 24);
}

bool func_52(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 9);
}

int func_53(int iParam0)
{
	if (iParam0 != func_48())
	{
		return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_210, 2);
	}
	return 0;
}

int func_54(int iParam0)
{
	if (iParam0 != func_48())
	{
		if (func_3(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_47(Global_2421664[iParam0 /*358*/].f_312.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_55(int iParam0)
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

int func_56(int iParam0)
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

int func_57(int iParam0, int iParam1)
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

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 1;
			break;
	}
	return 0;
}

void func_59(var uParam0, int iParam1, bool bParam2)
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

void func_60()
{
	bool bVar0;
	
	func_344();
	func_215(&(Local_1863.f_120));
	func_211(&uLocal_2560);
	func_208();
	func_202();
	if (unk_0xBE369BE1BC57A796() != -1)
	{
		func_135(&(Local_944.f_113), &(Local_1254[unk_0xBE369BE1BC57A796() /*19*/].f_1), &Local_241, &Global_3932160, &(Local_1254[unk_0xBE369BE1BC57A796() /*19*/].f_18), &(Local_944.f_168));
	}
	if (func_134(0))
	{
		func_133();
		bVar0 = true;
		if (!unk_0x23E9113C762466ED(Local_1863.f_120.f_1))
		{
			bVar0 = false;
		}
		if (Global_1764677.f_705)
		{
			Global_1764677.f_705 = 0;
			func_132(1, 1);
			bVar0 = false;
		}
		if (func_131(&(Global_1764677.f_703)))
		{
			if (func_130(&(Global_1764677.f_703), 6000, 0) && bVar0)
			{
				if (!func_127())
				{
					func_132(0, 1);
				}
			}
			else
			{
				bVar0 = false;
				func_132(1, 1);
			}
		}
		if (Local_1863.f_14)
		{
			func_132(1, 1);
			bVar0 = false;
		}
		if (bVar0)
		{
			if (func_127())
			{
				if (func_126())
				{
					func_125();
					func_124(2);
				}
			}
			else
			{
				func_379(1);
				func_124(1);
			}
		}
	}
	else if (func_134(1))
	{
		if (!func_123())
		{
			if ((unk_0x0385EDD8AAEC86F4() % 10) == 0 || unk_0x25BD4C26D84038CD())
			{
				if (func_127())
				{
					if (func_122(Local_1863.f_3))
					{
						func_132(1, 1);
						func_379(0);
					}
					if (!unk_0x25BD4C26D84038CD())
					{
						if (!unk_0x46EEE08565CE19CA())
						{
							unk_0x50FD1894558DE186(322);
						}
					}
					else
					{
						func_125();
						func_124(2);
					}
				}
			}
			if (func_121())
			{
				Global_1764677.f_601 = 1;
				if (Global_1764677.f_602)
				{
					func_116();
				}
			}
			else
			{
				Global_1764677.f_601 = 0;
			}
		}
		else if (Local_1254[unk_0xBE369BE1BC57A796() /*19*/].f_1.f_13 != 0)
		{
			func_5(&(Local_1254[unk_0xBE369BE1BC57A796() /*19*/].f_1), &Local_241);
			if (func_115())
			{
				func_18();
			}
		}
	}
	else if (func_134(2))
	{
		if (func_122(Local_1863.f_3))
		{
			if (!func_113(3, Local_1863.f_3))
			{
				return;
			}
		}
		func_96();
		if (!Local_2547.f_0)
		{
			if (!func_95())
			{
				func_379(1);
				func_132(0, 1);
				Global_1764677.f_9 = 1;
			}
			func_124(1);
		}
	}
	else if (func_134(3))
	{
		if (func_94(7, &(Local_1863.f_615)))
		{
			func_72(&(Local_1863.f_615), 1);
			return;
		}
		if (!func_94(2, &(Local_1863.f_615)))
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				func_68(0);
				unk_0x7F9F6D12E7F11F40(unk_0x17B5CC8A8615737D(), 1, 1);
				func_62(unk_0xBE369BE1BC57A796(), 0, 524288);
			}
			func_124(4);
		}
	}
	else if (func_134(4))
	{
		if (func_94(5, &(Local_1863.f_615)))
		{
			unk_0x50FD1894558DE186(322);
			func_124(5);
		}
	}
	else if (func_134(5))
	{
		if (unk_0x25BD4C26D84038CD())
		{
			if (!unk_0x48B8265059381CD0(Local_1863.f_615, 0))
			{
				if (!unk_0x9C88EB7B70229335(Local_1863.f_615.f_57) && !unk_0x9C88EB7B70229335(Local_1863.f_615.f_58))
				{
					unk_0x4988C48537D1AE4F(-1, Local_1863.f_615.f_57, Local_1863.f_615.f_58, 1);
				}
				unk_0xEB79FECD9022AAF0(&(Local_1863.f_615), 0);
			}
			func_72(&(Local_1863.f_615), 0);
			func_61();
		}
	}
}

void func_61()
{
	if (!func_123())
	{
		Global_1764677.f_592 = 1;
	}
}

void func_62(int iParam0, bool bParam1, int iParam2)
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
		if (unk_0xEA585FE60D0854B3())
		{
			unk_0x97225621CA125FF2(0);
		}
	}
	if (!unk_0x63C468D583002D23())
	{
		uVar0 = iParam2;
		unk_0xC8C3338D4DBC00FE(iParam0, bParam1, uVar0);
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
		if (!func_67())
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
		if (unk_0x7268A1112372AA44(iParam0) && unk_0xCF7855B965948E97(iParam0))
		{
			uVar25 = unk_0xDF7CE83326F434E9(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x63C468D583002D23())
				{
					unk_0xD629A0523A16EED3(1);
				}
				else
				{
					unk_0x027DB6817AB239EB(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x63C468D583002D23() && !bVar18)
					{
						unk_0xD629A0523A16EED3(0);
					}
					Global_2421664[iParam0 /*358*/].f_247 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_66(uVar25) && !unk_0xE59622A0BE598996(uVar25))
				{
					if (!bVar21)
					{
						unk_0xCEDF2A713644AEDA(uVar25, true, 0);
					}
				}
				if (!unk_0xDDBA7A42B9B819EE(uVar25))
				{
					if (!bVar20)
					{
						unk_0x98F0FA127445E343(uVar25, false);
					}
					unk_0xBDE4C59FD939CE4E(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x98F0FA127445E343(uVar25, false);
				}
				unk_0x6F65279C9BC14EDB(uVar25, true);
				unk_0xF7A1A67D26D29975(iParam0, 0);
				unk_0x5D3680D916012130(uVar25);
				unk_0x78F48B47DB1C3316(uVar25, 1);
				func_65();
				func_64();
				if (unk_0x86DB3331A7FB14B2())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xE41614517B6436B2())
				{
				}
				Global_2421664[iParam0 /*358*/].f_248 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_66(uVar25) && !unk_0xE59622A0BE598996(uVar25))
				{
					if (!bVar21)
					{
						unk_0xCEDF2A713644AEDA(uVar25, !bVar14, 0);
					}
					if (!unk_0xDDBA7A42B9B819EE(uVar25))
					{
						if (!bVar20)
						{
							unk_0x98F0FA127445E343(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xBDE4C59FD939CE4E(uVar25, 1);
						}
					}
					if (func_63(Global_1633501.f_107548))
					{
						unk_0x98F0FA127445E343(uVar25, true);
					}
				}
				if (bVar9)
				{
					unk_0xF7A1A67D26D29975(iParam0, 0);
				}
				else
				{
					unk_0xF7A1A67D26D29975(iParam0, 1);
				}
				unk_0x6F65279C9BC14EDB(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x5315600F216E4653(uVar25) && !unk_0xFD0FE723227D5AB6(uVar25, 0))
					{
						unk_0xBC8C26E1CC191108(iVar25);
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
			unk_0xC8C3338D4DBC00FE(iParam0, bParam1, iVar26);
		}
	}
}

bool func_63(int iParam0)
{
	return iParam0 == 17;
}

void func_64()
{
	struct<2> Var0;
	
	Global_2433125.f_731 = 0;
	Global_2433125.f_732 = 0;
	Global_2433125.f_733 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404994.f_2220 = { Var0 };
}

void func_65()
{
	Global_2404994.f_644 = 0;
	Global_2404994.f_2261 = 0;
	Global_2404994.f_501 = 0;
	Global_2404994.f_576 = 0;
	Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_210 = 0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	if (unk_0xFD0FE723227D5AB6(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x1F8F07D86DA1A701(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	if (func_20() == 0)
	{
		return 1;
	}
	return 0;
}

void func_68(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!bParam0)
	{
		func_71(&Global_2501487, 1, 0);
	}
	else
	{
		func_70(&Global_2501487);
	}
	if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
	{
		uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		iVar2 = -1;
		while (iVar2 <= 8)
		{
			if (iVar2 < unk_0x74EBEFF57C45B722(unk_0x0324EEB10F81965F(uVar0)))
			{
				if (!unk_0xC0FA8EEF6413F866(iVar0, iVar2, 0))
				{
					iVar1 = unk_0x17206B315923243C(iVar0, iVar2, 0);
					if ((unk_0x23E9113C762466ED(iVar1) && iVar1 != unk_0x17B5CC8A8615737D()) && unk_0x0764AC92F08BEC9E(iVar1))
					{
						func_69(unk_0xDE881A032F5BA110(iVar1), 0);
					}
				}
			}
			iVar2++;
		}
	}
}

void func_69(int iParam0, bool bParam1)
{
	if (iParam0 == func_48())
	{
		return;
	}
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		return;
	}
	if (!bParam1)
	{
		if (!unk_0x48B8265059381CD0(Global_2501489, iParam0))
		{
			func_71(&(Global_2501490[iParam0 /*2*/]), 1, 0);
			unk_0xEB79FECD9022AAF0(&Global_2501489, iParam0);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_2501489, iParam0))
	{
		func_70(&(Global_2501490[iParam0 /*2*/]));
		unk_0x21E7933CCC7B3724(&Global_2501489, iParam0);
	}
}

void func_70(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_71(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x63C468D583002D23() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xCB150A8B81012128();
			}
			else
			{
				*uParam0 = unk_0x8F8F2E80A7DA4D64();
			}
		}
		else
		{
			*uParam0 = unk_0x94E3E074F38DF86C();
		}
		uParam0->f_1 = 1;
	}
}

void func_72(var uParam0, bool bParam1)
{
	if ((func_94(5, uParam0) || func_94(6, uParam0)) || bParam1)
	{
		if (unk_0x00743AFDA92F3B04(uParam0->f_13))
		{
			unk_0xEABBFB622128F3E7(uParam0->f_13);
		}
		if (unk_0x23E9113C762466ED(uParam0->f_2))
		{
			unk_0x478AE709A466CB7E(&(uParam0->f_2));
		}
		unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
		unk_0x2BC4A4AFFC2D937D(uParam0->f_5, 0);
		func_75(1, 0);
		func_74(0, 1, 1, 0);
		if (bParam1)
		{
			func_73(7, uParam0);
		}
		else
		{
			func_73(3, uParam0);
		}
		Global_1764677.f_15 = 0;
	}
}

void func_73(int iParam0, var uParam1)
{
	if (iParam0 != uParam1->f_1)
	{
		uParam1->f_1 = iParam0;
	}
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5E9889CF18601D1C() != iParam0 && iParam2)
		{
			unk_0xCE7A426067C66E84(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_75(bool bParam0, int iParam1)
{
	func_92();
	if (bParam0)
	{
		func_90(1);
		unk_0x2E2945F5602A744F(1);
	}
	unk_0xD12BCC85C2F8B1DE();
	func_9();
	unk_0x383AAB2B9469769D(0);
	func_88(0, 1, 1, 0);
	func_87();
	func_86(12, 0, -1);
	func_85(1);
	unk_0x990821B6B4780D69(0, -1);
	unk_0x2D28D5B324F77D2D(1);
	unk_0xE418A8E16B02C0AC(1);
	func_84();
	unk_0x4CE603708D103834(1);
	if (unk_0x63C468D583002D23())
	{
		if (unk_0xEE1438344034E8AA())
		{
			unk_0x58015D068E653507(0, 0);
		}
	}
	func_83(0);
	if (((func_82() == 0 && func_81() == 0) && iParam1) && !func_76(unk_0xBE369BE1BC57A796()))
	{
		func_62(unk_0xBE369BE1BC57A796(), 1, 0);
	}
	Global_2433125.f_3205 = 0;
}

int func_76(int iParam0)
{
	if (func_78(iParam0, 0))
	{
		return 1;
	}
	if (func_77())
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_77()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

bool func_78(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_79(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_79(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_80();
	}
	if (Global_1315213[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_80()
{
	return Global_1312735;
}

bool func_81()
{
	return unk_0x48B8265059381CD0(Global_2443134, 7);
}

int func_82()
{
	return Global_1315233;
}

void func_83(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 13);
	}
}

void func_84()
{
	Global_17151.f_5 = 0;
}

void func_85(int iParam0)
{
	Global_2494199.f_4393 = iParam0;
}

void func_86(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1353070.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_1353070.f_1013), iParam0);
			}
			else
			{
				unk_0x21E7933CCC7B3724(&(Global_1353070.f_1013), iParam0);
			}
			break;
	}
}

void func_87()
{
	func_85(1);
	func_86(4, 0, -1);
	func_86(6, 0, -1);
	func_86(7, 0, -1);
	func_86(3, 0, -1);
	func_86(1, 0, -1);
	func_86(2, 0, -1);
	func_86(11, 0, -1);
	func_86(13, 0, -1);
	func_86(14, 0, -1);
	func_86(16, 0, -1);
}

void func_88(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x75416EE69CE8B797(unk_0xBE369BE1BC57A796());
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 1);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 1);
		func_83(1);
		unk_0x9FB8515100F82AFB();
		unk_0xD57128A757C0216E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3ED8A07C6FA41E1B())
			{
				unk_0x660E8E7836E95077(0);
			}
			if (!func_12())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_74(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else
	{
		func_83(0);
		unk_0x42DE1068884C3BE9();
		Global_55828 = 0;
		if (bParam1)
		{
			unk_0x093227ED19D84FB6();
		}
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 0);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 0);
		func_74(0, iParam3, iParam2, 0);
		if (unk_0x63C468D583002D23())
		{
			if (((!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_76(unk_0xBE369BE1BC57A796())) && !func_78(unk_0xBE369BE1BC57A796(), 0)) && !func_89())
			{
				unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
			}
		}
		else if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_76(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
		}
		Global_69700 = 0;
	}
}

bool func_89()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
}

void func_90(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_100354)
	{
		unk_0x2B3976C5A4017270(iVar0, iParam0);
		func_91(iVar0);
		iVar0++;
	}
}

void func_91(int iParam0)
{
	Global_100354[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_100354[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_100354[iParam0 /*28*/].f_4), "", 64);
	Global_100354[iParam0 /*28*/].f_23 = 0;
	Global_100354[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_100354[iParam0 /*28*/].f_27 = 0;
	Global_100354[iParam0 /*28*/].f_20 = 0;
	Global_100354[iParam0 /*28*/].f_22 = 0;
}

void func_92()
{
	if (!Global_1312567)
	{
		return;
	}
	func_93();
}

void func_93()
{
	Global_1312567 = 0;
	StringCopy(&(Global_1312567.f_1), "", 24);
	Global_1312567.f_7 = 0;
}

bool func_94(int iParam0, var uParam1)
{
	return uParam1->f_1 == iParam0;
}

bool func_95()
{
	return Global_1764677.f_3;
}

void func_96()
{
	char* sVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	
	if (!Local_2547.f_0)
	{
		return;
	}
	if (Local_2547.f_2 == 0)
	{
		unk_0x1D6A85891C36EC72(0, 0);
		func_110(1, 1);
		func_62(unk_0xBE369BE1BC57A796(), 0, 0);
		unk_0xC7845898207D067F(1500);
		Local_2547.f_2 = 1;
		unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312), 31);
	}
	if (!unk_0x48B8265059381CD0(Local_2547.f_5, Local_2547.f_2))
	{
		if (unk_0x5C0856D86B18EE57())
		{
			func_109(&(Local_2547.f_8), 0, 0);
		}
		sVar0 = func_108(Local_2547.f_2);
		if ((!unk_0x9C88EB7B70229335(sVar0) && !unk_0x5C0856D86B18EE57()) && (!func_131(&(Local_2547.f_8)) || func_130(&(Local_2547.f_8), 300, 0)))
		{
			unk_0x2E2945F5602A744F(1);
			func_106(sVar0, func_107(Local_2547.f_2));
			unk_0xEB79FECD9022AAF0(&(Local_2547.f_5), Local_2547.f_2);
			func_70(&(Local_2547.f_8));
		}
	}
	if (!unk_0x48B8265059381CD0(Local_2547.f_4, Local_2547.f_2))
	{
		func_109(&(Local_2547.f_6), 0, 0);
		if (!unk_0x0F1BF24ED3B7ED40(Local_2547.f_3))
		{
			Local_2547.f_3 = unk_0x9F2F24963A4C5E27(26379945, 1);
			unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
		}
		func_101(&Var1, &Var4, &uVar7, Local_2547.f_2, 1);
		unk_0x10AEEB80A49DD974(Local_2547.f_3, Var1, Var4, uVar7, 0, 1, 1, 2);
		func_101(&Var1, &Var4, &uVar7, Local_2547.f_2, 0);
		unk_0x10AEEB80A49DD974(Local_2547.f_3, Var1, Var4, uVar7, func_107(Local_2547.f_2), 0, 0, 2);
		unk_0x6E850356BCA62F5C(Local_2547.f_3, 1);
		unk_0x2F0C4DC7A4D75C2E(Local_2547.f_3, "Hand_shake", 0.05f);
		unk_0xEB79FECD9022AAF0(&(Local_2547.f_4), Local_2547.f_2);
	}
	if ((!Local_2547.f_10 && !func_95()) && !(func_122(Local_1863.f_3) && func_113(1, Local_1863.f_3)))
	{
		if (Local_2547.f_2 == 4 && func_130(&(Local_2547.f_6), (func_107(Local_2547.f_2) - 400), 0))
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				unk_0x5436326547492A67(unk_0xBE369BE1BC57A796(), 1f, 850, 0, 1, 0);
			}
			Local_2547.f_10 = 1;
		}
	}
	if (func_130(&(Local_2547.f_6), func_107(Local_2547.f_2), 0))
	{
		if (Local_2547.f_2 == 4)
		{
			unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
			unk_0x6E850356BCA62F5C(Local_2547.f_3, 1);
			unk_0x2BC4A4AFFC2D937D(Local_2547.f_3, 0);
			func_75(1, 0);
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !Local_2547.f_10)
			{
				unk_0xBC8C26E1CC191108(unk_0x17B5CC8A8615737D());
			}
			func_62(unk_0xBE369BE1BC57A796(), 1, 524288);
			func_100();
			if (Local_1863.f_15 == unk_0xBE369BE1BC57A796())
			{
				func_97(1);
				unk_0x21E7933CCC7B3724(&(Local_1254[unk_0xCA1D9459B2CC7619() /*19*/]), 0);
				unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312), 30);
			}
			unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312), 31);
		}
		else
		{
			Local_2547.f_2++;
		}
	}
}

void func_97(bool bParam0)
{
	var uVar0;
	
	uVar0 = Global_1363267[func_99(-1)];
	if (bParam0)
	{
		unk_0xEB79FECD9022AAF0(&uVar0, 14);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&uVar0, 14);
	}
	func_98(1298, uVar0, -1, 1);
}

void func_98(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503826[iParam0 /*3*/][func_99(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, uParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1363219[func_99(iParam2)] = uParam1;
			break;
		
		case 783:
			Global_1363225[func_99(iParam2)] = uParam1;
			break;
		
		case 784:
			Global_1363231[func_99(iParam2)] = uParam1;
			break;
		
		case 785:
			Global_1363237[func_99(iParam2)] = uParam1;
			break;
		
		case 772:
			Global_1363195[func_99(iParam2)] = uParam1;
			break;
		
		case 773:
			Global_1363201[func_99(iParam2)] = uParam1;
			break;
		
		case 774:
			Global_1363207[func_99(iParam2)] = uParam1;
			break;
		
		case 775:
			Global_1363213[func_99(iParam2)] = uParam1;
			break;
		
		case 762:
			Global_1363171[func_99(iParam2)] = uParam1;
			break;
		
		case 763:
			Global_1363177[func_99(iParam2)] = uParam1;
			break;
		
		case 764:
			Global_1363183[func_99(iParam2)] = uParam1;
			break;
		
		case 765:
			Global_1363189[func_99(iParam2)] = uParam1;
			break;
		
		case 752:
			Global_1363243[func_99(iParam2)] = uParam1;
			break;
		
		case 753:
			Global_1363249[func_99(iParam2)] = uParam1;
			break;
		
		case 754:
			Global_1363255[func_99(iParam2)] = uParam1;
			break;
		
		case 755:
			Global_1363261[func_99(iParam2)] = uParam1;
			break;
		
		case 1298:
			Global_1363267[func_99(iParam2)] = uParam1;
			break;
		
		case 634:
			Global_1363273[func_99(iParam2)] = uParam1;
			break;
		
		case 1273:
			Global_1363279[func_99(iParam2)] = uParam1;
			break;
		
		case 1870:
			Global_2524277[0 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 2261:
			Global_2524277[1 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 2911:
			Global_2524277[2 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3040:
			Global_2524277[3 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 5886:
			Global_2524348[func_99(iParam2)] = uParam1;
			break;
		
		case 759:
			Global_1363285[func_99(iParam2)] = uParam1;
			break;
		
		case 760:
			Global_1363291[func_99(iParam2)] = uParam1;
			break;
		
		case 761:
			Global_1363297[func_99(iParam2)] = uParam1;
			break;
		
		case 1231:
			Global_1363303[func_99(iParam2)] = uParam1;
			break;
		
		case 3035:
			Global_2524311[0 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3036:
			Global_2524311[1 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3037:
			Global_2524311[2 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3038:
			Global_2524311[3 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3039:
			Global_2524311[4 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3618:
			Global_2524351[0 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3619:
			Global_2524351[1 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3620:
			Global_2524351[2 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3621:
			Global_2524351[3 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3622:
			Global_2524351[4 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3623:
			Global_2524367[0 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3624:
			Global_2524367[1 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3625:
			Global_2524367[2 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3626:
			Global_2524367[3 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3627:
			Global_2524367[4 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3203:
			Global_2524311[5 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3209:
			Global_2524277[4 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3645:
			Global_2524383[func_99(iParam2)] = uParam1;
			break;
		
		case 3646:
			Global_2524392[func_99(iParam2)] = uParam1;
			break;
		
		case 3647:
			Global_2524386[func_99(iParam2)] = uParam1;
			break;
		
		case 3648:
			Global_2524395[func_99(iParam2)] = uParam1;
			break;
		
		case 3649:
			Global_2524389[func_99(iParam2)] = uParam1;
			break;
		
		case 3650:
			Global_2524398[func_99(iParam2)] = uParam1;
			break;
		
		case 3671:
			Global_2524401[func_99(iParam2)] = uParam1;
			break;
		
		case 3211:
			Global_2524311[6 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3212:
			Global_2524277[5 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3216:
			Global_2524311[7 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3214:
			Global_2524277[6 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3991:
			Global_2524311[8 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3992:
			Global_2524277[7 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3994:
			Global_2524311[9 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3995:
			Global_2524277[8 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3997:
			Global_2524311[10 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 3998:
			Global_2524277[9 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 4000:
			Global_2524311[11 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		case 4001:
			Global_2524277[10 /*3*/][func_99(iParam2)] = uParam1;
			break;
		
		default:
			break;
	}
}

int func_99(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_80();
		if (iVar1 > -1)
		{
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

void func_100()
{
	Local_2547.f_0 = false;
	Local_2547.f_11 = 1;
	Local_2547.f_2 = 0;
	Local_2547.f_4 = 0;
	Local_2547.f_5 = 0;
	Local_2547.f_10 = 0;
	func_70(&(Local_2547.f_6));
	func_70(&(Local_2547.f_8));
}

void func_101(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam2 = 50f;
	switch (func_104(Local_1863.f_2))
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
	*uParam0 = { func_103(*uParam0, &(Local_1863.f_16)) };
	uParam1->f_2 = func_102(uParam1->f_2, &(Local_1863.f_16));
}

float func_102(float fParam0, var uParam1)
{
	float fVar0;
	
	fVar0 = (fParam0 + uParam1->f_4);
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

Vector3 func_103(struct<3> Param0, var uParam3)
{
	return unk_0x3CE07141081BBC2B(*uParam3, uParam3->f_4, Param0);
}

int func_104(int iParam0)
{
	if (func_105(iParam0))
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

int func_105(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

void func_106(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

int func_107(int iParam0)
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

char* func_108(int iParam0)
{
	if (Local_2547.f_1)
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

void func_109(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x63C468D583002D23() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xCB150A8B81012128();
		}
		else
		{
			*uParam0 = unk_0x8F8F2E80A7DA4D64();
		}
	}
	else
	{
		*uParam0 = unk_0x94E3E074F38DF86C();
	}
	uParam0->f_1 = 1;
}

void func_110(bool bParam0, int iParam1)
{
	func_112();
	func_90(1);
	unk_0x2E2945F5602A744F(1);
	unk_0xD12BCC85C2F8B1DE();
	func_88(1, 1, 1, 0);
	func_111();
	func_86(12, 1, -1);
	func_85(0);
	unk_0x990821B6B4780D69(1, -1);
	unk_0x2D28D5B324F77D2D(0);
	unk_0xE418A8E16B02C0AC(0);
	func_90(1);
	func_83(1);
	Global_2433125.f_3205 = 1;
	if (bParam0)
	{
		if (!unk_0xEE1438344034E8AA())
		{
			unk_0x58015D068E653507(1, iParam1);
		}
	}
}

void func_111()
{
	func_85(0);
	func_86(4, 1, -1);
	func_86(6, 1, -1);
	func_86(7, 1, -1);
	func_86(3, 1, -1);
	func_86(1, 1, -1);
	func_86(2, 1, -1);
	func_86(11, 1, -1);
	func_86(13, 1, -1);
	func_86(14, 1, -1);
	func_86(16, 1, -1);
}

void func_112()
{
	Global_1312567 = 1;
	StringCopy(&(Global_1312567.f_1), unk_0x6AF6B39BFDB53CB5(), 24);
	Global_1312567.f_7 = unk_0x765F5B806B517045(&(Global_1312567.f_1));
}

int func_113(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_114(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			return unk_0x48B8265059381CD0(Global_1764677.f_223[iVar0], iVar1);
			break;
		
		case 1:
			return unk_0x48B8265059381CD0(Global_1764677.f_227[iVar0], iVar1);
			break;
		
		case 2:
			return unk_0x48B8265059381CD0(Global_1764677.f_231[iVar0], iVar1);
			break;
		
		case 3:
			return unk_0x48B8265059381CD0(Global_1764677.f_505[iVar0], iVar1);
			break;
		
		case 4:
			return unk_0x48B8265059381CD0(Global_1764677.f_509[iVar0], iVar1);
			break;
		
		case 5:
			return unk_0x48B8265059381CD0(Global_1764677.f_672[iVar0], iVar1);
			break;
		
		case 6:
			return unk_0x48B8265059381CD0(Global_1764677.f_676[iVar0], iVar1);
			break;
		
		case 7:
			return unk_0x48B8265059381CD0(Global_1764677.f_680[iVar0], iVar1);
			break;
		
		case 8:
			return unk_0x48B8265059381CD0(Global_1764677.f_690[iVar0], iVar1);
			break;
		
		case 9:
			return unk_0x48B8265059381CD0(Global_1764677.f_694[iVar0], iVar1);
			break;
		
		case 10:
			return unk_0x48B8265059381CD0(Global_1764677.f_513[iVar0], iVar1);
			break;
		
		case 11:
			return unk_0x48B8265059381CD0(Global_1764677.f_684[iVar0], iVar1);
			break;
	}
	return 0;
}

void func_114(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

bool func_115()
{
	return Global_2433125.f_655.f_10;
}

void func_116()
{
	Global_1764677.f_601 = 0;
	func_117(&(Local_1863.f_615));
	func_124(3);
}

void func_117(var uParam0)
{
	if (!func_94(3, uParam0))
	{
		if (unk_0x00743AFDA92F3B04(uParam0->f_13))
		{
			unk_0xEABBFB622128F3E7(uParam0->f_13);
		}
		if (unk_0x23E9113C762466ED(uParam0->f_2))
		{
			unk_0x478AE709A466CB7E(&(uParam0->f_2));
		}
		unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
		if (unk_0x0F1BF24ED3B7ED40(uParam0->f_5))
		{
			unk_0x2BC4A4AFFC2D937D(uParam0->f_5, 0);
		}
		if (unk_0xEE1438344034E8AA())
		{
			func_75(1, 0);
		}
		func_73(3, uParam0);
	}
	*uParam0 = 0;
	uParam0->f_48 = 0;
	unk_0xA0E7D0E8FE126EE8(uParam0->f_3);
	func_118(uParam0);
	func_73(2, uParam0);
	Global_1764677.f_15 = 1;
}

void func_118(var uParam0)
{
	if (!unk_0x23E9113C762466ED(uParam0->f_2))
	{
		if (!func_119())
		{
			uParam0->f_2 = unk_0x2AD5F4170F4ACBEB(4, unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()), unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) + Vector(-10f, 0f, 0f), unk_0x638527C9799F2AE4(unk_0x17B5CC8A8615737D()), 0, 0);
		}
		else
		{
			uParam0->f_2 = unk_0x2AD5F4170F4ACBEB(5, unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()), unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) + Vector(-10f, 0f, 0f), unk_0x638527C9799F2AE4(unk_0x17B5CC8A8615737D()), 0, 0);
		}
		unk_0xC48D9574604CA563(unk_0x17B5CC8A8615737D(), uParam0->f_2);
		unk_0x98F0FA127445E343(uParam0->f_2, true);
		unk_0x4C44C1A3160350E2(uParam0->f_2, 1, 1, 1, 1, 1, 1, 0, 0);
	}
}

bool func_119()
{
	return func_120(unk_0xBE369BE1BC57A796());
}

int func_120(int iParam0)
{
	if (unk_0x0324EEB10F81965F(unk_0xDF7CE83326F434E9(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && unk_0xDCA576CE5CF67643(unk_0x17B5CC8A8615737D(), Local_1863.f_609, Local_1863.f_612, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_122(int iParam0)
{
	return func_113(0, iParam0);
}

bool func_123()
{
	return Global_1764677.f_12;
}

void func_124(int iParam0)
{
	Local_1863.f_1 = iParam0;
}

void func_125()
{
	Local_2547.f_0 = true;
	if (Local_1863.f_15 == unk_0xBE369BE1BC57A796())
	{
		unk_0xEB79FECD9022AAF0(&(Local_1254[unk_0xCA1D9459B2CC7619() /*19*/]), 0);
		Local_2547.f_1 = 1;
	}
}

bool func_126()
{
	return Global_1764677.f_11;
}

int func_127()
{
	if (unk_0x48B8265059381CD0(Global_1764677, 2))
	{
		unk_0x21E7933CCC7B3724(&Global_1764677, 2);
		return 0;
	}
	if (func_129())
	{
		return 0;
	}
	if (Local_2547.f_11)
	{
		return 0;
	}
	if (!Local_1863.f_15 == unk_0xBE369BE1BC57A796())
	{
		if (((unk_0xD54DE3C9493BFEC2(Local_1863.f_15) && unk_0xB421DCBFBBE3286E(Local_1863.f_15) > -1) && unk_0x48B8265059381CD0(Local_1254[unk_0xB421DCBFBBE3286E(Local_1863.f_15) /*19*/], 0)) || unk_0x48B8265059381CD0(Global_2421664[Local_1863.f_15 /*358*/].f_312, 30))
		{
			return 1;
		}
		return 0;
	}
	if (!func_128())
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	var uVar0;
	
	uVar0 = Global_1363267[func_99(-1)];
	if (unk_0x48B8265059381CD0(uVar0, 14))
	{
		return 1;
	}
	return 0;
}

bool func_129()
{
	return Global_68131;
}

int func_130(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_71(uParam0, bParam2, 0);
	if (unk_0x63C468D583002D23() && !bParam2)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_131(var uParam0)
{
	return uParam0->f_1;
}

void func_132(bool bParam0, bool bParam1)
{
	Global_1764677.f_4 = bParam0;
	if (!bParam0)
	{
		if (bParam1)
		{
			Global_1764677.f_11 = 0;
		}
	}
}

void func_133()
{
	Local_2566[0 /*3*/] = { 992.419f, -3101.735f, -39.489f };
	Local_2566[1 /*3*/] = { 992.419f, -3100.978f, -39.489f };
}

bool func_134(int iParam0)
{
	return Local_1863.f_1 == iParam0;
}

void func_135(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (Global_3934103 != uParam1->f_11)
	{
		uParam1->f_11 = Global_3934103;
		unk_0xEB79FECD9022AAF0(uParam1, 16);
	}
	if (unk_0x48B8265059381CD0(*uParam1, 16))
	{
		uParam1->f_13 = 0;
		unk_0x21E7933CCC7B3724(uParam1, 16);
	}
	if (func_19() || unk_0xCEB2A4290BD633BE(unk_0xBE369BE1BC57A796()))
	{
		func_5(uParam1, uParam2);
		return;
	}
	if (iLocal_130 > 5)
	{
		iLocal_130 = 0;
	}
	if (iLocal_129 > 30)
	{
		iLocal_129 = 0;
	}
	if (uParam1->f_13 > 0 || uParam1->f_14 > 0)
	{
		func_193(uParam0, uParam1, uParam2, uParam3, 0);
	}
	if (unk_0x63C468D583002D23())
	{
		if (unk_0xD54DE3C9493BFEC2(unk_0xBE369BE1BC57A796()))
		{
			if (unk_0xDC0834EFCFBBC8C6() == unk_0xB421DCBFBBE3286E(unk_0xBE369BE1BC57A796()))
			{
				func_192(uParam0);
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
	if ((((((((uParam3->f_33 == 10 || func_56(uParam3->f_31)) || func_57(uParam3->f_31, -1)) || func_58(uParam3->f_31)) || func_46(unk_0xBE369BE1BC57A796())) || func_55(uParam3->f_31)) || func_50(uParam3->f_31, 0, 0)) || func_54(unk_0xBE369BE1BC57A796())) || (func_49(unk_0xBE369BE1BC57A796()) && !unk_0x48B8265059381CD0(*uParam1, 0)))
	{
		if (((uParam0->f_50 > 0 && uParam0->f_52 > 0) && !unk_0x48B8265059381CD0(*uParam1, 15)) || ((uParam0->f_50 > 0 && !unk_0x48B8265059381CD0(*uParam1, 15)) && (((((((func_56(uParam3->f_31) || func_57(uParam3->f_31, -1)) || func_58(uParam3->f_31)) || func_55(uParam3->f_31)) || func_50(uParam3->f_31, 0, 0)) || func_54(unk_0xBE369BE1BC57A796())) || func_49(unk_0xBE369BE1BC57A796())) || func_46(unk_0xBE369BE1BC57A796()))))
		{
			func_189(uParam1, uParam3);
			unk_0xEB79FECD9022AAF0(uParam1, 15);
			if (((((((func_56(uParam3->f_31) || func_57(uParam3->f_31, -1)) || func_58(uParam3->f_31)) || func_55(uParam3->f_31)) || func_50(uParam3->f_31, 0, 0)) || func_54(unk_0xBE369BE1BC57A796())) || func_49(unk_0xBE369BE1BC57A796())) || func_46(unk_0xBE369BE1BC57A796()))
			{
				func_187(uParam0, uParam3, 0);
			}
		}
	}
	else if (uParam0->f_50 > 0 && !unk_0x48B8265059381CD0(*uParam1, 15))
	{
		func_189(uParam1, uParam3);
		unk_0xEB79FECD9022AAF0(uParam1, 15);
	}
	if ((iLocal_130 % 2) == 0)
	{
		switch (uParam1->f_13)
		{
			case 0:
				if (!Global_1591073)
				{
					uParam1->f_11 = Global_3934103;
					func_185(uParam1);
					if ((uParam0->f_50 > 0 && unk_0x48B8265059381CD0(*uParam1, 15)) && func_184(uParam1, uParam3))
					{
						func_193(uParam0, uParam1, uParam2, uParam3, 0);
						unk_0xEB79FECD9022AAF0(uParam2, 0);
						uParam2->f_4 = ((0f + -36f) / 2f);
						func_183(uParam1, 1);
					}
					else
					{
						if (uParam0->f_50 != 0)
						{
						}
						if (!unk_0x48B8265059381CD0(*uParam1, 15))
						{
						}
					}
				}
				break;
			
			case 1:
				if (func_166(uParam1, uParam2, uParam3, &(uParam2->f_1), &(uParam1->f_6), &(uParam1->f_3), uParam4, uParam5, 0))
				{
					func_165();
					func_183(uParam1, 2);
				}
				break;
			
			case 2:
				func_163(1);
				unk_0xD4AB660C54ABFEF2(16);
				if (((((func_139(uParam0, uParam1, uParam2, &(uParam1->f_3), uParam4, 0) || Global_1591073) || Global_1751032) || func_138(uParam1, uParam2)) || func_137(unk_0xBE369BE1BC57A796()) == 5) || Global_2433125.f_3205 == 1)
				{
					if (Global_2433125.f_3205 == 1)
					{
					}
					if (func_137(unk_0xBE369BE1BC57A796()) == 5)
					{
					}
					if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
					{
						unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
					}
					func_8(uParam2);
					func_183(uParam1, 1);
				}
				break;
		}
	}
	else if ((((((((!unk_0x48B8265059381CD0(*uParam1, 0) && !func_57(uParam3->f_31, -1)) && !func_56(uParam3->f_31)) && !func_58(uParam3->f_31)) && !func_55(uParam3->f_31)) && !func_50(uParam3->f_31, 0, 0)) && !func_54(unk_0xBE369BE1BC57A796())) && !func_49(unk_0xBE369BE1BC57A796())) && !func_46(unk_0xBE369BE1BC57A796()))
	{
		switch (uParam1->f_14)
		{
			case 0:
				if (uParam0->f_50 > 0 && unk_0x48B8265059381CD0(*uParam1, 15))
				{
					func_193(uParam0, uParam1, uParam2, uParam3, 1);
					unk_0xEB79FECD9022AAF0(uParam2, 0);
					uParam2->f_4 = ((0f + -36f) / 2f);
					func_136(uParam1, 1);
				}
				break;
			
			case 1:
				if (uParam3->f_33 == 10 && func_166(uParam1, uParam2, uParam3, &(uParam2->f_2), &(uParam1->f_5), &(uParam1->f_4), uParam4, uParam5, 1))
				{
					func_165();
					func_136(uParam1, 3);
				}
				break;
			
			case 3:
				func_163(1);
				unk_0xD4AB660C54ABFEF2(16);
				if (((func_139(uParam0, uParam1, uParam2, &(uParam1->f_4), uParam4, 1) || Global_1591073) || Global_1751032) || func_138(uParam1, uParam2))
				{
					if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
					{
						unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
					}
					func_8(uParam2);
					func_136(uParam1, 1);
				}
				break;
			}
	}
	if (((!unk_0x48B8265059381CD0(*uParam1, 9) && !unk_0x48B8265059381CD0(*uParam1, 13)) && !unk_0x48B8265059381CD0(*uParam1, 10)) && !unk_0x48B8265059381CD0(Global_2359301, 15))
	{
		if (!bLocal_128)
		{
			iLocal_130++;
		}
	}
	iLocal_129++;
}

void func_136(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

int func_137(int iParam0)
{
	return Global_1591201[iParam0 /*602*/].f_188;
}

int func_138(var uParam0, var uParam1)
{
	if (!unk_0x48B8265059381CD0(*uParam0, 0))
	{
		if (unk_0x48B8265059381CD0(*uParam1, 9))
		{
			return 1;
		}
	}
	return 0;
}

int func_139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	iVar0 = 0;
	func_162();
	func_161();
	unk_0xBE112CB675E9053B(0);
	unk_0x668D7DAF1FE25754(0);
	unk_0xE57F94EA937AAD99(19);
	unk_0xE57F94EA937AAD99(2);
	unk_0x6F9E2FAA0B24988A();
	func_160();
	if (func_159(uParam1))
	{
		if (!unk_0x48B8265059381CD0(*uParam3, 12))
		{
			if (func_141(uParam0, uParam1, uParam2, uParam3, bParam5))
			{
				uLocal_126 = unk_0xEFC1A93F65285B77(Local_118, 0f, 0f, IntToFloat(iLocal_117), 2, 0, 0, 1065353216, 0, 1065353216);
				unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), uLocal_126, sLocal_116, sLocal_125, 2f, -1.5f, 13, 16, 2f, 0);
				unk_0xD299F9D47AAE6209(uLocal_126);
				unk_0xEB79FECD9022AAF0(uParam3, 12);
			}
		}
		if (unk_0x48B8265059381CD0(*uParam3, 12))
		{
			func_140(uParam4);
			iVar0 = unk_0x91FFFB0475D539A1(uLocal_126);
			if (iVar0 >= 0 && unk_0x00743AFDA92F3B04(iVar0))
			{
				if (unk_0x1066E7A58E2A0D9D() != 4)
				{
					if (unk_0x96F65998C0685177(iVar0) >= 0.35f)
					{
						unk_0x549FC2E6537EE931(uLocal_126);
						unk_0x21E7933CCC7B3724(uParam3, 8);
						unk_0x21E7933CCC7B3724(uParam3, 12);
						uParam1->f_10 = -1;
						unk_0x21E7933CCC7B3724(uParam3, 2);
						unk_0x21E7933CCC7B3724(uParam3, 3);
						if (bParam5 == 1)
						{
							unk_0x21E7933CCC7B3724(uParam3, 4);
							unk_0x21E7933CCC7B3724(uParam3, 5);
						}
						else
						{
							unk_0x21E7933CCC7B3724(uParam3, 0);
							unk_0x21E7933CCC7B3724(uParam3, 1);
						}
						return 1;
					}
				}
				else if (unk_0x96F65998C0685177(iVar0) >= 0.9f)
				{
					unk_0x549FC2E6537EE931(uLocal_126);
					unk_0x21E7933CCC7B3724(uParam3, 8);
					unk_0x21E7933CCC7B3724(uParam3, 12);
					uParam1->f_10 = -1;
					unk_0x21E7933CCC7B3724(uParam3, 2);
					unk_0x21E7933CCC7B3724(uParam3, 3);
					if (bParam5 == 1)
					{
						unk_0x21E7933CCC7B3724(uParam3, 4);
						unk_0x21E7933CCC7B3724(uParam3, 5);
					}
					else
					{
						unk_0x21E7933CCC7B3724(uParam3, 0);
						unk_0x21E7933CCC7B3724(uParam3, 1);
					}
					return 1;
				}
			}
		}
	}
	else if (func_141(uParam0, uParam1, uParam2, uParam3, bParam5))
	{
		uParam1->f_10 = -1;
		unk_0x21E7933CCC7B3724(uParam3, 2);
		unk_0x21E7933CCC7B3724(uParam3, 3);
		func_140(uParam4);
		if (bParam5 == 1)
		{
			unk_0x21E7933CCC7B3724(uParam3, 4);
			unk_0x21E7933CCC7B3724(uParam3, 5);
		}
		else
		{
			unk_0x21E7933CCC7B3724(uParam3, 0);
			unk_0x21E7933CCC7B3724(uParam3, 1);
		}
		return 1;
	}
	return 0;
}

void func_140(var uParam0)
{
	*uParam0 = 0;
}

int func_141(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	struct<9> Var1;
	
	if (func_159(uParam1))
	{
		iVar0 = 0;
		if (unk_0x48B8265059381CD0(*uParam3, 8))
		{
			iVar0 = unk_0x91FFFB0475D539A1(uLocal_126);
			if (iVar0 >= 0 && unk_0x00743AFDA92F3B04(iVar0))
			{
				if (unk_0x96F65998C0685177(iVar0) >= 0.9f)
				{
					unk_0x21E7933CCC7B3724(uParam3, 8);
					uLocal_126 = unk_0xEFC1A93F65285B77(Local_118, 0f, 0f, IntToFloat(iLocal_117), 2, 0, 1, 1065353216, 0, 1065353216);
					unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), uLocal_126, sLocal_116, sLocal_123, 2f, -1.5f, 13, 16, 2f, 0);
					unk_0xD299F9D47AAE6209(uLocal_126);
					unk_0xEB79FECD9022AAF0(uParam3, 11);
				}
			}
		}
	}
	if ((!unk_0x95DBE123BC2DB80B() && !func_14(0)) && !unk_0x1CB39616BED2D488())
	{
		if (unk_0xF23B2033129FFCF0(2))
		{
			iLocal_127 = 51;
		}
		else
		{
			iLocal_127 = 222;
		}
		if (!bParam4)
		{
			if (unk_0x48B8265059381CD0(*uParam3, 0))
			{
				if (func_158(uParam0, uParam1) == 1)
				{
					unk_0x21E7933CCC7B3724(uParam3, 0);
				}
			}
			if (unk_0x48B8265059381CD0(*uParam3, 1))
			{
				if (func_158(uParam0, uParam1) == 2)
				{
					unk_0x21E7933CCC7B3724(uParam3, 1);
				}
			}
		}
		else
		{
			if (unk_0x48B8265059381CD0(*uParam3, 5))
			{
				if (func_157(uParam0) == 4)
				{
					unk_0x21E7933CCC7B3724(uParam3, 5);
				}
			}
			if (unk_0x48B8265059381CD0(*uParam3, 4))
			{
				if (func_157(uParam0) == 3)
				{
					unk_0x21E7933CCC7B3724(uParam3, 4);
				}
			}
		}
		if (uParam1->f_9 != func_156(uParam0, uParam1))
		{
			unk_0x21E7933CCC7B3724(uParam3, 2);
			unk_0x21E7933CCC7B3724(uParam3, 3);
			uParam1->f_9 = func_156(uParam0, uParam1);
		}
		if (unk_0x4B972043966C2EB8(2, 225))
		{
			unk_0xEB79FECD9022AAF0(uParam2, 0);
			unk_0x21E7933CCC7B3724(uParam1, 6);
			return 1;
		}
		else
		{
			if ((unk_0x4B972043966C2EB8(2, 235) || unk_0x4B972043966C2EB8(2, 234)) || unk_0x4B972043966C2EB8(2, iLocal_127))
			{
				unk_0x21E7933CCC7B3724(uParam3, 2);
				unk_0x21E7933CCC7B3724(uParam3, 3);
				if (bParam4 == 0)
				{
					unk_0x21E7933CCC7B3724(uParam3, 0);
					unk_0x21E7933CCC7B3724(uParam3, 1);
				}
				else
				{
					unk_0x21E7933CCC7B3724(uParam3, 4);
					unk_0x21E7933CCC7B3724(uParam3, 5);
				}
				if (func_159(uParam1))
				{
					if (!unk_0x48B8265059381CD0(*uParam3, 8))
					{
						if (unk_0x4B972043966C2EB8(2, 235) || unk_0x4B972043966C2EB8(2, 234))
						{
							if (func_158(uParam0, uParam1) == 1 || func_157(uParam0) == 3)
							{
								uLocal_126 = unk_0xEFC1A93F65285B77(Local_118, 0f, 0f, IntToFloat(iLocal_117), 2, 0, 0, 1065353216, 0, 1065353216);
								unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), uLocal_126, sLocal_116, sLocal_124, 2f, -1.5f, 13, 16, 2f, 0);
								unk_0xD299F9D47AAE6209(uLocal_126);
								unk_0xEB79FECD9022AAF0(uParam3, 8);
							}
						}
						else
						{
							uLocal_126 = unk_0xEFC1A93F65285B77(Local_118, 0f, 0f, IntToFloat(iLocal_117), 2, 0, 0, 1065353216, 0, 1065353216);
							unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), uLocal_126, sLocal_116, sLocal_124, 2f, -1.5f, 13, 16, 2f, 0);
							unk_0xD299F9D47AAE6209(uLocal_126);
							unk_0xEB79FECD9022AAF0(uParam3, 8);
						}
					}
				}
				if (unk_0x4B972043966C2EB8(2, 235))
				{
					unk_0xEB79FECD9022AAF0(uParam3, 2);
				}
				else if (unk_0x4B972043966C2EB8(2, 234))
				{
					unk_0xEB79FECD9022AAF0(uParam3, 3);
				}
				else if (unk_0x4B972043966C2EB8(2, iLocal_127))
				{
					if (bParam4 == 0)
					{
						if (func_158(uParam0, uParam1) == 2)
						{
							unk_0xEB79FECD9022AAF0(uParam3, 0);
						}
						else if (func_158(uParam0, uParam1) == 1)
						{
							unk_0xEB79FECD9022AAF0(uParam3, 1);
						}
					}
					else if (func_157(uParam0) == 4)
					{
						unk_0xEB79FECD9022AAF0(uParam3, 4);
					}
					else if (func_157(uParam0) == 3)
					{
						unk_0xEB79FECD9022AAF0(uParam3, 5);
					}
				}
			}
			if (bParam4 == 0)
			{
				if (unk_0x48B8265059381CD0(*uParam2, 0) || unk_0x987367D2EDB45658(2))
				{
					func_154(&(uParam2->f_10));
					func_153(unk_0x38DDA814F2E19659(0, 225, 1), "HUD_INPUT3", &(uParam2->f_10), 0);
					if (func_158(uParam0, uParam1) == 1)
					{
						func_153(unk_0x9AF1671E53EE8CE7(0, 19, 1), "HUD_INPUT80", &(uParam2->f_10), 0);
						func_153(unk_0x38DDA814F2E19659(0, iLocal_127, 1), "HUD_INPUT82", &(uParam2->f_10), 0);
					}
					else if (func_158(uParam0, uParam1) == 2)
					{
						func_153(unk_0x38DDA814F2E19659(0, iLocal_127, 1), "HUD_INPUT81", &(uParam2->f_10), 0);
					}
					unk_0x21E7933CCC7B3724(uParam2, 0);
				}
			}
			else if (unk_0x48B8265059381CD0(*uParam2, 0))
			{
				func_154(&(uParam2->f_10));
				func_153(unk_0x38DDA814F2E19659(0, 225, 1), "HUD_INPUT3", &(uParam2->f_10), 0);
				if (func_157(uParam0) == 3)
				{
					func_153(unk_0x9AF1671E53EE8CE7(0, 19, 1), "HUD_INPUT80", &(uParam2->f_10), 0);
					func_153(unk_0x38DDA814F2E19659(0, iLocal_127, 1), "HUD_INPUT82", &(uParam2->f_10), 0);
				}
				else if (func_157(uParam0) == 4)
				{
					func_153(unk_0x38DDA814F2E19659(0, iLocal_127, 1), "HUD_INPUT81", &(uParam2->f_10), 0);
				}
				unk_0x21E7933CCC7B3724(uParam2, 0);
			}
			Var1 = { func_152() };
			func_151(&(uParam2->f_10), 1f);
			func_143(&(uParam2->f_697), &Var1, &(uParam2->f_10), func_150(&(uParam2->f_10)));
			func_142(1);
		}
	}
	return 0;
}

void func_142(int iParam0)
{
	Global_1354542.f_995 = iParam0;
}

void func_143(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || unk_0x987367D2EDB45658(2))
	{
		*uParam2 = 0;
		if (unk_0xFF84A94166FBB351(*uParam0))
		{
			if (unk_0xEF4E5E47AF0D4480())
			{
				unk_0xEAC9A8A194DF8F91(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x14ED5B5B8289F2FC(0);
				unk_0x44983883E630A945();
			}
			unk_0xEAC9A8A194DF8F91(*uParam0, "CLEAR_ALL");
			unk_0x44983883E630A945();
		}
		func_149(uParam2);
	}
	if (Global_1318071 < 2)
	{
		func_148(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xFF84A94166FBB351(*uParam0))
		{
			*uParam0 = unk_0xB50E108F09B8EC7A("instructional_buttons");
		}
		if (unk_0xFF84A94166FBB351(*uParam0))
		{
			unk_0x109A0C435B50DB34(*uParam0, "CLEAR_ALL");
			if (unk_0xEF4E5E47AF0D4480())
			{
				unk_0xEAC9A8A194DF8F91(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x14ED5B5B8289F2FC(1);
				unk_0x44983883E630A945();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0x48B8265059381CD0(uParam2->f_676, iVar0))
				{
					unk_0xEAC9A8A194DF8F91(*uParam0, "SET_DATA_SLOT");
					unk_0xDF18CF55301CEB8B(iVar0);
					if (!unk_0x48B8265059381CD0(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_147(unk_0x38DDA814F2E19659(iVar1, iVar2, 1));
						if (iVar3 < 353)
						{
							func_147(unk_0x38DDA814F2E19659(iVar1, iVar3, 1));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_147(unk_0x9AF1671E53EE8CE7(iVar4, iVar5, 1));
					}
					if (unk_0x48B8265059381CD0(uParam2->f_674, iVar0))
					{
						unk_0xDCEB60B79ECB219E(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x96F1415E7C5E58EB(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x69967F83C1E636E2(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x1798EBF9408190D3();
					}
					else if (unk_0x48B8265059381CD0(uParam2->f_675, iVar0))
					{
						unk_0xDCEB60B79ECB219E(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xBAB00B98D1E61BEE(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x1798EBF9408190D3();
					}
					else
					{
						func_146(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xEF4E5E47AF0D4480())
					{
						if (unk_0x48B8265059381CD0(uParam2->f_678, iVar0))
						{
							unk_0x14ED5B5B8289F2FC(1);
							unk_0xDF18CF55301CEB8B(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x14ED5B5B8289F2FC(0);
							unk_0xDF18CF55301CEB8B(353);
						}
					}
					unk_0x44983883E630A945();
				}
				else
				{
					unk_0xEAC9A8A194DF8F91(*uParam0, "SET_DATA_SLOT");
					unk_0xDF18CF55301CEB8B(iVar0);
					func_147(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0x9C88EB7B70229335(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_147(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0x48B8265059381CD0(uParam2->f_674, iVar0))
					{
						unk_0xDCEB60B79ECB219E(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x96F1415E7C5E58EB(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x69967F83C1E636E2(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x1798EBF9408190D3();
					}
					else if (unk_0x48B8265059381CD0(uParam2->f_675, iVar0))
					{
						unk_0xDCEB60B79ECB219E(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xBAB00B98D1E61BEE(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x1798EBF9408190D3();
					}
					else
					{
						func_146(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xEF4E5E47AF0D4480())
					{
						unk_0x14ED5B5B8289F2FC(0);
						unk_0xDF18CF55301CEB8B(353);
					}
					unk_0x44983883E630A945();
				}
				iVar0++;
			}
			unk_0xEAC9A8A194DF8F91(*uParam0, "SET_MAX_WIDTH");
			unk_0x584CF9CAE83942E5(uParam2->f_686);
			unk_0x44983883E630A945();
			unk_0xEAC9A8A194DF8F91(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xDF18CF55301CEB8B(0);
			unk_0x44983883E630A945();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_145(*uParam0, uParam1);
	}
	func_144();
}

void func_144()
{
	unk_0xE57F94EA937AAD99(7);
	unk_0xE57F94EA937AAD99(6);
	unk_0xE57F94EA937AAD99(8);
	unk_0xE57F94EA937AAD99(9);
}

void func_145(var uParam0, var uParam1)
{
	unk_0x90101FEE397F4A7E(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_146(var uParam0)
{
	unk_0xDCEB60B79ECB219E(uParam0);
	unk_0x1798EBF9408190D3();
}

void func_147(char* sParam0)
{
	unk_0x0A7B7FF9E4F6CAA7(sParam0);
}

void func_148(int iParam0)
{
	Global_1318071 = iParam0;
}

void func_149(var uParam0)
{
	uParam0->f_679 = 0;
}

int func_150(var uParam0)
{
	return uParam0->f_679;
}

void func_151(var uParam0, float fParam1)
{
	uParam0->f_686 = fParam1;
}

struct<9> func_152()
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

void func_153(char* sParam0, char* sParam1, var uParam2, char* sParam3)
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

void func_154(var uParam0)
{
	func_155(uParam0);
	uParam0->f_679 = 1;
}

void func_155(var uParam0)
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
		uParam0->f_1[iVar0 /*56*/].f_54 = 353;
		uParam0->f_1[iVar0 /*56*/].f_55 = 353;
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

int func_156(var uParam0, var uParam1)
{
	if (unk_0x48B8265059381CD0(*uParam1, 0))
	{
		return uParam0->f_2;
	}
	return uParam0->f_1;
}

int func_157(var uParam0)
{
	return uParam0->f_52;
}

int func_158(var uParam0, var uParam1)
{
	if (unk_0x48B8265059381CD0(*uParam1, 0))
	{
		return uParam0->f_51;
	}
	return uParam0->f_50;
}

int func_159(var uParam0)
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

void func_160()
{
	if (!unk_0x1CB39616BED2D488() && !unk_0x95DBE123BC2DB80B())
	{
		unk_0x1FFF117878F2CECE(0);
		unk_0x1FFF117878F2CECE(2);
		unk_0xCA3F0B618E8962EA(2, 225, 1);
		unk_0xCA3F0B618E8962EA(2, 234, 1);
		unk_0xCA3F0B618E8962EA(2, 235, 1);
		unk_0xCA3F0B618E8962EA(2, iLocal_127, 1);
		unk_0xCA3F0B618E8962EA(2, 199, 1);
		unk_0xCA3F0B618E8962EA(0, 26, 1);
		unk_0xCA3F0B618E8962EA(0, 2, 1);
		unk_0xCA3F0B618E8962EA(0, 1, 1);
	}
}

void func_161()
{
	Global_17151.f_6 = 1;
}

void func_162()
{
	Global_2494199.f_4394 = 0;
}

void func_163(bool bParam0)
{
	if (bParam0)
	{
		if (func_164())
		{
			Global_2443134.f_27 = 1;
		}
	}
	else
	{
		Global_2443134.f_27 = 0;
	}
}

bool func_164()
{
	return unk_0x48B8265059381CD0(Global_2443134.f_2, 11);
}

void func_165()
{
	Global_2433125.f_655.f_10 = 1;
}

int func_166(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, bool bParam8)
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
		func_182();
	}
	switch (*uParam4)
	{
		case 0:
			if ((((!unk_0x48B8265059381CD0(*uParam0, 9) && !unk_0x48B8265059381CD0(*uParam0, 13)) && !unk_0x48B8265059381CD0(*uParam0, 10)) && !unk_0x48B8265059381CD0(Global_2359301, 15)) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				if (bParam8 == 0)
				{
					iVar3 = func_181(uParam0, uParam2);
				}
				else
				{
					iVar3 = 2;
				}
				if (bParam8 == 0)
				{
					if (iLocal_239 > iVar3)
					{
						iLocal_239 = 0;
					}
				}
				if (bParam8 == 1)
				{
					iLocal_240 = iLocal_239;
					iLocal_239 = 2;
				}
				if (func_179(uParam0, uParam2, iLocal_239) && !unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					if (func_175((11 + iLocal_239), Local_118, uParam7))
					{
						bLocal_128 = true;
						if (!bVar0)
						{
							if (!Global_1751032 && !unk_0x4E1850F5FF023071("MP_POSITIONED_RADIO_MUTE_SCENE"))
							{
								if (((((func_3(unk_0xBE369BE1BC57A796(), 1, 1) && !unk_0x48B8265059381CD0(Global_2433125.f_697.f_4, 0)) && !func_174()) && !func_138(uParam0, uParam1)) && !func_173()) && !unk_0xB61C11E08C30F9CB(unk_0xBE369BE1BC57A796()))
								{
									if (bParam8 == 1)
									{
									}
									if (func_159(uParam0))
									{
										unk_0xA0E7D0E8FE126EE8(sLocal_116);
										if (unk_0xF4F8AE8DD0F08C1E(sLocal_116))
										{
											if (!unk_0x48B8265059381CD0(Global_2359301, 7))
											{
												bVar0 = true;
											}
										}
										else
										{
											unk_0xA0E7D0E8FE126EE8(sLocal_116);
										}
									}
									else
									{
										bVar0 = true;
									}
								}
								else
								{
									if (func_3(unk_0xBE369BE1BC57A796(), 1, 1))
									{
									}
									if (!unk_0x48B8265059381CD0(Global_2433125.f_697.f_4, 0))
									{
									}
									if (!func_174())
									{
									}
									if (!func_138(uParam0, uParam1))
									{
									}
								}
							}
							else
							{
								if (!Global_1751032)
								{
								}
								if (!unk_0x4E1850F5FF023071("MP_POSITIONED_RADIO_MUTE_SCENE"))
								{
								}
							}
						}
					}
					else
					{
						iVar4 = 0;
						while (iVar4 < unk_0xCF8627766CD5D4CE())
						{
							if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar4)))
							{
								iVar5 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar4));
								if (iVar5 != unk_0xBE369BE1BC57A796())
								{
									if (func_3(iVar5, 1, 1))
									{
										fVar6 = unk_0x3DC4639D5F23DEA2(func_172(iVar5), func_172(unk_0xBE369BE1BC57A796()), 1);
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
						if (Global_1591073)
						{
							if (*uParam3 == -1)
							{
								func_171(uParam3, 3, "MPRD_BILL", 0, 0, 0, 0);
							}
						}
						else if (*uParam3 == -1)
						{
							func_171(uParam3, 3, "MPRD_CTXT", 0, 0, 0, 0);
						}
						else if (func_170(*uParam3, 1))
						{
							func_6(uParam3);
							if (func_159(uParam0))
							{
								unk_0xEB79FECD9022AAF0(uParam0, 13);
								uParam0->f_10 = iLocal_239;
								*uParam4++;
							}
							else
							{
								uParam0->f_10 = iLocal_239;
								unk_0x9F7BF6124414BCF4(unk_0x17B5CC8A8615737D(), func_168(uParam0, uParam2), 0);
								unk_0x0D322CDF37087C0E(unk_0x17B5CC8A8615737D(), func_168(uParam0, uParam2), -1, 0, 2);
								unk_0xEB79FECD9022AAF0(uParam1, 0);
								unk_0xEB79FECD9022AAF0(&Global_2359301, 15);
								return 1;
							}
						}
					}
				}
				else
				{
					bLocal_128 = false;
					if (bParam8 == 1)
					{
						iLocal_239 = iLocal_240;
					}
					else if (!bLocal_128)
					{
						iLocal_239++;
					}
				}
			}
			break;
		
		case 1:
			if (func_167((11 + iLocal_239), &iVar1, uParam6, uParam7))
			{
				if ((unk_0x48B8265059381CD0(*uParam0, 13) && iVar1 == 1) || (uParam0->f_12 && iVar1 == 1))
				{
					Var7 = { unk_0x6D7B8A9E275D9A37(sLocal_116, sLocal_121, Local_118, 0f, 0f, IntToFloat(iLocal_117), 0, 2) };
					Var10 = { unk_0xE31EC4AE3D955F3A(sLocal_116, sLocal_121, Local_118, 0f, 0f, IntToFloat(iLocal_117), 0, 2) };
					Var13 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
					unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
					unk_0x9C16B2DABAEC929A(unk_0x17B5CC8A8615737D(), unk_0xE31EC4AE3D955F3A(sLocal_116, sLocal_121, Local_118, 0f, 0f, IntToFloat(iLocal_117), 0, 2), 1f, 2500, Var7.f_2, 0.1f);
					unk_0x21E7933CCC7B3724(uParam0, 13);
					unk_0xEB79FECD9022AAF0(uParam0, 9);
					*uParam4++;
				}
				else if (iVar1 == 2)
				{
					func_140(uParam6);
					unk_0x21E7933CCC7B3724(uParam0, 13);
					unk_0x21E7933CCC7B3724(&Global_2359301, 15);
					unk_0x21E7933CCC7B3724(uParam1, 0);
					*uParam4 = 0;
				}
			}
			break;
		
		case 2:
			if (unk_0x48B8265059381CD0(*uParam0, 9))
			{
				if (unk_0x1F8F07D86DA1A701(unk_0x17B5CC8A8615737D(), 2106541073) == 7)
				{
					unk_0xEB79FECD9022AAF0(uParam0, 10);
					uLocal_126 = unk_0xEFC1A93F65285B77(Local_118, 0f, 0f, IntToFloat(iLocal_117), 2, 0, 0, 1065353216, 0, 1065353216);
					unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), uLocal_126, sLocal_116, sLocal_122, 2f, -1.5f, 13, 16, 2f, 0);
					unk_0xD299F9D47AAE6209(uLocal_126);
					unk_0x21E7933CCC7B3724(uParam0, 9);
					*uParam4++;
				}
			}
			break;
		
		case 3:
			if (unk_0x48B8265059381CD0(*uParam0, 10))
			{
				iVar2 = unk_0x91FFFB0475D539A1(uLocal_126);
				if (iVar2 >= 0 && unk_0x00743AFDA92F3B04(iVar2))
				{
					if (unk_0x96F65998C0685177(iVar2) >= 0.9f)
					{
						if (unk_0x48B8265059381CD0(*uParam0, 5))
						{
							unk_0xEB79FECD9022AAF0(uParam0, 6);
						}
						unk_0xEB79FECD9022AAF0(uParam1, 0);
						unk_0xEB79FECD9022AAF0(&Global_2359301, 15);
						unk_0x21E7933CCC7B3724(uParam0, 10);
						uLocal_126 = unk_0xEFC1A93F65285B77(Local_118, 0f, 0f, IntToFloat(iLocal_117), 2, 0, 1, 1065353216, 0, 1065353216);
						unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), uLocal_126, sLocal_116, sLocal_123, 2f, -1.5f, 13, 16, 2f, 0);
						unk_0xD299F9D47AAE6209(uLocal_126);
						unk_0xEB79FECD9022AAF0(uParam5, 11);
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

int func_167(int iParam0, int iParam1, var uParam2, var uParam3)
{
	*uParam2 = iParam0;
	if ((*uParam3)[iParam0] != 0)
	{
		if (unk_0x48B8265059381CD0((*uParam3)[iParam0], unk_0xBE369BE1BC57A796()))
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

Vector3 func_168(var uParam0, var uParam1)
{
	struct<3> Var0;
	
	if (!uParam0->f_12)
	{
		switch (uParam1->f_33)
		{
			case 2:
				if (unk_0x48B8265059381CD0(*uParam0, 0))
				{
					return 176.2662f, -999.429f, -98.8624f;
				}
				else
				{
					return 263.3552f, -994.6862f, -98.9227f;
				}
				break;
			
			case 6:
				if (unk_0x48B8265059381CD0(*uParam0, 0))
				{
					return 201.9062f, -993.8659f, -98.9293f;
				}
				else
				{
					return 341.5449f, -1001.063f, -99.0576f;
				}
				break;
			
			case 10:
				if (unk_0x48B8265059381CD0(*uParam0, 0))
				{
					return 230.6372f, -974.8629f, -98.8201f;
				}
				else
				{
					switch (uParam0->f_10)
					{
						case 0:
							if (func_169(uParam1->f_31))
							{
								func_36(uParam1->f_31, 117, &Var0, 61, 0);
							}
							else
							{
								func_36(uParam1->f_31, 117, &Var0, -1, 0);
							}
							return Var0;
							break;
						
						case 1:
							if (func_169(uParam1->f_31))
							{
								func_36(uParam1->f_31, 118, &Var0, 61, 0);
							}
							else
							{
								func_36(uParam1->f_31, 118, &Var0, -1, 0);
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
				func_42(uParam0->f_2, 117, &Var0, 0);
				return Var0;
				break;
			
			case 1:
				func_42(uParam0->f_2, 118, &Var0, 0);
				return Var0;
				break;
			
			case 2:
				func_42(uParam0->f_2, 597, &Var0, 0);
				return Var0;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_169(int iParam0)
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

int func_170(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_7(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xCF7855B965948E97(unk_0x592069F95C314814()))
	{
		return 0;
	}
	if (func_14(0))
	{
		return 0;
	}
	if (unk_0x1B76B77EDF24A933())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36484[iVar0 /*32*/] == 1 && Global_36484[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36484[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36484[iVar0 /*32*/].f_5 = 1;
			Global_36484[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36484[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36484[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_171(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x82F1A060D8F4583B(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xE9E6B5364105A000())
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
		if (!Global_36484[iVar0 /*32*/])
		{
			Global_36484[iVar0 /*32*/] = 1;
			Global_36484[iVar0 /*32*/].f_1 = Global_36685;
			Global_36685++;
			Global_36484[iVar0 /*32*/].f_4 = 0;
			Global_36484[iVar0 /*32*/].f_29 = 0;
			Global_36484[iVar0 /*32*/].f_5 = 0;
			Global_36484[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36484[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36484[iVar0 /*32*/].f_6 = iParam3;
			Global_36484[iVar0 /*32*/].f_31 = unk_0xE9A5FDFDC239B2ED();
			Global_36484[iVar0 /*32*/].f_7 = 0;
			Global_36484[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x9C88EB7B70229335(sParam4))
			{
				Global_36484[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36484[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36484[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36484[iVar0 /*32*/].f_12 = 0;
				Global_36484[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_36484[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

Vector3 func_172(int iParam0)
{
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iParam0), 0);
}

bool func_173()
{
	return unk_0x3C9A4847496426B9() != 0;
}

int func_174()
{
	if (Global_2433125.f_655.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0, struct<3> Param1, var uParam4)
{
	if (!func_178(iParam0, Param1, uParam4))
	{
		return 0;
	}
	if (!func_176())
	{
		return 0;
	}
	return 1;
}

int func_176()
{
	if (((((((((((((((((!func_3(unk_0xBE369BE1BC57A796(), 1, 1) || func_177()) || unk_0xE58A1B5558D2DC66(unk_0xBE369BE1BC57A796())) || unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796())) || unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D())) || unk_0xE9E6B5364105A000()) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0x39027D725EF551EA(unk_0x17B5CC8A8615737D())) || unk_0x5FD7D852A3EAF133(unk_0x17B5CC8A8615737D())) || unk_0xBE211E3B0F783C51(unk_0x17B5CC8A8615737D())) || unk_0xDBB75EFBFFEDB00D(unk_0x17B5CC8A8615737D())) || unk_0x5315600F216E4653(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x53E28743D432E98F(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0xF192008F4F403E15(unk_0x17B5CC8A8615737D())) || unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D())) || unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0))
	{
		return 0;
	}
	return 1;
}

int func_177()
{
	if (Global_2583878.f_770 == 1)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	int iVar1;
	
	if ((*uParam4)[iParam0] != 0 && !unk_0x48B8265059381CD0((*uParam4)[iParam0], unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (unk_0xD77F1BF32D628593(Param1, 0.05f, 0, 1, 0, 0, 0, 0, 0) || unk_0xD77F1BF32D628593(Param1, 0.05f, 0, 0, 1, 0, 0, unk_0x17B5CC8A8615737D(), 1))
	{
		iVar0 = 0;
		while (iVar0 < unk_0xCF8627766CD5D4CE())
		{
			if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar0)))
			{
				iVar1 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0));
				if (iVar1 != unk_0xBE369BE1BC57A796())
				{
					if (unk_0x1C34CE8087E3897C(unk_0xDF7CE83326F434E9(iVar1), Param1, 0.5f, 0.5f, 0.5f, 0, 1, 0))
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

int func_179(var uParam0, var uParam1, int iParam2)
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
	
	if (Global_1764565 && func_180())
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
			unk_0x21E7933CCC7B3724(uParam0, 5);
			break;
	}
	if ((((((((!func_58(uParam1->f_31) && !func_57(uParam1->f_31, -1)) && !func_56(uParam1->f_31)) && !uParam0->f_12) && !func_55(uParam1->f_31)) && !func_50(uParam1->f_31, 1, 0)) && !func_54(unk_0xBE369BE1BC57A796())) && !func_49(unk_0xBE369BE1BC57A796())) && !func_46(unk_0xBE369BE1BC57A796()))
	{
		switch (uParam1->f_33)
		{
			case 2:
				if (unk_0x48B8265059381CD0(*uParam0, 0))
				{
					if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 176.2736f, -999.4766f, -97.58723f, 176.2674f, -1000.868f, -100.0624f, 1.6875f, 0, 1, 0))
					{
						sLocal_116 = "anim@mp_radio@garage@low";
						iLocal_117 = 0;
						Local_118 = { 176.601f, -999.79f, -98.957f };
						sLocal_121 = "action_a";
						sLocal_122 = "enter";
						sLocal_123 = "idle_a";
						sLocal_124 = "button_press";
						sLocal_125 = "exit";
						return 1;
					}
				}
				else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 263.615f, -994.4068f, -97.69791f, 263.6068f, -996.1709f, -100.0711f, 1.5f, 0, 1, 0))
				{
					sLocal_116 = "anim@mp_radio@low_apment";
					iLocal_117 = -1;
					Local_118 = { 263.035f, -995.132f, -99.04f };
					sLocal_121 = "action_a_kitchen";
					sLocal_122 = "enter_kitchen";
					sLocal_123 = "idle_a_kitchen";
					sLocal_124 = "button_press_kitchen";
					sLocal_125 = "exit_kitchen";
					return 1;
				}
				break;
			
			case 6:
				if (unk_0x48B8265059381CD0(*uParam0, 0))
				{
					if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 201.8828f, -993.9427f, -97.58112f, 202.0024f, -995.1277f, -100.0625f, 1.6875f, 0, 1, 0))
					{
						sLocal_116 = "anim@mp_radio@garage@medium";
						iLocal_117 = 0;
						Local_118 = { 201.455f, -994.257f, -98.979f };
						sLocal_121 = "action_a";
						sLocal_122 = "enter";
						sLocal_123 = "idle_a";
						sLocal_124 = "button_press";
						sLocal_125 = "exit";
						return 1;
					}
				}
				else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 340.9294f, -1002.605f, -100.1962f, 340.9887f, -1000.322f, -98.19622f, 1f, 0, 1, 0))
				{
					sLocal_116 = "anim@mp_radio@medium_apment";
					iLocal_117 = -90;
					Local_118 = { 341.355f, -1000.652f, -99.14f };
					sLocal_121 = "action_a_kitchen";
					sLocal_122 = "enter_kitchen";
					sLocal_123 = "idle_a_kitchen";
					sLocal_124 = "button_press_kitchen";
					sLocal_125 = "exit_kitchen";
					return 1;
				}
				break;
			
			case 10:
				if (unk_0x48B8265059381CD0(*uParam0, 0))
				{
					if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 231.8411f, -975.6349f, -100.0898f, 230.3515f, -975.6111f, -96.0415f, 2.5f, 0, 1, 0))
					{
						sLocal_116 = "anim@mp_radio@garage@high";
						iLocal_117 = 0;
						Local_118 = { 230.302f, -975.685f, -98.979f };
						sLocal_121 = "action_a";
						sLocal_122 = "enter";
						sLocal_123 = "idle_a";
						sLocal_124 = "button_press";
						sLocal_125 = "exit";
						return 1;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							Var0 = { Local_131 };
							Var12 = { Var0 };
							Var0 = { Local_137 };
							if (func_169(uParam1->f_31))
							{
								Local_118 = { Local_161 };
								iLocal_117 = unk_0xF2DB717A73826179(Local_161.f_3.f_2);
								sLocal_116 = "anim@mp_radio@high_life_apment";
								sLocal_121 = "action_a_living_room";
								sLocal_122 = "enter_living_room";
								sLocal_123 = "idle_a_living_room";
								sLocal_124 = "button_press_living_room";
								sLocal_125 = "exit_living_room";
							}
							else
							{
								Local_118 = { Local_161 };
								iLocal_117 = unk_0xF2DB717A73826179(Local_161.f_3.f_2);
								sLocal_116 = "anim@mp_radio@high_apment";
								sLocal_121 = "action_a_bedroom";
								sLocal_122 = "enter_bedroom";
								sLocal_123 = "idle_a_bedroom";
								sLocal_124 = "button_press_bedroom";
								sLocal_125 = "exit_bedroom";
							}
							Var15 = { Var0 };
							fVar18 = 1.8125f;
							break;
						
						case 1:
							Var0 = { Local_167 };
							Var12 = { Var0 };
							Var0 = { Local_173 };
							if (func_169(uParam1->f_31))
							{
								sLocal_116 = "anim@mp_radio@high_life_apment";
								Local_118 = { Local_179 };
								iLocal_117 = unk_0xF2DB717A73826179(Local_179.f_3.f_2);
								sLocal_121 = "action_a_bedroom";
								sLocal_122 = "enter_bedroom";
								sLocal_123 = "idle_a_bedroom";
								sLocal_124 = "button_press_bedroom";
								sLocal_125 = "exit_bedroom";
							}
							else
							{
								Local_118 = { Local_179 };
								iLocal_117 = unk_0xF2DB717A73826179(Local_179.f_3.f_2);
								sLocal_116 = "anim@mp_radio@high_apment";
								sLocal_121 = "action_a_living_room";
								sLocal_122 = "enter_living_room";
								sLocal_123 = "idle_a_living_room";
								sLocal_124 = "button_press_living_room";
								sLocal_125 = "exit_living_room";
							}
							Var15 = { Var0 };
							fVar18 = 1.8125f;
							break;
						
						case 2:
							Var0 = { Local_185 };
							Var12 = { Var0 };
							Var0 = { Local_191 };
							if (func_169(uParam1->f_31))
							{
								Local_118 = { Local_197 };
								iLocal_117 = unk_0xF2DB717A73826179(Local_197.f_3.f_2);
								sLocal_116 = "anim@mp_radio@high_life_apment";
								sLocal_121 = "action_a_study";
								sLocal_122 = "enter_study";
								sLocal_123 = "idle_a_study";
								sLocal_124 = "button_press_study";
								sLocal_125 = "exit_study";
							}
							else
							{
								Local_118 = { Local_197 };
								iLocal_117 = unk_0xF2DB717A73826179(Local_197.f_3.f_2);
								sLocal_116 = "anim@mp_radio@high_apment";
								sLocal_121 = "action_a_study";
								sLocal_122 = "enter_study";
								sLocal_123 = "idle_a_study";
								sLocal_124 = "button_press_study";
								sLocal_125 = "exit_study";
							}
							Var15 = { Var0 };
							fVar18 = 1f;
							iVar19 = 1;
							break;
					}
					if ((Var12.f_0 != 0f && Var12.f_1 != 0f) && Var12.f_2 != 0f)
					{
						if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), Var12, Var15, fVar18, 0, 1, 0))
						{
							if (iVar19 == 1)
							{
								if (!unk_0x48B8265059381CD0(*uParam0, 5))
								{
									unk_0xEB79FECD9022AAF0(uParam0, 5);
								}
								iVar19 = 0;
							}
							return 1;
						}
						else
						{
							iVar19 = 0;
							unk_0x21E7933CCC7B3724(uParam0, 5);
							Local_118 = { 0f, 0f, 0f };
							iLocal_117 = 0;
							sLocal_116 = "";
							sLocal_121 = "";
							sLocal_122 = "";
							sLocal_123 = "";
							sLocal_124 = "";
							sLocal_125 = "";
						}
					}
				}
				break;
			
			case 20:
				if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), Local_131, Local_137, 1.4f, 0, 1, 0))
				{
					iLocal_117 = unk_0xF2DB717A73826179(Local_161.f_3.f_2);
					Local_118 = { Local_161 };
					sLocal_116 = "anim@mp_radio@garage@medium";
					sLocal_121 = "action_a";
					sLocal_122 = "enter";
					sLocal_123 = "idle_a";
					sLocal_124 = "button_press";
					sLocal_125 = "exit";
					return 1;
				}
				break;
		}
	}
	else if (((((((func_58(uParam1->f_31) || func_57(uParam1->f_31, -1)) || func_56(uParam1->f_31)) || uParam0->f_12) || func_55(uParam1->f_31)) || func_54(unk_0xBE369BE1BC57A796())) || func_49(unk_0xBE369BE1BC57A796())) || func_46(unk_0xBE369BE1BC57A796()))
	{
		switch (iParam2)
		{
			case 0:
				Var20 = { Local_131 };
				Var26 = { Local_137 };
				Var32 = { Local_161 };
				if (func_56(uParam1->f_31))
				{
					if (((Global_3934103 == 1 || Global_3934103 == 4) || Global_3934103 == 5) || Global_3934103 == 8)
					{
						Var20 = { Local_155 };
						Var26 = { Local_149 };
						Var32 = { Local_143 };
					}
					else if (((Global_3934103 == 2 || Global_3934103 == 3) || Global_3934103 == 6) || Global_3934103 == 7)
					{
						Var20 = { Local_131 };
						Var26 = { Local_137 };
						Var32 = { Local_161 };
					}
				}
				Var0 = { Var20 };
				Var12 = { Var0 };
				Var0 = { Var26 };
				Local_118 = { Var32 };
				iLocal_117 = unk_0xF2DB717A73826179(Var32.f_3.f_2);
				sLocal_116 = "anim@mp_radio@high_apment";
				sLocal_121 = "action_a_living_room";
				sLocal_122 = "enter_living_room";
				sLocal_123 = "idle_a_living_room";
				sLocal_124 = "button_press_living_room";
				sLocal_125 = "exit_living_room";
				if (uParam0->f_12)
				{
					sLocal_116 = "anim@mp_radio@garage@low";
					Local_118 = { Local_161 };
					iLocal_117 = unk_0xF2DB717A73826179(Local_161.f_3.f_2);
					sLocal_121 = "action_a";
					sLocal_122 = "enter";
					sLocal_123 = "idle_a";
					sLocal_124 = "button_press";
					sLocal_125 = "exit";
				}
				if (func_55(uParam1->f_31))
				{
					sLocal_116 = "anim@mp_radio@high_apment";
					sLocal_121 = "action_a_bedroom";
					sLocal_122 = "enter_bedroom";
					sLocal_123 = "idle_a_bedroom";
					sLocal_124 = "button_press_bedroom";
					sLocal_125 = "exit_bedroom";
				}
				if (func_54(unk_0xBE369BE1BC57A796()) || func_49(unk_0xBE369BE1BC57A796()))
				{
					sLocal_116 = "anim@mp_radio@high_apment";
					sLocal_121 = "action_a_living_room";
					sLocal_122 = "enter_living_room";
					sLocal_123 = "idle_a_living_room";
					sLocal_124 = "button_press_living_room";
					sLocal_125 = "exit_living_room";
				}
				if (func_46(unk_0xBE369BE1BC57A796()))
				{
					sLocal_116 = "anim@mp_radio@low_apment";
					sLocal_121 = "action_a_kitchen";
					sLocal_122 = "enter_kitchen";
					sLocal_123 = "idle_a_kitchen";
					sLocal_124 = "button_press_kitchen";
					sLocal_125 = "exit_kitchen";
				}
				Var15 = { Var0 };
				fVar18 = 1.8125f;
				break;
			
			case 1:
				Var0 = { Local_167 };
				Var12 = { Var0 };
				Var0 = { Local_173 };
				Local_118 = { Local_179 };
				iLocal_117 = unk_0xF2DB717A73826179(Local_179.f_3.f_2);
				sLocal_116 = "anim@mp_radio@high_apment";
				sLocal_121 = "action_a_living_room";
				sLocal_122 = "enter_living_room";
				sLocal_123 = "idle_a_living_room";
				sLocal_124 = "button_press_living_room";
				sLocal_125 = "exit_living_room";
				if (func_56(uParam1->f_31))
				{
					sLocal_116 = "anim@mp_radio@high_apment";
					sLocal_121 = "action_a_study";
					sLocal_122 = "enter_study";
					sLocal_123 = "idle_a_study";
					sLocal_124 = "button_press_study";
					sLocal_125 = "exit_study";
				}
				Var15 = { Var0 };
				fVar18 = 1.8125f;
				break;
			
			case 2:
				Var0 = { Local_185 };
				Var12 = { Var0 };
				Var0 = { Local_191 };
				Local_118 = { Local_197 };
				iLocal_117 = unk_0xF2DB717A73826179(Local_197.f_3.f_2);
				sLocal_116 = "anim@mp_radio@high_apment";
				sLocal_121 = "action_a_living_room";
				sLocal_122 = "enter_living_room";
				sLocal_123 = "idle_a_living_room";
				sLocal_124 = "button_press_living_room";
				sLocal_125 = "exit_living_room";
				if (func_57(uParam1->f_31, -1) || func_56(uParam1->f_31))
				{
					sLocal_121 = "action_a_study";
					sLocal_122 = "enter_study";
					sLocal_123 = "idle_a_study";
					sLocal_124 = "button_press_study";
					sLocal_125 = "exit_study";
				}
				Var15 = { Var0 };
				fVar18 = 1.8125f;
				break;
			
			case 3:
				Var0 = { Local_215 };
				Var12 = { Var0 };
				Var0 = { Local_209 };
				Local_118 = { Local_203 };
				iLocal_117 = unk_0xF2DB717A73826179(Local_203.f_3.f_2);
				sLocal_116 = "anim@mp_radio@high_apment";
				sLocal_121 = "action_a_living_room";
				sLocal_122 = "enter_living_room";
				sLocal_123 = "idle_a_living_room";
				sLocal_124 = "button_press_living_room";
				sLocal_125 = "exit_living_room";
				Var15 = { Var0 };
				fVar18 = 1.8125f;
				break;
			
			case 4:
				Var0 = { Local_233 };
				Var12 = { Var0 };
				Var0 = { Local_227 };
				Local_118 = { Local_221 };
				iLocal_117 = unk_0xF2DB717A73826179(Local_221.f_3.f_2);
				sLocal_116 = "anim@mp_radio@high_apment";
				sLocal_121 = "action_a_living_room";
				sLocal_122 = "enter_living_room";
				sLocal_123 = "idle_a_living_room";
				sLocal_124 = "button_press_living_room";
				sLocal_125 = "exit_living_room";
				Var15 = { Var0 };
				fVar18 = 1.8125f;
				break;
		}
		if ((Var12.f_0 != 0f && Var12.f_1 != 0f) && Var12.f_2 != 0f)
		{
			if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), Var12, Var15, fVar18, 0, 1, 0))
			{
				Global_25456 = 1;
				return 1;
			}
			else
			{
				iVar19 = 0;
				Global_25456 = 0;
				unk_0x21E7933CCC7B3724(uParam0, 5);
				Local_118 = { 0f, 0f, 0f };
				iLocal_117 = 0;
				sLocal_116 = "";
				sLocal_121 = "";
				sLocal_122 = "";
				sLocal_123 = "";
				sLocal_124 = "";
				sLocal_125 = "";
			}
		}
		switch (uParam1->f_33)
		{
			case 10:
				if (unk_0x48B8265059381CD0(*uParam0, 0))
				{
					if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 231.8411f, -975.6349f, -100.0898f, 230.3515f, -975.6111f, -96.0415f, 2.5f, 0, 1, 0))
					{
						sLocal_116 = "anim@mp_radio@garage@high";
						iLocal_117 = 0;
						Local_118 = { 230.302f, -975.685f, -98.979f };
						sLocal_121 = "action_a";
						sLocal_122 = "enter";
						sLocal_123 = "idle_a";
						sLocal_124 = "button_press";
						sLocal_125 = "exit";
						return 1;
					}
				}
				break;
			}
	}
	return 0;
}

int func_180()
{
	if (func_54(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x48B8265059381CD0(Global_1764677.f_2, 0) || unk_0x48B8265059381CD0(Global_1764677.f_2, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_181(var uParam0, var uParam1)
{
	if (func_57(uParam1->f_31, -1))
	{
		return 3;
	}
	if (func_56(uParam1->f_31))
	{
		return 2;
	}
	if (func_58(uParam1->f_31) && !uParam0->f_12)
	{
		return 5;
	}
	if (uParam0->f_12)
	{
		return 3;
	}
	if (func_50(uParam1->f_31, 0, 0))
	{
		return 2;
	}
	if (((func_55(uParam1->f_31) || func_54(unk_0xBE369BE1BC57A796())) || func_49(unk_0xBE369BE1BC57A796())) || func_46(unk_0xBE369BE1BC57A796()))
	{
		return 1;
	}
	if (uParam1->f_33 == 10)
	{
		if (!unk_0x48B8265059381CD0(*uParam0, 0))
		{
			return 1;
		}
	}
	return 2;
}

void func_182()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_14(0))
		{
			func_11(0);
		}
		unk_0xEB79FECD9022AAF0(&Global_2314, 2);
	}
}

void func_183(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
}

int func_184(var uParam0, var uParam1)
{
	int iVar0;
	
	if (((((((!func_58(uParam1->f_31) && !func_57(uParam1->f_31, -1)) && !func_56(uParam1->f_31)) && !uParam0->f_12) && !func_55(uParam1->f_31)) && !func_54(unk_0xBE369BE1BC57A796())) && !func_49(unk_0xBE369BE1BC57A796())) && !func_46(unk_0xBE369BE1BC57A796()))
	{
		switch (uParam1->f_33)
		{
			case 2:
				break;
			
			case 6:
				break;
			
			case 10:
				if (unk_0x48B8265059381CD0(*uParam0, 0))
				{
				}
				else
				{
					if (func_169(uParam1->f_31))
					{
						func_36(uParam1->f_31, 102, &Local_131, 61, 0);
					}
					else
					{
						func_36(uParam1->f_31, 102, &Local_131, -1, 0);
					}
					if (func_169(uParam1->f_31))
					{
						func_36(uParam1->f_31, 103, &Local_137, 61, 0);
					}
					else
					{
						func_36(uParam1->f_31, 103, &Local_137, -1, 0);
					}
					if (func_169(uParam1->f_31))
					{
						func_36(uParam1->f_31, 182, &Local_161, 61, 0);
					}
					else
					{
						func_36(uParam1->f_31, 182, &Local_161, -1, 0);
					}
					if (func_169(uParam1->f_31))
					{
						func_36(uParam1->f_31, 104, &Local_167, 61, 0);
					}
					else
					{
						func_36(uParam1->f_31, 104, &Local_167, -1, 0);
					}
					if (func_169(uParam1->f_31))
					{
						func_36(uParam1->f_31, 105, &Local_173, 61, 0);
					}
					else
					{
						func_36(uParam1->f_31, 105, &Local_173, -1, 0);
					}
					if (func_169(uParam1->f_31))
					{
						sLocal_116 = "anim@mp_radio@high_life_apment";
						func_36(uParam1->f_31, 183, &Local_179, 61, 0);
					}
					else
					{
						func_36(uParam1->f_31, 183, &Local_179, -1, 0);
					}
					if (func_169(uParam1->f_31))
					{
						func_36(uParam1->f_31, 169, &Local_185, 61, 0);
					}
					else
					{
						func_36(uParam1->f_31, 169, &Local_185, -1, 0);
					}
					if (func_169(uParam1->f_31))
					{
						func_36(uParam1->f_31, 170, &Local_191, 61, 0);
					}
					else
					{
						func_36(uParam1->f_31, 170, &Local_191, -1, 0);
					}
					if (func_169(uParam1->f_31))
					{
						func_36(uParam1->f_31, 181, &Local_197, 61, 0);
					}
					else
					{
						func_36(uParam1->f_31, 181, &Local_197, -1, 0);
					}
				}
				break;
			
			case 20:
				func_36(uParam1->f_31, 102, &Local_131, func_41(uParam1->f_31), 1);
				func_36(uParam1->f_31, 103, &Local_137, func_41(uParam1->f_31), 1);
				func_36(uParam1->f_31, 182, &Local_161, func_41(uParam1->f_31), 1);
				break;
		}
	}
	else if (func_58(uParam1->f_31) && !uParam0->f_12)
	{
		iVar0 = uParam0->f_2;
		if (iVar0 == -1)
		{
			return 0;
		}
		func_42(iVar0, 102, &Local_131, 0);
		func_42(iVar0, 103, &Local_137, 0);
		func_42(iVar0, 182, &Local_161, 0);
		func_42(iVar0, 104, &Local_167, 0);
		func_42(iVar0, 105, &Local_173, 0);
		func_42(iVar0, 183, &Local_179, 0);
		func_42(iVar0, 169, &Local_185, 0);
		func_42(iVar0, 170, &Local_191, 0);
		func_42(iVar0, 181, &Local_197, 0);
		func_42(iVar0, 588, &Local_215, 0);
		func_42(iVar0, 587, &Local_209, 0);
		func_42(iVar0, 589, &Local_203, 0);
		func_42(iVar0, 591, &Local_233, 0);
		func_42(iVar0, 590, &Local_227, 0);
		func_42(iVar0, 592, &Local_221, 0);
	}
	else if (uParam0->f_12)
	{
		if (uParam0->f_2 == -1)
		{
			return 0;
		}
		func_42(uParam0->f_2, 555, &Local_131, 0);
		func_42(uParam0->f_2, 556, &Local_137, 0);
		func_42(uParam0->f_2, 554, &Local_161, 0);
		func_42(uParam0->f_2, 594, &Local_167, 0);
		func_42(uParam0->f_2, 593, &Local_173, 0);
		func_42(uParam0->f_2, 596, &Local_185, 0);
		func_42(uParam0->f_2, 595, &Local_191, 0);
	}
	else if (func_57(uParam1->f_31, -1))
	{
		func_36(uParam1->f_31, 102, &Local_131, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 103, &Local_137, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 182, &Local_161, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 104, &Local_167, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 105, &Local_173, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 183, &Local_179, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 169, &Local_185, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 170, &Local_191, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 181, &Local_197, func_41(uParam1->f_31), 0);
	}
	else if (func_56(uParam1->f_31))
	{
		func_36(uParam1->f_31, 501, &Local_131, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 502, &Local_137, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 500, &Local_161, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 102, &Local_155, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 103, &Local_149, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 182, &Local_143, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 104, &Local_167, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 105, &Local_173, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 183, &Local_179, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 169, &Local_185, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 170, &Local_191, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 181, &Local_197, func_41(uParam1->f_31), 0);
	}
	else if (func_55(uParam1->f_31))
	{
		func_36(uParam1->f_31, 102, &Local_131, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 103, &Local_137, func_41(uParam1->f_31), 0);
		func_36(uParam1->f_31, 182, &Local_161, func_41(uParam1->f_31), 0);
	}
	else if (func_54(unk_0xBE369BE1BC57A796()))
	{
		if (uParam0->f_15 == 111)
		{
			Local_131 = { 994.9379f, -3097.307f, -39.99083f };
			Local_137 = { 994.9346f, -3098.542f, -38.24083f };
			Local_161 = { 995.367f, -3097.48f, -39.115f };
			Local_161.f_3 = { 0f, 0f, -92.843f };
		}
		else if (uParam0->f_15 == 42)
		{
			Local_131 = { 1049.198f, -3100.077f, -39.99993f };
			Local_137 = { 1049.168f, -3099.13f, -38.24993f };
			Local_161 = { 1048.582f, -3100.444f, -39.115f };
			Local_161.f_3 = { 0f, 0f, 84.6f };
		}
		else if (uParam0->f_15 == 16)
		{
			Local_131 = { 1088.615f, -3100.932f, -39.99993f };
			Local_137 = { 1088.619f, -3099.957f, -38.24993f };
			Local_161 = { 1088.011f, -3100.987f, -39.125f };
			Local_161.f_3 = { 0f, 0f, 88.2f };
		}
	}
	else if (func_49(unk_0xBE369BE1BC57A796()))
	{
	}
	else if (func_46(unk_0xBE369BE1BC57A796()))
	{
		Local_131 = { 965.73f, -2991.764f, -40.59f };
		Local_137 = { 965.73f, -2990.864f, -38.79f };
		Local_161 = { 965.89f, -2991.614f, -39.67f };
		Local_161.f_3 = { 0f, 0f, 86.76f };
	}
	return 1;
}

void func_185(var uParam0)
{
	if (!unk_0x48B8265059381CD0(*uParam0, 1))
	{
		if (Global_2097152[func_186() /*10758*/].f_5466.f_2[0])
		{
			unk_0xEB79FECD9022AAF0(uParam0, 2);
		}
		else
		{
			unk_0x21E7933CCC7B3724(uParam0, 2);
		}
		uParam0->f_7 = Global_2097152[func_186() /*10758*/].f_5466.f_5[0];
		if (Global_2097152[func_186() /*10758*/].f_5466.f_10)
		{
			unk_0xEB79FECD9022AAF0(uParam0, 4);
		}
		else
		{
			unk_0x21E7933CCC7B3724(uParam0, 4);
		}
		uParam0->f_8 = Global_2097152[func_186() /*10758*/].f_5466.f_11;
		unk_0xEB79FECD9022AAF0(uParam0, 1);
	}
}

int func_186()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_187(var uParam0, var uParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	
	if ((((func_57(uParam1->f_31, -1) || func_56(uParam1->f_31)) || func_55(uParam1->f_31)) || func_54(unk_0xBE369BE1BC57A796())) || func_49(unk_0xBE369BE1BC57A796()))
	{
	}
	else if (func_46(unk_0xBE369BE1BC57A796()))
	{
		sVar0 = unk_0xE0A4834569DED46F(uParam0->f_1);
		if (unk_0x841F312D66362BF7(uParam0->f_22))
		{
			if (func_54(unk_0xBE369BE1BC57A796()))
			{
				sVar1 = func_35(uParam1->f_31, 1, 1, uParam0->f_53, 0, 0, 0);
			}
			else if (func_49(unk_0xBE369BE1BC57A796()))
			{
				sVar1 = func_35(uParam1->f_31, 1, 0, 0, 1, uParam0->f_54, 0);
			}
			else if (func_46(unk_0xBE369BE1BC57A796()))
			{
				sVar1 = func_35(uParam1->f_31, 1, 0, 0, 0, uParam0->f_54, 1);
			}
			else
			{
				sVar1 = func_35(uParam1->f_31, 1, 0, 0, 0, 0, 0);
			}
			unk_0xA4CF24EDE24B129D(sVar1, unk_0x03981D6F4893D7D0(uParam0->f_22));
			unk_0x396A8DEFD6DBA5FC(sVar1, iParam2);
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Custom_Bedroom", sVar0);
		}
		if (unk_0x841F312D66362BF7(uParam0->f_21))
		{
			unk_0xA4CF24EDE24B129D(func_35(uParam1->f_31, 2, 0, 0, 0, 0, 0), unk_0x03981D6F4893D7D0(uParam0->f_21));
			unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 2, 0, 0, 0, 0, 0), iParam2);
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Custom_Bedroom", sVar0);
		}
		if (unk_0x841F312D66362BF7(uParam0->f_23))
		{
			unk_0xA4CF24EDE24B129D(func_35(uParam1->f_31, 3, 0, 0, 0, 0, 0), unk_0x03981D6F4893D7D0(uParam0->f_23));
			unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 3, 0, 0, 0, 0, 0), iParam2);
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Custom_Bedroom", sVar0);
		}
	}
	else if (func_50(uParam1->f_31, 0, 0) && func_188(unk_0xBE369BE1BC57A796(), 0))
	{
		sVar2 = func_35(uParam1->f_31, 5, 0, 0, 0, 0, 0);
		if (unk_0x841F312D66362BF7(uParam0->f_21))
		{
			unk_0xA4CF24EDE24B129D(sVar2, unk_0x03981D6F4893D7D0(uParam0->f_21));
			unk_0x396A8DEFD6DBA5FC(sVar2, iParam2);
			unk_0x3BCA5CED6E64EFBE(sVar2, unk_0xE0A4834569DED46F(uParam0->f_1));
		}
	}
	else if (func_50(uParam1->f_31, 0, 0) && !func_188(unk_0xBE369BE1BC57A796(), 0))
	{
		sVar3 = func_35(uParam1->f_31, 4, 0, 0, 0, 0, 0);
		if (unk_0x841F312D66362BF7(uParam0->f_22))
		{
			unk_0xA4CF24EDE24B129D(sVar3, unk_0x03981D6F4893D7D0(uParam0->f_22));
			unk_0x396A8DEFD6DBA5FC(sVar3, iParam2);
			unk_0x3BCA5CED6E64EFBE(sVar3, unk_0xE0A4834569DED46F(uParam0->f_1));
		}
	}
	else if (func_58(uParam1->f_31) && !uParam0->f_49)
	{
		if (unk_0x841F312D66362BF7(uParam0->f_5))
		{
			unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Bar", unk_0x03981D6F4893D7D0(uParam0->f_5));
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bar", iParam2);
		}
		if (unk_0x841F312D66362BF7(uParam0->f_6))
		{
			unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Bedroom", unk_0x03981D6F4893D7D0(uParam0->f_6));
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bedroom", iParam2);
		}
		if (unk_0x841F312D66362BF7(uParam0->f_7))
		{
			unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Bedroom_02", unk_0x03981D6F4893D7D0(uParam0->f_7));
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bedroom_02", iParam2);
		}
		if (unk_0x841F312D66362BF7(uParam0->f_8))
		{
			unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Bedroom_03", unk_0x03981D6F4893D7D0(uParam0->f_8));
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bedroom_03", iParam2);
		}
	}
	else if (uParam0->f_49)
	{
		if (unk_0x841F312D66362BF7(uParam0->f_24))
		{
			unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Exterior_01", unk_0x03981D6F4893D7D0(uParam0->f_24));
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_01", iParam2);
		}
		if (unk_0x841F312D66362BF7(uParam0->f_25))
		{
			unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Exterior_02", unk_0x03981D6F4893D7D0(uParam0->f_25));
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_02", iParam2);
		}
		if (unk_0x841F312D66362BF7(uParam0->f_26))
		{
			unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Exterior_03", unk_0x03981D6F4893D7D0(uParam0->f_26));
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_03", iParam2);
		}
		if (unk_0x841F312D66362BF7(uParam0->f_27))
		{
			unk_0xA4CF24EDE24B129D("SE_DLC_APT_Yacht_Exterior_04", unk_0x03981D6F4893D7D0(uParam0->f_27));
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_04", iParam2);
		}
	}
}

bool func_188(int iParam0, bool bParam1)
{
	if (Global_1591069 != func_48())
	{
		if (!func_53(Global_1591069))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xBE369BE1BC57A796() != Global_1591069)
			{
				if (unk_0x48B8265059381CD0(Global_2421664[Global_1591069 /*358*/].f_198, 24) || func_52(Global_1591069))
				{
					return 1;
				}
			}
		}
	}
	if (iParam0 == func_48())
	{
		return 0;
	}
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 24);
}

void func_189(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	unk_0x396A8DEFD6DBA5FC(func_191(2), 0);
	unk_0x396A8DEFD6DBA5FC(func_191(6), 0);
	unk_0x396A8DEFD6DBA5FC(func_191(10), 0);
	unk_0x396A8DEFD6DBA5FC(func_190(2, 0, 0), 0);
	unk_0x396A8DEFD6DBA5FC(func_190(6, 0, 0), 0);
	if (func_58(uParam1->f_31) && !uParam0->f_12)
	{
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bar", 0);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bedroom", 0);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bedroom_02", 0);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bedroom_03", 0);
	}
	else if (func_58(uParam1->f_31) && uParam0->f_12)
	{
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_01", 0);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_02", 0);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_03", 0);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_04", 0);
	}
	else if (func_57(uParam1->f_31, 77))
	{
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Stilts_A_Bedroom", 0);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Stilts_A_Heist_Room", 0);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Stilts_A_Living_Room", 0);
	}
	else if (func_57(uParam1->f_31, 73))
	{
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Stilts_B_Bedroom", 0);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Stilts_B_Heist_Room", 0);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Stilts_B_Living_Room", 0);
	}
	else if (func_56(uParam1->f_31))
	{
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Custom_Bedroom", 0);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Custom_Heist_Room", 0);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Custom_Living_Room", 0);
	}
	else if (func_55(uParam1->f_31))
	{
		unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 1, 0, 0, 0, 0, 0), 0);
	}
	else if (func_54(unk_0xBE369BE1BC57A796()))
	{
		unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 1, 1, uParam0->f_15, 0, 0, 0), 0);
	}
	else if (func_50(uParam1->f_31, 0, 0))
	{
		unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 4, 0, 0, 0, 0, 0), 0);
		unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 5, 0, 0, 0, 0, 0), 0);
	}
	else if (func_49(unk_0xBE369BE1BC57A796()))
	{
		unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 1, 0, 0, 1, uParam0->f_16, 0), 0);
	}
	else if (func_46(unk_0xBE369BE1BC57A796()))
	{
		unk_0x396A8DEFD6DBA5FC(func_35(uParam1->f_31, 1, 0, 0, 0, uParam0->f_16, 1), 0);
	}
	iVar0 = 0;
	while (iVar0 < 116)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			sVar2 = func_190(10, iVar0, iVar1);
			if (!unk_0x9C88EB7B70229335(sVar2))
			{
				unk_0x396A8DEFD6DBA5FC(sVar2, 0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

char* func_190(int iParam0, int iParam1, int iParam2)
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

char* func_191(int iParam0)
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

void func_192(var uParam0)
{
	if (uParam0->f_50 > 0)
	{
		if (uParam0->f_50 == 1)
		{
			if (!Global_2097152[func_186() /*10758*/].f_5466.f_2[0])
			{
				Global_2097152[func_186() /*10758*/].f_5466.f_2[0] = 1;
			}
		}
		if (uParam0->f_50 == 2)
		{
			if (Global_2097152[func_186() /*10758*/].f_5466.f_2[0])
			{
				Global_2097152[func_186() /*10758*/].f_5466.f_2[0] = 0;
			}
		}
		if (uParam0->f_1 != Global_2097152[func_186() /*10758*/].f_5466.f_5[0])
		{
			Global_2097152[func_186() /*10758*/].f_5466.f_5[0] = uParam0->f_1;
		}
	}
	if (uParam0->f_51 > 0)
	{
		if (uParam0->f_51 == 1)
		{
			if (!Global_2097152[func_186() /*10758*/].f_5466.f_10)
			{
				Global_2097152[func_186() /*10758*/].f_5466.f_10 = 1;
			}
		}
		if (uParam0->f_51 == 2)
		{
			if (Global_2097152[func_186() /*10758*/].f_5466.f_10)
			{
				Global_2097152[func_186() /*10758*/].f_5466.f_10 = 0;
			}
		}
		if (uParam0->f_2 != Global_2097152[func_186() /*10758*/].f_5466.f_11)
		{
			Global_2097152[func_186() /*10758*/].f_5466.f_11 = uParam0->f_2;
		}
	}
}

void func_193(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	
	bVar0 = iParam4;
	switch (func_158(uParam0, uParam1))
	{
		case 1:
			if (uParam2->f_3 != func_156(uParam0, uParam1))
			{
				uParam2->f_3 = func_156(uParam0, uParam1);
				if (uParam1->f_13 == 2)
				{
					if ((func_54(unk_0xBE369BE1BC57A796()) || func_49(unk_0xBE369BE1BC57A796())) || func_46(unk_0xBE369BE1BC57A796()))
					{
						unk_0x4988C48537D1AE4F(-1, "Retune_Low", "MP_RADIO_SFX", 1);
					}
					else if (!func_58(uParam3->f_31) && !func_55(uParam3->f_31))
					{
						unk_0x4988C48537D1AE4F(-1, func_201(uParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					else
					{
						unk_0x4988C48537D1AE4F(-1, "Retune_High", "MP_RADIO_SFX", 1);
					}
				}
				bVar0 = true;
			}
			if (unk_0x48B8265059381CD0(*uParam2, 6))
			{
				unk_0x21E7933CCC7B3724(uParam2, 6);
			}
			if (!unk_0x48B8265059381CD0(*uParam2, 4))
			{
				if (uParam1->f_13 == 2)
				{
					if ((func_54(unk_0xBE369BE1BC57A796()) || func_49(unk_0xBE369BE1BC57A796())) || func_46(unk_0xBE369BE1BC57A796()))
					{
						unk_0x4988C48537D1AE4F(-1, "Retune_Low", "MP_RADIO_SFX", 1);
					}
					else if (!func_58(uParam3->f_31) && !func_55(uParam3->f_31))
					{
						unk_0x4988C48537D1AE4F(-1, func_201(uParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					else
					{
						unk_0x4988C48537D1AE4F(-1, "Retune_High", "MP_RADIO_SFX", 1);
					}
				}
				bVar0 = true;
				unk_0xEB79FECD9022AAF0(uParam2, 4);
			}
			if (bVar0)
			{
				func_197(uParam1, uParam2, uParam3, 1, uParam2->f_3, 0);
			}
			break;
		
		case 2:
			if (unk_0x48B8265059381CD0(*uParam2, 4))
			{
				unk_0x21E7933CCC7B3724(uParam2, 4);
			}
			if (!unk_0x48B8265059381CD0(*uParam2, 6))
			{
				if (uParam1->f_13 == 2)
				{
					if ((func_54(unk_0xBE369BE1BC57A796()) || func_49(unk_0xBE369BE1BC57A796())) || func_46(unk_0xBE369BE1BC57A796()))
					{
						unk_0x4988C48537D1AE4F(-1, "Off_Low", "MP_RADIO_SFX", 1);
					}
					else if (!func_58(uParam3->f_31) && !func_55(uParam3->f_31))
					{
						unk_0x4988C48537D1AE4F(-1, func_196(uParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					else
					{
						unk_0x4988C48537D1AE4F(-1, "Off_High", "MP_RADIO_SFX", 1);
					}
				}
				bVar0 = true;
				unk_0xEB79FECD9022AAF0(uParam2, 6);
			}
			if (bVar0)
			{
				func_197(uParam1, uParam2, uParam3, 0, uParam2->f_3, 0);
			}
			break;
	}
	if (!unk_0x48B8265059381CD0(*uParam1, 0))
	{
		switch (func_157(uParam0))
		{
			case 3:
				if (uParam2->f_3 != func_156(uParam0, uParam1))
				{
					uParam2->f_3 = func_156(uParam0, uParam1);
					if (uParam1->f_14 == 3)
					{
						unk_0x4988C48537D1AE4F(-1, func_201(uParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					bVar0 = true;
				}
				if (unk_0x48B8265059381CD0(*uParam2, 12))
				{
					unk_0x21E7933CCC7B3724(uParam2, 12);
				}
				if (!unk_0x48B8265059381CD0(*uParam2, 11))
				{
					if (uParam1->f_14 == 3)
					{
						unk_0x4988C48537D1AE4F(-1, func_195(uParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					bVar0 = true;
					unk_0xEB79FECD9022AAF0(uParam2, 11);
					if ((func_22() && !func_194()) && !unk_0xF7271A9481CAC8E3())
					{
						unk_0x4A5D4AD0FE6ACF73("DLC_MPHEIST_LOBBY_FADE_IN_RADIO_SCENE");
					}
				}
				if (bVar0)
				{
					func_197(uParam1, uParam2, uParam3, 1, uParam2->f_3, 1);
				}
				break;
			
			case 4:
				if (unk_0x48B8265059381CD0(*uParam2, 11))
				{
					unk_0x21E7933CCC7B3724(uParam2, 11);
				}
				if (!unk_0x48B8265059381CD0(*uParam2, 12))
				{
					if (uParam1->f_14 == 3)
					{
						unk_0x4988C48537D1AE4F(-1, func_196(uParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					bVar0 = true;
					unk_0xEB79FECD9022AAF0(uParam2, 12);
				}
				if (bVar0)
				{
					func_197(uParam1, uParam2, uParam3, 0, uParam2->f_3, 1);
				}
				break;
			}
	}
	if (func_158(uParam0, uParam1) == 1 || func_157(uParam0) == 3)
	{
		if (uParam2->f_3 != func_156(uParam0, uParam1))
		{
			uParam2->f_3 = func_156(uParam0, uParam1);
		}
	}
	if (unk_0x48B8265059381CD0(*uParam2, 8))
	{
		if (!unk_0x48B8265059381CD0(*uParam2, 9))
		{
			unk_0xEB79FECD9022AAF0(uParam2, 9);
			func_197(uParam1, uParam2, uParam3, 1, uParam2->f_3, 0);
		}
	}
	else if (unk_0x48B8265059381CD0(*uParam2, 9))
	{
		unk_0x21E7933CCC7B3724(uParam2, 9);
	}
	if (func_138(uParam1, uParam2))
	{
		if (!unk_0x48B8265059381CD0(*uParam2, 10))
		{
			unk_0x4A5D4AD0FE6ACF73("MP_APT_STRIPPER_SCENE");
			unk_0xEB79FECD9022AAF0(uParam2, 10);
		}
	}
	else if (unk_0x48B8265059381CD0(*uParam2, 10))
	{
		unk_0xB8CAC5F3774894A1("MP_APT_STRIPPER_SCENE");
		unk_0x21E7933CCC7B3724(uParam2, 10);
	}
}

bool func_194()
{
	return Global_2443134.f_571;
}

char* func_195(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			if (unk_0x48B8265059381CD0(*uParam0, 0))
			{
				return "On_Low";
			}
			else
			{
				return "On_Low";
			}
			break;
		
		case 6:
			if (unk_0x48B8265059381CD0(*uParam0, 0))
			{
				return "On_High";
			}
			else
			{
				return "On_Low";
			}
			break;
		
		case 10:
			if (unk_0x48B8265059381CD0(*uParam0, 0))
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

char* func_196(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			if (unk_0x48B8265059381CD0(*uParam0, 0))
			{
				return "Off_Low";
			}
			else
			{
				return "Off_Low";
			}
			break;
		
		case 6:
			if (unk_0x48B8265059381CD0(*uParam0, 0))
			{
				return "Off_High";
			}
			else
			{
				return "Off_Low";
			}
			break;
		
		case 10:
			if (unk_0x48B8265059381CD0(*uParam0, 0))
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

void func_197(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4, bool bParam5)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	unk_0xEB79FECD9022AAF0(uParam1, 0);
	if (func_138(uParam0, uParam1))
	{
		sVar1 = "HIDDEN_RADIO_STRIP_CLUB";
		iVar2 = 1;
	}
	else
	{
		sVar1 = unk_0xE0A4834569DED46F(uParam4);
		iVar2 = bParam3;
	}
	if (bParam5)
	{
	}
	func_200(uParam2);
	if (func_58(uParam2->f_31) && !uParam0->f_12)
	{
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bar", iVar2);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Yacht_Bar", sVar1);
		}
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bedroom", iVar2);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bedroom_02", iVar2);
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Bedroom_03", iVar2);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Yacht_Bedroom", sVar1);
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Yacht_Bedroom_02", sVar1);
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Yacht_Bedroom_03", sVar1);
		}
	}
	else if (uParam0->f_12)
	{
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_01", iVar2);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Yacht_Exterior_01", sVar1);
		}
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_02", iVar2);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Yacht_Exterior_02", sVar1);
		}
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_03", iVar2);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Yacht_Exterior_03", sVar1);
		}
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Yacht_Exterior_04", iVar2);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Yacht_Exterior_04", sVar1);
		}
	}
	else if (func_57(uParam2->f_31, -1))
	{
		if (func_57(uParam2->f_31, 77))
		{
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Stilts_A_Bedroom", iVar2);
			if (bParam3)
			{
				unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Stilts_A_Bedroom", sVar1);
			}
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Stilts_A_Heist_Room", iVar2);
			if (bParam3)
			{
				unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Stilts_A_Heist_Room", sVar1);
			}
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Stilts_A_Living_Room", iVar2);
			if (bParam3)
			{
				unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Stilts_A_Living_Room", sVar1);
			}
		}
		else if (func_57(uParam2->f_31, 73))
		{
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Stilts_B_Bedroom", iVar2);
			if (bParam3)
			{
				unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Stilts_B_Bedroom", sVar1);
			}
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Stilts_B_Heist_Room", iVar2);
			if (bParam3)
			{
				unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Stilts_B_Heist_Room", sVar1);
			}
			unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Stilts_B_Living_Room", iVar2);
			if (bParam3)
			{
				unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Stilts_B_Living_Room", sVar1);
			}
		}
	}
	else if (func_56(uParam2->f_31))
	{
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Custom_Bedroom", iVar2);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Custom_Bedroom", sVar1);
		}
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Custom_Heist_Room", iVar2);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Custom_Heist_Room", sVar1);
		}
		unk_0x396A8DEFD6DBA5FC("SE_DLC_APT_Custom_Living_Room", iVar2);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE("SE_DLC_APT_Custom_Living_Room", sVar1);
		}
	}
	else if (func_55(uParam2->f_31))
	{
		unk_0x396A8DEFD6DBA5FC(func_35(uParam2->f_31, 1, 0, 0, 0, 0, 0), iVar2);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE(func_35(uParam2->f_31, 1, 0, 0, 0, 0, 0), sVar1);
		}
	}
	else if (func_54(unk_0xBE369BE1BC57A796()))
	{
		unk_0x396A8DEFD6DBA5FC(func_35(uParam2->f_31, 1, 1, uParam0->f_15, 0, 0, 0), iVar2);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE(func_35(uParam2->f_31, 1, 1, uParam0->f_15, 0, 0, 0), sVar1);
		}
	}
	else if (func_50(uParam2->f_31, 0, 0) && !func_188(unk_0xBE369BE1BC57A796(), 0))
	{
		unk_0x396A8DEFD6DBA5FC(func_35(uParam2->f_31, 4, 0, 0, 0, 0, 0), iVar2);
		unk_0x396A8DEFD6DBA5FC(func_35(uParam2->f_31, 5, 0, 0, 0, 0, 0), 0);
		func_199(88, 1, 0, 0, 0, 0);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE(func_35(uParam2->f_31, 4, 0, 0, 0, 0, 0), sVar1);
		}
	}
	else if (func_50(uParam2->f_31, 0, 0) && func_188(unk_0xBE369BE1BC57A796(), 0))
	{
		unk_0x396A8DEFD6DBA5FC(func_35(uParam2->f_31, 5, 0, 0, 0, 0, 0), iVar2);
		unk_0x396A8DEFD6DBA5FC(func_35(uParam2->f_31, 4, 0, 0, 0, 0, 0), 0);
		func_199(88, 1, 0, 0, 0, 0);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE(func_35(uParam2->f_31, 5, 0, 0, 0, 0, 0), sVar1);
		}
	}
	else if (func_49(unk_0xBE369BE1BC57A796()))
	{
		unk_0x396A8DEFD6DBA5FC(func_35(uParam2->f_31, 1, 0, 0, 1, uParam0->f_16, 0), iVar2);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE(func_35(uParam2->f_31, 1, 0, 0, 1, uParam0->f_16, 0), sVar1);
		}
	}
	else if (func_46(unk_0xBE369BE1BC57A796()))
	{
		unk_0x396A8DEFD6DBA5FC(func_35(uParam2->f_31, 1, 0, 0, 0, 0, 1), iVar2);
		if (bParam3)
		{
			unk_0x3BCA5CED6E64EFBE(func_35(uParam2->f_31, 1, 0, 0, 0, 0, 1), sVar1);
		}
	}
	if ((((((((!func_58(uParam2->f_31) && !func_57(uParam2->f_31, -1)) && !func_56(uParam2->f_31)) && !uParam0->f_12) && !func_55(uParam2->f_31)) && !func_54(unk_0xBE369BE1BC57A796())) && !func_49(unk_0xBE369BE1BC57A796())) && !func_46(unk_0xBE369BE1BC57A796())) || unk_0x48B8265059381CD0(*uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < func_200(uParam2))
		{
			if (unk_0x48B8265059381CD0(*uParam0, 0))
			{
				if (!unk_0x9C88EB7B70229335(func_198(uParam0, uParam2, iVar0)))
				{
					unk_0x396A8DEFD6DBA5FC(func_198(uParam0, uParam2, iVar0), iVar2);
					if (bParam3)
					{
						unk_0x3BCA5CED6E64EFBE(func_198(uParam0, uParam2, iVar0), sVar1);
					}
				}
			}
			else if (bParam5 == 1 && iVar0 == 2)
			{
				if (!unk_0x9C88EB7B70229335(func_198(uParam0, uParam2, iVar0)))
				{
					unk_0x396A8DEFD6DBA5FC(func_198(uParam0, uParam2, iVar0), iVar2);
					if (bParam3)
					{
						unk_0x3BCA5CED6E64EFBE(func_198(uParam0, uParam2, iVar0), sVar1);
					}
				}
			}
			else if (bParam5 == 0 && iVar0 != 2)
			{
				if (!unk_0x9C88EB7B70229335(func_198(uParam0, uParam2, iVar0)))
				{
					unk_0x396A8DEFD6DBA5FC(func_198(uParam0, uParam2, iVar0), iVar2);
					if (bParam3)
					{
						unk_0x3BCA5CED6E64EFBE(func_198(uParam0, uParam2, iVar0), sVar1);
					}
				}
			}
			iVar0++;
		}
	}
}

char* func_198(var uParam0, var uParam1, int iParam2)
{
	if (unk_0x48B8265059381CD0(*uParam0, 0))
	{
		return func_191(uParam1->f_33);
	}
	else
	{
		return func_190(uParam1->f_33, uParam1->f_31, iParam2);
	}
	return "";
}

void func_199(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	char* sVar0;
	
	sVar0 = "";
	if (func_41(iParam0) == 88)
	{
		unk_0x396A8DEFD6DBA5FC("SE_ex_int_office_01a_Radio_01", 0);
		unk_0x396A8DEFD6DBA5FC("SE_ex_int_office_01b_Radio_01", 0);
		unk_0x396A8DEFD6DBA5FC("SE_ex_int_office_01c_Radio_01", 0);
		unk_0x396A8DEFD6DBA5FC("SE_ex_int_office_02a_Radio_01", 0);
		unk_0x396A8DEFD6DBA5FC("SE_ex_int_office_02b_Radio_01", 0);
		unk_0x396A8DEFD6DBA5FC("SE_ex_int_office_02c_Radio_01", 0);
		unk_0x396A8DEFD6DBA5FC("SE_ex_int_office_03a_Radio_01", 0);
		unk_0x396A8DEFD6DBA5FC("SE_ex_int_office_03b_Radio_01", 0);
		unk_0x396A8DEFD6DBA5FC("SE_ex_int_office_03c_Radio_01", 0);
		return;
	}
	sVar0 = func_35(iParam0, iParam1, bParam2, iParam3, bParam4, iParam5, 0);
	if (!unk_0x9C88EB7B70229335(sVar0))
	{
		unk_0x396A8DEFD6DBA5FC(sVar0, 0);
	}
}

int func_200(var uParam0)
{
	if (func_169(uParam0->f_31))
	{
		return 3;
	}
	else if (uParam0->f_33 == 10)
	{
		return 3;
	}
	return 1;
}

char* func_201(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			if (unk_0x48B8265059381CD0(*uParam0, 0))
			{
				return "Retune_Low";
			}
			else
			{
				return "Retune_Low";
			}
			break;
		
		case 6:
			if (unk_0x48B8265059381CD0(*uParam0, 0))
			{
				return "Retune_High";
			}
			else
			{
				return "Retune_Low";
			}
			break;
		
		case 10:
			if (unk_0x48B8265059381CD0(*uParam0, 0))
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

void func_202()
{
	if (unk_0x48B8265059381CD0(Local_1863.f_0, 0) || unk_0x48B8265059381CD0(Global_1764677, 1))
	{
		return;
	}
	if (func_206(unk_0xBE369BE1BC57A796(), 0))
	{
		if (!func_205(Local_1863.f_2))
		{
			unk_0xEB79FECD9022AAF0(&Local_1863, 0);
			return;
		}
	}
	else
	{
		unk_0xEB79FECD9022AAF0(&Local_1863, 0);
		return;
	}
	if (!unk_0x48B8265059381CD0(Global_1764677, 1))
	{
		if (((((!unk_0xEE1438344034E8AA() && !unk_0x25BD4C26D84038CD()) && !unk_0x46EEE08565CE19CA()) && !unk_0x5C0856D86B18EE57()) && !unk_0x9E123D5FF2973C60()) && !func_123())
		{
			if (func_130(&(Local_1863.f_682), 1200, 0))
			{
				if (func_203(func_204()))
				{
					func_106("WHOUSE_GOONHLP2C", -1);
				}
				else
				{
					func_106("WHOUSE_GOON_HLP2", -1);
				}
				unk_0xEB79FECD9022AAF0(&Global_1764677, 1);
			}
		}
		else
		{
			func_70(&(Local_1863.f_682));
		}
	}
}

bool func_203(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 26);
}

int func_204()
{
	return Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11;
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (func_105(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_80[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_206(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_207(iParam0))
		{
			return 0;
		}
	}
	return Global_1619421[iParam0 /*390*/].f_11 != func_48();
}

int func_207(int iParam0)
{
	if (iParam0 != func_48())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_48())
		{
			return Global_1619421[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_208()
{
	func_209(&(Local_1863.f_615));
}

void func_209(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	if (func_94(0, uParam0))
	{
		if (uParam0->f_24 != 0)
		{
			unk_0xE1324F59713746FA(uParam0->f_24);
		}
		if (uParam0->f_32 != 0)
		{
			unk_0xE1324F59713746FA(uParam0->f_32);
		}
		func_73(1, uParam0);
	}
	else if (func_94(1, uParam0))
	{
		if (uParam0->f_24 == 0 && uParam0->f_32 == 0)
		{
			func_73(3, uParam0);
			return;
		}
		if (uParam0->f_24 != 0 && !unk_0x9F746898F7881612(uParam0->f_24))
		{
			return;
		}
		if (uParam0->f_32 != 0 && !unk_0x9F746898F7881612(uParam0->f_32))
		{
			return;
		}
		bVar0 = false;
		bVar1 = false;
		if (uParam0->f_24 != 0)
		{
			uParam0->f_31 = unk_0x89241A4EA7EE46D2(uParam0->f_24, uParam0->f_25, 0, 0, 1);
			unk_0x04A5FAE5B1EB8E28(uParam0->f_31, uParam0->f_28, 2, 1);
			unk_0x98F0FA127445E343(uParam0->f_31, true);
			bVar0 = true;
		}
		if (uParam0->f_32 != 0)
		{
			uParam0->f_39 = unk_0x89241A4EA7EE46D2(uParam0->f_32, uParam0->f_33, 0, 0, 1);
			unk_0x04A5FAE5B1EB8E28(uParam0->f_39, uParam0->f_36, 2, 1);
			unk_0x98F0FA127445E343(uParam0->f_39, true);
			bVar1 = true;
		}
		if (bVar0)
		{
			unk_0x924CDE68BA2ED3BA(uParam0->f_24);
		}
		if (bVar1)
		{
			unk_0x924CDE68BA2ED3BA(uParam0->f_32);
		}
		func_73(3, uParam0);
	}
	else if (func_94(3, uParam0))
	{
	}
	else if (func_94(2, uParam0))
	{
		if (unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			func_73(7, uParam0);
			return;
		}
		if ((unk_0xF4F8AE8DD0F08C1E(uParam0->f_3) && unk_0x23E9113C762466ED(uParam0->f_2)) && !unk_0xA929B2923D14E2F8(uParam0->f_2, 0))
		{
			if (unk_0x291EF658E660C270(uParam0->f_2))
			{
				unk_0x1D6A85891C36EC72(0, 1);
				func_110(1, 1);
				func_74(1, 1, 1, 0);
				func_210(uParam0);
				unk_0x98F0FA127445E343(uParam0->f_2, false);
				uParam0->f_13 = unk_0x356EABB012B22D07(uParam0->f_14, uParam0->f_17, 2);
				unk_0xA17D768ED938600C(uParam0->f_2, uParam0->f_13, uParam0->f_3, uParam0->f_4, 1000f, -1000f, 4, 0, 1148846080, 0);
				unk_0xCE49D4A5BC766F78(uParam0->f_13, uParam0->f_20);
				func_73(4, uParam0);
			}
		}
	}
	else if (func_94(4, uParam0))
	{
		if (unk_0x00743AFDA92F3B04(uParam0->f_13))
		{
			uParam0->f_22 = unk_0x96F65998C0685177(uParam0->f_13);
			if (!unk_0x9C88EB7B70229335(uParam0->f_56))
			{
				iVar2 = 0;
				while (iVar2 < 2)
				{
					if ((!unk_0x48B8265059381CD0(uParam0->f_48, iVar2) && !unk_0x9C88EB7B70229335(uParam0->f_50[iVar2])) && uParam0->f_22 >= uParam0->f_53[iVar2])
					{
						if (!unk_0xA929B2923D14E2F8(uParam0->f_2, 0))
						{
							Var3 = { unk_0x57240623C1BC6E88(uParam0->f_2, 1) };
						}
						unk_0x4876B73C5A534970(-1, uParam0->f_50[iVar2], Var3, uParam0->f_56, 0, 0, 0);
						unk_0xEB79FECD9022AAF0(&(uParam0->f_48), iVar2);
					}
					iVar2++;
				}
			}
			if (uParam0->f_22 > uParam0->f_21)
			{
				func_73(5, uParam0);
			}
		}
	}
	else if (func_94(5, uParam0))
	{
	}
	else if (func_94(7, uParam0))
	{
	}
}

void func_210(var uParam0)
{
	if (unk_0x0F1BF24ED3B7ED40(uParam0->f_5))
	{
		unk_0x2BC4A4AFFC2D937D(uParam0->f_5, 0);
	}
	uParam0->f_5 = unk_0x9F2F24963A4C5E27(26379945, 1);
	unk_0x10AEEB80A49DD974(uParam0->f_5, uParam0->f_6, uParam0->f_9, uParam0->f_12, 0, 1, 1, 2);
	unk_0x4E0049B7A73D4050(uParam0->f_5, 1000f);
	unk_0x2F0C4DC7A4D75C2E(uParam0->f_5, "HAND_SHAKE", uParam0->f_23);
	unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
}

void func_211(var uParam0)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	
	fVar0 = 0.45f;
	if (*uParam0 == uParam0->f_1)
	{
		uParam0->f_2 = 0;
	}
	if (unk_0x164D7B6E326ECB2A(0, 51))
	{
		uParam0->f_2 = 1;
		uParam0->f_1 = *uParam0;
	}
	iVar1 = *uParam0;
	if (!func_214(Local_2566[iVar1 /*3*/]))
	{
		Var2 = { Local_2566[iVar1 /*3*/] };
		Var2.f_2 = (Var2.f_2 + 0.5f);
		Var2.f_0 = (Var2.f_0 + 0.5f);
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0x76D0AAE390EBD853(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Var2, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (unk_0x3F1EB7756B4EA5B4(Var2, 2f, 1))
				{
					if (!unk_0x736E6FA4DC8080AB(Var2, 2f, 1))
					{
						if (unk_0x48B8265059381CD0(uParam0->f_3[iVar1], 1))
						{
							unk_0x21E7933CCC7B3724(&(uParam0->f_3[iVar1]), 1);
							if (func_213("MPTV_STAND"))
							{
								unk_0x2E2945F5602A744F(1);
							}
						}
						if (!unk_0x48B8265059381CD0(uParam0->f_3[iVar1], 0))
						{
							unk_0xEB79FECD9022AAF0(&(uParam0->f_3[iVar1]), 0);
							func_106("MPTV_WALK", -1);
						}
						if (uParam0->f_2)
						{
							unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 414, 1);
							unk_0xC2AF726494294D5F(unk_0x17B5CC8A8615737D(), Var2, 2f, 5000);
							uParam0->f_2 = 0;
							uParam0->f_1 = -1;
							if (func_213("MPTV_WALK"))
							{
								unk_0x2E2945F5602A744F(1);
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x48B8265059381CD0(uParam0->f_3[iVar1], 0))
				{
					unk_0x21E7933CCC7B3724(&(uParam0->f_3[iVar1]), 0);
					if (func_213("MPTV_WALK"))
					{
						unk_0x2E2945F5602A744F(1);
					}
				}
				if (unk_0x48B8265059381CD0(uParam0->f_3[iVar1], 1))
				{
					unk_0x21E7933CCC7B3724(&(uParam0->f_3[iVar1]), 1);
					if (func_213("MPTV_STAND"))
					{
						unk_0x2E2945F5602A744F(1);
					}
				}
			}
		}
		else
		{
			if (unk_0x48B8265059381CD0(uParam0->f_3[iVar1], 0))
			{
				unk_0x21E7933CCC7B3724(&(uParam0->f_3[iVar1]), 0);
				if (func_213("MPTV_WALK"))
				{
					unk_0x2E2945F5602A744F(1);
				}
			}
			func_212();
			if (unk_0x736E6FA4DC8080AB(Var2, 2f, 1))
			{
				if (!unk_0x48B8265059381CD0(uParam0->f_3[iVar1], 1))
				{
					unk_0xEB79FECD9022AAF0(&(uParam0->f_3[iVar1]), 1);
					func_106("MPTV_STAND", -1);
				}
				if (uParam0->f_2)
				{
					unk_0x2CCE9DBC11976AB5(unk_0x17B5CC8A8615737D(), 1);
					unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
					unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 414, 0);
					uParam0->f_2 = 0;
					uParam0->f_1 = -1;
					if (func_213("MPTV_STAND"))
					{
						unk_0x2E2945F5602A744F(1);
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

void func_212()
{
	unk_0xEB79FECD9022AAF0(&Global_2314, 4);
}

bool func_213(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

int func_214(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_215(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			func_340(uParam0);
			break;
		
		case 1:
			unk_0xA0E7D0E8FE126EE8(uParam0->f_39);
			if ((((!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && func_339(uParam0->f_1, unk_0x17B5CC8A8615737D(), 1) < 2f) && func_336(uParam0)) && func_329()) && !Local_2547.f_0)
			{
				if (uParam0->f_8 == -1)
				{
					if (!unk_0x7AED88F5CDBFFB3C())
					{
						func_171(&(uParam0->f_8), 4, "WARE_VEH_UPG", 0, 0, 0, 0);
					}
				}
				if (!func_174())
				{
					if (func_170(uParam0->f_8, 1))
					{
						func_327(0, -1, 0);
						func_325(uParam0);
						func_324(func_104(Local_1863.f_2), &(uParam0->f_2), 1);
						unk_0x9C16B2DABAEC929A(unk_0x17B5CC8A8615737D(), unk_0xE31EC4AE3D955F3A(uParam0->f_39, "enter", uParam0->f_27, uParam0->f_27.f_3, 0, 2), 1f, 5000, uParam0->f_27.f_3.f_2, 0.05f);
						func_62(unk_0xBE369BE1BC57A796(), 0, 256);
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
			if (unk_0x1F8F07D86DA1A701(unk_0x17B5CC8A8615737D(), 2106541073) != 1 || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), uParam0->f_33, uParam0->f_33.f_3, 1f, 0, 1, 0))
			{
				if (func_323(uParam0))
				{
					func_322(uParam0);
				}
			}
			break;
		
		case 3:
			if (!Local_2547.f_0)
			{
				func_222(uParam0);
			}
			else
			{
				func_219(1, -1);
				*uParam0 = 5;
			}
			break;
		
		case 4:
			if (func_218(uParam0))
			{
				func_217(uParam0);
			}
			break;
		
		case 5:
			func_216(uParam0, 0);
			break;
	}
}

void func_216(var uParam0, bool bParam1)
{
	func_6(&(uParam0->f_8));
	uParam0->f_8 = -1;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_40 = 3;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	if (unk_0x48B8265059381CD0(uParam0->f_26, 0))
	{
		unk_0x21E7933CCC7B3724(&(uParam0->f_26), 0);
	}
	if (unk_0x48B8265059381CD0(uParam0->f_26, 1))
	{
		unk_0x21E7933CCC7B3724(&(uParam0->f_26), 1);
	}
	if (unk_0x48B8265059381CD0(uParam0->f_26, 2))
	{
		unk_0x21E7933CCC7B3724(&(uParam0->f_26), 2);
	}
	if (bParam1)
	{
		if (unk_0x23E9113C762466ED(uParam0->f_1))
		{
			unk_0x1AAFEA627BB9C402(&(uParam0->f_1));
		}
		unk_0xC07032666ADF86BE("ShopUI_Title_Exec_VechUpgrade");
		unk_0xC07032666ADF86BE("MPShopSale");
	}
	*uParam0 = 0;
}

void func_217(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x91FFFB0475D539A1(uParam0->f_25);
	if (iVar0 >= 0)
	{
		if (unk_0x00743AFDA92F3B04(iVar0))
		{
			if (unk_0x96F65998C0685177(iVar0) >= 0.99f)
			{
				func_62(unk_0xBE369BE1BC57A796(), 1, 0);
				unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
				*uParam0 = 5;
			}
		}
	}
}

int func_218(var uParam0)
{
	if (!unk_0x48B8265059381CD0(uParam0->f_26, 2))
	{
		uParam0->f_25 = unk_0xEFC1A93F65285B77(uParam0->f_27, uParam0->f_27.f_3, 2, 1, 0, 1065353216, 0, 1065353216);
		unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), uParam0->f_25, uParam0->f_39, "exit", 1.5f, -1.5f, 13, 16, 1.5f, 0);
		unk_0xD299F9D47AAE6209(uParam0->f_25);
		unk_0xEB79FECD9022AAF0(&(uParam0->f_26), 2);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_219(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_221(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7899)
	{
		unk_0x81118A143DD8B493(15);
		Global_17290.f_7899 = 0;
	}
	unk_0xDE0328664F42BCD5(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x6DB5F7460B043A80(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0xC07032666ADF86BE("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0xC07032666ADF86BE("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_220(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_220(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xFF84A94166FBB351(*uParam0))
		{
			unk_0x33CBABDFE7B17924(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_221(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x63C468D583002D23() && unk_0x9A0AB9C5586EA71E())
		{
			iParam2 = unk_0x5165D99E0F66DAD1();
		}
	}
	StringCopy(&cVar0, unk_0x6AF6B39BFDB53CB5(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x765F5B806B517045(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17290.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17290.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_222(var uParam0)
{
	func_321(uParam0);
	func_320(uParam0);
	func_310(&(uParam0->f_9), &(uParam0->f_23));
	if (func_327(0, -1, 0))
	{
		if (uParam0->f_21)
		{
			func_288(uParam0);
			uParam0->f_21 = 0;
		}
		else
		{
			func_287(uParam0->f_23, 1, 1);
		}
		func_249(uParam0);
		func_223(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (*uParam0 != 3)
		{
			func_219(1, -1);
		}
	}
}

void func_223(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar80[64];
	float fVar96;
	int iVar97;
	float fVar98;
	float fVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	
	if (!func_221(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_246(0, bParam6))
	{
		return;
	}
	unk_0x4933838CDEC9827A(76, 84);
	unk_0x28611CDA71EBBA91(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17290)
	{
		if (func_244(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar56 = fVar36;
			fVar57 = fVar35;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_17290 = 0;
		}
	}
	if (unk_0x765F5B806B517045(&(Global_17290.f_1)) == unk_0x765F5B806B517045("HIDE"))
	{
		fVar58 = Global_17288;
	}
	else
	{
		fVar58 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17289;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0xC00B89C485A069D9(&iVar59, &iVar60);
		fVar62 = unk_0x73E1DAE2E39E5E52(0);
		if (func_243())
		{
			iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) * fVar62));
		}
		fVar63 = (unk_0xBBDA792448DB5A89(iVar59) / unk_0xBBDA792448DB5A89(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_243())
		{
			fVar61 = 1f;
		}
		iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar59) / fVar61));
		iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) / fVar61));
	}
	else
	{
		unk_0xFCD5E0181ABDD64D(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17290.f_5598)
		{
			if (unk_0x765F5B806B517045(&(Global_17290.f_1)) == unk_0x765F5B806B517045("HIDE"))
			{
				fVar49 = Global_17288;
			}
			else
			{
				if (Global_17290)
				{
					StringCopy(&cVar64, func_242(29), 64);
					StringCopy(&cVar80, func_239(29, 1), 64);
					if (unk_0x765F5B806B517045(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_238(Global_17287, Global_17288, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0x67972FF1523F6D32(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x67972FF1523F6D32(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17290.f_7869)
				{
					iVar1 = Global_17290.f_7865;
					iVar2 = Global_17290.f_7866;
					iVar3 = Global_17290.f_7867;
					iVar4 = Global_17290.f_7868;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_238(Global_17287, (Global_17288 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
				if (unk_0x765F5B806B517045(&(Global_17290.f_1)) != 0)
				{
					func_237();
					unk_0x169EAB5A8FBE845B(&(Global_17290.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68)
					{
						if (Global_17290.f_5[iVar14] == 2)
						{
							unk_0x69967F83C1E636E2(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3)
						{
							unk_0x561D1C39012D002B(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1)
						{
							unk_0x34D84D73B5DF8E80(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8)
						{
							unk_0x34D84D73B5DF8E80(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5)
						{
							unk_0xBAB00B98D1E61BEE(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6)
						{
							unk_0x34D84D73B5DF8E80(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7)
						{
							unk_0xBAB00B98D1E61BEE(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9)
						{
							unk_0xBAB00B98D1E61BEE(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x30122BDF124C9221((Global_17287 + 0.00390625f), ((Global_17288 + fVar56) + 0.00416664f), 0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095)
				{
					if (Global_17290.f_5604 != 0)
					{
						func_237();
						func_235((((Global_17287 + fParam5) - 0.00390625f) - func_236("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603)), ((Global_17288 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar96 = fVar49;
			if (Global_17290.f_7879)
			{
				iVar1 = Global_17290.f_7875;
				iVar2 = Global_17290.f_7876;
				iVar3 = Global_17290.f_7877;
				iVar4 = Global_17290.f_7878;
			}
			else
			{
				unk_0xE3B46F8779F1AB2E(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17290.f_5355[iVar6])
					{
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar55 = Global_17290.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_17290.f_5088 <= 1)
					{
						Global_17290.f_5088++;
					}
					iVar53 = 1;
				}
			}
			unk_0x67972FF1523F6D32("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar96 + ((fVar49 - fVar96) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar96), 0f, 255, 255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095)
			{
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_238(Global_17287, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0xD52DED36C2D0B48F("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar61));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar61));
				if (Global_17290.f_7897)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xE3B46F8779F1AB2E(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x67972FF1523F6D32("CommonMenu", "shop_arrows_upANDdown", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar61), ((Var37.f_1 / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x765F5B806B517045(&(Global_17290.f_4562)) != 0 && Global_17290.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_17290.f_4638 != 0)
				{
					func_244(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_234(fVar41);
				unk_0x379D645C3A509EB1(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x69967F83C1E636E2(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x561D1C39012D002B(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0x34D84D73B5DF8E80(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xBAB00B98D1E61BEE(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0x34D84D73B5DF8E80(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xBAB00B98D1E61BEE(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xBAB00B98D1E61BEE(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xC275B500E5D05D0B(fVar41, (fVar49 + 0.00277776f));
				unk_0xE3B46F8779F1AB2E(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_238(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7889)
				{
					iVar1 = Global_17290.f_7885;
					iVar2 = Global_17290.f_7886;
					iVar3 = Global_17290.f_7887;
					iVar4 = Global_17290.f_7888;
				}
				else
				{
					unk_0xE3B46F8779F1AB2E(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x67972FF1523F6D32("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9953FC2B90DA80E3(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9953FC2B90DA80E3(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_234(fVar41);
				unk_0x169EAB5A8FBE845B(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x69967F83C1E636E2(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x561D1C39012D002B(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0x34D84D73B5DF8E80(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xBAB00B98D1E61BEE(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0x34D84D73B5DF8E80(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xBAB00B98D1E61BEE(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xBAB00B98D1E61BEE(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8)
					{
						unk_0x34D84D73B5DF8E80(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x30122BDF124C9221(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17290.f_4638 != 0)
				{
					func_244(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_233(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0x67972FF1523F6D32(func_242(Global_17290.f_4638), func_239(Global_17290.f_4638, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9953FC2B90DA80E3(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17290.f_4636 > 0)
				{
					if ((unk_0x94E3E074F38DF86C() - Global_17290.f_4637) > Global_17290.f_4636)
					{
						StringCopy(&(Global_17290.f_4562), "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (unk_0x765F5B806B517045(&(Global_2593974.f_21)) != 0 && Global_2593974.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_2593974.f_67 != 0)
				{
					func_244(Global_2593974.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_234(fVar41);
				unk_0x379D645C3A509EB1(&(Global_2593974.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593974.f_61)
				{
					if (Global_2593974.f_25[iVar14] == 2)
					{
						unk_0x69967F83C1E636E2(Global_2593974.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593974.f_25[iVar14] == 3)
					{
						unk_0x561D1C39012D002B(Global_2593974.f_34[iVar16], Global_2593974.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593974.f_25[iVar14] == 1)
					{
						unk_0x34D84D73B5DF8E80(&(Global_2593974.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 5)
					{
						unk_0xBAB00B98D1E61BEE(&(Global_2593974.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 6)
					{
						unk_0x34D84D73B5DF8E80(&(Global_2593974.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 7)
					{
						unk_0xBAB00B98D1E61BEE(&(Global_2593974.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 9)
					{
						unk_0xBAB00B98D1E61BEE(&(Global_2593974.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 8)
					{
						unk_0x34D84D73B5DF8E80(&(Global_2593974.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xC275B500E5D05D0B(fVar41, (fVar49 + 0.00277776f));
				unk_0xE3B46F8779F1AB2E(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_238(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7889)
				{
					iVar1 = Global_17290.f_7885;
					iVar2 = Global_17290.f_7886;
					iVar3 = Global_17290.f_7887;
					iVar4 = Global_17290.f_7888;
				}
				else
				{
					unk_0xE3B46F8779F1AB2E(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x67972FF1523F6D32("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9953FC2B90DA80E3(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9953FC2B90DA80E3(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_234(fVar41);
				unk_0x169EAB5A8FBE845B(&(Global_2593974.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593974.f_61)
				{
					if (Global_2593974.f_25[iVar14] == 2)
					{
						unk_0x69967F83C1E636E2(Global_2593974.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593974.f_25[iVar14] == 3)
					{
						unk_0x561D1C39012D002B(Global_2593974.f_34[iVar16], Global_2593974.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593974.f_25[iVar14] == 1)
					{
						unk_0x34D84D73B5DF8E80(&(Global_2593974.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 8)
					{
						unk_0x34D84D73B5DF8E80(&(Global_2593974.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 5)
					{
						unk_0xBAB00B98D1E61BEE(&(Global_2593974.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 6)
					{
						unk_0x34D84D73B5DF8E80(&(Global_2593974.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 7)
					{
						unk_0xBAB00B98D1E61BEE(&(Global_2593974.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 9)
					{
						unk_0xBAB00B98D1E61BEE(&(Global_2593974.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x30122BDF124C9221(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2593974.f_67 != 0)
				{
					func_244(Global_2593974.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_233(Global_2593974.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0x67972FF1523F6D32(func_242(Global_2593974.f_67), func_239(Global_2593974.f_67, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9953FC2B90DA80E3(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2593974.f_65 > 0)
				{
					if ((unk_0x94E3E074F38DF86C() - Global_2593974.f_66) > Global_2593974.f_65)
					{
						StringCopy(&(Global_2593974.f_21), "", 16);
						Global_2593974.f_65 = -1;
					}
				}
			}
			func_230(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x4933838CDEC9827A(76, 84);
			unk_0x28611CDA71EBBA91(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17290.f_5598)
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
			iVar97 = Global_17290.f_5088;
			if (Global_17290.f_5599)
			{
				iVar97 = (Global_17290.f_5602 - 1);
			}
			fVar98 = 0f;
			fVar99 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar97)
			{
				fVar55 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f)
				{
					fVar55 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599)
				{
					iVar6 = Global_17290.f_7520[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17290.f_5605 && iVar9 < Global_17290.f_5095)
				{
					bVar32 = true;
					if (Global_17290.f_5606 == iVar6)
					{
						fVar99 = fVar98;
					}
					if (Global_17290.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17287 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_17290.f_7891)
					{
						unk_0xE3B46F8779F1AB2E(Global_17290.f_7890, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0xE3B46F8779F1AB2E(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0x67972FF1523F6D32("CommonMenu", "Gradient_Nav", (Global_17287 + (fParam5 * 0.5f)), (((fVar58 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97)
				{
					func_228(bVar31, 1, 0, 0, 0, 0, 0);
					unk_0x169EAB5A8FBE845B("DFLT_MNU_OPT");
					unk_0x30122BDF124C9221(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096)
					{
						if (unk_0x48B8265059381CD0(Global_17290.f_4959[iVar6], iVar8) || Global_17290.f_4926[iVar8] == 5)
						{
							if (Global_17290.f_5599)
							{
								iVar19 = Global_17290.f_7536[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar20 = Global_17290.f_7577[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar21 = Global_17290.f_7618[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar22 = Global_17290.f_7659[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar23 = Global_17290.f_7700[((iVar9 * Global_17290.f_5096) + iVar8)];
							}
							else
							{
								Global_17290.f_7536[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar19;
								Global_17290.f_7577[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar20;
								Global_17290.f_7618[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar21;
								Global_17290.f_7659[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar22;
								Global_17290.f_7700[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar23;
							}
							iVar104 = 0;
							bVar54 = false;
							if (Global_17290.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[0])
								{
									bVar54 = true;
									iVar104 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[1])
								{
									bVar54 = true;
									iVar104 = 1;
								}
							}
							if (Global_17290.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17287 + 0.0046875f) + Global_17290.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17290.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17290.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17290.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17287 + Global_17289) - 0.0046875f) - fVar33);
							}
							if ((Global_17290.f_4945[iVar8] && Global_17290.f_5741) && bVar31)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_17290.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_228(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, iVar104, bVar51, bVar50);
												unk_0x2FCB88845EB45E2E(&(Global_17290.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x34D84D73B5DF8E80(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x34D84D73B5DF8E80(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBAB00B98D1E61BEE(&(Global_2453058[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x34D84D73B5DF8E80(&(Global_2453058[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBAB00B98D1E61BEE(&(Global_2453058[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBAB00B98D1E61BEE(&(Global_2453058[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x69967F83C1E636E2(Global_17290.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x561D1C39012D002B(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0x79BC75FF4F056899(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_244(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17290.f_4433[(iVar22 + iVar14)] == 2 || Global_17290.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17290.f_7741[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7782[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
											Global_17290.f_7823[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17290.f_7741[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7782[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar43 = Global_17290.f_7823[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_244(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_244(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_233(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x67972FF1523F6D32(func_242(26), func_239(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_244(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_244(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_233(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x67972FF1523F6D32(func_242(27), func_239(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_228(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6)
											{
												func_227(bVar31);
											}
											unk_0x169EAB5A8FBE845B(&(Global_17290.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x34D84D73B5DF8E80(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x34D84D73B5DF8E80(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBAB00B98D1E61BEE(&(Global_2453058[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x34D84D73B5DF8E80(&(Global_2453058[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBAB00B98D1E61BEE(&(Global_2453058[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 7;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBAB00B98D1E61BEE(&(Global_2453058[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 9;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x69967F83C1E636E2(Global_17290.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x561D1C39012D002B(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17290.f_4433[(iVar22 + iVar28)] == 2 || Global_17290.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_244(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_244(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_233(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0x67972FF1523F6D32(func_242(Global_17290.f_4433[(iVar22 + iVar28)]), func_239(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0x67972FF1523F6D32(func_242(Global_17290.f_4433[(iVar22 + iVar28)]), func_239(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x765F5B806B517045(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2)
											{
												unk_0x30122BDF124C9221(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x30122BDF124C9221((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17290.f_4433[(iVar22 + iVar14)] != 2 && Global_17290.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_244(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_244(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_233(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x67972FF1523F6D32(func_242(Global_17290.f_4433[(iVar22 + iVar14)]), func_239(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (Global_17287 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0x67972FF1523F6D32(func_242(Global_17290.f_4433[(iVar22 + iVar14)]), func_239(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0x67972FF1523F6D32(func_242(Global_17290.f_4433[(iVar22 + iVar14)]), func_239(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_228(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6)
											{
												func_227(bVar31);
											}
											unk_0x2FCB88845EB45E2E("NUMBER");
											unk_0x69967F83C1E636E2(Global_17290.f_3918[iVar20]);
											fVar42 = unk_0x79BC75FF4F056899(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7741[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7782[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7741[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7782[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_244(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_244(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_233(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x67972FF1523F6D32(func_242(26), func_239(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_244(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_244(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_233(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x67972FF1523F6D32(func_242(27), func_239(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_228(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_226((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_228(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6)
											{
												func_227(bVar31);
											}
											unk_0x2FCB88845EB45E2E("NUMBER");
											unk_0x561D1C39012D002B(Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
											fVar42 = unk_0x79BC75FF4F056899(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7741[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7782[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7741[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7782[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_244(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_244(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_233(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x67972FF1523F6D32(func_242(26), func_239(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_244(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_244(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_233(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x67972FF1523F6D32(func_242(27), func_239(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_228(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_225((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_244(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17290.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17290.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17290.f_7741[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
												Global_17290.f_7823[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17290.f_7741[((iVar9 * Global_17290.f_5096) + iVar8)];
												fVar43 = Global_17290.f_7823[((iVar9 * Global_17290.f_5096) + iVar8)];
											}
											if (bVar52)
											{
												if (func_244(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17290.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_244(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_233(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0x67972FF1523F6D32(func_242(26), func_239(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_244(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_244(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_233(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0x67972FF1523F6D32(func_242(27), func_239(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_244(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_233(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0x67972FF1523F6D32(func_242(Global_17290.f_4433[iVar22]), func_239(Global_17290.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), (fVar35 * func_224(Global_17290.f_4433[iVar22])), (fVar36 * func_224(Global_17290.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
							if (Global_17290.f_4926[iVar8] == 5)
							{
								if (Global_17290.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								if (Global_17290.f_4945[iVar8])
								{
									if (func_244(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17290.f_7520[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar98 = (fVar98 + Global_17290.f_5612[iVar6]);
						}
						else
						{
							fVar98 = (fVar98 + 0.034722f);
						}
					}
					if (!Global_17290.f_5598)
					{
						Global_17290.f_5355[iVar6] = 1;
						if (Global_17290.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17290.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17290.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17290.f_5598)
			{
				Global_17290.f_5600 = ((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12)));
				Global_17290.f_5603 = iVar11;
				Global_17290.f_5601 = iVar10;
				Global_17290.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17290.f_5599)
	{
		Global_17290.f_5602 = iVar9;
		Global_17290.f_5599 = 1;
	}
	Global_17290.f_5743 = fVar49;
	Global_17290.f_5745 = unk_0x94E3E074F38DF86C();
	unk_0xDE0328664F42BCD5(Global_17290.f_5743);
	if (!Global_17290.f_7864)
	{
		func_182();
	}
	Global_17290.f_7864 = 0;
	if (bParam2)
	{
		unk_0xE57F94EA937AAD99(10);
	}
	unk_0xE57F94EA937AAD99(6);
	unk_0xE57F94EA937AAD99(7);
	unk_0xE57F94EA937AAD99(9);
	unk_0xE57F94EA937AAD99(8);
	if (bParam0)
	{
		func_142(1);
	}
	unk_0x526D61ADDDE6C626();
}

float func_224(int iParam0)
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

void func_225(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x169EAB5A8FBE845B(sParam2);
	unk_0x561D1C39012D002B(uParam3, uParam4);
	unk_0x30122BDF124C9221(fParam0, fParam1, 0);
}

void func_226(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x169EAB5A8FBE845B(sParam2);
	unk_0x69967F83C1E636E2(iParam3);
	unk_0x30122BDF124C9221(fParam0, fParam1, iParam4);
}

void func_227(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xE3B46F8779F1AB2E(Global_17290.f_7892[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xE3B46F8779F1AB2E(Global_17290.f_7892[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x95F5FAE83A0364F7(iVar0, iVar1, iVar2, 255);
}

void func_228(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_229(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xE3B46F8779F1AB2E(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x95F5FAE83A0364F7(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xE3B46F8779F1AB2E(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x95F5FAE83A0364F7(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xE3B46F8779F1AB2E(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x95F5FAE83A0364F7(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x95F5FAE83A0364F7(155, 155, 155, 255);
		}
		else
		{
			unk_0x95F5FAE83A0364F7(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x95F5FAE83A0364F7(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xE3B46F8779F1AB2E(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x95F5FAE83A0364F7(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x95F5FAE83A0364F7(155, 155, 155, 255);
	}
	else
	{
		unk_0x95F5FAE83A0364F7(155, 155, 155, 255);
	}
	unk_0xF52EFF0C6EF215CB(0f, 0.35f);
	unk_0xE32F769454EED7A6(1);
	if (bParam5)
	{
		unk_0xF52EFF0C6EF215CB(0f, 0.425f);
		unk_0x6C65E322B18B5D28(4);
	}
	else if (bParam6)
	{
		unk_0xF52EFF0C6EF215CB(0f, 0.425f);
		unk_0x6C65E322B18B5D28(6);
	}
	else
	{
		unk_0x6C65E322B18B5D28(0);
	}
	unk_0x71D93F31C9937FC7(0f, 1f);
	unk_0xD9DDC2582B7C61C4(0);
	unk_0x403F622BEAB190B9(0, 0, 0, 0, 0);
	unk_0x815C87228CF5C384(0, 0, 0, 0, 0);
}

void func_229(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_230(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_221(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_246(bParam4, bParam8))
	{
		return;
	}
	if (func_231())
	{
		return;
	}
	if (unk_0x349B6C82BE3EF6DD())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_78(unk_0xBE369BE1BC57A796(), 0))
		{
			return;
		}
	}
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x8F013F929677E75D() == 0 || unk_0x349B6C82BE3EF6DD())
		{
			return;
		}
	}
	if (Global_17290.f_4639 != 0)
	{
		if (unk_0x987367D2EDB45658(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (Global_17290.f_4896[iVar1] != 353)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x38DDA814F2E19659(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x9AF1671E53EE8CE7(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640)
		{
			unk_0xEAC9A8A194DF8F91(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x44983883E630A945();
			unk_0xEAC9A8A194DF8F91(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x584CF9CAE83942E5((1f - (Global_17290.f_4951 / 100f)));
			unk_0x44983883E630A945();
			if (unk_0xEF4E5E47AF0D4480())
			{
				unk_0xEAC9A8A194DF8F91(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x14ED5B5B8289F2FC(1);
				unk_0x44983883E630A945();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (unk_0x765F5B806B517045(&(Global_17290.f_4834[iVar1 /*4*/])) != unk_0x765F5B806B517045("PREV"))
				{
					unk_0xEAC9A8A194DF8F91(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xDF18CF55301CEB8B(iVar1);
					func_147(&(Global_17290.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x765F5B806B517045(&(Global_17290.f_4834[iVar2 /*4*/])) == unk_0x765F5B806B517045("PREV"))
					{
						func_147(&(Global_17290.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1)
					{
						func_146(&(Global_17290.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0xDCEB60B79ECB219E(&(Global_17290.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x96F1415E7C5E58EB(iParam2, 70);
						}
						else
						{
							unk_0x69967F83C1E636E2(iParam2);
						}
						unk_0x1798EBF9408190D3();
					}
					if (unk_0xEF4E5E47AF0D4480())
					{
						if (Global_17290.f_4896[iVar1] != 353 && unk_0x48B8265059381CD0(Global_17290.f_4922, iVar1))
						{
							unk_0x14ED5B5B8289F2FC(1);
							unk_0xDF18CF55301CEB8B(Global_17290.f_4896[iVar1]);
						}
						else
						{
							unk_0x14ED5B5B8289F2FC(0);
							unk_0xDF18CF55301CEB8B(353);
						}
					}
					unk_0x44983883E630A945();
				}
				iVar1++;
			}
			if (unk_0x765F5B806B517045(&(Global_2593974.f_16)) != unk_0x765F5B806B517045(""))
			{
				unk_0xEAC9A8A194DF8F91(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xDF18CF55301CEB8B(Global_17290.f_4639);
				func_147(&Global_2593974);
				if (Global_2593974.f_20 == -1)
				{
					func_146(&(Global_2593974.f_16));
				}
				else
				{
					unk_0xDCEB60B79ECB219E(&(Global_2593974.f_16));
					if (bParam5)
					{
						unk_0x96F1415E7C5E58EB(iParam2, 70);
					}
					else
					{
						unk_0x69967F83C1E636E2(iParam2);
					}
					unk_0x1798EBF9408190D3();
				}
				unk_0x44983883E630A945();
			}
			unk_0xEAC9A8A194DF8F91(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xDF18CF55301CEB8B(0);
			unk_0xDF18CF55301CEB8B(0);
			unk_0xDF18CF55301CEB8B(0);
			unk_0xDF18CF55301CEB8B(80);
			unk_0x44983883E630A945();
			unk_0xEAC9A8A194DF8F91(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952)
			{
				unk_0xDF18CF55301CEB8B(1);
			}
			else
			{
				unk_0xDF18CF55301CEB8B(0);
			}
			unk_0x44983883E630A945();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639)
		{
			if (Global_17290.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xEAC9A8A194DF8F91(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xDF18CF55301CEB8B(iVar1);
					unk_0xDCEB60B79ECB219E(&(Global_17290.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x96F1415E7C5E58EB(iParam2, 70);
					}
					else
					{
						unk_0x69967F83C1E636E2(iParam2);
					}
					unk_0x1798EBF9408190D3();
					unk_0x44983883E630A945();
				}
			}
			iVar1++;
		}
		if (Global_2593974.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xEAC9A8A194DF8F91(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xDF18CF55301CEB8B(iVar1);
				unk_0xDCEB60B79ECB219E(&(Global_2593974.f_16));
				if (bParam5)
				{
					unk_0x96F1415E7C5E58EB(iParam2, 70);
				}
				else
				{
					unk_0x69967F83C1E636E2(iParam2);
				}
				unk_0x1798EBF9408190D3();
				unk_0x44983883E630A945();
			}
		}
		unk_0x4933838CDEC9827A(76, 66);
		unk_0x28611CDA71EBBA91(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17290.f_7899)
			{
				unk_0x0E544F498B88F47B(15, 0f, -0.0375f);
				Global_17290.f_7899 = 1;
			}
		}
		else if (Global_17290.f_7899)
		{
			unk_0x81118A143DD8B493(15);
			Global_17290.f_7899 = 0;
		}
		unk_0x526D61ADDDE6C626();
		if (Global_17290.f_4925)
		{
			unk_0x4933838CDEC9827A(82, 66);
			unk_0x28611CDA71EBBA91(0f, 0f, 0f, 0f);
			unk_0x50F4FD9686DBDC91(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x526D61ADDDE6C626();
		}
		else
		{
			unk_0x90101FEE397F4A7E(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

int func_231()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_232())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x4EA69F96033BA4FB(&Var0);
		if (Global_14388 == 0)
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

int func_232()
{
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_233(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0xE3B46F8779F1AB2E(1, iParam2, iParam3, iParam4, &uVar0);
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

void func_234(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE3B46F8779F1AB2E(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x6C65E322B18B5D28(0);
	unk_0xF52EFF0C6EF215CB(0f, 0.35f);
	unk_0x33BEE0D70A46B365(2);
	unk_0x95F5FAE83A0364F7(iVar0, iVar1, iVar2, iVar3);
	unk_0x71D93F31C9937FC7(fParam0, ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0xD9DDC2582B7C61C4(0);
	unk_0x403F622BEAB190B9(0, 0, 0, 0, 0);
	unk_0x815C87228CF5C384(0, 0, 0, 0, 0);
}

void func_235(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x169EAB5A8FBE845B(sParam2);
	unk_0x69967F83C1E636E2(uParam3);
	unk_0x69967F83C1E636E2(uParam4);
	unk_0x30122BDF124C9221(fParam0, fParam1, 0);
}

float func_236(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xD3115E7F7876D6E6(sParam0))
	{
		if (unk_0x765F5B806B517045(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_237();
	unk_0x2FCB88845EB45E2E(sParam0);
	unk_0x69967F83C1E636E2(uParam1);
	unk_0x69967F83C1E636E2(uParam2);
	return unk_0x79BC75FF4F056899(1);
}

void func_237()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE3B46F8779F1AB2E(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7874)
	{
		iVar0 = Global_17290.f_7870;
		iVar1 = Global_17290.f_7871;
		iVar2 = Global_17290.f_7872;
		iVar3 = Global_17290.f_7873;
	}
	unk_0x6C65E322B18B5D28(0);
	unk_0xF52EFF0C6EF215CB(0f, 0.35f);
	unk_0x95F5FAE83A0364F7(iVar0, iVar1, iVar2, iVar3);
	unk_0x71D93F31C9937FC7((Global_17287 + 0.0046875f), ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0xD9DDC2582B7C61C4(0);
	unk_0x403F622BEAB190B9(0, 0, 0, 0, 0);
	unk_0x815C87228CF5C384(0, 0, 0, 0, 0);
}

void func_238(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x2F8697C8670CAD58((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_239(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x9C88EB7B70229335(&(Global_17290.f_6703[iParam0 /*16*/])))
	{
		if (unk_0x765F5B806B517045(&(Global_17290.f_6703[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_241(unk_0xBE369BE1BC57A796()) };
			if (unk_0x143C79C845931BB3(&Var19, &uVar3))
			{
				return func_240(&uVar3);
			}
		}
		else
		{
			return func_240(&(Global_17290.f_6703[iParam0 /*16*/]));
		}
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

var func_240(var uParam0)
{
	return uParam0;
}

struct<13> func_241(int iParam0)
{
	struct<13> Var0;
	
	unk_0xF3EE72618DF96AF7(iParam0, &Var0, 13);
	return Var0;
}

char* func_242(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x9C88EB7B70229335(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x765F5B806B517045(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_241(unk_0xBE369BE1BC57A796()) };
			unk_0x143C79C845931BB3(&Var16, &uVar0);
			return func_240(&uVar0);
		}
		else
		{
			return func_240(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_243()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xC00B89C485A069D9(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_244(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_242(iParam0), 64);
	StringCopy(&cVar16, func_239(iParam0, bParam1), 64);
	if (unk_0x765F5B806B517045(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xC00B89C485A069D9(&iVar32, &iVar33);
			fVar35 = unk_0x73E1DAE2E39E5E52(0);
			if (func_243())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_243())
			{
				fVar34 = 1f;
			}
			if (unk_0x82F1A060D8F4583B(joaat("director_mode")) > 0)
			{
				unk_0xFCD5E0181ABDD64D(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0xFCD5E0181ABDD64D(&iVar32, &iVar33);
		}
		Var37 = { unk_0xD52DED36C2D0B48F(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_245(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_245(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.f_0 = (Var37.f_0 - 2f);
			Var37.f_1 = (Var37.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.f_0 = 288f;
			Var37.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x765F5B806B517045(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x4FF5482BE67FE954() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17289)
			{
				*fParam4 = (*fParam4 * (Global_17289 / *fParam3));
				*fParam3 = Global_17289;
			}
		}
		return 1;
	}
	return 0;
}

float func_245(int iParam0)
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

int func_246(bool bParam0, bool bParam1)
{
	if (Global_2433125.f_1385.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x30F06AB0772AFB80() || (func_248(8, -1) && func_247() != 64)) || (unk_0x3C9A4847496426B9() != 0 && !bParam1)) || (unk_0xE9E6B5364105A000() && !bParam0)) || unk_0x1CE7791470873719()) || Global_69962) || Global_17290.f_7898) || unk_0x1CB39616BED2D488()) || Global_91543.f_1361)
	{
		return 0;
	}
	return 1;
}

int func_247()
{
	return Global_1315168;
}

bool func_248(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_249(var uParam0)
{
	switch (uParam0->f_40)
	{
		case 3:
			func_286(uParam0);
			break;
		
		default:
			func_253(uParam0);
			break;
	}
	if (uParam0->f_21 == 0)
	{
		func_250(uParam0);
	}
	unk_0xE57F94EA937AAD99(7);
	unk_0xE57F94EA937AAD99(8);
	unk_0xE57F94EA937AAD99(9);
}

void func_250(var uParam0)
{
	var uVar0;
	
	uVar0 = func_252();
	switch (uParam0->f_40)
	{
		case 3:
			if (uParam0->f_23 == 0)
			{
				func_251("WAR_VEH_DES_M1", 0, 0);
			}
			else if (uParam0->f_23 == 1)
			{
				func_251("WAR_VEH_DES_M2", 0, 0);
			}
			else if (uParam0->f_23 == 2)
			{
				func_251("WAR_VEH_DES_M3", 0, 0);
			}
			break;
		
		case 2:
			if (uParam0->f_23 == 0)
			{
				if (unk_0x48B8265059381CD0(uVar0, 0))
				{
					func_251("WAR_UPG_PURC", 0, 0);
				}
				else if (Global_262145.f_13418)
				{
					func_251("PM_INF_QMF5", 0, 0);
				}
				else
				{
					func_251("WAR_VEH_DES_I5", 0, 0);
				}
			}
			else if (unk_0x48B8265059381CD0(iVar0, 1))
			{
				func_251("WAR_UPG_PURC", 0, 0);
			}
			else if (Global_262145.f_13421)
			{
				func_251("PM_INF_QMF5", 0, 0);
			}
			else
			{
				func_251("WAR_VEH_DES_I6", 0, 0);
			}
			break;
		
		case 1:
			if (uParam0->f_23 == 0)
			{
				if (unk_0x48B8265059381CD0(iVar0, 2))
				{
					func_251("WAR_UPG_PURC", 0, 0);
				}
				else if (Global_262145.f_13416)
				{
					func_251("PM_INF_QMF5", 0, 0);
				}
				else
				{
					func_251("WAR_VEH_DES_I3", 0, 0);
				}
			}
			else if (unk_0x48B8265059381CD0(iVar0, 3))
			{
				func_251("WAR_UPG_PURC", 0, 0);
			}
			else if (Global_262145.f_13419)
			{
				func_251("PM_INF_QMF5", 0, 0);
			}
			else
			{
				func_251("WAR_VEH_DES_I4", 0, 0);
			}
			break;
		
		case 0:
			if (uParam0->f_23 == 0)
			{
				if (unk_0x48B8265059381CD0(iVar0, 4))
				{
					func_251("WAR_UPG_PURC", 0, 0);
				}
				else if (Global_262145.f_13417)
				{
					func_251("PM_INF_QMF5", 0, 0);
				}
				else
				{
					func_251("WAR_VEH_DES_I1", 0, 0);
				}
			}
			else if (unk_0x48B8265059381CD0(iVar0, 5))
			{
				func_251("WAR_UPG_PURC", 0, 0);
			}
			else if (Global_262145.f_13420)
			{
				func_251("PM_INF_QMF5", 0, 0);
			}
			else
			{
				func_251("WAR_VEH_DES_I2", 0, 0);
			}
			break;
	}
}

void func_251(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_4562), sParam0, 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = iParam1;
	Global_17290.f_4637 = unk_0x94E3E074F38DF86C();
	Global_17290.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
}

var func_252()
{
	return Global_2524401[func_80()];
}

void func_253(var uParam0)
{
	bool bVar0;
	
	bVar0 = true;
	if ((((unk_0x95DBE123BC2DB80B() || unk_0xBC409B03D8BA213A()) || unk_0x1CB39616BED2D488()) || unk_0x349B6C82BE3EF6DD()) || Global_91543.f_1361)
	{
		bVar0 = false;
	}
	if (((bVar0 && unk_0x4B972043966C2EB8(2, 201)) || (bVar0 && uParam0->f_9.f_6)) || iLocal_2559 != 0)
	{
		if (unk_0xB78F8387015B354D(func_285(uParam0->f_40, uParam0->f_23), 0, 0, 1, -1) == 0 || func_284(uParam0->f_40, uParam0->f_23))
		{
			if (unk_0xB78F8387015B354D(func_285(uParam0->f_40, uParam0->f_23), 0, 0, 1, -1) == 0)
			{
				func_282(unk_0x765F5B806B517045(func_283(uParam0->f_40, uParam0->f_23)), func_285(uParam0->f_40, uParam0->f_23), 0);
				func_275(0, 10, 3);
			}
			unk_0x4988C48537D1AE4F(-1, "ERROR", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		}
		else if (unk_0xB78F8387015B354D(func_285(uParam0->f_40, uParam0->f_23), 0, 0, 1, -1) || iLocal_2559 != 0)
		{
			if (!func_284(uParam0->f_40, uParam0->f_23))
			{
				func_256(uParam0);
			}
		}
		uParam0->f_21 = 1;
		uParam0->f_20 = 0;
	}
	else if (!bVar0)
	{
	}
	else if (unk_0x4B972043966C2EB8(2, 202) || uParam0->f_9.f_7)
	{
		uParam0->f_23 = uParam0->f_40;
		uParam0->f_40 = 3;
		uParam0->f_21 = 1;
		unk_0x4988C48537D1AE4F(-1, "BACK", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		uParam0->f_20 = 0;
		uParam0->f_24 = func_255();
	}
	else if ((unk_0x4B972043966C2EB8(2, 188) && func_254(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)) || (uParam0->f_9.f_8 && func_254(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)))
	{
		if (uParam0->f_9.f_4 > 0)
		{
			uParam0->f_23 = (uParam0->f_23 - 1);
			if (uParam0->f_23 < 0)
			{
				uParam0->f_23 = 1;
			}
			func_287(uParam0->f_23, 1, 1);
			unk_0x4988C48537D1AE4F(-1, "NAV_UP_DOWN", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		}
	}
	else if ((unk_0x4B972043966C2EB8(2, 187) && func_254(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)) || (uParam0->f_9.f_9 && func_254(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)))
	{
		if (uParam0->f_9.f_4 < 0)
		{
			uParam0->f_23++;
			if (uParam0->f_23 > 1)
			{
				uParam0->f_23 = 0;
			}
			func_287(uParam0->f_23, 1, 1);
			unk_0x4988C48537D1AE4F(-1, "NAV_UP_DOWN", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		}
	}
}

int func_254(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 150;
	if (bParam2)
	{
		if (((unk_0x9E3D293A990C1BEF(2, 188) || unk_0xC9C57E7D3CE8A98E(2, 219) < -0.3f) || unk_0x9E3D293A990C1BEF(2, 241)) || unk_0x4B972043966C2EB8(2, 188))
		{
			if (unk_0x9E3D293A990C1BEF(2, 241))
			{
				iVar1 = 100;
			}
			if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(*uParam0, unk_0xCB150A8B81012128())) > iVar1)
			{
				*uParam0 = unk_0xCB150A8B81012128();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (((unk_0x9E3D293A990C1BEF(2, 187) || unk_0xC9C57E7D3CE8A98E(2, 219) > 0.3f) || unk_0x9E3D293A990C1BEF(2, 242)) || unk_0x4B972043966C2EB8(2, 187))
		{
			if (unk_0x9E3D293A990C1BEF(2, 242))
			{
				iVar1 = 100;
			}
			if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(*uParam0, unk_0xCB150A8B81012128())) > iVar1)
			{
				*uParam0 = unk_0xCB150A8B81012128();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	else
	{
		if ((unk_0x9E3D293A990C1BEF(2, 190) || unk_0xC9C57E7D3CE8A98E(2, 218) > 0.3f) || unk_0x164D7B6E326ECB2A(2, 201))
		{
			if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(*uParam0, unk_0xCB150A8B81012128())) > iVar1)
			{
				*uParam0 = unk_0xCB150A8B81012128();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (unk_0x9E3D293A990C1BEF(2, 189) || unk_0xC9C57E7D3CE8A98E(2, 218) < -0.3f)
		{
			if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(*uParam0, unk_0xCB150A8B81012128())) > iVar1)
			{
				*uParam0 = unk_0xCB150A8B81012128();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	return iVar0;
}

var func_255()
{
	return Global_17290.f_5605;
}

int func_256(var uParam0)
{
	bool bVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = true;
	if (func_274())
	{
		bVar0 = false;
		uVar1 = func_273(uParam0->f_40, uParam0->f_23);
		iVar2 = func_285(uParam0->f_40, uParam0->f_23);
		if (func_257(-1829708865, 537254313, uVar1, 1, iVar2, &iLocal_2559, 0, 3, func_272(uParam0->f_40, uParam0->f_23), unk_0x765F5B806B517045(func_283(uParam0->f_40, uParam0->f_23))))
		{
			if (iLocal_2559 == 2)
			{
				bVar0 = true;
			}
			iLocal_2559 = 0;
		}
	}
	if (bVar0)
	{
		unk_0x4988C48537D1AE4F(-1, "Purchase_Upgrade", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		uVar3 = func_252();
		if (uParam0->f_40 == 2)
		{
			if (uParam0->f_23 == 0)
			{
				unk_0xEB79FECD9022AAF0(&uVar3, 0);
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&uVar3, 1);
			}
		}
		else if (uParam0->f_40 == 1)
		{
			if (uParam0->f_23 == 0)
			{
				unk_0xEB79FECD9022AAF0(&uVar3, 2);
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&uVar3, 3);
			}
		}
		else if (uParam0->f_40 == 0)
		{
			if (uParam0->f_23 == 0)
			{
				unk_0xEB79FECD9022AAF0(&uVar3, 4);
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&uVar3, 5);
			}
		}
		iVar2 = func_285(uParam0->f_40, uParam0->f_23);
		func_98(3671, uVar3, -1, 1);
		if (!func_274())
		{
			bVar4 = unk_0xFB77422520228B28() >= iVar2;
			bVar5 = (!bVar4 && unk_0xFB77422520228B28() > 0);
			if (iVar2 > 0)
			{
				unk_0x6199F1B5A4FA1F4D(iVar2, func_272(uParam0->f_40, uParam0->f_23), 18, 1, bVar4, 0, 0, unk_0x765F5B806B517045(func_283(uParam0->f_40, uParam0->f_23)), 0, bVar5);
			}
		}
		uParam0->f_21 = 1;
		uParam0->f_24 = func_255();
		uParam0->f_20 = 0;
		return 1;
	}
	return 0;
}

bool func_257(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9)
{
	if (*iParam5 != 0 && *iParam5 != 1)
	{
		*iParam5 = 0;
	}
	switch (*iParam5)
	{
		case 0:
			if (func_268(78225582, iParam0, uParam2, iParam1, iParam3, uParam4, 1, 4, iParam6, iParam7))
			{
				if (func_266())
				{
					*iParam5 = 1;
				}
				else
				{
					*iParam5 = 3;
					func_261(func_265());
				}
			}
			else
			{
				*iParam5 = 3;
				func_261(func_265());
			}
			break;
		
		case 1:
			if (func_260(func_265()))
			{
				if (func_259(func_265()) == 2)
				{
					*iParam5 = 2;
					unk_0x3C40768B37383BE6(func_258(func_265()));
					if (iParam0 == 1394405165)
					{
						unk_0x4F0FF2E5AB10CCC9(uParam4, uParam8, 0, 0);
					}
					else if (iParam0 == -103880010)
					{
					}
					else
					{
						unk_0x6199F1B5A4FA1F4D(uParam4, uParam8, 18, 1, false, 0, 0, iParam9, 0, true);
					}
					func_261(func_265());
				}
				else
				{
					*iParam5 = 3;
					func_261(func_265());
				}
			}
			break;
	}
	return *iParam5 != 1;
}

int func_258(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590252[iParam0 /*76*/];
	}
	return -1;
}

int func_259(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590252[iParam0 /*76*/].f_2;
	}
	return 0;
}

int func_260(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590252[iParam0 /*76*/].f_2 != 1;
	}
	return 0;
}

void func_261(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_274())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_264(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9B9AF9D22D9F6313();
			}
		}
		else if (!bVar0)
		{
			unk_0x2A618463FE332188(Global_2590252[iParam0 /*76*/]);
		}
		func_262(&(Global_2590252[iParam0 /*76*/]));
	}
}

void func_262(var uParam0)
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
	func_263(&(uParam0->f_8.f_3));
	func_263(&(uParam0->f_8.f_16));
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
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_263(var uParam0)
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

int func_264(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590252[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

int func_265()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_258(iVar0) != 2147483647)
		{
			if (func_264(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_266()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (!func_274())
	{
		bVar0 = true;
	}
	iVar1 = func_265();
	if (iVar1 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xAE2B681D784C7E64(func_80()) || unk_0xB4EE84164EB16A6B())
		{
			if (func_267(Global_2590252[iVar1 /*76*/].f_6, Global_2590252[iVar1 /*76*/].f_4, Global_2590252[iVar1 /*76*/].f_1) == 1)
			{
				Global_2590762 = 1;
			}
			return 0;
		}
		if (Global_2453677)
		{
			if (Global_2590252[iVar1 /*76*/].f_6 == 1067618600 || Global_2590252[iVar1 /*76*/].f_6 == -1303831698)
			{
				Global_2590763 = 1;
				return 0;
			}
		}
	}
	iVar2 = func_258(iVar1);
	if (iVar2 != 2147483647)
	{
		if (bVar0 || unk_0x0F0045367541BC90(iVar2))
		{
			if (bVar0)
			{
				Global_2590252[iVar1 /*76*/].f_69 = 1;
			}
			Global_2590252[iVar1 /*76*/].f_75 = 0;
			Global_2590752 = 1;
			return 1;
		}
	}
	return 0;
}

int func_267(int iParam0, int iParam1, int iParam2)
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
			case -1426920838:
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
			case -293060240:
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

int func_268(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_274())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xAE2B681D784C7E64(func_80()) || unk_0xB4EE84164EB16A6B())
		{
			Global_2590762 = 1;
			return 0;
		}
		if (Global_2453677)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2590763 = 1;
				return 0;
			}
		}
	}
	iVar1 = func_265();
	if (iVar1 == -1)
	{
		if (!func_270(&iVar1, iParam0, iParam1, uParam3, iParam7, uParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_269(iParam1))
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
		Global_2590252[iVar1 /*76*/].f_73 = Var2.f_0;
		Global_2590252[iVar1 /*76*/].f_74 = Var2.f_1;
		if (bVar0 || unk_0x07FBBA7EF527DAC7(&Var2, uParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_269(int iParam0)
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
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_270(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_274())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xAE2B681D784C7E64(func_80()) || unk_0xB4EE84164EB16A6B())
		{
			Global_2590762 = 1;
			return 0;
		}
		if (Global_2453677)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2590763 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590252[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_2590252[iVar1 /*76*/].f_5 == 1)
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
		if (unk_0x5953D0610E433FF7())
		{
			unk_0x9B9AF9D22D9F6313();
		}
	}
	if (bVar0 || unk_0x444D632DAA38A3DE(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_271(uVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5);
		return 1;
	}
	return 0;
}

int func_271(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590252[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_274())
			{
				uParam0 = iVar0 + 900;
			}
			Global_2590252[iVar0 /*76*/].f_2 = 1;
			Global_2590252[iVar0 /*76*/].f_1 = iParam5;
			Global_2590252[iVar0 /*76*/].f_3 = uParam1;
			Global_2590252[iVar0 /*76*/].f_4 = iParam2;
			Global_2590252[iVar0 /*76*/].f_7 = uParam3;
			Global_2590252[iVar0 /*76*/].f_5 = 0;
			Global_2590252[iVar0 /*76*/] = uParam0;
			Global_2590252[iVar0 /*76*/].f_6 = iParam4;
			Global_2590252[iVar0 /*76*/].f_72 = uParam8;
			Global_2590252[iVar0 /*76*/].f_71 = uParam7;
			Global_2590252[iVar0 /*76*/].f_75 = 0;
			Global_2590752 = 0;
			if (bParam6)
			{
				Global_2590252[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_272(int iParam0, int iParam1)
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

int func_273(int iParam0, int iParam1)
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

int func_274()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

void func_275(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xE36F5BB02676D469())
	{
		return;
	}
	if (unk_0x63C468D583002D23() && func_279(unk_0xBE369BE1BC57A796(), 1))
	{
		return;
	}
	if (unk_0x79888727131C6854(2, 199) || unk_0x9E3D293A990C1BEF(2, 199))
	{
		return;
	}
	if (unk_0x3C9A4847496426B9() != 0)
	{
		return;
	}
	if (unk_0x95DBE123BC2DB80B())
	{
		return;
	}
	if (unk_0xBC409B03D8BA213A())
	{
		return;
	}
	if (unk_0x1CB39616BED2D488())
	{
		return;
	}
	if (func_278())
	{
		return;
	}
	if (!func_276())
	{
		return;
	}
	if (unk_0x63C468D583002D23() || iParam0)
	{
		if (!Global_91543.f_1361 && !unk_0x1CE7791470873719())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2453572 = iParam1;
			Global_91543.f_1361 = 1;
			Global_91543.f_1362 = iParam2;
		}
	}
}

int func_276()
{
	if (func_277())
	{
		return 0;
	}
	if (unk_0x877FC5FAF7DC9BC5() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_277()
{
	return Global_2453019;
}

bool func_278()
{
	return Global_2453677;
}

int func_279(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_280(iParam0))
		{
			return 1;
		}
	}
	if (Global_1591201[iParam0 /*602*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_280(int iParam0)
{
	return func_281(iParam0);
}

bool func_281(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_13.f_1, 0);
}

void func_282(int iParam0, var uParam1, int iParam2)
{
	Global_91543.f_1363 = iParam0;
	Global_91543.f_1364 = uParam1;
	Global_91543.f_1365 = iParam2;
}

char* func_283(int iParam0, int iParam1)
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

int func_284(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_252();
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					if (unk_0x48B8265059381CD0(uVar0, 0) || Global_262145.f_13418)
					{
						return 1;
					}
					break;
				
				case 1:
					if (unk_0x48B8265059381CD0(iVar0, 1) || Global_262145.f_13421)
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
					if (unk_0x48B8265059381CD0(iVar0, 2) || Global_262145.f_13416)
					{
						return 1;
					}
					break;
				
				case 1:
					if (unk_0x48B8265059381CD0(iVar0, 3) || Global_262145.f_13419)
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
					if (unk_0x48B8265059381CD0(iVar0, 4) || Global_262145.f_13417)
					{
						return 1;
					}
					break;
				
				case 1:
					if (unk_0x48B8265059381CD0(iVar0, 5) || Global_262145.f_13420)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_285(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_13628;
					break;
				
				case 1:
					return Global_262145.f_13627;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_13623;
					break;
				
				case 1:
					return Global_262145.f_13624;
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_13626;
					break;
				
				case 1:
					return Global_262145.f_13625;
					break;
			}
			break;
	}
	return 0;
}

void func_286(var uParam0)
{
	bool bVar0;
	
	bVar0 = true;
	if ((((unk_0x3C9A4847496426B9() != 0 || unk_0xBC409B03D8BA213A()) || unk_0x1CB39616BED2D488()) || unk_0x349B6C82BE3EF6DD()) || Global_91543.f_1361)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
	}
	else if ((unk_0x4B972043966C2EB8(2, 188) && func_254(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)) || (uParam0->f_9.f_8 && func_254(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)))
	{
		if (uParam0->f_9.f_4 > 0)
		{
			uParam0->f_23 = (uParam0->f_23 - 1);
			if (uParam0->f_23 < 0)
			{
				uParam0->f_23 = 2;
			}
			func_287(uParam0->f_23, 1, 1);
			unk_0x4988C48537D1AE4F(-1, "NAV_UP_DOWN", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		}
	}
	else if ((unk_0x4B972043966C2EB8(2, 187) && func_254(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)) || (uParam0->f_9.f_9 && func_254(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)))
	{
		if (uParam0->f_9.f_4 < 0)
		{
			uParam0->f_23++;
			if (uParam0->f_23 > 2)
			{
				uParam0->f_23 = 0;
			}
			func_287(uParam0->f_23, 1, 1);
			unk_0x4988C48537D1AE4F(-1, "NAV_UP_DOWN", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		}
	}
	else if (unk_0x4B972043966C2EB8(2, 202) || uParam0->f_9.f_7)
	{
		*uParam0 = 4;
		unk_0x4988C48537D1AE4F(-1, "CANCEL", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		uParam0->f_20 = 0;
	}
	else if (unk_0x4B972043966C2EB8(2, 201) || uParam0->f_9.f_6)
	{
		unk_0x4988C48537D1AE4F(-1, "SELECT", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", 1);
		if (uParam0->f_23 >= 0 && uParam0->f_23 < 3)
		{
			uParam0->f_40 = uParam0->f_23;
		}
		uParam0->f_21 = 1;
		uParam0->f_24 = func_255();
		uParam0->f_23 = 0;
		uParam0->f_20 = 0;
	}
}

void func_287(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17290.f_5606 = uParam0;
	Global_17290.f_5741 = iParam2;
	if (Global_17290.f_5606 < Global_17290.f_5605)
	{
		Global_17290.f_5605 = Global_17290.f_5606;
	}
	else if ((Global_17290.f_5599 && Global_17290.f_5606 > Global_17290.f_5607) || (!Global_17290.f_5599 && Global_17290.f_5606 >= (Global_17290.f_5605 + Global_17290.f_5095)))
	{
		iVar0 = Global_17290.f_5605;
		while (iVar0 <= Global_17290.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17290.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17290.f_5095 && Global_17290.f_5605 < 128)
		{
			Global_17290.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17290.f_5605;
			while (iVar0 <= Global_17290.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17290.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17290.f_4562), "", 16);
		StringCopy(&(Global_2593974.f_21), "", 16);
	}
}

void func_288(var uParam0)
{
	if (!uParam0->f_20)
	{
		switch (uParam0->f_40)
		{
			case 3:
				func_325(uParam0);
				break;
			
			case 2:
				func_309(uParam0);
				break;
			
			case 0:
				func_308(uParam0);
				break;
			
			case 1:
				func_289(uParam0);
				break;
		}
		uParam0->f_20 = 1;
	}
}

void func_289(var uParam0)
{
	var uVar0;
	
	func_307(0);
	func_305(func_306(uParam0->f_40, 1));
	func_304(1, 2, 1, 1, 1);
	func_303(1, 1, 0, 0, 0);
	func_302(47, 88, 109, 255, 1);
	func_300(1, "ShopUI_Title_Exec_VechUpgrade", "ShopUI_Title_Exec_VechUpgrade");
	uVar0 = func_252();
	if (unk_0x48B8265059381CD0(uVar0, 2) || Global_262145.f_13416)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	if (func_299(*uParam0, 0))
	{
		func_295(0, "WAR_BOAT_UP_1", 1, uParam0->f_22, 0, 0);
		func_294(48, 0);
	}
	else
	{
		func_295(0, "WAR_BOAT_UP_1", 0, uParam0->f_22, 0, 0);
	}
	if (unk_0x48B8265059381CD0(iVar0, 2))
	{
		func_295(0, "", 1, uParam0->f_22, 0, 0);
		func_294(12, 0);
	}
	else
	{
		func_295(0, "ITEM_COST", 1, uParam0->f_22, 0, 0);
		func_291(func_285(uParam0->f_40, 0), 0);
	}
	if (unk_0x48B8265059381CD0(iVar0, 3) || Global_262145.f_13419)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	if (func_299(*uParam0, 1))
	{
		func_295(1, "WAR_PLANE_UP_2", 1, uParam0->f_22, 0, 0);
		func_294(48, 0);
	}
	else
	{
		func_295(1, "WAR_PLANE_UP_2", 0, uParam0->f_22, 0, 0);
	}
	if (unk_0x48B8265059381CD0(iVar0, 3))
	{
		func_295(1, "", 1, uParam0->f_22, 0, 0);
		func_294(12, 0);
	}
	else
	{
		func_295(1, "ITEM_COST", 1, uParam0->f_22, 0, 0);
		func_291(func_285(uParam0->f_40, 1), 0);
	}
	func_287(uParam0->f_23, 1, 1);
	uParam0->f_21 = 1;
	uParam0->f_40 = 1;
	func_290(201, "ITEM_SELECT", -1, 0);
	func_290(202, "ITEM_BACK", -1, 0);
}

void func_290(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x38DDA814F2E19659(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2593974, sVar0, 64);
		StringCopy(&(Global_2593974.f_16), sParam1, 16);
		Global_2593974.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xEB79FECD9022AAF0(&(Global_17290.f_4922), Global_17290.f_4639);
	}
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

void func_291(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17290.f_5092 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 >= 4)
	{
		return;
	}
	if (Global_17290.f_5611 != 1)
	{
		return;
	}
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		return;
	}
	Global_17290.f_3918[Global_17290.f_5092] = uParam0;
	Global_17290.f_5092++;
	Global_17290.f_2124[Global_17290.f_5609 /*5*/][Global_17290.f_5610] = 2;
	Global_17290.f_5610++;
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		fVar0 = func_293();
		if (Global_17290.f_4945[Global_17290.f_5089] && Global_17290.f_5610 == Global_17290.f_5608)
		{
			func_244(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17290.f_4938[(Global_17290.f_5089 - 1)])
		{
			Global_17290.f_4938[(Global_17290.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17290.f_5610 >= Global_17290.f_5608)
		{
			fVar3 = func_292();
			if (fVar3 > Global_17290.f_5612[Global_17290.f_5088])
			{
				Global_17290.f_5612[Global_17290.f_5088] = fVar3;
			}
		}
	}
}

float func_292()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5610)
	{
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17290.f_4433[((Global_17290.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_244(Global_17290.f_4433[((Global_17290.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x9953FC2B90DA80E3(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x9953FC2B90DA80E3(0.35f, 0);
}

float func_293()
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
	while (iVar7 < Global_17290.f_5610)
	{
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_228(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x765F5B806B517045(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
	{
		unk_0x2FCB88845EB45E2E(&(Global_17290.f_73[Global_17290.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17290.f_5610)
	{
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x765F5B806B517045(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x34D84D73B5DF8E80(&(Global_17290.f_73[(Global_17290.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x765F5B806B517045(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x34D84D73B5DF8E80(&(Global_17290.f_73[(Global_17290.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x765F5B806B517045(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x69967F83C1E636E2(Global_17290.f_3918[((Global_17290.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x765F5B806B517045(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x561D1C39012D002B(Global_17290.f_4175[((Global_17290.f_5093 - iVar4) + iVar10)], Global_17290.f_4304[((Global_17290.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x765F5B806B517045(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xBAB00B98D1E61BEE(&(Global_2453058[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x765F5B806B517045(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x34D84D73B5DF8E80(&(Global_2453058[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x765F5B806B517045(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xBAB00B98D1E61BEE(&(Global_2453058[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 9)
		{
			if (unk_0x765F5B806B517045(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xBAB00B98D1E61BEE(&(Global_2453058[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x765F5B806B517045(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0x79BC75FF4F056899(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17290.f_4433[((Global_17290.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_244(Global_17290.f_4433[((Global_17290.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_294(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17290.f_5094 >= 128)
	{
		return;
	}
	if (Global_17290.f_5610 >= 4)
	{
		return;
	}
	if (Global_17290.f_5611 != 1)
	{
		return;
	}
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		return;
	}
	Global_17290.f_4433[Global_17290.f_5094] = iParam0;
	Global_17290.f_5094++;
	Global_17290.f_2124[Global_17290.f_5609 /*5*/][Global_17290.f_5610] = 4;
	Global_17290.f_5610++;
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		fVar0 = func_293();
		if (Global_17290.f_4945[Global_17290.f_5089] && Global_17290.f_5610 == Global_17290.f_5608)
		{
			func_244(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17290.f_4938[(Global_17290.f_5089 - 1)])
		{
			Global_17290.f_4938[(Global_17290.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17290.f_5610 >= Global_17290.f_5608)
		{
			fVar3 = func_292();
			if (fVar3 > Global_17290.f_5612[Global_17290.f_5088])
			{
				Global_17290.f_5612[Global_17290.f_5088] = fVar3;
			}
		}
	}
}

void func_295(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17290.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17290.f_5088 >= 128)
	{
		return;
	}
	if (Global_17290.f_5090 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608)
	{
		return;
	}
	if (Global_17290.f_5088 != iParam0)
	{
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17290.f_5089 < 4 && iVar0 != 1)
		{
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0x9C88EB7B70229335(sParam1) && !unk_0x63A528817609801B(sParam1))
	{
	}
	Global_17290.f_1610[Global_17290.f_5090] = bParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!bParam3)
	{
		func_298(Global_17290.f_5088, 1);
	}
	else
	{
		func_298(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_297(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
		if (Global_17290.f_4945[Global_17290.f_5089])
		{
			func_244(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089])
		{
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_296(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
			if (fVar4 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xEB79FECD9022AAF0(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = (Global_17290.f_5090 - 1);
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

float func_296(char* sParam0)
{
	if (!unk_0x63A528817609801B(sParam0))
	{
	}
	return unk_0x9953FC2B90DA80E3(0.35f, 0);
}

float func_297(char* sParam0)
{
	if (!unk_0xD3115E7F7876D6E6(uParam0))
	{
		if (unk_0x765F5B806B517045(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_228(0, 1, 0, 0, 0, 0, 0);
	unk_0x2FCB88845EB45E2E(sParam0);
	return unk_0x79BC75FF4F056899(1);
}

void func_298(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xEB79FECD9022AAF0(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_299(struct<41> Param0, int iParam41)
{
	var uVar0;
	
	uVar0 = Global_262145.f_13721;
	switch (Param0.f_40)
	{
		case 2:
			switch (iParam41)
			{
				case 0:
					return unk_0x48B8265059381CD0(uVar0, 0);
				
				case 1:
					return unk_0x48B8265059381CD0(iVar0, 1);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam41)
			{
				case 0:
					return unk_0x48B8265059381CD0(iVar0, 2);
				
				case 1:
					return unk_0x48B8265059381CD0(iVar0, 3);
				
				default:
			}
			break;
		
		case 0:
			switch (iParam41)
			{
				case 0:
					return unk_0x48B8265059381CD0(iVar0, 4);
				
				case 1:
					return unk_0x48B8265059381CD0(iVar0, 5);
				
				default:
			}
			break;
	}
	return 0;
}

void func_300(int iParam0, char* sParam1, char* sParam2)
{
	Global_17290 = iParam0;
	func_301(29, sParam1, sParam2);
}

void func_301(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17290.f_5886[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17290.f_6703[iParam0 /*16*/]), sParam2, 64);
}

void func_302(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_7869 = iParam4;
	Global_17290.f_7865 = iParam0;
	Global_17290.f_7866 = iParam1;
	Global_17290.f_7867 = iParam2;
	Global_17290.f_7868 = iParam3;
}

void func_303(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4926[0] = iParam0;
	Global_17290.f_4926[1] = iParam1;
	Global_17290.f_4926[2] = iParam2;
	Global_17290.f_4926[3] = iParam3;
	Global_17290.f_4926[4] = iParam4;
	Global_17290.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17290.f_5096++;
	}
}

void func_304(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

void func_305(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_1), sParam0, 16);
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
}

char* func_306(int iParam0, bool bParam1)
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

void func_307(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17290.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17290.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2453058[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17290.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4959[iVar0] = 0;
		Global_17290.f_5097[iVar0] = 0;
		Global_17290.f_5226[iVar0] = 0;
		Global_17290.f_5746[iVar0] = 0f;
		Global_17290.f_5355[iVar0] = 0;
		Global_17290.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17290.f_4926[iVar0] = 0;
		Global_17290.f_4938[iVar0] = 0f;
		Global_17290.f_4932[iVar0] = -1f;
		Global_17290.f_4945[iVar0] = 0;
		Global_17290.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17290.f_4834[iVar0 /*4*/]), "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 353;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		StringCopy(&(Global_17290.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17290.f_6703[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2593974.f_16), "", 16);
	Global_2593974.f_20 = -1;
	Global_17290 = 0;
	Global_17290.f_5088 = 0;
	Global_17290.f_5089 = 0;
	Global_17290.f_5090 = 0;
	Global_17290.f_5092 = 0;
	Global_17290.f_5093 = 0;
	Global_17290.f_5094 = 0;
	Global_17290.f_5091 = 0;
	Global_17290.f_5741 = 0;
	Global_17290.f_5606 = 0;
	Global_17290.f_5605 = 0;
	Global_17290.f_5607 = 0;
	StringCopy(&(Global_17290.f_4562), "", 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = 0;
	Global_17290.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_4638 = 0;
	StringCopy(&(Global_2593974.f_21), "", 16);
	Global_2593974.f_61 = 0;
	Global_2593974.f_62 = 0;
	Global_2593974.f_63 = 0;
	Global_2593974.f_64 = 0;
	Global_2593974.f_65 = 0;
	Global_2593974.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2593974.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2593974.f_67 = 0;
	StringCopy(&(Global_17290.f_1), "", 16);
	Global_17290.f_4944 = 0f;
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_5611 = 0;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = 0;
	Global_17290.f_5609 = 0;
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	Global_17290.f_5095 = 10;
	Global_17290.f_5096 = 0;
	Global_17290.f_5743 = 0f;
	Global_17290.f_5744 = 0f;
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	Global_17290.f_5600 = 0f;
	Global_17290.f_5601 = 0;
	Global_17290.f_5603 = 0;
	Global_17290.f_5602 = 0;
	Global_17290.f_5604 = 0;
	Global_17290.f_7895 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17290.f_5875[iVar0] = -1;
		Global_17290.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17290.f_4951 = 0f;
	Global_17290.f_4922 = 0;
	Global_17290.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5881)
	{
		Global_17290.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_7874 = 0;
	Global_17290.f_7869 = 0;
	Global_17290.f_7879 = 0;
	Global_17290.f_7884 = 0;
	Global_17290.f_7889 = 0;
	Global_17290.f_7891 = 0;
	Global_17290.f_7897 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = unk_0x73E1DAE2E39E5E52(0);
	if (bParam0)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17289 = 0.225f;
	}
}

void func_308(var uParam0)
{
	var uVar0;
	
	func_307(0);
	func_305(func_306(uParam0->f_40, 1));
	func_304(1, 2, 1, 1, 1);
	func_303(1, 1, 0, 0, 0);
	func_302(47, 88, 109, 255, 1);
	func_300(1, "ShopUI_Title_Exec_VechUpgrade", "ShopUI_Title_Exec_VechUpgrade");
	uVar0 = func_252();
	if (unk_0x48B8265059381CD0(uVar0, 4) || Global_262145.f_13417)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	if (func_299(*uParam0, 0))
	{
		func_295(0, "WAR_BOAT_UP_1", 1, uParam0->f_22, 0, 0);
		func_294(48, 0);
	}
	else
	{
		func_295(0, "WAR_BOAT_UP_1", 0, uParam0->f_22, 0, 0);
	}
	if (unk_0x48B8265059381CD0(iVar0, 4))
	{
		func_295(0, "", 1, uParam0->f_22, 0, 0);
		func_294(12, 0);
	}
	else
	{
		func_295(0, "ITEM_COST", 1, uParam0->f_22, 0, 0);
		func_291(func_285(uParam0->f_40, 0), 0);
	}
	if (unk_0x48B8265059381CD0(iVar0, 5) || Global_262145.f_13420)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	if (func_299(*uParam0, 1))
	{
		func_295(1, "WAR_TRUCK_UP_2", 1, uParam0->f_22, 0, 0);
		func_294(48, 0);
	}
	else
	{
		func_295(1, "WAR_TRUCK_UP_2", 0, uParam0->f_22, 0, 0);
	}
	if (unk_0x48B8265059381CD0(iVar0, 5))
	{
		func_295(1, "", 1, uParam0->f_22, 0, 0);
		func_294(12, 0);
	}
	else
	{
		func_295(1, "ITEM_COST", 1, uParam0->f_22, 0, 0);
		func_291(func_285(uParam0->f_40, 1), 0);
	}
	func_287(uParam0->f_23, 1, 1);
	uParam0->f_21 = 1;
	uParam0->f_40 = 0;
	func_290(201, "ITEM_SELECT", -1, 0);
	func_290(202, "ITEM_BACK", -1, 0);
}

void func_309(var uParam0)
{
	var uVar0;
	
	func_307(0);
	func_305(func_306(uParam0->f_40, 1));
	func_304(1, 2, 1, 1, 1);
	func_303(1, 1, 0, 0, 0);
	func_302(47, 88, 109, 255, 1);
	func_300(1, "ShopUI_Title_Exec_VechUpgrade", "ShopUI_Title_Exec_VechUpgrade");
	uVar0 = func_252();
	if (unk_0x48B8265059381CD0(uVar0, 0) || Global_262145.f_13418)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	if (func_299(*uParam0, 0))
	{
		func_295(0, "WAR_BOAT_UP_1", 1, uParam0->f_22, 0, 0);
		func_294(48, 0);
	}
	else
	{
		func_295(0, "WAR_BOAT_UP_1", 0, uParam0->f_22, 0, 0);
	}
	if (unk_0x48B8265059381CD0(iVar0, 0))
	{
		func_295(0, "", 1, uParam0->f_22, 0, 0);
		func_294(12, 0);
	}
	else
	{
		func_295(0, "ITEM_COST", 1, uParam0->f_22, 0, 0);
		func_291(func_285(uParam0->f_40, 0), 0);
	}
	if (unk_0x48B8265059381CD0(iVar0, 1) || Global_262145.f_13421)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	if (func_299(*uParam0, 1))
	{
		func_295(1, "WAR_BOAT_UP_2", 1, uParam0->f_22, 0, 0);
		func_294(48, 0);
	}
	else
	{
		func_295(1, "WAR_BOAT_UP_2", 0, uParam0->f_22, 0, 0);
	}
	if (unk_0x48B8265059381CD0(iVar0, 1))
	{
		func_295(1, "", 1, uParam0->f_22, 0, 0);
		func_294(12, 0);
	}
	else
	{
		func_295(1, "ITEM_COST", 1, uParam0->f_22, 0, 0);
		func_291(func_285(uParam0->f_40, 1), 0);
	}
	func_287(uParam0->f_23, 1, 1);
	uParam0->f_21 = 1;
	uParam0->f_40 = 2;
	func_290(201, "ITEM_SELECT", -1, 0);
	func_290(202, "ITEM_BACK", -1, 0);
}

void func_310(var uParam0, var uParam1)
{
	func_319(uParam0, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), 0);
	uParam0->f_6 = (unk_0x4B972043966C2EB8(2, 201) || unk_0x698C9A4C14BF3957(2, 201));
	uParam0->f_7 = (unk_0x4B972043966C2EB8(2, 202) || unk_0x698C9A4C14BF3957(2, 202));
	uParam0->f_8 = (uParam0->f_1 < -64 || unk_0x4B972043966C2EB8(2, 188));
	uParam0->f_9 = (uParam0->f_1 > 64 || unk_0x4B972043966C2EB8(2, 187));
	if (((((func_327(0, -1, 0) && unk_0x3C9A4847496426B9() == 0) && !unk_0xBC409B03D8BA213A()) && !unk_0x1CB39616BED2D488()) && !unk_0x349B6C82BE3EF6DD()) && !Global_91543.f_1361)
	{
		if (unk_0xEF4E5E47AF0D4480() && !unk_0x349B6C82BE3EF6DD())
		{
			if (unk_0xB94BB6517BF117EA(2))
			{
				unk_0xD1BB2AD73E7FC3A7(0, 1, 1);
				unk_0xD1BB2AD73E7FC3A7(0, 2, 1);
				unk_0xD1BB2AD73E7FC3A7(2, 200, 1);
				unk_0xCA3F0B618E8962EA(0, 237, 1);
				unk_0xCA3F0B618E8962EA(0, 238, 1);
				unk_0xCA3F0B618E8962EA(0, 241, 1);
				unk_0xCA3F0B618E8962EA(0, 242, 1);
				if ((Global_2594050 == -1 || Global_2594050 == -4) || Global_2594050 == -6)
				{
					unk_0xCA3F0B618E8962EA(1, 1, 1);
					unk_0xCA3F0B618E8962EA(1, 2, 1);
				}
				else
				{
					unk_0xD1BB2AD73E7FC3A7(1, 1, 1);
					unk_0xD1BB2AD73E7FC3A7(1, 2, 1);
				}
				func_316(0, 0, 0, 1);
				func_315(0, -1, 1);
			}
			if (func_314())
			{
				if (Global_2594050 == *uParam1)
				{
					uParam0->f_6 = 1;
				}
				else
				{
					*uParam1 = Global_2594050;
					func_287(*uParam1, 1, 1);
				}
			}
			if (func_313())
			{
				uParam0->f_7 = 1;
			}
			if (func_312(0, 0, 0))
			{
				uParam0->f_8 = 1;
			}
			if (func_311(0, 0, 0))
			{
				uParam0->f_9 = 1;
			}
		}
	}
}

int func_311(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xF23B2033129FFCF0(2))
	{
		if (Global_2594050 == -3)
		{
			if ((unk_0x79888727131C6854(2, 237) && iParam0) || unk_0x4B972043966C2EB8(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0x79888727131C6854(2, 242) || (unk_0x9E3D293A990C1BEF(2, 242) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_312(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xF23B2033129FFCF0(2))
	{
		if (Global_2594050 == -2)
		{
			if ((unk_0x79888727131C6854(2, 237) && iParam0) || unk_0x4B972043966C2EB8(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0x79888727131C6854(2, 241) || (unk_0x9E3D293A990C1BEF(2, 241) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_313()
{
	if (unk_0xF23B2033129FFCF0(2))
	{
		if (unk_0x4B972043966C2EB8(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

int func_314()
{
	if (unk_0xF23B2033129FFCF0(2))
	{
		if (Global_2594050 > -1)
		{
			if (unk_0x4B972043966C2EB8(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_315(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xF23B2033129FFCF0(2))
	{
		return 0;
	}
	if (unk_0x95DBE123BC2DB80B() || unk_0x1CB39616BED2D488())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xB05075754D5DD4A3();
	}
	if (Global_2594050 == -6)
	{
		unk_0x535A960C1D9AE906(4);
		if (iParam0 && unk_0x79888727131C6854(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2594050 = -1;
			return 0;
		}
	}
	if (((Global_2594050 > -1 || Global_2594050 == -3) || Global_2594050 == -2) || unk_0x2BC8D6E225C1D41E())
	{
		unk_0x535A960C1D9AE906(1);
		return 0;
	}
	if (Global_2594050 == -1 && iParam0)
	{
		if (unk_0x79888727131C6854(2, 237))
		{
			unk_0x535A960C1D9AE906(4);
			Global_2594050 = -6;
			return 1;
		}
		else
		{
			unk_0x535A960C1D9AE906(3);
			return 0;
		}
	}
	unk_0x535A960C1D9AE906(1);
	return 0;
}

void func_316(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0xF23B2033129FFCF0(2))
	{
		Global_2594050 = -1;
		return;
	}
	unk_0x94FCC8290D599365(1);
	fVar0 = Global_17287;
	fVar2 = (fVar0 + Global_17289);
	fVar3 = Global_17290.f_5600;
	fVar1 = (Global_17290.f_5600 - (IntToFloat(Global_17290.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17290.f_5602 < 1)
	{
		fVar1 = (Global_17290.f_5600 - 0.034722f);
	}
	unk_0x4933838CDEC9827A(76, 84);
	unk_0x28611CDA71EBBA91(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xD1CB8E7D5D255D7C(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xD1CB8E7D5D255D7C(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x526D61ADDDE6C626();
	func_318();
	if (Global_2594050 == -6)
	{
		return;
	}
	Global_2594050 = -1;
	fVar7 = Global_2594044;
	fVar8 = Global_2594045;
	if (Global_17290.f_5603 > Global_17290.f_5602)
	{
		if (((Global_2594044 >= fVar0 && Global_2594044 <= fVar2) && Global_2594045 >= fVar3) && Global_2594045 < (fVar3 + fVar6))
		{
			Global_2594050 = -2;
			if (bParam3)
			{
				func_317(0);
			}
			return;
		}
		if (((Global_2594044 >= fVar0 && Global_2594044 <= fVar2) && Global_2594045 >= (fVar3 + fVar6)) && Global_2594045 < (fVar3 + 0.034722f))
		{
			Global_2594050 = -3;
			if (bParam3)
			{
				func_317(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17290.f_5603 == -1)
		{
			Global_2594050 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17290.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x4933838CDEC9827A(76, 84);
				unk_0x28611CDA71EBBA91(-0.05f, -0.05f, 0f, 0f);
				func_238(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17289, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x526D61ADDDE6C626();
			}
		}
		Global_2594050 = Global_17290.f_7520[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2594050 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2594050 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2594050 = -4;
		return;
	}
	Global_2594050 = -1;
}

void func_317(bool bParam0)
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
	fVar0 = Global_17287;
	fVar1 = Global_17290.f_5600;
	unk_0x4933838CDEC9827A(76, 84);
	unk_0x28611CDA71EBBA91(-0.05f, -0.05f, 0f, 0f);
	if (Global_2594050 == -2)
	{
		func_238(fVar0, fVar1, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2594050 == -3)
	{
		func_238(fVar0, (fVar1 + fVar2), Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x526D61ADDDE6C626();
}

void func_318()
{
	Global_2594046 = Global_2594044;
	Global_2594047 = Global_2594045;
	Global_2594044 = unk_0x6E0DC4DEE4A9B736(2, 239);
	Global_2594045 = unk_0x6E0DC4DEE4A9B736(2, 240);
	Global_2594048 = (Global_2594044 - Global_2594046);
	Global_2594049 = (Global_2594045 - Global_2594047);
}

void func_319(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xC9C57E7D3CE8A98E(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xC9C57E7D3CE8A98E(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xC9C57E7D3CE8A98E(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xC9C57E7D3CE8A98E(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x6E0DC4DEE4A9B736(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x6E0DC4DEE4A9B736(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x6E0DC4DEE4A9B736(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x6E0DC4DEE4A9B736(2, 221) * 127f));
		}
	}
}

void func_320(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x91FFFB0475D539A1(uParam0->f_25);
	if (iVar0 >= 0)
	{
		if (unk_0x00743AFDA92F3B04(iVar0))
		{
			if (unk_0x96F65998C0685177(iVar0) >= 0.99f)
			{
				unk_0x21E7933CCC7B3724(&(uParam0->f_26), 1);
			}
		}
	}
}

int func_321(var uParam0)
{
	if (!unk_0x48B8265059381CD0(uParam0->f_26, 1))
	{
		uParam0->f_25 = unk_0xEFC1A93F65285B77(uParam0->f_27, uParam0->f_27.f_3, 2, 1, 0, 1065353216, 0, 1065353216);
		unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), uParam0->f_25, uParam0->f_39, "idle", 1.5f, -1.5f, 13, 16, 1.5f, 0);
		unk_0xD299F9D47AAE6209(uParam0->f_25);
		unk_0xEB79FECD9022AAF0(&(uParam0->f_26), 1);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_322(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x91FFFB0475D539A1(uParam0->f_25);
	if (iVar0 >= 0)
	{
		if (unk_0x00743AFDA92F3B04(iVar0))
		{
			if (unk_0x96F65998C0685177(iVar0) >= 0.99f)
			{
				*uParam0 = 3;
			}
		}
	}
}

int func_323(var uParam0)
{
	unk_0xA0E7D0E8FE126EE8(uParam0->f_39);
	if (!unk_0xF4F8AE8DD0F08C1E(uParam0->f_39))
	{
		return 0;
	}
	if (!unk_0x48B8265059381CD0(uParam0->f_26, 0))
	{
		uParam0->f_25 = unk_0xEFC1A93F65285B77(uParam0->f_27, uParam0->f_27.f_3, 2, 1, 0, 1065353216, 0, 1065353216);
		unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), uParam0->f_25, uParam0->f_39, "enter", 1.5f, -1.5f, 13, 16, 1.5f, 0);
		unk_0xD299F9D47AAE6209(uParam0->f_25);
		unk_0xEB79FECD9022AAF0(&(uParam0->f_26), 0);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_324(int iParam0, var uParam1, bool bParam2)
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

void func_325(var uParam0)
{
	int iVar0;
	
	func_307(0);
	func_305("WAR_VEH_TITLE");
	func_304(1, 2, 1, 1, 1);
	func_303(1, 1, 0, 0, 0);
	func_302(47, 88, 109, 255, 1);
	func_300(1, "ShopUI_Title_Exec_VechUpgrade", "ShopUI_Title_Exec_VechUpgrade");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_295(iVar0, func_306(iVar0, 0), 1, 1, 0, 0);
		func_326(func_306(iVar0, 0), 0);
		iVar0++;
	}
	func_287(uParam0->f_23, 1, 1);
	uParam0->f_21 = 1;
	uParam0->f_40 = 3;
	func_290(201, "ITEM_SELECT", -1, 0);
	func_290(202, "ITEM_BACK", -1, 0);
}

void func_326(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17290.f_5090 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 >= 4)
	{
		return;
	}
	if (Global_17290.f_5611 != 1)
	{
		return;
	}
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		return;
	}
	StringCopy(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]), sParam0, 24);
	Global_17290.f_5090++;
	Global_17290.f_2124[Global_17290.f_5609 /*5*/][Global_17290.f_5610] = 1;
	Global_17290.f_5610++;
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		fVar0 = func_293();
		if (Global_17290.f_4945[Global_17290.f_5089] && Global_17290.f_5610 == Global_17290.f_5608)
		{
			func_244(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17290.f_4938[(Global_17290.f_5089 - 1)])
		{
			Global_17290.f_4938[(Global_17290.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17290.f_5610 >= Global_17290.f_5608)
		{
			fVar3 = func_292();
			if (fVar3 > Global_17290.f_5612[Global_17290.f_5088])
			{
				Global_17290.f_5612[Global_17290.f_5088] = fVar3;
			}
		}
	}
}

bool func_327(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_221(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x9C88EB7B70229335(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0xA73AE78D2491E6E1(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0x207D0680D016A0D2(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xA6AD245AF4469018("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xE0B615EF03FE4422("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xA6AD245AF4469018("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xE0B615EF03FE4422("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_328(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_328(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xFF84A94166FBB351(*uParam0))
			{
				*uParam0 = unk_0xB50E108F09B8EC7A(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xFF84A94166FBB351(*uParam0))
					{
						uParam0->f_8 = unk_0x94E3E074F38DF86C();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x94E3E074F38DF86C();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xFF84A94166FBB351(*uParam0))
			{
				uParam0->f_8 = unk_0x94E3E074F38DF86C();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xFF84A94166FBB351(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

int func_329()
{
	if ((((((((func_14(0) || func_335(unk_0xBE369BE1BC57A796())) || func_334(unk_0xBE369BE1BC57A796())) || Global_2433125.f_655.f_5 != -1) || Global_68131 == 1) || func_333(1)) || func_332()) || unk_0x80A7A5165A9C7607()) || func_330(unk_0xBE369BE1BC57A796()) == 168)
	{
		return 0;
	}
	return 1;
}

int func_330(int iParam0)
{
	if (func_331(iParam0, 0))
	{
		return Global_1619421[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

int func_331(int iParam0, int iParam1)
{
	if (Global_1619421[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1619421[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_332()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

bool func_333(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_334(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 7;
}

bool func_335(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 2;
}

bool func_336(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	func_324(func_104(Local_1863.f_2), &(uParam0->f_2), 0);
	Var0 = { uParam0->f_2 };
	Var3 = { func_338(Var0 - unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1)) };
	fVar6 = func_337(unk_0x8C79B6FF2A91C93F(unk_0x17B5CC8A8615737D()), Var3);
	return fVar6 >= 0f;
}

float func_337(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_338(struct<3> Param0)
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

float func_339(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA929B2923D14E2F8(uParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	if (!unk_0xA929B2923D14E2F8(uParam1, 0))
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Var3, iParam2);
}

void func_340(var uParam0)
{
	func_324(func_104(Local_1863.f_2), &(uParam0->f_2), 0);
	func_343(func_104(Local_1863.f_2), &(uParam0->f_27));
	func_342(func_104(Local_1863.f_2), &(uParam0->f_33));
	uParam0->f_39 = "anim@amb@warehouse@toolbox@";
	if (!unk_0x23E9113C762466ED(uParam0->f_1))
	{
		unk_0xE1324F59713746FA(joaat("ex_prop_ex_toolchest_01"));
		if (unk_0x9F746898F7881612(joaat("ex_prop_ex_toolchest_01")))
		{
			Local_1863.f_120.f_1 = unk_0x89241A4EA7EE46D2(joaat("ex_prop_ex_toolchest_01"), uParam0->f_2, 0, 0, 0);
			unk_0x04A5FAE5B1EB8E28(uParam0->f_1, uParam0->f_2.f_3, 2, 1);
			unk_0x924CDE68BA2ED3BA(joaat("ex_prop_ex_toolchest_01"));
		}
	}
	else if (func_341(Local_1863.f_15) && unk_0xBE369BE1BC57A796() == Local_1863.f_15)
	{
		unk_0xA6AD245AF4469018("ShopUI_Title_Exec_VechUpgrade", 0);
		unk_0xA6AD245AF4469018("MPShopSale", 0);
		if (unk_0xE0B615EF03FE4422("ShopUI_Title_Exec_VechUpgrade") && unk_0xE0B615EF03FE4422("MPShopSale"))
		{
			*uParam0 = 1;
		}
	}
}

int func_341(int iParam0)
{
	if (iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_342(int iParam0, var uParam1)
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

void func_343(int iParam0, var uParam1)
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

void func_344()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_376(Local_1863.f_15, Local_1863.f_2);
	if (Local_1863.f_14)
	{
		func_375(iVar1);
		Local_1863.f_14 = 0;
	}
	if (unk_0x415DF132F15085E8())
	{
		if (Local_1863.f_15 != unk_0xBE369BE1BC57A796())
		{
			func_375(iVar1);
		}
		func_367();
		func_366();
	}
	if (iVar1 > Local_1863.f_6)
	{
		if (unk_0x415DF132F15085E8() && Local_1863.f_15 == unk_0xBE369BE1BC57A796())
		{
			if (!func_363(func_364(func_365(Local_1863.f_10, (iVar1 - 1), -1, -1))))
			{
				func_358(iVar1);
			}
		}
		if (unk_0x415DF132F15085E8() && Local_1863.f_15 != unk_0xBE369BE1BC57A796())
		{
			Local_1863.f_14 = 1;
			func_356(Local_1863.f_15, Local_1863.f_2);
		}
		else
		{
			if (unk_0x415DF132F15085E8())
			{
				iVar0 = Local_1863.f_6;
				while (iVar0 <= (iVar1 - 1))
				{
					if (iVar0 < Local_1863.f_9)
					{
						if (Local_944.f_1[iVar0] == 0)
						{
							Local_944.f_1[iVar0] = func_364(func_365(Local_1863.f_10, iVar0, -1, -1));
						}
					}
					iVar0++;
				}
			}
			iVar0 = Local_1863.f_6;
			while (iVar0 <= (iVar1 - 1))
			{
				if (iVar0 < Local_1863.f_9)
				{
					if (!func_355(iVar0))
					{
						if (!func_353(iVar0))
						{
							func_348(iVar0);
						}
					}
				}
				iVar0++;
			}
		}
		Local_1863.f_6 = iVar1;
	}
	else if (iVar1 < Local_1863.f_6)
	{
		iVar0 = iVar1;
		while (iVar0 <= (Local_1863.f_6 - 1))
		{
			if (Local_1863.f_273[iVar0])
			{
				Local_1863.f_273[iVar0] = 0;
			}
			iVar0++;
		}
		if (unk_0x415DF132F15085E8())
		{
			if (Local_1863.f_15 == unk_0xBE369BE1BC57A796())
			{
				func_358(iVar1);
			}
			else
			{
				Local_1863.f_14 = 1;
				func_356(Local_1863.f_15, Local_1863.f_2);
			}
		}
		Local_1863.f_8 = Local_1863.f_6;
		Local_1863.f_6 = iVar1;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar0 < Local_1863.f_9)
		{
			if (Local_944.f_1[iVar0] != 0 || Local_944.f_1[iVar0] != func_364(Global_1764433[iVar0]))
			{
				if (!func_355(iVar0))
				{
					if (!func_353(iVar0))
					{
						if (unk_0x152BAD1BB44F2768(Local_944.f_1[iVar0]))
						{
							func_348(iVar0);
						}
					}
				}
				if (!func_353(iVar0))
				{
					if (!Local_1863.f_273[iVar0])
					{
						func_345(iVar0, 1);
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1863.f_8 - 1))
	{
		if (iVar0 < Local_1863.f_9)
		{
			if (Local_944.f_1[iVar0] != 0)
			{
				if (iVar0 > (iVar1 - 1) || Local_944.f_1[iVar0] != func_364(Global_1764433[iVar0]))
				{
					func_345(iVar0, 0);
				}
			}
			else if (Local_1863.f_8 > iVar1)
			{
				Local_1863.f_8 = (Local_1863.f_8 - 1);
			}
		}
		iVar0++;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar1 + 2)
	{
		if (iVar0 < Local_1863.f_9)
		{
			if (Local_944.f_1[iVar0] != 0)
			{
				if (!func_355(iVar0))
				{
					if (!func_353(iVar0))
					{
						if (unk_0x152BAD1BB44F2768(Local_944.f_1[iVar0]))
						{
							func_348(iVar0);
						}
					}
				}
				if (!func_353(iVar0))
				{
					if (!Local_1863.f_273[iVar0])
					{
						func_345(iVar0, 1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_345(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!Local_1863.f_161[iParam0])
	{
		Local_1863.f_385[iParam0] = unk_0xD9D7B8709F0A4696(unk_0xCB150A8B81012128(), 500);
		Local_1863.f_161[iParam0] = 1;
	}
	if (unk_0x94F6F6877B5A3EDF(unk_0xCB150A8B81012128(), Local_1863.f_385[iParam0]))
	{
		uVar0 = func_347(iParam0);
		if (unk_0x23E9113C762466ED(uVar0))
		{
			iVar1 = unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), Local_1863.f_385[iParam0]));
			iVar2 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) / 500f) * 255f));
			if (bParam1)
			{
				iVar2 = (255 - unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) / 500f) * 255f)));
			}
			unk_0x40687975EC655FA3(iVar0, iVar2, 0);
		}
	}
	else
	{
		uVar3 = func_347(iParam0);
		if (unk_0x23E9113C762466ED(uVar3))
		{
			if (bParam1)
			{
				unk_0x40687975EC655FA3(iVar3, 255, 0);
				if (unk_0x152BAD1BB44F2768(func_364(func_365(Local_1863.f_10, iParam0, -1, -1))))
				{
					unk_0x924CDE68BA2ED3BA(func_364(func_365(Local_1863.f_10, iParam0, -1, -1)));
				}
				Local_1863.f_273[iParam0] = 1;
			}
			else
			{
				unk_0x40687975EC655FA3(iVar3, 0, 0);
				if (unk_0xC38F0FBE1914783C(iVar3))
				{
					func_346(iParam0);
				}
				if (unk_0x415DF132F15085E8())
				{
					Local_944.f_1[iParam0] = 0;
				}
			}
		}
		Local_1863.f_161[iParam0] = 0;
	}
}

void func_346(int iParam0)
{
	var uVar0;
	
	uVar0 = func_347(iParam0);
	if (unk_0x23E9113C762466ED(uVar0) && unk_0xC38F0FBE1914783C(iVar0))
	{
		unk_0x1AAFEA627BB9C402(&iVar0);
		Local_1863.f_497[iParam0] = 0;
	}
}

var func_347(int iParam0)
{
	return Local_1863.f_497[iParam0];
}

void func_348(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	var uVar12;
	
	Var0 = { func_352(func_104(Local_1863.f_2)) };
	Var3 = { func_351(Local_1863.f_2, func_104(Local_1863.f_2), iParam0) };
	Var6 = { unk_0x3CE07141081BBC2B(Var0, 0f, Var3) };
	Var9 = { func_350(Local_1863.f_2, func_104(Local_1863.f_2), iParam0) };
	if (Local_944.f_1[iParam0] != 0 && unk_0x152BAD1BB44F2768(Local_944.f_1[iParam0]))
	{
		unk_0xE1324F59713746FA(Local_944.f_1[iParam0]);
		if (unk_0x9F746898F7881612(Local_944.f_1[iParam0]))
		{
			uVar12 = unk_0x521A82CF998EDB21(Local_944.f_1[iParam0], Var6, 0, 0, 0);
			unk_0x04A5FAE5B1EB8E28(uVar12, Var9, 2, 1);
			unk_0x98F0FA127445E343(uVar12, true);
			Local_1863.f_497[iParam0] = uVar12;
			Global_1764433[iParam0] = func_349(Local_944.f_1[iParam0]);
		}
	}
}

int func_349(int iParam0)
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

Vector3 func_350(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (func_105(iParam0))
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

Vector3 func_351(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (func_105(iParam0))
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

Vector3 func_352(int iParam0)
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

int func_353(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	
	Var0 = { func_352(func_104(Local_1863.f_2)) };
	Var3 = { func_351(Local_1863.f_2, func_104(Local_1863.f_2), iParam0) };
	Var6 = { unk_0x3CE07141081BBC2B(Var0, 0f, Var3) };
	iVar9 = 0;
	while (iVar9 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar9)))
		{
			iVar10 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar9));
			if (func_3(iVar10, 1, 1))
			{
				if (func_354(func_172(iVar10), Var6, 1.5f, 0))
				{
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

int func_354(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE851F22ED3518011((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_355(int iParam0)
{
	return unk_0x23E9113C762466ED(Local_1863.f_497[iParam0]);
}

void func_356(int iParam0, var uParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 553;
	Var0.f_1 = unk_0xBE369BE1BC57A796();
	Var0.f_2 = uParam1;
	unk_0x504D0D40319365B7(1, &Var0, 3, func_357(iParam0));
}

var func_357(int iParam0)
{
	var uVar0;
	
	unk_0xEB79FECD9022AAF0(&uVar0, iParam0);
	return uVar0;
}

void func_358(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (func_105(Local_1863.f_2))
	{
		if (func_359(Local_1863.f_2) > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iParam0 - 1))
			{
				if (iVar0 < Local_1863.f_9)
				{
					if (Local_944.f_1[iVar0] != func_364(func_365(Local_1863.f_10, iVar0, -1, -1)))
					{
						if (func_363(func_364(func_365(Local_1863.f_10, iVar0, -1, -1))))
						{
							uVar1 = func_347(iVar0);
							if (unk_0x23E9113C762466ED(uVar1))
							{
								func_346(iVar0);
							}
							Local_944.f_1[iVar0] = func_364(func_365(Local_1863.f_10, iVar0, -1, -1));
							Local_944.f_1[(iParam0 - 1)] = func_364(func_365(Local_1863.f_10, (iParam0 - 1), -1, -1));
							if (!func_355(iVar0))
							{
								if (!func_353(iVar0))
								{
									func_348(iVar0);
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

int func_359(int iParam0)
{
	int iVar0;
	
	if (func_105(iParam0))
	{
		iVar0 = func_361(func_362(iParam0));
		return func_360(iVar0, -1, 0);
	}
	return 0;
}

int func_360(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503826[iParam0 /*3*/][func_99(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_361(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3628;
	}
	else if (iParam0 == 1)
	{
		return 3629;
	}
	else if (iParam0 == 2)
	{
		return 3630;
	}
	else if (iParam0 == 3)
	{
		return 3631;
	}
	else if (iParam0 == 4)
	{
		return 3632;
	}
	return 3628;
}

int func_362(int iParam0)
{
	int iVar0;
	
	if (func_105(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_80[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_363(int iParam0)
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

int func_364(int iParam0)
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

int func_365(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_80();
	if (iParam3 > -1)
	{
		iVar1 = iParam3;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar18 = unk_0x765F5B806B517045(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (0 != iVar18)
	{
		if (!unk_0xBF0855EEDDBBCBB7(iVar18, &iVar0, iVar19, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_366()
{
	if ((!Global_1764545[0] && !Global_1764545[1]) && !Global_1764545[2])
	{
		if (Local_1863.f_7 != Local_1863.f_6)
		{
			Local_1863.f_7 = Local_1863.f_6;
		}
	}
}

void func_367()
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
		if (Global_1764545[iVar0])
		{
			iVar3 = Local_1863.f_7;
			iVar4 = (iVar1 + iVar3);
			if (Local_1863.f_15 == unk_0xBE369BE1BC57A796())
			{
				if (func_365(Local_1863.f_10, iVar4, -1, -1) == 0)
				{
					iVar2 = 1;
				}
			}
			else if (Global_1764433[iVar4] == 0)
			{
				iVar2 = 1;
			}
			if (Local_944.f_1[iVar4] == 0 && iVar2)
			{
				Var5 = { func_374(Local_1863.f_15) };
				iVar9 = func_371(Local_1863.f_2, iVar4, Var5.f_2);
				iVar10 = 0;
				if (iVar4 > 0 && !func_370(func_104(Local_1863.f_2), iVar4))
				{
					while (iVar9 == Local_944.f_1[(iVar4 - 1)] && iVar10 < 10)
					{
						iVar9 = func_371(Local_1863.f_2, iVar4, Var5.f_2);
						iVar10++;
					}
				}
				if (iVar9 != 0)
				{
					if (Local_1863.f_15 == unk_0xBE369BE1BC57A796())
					{
						func_369(Local_1863.f_10, iVar4, func_349(iVar9), 1, -1);
					}
					else
					{
						func_368(Local_1863.f_15, Local_1863.f_10, iVar4, func_349(iVar9));
					}
				}
				if (Local_944.f_1[iVar4] == 0)
				{
					Local_944.f_1[iVar4] = iVar9;
				}
				if (!func_355(iVar4))
				{
					if (!func_353(iVar4))
					{
						func_348(iVar4);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_368(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	
	Var0.f_0 = 557;
	Var0.f_1 = unk_0xBE369BE1BC57A796();
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam1;
	unk_0x504D0D40319365B7(1, &Var0, 5, func_357(iParam0));
}

var func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	iVar1 = func_80();
	if (iParam4 > -1)
	{
		iVar1 = iParam4;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar18 = unk_0x765F5B806B517045(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (iParam2 < 0)
	{
		iParam2 = 255;
	}
	if (0 != iVar18)
	{
		uVar0 = unk_0x3141DFACC370CE7D(iVar18, iParam2, iVar19, 8, iParam3);
	}
	return uVar0;
}

int func_370(int iParam0, int iParam1)
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

int func_371(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = unk_0x0E29C61F26D96FDB(0, 2);
	if (func_370(func_104(iParam0), iParam1))
	{
		iVar0 = unk_0x0E29C61F26D96FDB(0, 4);
	}
	bVar1 = false;
	if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
	{
		bVar1 = true;
	}
	uVar2 = func_373(func_104(iParam0), iParam1);
	return func_372(uParam2, uVar2, bVar1);
}

int func_372(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x0E29C61F26D96FDB(0, 2);
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
			iVar0 = unk_0x0E29C61F26D96FDB(0, 3);
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

int func_373(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return unk_0x0E29C61F26D96FDB(0, 2);
		
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			else
			{
				return unk_0x0E29C61F26D96FDB(0, 2);
			}
			break;
	}
	return -1;
}

struct<4> func_374(int iParam0)
{
	return Global_1619421[iParam0 /*390*/].f_11.f_173;
}

int func_375(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	while (iVar1 <= iParam0 + 2)
	{
		if (iVar1 < Local_1863.f_9)
		{
			if (Local_944.f_1[iVar1] != func_364(Global_1764433[iVar1]))
			{
				uVar2 = func_347(iVar1);
				if (unk_0x23E9113C762466ED(uVar2))
				{
					func_346(iVar1);
				}
				Local_944.f_1[iVar1] = func_364(Global_1764433[iVar1]);
				if (!func_353(iVar1))
				{
					func_348(iVar1);
				}
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_376(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_105(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam1 == Global_1591201[iParam0 /*602*/].f_258.f_80[iVar0 /*3*/])
			{
				return Global_1591201[iParam0 /*602*/].f_258.f_80[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_377(var uParam0)
{
	bool bVar0;
	
	bVar0 = !unk_0x24A0C7A82D1B9734("AM_MP_SMPL_INTERIOR_INT", uParam0, 1, 0);
	return bVar0;
}

void func_378(int iParam0)
{
	Global_1764677.f_5 = iParam0;
}

void func_379(int iParam0)
{
	Global_1764677.f_3 = iParam0;
}

int func_380()
{
	bool bVar0;
	var uVar1;
	
	func_387(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315210 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			return 1;
		}
	}
	if (func_386())
	{
		return 1;
	}
	if (Global_2454747)
	{
		return 1;
	}
	if (func_385())
	{
		return 1;
	}
	if (func_384(157))
	{
		if (!func_383())
		{
			return 1;
		}
	}
	if (func_384(155))
	{
		return 1;
	}
	if (!unk_0x6C119F3638AC7ABE())
	{
		return 1;
	}
	if (func_381() != 0)
	{
		if (unk_0x82F1A060D8F4583B(func_381()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_381()
{
	switch (func_382())
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

int func_382()
{
	return Global_25190;
}

bool func_383()
{
	return Global_2443134.f_577;
}

int func_384(int iParam0)
{
	if (unk_0x08E5392A79D45DEE(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_385()
{
	return Global_2452525;
}

bool func_386()
{
	return Global_2443134.f_572;
}

void func_387(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x91015F07066D5841(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 381:
					func_388(iVar0);
					break;
				
				case 2:
					unk_0x91015F07066D5841(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_388(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 3))
	{
		if (func_3(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xDF7CE83326F434E9(Var0.f_1);
			if (unk_0x23E9113C762466ED(uVar3))
			{
				if (unk_0xFD0FE723227D5AB6(iVar3, 0))
				{
					uVar4 = unk_0x60604E51E30D25B8(iVar3, 0);
					if (unk_0x4AFDA497DA0BF602(uVar4, Var0.f_2) && unk_0x9A0AB9C5586EA71E())
					{
						if (func_389(uVar4, &bVar5))
						{
							unk_0x7DCEC4E83315DC12(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x921CF98C637B0043(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_389(int iParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xC26429B504BA534D(iParam0))
		{
			if (unk_0xFB2400809D8DC8C7(iParam0))
			{
				if (!unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(iParam0)))
				{
					unk_0xF0F77C99098F999B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x45CA7F42CA715849(iParam0, 0))
		{
			if (unk_0xC38F0FBE1914783C(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_390()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_391()
{
	func_399();
	func_398();
	func_397(&(Local_1863.f_615));
	func_216(&(Local_1863.f_120), 1);
	func_5(&(Local_1254[unk_0xBE369BE1BC57A796() /*19*/].f_1), &Local_241);
	if (unk_0x9A0AB9C5586EA71E())
	{
		if (unk_0x415DF132F15085E8())
		{
			func_393(&(Local_944.f_113), &Global_3932160);
		}
	}
	func_392();
}

void func_392()
{
	unk_0x921053BAF754303D();
}

void func_393(var uParam0, var uParam1)
{
	func_192(uParam0);
	func_394(uParam0, uParam1);
	func_59(uParam0, 0, 0);
}

int func_394(var uParam0, var uParam1)
{
	if (func_58(uParam1->f_31) && !uParam0->f_49)
	{
		if (unk_0x841F312D66362BF7(uParam0->f_5))
		{
			if (unk_0x093776FE2E6B4BAC(uParam0->f_5))
			{
				func_396(&(uParam0->f_5));
				unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
			}
			else
			{
				func_395(uParam0->f_5);
			}
		}
		if (unk_0x841F312D66362BF7(uParam0->f_6))
		{
			if (unk_0x841F312D66362BF7(uParam0->f_6))
			{
				if (unk_0x093776FE2E6B4BAC(uParam0->f_6))
				{
					func_396(&(uParam0->f_6));
					unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
				}
				else
				{
					func_395(uParam0->f_6);
				}
			}
		}
	}
	else if (uParam0->f_49)
	{
		if (unk_0x841F312D66362BF7(uParam0->f_24))
		{
			if (unk_0x093776FE2E6B4BAC(uParam0->f_24))
			{
				func_396(&(uParam0->f_24));
				unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
			}
			else
			{
				func_395(uParam0->f_24);
			}
		}
		if (unk_0x841F312D66362BF7(uParam0->f_25))
		{
			if (unk_0x093776FE2E6B4BAC(uParam0->f_25))
			{
				func_396(&(uParam0->f_25));
				unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
			}
			else
			{
				func_395(uParam0->f_25);
			}
		}
		if (unk_0x841F312D66362BF7(uParam0->f_26))
		{
			if (unk_0x093776FE2E6B4BAC(uParam0->f_26))
			{
				func_396(&(uParam0->f_26));
				unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
			}
			else
			{
				func_395(uParam0->f_26);
			}
		}
		if (unk_0x841F312D66362BF7(uParam0->f_27))
		{
			if (unk_0x093776FE2E6B4BAC(uParam0->f_27))
			{
				func_396(&(uParam0->f_27));
				unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
			}
			else
			{
				func_395(uParam0->f_27);
			}
		}
	}
	else if (func_57(uParam1->f_31, -1))
	{
		if (unk_0x841F312D66362BF7(uParam0->f_22))
		{
			if (unk_0x093776FE2E6B4BAC(uParam0->f_22))
			{
				func_396(&(uParam0->f_22));
				unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
			}
			else
			{
				func_395(uParam0->f_22);
			}
		}
		if (unk_0x841F312D66362BF7(uParam0->f_21))
		{
			if (unk_0x841F312D66362BF7(uParam0->f_21))
			{
				if (unk_0x093776FE2E6B4BAC(uParam0->f_21))
				{
					func_396(&(uParam0->f_21));
					unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
				}
				else
				{
					func_395(uParam0->f_21);
				}
			}
		}
		if (unk_0x841F312D66362BF7(uParam0->f_23))
		{
			if (unk_0x841F312D66362BF7(uParam0->f_23))
			{
				if (unk_0x093776FE2E6B4BAC(uParam0->f_23))
				{
					func_396(&(uParam0->f_23));
					unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
				}
				else
				{
					func_395(uParam0->f_23);
				}
			}
		}
	}
	else if (func_56(uParam1->f_31))
	{
		if (unk_0x841F312D66362BF7(uParam0->f_22))
		{
			if (unk_0x093776FE2E6B4BAC(uParam0->f_22))
			{
				func_396(&(uParam0->f_22));
				unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
			}
			else
			{
				func_395(uParam0->f_22);
			}
		}
		if (unk_0x841F312D66362BF7(uParam0->f_21))
		{
			if (unk_0x841F312D66362BF7(uParam0->f_21))
			{
				if (unk_0x093776FE2E6B4BAC(uParam0->f_21))
				{
					func_396(&(uParam0->f_21));
					unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
				}
				else
				{
					func_395(uParam0->f_21);
				}
			}
		}
		if (unk_0x841F312D66362BF7(uParam0->f_23))
		{
			if (unk_0x841F312D66362BF7(uParam0->f_23))
			{
				if (unk_0x093776FE2E6B4BAC(uParam0->f_23))
				{
					func_396(&(uParam0->f_23));
					unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
				}
				else
				{
					func_395(uParam0->f_23);
				}
			}
		}
	}
	else if (func_50(uParam1->f_31, 0, 0))
	{
		if (unk_0x841F312D66362BF7(uParam0->f_22))
		{
			if (unk_0x093776FE2E6B4BAC(uParam0->f_22))
			{
				func_396(&(uParam0->f_22));
				unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
			}
			else
			{
				func_395(uParam0->f_22);
			}
		}
		if (unk_0x841F312D66362BF7(uParam0->f_21))
		{
			if (unk_0x093776FE2E6B4BAC(uParam0->f_21))
			{
				func_396(&(uParam0->f_21));
				unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
			}
			else
			{
				func_395(uParam0->f_21);
			}
		}
	}
	else if (((func_55(uParam1->f_31) || func_54(unk_0xBE369BE1BC57A796())) || func_49(unk_0xBE369BE1BC57A796())) || func_46(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x841F312D66362BF7(uParam0->f_22))
		{
			if (unk_0x093776FE2E6B4BAC(uParam0->f_22))
			{
				func_396(&(uParam0->f_22));
				unk_0x79AA4F6EE2078BCD((unk_0xC124B46B968EA962(false) - 1));
			}
			else
			{
				func_395(uParam0->f_22);
			}
		}
	}
	if (func_58(uParam1->f_31) && !uParam0->f_49)
	{
		if (!unk_0x841F312D66362BF7(uParam0->f_5) && !unk_0x841F312D66362BF7(uParam0->f_6))
		{
			uParam0->f_4 = 0;
			return 1;
		}
	}
	else if (uParam0->f_49)
	{
		if (((!unk_0x841F312D66362BF7(uParam0->f_27) && !unk_0x841F312D66362BF7(uParam0->f_26)) && !unk_0x841F312D66362BF7(uParam0->f_25)) && !unk_0x841F312D66362BF7(uParam0->f_24))
		{
			uParam0->f_4 = 0;
			return 1;
		}
	}
	else if (func_57(uParam1->f_31, -1))
	{
		if ((!unk_0x841F312D66362BF7(uParam0->f_23) && !unk_0x841F312D66362BF7(uParam0->f_21)) && !unk_0x841F312D66362BF7(uParam0->f_22))
		{
			uParam0->f_4 = 0;
			return 1;
		}
	}
	else if (func_56(uParam1->f_31))
	{
		if ((!unk_0x841F312D66362BF7(uParam0->f_23) && !unk_0x841F312D66362BF7(uParam0->f_21)) && !unk_0x841F312D66362BF7(uParam0->f_22))
		{
			uParam0->f_4 = 0;
			return 1;
		}
	}
	else if (((func_55(uParam1->f_31) || func_54(unk_0xBE369BE1BC57A796())) || func_49(unk_0xBE369BE1BC57A796())) || func_46(unk_0xBE369BE1BC57A796()))
	{
		if (!unk_0x841F312D66362BF7(uParam0->f_22))
		{
			uParam0->f_4 = 0;
			return 1;
		}
	}
	return 0;
}

int func_395(var uParam0)
{
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		unk_0x4EDACF77CDD9CFEB(uParam0);
		return unk_0x093776FE2E6B4BAC(uParam0);
	}
	return 0;
}

void func_396(var uParam0)
{
	var uVar0;
	
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		if (!unk_0x093776FE2E6B4BAC(*uParam0))
		{
		}
	}
	if (unk_0x841F312D66362BF7(*uParam0))
	{
		uVar0 = unk_0x03981D6F4893D7D0(*uParam0);
		unk_0x31D01D6DEF4B35AD(&uVar0);
	}
}

void func_397(var uParam0)
{
	if (unk_0x23E9113C762466ED(uParam0->f_31))
	{
		unk_0x1AAFEA627BB9C402(&(uParam0->f_31));
	}
	if (unk_0x23E9113C762466ED(uParam0->f_39))
	{
		unk_0x1AAFEA627BB9C402(&(uParam0->f_39));
	}
}

void func_398()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 110)
	{
		Global_1764433[iVar0] = -1;
		iVar0++;
	}
}

void func_399()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= (Local_1863.f_9 - 1))
	{
		uVar1 = func_347(iVar0);
		if (unk_0x23E9113C762466ED(uVar1) && unk_0xC38F0FBE1914783C(iVar1))
		{
			unk_0x1AAFEA627BB9C402(&iVar1);
			Local_1863.f_497[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_400(var uParam0)
{
	Local_1863.f_3 = *uParam0;
	Local_1863.f_4 = uParam0->f_2;
	Local_1863.f_5 = uParam0->f_1;
	Local_1863.f_2 = func_744(*uParam0);
	Local_1863.f_15 = func_743(Local_1863.f_2);
	Local_1863.f_10 = func_742(Local_1863.f_2, Local_1863.f_15);
	Global_3932160.f_31 = -1;
	Local_241.f_699 = func_741(Local_1863.f_2);
	Local_241.f_698 = Local_1863.f_15;
	Local_1254[unk_0xBE369BE1BC57A796() /*19*/].f_1.f_15 = func_741(Local_1863.f_2);
	if (Local_1863.f_15 == func_48())
	{
		func_379(1);
		func_378(1);
		func_391();
	}
	unk_0x181A13B993F735EB(32, 0, Local_1863.f_4);
	func_740(0, -1, 0);
	unk_0xB5EAF11213E48C1C(&Local_944, 310);
	unk_0x0C3BA36587E6FBEE(&Local_1254, 609);
	if (!func_739())
	{
		func_391();
	}
	if (unk_0x63C468D583002D23())
	{
	}
	else
	{
		func_391();
	}
	func_401();
}

void func_401()
{
	func_409(Local_1863.f_3, &(Local_1863.f_16));
	func_404();
	func_402();
	func_378(1);
	if (func_127())
	{
		func_132(1, 1);
	}
}

void func_402()
{
	Local_1863.f_615.f_3 = "anim@apt_trans@garage";
	Local_1863.f_615.f_4 = "gar_open_1_left";
	Local_1863.f_615.f_20 = 0f;
	Local_1863.f_615.f_21 = 0.45f;
	Local_1863.f_615.f_58 = "GTAO_EXEC_WH_GARAGE_DOOR_SOUNDS";
	Local_1863.f_615.f_57 = "Door_Open";
	switch (func_104(Local_1863.f_2))
	{
		case 0:
			Local_1863.f_609 = { 1104.275f, -3101.614f, -40f };
			Local_1863.f_612 = { 1105.483f, -3097.071f, -36.9999f };
			Local_1863.f_615.f_14 = { 1105.095f, -3099.446f, -40f };
			Local_1863.f_615.f_17 = { 0f, 0f, 26.64f };
			break;
		
		case 1:
			Local_1863.f_609 = { 1071.821f, -3105.487f, -40f };
			Local_1863.f_612 = { 1073.979f, -3099.819f, -36.9999f };
			Local_1863.f_615.f_14 = { 1073.092f, -3102.483f, -40f };
			Local_1863.f_615.f_17 = { 0f, 0f, 26.64f };
			break;
		
		case 2:
			Local_1863.f_609 = { 1026.509f, -3104.374f, -40f };
			Local_1863.f_612 = { 1028.926f, -3098.688f, -36.9999f };
			Local_1863.f_615.f_14 = { 1027.822f, -3101.432f, -40f };
			Local_1863.f_615.f_17 = { 0f, 0f, 26.64f };
			break;
	}
	func_403(&(Local_1863.f_615));
}

void func_403(var uParam0)
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

void func_404()
{
	int iVar0;
	
	Local_1863.f_9 = func_408(func_104(Local_1863.f_2));
	if (func_341(Local_1863.f_15))
	{
		Local_1863.f_6 = func_376(Local_1863.f_15, Local_1863.f_2);
		Local_1863.f_8 = Local_1863.f_6;
		Local_1863.f_7 = Local_1863.f_6;
		if (unk_0x415DF132F15085E8())
		{
			if (Local_1863.f_15 != unk_0xBE369BE1BC57A796())
			{
				Local_1863.f_14 = 1;
				func_398();
				func_356(Local_1863.f_15, Local_1863.f_2);
				func_407();
			}
			else
			{
				func_405();
			}
			func_367();
		}
		iVar0 = 0;
		while (iVar0 <= (Local_1863.f_6 - 1))
		{
			if (iVar0 < Local_1863.f_9)
			{
				if (!func_355(iVar0))
				{
					if (!func_353(iVar0))
					{
						if (unk_0x152BAD1BB44F2768(Local_944.f_1[iVar0]))
						{
							func_348(iVar0);
							Local_1863.f_273[iVar0] = 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_405()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_742(Local_1863.f_2, Local_1863.f_15);
	iVar1 = 0;
	while (iVar1 <= func_376(Local_1863.f_15, Local_1863.f_2) + 2)
	{
		if (iVar1 < func_406(Local_1863.f_2))
		{
			Local_944.f_1[iVar1] = func_364(func_365(iVar0, iVar1, -1, -1));
			if (iVar1 >= func_376(Local_1863.f_15, Local_1863.f_2))
			{
			}
		}
		iVar1++;
	}
}

int func_406(int iParam0)
{
	int iVar0;
	
	if (func_105(iParam0))
	{
		iVar0 = func_104(iParam0);
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

void func_407()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= func_376(Local_1863.f_15, Local_1863.f_2) + 2)
	{
		if (iVar0 < func_406(Local_1863.f_2))
		{
			Local_944.f_1[iVar0] = func_364(Global_1764433[iVar0]);
			if (iVar0 >= func_376(Local_1863.f_15, Local_1863.f_2))
			{
			}
		}
		iVar0++;
	}
}

int func_408(int iParam0)
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

void func_409(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	func_410(iParam0, &Var0, 2);
	func_410(iParam0, &Var0, 4);
	func_410(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Call_Loc(Var0.f_2);
	Stack.Push(iParam0);
	Stack.Push(&(uParam1->f_97));
	Call_Loc(Var0.f_4);
	Stack.Push(iParam0);
	Stack.Push(&(uParam1->f_5));
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_4));
	Call_Loc(Var0.f_1);
}

void func_410(int iParam0, var uParam1, int iParam2)
{
	switch (func_47(iParam0))
	{
		case 0:
			func_689(uParam1, iParam2);
			break;
		
		case 1:
			func_570(uParam1, iParam2);
			break;
		
		case 2:
			func_455(uParam1, iParam2);
			break;
		
		case 3:
			func_411(uParam1, iParam2);
			break;
	}
}

void func_411(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 119587;
			break;
		
		case 1:
			uParam0->f_1 = 118670;
			break;
		
		case 2:
			uParam0->f_2 = 118657;
			break;
		
		case 3:
			uParam0->f_3 = 118399;
			break;
		
		case 4:
			uParam0->f_4 = 118391;
			break;
		
		case 5:
			uParam0->f_5 = 118022;
			break;
		
		case 6:
			uParam0->f_6 = 118014;
			break;
		
		case 7:
			uParam0->f_7 = 118005;
			break;
		
		case 8:
			uParam0->f_8 = 117996;
			break;
		
		case 9:
			uParam0->f_9 = 117985;
			break;
		
		case 10:
			uParam0->f_10 = 117976;
			break;
		
		case 11:
			uParam0->f_11 = 117967;
			break;
		
		case 12:
			uParam0->f_12 = 117959;
			break;
		
		case 13:
			uParam0->f_13 = 117951;
			break;
		
		case 14:
			uParam0->f_14 = 117583;
			break;
		
		case 15:
			uParam0->f_15 = 117572;
			break;
		
		case 16:
			uParam0->f_16 = 117564;
			break;
		
		case 17:
			uParam0->f_17 = 117555;
			break;
		
		case 18:
			uParam0->f_18 = 107694;
			break;
		
		case 19:
			uParam0->f_19 = 107685;
			break;
		
		case 20:
			uParam0->f_20 = 107676;
			break;
		
		case 21:
			uParam0->f_21 = 107668;
			break;
		
		case 22:
			uParam0->f_22 = 107659;
			break;
		
		case 23:
			uParam0->f_23 = 107650;
			break;
		
		case 24:
			uParam0->f_24 = 107641;
			break;
		
		case 25:
			uParam0->f_25 = 107632;
			break;
		
		case 26:
			uParam0->f_26 = 107621;
			break;
		
		case 27:
			uParam0->f_27 = 107613;
			break;
		
		case 28:
			uParam0->f_28 = 107604;
			break;
		
		case 29:
			uParam0->f_29 = 107593;
			break;
		
		case 30:
			uParam0->f_30 = 107585;
			break;
		
		case 31:
			uParam0->f_31 = 107577;
			break;
		
		case 32:
			uParam0->f_32 = 107569;
			break;
		
		case 33:
			uParam0->f_33 = 107561;
			break;
		
		case 34:
			uParam0->f_34 = 107552;
			break;
		
		case 35:
			uParam0->f_35 = 107543;
			break;
		
		case 36:
			uParam0->f_36 = 107531;
			break;
		
		case 37:
			uParam0->f_37 = 107522;
			break;
		
		case 38:
			uParam0->f_38 = 107510;
			break;
	}
}

void func_412(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = 0;
}

int func_413(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	return 0;
}

void func_414(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = 0;
}

int func_415(var uParam0)
{
	return 0;
}

int func_416(var uParam0)
{
	return 0;
}

void func_417(var uParam0, var uParam1)
{
}

void func_418(var uParam0, var uParam1)
{
}

void func_419(var uParam0, var uParam1)
{
}

void func_420(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

Vector3 func_421(var uParam0)
{
	return 0f, 0f, 0f;
}

int func_422(var uParam0)
{
	return 0;
}

void func_423(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

Vector3 func_424(var uParam0)
{
	return 0f, 0f, 0f;
}

int func_425(var uParam0)
{
	return -1;
}

int func_426(var uParam0)
{
	return 0;
}

int func_427(var uParam0)
{
	return 0;
}

int func_428(var uParam0)
{
	return 0;
}

void func_429(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_430(var uParam0)
{
	return -1;
}

int func_431(var uParam0)
{
	return -1;
}

int func_432(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 42:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 429.3781f, -980.3966f, 29.7103f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 429.3781f, -978.6966f, 29.7103f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 429.3781f, -982.0966f, 29.7103f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 429.3781f, -976.9966f, 29.7103f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 429.3781f, -983.7966f, 29.7105f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 429.3781f, -975.2966f, 29.7103f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 429.3781f, -985.4966f, 29.7115f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 429.3781f, -973.5966f, 29.7102f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 427.6781f, -980.3966f, 29.7101f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 427.6781f, -978.6966f, 29.7101f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 427.6781f, -982.0966f, 29.7101f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 427.6781f, -976.9966f, 29.71f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 427.6781f, -983.7966f, 29.7103f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 427.6781f, -975.2966f, 29.71f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 427.6781f, -985.4966f, 29.7112f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 427.6781f, -973.5966f, 29.7099f };
					*uParam3 = 90f;
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 983.8605f, -106.4136f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 982.5178f, -107.6124f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 981.175f, -108.8113f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 979.8323f, -110.0101f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 978.4896f, -111.2089f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 977.1469f, -112.4077f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 975.8042f, -113.6065f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 973.5518f, -117.3196f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 971.1783f, -113.1865f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 970.9462f, -116.8811f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 968.7961f, -118.7222f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 964.718f, -122.2837f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 985.0593f, -107.7563f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 983.7166f, -108.9551f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 982.3738f, -110.154f, 73.3307f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 981.0311f, -111.3528f, 73.353f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 979.6884f, -112.5516f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 978.3457f, -113.7504f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 977.003f, -114.9492f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 970.8889f, -119.5405f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 972.5797f, -114.7977f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 968.2349f, -116.0944f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 964.1705f, -119.8535f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 966.7084f, -120.6235f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 987.6689f, -107.8862f, 73.3005f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 984.1547f, -110.9573f, 73.2074f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 983.6035f, -112.7345f, 73.0674f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 982.2299f, -112.6955f, 73.0982f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 980.8872f, -113.8943f, 73.1507f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 979.5445f, -115.0931f, 73.186f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 978.2018f, -116.2919f, 73.2293f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 986.3215f, -109.7017f, 73.2253f };
					*uParam3 = 221.76f;
					return 1;
					break;
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1215.664f, -325.1803f, 36.6849f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1213.925f, -323.9582f, 36.7309f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1217.903f, -326.2084f, 36.6413f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1211.726f, -322.8159f, 36.7714f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1220.386f, -327.5189f, 36.5898f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1216.292f, -323.328f, 36.6777f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1213.984f, -321.7677f, 36.7277f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1219.155f, -324.5487f, 36.6111f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1211.721f, -320.7764f, 36.7536f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1221.718f, -325.9073f, 36.5833f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1216.695f, -321.2399f, 36.6911f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -1214.371f, -319.8024f, 36.7339f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1218.999f, -321.9746f, 36.6385f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1211.881f, -318.9889f, 36.76f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1220.796f, -322.8924f, 36.5952f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1222.944f, -328.6745f, 36.5402f };
					*uParam3 = 27.72f;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 151.4384f, -1035.981f, 28.3392f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 153.2689f, -1036.787f, 28.3161f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 149.6079f, -1035.176f, 28.3414f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 155.2534f, -1037.082f, 28.2587f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 147.5222f, -1034.461f, 28.3437f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 156.8904f, -1038.244f, 28.2397f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 145.2194f, -1033.411f, 28.3462f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 159.547f, -1039.091f, 28.2464f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 152.8388f, -1033.798f, 28.3386f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 154.629f, -1034.607f, 28.3289f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 150.2166f, -1033.243f, 28.3416f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 158.7213f, -1036.816f, 28.2003f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 148.5833f, -1032.539f, 28.3434f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 157.9804f, -1035.026f, 28.2005f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 143.0873f, -1032.483f, 28.3485f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 160.3382f, -1035.83f, 28.2271f };
					*uParam3 = 336.24f;
					return 1;
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 315.6395f, -274.488f, 52.9226f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 317.8872f, -275.3293f, 52.9186f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 313.3918f, -273.6467f, 52.9266f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 320.1349f, -276.1705f, 52.9147f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 311.1441f, -272.8054f, 52.9294f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 322.3827f, -277.0118f, 52.9107f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 308.8964f, -271.9641f, 52.942f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 324.6304f, -277.8531f, 52.9378f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 316.4808f, -272.2403f, 52.9162f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 318.7285f, -273.0815f, 52.9139f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 314.2331f, -271.399f, 52.9166f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 320.9762f, -273.9228f, 52.91f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 311.9854f, -270.5577f, 52.9283f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 323.2239f, -274.7641f, 52.9073f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 309.7377f, -269.7164f, 52.9409f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 325.4716f, -275.6054f, 52.9378f };
					*uParam3 = 339.48f;
					return 1;
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -349.6055f, -45.4561f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -347.3325f, -46.2263f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -351.8786f, -44.6858f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -345.0594f, -46.9966f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -354.1516f, -43.9155f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -342.7864f, -47.7669f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -356.0054f, -42.3063f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -340.5134f, -48.5371f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -350.1007f, -42.1019f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -346.5622f, -43.9533f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -351.6116f, -41.6252f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -338.396f, -48.7175f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -354.761f, -40.4781f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -336.5751f, -49.0537f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -356.2777f, -39.9838f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -340.8749f, -46.6425f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -114.8783f, 6458.876f, 30.4685f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -116.5539f, 6460.594f, 30.4685f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -113.2027f, 6457.158f, 30.4685f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -120.7331f, 6463.364f, 30.4685f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -110.671f, 6453.426f, 30.4648f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -116.5966f, 6457.2f, 30.4505f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -118.7085f, 6458.272f, 30.4339f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -114.9378f, 6454.339f, 30.4313f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -119.9478f, 6460.637f, 30.4518f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -112.9718f, 6453.279f, 30.4458f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -118.4263f, 6455.031f, 30.3868f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -121.0131f, 6457.11f, 30.3968f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -116.2802f, 6452.077f, 30.4043f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -122.554f, 6459.299f, 30.389f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -114.129f, 6451.374f, 30.397f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -121.178f, 6454.305f, 30.4685f };
					*uParam3 = 134.28f;
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1175.162f, 2702.59f, 37.1778f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1172.929f, 2702.168f, 37.1794f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1177.414f, 2702.496f, 37.1761f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1172.372f, 2697.427f, 36.9604f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1174.931f, 2697.345f, 36.9799f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1169.422f, 2697.394f, 36.897f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1177.693f, 2697.39f, 36.981f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1166.641f, 2697.207f, 36.8853f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1181.822f, 2696.861f, 36.9742f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1174.858f, 2694.826f, 36.9156f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1172.459f, 2694.886f, 36.8525f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1177.257f, 2694.765f, 36.9442f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1170.059f, 2694.946f, 36.8091f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1179.657f, 2694.705f, 36.9442f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1166.986f, 2694.72f, 36.8146f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1182.574f, 2694.467f, 36.9398f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 1164.385f, 2696.048f, 36.8095f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 1184.799f, 2695.899f, 36.9541f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 1177.067f, 2692.313f, 36.8877f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 1171.899f, 2692.599f, 36.8748f };
					*uParam3 = 178.56f;
					return 1;
					break;
			}
			break;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2968.502f, 482.859f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -2968.406f, 485.0569f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -2968.599f, 480.6612f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -2968.309f, 487.2548f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -2968.696f, 478.4633f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -2968.212f, 489.4527f, 14.4277f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -2968.792f, 476.2654f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -2968.116f, 491.6505f, 14.3001f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -2968.889f, 474.0675f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -2970.7f, 482.9558f, 14.454f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -2970.604f, 485.1537f, 14.4542f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -2970.797f, 480.7579f, 14.4542f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -2970.507f, 487.3515f, 14.4555f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -2970.894f, 478.56f, 14.4464f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -2970.41f, 489.5494f, 14.3552f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -2970.99f, 476.3622f, 14.4453f };
					*uParam3 = 87.48f;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -564.774f, 274.1477f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -567.7444f, 273.9719f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -561.5562f, 273.0459f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -569.4955f, 274.2109f, 81.9751f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -559.7354f, 272.8479f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -571.3306f, 274.4099f, 81.9203f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -557.8665f, 272.9491f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -573.0443f, 274.0808f, 81.8704f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -555.9487f, 272.6297f, 82.0141f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -565.772f, 272.2206f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -568.3514f, 272.1779f, 82.0143f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -564.2276f, 271.7412f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -570.3973f, 272.4509f, 81.953f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -561.945f, 271.4072f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -572.3325f, 272.437f, 81.8957f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -557.6672f, 271.1332f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -72.7471f, 6268.503f, 30.3551f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -71.252f, 6269.506f, 30.3381f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -74.2422f, 6267.501f, 30.3655f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -69.757f, 6270.508f, 30.3211f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -75.7373f, 6266.499f, 30.3661f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -65.7448f, 6272.877f, 30.3366f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -73.7495f, 6269.999f, 30.3692f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -71.3678f, 6271.286f, 30.3678f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -75.2446f, 6268.996f, 30.3698f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -69.2828f, 6272.988f, 30.3674f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -77.1063f, 6267.988f, 30.3709f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -66.3738f, 6274.839f, 30.3656f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -75.0776f, 6272.224f, 30.3753f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -72.6832f, 6272.561f, 30.3721f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -76.2469f, 6270.491f, 30.374f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -70.6463f, 6274.261f, 30.3719f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -78.2708f, 6269.236f, 30.375f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -68.138f, 6275.899f, 30.3704f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -76.0953f, 6274.172f, 30.3855f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -74.2592f, 6273.991f, 30.3771f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -77.5563f, 6272.694f, 30.3797f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -72.7641f, 6274.994f, 30.3766f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -79.0887f, 6271.026f, 30.3795f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -70.7195f, 6275.979f, 30.375f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -77.6445f, 6275.719f, 30.4466f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -75.889f, 6276.884f, 30.4382f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -79.4104f, 6274.128f, 30.415f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -73.7665f, 6276.489f, 30.3905f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -80.4614f, 6271.917f, 30.3759f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -72.2714f, 6277.491f, 30.3836f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -81.9975f, 6273.217f, 30.3915f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -74.5183f, 6278.968f, 30.4459f };
					*uParam3 = 33.84f;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2449.992f, 4996.175f, 44.9741f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 2451.792f, 4996.175f, 44.9628f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 2448.192f, 4996.175f, 44.9928f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 2453.592f, 4996.175f, 45.0961f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 2445.453f, 4994.827f, 44.8929f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 2443.447f, 4994.624f, 44.9117f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 2448.743f, 4998.16f, 45.0098f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 2451.125f, 4998.125f, 44.9975f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 2446.477f, 4998.319f, 44.8937f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 2453.592f, 4997.975f, 45.0223f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 2443.211f, 4997.464f, 44.8304f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 2456.785f, 4997.438f, 45.1597f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 2448.787f, 4999.9f, 44.9323f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 2451.372f, 5000.234f, 44.9962f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 2446.619f, 4999.952f, 44.927f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 2453.592f, 4999.775f, 45.0573f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 2444.414f, 4999.121f, 44.8859f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 2459.168f, 4999.514f, 45.0061f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 2449.68f, 5002.222f, 44.8187f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 2451.792f, 5001.575f, 44.9703f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 2448.192f, 5001.575f, 44.87f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 2453.592f, 5001.575f, 44.9638f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 2446.392f, 5001.575f, 44.9074f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 2456.798f, 5001.825f, 44.9865f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 2449.49f, 5004.314f, 44.784f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 2451.262f, 5003.836f, 44.7497f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 2451.437f, 5006.339f, 44.6852f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 2453.592f, 5003.375f, 44.8513f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 2446.392f, 5003.375f, 44.8731f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 2456.092f, 5005.15f, 44.7275f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 2448.938f, 5006.702f, 44.8182f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 2454.077f, 5005.971f, 44.5968f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_433(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return 0;
}

void func_434(var uParam0, var uParam1)
{
}

char* func_435(var uParam0, var uParam1, var uParam2)
{
	return "";
}

int func_436(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 42:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 0);
			break;
		
		case 43:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 1);
			break;
		
		case 44:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 2);
			break;
		
		case 45:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 3);
			break;
		
		case 46:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 4);
			break;
		
		case 47:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 5);
			break;
		
		case 48:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 6);
			break;
		
		case 49:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 7);
			break;
		
		case 50:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 8);
			break;
		
		case 51:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 9);
			break;
		
		case 52:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 10);
			break;
		
		case 53:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 11);
			break;
		
		case 54:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 12);
			break;
		
		case 55:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 13);
			break;
		
		case 56:
			return unk_0x48B8265059381CD0(Global_1765404.f_17, 14);
			break;
	}
	return 0;
}

void func_437(var uParam0, var uParam1)
{
}

void func_438(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
}

int func_439(var uParam0, var uParam1)
{
	return 0;
}

int func_440(var uParam0, var uParam1)
{
	return 0;
}

char* func_441(var uParam0, var uParam1)
{
	return "";
}

int func_442(var uParam0, var uParam1)
{
	return 0;
}

int func_443(var uParam0)
{
	return 1;
}

void func_444(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
}

void func_445(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 42:
			*uParam1 = { 429.3781f, -980.3966f, 29.7103f };
			break;
		
		case 43:
			*uParam1 = { 2447.739f, 4990.434f, 45.5476f };
			break;
		
		case 44:
			*uParam1 = { -1214.839f, -326.6806f, 36.6732f };
			break;
		
		case 45:
			*uParam1 = { 151.2385f, -1035.917f, 28.3395f };
			break;
		
		case 46:
			*uParam1 = { 315.4561f, -274.3907f, 52.9229f };
			break;
		
		case 47:
			*uParam1 = { -349.5591f, -44.8894f, 48.0418f };
			break;
		
		case 48:
			*uParam1 = { -110.9303f, 6462.298f, 30.6408f };
			break;
		
		case 49:
			*uParam1 = { 1175.11f, 2702.038f, 37.1778f };
			break;
		
		case 50:
			*uParam1 = { -2966.651f, 482.9674f, 14.6977f };
			break;
		
		case 51:
			*uParam1 = { -564.5693f, 274.6833f, 82.0197f };
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
			*uParam1 = { -72.7412f, 6268.026f, 30.3276f };
			break;
		
		case 56:
			*uParam1 = { 2447.739f, 4990.434f, 45.5476f };
			break;
	}
}

void func_446(var uParam0, var uParam1)
{
}

char* func_447(int iParam0)
{
	switch (iParam0)
	{
		case 42:
			return "RST_INT_POLICE_ST";
			break;
		
		case 43:
			return "RST_INT_CLUBHOUSE";
			break;
		
		case 44:
			return "RST_INT_B_ROCKFORD";
			break;
		
		case 45:
			return "RST_INT_B_PILLBOX";
			break;
		
		case 46:
			return "RST_INT_B_ALTA";
			break;
		
		case 47:
			return "RST_INT_B_BURTON";
			break;
		
		case 48:
			return "RST_INT_B_PALETO";
			break;
		
		case 49:
			return "RST_INT_B_GRAND_SENORA";
			break;
		
		case 50:
			return "RST_INT_B_CHUMASH";
			break;
		
		case 51:
			return "RST_INT_ROCKCLUB";
			break;
		
		case 52:
			return "RST_INT_CHICKEN1";
			break;
		
		case 53:
			return "RST_INT_CHICKEN2";
			break;
		
		case 54:
			return "RST_INT_CHICKEN3";
			break;
		
		case 55:
			return "RST_INT_CHICKEN4";
			break;
		
		case 56:
			return "RST_INT_FARM";
			break;
	}
	return "";
}

void func_448(var uParam0, var uParam1)
{
	uParam1->f_3 = 1;
}

void func_449(int iParam0, char* sParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_452(iParam0);
	if (iVar0 != -1)
	{
		*uParam2 = { func_451(iVar0) };
		StringCopy(sParam1, func_450(iVar0), 64);
	}
}

char* func_450(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		default:
	}
	return "";
}

Vector3 func_451(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 984.1552f, -95.3662f, 75.9326f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_452(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_47(iParam0) == 3)
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			iVar1 = iVar0;
			if (func_453(iVar1) == iParam0)
			{
				return iVar1;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_453(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 42;
			break;
		
		case 1:
			return 43;
			break;
		
		case 2:
			return 44;
			break;
		
		case 3:
			return 45;
			break;
		
		case 4:
			return 46;
			break;
		
		case 5:
			return 47;
			break;
		
		case 6:
			return 48;
			break;
		
		case 7:
			return 49;
			break;
		
		case 8:
			return 50;
			break;
		
		case 9:
			return 51;
			break;
		
		case 10:
			return 52;
			break;
		
		case 11:
			return 53;
			break;
		
		case 12:
			return 54;
			break;
		
		case 13:
			return 55;
			break;
		
		case 14:
			return 56;
			break;
	}
	return -1;
}

int func_454(int iParam0)
{
	if (unk_0xF7271A9481CAC8E3())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 42:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 0))
			{
				return 1;
			}
			break;
		
		case 43:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 1))
			{
				return 1;
			}
			break;
		
		case 44:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 2))
			{
				return 1;
			}
			break;
		
		case 45:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 3))
			{
				return 1;
			}
			break;
		
		case 46:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 4))
			{
				return 1;
			}
			break;
		
		case 47:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 5))
			{
				return 1;
			}
			break;
		
		case 48:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 6))
			{
				return 1;
			}
			break;
		
		case 49:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 7))
			{
				return 1;
			}
			break;
		
		case 50:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 8))
			{
				return 1;
			}
			break;
		
		case 51:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 9))
			{
				return 1;
			}
			break;
		
		case 52:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 10))
			{
				return 1;
			}
			break;
		
		case 53:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 11))
			{
				return 1;
			}
			break;
		
		case 54:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 12))
			{
				return 1;
			}
			break;
		
		case 55:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 13))
			{
				return 1;
			}
			break;
		
		case 56:
			if (unk_0x48B8265059381CD0(Global_1765404.f_17, 14))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_455(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 164879;
			break;
		
		case 1:
			uParam0->f_1 = 164574;
			break;
		
		case 2:
			uParam0->f_2 = 159753;
			break;
		
		case 3:
			uParam0->f_3 = 159564;
			break;
		
		case 4:
			uParam0->f_4 = 159214;
			break;
		
		case 5:
			uParam0->f_5 = 158639;
			break;
		
		case 6:
			uParam0->f_6 = 158617;
			break;
		
		case 7:
			uParam0->f_7 = 156314;
			break;
		
		case 8:
			uParam0->f_8 = 156230;
			break;
		
		case 9:
			uParam0->f_9 = 155748;
			break;
		
		case 10:
			uParam0->f_10 = 155628;
			break;
		
		case 11:
			uParam0->f_11 = 155584;
			break;
		
		case 12:
			uParam0->f_12 = 155349;
			break;
		
		case 13:
			uParam0->f_13 = 154654;
			break;
		
		case 14:
			uParam0->f_14 = 154512;
			break;
		
		case 15:
			uParam0->f_15 = 154082;
			break;
		
		case 16:
			uParam0->f_16 = 153304;
			break;
		
		case 17:
			uParam0->f_17 = 150726;
			break;
		
		case 18:
			uParam0->f_18 = 124883;
			break;
		
		case 19:
			uParam0->f_19 = 124655;
			break;
		
		case 20:
			uParam0->f_20 = 124479;
			break;
		
		case 21:
			uParam0->f_21 = 124246;
			break;
		
		case 22:
			uParam0->f_22 = 124210;
			break;
		
		case 23:
			uParam0->f_23 = 124017;
			break;
		
		case 24:
			uParam0->f_24 = 124008;
			break;
		
		case 25:
			uParam0->f_25 = 123825;
			break;
		
		case 26:
			uParam0->f_26 = 123805;
			break;
		
		case 27:
			uParam0->f_27 = 123574;
			break;
		
		case 28:
			uParam0->f_28 = 122339;
			break;
		
		case 29:
			uParam0->f_29 = 121628;
			break;
		
		case 30:
			uParam0->f_30 = 121620;
			break;
		
		case 31:
			uParam0->f_31 = 121612;
			break;
		
		case 32:
			uParam0->f_32 = 121551;
			break;
		
		case 33:
			uParam0->f_33 = 121534;
			break;
		
		case 34:
			uParam0->f_34 = 121525;
			break;
		
		case 35:
			uParam0->f_35 = 121516;
			break;
		
		case 36:
			uParam0->f_36 = 121012;
			break;
		
		case 37:
			uParam0->f_37 = 120748;
			break;
		
		case 38:
			uParam0->f_38 = 120703;
			break;
	}
}

void func_456(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 38)
	{
		*uParam1 = 1;
		*uParam2 = { 135.4647f, -2474.173f, 5f };
		*uParam3 = 5f;
		return;
	}
	*uParam1 = 0;
}

int func_457(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam4 = 200f;
	switch (iParam0)
	{
		case 38:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 144.5453f, -2486.429f, 6.1636f };
					*uParam3 = 4f;
					*uParam5 = joaat("prop_fnclink_04gate1");
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 375.9739f, 3586.175f, 32.3049f };
					*uParam3 = 4f;
					*uParam5 = joaat("prop_rub_chassis_01");
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2876.753f, 4457.728f, 47.5327f };
					*uParam3 = 4f;
					*uParam5 = joaat("prop_woodpile_01c");
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -181.1744f, 6315.724f, 30.4581f };
					*uParam3 = 2f;
					*uParam5 = joaat("prop_dumpster_02a");
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_458(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 23)
	{
		*uParam2 = { 416.2334f, 6526.307f, 26.178f };
		*uParam3 = { 425.155f, 6537.515f, 30.0163f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 24)
	{
		*uParam2 = { 58.1605f, 6463.741f, 29.8964f };
		*uParam3 = { 71.6159f, 6473.882f, 33.6967f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 25)
	{
		*uParam2 = { -420.1546f, 6147.26f, 29.8735f };
		*uParam3 = { -397.088f, 6185.627f, 34.9226f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 30)
	{
		*uParam2 = { -1181.309f, -1391.505f, 3.497f };
		*uParam3 = { -1168.151f, -1370.608f, 8.047f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 31)
	{
		*uParam2 = { 297.8819f, -706.9392f, 27.3973f };
		*uParam3 = { 321.2971f, -689.0288f, 32.2224f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 32)
	{
		*uParam2 = { 202.1808f, 2454.896f, 54.6059f };
		*uParam3 = { 212.2262f, 2464.708f, 59.9501f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 35)
	{
		*uParam2 = { 640.6338f, 2771.818f, 40.4589f };
		*uParam3 = { 653.1158f, 2794.839f, 45.5267f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 36)
	{
		*uParam2 = { 1658.091f, 4851.492f, 40.5298f };
		*uParam3 = { 1665.266f, 4864.598f, 44.0774f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 41)
	{
		*uParam2 = { -341.0086f, -2789.826f, 3.5734f };
		*uParam3 = { -331.4757f, -2772.298f, 7.5039f };
		*uParam1 = 1;
		return;
	}
	*uParam1 = 0;
}

int func_459(var uParam0)
{
	return 1;
}

int func_460(var uParam0)
{
	return 1;
}

void func_461(var uParam0, var uParam1)
{
	unk_0x21E7933CCC7B3724(&(uParam0->f_103), 1);
}

void func_462(var uParam0, var uParam1)
{
	if (!unk_0x48B8265059381CD0(uParam0->f_103, 1))
	{
		if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
		{
			unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
			unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
		}
		unk_0xEB79FECD9022AAF0(&(uParam0->f_103), 1);
	}
}

void func_463(var uParam0, var uParam1)
{
}

void func_464(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

Vector3 func_465(int iParam0)
{
	switch (func_466(iParam0))
	{
		case 1:
			return 22.9f, 6307.98f, 0f;
		
		case 2:
			return 410.88f, 6515.83f, 0f;
		
		case 3:
			return 31.28f, 6466.3f, 0f;
		
		case 4:
			return -417.89f, 6152.75f, 0f;
		
		case 5:
			return -167.33f, 6326.04f, 0f;
		
		case 6:
			return 1447.56f, -1666.12f, 0f;
		
		case 7:
			return 121.81f, 187.86f, 0f;
		
		case 8:
			return -1477.83f, -379.04f, 0f;
		
		case 9:
			return -1159.31f, -1381.69f, 0f;
		
		case 10:
			return 268.15f, -726.74f, 0f;
		
		case 11:
			return 195.23f, 2467.11f, 0f;
		
		case 12:
			return 2861.52f, 4453.81f, 0f;
		
		case 13:
			return 385.99f, 3575.13f, 0f;
		
		case 14:
			return 628.56f, 2798.91f, 0f;
		
		case 15:
			return 1652.13f, 4843.88f, 0f;
		
		case 16:
			return 1212.35f, -3145.12f, 0f;
		
		case 17:
			return 129.28f, -2469.72f, 0f;
		
		case 18:
			return -227.57f, -2586.04f, 0f;
		
		case 19:
			return 678.49f, -2680.5f, 0f;
		
		case 20:
			return -306.09f, -2780.97f, 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_466(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
	}
	return 0;
}

int func_467(var uParam0)
{
	int iVar0;
	
	if (func_477())
	{
		return func_471(func_472(unk_0xBE369BE1BC57A796()));
	}
	else if (func_468(unk_0xBE369BE1BC57A796(), 0))
	{
		iVar0 = func_204();
		return func_471(func_472(iVar0));
	}
	return 4;
}

bool func_468(int iParam0, bool bParam1)
{
	return func_469(iParam0, bParam1, 1);
}

int func_469(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_48())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_470(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_48() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_470(int iParam0, int iParam1)
{
	if (iParam0 != func_48())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_48())
		{
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 && Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_471(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xE3B46F8779F1AB2E(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_472(int iParam0)
{
	int iVar0;
	
	iVar0 = func_475(iParam0);
	if (iVar0 != -1)
	{
		return func_473(iVar0);
	}
	return 1;
}

int func_473(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_474(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_474(int iParam0)
{
	return Global_2415716.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_475(int iParam0)
{
	if (!iParam0 == func_48())
	{
		if (func_206(iParam0, 1))
		{
			return Global_2415716.f_1946.f_11[func_476(iParam0)];
		}
	}
	return -1;
}

int func_476(int iParam0)
{
	if (iParam0 != func_48())
	{
		return Global_1619421[iParam0 /*390*/].f_11;
	}
	return func_48();
}

bool func_477()
{
	return func_478(unk_0xBE369BE1BC57A796());
}

bool func_478(int iParam0)
{
	return func_470(iParam0, 1);
}

void func_479(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			unk_0xAAF15482D9DB27D9(*uParam1, "BIKER_WH_1B");
			return;
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			unk_0xAAF15482D9DB27D9(*uParam1, "BIKER_WH_2B");
			return;
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			unk_0xAAF15482D9DB27D9(*uParam1, "BIKER_WH_3B");
			return;
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			unk_0xAAF15482D9DB27D9(*uParam1, "BIKER_WH_4B");
			return;
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			unk_0xAAF15482D9DB27D9(*uParam1, "BIKER_WH_5B");
			return;
			break;
	}
	unk_0xAAF15482D9DB27D9(*uParam1, "BIKER_WH_1B");
}

Vector3 func_480(int iParam0)
{
	struct<3> Var0;
	
	func_559(iParam0, &Var0);
	return Var0;
}

int func_481(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			return 499;
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			return 496;
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			return 497;
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			return 500;
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			return 498;
			break;
	}
	return 473;
}

int func_482(var uParam0)
{
	return 1;
}

int func_483(int iParam0)
{
	if (func_485(unk_0xBE369BE1BC57A796(), 1))
	{
		return 0;
	}
	if (func_484() == iParam0)
	{
		return 0;
	}
	if (func_522(unk_0xBE369BE1BC57A796(), iParam0))
	{
		if (!func_523(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_484()
{
	return Global_1764677.f_1;
}

int func_485(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_280(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1591201[iParam0 /*602*/] == 2 || Global_1591201[iParam0 /*602*/] == 1) || Global_1591201[iParam0 /*602*/] == 0) || Global_1591201[iParam0 /*602*/] == 3) || Global_1591201[iParam0 /*602*/] == 8)
	{
		return 1;
	}
	return 0;
}

bool func_486(var uParam0)
{
	return (unk_0x48B8265059381CD0(Global_1764677.f_2, 2) || unk_0x48B8265059381CD0(Global_1764677.f_2, 0));
}

void func_487(int iParam0, char* sParam1, var uParam2, var uParam3)
{
	if (*uParam2 != 3)
	{
		return;
	}
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			StringCopy(sParam1, "BIKER_WH_1", 64);
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			StringCopy(sParam1, "BIKER_WH_2", 64);
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			StringCopy(sParam1, "BIKER_WH_3", 64);
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			StringCopy(sParam1, "BIKER_WH_4", 64);
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			StringCopy(sParam1, "BIKER_WH_5", 64);
			break;
		
		default:
			StringCopy(sParam1, "MP_WHOUSE_EXIT", 64);
			break;
	}
	*uParam3 = 2;
	(*uParam2)[0] = "BIKER_WH_EXITa";
	(*uParam2)[1] = "BIKER_WH_EXITb";
}

int func_488(int iParam0)
{
	switch (iParam0)
	{
		case 24:
		case 29:
		case 34:
		case 39:
			return 20;
			break;
		
		case 22:
		case 27:
		case 32:
		case 37:
			return 21;
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			return 22;
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			return 23;
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			return 24;
			break;
	}
	return -1;
}

int func_489(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 0;
		
		case 24:
			return 1;
		
		case 23:
			return 2;
		
		case 26:
			return 3;
		
		case 25:
			return 4;
		
		case 27:
			return 5;
		
		case 29:
			return 6;
		
		case 28:
			return 7;
		
		case 31:
			return 8;
		
		case 30:
			return 9;
		
		case 32:
			return 10;
		
		case 34:
			return 11;
		
		case 33:
			return 12;
		
		case 36:
			return 13;
		
		case 35:
			return 14;
		
		case 37:
			return 15;
		
		case 39:
			return 16;
		
		case 38:
			return 17;
		
		case 41:
			return 18;
		
		case 40:
			return 19;
		
		default:
	}
	return -1;
}

int func_490(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 22:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 52.388f, 6339.683f, 30.3747f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 50.1165f, 6337.813f, 30.384f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 54.0991f, 6340.208f, 30.3764f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 51.8118f, 6341.783f, 30.2274f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 49.7982f, 6340.145f, 30.2268f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 47.4055f, 6338.755f, 30.2268f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 47.6714f, 6340.622f, 30.2282f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 49.0308f, 6342.47f, 30.229f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 51.3454f, 6344.165f, 30.2295f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 44.6926f, 6338.974f, 30.2282f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 46.1017f, 6335.087f, 30.3673f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 44.0519f, 6336.876f, 30.2269f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 48.0841f, 6336.146f, 30.3725f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 39.6178f, 6338.012f, 30.2306f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 44.4416f, 6342.616f, 30.2314f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 45.2101f, 6345.039f, 30.2329f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 34.4321f, 6336.621f, 30.2325f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 48.1278f, 6344.589f, 30.2312f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 41.9482f, 6340.101f, 30.2309f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 44.3521f, 6333.985f, 30.3641f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 41.746f, 6336.983f, 30.2284f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 36.4916f, 6335.406f, 30.2301f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 34.1285f, 6334.083f, 30.2302f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 38.9609f, 6341.643f, 30.234f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 47.4673f, 6351.268f, 30.2368f };
					*uParam3 = 29.3628f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 42.0324f, 6348.333f, 30.2377f };
					*uParam3 = 31.1542f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 42.5469f, 6353.747f, 30.2398f };
					*uParam3 = 31.3772f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 44.7897f, 6349.863f, 30.2372f };
					*uParam3 = 29.4159f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 39.3478f, 6346.885f, 30.2382f };
					*uParam3 = 27.0972f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 40.0027f, 6349.93f, 30.2398f };
					*uParam3 = 30.9198f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 42.4919f, 6351.123f, 30.2397f };
					*uParam3 = 24.4507f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 44.7628f, 6353.019f, 30.2398f };
					*uParam3 = 29.3117f;
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 418.0156f, 6520.585f, 26.7163f };
					*uParam3 = 262.7964f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 417.1376f, 6518.758f, 26.6879f };
					*uParam3 = 263.9654f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 417.9884f, 6523.124f, 26.7372f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 419.6446f, 6523.709f, 26.7372f };
					*uParam3 = 263.9875f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 416.5636f, 6516.738f, 26.6779f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 417.7757f, 6525.219f, 26.7372f };
					*uParam3 = 264.3846f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 417.9008f, 6527.285f, 26.7276f };
					*uParam3 = 261.9809f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 416.3594f, 6514.406f, 26.7113f };
					*uParam3 = 260.7525f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 419.2861f, 6525.891f, 26.7306f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 416.8679f, 6513.06f, 26.7013f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 418.0652f, 6512.123f, 26.6896f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 416.257f, 6508.136f, 26.7295f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 431.1201f, 6526.12f, 26.7967f };
					*uParam3 = 255.1485f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 418.6536f, 6532.174f, 26.7355f };
					*uParam3 = 262.3797f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 418.713f, 6510.063f, 26.7268f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 431.0089f, 6513.548f, 27.2204f };
					*uParam3 = 244.2593f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 432.3376f, 6515.709f, 27.3426f };
					*uParam3 = 257.6375f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 419.1826f, 6507.287f, 26.7564f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 430.5198f, 6527.896f, 26.7518f };
					*uParam3 = 262.7752f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 421.3478f, 6504.809f, 26.794f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 421.5699f, 6508.405f, 26.7834f };
					*uParam3 = 264.1678f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 433.3055f, 6526.468f, 26.8483f };
					*uParam3 = 256.7643f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 418.1842f, 6529.817f, 26.7083f };
					*uParam3 = 264.4763f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 430.1514f, 6516.169f, 27.2395f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 419.2933f, 6534.477f, 26.7172f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 423.4145f, 6506.8f, 26.7148f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 419.1189f, 6536.776f, 26.7062f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 433.2409f, 6511.621f, 27.3255f };
					*uParam3 = 255.6953f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 429.1526f, 6524.431f, 26.7881f };
					*uParam3 = 251.0102f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 431.9196f, 6523.929f, 26.9157f };
					*uParam3 = 254.524f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 430.4885f, 6511.412f, 27.136f };
					*uParam3 = 266.0406f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 429.3159f, 6510.02f, 26.999f };
					*uParam3 = 265.8243f;
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 52.8118f, 6487.269f, 30.4277f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 54.1165f, 6486.113f, 30.4375f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 51.2639f, 6489.289f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 55.2892f, 6484.654f, 30.4396f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 49.5078f, 6490.429f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 56.8959f, 6483.366f, 30.4337f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 47.6963f, 6491.771f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 57.9225f, 6481.851f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 46.8138f, 6493.486f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 59.4133f, 6480.662f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 45.524f, 6495.441f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 60.7123f, 6479.036f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 64.8422f, 6477.992f, 30.4036f };
					*uParam3 = 222.6826f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 62.6797f, 6477.982f, 30.4253f };
					*uParam3 = 224.6725f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 62.4855f, 6475.445f, 30.4253f };
					*uParam3 = 224.7985f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 66.4212f, 6476.019f, 30.4253f };
					*uParam3 = 224.5524f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 64.1202f, 6473.007f, 30.4253f };
					*uParam3 = 224.6458f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 59.7233f, 6473.501f, 30.4253f };
					*uParam3 = 222.6271f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 57.7166f, 6471.576f, 30.4253f };
					*uParam3 = 226.4074f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 58.7126f, 6469.368f, 30.4253f };
					*uParam3 = 222.7943f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 61.6103f, 6471.206f, 30.4253f };
					*uParam3 = 225.0653f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 55.6494f, 6469.501f, 30.4253f };
					*uParam3 = 226.0485f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 53.146f, 6466.72f, 30.4253f };
					*uParam3 = 224.9646f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 56.6075f, 6466.801f, 30.4253f };
					*uParam3 = 225.9164f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 55.9495f, 6459.095f, 30.3096f };
					*uParam3 = 228.6592f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 52.8952f, 6459.534f, 30.3907f };
					*uParam3 = 222.7136f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 54.2541f, 6464.741f, 30.4253f };
					*uParam3 = 223.3415f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 52.6959f, 6462.1f, 30.4253f };
					*uParam3 = 220.9931f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 49.7192f, 6462.789f, 30.4253f };
					*uParam3 = 222.8229f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 55.956f, 6461.751f, 30.3767f };
					*uParam3 = 222.0971f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 58.3004f, 6461.146f, 30.3021f };
					*uParam3 = 223.8293f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 57.7972f, 6464.848f, 30.3991f };
					*uParam3 = 225.385f;
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -412.4298f, 6173.216f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -413.8248f, 6175.07f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -410.8973f, 6171.76f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -411.1946f, 6174.484f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -412.5322f, 6176.398f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -409.6077f, 6172.763f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -409.3319f, 6174.633f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -411.1761f, 6176.618f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -406.7141f, 6168.102f, 30.4883f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -408.5953f, 6170.129f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -404.8738f, 6170.248f, 30.4822f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -403.139f, 6168.077f, 30.5356f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -401.1759f, 6164.867f, 30.4927f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -404.189f, 6165.712f, 30.5369f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -414.0832f, 6181.135f, 30.4741f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -412.0959f, 6179.132f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -411.8097f, 6181.141f, 30.4755f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -412.8681f, 6182.492f, 30.4661f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -410.0663f, 6179.785f, 30.4782f };
					*uParam3 = 311.3212f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -397.1739f, 6162.219f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -407.1871f, 6172.572f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -396.5909f, 6156.809f, 30.4781f };
					*uParam3 = 314.766f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -398.2342f, 6158.764f, 30.4782f };
					*uParam3 = 314.7355f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -395.816f, 6159.344f, 30.4782f };
					*uParam3 = 315.2863f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -402.5583f, 6170.364f, 30.5126f };
					*uParam3 = 314.6432f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -399.8426f, 6166.365f, 30.4975f };
					*uParam3 = 314.5009f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -402.4862f, 6172.542f, 30.5286f };
					*uParam3 = 316.1572f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -398.1165f, 6166.726f, 30.4913f };
					*uParam3 = 317.543f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -399.0388f, 6168.903f, 30.524f };
					*uParam3 = 316.466f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -400.4666f, 6170.731f, 30.5366f };
					*uParam3 = 315.4282f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -398.9958f, 6171.111f, 30.5404f };
					*uParam3 = 315.2344f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -397.4542f, 6169.569f, 30.5168f };
					*uParam3 = 316.3151f;
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -162.7138f, 6335.422f, 30.5808f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -161.2702f, 6334.038f, 30.5808f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -164.1573f, 6336.807f, 30.5626f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -159.8267f, 6332.654f, 30.5808f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -166.2008f, 6338.791f, 30.5626f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -158.3832f, 6331.27f, 30.5808f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -168.2722f, 6340.881f, 30.5716f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -156.9397f, 6329.885f, 30.5808f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -169.9879f, 6342.459f, 30.5709f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -155.4961f, 6328.501f, 30.577f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -153.8149f, 6326.972f, 30.5826f };
					*uParam3 = 312.3233f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -152.4129f, 6325.558f, 30.592f };
					*uParam3 = 316.8614f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -151.112f, 6324.219f, 30.5903f };
					*uParam3 = 313.0286f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -158.1136f, 6333.082f, 30.5808f };
					*uParam3 = 314.6399f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -156.4287f, 6331.466f, 30.5786f };
					*uParam3 = 313.975f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -153.77f, 6328.693f, 30.5647f };
					*uParam3 = 314.0734f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -152.0941f, 6327.271f, 30.5874f };
					*uParam3 = 314.2164f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -168.2417f, 6342.539f, 30.5417f };
					*uParam3 = 314.5307f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -170.3239f, 6344.085f, 30.4945f };
					*uParam3 = 314.582f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -164.5036f, 6339.226f, 30.5626f };
					*uParam3 = 314.6957f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -150.6437f, 6325.632f, 30.5976f };
					*uParam3 = 314.7346f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -149.4043f, 6322.155f, 30.5716f };
					*uParam3 = 318.0889f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -147.9739f, 6321.735f, 30.5777f };
					*uParam3 = 314.7053f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -151.1501f, 6346.464f, 30.4964f };
					*uParam3 = 314.7262f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -149.613f, 6344.94f, 30.495f };
					*uParam3 = 314.7279f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -148.0372f, 6343.497f, 30.4983f };
					*uParam3 = 317.556f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -149.0959f, 6347.406f, 30.5813f };
					*uParam3 = 314.9833f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -147.2622f, 6345.805f, 30.5732f };
					*uParam3 = 314.9387f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -145.3534f, 6344.006f, 30.5673f };
					*uParam3 = 321.887f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -145.9914f, 6347.854f, 30.4908f };
					*uParam3 = 315.0452f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -143.9613f, 6345.565f, 30.4904f };
					*uParam3 = 319.548f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -147.8938f, 6350.029f, 30.4906f };
					*uParam3 = 317.3596f;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1452.719f, -1652.544f, 65.2531f };
					*uParam3 = 98.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1451.333f, -1652.834f, 64.9894f };
					*uParam3 = 98.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1449.816f, -1653.092f, 64.8421f };
					*uParam3 = 98.863f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1452.28f, -1651.06f, 65.1814f };
					*uParam3 = 10.2482f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1451.025f, -1651.371f, 64.941f };
					*uParam3 = 12.1956f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1456.226f, -1650.368f, 65.9188f };
					*uParam3 = 18.2891f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1456.02f, -1649.107f, 65.9818f };
					*uParam3 = 18.7175f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1454.017f, -1650.298f, 65.5237f };
					*uParam3 = 15.4597f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1447.564f, -1650.199f, 64.2262f };
					*uParam3 = 71.9062f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1446.07f, -1651.007f, 63.9286f };
					*uParam3 = 66.5926f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1446.232f, -1649.501f, 63.9114f };
					*uParam3 = 43.6699f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1446.438f, -1647.77f, 63.9483f };
					*uParam3 = 37.6348f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1457.156f, -1645.79f, 66.3903f };
					*uParam3 = 23.0193f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1458.786f, -1645.725f, 66.5759f };
					*uParam3 = 20.6023f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1442.882f, -1651.725f, 63.3199f };
					*uParam3 = 83.5109f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1446.105f, -1646.13f, 63.8255f };
					*uParam3 = 8.64f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 1445.773f, -1644.384f, 63.7196f };
					*uParam3 = 15.5516f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 1458.601f, -1644.558f, 66.69f };
					*uParam3 = 22.6359f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 1440.681f, -1652.548f, 62.9604f };
					*uParam3 = 83.0081f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 1459.531f, -1640.55f, 67.0141f };
					*uParam3 = 25.0443f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 1457.636f, -1641.712f, 66.5973f };
					*uParam3 = 22.3606f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 1457.773f, -1639.663f, 66.7683f };
					*uParam3 = 24.7135f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 1459.767f, -1638.281f, 67.2359f };
					*uParam3 = 22.7005f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 1455.612f, -1640.781f, 66.2886f };
					*uParam3 = 27.0112f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 1461.824f, -1639.323f, 67.5361f };
					*uParam3 = 24.0778f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 1461.577f, -1641.665f, 67.3225f };
					*uParam3 = 27.3296f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 1448.751f, -1637.309f, 64.8495f };
					*uParam3 = 17.9649f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 1446.172f, -1638.34f, 63.9024f };
					*uParam3 = 25.5326f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 1446.776f, -1636.319f, 64.1259f };
					*uParam3 = 20.7213f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 1443.154f, -1638.178f, 62.7794f };
					*uParam3 = 21.0717f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 1443.623f, -1636.057f, 62.9685f };
					*uParam3 = 21.0154f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 1440.251f, -1636.594f, 61.9508f };
					*uParam3 = 19.6392f;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 101.5573f, 173.0707f, 103.5805f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 99.9892f, 172.3697f, 103.5692f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 102.7886f, 171.4459f, 103.5708f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 98.2435f, 171.3624f, 103.5405f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 104.9318f, 170.9161f, 103.591f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 100.6276f, 169.956f, 103.5367f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 96.9907f, 173.0015f, 103.5679f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 103.1269f, 169.1342f, 103.5354f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 95.1155f, 171.9109f, 103.5497f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 105.859f, 167.5653f, 103.5429f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 99.1158f, 167.4283f, 103.5265f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 96.9644f, 170.1569f, 103.5273f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 103.071f, 166.3546f, 103.5148f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 95.0259f, 168.7767f, 103.5041f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 106.9227f, 165.0326f, 103.5053f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 93.1757f, 171.0423f, 103.5259f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 108.61f, 169.3952f, 103.6018f };
					*uParam3 = 159.1532f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 109.1702f, 167.1929f, 103.554f };
					*uParam3 = 161.1016f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 112.4778f, 166.7766f, 103.5676f };
					*uParam3 = 157.8632f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 114.8762f, 165.8928f, 103.5475f };
					*uParam3 = 157.9706f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 113.3156f, 164.4082f, 103.519f };
					*uParam3 = 159.3387f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 110.8967f, 165.1313f, 103.5308f };
					*uParam3 = 157.22f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 115.8458f, 163.4454f, 103.5133f };
					*uParam3 = 163.3644f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 117.1773f, 165.1345f, 103.5553f };
					*uParam3 = 160.3933f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 105.6983f, 160.9647f, 103.557f };
					*uParam3 = 157.5239f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 106.9749f, 159.3869f, 103.5674f };
					*uParam3 = 156.8706f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 106.3755f, 162.8573f, 103.5192f };
					*uParam3 = 158.1008f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 103.5319f, 160.535f, 103.5865f };
					*uParam3 = 154.9452f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 104.8679f, 158.522f, 103.6038f };
					*uParam3 = 154.552f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 102.2848f, 158.1931f, 103.6371f };
					*uParam3 = 156.7726f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 106.0865f, 156.3622f, 103.6289f };
					*uParam3 = 156.8518f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 103.6108f, 155.3809f, 103.6755f };
					*uParam3 = 154.5688f;
					return 1;
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1461.316f, -383.0153f, 37.7268f };
					*uParam3 = 225.36f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1463.09f, -385.0027f, 37.7036f };
					*uParam3 = 225.36f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1459.539f, -381.5134f, 37.7274f };
					*uParam3 = 228.159f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1464.899f, -386.8547f, 37.688f };
					*uParam3 = 214.9657f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1457.15f, -379.1012f, 37.7661f };
					*uParam3 = 235.8638f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1467.111f, -388.6677f, 37.6901f };
					*uParam3 = 215.2533f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1459.713f, -385.0891f, 37.5678f };
					*uParam3 = 230.9921f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1461.699f, -386.8681f, 37.5623f };
					*uParam3 = 225.36f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1457.593f, -383.0095f, 37.49f };
					*uParam3 = 237.436f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1463.357f, -388.8349f, 37.5195f };
					*uParam3 = 216.8518f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1455.444f, -380.7431f, 37.6032f };
					*uParam3 = 235.9487f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -1465.916f, -390.8907f, 37.5321f };
					*uParam3 = 211.4971f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1457.433f, -386.4548f, 37.3415f };
					*uParam3 = 218.5163f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1459.873f, -388.7091f, 37.2991f };
					*uParam3 = 225.36f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1454.954f, -383.96f, 37.405f };
					*uParam3 = 239.7925f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1463.277f, -391.4753f, 37.2504f };
					*uParam3 = 214.9716f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -1452.903f, -382.2585f, 37.4333f };
					*uParam3 = 237.7314f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -1453.037f, -380.0698f, 37.5405f };
					*uParam3 = 253.6929f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -1451.658f, -378.0233f, 37.5819f };
					*uParam3 = 269.331f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -1449.144f, -378.839f, 37.4439f };
					*uParam3 = 274.8042f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -1447.038f, -377.604f, 37.419f };
					*uParam3 = 268.6497f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -1444.701f, -377.2707f, 37.3457f };
					*uParam3 = 273.1105f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -1450.947f, -381.1693f, 37.4067f };
					*uParam3 = 272.5679f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -1448.948f, -381.5771f, 37.2669f };
					*uParam3 = 276.7779f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -1446.962f, -380.8906f, 37.212f };
					*uParam3 = 270.8792f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -1444.161f, -379.8249f, 37.2053f };
					*uParam3 = 276.637f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -1469.515f, -391.0861f, 37.6714f };
					*uParam3 = 137.0645f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -1471.164f, -392.9117f, 37.6507f };
					*uParam3 = 139.6607f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -1473.057f, -394.7888f, 37.4064f };
					*uParam3 = 133.1182f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -1466.647f, -393.5308f, 37.3348f };
					*uParam3 = 138.4943f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -1468.701f, -395.0844f, 37.3885f };
					*uParam3 = 139.4162f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -1471.295f, -396.2152f, 37.2593f };
					*uParam3 = 141.8664f;
					return 1;
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1171.805f, -1379.76f, 3.9672f };
					*uParam3 = 28.8f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1173.838f, -1380.151f, 3.9449f };
					*uParam3 = 34.8391f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1175.041f, -1381.724f, 3.9085f };
					*uParam3 = 34.0448f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1176.415f, -1380.98f, 3.8931f };
					*uParam3 = 35.2419f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1177.865f, -1379.634f, 3.8829f };
					*uParam3 = 37.6581f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1173.285f, -1377.579f, 3.965f };
					*uParam3 = 31.6187f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1175.538f, -1378.475f, 3.9343f };
					*uParam3 = 36.0438f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1177.294f, -1383.397f, 3.8535f };
					*uParam3 = 35.2433f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1179.252f, -1381.587f, 3.839f };
					*uParam3 = 28.8f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1181.668f, -1382.966f, 3.7598f };
					*uParam3 = 32.418f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1174.404f, -1375.134f, 3.9656f };
					*uParam3 = 28.8f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -1176.593f, -1376.374f, 3.9386f };
					*uParam3 = 35.2438f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1178.595f, -1377.787f, 3.89f };
					*uParam3 = 28.8f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1181.006f, -1378.982f, 3.8361f };
					*uParam3 = 46.9055f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1183.386f, -1380.777f, 3.7525f };
					*uParam3 = 45.7085f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1175.85f, -1372.542f, 3.9618f };
					*uParam3 = 34.033f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -1178.036f, -1374.119f, 3.9377f };
					*uParam3 = 36.0408f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -1180.405f, -1375.35f, 3.8842f };
					*uParam3 = 50.9507f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -1183.326f, -1378.028f, 3.7992f };
					*uParam3 = 48.1209f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -1185.884f, -1376.692f, 3.752f };
					*uParam3 = 25.1088f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -1188.024f, -1377.72f, 3.6766f };
					*uParam3 = 27.3524f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -1186.94f, -1375.037f, 3.7478f };
					*uParam3 = 25.1048f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -1188.937f, -1375.94f, 3.6766f };
					*uParam3 = 25.3466f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -1183.088f, -1375.363f, 3.8374f };
					*uParam3 = 77.3209f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -1186.302f, -1380.486f, 3.6784f };
					*uParam3 = 35.8389f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -1184.508f, -1383.379f, 3.676f };
					*uParam3 = 41.7869f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -1176.627f, -1389.754f, 3.7946f };
					*uParam3 = 178.9759f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -1178.76f, -1387.746f, 3.7692f };
					*uParam3 = 169.5914f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -1174.506f, -1387.742f, 3.8554f };
					*uParam3 = 177.9477f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -1176.679f, -1386.119f, 3.8363f };
					*uParam3 = 176.9071f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -1179.857f, -1384.373f, 3.7852f };
					*uParam3 = 31.5586f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -1182.702f, -1385.31f, 3.6949f };
					*uParam3 = 32.5507f;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 300.8729f, -760.0483f, 28.3163f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 301.644f, -761.9394f, 28.3147f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 302.4963f, -759.5029f, 28.3146f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 303.1685f, -761.8504f, 28.3129f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 303.9147f, -758.1395f, 28.3135f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 304.0247f, -759.9157f, 28.3126f };
					*uParam3 = 252.2312f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 301.4713f, -768.2782f, 28.3135f };
					*uParam3 = 251.8442f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 299.8669f, -768.9089f, 28.314f };
					*uParam3 = 251.4297f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 305.3434f, -753.3583f, 28.3635f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 300.4586f, -770.4727f, 28.3138f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 305.8705f, -751.4041f, 28.3331f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 299.1807f, -771.0784f, 28.314f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 304.6257f, -755.8135f, 28.3591f };
					*uParam3 = 250.0491f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 305.9816f, -754.7924f, 28.3666f };
					*uParam3 = 252.1873f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 305.3565f, -757.1442f, 28.3391f };
					*uParam3 = 252.1794f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 299.5625f, -772.7739f, 28.3129f };
					*uParam3 = 250.2665f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 298.1895f, -773.267f, 28.3143f };
					*uParam3 = 250.9776f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 306.5619f, -749.6814f, 28.3606f };
					*uParam3 = 249.635f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 296.4447f, -776.8649f, 28.315f };
					*uParam3 = 252.7087f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 298.3273f, -775.4174f, 28.3133f };
					*uParam3 = 252.8287f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 296.6829f, -779.392f, 28.3137f };
					*uParam3 = 252.3917f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 305.3011f, -746.433f, 28.3706f };
					*uParam3 = 249.7762f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 306.2274f, -743.625f, 28.3274f };
					*uParam3 = 250.7082f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 307.8594f, -745.611f, 28.3304f };
					*uParam3 = 250.6613f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 331.7643f, -776.8928f, 28.2729f };
					*uParam3 = 250.5341f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 333.6688f, -777.0743f, 28.2705f };
					*uParam3 = 253.4692f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 332.628f, -774.4262f, 28.2728f };
					*uParam3 = 250.8592f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 333.502f, -771.8655f, 28.2728f };
					*uParam3 = 250.0925f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 334.3142f, -769.5931f, 28.2727f };
					*uParam3 = 251.0598f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 334.5899f, -774.5726f, 28.2704f };
					*uParam3 = 252.1623f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 335.3888f, -771.9819f, 28.3202f };
					*uParam3 = 252.317f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 336.2341f, -769.4737f, 28.3241f };
					*uParam3 = 252.485f;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 202.4384f, 2460.56f, 54.7008f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 200.3708f, 2459.569f, 54.6941f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 204.7798f, 2461.436f, 54.7382f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 197.7557f, 2458.807f, 54.6885f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 209.0087f, 2462.064f, 54.995f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 195.4143f, 2457.931f, 54.6845f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 203.0973f, 2458.117f, 54.9177f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 200.5146f, 2457.358f, 54.8638f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 205.6361f, 2459.034f, 55.0299f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 197.6831f, 2456.498f, 54.8015f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 207.8435f, 2459.915f, 55.1618f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 193.8811f, 2455.494f, 54.7618f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 204.2549f, 2455.907f, 55.4142f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 201.4144f, 2454.887f, 55.3609f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 206.5325f, 2456.753f, 55.4914f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 198.5998f, 2454.434f, 55.1941f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 189.0531f, 2456.218f, 54.7092f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 191.8886f, 2457.324f, 54.709f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 205.7044f, 2454.345f, 55.8587f };
					*uParam3 = 199.802f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 208.7682f, 2448.124f, 56.7242f };
					*uParam3 = 176.6295f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 208.8698f, 2445.941f, 57.0429f };
					*uParam3 = 183.8303f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 208.921f, 2443.548f, 57.4307f };
					*uParam3 = 179.1214f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 210.8099f, 2446.077f, 57.0055f };
					*uParam3 = 179.0752f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 210.5056f, 2443.579f, 57.3852f };
					*uParam3 = 183.8073f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 210.0111f, 2441.083f, 57.7527f };
					*uParam3 = 182.8844f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 221.9835f, 2454.827f, 55.568f };
					*uParam3 = 220.7026f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 223.9979f, 2453.906f, 55.5964f };
					*uParam3 = 227.0621f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 225.4343f, 2451.767f, 55.7987f };
					*uParam3 = 222.8667f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 220.6236f, 2451.92f, 55.8987f };
					*uParam3 = 225.7103f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 222.4546f, 2451.069f, 55.9536f };
					*uParam3 = 218.0795f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 221.9027f, 2447.982f, 56.3041f };
					*uParam3 = 217.9536f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 224.5778f, 2449.227f, 56.1253f };
					*uParam3 = 219.4924f;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2847.011f, 4449.605f, 47.5172f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 2846.22f, 4451.674f, 47.5096f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 2847.621f, 4447.38f, 47.529f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 2845.616f, 4453.821f, 47.5014f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 2848.194f, 4445.377f, 47.5537f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 2844.906f, 4457.252f, 47.4885f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 2849.178f, 4442.182f, 47.5871f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 2844.703f, 4448.757f, 47.5378f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 2843.825f, 4451.375f, 47.5253f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 2845.385f, 4445.729f, 47.5674f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 2843.141f, 4454.131f, 47.5126f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 2846.374f, 4443.369f, 47.5935f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 2842.426f, 4456.444f, 47.5007f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 2847.056f, 4441.097f, 47.6161f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 2842.095f, 4447.47f, 47.6063f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 2841.025f, 4450.271f, 47.5853f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 2842.696f, 4444.979f, 47.6291f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 2840.147f, 4452.853f, 47.5646f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 2843.544f, 4442.544f, 47.649f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 2839.571f, 4456.108f, 47.5255f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 2844.417f, 4439.53f, 47.6648f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 2831.779f, 4448.949f, 47.5968f };
					*uParam3 = 105.5845f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 2829.416f, 4450.412f, 47.5575f };
					*uParam3 = 105.9704f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 2827.845f, 4448.272f, 47.552f };
					*uParam3 = 104.7238f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 2832.682f, 4445.754f, 47.6294f };
					*uParam3 = 108.1589f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 2830.632f, 4446.065f, 47.6127f };
					*uParam3 = 103.9698f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 2827.994f, 4445.047f, 47.5886f };
					*uParam3 = 106.2889f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 2833.556f, 4442.959f, 47.6539f };
					*uParam3 = 106.5517f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 2832.181f, 4441.663f, 47.6564f };
					*uParam3 = 107.0118f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 2829.993f, 4442.253f, 47.6317f };
					*uParam3 = 105.3059f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 2834.319f, 4440.601f, 47.6694f };
					*uParam3 = 104.0414f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 2831.103f, 4451.938f, 47.5644f };
					*uParam3 = 102.0362f;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 387.7582f, 3586.302f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 389.9273f, 3586.018f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 385.6169f, 3586.83f, 32.2922f };
					*uParam3 = 349.6432f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 392.1504f, 3585.552f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 382.9557f, 3587.489f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 395.2194f, 3585.07f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 379.778f, 3587.25f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 388.1639f, 3588.267f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 390.6552f, 3588.206f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 385.3867f, 3589.329f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 393.0392f, 3587.84f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 382.7778f, 3589.277f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 395.886f, 3587.45f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 380.7386f, 3589.377f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 399.8047f, 3585.266f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 397.985f, 3586.353f, 32.2922f };
					*uParam3 = 349.6487f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 382.2252f, 3591.336f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 393.1277f, 3589.675f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 377.7317f, 3589.697f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 397.7258f, 3584.719f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 377.1271f, 3587.714f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 370.688f, 3590.446f, 32.3428f };
					*uParam3 = 80.5106f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 368.9077f, 3591.223f, 32.3838f };
					*uParam3 = 79.9337f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 366.2635f, 3591.062f, 32.3747f };
					*uParam3 = 79.9504f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 368.8419f, 3589.05f, 32.3662f };
					*uParam3 = 98.6671f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 366.4835f, 3589.114f, 32.3813f };
					*uParam3 = 99.6186f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 367.3917f, 3587.067f, 32.3844f };
					*uParam3 = 103.9887f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 399.0821f, 3582.831f, 32.2922f };
					*uParam3 = 274.5721f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 397.9359f, 3580.618f, 32.2922f };
					*uParam3 = 270.0849f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 399.5165f, 3578.161f, 32.2922f };
					*uParam3 = 277.0565f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 397.8492f, 3576.081f, 32.2922f };
					*uParam3 = 271.5672f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 400.1925f, 3574.599f, 32.2922f };
					*uParam3 = 268.6003f;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 636.7584f, 2783.901f, 41.0148f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 638.9577f, 2784.131f, 41.003f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 635.178f, 2783.435f, 41.0234f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 641.8049f, 2784.373f, 40.9789f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 636.0968f, 2781.423f, 41.0241f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 638.8647f, 2782.25f, 41.004f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 641.239f, 2782.813f, 40.985f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 642.4758f, 2780.234f, 40.9586f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 635.9471f, 2778.688f, 41.0091f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 638.3111f, 2778.367f, 40.9891f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 639.8527f, 2779.901f, 40.9842f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 642.0136f, 2778.263f, 40.9502f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 636.3226f, 2775.713f, 40.9935f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 638.4607f, 2775.839f, 40.9691f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 640.7181f, 2776.25f, 40.9585f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 643.416f, 2776.179f, 40.9373f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 642.2759f, 2774.281f, 40.9994f };
					*uParam3 = 183.1321f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 637.4537f, 2773.959f, 40.9926f };
					*uParam3 = 181.1902f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 656.7316f, 2779.76f, 40.0253f };
					*uParam3 = 253.9082f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 658.9734f, 2779.85f, 39.8517f };
					*uParam3 = 247.4577f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 661.2719f, 2778.294f, 39.7406f };
					*uParam3 = 255.4666f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 657.0626f, 2782.89f, 40.0158f };
					*uParam3 = 257.8912f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 659.4348f, 2783.219f, 39.9377f };
					*uParam3 = 255.5625f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 661.8536f, 2781.601f, 39.7951f };
					*uParam3 = 256.4716f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 655.9114f, 2776.721f, 40.1675f };
					*uParam3 = 246.769f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 658.294f, 2775.655f, 39.9362f };
					*uParam3 = 250.3359f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 649.8104f, 2758.113f, 40.9581f };
					*uParam3 = 202.1911f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 646.8809f, 2756.072f, 40.9894f };
					*uParam3 = 202.1923f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 649.9106f, 2755.5f, 40.9632f };
					*uParam3 = 207.6483f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 647.5277f, 2754.009f, 40.9975f };
					*uParam3 = 205.1322f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 650.2255f, 2753f, 40.9791f };
					*uParam3 = 202.3729f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 648.0262f, 2751.444f, 41.0162f };
					*uParam3 = 202.3873f;
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1658.15f, 4851.813f, 40.9708f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1658.276f, 4849.651f, 40.9736f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1657.758f, 4853.26f, 40.9753f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1658.989f, 4847.902f, 40.9602f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1657.325f, 4856.115f, 40.9769f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1658.927f, 4846.244f, 40.9731f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1658.239f, 4854.739f, 40.9618f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1659.074f, 4844.279f, 40.9916f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1656.942f, 4859.155f, 40.9766f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1660.003f, 4843.225f, 41.0006f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1656.722f, 4861.201f, 40.9912f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1659.172f, 4841.862f, 41.0267f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1656.601f, 4864.011f, 40.9918f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1660.069f, 4840.661f, 41.0395f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1655.703f, 4865.665f, 40.9903f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1659.643f, 4838.247f, 41.0387f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 1660.14f, 4832.996f, 41.0229f };
					*uParam3 = 275.2459f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 1659.794f, 4835.752f, 41.0141f };
					*uParam3 = 278.0196f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 1661.941f, 4833.776f, 41.1119f };
					*uParam3 = 277.7381f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 1661.549f, 4836.435f, 41.0244f };
					*uParam3 = 274.7514f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 1661.489f, 4838.759f, 41.0411f };
					*uParam3 = 278.8962f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 1655.315f, 4867.271f, 41.0049f };
					*uParam3 = 273.6084f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 1657.146f, 4867.461f, 41.0091f };
					*uParam3 = 273.1697f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 1677.777f, 4856.469f, 41.0667f };
					*uParam3 = 280.4979f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 1679.346f, 4856.758f, 41.0701f };
					*uParam3 = 279.477f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 1678.172f, 4853.408f, 41.0605f };
					*uParam3 = 278.9321f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 1679.721f, 4853.639f, 41.0629f };
					*uParam3 = 279.0437f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 1678.836f, 4851.5f, 41.0594f };
					*uParam3 = 279.2171f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 1680.66f, 4851.491f, 41.062f };
					*uParam3 = 275.0026f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 1679.089f, 4848.174f, 41.0677f };
					*uParam3 = 277.5333f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 1681.196f, 4848.414f, 41.1096f };
					*uParam3 = 277.1605f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 1679.284f, 4845.882f, 41.0752f };
					*uParam3 = 277.2397f;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1180.008f, -3113.941f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1180.328f, -3115.91f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1180.166f, -3111.903f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1178.831f, -3112.848f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1180.209f, -3117.869f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1179.133f, -3118.838f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1178.594f, -3116.678f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1178.323f, -3114.968f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1179.49f, -3110.066f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1177.179f, -3118.62f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1176.903f, -3116.352f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1175.861f, -3117.51f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1178.662f, -3108.719f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1173.319f, -3101.817f, 4.871f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1177.55f, -3111.437f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1173.209f, -3105.283f, 4.8668f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 1175.919f, -3106.486f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 1173.226f, -3103.663f, 4.8676f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 1159.645f, -3121.636f, 4.9002f };
					*uParam3 = 97.9578f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 1157.716f, -3121.728f, 4.9002f };
					*uParam3 = 97.0644f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 1158.568f, -3123.692f, 4.8998f };
					*uParam3 = 122.424f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 1157.51f, -3125.975f, 4.8998f };
					*uParam3 = 107.9816f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 1155.896f, -3123.952f, 4.8998f };
					*uParam3 = 105.6486f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 1154.774f, -3126.999f, 4.8998f };
					*uParam3 = 103.6211f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 1153.393f, -3124.778f, 4.8998f };
					*uParam3 = 101.0198f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 1158.288f, -3102.878f, 4.9902f };
					*uParam3 = 77.9229f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 1158.517f, -3100.299f, 4.9546f };
					*uParam3 = 79.1152f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 1156.171f, -3103.662f, 4.9685f };
					*uParam3 = 75.0904f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 1156.371f, -3100.193f, 4.9431f };
					*uParam3 = 74.7444f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 1153.777f, -3103.074f, 4.9603f };
					*uParam3 = 73.65f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 1153.44f, -3099.459f, 4.8484f };
					*uParam3 = 75.6482f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 1151.632f, -3100.848f, 4.8632f };
					*uParam3 = 79.6286f;
					return 1;
					break;
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 138.0663f, -2473.504f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 136.3854f, -2475.245f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 139.1002f, -2471.585f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 138.6979f, -2476.101f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 140.4441f, -2473.812f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 137.2626f, -2478.607f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 141.969f, -2473.219f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 140.0273f, -2478.052f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 141.3555f, -2475.992f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 139.7461f, -2480.466f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 142.5122f, -2478.598f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 135.1875f, -2480.385f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 143.2373f, -2476.152f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 132.9111f, -2480.146f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 134.4167f, -2478.11f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 140.5661f, -2468.9f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 142.0223f, -2482.411f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 145.7824f, -2475.572f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 145.0857f, -2481.146f, 5f };
					*uParam3 = 241.0637f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 149.7415f, -2483.427f, 4.9946f };
					*uParam3 = 233.5104f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 151.0793f, -2481.512f, 4.9918f };
					*uParam3 = 237.4624f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 150.278f, -2485.416f, 4.9934f };
					*uParam3 = 231.6367f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 151.9404f, -2483.232f, 4.9899f };
					*uParam3 = 236.0939f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 152.8993f, -2479.957f, 4.9879f };
					*uParam3 = 237.5987f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 133.5043f, -2488.922f, 5f };
					*uParam3 = 188.3722f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 129.2173f, -2487.895f, 5f };
					*uParam3 = 190.1083f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 131.1706f, -2489.566f, 5f };
					*uParam3 = 190.6198f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 128.6361f, -2490.336f, 5f };
					*uParam3 = 189.1775f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 131.2855f, -2486.54f, 5f };
					*uParam3 = 178.5667f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 164.5286f, -2503.107f, 4.9877f };
					*uParam3 = 210.2661f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 166.7715f, -2502.821f, 4.9877f };
					*uParam3 = 222.8792f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 166.6136f, -2500.656f, 4.9877f };
					*uParam3 = 224.8715f;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -254.7741f, -2591.237f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -254.2472f, -2589.173f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -255.9361f, -2589.8f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -256.4702f, -2591.925f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -255.5893f, -2587.77f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -257.3896f, -2588.713f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -254.1175f, -2586.838f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -258.2581f, -2591.568f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -257.0626f, -2586.202f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -254.7318f, -2583.701f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -256.1104f, -2581.662f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -256.0175f, -2578.75f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -260.2751f, -2592.114f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -259.7165f, -2588.463f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -260.1514f, -2584.909f, 5.0006f };
					*uParam3 = 87.0548f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -258.7704f, -2582.351f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -259.4825f, -2577.276f, 5.0006f };
					*uParam3 = 85.035f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -256.7663f, -2576.331f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -262.3983f, -2590.654f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -262.6156f, -2586.526f, 5.0006f };
					*uParam3 = 89.4713f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -262.3634f, -2579.592f, 5.0006f };
					*uParam3 = 86.8199f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -261.7182f, -2574.861f, 5.0006f };
					*uParam3 = 86.2061f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -267.5555f, -2577.93f, 5.0006f };
					*uParam3 = 83.4103f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -267.5865f, -2581.382f, 5.0006f };
					*uParam3 = 87.6697f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -267.617f, -2584.89f, 5.0006f };
					*uParam3 = 87.6113f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -269.2955f, -2579.781f, 5.0006f };
					*uParam3 = 85.1179f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -269.4418f, -2583.528f, 5.0006f };
					*uParam3 = 91.6965f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -269.4679f, -2587.305f, 5.0006f };
					*uParam3 = 85.5674f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -267.6761f, -2588.577f, 5.0006f };
					*uParam3 = 93.8343f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -267.8046f, -2592.208f, 5.0006f };
					*uParam3 = 87.5751f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -269.5222f, -2591.366f, 5.0006f };
					*uParam3 = 81.9741f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -268.9472f, -2576.6f, 5.0006f };
					*uParam3 = 75.5813f;
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 669.7007f, -2667.473f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 669.231f, -2665.484f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 669.0834f, -2669.401f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 668.0314f, -2663.945f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 667.9921f, -2671.486f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 666.2173f, -2670.253f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 666.6612f, -2667.444f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 665.793f, -2664.566f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 661.1834f, -2676.746f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 666.8834f, -2661.508f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 668.1364f, -2674.156f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 665.6526f, -2659.557f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 663.9605f, -2667.421f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 662.535f, -2664.509f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 664.0994f, -2672.019f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 664.0226f, -2661.625f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 664.3822f, -2675.418f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 662.1806f, -2658.619f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 660.0225f, -2667.873f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 660.0655f, -2660.887f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 661.6735f, -2670.785f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 656.705f, -2676.673f, 5.0812f };
					*uParam3 = 100.8788f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 656.0792f, -2673.96f, 5.0812f };
					*uParam3 = 99.2975f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 655.5352f, -2670.899f, 5.0812f };
					*uParam3 = 99.1658f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 653.8568f, -2676.434f, 5.0812f };
					*uParam3 = 97.2009f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 653.2253f, -2672.987f, 5.0812f };
					*uParam3 = 97.3717f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 652.6971f, -2669.823f, 5.0813f };
					*uParam3 = 97.5774f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 654.711f, -2667.657f, 5.0812f };
					*uParam3 = 95.4195f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 650.9651f, -2662.287f, 5.0812f };
					*uParam3 = 83.2365f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 649.9758f, -2659.71f, 5.0812f };
					*uParam3 = 86.645f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 648.4595f, -2662.943f, 5.0812f };
					*uParam3 = 83.3265f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 647.6133f, -2660.099f, 5.0812f };
					*uParam3 = 83.2693f;
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -334.7377f, -2778.969f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -332.9008f, -2777.119f, 4.1404f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -332.8945f, -2780.276f, 4.1404f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -335.8614f, -2781f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -332.6457f, -2783.388f, 4.1419f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -332.4783f, -2773.841f, 4.1427f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -336.0079f, -2776.739f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -337.6867f, -2778.881f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -334.9099f, -2773.802f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -335.4647f, -2783.445f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -337.251f, -2774.992f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -337.6528f, -2782.365f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -334.2122f, -2771.273f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -335.373f, -2786.233f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -339.5327f, -2779.679f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -340.4634f, -2776.157f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -349.4742f, -2775.465f, 4.2003f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -338.7712f, -2771.949f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -348.5268f, -2773.766f, 4.2003f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -338.1402f, -2768.364f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -338.4236f, -2786.433f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -335.0887f, -2768.659f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -347.0583f, -2771.73f, 4.2003f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -332.9932f, -2787.717f, 4.1432f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -342.6335f, -2762.514f, 4.6528f };
					*uParam3 = 49.6019f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -343.9058f, -2764.623f, 4.5421f };
					*uParam3 = 51.5582f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -346.0114f, -2766.939f, 4.5172f };
					*uParam3 = 47.8237f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -347.4135f, -2765.141f, 4.9457f };
					*uParam3 = 44.168f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -345.9332f, -2762.928f, 5.0394f };
					*uParam3 = 44.4418f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -344.9213f, -2760.781f, 5.037f };
					*uParam3 = 44.0803f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -349.189f, -2763.793f, 5.0415f };
					*uParam3 = 43.7607f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -347.8954f, -2761.332f, 5.0404f };
					*uParam3 = 43.9496f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_491(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -11.5018f, -3.771f, 1.1068f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -11.1996f, -4.8818f, 1.1068f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -11.9667f, 0.9038f, 0.1068f };
					*uParam3 = 271.44f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -8.3604f, 0.5366f, -1.4932f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -6.5717f, 0.5698f, -1.4932f };
					*uParam3 = 270.36f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -6.5812f, -1.554f, -1.4932f };
					*uParam3 = 266.04f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -4.9359f, 0.5994f, -1.4932f };
					*uParam3 = 267.84f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -5.4576f, -2.2556f, -1.4932f };
					*uParam3 = 267.12f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -2.1296f, -3.4199f, -1.4932f };
					*uParam3 = 271.44f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -3.3931f, 0.6641f, -1.4932f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1.6493f, 0.6008f, -1.4932f };
					*uParam3 = 271.08f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -0.5912f, -3.447f, -1.4932f };
					*uParam3 = 269.28f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -0.137f, 0.7095f, -1.4932f };
					*uParam3 = 268.92f;
					return 1;
					break;
			}
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 15.873f, 13.3074f, -1.6635f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 15.7094f, 14.8108f, -1.6626f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 15.2938f, 11.9883f, -1.6642f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 14.5515f, 13.0491f, -1.6634f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 14.457f, 14.3352f, -1.6628f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 13.9866f, 11.9121f, -1.6643f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 12.744f, 13.7371f, -1.6637f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 12.646f, 12.427f, -1.6638f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 12.5011f, 11.0618f, -1.6648f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 11.52f, 14.1372f, -1.6645f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 11.495f, 12.7761f, -1.6645f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 11.2906f, 11.1682f, -1.6647f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -4.8052f, 8.3174f, -1.4935f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -5.0101f, 7.2205f, -1.4935f };
					*uParam3 = 178.2258f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -4.9868f, 5.7422f, -1.4935f };
					*uParam3 = 181.7104f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -5.0342f, 3.6167f, -1.4935f };
					*uParam3 = 255.7617f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -4.1292f, 3.5083f, -1.4935f };
					*uParam3 = 260.0012f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -5.9457f, 2.7358f, -1.4935f };
					*uParam3 = 183.243f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -5.99f, 0.7227f, -1.4935f };
					*uParam3 = 226.1079f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -5.9446f, -1.4463f, -1.4935f };
					*uParam3 = 271.2191f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -4.1721f, -1.4917f, -1.4935f };
					*uParam3 = 268.175f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1.9153f, -1.5291f, -1.4935f };
					*uParam3 = 268.2025f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1.8743f, 3.0684f, -1.4935f };
					*uParam3 = 264.3273f;
					return 1;
					break;
			}
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 13.2156f, -1.9326f, -2.1607f };
					*uParam3 = 357.8796f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 12.1537f, -0.2056f, -2.1607f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 13.3557f, 1.7976f, -2.8962f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 12.0094f, 1.9473f, -2.8996f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 10.7483f, -0.1853f, -2.1607f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 10.3102f, 1.7913f, -2.9005f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 9.3082f, -0.1772f, -2.1607f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 5.1066f, 1.8057f, -2.9004f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 8.5474f, 2.2549f, -2.8977f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 7.9846f, -0.1001f, -2.1607f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 6.8645f, 0.0144f, -2.1607f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 5.4856f, -0.0378f, -2.1607f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 3.1495f, 1.7048f, -2.901f };
					*uParam3 = 90f;
					return 1;
					break;
			}
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 8.1375f, 0.041f, -1.808f };
					*uParam3 = 90.5126f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 7.4933f, -1.6084f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 7.8275f, 1.4553f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 6.1877f, -1.5391f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 6.6771f, 1.4951f, -1.808f };
					*uParam3 = 87.6196f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 4.8105f, 1.9807f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 3.0282f, -1.584f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 2.5529f, 1.9456f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 0.3383f, 2.2065f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 0.8707f, -2.1997f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1.0348f, 2.189f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_492(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312.f_3 = 0;
	if (func_468(unk_0xBE369BE1BC57A796(), 1))
	{
		if (func_478(unk_0xBE369BE1BC57A796()))
		{
			unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 0);
			unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 10);
		}
		else
		{
			unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 1);
			switch (func_499(unk_0xBE369BE1BC57A796()))
			{
				case -1:
					unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 14);
					break;
				
				case 0:
					unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 11);
					break;
				
				case 1:
					unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 12);
					break;
				
				case 2:
					unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 13);
					break;
				
				case 3:
					unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 15);
					break;
				}
		}
		iVar0 = func_476(unk_0xBE369BE1BC57A796());
		if (iVar0 != func_48() && iVar0 != unk_0xBE369BE1BC57A796())
		{
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312.f_3), iVar0);
		}
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = unk_0x0C36F33B3F746611(iVar2);
			if ((iVar1 != func_48() && iVar1 != unk_0xBE369BE1BC57A796()) && iVar1 != iVar0)
			{
				if (func_3(iVar1, 1, 1))
				{
					if (func_495(iVar1, iVar0, 1))
					{
						unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312.f_3), iVar1);
					}
				}
			}
			iVar2++;
		}
	}
	else if (func_493(unk_0xBE369BE1BC57A796(), func_466(iParam0)))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 2);
	}
}

int func_493(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_494(iParam1) && iParam0 != func_48())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_494(int iParam0)
{
	if (iParam0 == 21 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_495(int iParam0, int iParam1, bool bParam2)
{
	return func_496(iParam0, iParam1, bParam2, 1);
}

int func_496(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_48() && iParam0 != func_48())
	{
		if (!bParam2)
		{
			if (func_498(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1619421[iParam0 /*390*/].f_11 != func_48())
		{
			if (iParam1 == Global_1619421[iParam0 /*390*/].f_11)
			{
				return func_497(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_497(int iParam0, int iParam1)
{
	if (func_207(iParam0))
	{
		return Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1;
	}
	return 0;
}

int func_498(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_48())
	{
		if (iParam0 != func_48())
		{
			if (Global_1619421[iParam0 /*390*/].f_11 != func_48())
			{
				if (Global_1619421[iParam0 /*390*/].f_11 == iParam0)
				{
					if (Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_499(int iParam0)
{
	if (func_206(iParam0, 1))
	{
		return Global_1619421[iParam0 /*390*/].f_11.f_290;
	}
	return -1;
}

char* func_500(var uParam0, char* sParam1, var uParam2)
{
	if (Global_1764677.f_593)
	{
		Global_1764677.f_593 = 0;
		return "MP_FACTORY_KICKe";
	}
	if (Global_1764677.f_2 == 0)
	{
		return "MP_FACTORY_KICKc";
	}
	if (unk_0x48B8265059381CD0(Global_1764677.f_2, 1))
	{
		if (!func_468(unk_0xBE369BE1BC57A796(), 0))
		{
			return "MP_FACTORY_KICKb";
		}
	}
	if (unk_0x48B8265059381CD0(Global_1764677.f_2, 0))
	{
		if (func_468(unk_0xBE369BE1BC57A796(), 0) || (func_206(unk_0xBE369BE1BC57A796(), 1) && !func_468(unk_0xBE369BE1BC57A796(), 1)))
		{
			return "MP_FACTORY_KICKa";
		}
	}
	if (unk_0x48B8265059381CD0(Global_1764677.f_2, 0) || unk_0x48B8265059381CD0(Global_1764677.f_2, 2))
	{
		if (func_468(unk_0xBE369BE1BC57A796(), 0))
		{
			StringCopy(sParam1, func_501(unk_0xBE369BE1BC57A796(), 0), 64);
			return "MP_FACTORY_KICKd";
		}
	}
	return "";
}

char* func_501(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_468(iParam0, 1))
		{
			if (func_478(iParam0))
			{
				return "PI_BIK_PR_T";
			}
			else
			{
				switch (func_499(iParam0))
				{
					case 0:
						return "PI_BIK_V_T";
					
					case 1:
						return "PI_BIK_R_T";
					
					case 2:
						return "PI_BIK_S_T";
					
					case 3:
						return "PI_BIK_E_T";
					
					default:
				}
				return "PI_BIK_P_T";
			}
		}
	}
	else if (func_468(iParam0, 1))
	{
		if (func_478(iParam0))
		{
			return "PI_BIK_PR";
		}
		else
		{
			switch (func_499(iParam0))
			{
				case 0:
					return "PI_BIK_V";
				
				case 1:
					return "PI_BIK_R";
				
				case 2:
					return "PI_BIK_S";
				
				case 3:
					return "PI_BIK_E";
				
				default:
			}
			return "PI_BIK_P";
		}
	}
	return "";
}

bool func_502(int iParam0, var uParam1)
{
	if (Global_1764677.f_2 == 0)
	{
		return 1;
	}
	if (func_206(unk_0xBE369BE1BC57A796(), 1) && !func_468(unk_0xBE369BE1BC57A796(), 1))
	{
		return 1;
	}
	if (unk_0x48B8265059381CD0(Global_1764677.f_2, 1))
	{
		if (!func_468(unk_0xBE369BE1BC57A796(), 0))
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_1764677.f_2, 0) || unk_0x48B8265059381CD0(Global_1764677.f_2, 2))
	{
		if (func_468(unk_0xBE369BE1BC57A796(), 0))
		{
			return 1;
		}
	}
	return !func_522(unk_0xBE369BE1BC57A796(), iParam0);
}

void func_503(int iParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (func_478(unk_0xBE369BE1BC57A796()) && func_515(unk_0xBE369BE1BC57A796(), iParam0))
	{
		func_559(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar8 = 0;
		while (iVar8 < func_511())
		{
			iVar6 = func_510(unk_0xBE369BE1BC57A796(), iVar8);
			if ((iVar6 != func_48() && iVar6 != unk_0xBE369BE1BC57A796()) && func_3(iVar6, 1, 1))
			{
				Var3 = { func_172(iVar6) };
				Var3.f_2 = 0f;
				if (unk_0x2A488C176D52CCA5(Var3, Var0) <= IntToFloat(func_509(iParam0)))
				{
					iVar7++;
				}
			}
			iVar8++;
		}
		if (iVar7 == 0)
		{
			func_507(uParam1, 1, 0);
		}
		else
		{
			func_507(uParam1, 1, 1);
		}
		if (func_506(1, uParam1))
		{
			if (iVar7 > 0)
			{
				func_504(unk_0xBE369BE1BC57A796(), iParam0);
			}
			Global_1764677.f_1 = -1;
			Global_1764677.f_708 = 1;
			Global_1764677.f_709 = iParam0;
			Global_1764677.f_710 = 0;
			Global_1764677.f_715 = 1;
		}
	}
	else
	{
		func_507(uParam1, 1, 0);
	}
}

void func_504(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 545;
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	iVar3 = func_505(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x504D0D40319365B7(1, &Var0, 3, iVar3);
	}
}

var func_505(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x0C36F33B3F746611(iVar1);
		if (func_3(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xBE369BE1BC57A796() || iParam0)
			{
				if (bParam1)
				{
					unk_0xEB79FECD9022AAF0(&uVar0, iVar1);
				}
				else if (!func_78(iVar2, 0))
				{
					unk_0xEB79FECD9022AAF0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_506(int iParam0, var uParam1)
{
	if (unk_0x48B8265059381CD0(uParam1->f_2, 1))
	{
		return uParam1->f_4 == iParam0;
	}
	return 0;
}

void func_507(var uParam0, int iParam1, bool bParam2)
{
	if (func_508(uParam0, iParam1))
	{
		if (bParam2)
		{
			if (!unk_0x48B8265059381CD0(uParam0->f_3, iParam1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam0->f_3), iParam1);
				uParam0->f_1 = 0;
				unk_0x21E7933CCC7B3724(&(uParam0->f_2), 0);
			}
		}
		else if (unk_0x48B8265059381CD0(uParam0->f_3, iParam1))
		{
			unk_0x21E7933CCC7B3724(&(uParam0->f_3), iParam1);
			uParam0->f_1 = 0;
			unk_0x21E7933CCC7B3724(&(uParam0->f_2), 0);
		}
	}
}

bool func_508(var uParam0, int iParam1)
{
	return (iParam1 > -1 && iParam1 < uParam0->f_5);
}

int func_509(int iParam0)
{
	return 20;
}

int func_510(int iParam0, int iParam1)
{
	if (func_207(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 7)
		{
			return Global_1619421[iParam0 /*390*/].f_11.f_10[iParam1];
		}
	}
	return func_48();
}

int func_511()
{
	if (func_204() == func_48())
	{
		return 0;
	}
	return func_512(func_204());
}

var func_512(int iParam0)
{
	return Global_1619421[iParam0 /*390*/].f_11.f_18;
}

void func_513(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			StringCopy(sParam1, "BIKER_WH_1", 64);
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			StringCopy(sParam1, "BIKER_WH_2", 64);
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			StringCopy(sParam1, "BIKER_WH_3", 64);
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			StringCopy(sParam1, "BIKER_WH_4", 64);
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			StringCopy(sParam1, "BIKER_WH_5", 64);
			break;
		
		default:
			StringCopy(sParam1, "MP_WHOUSE_EXIT", 64);
			break;
	}
	(*uParam2)[0] = "BWH_ENTRM_ALONE";
	(*uParam3)[0] = 3;
	(*uParam2)[1] = "BWH_ENTRM_GANG";
	(*uParam3)[1] = 3;
	*uParam4 = 2;
}

int func_514(int iParam0, int iParam1)
{
	if (func_468(iParam0, 0) && func_493(func_476(iParam0), func_466(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_515(int iParam0, int iParam1)
{
	if (func_478(iParam0) && func_493(iParam0, func_466(iParam1)))
	{
		if (func_331(iParam0, 0))
		{
			if (func_516(unk_0xBE369BE1BC57A796()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_516(int iParam0)
{
	return func_517(func_330(iParam0));
}

int func_517(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

char* func_518(int iParam0, char* sParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (func_493(unk_0xBE369BE1BC57A796(), func_466(iParam0)))
	{
		if (func_206(unk_0xBE369BE1BC57A796(), 1))
		{
			if (!func_468(unk_0xBE369BE1BC57A796(), 1))
			{
				if (func_207(unk_0xBE369BE1BC57A796()))
				{
					if (func_203(unk_0xBE369BE1BC57A796()))
					{
						return "BWH_MC_BLOCK_EXEb";
					}
					else
					{
						return "BWH_MC_BLOCK_EXEa";
					}
				}
				else if (func_203(func_476(unk_0xBE369BE1BC57A796())))
				{
					return "BWH_MC_BLOCK_EXEd";
				}
				else
				{
					return "BWH_MC_BLOCK_EXEc";
				}
			}
			else if (!func_478(unk_0xBE369BE1BC57A796()) && !func_493(func_476(unk_0xBE369BE1BC57A796()), func_466(iParam0)))
			{
				StringCopy(sParam1, func_501(unk_0xBE369BE1BC57A796(), 0), 64);
				return "BWH_MC_BLOCK_BKRa";
			}
		}
	}
	if (func_521())
	{
		iVar0 = func_476(unk_0xBE369BE1BC57A796());
		if (iVar0 != func_48())
		{
			Var1 = { Global_1619421[iVar0 /*390*/].f_11.f_184 };
			if (func_466(iParam0) != Var1.f_0)
			{
				if (func_519(iVar0, Var1.f_0))
				{
					return "BWH_MC_BLOCK_BKRc";
				}
				else
				{
					return "BWH_MC_BLOCK_BKRb";
				}
			}
		}
	}
	return "";
}

int func_519(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_493(iParam0, iParam1))
	{
		iVar0 = func_520(iParam0, iParam1);
		if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_4 > 0 && Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_520(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_494(iParam1) && iParam0 != func_48())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_521()
{
	if (func_468(unk_0xBE369BE1BC57A796(), 1) && func_331(unk_0xBE369BE1BC57A796(), 0))
	{
		if (func_330(unk_0xBE369BE1BC57A796()) == 192)
		{
			return 1;
		}
	}
	return 0;
}

int func_522(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_466(iParam1);
	if (iParam0 != func_48())
	{
		if (func_468(iParam0, 1))
		{
			return func_493(func_476(iParam0), iVar0);
		}
		else if (func_493(iParam0, iVar0) && !func_206(unk_0xBE369BE1BC57A796(), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_523(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	bool bVar4;
	
	if (Global_1573331 && !func_516(unk_0xBE369BE1BC57A796()))
	{
		return 1;
	}
	if (unk_0xF7271A9481CAC8E3())
	{
		return 1;
	}
	bVar0 = false;
	if (func_206(unk_0xBE369BE1BC57A796(), 1) && func_331(unk_0xBE369BE1BC57A796(), 0))
	{
		if (func_516(unk_0xBE369BE1BC57A796()))
		{
			if (func_330(unk_0xBE369BE1BC57A796()) == 192)
			{
				iVar1 = func_476(unk_0xBE369BE1BC57A796());
				if (iVar1 != -1)
				{
					Var2 = { Global_1619421[iVar1 /*390*/].f_11.f_184 };
					if (func_466(iParam0) != Var2.f_0)
					{
						return 1;
					}
					else
					{
						bVar0 = true;
					}
				}
			}
			else
			{
				return 1;
			}
		}
	}
	if (!func_538(1) && !bVar0)
	{
		return 1;
	}
	bVar4 = false;
	if (func_524(bVar4, 4))
	{
		return 1;
	}
	return 0;
}

int func_524(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	bVar1 = false;
	if (iParam1 == 1)
	{
		bVar1 = true;
	}
	else if (iParam1 == 2)
	{
		bVar0 = true;
	}
	if (Global_1573332 != 0)
	{
		if (!bVar0 && iParam1 != 4)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		else if (bVar0)
		{
			iVar2 = Global_1573332;
			unk_0x21E7933CCC7B3724(&iVar2, 4);
			if (iVar2 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
		else if (iParam1 == 4)
		{
			iVar3 = Global_1573332;
			unk_0x21E7933CCC7B3724(&iVar3, 6);
			if (iVar3 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
	}
	if (((func_534(unk_0xBE369BE1BC57A796()) && !func_532()) && !(iParam1 == 4 && func_516(unk_0xBE369BE1BC57A796()))) && !(iParam1 == 3 && func_529()))
	{
		return 1;
	}
	if (func_528(unk_0xBE369BE1BC57A796(), 21))
	{
		return 1;
	}
	if (bVar1)
	{
		if (func_525() && unk_0xF7271A9481CAC8E3())
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 9)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (Global_262145.f_13473)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (func_335(unk_0xBE369BE1BC57A796()) || func_334(unk_0xBE369BE1BC57A796()))
		{
			if (bParam0)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_525()
{
	if (unk_0xF7271A9481CAC8E3())
	{
		return func_527();
	}
	return func_526(Global_1633501.f_88646);
}

int func_526(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_527()
{
	return Global_2443134.f_12;
}

bool func_528(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_211, iParam1);
}

int func_529()
{
	return func_530(unk_0xBE369BE1BC57A796());
}

int func_530(int iParam0)
{
	if (func_331(iParam0, 0))
	{
		if (func_531(func_330(iParam0)))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_531(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_532()
{
	return func_533(unk_0xBE369BE1BC57A796());
}

int func_533(int iParam0)
{
	if (((func_330(iParam0) == 167 || func_330(iParam0) == 168) || func_330(iParam0) == 190) || func_330(iParam0) == 178)
	{
		return 1;
	}
	return 0;
}

int func_534(int iParam0)
{
	if (func_537(iParam0))
	{
		return 1;
	}
	if (func_535(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_535(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_536(iParam0, 9);
	}
	return 0;
}

bool func_536(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_11.f_4, iParam1);
}

int func_537(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0x48B8265059381CD0(Global_1619421[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

int func_538(bool bParam0)
{
	if (!func_549(60, 0, 0) && !bParam0)
	{
		return 0;
	}
	if (func_548(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (func_547(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (func_546(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (func_545())
	{
		return 0;
	}
	if (func_544())
	{
		return 0;
	}
	if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 1 || Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 3)
	{
		return 0;
	}
	if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 32)
	{
		return 0;
	}
	if (func_542(unk_0xBE369BE1BC57A796(), 134))
	{
		return 1;
	}
	if (func_279(unk_0xBE369BE1BC57A796(), 1))
	{
		return 0;
	}
	if (func_541())
	{
		return 0;
	}
	if (func_540())
	{
		return 0;
	}
	if (Global_1574322)
	{
		return 0;
	}
	if (func_539())
	{
		return 0;
	}
	if (func_76(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	return 1;
}

bool func_539()
{
	return Global_1315210;
}

bool func_540()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 0);
}

int func_541()
{
	int iVar0;
	
	iVar0 = Global_2433125;
	if (unk_0x48B8265059381CD0(Global_1618300[iVar0 /*35*/].f_13, 0) && Global_1618300[iVar0 /*35*/].f_22 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_542(int iParam0, int iParam1)
{
	return iParam1 == func_543(iParam0);
}

int func_543(int iParam0)
{
	if (func_3(iParam0, 0, 1))
	{
		return Global_2421664[iParam0 /*358*/].f_1;
	}
	return 0;
}

bool func_544()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 148;
}

bool func_545()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 5;
}

bool func_546(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 4;
}

bool func_547(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 6;
}

bool func_548(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 5;
}

bool func_549(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6591 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_553(unk_0xBE369BE1BC57A796(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4882 == 1)
		{
			return 1;
		}
	}
	if (func_552() || func_551())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_550())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0x48B8265059381CD0(Global_1574358[iVar1], iVar0);
}

int func_550()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0x48B8265059381CD0(Global_2494199.f_1639, 23))
	{
		return 1;
	}
	if (func_552())
	{
		return 1;
	}
	if (func_551())
	{
		return 1;
	}
	uVar0 = Global_1363267[func_99(-1)];
	if (unk_0x48B8265059381CD0(uVar0, 7))
	{
		unk_0xEB79FECD9022AAF0(&(Global_2494199.f_1639), 23);
		return 1;
	}
	return 0;
}

bool func_551()
{
	return Global_1315221;
}

bool func_552()
{
	return Global_1315223;
}

bool func_553(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_556())
	{
		return 0;
	}
	if (func_555())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_554(iParam1);
	iVar1 = uVar0;
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_491, iVar1);
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_555()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_143, 3);
}

int func_556()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_552())
	{
		return 1;
	}
	if (func_551())
	{
		return 1;
	}
	return func_557(120, -1);
}

int func_557(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522581[iParam0 /*3*/][func_99(iParam1)];
	if (unk_0x70BD7CFD9F825957(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_558(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	unk_0xE3B46F8779F1AB2E(9, uParam1, uParam2, uParam3, uParam4);
}

void func_559(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 22:
			*uParam1 = { 52.903f, 6338.585f, 30.35f };
			break;
		
		case 23:
			*uParam1 = { 416.7524f, 6520.753f, 26.7121f };
			break;
		
		case 24:
			*uParam1 = { 51.7653f, 6486.163f, 30.428f };
			break;
		
		case 25:
			*uParam1 = { -413.6606f, 6171.938f, 30.4782f };
			break;
		
		case 26:
			*uParam1 = { -163.6828f, 6334.845f, 30.5808f };
			break;
		
		case 27:
			*uParam1 = { 1454.671f, -1651.986f, 66f };
			break;
		
		case 28:
			*uParam1 = { 102.14f, 175.26f, 103.56f };
			break;
		
		case 29:
			*uParam1 = { -1462.622f, -381.826f, 37.802f };
			break;
		
		case 30:
			*uParam1 = { -1171.005f, -1380.922f, 3.937f };
			break;
		
		case 31:
			*uParam1 = { 299.071f, -759.072f, 28.333f };
			break;
		
		case 32:
			*uParam1 = { 201.8909f, 2461.782f, 54.6885f };
			break;
		
		case 33:
			*uParam1 = { 2848.369f, 4450.147f, 47.5139f };
			break;
		
		case 34:
			*uParam1 = { 387.5332f, 3585.042f, 32.2922f };
			break;
		
		case 35:
			*uParam1 = { 636.6344f, 2785.126f, 41.0111f };
			break;
		
		case 36:
			*uParam1 = { 1657.066f, 4851.732f, 40.9882f };
			break;
		
		case 37:
			*uParam1 = { 1181.44f, -3113.82f, 5.03f };
			break;
		
		case 38:
			*uParam1 = { 136.973f, -2472.795f, 4.98f };
			break;
		
		case 39:
			*uParam1 = { -253.31f, -2591.15f, 4.97f };
			break;
		
		case 40:
			*uParam1 = { 671.451f, -2667.502f, 5.0812f };
			break;
		
		case 41:
			*uParam1 = { -331.52f, -2778.97f, 4.12f };
			break;
	}
}

void func_560(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			*uParam1 = { 992.9876f, -3203.402f, -40.4781f };
			uParam1->f_3 = { 1019.888f, -3192.728f, -32.2875f };
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			*uParam1 = { 1029.689f, -3209.573f, -40.485f };
			uParam1->f_3 = { 1071.916f, -3179.999f, -33.487f };
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			*uParam1 = { 1084.857f, -3200.893f, -40.493f };
			uParam1->f_3 = { 1104.715f, -3182.607f, -35.253f };
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			*uParam1 = { 1114.766f, -3204.229f, -41.563f };
			uParam1->f_3 = { 1145.767f, -3191.791f, -32.698f };
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			*uParam1 = { 1155f, -3200.515f, -40.05f };
			uParam1->f_3 = { 1176.79f, -3189.532f, -34.785f };
			break;
	}
}

char* func_561(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			return "BWH_METH";
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			return "BWH_WEED";
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			return "BWH_CRACK";
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			return "BWH_MONEY";
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			return "BWH_DOCUMENTS";
			break;
	}
	return "MISSING";
}

void func_562(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 22:
			func_567(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 50.8801f, 6336.875f, 32.139f };
			uParam1->f_22.f_9 = { -0.7937f, 0f, -63.3392f };
			uParam1->f_22.f_12 = 40.1256f;
			uParam1->f_22.f_14 = { 53.457f, 6337.362f, 30.641f };
			uParam1->f_22.f_17 = { 0f, 0f, -150.84f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 59.6936f, 6359.301f, 36.3307f };
			uParam1->f_22.f_43 = { -1.8386f, 0f, 163.8716f };
			uParam1->f_22.f_46 = 42.6393f;
			break;
		
		case 23:
			func_566(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 416.6734f, 6524.713f, 28.1782f };
			uParam1->f_22.f_9 = { 0.8228f, 0f, 172.1154f };
			uParam1->f_22.f_12 = 30.8437f;
			uParam1->f_22.f_14 = { 415.99f, 6520.941f, 26.755f };
			uParam1->f_22.f_17 = { 0f, 0f, 87.48f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 435.9453f, 6546.208f, 36.2606f };
			uParam1->f_22.f_43 = { -7.4123f, 0f, 132.5485f };
			uParam1->f_22.f_46 = 45.7557f;
			break;
		
		case 24:
			func_565(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 49.1174f, 6487.856f, 32.0173f };
			uParam1->f_22.f_9 = { -2.8312f, 0f, -130.0002f };
			uParam1->f_22.f_12 = 33.4542f;
			uParam1->f_22.f_14 = { 51.26f, 6485.603f, 30.428f };
			uParam1->f_22.f_17 = { 0f, 0f, 136.44f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 67.5147f, 6496.154f, 37.7476f };
			uParam1->f_22.f_43 = { -6.3943f, 0f, 136.1353f };
			uParam1->f_22.f_46 = 44.9118f;
			break;
		
		case 25:
			func_564(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -415.9254f, 6173.274f, 32.269f };
			uParam1->f_22.f_9 = { -3.4101f, 0f, -137.4814f };
			uParam1->f_22.f_12 = 32.1246f;
			uParam1->f_22.f_14 = { -414.329f, 6171.476f, 30.681f };
			uParam1->f_22.f_17 = { 0f, 0f, 136.44f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -415.8688f, 6186.694f, 36.3816f };
			uParam1->f_22.f_43 = { -7.4606f, 0f, -177.6217f };
			uParam1->f_22.f_46 = 46.3689f;
			break;
		
		case 26:
			func_563(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -165.6212f, 6335.806f, 32.2612f };
			uParam1->f_22.f_9 = { -2.5946f, 0f, -137.973f };
			uParam1->f_22.f_12 = 39.2599f;
			uParam1->f_22.f_14 = { -164.324f, 6334.336f, 30.63f };
			uParam1->f_22.f_17 = { 0f, 0f, 136.44f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -164.562f, 6348.686f, 35.2535f };
			uParam1->f_22.f_43 = { -6.5189f, 0f, 178.7005f };
			uParam1->f_22.f_46 = 45.7449f;
			break;
		
		case 27:
			func_567(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 1457.592f, -1650.822f, 67.654f };
			uParam1->f_22.f_9 = { -3.3824f, 0f, 113.9872f };
			uParam1->f_22.f_12 = 37.8183f;
			uParam1->f_22.f_14 = { 1455.009f, -1652.797f, 66.112f };
			uParam1->f_22.f_17 = { 0f, 0f, 22.32f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 1459.165f, -1638.333f, 70.7996f };
			uParam1->f_22.f_43 = { -6.9346f, 0f, 158.3002f };
			uParam1->f_22.f_46 = 47.2229f;
			break;
		
		case 28:
			func_566(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 105.3636f, 174.3149f, 105.0667f };
			uParam1->f_22.f_9 = { -1.6998f, 0f, 68.1162f };
			uParam1->f_22.f_12 = 29.473f;
			uParam1->f_22.f_14 = { 102.675f, 176.192f, 103.716f };
			uParam1->f_22.f_17 = { 0f, 0f, -18.72f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 113.2985f, 159.4081f, 111.833f };
			uParam1->f_22.f_43 = { -2.2889f, 0.0155f, 12.6091f };
			uParam1->f_22.f_46 = 59.9445f;
			break;
		
		case 29:
			func_565(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -1459.941f, -378.7752f, 39.5714f };
			uParam1->f_22.f_9 = { -2.458f, -0.018f, 135.8305f };
			uParam1->f_22.f_12 = 16.3865f;
			uParam1->f_22.f_14 = { -1463.153f, -381.244f, 37.881f };
			uParam1->f_22.f_17 = { 0f, 0f, 45.36f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -1450.232f, -383.0981f, 43.335f };
			uParam1->f_22.f_43 = { -8.0395f, 0f, 86.8152f };
			uParam1->f_22.f_46 = 50f;
			uParam1->f_22.f_23 = 0.15f;
			break;
		
		case 30:
			func_564(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -1174.645f, -1383.43f, 5.4953f };
			uParam1->f_22.f_9 = { -4.6114f, 0f, -56.2161f };
			uParam1->f_22.f_12 = 27.2213f;
			uParam1->f_22.f_14 = { -1170.636f, -1381.263f, 3.971f };
			uParam1->f_22.f_17 = { 0f, 0f, -146.52f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -1192.8f, -1378.188f, 12.4331f };
			uParam1->f_22.f_43 = { -2.6181f, 0f, -91.6741f };
			uParam1->f_22.f_46 = 54.9572f;
			break;
		
		case 31:
			func_563(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 302.1353f, -754.5077f, 29.8027f };
			uParam1->f_22.f_9 = { -1.6792f, -0.0393f, 148.3184f };
			uParam1->f_22.f_12 = 16.2107f;
			uParam1->f_22.f_14 = { 298.479f, -759.137f, 28.393f };
			uParam1->f_22.f_17 = { 0f, 0f, 71.64f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 326.6581f, -788.2607f, 43.2081f };
			uParam1->f_22.f_43 = { 1.1232f, 0f, 45.8093f };
			uParam1->f_22.f_46 = 60.7032f;
			break;
		
		case 32:
			func_567(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 205.12f, 2463.722f, 56.3782f };
			uParam1->f_22.f_9 = { -0.1022f, 0f, 112.1192f };
			uParam1->f_22.f_12 = 35.4509f;
			uParam1->f_22.f_14 = { 201.659f, 2462.738f, 54.911f };
			uParam1->f_22.f_17 = { 0f, 0f, 21.24f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 219.5281f, 2451.271f, 61.5476f };
			uParam1->f_22.f_43 = { -3.9251f, 0f, 55.1454f };
			uParam1->f_22.f_46 = 54.4082f;
			break;
		
		case 33:
			func_566(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 2850.734f, 4444.569f, 49.1442f };
			uParam1->f_22.f_9 = { -2.0858f, 0.0143f, 18.4628f };
			uParam1->f_22.f_12 = 13.338f;
			uParam1->f_22.f_14 = { 2849.022f, 4450.232f, 47.513f };
			uParam1->f_22.f_17 = { 0f, 0f, -71.64f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 2841.437f, 4433.785f, 53.9355f };
			uParam1->f_22.f_43 = { -7.5539f, -0.0693f, -33.7803f };
			uParam1->f_22.f_46 = 54.4386f;
			break;
		
		case 34:
			func_565(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 377.3802f, 3587.126f, 33.718f };
			uParam1->f_22.f_9 = { -0.7974f, -0.0177f, -104.6024f };
			uParam1->f_22.f_12 = 7.7303f;
			uParam1->f_22.f_23 = 0.1f;
			uParam1->f_22.f_14 = { 387.316f, 3584.326f, 32.292f };
			uParam1->f_22.f_17 = { 0f, 0f, 168.12f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 376.6257f, 3595.871f, 38.3613f };
			uParam1->f_22.f_43 = { -9.8226f, 0f, -153.9853f };
			uParam1->f_22.f_46 = 57.3618f;
			break;
		
		case 35:
			func_564(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 643.5591f, 2786.015f, 42.6034f };
			uParam1->f_22.f_9 = { -2.6917f, 0.0192f, 89.5651f };
			uParam1->f_22.f_12 = 16.9015f;
			uParam1->f_22.f_14 = { 636.7f, 2786.34f, 41.007f };
			uParam1->f_22.f_17 = { 0f, 0f, 5.4f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 647.7792f, 2771.441f, 47.9368f };
			uParam1->f_22.f_43 = { -7.6509f, 0f, 30.7713f };
			uParam1->f_22.f_46 = 46.6686f;
			break;
		
		case 36:
			func_563(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 1658.32f, 4846.629f, 42.6674f };
			uParam1->f_22.f_9 = { -4.8756f, 0f, 15.9561f };
			uParam1->f_22.f_12 = 18.0966f;
			uParam1->f_22.f_14 = { 1656.189f, 4851.706f, 40.982f };
			uParam1->f_22.f_17 = { 0f, 0f, -80.64f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 1666.537f, 4863.845f, 45.2812f };
			uParam1->f_22.f_43 = { -1.6989f, 0.0463f, 137.917f };
			uParam1->f_22.f_46 = 54.403f;
			break;
		
		case 37:
			func_567(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 1181.679f, -3117.107f, 6.4817f };
			uParam1->f_22.f_9 = { -1.1632f, 0f, -0.0485f };
			uParam1->f_22.f_12 = 36.1378f;
			uParam1->f_22.f_14 = { 1182.073f, -3113.992f, 5.028f };
			uParam1->f_22.f_17 = { 0f, 0f, -89.28f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 1168.492f, -3096.343f, 13.8698f };
			uParam1->f_22.f_43 = { -9.51f, 0f, -138.0643f };
			uParam1->f_22.f_46 = 56.6217f;
			break;
		
		case 38:
			func_566(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 139.9231f, -2467.325f, 7.1163f };
			uParam1->f_22.f_9 = { -5.3337f, 0f, 143.5151f };
			uParam1->f_22.f_12 = 27.4251f;
			uParam1->f_22.f_14 = { 136.286f, -2472.12f, 5.1f };
			uParam1->f_22.f_17 = { 0f, 0f, 54.72f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 149.1082f, -2470.175f, 9.8266f };
			uParam1->f_22.f_43 = { -6.4047f, -0.0392f, 93.1629f };
			uParam1->f_22.f_46 = 55.1036f;
			break;
		
		case 39:
			func_565(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -252.4981f, -2587.985f, 6.6929f };
			uParam1->f_22.f_9 = { -5.436f, 0f, 173.3827f };
			uParam1->f_22.f_12 = 36.7304f;
			uParam1->f_22.f_14 = { -252.278f, -2591.029f, 5.001f };
			uParam1->f_22.f_17 = { 0f, 0f, 93.6f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -268.2111f, -2573.399f, 10.5836f };
			uParam1->f_22.f_43 = { -5.2092f, 0f, -121.5472f };
			uParam1->f_22.f_46 = 56.0837f;
			break;
		
		case 40:
			func_564(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 671.8454f, -2670f, 6.6823f };
			uParam1->f_22.f_9 = { -0.1395f, 0f, -1.6591f };
			uParam1->f_22.f_12 = 39.835f;
			uParam1->f_22.f_14 = { 672.404f, -2667.674f, 5.293f };
			uParam1->f_22.f_17 = { 0f, 0f, -86.4f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 655.1423f, -2667.567f, 10.4512f };
			uParam1->f_22.f_43 = { -3.5482f, 0f, -89.9837f };
			uParam1->f_22.f_46 = 56.0817f;
			break;
		
		case 41:
			func_563(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -331.7401f, -2781f, 8.1884f };
			uParam1->f_22.f_9 = { -53.2973f, 0f, -18.3202f };
			uParam1->f_22.f_12 = 43.6043f;
			uParam1->f_22.f_14 = { -330.313f, -2779.079f, 4.332f };
			uParam1->f_22.f_17 = { 0f, 0f, -86.4f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -351.9045f, -2762.355f, 7.6078f };
			uParam1->f_22.f_43 = { 3.1248f, 0f, -125.7847f };
			uParam1->f_22.f_46 = 55.3918f;
			break;
	}
}

void func_563(var uParam0)
{
	uParam0->f_21 = "AM_MP_BIKER_WAREHOUSE";
	uParam0->f_89.f_1 = { 9.752f, 0.021f, 0.793f };
	uParam0->f_89.f_4 = { 7.958f, 0.021f, -1.85f };
	uParam0->f_89.f_7 = 2.13f;
	uParam0->f_89 = 270f;
	uParam0->f_22.f_50[0] = "PUSH";
	uParam0->f_22.f_50[1] = "LIMIT";
	uParam0->f_22.f_53[0] = 0.271f;
	uParam0->f_22.f_53[1] = 0.411f;
	uParam0->f_22.f_56 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
}

void func_564(var uParam0)
{
	uParam0->f_21 = "AM_MP_BIKER_WAREHOUSE";
	uParam0->f_89.f_1 = { 13.54f, -2.89f, 0.356f };
	uParam0->f_89.f_4 = { 13.54f, -0.53f, -3f };
	uParam0->f_89.f_7 = 2.548f;
	uParam0->f_89 = 180f;
	uParam0->f_22.f_50[0] = "PUSH";
	uParam0->f_22.f_50[1] = "LIMIT";
	uParam0->f_22.f_53[0] = 0.271f;
	uParam0->f_22.f_53[1] = 0.411f;
	uParam0->f_22.f_56 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
}

void func_565(var uParam0)
{
	uParam0->f_21 = "AM_MP_BIKER_WAREHOUSE";
	uParam0->f_89.f_1 = { -6.445f, 9.43f, 0.785f };
	uParam0->f_89.f_4 = { -3.475f, 9.43f, -1.47f };
	uParam0->f_89.f_7 = 3.06f;
	uParam0->f_89 = 0f;
	uParam0->f_22.f_50[0] = "PUSH";
	uParam0->f_22.f_50[1] = "LIMIT";
	uParam0->f_22.f_53[0] = 0.271f;
	uParam0->f_22.f_53[1] = 0.411f;
	uParam0->f_22.f_56 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
}

void func_566(var uParam0)
{
	uParam0->f_21 = "AM_MP_BIKER_WAREHOUSE";
	uParam0->f_89.f_1 = { 17.635f, 13.228f, 1.148f };
	uParam0->f_89.f_4 = { 14.985f, 13.228f, -1.725f };
	uParam0->f_89.f_7 = 2.13f;
	uParam0->f_89 = 270f;
	uParam0->f_22.f_50[0] = "PUSH";
	uParam0->f_22.f_50[1] = "LIMIT";
	uParam0->f_22.f_53[0] = 0.271f;
	uParam0->f_22.f_53[1] = 0.411f;
	uParam0->f_22.f_56 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
}

void func_567(var uParam0)
{
	uParam0->f_21 = "AM_MP_BIKER_WAREHOUSE";
	uParam0->f_89.f_1 = { -13.148f, -4.12f, 0.84f };
	uParam0->f_89.f_4 = { -10.838f, -4.12f, 3.758f };
	uParam0->f_89.f_7 = 3.611f;
	uParam0->f_89 = 90f;
	uParam0->f_22.f_50[0] = "PUSH";
	uParam0->f_22.f_50[1] = "LIMIT";
	uParam0->f_22.f_53[0] = 0.271f;
	uParam0->f_22.f_53[1] = 0.411f;
	uParam0->f_22.f_56 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
}

void func_568(int iParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			*uParam2 = { 1009.5f, -3196.6f, -38.5f };
			*uParam3 = 0f;
			StringCopy(sParam1, "bkr_biker_dlc_int_ware01", 64);
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			*uParam2 = { 1049.6f, -3196.6f, -38.5f };
			*uParam3 = 0f;
			StringCopy(sParam1, "bkr_biker_dlc_int_ware02", 64);
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			*uParam2 = { 1093.6f, -3196.6f, -38.5f };
			*uParam3 = 0f;
			StringCopy(sParam1, "bkr_biker_dlc_int_ware03", 64);
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			*uParam2 = { 1124.6f, -3196.6f, -38.5f };
			*uParam3 = 0f;
			StringCopy(sParam1, "bkr_biker_dlc_int_ware04", 64);
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			*uParam2 = { 1165f, -3196.6f, -38.2f };
			*uParam3 = 0f;
			StringCopy(sParam1, "bkr_biker_dlc_int_ware05", 64);
			break;
	}
}

int func_569(var uParam0)
{
	return 1;
}

void func_570(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 201484;
			break;
		
		case 1:
			uParam0->f_1 = 201375;
			break;
		
		case 2:
			uParam0->f_2 = 198986;
			break;
		
		case 3:
			uParam0->f_3 = 198837;
			break;
		
		case 4:
			uParam0->f_4 = 198719;
			break;
		
		case 5:
			uParam0->f_5 = 198424;
			break;
		
		case 6:
			uParam0->f_6 = 198402;
			break;
		
		case 7:
			uParam0->f_7 = 198312;
			break;
		
		case 8:
			uParam0->f_8 = 198224;
			break;
		
		case 9:
			uParam0->f_9 = 192705;
			break;
		
		case 10:
			uParam0->f_10 = 192666;
			break;
		
		case 11:
			uParam0->f_11 = 192622;
			break;
		
		case 12:
			uParam0->f_12 = 192570;
			break;
		
		case 13:
			uParam0->f_13 = 192309;
			break;
		
		case 14:
			uParam0->f_14 = 192182;
			break;
		
		case 15:
			uParam0->f_15 = 191965;
			break;
		
		case 16:
			uParam0->f_16 = 191703;
			break;
		
		case 17:
			uParam0->f_17 = 191297;
			break;
		
		case 18:
			uParam0->f_18 = 173768;
			break;
		
		case 19:
			uParam0->f_19 = 173759;
			break;
		
		case 20:
			uParam0->f_20 = 173675;
			break;
		
		case 21:
			uParam0->f_21 = 173627;
			break;
		
		case 22:
			uParam0->f_22 = 173591;
			break;
		
		case 23:
			uParam0->f_23 = 173413;
			break;
		
		case 24:
			uParam0->f_24 = 173391;
			break;
		
		case 25:
			uParam0->f_25 = 173380;
			break;
		
		case 26:
			uParam0->f_26 = 173360;
			break;
		
		case 27:
			uParam0->f_27 = 172614;
			break;
		
		case 28:
			uParam0->f_28 = 167458;
			break;
		
		case 29:
			uParam0->f_29 = 167444;
			break;
		
		case 30:
			uParam0->f_30 = 166120;
			break;
		
		case 31:
			uParam0->f_31 = 166112;
			break;
		
		case 32:
			uParam0->f_32 = 166060;
			break;
		
		case 33:
			uParam0->f_33 = 166031;
			break;
		
		case 34:
			uParam0->f_34 = 166022;
			break;
		
		case 35:
			uParam0->f_35 = 166013;
			break;
		
		case 36:
			uParam0->f_36 = 165729;
			break;
		
		case 37:
			uParam0->f_37 = 165577;
			break;
		
		case 38:
			uParam0->f_38 = 165565;
			break;
	}
}

void func_571(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = 0;
}

int func_572(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam4 = 200f;
	switch (iParam0)
	{
		case 63:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1755.993f, -1654.617f, 111.6811f };
					*uParam3 = 4f;
					*uParam5 = joaat("prop_storagetank_02b");
					return 1;
					break;
			}
			break;
		
		case 66:
			*uParam4 = 300f;
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1099.531f, -2020.803f, 12.174f };
					*uParam3 = 4f;
					*uParam5 = joaat("prop_facgate_01");
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_573(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 57)
	{
		*uParam2 = { -639.7239f, -1789.571f, 23.09021f };
		*uParam3 = { -628.3115f, -1794.311f, 24.76166f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 59)
	{
		*uParam2 = { -68.4866f, -1837.983f, 25.86152f };
		*uParam3 = { -55.57874f, -1822.911f, 33.3497f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 60)
	{
		*uParam2 = { 40.70252f, -1295.222f, 28.26908f };
		*uParam3 = { 48.47887f, -1277.385f, 30.06107f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 62)
	{
		*uParam2 = { 804.3705f, -2241.252f, 28.61585f };
		*uParam3 = { 785.4146f, -2239.441f, 35.856f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 64)
	{
		*uParam2 = { 148.0206f, -2982.688f, 5.096388f };
		*uParam3 = { 141.8934f, -2982.797f, 6.537447f };
		*uParam1 = 1;
		return;
	}
	*uParam1 = 0;
}

int func_574(var uParam0)
{
	return 1;
}

int func_575(var uParam0)
{
	return 1;
}

void func_576(var uParam0, var uParam1)
{
	if (unk_0x48B8265059381CD0(uParam0->f_103, 0))
	{
		unk_0x21E7933CCC7B3724(&(uParam0->f_103), 0);
	}
}

void func_577(var uParam0, var uParam1)
{
	if (!unk_0x48B8265059381CD0(uParam0->f_103, 0))
	{
		if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
		{
			unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
		}
		unk_0xEB79FECD9022AAF0(&(uParam0->f_103), 0);
	}
}

void func_578(var uParam0, var uParam1)
{
}

void func_579(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_589(unk_0xBE369BE1BC57A796());
	func_580(uParam0);
}

void func_580(var uParam0)
{
	if (func_206(unk_0xBE369BE1BC57A796(), 1))
	{
		if (unk_0x25BD4C26D84038CD())
		{
			if (func_588(func_204()) && func_587(unk_0xBE369BE1BC57A796()))
			{
				if (!unk_0x48B8265059381CD0(uParam0->f_103, 1))
				{
					if (!unk_0x86DB3331A7FB14B2())
					{
						unk_0xC7845898207D067F(500);
						func_62(unk_0xBE369BE1BC57A796(), 1, 0);
						func_586(0);
						unk_0xEB79FECD9022AAF0(&(uParam0->f_103), 1);
					}
				}
			}
			else if (func_589(unk_0xBE369BE1BC57A796()))
			{
				if (!func_131(&Global_2482253))
				{
					func_71(&Global_2482253, 0, 0);
				}
				else if (func_130(&Global_2482253, Global_262145.f_17271, 0))
				{
					if (func_46(unk_0xBE369BE1BC57A796()))
					{
						func_61();
						func_586(0);
						func_585(unk_0xBE369BE1BC57A796(), 1);
						func_584(unk_0xBE369BE1BC57A796(), 0);
						func_583(0);
						func_70(&Global_2482253);
					}
					else
					{
						unk_0xC7845898207D067F(500);
						func_583(0);
						func_586(0);
						func_585(unk_0xBE369BE1BC57A796(), 1);
						func_584(unk_0xBE369BE1BC57A796(), 0);
						func_62(unk_0xBE369BE1BC57A796(), 1, 0);
						func_70(&Global_2482253);
					}
				}
			}
			if (unk_0xBE369BE1BC57A796() == func_204())
			{
				if (Global_1764666 > -1)
				{
					func_582(1);
					func_586(0);
					func_584(unk_0xBE369BE1BC57A796(), 0);
					Global_1764666 = -1;
					func_62(unk_0xBE369BE1BC57A796(), 1, 0);
					unk_0xC7845898207D067F(500);
				}
			}
			else if (func_581(func_204()))
			{
				func_586(0);
				func_62(unk_0xBE369BE1BC57A796(), 1, 0);
				unk_0xC7845898207D067F(500);
			}
		}
		if ((unk_0x48B8265059381CD0(uParam0->f_103, 1) && unk_0x30F06AB0772AFB80()) && !func_587(unk_0xBE369BE1BC57A796()))
		{
			if (unk_0xBE369BE1BC57A796() == func_204())
			{
				func_583(0);
				func_585(unk_0xBE369BE1BC57A796(), 1);
				func_584(unk_0xBE369BE1BC57A796(), 0);
				unk_0x21E7933CCC7B3724(&(uParam0->f_103), 1);
			}
			else
			{
				func_583(0);
				unk_0x21E7933CCC7B3724(&(uParam0->f_103), 1);
			}
		}
	}
	else if (unk_0x25BD4C26D84038CD())
	{
		if (func_589(unk_0xBE369BE1BC57A796()))
		{
			if (func_46(unk_0xBE369BE1BC57A796()))
			{
				func_61();
				func_586(0);
				func_585(unk_0xBE369BE1BC57A796(), 1);
				func_584(unk_0xBE369BE1BC57A796(), 0);
				func_583(0);
				func_70(&Global_2482253);
			}
			else
			{
				unk_0xC7845898207D067F(500);
				func_583(0);
				func_586(0);
				func_585(unk_0xBE369BE1BC57A796(), 1);
				func_584(unk_0xBE369BE1BC57A796(), 0);
				func_62(unk_0xBE369BE1BC57A796(), 1, 0);
				func_70(&Global_2482253);
			}
		}
	}
}

bool func_581(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_199, 6);
}

void func_582(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_199, 6))
		{
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_199), 6);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_199, 6))
	{
		unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_199), 6);
	}
}

void func_583(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_199, 7))
		{
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_199), 7);
			if (func_131(&Global_2482253))
			{
				func_70(&Global_2482253);
			}
		}
	}
	else if (unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_199, 7))
	{
		unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_199), 7);
	}
}

void func_584(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 != func_48())
		{
			if (!unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 19))
			{
				unk_0xEB79FECD9022AAF0(&(Global_2421664[iParam0 /*358*/].f_198), 19);
			}
		}
	}
	else if (iParam0 != func_48())
	{
		if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 19))
		{
			unk_0x21E7933CCC7B3724(&(Global_2421664[iParam0 /*358*/].f_198), 19);
		}
	}
}

void func_585(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 != func_48())
		{
			if (!unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 21))
			{
				unk_0xEB79FECD9022AAF0(&(Global_2421664[iParam0 /*358*/].f_198), 21);
			}
			if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 20))
			{
				unk_0x21E7933CCC7B3724(&(Global_2421664[iParam0 /*358*/].f_198), 20);
			}
		}
	}
	else if (iParam0 != func_48())
	{
		if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 21))
		{
			unk_0x21E7933CCC7B3724(&(Global_2421664[iParam0 /*358*/].f_198), 21);
		}
		if (!unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 20))
		{
			unk_0xEB79FECD9022AAF0(&(Global_2421664[iParam0 /*358*/].f_198), 20);
		}
	}
}

void func_586(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_198, 18))
		{
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_198), 18);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_198, 18))
	{
		unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_198), 18);
	}
}

bool func_587(int iParam0)
{
	if (iParam0 == func_48())
	{
		return 0;
	}
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 18);
}

bool func_588(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 22);
}

bool func_589(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_199, 7);
}

Vector3 func_590(int iParam0)
{
	return func_642(iParam0);
}

int func_591(int iParam0)
{
	int iVar0;
	
	if (func_593(iParam0))
	{
		return 5;
	}
	if (func_592(0))
	{
		return func_471(func_472(unk_0xBE369BE1BC57A796()));
	}
	else if (func_469(unk_0xBE369BE1BC57A796(), 0, 0))
	{
		iVar0 = func_204();
		return func_471(func_472(iVar0));
	}
	return 4;
}

int func_592(int iParam0)
{
	if (func_207(unk_0xBE369BE1BC57A796()))
	{
		return func_497(unk_0xBE369BE1BC57A796(), iParam0);
	}
	return 0;
}

int func_593(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (Global_2482102.f_6 != 0 && !func_632(Global_2482102.f_6, 1))
	{
		iVar0 = func_630(func_631(iParam0));
		iVar1 = func_628(Global_2482102.f_6);
		if (iVar1 != func_48())
		{
			if (iVar1 == unk_0xBE369BE1BC57A796())
			{
				uVar2 = func_596(iVar0);
				return uVar2;
			}
			else if (func_595(iVar1, unk_0xBE369BE1BC57A796()))
			{
				func_594(iVar0, &iVar4, &iVar3);
				bVar5 = unk_0x48B8265059381CD0(Global_1619421[iVar1 /*390*/].f_358.f_1[iVar4], iVar3);
				return bVar5;
			}
		}
	}
	return 0;
}

void func_594(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

int func_595(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_48() && iParam1 != func_48())
	{
		iVar0 = func_476(iParam0);
		if (iVar0 != func_48())
		{
			return iVar0 == func_476(iParam1);
		}
	}
	return 0;
}

int func_596(int iParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		return 0;
	}
	if (func_627())
	{
		return 0;
	}
	iVar1 = func_625(unk_0xBE369BE1BC57A796(), &uVar0, &uVar0);
	if (iVar1 == 0)
	{
		return 0;
	}
	if (func_623(iVar1))
	{
		return 0;
	}
	bVar2 = func_632(iVar1, 1);
	if (!bVar2)
	{
		if (!func_622(1))
		{
			if (iParam0 == func_619(3))
			{
				return 1;
			}
		}
		else
		{
			iVar3 = func_204();
			if (func_618(1))
			{
				if (iParam0 == func_619(5))
				{
					return 1;
				}
			}
			else
			{
				bVar4 = !unk_0x48B8265059381CD0(func_617(iVar1), 31);
				if (bVar4)
				{
					iVar5 = func_615(iVar1);
					if (func_614(iVar3, iVar5))
					{
						bVar4 = false;
					}
					else if (func_610(iVar3, func_613(iVar3)))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (!func_606())
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					iVar6 = func_613(iVar3);
					if (iVar6 != 0)
					{
						if (func_630(iVar6) == iParam0)
						{
							return 1;
						}
					}
				}
				if (iParam0 == func_619(3))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		if (func_605())
		{
			return 0;
		}
		iVar7 = func_599(iVar1);
		if (iVar7 == iParam0)
		{
			if ((func_598(iParam0) && func_622(1)) && func_597(func_204()))
			{
				if (!func_614(func_204(), func_615(iVar1)))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_597(int iParam0)
{
	return func_613(iParam0) != 0;
}

int func_598(int iParam0)
{
	switch (iParam0)
	{
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			return 1;
		
		default:
	}
	return 0;
}

int func_599(int iParam0)
{
	if ((unk_0x23E9113C762466ED(iParam0) && !unk_0xA929B2923D14E2F8(iParam0, 0)) && unk_0xC26429B504BA534D(iParam0))
	{
		if (func_604(iParam0))
		{
			return Global_1619421[func_600(iParam0) /*390*/].f_11.f_245[func_603(iParam0)];
		}
	}
	return -1;
}

int func_600(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC26429B504BA534D(iParam0) || func_602(unk_0xBE369BE1BC57A796(), 6))
	{
		if (unk_0x34D7B5822CF22910("ContrabandOwner", 3))
		{
			if (unk_0x44748DA5CF34DA5E(iParam0, "ContrabandOwner"))
			{
				iVar0 = unk_0x83CA0CEAC60F17F6(iParam0, "ContrabandOwner");
				func_601(&iVar0);
				iVar1 = unk_0x0C36F33B3F746611(iVar0);
				return iVar1;
			}
		}
	}
	return func_48();
}

int func_601(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = (24 + iVar0);
		if (unk_0x48B8265059381CD0(*iParam0, iVar1))
		{
			unk_0x21E7933CCC7B3724(iParam0, iVar1);
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_602(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_11.f_5, iParam1);
}

int func_603(int iParam0)
{
	int iVar0;
	
	if (unk_0xC26429B504BA534D(iParam0) || func_602(unk_0xBE369BE1BC57A796(), 6))
	{
		if (unk_0x34D7B5822CF22910("ContrabandOwner", 3))
		{
			if (unk_0x44748DA5CF34DA5E(iParam0, "ContrabandOwner"))
			{
				iVar0 = unk_0x83CA0CEAC60F17F6(iParam0, "ContrabandOwner");
				return func_601(&iVar0);
			}
		}
	}
	return -1;
}

int func_604(int iParam0)
{
	if (unk_0xC26429B504BA534D(iParam0) || func_602(unk_0xBE369BE1BC57A796(), 6))
	{
		if (unk_0x34D7B5822CF22910("ContrabandDeliveryType", 3))
		{
			if (unk_0x44748DA5CF34DA5E(iParam0, "ContrabandDeliveryType"))
			{
				return unk_0x83CA0CEAC60F17F6(iParam0, "ContrabandDeliveryType") == 2;
			}
		}
	}
	return 0;
}

int func_605()
{
	if (func_206(unk_0xBE369BE1BC57A796(), 1))
	{
		return Global_1619421[func_204() /*390*/].f_11.f_250;
	}
	return 0;
}

int func_606()
{
	int iVar0;
	
	if (func_609() == 0)
	{
		return 0;
	}
	if (func_607())
	{
		return 1;
	}
	iVar0 = func_360(5346, -1, 0);
	if (iVar0 < func_609())
	{
		return 1;
	}
	return 0;
}

bool func_607()
{
	int iVar0;
	
	iVar0 = func_360(5345, -1, 0);
	return unk_0x57E9911EC23E2C54() >= (iVar0 + func_608());
}

int func_608()
{
	return (Global_262145.f_17288 / 1000);
}

int func_609()
{
	return Global_262145.f_17289;
}

bool func_610(int iParam0, int iParam1)
{
	return func_611(iParam0, iParam1) >= 40;
}

int func_611(int iParam0, int iParam1)
{
	if (func_612(iParam1) && iParam0 != func_48())
	{
		return Global_1591201[iParam0 /*602*/].f_258.f_103.f_1;
	}
	return 0;
}

int func_612(int iParam0)
{
	if (iParam0 > 0 && iParam0 < 11)
	{
		return 1;
	}
	return 0;
}

int func_613(int iParam0)
{
	if (iParam0 == func_48())
	{
		return 0;
	}
	return Global_1591201[iParam0 /*602*/].f_258.f_103;
}

int func_614(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1591201[iParam0 /*602*/].f_258.f_103.f_2[iVar0] == iParam1)
		{
			return 1;
		}
		else if (Global_1591201[iParam0 /*602*/].f_258.f_103.f_2[iVar0] > 1000)
		{
			iVar1 = (Global_1591201[iParam0 /*602*/].f_258.f_103.f_2[iVar0] - 1000);
			if (iVar1 == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_615(int iParam0)
{
	int iVar0;
	
	if (unk_0xC26429B504BA534D(iParam0) || func_602(unk_0xBE369BE1BC57A796(), 6))
	{
		if (unk_0x34D7B5822CF22910("ContrabandOwner", 3))
		{
			if (unk_0x44748DA5CF34DA5E(iParam0, "ContrabandOwner"))
			{
				if (unk_0x34D7B5822CF22910("ExportVehicle", 3))
				{
					if (unk_0x44748DA5CF34DA5E(iParam0, "ExportVehicle"))
					{
						iVar0 = unk_0x83CA0CEAC60F17F6(iParam0, "ExportVehicle");
						func_616(&iVar0);
						return iVar0;
					}
				}
			}
		}
	}
	return 0;
}

int func_616(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 8;
	while (iVar0 <= 31)
	{
		if (unk_0x48B8265059381CD0(*iParam0, iVar0))
		{
			unk_0x21E7933CCC7B3724(iParam0, iVar0);
			unk_0xEB79FECD9022AAF0(&iVar1, iVar0);
		}
		iVar0++;
	}
	return iVar1;
}

int func_617(int iParam0)
{
	int iVar0;
	
	if (unk_0xC26429B504BA534D(iParam0) || func_602(unk_0xBE369BE1BC57A796(), 6))
	{
		if (unk_0x34D7B5822CF22910("ContrabandOwner", 3))
		{
			if (unk_0x44748DA5CF34DA5E(iParam0, "ContrabandOwner"))
			{
				if (unk_0x34D7B5822CF22910("ExportVehicle", 3))
				{
					if (unk_0x44748DA5CF34DA5E(iParam0, "ExportVehicle"))
					{
						iVar0 = unk_0x83CA0CEAC60F17F6(iParam0, "ExportVehicle");
						return func_616(&iVar0);
					}
				}
			}
		}
	}
	return 0;
}

bool func_618(bool bParam0)
{
	return func_468(unk_0xBE369BE1BC57A796(), bParam0);
}

int func_619(int iParam0)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	float fVar9;
	
	fVar0 = 12000f;
	Var1 = { func_172(unk_0xBE369BE1BC57A796()) };
	iVar8 = -1;
	iVar7 = 0;
	while (iVar7 < 49)
	{
		Var4 = { func_621(iVar7) };
		if (iParam0 == func_620(iVar7))
		{
			fVar9 = unk_0x2A488C176D52CCA5(Var1, Var4);
			if (fVar9 < fVar0)
			{
				fVar0 = fVar9;
				iVar8 = iVar7;
			}
		}
		iVar7++;
	}
	if (iVar8 == -1)
	{
		return -1;
	}
	return iVar8;
}

int func_620(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 19:
			return 0;
		
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			return 4;
		
		case 6:
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 3;
			break;
		
		case 46:
		case 47:
		case 48:
			return 5;
	}
	return -1;
}

Vector3 func_621(int iParam0)
{
	switch (iParam0)
	{
		case 19:
			return -2597.411f, 1930.107f, 166.3086f;
		
		case 20:
			return -1920.153f, 2048.602f, 139.7356f;
		
		case 21:
			return -68.3441f, 894.488f, 234.5414f;
		
		case 22:
			return 1407.563f, 1118.505f, 113.8377f;
		
		case 23:
			return -1788.983f, 455.5039f, 127.3081f;
		
		case 24:
			return 217.052f, 757.9442f, 203.6637f;
		
		case 25:
			return -1615.404f, 17.2934f, 61.1779f;
		
		case 26:
			return -3102.533f, 716.4913f, 19.297f;
		
		case 0:
			return 880.8726f, -2919.058f, 4.9006f;
		
		case 1:
			return 928.5625f, -2920.391f, 4.9021f;
		
		case 2:
			return 972.3794f, -2920.422f, 4.9021f;
		
		case 3:
			return 1091.055f, -2920.289f, 4.9021f;
		
		case 4:
			return 1148.923f, -2920.104f, 4.9021f;
		
		case 5:
			return 1180.085f, -2970.068f, 4.9021f;
		
		case 6:
			return -1082.496f, -500.419f, 35.432f;
		
		case 7:
			return 165.3373f, 2284.929f, 92.178f;
		
		case 8:
			return -2221.172f, 3484.129f, 29.1695f;
		
		case 9:
			return 2906.938f, 4345.68f, 49.3003f;
		
		case 10:
			return 1579.18f, 6438.313f, 23.7935f;
		
		case 11:
			return 477.29f, -1889.14f, 25.0946f;
		
		case 12:
			return 2534.13f, 2584.07f, 36.9449f;
		
		case 13:
			return 452.3711f, 3573.672f, 32.2386f;
		
		case 14:
			return -222.6743f, 6249.478f, 30.4912f;
		
		case 15:
			return -65.6218f, 81.307f, 70.5533f;
		
		case 16:
			return -28.1873f, -1083.637f, 25.5732f;
		
		case 17:
			return 2510.956f, 4109.705f, 37.5692f;
		
		case 18:
			return -763.496f, -243.3722f, 36.2426f;
		
		case 27:
			return 859.9324f, -1350.51f, 25.0668f;
		
		case 28:
			return 417.7273f, -1618.991f, 28.2898f;
		
		case 29:
			return 452.691f, -1007.568f, 26.12f;
		
		case 30:
			return -1120.411f, -842.7603f, 12.3767f;
		
		case 31:
			return -1326.011f, -1502.188f, 3.3245f;
		
		case 32:
			return -576.611f, -130.9079f, 33.659f;
		
		case 33:
			return 537.8883f, -32.6088f, 69.6464f;
		
		case 34:
			return 1858.998f, 3676.471f, 32.546f;
		
		case 35:
			return -433.4332f, 6042.402f, 30.3373f;
		
		case 36:
			return -633.966f, -1780.525f, 23.0708f;
		
		case 37:
			return 995.0766f, -1858.65f, 29.8898f;
		
		case 38:
			return -70.5644f, -1822.705f, 25.942f;
		
		case 39:
			return 38.8324f, -1284.2f, 28.278f;
		
		case 40:
			return 1211.217f, -1262.491f, 34.2267f;
		
		case 41:
			return 804.3043f, -2225.151f, 28.5425f;
		
		case 42:
			return 1764.46f, -1648.041f, 111.649f;
		
		case 43:
			return 144.143f, -3003.358f, 6.031f;
		
		case 44:
			return -513.2193f, -2200.612f, 5.394f;
		
		case 45:
			return -1153.689f, -2172.111f, 12.2625f;
		
		case 46:
			return -511.2002f, -1736.564f, 18.1967f;
		
		case 47:
			return 2352.237f, 3036.937f, 47.1521f;
		
		case 48:
			return -194.5653f, 6268.56f, 30.4893f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_622(bool bParam0)
{
	return func_206(unk_0xBE369BE1BC57A796(), bParam0);
}

int func_623(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x23E9113C762466ED(iParam0) && !unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		if (func_604(iParam0))
		{
			iVar0 = func_600(iParam0);
			iVar1 = func_603(iParam0);
			iVar2 = unk_0x0324EEB10F81965F(iParam0);
			iVar3 = 0;
			while (iVar3 < Global_2415716.f_3232)
			{
				if ((Global_2415716.f_3232[iVar3 /*5*/] == iVar0 && Global_2415716.f_3232[iVar3 /*5*/].f_1 == iVar2) && Global_2415716.f_3232[iVar3 /*5*/].f_2 == iVar1)
				{
					if (unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), Global_2415716.f_3232[iVar3 /*5*/].f_3) < 30000)
					{
						return 1;
					}
				}
				iVar3++;
			}
			if (func_624(iParam0, 30))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_624(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC26429B504BA534D(iParam0) || func_602(unk_0xBE369BE1BC57A796(), 6))
	{
		if (iParam1 > 7 && iParam1 < 32)
		{
			if (unk_0x34D7B5822CF22910("ContrabandOwner", 3))
			{
				if (unk_0x44748DA5CF34DA5E(iParam0, "ContrabandOwner"))
				{
					if (unk_0x34D7B5822CF22910("ExportVehicle", 3))
					{
						if (unk_0x44748DA5CF34DA5E(iParam0, "ExportVehicle"))
						{
							iVar0 = unk_0x83CA0CEAC60F17F6(iParam0, "ExportVehicle");
							return unk_0x48B8265059381CD0(iVar0, iParam1);
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_625(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (iParam0 != func_48() && func_3(iParam0, 1, 1))
	{
		iVar0 = unk_0xDF7CE83326F434E9(iParam0);
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0xFD0FE723227D5AB6(iVar0, 0))
			{
				iVar1 = 0;
				iVar2 = unk_0x60604E51E30D25B8(iVar0, 0);
				if (!unk_0xA929B2923D14E2F8(iVar2, 0))
				{
					iVar3 = unk_0x0324EEB10F81965F(iVar2);
					if (((iVar3 == joaat("cargobob") || iVar3 == joaat("cargobob2")) || iVar3 == joaat("cargobob3")) || iVar3 == joaat("cargobob4"))
					{
						iVar4 = unk_0xCF19BCD8019DB1BC(iVar2);
						if ((iVar4 != 0 && unk_0x23E9113C762466ED(iVar4)) && unk_0x3983CCB0D958159C(iVar4))
						{
							iVar1 = unk_0xBFC71CD990E479DB(iVar4);
							*uParam1 = 1;
						}
					}
					else if (iVar3 == joaat("towtruck") || iVar3 == joaat("towtruck2"))
					{
						iVar5 = unk_0xF0F8585FD7BEB515(iVar2);
						if ((iVar5 != 0 && unk_0x23E9113C762466ED(iVar5)) && unk_0x3983CCB0D958159C(iVar5))
						{
							iVar1 = unk_0xBFC71CD990E479DB(iVar5);
							*uParam2 = 1;
						}
					}
					else
					{
						iVar1 = iVar2;
					}
				}
				if (iVar1 != 0 && func_626(iVar1))
				{
					return iVar1;
				}
			}
		}
	}
	return 0;
}

int func_626(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0) && !unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		if (func_604(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_627()
{
	return Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_358.f_4;
}

int func_628(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (unk_0x23E9113C762466ED(iParam0) && !unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		iVar6 = func_48();
		iVar7 = func_48();
		iVar8 = func_48();
		iVar0 = 0;
		while (iVar0 < 30)
		{
			iVar1 = unk_0x0C36F33B3F746611(iVar0);
			if (func_3(iVar1, 1, 1))
			{
				iVar2 = unk_0xDF7CE83326F434E9(iVar1);
				if (!unk_0xA929B2923D14E2F8(iVar2, 0) && unk_0xFD0FE723227D5AB6(iVar2, 0))
				{
					iVar3 = unk_0x60604E51E30D25B8(iVar2, 0);
					if (!unk_0xA929B2923D14E2F8(iVar3, 0))
					{
						if (func_629(iVar2, 0) == -1)
						{
							iVar4 = unk_0x0324EEB10F81965F(iVar3);
							if (((iVar4 == joaat("cargobob") || iVar4 == joaat("cargobob2")) || iVar4 == joaat("cargobob3")) || iVar4 == joaat("cargobob4"))
							{
								uVar5 = unk_0xCF19BCD8019DB1BC(iVar3);
								if (unk_0x23E9113C762466ED(uVar5) && unk_0xBFC71CD990E479DB(iVar5) == iParam0)
								{
									iVar6 = iVar1;
								}
							}
							else if (iVar4 == joaat("towtruck") || iVar4 == joaat("towtruck2"))
							{
								iVar5 = unk_0xF0F8585FD7BEB515(iVar3);
								if (unk_0x23E9113C762466ED(iVar5) && unk_0xBFC71CD990E479DB(iVar5) == iParam0)
								{
									iVar7 = iVar1;
								}
							}
							else if (iVar3 == iParam0)
							{
								iVar8 = iVar1;
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (iVar6 != func_48())
		{
			return iVar6;
		}
		if (iVar7 != func_48())
		{
			return iVar7;
		}
		if (iVar8 != func_48())
		{
			return iVar8;
		}
	}
	return func_48();
}

int func_629(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (unk_0xFD0FE723227D5AB6(iParam0, iParam1))
		{
			uVar0 = unk_0x60604E51E30D25B8(iParam0, iParam1);
			if (unk_0x23E9113C762466ED(uVar0))
			{
				if (!unk_0xA929B2923D14E2F8(iVar0, 0))
				{
					iVar1 = unk_0x74EBEFF57C45B722(unk_0x0324EEB10F81965F(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0xC0FA8EEF6413F866(iVar0, iVar3, 0))
						{
							if (unk_0x17206B315923243C(iVar0, iVar3, 0) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

int func_630(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 36;
		
		case 2:
			return 37;
		
		case 3:
			return 38;
		
		case 4:
			return 39;
		
		case 5:
			return 40;
		
		case 6:
			return 41;
		
		case 7:
			return 42;
		
		case 8:
			return 43;
		
		case 9:
			return 44;
		
		case 10:
			return 45;
		
		default:
	}
	return -1;
}

int func_631(int iParam0)
{
	switch (iParam0)
	{
		case 57:
			return 1;
		
		case 58:
			return 2;
		
		case 59:
			return 3;
		
		case 60:
			return 4;
		
		case 61:
			return 5;
		
		case 62:
			return 6;
		
		case 63:
			return 7;
		
		case 64:
			return 8;
		
		case 65:
			return 9;
		
		case 66:
			return 10;
		
		default:
	}
	return 0;
}

int func_632(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (func_604(iParam0))
		{
			iVar0 = func_600(iParam0);
			if (iVar0 != func_48())
			{
				if (func_634(unk_0xBE369BE1BC57A796(), iVar0))
				{
					return 1;
				}
				if (bParam1)
				{
					if (func_633(unk_0xBE369BE1BC57A796(), iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_633(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_48())
	{
		if (!bParam2)
		{
			if (func_634(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1619421[iParam0 /*390*/].f_11 != func_48())
		{
			return iParam1 == Global_1619421[iParam0 /*390*/].f_11;
		}
	}
	return 0;
}

int func_634(int iParam0, int iParam1)
{
	if (iParam1 != func_48())
	{
		if (iParam0 != func_48())
		{
			if (Global_1619421[iParam0 /*390*/].f_11 != func_48())
			{
				if (Global_1619421[iParam0 /*390*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_635(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	
	iVar0 = func_631(iParam0);
	bVar1 = false;
	if (func_206(unk_0xBE369BE1BC57A796(), 1))
	{
		if (func_593(iParam0))
		{
			if (*uParam2 != 4)
			{
				unk_0x5ACBCE67F0494242(*uParam1, 1);
				unk_0x00EA14207118EEE2(*uParam1, 1.4f);
				unk_0x84DAB725836026C6(*uParam1, 7);
				unk_0x9DD4955F28C1A885(*uParam1, 7000);
				*uParam2 = 4;
				return;
			}
		}
		else
		{
			if (*uParam2 != 1)
			{
				if (*uParam2 == 4)
				{
					unk_0x5ACBCE67F0494242(*uParam1, 0);
					unk_0x00EA14207118EEE2(*uParam1, 1f);
					unk_0x84DAB725836026C6(*uParam1, 5);
				}
				bVar1 = true;
			}
			Var2 = { func_637(unk_0xBE369BE1BC57A796()) };
			if (!bVar1)
			{
				if (!unk_0x9C88EB7B70229335(&Var2) && unk_0x765F5B806B517045(&Var2) != *uParam3)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				unk_0x457AECF7F7E33610("IE_WHOUSE_BLIP2");
				unk_0xBAB00B98D1E61BEE(&Var2);
				unk_0xB58BBC88882D90A6(*uParam1);
				*uParam3 = unk_0x765F5B806B517045(&Var2);
				*uParam2 = 1;
				return;
			}
		}
	}
	else
	{
		if (*uParam2 != 2)
		{
			bVar1 = true;
		}
		if (*uParam2 == 4)
		{
			unk_0x5ACBCE67F0494242(*uParam1, 0);
			unk_0x00EA14207118EEE2(*uParam1, 1f);
			unk_0x84DAB725836026C6(*uParam1, 5);
		}
		if (bVar1)
		{
			if (func_636(unk_0xBE369BE1BC57A796(), iVar0))
			{
				unk_0xAAF15482D9DB27D9(*uParam1, "IE_WHOUSE_BLIP0");
				*uParam2 = 2;
				return;
			}
		}
	}
	if (*uParam2 == 0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		unk_0xAAF15482D9DB27D9(*uParam1, "IE_WHOUSE_BLIP1");
		*uParam2 = 3;
	}
}

bool func_636(int iParam0, int iParam1)
{
	return func_613(iParam0) == iParam1;
}

struct<16> func_637(int iParam0)
{
	struct<16> Var0;
	int iVar16;
	
	if (Global_1619421[iParam0 /*390*/].f_11.f_113 != Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_113)
	{
		StringCopy(&Var0, func_640(iParam0, 0), 64);
		return Var0;
	}
	if (((func_536(iParam0, 28) || func_536(unk_0xBE369BE1BC57A796(), 28)) || func_639(iParam0)) && !func_638(iParam0))
	{
		StringCopy(&Var0, func_640(iParam0, 0), 64);
		return Var0;
	}
	iVar16 = func_476(iParam0);
	if (iVar16 != unk_0xBE369BE1BC57A796())
	{
		if (!unk_0x8EA3D5407E9F4AF0() && !unk_0x65FCCBD8772098C3(0, -1, 1))
		{
			StringCopy(&Var0, func_640(iParam0, 0), 64);
			return Var0;
		}
	}
	if (iVar16 != func_48())
	{
		return Global_1619421[iVar16 /*390*/].f_11.f_97;
	}
	StringCopy(&Var0, "", 64);
	return Var0;
}

int func_638(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_241(iParam0) };
	if (unk_0x8EA3D5407E9F4AF0() && unk_0x7BB94A563F5F14FD(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_639(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_241(iParam0) };
	if (unk_0x7C2F31E78C33DE0F() || unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5DC8C64FE18EADF7(0))
		{
			return 0;
		}
	}
	else if (unk_0x8EA3D5407E9F4AF0())
	{
		if (unk_0x7BB94A563F5F14FD(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

var func_640(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_468(iParam0, 1))
		{
			return func_641();
		}
	}
	return unk_0xC7E52B74A3B4973C("GB_REST_ACC");
}

var func_641()
{
	return unk_0xC7E52B74A3B4973C("GB_REST_ACCM");
}

Vector3 func_642(int iParam0)
{
	struct<3> Var0;
	
	func_679(iParam0, &Var0);
	return Var0;
}

int func_643(var uParam0)
{
	return 524;
}

int func_644(int iParam0)
{
	if (func_593(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_645(int iParam0)
{
	if (func_485(unk_0xBE369BE1BC57A796(), 1))
	{
		return 0;
	}
	if (func_468(unk_0xBE369BE1BC57A796(), 1))
	{
		return 0;
	}
	if (Global_2482102.f_6 != 0)
	{
		if (func_596(func_630(func_631(iParam0))))
		{
			if (func_632(Global_2482102.f_6, 1))
			{
				return 0;
			}
		}
	}
	if (func_206(unk_0xBE369BE1BC57A796(), 1))
	{
		if (func_207(unk_0xBE369BE1BC57A796()))
		{
			if (func_636(unk_0xBE369BE1BC57A796(), func_631(iParam0)))
			{
				return 1;
			}
		}
		else if (func_636(func_204(), func_631(iParam0)))
		{
			return 1;
		}
	}
	else if (func_636(unk_0xBE369BE1BC57A796(), func_631(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_646(var uParam0)
{
	return (unk_0x48B8265059381CD0(Global_1764677.f_2, 2) || unk_0x48B8265059381CD0(Global_1764677.f_2, 0));
}

void func_647(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	if (*uParam2 != 3)
	{
		return;
	}
	StringCopy(sParam1, "IE_WH_EXIT", 64);
	*uParam3 = 2;
	(*uParam2)[0] = "IE_WH_EXITa";
	(*uParam2)[1] = "IE_WH_EXITb";
}

int func_648(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
			return 25;
			break;
	}
	return -1;
}

int func_649(var uParam0)
{
	return -1;
}

int func_650(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	switch (iParam0)
	{
		case 57:
			switch (iParam1)
			{
				case 0:
					if (bParam4)
					{
						*uParam2 = { -657.7001f, -1768.682f, 23.7805f };
						*uParam3 = 123.9987f;
						return 1;
					}
					else
					{
						*uParam2 = { -632.606f, -1782.232f, 23.0552f };
						*uParam3 = 127.08f;
						return 1;
					}
					break;
				
				case 1:
					if (bParam4)
					{
						*uParam2 = { -655.3964f, -1771.848f, 23.7106f };
						*uParam3 = 123.9987f;
						return 1;
					}
					else
					{
						*uParam2 = { -633.5104f, -1781.035f, 23.0613f };
						*uParam3 = 127.08f;
						return 1;
					}
					break;
				
				case 2:
					if (bParam4)
					{
						*uParam2 = { -648.6033f, -1767.288f, 23.3981f };
						*uParam3 = 125.1987f;
						return 1;
					}
					else
					{
						*uParam2 = { -634.4148f, -1779.838f, 23.077f };
						*uParam3 = 127.08f;
						return 1;
					}
					break;
				
				case 3:
					if (bParam4)
					{
						*uParam2 = { -650.9087f, -1764.181f, 23.4708f };
						*uParam3 = 125.1987f;
						return 1;
					}
					else
					{
						*uParam2 = { -635.3192f, -1778.642f, 23.0927f };
						*uParam3 = 127.08f;
						return 1;
					}
					break;
				
				case 4:
					if (bParam4)
					{
						*uParam2 = { -602.0138f, -1795.589f, 22.434f };
						*uParam3 = 213.9991f;
						return 1;
					}
					else
					{
						*uParam2 = { -636.2236f, -1777.445f, 23.0951f };
						*uParam3 = 127.08f;
						return 1;
					}
					break;
				
				case 5:
					if (bParam4)
					{
						*uParam2 = { -605.937f, -1796.599f, 22.4856f };
						*uParam3 = 214.1985f;
						return 1;
					}
					else
					{
						*uParam2 = { -633.8027f, -1783.136f, 23.1172f };
						*uParam3 = 127.08f;
						return 1;
					}
					break;
				
				case 6:
					if (bParam4)
					{
						*uParam2 = { -606.3922f, -1789.077f, 22.5908f };
						*uParam3 = 213.9991f;
						return 1;
					}
					else
					{
						*uParam2 = { -634.7071f, -1781.939f, 23.1235f };
						*uParam3 = 127.08f;
						return 1;
					}
					break;
				
				case 7:
					if (bParam4)
					{
						*uParam2 = { -610.54f, -1790.125f, 22.663f };
						*uParam3 = 214.1985f;
						return 1;
					}
					else
					{
						*uParam2 = { -635.6115f, -1780.743f, 23.14f };
						*uParam3 = 127.08f;
						return 1;
					}
					break;
				
				case 8:
					if (bParam4)
					{
						*uParam2 = { -584.6882f, -1803.907f, 22.1466f };
						*uParam3 = 145.5985f;
						return 1;
					}
					else
					{
						*uParam2 = { -636.5159f, -1779.546f, 23.1557f };
						*uParam3 = 127.08f;
						return 1;
					}
					break;
				
				case 9:
					if (bParam4)
					{
						*uParam2 = { -587.9329f, -1801.679f, 22.1249f };
						*uParam3 = 145.5985f;
						return 1;
					}
					else
					{
						*uParam2 = { -637.4203f, -1778.349f, 23.1556f };
						*uParam3 = 127.08f;
						return 1;
					}
					break;
				
				case 10:
					if (bParam4)
					{
						*uParam2 = { -579.8873f, -1797.329f, 21.8573f };
						*uParam3 = 145.5985f;
						return 1;
					}
					else
					{
						*uParam2 = { -634.9994f, -1784.04f, 23.1768f };
						*uParam3 = 127.08f;
						return 1;
					}
					break;
				
				case 11:
					if (bParam4)
					{
						*uParam2 = { -583.0121f, -1794.965f, 21.8514f };
						*uParam3 = 145.5985f;
						return 1;
					}
					else
					{
						*uParam2 = { -635.9038f, -1782.844f, 23.1849f };
						*uParam3 = 127.08f;
						return 1;
					}
					break;
				
				case 12:
					*uParam2 = { -636.8082f, -1781.647f, 23.2029f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -637.7126f, -1780.45f, 23.2167f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -638.6171f, -1779.254f, 23.216f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -636.1961f, -1784.945f, 23.2387f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -637.1005f, -1783.748f, 23.2462f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -638.0049f, -1782.552f, 23.2646f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -638.9094f, -1781.355f, 23.2771f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -639.8138f, -1780.158f, 23.2757f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -637.3928f, -1785.849f, 23.2716f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -638.2972f, -1784.653f, 23.309f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -639.2017f, -1783.456f, 23.3221f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -640.1061f, -1782.259f, 23.3352f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -641.0105f, -1781.063f, 23.3348f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -638.5895f, -1786.754f, 23.2275f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -639.494f, -1785.557f, 23.3362f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -640.3984f, -1784.36f, 23.3793f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -641.3028f, -1783.164f, 23.3855f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -642.2072f, -1781.967f, 23.3939f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -639.7863f, -1787.658f, 23.1932f };
					*uParam3 = 127.08f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -640.6907f, -1786.461f, 23.3052f };
					*uParam3 = 127.08f;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					if (bParam4)
					{
						*uParam2 = { 979.9278f, -1876.913f, 30.1646f };
						*uParam3 = 176.7983f;
						return 1;
					}
					else
					{
						*uParam2 = { 1007.406f, -1856.609f, 30.0398f };
						*uParam3 = 174.6f;
						return 1;
					}
					break;
				
				case 1:
					if (bParam4)
					{
						*uParam2 = { 984.3694f, -1877.127f, 29.9286f };
						*uParam3 = 176.7983f;
						return 1;
					}
					else
					{
						*uParam2 = { 1005.913f, -1856.468f, 30.0398f };
						*uParam3 = 174.6f;
						return 1;
					}
					break;
				
				case 2:
					if (bParam4)
					{
						*uParam2 = { 982.5048f, -1869.278f, 30.0577f };
						*uParam3 = 176.7983f;
						return 1;
					}
					else
					{
						*uParam2 = { 1004.419f, -1856.327f, 30.0398f };
						*uParam3 = 174.6f;
						return 1;
					}
					break;
				
				case 3:
					if (bParam4)
					{
						*uParam2 = { 983.0613f, -1860.717f, 30.0778f };
						*uParam3 = 176.7983f;
						return 1;
					}
					else
					{
						*uParam2 = { 1002.926f, -1856.185f, 30.0398f };
						*uParam3 = 174.6f;
						return 1;
					}
					break;
				
				case 4:
					if (bParam4)
					{
						*uParam2 = { 1012.444f, -1856.21f, 29.8898f };
						*uParam3 = 176.7983f;
						return 1;
					}
					else
					{
						*uParam2 = { 1001.433f, -1856.044f, 30.0398f };
						*uParam3 = 174.6f;
						return 1;
					}
					break;
				
				case 5:
					if (bParam4)
					{
						*uParam2 = { 1017.324f, -1856.525f, 29.8898f };
						*uParam3 = 176.7983f;
						return 1;
					}
					else
					{
						*uParam2 = { 999.9392f, -1855.903f, 30.0398f };
						*uParam3 = 174.6f;
						return 1;
					}
					break;
				
				case 6:
					if (bParam4)
					{
						*uParam2 = { 1013.175f, -1847.474f, 30.1998f };
						*uParam3 = 176.7983f;
						return 1;
					}
					else
					{
						*uParam2 = { 998.4459f, -1855.762f, 30.0398f };
						*uParam3 = 174.6f;
						return 1;
					}
					break;
				
				case 7:
					if (bParam4)
					{
						*uParam2 = { 1017.998f, -1847.712f, 30.2f };
						*uParam3 = 176.7983f;
						return 1;
					}
					else
					{
						*uParam2 = { 996.9525f, -1855.621f, 30.0398f };
						*uParam3 = 174.6f;
						return 1;
					}
					break;
				
				case 8:
					if (bParam4)
					{
						*uParam2 = { 1016.346f, -1811.841f, 32.4611f };
						*uParam3 = 356.7981f;
						return 1;
					}
					else
					{
						*uParam2 = { 1007.265f, -1858.102f, 29.8898f };
						*uParam3 = 174.6f;
						return 1;
					}
					break;
				
				case 9:
					if (bParam4)
					{
						*uParam2 = { 1020.174f, -1812.289f, 32.512f };
						*uParam3 = 356.7981f;
						return 1;
					}
					else
					{
						*uParam2 = { 1005.771f, -1857.961f, 29.8898f };
						*uParam3 = 174.6f;
						return 1;
					}
					break;
				
				case 10:
					if (bParam4)
					{
						*uParam2 = { 1015.858f, -1820.207f, 31.9309f };
						*uParam3 = 356.7981f;
						return 1;
					}
					else
					{
						*uParam2 = { 1004.278f, -1857.82f, 29.8898f };
						*uParam3 = 174.6f;
						return 1;
					}
					break;
				
				case 11:
					if (bParam4)
					{
						*uParam2 = { 1019.733f, -1820.782f, 31.9801f };
						*uParam3 = 356.7981f;
						return 1;
					}
					else
					{
						*uParam2 = { 1002.785f, -1857.679f, 29.8898f };
						*uParam3 = 174.6f;
						return 1;
					}
					break;
				
				case 12:
					*uParam2 = { 1001.291f, -1857.538f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 999.798f, -1857.396f, 29.8979f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 998.3047f, -1857.255f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 996.8113f, -1857.114f, 29.8979f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 1007.124f, -1859.595f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 1005.63f, -1859.454f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 1004.137f, -1859.313f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 1002.644f, -1859.172f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 1001.15f, -1859.031f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 999.6569f, -1858.89f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 998.1635f, -1858.749f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 996.6702f, -1858.608f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 1006.982f, -1861.089f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 1005.489f, -1860.948f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 1003.996f, -1860.806f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 1002.502f, -1860.665f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 1001.009f, -1860.524f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 999.5157f, -1860.383f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 998.0223f, -1860.242f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 996.529f, -1860.101f, 29.8898f };
					*uParam3 = 174.6f;
					return 1;
					break;
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					if (bParam4)
					{
						*uParam2 = { -62.0338f, -1839.62f, 25.6831f };
						*uParam3 = 319.7973f;
						return 1;
					}
					else
					{
						*uParam2 = { -69.8565f, -1819.105f, 25.942f };
						*uParam3 = 230.76f;
						return 1;
					}
					break;
				
				case 1:
					if (bParam4)
					{
						*uParam2 = { -59.219f, -1841.875f, 25.5775f };
						*uParam3 = 319.7973f;
						return 1;
					}
					else
					{
						*uParam2 = { -70.6788f, -1820.112f, 25.942f };
						*uParam3 = 230.76f;
						return 1;
					}
					break;
				
				case 2:
					if (bParam4)
					{
						*uParam2 = { -56.6504f, -1844.082f, 25.4785f };
						*uParam3 = 319.7973f;
						return 1;
					}
					else
					{
						*uParam2 = { -71.5012f, -1821.119f, 25.942f };
						*uParam3 = 230.76f;
						return 1;
					}
					break;
				
				case 3:
					if (bParam4)
					{
						*uParam2 = { -54.0422f, -1846.377f, 25.3723f };
						*uParam3 = 319.7973f;
						return 1;
					}
					else
					{
						*uParam2 = { -72.3235f, -1822.125f, 25.942f };
						*uParam3 = 230.76f;
						return 1;
					}
					break;
				
				case 4:
					if (bParam4)
					{
						*uParam2 = { -41.8232f, -1809.353f, 25.5185f };
						*uParam3 = 50.3972f;
						return 1;
					}
					else
					{
						*uParam2 = { -73.1459f, -1823.132f, 25.942f };
						*uParam3 = 230.76f;
						return 1;
					}
					break;
				
				case 5:
					if (bParam4)
					{
						*uParam2 = { -48.0753f, -1804.241f, 25.8218f };
						*uParam3 = 50.3972f;
						return 1;
					}
					else
					{
						*uParam2 = { -73.9682f, -1824.139f, 25.942f };
						*uParam3 = 230.76f;
						return 1;
					}
					break;
				
				case 6:
					if (bParam4)
					{
						*uParam2 = { -53.8064f, -1799.192f, 26.2119f };
						*uParam3 = 50.3972f;
						return 1;
					}
					else
					{
						*uParam2 = { -74.7905f, -1825.146f, 25.942f };
						*uParam3 = 230.76f;
						return 1;
					}
					break;
				
				case 7:
					if (bParam4)
					{
						*uParam2 = { -59.6964f, -1794.331f, 26.4409f };
						*uParam3 = 50.3972f;
						return 1;
					}
					else
					{
						*uParam2 = { -75.6129f, -1826.153f, 25.942f };
						*uParam3 = 230.76f;
						return 1;
					}
					break;
				
				case 8:
					if (bParam4)
					{
						*uParam2 = { -34.517f, -1831.259f, 24.9874f };
						*uParam3 = 231.9969f;
						return 1;
					}
					else
					{
						*uParam2 = { -68.8496f, -1819.927f, 25.942f };
						*uParam3 = 230.76f;
						return 1;
					}
					break;
				
				case 9:
					if (bParam4)
					{
						*uParam2 = { -28.8192f, -1835.994f, 24.7421f };
						*uParam3 = 231.9969f;
						return 1;
					}
					else
					{
						*uParam2 = { -69.672f, -1820.934f, 25.942f };
						*uParam3 = 230.76f;
						return 1;
					}
					break;
				
				case 10:
					if (bParam4)
					{
						*uParam2 = { -22.9205f, -1840.831f, 24.2874f };
						*uParam3 = 231.9969f;
						return 1;
					}
					else
					{
						*uParam2 = { -70.4943f, -1821.941f, 25.942f };
						*uParam3 = 230.76f;
						return 1;
					}
					break;
				
				case 11:
					if (bParam4)
					{
						*uParam2 = { -16.5848f, -1845.825f, 23.9532f };
						*uParam3 = 231.9969f;
						return 1;
					}
					else
					{
						*uParam2 = { -71.3167f, -1822.948f, 25.942f };
						*uParam3 = 230.76f;
						return 1;
					}
					break;
				
				case 12:
					*uParam2 = { -72.139f, -1823.955f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -72.9613f, -1824.961f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -73.7837f, -1825.968f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -74.606f, -1826.975f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -67.8428f, -1820.75f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -68.6651f, -1821.756f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -69.4875f, -1822.763f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -70.3098f, -1823.77f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -71.1322f, -1824.777f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -71.9545f, -1825.784f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -72.7768f, -1826.791f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -73.5992f, -1827.797f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -66.8359f, -1821.572f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -67.6583f, -1822.579f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -68.4806f, -1823.586f, 25.9422f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -69.303f, -1824.593f, 25.9425f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -70.1253f, -1825.599f, 25.9424f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -70.9476f, -1826.606f, 25.9422f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -71.77f, -1827.613f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -72.5923f, -1828.62f, 25.942f };
					*uParam3 = 230.76f;
					return 1;
					break;
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					if (bParam4)
					{
						*uParam2 = { 44.6433f, -1296.79f, 28.1665f };
						*uParam3 = 298.5938f;
						return 1;
					}
					else
					{
						*uParam2 = { 37.8403f, -1281.028f, 28.2825f };
						*uParam3 = 269.64f;
						return 1;
					}
					break;
				
				case 1:
					if (bParam4)
					{
						*uParam2 = { 46.517f, -1299.956f, 28.1904f };
						*uParam3 = 298.5938f;
						return 1;
					}
					else
					{
						*uParam2 = { 37.8321f, -1282.328f, 28.2777f };
						*uParam3 = 269.64f;
						return 1;
					}
					break;
				
				case 2:
					if (bParam4)
					{
						*uParam2 = { 48.2259f, -1303.01f, 28.2008f };
						*uParam3 = 298.5938f;
						return 1;
					}
					else
					{
						*uParam2 = { 37.824f, -1283.628f, 28.2738f };
						*uParam3 = 269.64f;
						return 1;
					}
					break;
				
				case 3:
					if (bParam4)
					{
						*uParam2 = { 49.9452f, -1306.057f, 28.2014f };
						*uParam3 = 298.5938f;
						return 1;
					}
					else
					{
						*uParam2 = { 37.8158f, -1284.928f, 28.2767f };
						*uParam3 = 269.64f;
						return 1;
					}
					break;
				
				case 4:
					if (bParam4)
					{
						*uParam2 = { 37.1659f, -1306.792f, 28.2016f };
						*uParam3 = 268.5924f;
						return 1;
					}
					else
					{
						*uParam2 = { 37.8076f, -1286.228f, 28.2804f };
						*uParam3 = 269.64f;
						return 1;
					}
					break;
				
				case 5:
					if (bParam4)
					{
						*uParam2 = { 37.3594f, -1302.457f, 28.2447f };
						*uParam3 = 268.5924f;
						return 1;
					}
					else
					{
						*uParam2 = { 37.7995f, -1287.528f, 28.2836f };
						*uParam3 = 269.64f;
						return 1;
					}
					break;
				
				case 6:
					if (bParam4)
					{
						*uParam2 = { 28.8771f, -1306.55f, 28.1192f };
						*uParam3 = 268.5924f;
						return 1;
					}
					else
					{
						*uParam2 = { 37.7913f, -1288.828f, 28.2885f };
						*uParam3 = 269.64f;
						return 1;
					}
					break;
				
				case 7:
					if (bParam4)
					{
						*uParam2 = { 29.0857f, -1302.207f, 28.1848f };
						*uParam3 = 268.5924f;
						return 1;
					}
					else
					{
						*uParam2 = { 37.7831f, -1290.128f, 28.2929f };
						*uParam3 = 269.64f;
						return 1;
					}
					break;
				
				case 8:
					if (bParam4)
					{
						*uParam2 = { 51.8603f, -1309.064f, 28.1933f };
						*uParam3 = 299.1927f;
						return 1;
					}
					else
					{
						*uParam2 = { 39.1403f, -1281.036f, 28.2915f };
						*uParam3 = 269.64f;
						return 1;
					}
					break;
				
				case 9:
					if (bParam4)
					{
						*uParam2 = { 53.7922f, -1312.055f, 28.1986f };
						*uParam3 = 299.1927f;
						return 1;
					}
					else
					{
						*uParam2 = { 39.1321f, -1282.336f, 28.2858f };
						*uParam3 = 269.64f;
						return 1;
					}
					break;
				
				case 10:
					if (bParam4)
					{
						*uParam2 = { 55.7237f, -1315.21f, 28.2201f };
						*uParam3 = 299.1927f;
						return 1;
					}
					else
					{
						*uParam2 = { 39.1239f, -1283.636f, 28.2808f };
						*uParam3 = 269.64f;
						return 1;
					}
					break;
				
				case 11:
					if (bParam4)
					{
						*uParam2 = { 57.742f, -1318.5f, 28.2915f };
						*uParam3 = 299.1927f;
						return 1;
					}
					else
					{
						*uParam2 = { 39.1158f, -1284.936f, 28.2792f };
						*uParam3 = 269.64f;
						return 1;
					}
					break;
				
				case 12:
					*uParam2 = { 39.1076f, -1286.236f, 28.2782f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 39.0994f, -1287.536f, 28.2771f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 39.0913f, -1288.836f, 28.2752f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 39.0831f, -1290.136f, 28.2734f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 40.4403f, -1281.044f, 28.3006f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 40.4321f, -1282.344f, 28.2946f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 40.4239f, -1283.644f, 28.2892f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 40.4157f, -1284.944f, 28.2879f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 40.4076f, -1286.244f, 28.2866f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 40.3994f, -1287.544f, 28.2854f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 40.3912f, -1288.844f, 28.2835f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 40.3831f, -1290.144f, 28.2818f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 41.7402f, -1281.053f, 28.1523f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 41.7321f, -1282.353f, 28.1465f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 41.7239f, -1283.652f, 28.1411f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 41.7157f, -1284.952f, 28.1413f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 41.7076f, -1286.252f, 28.1414f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 41.6994f, -1287.552f, 28.2923f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 41.6912f, -1288.852f, 28.2918f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 41.6831f, -1290.152f, 28.2898f };
					*uParam3 = 269.64f;
					return 1;
					break;
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					if (bParam4)
					{
						*uParam2 = { 1195.646f, -1261.693f, 34.2195f };
						*uParam3 = 266.1938f;
						return 1;
					}
					else
					{
						*uParam2 = { 1212.141f, -1263.78f, 34.2267f };
						*uParam3 = 91.44f;
						return 1;
					}
					break;
				
				case 1:
					if (bParam4)
					{
						*uParam2 = { 1195.94f, -1265.737f, 34.2205f };
						*uParam3 = 266.1938f;
						return 1;
					}
					else
					{
						*uParam2 = { 1212.109f, -1262.48f, 34.2267f };
						*uParam3 = 91.44f;
						return 1;
					}
					break;
				
				case 2:
					if (bParam4)
					{
						*uParam2 = { 1199.91f, -1269.677f, 34.2267f };
						*uParam3 = 266.1938f;
						return 1;
					}
					else
					{
						*uParam2 = { 1212.076f, -1261.181f, 34.2267f };
						*uParam3 = 91.44f;
						return 1;
					}
					break;
				
				case 3:
					if (bParam4)
					{
						*uParam2 = { 1199.64f, -1273.775f, 34.2236f };
						*uParam3 = 266.1938f;
						return 1;
					}
					else
					{
						*uParam2 = { 1212.043f, -1259.881f, 34.2267f };
						*uParam3 = 91.44f;
						return 1;
					}
					break;
				
				case 4:
					if (bParam4)
					{
						*uParam2 = { 1194.89f, -1284.992f, 34.1627f };
						*uParam3 = 264.9908f;
						return 1;
					}
					else
					{
						*uParam2 = { 1212.01f, -1258.581f, 34.2267f };
						*uParam3 = 91.44f;
						return 1;
					}
					break;
				
				case 5:
					if (bParam4)
					{
						*uParam2 = { 1194.377f, -1289.017f, 34.0681f };
						*uParam3 = 264.9908f;
						return 1;
					}
					else
					{
						*uParam2 = { 1211.978f, -1257.282f, 34.2267f };
						*uParam3 = 91.44f;
						return 1;
					}
					break;
				
				case 6:
					if (bParam4)
					{
						*uParam2 = { 1186.583f, -1284.243f, 33.9627f };
						*uParam3 = 264.9908f;
						return 1;
					}
					else
					{
						*uParam2 = { 1211.945f, -1255.982f, 34.2267f };
						*uParam3 = 91.44f;
						return 1;
					}
					break;
				
				case 7:
					if (bParam4)
					{
						*uParam2 = { 1186.12f, -1288.351f, 33.8788f };
						*uParam3 = 264.9908f;
						return 1;
					}
					else
					{
						*uParam2 = { 1211.912f, -1254.683f, 34.2267f };
						*uParam3 = 91.44f;
						return 1;
					}
					break;
				
				case 8:
					if (bParam4)
					{
						*uParam2 = { 1175.642f, -1292.637f, 33.8245f };
						*uParam3 = 354.7906f;
						return 1;
					}
					else
					{
						*uParam2 = { 1210.842f, -1263.812f, 34.2267f };
						*uParam3 = 91.44f;
						return 1;
					}
					break;
				
				case 9:
					if (bParam4)
					{
						*uParam2 = { 1179.274f, -1293.122f, 33.8035f };
						*uParam3 = 354.7906f;
						return 1;
					}
					else
					{
						*uParam2 = { 1210.809f, -1262.513f, 34.2267f };
						*uParam3 = 91.44f;
						return 1;
					}
					break;
				
				case 10:
					if (bParam4)
					{
						*uParam2 = { 1175.042f, -1301.148f, 33.8329f };
						*uParam3 = 354.7906f;
						return 1;
					}
					else
					{
						*uParam2 = { 1210.776f, -1261.213f, 34.2267f };
						*uParam3 = 91.44f;
						return 1;
					}
					break;
				
				case 11:
					if (bParam4)
					{
						*uParam2 = { 1178.645f, -1301.519f, 33.8056f };
						*uParam3 = 354.7906f;
						return 1;
					}
					else
					{
						*uParam2 = { 1210.744f, -1259.914f, 34.2267f };
						*uParam3 = 91.44f;
						return 1;
					}
					break;
				
				case 12:
					*uParam2 = { 1210.711f, -1258.614f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1210.678f, -1257.315f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1210.645f, -1256.015f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1210.613f, -1254.715f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 1209.542f, -1263.845f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 1209.509f, -1262.546f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 1209.477f, -1261.246f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 1209.444f, -1259.946f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 1209.411f, -1258.647f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 1209.379f, -1257.347f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 1209.346f, -1256.048f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 1209.313f, -1254.748f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 1208.243f, -1263.878f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 1208.21f, -1262.578f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 1208.177f, -1261.279f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 1208.144f, -1259.979f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 1208.112f, -1258.68f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 1208.079f, -1257.38f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 1208.046f, -1256.08f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 1208.014f, -1254.781f, 34.2267f };
					*uParam3 = 91.44f;
					return 1;
					break;
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					if (bParam4)
					{
						*uParam2 = { 814.3074f, -2231.162f, 28.7591f };
						*uParam3 = 136.3901f;
						return 1;
					}
					else
					{
						*uParam2 = { 806.7189f, -2222.363f, 28.5564f };
						*uParam3 = 178.92f;
						return 1;
					}
					break;
				
				case 1:
					if (bParam4)
					{
						*uParam2 = { 818.5963f, -2231.665f, 28.8321f };
						*uParam3 = 136.3901f;
						return 1;
					}
					else
					{
						*uParam2 = { 805.4192f, -2222.338f, 28.5129f };
						*uParam3 = 178.92f;
						return 1;
					}
					break;
				
				case 2:
					if (bParam4)
					{
						*uParam2 = { 822.9283f, -2232.598f, 28.8594f };
						*uParam3 = 136.3901f;
						return 1;
					}
					else
					{
						*uParam2 = { 804.1194f, -2222.314f, 28.4545f };
						*uParam3 = 178.92f;
						return 1;
					}
					break;
				
				case 3:
					if (bParam4)
					{
						*uParam2 = { 828.4664f, -2233.104f, 28.9445f };
						*uParam3 = 136.3901f;
						return 1;
					}
					else
					{
						*uParam2 = { 802.8197f, -2222.289f, 28.4468f };
						*uParam3 = 178.92f;
						return 1;
					}
					break;
				
				case 4:
					if (bParam4)
					{
						*uParam2 = { 779.4756f, -2269.983f, 28.2386f };
						*uParam3 = 86.1935f;
						return 1;
					}
					else
					{
						*uParam2 = { 801.52f, -2222.265f, 28.439f };
						*uParam3 = 178.92f;
						return 1;
					}
					break;
				
				case 5:
					if (bParam4)
					{
						*uParam2 = { 779.1962f, -2273.839f, 28.2358f };
						*uParam3 = 86.1935f;
						return 1;
					}
					else
					{
						*uParam2 = { 806.6945f, -2223.662f, 28.5693f };
						*uParam3 = 178.92f;
						return 1;
					}
					break;
				
				case 6:
					if (bParam4)
					{
						*uParam2 = { 778.7557f, -2277.931f, 28.1127f };
						*uParam3 = 86.1935f;
						return 1;
					}
					else
					{
						*uParam2 = { 805.3947f, -2223.638f, 28.5246f };
						*uParam3 = 178.92f;
						return 1;
					}
					break;
				
				case 7:
					if (bParam4)
					{
						*uParam2 = { 778.3351f, -2281.816f, 27.9724f };
						*uParam3 = 86.1935f;
						return 1;
					}
					else
					{
						*uParam2 = { 804.095f, -2223.614f, 28.4952f };
						*uParam3 = 178.92f;
						return 1;
					}
					break;
				
				case 8:
					if (bParam4)
					{
						*uParam2 = { 777.4008f, -2288.069f, 27.7f };
						*uParam3 = 86.1935f;
						return 1;
					}
					else
					{
						*uParam2 = { 802.7952f, -2223.589f, 28.4875f };
						*uParam3 = 85.7933f;
						return 1;
					}
					break;
				
				case 9:
					if (bParam4)
					{
						*uParam2 = { 776.8676f, -2292.316f, 27.4908f };
						*uParam3 = 85.7933f;
						return 1;
					}
					else
					{
						*uParam2 = { 801.4955f, -2223.565f, 28.4797f };
						*uParam3 = 178.92f;
						return 1;
					}
					break;
				
				case 10:
					if (bParam4)
					{
						*uParam2 = { 776.4733f, -2296.191f, 27.2854f };
						*uParam3 = 85.7933f;
						return 1;
					}
					else
					{
						*uParam2 = { 806.67f, -2224.962f, 28.5838f };
						*uParam3 = 178.92f;
						return 1;
					}
					break;
				
				case 11:
					if (bParam4)
					{
						*uParam2 = { 776.2014f, -2300.281f, 26.9733f };
						*uParam3 = 85.7933f;
						return 1;
					}
					else
					{
						*uParam2 = { 805.3702f, -2224.938f, 28.5437f };
						*uParam3 = 178.92f;
						return 1;
					}
					break;
				
				case 12:
					*uParam2 = { 804.0705f, -2224.913f, 28.5359f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 802.7708f, -2224.889f, 28.5085f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 801.471f, -2224.865f, 28.479f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 806.6455f, -2226.262f, 28.6176f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 805.3458f, -2226.238f, 28.5875f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 804.046f, -2226.213f, 28.5615f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 802.7463f, -2226.189f, 28.5343f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 801.4465f, -2226.164f, 28.507f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 806.621f, -2227.562f, 28.6616f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 805.3213f, -2227.537f, 28.6379f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 804.0215f, -2227.513f, 28.6159f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 802.7218f, -2227.489f, 28.5944f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 801.4221f, -2227.464f, 28.5753f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 806.5966f, -2228.862f, 28.6682f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 805.2968f, -2228.837f, 28.6386f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 803.9971f, -2228.813f, 28.6174f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 802.6973f, -2228.788f, 28.5957f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 801.3976f, -2228.764f, 28.5766f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 806.5721f, -2230.161f, 28.6749f };
					*uParam3 = 178.92f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 805.2723f, -2230.137f, 28.639f };
					*uParam3 = 178.92f;
					return 1;
					break;
			}
			break;
		
		case 63:
			switch (iParam1)
			{
				case 0:
					if (bParam4)
					{
						*uParam2 = { 1732.364f, -1699.852f, 111.5346f };
						*uParam3 = 182.9893f;
						return 1;
					}
					else
					{
						*uParam2 = { 1767.051f, -1647.813f, 111.6467f };
						*uParam3 = 190.44f;
						return 1;
					}
					break;
				
				case 1:
					if (bParam4)
					{
						*uParam2 = { 1728.957f, -1701.908f, 111.5529f };
						*uParam3 = 182.9893f;
						return 1;
					}
					else
					{
						*uParam2 = { 1765.576f, -1648.085f, 111.6503f };
						*uParam3 = 190.44f;
						return 1;
					}
					break;
				
				case 2:
					if (bParam4)
					{
						*uParam2 = { 1732.007f, -1691.745f, 111.6779f };
						*uParam3 = 182.9893f;
						return 1;
					}
					else
					{
						*uParam2 = { 1764.101f, -1648.357f, 111.6528f };
						*uParam3 = 190.44f;
						return 1;
					}
					break;
				
				case 3:
					if (bParam4)
					{
						*uParam2 = { 1728.593f, -1694.057f, 111.5217f };
						*uParam3 = 182.9893f;
						return 1;
					}
					else
					{
						*uParam2 = { 1762.626f, -1648.629f, 111.6545f };
						*uParam3 = 190.44f;
						return 1;
					}
					break;
				
				case 4:
					if (bParam4)
					{
						*uParam2 = { 1730.364f, -1681.616f, 111.6619f };
						*uParam3 = 182.9893f;
						return 1;
					}
					else
					{
						*uParam2 = { 1761.15f, -1648.901f, 111.6538f };
						*uParam3 = 190.44f;
						return 1;
					}
					break;
				
				case 5:
					if (bParam4)
					{
						*uParam2 = { 1727.072f, -1683.145f, 111.6702f };
						*uParam3 = 182.9893f;
						return 1;
					}
					else
					{
						*uParam2 = { 1759.675f, -1649.173f, 111.6562f };
						*uParam3 = 190.44f;
						return 1;
					}
					break;
				
				case 6:
					if (bParam4)
					{
						*uParam2 = { 1730.124f, -1673.256f, 111.5968f };
						*uParam3 = 182.9893f;
						return 1;
					}
					else
					{
						*uParam2 = { 1758.2f, -1649.444f, 111.6584f };
						*uParam3 = 190.44f;
						return 1;
					}
					break;
				
				case 7:
					if (bParam4)
					{
						*uParam2 = { 1726.772f, -1675.225f, 111.5985f };
						*uParam3 = 182.9893f;
						return 1;
					}
					else
					{
						*uParam2 = { 1756.725f, -1649.716f, 111.6591f };
						*uParam3 = 190.44f;
						return 1;
					}
					break;
				
				case 8:
					if (bParam4)
					{
						*uParam2 = { 1716.898f, -1666.006f, 111.5213f };
						*uParam3 = 238.1895f;
						return 1;
					}
					else
					{
						*uParam2 = { 1767.323f, -1649.289f, 111.658f };
						*uParam3 = 190.44f;
						return 1;
					}
					break;
				
				case 9:
					if (bParam4)
					{
						*uParam2 = { 1716.425f, -1661.644f, 111.4922f };
						*uParam3 = 238.1895f;
						return 1;
					}
					else
					{
						*uParam2 = { 1765.848f, -1649.56f, 111.6611f };
						*uParam3 = 190.44f;
						return 1;
					}
					break;
				
				case 10:
					if (bParam4)
					{
						*uParam2 = { 1716.255f, -1657.604f, 111.4835f };
						*uParam3 = 238.1895f;
						return 1;
					}
					else
					{
						*uParam2 = { 1764.373f, -1649.832f, 111.6585f };
						*uParam3 = 190.44f;
						return 1;
					}
					break;
				
				case 11:
					if (bParam4)
					{
						*uParam2 = { 1715.214f, -1653.176f, 111.5042f };
						*uParam3 = 238.1895f;
						return 1;
					}
					else
					{
						*uParam2 = { 1762.897f, -1650.104f, 111.6574f };
						*uParam3 = 190.44f;
						return 1;
					}
					break;
				
				case 12:
					*uParam2 = { 1761.422f, -1650.376f, 111.6587f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1759.947f, -1650.648f, 111.6611f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1758.472f, -1650.92f, 111.6638f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1756.997f, -1651.192f, 111.6683f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 1767.595f, -1650.764f, 111.6655f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 1766.12f, -1651.036f, 111.6606f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 1764.645f, -1651.307f, 111.6596f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 1763.169f, -1651.579f, 111.6601f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 1761.694f, -1651.851f, 111.6617f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 1760.219f, -1652.123f, 111.6657f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 1758.744f, -1652.395f, 111.6726f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 1757.268f, -1652.667f, 111.6784f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 1767.867f, -1652.239f, 111.6634f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 1766.392f, -1652.511f, 111.6607f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 1764.916f, -1652.783f, 111.6589f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 1763.441f, -1653.055f, 111.6613f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 1761.966f, -1653.326f, 111.6665f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 1760.491f, -1653.598f, 111.6768f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 1759.016f, -1653.87f, 111.6833f };
					*uParam3 = 190.44f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 1757.54f, -1654.142f, 111.6889f };
					*uParam3 = 190.44f;
					return 1;
					break;
			}
			break;
		
		case 64:
			switch (iParam1)
			{
				case 0:
					if (bParam4)
					{
						*uParam2 = { 179.0235f, -2983.04f, 4.9006f };
						*uParam3 = 305.1886f;
						return 1;
					}
					else
					{
						*uParam2 = { 142.0598f, -3004.689f, 6.0309f };
						*uParam3 = 0f;
						return 1;
					}
					break;
				
				case 1:
					if (bParam4)
					{
						*uParam2 = { 178.999f, -2987.185f, 4.8741f };
						*uParam3 = 305.1886f;
						return 1;
					}
					else
					{
						*uParam2 = { 143.5598f, -3004.689f, 6.0309f };
						*uParam3 = 0f;
						return 1;
					}
					break;
				
				case 2:
					if (bParam4)
					{
						*uParam2 = { 172.0389f, -2988.008f, 4.8866f };
						*uParam3 = 305.1886f;
						return 1;
					}
					else
					{
						*uParam2 = { 145.0598f, -3004.689f, 6.0309f };
						*uParam3 = 0f;
						return 1;
					}
					break;
				
				case 3:
					if (bParam4)
					{
						*uParam2 = { 172.1585f, -2992.226f, 4.8364f };
						*uParam3 = 305.1886f;
						return 1;
					}
					else
					{
						*uParam2 = { 146.5598f, -3004.689f, 6.031f };
						*uParam3 = 0f;
						return 1;
					}
					break;
				
				case 4:
					if (bParam4)
					{
						*uParam2 = { 179.2999f, -2993.637f, 4.777f };
						*uParam3 = 305.1886f;
						return 1;
					}
					else
					{
						*uParam2 = { 142.0598f, -3003.189f, 6.0309f };
						*uParam3 = 0f;
						return 1;
					}
					break;
				
				case 5:
					if (bParam4)
					{
						*uParam2 = { 179.3002f, -2998.515f, 4.7422f };
						*uParam3 = 305.1886f;
						return 1;
					}
					else
					{
						*uParam2 = { 143.5598f, -3003.189f, 6.0309f };
						*uParam3 = 0f;
						return 1;
					}
					break;
				
				case 6:
					if (bParam4)
					{
						*uParam2 = { 172.1279f, -2998.175f, 4.7668f };
						*uParam3 = 305.1886f;
						return 1;
					}
					else
					{
						*uParam2 = { 145.0598f, -3003.189f, 6.031f };
						*uParam3 = 0f;
						return 1;
					}
					break;
				
				case 7:
					if (bParam4)
					{
						*uParam2 = { 172.6838f, -3003.119f, 4.7802f };
						*uParam3 = 305.1886f;
						return 1;
					}
					else
					{
						*uParam2 = { 146.5598f, -3003.189f, 6.031f };
						*uParam3 = 0f;
						return 1;
					}
					break;
				
				case 8:
					if (bParam4)
					{
						*uParam2 = { 178.9094f, -2966.464f, 4.9906f };
						*uParam3 = 305.1886f;
						return 1;
					}
					else
					{
						*uParam2 = { 142.0598f, -3001.689f, 6.031f };
						*uParam3 = 0f;
						return 1;
					}
					break;
				
				case 9:
					if (bParam4)
					{
						*uParam2 = { 177.6397f, -2962.168f, 4.9975f };
						*uParam3 = 305.1886f;
						return 1;
					}
					else
					{
						*uParam2 = { 143.5598f, -3001.689f, 6.031f };
						*uParam3 = 0f;
						return 1;
					}
					break;
				
				case 10:
					if (bParam4)
					{
						*uParam2 = { 172.2873f, -2971.257f, 4.9236f };
						*uParam3 = 305.1886f;
						return 1;
					}
					else
					{
						*uParam2 = { 145.0598f, -3001.689f, 6.0311f };
						*uParam3 = 0f;
						return 1;
					}
					break;
				
				case 11:
					if (bParam4)
					{
						*uParam2 = { 170.9007f, -2967.456f, 4.9488f };
						*uParam3 = 305.1886f;
						return 1;
					}
					else
					{
						*uParam2 = { 146.5598f, -3001.689f, 6.0311f };
						*uParam3 = 0f;
						return 1;
					}
					break;
				
				case 12:
					*uParam2 = { 142.0598f, -3000.189f, 6.031f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 143.5598f, -3000.189f, 6.0311f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 145.0598f, -3000.189f, 6.0311f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 146.5598f, -3000.189f, 6.0312f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 142.0598f, -2998.689f, 6.031f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 143.5598f, -2998.689f, 6.0311f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 145.0598f, -2998.689f, 6.0311f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 146.5598f, -2998.689f, 6.0312f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 142.0598f, -2997.189f, 6.031f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 143.5598f, -2997.189f, 6.0311f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 145.0598f, -2997.189f, 6.0312f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 146.5598f, -2997.189f, 6.0313f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 142.0598f, -2995.689f, 6.031f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 143.5598f, -2995.689f, 6.0311f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 145.0598f, -2995.689f, 6.0312f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 146.5598f, -2995.689f, 6.0313f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 142.0598f, -2994.189f, 6.0311f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 143.5598f, -2994.189f, 6.0312f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 145.0598f, -2994.189f, 6.0313f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 146.5598f, -2994.189f, 6.0314f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam1)
			{
				case 0:
					if (bParam4)
					{
						*uParam2 = { -482.7018f, -2168.995f, 8.4192f };
						*uParam3 = 323.3885f;
						return 1;
					}
					else
					{
						*uParam2 = { -516.6584f, -2199.877f, 5.394f };
						*uParam3 = 321.48f;
						return 1;
					}
					break;
				
				case 1:
					if (bParam4)
					{
						*uParam2 = { -479.5692f, -2171.427f, 8.5546f };
						*uParam3 = 323.3885f;
						return 1;
					}
					else
					{
						*uParam2 = { -515.4848f, -2200.811f, 5.394f };
						*uParam3 = 321.48f;
						return 1;
					}
					break;
				
				case 2:
					if (bParam4)
					{
						*uParam2 = { -487.8007f, -2175.853f, 8.0351f };
						*uParam3 = 323.3885f;
						return 1;
					}
					else
					{
						*uParam2 = { -514.3112f, -2201.745f, 5.394f };
						*uParam3 = 321.48f;
						return 1;
					}
					break;
				
				case 3:
					if (bParam4)
					{
						*uParam2 = { -484.4329f, -2178.406f, 8.144f };
						*uParam3 = 323.3885f;
						return 1;
					}
					else
					{
						*uParam2 = { -513.1376f, -2202.679f, 5.394f };
						*uParam3 = 321.48f;
						return 1;
					}
					break;
				
				case 4:
					if (bParam4)
					{
						*uParam2 = { -490.9238f, -2160.861f, 8.2446f };
						*uParam3 = 312.9879f;
						return 1;
					}
					else
					{
						*uParam2 = { -511.9641f, -2203.613f, 5.394f };
						*uParam3 = 321.48f;
						return 1;
					}
					break;
				
				case 5:
					if (bParam4)
					{
						*uParam2 = { -494.0761f, -2158.499f, 8.1971f };
						*uParam3 = 312.9879f;
						return 1;
					}
					else
					{
						*uParam2 = { -510.7905f, -2204.547f, 5.394f };
						*uParam3 = 321.48f;
						return 1;
					}
					break;
				
				case 6:
					if (bParam4)
					{
						*uParam2 = { -496.8955f, -2166.596f, 7.8227f };
						*uParam3 = 312.9879f;
						return 1;
					}
					else
					{
						*uParam2 = { -515.7242f, -2198.703f, 5.394f };
						*uParam3 = 321.48f;
						return 1;
					}
					break;
				
				case 7:
					if (bParam4)
					{
						*uParam2 = { -499.7228f, -2163.837f, 7.8161f };
						*uParam3 = 312.9879f;
						return 1;
					}
					else
					{
						*uParam2 = { -514.5506f, -2199.637f, 5.394f };
						*uParam3 = 321.48f;
						return 1;
					}
					break;
				
				case 8:
					if (bParam4)
					{
						*uParam2 = { -471.1009f, -2164.748f, 8.7873f };
						*uParam3 = 15.9878f;
						return 1;
					}
					else
					{
						*uParam2 = { -513.377f, -2200.571f, 5.394f };
						*uParam3 = 321.48f;
						return 1;
					}
					break;
				
				case 9:
					if (bParam4)
					{
						*uParam2 = { -467.0619f, -2164.841f, 8.9238f };
						*uParam3 = 15.9878f;
						return 1;
					}
					else
					{
						*uParam2 = { -512.2034f, -2201.505f, 5.394f };
						*uParam3 = 321.48f;
						return 1;
					}
					break;
				
				case 10:
					if (bParam4)
					{
						*uParam2 = { -468.8961f, -2172.722f, 8.9299f };
						*uParam3 = 15.9878f;
						return 1;
					}
					else
					{
						*uParam2 = { -511.0298f, -2202.439f, 5.394f };
						*uParam3 = 321.48f;
						return 1;
					}
					break;
				
				case 11:
					if (bParam4)
					{
						*uParam2 = { -464.9085f, -2172.709f, 9.0347f };
						*uParam3 = 15.9878f;
						return 1;
					}
					else
					{
						*uParam2 = { -509.8563f, -2203.374f, 5.394f };
						*uParam3 = 321.48f;
						return 1;
					}
					break;
				
				case 12:
					*uParam2 = { -514.79f, -2197.53f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -513.6164f, -2198.464f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -512.4428f, -2199.398f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -511.2692f, -2200.332f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -510.0956f, -2201.266f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -508.9221f, -2202.2f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -513.8558f, -2196.356f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -512.6822f, -2197.29f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -511.5086f, -2198.224f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -510.335f, -2199.158f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -509.1614f, -2200.092f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -507.9879f, -2201.026f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -512.9216f, -2195.182f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -511.748f, -2196.116f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -510.5744f, -2197.051f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -509.4008f, -2197.985f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -508.2272f, -2198.919f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -507.0536f, -2199.853f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -511.9874f, -2194.009f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -510.8138f, -2194.943f, 5.394f };
					*uParam3 = 321.48f;
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam1)
			{
				case 0:
					if (bParam4)
					{
						*uParam2 = { -1176.566f, -2193.284f, 12.1952f };
						*uParam3 = 329.7995f;
						return 1;
					}
					else
					{
						*uParam2 = { -1149.437f, -2175.302f, 12.2749f };
						*uParam3 = 136f;
						return 1;
					}
					break;
				
				case 1:
					if (bParam4)
					{
						*uParam2 = { -1172.991f, -2195.325f, 12.1953f };
						*uParam3 = 329.7995f;
						return 1;
					}
					else
					{
						*uParam2 = { -1150.516f, -2174.26f, 12.271f };
						*uParam3 = 136f;
						return 1;
					}
					break;
				
				case 2:
					if (bParam4)
					{
						*uParam2 = { -1180.919f, -2200.967f, 12.1951f };
						*uParam3 = 329.7995f;
						return 1;
					}
					else
					{
						*uParam2 = { -1151.595f, -2173.219f, 12.2669f };
						*uParam3 = 136f;
						return 1;
					}
					break;
				
				case 3:
					if (bParam4)
					{
						*uParam2 = { -1177.17f, -2203.107f, 12.1953f };
						*uParam3 = 329.7995f;
						return 1;
					}
					else
					{
						*uParam2 = { -1152.674f, -2172.177f, 12.2654f };
						*uParam3 = 136f;
						return 1;
					}
					break;
				
				case 4:
					if (bParam4)
					{
						*uParam2 = { -1169.578f, -2197.272f, 12.1954f };
						*uParam3 = 329.7995f;
						return 1;
					}
					else
					{
						*uParam2 = { -1153.753f, -2171.135f, 12.2648f };
						*uParam3 = 136f;
						return 1;
					}
					break;
				
				case 5:
					if (bParam4)
					{
						*uParam2 = { -1166.128f, -2199.225f, 12.1955f };
						*uParam3 = 329.7995f;
						return 1;
					}
					else
					{
						*uParam2 = { -1154.832f, -2170.093f, 12.2647f };
						*uParam3 = 136f;
						return 1;
					}
					break;
				
				case 6:
					if (bParam4)
					{
						*uParam2 = { -1173.715f, -2204.923f, 12.1954f };
						*uParam3 = 329.7995f;
						return 1;
					}
					else
					{
						*uParam2 = { -1155.911f, -2169.051f, 12.2646f };
						*uParam3 = 136f;
						return 1;
					}
					break;
				
				case 7:
					if (bParam4)
					{
						*uParam2 = { -1170.49f, -2206.781f, 12.1956f };
						*uParam3 = 329.7995f;
						return 1;
					}
					else
					{
						*uParam2 = { -1156.99f, -2168.009f, 12.2646f };
						*uParam3 = 136f;
						return 1;
					}
					break;
				
				case 8:
					if (bParam4)
					{
						*uParam2 = { -1162.528f, -2201.375f, 12.1957f };
						*uParam3 = 329.7995f;
						return 1;
					}
					else
					{
						*uParam2 = { -1150.479f, -2176.382f, 12.2637f };
						*uParam3 = 136f;
						return 1;
					}
					break;
				
				case 9:
					if (bParam4)
					{
						*uParam2 = { -1159.016f, -2203.38f, 12.1959f };
						*uParam3 = 329.7995f;
						return 1;
					}
					else
					{
						*uParam2 = { -1151.558f, -2175.34f, 12.259f };
						*uParam3 = 136f;
						return 1;
					}
					break;
				
				case 10:
					if (bParam4)
					{
						*uParam2 = { -1166.667f, -2208.739f, 12.1959f };
						*uParam3 = 329.7995f;
						return 1;
					}
					else
					{
						*uParam2 = { -1152.637f, -2174.298f, 12.2543f };
						*uParam3 = 136f;
						return 1;
					}
					break;
				
				case 11:
					if (bParam4)
					{
						*uParam2 = { -1163.183f, -2210.749f, 12.1959f };
						*uParam3 = 329.7995f;
						return 1;
					}
					else
					{
						*uParam2 = { -1153.716f, -2173.256f, 12.2536f };
						*uParam3 = 136f;
						return 1;
					}
					break;
				
				case 12:
					*uParam2 = { -1154.795f, -2172.214f, 12.2531f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1155.874f, -2171.172f, 12.2526f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1156.953f, -2170.13f, 12.2522f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1158.032f, -2169.088f, 12.2518f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -1151.521f, -2177.461f, 12.2296f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -1152.6f, -2176.419f, 12.2292f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -1153.679f, -2175.377f, 12.2288f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -1154.758f, -2174.335f, 12.2285f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -1155.837f, -2173.293f, 12.228f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -1156.916f, -2172.251f, 12.2276f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -1157.995f, -2171.209f, 12.2311f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -1159.074f, -2170.167f, 12.2425f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -1152.563f, -2178.54f, 12.2045f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -1153.642f, -2177.498f, 12.2041f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -1154.721f, -2176.456f, 12.2037f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -1155.8f, -2175.414f, 12.2034f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -1156.879f, -2174.372f, 12.2038f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -1157.958f, -2173.33f, 12.2146f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -1159.037f, -2172.288f, 12.2243f };
					*uParam3 = 136f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -1160.116f, -2171.246f, 12.234f };
					*uParam3 = 136f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_651(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -4.1915f, 9.9929f, -5.6471f };
					*uParam3 = 175.7734f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -2.8057f, 9.4189f, -5.6471f };
					*uParam3 = 175.7734f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -4.7656f, 8.6072f, -5.6471f };
					*uParam3 = 175.7734f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -5.5773f, 10.5669f, -5.6471f };
					*uParam3 = 175.7734f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -3.6175f, 11.3787f, -5.6471f };
					*uParam3 = 175.7734f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -3.3798f, 8.0332f, -5.6471f };
					*uParam3 = 175.7734f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -6.1514f, 9.1812f, -5.6471f };
					*uParam3 = 175.7734f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -5.0033f, 11.9526f, -5.6471f };
					*uParam3 = 175.7734f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_652(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312.f_3 = 0;
	if (func_206(unk_0xBE369BE1BC57A796(), 1))
	{
		if (func_207(unk_0xBE369BE1BC57A796()))
		{
			unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 0);
		}
		else
		{
			unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 1);
		}
		iVar0 = func_476(unk_0xBE369BE1BC57A796());
		if (iVar0 != func_48() && iVar0 != unk_0xBE369BE1BC57A796())
		{
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312.f_3), iVar0);
		}
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = unk_0x0C36F33B3F746611(iVar2);
			if ((iVar1 != func_48() && iVar1 != unk_0xBE369BE1BC57A796()) && iVar1 != iVar0)
			{
				if (func_3(iVar1, 1, 1))
				{
					if (func_633(iVar1, iVar0, 1))
					{
						unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312.f_3), iVar1);
					}
				}
			}
			iVar2++;
		}
	}
	else if (func_636(unk_0xBE369BE1BC57A796(), func_631(iParam0)))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 2);
	}
}

char* func_653(var uParam0, var uParam1, var uParam2)
{
	if (Global_1764677.f_593)
	{
		Global_1764677.f_593 = 0;
		return "MP_GARAGE_KICKe";
	}
	if (Global_1764677.f_2 == 0)
	{
		return "MP_GARAGE_KICKc";
	}
	if (unk_0x48B8265059381CD0(Global_1764677.f_2, 1))
	{
		if (func_468(unk_0xBE369BE1BC57A796(), 1))
		{
			if (func_478(unk_0xBE369BE1BC57A796()))
			{
				return "MP_GARAGE_KICKf";
			}
			else
			{
				return "MP_GARAGE_KICKg";
			}
		}
		if (!func_206(unk_0xBE369BE1BC57A796(), 0))
		{
			return "MP_GARAGE_KICKb";
		}
	}
	if (unk_0x48B8265059381CD0(Global_1764677.f_2, 0) || unk_0x48B8265059381CD0(Global_1764677.f_2, 2))
	{
		if (func_468(unk_0xBE369BE1BC57A796(), 1))
		{
			if (func_478(unk_0xBE369BE1BC57A796()))
			{
				return "MP_GARAGE_KICKf";
			}
			else
			{
				return "MP_GARAGE_KICKg";
			}
		}
		if (func_206(unk_0xBE369BE1BC57A796(), 0))
		{
			return "MP_GARAGE_KICKd";
		}
	}
	return "";
}

bool func_654(int iParam0, var uParam1)
{
	if (Global_1764677.f_2 == 0)
	{
		return 1;
	}
	if (func_468(unk_0xBE369BE1BC57A796(), 1))
	{
		return 1;
	}
	if (unk_0x48B8265059381CD0(Global_1764677.f_2, 1))
	{
		if (!func_206(unk_0xBE369BE1BC57A796(), 0))
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_1764677.f_2, 0) || unk_0x48B8265059381CD0(Global_1764677.f_2, 2))
	{
		if (func_206(unk_0xBE369BE1BC57A796(), 0))
		{
			return 1;
		}
	}
	return !func_676(unk_0xBE369BE1BC57A796(), iParam0);
}

void func_655(int iParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (func_207(unk_0xBE369BE1BC57A796()) && func_658(unk_0xBE369BE1BC57A796(), iParam0))
	{
		func_679(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar8 = 0;
		while (iVar8 < func_511())
		{
			iVar6 = func_510(unk_0xBE369BE1BC57A796(), iVar8);
			if ((iVar6 != func_48() && iVar6 != unk_0xBE369BE1BC57A796()) && func_3(iVar6, 1, 1))
			{
				Var3 = { func_172(iVar6) };
				Var3.f_2 = 0f;
				if (unk_0x2A488C176D52CCA5(Var3, Var0) <= IntToFloat(func_509(iParam0)))
				{
					iVar7++;
				}
			}
			iVar8++;
		}
		if (iVar7 == 0)
		{
			func_507(uParam1, 1, 0);
		}
		else
		{
			func_507(uParam1, 1, 1);
		}
		if (func_506(1, uParam1))
		{
			if (iVar7 > 0)
			{
				func_504(unk_0xBE369BE1BC57A796(), iParam0);
			}
			Global_1764677.f_1 = -1;
			Global_1764677.f_708 = 1;
			Global_1764677.f_709 = iParam0;
			Global_1764677.f_710 = 0;
			Global_1764677.f_715 = 1;
		}
	}
	else
	{
		func_507(uParam1, 1, 0);
	}
}

void func_656(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	StringCopy(sParam1, func_681(iParam0), 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE";
	(*uParam3)[0] = 3;
	(*uParam2)[1] = "IEWHS_ENTR_ALL";
	(*uParam3)[1] = 4;
	*uParam4 = 2;
}

int func_657(int iParam0, int iParam1)
{
	if (func_206(iParam0, 0) && func_636(func_476(iParam0), func_631(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_658(int iParam0, int iParam1)
{
	if (func_207(iParam0) && func_636(iParam0, func_631(iParam1)))
	{
		return 1;
	}
	return 0;
}

char* func_659(int iParam0, var uParam1)
{
	int iVar0;
	
	if (func_636(unk_0xBE369BE1BC57A796(), func_631(iParam0)))
	{
		if ((unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && !func_674(unk_0xBE369BE1BC57A796())) && !func_673(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)))
		{
			return "IE_WH_VEH_BLCK";
		}
		if (func_468(unk_0xBE369BE1BC57A796(), 1))
		{
			if (func_478(unk_0xBE369BE1BC57A796()))
			{
				if (func_660())
				{
					return "IE_WHS_HLP_SV2";
				}
				else
				{
					return "GARAGE_MC_BLOCK_P";
				}
			}
			else if (func_660())
			{
				return "IE_WHS_HLP_SV3";
			}
			else
			{
				return "GARAGE_MC_BLOCK_M";
			}
		}
		else if (func_206(unk_0xBE369BE1BC57A796(), 0))
		{
			iVar0 = func_476(unk_0xBE369BE1BC57A796());
			if (!func_636(iVar0, func_631(iParam0)))
			{
				if (func_203(func_204()))
				{
					if (func_660())
					{
						return "IE_WHS_HLP_SV1";
					}
					else
					{
						return "GARAGE_GOON_HLP1C";
					}
				}
				else if (func_660())
				{
					return "IE_WHS_HLP_SV4";
				}
				else
				{
					return "GARAGE_GOON_HLP1";
				}
			}
		}
	}
	else if ((unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && !func_674(unk_0xBE369BE1BC57A796())) && !func_673(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)))
	{
		return "IE_WH_VEH_BLCK";
	}
	if (func_331(unk_0xBE369BE1BC57A796(), 0))
	{
		if (func_330(unk_0xBE369BE1BC57A796()) == 178)
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				return "IE_WH_MSSN_BLCK";
			}
		}
	}
	return "";
}

int func_660()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < 8)
	{
		iVar1 = (iVar2 + func_670(11));
		func_669(iVar1, &iVar0, 0);
		if (iVar0 >= 0)
		{
			if (func_661(Global_1320796[iVar0 /*140*/].f_66, 1))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_661(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x2ED6701376DBCF71(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x63C468D583002D23()) || (iParam0 == joaat("buffalo3") && !unk_0x63C468D583002D23())) || (iParam0 == joaat("gauntlet2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blista3"))
	{
		if (!func_668())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x9AEFEF0C873443F4())
		{
			if (unk_0xE8885AFFB348EA8C(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x5D46F50AE982AB28(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_667() && !func_666()) && !func_665()) && !func_664()) && !func_668())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x8EA3D5407E9F4AF0() || unk_0xEF4E5E47AF0D4480()) || unk_0x7C2F31E78C33DE0F())
		{
		}
		else if (!func_665())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_663(iParam0))
		{
			return 0;
		}
	}
	if (!func_662(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_662(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_274())
	{
		return 1;
	}
	unk_0x5E5FAFB02AD6B99F(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x03E2F3A2203722EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_663(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2482093)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x57E9911EC23E2C54();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5506 && !Global_262145.f_11530) && iVar1 < Global_262145.f_11531)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_664()
{
	return 0;
}

int func_665()
{
	return 1;
}

int func_666()
{
	return 1;
}

int func_667()
{
	if (unk_0x6948821CC8D52AC2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_668()
{
	var uVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xEB79FECD9022AAF0(&uVar0, 2);
				unk_0xEB79FECD9022AAF0(&uVar0, 4);
				unk_0xEB79FECD9022AAF0(&uVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					uVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&uVar0, 0);
					unk_0x0D1285E5ED89254D(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2)
	{
		return 1;
	}
	else if (Global_139179 == 3)
	{
		return 0;
	}
	if (unk_0x8B57B9443E19F940())
	{
		if (unk_0x48B8265059381CD0(unk_0xBE675F7A607B46B0(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_669(int iParam0, var uParam1, bool bParam2)
{
	if (Global_262145.f_8796)
	{
		*uParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*uParam1 = (Global_1760214[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*uParam1 = -1;
	}
}

int func_670(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
	}
	return (func_671(iParam0, -1) * iParam0);
}

int func_671(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_50(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_55(iParam1))
			{
				return 0;
			}
			else if (func_672(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 <= 115 && iParam1 > 0)
			{
				if (Global_1049427[iParam1 /*1942*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049427[iParam1 /*1942*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049427[iParam1 /*1942*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
	}
	return 0;
}

int func_672(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_673(int iParam0)
{
	switch (unk_0x0324EEB10F81965F(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_674(int iParam0)
{
	int iVar0;
	
	iVar0 = func_675(iParam0);
	if (iVar0 != func_48())
	{
		return Global_1619421[iVar0 /*390*/].f_11.f_324 == 2;
	}
	return 0;
}

var func_675(int iParam0)
{
	return Global_1619421[iParam0 /*390*/].f_11.f_168;
}

int func_676(int iParam0, int iParam1)
{
	if (Global_262145.f_13478)
	{
		return 0;
	}
	if (func_468(iParam0, 1))
	{
		return 0;
	}
	if (func_206(iParam0, 1))
	{
		return func_636(func_476(iParam0), func_631(iParam1));
	}
	else if (func_636(iParam0, func_631(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_677(var uParam0)
{
	bool bVar0;
	
	if (Global_1573331)
	{
		return 1;
	}
	if (unk_0xF7271A9481CAC8E3())
	{
		return 1;
	}
	if (func_331(unk_0xBE369BE1BC57A796(), 0))
	{
		if (func_330(unk_0xBE369BE1BC57A796()) == 178)
		{
			return 1;
		}
	}
	if (!func_538(1))
	{
		return 1;
	}
	bVar0 = false;
	if (func_524(bVar0, 5))
	{
		return 1;
	}
	return 0;
}

void func_678(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	unk_0xE3B46F8779F1AB2E(9, uParam1, uParam2, uParam3, uParam4);
}

void func_679(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 57:
			*uParam1 = { -631.9747f, -1779.181f, 22.9802f };
			break;
		
		case 58:
			*uParam1 = { 1007.51f, -1855.032f, 30.0398f };
			break;
		
		case 59:
			*uParam1 = { -72.3389f, -1820.984f, 25.942f };
			break;
		
		case 60:
			*uParam1 = { 36.8712f, -1284.028f, 28.2924f };
			break;
		
		case 61:
			*uParam1 = { 1213.233f, -1251.249f, 35.3258f };
			break;
		
		case 62:
			*uParam1 = { 808.8002f, -2222.5f, 28.6239f };
			break;
		
		case 63:
			*uParam1 = { 1754.546f, -1649.167f, 111.6556f };
			break;
		
		case 64:
			*uParam1 = { 144.3155f, -3005.919f, 6.0309f };
			break;
		
		case 65:
			*uParam1 = { -521.2753f, -2196.688f, 5.394f };
			break;
		
		case 66:
			*uParam1 = { -1161.292f, -2163.7f, 12.3808f };
			break;
	}
}

void func_680(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
			*uParam1 = { 908.7148f, -3039.493f, -50f };
			uParam1->f_3 = { 1032.384f, -2972.831f, -28.15f };
			break;
	}
}

char* func_681(int iParam0)
{
	switch (iParam0)
	{
		case 57:
			return "MP_WAREHOUSE_1";
		
		case 58:
			return "MP_WAREHOUSE_2";
		
		case 59:
			return "MP_WAREHOUSE_3";
		
		case 60:
			return "MP_WAREHOUSE_4";
		
		case 61:
			return "MP_WAREHOUSE_5";
		
		case 62:
			return "MP_WAREHOUSE_6";
		
		case 63:
			return "MP_WAREHOUSE_7";
		
		case 64:
			return "MP_WAREHOUSE_8";
		
		case 65:
			return "MP_WAREHOUSE_9";
		
		case 66:
			return "MP_WAREHOUSE_10";
		
		default:
	}
	return "INVALID_IE_GARAGE_NAME";
}

void func_682(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 57:
			func_686(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@garage";
			uParam1->f_22.f_4 = "gar_open_1_left";
			uParam1->f_22.f_14 = { -631.693f, -1778.812f, 22.98f };
			uParam1->f_22.f_17 = { 0f, 0f, 36.36f };
			uParam1->f_22.f_20 = 0f;
			uParam1->f_22.f_21 = 0.45f;
			uParam1->f_22.f_40 = { -634.1538f, -1796.448f, 34.5912f };
			uParam1->f_22.f_43 = { -22.1262f, 0f, 5.0337f };
			uParam1->f_22.f_46 = 50f;
			func_685(&(uParam1->f_22));
			break;
		
		case 58:
			func_684(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@garage";
			uParam1->f_22.f_4 = "gar_open_1_left";
			uParam1->f_22.f_14 = { 1007.344f, -1854.104f, 30.055f };
			uParam1->f_22.f_17 = { 0f, 0f, 84.24f };
			uParam1->f_22.f_20 = 0f;
			uParam1->f_22.f_21 = 0.45f;
			uParam1->f_22.f_40 = { 1012.218f, -1868.811f, 40.1672f };
			uParam1->f_22.f_43 = { -16.8435f, 0f, 30.4879f };
			uParam1->f_22.f_46 = 50f;
			func_685(&(uParam1->f_22));
			break;
		
		case 59:
			func_686(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@garage";
			uParam1->f_22.f_4 = "gar_open_1_left";
			uParam1->f_22.f_14 = { -72.69f, -1820.721f, 25.96f };
			uParam1->f_22.f_17 = { 0f, 0f, 138.96f };
			uParam1->f_22.f_20 = 0f;
			uParam1->f_22.f_21 = 0.45f;
			uParam1->f_22.f_40 = { -50.4334f, -1820.483f, 40.6842f };
			uParam1->f_22.f_43 = { -21.9918f, 0f, 89.4914f };
			uParam1->f_22.f_46 = 50f;
			func_685(&(uParam1->f_22));
			break;
		
		case 60:
			func_686(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@garage";
			uParam1->f_22.f_4 = "gar_open_1_left";
			uParam1->f_22.f_14 = { 36.29f, -1283.851f, 28.3f };
			uParam1->f_22.f_17 = { 0f, 0f, -180f };
			uParam1->f_22.f_20 = 0f;
			uParam1->f_22.f_21 = 0.45f;
			uParam1->f_22.f_40 = { 51.6316f, -1261.693f, 47.7187f };
			uParam1->f_22.f_43 = { -20.6347f, 0f, 135.6605f };
			uParam1->f_22.f_46 = 50f;
			func_685(&(uParam1->f_22));
			break;
		
		case 61:
			func_684(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@garage";
			uParam1->f_22.f_4 = "gar_open_1_left";
			uParam1->f_22.f_14 = { 1213.935f, -1251.067f, 35.34f };
			uParam1->f_22.f_17 = { 0f, 0f, -4.68f };
			uParam1->f_22.f_20 = 0.025f;
			uParam1->f_22.f_21 = 0.45f;
			uParam1->f_22.f_40 = { 1203.779f, -1268.013f, 45.1178f };
			uParam1->f_22.f_43 = { -26.6439f, 0f, -50.7787f };
			uParam1->f_22.f_46 = 50f;
			func_685(&(uParam1->f_22));
			break;
		
		case 62:
			func_683(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 808.9337f, -2226.635f, 30.5702f };
			uParam1->f_22.f_9 = { -8.7836f, 0f, -2.5026f };
			uParam1->f_22.f_12 = 50f;
			uParam1->f_22.f_14 = { 809.47f, -2222.665f, 28.602f };
			uParam1->f_22.f_17 = { 0f, 0f, -95.04f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 795.856f, -2239.975f, 43.3438f };
			uParam1->f_22.f_43 = { -25.9078f, 0f, -21.35f };
			uParam1->f_22.f_46 = 50f;
			break;
		
		case 63:
			func_683(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 1755.083f, -1652.772f, 113.9896f };
			uParam1->f_22.f_9 = { -2.252f, 0f, 14.1658f };
			uParam1->f_22.f_12 = 50f;
			uParam1->f_22.f_14 = { 1753.699f, -1649.109f, 111.65f };
			uParam1->f_22.f_17 = { 0f, 0f, 98.28f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 1770.462f, -1654.995f, 121.1074f };
			uParam1->f_22.f_43 = { -27.1992f, 0f, 60.7515f };
			uParam1->f_22.f_46 = 50f;
			break;
		
		case 64:
			func_686(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@garage";
			uParam1->f_22.f_4 = "gar_open_1_left";
			uParam1->f_22.f_14 = { 144.163f, -3006.28f, 6.025f };
			uParam1->f_22.f_17 = { 0f, 0f, -90f };
			uParam1->f_22.f_20 = 0f;
			uParam1->f_22.f_21 = 0.45f;
			uParam1->f_22.f_40 = { 133.3796f, -2997.328f, 16.4858f };
			uParam1->f_22.f_43 = { -23.3212f, 0f, -128.0707f };
			uParam1->f_22.f_46 = 50f;
			func_685(&(uParam1->f_22));
			break;
		
		case 65:
			func_683(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -514.9109f, -2200.778f, 8.504f };
			uParam1->f_22.f_9 = { -19.0944f, 0f, 59.8399f };
			uParam1->f_22.f_12 = 50f;
			uParam1->f_22.f_14 = { -522.064f, -2197.247f, 5.396f };
			uParam1->f_22.f_17 = { 0f, 0f, 138.96f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -518.5544f, -2180.63f, 18.0885f };
			uParam1->f_22.f_43 = { -26.4987f, 0f, -170.4673f };
			uParam1->f_22.f_46 = 50f;
			break;
		
		case 66:
			func_683(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -1157.207f, -2167.523f, 14.6173f };
			uParam1->f_22.f_9 = { 4.5508f, -0.0443f, 47.9725f };
			uParam1->f_22.f_12 = 50f;
			uParam1->f_22.f_14 = { -1160.481f, -2162.972f, 12.411f };
			uParam1->f_22.f_17 = { 0f, 0f, -23.04f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -1154.279f, -2196.895f, 24.1398f };
			uParam1->f_22.f_43 = { -17.9349f, 0f, -12.0432f };
			uParam1->f_22.f_46 = 50f;
			break;
	}
}

void func_683(var uParam0)
{
	uParam0->f_21 = "AM_MP_IE_WAREHOUSE";
	uParam0->f_89.f_1 = { -0.9f, 12.75f, -5.64f };
	uParam0->f_89.f_4 = { -7.36f, 12.75f, -3.18f };
	uParam0->f_89.f_7 = 1f;
	uParam0->f_89 = 0f;
	uParam0->f_22.f_50[0] = "GENERIC_DOOR_PUSH";
	uParam0->f_22.f_50[1] = "GENERIC_DOOR_LIMIT";
	uParam0->f_22.f_53[0] = 0.295f;
	uParam0->f_22.f_53[1] = 0.35f;
	uParam0->f_22.f_56 = "GTAO_SCRIPT_DOORS_SOUNDS";
	uParam0->f_22.f_66 = "GTAO_Script_Doors_Faded_Screen_Sounds";
	uParam0->f_22.f_65 = "Garage_Door_Close";
	uParam0->f_22.f_64 = "GTAO_Script_Doors_Faded_Screen_Sounds";
	uParam0->f_22.f_63 = "Garage_Door_Open";
}

void func_684(var uParam0)
{
	uParam0->f_21 = "AM_MP_IE_WAREHOUSE";
	uParam0->f_89.f_1 = { -0.9f, 12.75f, -5.64f };
	uParam0->f_89.f_4 = { -7.36f, 12.75f, -3.18f };
	uParam0->f_89.f_7 = 1f;
	uParam0->f_89 = 0f;
	uParam0->f_22.f_49 = 1500;
	uParam0->f_22.f_58 = "GTAO_Script_Doors_Faded_Screen_Sounds";
	uParam0->f_22.f_57 = "METAL_SHUTTER_RAISE_LOOP";
	uParam0->f_22.f_66 = "GTAO_Script_Doors_Faded_Screen_Sounds";
	uParam0->f_22.f_65 = "Garage_Door_Close";
	uParam0->f_22.f_64 = "GTAO_Script_Doors_Faded_Screen_Sounds";
	uParam0->f_22.f_63 = "Garage_Door_Open";
}

void func_685(var uParam0)
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

void func_686(var uParam0)
{
	uParam0->f_21 = "AM_MP_IE_WAREHOUSE";
	uParam0->f_89.f_1 = { -0.9f, 12.75f, -5.64f };
	uParam0->f_89.f_4 = { -7.36f, 12.75f, -3.18f };
	uParam0->f_89.f_7 = 1f;
	uParam0->f_89 = 0f;
	uParam0->f_22.f_58 = "GTAO_Script_Doors_Faded_Screen_Sounds";
	uParam0->f_22.f_57 = "Garage_Door_Close";
	uParam0->f_22.f_66 = "GTAO_Script_Doors_Faded_Screen_Sounds";
	uParam0->f_22.f_65 = "Garage_Door_Close";
	uParam0->f_22.f_64 = "GTAO_Script_Doors_Faded_Screen_Sounds";
	uParam0->f_22.f_63 = "Garage_Door_Open";
}

void func_687(int iParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
			*uParam2 = { 974.9542f, -3000.091f, -35f };
			*uParam3 = 0f;
			StringCopy(sParam1, "imp_impexp_intwaremed", 64);
			break;
	}
}

int func_688(var uParam0)
{
	return 1;
}

void func_689(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 227603;
			break;
		
		case 1:
			uParam0->f_1 = 227460;
			break;
		
		case 2:
			uParam0->f_2 = 222546;
			break;
		
		case 3:
			uParam0->f_3 = 222158;
			break;
		
		case 4:
			uParam0->f_4 = 221988;
			break;
		
		case 5:
			uParam0->f_5 = 221357;
			break;
		
		case 6:
			uParam0->f_6 = 221335;
			break;
		
		case 7:
			uParam0->f_7 = 221111;
			break;
		
		case 8:
			uParam0->f_8 = 221023;
			break;
		
		case 9:
			uParam0->f_9 = 220873;
			break;
		
		case 10:
			uParam0->f_10 = 220864;
			break;
		
		case 11:
			uParam0->f_11 = 220855;
			break;
		
		case 12:
			uParam0->f_12 = 220847;
			break;
		
		case 13:
			uParam0->f_13 = 220839;
			break;
		
		case 14:
			uParam0->f_14 = 220712;
			break;
		
		case 15:
			uParam0->f_15 = 220469;
			break;
		
		case 16:
			uParam0->f_16 = 220236;
			break;
		
		case 17:
			uParam0->f_17 = 218252;
			break;
		
		case 18:
			uParam0->f_18 = 203803;
			break;
		
		case 19:
			uParam0->f_19 = 203794;
			break;
		
		case 20:
			uParam0->f_20 = 203785;
			break;
		
		case 21:
			uParam0->f_21 = 203737;
			break;
		
		case 22:
			uParam0->f_22 = 203701;
			break;
		
		case 23:
			uParam0->f_23 = 203572;
			break;
		
		case 24:
			uParam0->f_24 = 203563;
			break;
		
		case 25:
			uParam0->f_25 = 203552;
			break;
		
		case 26:
			uParam0->f_26 = 203532;
			break;
		
		case 27:
			uParam0->f_27 = 203260;
			break;
		
		case 28:
			uParam0->f_28 = 203193;
			break;
		
		case 29:
			uParam0->f_29 = 203179;
			break;
		
		case 30:
			uParam0->f_30 = 202626;
			break;
		
		case 31:
			uParam0->f_31 = 202395;
			break;
		
		case 32:
			uParam0->f_32 = 202343;
			break;
		
		case 33:
			uParam0->f_33 = 202326;
			break;
		
		case 34:
			uParam0->f_34 = 202317;
			break;
		
		case 35:
			uParam0->f_35 = 202308;
			break;
		
		case 36:
			uParam0->f_36 = 202191;
			break;
		
		case 37:
			uParam0->f_37 = 202182;
			break;
		
		case 38:
			uParam0->f_38 = 202170;
			break;
	}
}

void func_690(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = 0;
}

int func_691(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	return 0;
}

void func_692(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 3)
	{
		*uParam2 = { 238.6076f, -1980.373f, 19.7774f };
		*uParam3 = { 262.0809f, -1954.533f, 28.2874f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 4)
	{
		*uParam2 = { -416.9828f, 175.1209f, 78.2398f };
		*uParam3 = { -404.4813f, 188.327f, 85.6049f };
		*uParam1 = 1;
		return;
	}
	*uParam1 = 0;
}

int func_693(var uParam0)
{
	return 1;
}

int func_694(var uParam0)
{
	return 1;
}

void func_695(var uParam0, var uParam1)
{
	unk_0x21E7933CCC7B3724(&(uParam0->f_103), 1);
}

void func_696(var uParam0, var uParam1)
{
	if (!unk_0x48B8265059381CD0(uParam0->f_103, 1))
	{
		if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
		{
			unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
		}
		unk_0xEB79FECD9022AAF0(&(uParam0->f_103), 1);
	}
}

void func_697(var uParam0, int iParam1)
{
	if (iParam1 == 20)
	{
	}
	func_698(uParam0, iParam1);
}

void func_698(var uParam0, int iParam1)
{
	if (unk_0x48B8265059381CD0(uParam0->f_103, 3))
	{
		if (iParam1 == 18)
		{
			unk_0x55718AC3667F2A7D(996.4036f, -2481.757f, 28.8007f, 4f, joaat("prop_facgate_04_l"), 0);
			unk_0x55718AC3667F2A7D(985.8288f, -2480.68f, 28.8007f, 4f, joaat("prop_facgate_04_r"), 0);
			unk_0x55718AC3667F2A7D(996.5616f, -2481.773f, 28.8807f, 2f, joaat("prop_facgate_03post"), 0);
			unk_0x55718AC3667F2A7D(985.6758f, -2480.667f, 28.8807f, 2f, joaat("prop_facgate_03post"), 0);
			unk_0x21E7933CCC7B3724(&(uParam0->f_103), 3);
		}
		if (iParam1 == 12)
		{
			unk_0x55718AC3667F2A7D(-550.8629f, -1772.796f, 22.3438f, 4f, joaat("prop_facgate_03b_r"), 0);
			unk_0x55718AC3667F2A7D(-542.201f, -1777.798f, 22.1771f, 4f, joaat("prop_facgate_03b_l"), 0);
			unk_0x21E7933CCC7B3724(&(uParam0->f_103), 3);
		}
	}
}

void func_699(var uParam0, int iParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	int iVar3;
	
	if (iParam1 == 20)
	{
		Var0 = { 550.9767f, -1896.741f, 24.1463f };
		if (unk_0x48B8265059381CD0(uParam0->f_103, 2))
		{
			if (unk_0x2A488C176D52CCA5(func_172(unk_0xBE369BE1BC57A796()), Var0) > 70f)
			{
				unk_0x21E7933CCC7B3724(&(uParam0->f_103), 2);
			}
		}
		else if (unk_0x2A488C176D52CCA5(func_172(unk_0xBE369BE1BC57A796()), Var0) <= 70f)
		{
			if (!unk_0xB6083777D882090D(Var0, joaat("prop_facgate_01"), &iVar3))
			{
				iVar3 = unk_0x765F5B806B517045("WHOUSE_DOOR_RANCHO_2A");
				if (!unk_0xE9C3BF0269D0108B(iVar3))
				{
					unk_0x49FD1922C9046077(iVar3, joaat("prop_facgate_01"), Var0, 0, 0, 0);
				}
			}
			unk_0x7D1C3939CB180509(iVar3, 1f, 0, 0);
			unk_0x01C5575F2350FF9E(iVar3, 0, 0, 0);
			Var0 = { 539.9537f, -1901.956f, 24.2126f };
			if (!unk_0xB6083777D882090D(Var0, joaat("prop_facgate_01b"), &iVar3))
			{
				iVar3 = unk_0x765F5B806B517045("WHOUSE_DOOR_RANCHO_2B");
				if (!unk_0xE9C3BF0269D0108B(iVar3))
				{
					unk_0x49FD1922C9046077(iVar3, joaat("prop_facgate_01b"), Var0, 0, 0, 0);
				}
			}
			unk_0x7D1C3939CB180509(iVar3, -1f, 0, 0);
			unk_0x01C5575F2350FF9E(iVar3, 0, 0, 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_103), 2);
		}
	}
	if (!func_700())
	{
		if (iParam1 == 18 && !unk_0x48B8265059381CD0(uParam0->f_103, 3))
		{
			unk_0xB30185B1BE926A58(996.4036f, -2481.757f, 28.8007f, 4f, joaat("prop_facgate_04_l"), 0);
			unk_0xB30185B1BE926A58(985.8288f, -2480.68f, 28.8007f, 4f, joaat("prop_facgate_04_r"), 0);
			unk_0xB30185B1BE926A58(996.5616f, -2481.773f, 28.8807f, 2f, joaat("prop_facgate_03post"), 0);
			unk_0xB30185B1BE926A58(985.6758f, -2480.667f, 28.8807f, 2f, joaat("prop_facgate_03post"), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_103), 3);
		}
		if (iParam1 == 12 && !unk_0x48B8265059381CD0(uParam0->f_103, 3))
		{
			unk_0xB30185B1BE926A58(-550.8629f, -1772.796f, 22.3438f, 4f, joaat("prop_facgate_03b_r"), 0);
			unk_0xB30185B1BE926A58(-542.201f, -1777.798f, 22.1771f, 4f, joaat("prop_facgate_03b_l"), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_103), 3);
		}
	}
	else if (unk_0x48B8265059381CD0(uParam0->f_103, 3))
	{
		func_698(uParam0, iParam1);
	}
}

bool func_700()
{
	return Global_1764677.f_1 != -1;
}

Vector3 func_701(int iParam0)
{
	return func_705(iParam0);
}

int func_702(var uParam0)
{
	int iVar0;
	
	if (func_592(0))
	{
		return func_471(func_472(unk_0xBE369BE1BC57A796()));
	}
	else if (func_469(unk_0xBE369BE1BC57A796(), 0, 0))
	{
		iVar0 = func_204();
		return func_471(func_472(iVar0));
	}
	return 4;
}

void func_703(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	
	iVar0 = func_744(iParam0);
	bVar1 = false;
	if (func_206(unk_0xBE369BE1BC57A796(), 1))
	{
		if (*uParam2 != 1)
		{
			bVar1 = true;
		}
		Var2 = { func_637(unk_0xBE369BE1BC57A796()) };
		if (!bVar1)
		{
			if (!unk_0x9C88EB7B70229335(&Var2) && unk_0x765F5B806B517045(&Var2) != *uParam3)
			{
				bVar1 = true;
			}
		}
		if (bVar1)
		{
			unk_0x457AECF7F7E33610("MP_WHOUSE_BLP2");
			unk_0xBAB00B98D1E61BEE(&Var2);
			unk_0xB58BBC88882D90A6(*uParam1);
			*uParam3 = unk_0x765F5B806B517045(&Var2);
			*uParam2 = 1;
			return;
		}
	}
	else
	{
		if (*uParam2 != 2)
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (func_704(unk_0xBE369BE1BC57A796(), iVar0))
			{
				unk_0xAAF15482D9DB27D9(*uParam1, "MP_WHOUSE_BLP0");
				*uParam2 = 2;
				return;
			}
		}
	}
	if (*uParam2 == 0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		unk_0xAAF15482D9DB27D9(*uParam1, "MP_WHOUSE_BLP1");
		*uParam2 = 3;
	}
}

int func_704(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_105(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[iParam0 /*602*/].f_258.f_80[iVar0 /*3*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

Vector3 func_705(int iParam0)
{
	struct<3> Var0;
	
	func_728(iParam0, &Var0);
	return Var0;
}

int func_706(var uParam0)
{
	return 473;
}

int func_707(var uParam0)
{
	return 1;
}

int func_708(int iParam0)
{
	int iVar0;
	
	if (func_485(unk_0xBE369BE1BC57A796(), 1))
	{
		return 0;
	}
	if (func_468(unk_0xBE369BE1BC57A796(), 1))
	{
		return 0;
	}
	iVar0 = func_744(iParam0);
	if (func_206(unk_0xBE369BE1BC57A796(), 1))
	{
		if (func_207(unk_0xBE369BE1BC57A796()))
		{
			if (func_704(unk_0xBE369BE1BC57A796(), iVar0))
			{
				return 1;
			}
		}
		else if (func_704(func_204(), iVar0))
		{
			return 1;
		}
	}
	else if (func_704(unk_0xBE369BE1BC57A796(), iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_709(var uParam0)
{
	return (unk_0x48B8265059381CD0(Global_1764677.f_2, 2) || unk_0x48B8265059381CD0(Global_1764677.f_2, 0));
}

void func_710(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	if (*uParam2 != 3)
	{
		return;
	}
	StringCopy(sParam1, "MP_WHOUSE_EXITT", 64);
	*uParam3 = 2;
	(*uParam2)[0] = "MP_WHOUSE_EXITa";
	(*uParam2)[1] = "MP_WHOUSE_EXITb";
}

int func_711(var uParam0)
{
	return -1;
}

int func_712(var uParam0)
{
	return -1;
}

int func_713(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 53.5655f, -2569.264f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 53.3032f, -2566.764f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 53.2278f, -2570.463f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 53.3409f, -2564.764f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 51.2658f, -2568.726f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 51.3035f, -2566.726f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 51.8281f, -2569.926f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 51.3412f, -2564.727f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 49.2662f, -2568.688f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 49.3039f, -2566.689f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 54.6285f, -2565.288f, 5.2087f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 49.3416f, -2564.689f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 47.2666f, -2568.651f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 47.3042f, -2566.651f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 52.3289f, -2563.151f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 47.3419f, -2564.651f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1082.37f, -1261.376f, 4.6112f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1080.826f, -1263.949f, 4.6936f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1083.913f, -1258.803f, 4.4974f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1079.283f, -1266.521f, 4.7761f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1085.456f, -1256.231f, 4.4452f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1079.797f, -1259.833f, 4.6507f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1078.254f, -1262.405f, 4.7587f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1081.34f, -1257.26f, 4.5154f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1076.71f, -1264.978f, 4.8411f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1082.884f, -1254.688f, 4.4188f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1077.224f, -1258.289f, 4.6669f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -1075.681f, -1260.862f, 4.7941f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1078.768f, -1255.717f, 4.5341f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1074.138f, -1263.435f, 4.8505f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1080.311f, -1253.144f, 4.4313f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1074.652f, -1256.746f, 4.6728f };
					*uParam3 = 300.96f;
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 896.2726f, -1035.337f, 34.1073f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 898.7726f, -1035.337f, 34.1073f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 901.2726f, -1035.337f, 34.1073f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 903.7726f, -1035.337f, 34.1073f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 896.2726f, -1032.837f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 898.7726f, -1032.837f, 33.9662f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 901.2726f, -1032.837f, 33.9661f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 903.7726f, -1032.837f, 33.9661f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 896.2726f, -1030.337f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 898.7726f, -1030.337f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 901.2726f, -1030.337f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 903.7726f, -1030.337f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 896.2726f, -1027.837f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 898.7726f, -1027.837f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 901.2726f, -1027.837f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 903.7726f, -1027.837f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 247.8323f, -1956.504f, 22.1788f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 249.5188f, -1958.068f, 22.1585f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 246.1458f, -1954.94f, 22.2111f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 251.2053f, -1959.632f, 22.1202f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 244.4594f, -1953.377f, 22.251f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 249.3962f, -1954.818f, 22.1503f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 251.0827f, -1956.382f, 22.1042f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 247.7097f, -1953.254f, 22.1978f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 252.7692f, -1957.945f, 22.0476f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 246.0232f, -1951.69f, 22.2508f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 250.9601f, -1953.131f, 22.0426f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 252.6466f, -1954.695f, 21.9945f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 249.2736f, -1951.567f, 22.0914f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 254.3331f, -1956.259f, 21.9397f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 247.5871f, -1950.004f, 22.1449f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 243.824f, -1951.445f, 22.26f };
					*uParam3 = 317.16f;
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -424.8701f, 185.5529f, 79.7918f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -421.9708f, 184.8951f, 79.7919f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -420.2715f, 184.8373f, 79.7612f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -417.9722f, 185.4795f, 79.7288f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -415.6729f, 185.4217f, 79.6811f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -413.3736f, 185.3639f, 79.6331f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -424.9279f, 183.2536f, 79.627f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -422.6286f, 183.1958f, 79.5531f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -420.3293f, 183.138f, 79.4768f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -418.03f, 183.4802f, 79.4155f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -415.7307f, 183.3224f, 79.3917f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -413.4314f, 183.2646f, 79.3209f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -424.3857f, 181.2543f, 79.617f };
					*uParam3 = 265.56f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -426.886f, 185.0965f, 79.5167f };
					*uParam3 = 88.56f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -417.0871f, 181.4387f, 79.4749f };
					*uParam3 = 270.56f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -414.4878f, 181.3809f, 79.406f };
					*uParam3 = 271.56f;
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1042.974f, -2022.881f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1044.941f, -2024.766f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1046.607f, -2026.351f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1048.274f, -2027.936f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1044.859f, -2021.514f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1046.526f, -2023.099f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1048.192f, -2024.684f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1049.859f, -2026.269f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1046.444f, -2019.847f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1048.111f, -2021.432f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1049.777f, -2023.017f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -1051.444f, -2024.602f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1048.029f, -2018.181f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1049.696f, -2019.766f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1051.362f, -2021.351f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1053.029f, -2022.936f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1268.466f, -812.4496f, 16.1077f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1269.998f, -810.4742f, 16.1168f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1266.933f, -814.425f, 16.0992f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1271.53f, -808.4988f, 16.1253f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1265.401f, -816.4004f, 16.0992f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1270.441f, -813.9819f, 16.1078f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1271.973f, -812.0065f, 16.1169f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1268.909f, -815.9573f, 16.0992f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1273.505f, -810.0311f, 16.1253f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1267.377f, -817.9327f, 16.0992f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1272.416f, -815.5142f, 16.1078f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -1273.949f, -813.5388f, 16.1169f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1270.884f, -817.4896f, 16.0992f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1275.481f, -811.5634f, 16.1253f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1269.352f, -819.465f, 16.0992f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1274.392f, -817.0464f, 16.1222f };
					*uParam3 = 127.8f;
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -874.0634f, -2734.716f, 12.9095f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -872.7773f, -2732.572f, 12.9109f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -875.3495f, -2736.86f, 12.9053f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -871.4913f, -2730.428f, 12.9083f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -876.6356f, -2739.004f, 12.9029f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -876.2072f, -2733.43f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -874.9211f, -2731.286f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -877.4933f, -2735.574f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -873.6351f, -2729.142f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -878.7794f, -2737.718f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -878.351f, -2732.144f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -877.0649f, -2730f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -879.6371f, -2734.288f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -875.7789f, -2727.856f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -880.9232f, -2736.431f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -880.4948f, -2730.858f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 274.3696f, -3015.411f, 4.6999f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 274.4167f, -3012.911f, 4.6995f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 274.3225f, -3017.91f, 4.7001f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 274.4639f, -3010.412f, 4.6994f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 274.2754f, -3020.41f, 4.7003f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 271.8701f, -3015.364f, 4.7094f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 271.9172f, -3012.864f, 4.7092f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 271.823f, -3017.863f, 4.7096f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 271.9643f, -3010.365f, 4.709f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 271.7758f, -3020.363f, 4.7097f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 269.3705f, -3015.316f, 4.7188f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 269.4177f, -3012.817f, 4.7196f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 269.3234f, -3017.816f, 4.7189f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 269.4648f, -3010.317f, 4.7188f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 269.2763f, -3020.315f, 4.7191f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 266.871f, -3015.269f, 4.7284f };
					*uParam3 = 88.92f;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1569.859f, -2130.302f, 77.3351f };
					*uParam3 = 105.84f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1568.416f, -2130.711f, 77.3351f };
					*uParam3 = 105.84f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1566.973f, -2131.121f, 76.8952f };
					*uParam3 = 105.84f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1566.092f, -2133.605f, 76.6096f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1563.592f, -2133.605f, 76.5872f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1568.592f, -2133.605f, 76.6408f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1566.092f, -2136.105f, 76.5637f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1563.592f, -2136.105f, 76.5312f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1568.592f, -2136.105f, 76.6043f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1566.092f, -2138.605f, 76.6349f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1563.592f, -2138.605f, 76.602f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1568.592f, -2138.605f, 76.6595f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1566.092f, -2141.105f, 76.6486f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1563.592f, -2141.105f, 76.6264f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1568.592f, -2141.105f, 76.6633f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1566.092f, -2143.605f, 76.638f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -315.0531f, -2698.236f, 6.5502f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -314.0059f, -2697.162f, 6.3438f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -312.9586f, -2696.088f, 5.951f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -311.9114f, -2695.014f, 5.5625f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -310.8642f, -2693.94f, 5.1789f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -309.8169f, -2692.866f, 5.1532f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -308.7697f, -2691.792f, 5.0003f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -307.7224f, -2690.718f, 5.0003f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -314.0204f, -2699.495f, 6.5486f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -312.9597f, -2700.555f, 6.5465f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -311.899f, -2701.616f, 6.0171f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -310.8384f, -2702.677f, 5.3512f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -309.7777f, -2703.737f, 5.1532f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -308.717f, -2704.798f, 5.1532f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -307.6564f, -2705.858f, 5.1532f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -306.5957f, -2706.919f, 5.1532f };
					*uParam3 = 225f;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 500.513f, -652.0776f, 23.9102f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 500.1997f, -654.5579f, 23.9046f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 500.8264f, -649.5973f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 499.8864f, -657.0381f, 23.899f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 501.1397f, -647.117f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 502.9933f, -652.3909f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 502.68f, -654.8712f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 503.3066f, -649.9106f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 502.3667f, -657.3515f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 503.62f, -647.4304f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 505.4736f, -652.7043f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 505.1603f, -655.1846f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 505.7869f, -650.224f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 504.847f, -657.6649f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 506.1003f, -647.7437f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 507.9539f, -653.0176f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -527.8182f, -1783.653f, 20.5241f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -530.0165f, -1782.462f, 20.5136f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -532.2148f, -1781.272f, 20.4936f };
					*uParam3 = 322.56f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -526.6276f, -1781.455f, 20.3953f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -528.8259f, -1780.264f, 20.3978f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -531.0242f, -1779.073f, 20.4048f };
					*uParam3 = 325.56f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -525.437f, -1779.556f, 20.3393f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -527.6353f, -1778.366f, 20.362f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -531.9336f, -1776.875f, 20.3854f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -525.7464f, -1777.658f, 20.3332f };
					*uParam3 = 325.56f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -527.9447f, -1776.468f, 20.3559f };
					*uParam3 = 325.56f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -529.543f, -1777.077f, 20.3792f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -522.1558f, -1779.36f, 20.1963f };
					*uParam3 = 322.56f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -520.1541f, -1780.869f, 20.225f };
					*uParam3 = 316.56f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -523.2524f, -1780.879f, 20.2515f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -521.8652f, -1782.562f, 20.3421f };
					*uParam3 = 331.56f;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -294.8197f, -1353.221f, 30.3182f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -294.8982f, -1355.72f, 30.3161f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -294.7412f, -1350.722f, 30.3066f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -293.1767f, -1357.019f, 30.3098f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -294.6627f, -1348.224f, 30.3058f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -295.0553f, -1360.718f, 30.3097f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -294.5841f, -1345.725f, 30.3098f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -295.1338f, -1363.216f, 30.3097f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -292.9209f, -1351.8f, 30.317f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -292.9994f, -1354.598f, 30.3113f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -293.1424f, -1349.601f, 30.3154f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -292.778f, -1358.897f, 30.3111f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -293.0639f, -1347.102f, 30.307f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -293.1565f, -1360.796f, 30.3111f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -292.9854f, -1344.303f, 30.3044f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -293.235f, -1363.295f, 30.3111f };
					*uParam3 = 268.2f;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 349.8802f, 328.4255f, 103.3104f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 352.3017f, 327.8038f, 103.1931f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 354.7231f, 327.182f, 103.0763f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 357.1446f, 326.5603f, 102.9681f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 359.566f, 325.9386f, 102.8674f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 361.9875f, 325.3168f, 102.771f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 364.4089f, 324.6951f, 102.7018f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 366.8304f, 324.0734f, 102.6326f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 348.0585f, 327.5041f, 103.3091f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 350.78f, 326.2823f, 103.1918f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 353.5014f, 325.6606f, 103.075f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 356.2229f, 324.7389f, 102.9793f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 358.6443f, 324.1171f, 102.8786f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 361.0658f, 323.4954f, 102.7693f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 363.1872f, 322.8737f, 102.7001f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 365.9086f, 322.2519f, 102.6309f };
					*uParam3 = 165.6f;
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 925.6405f, -1560.243f, 29.7406f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 925.6606f, -1557.043f, 29.8954f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 925.6204f, -1563.443f, 29.8634f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 925.6807f, -1553.843f, 29.8012f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 925.6003f, -1566.642f, 29.6487f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 922.4406f, -1560.222f, 29.7553f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 922.4606f, -1557.022f, 29.775f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 922.4205f, -1563.422f, 29.7366f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 922.4807f, -1553.823f, 29.7882f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 922.4004f, -1566.622f, 29.704f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 919.2406f, -1560.202f, 29.7592f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 919.2607f, -1557.002f, 29.7694f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 919.2205f, -1563.402f, 29.76f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 919.2808f, -1553.802f, 29.779f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 919.2004f, -1566.602f, 29.744f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 916.0406f, -1560.182f, 29.7456f };
					*uParam3 = 89.64f;
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 760.1638f, -909.4731f, 24.2546f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 760.1839f, -906.2732f, 24.249f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 760.204f, -903.0732f, 24.2297f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 760.2241f, -899.8733f, 24.2069f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 760.2441f, -896.6733f, 24.1849f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 760.2642f, -893.4734f, 24.1641f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 760.2843f, -890.2734f, 24.1432f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 760.6044f, -911.6735f, 24.1212f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 762.1638f, -909.4932f, 24.2505f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 762.1839f, -906.2933f, 24.2306f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 762.2039f, -903.0933f, 24.1944f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 762.224f, -899.8934f, 24.1655f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 762.2441f, -896.6934f, 24.1417f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 762.2642f, -893.4935f, 24.1227f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 762.2843f, -890.2935f, 24.1055f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 762.3043f, -911.9936f, 24.0937f };
					*uParam3 = 269.64f;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1038.552f, -2173.207f, 30.5259f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1038.311f, -2176.398f, 30.5213f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1038.793f, -2170.016f, 30.5306f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1038.07f, -2179.589f, 30.5189f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1039.034f, -2166.825f, 30.533f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1037.829f, -2182.78f, 30.5083f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1041.743f, -2173.448f, 30.4763f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1041.502f, -2176.639f, 30.4677f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1041.984f, -2170.257f, 30.5075f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1041.261f, -2179.83f, 30.4313f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1042.225f, -2167.066f, 30.5287f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1041.02f, -2183.021f, 30.4238f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1044.934f, -2173.689f, 30.453f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1044.693f, -2176.88f, 30.422f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1045.175f, -2170.498f, 30.4845f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1044.452f, -2180.071f, 30.3856f };
					*uParam3 = 265.68f;
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1018.338f, -2511.65f, 27.4777f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1017.937f, -2516.668f, 27.302f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1018.138f, -2514.375f, 27.302f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1017.736f, -2519.862f, 27.302f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1014.542f, -2519.661f, 27.3058f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1014.743f, -2516.468f, 27.3049f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1014.944f, -2513.274f, 27.3037f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1015.145f, -2510.08f, 27.3024f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1011.348f, -2519.46f, 27.3077f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1011.549f, -2516.267f, 27.3062f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1011.75f, -2513.073f, 27.3048f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1011.951f, -2509.879f, 27.3034f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1008.155f, -2519.259f, 27.3043f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1008.356f, -2516.066f, 27.302f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1008.557f, -2512.872f, 27.302f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1008.757f, -2509.678f, 27.302f };
					*uParam3 = 86.4f;
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -245.497f, 202.4499f, 82.7567f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -247.9962f, 202.387f, 83.0061f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -250.4954f, 202.3242f, 83.2191f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -252.9946f, 202.2614f, 83.5141f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -245.4342f, 199.9507f, 82.2888f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -247.9334f, 199.8878f, 82.6439f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -250.4326f, 199.825f, 82.9599f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -252.9318f, 199.7622f, 83.3373f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -245.3714f, 197.4514f, 81.7634f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -247.8706f, 197.3886f, 82.2527f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -250.3698f, 197.3258f, 82.6763f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -252.869f, 197.263f, 83.1381f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -245.3085f, 194.9522f, 81.3477f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -247.8077f, 194.8894f, 81.9302f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -250.3069f, 194.8266f, 82.4314f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -252.8062f, 194.7638f, 82.9539f };
					*uParam3 = 181.44f;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 540.8308f, -1944.671f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 542.1703f, -1946.782f, 23.9845f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 539.4913f, -1942.561f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 543.5099f, -1948.893f, 23.9824f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 538.1517f, -1940.45f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 544.8494f, -1951.004f, 23.9803f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 542.9417f, -1943.332f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 544.2812f, -1945.443f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 541.6021f, -1941.221f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 545.6207f, -1947.553f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 540.2626f, -1939.11f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 546.9603f, -1949.664f, 23.9838f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 545.0525f, -1941.992f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 546.392f, -1944.103f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 543.713f, -1939.881f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 547.7316f, -1946.214f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 95.663f, -2216.311f, 5.1712f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 95.6473f, -2213.811f, 5.1787f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 95.6787f, -2218.811f, 5.1712f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 95.6316f, -2211.311f, 5.0431f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 95.6945f, -2221.311f, 5.1712f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 95.6159f, -2208.811f, 5.0431f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 93.1631f, -2216.326f, 5.0333f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 93.1474f, -2213.826f, 5.0368f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 93.1788f, -2218.826f, 5.0333f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 93.1317f, -2211.326f, 5.0431f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 93.1945f, -2221.326f, 5.0333f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 93.116f, -2208.826f, 5.0431f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 90.6631f, -2216.342f, 5.0373f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 90.6474f, -2213.842f, 5.0409f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 90.6788f, -2218.842f, 5.0371f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 90.6317f, -2211.342f, 5.0468f };
					*uParam3 = 90.36f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_714(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (func_104(func_744(iParam0)))
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -6.3318f, 5.2695f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -6.339f, 4.1196f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -6.3246f, 6.4194f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -5.1818f, 5.2622f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -5.189f, 4.1123f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -5.1746f, 6.4121f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -4.0317f, 5.2549f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -4.0389f, 4.105f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -4.0245f, 6.4048f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -2.8817f, 5.2476f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -2.8889f, 4.0977f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -2.8745f, 6.3975f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1.7317f, 5.2402f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1.7389f, 4.0903f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1.7245f, 6.3901f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -0.5817f, 5.2329f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -7.2566f, 8.0942f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -6.8567f, 6.594f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -6.5566f, 5.094f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -6.9567f, 0.8938f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -6.9567f, -0.6062f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -5.7566f, 8.0942f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -5.7566f, 6.5942f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -4.8567f, 5.2939f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -4.5566f, 0.6238f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -4.5566f, -1.8062f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -4.2566f, 8.0942f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -0.6566f, 6.5942f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -2.7567f, 5.3938f, 0f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -2.7567f, 0.6238f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -2.4567f, -1.8062f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -2.7566f, 8.0942f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -13.3667f, 4.2373f, 0.0001f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -13.6667f, 2.2373f, 0.0001f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -13.1667f, -0.2207f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -10.7667f, -0.2207f, 0f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -9.3663f, -0.1626f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -8.6663f, 6.2373f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -8.3663f, 4.6375f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -9.2663f, 1.5374f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -10.1663f, -2.4626f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -8.3663f, -2.2629f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -6.7667f, 2.9373f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -6.7667f, 1.6375f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -8.5663f, -4.1626f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -9.4663f, -1.2629f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -7.0663f, -3.1626f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -9.9667f, -4.1626f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_715(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312.f_3 = 0;
	if (func_206(unk_0xBE369BE1BC57A796(), 1))
	{
		if (func_207(unk_0xBE369BE1BC57A796()))
		{
			unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 0);
		}
		else
		{
			unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 1);
		}
		iVar0 = func_476(unk_0xBE369BE1BC57A796());
		if (iVar0 != func_48() && iVar0 != unk_0xBE369BE1BC57A796())
		{
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312.f_3), iVar0);
		}
		iVar2 = 0;
		while (iVar2 < func_511())
		{
			iVar1 = func_510(iVar0, iVar2);
			if (iVar1 != func_48() && iVar1 != unk_0xBE369BE1BC57A796())
			{
				unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312.f_3), iVar1);
			}
			iVar2++;
		}
	}
	else if (func_704(unk_0xBE369BE1BC57A796(), func_744(iParam0)))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1764677.f_2), 2);
	}
}

char* func_716(var uParam0, char* sParam1, var uParam2)
{
	if (Global_1764677.f_593)
	{
		Global_1764677.f_593 = 0;
		return "MP_WHOUSE_KICKe";
	}
	if (Global_1764677.f_2 == 0)
	{
		return "MP_WHOUSE_KICKc";
	}
	if (unk_0x48B8265059381CD0(Global_1764677.f_2, 1))
	{
		if (func_468(unk_0xBE369BE1BC57A796(), 1))
		{
			if (func_478(unk_0xBE369BE1BC57A796()))
			{
				return "MP_WHOUSE_KICKf";
			}
			else
			{
				StringCopy(sParam1, func_501(unk_0xBE369BE1BC57A796(), 0), 64);
				return "MP_WHOUSE_KICKg";
			}
		}
		if (!func_206(unk_0xBE369BE1BC57A796(), 0))
		{
			return "MP_WHOUSE_KICKb";
		}
	}
	if (unk_0x48B8265059381CD0(Global_1764677.f_2, 0) || unk_0x48B8265059381CD0(Global_1764677.f_2, 2))
	{
		if (func_468(unk_0xBE369BE1BC57A796(), 1))
		{
			if (func_478(unk_0xBE369BE1BC57A796()))
			{
				return "MP_WHOUSE_KICKf";
			}
			else
			{
				StringCopy(sParam1, func_501(unk_0xBE369BE1BC57A796(), 0), 64);
				return "MP_WHOUSE_KICKg";
			}
		}
		if (func_206(unk_0xBE369BE1BC57A796(), 0))
		{
			return "MP_WHOUSE_KICKd";
		}
	}
	return "";
}

bool func_717(int iParam0, var uParam1)
{
	if (Global_1764677.f_2 == 0)
	{
		return 1;
	}
	if (func_468(unk_0xBE369BE1BC57A796(), 1))
	{
		return 1;
	}
	if (unk_0x48B8265059381CD0(Global_1764677.f_2, 1))
	{
		if (!func_206(unk_0xBE369BE1BC57A796(), 0))
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_1764677.f_2, 0) || unk_0x48B8265059381CD0(Global_1764677.f_2, 2))
	{
		if (func_206(unk_0xBE369BE1BC57A796(), 0))
		{
			return 1;
		}
	}
	return !func_723(unk_0xBE369BE1BC57A796(), iParam0);
}

void func_718(var uParam0, var uParam1)
{
}

void func_719(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
}

int func_720(var uParam0, var uParam1)
{
	return 0;
}

int func_721(var uParam0, var uParam1)
{
	return 0;
}

char* func_722(int iParam0, char* sParam1)
{
	int iVar0;
	
	if (func_704(unk_0xBE369BE1BC57A796(), func_744(iParam0)))
	{
		if (func_468(unk_0xBE369BE1BC57A796(), 1))
		{
			if (func_478(unk_0xBE369BE1BC57A796()))
			{
				return "WHOUSE_MC_BLOCK_P";
			}
			else
			{
				StringCopy(sParam1, func_501(unk_0xBE369BE1BC57A796(), 0), 64);
				return "WHOUSE_MC_BLOCK_M";
			}
		}
		else if (func_206(unk_0xBE369BE1BC57A796(), 0))
		{
			iVar0 = func_476(unk_0xBE369BE1BC57A796());
			if (!func_704(iVar0, func_744(iParam0)))
			{
				if (func_203(func_204()))
				{
					return "WHOUSE_GOONHLP1C";
				}
				else
				{
					return "WHOUSE_GOON_HLP1";
				}
			}
		}
	}
	return "";
}

int func_723(int iParam0, int iParam1)
{
	if (Global_262145.f_13478)
	{
		return 0;
	}
	if (func_468(iParam0, 1))
	{
		return 0;
	}
	if (func_206(iParam0, 1))
	{
		return func_704(func_476(iParam0), func_744(iParam1));
	}
	else if (func_704(iParam0, func_744(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_724(var uParam0)
{
	bool bVar0;
	
	if (Global_262145.f_13478)
	{
		return 1;
	}
	if (!func_538(1))
	{
		return 1;
	}
	if (!func_725(unk_0xBE369BE1BC57A796()) && Global_1573331)
	{
		return 1;
	}
	if (func_331(unk_0xBE369BE1BC57A796(), 0))
	{
		if (func_330(unk_0xBE369BE1BC57A796()) == 168 && !unk_0x48B8265059381CD0(Global_1763174.f_3, 4))
		{
			return 1;
		}
		else if (func_330(unk_0xBE369BE1BC57A796()) == 167)
		{
			if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
			{
				return 1;
			}
		}
	}
	if (unk_0xF7271A9481CAC8E3())
	{
		return 1;
	}
	bVar0 = false;
	if (func_524(bVar0, 2))
	{
		return 1;
	}
	return 0;
}

bool func_725(int iParam0)
{
	return func_726(func_330(iParam0));
}

int func_726(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

void func_727(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	unk_0xE3B46F8779F1AB2E(9, uParam1, uParam2, uParam3, uParam4);
}

void func_728(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 54.191f, -2569.248f, 5.0046f };
			break;
		
		case 1:
			*uParam1 = { -1083.054f, -1261.893f, 4.534f };
			break;
		
		case 2:
			*uParam1 = { 896.3665f, -1035.749f, 34.1096f };
			break;
		
		case 3:
			*uParam1 = { 247.473f, -1956.943f, 22.1908f };
			break;
		
		case 4:
			*uParam1 = { -424.828f, 185.825f, 79.775f };
			break;
		
		case 5:
			*uParam1 = { -1042.482f, -2023.516f, 12.1616f };
			break;
		
		case 6:
			*uParam1 = { -1268.119f, -812.2741f, 16.1075f };
			break;
		
		case 7:
			*uParam1 = { -873.65f, -2735.948f, 12.9438f };
			break;
		
		case 8:
			*uParam1 = { 274.5224f, -3015.413f, 4.6993f };
			break;
		
		case 9:
			*uParam1 = { 1569.69f, -2129.792f, 77.3351f };
			break;
		
		case 10:
			*uParam1 = { -315.551f, -2698.654f, 6.5495f };
			break;
		
		case 11:
			*uParam1 = { 499.81f, -651.982f, 23.909f };
			break;
		
		case 12:
			*uParam1 = { -528.5296f, -1784.573f, 20.5853f };
			break;
		
		case 13:
			*uParam1 = { -295.8596f, -1353.238f, 30.3138f };
			break;
		
		case 14:
			*uParam1 = { 349.839f, 328.889f, 103.272f };
			break;
		
		case 15:
			*uParam1 = { 926.2818f, -1560.311f, 29.7404f };
			break;
		
		case 16:
			*uParam1 = { 759.566f, -909.466f, 24.244f };
			break;
		
		case 17:
			*uParam1 = { 1037.813f, -2173.062f, 30.5334f };
			break;
		
		case 18:
			*uParam1 = { 1019.116f, -2511.69f, 27.302f };
			break;
		
		case 19:
			*uParam1 = { -245.3405f, 203.3286f, 82.818f };
			break;
		
		case 20:
			*uParam1 = { 539.346f, -1945.682f, 23.984f };
			break;
		
		case 21:
			*uParam1 = { 96.1538f, -2216.4f, 5.1712f };
			break;
	}
}

void func_729(int iParam0, var uParam1)
{
	switch (func_104(func_744(iParam0)))
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

var func_730(int iParam0)
{
	return func_731(func_744(iParam0));
}

char* func_731(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WHOUSE_0";
			break;
		
		case 2:
			return "MP_WHOUSE_1";
			break;
		
		case 3:
			return "MP_WHOUSE_2";
			break;
		
		case 4:
			return "MP_WHOUSE_3";
			break;
		
		case 5:
			return "MP_WHOUSE_4";
			break;
		
		case 6:
			return "MP_WHOUSE_5";
			break;
		
		case 7:
			return "MP_WHOUSE_6";
			break;
		
		case 8:
			return "MP_WHOUSE_7";
			break;
		
		case 9:
			return "MP_WHOUSE_8";
			break;
		
		case 10:
			return "MP_WHOUSE_9";
			break;
		
		case 11:
			return "MP_WHOUSE_10";
			break;
		
		case 12:
			return "MP_WHOUSE_11";
			break;
		
		case 13:
			return "MP_WHOUSE_12";
			break;
		
		case 14:
			return "MP_WHOUSE_13";
			break;
		
		case 15:
			return "MP_WHOUSE_14";
			break;
		
		case 16:
			return "MP_WHOUSE_15";
			break;
		
		case 17:
			return "MP_WHOUSE_16";
			break;
		
		case 18:
			return "MP_WHOUSE_17";
			break;
		
		case 19:
			return "MP_WHOUSE_18";
			break;
		
		case 20:
			return "MP_WHOUSE_19";
			break;
		
		case 21:
			return "MP_WHOUSE_20";
			break;
		
		case 22:
			return "MP_WHOUSE_21";
			break;
	}
	return "";
}

void func_732(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_744(iParam0);
	switch (func_104(iVar0))
	{
		case 0:
			func_736(uParam1);
			break;
		
		case 1:
			func_735(uParam1);
			break;
		
		case 2:
			func_734(uParam1);
			break;
	}
	func_729(iParam0, &(uParam1->f_97));
	func_733(iParam0, uParam1);
	uParam1->f_21 = "AM_MP_WAREHOUSE";
	switch (iParam0)
	{
		case 0:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 55.6698f, -2562.517f, 9.7216f };
			uParam1->f_22.f_9 = { -26.9934f, 0f, 158.2394f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 55.173f, -2569.18f, 5.005f };
			uParam1->f_22.f_17 = { 0f, 0f, 88.92f };
			uParam1->f_22.f_20 = 0.185f;
			uParam1->f_22.f_21 = 0.45f;
			uParam1->f_22.f_40 = { 47.462f, -2556.352f, 9.3575f };
			uParam1->f_22.f_43 = { -3.9405f, 0f, -159.8518f };
			uParam1->f_22.f_46 = 60.9384f;
			break;
		
		case 1:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -1085.303f, -1258.34f, 6.2175f };
			uParam1->f_22.f_9 = { -8.7714f, 0f, -149.6619f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -1083.55f, -1262.168f, 4.584f };
			uParam1->f_22.f_17 = { 0f, 0f, 120f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -1076.223f, -1243.307f, 10.6771f };
			uParam1->f_22.f_43 = { -9.2423f, 0f, 147.7254f };
			uParam1->f_22.f_46 = 51.5371f;
			uParam1->f_22.f_24 = joaat("prop_damdoor_01");
			uParam1->f_22.f_25 = { -1083.314f, -1262.911f, 6.048f };
			uParam1->f_22.f_28 = { 0f, 0f, 120f };
			uParam1->f_22.f_32 = joaat("prop_damdoor_01");
			uParam1->f_22.f_33 = { -1083.289f, -1262.854f, 3.742f };
			uParam1->f_22.f_36 = { 0f, 0f, 120f };
			break;
		
		case 2:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 894.9501f, -1036.63f, 35.7994f };
			uParam1->f_22.f_9 = { -6.6207f, 0f, -74.3905f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 896.377f, -1036.943f, 34.114f };
			uParam1->f_22.f_17 = { 0f, 0f, -176.04f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 905.355f, -1022.531f, 39.7356f };
			uParam1->f_22.f_43 = { -11.3208f, 0f, 143.5729f };
			uParam1->f_22.f_46 = 57.37f;
			break;
		
		case 3:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 249.927f, -1959.511f, 23.9722f };
			uParam1->f_22.f_9 = { 0.0683f, 0f, 47.4904f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 246.915f, -1957.426f, 22.234f };
			uParam1->f_22.f_17 = { 0f, 0f, -41.4f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 245.938f, -1938.42f, 27.6721f };
			uParam1->f_22.f_43 = { -7.5442f, 0f, 159.4763f };
			uParam1->f_22.f_46 = 59.7297f;
			break;
		
		case 4:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -422.9159f, 186.277f, 81.3179f };
			uParam1->f_22.f_9 = { 0.2632f, 0f, 96.0908f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -424.77f, 186.591f, 79.806f };
			uParam1->f_22.f_17 = { 0f, 0f, 6.84f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -408.0694f, 174.6422f, 86.9432f };
			uParam1->f_22.f_43 = { -13.2642f, 0f, 28.3935f };
			uParam1->f_22.f_46 = 52.4348f;
			break;
		
		case 5:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -1040.969f, -2022.84f, 13.8865f };
			uParam1->f_22.f_9 = { -4.3062f, 0f, 128.7958f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -1041.771f, -2024.093f, 12.262f };
			uParam1->f_22.f_17 = { 0f, 0f, 48.6f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -1085.943f, -2028.454f, 24.7947f };
			uParam1->f_22.f_43 = { -1.2216f, 0f, -90.0273f };
			uParam1->f_22.f_46 = 55.8325f;
			break;
		
		case 6:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -1269.049f, -810.1869f, 17.6841f };
			uParam1->f_22.f_9 = { -5.2284f, 0f, -154.3061f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -1267.408f, -811.694f, 16.108f };
			uParam1->f_22.f_17 = { 0f, 0f, 129.24f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -1275.577f, -830.3143f, 21.4835f };
			uParam1->f_22.f_43 = { -1.8344f, 0f, -30.0049f };
			uParam1->f_22.f_46 = 54.6851f;
			break;
		
		case 7:
			uParam1->f_22.f_3 = "anim@apt_trans@garage";
			uParam1->f_22.f_4 = "gar_open_1_left";
			uParam1->f_22.f_14 = { -873.02f, -2736.37f, 12.96f };
			uParam1->f_22.f_17 = { 0f, 0f, -1.44f };
			uParam1->f_22.f_20 = 0f;
			uParam1->f_22.f_21 = 0.45f;
			uParam1->f_22.f_40 = { -900.0779f, -2719.921f, 22.445f };
			uParam1->f_22.f_43 = { 2.7476f, 0f, -120.3092f };
			uParam1->f_22.f_46 = 74.842f;
			func_403(&(uParam1->f_22));
			break;
		
		case 8:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 275.3322f, -3009.54f, 10.6753f };
			uParam1->f_22.f_9 = { -38.649f, 0f, 167.1707f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 276.13f, -3015.219f, 5.299f };
			uParam1->f_22.f_17 = { 0f, 0f, 89.64f };
			uParam1->f_22.f_20 = 0.22f;
			uParam1->f_22.f_21 = 0.48f;
			uParam1->f_22.f_40 = { 258.2233f, -3009.183f, 8.997f };
			uParam1->f_22.f_43 = { -1.9814f, 0f, -115.932f };
			uParam1->f_22.f_46 = 51.7418f;
			uParam1->f_22.f_24 = joaat("prop_damdoor_01");
			uParam1->f_22.f_25 = { 276.161f, -3016.038f, 6.4456f };
			uParam1->f_22.f_28 = { 0f, 0f, 90f };
			break;
		
		case 9:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 1575.451f, -2129.365f, 80.8606f };
			uParam1->f_22.f_9 = { -16.8649f, 0f, 103.5603f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 1569.734f, -2129.194f, 77.335f };
			uParam1->f_22.f_17 = { 0f, 0f, 15.48f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 1581.396f, -2133.452f, 81.8751f };
			uParam1->f_22.f_43 = { -6.7888f, 0f, 56.6227f };
			uParam1->f_22.f_46 = 62.3286f;
			uParam1->f_22.f_24 = joaat("prop_damdoor_01");
			uParam1->f_22.f_25 = { 1568.861f, -2129.332f, 78.573f };
			uParam1->f_22.f_28 = { 0f, 0f, 15.3f };
			break;
		
		case 10:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -307.5915f, -2705.994f, 11.3516f };
			uParam1->f_22.f_9 = { -13.9349f, 0f, 44.8217f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -316.077f, -2698.804f, 6.55f };
			uParam1->f_22.f_17 = { 0f, 0f, 134.28f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -291.8181f, -2701.502f, 11.8306f };
			uParam1->f_22.f_43 = { -7.1218f, 0f, 90.1946f };
			uParam1->f_22.f_46 = 51.9229f;
			break;
		
		case 11:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 501.5328f, -645.445f, 28.0574f };
			uParam1->f_22.f_9 = { -22.2649f, 0f, 160.9995f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 499.179f, -651.811f, 23.909f };
			uParam1->f_22.f_17 = { 0f, 0f, 84.24f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 512.1525f, -636.3975f, 28.448f };
			uParam1->f_22.f_43 = { -1.2414f, 0f, 122.172f };
			uParam1->f_22.f_46 = 53.7499f;
			break;
		
		case 12:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -539.1638f, -1778.434f, 23.8737f };
			uParam1->f_22.f_9 = { -9.2253f, 0f, -119.9646f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -528.827f, -1784.887f, 20.598f };
			uParam1->f_22.f_17 = { 0f, 0f, 149.04f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -539.6097f, -1759.142f, 27.4026f };
			uParam1->f_22.f_43 = { -5.2881f, 0f, -171.1322f };
			uParam1->f_22.f_46 = 53.8715f;
			break;
		
		case 13:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -294.106f, -1359.92f, 32.7505f };
			uParam1->f_22.f_9 = { -4.7499f, 0f, -0.9732f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -296.605f, -1353.023f, 30.308f };
			uParam1->f_22.f_17 = { 0f, 0f, -89.64f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -277.6619f, -1368.544f, 35.1506f };
			uParam1->f_22.f_43 = { -1.3521f, 0f, 55.7123f };
			uParam1->f_22.f_46 = 50.9305f;
			break;
		
		case 14:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 356.1015f, 326.3331f, 107.5898f };
			uParam1->f_22.f_9 = { -18.8627f, 0f, 59.592f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 350.351f, 330.055f, 103.445f };
			uParam1->f_22.f_17 = { 0f, 0f, -13.68f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 360.9772f, 310.175f, 109.4587f };
			uParam1->f_22.f_43 = { -2.4531f, 0f, 12.6192f };
			uParam1->f_22.f_46 = 51.9772f;
			break;
		
		case 15:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 925.8218f, -1564.616f, 34.3633f };
			uParam1->f_22.f_9 = { -32.8521f, 0f, -19.6456f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 927.6f, -1560.443f, 29.943f };
			uParam1->f_22.f_17 = { 0f, 0f, -90.72f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 913.1396f, -1575.709f, 34.2933f };
			uParam1->f_22.f_43 = { 3.1582f, 0f, -58.1463f };
			uParam1->f_22.f_46 = 53.8629f;
			uParam1->f_22.f_24 = joaat("prop_damdoor_01");
			uParam1->f_22.f_25 = { 927.711f, -1559.567f, 31.094f };
			uParam1->f_22.f_28 = { 0f, 0f, -90f };
			break;
		
		case 16:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 759.1849f, -906.91f, 26.0423f };
			uParam1->f_22.f_9 = { -1.1809f, 0f, -179.4534f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 758.631f, -909.267f, 24.438f };
			uParam1->f_22.f_17 = { 0f, 0f, 91.44f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 777.9869f, -877.492f, 33.0619f };
			uParam1->f_22.f_43 = { -7.513f, 0f, 129.5847f };
			uParam1->f_22.f_46 = 50.8783f;
			break;
		
		case 17:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 1038f, -2170.053f, 32.9912f };
			uParam1->f_22.f_9 = { -22.5347f, 0f, 175.7987f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 1037.014f, -2172.944f, 30.55f };
			uParam1->f_22.f_17 = { 0f, 0f, 84.96f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 1061.911f, -2157.021f, 35.0165f };
			uParam1->f_22.f_43 = { -2.572f, 0f, 111.921f };
			uParam1->f_22.f_46 = 58.6139f;
			break;
		
		case 18:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 1017.937f, -2517.583f, 30.4418f };
			uParam1->f_22.f_9 = { -18.4157f, 0f, -15.4654f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 1019.739f, -2511.918f, 27.445f };
			uParam1->f_22.f_17 = { 0f, 0f, -96.12f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 1000.552f, -2529.795f, 32.7126f };
			uParam1->f_22.f_43 = { -5.7162f, 0f, -73.9334f };
			uParam1->f_22.f_46 = 55.0288f;
			break;
		
		case 19:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -248.4653f, 203.9834f, 86.8847f };
			uParam1->f_22.f_9 = { -36.3135f, 0f, -102.8081f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -245.054f, 204.085f, 83f };
			uParam1->f_22.f_17 = { 0f, 0f, -3.6f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -270.0336f, 183.7648f, 90.1035f };
			uParam1->f_22.f_43 = { -1.7739f, 0f, -22.3539f };
			uParam1->f_22.f_46 = 62.3599f;
			break;
		
		case 20:
			uParam1->f_22.f_3 = "anim@apt_trans@garage";
			uParam1->f_22.f_4 = "gar_open_1_right";
			uParam1->f_22.f_14 = { 539.003f, -1945.851f, 23.984f };
			uParam1->f_22.f_17 = { 0f, 0f, -131.04f };
			uParam1->f_22.f_20 = 0f;
			uParam1->f_22.f_21 = 0.45f;
			uParam1->f_22.f_40 = { 545.4655f, -1926.31f, 30.7424f };
			uParam1->f_22.f_43 = { -6.6888f, 0f, 152.7569f };
			uParam1->f_22.f_46 = 52.6655f;
			func_403(&(uParam1->f_22));
			break;
		
		case 21:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 97.0925f, -2218.317f, 6.9921f };
			uParam1->f_22.f_9 = { -1.0588f, 0f, -3.5294f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 97.293f, -2215.945f, 5.502f };
			uParam1->f_22.f_17 = { 0f, 0f, -88.2f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 82.9859f, -2232.355f, 9.8449f };
			uParam1->f_22.f_43 = { -1.3436f, 0f, -57.1714f };
			uParam1->f_22.f_46 = 55.5776f;
			break;
	}
}

void func_733(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_744(iParam0);
	if (iVar0 == 8 || iVar0 == 21)
	{
		uParam1->f_22.f_58 = "GTAO_EXEC_WH_GARAGE_DOOR_SOUNDS";
		uParam1->f_22.f_57 = "Door_Open";
		uParam1->f_22.f_60 = "GTAO_EXEC_WH_GARAGE_DOOR_SOUNDS";
		uParam1->f_22.f_59 = "Door_Close";
	}
	else
	{
		uParam1->f_22.f_50[0] = "PUSH";
		uParam1->f_22.f_50[1] = "LIMIT";
		uParam1->f_22.f_53[0] = 0.271f;
		uParam1->f_22.f_53[1] = 0.411f;
		uParam1->f_22.f_56 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
		uParam1->f_22.f_60 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
		uParam1->f_22.f_59 = "Closed";
	}
}

void func_734(var uParam0)
{
	uParam0->f_89.f_1 = { -15.091f, 2.575f, 0f };
	uParam0->f_89.f_4 = { -15.091f, 5.875f, 2.2f };
	uParam0->f_89.f_7 = 3.86f;
	uParam0->f_89 = 90f;
}

void func_735(var uParam0)
{
	uParam0->f_89.f_1 = { -8.78f, 6.917f, 0f };
	uParam0->f_89.f_4 = { -8.78f, 10f, 2.2f };
	uParam0->f_89.f_7 = 3.86f;
	uParam0->f_89 = 90f;
}

void func_736(var uParam0)
{
	uParam0->f_89.f_1 = { -7.911f, 4.559f, 0f };
	uParam0->f_89.f_4 = { -7.911f, 6.989f, 2.2f };
	uParam0->f_89.f_7 = 3.86f;
	uParam0->f_89 = 90f;
}

void func_737(int iParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (func_104(func_744(iParam0)))
	{
		case 0:
			*uParam2 = { 1094.988f, -3104.776f, -40f };
			*uParam3 = 0f;
			StringCopy(sParam1, "ex_int_warehouse_s_dlc", 64);
			break;
		
		case 1:
			*uParam2 = { 1056.488f, -3105.724f, -40f };
			*uParam3 = 0f;
			StringCopy(sParam1, "ex_int_warehouse_m_dlc", 64);
			break;
		
		case 2:
			*uParam2 = { 1007.135f, -3102.079f, -40f };
			*uParam3 = 0f;
			StringCopy(sParam1, "ex_int_warehouse_l_dlc", 64);
			break;
	}
}

int func_738(var uParam0)
{
	return 1;
}

int func_739()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x63C468D583002D23())
		{
			return 0;
		}
		if (unk_0xF8A920554B0F81A7())
		{
			return 1;
		}
		if (func_386())
		{
			return 0;
		}
		if (func_384(155))
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

int func_740(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xCC130A646D137F0D();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_392();
			}
			else
			{
				return 0;
			}
		}
		if (!func_539())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x63C468D583002D23())
				{
					if (!bParam2)
					{
						func_392();
					}
					else
					{
						return 0;
					}
				}
				if (func_386())
				{
					if (!bParam2)
					{
						func_392();
					}
					else
					{
						return 0;
					}
				}
				if (func_384(155))
				{
					if (!bParam2)
					{
						func_392();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x9AD8CE0019487D7C())
			{
				if (!bParam2)
				{
					func_392();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xCC130A646D137F0D();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			if (!bParam2)
			{
				func_392();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x9AD8CE0019487D7C())
	{
		if (!bParam2)
		{
			func_392();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_741(int iParam0)
{
	if (func_105(iParam0))
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

int func_742(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_105(iParam0) && iParam1 != func_48())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[iParam1 /*602*/].f_258.f_80[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_743(int iParam0)
{
	int iVar0;
	
	if (func_206(unk_0xBE369BE1BC57A796(), 1))
	{
		iVar0 = func_476(unk_0xBE369BE1BC57A796());
		if (func_3(iVar0, 0, 1))
		{
			if (func_704(iVar0, iParam0))
			{
				return iVar0;
			}
		}
	}
	else if (func_205(iParam0))
	{
		return unk_0xBE369BE1BC57A796();
	}
	return func_48();
}

int func_744(int iParam0)
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

