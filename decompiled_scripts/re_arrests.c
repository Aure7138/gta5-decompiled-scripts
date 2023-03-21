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
	if (unk_0xE8A79675302ED812(11))
	{
		bLocal_76 = true;
		func_199();
		func_169();
	}
	if (unk_0x2A488C176D52CCA5(2411.32f, 4958.76f, 45.19f, Local_65) < 10f)
	{
		iLocal_53 = 1;
	}
	else
	{
		iLocal_53 = 2;
	}
	if (func_126(Local_65, 15, iLocal_53, 0, 0))
	{
		func_121(15);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
		}
		switch (iLocal_48)
		{
			case 0:
				if ((unk_0x684B06333594F9EA() && !func_120()) && !func_107())
				{
					if (func_104())
					{
						iLocal_48 = 1;
					}
				}
				else
				{
					func_169();
				}
				break;
			
			case 1:
				if (func_100())
				{
					unk_0xA7FBEF44EF04D534(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 0, 1, 1);
					unk_0xDF53A66AEE1401AA(0f);
					func_89(1);
					iLocal_48 = 2;
				}
				else if (!func_88(200f))
				{
					func_169();
				}
				break;
			
			case 2:
				if (func_88(1128792064))
				{
					func_1();
				}
				else
				{
					func_169();
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
	
	unk_0xF0059F27F7BB6680(&uVar0, 3);
	unk_0xF0059F27F7BB6680(&uVar0, 4);
	iVar5 = 0;
	func_87();
	if (!unk_0x36CEFBE9B745A58D(iLocal_55))
	{
		unk_0x2E9860A2B72187F5(iLocal_55, 129, 1);
	}
	if (func_86(iLocal_55))
	{
		if (unk_0x687BD6F7DF82B377(iLocal_55, 0))
		{
			bLocal_298 = true;
		}
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_54) && (iLocal_49 != 2 && iLocal_49 != 1))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_55))
		{
			switch (iLocal_52)
			{
				case 0:
					unk_0xD4E50AEC04C3A55A("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (unk_0x83666F9FB8FEBD4B() > 10)
					{
						if (!bLocal_74)
						{
							if (unk_0xF4FCC3C1048FF2AB(iLocal_54, 1227113341) == 7)
							{
								unk_0x9565F9267674873A(iLocal_54, iLocal_55, -1, 1f, 3f, 1073741824, 0);
							}
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 4000)
					{
						if (!bLocal_74)
						{
							if (unk_0xF4FCC3C1048FF2AB(iLocal_55, 1805844857) == 7)
							{
								if (unk_0xF4FCC3C1048FF2AB(iLocal_55, -2017877118) == 1)
								{
									unk_0x776155158760E9F6(iLocal_55, 2, 1);
								}
								unk_0x5558ED6D4A2DEC93(iLocal_55, iLocal_54, 150f, -1, 0, 0);
							}
						}
					}
					fVar4 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iLocal_54, 1), unk_0x541C2AEF053615BC(iLocal_55, 1), 1);
					if (unk_0x83666F9FB8FEBD4B() > 8000 || fVar4 < 1.5f)
					{
						iVar5 = func_82();
						if (iVar5 == 1)
						{
							unk_0x9565F9267674873A(iLocal_54, iLocal_55, -1, 1f, 0.01f, 1073741824, 0);
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
							if (!func_81())
							{
								if (func_71(&uLocal_78, "REARRAU", "REARR_PCUFF", 4, iLocal_254, 0, 0))
								{
								}
								bLocal_294 = (unk_0x2CDE18D6C89522AD(iLocal_55) || unk_0x69871CAEBDD20966(iLocal_55));
								if (!unk_0x7B2E29350659BE8E(iLocal_54, joaat("weapon_pistol"), 0))
								{
									unk_0x7A535CE1F001F3FE(iLocal_54, joaat("weapon_pistol"), -1, 0, 1);
								}
								unk_0x8E25082A46F87892(iLocal_54, joaat("weapon_pistol"), 1);
								Local_68 = { unk_0x541C2AEF053615BC(iLocal_55, 1) };
								unk_0xA4E856A8CD53B8DF(iLocal_54);
								unk_0xC5A6DFE2B8987B17(&uLocal_73);
								if (!bLocal_294 && fVar4 > 2f)
								{
									unk_0xAD955309D7708805(0, Local_68.f_0, Local_68.f_1, (Local_68.f_2 + 4f), 1000, 1566631136);
								}
								unk_0x56F2E1B5599188FA(0, iLocal_55, -1, 2048, 2);
								unk_0xD0231395241DBA85(0, iLocal_55, iLocal_55, 1f, 0, 3f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
								unk_0x57D65255D3D3B6A7(0, iLocal_55, 5000, 0);
								unk_0x535008C596714F9E(uLocal_73);
								unk_0xA8E6405305C0D7DF(iLocal_54, uLocal_73);
								unk_0x02DAF06EA4F08219(&uLocal_73);
								unk_0x5502708AECB47F5D(iLocal_54);
								unk_0x22321800954A532E(iLocal_54, 1);
								unk_0xC1B1E9A034A63A62(0);
								iLocal_246 = unk_0x105601648511CC64();
								if (bLocal_294)
								{
									unk_0xA4E856A8CD53B8DF(iLocal_55);
									unk_0xBFDB9A018C6CE15A(iLocal_55);
									iLocal_52 = 4;
								}
								else
								{
									iLocal_52 = 2;
								}
							}
							else if (!iLocal_278)
							{
								unk_0x9565F9267674873A(iLocal_54, iLocal_55, -1, 1f, 0.01f, 1073741824, 0);
								iLocal_278 = 1;
							}
						}
						else
						{
							func_70();
						}
					}
					else
					{
						unk_0xD4E50AEC04C3A55A("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_54) && !unk_0x1D403DFADBC2DE3C(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
						{
							if (unk_0xE921F8171F0733B3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iLocal_54))
							{
								unk_0xA4E856A8CD53B8DF(iLocal_54);
								iLocal_52 = 1;
								unk_0xDE2D2B13F24A979D(iLocal_54, 500);
							}
						}
					}
					break;
				
				case 1:
					if (unk_0xF4FCC3C1048FF2AB(iLocal_54, -982327190) == 7)
					{
						unk_0x9565F9267674873A(iLocal_54, iLocal_55, -1, 1f, 3f, 1073741824, 0);
						iLocal_52 = 0;
					}
					break;
				
				case 2:
					if ((unk_0x105601648511CC64() - iLocal_246) > 1000)
					{
						Var1 = { 0f, 0f, (unk_0x349C94FFF43E2979(iLocal_55) * 3f) };
						unk_0x346129B364057FF6(iLocal_55, Var1, 2f, -1, 1f, 1024, 1193033728);
						iLocal_52 = 3;
					}
					break;
				
				case 3:
					if ((unk_0x105601648511CC64() - iLocal_246) > 4500)
					{
						iLocal_52 = 4;
					}
					break;
				
				case 4:
					bLocal_74 = true;
					unk_0xC5A6DFE2B8987B17(&uLocal_73);
					unk_0xE896C0AD02364F2A(0, sLocal_258, "idle_2_hands_up", 2f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, sLocal_258, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x535008C596714F9E(uLocal_73);
					unk_0xA8E6405305C0D7DF(iLocal_55, uLocal_73);
					unk_0x02DAF06EA4F08219(&uLocal_73);
					unk_0x5502708AECB47F5D(iLocal_55);
					unk_0x22321800954A532E(iLocal_55, 1);
					unk_0xEC9E10B23689A01D(iLocal_55, 1);
					iLocal_52 = 5;
					break;
				
				case 5:
					if (iLocal_50 == 3)
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_54, 242628503) == 7)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_54);
							if (!unk_0x7B2E29350659BE8E(iLocal_54, joaat("weapon_pistol"), 0))
							{
								unk_0x7A535CE1F001F3FE(iLocal_54, joaat("weapon_pistol"), -1, 0, 1);
							}
							unk_0x8E25082A46F87892(iLocal_54, joaat("weapon_pistol"), 1);
							unk_0xC5A6DFE2B8987B17(&uLocal_73);
							unk_0x57D65255D3D3B6A7(0, iLocal_55, -1, 0);
							unk_0x535008C596714F9E(uLocal_73);
							unk_0xA8E6405305C0D7DF(iLocal_54, uLocal_73);
							unk_0x02DAF06EA4F08219(&uLocal_73);
							unk_0x22321800954A532E(iLocal_54, 1);
							iLocal_52 = 6;
						}
					}
					break;
				
				case 6:
					if (unk_0xE59B7F5A03335350(iLocal_57, 0) && !unk_0x36CEFBE9B745A58D(iLocal_56))
					{
						unk_0x1B54FE28946FE109(iLocal_57, 1);
						if (unk_0xF4FCC3C1048FF2AB(iLocal_54, -2017877118) == 7)
						{
							if (unk_0xF4FCC3C1048FF2AB(iLocal_56, -1273030092) == 7)
							{
								if (unk_0x2101FAC9A9D4C29D(iLocal_55, iLocal_57, 2, 0, 0))
								{
									if (!unk_0x36CEFBE9B745A58D(iLocal_55))
									{
										if (!unk_0x25EF720B1CAB1E23(iLocal_55, iLocal_57))
										{
											if (!unk_0x8F97799512B006B7(iLocal_55, 0))
											{
												if (unk_0xF4FCC3C1048FF2AB(iLocal_55, -1794415470) == 7)
												{
													unk_0xC5A6DFE2B8987B17(&uLocal_73);
													unk_0xE896C0AD02364F2A(0, sLocal_258, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0, 0, 0, 0);
													unk_0x535008C596714F9E(uLocal_73);
													unk_0xA8E6405305C0D7DF(iLocal_55, uLocal_73);
													unk_0x02DAF06EA4F08219(&uLocal_73);
													unk_0xA902E18EDF6FA0C8(0, iLocal_72, iLocal_71);
													unk_0xA902E18EDF6FA0C8(0, iLocal_71, iLocal_72);
												}
											}
										}
									}
									if (!unk_0x36CEFBE9B745A58D(iLocal_54))
									{
										unk_0xA6F1FD44F99BFE36(iLocal_54);
										if (!unk_0x8F97799512B006B7(iLocal_54, 0))
										{
											if (unk_0xE59B7F5A03335350(iLocal_57, 0))
											{
												if (!func_81())
												{
													if (func_71(&uLocal_78, "REARRAU", "REARR_INCAR", 4, iLocal_254, 0, 0))
													{
														if (func_69(iLocal_54, iLocal_57) == 2)
														{
															if (unk_0xC5B8A5F778E321DD(iLocal_56, iLocal_55, 180f))
															{
																Local_295 = { 2.978f, -0.75f, 1f };
															}
															else
															{
																Local_295 = { 2.978f, 0.75f, 1f };
															}
														}
														else if (unk_0xC5B8A5F778E321DD(iLocal_56, iLocal_55, 180f))
														{
															Local_295 = { -2.978f, -0.75f, 1f };
														}
														else
														{
															Local_295 = { -2.978f, 0.75f, 1f };
														}
														unk_0xC5A6DFE2B8987B17(&uLocal_73);
														unk_0x8744E2AAA4C44FDC(0, unk_0xA4455714F3DCE207(iLocal_57, Local_295), iLocal_55, 0.75f, 0, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 60000);
														unk_0x57D65255D3D3B6A7(0, iLocal_55, -1, 0);
														unk_0x535008C596714F9E(uLocal_73);
														unk_0xA8E6405305C0D7DF(iLocal_54, uLocal_73);
														unk_0x02DAF06EA4F08219(&uLocal_73);
														unk_0x22321800954A532E(iLocal_54, 1);
														unk_0x0FB6723EA68C0881(iLocal_57, 0);
														iLocal_244 = 8000;
														unk_0x5AE11BC36633DE4E(0);
														iLocal_277 = unk_0x105601648511CC64();
														iLocal_52 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_68();
								}
							}
						}
					}
					break;
				
				case 7:
					if (!unk_0x36CEFBE9B745A58D(iLocal_54))
					{
						if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_54, 35f, 35f, 35f, 0, 1, 0))
						{
							if ((unk_0x105601648511CC64() - iLocal_277) > 8000)
							{
								if (!func_81())
								{
									unk_0x56F2E1B5599188FA(iLocal_54, unk_0xBC25C936A095B5BA(), 6000, 2048, 2);
									func_71(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
									iLocal_244 = 8000;
									iLocal_277 = unk_0x105601648511CC64();
								}
							}
						}
						if (unk_0xE59B7F5A03335350(iLocal_57, 0))
						{
							if (iLocal_64)
							{
								if (func_69(iLocal_54, iLocal_57) == 2)
								{
									unk_0xD179FA0466FA4FE3(iLocal_55, iLocal_57, -1, 2, 1f, 1, 0);
								}
								else
								{
									unk_0xD179FA0466FA4FE3(iLocal_55, iLocal_57, -1, 1, 1f, 1, 0);
								}
								iLocal_52 = 8;
							}
							else if (iLocal_63)
							{
								fVar6 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iLocal_55, 1), unk_0x541C2AEF053615BC(iLocal_57, 1), 1);
								if (fVar6 < 4f && iLocal_285 == 0)
								{
									unk_0x1615DB22266698DA(iLocal_55, iLocal_57, 60000, 0.5f, Local_295.f_0, Local_295.f_1, 1f, 1);
									iLocal_285 = 1;
								}
								else if (fVar6 < 3f)
								{
									unk_0xA4E856A8CD53B8DF(iLocal_55);
									iLocal_64 = 1;
								}
							}
							else if (!unk_0x96044E39418AAF17(iLocal_55, sLocal_258, "kneeling_arrest_get_up", 3))
							{
								if (func_69(iLocal_54, iLocal_57) == 2)
								{
									Local_295 = { 1.578f, -0.5f, 1f };
								}
								else
								{
									Local_295 = { -1.578f, -0.5f, 1f };
								}
								unk_0x1615DB22266698DA(iLocal_55, iLocal_57, 60000, 0.5f, Local_295.f_0, Local_295.f_1, 1f, 1);
								if (bLocal_298)
								{
									unk_0x43B967881C60631D(iLocal_55, "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
								}
								else
								{
									unk_0x43B967881C60631D(iLocal_55, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
								}
								iLocal_63 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0xE59B7F5A03335350(iLocal_57, 0))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_56))
						{
							if (unk_0x25EF720B1CAB1E23(iLocal_55, iLocal_57))
							{
								if (unk_0x2DA8CA50A72528FB(uLocal_58))
								{
									unk_0x07B8ECB35A4ED3AC(&uLocal_58);
								}
								if (unk_0x2DA8CA50A72528FB(uLocal_59))
								{
									unk_0x07B8ECB35A4ED3AC(&uLocal_59);
								}
								if (unk_0x25EF720B1CAB1E23(iLocal_54, iLocal_57))
								{
									unk_0x204BA7B1C7DD25F4(iLocal_56, iLocal_57, 10f, 786603);
									unk_0x22321800954A532E(iLocal_56, 1);
									unk_0x2E35C4FA5F0ED22F(iLocal_54, 0);
									func_169();
								}
								else if (unk_0xF4FCC3C1048FF2AB(iLocal_54, -1794415470) == 7)
								{
									unk_0xA4E856A8CD53B8DF(iLocal_54);
									unk_0xD179FA0466FA4FE3(iLocal_54, iLocal_57, 20000, 0, 1f, 1, 0);
									unk_0x22321800954A532E(iLocal_54, 1);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_54();
	if (unk_0x36CEFBE9B745A58D(iLocal_55))
	{
	}
	if (unk_0x36CEFBE9B745A58D(iLocal_54))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_55))
		{
			if (iLocal_49 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_49 == 1 || iLocal_49 == 3)
				{
					if (!func_81())
					{
						if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iLocal_55, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1) < 20f)
						{
							func_71(&uLocal_78, "REARRAU", sLocal_274, 4, iLocal_254, 0, 0);
						}
					}
				}
				if (unk_0x96044E39418AAF17(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
				{
					unk_0xC5A6DFE2B8987B17(&uLocal_73);
					unk_0xE896C0AD02364F2A(0, sLocal_258, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
					unk_0x535008C596714F9E(uLocal_73);
					unk_0xA8E6405305C0D7DF(iLocal_55, uLocal_73);
					unk_0x02DAF06EA4F08219(&uLocal_73);
				}
				else
				{
					unk_0x5558ED6D4A2DEC93(iLocal_55, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_55, 1);
				}
				unk_0x4EDE34FBADD967A6(0);
				if (iLocal_49 == 0)
				{
					iLocal_49 = 2;
				}
				func_169();
			}
		}
	}
	if (unk_0x36CEFBE9B745A58D(iLocal_55))
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
	if (unk_0x105601648511CC64() > iLocal_255 + 1000)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_54))
		{
			if (!unk_0xE642C1AC73CE364E(iLocal_54, unk_0xBC25C936A095B5BA(), Var1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_55))
		{
			if (!unk_0xE642C1AC73CE364E(iLocal_55, unk_0xBC25C936A095B5BA(), Var1, 0, 1, 0))
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
		iLocal_255 = unk_0x105601648511CC64();
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
	if (!unk_0x36CEFBE9B745A58D(iLocal_54))
	{
		switch (iLocal_50)
		{
			case 0:
				if ((iLocal_243 == 3 || iLocal_52 == 5) || iLocal_52 == 6)
				{
					if (!func_81())
					{
						unk_0xA4E856A8CD53B8DF(iLocal_54);
						unk_0xC5A6DFE2B8987B17(&uLocal_73);
						unk_0x4BED3C9D6EF14C38(0, unk_0x541C2AEF053615BC(iLocal_55, 0), 10000, 0, 2);
						unk_0xE896C0AD02364F2A(0, sLocal_258, sVar0, 8f, -4f, -1, 0, 0, 0, 0, 0);
						unk_0xE896C0AD02364F2A(0, sLocal_258, sVar1, 16f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x535008C596714F9E(uLocal_73);
						unk_0xA8E6405305C0D7DF(iLocal_54, uLocal_73);
						unk_0x02DAF06EA4F08219(&uLocal_73);
						iLocal_50 = 1;
					}
				}
				break;
			
			case 1:
				if (unk_0x96044E39418AAF17(iLocal_54, sLocal_258, sVar1, 3))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_55))
					{
						if (!func_81())
						{
							if (func_71(&uLocal_78, "REARRAU", "REARR_PRAD1", 4, iLocal_254, 0, 0))
							{
								iLocal_50 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!func_81())
						{
							if (func_71(&uLocal_78, "REARRAU", "REARR_PRAD2", 4, iLocal_254, 0, 0))
							{
								iLocal_50 = 2;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!func_81())
				{
					if (func_10())
					{
						if (unk_0xE59B7F5A03335350(iLocal_57, 0))
						{
							unk_0x7BA90AD6CF7BDBF7(iLocal_57, 0);
							unk_0x0FB6723EA68C0881(iLocal_57, 1);
						}
						unk_0xA4E856A8CD53B8DF(iLocal_54);
						unk_0xC5A6DFE2B8987B17(&uLocal_73);
						unk_0xE896C0AD02364F2A(0, sLocal_258, sVar2, 8f, -1.5f, -1, 0, 0, 0, 0, 0);
						unk_0x535008C596714F9E(uLocal_73);
						unk_0xA8E6405305C0D7DF(iLocal_54, uLocal_73);
						unk_0x02DAF06EA4F08219(&uLocal_73);
						unk_0x2EB4D46478766D87(iLocal_54, 0, 0);
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
				if (unk_0x724D816EA203A79E(iLocal_55) || !unk_0x1D403DFADBC2DE3C(iLocal_55, 0))
				{
					if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_55))
					{
						if (!func_81())
						{
							func_71(&uLocal_78, "REARRAU", "REARR_PWTF", 4, iLocal_254, 0, 0);
						}
					}
				}
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_54, 35f, 35f, 35f, 0, 1, 0))
				{
					unk_0x250AE0E1E9769BA5(iLocal_54, 1, unk_0xBC25C936A095B5BA(), 31086, 0f, 0f, 0f, 0, -1, -1);
					unk_0x250AE0E1E9769BA5(unk_0xBC25C936A095B5BA(), 1, iLocal_54, 31086, 0f, 0f, 0f, 0, -1, -1);
					if (unk_0xC9D9444186B5A374() > iLocal_244 || iLocal_262)
					{
						if (iLocal_49 == 3 || iLocal_49 == 0)
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_55))
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
								else if (!func_81())
								{
									unk_0x56F2E1B5599188FA(iLocal_54, unk_0xBC25C936A095B5BA(), 500, 2048, 2);
									func_71(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
									iLocal_244 = 8000;
								}
							}
							else if (iLocal_244 == 8000)
							{
								if (!func_81())
								{
									func_71(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
									iLocal_244 = 20000;
								}
							}
							else if (!func_81())
							{
								func_71(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
								iLocal_244 = 8000;
							}
							unk_0x5AE11BC36633DE4E(0);
						}
						else
						{
							if (unk_0x36CEFBE9B745A58D(iLocal_55))
							{
								if (!func_81())
								{
									func_71(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
									iLocal_244 = 30000;
								}
							}
							else if (!func_81())
							{
								unk_0x56F2E1B5599188FA(iLocal_54, unk_0xBC25C936A095B5BA(), 6000, 2048, 2);
								func_71(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
								iLocal_244 = unk_0x491B2241281A03B7(8, 22);
								iLocal_244 *= 30000;
							}
							unk_0x5AE11BC36633DE4E(0);
						}
					}
				}
				if (iLocal_52 != 8)
				{
					if (unk_0xE59B7F5A03335350(iLocal_57, 0))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_55))
						{
							if (!unk_0x62F3A07C43FFB568(iLocal_55, iLocal_57, 0))
							{
								func_68();
							}
						}
					}
					else
					{
						func_68();
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
		switch (unk_0x491B2241281A03B7(0, 3))
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
		unk_0xC5A6DFE2B8987B17(&uLocal_73);
		unk_0xE896C0AD02364F2A(0, sLocal_259, "enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sLocal_259, sLocal_260, 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sLocal_259, "exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sLocal_258, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x535008C596714F9E(uLocal_73);
		unk_0xA8E6405305C0D7DF(iLocal_55, uLocal_73);
		unk_0x02DAF06EA4F08219(&uLocal_73);
		iLocal_262 = 1;
	}
	else if (unk_0x96044E39418AAF17(iLocal_55, sLocal_259, "enter", 3))
	{
		if (func_5())
		{
			func_71(&uLocal_78, "REARRAU", "REARR_PRAND", 4, iLocal_254, 0, 0);
		}
	}
	else if (unk_0x96044E39418AAF17(iLocal_55, sLocal_259, "exit", 3))
	{
	}
	else if (unk_0x96044E39418AAF17(iLocal_55, sLocal_259, sLocal_260, 3))
	{
		func_71(&uLocal_78, "REARRAU", sLocal_272, 4, iLocal_254, 0, 0);
	}
	else
	{
		func_8();
	}
}

int func_5()
{
	if (unk_0x105601648511CC64() > iLocal_264 + 6000)
	{
		iLocal_264 = unk_0x105601648511CC64();
		return 1;
	}
	return 0;
}

void func_6()
{
	if (!iLocal_262)
	{
		unk_0xC5A6DFE2B8987B17(&uLocal_73);
		unk_0xE896C0AD02364F2A(0, sLocal_258, "radio_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sLocal_258, "radio_chatter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sLocal_258, "radio_exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		unk_0x57D65255D3D3B6A7(0, iLocal_55, -1, 0);
		unk_0x535008C596714F9E(uLocal_73);
		unk_0xA8E6405305C0D7DF(iLocal_54, uLocal_73);
		unk_0x02DAF06EA4F08219(&uLocal_73);
		iLocal_262 = 1;
	}
	else if (unk_0x96044E39418AAF17(iLocal_54, sLocal_258, "radio_chatter", 3))
	{
		if (func_5())
		{
			func_71(&uLocal_78, "REARRAU", "REARR_PRAD3", 4, iLocal_254, 0, 0);
		}
	}
	else if (unk_0x96044E39418AAF17(iLocal_54, sLocal_258, "radio_exit", 3))
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
				unk_0x1D403DFADBC2DE3C(iLocal_54, 0);
				unk_0x1D403DFADBC2DE3C(iLocal_55, 0);
				if (unk_0x724D816EA203A79E(iLocal_54) && unk_0x724D816EA203A79E(iLocal_55))
				{
					unk_0x1615DB22266698DA(iLocal_54, iLocal_55, -1, 3f, 0f, 0f, 1f, 0);
				}
				unk_0x5AE11BC36633DE4E(0);
			}
			break;
		
		case 1:
			if (unk_0x2DA8CA50A72528FB(uLocal_58))
			{
				unk_0x07B8ECB35A4ED3AC(&uLocal_58);
			}
			iLocal_51 = 2;
			iLocal_244 = 8000;
			iLocal_291 = unk_0x105601648511CC64();
			break;
		
		case 2:
			if (unk_0xE59B7F5A03335350(iLocal_57, 0))
			{
				if ((unk_0x105601648511CC64() - iLocal_291) > 20000)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_56))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_56, -1273030092) == 7)
						{
							unk_0xD179FA0466FA4FE3(iLocal_54, iLocal_57, -1, 0, 1f, 1, 0);
							iLocal_51 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xE59B7F5A03335350(iLocal_57, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_56))
				{
					if (unk_0x25EF720B1CAB1E23(iLocal_54, iLocal_57))
					{
						unk_0x204BA7B1C7DD25F4(iLocal_56, iLocal_57, 10f, 786603);
						unk_0x22321800954A532E(iLocal_56, 1);
						func_169();
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
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
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
	if (unk_0xE59B7F5A03335350(iLocal_57, 0))
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iVar12);
	if (unk_0xD6513D668481290A(iVar12))
	{
		if (unk_0x29EBF830A072263F(unk_0x541C2AEF053615BC(iLocal_54, 0), 1, &Var0, 1, 1077936128, 0))
		{
			if (unk_0x4995F628FD61C796(&Var0, &Var6, &uVar9, 0f, 180f, 50f, 1, 1, 1))
			{
				iLocal_57 = unk_0x61C05BF08A1E0EFE(iVar12, Var6, 0, 1, 1, 0);
				iLocal_56 = unk_0xFD8987C090669BD5(iLocal_57, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				unk_0xC8FD3EBBB90E8D7F(iLocal_56, 294, 1);
				if (!unk_0x7B2E29350659BE8E(iLocal_56, joaat("weapon_pistol"), 0))
				{
					unk_0x7A535CE1F001F3FE(iLocal_56, joaat("weapon_pistol"), -1, 0, 1);
				}
				unk_0x8E25082A46F87892(iLocal_56, joaat("weapon_pistol"), 1);
				unk_0x4106FAF8AA1D69D5(iLocal_56, iLocal_71);
				unk_0xD421BC740C5340C3(iLocal_57, 3);
				unk_0x2E35C4FA5F0ED22F(iLocal_56, 1);
				unk_0xF0A40F19AAB79E88(iLocal_57, 1084227584);
				unk_0x6FA721E3E050370C(iLocal_57, 1);
				unk_0xD7E19B03E0EB54E5(iLocal_57, 1);
				Var0 = { unk_0x541C2AEF053615BC(iLocal_57, 1) };
				Var3 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) - Var0 };
				unk_0x019CE76D5286C95C(iLocal_57, unk_0xFDC254CE02DB0919(Var3.f_0, Var3.f_1));
				unk_0x29EBF830A072263F(unk_0x541C2AEF053615BC(iLocal_54, 0), 1, &Var0, 1, 1077936128, 0);
				if (unk_0xF0F2FC9DE291567F(Var0, 2528.563f, 2639.115f, 36.9446f, 1) < 75f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				if (unk_0xF0F2FC9DE291567F(2538.71f, 2592.007f, 36.9446f, Var0, 1) < 16f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				unk_0x827661D9AAD4A354(iLocal_56, iLocal_57, Var0, 4, 7f, 786471, 5f, -1f, 1);
				unk_0xA4DFFFD5B234240D(iLocal_57, 4f);
				unk_0x0FB6723EA68C0881(iLocal_57, 1);
				iLocal_77 = 1;
				unk_0xED48729ADA05C6DE(0);
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
			if (unk_0xF4FCC3C1048FF2AB(iLocal_54, 242628503) == 7 || unk_0x105601648511CC64() > iLocal_246 + 15000)
			{
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_54, 25f, 25f, 25f, 0, 1, 0))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_54))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_54);
						unk_0xC5A6DFE2B8987B17(&uLocal_73);
						if (!unk_0x1D403DFADBC2DE3C(iLocal_55, 0))
						{
							unk_0x9565F9267674873A(0, iLocal_55, -1, 3.5f, 2f, 1073741824, 0);
						}
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 2000);
						unk_0x535008C596714F9E(uLocal_73);
						unk_0xA8E6405305C0D7DF(iLocal_54, uLocal_73);
						unk_0x02DAF06EA4F08219(&uLocal_73);
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
			if (unk_0xF4FCC3C1048FF2AB(iLocal_54, 242628503) == 1)
			{
				if (unk_0xD62938026B30481A(iLocal_54) > 0)
				{
					if (!func_81())
					{
						if (iLocal_245 < 2)
						{
							func_71(&uLocal_78, "REARRAU", "REARR_PTHANK", 4, iLocal_254, 0, 0);
							if (unk_0x2DA8CA50A72528FB(uLocal_58))
							{
								unk_0xF9C2945DB5BAB4BF(uLocal_58, 1);
							}
						}
						else
						{
							func_71(&uLocal_78, "REARRAU", "REARR_PHELP", 4, iLocal_254, 0, 0);
						}
						iLocal_243 = 2;
					}
				}
			}
			else if (!func_81())
			{
				if (iLocal_245 < 2)
				{
					func_71(&uLocal_78, "REARRAU", "REARR_PTHANK", 4, iLocal_254, 0, 0);
					if (unk_0x2DA8CA50A72528FB(uLocal_58))
					{
						unk_0xF9C2945DB5BAB4BF(uLocal_58, 1);
					}
				}
				else
				{
					func_71(&uLocal_78, "REARRAU", "REARR_PHELP", 4, iLocal_254, 0, 0);
				}
				iLocal_243 = 2;
			}
			break;
		
		case 2:
			if (!func_81())
			{
				iLocal_243 = 3;
			}
			unk_0x85DB484A637CEAB9(iLocal_54, unk_0xBC25C936A095B5BA(), 100);
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
	
	bVar0 = unk_0xD9C1758D86688CEA(iLocal_55, unk_0xBC25C936A095B5BA(), 1);
	bVar1 = func_53();
	if (bVar1)
	{
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_55))
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
							unk_0xD4E50AEC04C3A55A("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							unk_0xF9C2945DB5BAB4BF(uLocal_59, 1);
							if (!unk_0x1D403DFADBC2DE3C(iLocal_55, 0) && unk_0x96044E39418AAF17(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
							{
								unk_0xC5A6DFE2B8987B17(&uLocal_73);
								unk_0xE896C0AD02364F2A(0, sLocal_258, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0, 0, 0, 0);
								unk_0x535008C596714F9E(uLocal_73);
								unk_0xA8E6405305C0D7DF(iLocal_55, uLocal_73);
								unk_0x02DAF06EA4F08219(&uLocal_73);
								iLocal_247 = 9;
							}
							else
							{
								iLocal_247 = 3;
							}
							break;
						
						case 9:
							unk_0xD4E50AEC04C3A55A("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0xF4FCC3C1048FF2AB(iLocal_55, 242628503) == 7)
							{
								iLocal_247 = 0;
							}
							break;
						
						case 0:
							unk_0xD4E50AEC04C3A55A("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0xE642C1AC73CE364E(iLocal_55, unk_0xBC25C936A095B5BA(), 75f, 75f, 75f, 0, 1, 0))
							{
								unk_0x0DEF5E53360637F2(iLocal_55, 1);
								iLocal_247 = 3;
							}
							break;
						
						case 1:
							unk_0xD4E50AEC04C3A55A("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x4DBCE270B354E123(iLocal_55, unk_0x541C2AEF053615BC(iLocal_54, 0), 4f, 4f, 3f, 0, 1, 0))
							{
								iLocal_247 = 2;
							}
							else
							{
								unk_0xA4E856A8CD53B8DF(iLocal_55);
								unk_0xC5A6DFE2B8987B17(&uLocal_73);
								unk_0x4BED3C9D6EF14C38(0, unk_0x541C2AEF053615BC(iLocal_54, 0), 1000, 0, 2);
								unk_0x346129B364057FF6(0, unk_0x541C2AEF053615BC(iLocal_54, 0), 2f, -1, 3f, 0, 1193033728);
								unk_0x535008C596714F9E(uLocal_73);
								unk_0xA8E6405305C0D7DF(iLocal_55, uLocal_73);
								unk_0x02DAF06EA4F08219(&uLocal_73);
								iLocal_247 = 2;
							}
							break;
						
						case 2:
							unk_0xD4E50AEC04C3A55A("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x4DBCE270B354E123(iLocal_55, unk_0x541C2AEF053615BC(iLocal_54, 0), 4f, 4f, 3f, 0, 1, 0))
							{
								if (unk_0xF4FCC3C1048FF2AB(iLocal_55, 242628503) == 7 || func_71(&uLocal_78, "REARRAU", sLocal_271, 4, iLocal_254, 0, 0))
								{
									iLocal_247 = 6;
								}
							}
							else if (unk_0xF4FCC3C1048FF2AB(iLocal_55, 242628503) == 7)
							{
								unk_0xC5A6DFE2B8987B17(&uLocal_73);
								unk_0x4BED3C9D6EF14C38(0, unk_0x541C2AEF053615BC(iLocal_54, 0), 1000, 0, 2);
								unk_0x346129B364057FF6(0, unk_0x541C2AEF053615BC(iLocal_54, 0), 2f, -1, 3f, 0, 1193033728);
								unk_0x535008C596714F9E(uLocal_73);
								unk_0xA8E6405305C0D7DF(iLocal_55, uLocal_73);
								unk_0x02DAF06EA4F08219(&uLocal_73);
							}
							break;
						
						case 3:
							unk_0xD4E50AEC04C3A55A("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0xE642C1AC73CE364E(iLocal_55, unk_0xBC25C936A095B5BA(), 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_247 = 4;
							}
							else if (unk_0xE642C1AC73CE364E(iLocal_55, unk_0xBC25C936A095B5BA(), 75f, 75f, 75f, 0, 1, 0))
							{
								if (!func_81())
								{
									unk_0xA4E856A8CD53B8DF(iLocal_55);
									unk_0xC5A6DFE2B8987B17(&uLocal_73);
									unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), -1, 8f, 2f, 1073741824, 0);
									unk_0x535008C596714F9E(uLocal_73);
									unk_0xA8E6405305C0D7DF(iLocal_55, uLocal_73);
									unk_0x02DAF06EA4F08219(&uLocal_73);
									iLocal_247 = 4;
								}
							}
							else
							{
								iLocal_247 = 6;
							}
							break;
						
						case 4:
							unk_0xD4E50AEC04C3A55A("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0xE642C1AC73CE364E(iLocal_55, unk_0xBC25C936A095B5BA(), 9f, 9f, 9f, 0, 1, 0))
							{
								iLocal_292 = unk_0x105601648511CC64();
								iLocal_247 = 7;
							}
							break;
						
						case 7:
							unk_0xD4E50AEC04C3A55A("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!unk_0x640A454FD54BBEF2(iLocal_55, unk_0xBC25C936A095B5BA()))
							{
								unk_0x56F2E1B5599188FA(iLocal_55, unk_0xBC25C936A095B5BA(), -1, 2064, 2);
							}
							if (!unk_0xC5B8A5F778E321DD(iLocal_55, unk_0xBC25C936A095B5BA(), 30f))
							{
								unk_0x85DB484A637CEAB9(iLocal_55, unk_0xBC25C936A095B5BA(), -1);
							}
							if ((unk_0x105601648511CC64() - iLocal_292) > 2000)
							{
								iLocal_247 = 5;
							}
							break;
						
						case 5:
							unk_0xD4E50AEC04C3A55A("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x96044E39418AAF17(iLocal_55, sLocal_258, "Thanks_Male_05", 3) || unk_0xF4FCC3C1048FF2AB(iLocal_55, 242628503) == 7)
							{
								if (!func_81())
								{
									if (iLocal_245 < 2)
									{
										func_71(&uLocal_78, "REARRAU", sLocal_266, 4, iLocal_254, 0, 0);
										unk_0xE896C0AD02364F2A(iLocal_55, sLocal_258, "Thanks_Male_05", 16f, -16f, -1, 16, 0, 0, 0, 0);
									}
									else
									{
										func_71(&uLocal_78, "REARRAU", sLocal_270, 4, iLocal_254, 0, 0);
									}
									func_15(func_48(), 1, 250, 0, 0);
									unk_0x44C98C11ED6DD327(iLocal_55);
									iLocal_247 = 6;
								}
							}
							break;
						
						case 6:
							unk_0xD4E50AEC04C3A55A("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!func_81())
							{
								unk_0x5558ED6D4A2DEC93(iLocal_55, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
								func_169();
							}
							break;
						}
				}
			}
			else
			{
				if (!func_81())
				{
					func_71(&uLocal_78, "REARRAU", sLocal_273, 4, iLocal_254, 0, 0);
				}
				unk_0x5558ED6D4A2DEC93(iLocal_55, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
				func_169();
			}
		}
		else
		{
			func_13();
			unk_0x5558ED6D4A2DEC93(iLocal_55, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
			if (bVar0 == 1)
			{
				iLocal_49 = 1;
			}
			if (!func_81())
			{
				func_71(&uLocal_78, "REARRAU", sLocal_270, 4, iLocal_254, 0, 0);
			}
			func_169();
		}
	}
}

void func_13()
{
	Global_14666 = 0;
	func_14();
}

void func_14()
{
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x5C7DC611411E2CF9();
		Global_16811 = 0;
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_16(Global_105220.f_28021[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x6CB99B97664C3727(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3A57956BCE003880(iVar1, iVar0, 1);
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
	
	func_47();
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
					func_46(99, 1);
					func_45(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_45(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_45(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_29(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_25(5))
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
							func_45(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_45(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_45(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_25(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_45(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_45(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_45(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_45(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_45(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_45(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_45(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_45(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_45(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x2C087518F90303D5())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_45(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_45(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_45(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_45(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_45(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_45(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_25(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_45(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_45(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_45(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_45(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_45(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_45(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_24(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_46(95, iParam3);
					break;
				
				case 1:
					func_46(97, iParam3);
					break;
				
				case 2:
					func_46(96, iParam3);
					break;
			}
			func_46(98, iParam3);
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
	iVar5 = (Global_53141[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53141[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53141[iVar2] = 2147483647;
				}
				else
				{
					Global_53141[iVar2] = (Global_53141[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_45(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_45(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_45(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53141[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53141[iVar2];
			Global_53141[iVar2] = (Global_53141[iVar2] - iParam3);
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
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_105220.f_20535.f_233[iVar2 /*69*/]++;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_1++;
		if (Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_35905 == 15)
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
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53149[iVar0 /*3*/][0] = Global_105220.f_20535[iVar0];
		Global_53149.f_31[iVar0 /*3*/][0] = Global_105220.f_20535.f_11[iVar0];
		Global_53149.f_62[iVar0 /*3*/][0] = Global_105220.f_20535.f_22[iVar0];
		Global_53149.f_93[iVar0 /*3*/][0] = Global_105220.f_20535.f_33[iVar0];
		Global_53149.f_124[iVar0 /*3*/][0] = Global_105220.f_20535.f_44[iVar0];
		Global_53149.f_155[iVar0 /*3*/][0] = Global_105220.f_20535.f_55[iVar0];
		Global_53149.f_186[iVar0 /*3*/][0] = Global_105220.f_20535.f_66[iVar0];
		Global_53149.f_217[iVar0 /*3*/][0] = Global_105220.f_20535.f_77[iVar0];
		Global_53149.f_248[iVar0 /*3*/][0] = Global_105220.f_20535.f_88[iVar0];
		if (!bParam0)
		{
			Global_53149[iVar0 /*3*/][1] = Global_105220.f_20535[iVar0];
			Global_53149.f_31[iVar0 /*3*/][1] = Global_105220.f_20535.f_11[iVar0];
			Global_53149.f_62[iVar0 /*3*/][1] = Global_105220.f_20535.f_22[iVar0];
			Global_53149.f_93[iVar0 /*3*/][1] = Global_105220.f_20535.f_33[iVar0];
			Global_53149.f_124[iVar0 /*3*/][1] = Global_105220.f_20535.f_44[iVar0];
			Global_53149.f_155[iVar0 /*3*/][1] = Global_105220.f_20535.f_55[iVar0];
			Global_53149.f_186[iVar0 /*3*/][1] = Global_105220.f_20535.f_66[iVar0];
			Global_53149.f_217[iVar0 /*3*/][1] = Global_105220.f_20535.f_77[iVar0];
			Global_53149.f_248[iVar0 /*3*/][1] = Global_105220.f_20535.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53141[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_19(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_22(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0) || unk_0xFA30DFD0084E92FE(Global_2097152[func_21() /*12171*/].f_7688.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_2097152[func_21() /*12171*/].f_7688.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_20(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
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
		
		case 8:
			return "COUP_XMAS2017";
		
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

int func_22(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar18, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_23()
{
	return Global_1312736;
}

void func_24(int iParam0)
{
	func_46(93, iParam0);
	func_46(29, iParam0);
	func_46(30, iParam0);
}

bool func_25(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_26(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_2097152[func_21() /*12171*/].f_7688.f_10, iParam0);
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar1 = func_28(iParam0, iParam1);
	uVar2 = func_27(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

int func_29(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x6D5CBCB6411EDE89(27))
	{
		return 0;
	}
	if (unk_0x6CB99B97664C3727(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6CB99B97664C3727(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3A57956BCE003880(joaat("num_cash_spent"), iVar1, 1);
		func_44(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_30(27, 1);
	return 1;
}

int func_30(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_31(iParam0, iParam1);
}

int func_31(int iParam0, int iParam1)
{
	if (func_43(14) && !func_42(iParam0))
	{
		return 0;
	}
	if (unk_0x6D5CBCB6411EDE89(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25524 != 0 && !Global_70978)
	{
		return 0;
	}
	if (func_41(&Global_4267702))
	{
		if (func_39(&Global_4267702, iParam0))
		{
			return 0;
		}
		if (func_32(&Global_4267702, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xE07F36ACFF1AA002(iParam0))
		{
			return 0;
		}
		if (unk_0x6D5CBCB6411EDE89(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_32(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_43(14) && !func_42(iParam1))
	{
		return 0;
	}
	if (func_39(uParam0, iParam1))
	{
		return 0;
	}
	if (func_38(uParam0) < 0f)
	{
		func_37(uParam0, 0);
	}
	func_35(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_33(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_43(14) && !func_42(iParam1))
	{
		return 0;
	}
	if (func_39(uParam0, iParam1))
	{
		return 0;
	}
	if (func_38(uParam0) < 0f)
	{
		func_37(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_34(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_34(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_35(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_36(uParam0, iVar0);
		iVar0++;
	}
	func_37(uParam0, (Global_4267701 - 0.5f));
}

void func_36(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_37(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_38(var uParam0)
{
	return uParam0->f_80;
}

bool func_39(var uParam0, int iParam1)
{
	return func_40(uParam0, iParam1) != -1;
}

int func_40(var uParam0, int iParam1)
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

bool func_41(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_42(int iParam0)
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

bool func_43(int iParam0)
{
	return Global_35905 == iParam0;
}

int func_44(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
	}
	return 0;
}

void func_45(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_46(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_51709[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_51709[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_47()
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53141[0] == iVar0)
		{
			Global_53141[0] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53141[1] == iVar0)
		{
			Global_53141[1] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53141[2] == iVar0)
		{
			Global_53141[2] = iVar0;
		}
	}
}

int func_48()
{
	func_49();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_49()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_52(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_51(unk_0xBC25C936A095B5BA());
			if (func_50(iVar0) && (!func_43(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_50(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_50(int iParam0)
{
	return iParam0 < 3;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(uParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)
{
	if (func_50(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_53()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (unk_0xE59B7F5A03335350(iLocal_57, 0))
	{
		if (unk_0xE642C1AC73CE364E(iLocal_57, iLocal_55, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			return 1;
		}
	}
	iVar1 = unk_0xDD69F88FEB1D3ABD(unk_0x541C2AEF053615BC(iLocal_55, 0), fVar0, fVar0, fVar0, -1);
	if (!unk_0x36CEFBE9B745A58D(iVar1))
	{
		if (unk_0x6F79ECA8C83E4357(iVar1) == joaat("s_f_y_cop_01") || unk_0x6F79ECA8C83E4357(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar1 = unk_0xDD69F88FEB1D3ABD(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), fVar0, fVar0, fVar0, -1);
	if (!unk_0x36CEFBE9B745A58D(iVar1))
	{
		if (unk_0x6F79ECA8C83E4357(iVar1) == joaat("s_f_y_cop_01") || unk_0x6F79ECA8C83E4357(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar2 = unk_0x67FCE1EB536A0735(unk_0x541C2AEF053615BC(iLocal_55, 0), fVar0, 0, 1024);
	if (unk_0xE59B7F5A03335350(iVar2, 0))
	{
		return 1;
	}
	iVar2 = unk_0x67FCE1EB536A0735(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), fVar0, 0, 1024);
	if (unk_0xE59B7F5A03335350(iVar2, 0))
	{
		return 1;
	}
	return 0;
}

void func_54()
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_55))
	{
		bVar0 = unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_55);
		uVar1 = unk_0xD9C1758D86688CEA(iLocal_55, unk_0xBC25C936A095B5BA(), 1);
		if (((uVar1 || func_67()) || func_65()) || bVar0)
		{
			func_64();
			if (bLocal_74)
			{
				if (((bVar0 || uVar1) && !unk_0x2CDE18D6C89522AD(iLocal_55)) && !unk_0x5237AF95232D78C5(iLocal_55, 0))
				{
					unk_0xA4E856A8CD53B8DF(iLocal_55);
					unk_0x50FBC3BBBAC48D06(iLocal_55, 500, 2000, 0, 0, 0, 0);
					unk_0xEE7131C3C73E7282(iLocal_55, -1);
					unk_0x22321800954A532E(iLocal_55, 1);
				}
				else if (!unk_0x5237AF95232D78C5(iLocal_55, 0) && !unk_0x2CDE18D6C89522AD(iLocal_55))
				{
					unk_0xA4E856A8CD53B8DF(iLocal_55);
					unk_0xEE7131C3C73E7282(iLocal_55, -1);
					unk_0x22321800954A532E(iLocal_55, 1);
				}
				func_60(0);
				if (!func_81())
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_54) && iLocal_286 == 0)
					{
						if (func_71(&uLocal_78, "REARRAU", "REARR_PWTF", 4, iLocal_254, 0, 0))
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
		if (unk_0x2DA8CA50A72528FB(uLocal_59))
		{
			unk_0x07B8ECB35A4ED3AC(&uLocal_59);
			func_59(&uLocal_78, 2);
		}
		func_64();
		if (unk_0xD9C1758D86688CEA(iLocal_55, unk_0xBC25C936A095B5BA(), 1))
		{
			if (bLocal_74)
			{
				func_60(1);
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 3;
			}
		}
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_54))
	{
		if (bLocal_61)
		{
			if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				func_169();
			}
		}
		if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
		{
		}
		iVar2 = 0;
		if (unk_0x724D816EA203A79E(iLocal_56))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_56))
			{
				if ((unk_0xD9C1758D86688CEA(iLocal_56, unk_0xBC25C936A095B5BA(), 1) && unk_0x8D66276473ABD7CC(iLocal_56) < 190) || (unk_0xD9C1758D86688CEA(iLocal_56, unk_0xBC25C936A095B5BA(), 1) && unk_0x2CDE18D6C89522AD(iLocal_56)))
				{
					iVar2 = 1;
				}
				if (unk_0x724D816EA203A79E(iLocal_57) && unk_0xD9C1758D86688CEA(iLocal_57, unk_0xBC25C936A095B5BA(), 1))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((unk_0xD9C1758D86688CEA(iLocal_54, unk_0xBC25C936A095B5BA(), 1) && unk_0x8D66276473ABD7CC(iLocal_54) < 190) || func_58()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || func_57()) || (unk_0xD9C1758D86688CEA(iLocal_54, unk_0xBC25C936A095B5BA(), 1) && unk_0x2CDE18D6C89522AD(iLocal_54))) || iVar2 == 1)
		{
			func_60(1);
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
		if (unk_0xD9C1758D86688CEA(iLocal_54, unk_0xBC25C936A095B5BA(), 1))
		{
			if (iLocal_287 == 0)
			{
				iLocal_287 = 1;
				iLocal_290 = unk_0x105601648511CC64();
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
		if (!unk_0x36CEFBE9B745A58D(iLocal_55))
		{
			unk_0x5502708AECB47F5D(iLocal_55);
		}
		if (unk_0x2DA8CA50A72528FB(uLocal_58))
		{
			unk_0x07B8ECB35A4ED3AC(&uLocal_58);
			func_59(&uLocal_78, 1);
		}
	}
	if (iLocal_287)
	{
		if ((unk_0x105601648511CC64() - iLocal_290) > 5000)
		{
			unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 3, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			iLocal_287 = 0;
		}
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_54) && !unk_0x36CEFBE9B745A58D(iLocal_55))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_54, unk_0xBC25C936A095B5BA(), 1) && unk_0xD9C1758D86688CEA(iLocal_55, unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x8D66276473ABD7CC(iLocal_54) < 190 && unk_0x8D66276473ABD7CC(iLocal_55) < 190)
			{
				func_64();
				func_60(1);
				iLocal_49 = 1;
			}
		}
		if (!unk_0xE642C1AC73CE364E(iLocal_55, iLocal_54, 110f, 110f, 40f, 0, 1, 0))
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_54, 20f, 20f, 20f, 0, 1, 0))
			{
				func_55();
				unk_0x4EDE34FBADD967A6(0);
				func_71(&uLocal_78, "REARRAU", "REARR_PORUN", 4, iLocal_254, 0, 0);
			}
			else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_55, 40f, 40f, 40f, 0, 1, 0))
			{
				func_55();
				unk_0x4EDE34FBADD967A6(0);
				func_71(&uLocal_78, "REARRAU", sLocal_267, 4, iLocal_254, 0, 0);
			}
			func_169();
		}
	}
	if (unk_0x36CEFBE9B745A58D(iLocal_54) && unk_0x36CEFBE9B745A58D(iLocal_55))
	{
		func_169();
	}
	if (unk_0x36CEFBE9B745A58D(iLocal_55))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_54))
		{
			if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_54, 100f, 100f, 40f, 0, 1, 0))
			{
				func_169();
			}
		}
	}
}

void func_55()
{
	Global_14666 = 0;
	func_56();
}

void func_56()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

bool func_57()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) == joaat("bulldozer"))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_54))
			{
				if (unk_0xE921F8171F0733B3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iLocal_54))
				{
					bVar0 = true;
				}
			}
		}
		if (unk_0xE59B7F5A03335350(iLocal_57, 0))
		{
			if (unk_0xE921F8171F0733B3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iLocal_57))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_77)
		{
			if (unk_0xD9C1758D86688CEA(iLocal_57, unk_0xBC25C936A095B5BA(), 1))
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

int func_58()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	Var0 = { 3f, 3f, 3f };
	Var3 = { -3f, -3f, -3f };
	if (unk_0x04880508C862E589(unk_0x823166D9421223CA(iLocal_54, 31086, 0f, 0f, 0f), 0.5f, 1))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_55))
		{
			return 1;
		}
		else if (!unk_0x04880508C862E589(unk_0x823166D9421223CA(iLocal_55, 31086, 0f, 0f, 0f), 2f, 1))
		{
			return 1;
		}
	}
	if (unk_0xD9ED1893F2541636(unk_0x823166D9421223CA(iLocal_54, 31086, 0f, 0f, 0f), 3f))
	{
		return 1;
	}
	if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_54, 5f, 5f, 5f, 0, 1, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_54))
		{
			if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_54) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_54))
			{
				if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar6, 1))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						return 1;
					}
				}
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_55))
		{
			if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_55) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_55))
			{
				if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar6, 1))
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
	Var0 = { Var0 + unk_0x823166D9421223CA(iLocal_54, 31086, 0f, 0f, 0f) };
	Var3 = { Var3 + unk_0x823166D9421223CA(iLocal_54, 31086, 0f, 0f, 0f) };
	if (((unk_0x1749F74D4E70A733(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0x1749F74D4E70A733(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0x1749F74D4E70A733(Var3, Var0, joaat("weapon_stickybomb"), 1)) || unk_0x1749F74D4E70A733(Var3, Var0, joaat("vehicle_weapon_tank"), 1))
	{
		return 1;
	}
	return 0;
}

void func_59(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_60(int iParam0)
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_54))
	{
		unk_0x5502708AECB47F5D(iLocal_54);
		if (!bLocal_61)
		{
			unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 2, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			unk_0xB105531EDD3DE51B(iLocal_54, 1);
			if (unk_0x2DA8CA50A72528FB(uLocal_58))
			{
				unk_0xF9C2945DB5BAB4BF(uLocal_58, 0);
			}
			if (iParam0 == 1)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_55))
				{
					if (unk_0xF4FCC3C1048FF2AB(iLocal_55, 1805844857) == 7)
					{
						if (unk_0x96044E39418AAF17(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
						{
							unk_0xC5A6DFE2B8987B17(&uLocal_73);
							unk_0xE896C0AD02364F2A(0, sLocal_258, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							unk_0x5558ED6D4A2DEC93(0, iLocal_54, 150f, -1, 0, 0);
							unk_0x535008C596714F9E(uLocal_73);
							unk_0xA8E6405305C0D7DF(iLocal_55, uLocal_73);
							unk_0x02DAF06EA4F08219(&uLocal_73);
							unk_0x3E2B7D349B5735D3(iLocal_55, joaat("MotionState_Run"), 0, 0, 0);
							unk_0x22321800954A532E(iLocal_55, 1);
						}
						else
						{
							unk_0xA4E856A8CD53B8DF(iLocal_55);
							unk_0x5558ED6D4A2DEC93(iLocal_55, iLocal_54, 150f, -1, 0, 0);
						}
					}
				}
				if ((!unk_0x1D403DFADBC2DE3C(iLocal_55, 0) && !unk_0x36CEFBE9B745A58D(iLocal_55)) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iLocal_55, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1) < 20f)
					{
						if (!func_81())
						{
							func_71(&uLocal_78, "REARRAU", sLocal_273, 4, iLocal_254, 0, 0);
						}
					}
				}
			}
			unk_0xA4E856A8CD53B8DF(iLocal_54);
			unk_0xC5A6DFE2B8987B17(&uLocal_73);
			unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
			unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
			unk_0x535008C596714F9E(uLocal_73);
			unk_0xA8E6405305C0D7DF(iLocal_54, uLocal_73);
			unk_0x02DAF06EA4F08219(&uLocal_73);
			unk_0x22321800954A532E(iLocal_54, 1);
			unk_0xE43AD8CB1B4DDED9(iLocal_54, 1, 0);
			if (unk_0xE59B7F5A03335350(iLocal_57, 0))
			{
				unk_0xD421BC740C5340C3(iLocal_57, 1);
			}
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x36CEFBE9B745A58D(iLocal_54))
			{
				if (!unk_0x2CDE18D6C89522AD(iLocal_54))
				{
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_56))
			{
				func_61();
			}
			bLocal_61 = true;
		}
	}
}

void func_61()
{
	if (unk_0x724D816EA203A79E(iLocal_56))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_56))
		{
			unk_0xC5A6DFE2B8987B17(&uLocal_73);
			unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
			unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
			unk_0x535008C596714F9E(uLocal_73);
			unk_0xA8E6405305C0D7DF(iLocal_56, uLocal_73);
			unk_0x02DAF06EA4F08219(&uLocal_73);
			unk_0x22321800954A532E(iLocal_56, 1);
			unk_0xE43AD8CB1B4DDED9(iLocal_56, 1, 0);
		}
	}
}

void func_62()
{
	Global_14666 = 0;
	func_63();
}

void func_63()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
	}
}

void func_64()
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_55))
	{
		if (unk_0x2DA8CA50A72528FB(uLocal_59))
		{
			unk_0xF9C2945DB5BAB4BF(uLocal_59, 0);
		}
		unk_0x5502708AECB47F5D(iLocal_55);
	}
}

int func_65()
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
	{
		if (bLocal_74)
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_54))
			{
				if ((unk_0x105601648511CC64() - iLocal_276) > 1000)
				{
					func_66();
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

void func_66()
{
	if (!func_81())
	{
		if (iLocal_275 < 3)
		{
			unk_0x56F2E1B5599188FA(iLocal_54, unk_0xBC25C936A095B5BA(), 6000, 2048, 2);
			func_71(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
		}
	}
	iLocal_275++;
	iLocal_276 = unk_0x105601648511CC64();
}

int func_67()
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0xE921F8171F0733B3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iLocal_55))
		{
			if (bLocal_74)
			{
				if (iLocal_52 != 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_55, 1), Local_68) > 2.5f)
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
		if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_55))
		{
			if (unk_0x2CDE18D6C89522AD(iLocal_55))
			{
				if (iLocal_52 != 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_55, 1), Local_68) > 2.5f)
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
				if ((unk_0x105601648511CC64() - iLocal_276) > 1000)
				{
					func_66();
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

void func_68()
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
						if (!unk_0x36CEFBE9B745A58D(iLocal_54))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_55))
							{
								func_55();
								unk_0x4EDE34FBADD967A6(0);
								func_71(&uLocal_78, "REARRAU", "REARR_PRAD3", 4, iLocal_254, 0, 0);
							}
						}
						iLocal_245 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_81())
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_55))
					{
						if (unk_0x96044E39418AAF17(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
						{
							unk_0xC5A6DFE2B8987B17(&uLocal_73);
							unk_0xE896C0AD02364F2A(0, sLocal_258, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							unk_0x5558ED6D4A2DEC93(0, iLocal_54, 150f, -1, 0, 0);
							unk_0x535008C596714F9E(uLocal_73);
							unk_0xA8E6405305C0D7DF(iLocal_55, uLocal_73);
							unk_0x02DAF06EA4F08219(&uLocal_73);
							unk_0x3E2B7D349B5735D3(iLocal_55, joaat("MotionState_Run"), 0, 0, 0);
							unk_0x22321800954A532E(iLocal_55, 1);
						}
						else
						{
							unk_0x5558ED6D4A2DEC93(iLocal_55, iLocal_54, 150f, -1, 0, 0);
						}
						unk_0x22321800954A532E(iLocal_55, 1);
						unk_0x65E471E4A2D56226(iLocal_55, 101, 0);
						func_71(&uLocal_78, "REARRAU", sLocal_269, 4, iLocal_254, 0, 0);
						iLocal_245 = 2;
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_54))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_54);
						iLocal_245 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0x36CEFBE9B745A58D(iLocal_54))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_55))
					{
						unk_0xA902E18EDF6FA0C8(2, iLocal_72, iLocal_71);
						unk_0xA902E18EDF6FA0C8(2, iLocal_71, iLocal_72);
						unk_0xB8CBD998685C0685(iLocal_54, iLocal_55, 0, 16);
					}
					else
					{
						unk_0x8CE2798B9A7027EC(iLocal_54, 1193033728, 0);
						func_169();
					}
					unk_0x22321800954A532E(iLocal_54, 1);
				}
				iLocal_75 = 1;
				break;
			}
	}
}

int func_69(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (unk_0xE59B7F5A03335350(iParam1, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
		}
		else
		{
			return -1;
		}
		Var3 = { unk_0xA4455714F3DCE207(iParam1, 1f, -0.5f, 0f) };
		Var9 = { Var3 - Var0 };
		Var6 = { unk_0xA4455714F3DCE207(iParam1, -1f, -0.5f, 0f) };
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

void func_70()
{
	if (!func_81())
	{
		if (!iLocal_293)
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_54, 30f, 30f, 30f, 0, 1, 0))
			{
				func_71(&uLocal_78, "REARRAU", "REARR_PSTOP", 4, iLocal_254, 0, 0);
				iLocal_293 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		else if (unk_0xC9D9444186B5A374() > 8000)
		{
			if (unk_0x491B2241281A03B7(0, 99) > 50)
			{
				func_71(&uLocal_78, "REARRAU", "REARR_PRAND", 4, iLocal_254, 0, 0);
			}
			else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
			{
				func_71(&uLocal_78, "REARRAU", sLocal_268, 4, iLocal_254, 0, 0);
			}
			else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
			{
				func_71(&uLocal_78, "REARRAU", sLocal_268, 4, iLocal_254, 0, 0);
			}
			else
			{
				func_71(&uLocal_78, "REARRAU", sLocal_272, 4, iLocal_254, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
		}
	}
}

bool func_71(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_72(sParam2, iParam3, 0);
}

int func_72(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
				}
				else
				{
					func_56();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_79(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_78();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_77();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_76())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
				}
			}
			if (func_75())
			{
				return 0;
			}
			else
			{
				switch (Global_14493.f_1)
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
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_74();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_73();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_56();
	}
	return 0;
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

void func_74()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_75()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
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

void func_77()
{
	if (func_43(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_48();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

void func_78()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_79(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = uParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

int func_81()
{
	if (Global_15800 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	if (unk_0xE642C1AC73CE364E(iLocal_55, iLocal_54, 3.5f, 3.5f, 3.5f, 0, 1, 0) || func_85())
	{
		if (!func_83(1063675494))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(float fParam0)
{
	var uVar0;
	struct<3> Var1;
	
	if (unk_0x4BA8405CBD278065(unk_0x541C2AEF053615BC(iLocal_55, 1), &uVar0, &Var1))
	{
		if (func_84(Var1, 0f, 0f, 1f) < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

float func_84(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_85()
{
	return 0;
}

int func_86(int iParam0)
{
	if (unk_0x724D816EA203A79E(uParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_87()
{
	if ((unk_0x105601648511CC64() - iLocal_253) > 500)
	{
		if ((iLocal_49 != 1 && iLocal_49 != 3) && iLocal_49 != 2)
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_59))
			{
				unk_0xF9C2945DB5BAB4BF(uLocal_59, iLocal_248);
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
			if (unk_0x2DA8CA50A72528FB(uLocal_58))
			{
				unk_0xF9C2945DB5BAB4BF(uLocal_58, iLocal_249);
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
		iLocal_253 = unk_0x105601648511CC64();
	}
	if (!bLocal_289 == bLocal_288)
	{
		if (bLocal_288)
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_59))
			{
				unk_0x222805B89367761E(uLocal_59, 1);
			}
			if (unk_0x2DA8CA50A72528FB(uLocal_58))
			{
				unk_0x222805B89367761E(uLocal_58, 1);
			}
		}
		else
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_59))
			{
				unk_0x222805B89367761E(uLocal_59, 0);
			}
			if (unk_0x2DA8CA50A72528FB(uLocal_58))
			{
				unk_0x222805B89367761E(uLocal_58, 0);
			}
		}
		bLocal_289 = bLocal_288;
	}
}

int func_88(float fParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	Var2 = { fParam0, fParam0, 50f };
	if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_279, Local_282, 194.75f, 0, 1, 0))
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_54))
	{
		if (unk_0xE642C1AC73CE364E(iLocal_54, unk_0xBC25C936A095B5BA(), Var2, 0, 1, 0))
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
	if (!unk_0x36CEFBE9B745A58D(iLocal_55))
	{
		if (unk_0xE642C1AC73CE364E(iLocal_55, unk_0xBC25C936A095B5BA(), Var2, 0, 1, 0))
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

int func_89(int iParam0)
{
	if (func_94())
	{
		Global_105210 = 1;
		Global_105207 = unk_0x105601648511CC64();
		if (func_93(Global_105209))
		{
			func_90(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_93(Global_105209))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_105220.f_24966.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_91(func_92(iParam0), -1);
					Global_105220.f_24966.f_2++;
					unk_0xF0059F27F7BB6680(&Global_105216, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xFA30DFD0084E92FE(Global_105216, 1))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_91(func_92(iParam0), -1);
					Global_105220.f_24966.f_3++;
					unk_0xF0059F27F7BB6680(&Global_105216, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xFA30DFD0084E92FE(Global_105216, 2))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_91(func_92(iParam0), -1);
					Global_105220.f_24966.f_4++;
					unk_0xF0059F27F7BB6680(&Global_105216, 2);
				}
			}
			break;
	}
}

void func_91(var uParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(uParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

char* func_92(int iParam0)
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

int func_93(int iParam0)
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

int func_94()
{
	switch (func_95(&Global_25336, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_95(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90578.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_99(0))
		{
			return 0;
		}
		Global_35869++;
		*uParam0 = Global_35869;
		unk_0x3D7FF8418367D451(unk_0xFC1CAE18F3ECBF2D(), 0);
		Global_17206.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x27CBA62D1F6DF074(8);
		}
		Global_35905 = iParam2;
		Global_35867 = *uParam0;
		Global_35868 = iParam4;
		Global_35866 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35866 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35866)
			{
				if (Global_35872[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35867 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_97(iParam2))
		{
			return 0;
		}
		if (Global_35866 == 8)
		{
			return 0;
		}
		Global_35869++;
		*uParam0 = Global_35869;
		Global_35872[Global_35866 /*4*/] = Global_35869;
		Global_35872[Global_35866 /*4*/].f_1 = iParam1;
		Global_35872[Global_35866 /*4*/].f_2 = iParam2;
		Global_35872[Global_35866 /*4*/].f_3 = 0;
		Global_35866++;
		if (iParam4 != 0)
		{
			func_96(uParam0, iParam4);
		}
	}
	return 2;
}

void func_96(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35866 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35866)
	{
		if (Global_35872[iVar0 /*4*/] == *uParam0)
		{
			Global_35872[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_97(int iParam0)
{
	return func_98(iParam0, Global_35905);
}

int func_98(int iParam0, int iParam1)
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

int func_99(int iParam0)
{
	if (Global_35905 == 15)
	{
		return 0;
	}
	if (func_97(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_100()
{
	float fVar0;
	
	fVar0 = 50f;
	if (!unk_0x36CEFBE9B745A58D(iLocal_54))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_55))
		{
			if ((unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_54, fVar0, fVar0, fVar0, 0, 1, 0) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_55, fVar0, fVar0, fVar0, 0, 1, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_279, Local_282, 194.75f, 0, 1, 0))
			{
				if (!unk_0x2DA8CA50A72528FB(uLocal_59))
				{
					uLocal_59 = func_101(iLocal_55, 0, 145);
				}
				if (!unk_0x2DA8CA50A72528FB(uLocal_58))
				{
					uLocal_58 = func_101(iLocal_54, 0, 145);
				}
				unk_0x222805B89367761E(uLocal_59, 0);
				unk_0x222805B89367761E(uLocal_58, 0);
				unk_0xC1B1E9A034A63A62(0);
				return 1;
			}
		}
		else
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_54))
			{
				if (!unk_0x2DA8CA50A72528FB(uLocal_58))
				{
					uLocal_58 = func_101(iLocal_54, 0, 145);
				}
			}
			if (unk_0x2DA8CA50A72528FB(uLocal_59))
			{
				unk_0x07B8ECB35A4ED3AC(&uLocal_59);
			}
			return 1;
		}
	}
	else
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_55))
		{
			if (!unk_0x2DA8CA50A72528FB(uLocal_59))
			{
				uLocal_59 = func_101(iLocal_55, 0, 145);
			}
		}
		if (unk_0x2DA8CA50A72528FB(uLocal_58))
		{
			unk_0x07B8ECB35A4ED3AC(&uLocal_58);
		}
		return 1;
	}
	return 0;
}

var func_101(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_102(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(uVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_105220.f_28021[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(uVar0, &(Global_105220.f_28021[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_102(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x724D816EA203A79E(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_103(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(uVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_103(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_103(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_103(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_104()
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
	unk_0xF243B7A14FCFD0F4(iVar0);
	unk_0xF243B7A14FCFD0F4(iVar1);
	unk_0xF243B7A14FCFD0F4(joaat("prop_ld_binbag_01"));
	unk_0x522053D86D6E1C7A(sLocal_258);
	unk_0x522053D86D6E1C7A(sLocal_259);
	unk_0x37FA5A8A7F1136BA("MOVE_M@BAIL_BOND_NOT_TAZERED");
	unk_0x37FA5A8A7F1136BA("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((unk_0xD6513D668481290A(iVar0) && unk_0xD6513D668481290A(iVar1)) && unk_0xD6513D668481290A(joaat("prop_ld_binbag_01"))) && unk_0xF9E082857622D91E(sLocal_258)) && unk_0xF9E082857622D91E(sLocal_259)) && unk_0x320539481B2F0121("MOVE_M@BAIL_BOND_NOT_TAZERED")) && unk_0x320539481B2F0121("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_54 = unk_0x01B3635C3E8EDD81(6, iVar0, Var2, fVar8, 1, 1);
		unk_0xC8FD3EBBB90E8D7F(iLocal_54, 294, 1);
		unk_0xE43AD8CB1B4DDED9(iLocal_54, 1, 0);
		unk_0xEC9E10B23689A01D(iLocal_54, 1);
		unk_0x2E35C4FA5F0ED22F(iLocal_54, 1);
		func_106(&uLocal_78, 1, iLocal_54, "ArrestCop", 0, 1);
		unk_0xB71D41C0310C93DE(iLocal_54, 1, 1);
		unk_0xEB061E1EBFED4D59(iLocal_54, 1);
		iLocal_55 = unk_0x01B3635C3E8EDD81(26, iVar1, Var5, fVar9, 1, 1);
		unk_0xE43AD8CB1B4DDED9(iLocal_55, 1, 0);
		unk_0xC8FD3EBBB90E8D7F(iLocal_55, 42, 1);
		unk_0xC8FD3EBBB90E8D7F(iLocal_55, 281, 1);
		unk_0x2E35C4FA5F0ED22F(iLocal_55, 1);
		func_106(&uLocal_78, 2, iLocal_55, sLocal_265, 0, 1);
		unk_0xB71D41C0310C93DE(iLocal_55, 1, 1);
		if (iLocal_53 == 1)
		{
			unk_0xB0031DDAE4FF0BC3(iLocal_55, 0, 0, 2, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_55, 2, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_55, 3, 2, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_55, 4, 0, 0, 0);
		}
		func_105();
		if (func_48() == 0)
		{
			func_106(&uLocal_78, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		}
		else if (func_48() == 1)
		{
			func_106(&uLocal_78, 0, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
		}
		else if (func_48() == 2)
		{
			func_106(&uLocal_78, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
		}
		if (!unk_0x7B2E29350659BE8E(iLocal_54, joaat("weapon_pistol"), 0))
		{
			unk_0x7A535CE1F001F3FE(iLocal_54, joaat("weapon_pistol"), -1, 0, 1);
		}
		unk_0x8E25082A46F87892(iLocal_54, joaat("weapon_pistol"), 1);
		uLocal_60 = unk_0xB6896943DA475493(joaat("prop_ld_binbag_01"), Local_65.f_0, Local_65.f_1, (Local_65.f_2 + 100f), 1, 1, 0);
		unk_0xDC078F87049ECECE(uLocal_60, 0, 0);
		if (unk_0x2A488C176D52CCA5(2411.32f, 4958.76f, 45.19f, Local_65) < 10f)
		{
			iLocal_53 = 1;
			unk_0xC5A6DFE2B8987B17(&uLocal_73);
			unk_0x64F2F70AE9C159DC(0, 2473.254f, 4901.651f, 43.1488f, 3f, -1, 2f, 1, Local_250, 1193033728);
			unk_0x5558ED6D4A2DEC93(0, iLocal_54, 150f, -1, 0, 0);
			unk_0x535008C596714F9E(uLocal_73);
			unk_0xA8E6405305C0D7DF(iLocal_55, uLocal_73);
			unk_0x22321800954A532E(iLocal_55, 1);
			unk_0x02DAF06EA4F08219(&uLocal_73);
			unk_0xE54A8F6E1EA693FF(2544.862f, 4729.893f, 27.8986f, 2564.862f, 4749.893f, 28.8986f, 1);
		}
		else
		{
			iLocal_53 = 2;
			unk_0xC5A6DFE2B8987B17(&uLocal_73);
			unk_0x64F2F70AE9C159DC(0, 2531.445f, 2521.749f, 38.2072f, 3f, -1, 2f, 1, Local_250, 1193033728);
			unk_0x5558ED6D4A2DEC93(0, iLocal_54, 150f, -1, 0, 0);
			unk_0x535008C596714F9E(uLocal_73);
			unk_0xA8E6405305C0D7DF(iLocal_55, uLocal_73);
			unk_0x22321800954A532E(iLocal_55, 1);
			unk_0x02DAF06EA4F08219(&uLocal_73);
		}
		if (iLocal_53 == 1)
		{
		}
		unk_0x9565F9267674873A(iLocal_54, iLocal_55, -1, 1f, 3f, 1073741824, 0);
		unk_0x22321800954A532E(iLocal_54, 1);
		return 1;
	}
	return 0;
}

void func_105()
{
	Local_250.f_0 = 0f;
	Local_250.f_1 = 10f;
	unk_0x54480313BB3E8DD0(iLocal_54, 2);
	unk_0x91629AC1E1F78419(iLocal_54, 13, 1);
	unk_0x91629AC1E1F78419(iLocal_54, 2, 1);
	unk_0x91629AC1E1F78419(iLocal_54, 1, 1);
	unk_0x91629AC1E1F78419(iLocal_54, 11, 0);
	unk_0x80F51E5792576467(iLocal_54, 0);
	unk_0x54480313BB3E8DD0(iLocal_55, 3);
	unk_0x91629AC1E1F78419(iLocal_55, 17, 1);
	unk_0x91629AC1E1F78419(iLocal_55, 6, 1);
	unk_0x91629AC1E1F78419(iLocal_55, 1, 1);
	unk_0x91629AC1E1F78419(iLocal_55, 11, 0);
	unk_0xABA7AE40608505F2(iLocal_55, 128, 1);
	unk_0xABA7AE40608505F2(iLocal_55, 1, 0);
	unk_0xB2CB6EAA6B280A84("RE_ARREST_COP", &iLocal_71);
	unk_0xB2CB6EAA6B280A84("RE_ARREST_CRIM", &iLocal_72);
	unk_0x4106FAF8AA1D69D5(iLocal_54, iLocal_71);
	unk_0x4106FAF8AA1D69D5(iLocal_55, iLocal_72);
	unk_0xA902E18EDF6FA0C8(4, iLocal_72, iLocal_71);
	unk_0xA902E18EDF6FA0C8(3, iLocal_71, joaat("player"));
	unk_0xA902E18EDF6FA0C8(3, iLocal_72, joaat("player"));
	unk_0xA902E18EDF6FA0C8(4, iLocal_72, joaat("COP"));
	unk_0x36C3B58DA78A2679(iLocal_54, sLocal_257);
	unk_0x36C3B58DA78A2679(iLocal_55, sLocal_256);
}

void func_106(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

int func_107()
{
	if (!func_97(5))
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_115())
		{
			return 0;
		}
	}
	if (func_108(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_108(float fParam0, bool bParam1)
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
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (func_50(func_48()))
		{
			iVar36 = func_114();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xFA30DFD0084E92FE(Global_105220.f_18545[iVar32 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_105220.f_18545[iVar32 /*6*/], 3))
				{
					func_109(iVar32, &Var0);
					fVar35 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Var0.f_6, 1);
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

void func_109(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_110(uParam1, "Abigail1", func_112(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 1:
			func_110(uParam1, "Abigail2", func_112(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 2:
			func_110(uParam1, "Barry1", func_112(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 3:
			func_110(uParam1, "Barry2", func_112(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 4:
			func_110(uParam1, "Barry3", func_112(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 5:
			func_110(uParam1, "Barry3A", func_112(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 6:
			func_110(uParam1, "Barry3C", func_112(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 7:
			func_110(uParam1, "Barry4", func_112(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_111(iParam0), 0, 0);
			break;
		
		case 8:
			func_110(uParam1, "Dreyfuss1", func_112(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 9:
			func_110(uParam1, "Epsilon1", func_112(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 10:
			func_110(uParam1, "Epsilon2", func_112(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 11:
			func_110(uParam1, "Epsilon3", func_112(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 12:
			func_110(uParam1, "Epsilon4", func_112(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 13:
			func_110(uParam1, "Epsilon5", func_112(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 14:
			func_110(uParam1, "Epsilon6", func_112(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 15:
			func_110(uParam1, "Epsilon7", func_112(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 16:
			func_110(uParam1, "Epsilon8", func_112(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 17:
			func_110(uParam1, "Extreme1", func_112(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 18:
			func_110(uParam1, "Extreme2", func_112(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 19:
			func_110(uParam1, "Extreme3", func_112(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 20:
			func_110(uParam1, "Extreme4", func_112(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 21:
			func_110(uParam1, "Fanatic1", func_112(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_111(iParam0), 1, 0);
			break;
		
		case 22:
			func_110(uParam1, "Fanatic2", func_112(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_111(iParam0), 1, 0);
			break;
		
		case 23:
			func_110(uParam1, "Fanatic3", func_112(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_111(iParam0), 0, 1);
			break;
		
		case 24:
			func_110(uParam1, "Hao1", func_112(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_111(iParam0), 0, 1);
			break;
		
		case 25:
			func_110(uParam1, "Hunting1", func_112(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 26:
			func_110(uParam1, "Hunting2", func_112(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 27:
			func_110(uParam1, "Josh1", func_112(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 28:
			func_110(uParam1, "Josh2", func_112(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 29:
			func_110(uParam1, "Josh3", func_112(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 30:
			func_110(uParam1, "Josh4", func_112(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 31:
			func_110(uParam1, "Maude1", func_112(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 32:
			func_110(uParam1, "Minute1", func_112(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 33:
			func_110(uParam1, "Minute2", func_112(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 34:
			func_110(uParam1, "Minute3", func_112(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 35:
			func_110(uParam1, "MrsPhilips1", func_112(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 36:
			func_110(uParam1, "MrsPhilips2", func_112(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 37:
			func_110(uParam1, "Nigel1", func_112(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 38:
			func_110(uParam1, "Nigel1A", func_112(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 39:
			func_110(uParam1, "Nigel1B", func_112(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 40:
			func_110(uParam1, "Nigel1C", func_112(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 41:
			func_110(uParam1, "Nigel1D", func_112(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 42:
			func_110(uParam1, "Nigel2", func_112(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 43:
			func_110(uParam1, "Nigel3", func_112(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 44:
			func_110(uParam1, "Omega1", func_112(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 45:
			func_110(uParam1, "Omega2", func_112(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 46:
			func_110(uParam1, "Paparazzo1", func_112(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 47:
			func_110(uParam1, "Paparazzo2", func_112(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 48:
			func_110(uParam1, "Paparazzo3", func_112(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 49:
			func_110(uParam1, "Paparazzo3A", func_112(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 50:
			func_110(uParam1, "Paparazzo3B", func_112(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 51:
			func_110(uParam1, "Paparazzo4", func_112(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 52:
			func_110(uParam1, "Rampage1", func_112(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 54:
			func_110(uParam1, "Rampage3", func_112(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 55:
			func_110(uParam1, "Rampage4", func_112(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 56:
			func_110(uParam1, "Rampage5", func_112(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 53:
			func_110(uParam1, "Rampage2", func_112(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 57:
			func_110(uParam1, "TheLastOne", func_112(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 58:
			func_110(uParam1, "Tonya1", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 59:
			func_110(uParam1, "Tonya2", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 60:
			func_110(uParam1, "Tonya3", func_112(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 61:
			func_110(uParam1, "Tonya4", func_112(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 62:
			func_110(uParam1, "Tonya5", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_110(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_111(int iParam0)
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

struct<2> func_112(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_113(iParam0) };
	if (unk_0xF1734B55490E9045(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_113(int iParam0)
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

int func_114()
{
	func_49();
	switch (Global_105220.f_2354.f_539.f_4301)
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

int func_115()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x45397F173D3E5C6B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_116()
{
	if (func_119() && !func_115())
	{
		return 1;
	}
	if (func_118() && func_117())
	{
		return 1;
	}
	return 0;
}

bool func_117()
{
	return Global_104938 > 0;
}

int func_118()
{
	if (Global_90022 != -1)
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	if (Global_90022 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_83888[Global_90022 /*34*/].f_15, 20);
	}
	return 0;
}

int func_120()
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_115())
		{
			return 0;
		}
	}
	if (func_116())
	{
		return 1;
	}
	if (func_108(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_121(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_124();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_123(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_105206 = 0;
	func_122();
}

void func_122()
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x8510BC031C24B862(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)), 1);
		}
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, 0);
	}
}

void func_123(int iParam0)
{
	Global_105209 = iParam0;
}

int func_124()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar16 = func_125(Var0);
	return uVar16;
}

int func_125(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x56BEECB328B6D29D(&cParam0))
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

int func_126(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_143601)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_124();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_168())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			Var1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_115())
			{
				return 0;
			}
		}
		if (!Global_105220.f_9056)
		{
			return 0;
		}
		if (func_167(0))
		{
			return 0;
		}
		if (func_116())
		{
			return 0;
		}
		if (func_166())
		{
			return 0;
		}
		if (Global_105209 != -1)
		{
			return 0;
		}
		if (func_50(func_48()))
		{
			if (func_108(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_165(iParam3))
		{
			return 0;
		}
		if (func_50(func_48()))
		{
			if (func_164(func_48()) == 4 || func_164(func_48()) == 5)
			{
				return 0;
			}
		}
		if (func_50(func_48()))
		{
			if (!func_163(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_162(Global_105220.f_24966.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x105601648511CC64() - Global_105211) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_161())
		{
			return 0;
		}
		if (unk_0x04604C9E42BD0E47())
		{
			return 0;
		}
		if (unk_0x8520DF5301DD9811())
		{
			return 0;
		}
		if (!func_152(4))
		{
			return 0;
		}
		if (!func_97(5))
		{
			return 0;
		}
		if (func_151(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xBF697FA7422C0621(unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA())))
		{
			if ((unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(377.153f, -717.567f, 10.0536f) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(320.9934f, 265.2515f, 82.1221f)) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_151(0, 0))
		{
			return 0;
		}
		if (Global_25423)
		{
			return 0;
		}
		if (func_165(30) && !func_151(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_50(func_48()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_105220.f_2354.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_105220.f_2354.f_539.f_2276[iVar4];
				if (func_150(iVar8))
				{
					if (func_128(iVar4))
					{
						if (!func_127(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Var5) < (210f * 210f))
							{
								if (func_48() != iVar4)
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

bool func_127(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_105220.f_2354.f_539.f_2276[iParam0];
	return func_129(iVar0);
}

int func_129(int iParam0)
{
	return func_130(iParam0, 1);
}

int func_130(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_150(iParam0))
	{
		return 0;
	}
	func_131(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_132(func_143(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_132(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_142(iParam0, iParam1))
	{
		iVar0 = func_141(iParam1);
		iVar1 = func_139(iParam0);
		iVar2 = (func_139(iParam0) - func_139(iParam1));
		iVar3 = (func_141(iParam0) - func_141(iParam1));
		iVar4 = (func_138(iParam0) - func_138(iParam1));
		iVar5 = (func_137(iParam0) - func_137(iParam1));
		iVar6 = (func_136(iParam0) - func_136(iParam1));
		iVar7 = (func_135(iParam0) - func_135(iParam1));
	}
	else
	{
		iVar0 = func_141(iParam0);
		iVar1 = func_139(iParam1);
		iVar2 = (func_139(iParam1) - func_139(iParam0));
		iVar3 = (func_141(iParam1) - func_141(iParam0));
		iVar4 = (func_138(iParam1) - func_138(iParam0));
		iVar5 = (func_137(iParam1) - func_137(iParam0));
		iVar6 = (func_136(iParam1) - func_136(iParam0));
		iVar7 = (func_135(iParam1) - func_135(iParam0));
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
		iVar4 = (iVar4 + func_134(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_133(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_133(float fParam0, float fParam1, float fParam2)
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

int func_134(int iParam0, int iParam1)
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

int func_135(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_136(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_137(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_138(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_139(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_140(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_140(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_141(int iParam0)
{
	return iParam0 & 15;
}

int func_142(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_150(iParam1) || !func_150(iParam0))
	{
		return 1;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_138(iParam0);
	iVar1 = func_138(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
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
	iVar0 = func_135(iParam0);
	iVar1 = func_135(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_143()
{
	var uVar0;
	
	func_149(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_148(&uVar0, unk_0x7E09057438B9D216());
	func_147(&uVar0, unk_0x6E06C0DB9B43570D());
	func_146(&uVar0, unk_0xBE14F159908E4EE5());
	func_145(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_144(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_144(var uParam0, int iParam1)
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

void func_145(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_146(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_139(*uParam0);
	if (iParam1 < 1 || iParam1 > func_134(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_147(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_148(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_150(int iParam0)
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
	iVar0 = func_135(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_136(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_137(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_139(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_141(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_138(iParam0);
	if (iVar5 < 1 || iVar5 > func_134(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_151(int iParam0, int iParam1)
{
	if (unk_0xFA30DFD0084E92FE(Global_105220.f_24966.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0)
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_48();
				if (!func_50(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_160()) || Global_104267) || Global_25279) || func_159()) || func_79(8, -1)) || func_158()) || func_157()) || func_156()) || func_155()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_160()) || Global_25279) || func_159()) || func_79(8, -1)) || func_156()) || func_158()) || func_157()) || func_155()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_160()) || Global_104267) || Global_25279) || func_159()) || func_79(8, -1)) || func_156()) || func_158()) || func_157()) || func_155()) || Global_105220.f_7659.f_919[iVar0] == 5) || Global_36452 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_160()) || Global_104267) || Global_25279) || func_159()) || func_79(8, -1)) || func_158()) || func_157()) || func_155()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_160() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_79(8, -1)) || func_155()) || func_154()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_79(8, -1) || func_158()) || func_157()) || func_154()) || func_153())
						{
							return 0;
						}
						if ((unk_0x7930B3E9C919E90F() && unk_0xFAB96FF5BAB29092() != 3) && unk_0x5935088CFB983803() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
						{
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_160()) || Global_25279) || func_159()) || func_79(8, -1)) || func_157()) || func_156()) || func_155()) || Global_105220.f_7659.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_160()) || func_157()) || Global_104267) || Global_25279) || func_159()) || Global_37057) || func_79(8, -1)) || func_156()) || func_154()) || func_155()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_160()) || Global_104267) || Global_25279) || func_159()) || func_79(8, -1)) || func_156()) || func_154()) || func_158()) || func_157()) || func_155())
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

var func_153()
{
	return Global_92994.f_1;
}

int func_154()
{
	if (Global_90022 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_83888[Global_90022 /*34*/].f_15, 13);
	}
	return 0;
}

int func_155()
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_156()
{
	if (Global_71238)
	{
		return 1;
	}
	else if (Global_55961 && !Global_55967)
	{
		return 1;
	}
	return 0;
}

bool func_157()
{
	return Global_93007.f_322 > 0;
}

bool func_158()
{
	return Global_93007.f_321 > 0;
}

var func_159()
{
	return Global_1312854;
}

int func_160()
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_90578.f_44 == 1;
	}
	return 0;
}

int func_161()
{
	func_77();
	if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_162(int iParam0)
{
	return func_142(func_143(), iParam0);
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_48();
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

int func_164(int iParam0)
{
	if (!func_50(iParam0))
	{
		return 7;
	}
	return Global_105220.f_7659.f_919[iParam0];
}

bool func_165(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_168())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xFA30DFD0084E92FE(Global_105220.f_24966, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xFA30DFD0084E92FE(Global_105220.f_24966.f_1, iVar0);
	}
	return bVar1;
}

int func_166()
{
	var uVar0;
	
	if (Global_25427)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			uVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(uVar0, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0x3187EF5798B5D209(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_167(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

int func_168()
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xF0059F27F7BB6680(&iVar0, 2);
				unk_0xF0059F27F7BB6680(&iVar0, 4);
				unk_0xF0059F27F7BB6680(&iVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_25, 2);
				unk_0xF0059F27F7BB6680(&Global_25, 4);
				unk_0xF0059F27F7BB6680(&Global_25, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					iVar0 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&iVar0, 0);
					unk_0x973C4C95367920C1(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143856 == 2)
	{
		return 1;
	}
	else if (Global_143856 == 3)
	{
		return 0;
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		if (unk_0xFA30DFD0084E92FE(unk_0x2DC92D46FC48E795(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_169()
{
	if (unk_0x8520DF5301DD9811())
	{
		switch (iLocal_49)
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				func_198(6);
				func_183();
				break;
			
			case 3:
				func_198(5);
				func_183();
				break;
		}
		if (unk_0x724D816EA203A79E(iLocal_55))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_55) && !unk_0x1D403DFADBC2DE3C(iLocal_55, 0))
			{
				unk_0x1D403DFADBC2DE3C(iLocal_54, 0);
				if (unk_0x724D816EA203A79E(iLocal_54))
				{
					unk_0xAB43C54784946B9F(iLocal_55, unk_0x541C2AEF053615BC(iLocal_54, 1), 9000f, -1, 0, 0);
				}
				else
				{
					unk_0xAB43C54784946B9F(iLocal_55, unk_0x541C2AEF053615BC(iLocal_55, 1), 9000f, -1, 0, 0);
				}
				unk_0x2E35C4FA5F0ED22F(iLocal_55, 0);
				unk_0x22321800954A532E(iLocal_55, 1);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_54))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_54))
			{
				unk_0x22321800954A532E(iLocal_54, 1);
				unk_0x2E35C4FA5F0ED22F(iLocal_54, 0);
				unk_0x717F82C821538DA2(iLocal_54, 1);
				unk_0xB105531EDD3DE51B(iLocal_54, 1);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_56))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_56))
			{
				if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					func_61();
				}
				unk_0x2E35C4FA5F0ED22F(iLocal_56, 0);
				unk_0x717F82C821538DA2(iLocal_56, 1);
			}
		}
		if (func_182())
		{
			unk_0xDF53A66AEE1401AA(1f);
			unk_0xA902E18EDF6FA0C8(2, iLocal_72, iLocal_71);
			unk_0xA902E18EDF6FA0C8(2, iLocal_71, iLocal_72);
		}
		if (iLocal_77)
		{
			unk_0xED48729ADA05C6DE(1);
		}
	}
	unk_0x4806A94C8ED574C3(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 1);
	if (iLocal_287)
	{
		unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 3, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
	}
	func_170(-1);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x95E4B6F3ED223F5A();
}

void func_170(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_124();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_182())
	{
		func_175(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_105211 = unk_0x105601648511CC64();
		func_174(30000);
		StringCopy(&cVar0, func_173(Global_105209, 1), 64);
		if (func_172(Global_105209) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_105208, 64);
		}
		unk_0x3D65262152B53A67(&cVar0, Global_105206, (unk_0x105601648511CC64() - Global_105207), 0);
	}
	else if (unk_0xFA30DFD0084E92FE(Global_105216, 0) && Global_105220.f_24966.f_2 < 3)
	{
		unk_0x7CB6FD92BE491AD9(&Global_105216, 0);
	}
	func_171(&Global_25336);
	Global_105210 = 0;
	func_123(-1);
}

void func_171(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35867)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35866 = 0;
	Global_35868 = 0;
	Global_35905 = 15;
	Global_55964 = 0;
	Global_55965 = 0;
}

int func_172(int iParam0)
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

char* func_173(int iParam0, bool bParam1)
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

void func_174(int iParam0)
{
	Global_36456 = (unk_0x105601648511CC64() + iParam0);
}

void func_175(int iParam0)
{
	func_176(iParam0, 0, func_181(iParam0));
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_143();
	func_179(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_178(iParam0, &uVar0);
	Var1 = { func_177(&uVar0) };
}

struct<16> func_177(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_137(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_136(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_135(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_138(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_141(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_139(*uParam0), 64);
	return Var0;
}

void func_178(int iParam0, var uParam1)
{
	Global_105220.f_24966.f_43[iParam0] = *uParam1;
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_139(*uParam0);
	iVar1 = func_141(*uParam0);
	iVar2 = func_138(*uParam0);
	iVar3 = func_137(*uParam0);
	iVar4 = func_136(*uParam0);
	iVar5 = func_135(*uParam0);
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
	iVar6 = func_134(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_134(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_180(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_180(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_149(uParam0, iParam1);
	func_148(uParam0, iParam2);
	func_147(uParam0, iParam3);
	func_145(uParam0, iParam5);
	func_146(uParam0, iParam4);
	func_144(uParam0, iParam6);
}

int func_181(int iParam0)
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

int func_182()
{
	if ((Global_105209 == func_124() && unk_0x8520DF5301DD9811()) && Global_105210)
	{
		return 1;
	}
	return 0;
}

void func_183()
{
	if (!bLocal_76)
	{
		func_197();
	}
	func_186(15, iLocal_53);
	func_184();
}

void func_184()
{
	func_185();
}

int func_185()
{
	if (func_167(0))
	{
		return 0;
	}
	if (Global_92994.f_8)
	{
		if (Global_92994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92994.f_10 > 1)
	{
		return 0;
	}
	Global_92994.f_10++;
	return 1;
}

void func_186(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_124();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_172(iParam0))
	{
		func_196(iParam0, iParam1);
		if (!func_195(51))
		{
			func_192("RE_REWARD", 1, 0, 4000, 10000, func_114(), 0, 138, 0);
			func_191(51);
		}
		if (func_93(iParam0))
		{
			Global_105220.f_24966.f_2 = 3;
		}
		if (func_190(iParam0, iParam1) != 322)
		{
			func_187(func_190(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_105208 = iParam1;
		if (Global_105206 == 0)
		{
			if (((Global_105209 == 1 || Global_105209 == 5) || Global_105209 == 11) || Global_105209 == 25)
			{
				func_198(2);
			}
			else if ((Global_105209 == 26 || Global_105209 == 8) || Global_105209 == 17)
			{
				func_198(7);
			}
			else
			{
				func_198(1);
			}
		}
	}
}

void func_187(int iParam0, var uParam1, var uParam2)
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
		func_22((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_105220.f_10165[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_105220.f_10165[iParam0 /*12*/].f_6 == 11 || Global_105220.f_10165[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_105220.f_10165[iParam0 /*12*/].f_5 = 1;
		Global_105220.f_10165[iParam0 /*12*/].f_10 = uParam1;
		Global_105220.f_10165[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_188();
	}
}

void func_188()
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
	Global_104956 = 0;
	Global_104957 = 0;
	Global_104958 = 0;
	Global_104959 = 0;
	Global_104960 = 0;
	Global_104961 = 0;
	Global_104962 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_105220.f_10165.f_3853;
	Global_105220.f_10165.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_105220.f_10165[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_105220.f_10165[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104956++;
					fVar1 = (fVar1 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104957++;
					fVar2 = (fVar2 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104958++;
					fVar3 = (fVar3 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104959++;
					fVar4 = (fVar4 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104960++;
					fVar5 = (fVar5 + (Global_105220.f_10165[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104961++;
					fVar6 = (fVar6 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104962++;
					fVar7 = (fVar7 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104939 > 0)
	{
		if (Global_104956 == Global_104939)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104940 > 0)
	{
		if (Global_104957 == Global_104940)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104941 > 0)
	{
		if (Global_104958 == Global_104941)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104942 > 0)
	{
		if (Global_104959 == Global_104942)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104943 > 0)
	{
		if (((Global_104960 == Global_104943 || (Global_104943 * 10 / Global_104960) < 41) || Global_104960 > Global_104946) || Global_104960 == Global_104946)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_105220.f_10165.f_3856, 14))
			{
				if (Global_104960 == Global_104943)
				{
					unk_0x438C09AFE8E5D473(joaat("num_rndevents_completed"), Global_104943, 0);
					unk_0xF0059F27F7BB6680(&(Global_105220.f_10165.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104944 > 0)
	{
		if (Global_104961 == Global_104944)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104945 > 0)
	{
		if (Global_104962 == Global_104945)
		{
			fVar7 = 5f;
		}
	}
	Global_105220.f_10165.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104960 > Global_104946 || Global_104960 == Global_104946)
	{
		iVar9 = Global_104946;
	}
	else
	{
		iVar9 = Global_104960;
	}
	unk_0x3A57956BCE003880(joaat("num_missions_completed"), Global_104956, 1);
	unk_0x3A57956BCE003880(joaat("num_missions_available"), Global_104939, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_completed"), Global_104957, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_available"), Global_104940, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_completed"), Global_104958, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_available"), Global_104941, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_completed"), Global_104959, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_available"), Global_104942, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_available"), Global_104946, 1);
	unk_0x3A57956BCE003880(joaat("num_misc_completed"), (Global_104962 + Global_104961), 1);
	unk_0x3A57956BCE003880(joaat("num_misc_available"), (Global_104945 + Global_104944), 1);
	Global_104963 = (Global_104956 * 100 / Global_104939);
	Global_104965 = ((Global_104958 + Global_104957) * 100 / (Global_104941 + Global_104940));
	Global_104964 = ((Global_104959 + iVar9) * 100 / (Global_104942 + Global_104946));
	Global_104966 = ((Global_104961 + Global_104962) * 100 / (Global_104944 + Global_104945));
	unk_0xAE9FF06DD2A69C74(joaat("total_progress_made"), Global_105220.f_10165.f_3853, 1);
	unk_0x3A57956BCE003880(joaat("percent_story_missions"), Global_104963, 1);
	unk_0x3A57956BCE003880(joaat("percent_ambient_missions"), Global_104964, 1);
	unk_0x3A57956BCE003880(joaat("percent_oddjobs"), Global_104965, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853))
	{
		func_44(13, unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_70978)
		{
			if (func_189() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_104954 = 0;
				}
				if (!Global_55967)
				{
					func_185();
				}
			}
		}
	}
}

int func_189()
{
	return Global_25277;
}

int func_190(int iParam0, int iParam1)
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

void func_191(int iParam0)
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
		unk_0xF0059F27F7BB6680(&(Global_105220.f_20381.f_150[iVar1]), iVar0);
	}
}

void func_192(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_193(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_193(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3362CDE8460ED38B(sParam0, ""))
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
	while (iVar0 < Global_105220.f_20381.f_145)
	{
		if (unk_0x3362CDE8460ED38B(&(Global_105220.f_20381[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_105220.f_20381.f_145 < 9)
	{
		StringCopy(&(Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_4), sParam1, 16);
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_8 = (unk_0x105601648511CC64() + iParam3);
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_9 = iParam5;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_11 = iParam6;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_12 = uParam2;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_13 = iParam7;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_14 = iParam8;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_10 = ((unk_0x105601648511CC64() + iParam3) + iParam4);
		}
		else
		{
			Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_10 = -1;
		}
		Global_105220.f_20381.f_145++;
		func_194();
	}
}

void func_194()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_105220.f_20381.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_105220.f_20381.f_145)
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 0))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[0])
			{
				Global_105220.f_20381.f_146[0] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 1))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[1])
			{
				Global_105220.f_20381.f_146[1] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 2))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[2])
			{
				Global_105220.f_20381.f_146[2] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_195(int iParam0)
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
		return unk_0xFA30DFD0084E92FE(Global_105220.f_20381.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_196(int iParam0, int iParam1)
{
	unk_0xF0059F27F7BB6680(&(Global_105220.f_24966.f_8[iParam0]), iParam1);
}

int func_197()
{
	return 1;
}

void func_198(int iParam0)
{
	Global_105206 = iParam0;
}

void func_199()
{
	if (!bLocal_74 && iLocal_51 == 0)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_54) && !unk_0x36CEFBE9B745A58D(iLocal_55))
		{
			unk_0xDF14F570C0180463(iLocal_54, unk_0x541C2AEF053615BC(iLocal_55, 1), 3f, 20000, 1193033728, 1056964608);
			unk_0x22321800954A532E(iLocal_54, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

