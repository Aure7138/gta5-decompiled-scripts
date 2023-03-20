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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	bool bLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 16;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
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
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
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
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	struct<3> Local_249 = { 0, 0, 0 } ;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	char* sLocal_255 = NULL;
	char* sLocal_256 = NULL;
	char* sLocal_257 = NULL;
	char* sLocal_258 = NULL;
	char* sLocal_259 = NULL;
	bool bLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	char* sLocal_270 = NULL;
	char* sLocal_271 = NULL;
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	struct<3> Local_278 = { 0, 0, 0 } ;
	struct<3> Local_281 = { 0, 0, 0 } ;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	bool bLocal_287 = 0;
	bool bLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	bool bLocal_293 = 0;
	struct<3> Local_294 = { 0, 0, 0 } ;
	bool bLocal_297 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_243 = 8000;
	iLocal_246 = 8;
	iLocal_248 = 1;
	sLocal_256 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_257 = "RANDOM@ARRESTS";
	sLocal_258 = "RANDOM@ARRESTS@BUSTED";
	iLocal_262 = 1;
	Local_64 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x2C897F101BA20806(11))
	{
		bLocal_75 = true;
		func_196();
		func_164();
	}
	if (unk_0x2A488C176D52CCA5(2411.32f, 4958.76f, 45.19f, Local_64) < 10f)
	{
		iLocal_52 = 1;
	}
	else
	{
		iLocal_52 = 2;
	}
	if (func_121(Local_64, 15, iLocal_52, 0, 0))
	{
		func_116(15);
	}
	else
	{
		unk_0x82706E6C897B0FA1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			unk_0x53F4483D5741E8F9(unk_0x1788E93557766241());
		}
		switch (iLocal_47)
		{
			case 0:
				if ((unk_0xFEC6476AFCF2033F() && !func_115()) && !func_102())
				{
					if (func_99())
					{
						iLocal_47 = 1;
					}
				}
				else
				{
					func_164();
				}
				break;
			
			case 1:
				if (func_95())
				{
					unk_0x01C9658D4C7F66D5(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 0, 1, 1);
					unk_0xABC4F2A6D7D56CF4(0f);
					func_84(1);
					iLocal_47 = 2;
				}
				else if (!func_83(200f))
				{
					func_164();
				}
				break;
			
			case 2:
				if (func_83(1128792064))
				{
					func_1();
				}
				else
				{
					func_164();
				}
				break;
		}
	}
}

void func_1()
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	float fVar6;
	
	unk_0xD0E2BFCE93AE3ABD(&uVar0, 3);
	unk_0xD0E2BFCE93AE3ABD(&uVar0, 4);
	iVar5 = 0;
	func_82();
	if (!unk_0x2DE0B96E966FD817(iLocal_54))
	{
		unk_0x117411595F7E531A(iLocal_54, 129, 1);
	}
	if (func_81(iLocal_54))
	{
		if (unk_0x0E5DC0000F31E3E0(iLocal_54, 0))
		{
			bLocal_297 = true;
		}
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_53) && (iLocal_48 != 2 && iLocal_48 != 1))
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_54))
		{
			switch (iLocal_51)
			{
				case 0:
					unk_0xAC73603AC3DBB7C9("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (unk_0x83666F9FB8FEBD4B() > 10)
					{
						if (!bLocal_73)
						{
							if (unk_0x221AC1EF116F6053(iLocal_53, 1227113341) == 7)
							{
								unk_0xF3B924DCFDECDB4B(iLocal_53, iLocal_54, -1, 1f, 3f, 1073741824, 0);
							}
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 4000)
					{
						if (!bLocal_73)
						{
							if (unk_0x221AC1EF116F6053(iLocal_54, 1805844857) == 7)
							{
								if (unk_0x221AC1EF116F6053(iLocal_54, -2017877118) == 1)
								{
									unk_0x4EB1C96646D39A71(iLocal_54, 2, 1);
								}
								unk_0xEA36CC2E7750344B(iLocal_54, iLocal_53, 150f, -1, 0, 0);
							}
						}
					}
					fVar4 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iLocal_53, 1), unk_0xBF8499F46AD9093A(iLocal_54, 1), 1);
					if (unk_0x83666F9FB8FEBD4B() > 8000 || fVar4 < 1.5f)
					{
						iVar5 = func_77();
						if (iVar5 == 1)
						{
							unk_0xF3B924DCFDECDB4B(iLocal_53, iLocal_54, -1, 1f, 0.01f, 1073741824, 0);
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 30000 && fVar4 < 10f)
					{
						iVar5 = 1;
					}
					if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						if (iVar5 || iLocal_277 == 1)
						{
							if (!func_76())
							{
								if (func_66(&uLocal_77, "REARRAU", "REARR_PCUFF", 4, iLocal_253, 0, 0))
								{
								}
								bLocal_293 = (unk_0xEAABEAE1DB589285(iLocal_54) || unk_0xDBE30D8105A6CC0C(iLocal_54));
								if (!unk_0xFA89F1C1D4B99EBD(iLocal_53, joaat("weapon_pistol"), 0))
								{
									unk_0x39272B2594E03395(iLocal_53, joaat("weapon_pistol"), -1, 0, 1);
								}
								unk_0xB4E8D4EA104CA059(iLocal_53, joaat("weapon_pistol"), 1);
								Local_67 = { unk_0xBF8499F46AD9093A(iLocal_54, 1) };
								unk_0x937785D9C1929236(iLocal_53);
								unk_0x6D98AA46076A68BE(&uLocal_72);
								if (!bLocal_293 && fVar4 > 2f)
								{
									unk_0xDF5853CFA3F2B4F7(0, Local_67.f_0, Local_67.f_1, (Local_67.f_2 + 4f), 1000, 1566631136);
								}
								unk_0x4745F9C50C63A48C(0, iLocal_54, -1, 2048, 2);
								unk_0x8AE3577778D1E650(0, iLocal_54, iLocal_54, 1f, 0, 3f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
								unk_0x0CDB4D41769B8C93(0, iLocal_54, 5000, 0);
								unk_0x963BB7C99350D827(uLocal_72);
								unk_0x0891776D0327B77A(iLocal_53, uLocal_72);
								unk_0x2AF68ED52DC74B7D(&uLocal_72);
								unk_0xFAF4121083211853(iLocal_53);
								unk_0x2686393074E14730(iLocal_53, 1);
								unk_0xC1B1E9A034A63A62(0);
								iLocal_245 = unk_0x09560C7DE2A384BD();
								if (bLocal_293)
								{
									unk_0x937785D9C1929236(iLocal_54);
									unk_0xA170CA810A69E485(iLocal_54);
									iLocal_51 = 4;
								}
								else
								{
									iLocal_51 = 2;
								}
							}
							else if (!iLocal_277)
							{
								unk_0xF3B924DCFDECDB4B(iLocal_53, iLocal_54, -1, 1f, 0.01f, 1073741824, 0);
								iLocal_277 = 1;
							}
						}
						else
						{
							func_65();
						}
					}
					else
					{
						unk_0xAC73603AC3DBB7C9("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if (!unk_0x2DE0B96E966FD817(iLocal_53) && !unk_0xE44A580B551C3645(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
						{
							if (unk_0x59C8BF753F6A2D1C(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), iLocal_53))
							{
								unk_0x937785D9C1929236(iLocal_53);
								iLocal_51 = 1;
								unk_0xA06765CC8C24CED7(iLocal_53, 500);
							}
						}
					}
					break;
				
				case 1:
					if (unk_0x221AC1EF116F6053(iLocal_53, -982327190) == 7)
					{
						unk_0xF3B924DCFDECDB4B(iLocal_53, iLocal_54, -1, 1f, 3f, 1073741824, 0);
						iLocal_51 = 0;
					}
					break;
				
				case 2:
					if ((unk_0x09560C7DE2A384BD() - iLocal_245) > 1000)
					{
						Var1 = { 0f, 0f, (unk_0xD1613577C809E98B(iLocal_54) * 3f) };
						unk_0x353F4B963593F141(iLocal_54, Var1, 2f, -1, 1f, 1024, 1193033728);
						iLocal_51 = 3;
					}
					break;
				
				case 3:
					if ((unk_0x09560C7DE2A384BD() - iLocal_245) > 4500)
					{
						iLocal_51 = 4;
					}
					break;
				
				case 4:
					bLocal_73 = true;
					unk_0x6D98AA46076A68BE(&uLocal_72);
					unk_0x5B5659C49032B96C(0, sLocal_257, "idle_2_hands_up", 2f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x5B5659C49032B96C(0, sLocal_257, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x963BB7C99350D827(uLocal_72);
					unk_0x0891776D0327B77A(iLocal_54, uLocal_72);
					unk_0x2AF68ED52DC74B7D(&uLocal_72);
					unk_0xFAF4121083211853(iLocal_54);
					unk_0x2686393074E14730(iLocal_54, 1);
					unk_0x277B694318148985(iLocal_54, 1);
					iLocal_51 = 5;
					break;
				
				case 5:
					if (iLocal_49 == 3)
					{
						if (unk_0x221AC1EF116F6053(iLocal_53, 242628503) == 7)
						{
							unk_0x937785D9C1929236(iLocal_53);
							if (!unk_0xFA89F1C1D4B99EBD(iLocal_53, joaat("weapon_pistol"), 0))
							{
								unk_0x39272B2594E03395(iLocal_53, joaat("weapon_pistol"), -1, 0, 1);
							}
							unk_0xB4E8D4EA104CA059(iLocal_53, joaat("weapon_pistol"), 1);
							unk_0x6D98AA46076A68BE(&uLocal_72);
							unk_0x0CDB4D41769B8C93(0, iLocal_54, -1, 0);
							unk_0x963BB7C99350D827(uLocal_72);
							unk_0x0891776D0327B77A(iLocal_53, uLocal_72);
							unk_0x2AF68ED52DC74B7D(&uLocal_72);
							unk_0x2686393074E14730(iLocal_53, 1);
							iLocal_51 = 6;
						}
					}
					break;
				
				case 6:
					if (unk_0xECFECDAD51A6184F(iLocal_56, 0) && !unk_0x2DE0B96E966FD817(iLocal_55))
					{
						unk_0xF9940FBBA93D6A64(iLocal_56, 1);
						if (unk_0x221AC1EF116F6053(iLocal_53, -2017877118) == 7)
						{
							if (unk_0x221AC1EF116F6053(iLocal_55, -1273030092) == 7)
							{
								if (unk_0x033DAC0BAE829DDB(iLocal_54, iLocal_56, 2, 0, 0))
								{
									if (!unk_0x2DE0B96E966FD817(iLocal_54))
									{
										if (!unk_0xD9275EB8FA656B5C(iLocal_54, iLocal_56))
										{
											if (!unk_0x0E9F33AA2B8E5EB6(iLocal_54, 0))
											{
												if (unk_0x221AC1EF116F6053(iLocal_54, -1794415470) == 7)
												{
													unk_0x6D98AA46076A68BE(&uLocal_72);
													unk_0x5B5659C49032B96C(0, sLocal_257, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0, 0, 0, 0);
													unk_0x963BB7C99350D827(uLocal_72);
													unk_0x0891776D0327B77A(iLocal_54, uLocal_72);
													unk_0x2AF68ED52DC74B7D(&uLocal_72);
													unk_0x2966D41514EAE84B(0, iLocal_71, iLocal_70);
													unk_0x2966D41514EAE84B(0, iLocal_70, iLocal_71);
												}
											}
										}
									}
									if (!unk_0x2DE0B96E966FD817(iLocal_53))
									{
										unk_0xDC03891435FDF19C(iLocal_53);
										if (!unk_0x0E9F33AA2B8E5EB6(iLocal_53, 0))
										{
											if (unk_0xECFECDAD51A6184F(iLocal_56, 0))
											{
												if (!func_76())
												{
													if (func_66(&uLocal_77, "REARRAU", "REARR_INCAR", 4, iLocal_253, 0, 0))
													{
														if (func_64(iLocal_53, iLocal_56) == 2)
														{
															if (unk_0x68E6C2D89A534992(iLocal_55, iLocal_54, 180f))
															{
																Local_294 = { 2.978f, -0.75f, 1f };
															}
															else
															{
																Local_294 = { 2.978f, 0.75f, 1f };
															}
														}
														else if (unk_0x68E6C2D89A534992(iLocal_55, iLocal_54, 180f))
														{
															Local_294 = { -2.978f, -0.75f, 1f };
														}
														else
														{
															Local_294 = { -2.978f, 0.75f, 1f };
														}
														unk_0x6D98AA46076A68BE(&uLocal_72);
														unk_0x8F194B9DA3131D61(0, unk_0xA783C6007920169C(iLocal_56, Local_294), iLocal_54, 0.75f, 0, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 60000);
														unk_0x0CDB4D41769B8C93(0, iLocal_54, -1, 0);
														unk_0x963BB7C99350D827(uLocal_72);
														unk_0x0891776D0327B77A(iLocal_53, uLocal_72);
														unk_0x2AF68ED52DC74B7D(&uLocal_72);
														unk_0x2686393074E14730(iLocal_53, 1);
														unk_0x426C3D44449AE9F1(iLocal_56, 0);
														iLocal_243 = 8000;
														unk_0x5AE11BC36633DE4E(0);
														iLocal_276 = unk_0x09560C7DE2A384BD();
														iLocal_51 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_63();
								}
							}
						}
					}
					break;
				
				case 7:
					if (!unk_0x2DE0B96E966FD817(iLocal_53))
					{
						if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_53, 35f, 35f, 35f, 0, 1, 0))
						{
							if ((unk_0x09560C7DE2A384BD() - iLocal_276) > 8000)
							{
								if (!func_76())
								{
									unk_0x4745F9C50C63A48C(iLocal_53, unk_0xA16EC202D9D35357(), 6000, 2048, 2);
									func_66(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
									iLocal_243 = 8000;
									iLocal_276 = unk_0x09560C7DE2A384BD();
								}
							}
						}
						if (unk_0xECFECDAD51A6184F(iLocal_56, 0))
						{
							if (iLocal_63)
							{
								if (func_64(iLocal_53, iLocal_56) == 2)
								{
									unk_0xA34C986DDC3D92F1(iLocal_54, iLocal_56, -1, 2, 1f, 1, 0);
								}
								else
								{
									unk_0xA34C986DDC3D92F1(iLocal_54, iLocal_56, -1, 1, 1f, 1, 0);
								}
								iLocal_51 = 8;
							}
							else if (iLocal_62)
							{
								fVar6 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iLocal_54, 1), unk_0xBF8499F46AD9093A(iLocal_56, 1), 1);
								if (fVar6 < 4f && iLocal_284 == 0)
								{
									unk_0x4C465C379119213A(iLocal_54, iLocal_56, 60000, 0.5f, Local_294.f_0, Local_294.f_1, 1f, 1);
									iLocal_284 = 1;
								}
								else if (fVar6 < 3f)
								{
									unk_0x937785D9C1929236(iLocal_54);
									iLocal_63 = 1;
								}
							}
							else if (!unk_0x95EDB2DEFA5BB405(iLocal_54, sLocal_257, "kneeling_arrest_get_up", 3))
							{
								if (func_64(iLocal_53, iLocal_56) == 2)
								{
									Local_294 = { 1.578f, -0.5f, 1f };
								}
								else
								{
									Local_294 = { -1.578f, -0.5f, 1f };
								}
								unk_0x4C465C379119213A(iLocal_54, iLocal_56, 60000, 0.5f, Local_294.f_0, Local_294.f_1, 1f, 1);
								if (bLocal_297)
								{
									unk_0xA956F9A1F0F9C2EC(iLocal_54, "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
								}
								else
								{
									unk_0xA956F9A1F0F9C2EC(iLocal_54, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
								}
								iLocal_62 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0xECFECDAD51A6184F(iLocal_56, 0))
					{
						if (!unk_0x2DE0B96E966FD817(iLocal_55))
						{
							if (unk_0xD9275EB8FA656B5C(iLocal_54, iLocal_56))
							{
								if (unk_0x5660C8AFDD9C1721(uLocal_57))
								{
									unk_0xB6FB9702660D84F6(&uLocal_57);
								}
								if (unk_0x5660C8AFDD9C1721(uLocal_58))
								{
									unk_0xB6FB9702660D84F6(&uLocal_58);
								}
								if (unk_0xD9275EB8FA656B5C(iLocal_53, iLocal_56))
								{
									unk_0x2B79CD6A5064FB19(iLocal_55, iLocal_56, 10f, 786603);
									unk_0x2686393074E14730(iLocal_55, 1);
									unk_0x2C4E82CF88213975(iLocal_53, 0);
									func_164();
								}
								else if (unk_0x221AC1EF116F6053(iLocal_53, -1794415470) == 7)
								{
									unk_0x937785D9C1929236(iLocal_53);
									unk_0xA34C986DDC3D92F1(iLocal_53, iLocal_56, 20000, 0, 1f, 1, 0);
									unk_0x2686393074E14730(iLocal_53, 1);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_49();
	if (unk_0x2DE0B96E966FD817(iLocal_54))
	{
	}
	if (unk_0x2DE0B96E966FD817(iLocal_53))
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_54))
		{
			if (iLocal_48 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_48 == 1 || iLocal_48 == 3)
				{
					if (!func_76())
					{
						if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iLocal_54, 1), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 1) < 20f)
						{
							func_66(&uLocal_77, "REARRAU", sLocal_273, 4, iLocal_253, 0, 0);
						}
					}
				}
				if (unk_0x95EDB2DEFA5BB405(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
				{
					unk_0x6D98AA46076A68BE(&uLocal_72);
					unk_0x5B5659C49032B96C(0, sLocal_257, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 150f, -1, 0, 0);
					unk_0x963BB7C99350D827(uLocal_72);
					unk_0x0891776D0327B77A(iLocal_54, uLocal_72);
					unk_0x2AF68ED52DC74B7D(&uLocal_72);
				}
				else
				{
					unk_0xEA36CC2E7750344B(iLocal_54, unk_0xA16EC202D9D35357(), 150f, -1, 0, 0);
					unk_0x2686393074E14730(iLocal_54, 1);
				}
				unk_0x4EDE34FBADD967A6(0);
				if (iLocal_48 == 0)
				{
					iLocal_48 = 2;
				}
				func_164();
			}
		}
	}
	if (unk_0x2DE0B96E966FD817(iLocal_54))
	{
		if (!bLocal_60)
		{
			if (func_11())
			{
				func_3(0);
			}
		}
	}
	if (iLocal_51 == 5 || iLocal_51 == 6)
	{
		if (!bLocal_60)
		{
			if (iLocal_48 == 3)
			{
				if (func_11())
				{
					func_3(0);
				}
			}
			else
			{
				func_3(1);
			}
		}
	}
	func_2();
}

void func_2()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 40f, 40f, 20f };
	if (unk_0x09560C7DE2A384BD() > iLocal_254 + 1000)
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_53))
		{
			if (!unk_0x14F9932776F21CC2(iLocal_53, unk_0xA16EC202D9D35357(), Var1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!unk_0x2DE0B96E966FD817(iLocal_54))
		{
			if (!unk_0x14F9932776F21CC2(iLocal_54, unk_0xA16EC202D9D35357(), Var1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			iLocal_253 = 1;
		}
		else
		{
			iLocal_253 = 0;
		}
		iLocal_254 = unk_0x09560C7DE2A384BD();
	}
}

void func_3(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (bParam0)
	{
		sVar0 = "radio_enter";
		sVar1 = "radio_chatter";
		sVar2 = "radio_exit";
	}
	else
	{
		sVar0 = "generic_radio_enter";
		sVar1 = "generic_radio_chatter";
		sVar2 = "generic_radio_exit";
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_53))
	{
		switch (iLocal_49)
		{
			case 0:
				if ((iLocal_242 == 3 || iLocal_51 == 5) || iLocal_51 == 6)
				{
					if (!func_76())
					{
						unk_0x937785D9C1929236(iLocal_53);
						unk_0x6D98AA46076A68BE(&uLocal_72);
						unk_0x3116CFED02763A5D(0, unk_0xBF8499F46AD9093A(iLocal_54, 0), 10000, 0, 2);
						unk_0x5B5659C49032B96C(0, sLocal_257, sVar0, 8f, -4f, -1, 0, 0, 0, 0, 0);
						unk_0x5B5659C49032B96C(0, sLocal_257, sVar1, 16f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x963BB7C99350D827(uLocal_72);
						unk_0x0891776D0327B77A(iLocal_53, uLocal_72);
						unk_0x2AF68ED52DC74B7D(&uLocal_72);
						iLocal_49 = 1;
					}
				}
				break;
			
			case 1:
				if (unk_0x95EDB2DEFA5BB405(iLocal_53, sLocal_257, sVar1, 3))
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_54))
					{
						if (!func_76())
						{
							if (func_66(&uLocal_77, "REARRAU", "REARR_PRAD1", 4, iLocal_253, 0, 0))
							{
								iLocal_49 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!func_76())
						{
							if (func_66(&uLocal_77, "REARRAU", "REARR_PRAD2", 4, iLocal_253, 0, 0))
							{
								iLocal_49 = 2;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!func_76())
				{
					if (func_10())
					{
						if (unk_0xECFECDAD51A6184F(iLocal_56, 0))
						{
							unk_0xD820C3FD2C9B84FE(iLocal_56, 0);
							unk_0x426C3D44449AE9F1(iLocal_56, 1);
						}
						unk_0x937785D9C1929236(iLocal_53);
						unk_0x6D98AA46076A68BE(&uLocal_72);
						unk_0x5B5659C49032B96C(0, sLocal_257, sVar2, 8f, -1.5f, -1, 0, 0, 0, 0, 0);
						unk_0x963BB7C99350D827(uLocal_72);
						unk_0x0891776D0327B77A(iLocal_53, uLocal_72);
						unk_0x2AF68ED52DC74B7D(&uLocal_72);
						unk_0x30D76463BF50C618(iLocal_53, 0, 0);
						func_8();
						iLocal_49 = 3;
					}
				}
				break;
			
			case 3:
				if (!bLocal_73)
				{
					func_7();
				}
				if (unk_0x538DF9E5B1DF01EB(iLocal_54) || !unk_0xE44A580B551C3645(iLocal_54))
				{
					if (unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), iLocal_54))
					{
						if (!func_76())
						{
							func_66(&uLocal_77, "REARRAU", "REARR_PWTF", 4, iLocal_253, 0, 0);
						}
					}
				}
				if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_53, 35f, 35f, 35f, 0, 1, 0))
				{
					unk_0x4972A46BE64C5F03(iLocal_53, 1, unk_0xA16EC202D9D35357(), 31086, 0f, 0f, 0f, 0, -1, -1);
					unk_0x4972A46BE64C5F03(unk_0xA16EC202D9D35357(), 1, iLocal_53, 31086, 0f, 0f, 0f, 0, -1, -1);
					if (unk_0xC9D9444186B5A374() > iLocal_243 || iLocal_261)
					{
						if (iLocal_48 == 3 || iLocal_48 == 0)
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_54))
							{
								if (iLocal_243 == 8000 || iLocal_261)
								{
									if (bLocal_260)
									{
										func_6();
									}
									else
									{
										func_4();
									}
								}
								else if (!func_76())
								{
									unk_0x4745F9C50C63A48C(iLocal_53, unk_0xA16EC202D9D35357(), 500, 2048, 2);
									func_66(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
									iLocal_243 = 8000;
								}
							}
							else if (iLocal_243 == 8000)
							{
								if (!func_76())
								{
									func_66(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
									iLocal_243 = 20000;
								}
							}
							else if (!func_76())
							{
								func_66(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
								iLocal_243 = 8000;
							}
							unk_0x5AE11BC36633DE4E(0);
						}
						else
						{
							if (unk_0x2DE0B96E966FD817(iLocal_54))
							{
								if (!func_76())
								{
									func_66(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
									iLocal_243 = 30000;
								}
							}
							else if (!func_76())
							{
								unk_0x4745F9C50C63A48C(iLocal_53, unk_0xA16EC202D9D35357(), 6000, 2048, 2);
								func_66(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
								iLocal_243 = unk_0x444ECD635D5FD45F(8, 22);
								iLocal_243 *= 30000;
							}
							unk_0x5AE11BC36633DE4E(0);
						}
					}
				}
				if (iLocal_51 != 8)
				{
					if (unk_0xECFECDAD51A6184F(iLocal_56, 0))
					{
						if (!unk_0x2DE0B96E966FD817(iLocal_54))
						{
							if (!unk_0xAD203DB71ADF6E57(iLocal_54, iLocal_56, 0))
							{
								func_63();
							}
						}
					}
					else
					{
						func_63();
					}
				}
				break;
			}
	}
}

void func_4()
{
	if (!iLocal_261)
	{
		switch (unk_0x444ECD635D5FD45F(0, 3))
		{
			case 0:
				sLocal_259 = "idle_a";
				break;
			
			case 1:
				sLocal_259 = "idle_b";
				break;
			
			case 2:
				sLocal_259 = "idle_c";
				break;
		}
		unk_0x6D98AA46076A68BE(&uLocal_72);
		unk_0x5B5659C49032B96C(0, sLocal_258, "enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x5B5659C49032B96C(0, sLocal_258, sLocal_259, 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x5B5659C49032B96C(0, sLocal_258, "exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x5B5659C49032B96C(0, sLocal_257, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x963BB7C99350D827(uLocal_72);
		unk_0x0891776D0327B77A(iLocal_54, uLocal_72);
		unk_0x2AF68ED52DC74B7D(&uLocal_72);
		iLocal_261 = 1;
	}
	else if (unk_0x95EDB2DEFA5BB405(iLocal_54, sLocal_258, "enter", 3))
	{
		if (func_5())
		{
			func_66(&uLocal_77, "REARRAU", "REARR_PRAND", 4, iLocal_253, 0, 0);
		}
	}
	else if (unk_0x95EDB2DEFA5BB405(iLocal_54, sLocal_258, "exit", 3))
	{
	}
	else if (unk_0x95EDB2DEFA5BB405(iLocal_54, sLocal_258, sLocal_259, 3))
	{
		func_66(&uLocal_77, "REARRAU", sLocal_271, 4, iLocal_253, 0, 0);
	}
	else
	{
		func_8();
	}
}

int func_5()
{
	if (unk_0x09560C7DE2A384BD() > iLocal_263 + 6000)
	{
		iLocal_263 = unk_0x09560C7DE2A384BD();
		return 1;
	}
	return 0;
}

void func_6()
{
	if (!iLocal_261)
	{
		unk_0x6D98AA46076A68BE(&uLocal_72);
		unk_0x5B5659C49032B96C(0, sLocal_257, "radio_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x5B5659C49032B96C(0, sLocal_257, "radio_chatter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x5B5659C49032B96C(0, sLocal_257, "radio_exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		unk_0x0CDB4D41769B8C93(0, iLocal_54, -1, 0);
		unk_0x963BB7C99350D827(uLocal_72);
		unk_0x0891776D0327B77A(iLocal_53, uLocal_72);
		unk_0x2AF68ED52DC74B7D(&uLocal_72);
		iLocal_261 = 1;
	}
	else if (unk_0x95EDB2DEFA5BB405(iLocal_53, sLocal_257, "radio_chatter", 3))
	{
		if (func_5())
		{
			func_66(&uLocal_77, "REARRAU", "REARR_PRAD3", 4, iLocal_253, 0, 0);
		}
	}
	else if (unk_0x95EDB2DEFA5BB405(iLocal_53, sLocal_257, "radio_exit", 3))
	{
		iLocal_262 = 0;
		func_8();
	}
}

void func_7()
{
	switch (iLocal_50)
	{
		case 0:
			if (!bLocal_73)
			{
				if (iLocal_48 == 3)
				{
					iLocal_50 = 1;
				}
				else if (iLocal_48 == 0)
				{
					iLocal_50 = 1;
				}
				unk_0xE44A580B551C3645(iLocal_53);
				unk_0xE44A580B551C3645(iLocal_54);
				if (unk_0x538DF9E5B1DF01EB(iLocal_53) && unk_0x538DF9E5B1DF01EB(iLocal_54))
				{
					unk_0x4C465C379119213A(iLocal_53, iLocal_54, -1, 3f, 0f, 0f, 1f, 0);
				}
				unk_0x5AE11BC36633DE4E(0);
			}
			break;
		
		case 1:
			if (unk_0x5660C8AFDD9C1721(uLocal_57))
			{
				unk_0xB6FB9702660D84F6(&uLocal_57);
			}
			iLocal_50 = 2;
			iLocal_243 = 8000;
			iLocal_290 = unk_0x09560C7DE2A384BD();
			break;
		
		case 2:
			if (unk_0xECFECDAD51A6184F(iLocal_56, 0))
			{
				if ((unk_0x09560C7DE2A384BD() - iLocal_290) > 20000)
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_55))
					{
						if (unk_0x221AC1EF116F6053(iLocal_55, -1273030092) == 7)
						{
							unk_0xA34C986DDC3D92F1(iLocal_53, iLocal_56, -1, 0, 1f, 1, 0);
							iLocal_50 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xECFECDAD51A6184F(iLocal_56, 0))
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_55))
				{
					if (unk_0xD9275EB8FA656B5C(iLocal_53, iLocal_56))
					{
						unk_0x2B79CD6A5064FB19(iLocal_55, iLocal_56, 10f, 786603);
						unk_0x2686393074E14730(iLocal_55, 1);
						func_164();
					}
				}
			}
			break;
	}
}

void func_8()
{
	bLocal_260 = func_9();
	bLocal_260 = iLocal_262;
	iLocal_243 = 20000;
	iLocal_261 = 0;
}

int func_9()
{
	if (unk_0x889D01384B54BCE3(unk_0x444ECD635D5FD45F(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	int iVar12;
	
	iVar12 = joaat("pranger");
	if (unk_0xECFECDAD51A6184F(iLocal_56, 0))
	{
		return 1;
	}
	unk_0x939DA7EBCC6588FF(iVar12);
	if (unk_0x5494F37F35C1D7D7(iVar12))
	{
		if (unk_0x4555877B8D40F1EF(unk_0xBF8499F46AD9093A(iLocal_53, 0), 1, &Var0, 1, 1077936128, 0))
		{
			if (unk_0xB5038FBF5AE651AD(&Var0, &Var6, &uVar9, 0f, 180f, 50f, 1, 1, 1))
			{
				iLocal_56 = unk_0x9BB6F54E415071A1(iVar12, Var6, 0, 1, 1);
				iLocal_55 = unk_0x793482A351850A4F(iLocal_56, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				unk_0xA1478EBA54DDE31B(iLocal_55, 294, 1);
				if (!unk_0xFA89F1C1D4B99EBD(iLocal_55, joaat("weapon_pistol"), 0))
				{
					unk_0x39272B2594E03395(iLocal_55, joaat("weapon_pistol"), -1, 0, 1);
				}
				unk_0xB4E8D4EA104CA059(iLocal_55, joaat("weapon_pistol"), 1);
				unk_0xA9465591B42213AE(iLocal_55, iLocal_70);
				unk_0x542B8BF5C21F2470(iLocal_56, 3);
				unk_0x2C4E82CF88213975(iLocal_55, 1);
				unk_0xAC894C93914464C2(iLocal_56);
				unk_0x5CDB4C8C611F6B1A(iLocal_56, 1);
				unk_0x165A87EB3ACA7978(iLocal_56, 1);
				Var0 = { unk_0xBF8499F46AD9093A(iLocal_56, 1) };
				Var3 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) - Var0 };
				unk_0x34639238667C4381(iLocal_56, unk_0x3C616B96B92181C5(Var3.f_0, Var3.f_1));
				unk_0x4555877B8D40F1EF(unk_0xBF8499F46AD9093A(iLocal_53, 0), 1, &Var0, 1, 1077936128, 0);
				if (unk_0x4970185D4CC64616(Var0, 2528.563f, 2639.115f, 36.9446f, 1) < 75f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				if (unk_0x4970185D4CC64616(2538.71f, 2592.007f, 36.9446f, Var0, 1) < 16f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				unk_0x933DC7D168CD6A71(iLocal_55, iLocal_56, Var0, 4, 7f, 786471, 5f, -1f, 1);
				unk_0x213AEEC6A495123F(iLocal_56, 4f);
				unk_0x426C3D44449AE9F1(iLocal_56, 1);
				iLocal_76 = 1;
				unk_0xDEA972D2C0A2FAD4(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_11()
{
	if (iLocal_48 != 3)
	{
		iLocal_242 = 3;
	}
	switch (iLocal_242)
	{
		case 0:
			if (unk_0x221AC1EF116F6053(iLocal_53, 242628503) == 7 || unk_0x09560C7DE2A384BD() > iLocal_245 + 15000)
			{
				if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_53, 25f, 25f, 25f, 0, 1, 0))
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_53))
					{
						unk_0x937785D9C1929236(iLocal_53);
						unk_0x6D98AA46076A68BE(&uLocal_72);
						if (!unk_0xE44A580B551C3645(iLocal_54))
						{
							unk_0xF3B924DCFDECDB4B(0, iLocal_54, -1, 3.5f, 2f, 1073741824, 0);
						}
						unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 2000);
						unk_0x963BB7C99350D827(uLocal_72);
						unk_0x0891776D0327B77A(iLocal_53, uLocal_72);
						unk_0x2AF68ED52DC74B7D(&uLocal_72);
						iLocal_242 = 1;
					}
				}
				else
				{
					iLocal_242 = 3;
				}
			}
			break;
		
		case 1:
			if (unk_0x221AC1EF116F6053(iLocal_53, 242628503) == 1)
			{
				if (unk_0x221830F81FA80744(iLocal_53) > 0)
				{
					if (!func_76())
					{
						if (iLocal_244 < 2)
						{
							func_66(&uLocal_77, "REARRAU", "REARR_PTHANK", 4, iLocal_253, 0, 0);
							if (unk_0x5660C8AFDD9C1721(uLocal_57))
							{
								unk_0x060629C917E581A5(uLocal_57, 1);
							}
						}
						else
						{
							func_66(&uLocal_77, "REARRAU", "REARR_PHELP", 4, iLocal_253, 0, 0);
						}
						iLocal_242 = 2;
					}
				}
			}
			else if (!func_76())
			{
				if (iLocal_244 < 2)
				{
					func_66(&uLocal_77, "REARRAU", "REARR_PTHANK", 4, iLocal_253, 0, 0);
					if (unk_0x5660C8AFDD9C1721(uLocal_57))
					{
						unk_0x060629C917E581A5(uLocal_57, 1);
					}
				}
				else
				{
					func_66(&uLocal_77, "REARRAU", "REARR_PHELP", 4, iLocal_253, 0, 0);
				}
				iLocal_242 = 2;
			}
			break;
		
		case 2:
			if (!func_76())
			{
				iLocal_242 = 3;
			}
			unk_0x1CAB36EC4E43E586(iLocal_53, unk_0xA16EC202D9D35357(), 100);
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_12()
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0xBF8ADDCADFC4691E(iLocal_54, unk_0xA16EC202D9D35357(), 1);
	bVar1 = func_48();
	if (bVar1)
	{
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_54))
	{
		if (!bVar0)
		{
			if (!bVar1)
			{
				if (iLocal_48 == 2 || bLocal_73 == 1)
				{
					switch (iLocal_246)
					{
						case 8:
							unk_0xAC73603AC3DBB7C9("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							unk_0x060629C917E581A5(uLocal_58, 1);
							if (!unk_0xE44A580B551C3645(iLocal_54) && unk_0x95EDB2DEFA5BB405(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
							{
								unk_0x6D98AA46076A68BE(&uLocal_72);
								unk_0x5B5659C49032B96C(0, sLocal_257, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0, 0, 0, 0);
								unk_0x963BB7C99350D827(uLocal_72);
								unk_0x0891776D0327B77A(iLocal_54, uLocal_72);
								unk_0x2AF68ED52DC74B7D(&uLocal_72);
								iLocal_246 = 9;
							}
							else
							{
								iLocal_246 = 3;
							}
							break;
						
						case 9:
							unk_0xAC73603AC3DBB7C9("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x221AC1EF116F6053(iLocal_54, 242628503) == 7)
							{
								iLocal_246 = 0;
							}
							break;
						
						case 0:
							unk_0xAC73603AC3DBB7C9("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x14F9932776F21CC2(iLocal_54, unk_0xA16EC202D9D35357(), 75f, 75f, 75f, 0, 1, 0))
							{
								unk_0x7DE35612E73BDCD0(iLocal_54, 1);
								iLocal_246 = 3;
							}
							break;
						
						case 1:
							unk_0xAC73603AC3DBB7C9("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x965556ACF6A83973(iLocal_54, unk_0xBF8499F46AD9093A(iLocal_53, 0), 4f, 4f, 3f, 0, 1, 0))
							{
								iLocal_246 = 2;
							}
							else
							{
								unk_0x937785D9C1929236(iLocal_54);
								unk_0x6D98AA46076A68BE(&uLocal_72);
								unk_0x3116CFED02763A5D(0, unk_0xBF8499F46AD9093A(iLocal_53, 0), 1000, 0, 2);
								unk_0x353F4B963593F141(0, unk_0xBF8499F46AD9093A(iLocal_53, 0), 2f, -1, 3f, 0, 1193033728);
								unk_0x963BB7C99350D827(uLocal_72);
								unk_0x0891776D0327B77A(iLocal_54, uLocal_72);
								unk_0x2AF68ED52DC74B7D(&uLocal_72);
								iLocal_246 = 2;
							}
							break;
						
						case 2:
							unk_0xAC73603AC3DBB7C9("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x965556ACF6A83973(iLocal_54, unk_0xBF8499F46AD9093A(iLocal_53, 0), 4f, 4f, 3f, 0, 1, 0))
							{
								if (unk_0x221AC1EF116F6053(iLocal_54, 242628503) == 7 || func_66(&uLocal_77, "REARRAU", sLocal_270, 4, iLocal_253, 0, 0))
								{
									iLocal_246 = 6;
								}
							}
							else if (unk_0x221AC1EF116F6053(iLocal_54, 242628503) == 7)
							{
								unk_0x6D98AA46076A68BE(&uLocal_72);
								unk_0x3116CFED02763A5D(0, unk_0xBF8499F46AD9093A(iLocal_53, 0), 1000, 0, 2);
								unk_0x353F4B963593F141(0, unk_0xBF8499F46AD9093A(iLocal_53, 0), 2f, -1, 3f, 0, 1193033728);
								unk_0x963BB7C99350D827(uLocal_72);
								unk_0x0891776D0327B77A(iLocal_54, uLocal_72);
								unk_0x2AF68ED52DC74B7D(&uLocal_72);
							}
							break;
						
						case 3:
							unk_0xAC73603AC3DBB7C9("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x14F9932776F21CC2(iLocal_54, unk_0xA16EC202D9D35357(), 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_246 = 4;
							}
							else if (unk_0x14F9932776F21CC2(iLocal_54, unk_0xA16EC202D9D35357(), 75f, 75f, 75f, 0, 1, 0))
							{
								if (!func_76())
								{
									unk_0x937785D9C1929236(iLocal_54);
									unk_0x6D98AA46076A68BE(&uLocal_72);
									unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, 8f, 2f, 1073741824, 0);
									unk_0x963BB7C99350D827(uLocal_72);
									unk_0x0891776D0327B77A(iLocal_54, uLocal_72);
									unk_0x2AF68ED52DC74B7D(&uLocal_72);
									iLocal_246 = 4;
								}
							}
							else
							{
								iLocal_246 = 6;
							}
							break;
						
						case 4:
							unk_0xAC73603AC3DBB7C9("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x14F9932776F21CC2(iLocal_54, unk_0xA16EC202D9D35357(), 9f, 9f, 9f, 0, 1, 0))
							{
								iLocal_291 = unk_0x09560C7DE2A384BD();
								iLocal_246 = 7;
							}
							break;
						
						case 7:
							unk_0xAC73603AC3DBB7C9("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!unk_0x43C66187C49221FC(iLocal_54, unk_0xA16EC202D9D35357()))
							{
								unk_0x4745F9C50C63A48C(iLocal_54, unk_0xA16EC202D9D35357(), -1, 2064, 2);
							}
							if (!unk_0x68E6C2D89A534992(iLocal_54, unk_0xA16EC202D9D35357(), 30f))
							{
								unk_0x1CAB36EC4E43E586(iLocal_54, unk_0xA16EC202D9D35357(), -1);
							}
							if ((unk_0x09560C7DE2A384BD() - iLocal_291) > 2000)
							{
								iLocal_246 = 5;
							}
							break;
						
						case 5:
							unk_0xAC73603AC3DBB7C9("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x95EDB2DEFA5BB405(iLocal_54, sLocal_257, "Thanks_Male_05", 3) || unk_0x221AC1EF116F6053(iLocal_54, 242628503) == 7)
							{
								if (!func_76())
								{
									if (iLocal_244 < 2)
									{
										func_66(&uLocal_77, "REARRAU", sLocal_265, 4, iLocal_253, 0, 0);
										unk_0x5B5659C49032B96C(iLocal_54, sLocal_257, "Thanks_Male_05", 16f, -16f, -1, 16, 0, 0, 0, 0);
									}
									else
									{
										func_66(&uLocal_77, "REARRAU", sLocal_269, 4, iLocal_253, 0, 0);
									}
									func_15(func_43(), 1, 250, 0, 0);
									unk_0x574CC08ACCB0F5FC(iLocal_54);
									iLocal_246 = 6;
								}
							}
							break;
						
						case 6:
							unk_0xAC73603AC3DBB7C9("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!func_76())
							{
								unk_0xEA36CC2E7750344B(iLocal_54, unk_0xA16EC202D9D35357(), 150f, -1, 0, 0);
								func_164();
							}
							break;
						}
				}
			}
			else
			{
				if (!func_76())
				{
					func_66(&uLocal_77, "REARRAU", sLocal_272, 4, iLocal_253, 0, 0);
				}
				unk_0xEA36CC2E7750344B(iLocal_54, unk_0xA16EC202D9D35357(), 150f, -1, 0, 0);
				func_164();
			}
		}
		else
		{
			func_13();
			unk_0xEA36CC2E7750344B(iLocal_54, unk_0xA16EC202D9D35357(), 150f, -1, 0, 0);
			if (bVar0 == 1)
			{
				iLocal_48 = 1;
			}
			if (!func_76())
			{
				func_66(&uLocal_77, "REARRAU", sLocal_269, 4, iLocal_253, 0, 0);
			}
			func_164();
		}
	}
}

void func_13()
{
	Global_14559 = 0;
	func_14();
}

void func_14()
{
	if (unk_0xD47B332729054512())
	{
		unk_0xD01024485E7AB68C();
		Global_16704 = 0;
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_16(Global_97439.f_29795[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x3ED04C9A60CBD249(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x680350124CC21957(iVar1, iVar0, 1);
	}
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_42();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_41(99, 1);
					func_40(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_40(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_40(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_24(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_23(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_23(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x9C2B33434756C8A2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_23(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_22(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_41(95, iParam3);
					break;
				
				case 1:
					func_41(97, iParam3);
					break;
				
				case 2:
					func_41(96, iParam3);
					break;
			}
			func_41(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_19(iVar1);
	}
	iVar5 = (Global_51933[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51933[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51933[iVar2] = 2147483647;
				}
				else
				{
					Global_51933[iVar2] = (Global_51933[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_40(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_40(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_40(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51933[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51933[iVar2];
			Global_51933[iVar2] = (Global_51933[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97439.f_23789.f_233[iVar2 /*69*/]++;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_34915 == 15)
	{
		func_17(0);
	}
	return 1;
}

void func_17(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51941[iVar0 /*3*/][0] = Global_97439.f_23789[iVar0];
		Global_51941.f_31[iVar0 /*3*/][0] = Global_97439.f_23789.f_11[iVar0];
		Global_51941.f_62[iVar0 /*3*/][0] = Global_97439.f_23789.f_22[iVar0];
		Global_51941.f_93[iVar0 /*3*/][0] = Global_97439.f_23789.f_33[iVar0];
		Global_51941.f_124[iVar0 /*3*/][0] = Global_97439.f_23789.f_44[iVar0];
		Global_51941.f_155[iVar0 /*3*/][0] = Global_97439.f_23789.f_55[iVar0];
		Global_51941.f_186[iVar0 /*3*/][0] = Global_97439.f_23789.f_66[iVar0];
		Global_51941.f_217[iVar0 /*3*/][0] = Global_97439.f_23789.f_77[iVar0];
		Global_51941.f_248[iVar0 /*3*/][0] = Global_97439.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51941[iVar0 /*3*/][1] = Global_97439.f_23789[iVar0];
			Global_51941.f_31[iVar0 /*3*/][1] = Global_97439.f_23789.f_11[iVar0];
			Global_51941.f_62[iVar0 /*3*/][1] = Global_97439.f_23789.f_22[iVar0];
			Global_51941.f_93[iVar0 /*3*/][1] = Global_97439.f_23789.f_33[iVar0];
			Global_51941.f_124[iVar0 /*3*/][1] = Global_97439.f_23789.f_44[iVar0];
			Global_51941.f_155[iVar0 /*3*/][1] = Global_97439.f_23789.f_55[iVar0];
			Global_51941.f_186[iVar0 /*3*/][1] = Global_97439.f_23789.f_66[iVar0];
			Global_51941.f_217[iVar0 /*3*/][1] = Global_97439.f_23789.f_77[iVar0];
			Global_51941.f_248[iVar0 /*3*/][1] = Global_97439.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51933[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x680350124CC21957(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x680350124CC21957(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x680350124CC21957(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_19(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0) || unk_0x889D01384B54BCE3(Global_2097152[func_21() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		unk_0x29DB79DD4D939B38(&(Global_2097152[func_21() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xA6CE1BB0BF7AE715("COUP_RED");
		unk_0x4498E0CBD76B2D72(func_20(iParam0));
		unk_0xB2BB3F163B7B2B4C(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0)
{
	func_41(93, iParam0);
	func_41(29, iParam0);
	func_41(30, iParam0);
}

bool func_23(int iParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0);
	}
	return unk_0x889D01384B54BCE3(Global_2097152[func_21() /*8064*/].f_5756.f_10, iParam0);
}

int func_24(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xA7311613D452D616(27))
	{
		return 0;
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x3ED04C9A60CBD249(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x680350124CC21957(joaat("num_cash_spent"), iVar1, 1);
		func_39(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_25(27, 1);
	return 1;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_26(iParam0, iParam1);
}

int func_26(int iParam0, int iParam1)
{
	if (func_38(14) && !func_37(iParam0))
	{
		return 0;
	}
	if (unk_0xA7311613D452D616(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24692 != 0 && !Global_68325)
	{
		return 0;
	}
	if (func_36(&Global_2542838))
	{
		if (func_34(&Global_2542838, iParam0))
		{
			return 0;
		}
		if (func_27(&Global_2542838, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6100B0637DF2BBCA(iParam0))
		{
			return 0;
		}
		if (unk_0xA7311613D452D616(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_27(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
	}
	func_30(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_28(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_28(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_29(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_29(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_30(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_31(uParam0, iVar0);
		iVar0++;
	}
	func_32(uParam0, (Global_2542837 - 0.5f));
}

void func_31(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_32(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_33(var uParam0)
{
	return uParam0->f_72;
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1) != -1;
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_36(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_37(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_38(int iParam0)
{
	return Global_34915 == iParam0;
}

int func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
	}
	return 0;
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3ED04C9A60CBD249(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(iParam0, iVar0, 1);
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/])
	{
		unk_0x3ED04C9A60CBD249(Global_50501[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x680350124CC21957(Global_50501[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_42()
{
	int iVar0;
	
	if (unk_0x6B7032CA494CCEE4())
	{
		unk_0x3ED04C9A60CBD249(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51933[0] == iVar0)
		{
			Global_51933[0] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51933[1] == iVar0)
		{
			Global_51933[1] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51933[2] == iVar0)
		{
			Global_51933[2] = iVar0;
		}
	}
}

int func_43()
{
	func_44();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_44()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_47(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_46(unk_0xA16EC202D9D35357());
			if (func_45(iVar0) && (!func_38(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_45(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_48()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (unk_0xECFECDAD51A6184F(iLocal_56, 0))
	{
		if (unk_0x14F9932776F21CC2(iLocal_56, iLocal_54, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			return 1;
		}
	}
	iVar1 = unk_0xEC27C6D0F632B6E1(unk_0xBF8499F46AD9093A(iLocal_54, 0), fVar0, fVar0, fVar0, -1);
	if (!unk_0x2DE0B96E966FD817(iVar1))
	{
		if (unk_0xA609E58449080951(iVar1) == joaat("s_f_y_cop_01") || unk_0xA609E58449080951(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar1 = unk_0xEC27C6D0F632B6E1(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), fVar0, fVar0, fVar0, -1);
	if (!unk_0x2DE0B96E966FD817(iVar1))
	{
		if (unk_0xA609E58449080951(iVar1) == joaat("s_f_y_cop_01") || unk_0xA609E58449080951(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar2 = unk_0xD0F88F41BEA11351(unk_0xBF8499F46AD9093A(iLocal_54, 0), fVar0, 0, 1024);
	if (unk_0xECFECDAD51A6184F(iVar2, 0))
	{
		return 1;
	}
	iVar2 = unk_0xD0F88F41BEA11351(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), fVar0, 0, 1024);
	if (unk_0xECFECDAD51A6184F(iVar2, 0))
	{
		return 1;
	}
	return 0;
}

void func_49()
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!unk_0x2DE0B96E966FD817(iLocal_54))
	{
		bVar0 = unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), iLocal_54);
		uVar1 = unk_0xBF8ADDCADFC4691E(iLocal_54, unk_0xA16EC202D9D35357(), 1);
		if (((uVar1 || func_62()) || func_60()) || bVar0)
		{
			func_59();
			if (bLocal_73)
			{
				if (((bVar0 || uVar1) && !unk_0xEAABEAE1DB589285(iLocal_54)) && !unk_0x202EF5D8203705EF(iLocal_54, 0))
				{
					unk_0x937785D9C1929236(iLocal_54);
					unk_0x34CD3EF298F72E05(iLocal_54, 500, 2000, 0, 0, 0, 0);
					unk_0xFC75211D7BD0539E(iLocal_54, -1);
					unk_0x2686393074E14730(iLocal_54, 1);
				}
				else if (!unk_0x202EF5D8203705EF(iLocal_54, 0) && !unk_0xEAABEAE1DB589285(iLocal_54))
				{
					unk_0x937785D9C1929236(iLocal_54);
					unk_0xFC75211D7BD0539E(iLocal_54, -1);
					unk_0x2686393074E14730(iLocal_54, 1);
				}
				func_55(0);
				if (!func_76())
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_53) && iLocal_285 == 0)
					{
						if (func_66(&uLocal_77, "REARRAU", "REARR_PWTF", 4, iLocal_253, 0, 0))
						{
							iLocal_285 = 1;
						}
					}
				}
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 3;
			}
		}
	}
	else
	{
		if (unk_0x5660C8AFDD9C1721(uLocal_58))
		{
			unk_0xB6FB9702660D84F6(&uLocal_58);
			func_54(&uLocal_77, 2);
		}
		func_59();
		if (unk_0xBF8ADDCADFC4691E(iLocal_54, unk_0xA16EC202D9D35357(), 1))
		{
			if (bLocal_73)
			{
				func_55(1);
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 3;
			}
		}
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_53))
	{
		if (bLocal_60)
		{
			if (!unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
			{
				func_164();
			}
		}
		if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
		{
		}
		iVar2 = 0;
		if (unk_0x538DF9E5B1DF01EB(iLocal_55))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_55))
			{
				if ((unk_0xBF8ADDCADFC4691E(iLocal_55, unk_0xA16EC202D9D35357(), 1) && unk_0x6360D2FA3AD62AD1(iLocal_55) < 190) || (unk_0xBF8ADDCADFC4691E(iLocal_55, unk_0xA16EC202D9D35357(), 1) && unk_0xEAABEAE1DB589285(iLocal_55)))
				{
					iVar2 = 1;
				}
				if (unk_0x538DF9E5B1DF01EB(iLocal_56) && unk_0xBF8ADDCADFC4691E(iLocal_56, unk_0xA16EC202D9D35357(), 1))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((unk_0xBF8ADDCADFC4691E(iLocal_53, unk_0xA16EC202D9D35357(), 1) && unk_0x6360D2FA3AD62AD1(iLocal_53) < 190) || func_53()) || unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0)) || func_52()) || (unk_0xBF8ADDCADFC4691E(iLocal_53, unk_0xA16EC202D9D35357(), 1) && unk_0xEAABEAE1DB589285(iLocal_53))) || iVar2 == 1)
		{
			func_55(1);
			if (iLocal_48 == 3 || iLocal_48 == 1)
			{
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 2;
			}
		}
	}
	else
	{
		if (unk_0xBF8ADDCADFC4691E(iLocal_53, unk_0xA16EC202D9D35357(), 1))
		{
			if (iLocal_286 == 0)
			{
				iLocal_286 = 1;
				iLocal_289 = unk_0x09560C7DE2A384BD();
			}
			if (iLocal_48 == 3 || iLocal_48 == 1)
			{
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 2;
			}
		}
		if (!unk_0x2DE0B96E966FD817(iLocal_54))
		{
			unk_0xFAF4121083211853(iLocal_54);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_57))
		{
			unk_0xB6FB9702660D84F6(&uLocal_57);
			func_54(&uLocal_77, 1);
		}
	}
	if (iLocal_286)
	{
		if ((unk_0x09560C7DE2A384BD() - iLocal_289) > 5000)
		{
			unk_0x3F0BA82186A21202(unk_0x1788E93557766241(), 3, 0);
			unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
			iLocal_286 = 0;
		}
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_53) && !unk_0x2DE0B96E966FD817(iLocal_54))
	{
		if (unk_0xBF8ADDCADFC4691E(iLocal_53, unk_0xA16EC202D9D35357(), 1) && unk_0xBF8ADDCADFC4691E(iLocal_54, unk_0xA16EC202D9D35357(), 1))
		{
			if (unk_0x6360D2FA3AD62AD1(iLocal_53) < 190 && unk_0x6360D2FA3AD62AD1(iLocal_54) < 190)
			{
				func_59();
				func_55(1);
				iLocal_48 = 1;
			}
		}
		if (!unk_0x14F9932776F21CC2(iLocal_54, iLocal_53, 110f, 110f, 40f, 0, 1, 0))
		{
			if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_53, 20f, 20f, 20f, 0, 1, 0))
			{
				func_50();
				unk_0x4EDE34FBADD967A6(0);
				func_66(&uLocal_77, "REARRAU", "REARR_PORUN", 4, iLocal_253, 0, 0);
			}
			else if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_54, 40f, 40f, 40f, 0, 1, 0))
			{
				func_50();
				unk_0x4EDE34FBADD967A6(0);
				func_66(&uLocal_77, "REARRAU", sLocal_266, 4, iLocal_253, 0, 0);
			}
			func_164();
		}
	}
	if (unk_0x2DE0B96E966FD817(iLocal_53) && unk_0x2DE0B96E966FD817(iLocal_54))
	{
		func_164();
	}
	if (unk_0x2DE0B96E966FD817(iLocal_54))
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_53))
		{
			if (!unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_53, 100f, 100f, 40f, 0, 1, 0))
			{
				func_164();
			}
		}
	}
}

void func_50()
{
	Global_14559 = 0;
	func_51();
}

void func_51()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

bool func_52()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) == joaat("bulldozer"))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_53))
			{
				if (unk_0x59C8BF753F6A2D1C(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), iLocal_53))
				{
					bVar0 = true;
				}
			}
		}
		if (unk_0xECFECDAD51A6184F(iLocal_56, 0))
		{
			if (unk_0x59C8BF753F6A2D1C(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), iLocal_56))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_76)
		{
			if (unk_0xBF8ADDCADFC4691E(iLocal_56, unk_0xA16EC202D9D35357(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_53()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	Var0 = { 3f, 3f, 3f };
	Var3 = { -3f, -3f, -3f };
	if (unk_0xF6BC67E137183D3F(unk_0xCDC62EA66023BC94(iLocal_53, 31086, 0f, 0f, 0f), 0.5f, 1))
	{
		if (unk_0x2DE0B96E966FD817(iLocal_54))
		{
			return 1;
		}
		else if (!unk_0xF6BC67E137183D3F(unk_0xCDC62EA66023BC94(iLocal_54, 31086, 0f, 0f, 0f), 2f, 1))
		{
			return 1;
		}
	}
	if (unk_0x14A03700BE8DDF33(unk_0xCDC62EA66023BC94(iLocal_53, 31086, 0f, 0f, 0f), 3f))
	{
		return 1;
	}
	if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_53, 5f, 5f, 5f, 0, 1, 0))
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_53))
		{
			if (unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iLocal_53) || unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iLocal_53))
			{
				if (unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar6, 1))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						return 1;
					}
				}
			}
		}
		if (!unk_0x2DE0B96E966FD817(iLocal_54))
		{
			if (unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iLocal_54) || unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iLocal_54))
			{
				if (unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar6, 1))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						if (bLocal_73)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	Var0 = { Var0 + unk_0xCDC62EA66023BC94(iLocal_53, 31086, 0f, 0f, 0f) };
	Var3 = { Var3 + unk_0xCDC62EA66023BC94(iLocal_53, 31086, 0f, 0f, 0f) };
	if (((unk_0xFDD5856D25C0CEE2(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0xFDD5856D25C0CEE2(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0xFDD5856D25C0CEE2(Var3, Var0, joaat("weapon_stickybomb"), 1)) || unk_0xFDD5856D25C0CEE2(Var3, Var0, joaat("vehicle_weapon_tank"), 1))
	{
		return 1;
	}
	return 0;
}

void func_54(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_55(int iParam0)
{
	if (!unk_0x2DE0B96E966FD817(iLocal_53))
	{
		unk_0xFAF4121083211853(iLocal_53);
		if (!bLocal_60)
		{
			unk_0x3F0BA82186A21202(unk_0x1788E93557766241(), 2, 0);
			unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
			unk_0xA8BC819B54F5B824(iLocal_53, 1);
			if (unk_0x5660C8AFDD9C1721(uLocal_57))
			{
				unk_0x060629C917E581A5(uLocal_57, 0);
			}
			if (iParam0 == 1)
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_54))
				{
					if (unk_0x221AC1EF116F6053(iLocal_54, 1805844857) == 7)
					{
						if (unk_0x95EDB2DEFA5BB405(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
						{
							unk_0x6D98AA46076A68BE(&uLocal_72);
							unk_0x5B5659C49032B96C(0, sLocal_257, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							unk_0xEA36CC2E7750344B(0, iLocal_53, 150f, -1, 0, 0);
							unk_0x963BB7C99350D827(uLocal_72);
							unk_0x0891776D0327B77A(iLocal_54, uLocal_72);
							unk_0x2AF68ED52DC74B7D(&uLocal_72);
							unk_0x86E7313D71D1A983(iLocal_54, joaat("MotionState_Run"), 0, 0, 0);
							unk_0x2686393074E14730(iLocal_54, 1);
						}
						else
						{
							unk_0x937785D9C1929236(iLocal_54);
							unk_0xEA36CC2E7750344B(iLocal_54, iLocal_53, 150f, -1, 0, 0);
						}
					}
				}
				if ((!unk_0xE44A580B551C3645(iLocal_54) && !unk_0x2DE0B96E966FD817(iLocal_54)) && !unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iLocal_54, 1), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 1) < 20f)
					{
						if (!func_76())
						{
							func_66(&uLocal_77, "REARRAU", sLocal_272, 4, iLocal_253, 0, 0);
						}
					}
				}
			}
			unk_0x937785D9C1929236(iLocal_53);
			unk_0x6D98AA46076A68BE(&uLocal_72);
			unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2048, 2);
			unk_0x85A1016DBBC5E64B(0, unk_0xA16EC202D9D35357(), 0, 16);
			unk_0x963BB7C99350D827(uLocal_72);
			unk_0x0891776D0327B77A(iLocal_53, uLocal_72);
			unk_0x2AF68ED52DC74B7D(&uLocal_72);
			unk_0x2686393074E14730(iLocal_53, 1);
			unk_0x8FA0F20D95909AB2(iLocal_53, 1, 0);
			if (unk_0xECFECDAD51A6184F(iLocal_56, 0))
			{
				unk_0x542B8BF5C21F2470(iLocal_56, 1);
			}
			func_57();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x2DE0B96E966FD817(iLocal_53))
			{
				if (!unk_0xEAABEAE1DB589285(iLocal_53))
				{
				}
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_55))
			{
				func_56();
			}
			bLocal_60 = true;
		}
	}
}

void func_56()
{
	if (unk_0x538DF9E5B1DF01EB(iLocal_55))
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_55))
		{
			unk_0x6D98AA46076A68BE(&uLocal_72);
			unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2048, 2);
			unk_0x85A1016DBBC5E64B(0, unk_0xA16EC202D9D35357(), 0, 16);
			unk_0x963BB7C99350D827(uLocal_72);
			unk_0x0891776D0327B77A(iLocal_55, uLocal_72);
			unk_0x2AF68ED52DC74B7D(&uLocal_72);
			unk_0x2686393074E14730(iLocal_55, 1);
			unk_0x8FA0F20D95909AB2(iLocal_55, 1, 0);
		}
	}
}

void func_57()
{
	Global_14559 = 0;
	func_58();
}

void func_58()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
	}
}

void func_59()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_54))
	{
		if (unk_0x5660C8AFDD9C1721(uLocal_58))
		{
			unk_0x060629C917E581A5(uLocal_58, 0);
		}
		unk_0xFAF4121083211853(iLocal_54);
	}
}

int func_60()
{
	if (!unk_0xE44A580B551C3645(iLocal_53))
	{
		if (bLocal_73)
		{
			if (unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), iLocal_53))
			{
				if ((unk_0x09560C7DE2A384BD() - iLocal_275) > 1000)
				{
					func_61();
				}
			}
		}
	}
	if (iLocal_274 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_61()
{
	if (!func_76())
	{
		if (iLocal_274 < 3)
		{
			unk_0x4745F9C50C63A48C(iLocal_53, unk_0xA16EC202D9D35357(), 6000, 2048, 2);
			func_66(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
		}
	}
	iLocal_274++;
	iLocal_275 = unk_0x09560C7DE2A384BD();
}

int func_62()
{
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (unk_0x59C8BF753F6A2D1C(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), iLocal_54))
		{
			if (bLocal_73)
			{
				if (iLocal_51 != 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(iLocal_54, 1), Local_67) > 2.5f)
					{
						return 1;
					}
				}
				else
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
	if (bLocal_73)
	{
		if (unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), iLocal_54))
		{
			if (unk_0xEAABEAE1DB589285(iLocal_54))
			{
				if (iLocal_51 != 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(iLocal_54, 1), Local_67) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (bLocal_73)
			{
				if ((unk_0x09560C7DE2A384BD() - iLocal_275) > 1000)
				{
					func_61();
				}
			}
		}
	}
	if (iLocal_274 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (!iLocal_74)
	{
		switch (iLocal_244)
		{
			case 0:
				if (!bLocal_60)
				{
					if (unk_0x83666F9FB8FEBD4B() > 80000)
					{
						if (!unk_0x2DE0B96E966FD817(iLocal_53))
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_54))
							{
								func_50();
								unk_0x4EDE34FBADD967A6(0);
								func_66(&uLocal_77, "REARRAU", "REARR_PRAD3", 4, iLocal_253, 0, 0);
							}
						}
						iLocal_244 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_76())
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_54))
					{
						if (unk_0x95EDB2DEFA5BB405(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
						{
							unk_0x6D98AA46076A68BE(&uLocal_72);
							unk_0x5B5659C49032B96C(0, sLocal_257, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							unk_0xEA36CC2E7750344B(0, iLocal_53, 150f, -1, 0, 0);
							unk_0x963BB7C99350D827(uLocal_72);
							unk_0x0891776D0327B77A(iLocal_54, uLocal_72);
							unk_0x2AF68ED52DC74B7D(&uLocal_72);
							unk_0x86E7313D71D1A983(iLocal_54, joaat("MotionState_Run"), 0, 0, 0);
							unk_0x2686393074E14730(iLocal_54, 1);
						}
						else
						{
							unk_0xEA36CC2E7750344B(iLocal_54, iLocal_53, 150f, -1, 0, 0);
						}
						unk_0x2686393074E14730(iLocal_54, 1);
						unk_0x4C31C3561F937348(iLocal_54, 101);
						func_66(&uLocal_77, "REARRAU", sLocal_268, 4, iLocal_253, 0, 0);
						iLocal_244 = 2;
					}
					if (!unk_0x2DE0B96E966FD817(iLocal_53))
					{
						unk_0x937785D9C1929236(iLocal_53);
						iLocal_244 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0x2DE0B96E966FD817(iLocal_53))
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_54))
					{
						unk_0x2966D41514EAE84B(2, iLocal_71, iLocal_70);
						unk_0x2966D41514EAE84B(2, iLocal_70, iLocal_71);
						unk_0x85A1016DBBC5E64B(iLocal_53, iLocal_54, 0, 16);
					}
					else
					{
						unk_0xAC9F22F89987627B(iLocal_53, 1193033728, 0);
						func_164();
					}
					unk_0x2686393074E14730(iLocal_53, 1);
				}
				iLocal_74 = 1;
				break;
			}
	}
}

int func_64(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (unk_0xECFECDAD51A6184F(iParam1, 0))
	{
		if (!unk_0x2DE0B96E966FD817(iParam0))
		{
			Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
		}
		else
		{
			return -1;
		}
		Var3 = { unk_0xA783C6007920169C(iParam1, 1f, -0.5f, 0f) };
		Var9 = { Var3 - Var0 };
		Var6 = { unk_0xA783C6007920169C(iParam1, -1f, -0.5f, 0f) };
		Var12 = { Var6 - Var0 };
		if (unk_0x652D2EEEF1D3E62C(Var9) < unk_0x652D2EEEF1D3E62C(Var12))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

void func_65()
{
	if (!func_76())
	{
		if (!iLocal_292)
		{
			if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_53, 30f, 30f, 30f, 0, 1, 0))
			{
				func_66(&uLocal_77, "REARRAU", "REARR_PSTOP", 4, iLocal_253, 0, 0);
				iLocal_292 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		else if (unk_0xC9D9444186B5A374() > 8000)
		{
			if (unk_0x444ECD635D5FD45F(0, 99) > 50)
			{
				func_66(&uLocal_77, "REARRAU", "REARR_PRAND", 4, iLocal_253, 0, 0);
			}
			else if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
			{
				func_66(&uLocal_77, "REARRAU", sLocal_267, 4, iLocal_253, 0, 0);
			}
			else if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_53, 10f, 10f, 10f, 0, 1, 0))
			{
				func_66(&uLocal_77, "REARRAU", sLocal_267, 4, iLocal_253, 0, 0);
			}
			else
			{
				func_66(&uLocal_77, "REARRAU", sLocal_271, 4, iLocal_253, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
		}
	}
}

bool func_66(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_67(sParam2, iParam3, 0);
}

int func_67(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_51();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_74(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_73();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_72();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_71())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
					{
						return 0;
					}
				}
			}
			if (func_70())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_69();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_68();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_51();
	}
	return 0;
}

void func_68()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_69()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_70()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_72()
{
	if (func_38(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_43();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_74(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_75(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

int func_76()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	if (unk_0x14F9932776F21CC2(iLocal_54, iLocal_53, 3.5f, 3.5f, 3.5f, 0, 1, 0) || func_80())
	{
		if (!func_78(1063675494))
		{
			return 1;
		}
	}
	return 0;
}

int func_78(float fParam0)
{
	var uVar0;
	struct<3> Var1;
	
	if (unk_0x714420A4ADFCA5F0(unk_0xBF8499F46AD9093A(iLocal_54, 1), &uVar0, &Var1))
	{
		if (func_79(Var1, 0f, 0f, 1f) < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

float func_79(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_80()
{
	return 0;
}

int func_81(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_82()
{
	if ((unk_0x09560C7DE2A384BD() - iLocal_252) > 500)
	{
		if ((iLocal_48 != 1 && iLocal_48 != 3) && iLocal_48 != 2)
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_58))
			{
				unk_0x060629C917E581A5(uLocal_58, iLocal_247);
				if (iLocal_247 == 1)
				{
					iLocal_247 = 0;
				}
				else
				{
					iLocal_247 = 1;
				}
			}
		}
		else
		{
			bLocal_287 = true;
		}
		if (!bLocal_60)
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_57))
			{
				unk_0x060629C917E581A5(uLocal_57, iLocal_248);
				if (iLocal_248 == 1)
				{
					iLocal_248 = 0;
				}
				else
				{
					iLocal_248 = 1;
				}
			}
		}
		else
		{
			bLocal_287 = true;
		}
		iLocal_252 = unk_0x09560C7DE2A384BD();
	}
	if (!bLocal_288 == bLocal_287)
	{
		if (bLocal_287)
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_58))
			{
				unk_0xAF9E05E1AFA9F45F(uLocal_58, 1);
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_57))
			{
				unk_0xAF9E05E1AFA9F45F(uLocal_57, 1);
			}
		}
		else
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_58))
			{
				unk_0xAF9E05E1AFA9F45F(uLocal_58, 0);
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_57))
			{
				unk_0xAF9E05E1AFA9F45F(uLocal_57, 0);
			}
		}
		bLocal_288 = bLocal_287;
	}
}

int func_83(float fParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	Var2 = { fParam0, fParam0, 50f };
	if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_278, Local_281, 194.75f, 0, 1, 0))
	{
		return 1;
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_53))
	{
		if (unk_0x14F9932776F21CC2(iLocal_53, unk_0xA16EC202D9D35357(), Var2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_54))
	{
		if (unk_0x14F9932776F21CC2(iLocal_54, unk_0xA16EC202D9D35357(), Var2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (iVar1 == 2)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_84(int iParam0)
{
	if (func_89())
	{
		Global_97429 = 1;
		Global_97426 = unk_0x09560C7DE2A384BD();
		if (func_88(Global_97428))
		{
			func_85(0);
		}
		unk_0xBE9A45C5385D0AB1(1, "RE_TITLE");
		if (iParam0 && func_88(Global_97428))
		{
			unk_0x94BF9C1CAC4541F9();
		}
		return 1;
	}
	return 0;
}

void func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97439.f_28192.f_2 < 3)
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_86(func_87(iParam0), -1);
					Global_97439.f_28192.f_2++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x889D01384B54BCE3(Global_97435, 1))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_86(func_87(iParam0), -1);
					Global_97439.f_28192.f_3++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x889D01384B54BCE3(Global_97435, 2))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_86(func_87(iParam0), -1);
					Global_97439.f_28192.f_4++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 2);
				}
			}
			break;
	}
}

void func_86(var uParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(uParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

char* func_87(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_89()
{
	switch (func_90(&Global_24505, 0, 5, 0, unk_0x60C807BBCBE66CC7()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_90(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87925.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_94(0))
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		unk_0x68068FC275E8AC83(unk_0xA495B6AB6F2BF8C7(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x847CD74208BB719C(8);
		}
		Global_34915 = iParam2;
		Global_34877 = *uParam0;
		Global_34878 = iParam4;
		Global_34876 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34876 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34876)
			{
				if (Global_34882[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34877 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_92(iParam2))
		{
			return 0;
		}
		if (Global_34876 == 8)
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		Global_34882[Global_34876 /*4*/] = Global_34879;
		Global_34882[Global_34876 /*4*/].f_1 = iParam1;
		Global_34882[Global_34876 /*4*/].f_2 = iParam2;
		Global_34882[Global_34876 /*4*/].f_3 = 0;
		Global_34876++;
		if (iParam4 != 0)
		{
			func_91(uParam0, iParam4);
		}
	}
	return 2;
}

void func_91(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34876 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34876)
	{
		if (Global_34882[iVar0 /*4*/] == *uParam0)
		{
			Global_34882[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_92(int iParam0)
{
	return func_93(iParam0, Global_34915);
}

int func_93(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_94(int iParam0)
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	if (func_92(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_95()
{
	float fVar0;
	
	fVar0 = 50f;
	if (!unk_0x2DE0B96E966FD817(iLocal_53))
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_54))
		{
			if ((unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_53, fVar0, fVar0, fVar0, 0, 1, 0) || unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_54, fVar0, fVar0, fVar0, 0, 1, 0)) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_278, Local_281, 194.75f, 0, 1, 0))
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_58))
				{
					uLocal_58 = func_96(iLocal_54, 0, 145);
				}
				if (!unk_0x5660C8AFDD9C1721(uLocal_57))
				{
					uLocal_57 = func_96(iLocal_53, 0, 145);
				}
				unk_0xAF9E05E1AFA9F45F(uLocal_58, 0);
				unk_0xAF9E05E1AFA9F45F(uLocal_57, 0);
				unk_0xC1B1E9A034A63A62(0);
				return 1;
			}
		}
		else
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_53))
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_57))
				{
					uLocal_57 = func_96(iLocal_53, 0, 145);
				}
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_58))
			{
				unk_0xB6FB9702660D84F6(&uLocal_58);
			}
			return 1;
		}
	}
	else
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_54))
		{
			if (!unk_0x5660C8AFDD9C1721(uLocal_58))
			{
				uLocal_58 = func_96(iLocal_54, 0, 145);
			}
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_57))
		{
			unk_0xB6FB9702660D84F6(&uLocal_57);
		}
		return 1;
	}
	return 0;
}

var func_96(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_97(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x5660C8AFDD9C1721(uVar0)) && unk_0xC929DDA58687736B(&(Global_97439.f_29795[iParam2 /*29*/].f_3)))
	{
		unk_0xFDA1FE98ECD75505(uVar0, &(Global_97439.f_29795[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_97(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDF78B7F06503567E(iParam0);
	if (unk_0x9FF5D51C24AD2308(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_98(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x060629C917E581A5(uVar0, bParam1);
		}
		else
		{
			unk_0x1AD45E3CF020D50D(uVar0, 2);
		}
	}
	else if (unk_0xA34B85701D8A1FA8(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_98(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
		unk_0x060629C917E581A5(uVar0, bParam1);
	}
	else if (unk_0x15CE956C279F4825(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_98(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_98(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_99()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	
	iVar0 = joaat("s_m_y_ranger_01");
	if (iLocal_52 == 1)
	{
		Var2 = { 2429.822f, 4952.938f, 44.8892f };
		fVar8 = 218.3434f;
		Var5 = { 2431.685f, 4945.31f, 44.6996f };
		fVar9 = 220.0087f;
		Local_278 = { 2378.284f, 4863.027f, 32.50883f };
		Local_281 = { 2512.797f, 4998.586f, 90.12283f };
		sLocal_255 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_264 = "arrestcriminal";
		sLocal_265 = "REARR_CTHANK";
		sLocal_266 = "REARR_CORUN";
		sLocal_267 = "REARR_CWTF";
		sLocal_268 = "REARR_CTURN";
		sLocal_269 = "REARR_CHELP";
		sLocal_270 = "REARR_HATE";
		sLocal_271 = "REARR_CRAND";
		sLocal_272 = "REARR_CRAND";
		sLocal_273 = "REARR_CRAND";
		iVar1 = joaat("a_m_m_hillbilly_02");
	}
	else if (iLocal_52 == 2)
	{
		Var2 = { 2592.637f, 2540.05f, 30.4162f };
		fVar8 = 90.5639f;
		Var5 = { 2586.005f, 2541.41f, 31.0379f };
		fVar9 = 75.5943f;
		Local_278 = { 2543.135f, 2683.917f, 0.307461f };
		Local_281 = { 2597.603f, 2408.885f, 121.901f };
		sLocal_255 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_264 = "arrestcriminal2";
		sLocal_265 = "REARR_THANK2";
		sLocal_266 = "REARR_CORUN2";
		sLocal_267 = "REARR_CWTF2";
		sLocal_268 = "REARR_CTURN2";
		sLocal_269 = "REARR_CHELP2";
		sLocal_270 = "REARR_HATE2";
		sLocal_271 = "REARR_CRAND2";
		sLocal_272 = "REARR_CRAND2";
		sLocal_273 = "REARR_CRAND2";
		iVar1 = joaat("g_m_m_armgoon_01");
	}
	unk_0x939DA7EBCC6588FF(iVar0);
	unk_0x939DA7EBCC6588FF(iVar1);
	unk_0x939DA7EBCC6588FF(joaat("prop_ld_binbag_01"));
	unk_0x3D28909AF30D70F4(sLocal_257);
	unk_0x3D28909AF30D70F4(sLocal_258);
	unk_0x660D567D3EB18812("MOVE_M@BAIL_BOND_NOT_TAZERED");
	unk_0x660D567D3EB18812("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((unk_0x5494F37F35C1D7D7(iVar0) && unk_0x5494F37F35C1D7D7(iVar1)) && unk_0x5494F37F35C1D7D7(joaat("prop_ld_binbag_01"))) && unk_0x6C47E32491756A1A(sLocal_257)) && unk_0x6C47E32491756A1A(sLocal_258)) && unk_0x307330CEB84DD3AE("MOVE_M@BAIL_BOND_NOT_TAZERED")) && unk_0x307330CEB84DD3AE("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_53 = unk_0x6F9DE0DE8363ADF1(6, iVar0, Var2, fVar8, 1, 1);
		unk_0xA1478EBA54DDE31B(iLocal_53, 294, 1);
		unk_0x8FA0F20D95909AB2(iLocal_53, 1, 0);
		unk_0x277B694318148985(iLocal_53, 1);
		unk_0x2C4E82CF88213975(iLocal_53, 1);
		func_101(&uLocal_77, 1, iLocal_53, "ArrestCop", 0, 1);
		unk_0xDD56EF930C7A5863(iLocal_53, 1);
		unk_0x383868E60E28653A(iLocal_53, 1);
		iLocal_54 = unk_0x6F9DE0DE8363ADF1(26, iVar1, Var5, fVar9, 1, 1);
		unk_0x8FA0F20D95909AB2(iLocal_54, 1, 0);
		unk_0xA1478EBA54DDE31B(iLocal_54, 42, 1);
		unk_0xA1478EBA54DDE31B(iLocal_54, 281, 1);
		unk_0x2C4E82CF88213975(iLocal_54, 1);
		func_101(&uLocal_77, 2, iLocal_54, sLocal_264, 0, 1);
		unk_0xDD56EF930C7A5863(iLocal_54, 1);
		if (iLocal_52 == 1)
		{
			unk_0x42544C0CC4949BD5(iLocal_54, 0, 0, 2, 0);
			unk_0x42544C0CC4949BD5(iLocal_54, 2, 0, 0, 0);
			unk_0x42544C0CC4949BD5(iLocal_54, 3, 2, 0, 0);
			unk_0x42544C0CC4949BD5(iLocal_54, 4, 0, 0, 0);
		}
		func_100();
		if (func_43() == 0)
		{
			func_101(&uLocal_77, 0, unk_0xA16EC202D9D35357(), "MICHAEL", 0, 1);
		}
		else if (func_43() == 1)
		{
			func_101(&uLocal_77, 0, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
		}
		else if (func_43() == 2)
		{
			func_101(&uLocal_77, 0, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
		}
		if (!unk_0xFA89F1C1D4B99EBD(iLocal_53, joaat("weapon_pistol"), 0))
		{
			unk_0x39272B2594E03395(iLocal_53, joaat("weapon_pistol"), -1, 0, 1);
		}
		unk_0xB4E8D4EA104CA059(iLocal_53, joaat("weapon_pistol"), 1);
		uLocal_59 = unk_0x8AC4394F3C9173EE(joaat("prop_ld_binbag_01"), Local_64.f_0, Local_64.f_1, (Local_64.f_2 + 100f), 1, 1, 0);
		unk_0x423D1EBE54B18555(uLocal_59, 0);
		if (unk_0x2A488C176D52CCA5(2411.32f, 4958.76f, 45.19f, Local_64) < 10f)
		{
			iLocal_52 = 1;
			unk_0x6D98AA46076A68BE(&uLocal_72);
			unk_0xB5D83113822B1C1F(0, 2473.254f, 4901.651f, 43.1488f, 3f, -1, 2f, 1, Local_249, 1193033728);
			unk_0xEA36CC2E7750344B(0, iLocal_53, 150f, -1, 0, 0);
			unk_0x963BB7C99350D827(uLocal_72);
			unk_0x0891776D0327B77A(iLocal_54, uLocal_72);
			unk_0x2686393074E14730(iLocal_54, 1);
			unk_0x2AF68ED52DC74B7D(&uLocal_72);
			unk_0x9D92F25226C3ECED(2544.862f, 4729.893f, 27.8986f, 2564.862f, 4749.893f, 28.8986f, 1);
		}
		else
		{
			iLocal_52 = 2;
			unk_0x6D98AA46076A68BE(&uLocal_72);
			unk_0xB5D83113822B1C1F(0, 2531.445f, 2521.749f, 38.2072f, 3f, -1, 2f, 1, Local_249, 1193033728);
			unk_0xEA36CC2E7750344B(0, iLocal_53, 150f, -1, 0, 0);
			unk_0x963BB7C99350D827(uLocal_72);
			unk_0x0891776D0327B77A(iLocal_54, uLocal_72);
			unk_0x2686393074E14730(iLocal_54, 1);
			unk_0x2AF68ED52DC74B7D(&uLocal_72);
		}
		if (iLocal_52 == 1)
		{
		}
		unk_0xF3B924DCFDECDB4B(iLocal_53, iLocal_54, -1, 1f, 3f, 1073741824, 0);
		unk_0x2686393074E14730(iLocal_53, 1);
		return 1;
	}
	return 0;
}

void func_100()
{
	Local_249.f_0 = 0f;
	Local_249.f_1 = 10f;
	unk_0x59FF47176A212235(iLocal_53, 2);
	unk_0x15EBFEEB77BF84B7(iLocal_53, 13, 1);
	unk_0x15EBFEEB77BF84B7(iLocal_53, 2, 1);
	unk_0x15EBFEEB77BF84B7(iLocal_53, 1, 1);
	unk_0x15EBFEEB77BF84B7(iLocal_53, 11, 0);
	unk_0x23FA15CAC1C1E536(iLocal_53, 0);
	unk_0x59FF47176A212235(iLocal_54, 3);
	unk_0x15EBFEEB77BF84B7(iLocal_54, 17, 1);
	unk_0x15EBFEEB77BF84B7(iLocal_54, 6, 1);
	unk_0x15EBFEEB77BF84B7(iLocal_54, 1, 1);
	unk_0x15EBFEEB77BF84B7(iLocal_54, 11, 0);
	unk_0xDEB0A02F25120B62(iLocal_54, 128, 1);
	unk_0xDEB0A02F25120B62(iLocal_54, 1, 0);
	unk_0x0B29CE7F19BFE6C0("RE_ARREST_COP", &iLocal_70);
	unk_0x0B29CE7F19BFE6C0("RE_ARREST_CRIM", &iLocal_71);
	unk_0xA9465591B42213AE(iLocal_53, iLocal_70);
	unk_0xA9465591B42213AE(iLocal_54, iLocal_71);
	unk_0x2966D41514EAE84B(4, iLocal_71, iLocal_70);
	unk_0x2966D41514EAE84B(3, iLocal_70, joaat("player"));
	unk_0x2966D41514EAE84B(3, iLocal_71, joaat("player"));
	unk_0x2966D41514EAE84B(4, iLocal_71, joaat("COP"));
	unk_0x3E99D575EE07FDB3(iLocal_53, sLocal_256);
	unk_0x3E99D575EE07FDB3(iLocal_54, sLocal_255);
}

void func_101(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
			}
		}
	}
}

int func_102()
{
	if (!func_92(5))
	{
		return 1;
	}
	if (func_111())
	{
		return 1;
	}
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_110())
		{
			return 0;
		}
	}
	if (func_103(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_103(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (func_45(func_43()))
		{
			iVar36 = func_109();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 2) && !unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 3))
				{
					func_104(iVar32, &Var0);
					fVar35 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_104(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_105(uParam1, "Abigail1", func_107(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 1:
			func_105(uParam1, "Abigail2", func_107(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 2:
			func_105(uParam1, "Barry1", func_107(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 3:
			func_105(uParam1, "Barry2", func_107(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 4:
			func_105(uParam1, "Barry3", func_107(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 5:
			func_105(uParam1, "Barry3A", func_107(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 6:
			func_105(uParam1, "Barry3C", func_107(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 7:
			func_105(uParam1, "Barry4", func_107(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_106(iParam0), 0, 0);
			break;
		
		case 8:
			func_105(uParam1, "Dreyfuss1", func_107(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 9:
			func_105(uParam1, "Epsilon1", func_107(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 10:
			func_105(uParam1, "Epsilon2", func_107(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 11:
			func_105(uParam1, "Epsilon3", func_107(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 12:
			func_105(uParam1, "Epsilon4", func_107(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 13:
			func_105(uParam1, "Epsilon5", func_107(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 14:
			func_105(uParam1, "Epsilon6", func_107(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 15:
			func_105(uParam1, "Epsilon7", func_107(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 16:
			func_105(uParam1, "Epsilon8", func_107(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 17:
			func_105(uParam1, "Extreme1", func_107(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 18:
			func_105(uParam1, "Extreme2", func_107(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 19:
			func_105(uParam1, "Extreme3", func_107(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 20:
			func_105(uParam1, "Extreme4", func_107(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 21:
			func_105(uParam1, "Fanatic1", func_107(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_106(iParam0), 1, 0);
			break;
		
		case 22:
			func_105(uParam1, "Fanatic2", func_107(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_106(iParam0), 1, 0);
			break;
		
		case 23:
			func_105(uParam1, "Fanatic3", func_107(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_106(iParam0), 0, 1);
			break;
		
		case 24:
			func_105(uParam1, "Hao1", func_107(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_106(iParam0), 0, 1);
			break;
		
		case 25:
			func_105(uParam1, "Hunting1", func_107(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 26:
			func_105(uParam1, "Hunting2", func_107(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 27:
			func_105(uParam1, "Josh1", func_107(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 28:
			func_105(uParam1, "Josh2", func_107(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 29:
			func_105(uParam1, "Josh3", func_107(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 30:
			func_105(uParam1, "Josh4", func_107(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 31:
			func_105(uParam1, "Maude1", func_107(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 32:
			func_105(uParam1, "Minute1", func_107(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 33:
			func_105(uParam1, "Minute2", func_107(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 34:
			func_105(uParam1, "Minute3", func_107(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 35:
			func_105(uParam1, "MrsPhilips1", func_107(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 36:
			func_105(uParam1, "MrsPhilips2", func_107(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 37:
			func_105(uParam1, "Nigel1", func_107(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 38:
			func_105(uParam1, "Nigel1A", func_107(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 39:
			func_105(uParam1, "Nigel1B", func_107(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_106(iParam0), 1, 1);
			break;
		
		case 40:
			func_105(uParam1, "Nigel1C", func_107(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_106(iParam0), 1, 1);
			break;
		
		case 41:
			func_105(uParam1, "Nigel1D", func_107(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_106(iParam0), 1, 1);
			break;
		
		case 42:
			func_105(uParam1, "Nigel2", func_107(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 43:
			func_105(uParam1, "Nigel3", func_107(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 44:
			func_105(uParam1, "Omega1", func_107(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 45:
			func_105(uParam1, "Omega2", func_107(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 46:
			func_105(uParam1, "Paparazzo1", func_107(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 47:
			func_105(uParam1, "Paparazzo2", func_107(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 48:
			func_105(uParam1, "Paparazzo3", func_107(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 49:
			func_105(uParam1, "Paparazzo3A", func_107(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 50:
			func_105(uParam1, "Paparazzo3B", func_107(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 51:
			func_105(uParam1, "Paparazzo4", func_107(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 52:
			func_105(uParam1, "Rampage1", func_107(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 54:
			func_105(uParam1, "Rampage3", func_107(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 55:
			func_105(uParam1, "Rampage4", func_107(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 56:
			func_105(uParam1, "Rampage5", func_107(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 53:
			func_105(uParam1, "Rampage2", func_107(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 57:
			func_105(uParam1, "TheLastOne", func_107(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 58:
			func_105(uParam1, "Tonya1", func_107(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 59:
			func_105(uParam1, "Tonya2", func_107(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 60:
			func_105(uParam1, "Tonya3", func_107(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 61:
			func_105(uParam1, "Tonya4", func_107(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 62:
			func_105(uParam1, "Tonya5", func_107(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_105(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_107(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_108(iParam0) };
	if (unk_0x06771AF7795B3ECF(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_108(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_109()
{
	func_44();
	switch (Global_97439.f_1729.f_539.f_3213)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_110()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0xC24CFE5409745AF5() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_111()
{
	if (func_114() && !func_110())
	{
		return 1;
	}
	if (func_113() && func_112())
	{
		return 1;
	}
	return 0;
}

bool func_112()
{
	return Global_97157 > 0;
}

int func_113()
{
	if (Global_87369 != -1)
	{
		return 1;
	}
	return 0;
}

int func_114()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 20);
	}
	return 0;
}

int func_115()
{
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_110())
		{
			return 0;
		}
	}
	if (func_111())
	{
		return 1;
	}
	if (func_103(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_116(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_119();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_118(iParam0);
	unk_0xAF49C3B252CD2D4A(0);
	unk_0x612AE23D2DD952F2(1);
	Global_97425 = 0;
	func_117();
}

void func_117()
{
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			unk_0x32DC163A33A4AB6D(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)), 1);
		}
		unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 32, 0);
	}
}

void func_118(int iParam0)
{
	Global_97428 = iParam0;
}

int func_119()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x7E5A426328F6E635(), 64);
	uVar16 = func_120(Var0);
	return uVar16;
}

int func_120(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xB793F1A0B6CC4AE1(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_121(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131527)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_119();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_163())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_110())
			{
				return 0;
			}
		}
		if (!Global_97439.f_7341)
		{
			return 0;
		}
		if (func_162(0))
		{
			return 0;
		}
		if (func_111())
		{
			return 0;
		}
		if (func_161())
		{
			return 0;
		}
		if (Global_97428 != -1)
		{
			return 0;
		}
		if (func_45(func_43()))
		{
			if (func_103(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_160(iParam3))
		{
			return 0;
		}
		if (func_45(func_43()))
		{
			if (func_159(func_43()) == 4 || func_159(func_43()) == 5)
			{
				return 0;
			}
		}
		if (func_45(func_43()))
		{
			if (!func_158(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_157(Global_97439.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x09560C7DE2A384BD() - Global_97430) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_156())
		{
			return 0;
		}
		if (unk_0x57928D9CA949E471())
		{
			return 0;
		}
		if (unk_0x03FD20E179B3FCF4())
		{
			return 0;
		}
		if (!func_147(4))
		{
			return 0;
		}
		if (!func_92(5))
		{
			return 0;
		}
		if (func_146(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xF7037F2CC07D58B0(unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357())))
		{
			if ((unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(377.153f, -717.567f, 10.0536f) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(320.9934f, 265.2515f, 82.1221f)) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_146(0, 0))
		{
			return 0;
		}
		if (Global_24592)
		{
			return 0;
		}
		if (func_160(30) && !func_146(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_45(func_43()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97439.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97439.f_1729.f_539.f_1524[iVar4];
				if (func_145(iVar8))
				{
					if (func_123(iVar4))
					{
						if (!func_122(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var5) < (210f * 210f))
							{
								if (func_43() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_122(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97439.f_1729.f_539.f_1524[iParam0];
	return func_124(iVar0);
}

int func_124(int iParam0)
{
	return func_125(iParam0, 1);
}

int func_125(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_145(iParam0))
	{
		return 0;
	}
	func_126(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_127(func_138(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_127(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_137(iParam0, iParam1))
	{
		iVar0 = func_136(iParam1);
		iVar1 = func_134(iParam0);
		iVar2 = (func_134(iParam0) - func_134(iParam1));
		iVar3 = (func_136(iParam0) - func_136(iParam1));
		iVar4 = (func_133(iParam0) - func_133(iParam1));
		iVar5 = (func_132(iParam0) - func_132(iParam1));
		iVar6 = (func_131(iParam0) - func_131(iParam1));
		iVar7 = (func_130(iParam0) - func_130(iParam1));
	}
	else
	{
		iVar0 = func_136(iParam0);
		iVar1 = func_134(iParam1);
		iVar2 = (func_134(iParam1) - func_134(iParam0));
		iVar3 = (func_136(iParam1) - func_136(iParam0));
		iVar4 = (func_133(iParam1) - func_133(iParam0));
		iVar5 = (func_132(iParam1) - func_132(iParam0));
		iVar6 = (func_131(iParam1) - func_131(iParam0));
		iVar7 = (func_130(iParam1) - func_130(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_129(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_128(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_128(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_129(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_130(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_131(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_132(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_133(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_134(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_135(unk_0x889D01384B54BCE3(iParam0, 31), -1, 1)) + 2011;
}

int func_135(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_136(int iParam0)
{
	return iParam0 & 15;
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_145(iParam1) || !func_145(iParam0))
	{
		return 1;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	iVar1 = func_132(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	iVar1 = func_131(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	iVar1 = func_130(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_138()
{
	var uVar0;
	
	func_144(&uVar0, unk_0x4952CA33C6DB5AD4());
	func_143(&uVar0, unk_0x26ADBF0B08315387());
	func_142(&uVar0, unk_0xBE59E3811BD4FDD7());
	func_141(&uVar0, unk_0xA3730885141EEA96());
	func_140(&uVar0, unk_0x1EFE4ED658D22AF3());
	func_139(&uVar0, unk_0x4C29EAF01B84254C());
	return uVar0;
}

void func_139(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_140(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_141(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_134(*uParam0);
	if (iParam1 < 1 || iParam1 > func_129(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_144(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_131(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_132(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_134(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_136(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_133(iParam0);
	if (iVar5 < 1 || iVar5 > func_129(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_146(int iParam0, int iParam1)
{
	if (unk_0x889D01384B54BCE3(Global_97439.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				iVar0 = func_43();
				if (!func_45(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_155()) || Global_96486) || Global_24448) || func_154()) || func_74(8, -1)) || func_153()) || func_152()) || func_151()) || func_150()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1) || func_155()) || Global_24448) || func_154()) || func_74(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_155()) || Global_96486) || Global_24448) || func_154()) || func_74(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_97439.f_5944.f_919[iVar0] == 5) || Global_35462 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_155()) || Global_96486) || Global_24448) || func_154()) || func_74(8, -1)) || func_153()) || func_152()) || func_150()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_155() || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || func_74(8, -1)) || func_150()) || func_149()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_74(8, -1) || func_153()) || func_152()) || func_149()) || func_148())
						{
							return 0;
						}
						if ((unk_0xB4B5BF5882A555F9() && unk_0xCC285AB3AF3E0AB4() != 3) && unk_0x449E31B77C93FF23() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
						{
							if ((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_155()) || Global_24448) || func_154()) || func_74(8, -1)) || func_152()) || func_151()) || func_150()) || Global_97439.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || func_155()) || func_152()) || Global_96486) || Global_24448) || func_154()) || Global_35965) || func_74(8, -1)) || func_151()) || func_149()) || func_150()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0)) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1)) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_155()) || Global_96486) || Global_24448) || func_154()) || func_74(8, -1)) || func_151()) || func_149()) || func_153()) || func_152()) || func_150())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_148()
{
	return Global_90081.f_1;
}

int func_149()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 13);
	}
	return 0;
}

int func_150()
{
	if (unk_0x16CDA1894CFE0781(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	if (Global_68585)
	{
		return 1;
	}
	else if (Global_54752 && !Global_54758)
	{
		return 1;
	}
	return 0;
}

bool func_152()
{
	return Global_90094.f_291 > 0;
}

bool func_153()
{
	return Global_90094.f_290 > 0;
}

var func_154()
{
	return Global_1315891;
}

int func_155()
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return Global_87925.f_44 == 1;
	}
	return 0;
}

int func_156()
{
	func_72();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_157(int iParam0)
{
	return func_137(func_138(), iParam0);
}

int func_158(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_43();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_159(int iParam0)
{
	if (!func_45(iParam0))
	{
		return 7;
	}
	return Global_97439.f_5944.f_919[iParam0];
}

bool func_160(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_163())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_161()
{
	var uVar0;
	
	if (Global_24596)
	{
		uVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (unk_0xECFECDAD51A6184F(uVar0, 0))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xD8A521688BDBE867(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_162(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

int func_163()
{
	var uVar0;
	
	if (unk_0xCEFAE6CD543A0383())
	{
		if (unk_0x889D01384B54BCE3(unk_0x7058289E8DD601D6(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131779 == 2)
	{
		return 1;
	}
	if (unk_0x6B7032CA494CCEE4())
	{
		if (unk_0x07ED3AB0A86F77AA())
		{
			if (unk_0xB7DEA1403E206005())
			{
				if (unk_0xCEFAE6CD543A0383())
				{
					uVar0 = unk_0x7058289E8DD601D6(866);
					unk_0xD0E2BFCE93AE3ABD(&uVar0, 0);
					unk_0xBE2CD6E2863337FA(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_164()
{
	if (unk_0x03FD20E179B3FCF4())
	{
		switch (iLocal_48)
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				func_195(6);
				func_178();
				break;
			
			case 3:
				func_195(5);
				func_178();
				break;
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_54))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_54) && !unk_0xE44A580B551C3645(iLocal_54))
			{
				unk_0xE44A580B551C3645(iLocal_53);
				if (unk_0x538DF9E5B1DF01EB(iLocal_53))
				{
					unk_0x0676D83B2FE460E1(iLocal_54, unk_0xBF8499F46AD9093A(iLocal_53, 1), 9000f, -1, 0, 0);
				}
				else
				{
					unk_0x0676D83B2FE460E1(iLocal_54, unk_0xBF8499F46AD9093A(iLocal_54, 1), 9000f, -1, 0, 0);
				}
				unk_0x2C4E82CF88213975(iLocal_54, 0);
				unk_0x2686393074E14730(iLocal_54, 1);
			}
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_53))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_53))
			{
				unk_0x2686393074E14730(iLocal_53, 1);
				unk_0x2C4E82CF88213975(iLocal_53, 0);
				unk_0xC4C772EC69D22293(iLocal_53, 1);
				unk_0xA8BC819B54F5B824(iLocal_53, 1);
			}
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_55))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_55))
			{
				if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
				{
					func_56();
				}
				unk_0x2C4E82CF88213975(iLocal_55, 0);
				unk_0xC4C772EC69D22293(iLocal_55, 1);
			}
		}
		if (func_177())
		{
			unk_0xABC4F2A6D7D56CF4(1f);
			unk_0x2966D41514EAE84B(2, iLocal_71, iLocal_70);
			unk_0x2966D41514EAE84B(2, iLocal_70, iLocal_71);
		}
		if (iLocal_76)
		{
			unk_0xDEA972D2C0A2FAD4(1);
		}
	}
	unk_0xC116CE577D8DDF3C(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 1);
	if (iLocal_286)
	{
		unk_0x3F0BA82186A21202(unk_0x1788E93557766241(), 3, 0);
		unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
	}
	func_165(-1);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x82706E6C897B0FA1();
}

void func_165(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_119();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_177())
	{
		func_170(iParam0);
		unk_0xBE9A45C5385D0AB1(0, 0);
		Global_97430 = unk_0x09560C7DE2A384BD();
		func_169(30000);
		StringCopy(&cVar0, func_168(Global_97428, 1), 64);
		if (func_167(Global_97428) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97427, 64);
		}
		unk_0x10DE09595D95978F(&cVar0, Global_97425, (unk_0x09560C7DE2A384BD() - Global_97426), 0);
	}
	else if (unk_0x889D01384B54BCE3(Global_97435, 0) && Global_97439.f_28192.f_2 < 3)
	{
		unk_0x29DB79DD4D939B38(&Global_97435, 0);
	}
	func_166(&Global_24505);
	Global_97429 = 0;
	func_118(-1);
}

void func_166(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34877)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34876 = 0;
	Global_34878 = 0;
	Global_34915 = 15;
	Global_54755 = 0;
	Global_54756 = 0;
}

int func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_168(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_169(int iParam0)
{
	Global_35466 = (unk_0x09560C7DE2A384BD() + iParam0);
}

void func_170(int iParam0)
{
	func_171(iParam0, 0, func_176(iParam0));
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_138();
	func_174(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_173(iParam0, &uVar0);
	Var1 = { func_172(&uVar0) };
}

struct<16> func_172(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_132(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_131(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_130(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_133(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_136(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_134(*uParam0), 64);
	return Var0;
}

void func_173(int iParam0, var uParam1)
{
	Global_97439.f_28192.f_43[iParam0] = *uParam1;
}

void func_174(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_134(*uParam0);
	iVar1 = func_136(*uParam0);
	iVar2 = func_133(*uParam0);
	iVar3 = func_132(*uParam0);
	iVar4 = func_131(*uParam0);
	iVar5 = func_130(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_129(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_129(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_175(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_175(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_144(uParam0, iParam1);
	func_143(uParam0, iParam2);
	func_142(uParam0, iParam3);
	func_141(uParam0, iParam4);
	func_140(uParam0, iParam5);
	func_139(uParam0, iParam6);
}

int func_176(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_177()
{
	if ((Global_97428 == func_119() && unk_0x03FD20E179B3FCF4()) && Global_97429)
	{
		return 1;
	}
	return 0;
}

void func_178()
{
	if (!bLocal_75)
	{
		func_194();
	}
	func_181(15, iLocal_52);
	func_179();
}

void func_179()
{
	func_180();
}

int func_180()
{
	if (func_162(0))
	{
		return 0;
	}
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

void func_181(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_119();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_167(iParam0))
	{
		func_193(iParam0, iParam1);
		if (!func_192(51))
		{
			func_189("RE_REWARD", 1, 0, 4000, 10000, func_109(), 0, 138, 0);
			func_188(51);
		}
		if (func_88(iParam0))
		{
			Global_97439.f_28192.f_2 = 3;
		}
		if (func_187(iParam0, iParam1) != 322)
		{
			func_182(func_187(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97427 = iParam1;
		if (Global_97425 == 0)
		{
			if (((Global_97428 == 1 || Global_97428 == 5) || Global_97428 == 11) || Global_97428 == 25)
			{
				func_195(2);
			}
			else if ((Global_97428 == 26 || Global_97428 == 8) || Global_97428 == 17)
			{
				func_195(7);
			}
			else
			{
				func_195(1);
			}
		}
	}
}

void func_182(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_185((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97439.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97439.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97439.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97439.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97439.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97439.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_183();
	}
}

void func_183()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_97175 = 0;
	Global_97176 = 0;
	Global_97177 = 0;
	Global_97178 = 0;
	Global_97179 = 0;
	Global_97180 = 0;
	Global_97181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97439.f_8448.f_3853;
	Global_97439.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97439.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97439.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97175++;
					fVar1 = (fVar1 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97176++;
					fVar2 = (fVar2 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97177++;
					fVar3 = (fVar3 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97178++;
					fVar4 = (fVar4 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97179++;
					fVar5 = (fVar5 + (Global_97439.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97180++;
					fVar6 = (fVar6 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97181++;
					fVar7 = (fVar7 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97158 > 0)
	{
		if (Global_97175 == Global_97158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97159 > 0)
	{
		if (Global_97176 == Global_97159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97160 > 0)
	{
		if (Global_97177 == Global_97160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97161 > 0)
	{
		if (Global_97178 == Global_97161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97162 > 0)
	{
		if (((Global_97179 == Global_97162 || (Global_97162 * 10 / Global_97179) < 41) || Global_97179 > Global_97165) || Global_97179 == Global_97165)
		{
			if (!unk_0x889D01384B54BCE3(Global_97439.f_8448.f_3856, 14))
			{
				if (Global_97179 == Global_97162)
				{
					unk_0xC655DD24DA1F5D9D(joaat("num_rndevents_completed"), Global_97162, 0);
					unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97163 > 0)
	{
		if (Global_97180 == Global_97163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97164 > 0)
	{
		if (Global_97181 == Global_97164)
		{
			fVar7 = 5f;
		}
	}
	Global_97439.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97179 > Global_97165 || Global_97179 == Global_97165)
	{
		iVar9 = Global_97165;
	}
	else
	{
		iVar9 = Global_97179;
	}
	unk_0x680350124CC21957(joaat("num_missions_completed"), Global_97175, 1);
	unk_0x680350124CC21957(joaat("num_missions_available"), Global_97158, 1);
	unk_0x680350124CC21957(joaat("num_minigames_completed"), Global_97176, 1);
	unk_0x680350124CC21957(joaat("num_minigames_available"), Global_97159, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_completed"), Global_97177, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_available"), Global_97160, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_completed"), Global_97178, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_available"), Global_97161, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_available"), Global_97165, 1);
	unk_0x680350124CC21957(joaat("num_misc_completed"), (Global_97181 + Global_97180), 1);
	unk_0x680350124CC21957(joaat("num_misc_available"), (Global_97164 + Global_97163), 1);
	Global_97182 = (Global_97175 * 100 / Global_97158);
	Global_97184 = ((Global_97177 + Global_97176) * 100 / (Global_97160 + Global_97159));
	Global_97183 = ((Global_97178 + iVar9) * 100 / (Global_97161 + Global_97165));
	Global_97185 = ((Global_97180 + Global_97181) * 100 / (Global_97163 + Global_97164));
	unk_0x17B4C1DC107FE8D1(joaat("total_progress_made"), Global_97439.f_8448.f_3853, 1);
	unk_0x680350124CC21957(joaat("percent_story_missions"), Global_97182, 1);
	unk_0x680350124CC21957(joaat("percent_ambient_missions"), Global_97183, 1);
	unk_0x680350124CC21957(joaat("percent_oddjobs"), Global_97184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853))
	{
		func_39(13, unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853));
	}
	if (!unk_0x0DA6B7D4A76F5536())
	{
		if (!Global_68325)
		{
			if (func_184() == 2 == 0 && !unk_0x1DAD7CE53BEE7710())
			{
				if (unk_0xECA1708601B2AF8E())
				{
					Global_97173 = 0;
				}
				if (!Global_54758)
				{
					func_180();
				}
			}
		}
	}
}

int func_184()
{
	return Global_24446;
}

int func_185(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_186();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_186()
{
	return Global_1312729;
}

int func_187(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_189(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_190(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_190(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9BA82E09A986BA4B(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97439.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_8 = (unk_0x09560C7DE2A384BD() + iParam3);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = ((unk_0x09560C7DE2A384BD() + iParam3) + iParam4);
		}
		else
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97439.f_23635.f_145++;
		func_191();
	}
}

void func_191()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97439.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[0])
			{
				Global_97439.f_23635.f_146[0] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[1])
			{
				Global_97439.f_23635.f_146[1] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[2])
			{
				Global_97439.f_23635.f_146[2] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_193(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_28192.f_8[iParam0]), iParam1);
}

int func_194()
{
	return 1;
}

void func_195(int iParam0)
{
	Global_97425 = iParam0;
}

void func_196()
{
	if (!bLocal_73 && iLocal_50 == 0)
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_53) && !unk_0x2DE0B96E966FD817(iLocal_54))
		{
			unk_0x047BDE74F5ADA7D9(iLocal_53, unk_0xBF8499F46AD9093A(iLocal_54, 1), 3f, 20000, 1193033728, 1056964608);
			unk_0x2686393074E14730(iLocal_53, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

