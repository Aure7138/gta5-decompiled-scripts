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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	bool bLocal_74 = 0;
	int iLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 16;
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
	var uLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	struct<3> Local_250 = { 0, 0, 0 } ;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	char* sLocal_256 = NULL;
	char* sLocal_257 = NULL;
	char* sLocal_258 = NULL;
	char* sLocal_259 = NULL;
	char* sLocal_260 = NULL;
	bool bLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	char* sLocal_270 = NULL;
	char* sLocal_271 = NULL;
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	char* sLocal_274 = NULL;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	struct<3> Local_279 = { 0, 0, 0 } ;
	struct<3> Local_282 = { 0, 0, 0 } ;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	bool bLocal_288 = 0;
	bool bLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = 0;
	struct<3> Local_295 = { 0, 0, 0 } ;
	bool bLocal_298 = 0;
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_244 = 8000;
	iLocal_247 = 8;
	iLocal_249 = 1;
	sLocal_257 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_258 = "RANDOM@ARRESTS";
	sLocal_259 = "RANDOM@ARRESTS@BUSTED";
	iLocal_263 = 1;
	Local_65 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xBCA819F9975BEDFA(11))
	{
		bLocal_76 = true;
		func_196();
		func_164();
	}
	if (unk_0x2A488C176D52CCA5(2411.32f, 4958.76f, 45.19f, Local_65) < 10f)
	{
		iLocal_53 = 1;
	}
	else
	{
		iLocal_53 = 2;
	}
	if (func_121(Local_65, 15, iLocal_53, 0, 0))
	{
		func_116(15);
	}
	else
	{
		unk_0x921053BAF754303D();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0x271C07D02388CBCB(unk_0xBE369BE1BC57A796());
		}
		switch (iLocal_48)
		{
			case 0:
				if ((unk_0x3291E05256869D44() && !func_115()) && !func_102())
				{
					if (func_99())
					{
						iLocal_48 = 1;
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
					unk_0x286691C5D34EF4EC(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 0, 1, 1);
					unk_0x000E46314C3A507F(0f);
					func_84(1);
					iLocal_48 = 2;
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
	
	unk_0xEB79FECD9022AAF0(&uVar0, 3);
	unk_0xEB79FECD9022AAF0(&uVar0, 4);
	iVar5 = 0;
	func_82();
	if (!unk_0xCA41A00932714525(iLocal_55))
	{
		unk_0x0E21DA99F698AF06(iLocal_55, 129, 1);
	}
	if (func_81(iLocal_55))
	{
		if (unk_0xB965476E8F962C70(iLocal_55, 0))
		{
			bLocal_298 = true;
		}
	}
	if (!unk_0xCA41A00932714525(iLocal_54) && (iLocal_49 != 2 && iLocal_49 != 1))
	{
		if (!unk_0xCA41A00932714525(iLocal_55))
		{
			switch (iLocal_52)
			{
				case 0:
					unk_0xCE92FE50F370E679("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (unk_0x83666F9FB8FEBD4B() > 10)
					{
						if (!bLocal_74)
						{
							if (unk_0x1F8F07D86DA1A701(iLocal_54, 1227113341) == 7)
							{
								unk_0x834EF3BF2E6A8D29(iLocal_54, iLocal_55, -1, 1f, 3f, 1073741824, 0);
							}
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 4000)
					{
						if (!bLocal_74)
						{
							if (unk_0x1F8F07D86DA1A701(iLocal_55, 1805844857) == 7)
							{
								if (unk_0x1F8F07D86DA1A701(iLocal_55, -2017877118) == 1)
								{
									unk_0xF975837A072E320C(iLocal_55, 2, 1);
								}
								unk_0xCA58071CE9CCE891(iLocal_55, iLocal_54, 150f, -1, 0, 0);
							}
						}
					}
					fVar4 = unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(iLocal_54, 1), unk_0x57240623C1BC6E88(iLocal_55, 1), 1);
					if (unk_0x83666F9FB8FEBD4B() > 8000 || fVar4 < 1.5f)
					{
						iVar5 = func_77();
						if (iVar5 == 1)
						{
							unk_0x834EF3BF2E6A8D29(iLocal_54, iLocal_55, -1, 1f, 0.01f, 1073741824, 0);
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 30000 && fVar4 < 10f)
					{
						iVar5 = 1;
					}
					if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						if (iVar5 || iLocal_278 == 1)
						{
							if (!func_76())
							{
								if (func_66(&uLocal_78, "REARRAU", "REARR_PCUFF", 4, iLocal_254, 0, 0))
								{
								}
								bLocal_294 = (unk_0x7F4AE93855973529(iLocal_55) || unk_0x7276DD47CA44085D(iLocal_55));
								if (!unk_0x509A3191A6C4EB38(iLocal_54, joaat("weapon_pistol"), 0))
								{
									unk_0xC1B7B5C6FDC0755B(iLocal_54, joaat("weapon_pistol"), -1, 0, 1);
								}
								unk_0x0B25AB3A7FA0683C(iLocal_54, joaat("weapon_pistol"), 1);
								Local_68 = { unk_0x57240623C1BC6E88(iLocal_55, 1) };
								unk_0x15848523A8959DBC(iLocal_54);
								unk_0x86DD54980FE55567(&uLocal_73);
								if (!bLocal_294 && fVar4 > 2f)
								{
									unk_0x2B70C536A23BC2E6(0, Local_68.f_0, Local_68.f_1, (Local_68.f_2 + 4f), 1000, 1566631136);
								}
								unk_0x4718A774D9248520(0, iLocal_55, -1, 2048, 2);
								unk_0xE44B3F42EB747B10(0, iLocal_55, iLocal_55, 1f, 0, 3f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
								unk_0xC62C6BBB860531B7(0, iLocal_55, 5000, 0);
								unk_0x007AE2AA9E15FA7B(uLocal_73);
								unk_0x00E85C3B3BD34B10(iLocal_54, uLocal_73);
								unk_0x08377FB2AE4C6899(&uLocal_73);
								unk_0xCF458DC2F9000261(iLocal_54);
								unk_0x650BB0E111420EAF(iLocal_54, 1);
								unk_0xC1B1E9A034A63A62(0);
								iLocal_246 = unk_0x94E3E074F38DF86C();
								if (bLocal_294)
								{
									unk_0x15848523A8959DBC(iLocal_55);
									unk_0xE123B8AA81BD49CF(iLocal_55);
									iLocal_52 = 4;
								}
								else
								{
									iLocal_52 = 2;
								}
							}
							else if (!iLocal_278)
							{
								unk_0x834EF3BF2E6A8D29(iLocal_54, iLocal_55, -1, 1f, 0.01f, 1073741824, 0);
								iLocal_278 = 1;
							}
						}
						else
						{
							func_65();
						}
					}
					else
					{
						unk_0xCE92FE50F370E679("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						if (!unk_0xCA41A00932714525(iLocal_54) && !unk_0xA929B2923D14E2F8(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 0))
						{
							if (unk_0xB42101338C533CB4(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), iLocal_54))
							{
								unk_0x15848523A8959DBC(iLocal_54);
								iLocal_52 = 1;
								unk_0x3C1C089273A382C6(iLocal_54, 500);
							}
						}
					}
					break;
				
				case 1:
					if (unk_0x1F8F07D86DA1A701(iLocal_54, -982327190) == 7)
					{
						unk_0x834EF3BF2E6A8D29(iLocal_54, iLocal_55, -1, 1f, 3f, 1073741824, 0);
						iLocal_52 = 0;
					}
					break;
				
				case 2:
					if ((unk_0x94E3E074F38DF86C() - iLocal_246) > 1000)
					{
						Var1 = { 0f, 0f, (unk_0x638527C9799F2AE4(iLocal_55) * 3f) };
						unk_0x084522380FECC554(iLocal_55, Var1, 2f, -1, 1f, 1024, 1193033728);
						iLocal_52 = 3;
					}
					break;
				
				case 3:
					if ((unk_0x94E3E074F38DF86C() - iLocal_246) > 4500)
					{
						iLocal_52 = 4;
					}
					break;
				
				case 4:
					bLocal_74 = true;
					unk_0x86DD54980FE55567(&uLocal_73);
					unk_0xEB1EFACA68933402(0, sLocal_258, "idle_2_hands_up", 2f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xEB1EFACA68933402(0, sLocal_258, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x007AE2AA9E15FA7B(uLocal_73);
					unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_73);
					unk_0x08377FB2AE4C6899(&uLocal_73);
					unk_0xCF458DC2F9000261(iLocal_55);
					unk_0x650BB0E111420EAF(iLocal_55, 1);
					unk_0x39DF32F630CC12A7(iLocal_55, 1);
					iLocal_52 = 5;
					break;
				
				case 5:
					if (iLocal_50 == 3)
					{
						if (unk_0x1F8F07D86DA1A701(iLocal_54, 242628503) == 7)
						{
							unk_0x15848523A8959DBC(iLocal_54);
							if (!unk_0x509A3191A6C4EB38(iLocal_54, joaat("weapon_pistol"), 0))
							{
								unk_0xC1B7B5C6FDC0755B(iLocal_54, joaat("weapon_pistol"), -1, 0, 1);
							}
							unk_0x0B25AB3A7FA0683C(iLocal_54, joaat("weapon_pistol"), 1);
							unk_0x86DD54980FE55567(&uLocal_73);
							unk_0xC62C6BBB860531B7(0, iLocal_55, -1, 0);
							unk_0x007AE2AA9E15FA7B(uLocal_73);
							unk_0x00E85C3B3BD34B10(iLocal_54, uLocal_73);
							unk_0x08377FB2AE4C6899(&uLocal_73);
							unk_0x650BB0E111420EAF(iLocal_54, 1);
							iLocal_52 = 6;
						}
					}
					break;
				
				case 6:
					if (unk_0x45CD66F0A131E554(iLocal_57, 0) && !unk_0xCA41A00932714525(iLocal_56))
					{
						unk_0xE644D27D9C1E3010(iLocal_57, 1);
						if (unk_0x1F8F07D86DA1A701(iLocal_54, -2017877118) == 7)
						{
							if (unk_0x1F8F07D86DA1A701(iLocal_56, -1273030092) == 7)
							{
								if (unk_0x1626793F639090A0(iLocal_55, iLocal_57, 2, 0, 0))
								{
									if (!unk_0xCA41A00932714525(iLocal_55))
									{
										if (!unk_0x7B816C72877502C5(iLocal_55, iLocal_57))
										{
											if (!unk_0x018477A7947BC4B4(iLocal_55, 0))
											{
												if (unk_0x1F8F07D86DA1A701(iLocal_55, -1794415470) == 7)
												{
													unk_0x86DD54980FE55567(&uLocal_73);
													unk_0xEB1EFACA68933402(0, sLocal_258, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0, 0, 0, 0);
													unk_0x007AE2AA9E15FA7B(uLocal_73);
													unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_73);
													unk_0x08377FB2AE4C6899(&uLocal_73);
													unk_0xDE574EA7A7A2CAF8(0, iLocal_72, iLocal_71);
													unk_0xDE574EA7A7A2CAF8(0, iLocal_71, iLocal_72);
												}
											}
										}
									}
									if (!unk_0xCA41A00932714525(iLocal_54))
									{
										unk_0xAE44D026D0912190(iLocal_54);
										if (!unk_0x018477A7947BC4B4(iLocal_54, 0))
										{
											if (unk_0x45CD66F0A131E554(iLocal_57, 0))
											{
												if (!func_76())
												{
													if (func_66(&uLocal_78, "REARRAU", "REARR_INCAR", 4, iLocal_254, 0, 0))
													{
														if (func_64(iLocal_54, iLocal_57) == 2)
														{
															if (unk_0xCAA82A181F15BFF5(iLocal_56, iLocal_55, 180f))
															{
																Local_295 = { 2.978f, -0.75f, 1f };
															}
															else
															{
																Local_295 = { 2.978f, 0.75f, 1f };
															}
														}
														else if (unk_0xCAA82A181F15BFF5(iLocal_56, iLocal_55, 180f))
														{
															Local_295 = { -2.978f, -0.75f, 1f };
														}
														else
														{
															Local_295 = { -2.978f, 0.75f, 1f };
														}
														unk_0x86DD54980FE55567(&uLocal_73);
														unk_0x08F7FC9AC1C10CCE(0, unk_0x854ED33E6D715648(iLocal_57, Local_295), iLocal_55, 0.75f, 0, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 60000);
														unk_0xC62C6BBB860531B7(0, iLocal_55, -1, 0);
														unk_0x007AE2AA9E15FA7B(uLocal_73);
														unk_0x00E85C3B3BD34B10(iLocal_54, uLocal_73);
														unk_0x08377FB2AE4C6899(&uLocal_73);
														unk_0x650BB0E111420EAF(iLocal_54, 1);
														unk_0x71FF26FDD46DECD5(iLocal_57, 0);
														iLocal_244 = 8000;
														unk_0x5AE11BC36633DE4E(0);
														iLocal_277 = unk_0x94E3E074F38DF86C();
														iLocal_52 = 7;
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
					if (!unk_0xCA41A00932714525(iLocal_54))
					{
						if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_54, 35f, 35f, 35f, 0, 1, 0))
						{
							if ((unk_0x94E3E074F38DF86C() - iLocal_277) > 8000)
							{
								if (!func_76())
								{
									unk_0x4718A774D9248520(iLocal_54, unk_0x17B5CC8A8615737D(), 6000, 2048, 2);
									func_66(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
									iLocal_244 = 8000;
									iLocal_277 = unk_0x94E3E074F38DF86C();
								}
							}
						}
						if (unk_0x45CD66F0A131E554(iLocal_57, 0))
						{
							if (iLocal_64)
							{
								if (func_64(iLocal_54, iLocal_57) == 2)
								{
									unk_0x3AD5401AC8DD9226(iLocal_55, iLocal_57, -1, 2, 1f, 1, 0);
								}
								else
								{
									unk_0x3AD5401AC8DD9226(iLocal_55, iLocal_57, -1, 1, 1f, 1, 0);
								}
								iLocal_52 = 8;
							}
							else if (iLocal_63)
							{
								fVar6 = unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(iLocal_55, 1), unk_0x57240623C1BC6E88(iLocal_57, 1), 1);
								if (fVar6 < 4f && iLocal_285 == 0)
								{
									unk_0x58C48177956BB59A(iLocal_55, iLocal_57, 60000, 0.5f, Local_295.f_0, Local_295.f_1, 1f, 1);
									iLocal_285 = 1;
								}
								else if (fVar6 < 3f)
								{
									unk_0x15848523A8959DBC(iLocal_55);
									iLocal_64 = 1;
								}
							}
							else if (!unk_0x5132972D2BBC5A62(iLocal_55, sLocal_258, "kneeling_arrest_get_up", 3))
							{
								if (func_64(iLocal_54, iLocal_57) == 2)
								{
									Local_295 = { 1.578f, -0.5f, 1f };
								}
								else
								{
									Local_295 = { -1.578f, -0.5f, 1f };
								}
								unk_0x58C48177956BB59A(iLocal_55, iLocal_57, 60000, 0.5f, Local_295.f_0, Local_295.f_1, 1f, 1);
								if (bLocal_298)
								{
									unk_0x64A85DB6D037D644(iLocal_55, "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
								}
								else
								{
									unk_0x64A85DB6D037D644(iLocal_55, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
								}
								iLocal_63 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0x45CD66F0A131E554(iLocal_57, 0))
					{
						if (!unk_0xCA41A00932714525(iLocal_56))
						{
							if (unk_0x7B816C72877502C5(iLocal_55, iLocal_57))
							{
								if (unk_0xA3794949321E107C(uLocal_58))
								{
									unk_0x020DF7300725ECAB(&uLocal_58);
								}
								if (unk_0xA3794949321E107C(uLocal_59))
								{
									unk_0x020DF7300725ECAB(&uLocal_59);
								}
								if (unk_0x7B816C72877502C5(iLocal_54, iLocal_57))
								{
									unk_0x9178B6CFE95D27C6(iLocal_56, iLocal_57, 10f, 786603);
									unk_0x650BB0E111420EAF(iLocal_56, 1);
									unk_0xCC61640A821F277C(iLocal_54, 0);
									func_164();
								}
								else if (unk_0x1F8F07D86DA1A701(iLocal_54, -1794415470) == 7)
								{
									unk_0x15848523A8959DBC(iLocal_54);
									unk_0x3AD5401AC8DD9226(iLocal_54, iLocal_57, 20000, 0, 1f, 1, 0);
									unk_0x650BB0E111420EAF(iLocal_54, 1);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_49();
	if (unk_0xCA41A00932714525(iLocal_55))
	{
	}
	if (unk_0xCA41A00932714525(iLocal_54))
	{
		if (!unk_0xCA41A00932714525(iLocal_55))
		{
			if (iLocal_49 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_49 == 1 || iLocal_49 == 3)
				{
					if (!func_76())
					{
						if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(iLocal_55, 1), unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 1) < 20f)
						{
							func_66(&uLocal_78, "REARRAU", sLocal_274, 4, iLocal_254, 0, 0);
						}
					}
				}
				if (unk_0x5132972D2BBC5A62(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
				{
					unk_0x86DD54980FE55567(&uLocal_73);
					unk_0xEB1EFACA68933402(0, sLocal_258, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 150f, -1, 0, 0);
					unk_0x007AE2AA9E15FA7B(uLocal_73);
					unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_73);
					unk_0x08377FB2AE4C6899(&uLocal_73);
				}
				else
				{
					unk_0xCA58071CE9CCE891(iLocal_55, unk_0x17B5CC8A8615737D(), 150f, -1, 0, 0);
					unk_0x650BB0E111420EAF(iLocal_55, 1);
				}
				unk_0x4EDE34FBADD967A6(0);
				if (iLocal_49 == 0)
				{
					iLocal_49 = 2;
				}
				func_164();
			}
		}
	}
	if (unk_0xCA41A00932714525(iLocal_55))
	{
		if (!bLocal_61)
		{
			if (func_11())
			{
				func_3(0);
			}
		}
	}
	if (iLocal_52 == 5 || iLocal_52 == 6)
	{
		if (!bLocal_61)
		{
			if (iLocal_49 == 3)
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
	if (unk_0x94E3E074F38DF86C() > iLocal_255 + 1000)
	{
		if (!unk_0xCA41A00932714525(iLocal_54))
		{
			if (!unk_0x4E84D2C9B54F79BA(iLocal_54, unk_0x17B5CC8A8615737D(), Var1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!unk_0xCA41A00932714525(iLocal_55))
		{
			if (!unk_0x4E84D2C9B54F79BA(iLocal_55, unk_0x17B5CC8A8615737D(), Var1, 0, 1, 0))
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
			iLocal_254 = 1;
		}
		else
		{
			iLocal_254 = 0;
		}
		iLocal_255 = unk_0x94E3E074F38DF86C();
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
	if (!unk_0xCA41A00932714525(iLocal_54))
	{
		switch (iLocal_50)
		{
			case 0:
				if ((iLocal_243 == 3 || iLocal_52 == 5) || iLocal_52 == 6)
				{
					if (!func_76())
					{
						unk_0x15848523A8959DBC(iLocal_54);
						unk_0x86DD54980FE55567(&uLocal_73);
						unk_0x0D322CDF37087C0E(0, unk_0x57240623C1BC6E88(iLocal_55, 0), 10000, 0, 2);
						unk_0xEB1EFACA68933402(0, sLocal_258, sVar0, 8f, -4f, -1, 0, 0, 0, 0, 0);
						unk_0xEB1EFACA68933402(0, sLocal_258, sVar1, 16f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x007AE2AA9E15FA7B(uLocal_73);
						unk_0x00E85C3B3BD34B10(iLocal_54, uLocal_73);
						unk_0x08377FB2AE4C6899(&uLocal_73);
						iLocal_50 = 1;
					}
				}
				break;
			
			case 1:
				if (unk_0x5132972D2BBC5A62(iLocal_54, sLocal_258, sVar1, 3))
				{
					if (!unk_0xCA41A00932714525(iLocal_55))
					{
						if (!func_76())
						{
							if (func_66(&uLocal_78, "REARRAU", "REARR_PRAD1", 4, iLocal_254, 0, 0))
							{
								iLocal_50 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!func_76())
						{
							if (func_66(&uLocal_78, "REARRAU", "REARR_PRAD2", 4, iLocal_254, 0, 0))
							{
								iLocal_50 = 2;
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
						if (unk_0x45CD66F0A131E554(iLocal_57, 0))
						{
							unk_0xF99AC88D37F62A7B(iLocal_57, 0);
							unk_0x71FF26FDD46DECD5(iLocal_57, 1);
						}
						unk_0x15848523A8959DBC(iLocal_54);
						unk_0x86DD54980FE55567(&uLocal_73);
						unk_0xEB1EFACA68933402(0, sLocal_258, sVar2, 8f, -1.5f, -1, 0, 0, 0, 0, 0);
						unk_0x007AE2AA9E15FA7B(uLocal_73);
						unk_0x00E85C3B3BD34B10(iLocal_54, uLocal_73);
						unk_0x08377FB2AE4C6899(&uLocal_73);
						unk_0xDEAF24B058321A05(iLocal_54, 0, 0);
						func_8();
						iLocal_50 = 3;
					}
				}
				break;
			
			case 3:
				if (!bLocal_74)
				{
					func_7();
				}
				if (unk_0x23E9113C762466ED(iLocal_55) || !unk_0xA929B2923D14E2F8(iLocal_55, 0))
				{
					if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), iLocal_55))
					{
						if (!func_76())
						{
							func_66(&uLocal_78, "REARRAU", "REARR_PWTF", 4, iLocal_254, 0, 0);
						}
					}
				}
				if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_54, 35f, 35f, 35f, 0, 1, 0))
				{
					unk_0x4367311EB9A8596E(iLocal_54, 1, unk_0x17B5CC8A8615737D(), 31086, 0f, 0f, 0f, 0, -1, -1);
					unk_0x4367311EB9A8596E(unk_0x17B5CC8A8615737D(), 1, iLocal_54, 31086, 0f, 0f, 0f, 0, -1, -1);
					if (unk_0xC9D9444186B5A374() > iLocal_244 || iLocal_262)
					{
						if (iLocal_49 == 3 || iLocal_49 == 0)
						{
							if (!unk_0xCA41A00932714525(iLocal_55))
							{
								if (iLocal_244 == 8000 || iLocal_262)
								{
									if (bLocal_261)
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
									unk_0x4718A774D9248520(iLocal_54, unk_0x17B5CC8A8615737D(), 500, 2048, 2);
									func_66(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
									iLocal_244 = 8000;
								}
							}
							else if (iLocal_244 == 8000)
							{
								if (!func_76())
								{
									func_66(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
									iLocal_244 = 20000;
								}
							}
							else if (!func_76())
							{
								func_66(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
								iLocal_244 = 8000;
							}
							unk_0x5AE11BC36633DE4E(0);
						}
						else
						{
							if (unk_0xCA41A00932714525(iLocal_55))
							{
								if (!func_76())
								{
									func_66(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
									iLocal_244 = 30000;
								}
							}
							else if (!func_76())
							{
								unk_0x4718A774D9248520(iLocal_54, unk_0x17B5CC8A8615737D(), 6000, 2048, 2);
								func_66(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
								iLocal_244 = unk_0x0E29C61F26D96FDB(8, 22);
								iLocal_244 *= 30000;
							}
							unk_0x5AE11BC36633DE4E(0);
						}
					}
				}
				if (iLocal_52 != 8)
				{
					if (unk_0x45CD66F0A131E554(iLocal_57, 0))
					{
						if (!unk_0xCA41A00932714525(iLocal_55))
						{
							if (!unk_0x2315BB1606BC3DC3(iLocal_55, iLocal_57, 0))
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
	if (!iLocal_262)
	{
		switch (unk_0x0E29C61F26D96FDB(0, 3))
		{
			case 0:
				sLocal_260 = "idle_a";
				break;
			
			case 1:
				sLocal_260 = "idle_b";
				break;
			
			case 2:
				sLocal_260 = "idle_c";
				break;
		}
		unk_0x86DD54980FE55567(&uLocal_73);
		unk_0xEB1EFACA68933402(0, sLocal_259, "enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xEB1EFACA68933402(0, sLocal_259, sLocal_260, 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xEB1EFACA68933402(0, sLocal_259, "exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xEB1EFACA68933402(0, sLocal_258, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x007AE2AA9E15FA7B(uLocal_73);
		unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_73);
		unk_0x08377FB2AE4C6899(&uLocal_73);
		iLocal_262 = 1;
	}
	else if (unk_0x5132972D2BBC5A62(iLocal_55, sLocal_259, "enter", 3))
	{
		if (func_5())
		{
			func_66(&uLocal_78, "REARRAU", "REARR_PRAND", 4, iLocal_254, 0, 0);
		}
	}
	else if (unk_0x5132972D2BBC5A62(iLocal_55, sLocal_259, "exit", 3))
	{
	}
	else if (unk_0x5132972D2BBC5A62(iLocal_55, sLocal_259, sLocal_260, 3))
	{
		func_66(&uLocal_78, "REARRAU", sLocal_272, 4, iLocal_254, 0, 0);
	}
	else
	{
		func_8();
	}
}

int func_5()
{
	if (unk_0x94E3E074F38DF86C() > iLocal_264 + 6000)
	{
		iLocal_264 = unk_0x94E3E074F38DF86C();
		return 1;
	}
	return 0;
}

void func_6()
{
	if (!iLocal_262)
	{
		unk_0x86DD54980FE55567(&uLocal_73);
		unk_0xEB1EFACA68933402(0, sLocal_258, "radio_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xEB1EFACA68933402(0, sLocal_258, "radio_chatter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xEB1EFACA68933402(0, sLocal_258, "radio_exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		unk_0xC62C6BBB860531B7(0, iLocal_55, -1, 0);
		unk_0x007AE2AA9E15FA7B(uLocal_73);
		unk_0x00E85C3B3BD34B10(iLocal_54, uLocal_73);
		unk_0x08377FB2AE4C6899(&uLocal_73);
		iLocal_262 = 1;
	}
	else if (unk_0x5132972D2BBC5A62(iLocal_54, sLocal_258, "radio_chatter", 3))
	{
		if (func_5())
		{
			func_66(&uLocal_78, "REARRAU", "REARR_PRAD3", 4, iLocal_254, 0, 0);
		}
	}
	else if (unk_0x5132972D2BBC5A62(iLocal_54, sLocal_258, "radio_exit", 3))
	{
		iLocal_263 = 0;
		func_8();
	}
}

void func_7()
{
	switch (iLocal_51)
	{
		case 0:
			if (!bLocal_74)
			{
				if (iLocal_49 == 3)
				{
					iLocal_51 = 1;
				}
				else if (iLocal_49 == 0)
				{
					iLocal_51 = 1;
				}
				unk_0xA929B2923D14E2F8(iLocal_54, 0);
				unk_0xA929B2923D14E2F8(iLocal_55, 0);
				if (unk_0x23E9113C762466ED(iLocal_54) && unk_0x23E9113C762466ED(iLocal_55))
				{
					unk_0x58C48177956BB59A(iLocal_54, iLocal_55, -1, 3f, 0f, 0f, 1f, 0);
				}
				unk_0x5AE11BC36633DE4E(0);
			}
			break;
		
		case 1:
			if (unk_0xA3794949321E107C(uLocal_58))
			{
				unk_0x020DF7300725ECAB(&uLocal_58);
			}
			iLocal_51 = 2;
			iLocal_244 = 8000;
			iLocal_291 = unk_0x94E3E074F38DF86C();
			break;
		
		case 2:
			if (unk_0x45CD66F0A131E554(iLocal_57, 0))
			{
				if ((unk_0x94E3E074F38DF86C() - iLocal_291) > 20000)
				{
					if (!unk_0xCA41A00932714525(iLocal_56))
					{
						if (unk_0x1F8F07D86DA1A701(iLocal_56, -1273030092) == 7)
						{
							unk_0x3AD5401AC8DD9226(iLocal_54, iLocal_57, -1, 0, 1f, 1, 0);
							iLocal_51 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x45CD66F0A131E554(iLocal_57, 0))
			{
				if (!unk_0xCA41A00932714525(iLocal_56))
				{
					if (unk_0x7B816C72877502C5(iLocal_54, iLocal_57))
					{
						unk_0x9178B6CFE95D27C6(iLocal_56, iLocal_57, 10f, 786603);
						unk_0x650BB0E111420EAF(iLocal_56, 1);
						func_164();
					}
				}
			}
			break;
	}
}

void func_8()
{
	bLocal_261 = func_9();
	bLocal_261 = iLocal_263;
	iLocal_244 = 20000;
	iLocal_262 = 0;
}

int func_9()
{
	if (unk_0x48B8265059381CD0(unk_0x0E29C61F26D96FDB(0, 65535), 0))
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
	if (unk_0x45CD66F0A131E554(iLocal_57, 0))
	{
		return 1;
	}
	unk_0xE1324F59713746FA(iVar12);
	if (unk_0x9F746898F7881612(iVar12))
	{
		if (unk_0x50FED0D38D06E0E6(unk_0x57240623C1BC6E88(iLocal_54, 0), 1, &Var0, 1, 1077936128, 0))
		{
			if (unk_0xDA47289BC25292A5(&Var0, &Var6, &uVar9, 0f, 180f, 50f, 1, 1, 1))
			{
				iLocal_57 = unk_0x692A2891A2BA7352(iVar12, Var6, 0, 1, 1);
				iLocal_56 = unk_0x3FBC0964EB7878AF(iLocal_57, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				unk_0x6018E338F7ABCE75(iLocal_56, 294, 1);
				if (!unk_0x509A3191A6C4EB38(iLocal_56, joaat("weapon_pistol"), 0))
				{
					unk_0xC1B7B5C6FDC0755B(iLocal_56, joaat("weapon_pistol"), -1, 0, 1);
				}
				unk_0x0B25AB3A7FA0683C(iLocal_56, joaat("weapon_pistol"), 1);
				unk_0x3BB70315907D9456(iLocal_56, iLocal_71);
				unk_0xD602D152E57C823D(iLocal_57, 3);
				unk_0xCC61640A821F277C(iLocal_56, 1);
				unk_0x482AE8C0EAF5AE07(iLocal_57, 1084227584);
				unk_0xC9D9C89B7B1040E5(iLocal_57, 1);
				unk_0x3C87A0A1456D6253(iLocal_57, 1);
				Var0 = { unk_0x57240623C1BC6E88(iLocal_57, 1) };
				Var3 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) - Var0 };
				unk_0x0608D50823C6AA6D(iLocal_57, unk_0xC659BC2E3EDC150A(Var3.f_0, Var3.f_1));
				unk_0x50FED0D38D06E0E6(unk_0x57240623C1BC6E88(iLocal_54, 0), 1, &Var0, 1, 1077936128, 0);
				if (unk_0x3DC4639D5F23DEA2(Var0, 2528.563f, 2639.115f, 36.9446f, 1) < 75f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				if (unk_0x3DC4639D5F23DEA2(2538.71f, 2592.007f, 36.9446f, Var0, 1) < 16f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				unk_0x83315F81FAC58A20(iLocal_56, iLocal_57, Var0, 4, 7f, 786471, 5f, -1f, 1);
				unk_0xFAC43F40071FC184(iLocal_57, 4f);
				unk_0x71FF26FDD46DECD5(iLocal_57, 1);
				iLocal_77 = 1;
				unk_0x223C8480EA6EE20B(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_11()
{
	if (iLocal_49 != 3)
	{
		iLocal_243 = 3;
	}
	switch (iLocal_243)
	{
		case 0:
			if (unk_0x1F8F07D86DA1A701(iLocal_54, 242628503) == 7 || unk_0x94E3E074F38DF86C() > iLocal_246 + 15000)
			{
				if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_54, 25f, 25f, 25f, 0, 1, 0))
				{
					if (!unk_0xCA41A00932714525(iLocal_54))
					{
						unk_0x15848523A8959DBC(iLocal_54);
						unk_0x86DD54980FE55567(&uLocal_73);
						if (!unk_0xA929B2923D14E2F8(iLocal_55, 0))
						{
							unk_0x834EF3BF2E6A8D29(0, iLocal_55, -1, 3.5f, 2f, 1073741824, 0);
						}
						unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 2000);
						unk_0x007AE2AA9E15FA7B(uLocal_73);
						unk_0x00E85C3B3BD34B10(iLocal_54, uLocal_73);
						unk_0x08377FB2AE4C6899(&uLocal_73);
						iLocal_243 = 1;
					}
				}
				else
				{
					iLocal_243 = 3;
				}
			}
			break;
		
		case 1:
			if (unk_0x1F8F07D86DA1A701(iLocal_54, 242628503) == 1)
			{
				if (unk_0x408A2D0FD72AD367(iLocal_54) > 0)
				{
					if (!func_76())
					{
						if (iLocal_245 < 2)
						{
							func_66(&uLocal_78, "REARRAU", "REARR_PTHANK", 4, iLocal_254, 0, 0);
							if (unk_0xA3794949321E107C(uLocal_58))
							{
								unk_0xB8F5F7438C07CC5E(uLocal_58, 1);
							}
						}
						else
						{
							func_66(&uLocal_78, "REARRAU", "REARR_PHELP", 4, iLocal_254, 0, 0);
						}
						iLocal_243 = 2;
					}
				}
			}
			else if (!func_76())
			{
				if (iLocal_245 < 2)
				{
					func_66(&uLocal_78, "REARRAU", "REARR_PTHANK", 4, iLocal_254, 0, 0);
					if (unk_0xA3794949321E107C(uLocal_58))
					{
						unk_0xB8F5F7438C07CC5E(uLocal_58, 1);
					}
				}
				else
				{
					func_66(&uLocal_78, "REARRAU", "REARR_PHELP", 4, iLocal_254, 0, 0);
				}
				iLocal_243 = 2;
			}
			break;
		
		case 2:
			if (!func_76())
			{
				iLocal_243 = 3;
			}
			unk_0x6349785089ED32B4(iLocal_54, unk_0x17B5CC8A8615737D(), 100);
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
	
	bVar0 = unk_0xC017443DBE6DA4D6(iLocal_55, unk_0x17B5CC8A8615737D(), 1);
	bVar1 = func_48();
	if (bVar1)
	{
	}
	if (!unk_0xCA41A00932714525(iLocal_55))
	{
		if (!bVar0)
		{
			if (!bVar1)
			{
				if (iLocal_49 == 2 || bLocal_74 == 1)
				{
					switch (iLocal_247)
					{
						case 8:
							unk_0xCE92FE50F370E679("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							unk_0xB8F5F7438C07CC5E(uLocal_59, 1);
							if (!unk_0xA929B2923D14E2F8(iLocal_55, 0) && unk_0x5132972D2BBC5A62(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
							{
								unk_0x86DD54980FE55567(&uLocal_73);
								unk_0xEB1EFACA68933402(0, sLocal_258, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0, 0, 0, 0);
								unk_0x007AE2AA9E15FA7B(uLocal_73);
								unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_73);
								unk_0x08377FB2AE4C6899(&uLocal_73);
								iLocal_247 = 9;
							}
							else
							{
								iLocal_247 = 3;
							}
							break;
						
						case 9:
							unk_0xCE92FE50F370E679("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x1F8F07D86DA1A701(iLocal_55, 242628503) == 7)
							{
								iLocal_247 = 0;
							}
							break;
						
						case 0:
							unk_0xCE92FE50F370E679("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x4E84D2C9B54F79BA(iLocal_55, unk_0x17B5CC8A8615737D(), 75f, 75f, 75f, 0, 1, 0))
							{
								unk_0x22217EB6A9BAC6EE(iLocal_55, 1);
								iLocal_247 = 3;
							}
							break;
						
						case 1:
							unk_0xCE92FE50F370E679("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x1C34CE8087E3897C(iLocal_55, unk_0x57240623C1BC6E88(iLocal_54, 0), 4f, 4f, 3f, 0, 1, 0))
							{
								iLocal_247 = 2;
							}
							else
							{
								unk_0x15848523A8959DBC(iLocal_55);
								unk_0x86DD54980FE55567(&uLocal_73);
								unk_0x0D322CDF37087C0E(0, unk_0x57240623C1BC6E88(iLocal_54, 0), 1000, 0, 2);
								unk_0x084522380FECC554(0, unk_0x57240623C1BC6E88(iLocal_54, 0), 2f, -1, 3f, 0, 1193033728);
								unk_0x007AE2AA9E15FA7B(uLocal_73);
								unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_73);
								unk_0x08377FB2AE4C6899(&uLocal_73);
								iLocal_247 = 2;
							}
							break;
						
						case 2:
							unk_0xCE92FE50F370E679("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x1C34CE8087E3897C(iLocal_55, unk_0x57240623C1BC6E88(iLocal_54, 0), 4f, 4f, 3f, 0, 1, 0))
							{
								if (unk_0x1F8F07D86DA1A701(iLocal_55, 242628503) == 7 || func_66(&uLocal_78, "REARRAU", sLocal_271, 4, iLocal_254, 0, 0))
								{
									iLocal_247 = 6;
								}
							}
							else if (unk_0x1F8F07D86DA1A701(iLocal_55, 242628503) == 7)
							{
								unk_0x86DD54980FE55567(&uLocal_73);
								unk_0x0D322CDF37087C0E(0, unk_0x57240623C1BC6E88(iLocal_54, 0), 1000, 0, 2);
								unk_0x084522380FECC554(0, unk_0x57240623C1BC6E88(iLocal_54, 0), 2f, -1, 3f, 0, 1193033728);
								unk_0x007AE2AA9E15FA7B(uLocal_73);
								unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_73);
								unk_0x08377FB2AE4C6899(&uLocal_73);
							}
							break;
						
						case 3:
							unk_0xCE92FE50F370E679("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x4E84D2C9B54F79BA(iLocal_55, unk_0x17B5CC8A8615737D(), 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_247 = 4;
							}
							else if (unk_0x4E84D2C9B54F79BA(iLocal_55, unk_0x17B5CC8A8615737D(), 75f, 75f, 75f, 0, 1, 0))
							{
								if (!func_76())
								{
									unk_0x15848523A8959DBC(iLocal_55);
									unk_0x86DD54980FE55567(&uLocal_73);
									unk_0x834EF3BF2E6A8D29(0, unk_0x17B5CC8A8615737D(), -1, 8f, 2f, 1073741824, 0);
									unk_0x007AE2AA9E15FA7B(uLocal_73);
									unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_73);
									unk_0x08377FB2AE4C6899(&uLocal_73);
									iLocal_247 = 4;
								}
							}
							else
							{
								iLocal_247 = 6;
							}
							break;
						
						case 4:
							unk_0xCE92FE50F370E679("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x4E84D2C9B54F79BA(iLocal_55, unk_0x17B5CC8A8615737D(), 9f, 9f, 9f, 0, 1, 0))
							{
								iLocal_292 = unk_0x94E3E074F38DF86C();
								iLocal_247 = 7;
							}
							break;
						
						case 7:
							unk_0xCE92FE50F370E679("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!unk_0x1D0EB673E1AE9A25(iLocal_55, unk_0x17B5CC8A8615737D()))
							{
								unk_0x4718A774D9248520(iLocal_55, unk_0x17B5CC8A8615737D(), -1, 2064, 2);
							}
							if (!unk_0xCAA82A181F15BFF5(iLocal_55, unk_0x17B5CC8A8615737D(), 30f))
							{
								unk_0x6349785089ED32B4(iLocal_55, unk_0x17B5CC8A8615737D(), -1);
							}
							if ((unk_0x94E3E074F38DF86C() - iLocal_292) > 2000)
							{
								iLocal_247 = 5;
							}
							break;
						
						case 5:
							unk_0xCE92FE50F370E679("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x5132972D2BBC5A62(iLocal_55, sLocal_258, "Thanks_Male_05", 3) || unk_0x1F8F07D86DA1A701(iLocal_55, 242628503) == 7)
							{
								if (!func_76())
								{
									if (iLocal_245 < 2)
									{
										func_66(&uLocal_78, "REARRAU", sLocal_266, 4, iLocal_254, 0, 0);
										unk_0xEB1EFACA68933402(iLocal_55, sLocal_258, "Thanks_Male_05", 16f, -16f, -1, 16, 0, 0, 0, 0);
									}
									else
									{
										func_66(&uLocal_78, "REARRAU", sLocal_270, 4, iLocal_254, 0, 0);
									}
									func_15(func_43(), 1, 250, 0, 0);
									unk_0xEF9294ED57E4AC3D(iLocal_55);
									iLocal_247 = 6;
								}
							}
							break;
						
						case 6:
							unk_0xCE92FE50F370E679("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!func_76())
							{
								unk_0xCA58071CE9CCE891(iLocal_55, unk_0x17B5CC8A8615737D(), 150f, -1, 0, 0);
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
					func_66(&uLocal_78, "REARRAU", sLocal_273, 4, iLocal_254, 0, 0);
				}
				unk_0xCA58071CE9CCE891(iLocal_55, unk_0x17B5CC8A8615737D(), 150f, -1, 0, 0);
				func_164();
			}
		}
		else
		{
			func_13();
			unk_0xCA58071CE9CCE891(iLocal_55, unk_0x17B5CC8A8615737D(), 150f, -1, 0, 0);
			if (bVar0 == 1)
			{
				iLocal_49 = 1;
			}
			if (!func_76())
			{
				func_66(&uLocal_78, "REARRAU", sLocal_270, 4, iLocal_254, 0, 0);
			}
			func_164();
		}
	}
}

void func_13()
{
	Global_14611 = 0;
	func_14();
}

void func_14()
{
	if (unk_0x55C74612BE548D78())
	{
		unk_0x5FB0B609B3A49840();
		Global_16756 = 0;
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_16(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x7FE4F330D3D74809(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x731753D8494ABECD(iVar1, iVar0, 1);
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
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
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
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
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
					switch (unk_0xBDF22BDA553CBEE4())
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
	iVar5 = (Global_52996[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52996[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52996[iVar2] = 2147483647;
				}
				else
				{
					Global_52996[iVar2] = (Global_52996[iVar2] + iParam3);
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
				if ((Global_52996[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52996[iVar2];
			Global_52996[iVar2] = (Global_52996[iVar2] - iParam3);
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
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101700.f_19523.f_233[iVar2 /*69*/]++;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_1++;
		if (Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_35781 == 15)
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
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!bParam0)
		{
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52996[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x731753D8494ABECD(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x731753D8494ABECD(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x731753D8494ABECD(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_19(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x63C468D583002D23())
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x21E7933CCC7B3724(&(Global_101700.f_19523.f_471), iParam0);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0) || unk_0x48B8265059381CD0(Global_2097152[func_21() /*10758*/].f_7546.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x21E7933CCC7B3724(&(Global_101700.f_19523.f_471), iParam0);
		unk_0x21E7933CCC7B3724(&(Global_2097152[func_21() /*10758*/].f_7546.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xBD18006F0815A298("COUP_RED");
		unk_0x34D84D73B5DF8E80(func_20(iParam0));
		unk_0x6132B0FB7289E50A(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x63C468D583002D23())
	{
		return unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0);
	}
	return unk_0x48B8265059381CD0(Global_2097152[func_21() /*10758*/].f_7546.f_10, iParam0);
}

int func_24(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xF0EE2EF8EA972239(27))
	{
		return 0;
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x7FE4F330D3D74809(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x731753D8494ABECD(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0xF0EE2EF8EA972239(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702)
	{
		return 0;
	}
	if (func_36(&Global_2595550))
	{
		if (func_34(&Global_2595550, iParam0))
		{
			return 0;
		}
		if (func_27(&Global_2595550, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xDDAC6D364DFB4FD7(iParam0))
		{
			return 0;
		}
		if (unk_0xF0EE2EF8EA972239(iParam0))
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
	
	if (unk_0xF0EE2EF8EA972239(iParam1))
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
	
	if (unk_0xF0EE2EF8EA972239(iParam1))
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
	func_32(uParam0, (Global_2595549 - 0.5f));
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
	return Global_35781 == iParam0;
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
	iVar0 = unk_0x71AAA4D97165244D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1657EA7F5F15A59(iParam0, iParam1);
	}
	return 0;
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x7FE4F330D3D74809(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x731753D8494ABECD(iParam0, iVar0, 1);
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x63C468D583002D23())
	{
		return;
	}
	if (Global_51564[iParam0 /*7*/])
	{
		unk_0x7FE4F330D3D74809(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x731753D8494ABECD(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_42()
{
	int iVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		unk_0x7FE4F330D3D74809(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52996[0] == iVar0)
		{
			Global_52996[0] = iVar0;
		}
		unk_0x7FE4F330D3D74809(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52996[1] == iVar0)
		{
			Global_52996[1] = iVar0;
		}
		unk_0x7FE4F330D3D74809(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52996[2] == iVar0)
		{
			Global_52996[2] = iVar0;
		}
	}
}

int func_43()
{
	func_44();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_44()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_47(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_46(unk_0x17B5CC8A8615737D());
			if (func_45(iVar0) && (!func_38(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_45(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
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
	if (unk_0x45CD66F0A131E554(iLocal_57, 0))
	{
		if (unk_0x4E84D2C9B54F79BA(iLocal_57, iLocal_55, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			return 1;
		}
	}
	iVar1 = unk_0x2A205FF565510CFB(unk_0x57240623C1BC6E88(iLocal_55, 0), fVar0, fVar0, fVar0, -1);
	if (!unk_0xCA41A00932714525(iVar1))
	{
		if (unk_0x0324EEB10F81965F(iVar1) == joaat("s_f_y_cop_01") || unk_0x0324EEB10F81965F(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar1 = unk_0x2A205FF565510CFB(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), fVar0, fVar0, fVar0, -1);
	if (!unk_0xCA41A00932714525(iVar1))
	{
		if (unk_0x0324EEB10F81965F(iVar1) == joaat("s_f_y_cop_01") || unk_0x0324EEB10F81965F(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar2 = unk_0xFEDFCE97371B9236(unk_0x57240623C1BC6E88(iLocal_55, 0), fVar0, 0, 1024);
	if (unk_0x45CD66F0A131E554(iVar2, 0))
	{
		return 1;
	}
	iVar2 = unk_0xFEDFCE97371B9236(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), fVar0, 0, 1024);
	if (unk_0x45CD66F0A131E554(iVar2, 0))
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
	
	if (!unk_0xCA41A00932714525(iLocal_55))
	{
		bVar0 = unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), iLocal_55);
		uVar1 = unk_0xC017443DBE6DA4D6(iLocal_55, unk_0x17B5CC8A8615737D(), 1);
		if (((uVar1 || func_62()) || func_60()) || bVar0)
		{
			func_59();
			if (bLocal_74)
			{
				if (((bVar0 || uVar1) && !unk_0x7F4AE93855973529(iLocal_55)) && !unk_0xFD0FE723227D5AB6(iLocal_55, 0))
				{
					unk_0x15848523A8959DBC(iLocal_55);
					unk_0xE9062A1E9EC059E7(iLocal_55, 500, 2000, 0, 0, 0, 0);
					unk_0x4E61D536D3C86A36(iLocal_55, -1);
					unk_0x650BB0E111420EAF(iLocal_55, 1);
				}
				else if (!unk_0xFD0FE723227D5AB6(iLocal_55, 0) && !unk_0x7F4AE93855973529(iLocal_55))
				{
					unk_0x15848523A8959DBC(iLocal_55);
					unk_0x4E61D536D3C86A36(iLocal_55, -1);
					unk_0x650BB0E111420EAF(iLocal_55, 1);
				}
				func_55(0);
				if (!func_76())
				{
					if (!unk_0xCA41A00932714525(iLocal_54) && iLocal_286 == 0)
					{
						if (func_66(&uLocal_78, "REARRAU", "REARR_PWTF", 4, iLocal_254, 0, 0))
						{
							iLocal_286 = 1;
						}
					}
				}
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 3;
			}
		}
	}
	else
	{
		if (unk_0xA3794949321E107C(uLocal_59))
		{
			unk_0x020DF7300725ECAB(&uLocal_59);
			func_54(&uLocal_78, 2);
		}
		func_59();
		if (unk_0xC017443DBE6DA4D6(iLocal_55, unk_0x17B5CC8A8615737D(), 1))
		{
			if (bLocal_74)
			{
				func_55(1);
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 3;
			}
		}
	}
	if (!unk_0xCA41A00932714525(iLocal_54))
	{
		if (bLocal_61)
		{
			if (!unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
			{
				func_164();
			}
		}
		if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
		{
		}
		iVar2 = 0;
		if (unk_0x23E9113C762466ED(iLocal_56))
		{
			if (!unk_0xCA41A00932714525(iLocal_56))
			{
				if ((unk_0xC017443DBE6DA4D6(iLocal_56, unk_0x17B5CC8A8615737D(), 1) && unk_0xB5DF060B138CD2EA(iLocal_56) < 190) || (unk_0xC017443DBE6DA4D6(iLocal_56, unk_0x17B5CC8A8615737D(), 1) && unk_0x7F4AE93855973529(iLocal_56)))
				{
					iVar2 = 1;
				}
				if (unk_0x23E9113C762466ED(iLocal_57) && unk_0xC017443DBE6DA4D6(iLocal_57, unk_0x17B5CC8A8615737D(), 1))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((unk_0xC017443DBE6DA4D6(iLocal_54, unk_0x17B5CC8A8615737D(), 1) && unk_0xB5DF060B138CD2EA(iLocal_54) < 190) || func_53()) || unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0)) || func_52()) || (unk_0xC017443DBE6DA4D6(iLocal_54, unk_0x17B5CC8A8615737D(), 1) && unk_0x7F4AE93855973529(iLocal_54))) || iVar2 == 1)
		{
			func_55(1);
			if (iLocal_49 == 3 || iLocal_49 == 1)
			{
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 2;
			}
		}
	}
	else
	{
		if (unk_0xC017443DBE6DA4D6(iLocal_54, unk_0x17B5CC8A8615737D(), 1))
		{
			if (iLocal_287 == 0)
			{
				iLocal_287 = 1;
				iLocal_290 = unk_0x94E3E074F38DF86C();
			}
			if (iLocal_49 == 3 || iLocal_49 == 1)
			{
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 2;
			}
		}
		if (!unk_0xCA41A00932714525(iLocal_55))
		{
			unk_0xCF458DC2F9000261(iLocal_55);
		}
		if (unk_0xA3794949321E107C(uLocal_58))
		{
			unk_0x020DF7300725ECAB(&uLocal_58);
			func_54(&uLocal_78, 1);
		}
	}
	if (iLocal_287)
	{
		if ((unk_0x94E3E074F38DF86C() - iLocal_290) > 5000)
		{
			unk_0x2B46008B9EA5E05B(unk_0xBE369BE1BC57A796(), 3, 0);
			unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
			iLocal_287 = 0;
		}
	}
	if (!unk_0xCA41A00932714525(iLocal_54) && !unk_0xCA41A00932714525(iLocal_55))
	{
		if (unk_0xC017443DBE6DA4D6(iLocal_54, unk_0x17B5CC8A8615737D(), 1) && unk_0xC017443DBE6DA4D6(iLocal_55, unk_0x17B5CC8A8615737D(), 1))
		{
			if (unk_0xB5DF060B138CD2EA(iLocal_54) < 190 && unk_0xB5DF060B138CD2EA(iLocal_55) < 190)
			{
				func_59();
				func_55(1);
				iLocal_49 = 1;
			}
		}
		if (!unk_0x4E84D2C9B54F79BA(iLocal_55, iLocal_54, 110f, 110f, 40f, 0, 1, 0))
		{
			if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_54, 20f, 20f, 20f, 0, 1, 0))
			{
				func_50();
				unk_0x4EDE34FBADD967A6(0);
				func_66(&uLocal_78, "REARRAU", "REARR_PORUN", 4, iLocal_254, 0, 0);
			}
			else if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_55, 40f, 40f, 40f, 0, 1, 0))
			{
				func_50();
				unk_0x4EDE34FBADD967A6(0);
				func_66(&uLocal_78, "REARRAU", sLocal_267, 4, iLocal_254, 0, 0);
			}
			func_164();
		}
	}
	if (unk_0xCA41A00932714525(iLocal_54) && unk_0xCA41A00932714525(iLocal_55))
	{
		func_164();
	}
	if (unk_0xCA41A00932714525(iLocal_55))
	{
		if (!unk_0xCA41A00932714525(iLocal_54))
		{
			if (!unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_54, 100f, 100f, 40f, 0, 1, 0))
			{
				func_164();
			}
		}
	}
}

void func_50()
{
	Global_14611 = 0;
	func_51();
}

void func_51()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

bool func_52()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0x0324EEB10F81965F(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)) == joaat("bulldozer"))
		{
			if (!unk_0xCA41A00932714525(iLocal_54))
			{
				if (unk_0xB42101338C533CB4(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), iLocal_54))
				{
					bVar0 = true;
				}
			}
		}
		if (unk_0x45CD66F0A131E554(iLocal_57, 0))
		{
			if (unk_0xB42101338C533CB4(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), iLocal_57))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_77)
		{
			if (unk_0xC017443DBE6DA4D6(iLocal_57, unk_0x17B5CC8A8615737D(), 1))
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
	if (unk_0x579A94EB2BF9398F(unk_0x425DAA25CBB7EDE2(iLocal_54, 31086, 0f, 0f, 0f), 0.5f, 1))
	{
		if (unk_0xCA41A00932714525(iLocal_55))
		{
			return 1;
		}
		else if (!unk_0x579A94EB2BF9398F(unk_0x425DAA25CBB7EDE2(iLocal_55, 31086, 0f, 0f, 0f), 2f, 1))
		{
			return 1;
		}
	}
	if (unk_0x4952E54B6157C12A(unk_0x425DAA25CBB7EDE2(iLocal_54, 31086, 0f, 0f, 0f), 3f))
	{
		return 1;
	}
	if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_54, 5f, 5f, 5f, 0, 1, 0))
	{
		if (!unk_0xCA41A00932714525(iLocal_54))
		{
			if (unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), iLocal_54) || unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), iLocal_54))
			{
				if (unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar6, 1))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						return 1;
					}
				}
			}
		}
		if (!unk_0xCA41A00932714525(iLocal_55))
		{
			if (unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), iLocal_55) || unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), iLocal_55))
			{
				if (unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar6, 1))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						if (bLocal_74)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	Var0 = { Var0 + unk_0x425DAA25CBB7EDE2(iLocal_54, 31086, 0f, 0f, 0f) };
	Var3 = { Var3 + unk_0x425DAA25CBB7EDE2(iLocal_54, 31086, 0f, 0f, 0f) };
	if (((unk_0xD4FBF9E4226D9A5A(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0xD4FBF9E4226D9A5A(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0xD4FBF9E4226D9A5A(Var3, Var0, joaat("weapon_stickybomb"), 1)) || unk_0xD4FBF9E4226D9A5A(Var3, Var0, joaat("vehicle_weapon_tank"), 1))
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
	if (!unk_0xCA41A00932714525(iLocal_54))
	{
		unk_0xCF458DC2F9000261(iLocal_54);
		if (!bLocal_61)
		{
			unk_0x2B46008B9EA5E05B(unk_0xBE369BE1BC57A796(), 2, 0);
			unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
			unk_0x6F65279C9BC14EDB(iLocal_54, 1);
			if (unk_0xA3794949321E107C(uLocal_58))
			{
				unk_0xB8F5F7438C07CC5E(uLocal_58, 0);
			}
			if (iParam0 == 1)
			{
				if (!unk_0xCA41A00932714525(iLocal_55))
				{
					if (unk_0x1F8F07D86DA1A701(iLocal_55, 1805844857) == 7)
					{
						if (unk_0x5132972D2BBC5A62(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
						{
							unk_0x86DD54980FE55567(&uLocal_73);
							unk_0xEB1EFACA68933402(0, sLocal_258, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							unk_0xCA58071CE9CCE891(0, iLocal_54, 150f, -1, 0, 0);
							unk_0x007AE2AA9E15FA7B(uLocal_73);
							unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_73);
							unk_0x08377FB2AE4C6899(&uLocal_73);
							unk_0x44B1CF13D39D96CE(iLocal_55, joaat("MotionState_Run"), 0, 0, 0);
							unk_0x650BB0E111420EAF(iLocal_55, 1);
						}
						else
						{
							unk_0x15848523A8959DBC(iLocal_55);
							unk_0xCA58071CE9CCE891(iLocal_55, iLocal_54, 150f, -1, 0, 0);
						}
					}
				}
				if ((!unk_0xA929B2923D14E2F8(iLocal_55, 0) && !unk_0xCA41A00932714525(iLocal_55)) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
				{
					if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(iLocal_55, 1), unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 1) < 20f)
					{
						if (!func_76())
						{
							func_66(&uLocal_78, "REARRAU", sLocal_273, 4, iLocal_254, 0, 0);
						}
					}
				}
			}
			unk_0x15848523A8959DBC(iLocal_54);
			unk_0x86DD54980FE55567(&uLocal_73);
			unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), -1, 2048, 2);
			unk_0x7DD7196E1A0C1D43(0, unk_0x17B5CC8A8615737D(), 0, 16);
			unk_0x007AE2AA9E15FA7B(uLocal_73);
			unk_0x00E85C3B3BD34B10(iLocal_54, uLocal_73);
			unk_0x08377FB2AE4C6899(&uLocal_73);
			unk_0x650BB0E111420EAF(iLocal_54, 1);
			unk_0x7771211498B88EA3(iLocal_54, 1, 0);
			if (unk_0x45CD66F0A131E554(iLocal_57, 0))
			{
				unk_0xD602D152E57C823D(iLocal_57, 1);
			}
			func_57();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0xCA41A00932714525(iLocal_54))
			{
				if (!unk_0x7F4AE93855973529(iLocal_54))
				{
				}
			}
			if (unk_0x23E9113C762466ED(iLocal_56))
			{
				func_56();
			}
			bLocal_61 = true;
		}
	}
}

void func_56()
{
	if (unk_0x23E9113C762466ED(iLocal_56))
	{
		if (!unk_0xCA41A00932714525(iLocal_56))
		{
			unk_0x86DD54980FE55567(&uLocal_73);
			unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), -1, 2048, 2);
			unk_0x7DD7196E1A0C1D43(0, unk_0x17B5CC8A8615737D(), 0, 16);
			unk_0x007AE2AA9E15FA7B(uLocal_73);
			unk_0x00E85C3B3BD34B10(iLocal_56, uLocal_73);
			unk_0x08377FB2AE4C6899(&uLocal_73);
			unk_0x650BB0E111420EAF(iLocal_56, 1);
			unk_0x7771211498B88EA3(iLocal_56, 1, 0);
		}
	}
}

void func_57()
{
	Global_14611 = 0;
	func_58();
}

void func_58()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
	}
}

void func_59()
{
	if (!unk_0xCA41A00932714525(iLocal_55))
	{
		if (unk_0xA3794949321E107C(uLocal_59))
		{
			unk_0xB8F5F7438C07CC5E(uLocal_59, 0);
		}
		unk_0xCF458DC2F9000261(iLocal_55);
	}
}

int func_60()
{
	if (!unk_0xA929B2923D14E2F8(iLocal_54, 0))
	{
		if (bLocal_74)
		{
			if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), iLocal_54))
			{
				if ((unk_0x94E3E074F38DF86C() - iLocal_276) > 1000)
				{
					func_61();
				}
			}
		}
	}
	if (iLocal_275 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_61()
{
	if (!func_76())
	{
		if (iLocal_275 < 3)
		{
			unk_0x4718A774D9248520(iLocal_54, unk_0x17B5CC8A8615737D(), 6000, 2048, 2);
			func_66(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
		}
	}
	iLocal_275++;
	iLocal_276 = unk_0x94E3E074F38DF86C();
}

int func_62()
{
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0xB42101338C533CB4(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), iLocal_55))
		{
			if (bLocal_74)
			{
				if (iLocal_52 != 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x57240623C1BC6E88(iLocal_55, 1), Local_68) > 2.5f)
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
	if (bLocal_74)
	{
		if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), iLocal_55))
		{
			if (unk_0x7F4AE93855973529(iLocal_55))
			{
				if (iLocal_52 != 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x57240623C1BC6E88(iLocal_55, 1), Local_68) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (bLocal_74)
			{
				if ((unk_0x94E3E074F38DF86C() - iLocal_276) > 1000)
				{
					func_61();
				}
			}
		}
	}
	if (iLocal_275 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (!iLocal_75)
	{
		switch (iLocal_245)
		{
			case 0:
				if (!bLocal_61)
				{
					if (unk_0x83666F9FB8FEBD4B() > 80000)
					{
						if (!unk_0xCA41A00932714525(iLocal_54))
						{
							if (!unk_0xCA41A00932714525(iLocal_55))
							{
								func_50();
								unk_0x4EDE34FBADD967A6(0);
								func_66(&uLocal_78, "REARRAU", "REARR_PRAD3", 4, iLocal_254, 0, 0);
							}
						}
						iLocal_245 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_76())
				{
					if (!unk_0xCA41A00932714525(iLocal_55))
					{
						if (unk_0x5132972D2BBC5A62(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
						{
							unk_0x86DD54980FE55567(&uLocal_73);
							unk_0xEB1EFACA68933402(0, sLocal_258, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							unk_0xCA58071CE9CCE891(0, iLocal_54, 150f, -1, 0, 0);
							unk_0x007AE2AA9E15FA7B(uLocal_73);
							unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_73);
							unk_0x08377FB2AE4C6899(&uLocal_73);
							unk_0x44B1CF13D39D96CE(iLocal_55, joaat("MotionState_Run"), 0, 0, 0);
							unk_0x650BB0E111420EAF(iLocal_55, 1);
						}
						else
						{
							unk_0xCA58071CE9CCE891(iLocal_55, iLocal_54, 150f, -1, 0, 0);
						}
						unk_0x650BB0E111420EAF(iLocal_55, 1);
						unk_0x4B04B4FAE554FA03(iLocal_55, 101);
						func_66(&uLocal_78, "REARRAU", sLocal_269, 4, iLocal_254, 0, 0);
						iLocal_245 = 2;
					}
					if (!unk_0xCA41A00932714525(iLocal_54))
					{
						unk_0x15848523A8959DBC(iLocal_54);
						iLocal_245 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0xCA41A00932714525(iLocal_54))
				{
					if (!unk_0xCA41A00932714525(iLocal_55))
					{
						unk_0xDE574EA7A7A2CAF8(2, iLocal_72, iLocal_71);
						unk_0xDE574EA7A7A2CAF8(2, iLocal_71, iLocal_72);
						unk_0x7DD7196E1A0C1D43(iLocal_54, iLocal_55, 0, 16);
					}
					else
					{
						unk_0x401B18D8E7BEEC86(iLocal_54, 1193033728, 0);
						func_164();
					}
					unk_0x650BB0E111420EAF(iLocal_54, 1);
				}
				iLocal_75 = 1;
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
	
	if (unk_0x45CD66F0A131E554(iParam1, 0))
	{
		if (!unk_0xCA41A00932714525(iParam0))
		{
			Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
		}
		else
		{
			return -1;
		}
		Var3 = { unk_0x854ED33E6D715648(iParam1, 1f, -0.5f, 0f) };
		Var9 = { Var3 - Var0 };
		Var6 = { unk_0x854ED33E6D715648(iParam1, -1f, -0.5f, 0f) };
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
		if (!iLocal_293)
		{
			if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_54, 30f, 30f, 30f, 0, 1, 0))
			{
				func_66(&uLocal_78, "REARRAU", "REARR_PSTOP", 4, iLocal_254, 0, 0);
				iLocal_293 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		else if (unk_0xC9D9444186B5A374() > 8000)
		{
			if (unk_0x0E29C61F26D96FDB(0, 99) > 50)
			{
				func_66(&uLocal_78, "REARRAU", "REARR_PRAND", 4, iLocal_254, 0, 0);
			}
			else if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
			{
				func_66(&uLocal_78, "REARRAU", sLocal_268, 4, iLocal_254, 0, 0);
			}
			else if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
			{
				func_66(&uLocal_78, "REARRAU", sLocal_268, 4, iLocal_254, 0, 0);
			}
			else
			{
				func_66(&uLocal_78, "REARRAU", sLocal_272, 4, iLocal_254, 0, 0);
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_67(sParam2, iParam3, 0);
}

int func_67(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x660E8E7836E95077(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
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
		if (unk_0x55C74612BE548D78())
		{
			return 0;
		}
		if (func_74(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_73();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
			if (bParam2)
			{
				func_72();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_71())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
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
				switch (Global_14443.f_1)
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
				{
					return 0;
				}
			}
			func_69();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_68();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x660E8E7836E95077(0);
	Global_15745 = 1;
}

void func_69()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
}

int func_70()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_43();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69702)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_74(int iParam0, int iParam1)
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

void func_75(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

int func_76()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	if (unk_0x4E84D2C9B54F79BA(iLocal_55, iLocal_54, 3.5f, 3.5f, 3.5f, 0, 1, 0) || func_80())
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
	
	if (unk_0x9624989A9A9E430F(unk_0x57240623C1BC6E88(iLocal_55, 1), &uVar0, &Var1))
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
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_82()
{
	if ((unk_0x94E3E074F38DF86C() - iLocal_253) > 500)
	{
		if ((iLocal_49 != 1 && iLocal_49 != 3) && iLocal_49 != 2)
		{
			if (unk_0xA3794949321E107C(uLocal_59))
			{
				unk_0xB8F5F7438C07CC5E(uLocal_59, iLocal_248);
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
			bLocal_288 = true;
		}
		if (!bLocal_61)
		{
			if (unk_0xA3794949321E107C(uLocal_58))
			{
				unk_0xB8F5F7438C07CC5E(uLocal_58, iLocal_249);
				if (iLocal_249 == 1)
				{
					iLocal_249 = 0;
				}
				else
				{
					iLocal_249 = 1;
				}
			}
		}
		else
		{
			bLocal_288 = true;
		}
		iLocal_253 = unk_0x94E3E074F38DF86C();
	}
	if (!bLocal_289 == bLocal_288)
	{
		if (bLocal_288)
		{
			if (unk_0xA3794949321E107C(uLocal_59))
			{
				unk_0x1441D969BF79AD61(uLocal_59, 1);
			}
			if (unk_0xA3794949321E107C(uLocal_58))
			{
				unk_0x1441D969BF79AD61(uLocal_58, 1);
			}
		}
		else
		{
			if (unk_0xA3794949321E107C(uLocal_59))
			{
				unk_0x1441D969BF79AD61(uLocal_59, 0);
			}
			if (unk_0xA3794949321E107C(uLocal_58))
			{
				unk_0x1441D969BF79AD61(uLocal_58, 0);
			}
		}
		bLocal_289 = bLocal_288;
	}
}

int func_83(float fParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	Var2 = { fParam0, fParam0, 50f };
	if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), Local_279, Local_282, 194.75f, 0, 1, 0))
	{
		return 1;
	}
	if (!unk_0xCA41A00932714525(iLocal_54))
	{
		if (unk_0x4E84D2C9B54F79BA(iLocal_54, unk_0x17B5CC8A8615737D(), Var2, 0, 1, 0))
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
	if (!unk_0xCA41A00932714525(iLocal_55))
	{
		if (unk_0x4E84D2C9B54F79BA(iLocal_55, unk_0x17B5CC8A8615737D(), Var2, 0, 1, 0))
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
		Global_101690 = 1;
		Global_101687 = unk_0x94E3E074F38DF86C();
		if (func_88(Global_101689))
		{
			func_85(0);
		}
		unk_0x2A8465C4D16098B7(1, "RE_TITLE");
		if (iParam0 && func_88(Global_101689))
		{
			unk_0x3CB6B08E51C56965();
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
			if (Global_101700.f_23954.f_2 < 3)
			{
				if (!unk_0x7AED88F5CDBFFB3C())
				{
					func_86(func_87(iParam0), -1);
					Global_101700.f_23954.f_2++;
					unk_0xEB79FECD9022AAF0(&Global_101696, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x48B8265059381CD0(Global_101696, 1))
			{
				if (!unk_0x7AED88F5CDBFFB3C())
				{
					func_86(func_87(iParam0), -1);
					Global_101700.f_23954.f_3++;
					unk_0xEB79FECD9022AAF0(&Global_101696, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x48B8265059381CD0(Global_101696, 2))
			{
				if (!unk_0x7AED88F5CDBFFB3C())
				{
					func_86(func_87(iParam0), -1);
					Global_101700.f_23954.f_4++;
					unk_0xEB79FECD9022AAF0(&Global_101696, 2);
				}
			}
			break;
	}
}

void func_86(var uParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(uParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
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
	switch (func_90(&Global_25249, 0, 5, 0, unk_0xE9A5FDFDC239B2ED()))
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
		if (Global_89302.f_44 == 1)
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
		Global_35745++;
		*uParam0 = Global_35745;
		unk_0xF7A1A67D26D29975(unk_0x592069F95C314814(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBED07ACDB4C03BB0(8);
		}
		Global_35781 = iParam2;
		Global_35743 = *uParam0;
		Global_35744 = iParam4;
		Global_35742 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35742 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35742)
			{
				if (Global_35748[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35743 == *uParam0)
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
		if (Global_35742 == 8)
		{
			return 0;
		}
		Global_35745++;
		*uParam0 = Global_35745;
		Global_35748[Global_35742 /*4*/] = Global_35745;
		Global_35748[Global_35742 /*4*/].f_1 = iParam1;
		Global_35748[Global_35742 /*4*/].f_2 = iParam2;
		Global_35748[Global_35742 /*4*/].f_3 = 0;
		Global_35742++;
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
	
	if (Global_35742 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35742)
	{
		if (Global_35748[iVar0 /*4*/] == *uParam0)
		{
			Global_35748[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_92(int iParam0)
{
	return func_93(iParam0, Global_35781);
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
	if (Global_35781 == 15)
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
	if (!unk_0xCA41A00932714525(iLocal_54))
	{
		if (!unk_0xCA41A00932714525(iLocal_55))
		{
			if ((unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_54, fVar0, fVar0, fVar0, 0, 1, 0) || unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_55, fVar0, fVar0, fVar0, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), Local_279, Local_282, 194.75f, 0, 1, 0))
			{
				if (!unk_0xA3794949321E107C(uLocal_59))
				{
					uLocal_59 = func_96(iLocal_55, 0, 145);
				}
				if (!unk_0xA3794949321E107C(uLocal_58))
				{
					uLocal_58 = func_96(iLocal_54, 0, 145);
				}
				unk_0x1441D969BF79AD61(uLocal_59, 0);
				unk_0x1441D969BF79AD61(uLocal_58, 0);
				unk_0xC1B1E9A034A63A62(0);
				return 1;
			}
		}
		else
		{
			if (!unk_0xCA41A00932714525(iLocal_54))
			{
				if (!unk_0xA3794949321E107C(uLocal_58))
				{
					uLocal_58 = func_96(iLocal_54, 0, 145);
				}
			}
			if (unk_0xA3794949321E107C(uLocal_59))
			{
				unk_0x020DF7300725ECAB(&uLocal_59);
			}
			return 1;
		}
	}
	else
	{
		if (!unk_0xCA41A00932714525(iLocal_55))
		{
			if (!unk_0xA3794949321E107C(uLocal_59))
			{
				uLocal_59 = func_96(iLocal_55, 0, 145);
			}
		}
		if (unk_0xA3794949321E107C(uLocal_58))
		{
			unk_0x020DF7300725ECAB(&uLocal_58);
		}
		return 1;
	}
	return 0;
}

var func_96(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_97(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA3794949321E107C(uVar0)) && unk_0x63A528817609801B(&(Global_101700.f_27009[iParam2 /*29*/].f_3)))
	{
		unk_0xAAF15482D9DB27D9(uVar0, &(Global_101700.f_27009[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_97(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x23E9113C762466ED(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF1FE04D602EA392E(iParam0);
	if (unk_0x3983CCB0D958159C(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_98(unk_0x63C468D583002D23(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
		}
		else
		{
			unk_0xCC930AE12D020496(uVar0, 2);
		}
	}
	else if (unk_0x80E9CA64E9C8E070(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_98(unk_0x63C468D583002D23(), 0.7f, 0.7f));
		unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
	}
	else if (unk_0x1461B0B259D86067(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_98(unk_0x63C468D583002D23(), 0.7f, 0.7f));
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
	if (iLocal_53 == 1)
	{
		Var2 = { 2429.822f, 4952.938f, 44.8892f };
		fVar8 = 218.3434f;
		Var5 = { 2431.685f, 4945.31f, 44.6996f };
		fVar9 = 220.0087f;
		Local_279 = { 2378.284f, 4863.027f, 32.50883f };
		Local_282 = { 2512.797f, 4998.586f, 90.12283f };
		sLocal_256 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_265 = "arrestcriminal";
		sLocal_266 = "REARR_CTHANK";
		sLocal_267 = "REARR_CORUN";
		sLocal_268 = "REARR_CWTF";
		sLocal_269 = "REARR_CTURN";
		sLocal_270 = "REARR_CHELP";
		sLocal_271 = "REARR_HATE";
		sLocal_272 = "REARR_CRAND";
		sLocal_273 = "REARR_CRAND";
		sLocal_274 = "REARR_CRAND";
		iVar1 = joaat("a_m_m_hillbilly_02");
	}
	else if (iLocal_53 == 2)
	{
		Var2 = { 2592.637f, 2540.05f, 30.4162f };
		fVar8 = 90.5639f;
		Var5 = { 2586.005f, 2541.41f, 31.0379f };
		fVar9 = 75.5943f;
		Local_279 = { 2543.135f, 2683.917f, 0.307461f };
		Local_282 = { 2597.603f, 2408.885f, 121.901f };
		sLocal_256 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_265 = "arrestcriminal2";
		sLocal_266 = "REARR_THANK2";
		sLocal_267 = "REARR_CORUN2";
		sLocal_268 = "REARR_CWTF2";
		sLocal_269 = "REARR_CTURN2";
		sLocal_270 = "REARR_CHELP2";
		sLocal_271 = "REARR_HATE2";
		sLocal_272 = "REARR_CRAND2";
		sLocal_273 = "REARR_CRAND2";
		sLocal_274 = "REARR_CRAND2";
		iVar1 = joaat("g_m_m_armgoon_01");
	}
	unk_0xE1324F59713746FA(iVar0);
	unk_0xE1324F59713746FA(iVar1);
	unk_0xE1324F59713746FA(joaat("prop_ld_binbag_01"));
	unk_0xA0E7D0E8FE126EE8(sLocal_258);
	unk_0xA0E7D0E8FE126EE8(sLocal_259);
	unk_0xFD2E59A7CCE66AB3("MOVE_M@BAIL_BOND_NOT_TAZERED");
	unk_0xFD2E59A7CCE66AB3("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((unk_0x9F746898F7881612(iVar0) && unk_0x9F746898F7881612(iVar1)) && unk_0x9F746898F7881612(joaat("prop_ld_binbag_01"))) && unk_0xF4F8AE8DD0F08C1E(sLocal_258)) && unk_0xF4F8AE8DD0F08C1E(sLocal_259)) && unk_0x69EB2CB272E0AD5D("MOVE_M@BAIL_BOND_NOT_TAZERED")) && unk_0x69EB2CB272E0AD5D("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_54 = unk_0x2AD5F4170F4ACBEB(6, iVar0, Var2, fVar8, 1, 1);
		unk_0x6018E338F7ABCE75(iLocal_54, 294, 1);
		unk_0x7771211498B88EA3(iLocal_54, 1, 0);
		unk_0x39DF32F630CC12A7(iLocal_54, 1);
		unk_0xCC61640A821F277C(iLocal_54, 1);
		func_101(&uLocal_78, 1, iLocal_54, "ArrestCop", 0, 1);
		unk_0x4114B83B329702FF(iLocal_54, 1);
		unk_0xE1F5F70A15CF94CB(iLocal_54, 1);
		iLocal_55 = unk_0x2AD5F4170F4ACBEB(26, iVar1, Var5, fVar9, 1, 1);
		unk_0x7771211498B88EA3(iLocal_55, 1, 0);
		unk_0x6018E338F7ABCE75(iLocal_55, 42, 1);
		unk_0x6018E338F7ABCE75(iLocal_55, 281, 1);
		unk_0xCC61640A821F277C(iLocal_55, 1);
		func_101(&uLocal_78, 2, iLocal_55, sLocal_265, 0, 1);
		unk_0x4114B83B329702FF(iLocal_55, 1);
		if (iLocal_53 == 1)
		{
			unk_0x2F933BB106547968(iLocal_55, 0, 0, 2, 0);
			unk_0x2F933BB106547968(iLocal_55, 2, 0, 0, 0);
			unk_0x2F933BB106547968(iLocal_55, 3, 2, 0, 0);
			unk_0x2F933BB106547968(iLocal_55, 4, 0, 0, 0);
		}
		func_100();
		if (func_43() == 0)
		{
			func_101(&uLocal_78, 0, unk_0x17B5CC8A8615737D(), "MICHAEL", 0, 1);
		}
		else if (func_43() == 1)
		{
			func_101(&uLocal_78, 0, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
		}
		else if (func_43() == 2)
		{
			func_101(&uLocal_78, 0, unk_0x17B5CC8A8615737D(), "TREVOR", 0, 1);
		}
		if (!unk_0x509A3191A6C4EB38(iLocal_54, joaat("weapon_pistol"), 0))
		{
			unk_0xC1B7B5C6FDC0755B(iLocal_54, joaat("weapon_pistol"), -1, 0, 1);
		}
		unk_0x0B25AB3A7FA0683C(iLocal_54, joaat("weapon_pistol"), 1);
		uLocal_60 = unk_0x521A82CF998EDB21(joaat("prop_ld_binbag_01"), Local_65.f_0, Local_65.f_1, (Local_65.f_2 + 100f), 1, 1, 0);
		unk_0x027DB6817AB239EB(uLocal_60, 0, 0);
		if (unk_0x2A488C176D52CCA5(2411.32f, 4958.76f, 45.19f, Local_65) < 10f)
		{
			iLocal_53 = 1;
			unk_0x86DD54980FE55567(&uLocal_73);
			unk_0x630644C1D3612175(0, 2473.254f, 4901.651f, 43.1488f, 3f, -1, 2f, 1, Local_250, 1193033728);
			unk_0xCA58071CE9CCE891(0, iLocal_54, 150f, -1, 0, 0);
			unk_0x007AE2AA9E15FA7B(uLocal_73);
			unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_73);
			unk_0x650BB0E111420EAF(iLocal_55, 1);
			unk_0x08377FB2AE4C6899(&uLocal_73);
			unk_0xEEB6FB1A486B379E(2544.862f, 4729.893f, 27.8986f, 2564.862f, 4749.893f, 28.8986f, 1);
		}
		else
		{
			iLocal_53 = 2;
			unk_0x86DD54980FE55567(&uLocal_73);
			unk_0x630644C1D3612175(0, 2531.445f, 2521.749f, 38.2072f, 3f, -1, 2f, 1, Local_250, 1193033728);
			unk_0xCA58071CE9CCE891(0, iLocal_54, 150f, -1, 0, 0);
			unk_0x007AE2AA9E15FA7B(uLocal_73);
			unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_73);
			unk_0x650BB0E111420EAF(iLocal_55, 1);
			unk_0x08377FB2AE4C6899(&uLocal_73);
		}
		if (iLocal_53 == 1)
		{
		}
		unk_0x834EF3BF2E6A8D29(iLocal_54, iLocal_55, -1, 1f, 3f, 1073741824, 0);
		unk_0x650BB0E111420EAF(iLocal_54, 1);
		return 1;
	}
	return 0;
}

void func_100()
{
	Local_250.f_0 = 0f;
	Local_250.f_1 = 10f;
	unk_0x2937901439E611F5(iLocal_54, 2);
	unk_0xC96275575DC981A9(iLocal_54, 13, 1);
	unk_0xC96275575DC981A9(iLocal_54, 2, 1);
	unk_0xC96275575DC981A9(iLocal_54, 1, 1);
	unk_0xC96275575DC981A9(iLocal_54, 11, 0);
	unk_0x73655D4147D2FFBC(iLocal_54, 0);
	unk_0x2937901439E611F5(iLocal_55, 3);
	unk_0xC96275575DC981A9(iLocal_55, 17, 1);
	unk_0xC96275575DC981A9(iLocal_55, 6, 1);
	unk_0xC96275575DC981A9(iLocal_55, 1, 1);
	unk_0xC96275575DC981A9(iLocal_55, 11, 0);
	unk_0xB195EE9DB37DA7F2(iLocal_55, 128, 1);
	unk_0xB195EE9DB37DA7F2(iLocal_55, 1, 0);
	unk_0x1EF7A8224AE81790("RE_ARREST_COP", &iLocal_71);
	unk_0x1EF7A8224AE81790("RE_ARREST_CRIM", &iLocal_72);
	unk_0x3BB70315907D9456(iLocal_54, iLocal_71);
	unk_0x3BB70315907D9456(iLocal_55, iLocal_72);
	unk_0xDE574EA7A7A2CAF8(4, iLocal_72, iLocal_71);
	unk_0xDE574EA7A7A2CAF8(3, iLocal_71, joaat("player"));
	unk_0xDE574EA7A7A2CAF8(3, iLocal_72, joaat("player"));
	unk_0xDE574EA7A7A2CAF8(4, iLocal_72, joaat("COP"));
	unk_0xA0E70AC53ABAB207(iLocal_54, sLocal_257);
	unk_0xA0E70AC53ABAB207(iLocal_55, sLocal_256);
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
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
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
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xACA666C39EA49E82(unk_0x17B5CC8A8615737D())) > 1369f && !func_110())
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
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (func_45(func_43()))
		{
			iVar36 = func_109();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x48B8265059381CD0(Global_101700.f_17533[iVar32 /*6*/], 2) && !unk_0x48B8265059381CD0(Global_101700.f_17533[iVar32 /*6*/], 3))
				{
					func_104(iVar32, &Var0);
					fVar35 = unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), Var0.f_6, 1);
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
	if (unk_0x9C88EB7B70229335(&cVar2))
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
	switch (Global_101700.f_2095.f_539.f_3549)
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
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x800431CFB358AFCF() == 1f)
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
	return Global_101418 > 0;
}

int func_113()
{
	if (Global_88746 != -1)
	{
		return 1;
	}
	return 0;
}

int func_114()
{
	if (Global_88746 != -1)
	{
		return unk_0x48B8265059381CD0(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

int func_115()
{
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xACA666C39EA49E82(unk_0x17B5CC8A8615737D())) > 1369f && !func_110())
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
	unk_0xB3EFCE1243C98BFD(0);
	unk_0x2BC65DD826D4278E(1);
	Global_101686 = 0;
	func_117();
}

void func_117()
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			unk_0xD90CB3CF9A40791C(unk_0x0324EEB10F81965F(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)), 1);
		}
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 0);
	}
}

void func_118(int iParam0)
{
	Global_101689 = iParam0;
}

int func_119()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x6AF6B39BFDB53CB5(), 64);
	uVar16 = func_120(Var0);
	return uVar16;
}

int func_120(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x765F5B806B517045(&cParam0))
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
	
	if (!Global_138924)
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
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			Var1 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xACA666C39EA49E82(unk_0x17B5CC8A8615737D())) > 1369f && !func_110())
			{
				return 0;
			}
		}
		if (!Global_101700.f_8044)
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
		if (Global_101689 != -1)
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
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
		if (!func_157(Global_101700.f_23954.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x94E3E074F38DF86C() - Global_101691) < 150000)
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
		if (unk_0xE6235D8850CC396F())
		{
			return 0;
		}
		if (unk_0xD3718ACF1D7AD57E())
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
		if (unk_0x623BDE1B17A9D9E3(unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D())))
		{
			if ((unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0x1A4C1C534F86E06A(377.153f, -717.567f, 10.0536f) || unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0x1A4C1C534F86E06A(320.9934f, 265.2515f, 82.1221f)) || unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0x1A4C1C534F86E06A(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_146(0, 0))
		{
			return 0;
		}
		if (Global_25336)
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
				Var5 = { Global_101700.f_2095.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101700.f_2095.f_539.f_1524[iVar4];
				if (func_145(iVar8))
				{
					if (func_123(iVar4))
					{
						if (!func_122(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_101700.f_2095.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_135(unk_0x48B8265059381CD0(iParam0, 31), -1, 1)) + 2011;
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
	
	func_144(&uVar0, unk_0x0956E4296D9CC40A());
	func_143(&uVar0, unk_0x32883EAC7DC86C40());
	func_142(&uVar0, unk_0x80BC37C67CB292E5());
	func_141(&uVar0, unk_0x202B089E6328ABFA());
	func_140(&uVar0, unk_0xCD8338A83E1BCC14());
	func_139(&uVar0, unk_0x1BBFD9409EC2598C());
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
	if (unk_0x48B8265059381CD0(Global_101700.f_23954.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
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
						if (((((((((((((((((!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_155()) || Global_100747) || Global_25192) || func_154()) || func_74(8, -1)) || func_153()) || func_152()) || func_151()) || func_150()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1) || func_155()) || Global_25192) || func_154()) || func_74(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_155()) || Global_100747) || Global_25192) || func_154()) || func_74(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_101700.f_6647.f_919[iVar0] == 5) || Global_36328 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_155()) || Global_100747) || Global_25192) || func_154()) || func_74(8, -1)) || func_153()) || func_152()) || func_150()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_155() || unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0) || func_74(8, -1)) || func_150()) || func_149()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_74(8, -1) || func_153()) || func_152()) || func_149()) || func_148())
						{
							return 0;
						}
						if ((unk_0xE9E6B5364105A000() && unk_0x3108C06B8E90438D() != 3) && unk_0x4DA93F059B47A9FA() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
						{
							if ((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || func_155()) || Global_25192) || func_154()) || func_74(8, -1)) || func_152()) || func_151()) || func_150()) || Global_101700.f_6647.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || !unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) || !unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796())) || !unk_0x30F06AB0772AFB80()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || func_155()) || func_152()) || Global_100747) || Global_25192) || func_154()) || Global_36912) || func_74(8, -1)) || func_151()) || func_149()) || func_150()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || !unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) || !unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796())) || !unk_0x30F06AB0772AFB80()) || unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0)) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1)) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5FD7D852A3EAF133(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || func_155()) || Global_100747) || Global_25192) || func_154()) || func_74(8, -1)) || func_151()) || func_149()) || func_153()) || func_152()) || func_150())
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
	return Global_91530.f_1;
}

int func_149()
{
	if (Global_88746 != -1)
	{
		return unk_0x48B8265059381CD0(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

int func_150()
{
	if (unk_0x82F1A060D8F4583B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	if (Global_69962)
	{
		return 1;
	}
	else if (Global_55816 && !Global_55822)
	{
		return 1;
	}
	return 0;
}

bool func_152()
{
	return Global_91543.f_304 > 0;
}

bool func_153()
{
	return Global_91543.f_303 > 0;
}

var func_154()
{
	return Global_1315233;
}

int func_155()
{
	if (!unk_0x63C468D583002D23())
	{
		return Global_89302.f_44 == 1;
	}
	return 0;
}

int func_156()
{
	func_72();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
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
	return Global_101700.f_6647.f_919[iParam0];
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
		bVar1 = unk_0x48B8265059381CD0(Global_101700.f_23954, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x48B8265059381CD0(Global_101700.f_23954.f_1, iVar0);
	}
	return bVar1;
}

int func_161()
{
	var uVar0;
	
	if (Global_25340)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if (unk_0x45CD66F0A131E554(uVar0, 0))
			{
				if (!unk_0xCA41A00932714525(unk_0x17206B315923243C(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_162(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

int func_163()
{
	int iVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xEB79FECD9022AAF0(&iVar0, 2);
				unk_0xEB79FECD9022AAF0(&iVar0, 4);
				unk_0xEB79FECD9022AAF0(&iVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					iVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&iVar0, 0);
					unk_0x0D1285E5ED89254D(iVar0);
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

void func_164()
{
	if (unk_0xD3718ACF1D7AD57E())
	{
		switch (iLocal_49)
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
		if (unk_0x23E9113C762466ED(iLocal_55))
		{
			if (!unk_0xCA41A00932714525(iLocal_55) && !unk_0xA929B2923D14E2F8(iLocal_55, 0))
			{
				unk_0xA929B2923D14E2F8(iLocal_54, 0);
				if (unk_0x23E9113C762466ED(iLocal_54))
				{
					unk_0x9145194A1B6CD65A(iLocal_55, unk_0x57240623C1BC6E88(iLocal_54, 1), 9000f, -1, 0, 0);
				}
				else
				{
					unk_0x9145194A1B6CD65A(iLocal_55, unk_0x57240623C1BC6E88(iLocal_55, 1), 9000f, -1, 0, 0);
				}
				unk_0xCC61640A821F277C(iLocal_55, 0);
				unk_0x650BB0E111420EAF(iLocal_55, 1);
			}
		}
		if (unk_0x23E9113C762466ED(iLocal_54))
		{
			if (!unk_0xCA41A00932714525(iLocal_54))
			{
				unk_0x650BB0E111420EAF(iLocal_54, 1);
				unk_0xCC61640A821F277C(iLocal_54, 0);
				unk_0x2B2A8BB6D756A886(iLocal_54, 1);
				unk_0x6F65279C9BC14EDB(iLocal_54, 1);
			}
		}
		if (unk_0x23E9113C762466ED(iLocal_56))
		{
			if (!unk_0xCA41A00932714525(iLocal_56))
			{
				if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
				{
					func_56();
				}
				unk_0xCC61640A821F277C(iLocal_56, 0);
				unk_0x2B2A8BB6D756A886(iLocal_56, 1);
			}
		}
		if (func_177())
		{
			unk_0x000E46314C3A507F(1f);
			unk_0xDE574EA7A7A2CAF8(2, iLocal_72, iLocal_71);
			unk_0xDE574EA7A7A2CAF8(2, iLocal_71, iLocal_72);
		}
		if (iLocal_77)
		{
			unk_0x223C8480EA6EE20B(1);
		}
	}
	unk_0xD211CBCC0E735E4F(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 1);
	if (iLocal_287)
	{
		unk_0x2B46008B9EA5E05B(unk_0xBE369BE1BC57A796(), 3, 0);
		unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
	}
	func_165(-1);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x921053BAF754303D();
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
		unk_0x2A8465C4D16098B7(0, 0);
		Global_101691 = unk_0x94E3E074F38DF86C();
		func_169(30000);
		StringCopy(&cVar0, func_168(Global_101689, 1), 64);
		if (func_167(Global_101689) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		unk_0x8B93E6E9B44E0A75(&cVar0, Global_101686, (unk_0x94E3E074F38DF86C() - Global_101687), 0);
	}
	else if (unk_0x48B8265059381CD0(Global_101696, 0) && Global_101700.f_23954.f_2 < 3)
	{
		unk_0x21E7933CCC7B3724(&Global_101696, 0);
	}
	func_166(&Global_25249);
	Global_101690 = 0;
	func_118(-1);
}

void func_166(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35743)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35742 = 0;
	Global_35744 = 0;
	Global_35781 = 15;
	Global_55819 = 0;
	Global_55820 = 0;
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
	Global_36332 = (unk_0x94E3E074F38DF86C() + iParam0);
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
	Global_101700.f_23954.f_43[iParam0] = *uParam1;
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
	func_140(uParam0, iParam5);
	func_141(uParam0, iParam4);
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
	if ((Global_101689 == func_119() && unk_0xD3718ACF1D7AD57E()) && Global_101690)
	{
		return 1;
	}
	return 0;
}

void func_178()
{
	if (!bLocal_76)
	{
		func_194();
	}
	func_181(15, iLocal_53);
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
	if (Global_91530.f_8)
	{
		if (Global_91530.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1)
	{
		return 0;
	}
	Global_91530.f_10++;
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
			Global_101700.f_23954.f_2 = 3;
		}
		if (func_187(iParam0, iParam1) != 322)
		{
			func_182(func_187(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_101688 = iParam1;
		if (Global_101686 == 0)
		{
			if (((Global_101689 == 1 || Global_101689 == 5) || Global_101689 == 11) || Global_101689 == 25)
			{
				func_195(2);
			}
			else if ((Global_101689 == 26 || Global_101689 == 8) || Global_101689 == 17)
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
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = uParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101436++;
					fVar1 = (fVar1 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101437++;
					fVar2 = (fVar2 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101438++;
					fVar3 = (fVar3 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101439++;
					fVar4 = (fVar4 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101440++;
					fVar5 = (fVar5 + (Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101441++;
					fVar6 = (fVar6 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101442++;
					fVar7 = (fVar7 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101419 > 0)
	{
		if (Global_101436 == Global_101419)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0)
	{
		if (Global_101437 == Global_101420)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0)
	{
		if (Global_101438 == Global_101421)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0)
	{
		if (Global_101439 == Global_101422)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0)
	{
		if (((Global_101440 == Global_101423 || (Global_101423 * 10 / Global_101440) < 41) || Global_101440 > Global_101426) || Global_101440 == Global_101426)
		{
			if (!unk_0x48B8265059381CD0(Global_101700.f_9153.f_3856, 14))
			{
				if (Global_101440 == Global_101423)
				{
					unk_0x76FDB94571A85364(joaat("num_rndevents_completed"), Global_101423, 0);
					unk_0xEB79FECD9022AAF0(&(Global_101700.f_9153.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0)
	{
		if (Global_101441 == Global_101424)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0)
	{
		if (Global_101442 == Global_101425)
		{
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426)
	{
		iVar9 = Global_101426;
	}
	else
	{
		iVar9 = Global_101440;
	}
	unk_0x731753D8494ABECD(joaat("num_missions_completed"), Global_101436, 1);
	unk_0x731753D8494ABECD(joaat("num_missions_available"), Global_101419, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_completed"), Global_101437, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_available"), Global_101420, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_completed"), Global_101438, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_available"), Global_101421, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_completed"), Global_101439, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_available"), Global_101422, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_available"), Global_101426, 1);
	unk_0x731753D8494ABECD(joaat("num_misc_completed"), (Global_101442 + Global_101441), 1);
	unk_0x731753D8494ABECD(joaat("num_misc_available"), (Global_101425 + Global_101424), 1);
	Global_101443 = (Global_101436 * 100 / Global_101419);
	Global_101445 = ((Global_101438 + Global_101437) * 100 / (Global_101421 + Global_101420));
	Global_101444 = ((Global_101439 + iVar9) * 100 / (Global_101422 + Global_101426));
	Global_101446 = ((Global_101441 + Global_101442) * 100 / (Global_101424 + Global_101425));
	unk_0x098CDAAE6268B0D0(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	unk_0x731753D8494ABECD(joaat("percent_story_missions"), Global_101443, 1);
	unk_0x731753D8494ABECD(joaat("percent_ambient_missions"), Global_101444, 1);
	unk_0x731753D8494ABECD(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853))
	{
		func_39(13, unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853));
	}
	if (!unk_0x9710FEDD2413A882())
	{
		if (!Global_69702)
		{
			if (func_184() == 2 == 0 && !unk_0x63C468D583002D23())
			{
				if (unk_0x877FC5FAF7DC9BC5())
				{
					Global_101434 = 0;
				}
				if (!Global_55822)
				{
					func_180();
				}
			}
		}
	}
}

int func_184()
{
	return Global_25190;
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
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_186();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_186()
{
	return Global_1312735;
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
		unk_0xEB79FECD9022AAF0(&(Global_101700.f_19369.f_150[iVar1]), iVar0);
	}
}

void func_189(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_190(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_190(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6A7B0D91FD88D9EE(sParam0, ""))
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
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_19369[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9)
	{
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4), sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = (unk_0x94E3E074F38DF86C() + iParam3);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = ((unk_0x94E3E074F38DF86C() + iParam3) + iParam4);
		}
		else
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_191();
	}
}

void func_191()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0])
			{
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1])
			{
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2])
			{
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
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
		return unk_0x48B8265059381CD0(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_193(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_101700.f_23954.f_8[iParam0]), iParam1);
}

int func_194()
{
	return 1;
}

void func_195(int iParam0)
{
	Global_101686 = iParam0;
}

void func_196()
{
	if (!bLocal_74 && iLocal_51 == 0)
	{
		if (!unk_0xCA41A00932714525(iLocal_54) && !unk_0xCA41A00932714525(iLocal_55))
		{
			unk_0x9C16B2DABAEC929A(iLocal_54, unk_0x57240623C1BC6E88(iLocal_55, 1), 3f, 20000, 1193033728, 1056964608);
			unk_0x650BB0E111420EAF(iLocal_54, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

