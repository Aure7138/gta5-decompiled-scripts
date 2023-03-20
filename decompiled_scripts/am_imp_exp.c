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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
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
	float fLocal_55 = 0f;
	struct<14> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	bool bLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 16;
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
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	int iLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	int iLocal_271[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_282 = 0;
	bool bLocal_283 = 0;
	bool bLocal_284 = 0;
	bool bLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	float fLocal_292 = 0f;
	float fLocal_293 = 0f;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	int iLocal_311 = 0;
	var uLocal_312 = 0;
	int iLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319[4] = { 0, 0, 0, 0 };
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_341 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_353 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	struct<4> Local_429[32];
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	char* sLocal_561 = NULL;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	iLocal_27 = 3;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_55 = ((0.05f + 0.275f) - 0.01f);
	iLocal_87 = 1;
	bLocal_89 = true;
	bLocal_91 = true;
	iLocal_96 = -1;
	bLocal_284 = true;
	bLocal_285 = true;
	iLocal_288 = -1;
	iLocal_289 = -1;
	iLocal_313 = -1;
	iLocal_316 = -1;
	if (!func_444(ScriptParam_0))
	{
		func_440();
	}
	iLocal_328[0] = unk_0x8B33C68636DDF248(unk_0x09E6F2570A285341(-891.3f, 807.9f, 188.1f));
	iLocal_328[1] = unk_0x8B33C68636DDF248(unk_0x09E6F2570A285341(-276.5f, -206.3f, 38.4f));
	iLocal_328[2] = unk_0x8B33C68636DDF248(unk_0x09E6F2570A285341(-1485.5f, -644.5f, 30.1f));
	iLocal_328[3] = unk_0x8B33C68636DDF248(unk_0x09E6F2570A285341(-1746.3f, -939.5f, 7.7f));
	iLocal_328[4] = unk_0x8B33C68636DDF248(unk_0x09E6F2570A285341(-2106.4f, -345.3f, 13f));
	iLocal_328[5] = unk_0x8B33C68636DDF248(unk_0x09E6F2570A285341(-1520f, 74.4f, 61.3f));
	iLocal_328[6] = unk_0x8B33C68636DDF248(unk_0x09E6F2570A285341(-1333f, -286f, 40.3f));
	iLocal_328[7] = unk_0x8B33C68636DDF248(unk_0x09E6F2570A285341(-1178.1f, 54.8f, 53.9f));
	iLocal_328[8] = unk_0x8B33C68636DDF248(unk_0x09E6F2570A285341(-1298.7f, -359.4f, 36.7f));
	iLocal_328[9] = unk_0x8B33C68636DDF248(unk_0x09E6F2570A285341(-355.2f, 147.5f, 75.8f));
	iLocal_328[10] = unk_0x8B33C68636DDF248(unk_0x09E6F2570A285341(-982.1f, -1064.7f, 2.2f));
	iLocal_328[11] = unk_0x8B33C68636DDF248(unk_0x09E6F2570A285341(-1313.1f, -1560.2f, 4.3f));
	while (true)
	{
		func_439();
		bLocal_72 = false;
		bLocal_74 = false;
		bLocal_77 = false;
		bLocal_80 = false;
		bLocal_82 = false;
		Global_2446992.f_1578 = 0;
		if (func_430() || func_429())
		{
			func_440();
		}
		if (func_423())
		{
			if (!func_422())
			{
				if (!func_421())
				{
					if (func_420())
					{
						if (!iLocal_70)
						{
							func_416();
							func_415(&Local_341, 5);
							func_414();
							bLocal_91 = true;
							bLocal_92 = true;
							if (unk_0x889D01384B54BCE3(iLocal_558, 1))
							{
								unk_0x29DB79DD4D939B38(&iLocal_558, 1);
							}
							iLocal_70 = 1;
							iLocal_316 = -999;
						}
					}
				}
			}
			else if (!func_421())
			{
				if (!bLocal_92)
				{
					if (!func_413(&uLocal_269))
					{
						func_412(&uLocal_269, 0, 0);
					}
					else if (func_411(&uLocal_269, 100, 0))
					{
						if (!unk_0x889D01384B54BCE3(iLocal_558, 1))
						{
							if (func_420())
							{
								func_401(&Local_341, 5, Global_2097152[func_410() /*8064*/].f_5756.f_36);
								bLocal_91 = false;
								bLocal_92 = true;
								iLocal_70 = 1;
								iLocal_316 = -999;
							}
						}
					}
				}
			}
			func_328();
			func_325();
			func_312();
			func_306();
			func_204();
			func_148();
		}
		func_144();
		func_126();
		func_71();
		func_68();
		if (!iLocal_94)
		{
			if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), 471.9266f, -1308.596f, 28.2359f) < 1000f)
			{
				unk_0x168B293008FF4D5C(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), 1);
				unk_0x168B293008FF4D5C(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0x168B293008FF4D5C(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), 1);
				unk_0x168B293008FF4D5C(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0x168B293008FF4D5C(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), 1);
				unk_0x168B293008FF4D5C(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvtext"), 1);
				iLocal_94 = 1;
			}
		}
		if (unk_0xE9849174628A9C50())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_89)
	{
	}
	else
	{
		if (iLocal_90 >= Local_429.f_0)
		{
			iLocal_90 = 0;
			unk_0x29DB79DD4D939B38(&iLocal_558, 10);
			unk_0x29DB79DD4D939B38(&(Local_353.f_23), 7);
			unk_0x29DB79DD4D939B38(&iLocal_558, 11);
			unk_0x29DB79DD4D939B38(&iLocal_558, 23);
			if (unk_0x889D01384B54BCE3(Local_353.f_23, 0))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_353.f_23), 1);
				unk_0x29DB79DD4D939B38(&(Local_353.f_23), 3);
			}
		}
		iVar0 = iLocal_90;
		if (Local_429[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_353[iVar1] == -1)
				{
					if (!Local_353.f_6[iVar1])
					{
						if (Local_353[iVar1] == Local_429[iVar0 /*4*/])
						{
							if (Local_353[iVar1] == Local_353.f_28)
							{
								func_67();
							}
							Local_353.f_33 = 0;
							Local_353.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (unk_0x889D01384B54BCE3(Local_353.f_23, 0))
		{
			if (!unk_0x889D01384B54BCE3(Local_353.f_23, 7))
			{
				if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar0)))
				{
					if (Local_429[iVar0 /*4*/].f_3 > 0 || func_66(unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iVar0)), 6))
					{
						if (Local_429[iVar0 /*4*/].f_3 < 3)
						{
							unk_0xD0E2BFCE93AE3ABD(&(Local_353.f_23), 7);
						}
					}
				}
			}
		}
		if (unk_0x889D01384B54BCE3(Local_353.f_23, 0))
		{
			if (!unk_0x889D01384B54BCE3(iLocal_558, 11))
			{
				if (unk_0x889D01384B54BCE3(Local_429[iVar0 /*4*/].f_2, 2))
				{
					unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 11);
				}
			}
			if (!unk_0x889D01384B54BCE3(iLocal_558, 21))
			{
				if (!unk_0x889D01384B54BCE3(iLocal_558, 3))
				{
					if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar0)))
					{
						if (unk_0x889D01384B54BCE3(Local_429[iVar0 /*4*/].f_2, 3))
						{
							unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 21);
						}
					}
				}
			}
		}
		iLocal_90++;
		if (iLocal_90 >= Local_429.f_0)
		{
			unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 10);
			if (unk_0x889D01384B54BCE3(Local_353.f_23, 7) || unk_0x889D01384B54BCE3(iLocal_558, 23))
			{
				unk_0x29DB79DD4D939B38(&(Local_353.f_23), 1);
			}
			if (unk_0x889D01384B54BCE3(iLocal_558, 11))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_353.f_23), 3);
			}
			if (unk_0x889D01384B54BCE3(iLocal_558, 21))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_353.f_23), 6);
			}
		}
	}
	if (func_65())
	{
		if (unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Local_353.f_29) > 180000)
		{
			func_64();
		}
	}
	switch (Local_353.f_20)
	{
		case 0:
			func_61();
			Local_353.f_32++;
			Local_353.f_20 = 1;
			func_60();
			break;
		
		case 1:
			if (func_59())
			{
				uLocal_312 = unk_0x519586565311459B();
				Local_353.f_20 = 2;
			}
			else if (Local_353.f_28 == -1)
			{
				func_67();
			}
			break;
		
		case 2:
			if (!Local_353.f_17 && unk_0xF001CC441E445DFD(unk_0x519586565311459B(), uLocal_312) > Global_262145.f_9122)
			{
				Local_353.f_20 = 0;
			}
			break;
		
		case 3:
			break;
	}
	func_2();
}

void func_2()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (Local_353.f_26)
	{
		case 0:
			if (!unk_0x889D01384B54BCE3(Local_353.f_23, 0))
			{
				if (bLocal_284)
				{
					if (bLocal_285)
					{
						if (Global_2446992.f_1551)
						{
							unk_0x29DB79DD4D939B38(&(Local_353.f_23), 2);
							unk_0x29DB79DD4D939B38(&(Local_353.f_23), 6);
							unk_0x29DB79DD4D939B38(&iLocal_558, 21);
							unk_0x29AA9A92BCC0F8E3(0);
							Local_353.f_34 = 0;
							unk_0xD0E2BFCE93AE3ABD(&(Local_353.f_23), 0);
							Global_2446992.f_1551 = 0;
						}
					}
					else if (Local_353.f_27 == -15)
					{
						unk_0x29DB79DD4D939B38(&(Local_353.f_23), 2);
						unk_0x29DB79DD4D939B38(&(Local_353.f_23), 6);
						unk_0x29DB79DD4D939B38(&iLocal_558, 21);
						unk_0x29AA9A92BCC0F8E3(0);
						Local_353.f_34 = 0;
						iVar4 = func_58();
						func_44(&(Local_353.f_27), func_57(iVar4), func_56(iVar4), func_55(iVar4), func_54(iVar4), func_53(iVar4), func_51(iVar4));
						func_43(&(Local_353.f_27), 0, unk_0x444ECD635D5FD45F(0, 60), unk_0x444ECD635D5FD45F(0, 8), 1, 0, 0);
					}
					else if (!func_42(6))
					{
						if (!func_413(&uLocal_301))
						{
							func_412(&uLocal_301, 0, 0);
						}
						else if (func_411(&uLocal_301, 10000, 0))
						{
							func_41(&uLocal_301);
							if (func_37(Local_353.f_27))
							{
								unk_0xD0E2BFCE93AE3ABD(&(Local_353.f_23), 0);
							}
						}
					}
				}
			}
			else if (Local_353.f_67 == 0)
			{
				if (func_31(1, 1, 1))
				{
					if (unk_0x139D18B7A1D82592(Local_353.f_24))
					{
						unk_0xB7A6D93D885AFBB9(Local_353.f_24);
					}
					Local_353.f_24 = -1;
					iLocal_287 = unk_0x444ECD635D5FD45F(0, 10);
					iVar5 = func_28();
					if (iVar5 != 0)
					{
						Local_353.f_67 = iVar5;
						unk_0x29AA9A92BCC0F8E3(1);
						Local_353.f_34 = 1;
					}
				}
			}
			else if (unk_0x6B2CA196CD4C58D1(1))
			{
				if (func_27(Local_353.f_67))
				{
					if (!unk_0x86CB59A6776A7C27(Local_353.f_22))
					{
						if (func_19(&Var0, &uVar3))
						{
							if (func_18(&(Local_353.f_22), Local_353.f_67, Var0, uVar3, 1, 1, 1, 1, 1, 1))
							{
								if (unk_0x67BE6A47B59A2390("MPBitset", 3))
								{
									if (unk_0x53D28141CF743B83(unk_0x8CB435AA1E25DA51(Local_353.f_22), "MPBitset"))
									{
										iVar6 = unk_0xD0997DAAAB203234(unk_0x8CB435AA1E25DA51(Local_353.f_22), "MPBitset");
									}
									unk_0xD0E2BFCE93AE3ABD(&iVar6, 5);
									unk_0x0AB30E4FF0AE0C22(unk_0x8CB435AA1E25DA51(Local_353.f_22), "MPBitset", iVar6);
								}
								if (unk_0x67BE6A47B59A2390("MPBitset", 3))
								{
									if (unk_0x53D28141CF743B83(unk_0x8CB435AA1E25DA51(Local_353.f_22), "MPBitset"))
									{
										iVar7 = unk_0xD0997DAAAB203234(unk_0x8CB435AA1E25DA51(Local_353.f_22), "MPBitset");
									}
									unk_0xD0E2BFCE93AE3ABD(&iVar7, 10);
									unk_0x0AB30E4FF0AE0C22(unk_0x8CB435AA1E25DA51(Local_353.f_22), "MPBitset", iVar7);
								}
								if (unk_0x67BE6A47B59A2390("Not_Allow_As_Saved_Veh", 3))
								{
									unk_0x0AB30E4FF0AE0C22(unk_0x8CB435AA1E25DA51(Local_353.f_22), "Not_Allow_As_Saved_Veh", 1);
								}
								unk_0xD0E2BFCE93AE3ABD(&(Local_353.f_23), 0);
								unk_0x29DB79DD4D939B38(&(Local_353.f_23), 2);
								unk_0x29DB79DD4D939B38(&(Local_353.f_23), 4);
								unk_0x29DB79DD4D939B38(&(Local_353.f_23), 3);
								unk_0x29DB79DD4D939B38(&iLocal_558, 11);
								unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 23);
								unk_0xEA054561294AEC10(Local_353.f_67);
								Local_353.f_26 = 1;
								func_41(&(Local_353.f_30));
								func_412(&(Local_353.f_30), 0, 0);
								unk_0x542B8BF5C21F2470(unk_0x8CB435AA1E25DA51(Local_353.f_22), 7);
								unk_0xFBB8344C6C5EC6AD(unk_0x8CB435AA1E25DA51(Local_353.f_22), 1);
								unk_0x32DC163A33A4AB6D(Local_353.f_67, 1);
								unk_0x6DCC3353FC2F7B16(Local_353.f_22, 1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x889D01384B54BCE3(Local_353.f_23, 2))
			{
				if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
				{
					if (!unk_0xECFECDAD51A6184F(unk_0x8CB435AA1E25DA51(Local_353.f_22), 0))
					{
						Local_56.f_2 = 38;
						func_16(Local_56, func_17(1));
						unk_0xD0E2BFCE93AE3ABD(&(Local_353.f_23), 2);
					}
				}
			}
			if (unk_0x889D01384B54BCE3(iLocal_558, 3) || (unk_0x889D01384B54BCE3(iLocal_558, 10) && unk_0x889D01384B54BCE3(Local_353.f_23, 1)))
			{
				if (!unk_0x889D01384B54BCE3(iLocal_558, 3))
				{
					if (!unk_0x889D01384B54BCE3(Local_353.f_23, 2))
					{
						if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
						{
							if (!unk_0xECFECDAD51A6184F(unk_0x8CB435AA1E25DA51(Local_353.f_22), 0))
							{
								Local_56.f_2 = 38;
								func_16(Local_56, func_17(1));
								unk_0xD0E2BFCE93AE3ABD(&(Local_353.f_23), 2);
							}
						}
					}
				}
				Local_353.f_26 = 2;
			}
			if (func_15(unk_0x8CB435AA1E25DA51(Local_353.f_22)))
			{
				Local_353.f_26 = 2;
				Local_56.f_2 = 39;
				func_16(Local_56, func_17(1));
			}
			if (!unk_0x889D01384B54BCE3(Local_353.f_23, 4))
			{
				if (func_411(&(Local_353.f_30), 360000, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_353.f_23), 4);
					func_41(&(Local_353.f_30));
					func_412(&(Local_353.f_30), 0, 0);
				}
			}
			else if (unk_0x889D01384B54BCE3(iLocal_558, 10))
			{
				if (!unk_0x889D01384B54BCE3(Local_353.f_23, 3))
				{
					if (func_413(&(Local_353.f_30)))
					{
						if (func_411(&(Local_353.f_30), 120000, 0))
						{
							Local_353.f_26 = 2;
							Local_56.f_2 = 39;
							func_16(Local_56, func_17(1));
						}
					}
					else
					{
						func_412(&(Local_353.f_30), 0, 0);
					}
				}
				else if (func_413(&(Local_353.f_30)))
				{
					func_41(&(Local_353.f_30));
				}
			}
			if (unk_0x889D01384B54BCE3(Local_353.f_23, 6))
			{
				if (!unk_0x889D01384B54BCE3(iLocal_558, 3))
				{
					if (Local_353.f_26 == 1)
					{
						Local_353.f_26 = 2;
					}
				}
			}
			if (func_11(6))
			{
				if (Local_353.f_26 == 1)
				{
					Local_353.f_26 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
			{
				if (func_10(Local_353.f_22))
				{
					func_9(&(Local_353.f_22));
					Local_353.f_26 = 3;
				}
			}
			else
			{
				Local_353.f_26 = 3;
			}
			break;
		
		case 3:
			if (unk_0x889D01384B54BCE3(iLocal_558, 10))
			{
				if (unk_0x889D01384B54BCE3(Local_353.f_23, 1))
				{
					Local_353.f_26 = 0;
					unk_0x29DB79DD4D939B38(&(Local_353.f_23), 0);
					Local_353.f_27 = -15;
					if (Local_353.f_67 != 0)
					{
						unk_0x32DC163A33A4AB6D(Local_353.f_67, 0);
					}
					Local_353.f_67 = 0;
					if (bLocal_285)
					{
						func_7(func_8(unk_0xE7CD1A45CD3148E7("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()
{
	if (unk_0xE9849174628A9C50())
	{
		switch (Local_353.f_69)
		{
			case 0:
				if (unk_0x889D01384B54BCE3(Local_353.f_23, 8))
				{
					if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
					{
						if (!func_6())
						{
							if (unk_0xB7C5D2EE1AFF3CB8(unk_0x8CB435AA1E25DA51(Local_353.f_22)))
							{
								if (!unk_0x0852C405AF94F670(unk_0x8CB435AA1E25DA51(Local_353.f_22), 1204.053f, -3102.311f, 1.770506f, 1204.265f, -3121.974f, 17.92032f, 31.625f, 0, 1, 0))
								{
									if (func_4(Local_353.f_22))
									{
										if (unk_0x428E17610BCE75C2(Local_353.f_22))
										{
											unk_0x6A23C3306A8CF21B(unk_0x8CB435AA1E25DA51(Local_353.f_22), true, 0);
											unk_0x542B8BF5C21F2470(unk_0x8CB435AA1E25DA51(Local_353.f_22), 1);
											unk_0x3CC3106305C40A28(unk_0x8CB435AA1E25DA51(Local_353.f_22), false);
										}
										else
										{
											unk_0x9B863F3140F59B7F(Local_353.f_22);
										}
									}
								}
							}
						}
					}
				}
				break;
			}
	}
}

int func_4(var uParam0)
{
	if (unk_0x86CB59A6776A7C27(uParam0))
	{
		return !func_5(unk_0x8CB435AA1E25DA51(uParam0));
	}
	return 0;
}

int func_5(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (unk_0xE44A580B551C3645(iParam0))
		{
			return 1;
		}
		else if (!unk_0xECFECDAD51A6184F(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	int iVar0;
	
	if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
	{
		if (func_4(Local_353.f_22))
		{
			iVar0 = unk_0xD8A521688BDBE867(unk_0x8CB435AA1E25DA51(Local_353.f_22), -1);
			if (iVar0 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 365;
	Var0.f_1 = unk_0x1788E93557766241();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xD311A006D41D0704(1, &Var0, 3, iParam0);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	
	unk_0xD0E2BFCE93AE3ABD(&uVar0, iParam0);
	return uVar0;
}

void func_9(var uParam0)
{
	var uVar0;
	
	if (unk_0xCB5D8B19B62A3B89(*uParam0))
	{
		uVar0 = unk_0xD65CB1FBC5B5BA6A(*uParam0);
		unk_0x5317ED1B1D4BC2F3(&uVar0);
	}
}

int func_10(var uParam0)
{
	if (unk_0x86CB59A6776A7C27(uParam0))
	{
		unk_0x9B863F3140F59B7F(uParam0);
		return unk_0x428E17610BCE75C2(uParam0);
	}
	return 0;
}

bool func_11(int iParam0)
{
	return !func_12(iParam0);
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5006)
			{
				return 0;
			}
			if (func_66(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5007)
			{
				return 0;
			}
			if (func_66(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5008)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5009)
			{
				return 0;
			}
			if (func_66(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_13(4))
			{
				return 0;
			}
			if (func_66(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_13(4))
			{
				return 0;
			}
			if (func_66(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_13(4))
			{
				return 0;
			}
			if (func_66(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 19:
		case 21:
		case 22:
		case 23:
			if (func_13(4))
			{
				return 0;
			}
			if (func_66(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_13(4))
			{
				return 0;
			}
			if (func_66(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_13(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_14(unk_0x42C0B50857BF923B(iVar0), 0, 1))
		{
			if (unk_0x889D01384B54BCE3(Global_2414327[iVar0 /*255*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x38FA37FE3518BA38(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2AF80829930084FD(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422491.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		if (unk_0x67BE6A47B59A2390("bombdec1", 3))
		{
			if (unk_0x53D28141CF743B83(iParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (unk_0x67BE6A47B59A2390("bombdec", 3))
		{
			if (unk_0x53D28141CF743B83(iParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (unk_0x67BE6A47B59A2390("bombowner", 3))
		{
			if (unk_0x53D28141CF743B83(iParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_16(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x1788E93557766241();
	if (!iParam14 == 0)
	{
		unk_0xD311A006D41D0704(1, &Param0, 14, iParam14);
	}
}

int func_17(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x3F202553F90D4442())
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar1)))
		{
			iVar2 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iVar1));
			if (func_14(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1788E93557766241() || iParam0)
				{
					unk_0xD0E2BFCE93AE3ABD(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_18(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x6B2CA196CD4C58D1(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x597CB55BA0825820(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x9BB6F54E415071A1(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x16645C5D9329E9F2(uVar0);
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		unk_0x940C6B8BF42B190B(uVar0, iParam10);
		if (unk_0xF5F2A2EAFEFB36D2(uVar0))
		{
			if (bParam8)
			{
				unk_0x59262222326E6883(*uParam0, 1);
			}
			else
			{
				unk_0x59262222326E6883(*uParam0, 0);
			}
		}
		unk_0x4852ECC2C24A1A6C(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_19(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!func_26(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_287)
	{
		case 0:
			Var0 = { -810.8889f, -126.9419f, 33f };
			Var3 = { -807.2521f, -116.098f, 38f };
			Var6 = { -809.0935f, -121.9038f, 36.504f };
			fVar9 = 240.8011f;
			break;
		
		case 1:
			Var0 = { -804.004f, -1317.293f, 0.0005f };
			Var3 = { -797.881f, -1310.998f, 7.0005f };
			Var6 = { -801.6295f, -1313.865f, 4.0005f };
			fVar9 = 350.3062f;
			break;
		
		case 2:
			Var0 = { -194.8607f, -1955.005f, 25.6205f };
			Var3 = { -189.4078f, -1945.248f, 28.6205f };
			Var6 = { -191.5592f, -1950.239f, 26.6205f };
			fVar9 = 288.8187f;
			break;
		
		case 3:
			Var0 = { -2966.875f, 459.3981f, 13.4644f };
			Var3 = { -2961.456f, 466.0484f, 16.1725f };
			Var6 = { -2963.887f, 462.7986f, 14.2156f };
			fVar9 = 30.4415f;
			break;
		
		case 4:
			Var0 = { -420.6335f, 1217.742f, 322.7591f };
			Var3 = { -411.9892f, 1220.346f, 326.6421f };
			Var6 = { -416.0102f, 1219.771f, 324.6421f };
			fVar9 = 230.4509f;
			break;
		
		case 5:
			Var0 = { -1634.708f, -890.849f, 6.97f };
			Var3 = { -1633.903f, -879.869f, 9.1264f };
			Var6 = { -1634.006f, -885.3531f, 8.0518f };
			fVar9 = 321.31f;
			break;
		
		case 6:
			Var0 = { -338.4312f, -947.4233f, 28.0788f };
			Var3 = { -331.5926f, -944.408f, 32.0788f };
			Var6 = { -334.8547f, -945.2789f, 30.0788f };
			fVar9 = 69.0442f;
			break;
		
		case 7:
			Var0 = { 1093.925f, 245.6548f, 77.9908f };
			Var3 = { 1094.243f, 255.0715f, 82.8556f };
			Var6 = { 1093.686f, 250.4772f, 79.8556f };
			fVar9 = 328.5602f;
			break;
		
		case 8:
			Var0 = { -1407.823f, 58.1796f, 50.8018f };
			Var3 = { -1400.19f, 63.9074f, 54.3222f };
			Var6 = { -1404.459f, 62.1459f, 52.0258f };
			fVar9 = 241.2814f;
			break;
		
		case 9:
			Var0 = { -1230.324f, -1656.814f, 2.0412f };
			Var3 = { -1226.429f, -1648.143f, 4.1986f };
			Var6 = { -1228.901f, -1652.397f, 3.1204f };
			fVar9 = 305.0972f;
			break;
	}
	if (!func_26(Var0, 0f, 0f, 0f, 0))
	{
		if (iLocal_287 < 10)
		{
			if (Local_353.f_24 == -1)
			{
				Local_353.f_24 = unk_0x910856E5DF5382D5(Var0, Var3);
			}
			else if (unk_0x139D18B7A1D82592(Local_353.f_24))
			{
				if (unk_0xA3E02A663010A1BE(Local_353.f_24))
				{
					if (!unk_0x8B973D82A507F4BE(Local_353.f_24))
					{
						if (!func_20(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							unk_0xB7A6D93D885AFBB9(Local_353.f_24);
							Local_353.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_287++;
							unk_0xB7A6D93D885AFBB9(Local_353.f_24);
							Local_353.f_24 = -1;
						}
					}
					else
					{
						iLocal_287++;
						unk_0xB7A6D93D885AFBB9(Local_353.f_24);
						Local_353.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_287 = 0;
		}
	}
	return 0;
}

int func_20(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_14(unk_0x1788E93557766241(), 1, 1))
		{
			if (!unk_0xF4C685E933068D23())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4970185D4CC64616(func_25(unk_0x1788E93557766241()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x7A98E0DD2E6FAB7A(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_14(iVar1, 1, 1))
		{
			if (!func_22(iVar1, 0) && unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1788E93557766241()))
				{
					if ((func_21(iVar1) || !bParam10) && !Global_2414327[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xA2D6C1E24AF2E058(iVar1) == -1)
							{
								if (unk_0xA2D6C1E24AF2E058(iVar1) == unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xA2D6C1E24AF2E058(iVar1) != unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))) || unk_0xA2D6C1E24AF2E058(iVar1) == -1)
							{
								if (unk_0x4970185D4CC64616(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0FC608B6B212C0E5(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xA2D6C1E24AF2E058(iVar1) != iParam8 || unk_0xA2D6C1E24AF2E058(iVar1) == -1)
						{
							if (unk_0x4970185D4CC64616(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0FC608B6B212C0E5(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_21(int iParam0)
{
	if (unk_0x14D5064869773C21(unk_0xFF34D923BFB5E9FB(iParam0)) || Global_2414327[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_22(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_23(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
	}
	if (Global_1315869[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_24()
{
	return Global_1312729;
}

Vector3 func_25(int iParam0)
{
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iParam0), 0);
}

bool func_26(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_27(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x939DA7EBCC6588FF(iParam0);
	return unk_0x5494F37F35C1D7D7(iParam0);
}

int func_28()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (Global_262145.f_2316 != 0)
	{
		iVar1 = Global_262145.f_2316;
		if (unk_0x46C6225A57CA6969(iVar1))
		{
			if (unk_0xD3B644BC9C4BCCE4(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar2 = func_30(&Local_353);
		iVar0 = func_29(iVar2);
	}
	return iVar0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("sentinel");
		
		case 1:
			return joaat("serrano");
		
		case 2:
			return joaat("dominator");
		
		case 3:
			return joaat("schafter2");
		
		case 4:
			return joaat("surge");
		
		case 5:
			return joaat("jackal");
		
		case 6:
			return joaat("ztype");
		
		case 7:
			return joaat("tailgater");
		
		case 8:
			return joaat("landstalker");
		
		case 9:
			return joaat("penumbra");
		
		case 10:
			return joaat("f620");
		
		case 11:
			return joaat("fq2");
		
		case 12:
			return joaat("patriot");
		
		case 13:
			return joaat("habanero");
		
		case 14:
			return joaat("prairie");
		
		case 15:
			return joaat("fusilade");
		
		case 16:
			return joaat("bjxl");
		
		case 17:
			return joaat("gresley");
		
		case 18:
			return joaat("buccaneer");
		
		case 19:
			return joaat("daemon");
		
		case 20:
			return joaat("bagger");
		
		default:
	}
	return 0;
}

int func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x444ECD635D5FD45F(0, 5);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (iVar1 + iVar0);
		if (iVar2 >= 5)
		{
			iVar2 = (iVar2 - 5);
		}
		if (!(*uParam0)[iVar2] == -1)
		{
			if (uParam0->f_6[iVar2] == 0)
			{
				return (*uParam0)[iVar2];
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_31(int iParam0, bool bParam1, bool bParam2)
{
	return func_32(1, iParam0, 1, bParam1, bParam2);
}

int func_32(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x889D01384B54BCE3(Global_1337502, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_36(iParam0) - func_35(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_35(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_36(iParam0) - func_34(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_35(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_36(iParam0) - func_35(iParam0, 1));
		}
		if (!bParam4 && Global_1583725[unk_0x1788E93557766241() /*334*/] != 3)
		{
			iVar1 = (iVar1 - func_33(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0)
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

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1337502.f_1;
			break;
		
		case 1:
			return Global_1337502.f_2;
			break;
		
		case 2:
			return Global_1337502.f_3;
			break;
	}
	return 0;
}

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1788E93557766241();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x93C72DAC35C5D38C())
			{
				return Global_2414327[iVar0 /*255*/].f_206;
			}
			else
			{
				return unk_0x024C856772216145(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x93C72DAC35C5D38C())
			{
				return Global_2414327[iVar0 /*255*/].f_207;
			}
			else
			{
				return unk_0xE3D4C4A7B97ADBA6(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x93C72DAC35C5D38C())
			{
				return Global_2414327[iVar0 /*255*/].f_208;
			}
			else
			{
				return unk_0x61868BC711B05123(!bParam1);
			}
			break;
	}
	return 0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1337510;
			break;
		
		case 1:
			return Global_1337511;
			break;
		
		case 2:
			return Global_1337512;
			break;
	}
	return 0;
}

bool func_37(int iParam0)
{
	return func_38(func_58(), iParam0);
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_39(iParam1) || !func_39(iParam0))
	{
		return 1;
	}
	iVar0 = func_51(iParam0);
	iVar1 = func_51(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_53(iParam0);
	iVar1 = func_53(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_54(iParam0);
	iVar1 = func_54(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_55(iParam0);
	iVar1 = func_55(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_56(iParam0);
	iVar1 = func_56(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_57(iParam0);
	iVar1 = func_57(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_39(int iParam0)
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
	iVar0 = func_57(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_56(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_55(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_51(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_53(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_54(iParam0);
	if (iVar5 < 1 || iVar5 > func_40(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0, int iParam1)
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

void func_41(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_42(int iParam0)
{
	return !func_12(iParam0);
}

void func_43(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_51(*uParam0);
	iVar1 = func_53(*uParam0);
	iVar2 = func_54(*uParam0);
	iVar3 = func_55(*uParam0);
	iVar4 = func_56(*uParam0);
	iVar5 = func_57(*uParam0);
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
	iVar6 = func_40(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_40(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_44(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_44(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_50(uParam0, iParam1);
	func_49(uParam0, iParam2);
	func_48(uParam0, iParam3);
	func_47(uParam0, iParam4);
	func_46(uParam0, iParam5);
	func_45(uParam0, iParam6);
}

void func_45(var uParam0, int iParam1)
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

void func_46(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_47(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_53(*uParam0);
	iVar1 = func_51(*uParam0);
	if (iParam1 < 1 || iParam1 > func_40(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_48(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_50(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_51(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_52(unk_0x889D01384B54BCE3(iParam0, 31), -1, 1)) + 2011;
}

int func_52(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_53(int iParam0)
{
	return iParam0 & 15;
}

int func_54(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_55(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_56(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_57(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_58()
{
	var uVar0;
	
	func_50(&uVar0, unk_0x4952CA33C6DB5AD4());
	func_49(&uVar0, unk_0x26ADBF0B08315387());
	func_48(&uVar0, unk_0xBE59E3811BD4FDD7());
	func_47(&uVar0, unk_0xA3730885141EEA96());
	func_46(&uVar0, unk_0x1EFE4ED658D22AF3());
	func_45(&uVar0, unk_0x4C29EAF01B84254C());
	return uVar0;
}

int func_59()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_353.f_6[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_60()
{
	int iVar0;
	
	if (!unk_0x889D01384B54BCE3(Local_353.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_353.f_35[iVar0] = -1;
			iVar0++;
		}
		unk_0xD0E2BFCE93AE3ABD(&(Local_353.f_23), 5);
	}
}

void func_61()
{
	int iVar0;
	
	func_415(&Local_353, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_353.f_12[iVar0] = func_62();
		iVar0++;
	}
	Local_353.f_33 = 1;
}

int func_62()
{
	int iVar0;
	
	iVar0 = unk_0x444ECD635D5FD45F(0, 10);
	while (func_63(iVar0))
	{
		iVar0 = unk_0x444ECD635D5FD45F(0, 10);
	}
	return iVar0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (!iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Local_353.f_12[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_64()
{
	int iVar0;
	
	iVar0 = func_30(&Local_353);
	if (iVar0 != Local_353.f_28)
	{
		Local_353.f_28 = iVar0;
		Local_353.f_29 = unk_0x519586565311459B();
	}
}

int func_65()
{
	if (Local_353.f_20 > 0)
	{
		if (Local_353[0] != Local_353[1])
		{
			return 1;
		}
	}
	return 0;
}

bool func_66(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_205, iParam1);
}

void func_67()
{
	Local_353.f_29 = 0;
}

void func_68()
{
	int iVar0;
	
	if (func_65())
	{
		if (Global_2446992.f_4227 == 0 || unk_0x889D01384B54BCE3(Global_2446992.f_4228, 0))
		{
			if (!func_413(&uLocal_307) || func_411(&uLocal_307, 2000, 0))
			{
				iVar0 = func_30(&Local_341);
				if (iVar0 > -1)
				{
					Global_2446992.f_4227 = func_29(iVar0);
					func_41(&uLocal_305);
					func_412(&uLocal_305, 0, 0);
					if (unk_0x889D01384B54BCE3(Global_2446992.f_4228, 0))
					{
						unk_0x29DB79DD4D939B38(&(Global_2446992.f_4228), 0);
					}
				}
				else
				{
					func_41(&uLocal_307);
					func_412(&uLocal_307, 0, 0);
				}
			}
		}
		else if (Global_2446992.f_4227 != 0)
		{
			if (func_411(&uLocal_305, 20000, 0))
			{
				if (!func_69(&Local_341, Global_2446992.f_4227))
				{
					Global_2446992.f_4227 = 0;
				}
				func_41(&uLocal_305);
				func_412(&uLocal_305, 0, 0);
			}
		}
	}
}

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_70(iParam1);
	if (!iVar0 == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!(*uParam0)[iVar1] == -1)
			{
				if (!uParam0->f_6[iVar1])
				{
					if ((*uParam0)[iVar1] == iVar0)
					{
						return 1;
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sentinel"):
			return 0;
		
		case joaat("serrano"):
			return 1;
		
		case joaat("dominator"):
			return 2;
		
		case joaat("schafter2"):
			return 3;
		
		case joaat("surge"):
			return 4;
		
		case joaat("jackal"):
			return 5;
		
		case joaat("ztype"):
			return 6;
		
		case joaat("tailgater"):
			return 7;
		
		case joaat("landstalker"):
			return 8;
		
		case joaat("penumbra"):
			return 9;
		
		case joaat("f620"):
			return 10;
		
		case joaat("fq2"):
			return 11;
		
		case joaat("patriot"):
			return 12;
		
		case joaat("habanero"):
			return 13;
		
		case joaat("prairie"):
			return 14;
		
		case joaat("fusilade"):
			return 15;
		
		case joaat("bjxl"):
			return 16;
		
		case joaat("gresley"):
			return 17;
		
		case joaat("buccaneer"):
			return 18;
		
		case joaat("daemon"):
			return 19;
		
		case joaat("bagger"):
			return 20;
		
		default:
	}
	return -1;
}

void func_71()
{
	int iVar0;
	
	if (((((bLocal_76 || bLocal_77) || bLocal_78) || bLocal_80) || bLocal_79) || bLocal_81)
	{
		if (((((Global_2446992.f_28.f_40 || func_123(unk_0x1788E93557766241(), 1)) || func_122(unk_0x1788E93557766241())) || !func_120()) || func_115()) || func_113())
		{
			bLocal_76 = false;
			bLocal_78 = false;
			bLocal_77 = false;
			bLocal_80 = false;
			bLocal_79 = false;
			func_112();
		}
	}
	if ((func_111("FM_CTUT_RSP") || func_111("FM_CTUT_REP")) || func_111("FM_CTUT_LLS"))
	{
		if (!func_110() || func_113())
		{
			func_112();
		}
	}
	if (bLocal_81)
	{
		if (!func_111("FM_IHELP_LCP"))
		{
			if (!unk_0xCE3402BDFD2ADED8())
			{
				if (func_93())
				{
					if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0)
					{
						if (func_92())
						{
							func_86("FM_IHELP_LCP", 0);
						}
					}
				}
			}
		}
	}
	else if (!unk_0x889D01384B54BCE3(iLocal_558, 18))
	{
		if (func_111("FM_IHELP_LCP"))
		{
			func_79("FM_IHELP_LCP");
		}
	}
	if (bLocal_76)
	{
		if (!func_111("FM_CTUT_MOD"))
		{
			if (!unk_0xCE3402BDFD2ADED8())
			{
				if (func_93())
				{
					if (unk_0x889D01384B54BCE3(iLocal_311, 2))
					{
						if (func_92())
						{
							func_86("FM_CTUT_MOD", 0);
						}
					}
				}
			}
		}
	}
	else if (!unk_0x889D01384B54BCE3(iLocal_558, 18))
	{
		if (func_111("FM_CTUT_MOD"))
		{
			func_79("FM_CTUT_MOD");
		}
	}
	if (bLocal_78)
	{
		if (!func_111("FM_CTUT_RSP"))
		{
			if (!unk_0xCE3402BDFD2ADED8())
			{
				if (unk_0x83B393DE31BAC8F0())
				{
					if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
					{
						if (!func_123(unk_0x1788E93557766241(), 1))
						{
							if (func_92())
							{
								if (func_110())
								{
									func_86("FM_CTUT_RSP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0x889D01384B54BCE3(iLocal_558, 18))
	{
		if (func_111("FM_CTUT_RSP"))
		{
			func_79("FM_CTUT_RSP");
		}
	}
	if (bLocal_79)
	{
		if (!func_111("FM_CTUT_RSP"))
		{
			if (!unk_0xCE3402BDFD2ADED8())
			{
				if (unk_0x83B393DE31BAC8F0())
				{
					if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
					{
						if (!func_123(unk_0x1788E93557766241(), 1))
						{
							if (func_92())
							{
								if (func_110())
								{
									func_86("FM_CTUT_REP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0x889D01384B54BCE3(iLocal_558, 18))
	{
		if (func_111("FM_CTUT_REP"))
		{
			func_79("FM_CTUT_REP");
		}
	}
	if (bLocal_80)
	{
		if (!func_111("FM_CTUT_LLS"))
		{
			if (!unk_0xCE3402BDFD2ADED8())
			{
				if (func_93() || func_72())
				{
					if (func_92())
					{
						if (func_110())
						{
						}
					}
				}
			}
		}
	}
	else if (!unk_0x889D01384B54BCE3(iLocal_558, 18))
	{
		if (func_111("FM_CTUT_LLS"))
		{
			func_79("FM_CTUT_LLS");
		}
	}
	if (bLocal_77)
	{
		if (!func_111("FM_IMP_SIM"))
		{
			if (!unk_0xCE3402BDFD2ADED8())
			{
				if (func_93() || func_72())
				{
					if (unk_0x889D01384B54BCE3(iLocal_311, 3))
					{
						if (!iLocal_83)
						{
							if (func_92())
							{
								func_86("FM_IMP_SIM", 0);
								if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
								{
									if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
									{
										iLocal_326 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
									}
								}
							}
						}
						else if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
						{
							if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
							{
								iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
								if (iVar0 != iLocal_326)
								{
									iLocal_83 = 0;
									func_41(&uLocal_309);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_413(&uLocal_309))
		{
			func_412(&uLocal_309, 0, 0);
		}
		else if (func_411(&uLocal_309, 20000, 0))
		{
			func_112();
			iLocal_83 = 1;
		}
	}
	else if (!unk_0x889D01384B54BCE3(iLocal_558, 18))
	{
		if (func_111("FM_IMP_SIM"))
		{
			func_79("FM_IMP_SIM");
		}
	}
}

bool func_72()
{
	return ((((func_73(39) || func_73(40)) || func_73(41)) || func_73(42)) || func_73(43));
}

int func_73(int iParam0)
{
	return func_74(iParam0, 6, 1);
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x889D01384B54BCE3(Global_90094.f_1272[iParam0], iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_78() == 0)
		{
			return unk_0x889D01384B54BCE3(func_75(func_77(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2455246[iParam0 /*5*/][func_76(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
		if (iVar1 > -1)
		{
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		default:
			break;
	}
	return 3025;
}

int func_78()
{
	return Global_24446;
}

void func_79(char* sParam0)
{
	bool bVar0;
	
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_85())
	{
		if (Global_1312577 == 11)
		{
			if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 63)
			{
				return;
			}
			bVar0 = unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_14));
		}
		else
		{
			if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 23)
			{
				return;
			}
			bVar0 = unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_10));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_80();
}

void func_80()
{
	func_82();
	func_81(0);
}

void func_81(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1DAD7CE53BEE7710();
	Global_1312577 = 12;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x519586565311459B();
		Global_1312577.f_9 = unk_0x519586565311459B();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 16);
	Global_1312577.f_34 = 0;
	Global_1312577.f_35 = 0;
	Global_1312577.f_36 = 0;
	Global_1312577.f_37 = -1;
	Global_1312577.f_38 = 0;
	Global_1312577.f_39 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_82()
{
	if (!func_84())
	{
	}
	if (func_85())
	{
		unk_0x0945E066A4F6A0E3(&(Global_1312577.f_10));
		func_83();
		unk_0x88A8396804C29D3A();
	}
}

void func_83()
{
	switch (Global_1312577)
	{
		case 12:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x53B64327E3305DCB(Global_1312577.f_34);
			return;
		
		case 2:
			unk_0x53B64327E3305DCB(Global_1312577.f_34);
			unk_0x53B64327E3305DCB(Global_1312577.f_35);
			return;
		
		case 3:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0x61329A2F1E63248B(Global_1312577.f_38);
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0x61329A2F1E63248B(Global_1312577.f_38);
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x9FBED7BEC6BDE9B6(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x9FBED7BEC6BDE9B6(&(Global_1312577.f_14));
			return;
		
		default:
	}
}

int func_84()
{
	if (!func_85())
	{
		return 0;
	}
	unk_0xA5FA652414A5B56F(&(Global_1312577.f_10));
	func_83();
	return unk_0x516C4E27C3C5FFAD();
}

int func_85()
{
	if (Global_1312577 == 12)
	{
		return 0;
	}
	return 1;
}

void func_86(char* sParam0, bool bParam1)
{
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 23)
	{
		return;
	}
	if (func_90(sParam0))
	{
		return;
	}
	func_80();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x7E5A426328F6E635(), 24);
	Global_1312577.f_7 = unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_89();
	func_88(bParam1);
	func_87();
}

void func_87()
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1312577.f_39), 1);
}

void func_88(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1312577.f_39), 0);
		return;
	}
	unk_0x29DB79DD4D939B38(&(Global_1312577.f_39), 0);
}

void func_89()
{
	Global_1312577.f_8 = unk_0xBBFAF6DED9DAD29D(unk_0x519586565311459B(), 86400000);
	Global_1312577.f_9 = unk_0x519586565311459B();
}

bool func_90(char* sParam0)
{
	if (!func_85())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_91(sParam0);
	}
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	return unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_10));
}

bool func_91(char* sParam0)
{
	if (!func_85())
	{
		return 0;
	}
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	return unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_14));
}

bool func_92()
{
	bool bVar0;
	
	if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
	{
		if (func_4(Local_353.f_22))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0xD9275EB8FA656B5C(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_353.f_22)))
				{
				}
			}
		}
	}
	if (!unk_0x889D01384B54BCE3(iLocal_559, 0))
	{
		if (!unk_0x889D01384B54BCE3(iLocal_559, 1))
		{
			bVar0 = true;
		}
		else if (!unk_0x889D01384B54BCE3(iLocal_559, 2))
		{
			bVar0 = true;
		}
		else if (!unk_0x889D01384B54BCE3(iLocal_559, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			unk_0xD0E2BFCE93AE3ABD(&iLocal_559, 0);
		}
	}
	return bVar0;
}

int func_93()
{
	if ((((((((((((((((((!func_14(unk_0x1788E93557766241(), 1, 1) || unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357())) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || func_109(8, -1)) || func_109(15, -1)) || func_108()) || func_109(3, -1)) || func_123(unk_0x1788E93557766241(), 1)) || func_107()) || func_110()) || func_106()) || func_105()) || func_103()) || func_102()) || unk_0xCE3402BDFD2ADED8()) || func_101() > 0) || !func_120()) || func_94()) || func_113())
	{
		return 0;
	}
	return 1;
}

int func_94()
{
	if (func_66(unk_0x1788E93557766241(), 8))
	{
		return 1;
	}
	if (func_66(unk_0x1788E93557766241(), 10))
	{
		return 1;
	}
	if (func_66(unk_0x1788E93557766241(), 12))
	{
		return 1;
	}
	if (func_66(unk_0x1788E93557766241(), 14))
	{
		return 1;
	}
	if (func_66(unk_0x1788E93557766241(), 13))
	{
		return 1;
	}
	if (func_100())
	{
		return 1;
	}
	if (func_99())
	{
		return 1;
	}
	if (!func_98() && !func_97())
	{
		if (!func_96())
		{
			if (!func_95())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95()
{
	int iVar0;
	
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1622, 7))
	{
		return 1;
	}
	iVar0 = Global_1336485[func_76(-1)];
	if (unk_0x889D01384B54BCE3(iVar0, 6))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_1622), 7);
		return 1;
	}
	if (func_98())
	{
		return 1;
	}
	if (func_97())
	{
		return 1;
	}
	return 0;
}

bool func_96()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 2);
}

bool func_97()
{
	return Global_1315879;
}

bool func_98()
{
	return Global_1315881;
}

int func_99()
{
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1622, 28) && !unk_0x889D01384B54BCE3(Global_2446992.f_1622, 29))
	{
		return 1;
	}
	return 0;
}

bool func_100()
{
	return unk_0x889D01384B54BCE3(Global_2446992.f_1623, 3);
}

int func_101()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/].f_174;
}

int func_102()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

bool func_103()
{
	return func_104();
}

bool func_104()
{
	return Global_1321250.f_40 == 3;
}

bool func_105()
{
	return Global_2422491.f_2419.f_585;
}

bool func_106()
{
	return Global_90094.f_291 > 0;
}

bool func_107()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_18, 0);
}

var func_108()
{
	return Global_2394624;
}

bool func_109(int iParam0, int iParam1)
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

bool func_110()
{
	return unk_0x09560C7DE2A384BD() <= Global_17238.f_5130 + 100;
}

int func_111(char* sParam0)
{
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	if (!func_85())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 23)
	{
		return 0;
	}
	return func_90(sParam0);
}

void func_112()
{
	if (!func_85())
	{
		return;
	}
	if (!unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635()) == Global_1312577.f_7)
	{
		return;
	}
	func_80();
}

int func_113()
{
	if (func_114(14))
	{
		return 1;
	}
	if (func_114(0))
	{
		return 1;
	}
	return 0;
}

bool func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = func_75(2445, -1, 0);
	return unk_0x889D01384B54BCE3(iVar0, iParam0);
}

int func_115()
{
	if (!func_119(unk_0x1788E93557766241()))
	{
		if (func_118(unk_0x1788E93557766241()) || func_117(unk_0x1788E93557766241()) != -1)
		{
			return 1;
		}
		if (func_116(unk_0x1788E93557766241()) && Global_1573734.f_4 == 133)
		{
			return 1;
		}
	}
	return 0;
}

bool func_116(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 4);
}

int func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1602607[iVar0 /*12*/];
	}
	return -1;
}

int func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_1602607[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

bool func_119(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 2);
}

int func_120()
{
	if (func_121() == 0)
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	return Global_1312466.f_18;
}

int func_122(int iParam0)
{
	if (!func_14(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1583725[iParam0 /*334*/].f_35;
}

int func_123(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_124(iParam0))
		{
			return 1;
		}
	}
	if (Global_1583725[iParam0 /*334*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_124(int iParam0)
{
	return func_125(iParam0);
}

bool func_125(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_13.f_1, 0);
}

void func_126()
{
	if (bLocal_74)
	{
		if (!unk_0x5660C8AFDD9C1721(Global_1689987))
		{
			Global_1689987 = unk_0x64F646E6A974BF18(Global_1689988);
			unk_0x2025496D9184D312(Global_1689987, 293);
			unk_0xBE97A5A41C1F5C4C(Global_1689987, 1f);
			unk_0xABBBFFE76352EBB5(Global_1689987, 0);
			unk_0xFDA1FE98ECD75505(Global_1689987, "IMPEX_BLIP_FM");
			if (func_143())
			{
				unk_0x864CE7B9AD07DDDE(Global_1689987, 1);
			}
		}
	}
	else if (unk_0x5660C8AFDD9C1721(Global_1689987))
	{
		unk_0xB6FB9702660D84F6(&Global_1689987);
		if (bLocal_283)
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
				{
					if (!func_138(unk_0xFF34D923BFB5E9FB(unk_0x1788E93557766241()), 1215605247, &uLocal_314, 0, 500, 1, 0))
					{
						if (func_113())
						{
							func_137("IMPEX_HIPR_DAM", -1);
						}
					}
				}
			}
		}
	}
	if (bLocal_75)
	{
		if (iLocal_96 == -1)
		{
			iLocal_96 = func_133(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 4, -1);
			if (iLocal_96 != -1)
			{
				func_127(iLocal_96, 1);
			}
		}
	}
	else if (iLocal_96 != -1)
	{
		func_127(iLocal_96, 0);
		iLocal_96 = -1;
	}
}

void func_127(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 39:
			func_128(39, bParam1);
			break;
		
		case 40:
			func_128(40, bParam1);
			break;
		
		case 41:
			func_128(41, bParam1);
			break;
		
		case 42:
			func_128(42, bParam1);
			break;
		
		case 43:
			func_128(43, bParam1);
			break;
		
		default:
			break;
	}
}

void func_128(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_74(iParam0, 8, 0))
		{
			func_132(iParam0, 8, 0);
			func_131(iParam0);
		}
	}
	else if (func_74(iParam0, 8, 0))
	{
		func_129(iParam0, 8, 0);
		func_131(iParam0);
	}
}

void func_129(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x29DB79DD4D939B38(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_78() == 0)
		{
			uVar0 = func_75(func_77(iParam0), -1, 0);
			unk_0x29DB79DD4D939B38(&uVar0, iParam1);
			func_130(func_77(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

void func_130(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
}

void func_131(int iParam0)
{
	Global_90094.f_153[iParam0] = 1;
	Global_90094.f_152 = 1;
}

void func_132(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_78() == 0)
		{
			uVar0 = func_75(func_77(iParam0), -1, 0);
			unk_0xD0E2BFCE93AE3ABD(&uVar0, iParam1);
			func_130(func_77(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

int func_133(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (iParam3 == 5 || iParam3 == func_136(iVar0))
		{
			iVar4 = iVar0;
			if (func_135(iVar4))
			{
				fVar1 = unk_0x4970185D4CC64616(Param0, func_134(iVar0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_134(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

bool func_135(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = unk_0x5660C8AFDD9C1721(Global_90094.f_198[39]);
			break;
		
		case 40:
			bVar0 = unk_0x5660C8AFDD9C1721(Global_90094.f_198[40]);
			break;
		
		case 41:
			bVar0 = unk_0x5660C8AFDD9C1721(Global_90094.f_198[41]);
			break;
		
		case 42:
			bVar0 = unk_0x5660C8AFDD9C1721(Global_90094.f_198[42]);
			break;
		
		case 43:
			bVar0 = unk_0x5660C8AFDD9C1721(Global_90094.f_198[43]);
			break;
	}
	return bVar0;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
	}
	return 5;
}

void func_137(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

int func_138(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!func_413(uParam2))
	{
		func_412(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_139(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<8> Var3;
	
	if (!func_413(uParam3))
	{
		func_412(uParam3, 0, 0);
	}
	func_142(&Var3, iParam1);
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			if (func_140(iParam0, iParam1, 30))
			{
				if (unk_0xA34B85701D8A1FA8(iParam0))
				{
					uVar0 = unk_0xA7CC89FF539E1376(iParam0);
					if (!unk_0x2DE0B96E966FD817(uVar0))
					{
						if (unk_0x2303B9FE7CF81971(iVar0))
						{
							uVar2 = unk_0x5D6FBED3ADADE26A(iVar0);
							if (bParam2)
							{
								if (unk_0x8B7A01F66C332219(iParam1, uVar2, fParam4, -1))
								{
									if (uParam7 || (!unk_0x3A5B45A21F09A6AE(iParam1, uVar2, 2) && !(Var3.f_7 != 0 && unk_0x3A5B45A21F09A6AE(iParam1, uVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (unk_0x8B7A01F66C332219(iParam1, uVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (unk_0x3A5B45A21F09A6AE(iParam1, uVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && unk_0x3A5B45A21F09A6AE(iParam1, uVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (unk_0x202EF5D8203705EF(iVar0, 0))
						{
							uVar1 = unk_0x6ADAC08D70C79DE5(iVar0, 0);
							if (unk_0x538DF9E5B1DF01EB(uVar1))
							{
								if (bParam2)
								{
									if (unk_0xCA98BF1A1CD0B9AE(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!unk_0x430942FED202D0B4(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && unk_0x430942FED202D0B4(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (unk_0xCA98BF1A1CD0B9AE(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (unk_0x430942FED202D0B4(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && unk_0x430942FED202D0B4(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (unk_0xCA98BF1A1CD0B9AE(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!unk_0x430942FED202D0B4(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0x430942FED202D0B4(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (unk_0xCA98BF1A1CD0B9AE(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0x430942FED202D0B4(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && unk_0x430942FED202D0B4(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (unk_0x9FF5D51C24AD2308(iParam0) || unk_0x15CE956C279F4825(iParam0))
				{
					if (bParam2)
					{
						if (unk_0xCA98BF1A1CD0B9AE(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!unk_0x430942FED202D0B4(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0x430942FED202D0B4(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (unk_0xCA98BF1A1CD0B9AE(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (unk_0x430942FED202D0B4(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && unk_0x430942FED202D0B4(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	func_41(uParam3);
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iParam0, 1), func_141(iParam1), 1) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_141(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 1204.429f, -3110.847f, 4.3988f;
			break;
		
		case -1710530912:
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case 1131590004:
			return -1164.887f, -2011.105f, 12.25371f;
			break;
		
		case 916723671:
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case 1340820069:
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case -866958545:
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_142(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1215605247:
			*uParam0 = 99;
			uParam0->f_1 = 1215605247;
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204.429f, -3110.847f, 4.3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_11 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_14 = 32.498f;
			uParam0->f_27 = { 1204.157f, -3122.599f, 3.795331f };
			uParam0->f_27.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case -1710530912:
			*uParam0 = 99;
			uParam0->f_1 = -1710530912;
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.791f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.004f, 23.4973f };
			uParam0->f_9.f_11 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_14 = 60.0199f;
			uParam0->f_27 = { 738.8857f, -1088.516f, 20.55957f };
			uParam0->f_27.f_3 = { 718.613f, -1088.78f, 24.83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case 1131590004:
			*uParam0 = 99;
			uParam0->f_1 = 1131590004;
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164.887f, -2011.105f, 12.25371f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.774f, -2010.27f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.639f, -2010.211f, 14.2928f };
			uParam0->f_9.f_11 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_14 = 64.5334f;
			uParam0->f_27 = { -1169.723f, -2015.923f, 11.50441f };
			uParam0->f_27.f_3 = { -1160.558f, -2007.005f, 15.68027f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 3:
		case 916723671:
			*uParam0 = 99;
			uParam0->f_1 = 916723671;
			uParam0->f_2 = 3;
			uParam0->f_3 = { -330.44f, -143.39f, 39.33f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332.1567f, -141.0546f, 40.2864f };
			uParam0->f_9.f_4 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_7 = 60.0241f;
			uParam0->f_9.f_8 = { -332.3621f, -140.8507f, 40.3956f };
			uParam0->f_9.f_11 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_14 = 60.0241f;
			uParam0->f_27 = { -323.7998f, -146.2539f, 37.81492f };
			uParam0->f_27.f_3 = { -334.3432f, -141.7261f, 40.75964f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 4:
		case 1340820069:
			*uParam0 = 99;
			uParam0->f_1 = 1340820069;
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.322f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.048f, 32.5586f };
			uParam0->f_9.f_11 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_14 = 67.562f;
			uParam0->f_27 = { 100.9759f, 6625.046f, 30.60301f };
			uParam0->f_27.f_3 = { 111.2522f, 6615.657f, 33.62929f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 5:
		case -866958545:
			*uParam0 = 99;
			uParam0->f_1 = -866958545;
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.345f, 2644.418f, 38.866f };
			uParam0->f_9.f_11 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_14 = 67.3374f;
			uParam0->f_27 = { 1182.835f, 2634.775f, 36.55006f };
			uParam0->f_27.f_3 = { 1182.578f, 2647.955f, 39.58602f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
	}
}

int func_143()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_75(1194, -1, 0);
	if (!unk_0x889D01384B54BCE3(iVar1, 1))
	{
		iVar0 = 1;
	}
	else if (!unk_0x889D01384B54BCE3(iVar1, 2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_144()
{
	if (bLocal_72)
	{
		if (!iLocal_73)
		{
			func_146(1215605247, 1, 0);
			func_145(1);
			iLocal_73 = 1;
		}
	}
	else if (iLocal_73)
	{
		func_146(1215605247, 0, 0);
		func_145(0);
		iLocal_73 = 0;
	}
}

void func_145(bool bParam0)
{
	if (Global_2446992.f_4360 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2446992.f_4360 = bParam0;
	}
}

void func_146(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
	}
	else if (bParam1)
	{
		if (!unk_0x889D01384B54BCE3(Global_2446992.f_4339, func_147(iParam0)))
		{
			if (bParam2)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4339.f_1), func_147(iParam0));
			}
			unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4339), func_147(iParam0));
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_2446992.f_4339, func_147(iParam0)))
	{
		if (bParam2)
		{
			unk_0x29DB79DD4D939B38(&(Global_2446992.f_4339.f_1), func_147(iParam0));
		}
		unk_0x29DB79DD4D939B38(&(Global_2446992.f_4339), func_147(iParam0));
	}
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 0;
			break;
		
		case -1710530912:
			return 1;
			break;
		
		case 1131590004:
			return 2;
			break;
		
		case 916723671:
			return 3;
			break;
		
		case 1340820069:
			return 4;
			break;
		
		case -866958545:
			return 5;
			break;
	}
	return 0;
}

void func_148()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x889D01384B54BCE3(Local_353.f_23, 0))
	{
		if (iLocal_317 >= 32)
		{
			unk_0x29DB79DD4D939B38(&iLocal_558, 5);
			iLocal_317 = 0;
			iLocal_289 = -1;
		}
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iLocal_317)))
		{
			iVar0 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iLocal_317));
			iVar1 = unk_0xFF34D923BFB5E9FB(iVar0);
			if (func_14(iVar0, 0, 1))
			{
				if (!unk_0x889D01384B54BCE3(iLocal_558, 3))
				{
					if (unk_0x889D01384B54BCE3(Local_429[iLocal_317 /*4*/].f_2, 1))
					{
						unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 3);
					}
				}
				if (iLocal_289 == -1)
				{
					if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
					{
						if (func_4(Local_353.f_22))
						{
							if (!unk_0x2DE0B96E966FD817(iVar1))
							{
								if (unk_0xD9275EB8FA656B5C(iVar1, unk_0x8CB435AA1E25DA51(Local_353.f_22)))
								{
									if (unk_0xD8A521688BDBE867(unk_0x8CB435AA1E25DA51(Local_353.f_22), -1) == iVar1)
									{
										iLocal_289 = iLocal_317;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_317++;
		if (iLocal_317 >= 32)
		{
			unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 5);
		}
		func_202();
		if (!unk_0x889D01384B54BCE3(iLocal_558, 3))
		{
			if (!unk_0x889D01384B54BCE3(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2, 3))
			{
				if (!unk_0x889D01384B54BCE3(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2, 1))
				{
					if (func_200())
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_286 != Local_353.f_34)
	{
		if (Local_353.f_34 == 0)
		{
			if (!unk_0xCB5D8B19B62A3B89(Local_353.f_22))
			{
				iLocal_286 = Local_353.f_34;
				unk_0x29AA9A92BCC0F8E3(iLocal_286);
			}
		}
		else
		{
			iLocal_286 = Local_353.f_34;
			unk_0x29AA9A92BCC0F8E3(iLocal_286);
		}
	}
	if (unk_0x889D01384B54BCE3(Local_353.f_23, 0))
	{
		switch (Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3)
		{
			case 0:
				if (!Global_2446992.f_1550)
				{
				}
				if (unk_0x889D01384B54BCE3(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2, 3))
				{
					unk_0x29DB79DD4D939B38(&(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2), 3);
				}
				if (unk_0x889D01384B54BCE3(iLocal_558, 21))
				{
					unk_0x29DB79DD4D939B38(&iLocal_558, 21);
				}
				if (unk_0x889D01384B54BCE3(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2, 1))
				{
					unk_0x29DB79DD4D939B38(&(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2), 1);
				}
				if (((!func_123(unk_0x1788E93557766241(), 1) && !func_107()) && !func_199(unk_0x1788E93557766241(), 1)) || func_66(unk_0x1788E93557766241(), 6))
				{
					if (unk_0x889D01384B54BCE3(iLocal_558, 3))
					{
						unk_0x29DB79DD4D939B38(&iLocal_558, 3);
					}
					if (unk_0x889D01384B54BCE3(iLocal_558, 19))
					{
						unk_0x29DB79DD4D939B38(&iLocal_558, 19);
					}
					if (unk_0x889D01384B54BCE3(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2, 3))
					{
						unk_0x29DB79DD4D939B38(&(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2), 3);
					}
					if (iLocal_288 != -1)
					{
						iLocal_288 = -1;
					}
					if (unk_0x889D01384B54BCE3(Local_353.f_23, 0))
					{
						if (!unk_0x889D01384B54BCE3(iLocal_558, 16))
						{
							unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 16);
							func_198(6, 1);
							unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 7);
							Global_2446992.f_1549 = 1;
							Global_2446992.f_1550 = 0;
						}
						if (unk_0x6B2CA196CD4C58D1(1))
						{
							if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
							{
								if (func_193())
								{
									if (Local_353.f_67 != 0)
									{
										unk_0x32DC163A33A4AB6D(Local_353.f_67, 1);
									}
									Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 = 1;
									Global_1689997 = unk_0xDF78B7F06503567E(unk_0x8CB435AA1E25DA51(Local_353.f_22));
									if (unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(unk_0x8CB435AA1E25DA51(Local_353.f_22))))
									{
										unk_0x2025496D9184D312(Global_1689997, 348);
										func_137("IMPEX_HIPB_INT", -1);
									}
									else
									{
										unk_0x2025496D9184D312(Global_1689997, 225);
										func_137("IMPEX_HIPR_INT", -1);
									}
									unk_0x1AD45E3CF020D50D(Global_1689997, 2);
									unk_0xFDA1FE98ECD75505(Global_1689997, "IMPEX_HIPR_BLP");
									func_198(6, 1);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 7);
									Global_2446992.f_1549 = 1;
									if (func_113())
									{
										unk_0x58063239A5B8FB80(Global_1689997, 0);
									}
								}
							}
						}
					}
				}
				else if (!Global_2446992.f_1550)
				{
					Global_2446992.f_1550 = 1;
				}
				break;
			
			case 1:
				if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
				{
					if (unk_0xECFECDAD51A6184F(unk_0x8CB435AA1E25DA51(Local_353.f_22), 0))
					{
						if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
						{
							if (unk_0xD9275EB8FA656B5C(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_353.f_22)))
							{
								func_192(1);
								if (func_191())
								{
									func_186(0);
								}
								if (unk_0x5660C8AFDD9C1721(Global_1689997))
								{
									unk_0xB6FB9702660D84F6(&Global_1689997);
								}
							}
							else
							{
								func_192(0);
								if (!func_185(unk_0x8CB435AA1E25DA51(Local_353.f_22), 0))
								{
									if (!unk_0x5660C8AFDD9C1721(Global_1689997))
									{
										if (!iLocal_95)
										{
											func_184();
										}
									}
								}
							}
						}
						if (!unk_0x889D01384B54BCE3(iLocal_558, 19))
						{
							if (func_193())
							{
								if (func_182())
								{
									if (!unk_0xD9275EB8FA656B5C(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_353.f_22)))
									{
										if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(unk_0x8CB435AA1E25DA51(Local_353.f_22), 1)) < 2500f)
										{
											if (func_113())
											{
												func_137("FM_IMP_JAC", -1);
											}
											unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 19);
										}
									}
								}
							}
						}
						if (func_181())
						{
						}
						func_180();
					}
					else
					{
						if (unk_0x5660C8AFDD9C1721(Global_1689997))
						{
							unk_0xB6FB9702660D84F6(&Global_1689997);
						}
						func_198(6, 0);
						unk_0x29DB79DD4D939B38(&iLocal_558, 7);
						Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_353.f_67 != 0)
					{
						unk_0x32DC163A33A4AB6D(Local_353.f_67, 0);
					}
					if (unk_0x5660C8AFDD9C1721(Global_1689997))
					{
						unk_0xB6FB9702660D84F6(&Global_1689997);
					}
					func_198(6, 0);
					unk_0x29DB79DD4D939B38(&iLocal_558, 7);
					Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 = 3;
				}
				if (unk_0x889D01384B54BCE3(iLocal_558, 3))
				{
					func_198(6, 0);
					unk_0x29DB79DD4D939B38(&iLocal_558, 7);
					if (unk_0x5660C8AFDD9C1721(Global_1689997))
					{
						unk_0xB6FB9702660D84F6(&Global_1689997);
					}
					Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 = 3;
				}
				if (Local_353.f_26 == 3)
				{
					if (Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 == 1)
					{
						if (Local_353.f_67 != 0)
						{
							unk_0x32DC163A33A4AB6D(Local_353.f_67, 0);
						}
						if (unk_0x5660C8AFDD9C1721(Global_1689997))
						{
							unk_0xB6FB9702660D84F6(&Global_1689997);
						}
						if (unk_0x889D01384B54BCE3(iLocal_558, 16))
						{
							unk_0x29DB79DD4D939B38(&iLocal_558, 16);
						}
						func_198(6, 0);
						unk_0x29DB79DD4D939B38(&iLocal_558, 7);
						Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 = 3;
					}
				}
				break;
			
			case 3:
				func_192(0);
				break;
		}
		if (func_177())
		{
			if (func_176("IMPEX_HIPR_INT"))
			{
				unk_0xFD1E0AEC770DAF2E(1);
			}
			if (unk_0x5660C8AFDD9C1721(Global_1689997))
			{
				unk_0xB6FB9702660D84F6(&Global_1689997);
			}
			if (Local_353.f_67 != 0)
			{
				unk_0x32DC163A33A4AB6D(Local_353.f_67, 0);
			}
			Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 = 3;
			func_198(6, 0);
			unk_0x29DB79DD4D939B38(&iLocal_558, 7);
			if (unk_0x889D01384B54BCE3(iLocal_558, 16))
			{
				unk_0x29DB79DD4D939B38(&iLocal_558, 16);
			}
			func_192(0);
		}
		func_152();
		if (Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 > 0 && Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 < 3)
		{
			func_149();
		}
	}
	else
	{
		if (Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 != 0)
		{
			if (Local_353.f_67 != 0)
			{
				unk_0x32DC163A33A4AB6D(Local_353.f_67, 0);
			}
			Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 = 0;
		}
		if (unk_0x889D01384B54BCE3(iLocal_558, 21))
		{
			unk_0x29DB79DD4D939B38(&iLocal_558, 21);
		}
		if (Global_2446992.f_1549)
		{
			if (!func_413(&uLocal_299))
			{
				func_412(&uLocal_299, 0, 0);
			}
			else if (func_411(&uLocal_299, 5000, 0))
			{
				func_41(&uLocal_299);
				Global_2446992.f_1549 = 0;
			}
		}
		if (unk_0x889D01384B54BCE3(iLocal_558, 16))
		{
			if (Local_353.f_34 == 0)
			{
				unk_0x29DB79DD4D939B38(&iLocal_558, 16);
			}
		}
	}
}

void func_149()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_289 > -1)
	{
		if (iLocal_289 != unk_0x044A481E863E2F6B())
		{
			if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iLocal_289)))
			{
				iVar0 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iLocal_289));
				bVar1 = true;
				if (unk_0x6871380D51134D0D(iVar0, unk_0x1788E93557766241()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
	{
		if (func_4(Local_353.f_22))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_353.f_22), 0))
				{
					if (Local_429[unk_0x044A481E863E2F6B() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_150(unk_0x8CB435AA1E25DA51(Local_353.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_150(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x6C42276FEC08CCF9(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
	if (iParam1 == 0)
	{
	}
	unk_0x0FD7A44935EE7114(iParam0);
	if (func_14(unk_0x1788E93557766241(), 1, 1))
	{
		if (unk_0xECFECDAD51A6184F(iParam0, 0))
		{
			if (func_151(iParam0) == 0)
			{
				if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iParam0, 0))
				{
					if (unk_0xCA9E7F1048FD317D(iParam0))
					{
						unk_0x149A90535BBBFDD5(iParam0, "MP_Arrow");
						unk_0x89FEB88CCE4DC915(iParam0, uVar0, uVar1, uVar2, 190);
						unk_0xDD4CDA889D7FC57C(iParam0, 1);
					}
				}
			}
		}
	}
}

int func_151(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA609E58449080951(iParam0);
	if (unk_0x38B61EB14C5FBA9E(iVar0) == 0 && unk_0xEE41D6C2DA208994(iVar0) == 0)
	{
		return 0;
	}
	if (unk_0x66679628FFE34E84(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_152()
{
	int iVar0;
	
	if (unk_0x889D01384B54BCE3(iLocal_558, 5))
	{
		if (iLocal_288 != iLocal_289)
		{
			if (iLocal_289 > -1)
			{
				if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iLocal_289)))
				{
					iVar0 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iLocal_289));
					if (iVar0 != unk_0x1788E93557766241())
					{
						if (!func_199(unk_0x1788E93557766241(), 1))
						{
							func_153("IMPEX_TICK_DHPV", iVar0, 0, 0, 0, 1, 1, 0);
						}
					}
					if (unk_0xE9849174628A9C50())
					{
						if (!unk_0x889D01384B54BCE3(Local_353.f_23, 8))
						{
							unk_0xD0E2BFCE93AE3ABD(&(Local_353.f_23), 8);
						}
					}
				}
			}
			iLocal_288 = iLocal_289;
		}
	}
}

int func_153(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var1, unk_0xF3E5891C26514A74(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xF3E5891C26514A74(iParam1), 64);
		}
		unk_0xA6CE1BB0BF7AE715(sParam0);
		unk_0x61329A2F1E63248B(func_162(iParam1, -2, 1, 0));
		unk_0x94E086BCAE8856C1(func_160(&Var1));
		if (!bParam4)
		{
			iVar0 = unk_0x69CF75457662E450(0, 1);
		}
		else
		{
			Global_2446020 = { func_159(iParam1) };
			if (unk_0x55FB44C9EE7B72D8(&Global_2445950, 35, &Global_2446020))
			{
				iVar17 = 0;
				if (unk_0x9BA82E09A986BA4B(&(Global_2445950.f_22), "Leader") && Global_2445950.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2445950.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_158(&Var1) };
					}
					iVar0 = unk_0xB94CDDFEE8F82E2C(iVar18, unk_0x3C6DC2041628D157(&Global_2445950, 35), &(Global_2445950.f_17), Global_2445950.f_30, iVar17, 0, Global_2445950, &Var1, Global_1317050, Global_1317051, Global_1317052);
				}
				else
				{
					iVar0 = unk_0x717CB191B0642E38(iVar18, unk_0x3C6DC2041628D157(&Global_2445950, 35), &(Global_2445950.f_17), Global_2445950.f_30, iVar17, 0, Global_2445950, Global_1317050, Global_1317051, Global_1317052);
				}
			}
			else
			{
				iVar0 = unk_0x69CF75457662E450(0, 1);
			}
		}
		func_154(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_154(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_157() || !unk_0x7A75BEF6DA1EDF3D()) || !func_22(unk_0x1788E93557766241(), 0))
	{
		return;
	}
	iVar0 = func_155(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1698841.f_5[iVar0 /*53*/] = iParam0;
		Global_1698841.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1698841.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1698841.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1698841.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1698841.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1698841.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_155(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1698841 - 1))
	{
		if (iParam0 > Global_1698841.f_5[iVar0 /*53*/].f_1)
		{
			func_156(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1698841++;
	if (Global_1698841 > 5)
	{
		Global_1698841 = 5;
		return Global_1698841;
	}
	return (Global_1698841 - 1);
}

void func_156(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1698841.f_5[iVar0 /*53*/] = { Global_1698841.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_157()
{
	return unk_0xD5883629B43B6F20(-1762644250);
}

struct<16> func_158(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_159(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBE9A3F2CD3728669(iParam0, &Var0, 13);
	return Var0;
}

var func_160(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_161(&cVar0);
}

var func_161(char[4] cParam0)
{
	return cParam0;
}

int func_162(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_174(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_174(unk_0x1788E93557766241()) || (func_173() && func_172()))
	{
		iVar0 = func_171();
		if (unk_0x538DF9E5B1DF01EB(iVar0))
		{
			if (unk_0x2303B9FE7CF81971(iVar0))
			{
				if (unk_0x5D6FBED3ADADE26A(iVar0) != -1)
				{
					if (func_14(unk_0x5D6FBED3ADADE26A(iVar0), 0, 1))
					{
						return func_169(iParam0, unk_0x5D6FBED3ADADE26A(iVar0), iParam1, bParam2, bParam3);
					}
				}
			}
			else
			{
				return func_163(0, -1, 0);
			}
		}
	}
	return func_169(iParam0, unk_0x1788E93557766241(), iParam1, bParam2, bParam3);
}

int func_163(bool bParam0, int iParam1, bool bParam2)
{
	return func_164(unk_0x1788E93557766241(), bParam0, iParam1, bParam2);
}

int func_164(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xA2D6C1E24AF2E058(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_168(iVar0, iParam2))
			{
				if (iVar0 == iParam2)
				{
					return func_167(1);
				}
				else
				{
					return func_167(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_165(iVar0, iParam2);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_167(1);
	}
	return func_167(0);
}

int func_165(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_166(iParam0, iParam1);
	switch (iVar0)
	{
		case 0:
			return 28;
		
		case 1:
			return 29;
		
		case 2:
			return 30;
		
		default:
	}
	return 28;
}

int func_166(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_168(iParam0, iVar0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_167(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_168(int iParam0, int iParam1)
{
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 0);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 1);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 2);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 4);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 5);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 6);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 8);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 9);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 10);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 12);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 13);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 14);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_169(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xA2D6C1E24AF2E058(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (iVar0 != -1)
	{
		if (func_170(iParam1, iParam0, iVar0, 0))
		{
			return func_167(1);
		}
		else
		{
			return func_164(iParam1, 1, iVar0, bParam4);
		}
	}
	else if ((Global_1573689 || Global_1573680) || Global_1583725[iParam0 /*334*/] == 0)
	{
		if (iParam0 == iParam1 || (Global_1573689 == 1 && Global_1573699 == 0))
		{
			return func_167(1);
		}
		else
		{
			return func_164(iParam1, 1, iVar0, bParam4);
		}
	}
	if (Global_1573684 && Global_1573269.f_11 == iParam0)
	{
		return 28;
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_170(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xA2D6C1E24AF2E058(iParam0) == -1 && unk_0xA2D6C1E24AF2E058(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xA2D6C1E24AF2E058(iParam0) == unk_0xA2D6C1E24AF2E058(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xA2D6C1E24AF2E058(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xA2D6C1E24AF2E058(iParam0) == iParam2;
	}
	return unk_0xA2D6C1E24AF2E058(iParam0) == iParam2;
}

var func_171()
{
	return Global_2359301.f_2;
}

bool func_172()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 4);
}

bool func_173()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_18, 14);
}

int func_174(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return 1;
	}
	if (func_175())
	{
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_175()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
}

bool func_176(char* sParam0)
{
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
}

int func_177()
{
	if ((Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 > 0 && Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 < 3) || (Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 == 0 && func_66(unk_0x1788E93557766241(), 6)))
	{
		if (func_123(unk_0x1788E93557766241(), 1) || func_107())
		{
			if (!func_178(unk_0x1788E93557766241(), 5) && !func_178(unk_0x1788E93557766241(), 32))
			{
				return 1;
			}
			else if (!iLocal_95)
			{
				if (unk_0x5660C8AFDD9C1721(Global_1689997))
				{
					unk_0xB6FB9702660D84F6(&Global_1689997);
				}
				iLocal_95 = 1;
			}
		}
		else if (iLocal_95)
		{
			func_184();
			iLocal_95 = 0;
		}
		if (Local_353.f_26 == 3)
		{
			if (Local_429[unk_0x044A481E863E2F6B() /*4*/].f_3 == 0 && func_66(unk_0x1788E93557766241(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_178(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_179(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1583725[iVar0 /*334*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_2422491.f_1, iParam0);
	}
	return 1;
}

void func_180()
{
	if (unk_0x5660C8AFDD9C1721(Global_1689997))
	{
		if (func_113())
		{
			unk_0x58063239A5B8FB80(Global_1689997, 0);
		}
		else
		{
			unk_0x58063239A5B8FB80(Global_1689997, 4);
		}
		if (!iLocal_84)
		{
			if (func_199(unk_0x1788E93557766241(), 1))
			{
				unk_0xABBBFFE76352EBB5(Global_1689997, 1);
				iLocal_84 = 1;
			}
		}
		else if (!func_199(unk_0x1788E93557766241(), 1))
		{
			unk_0xABBBFFE76352EBB5(Global_1689997, 0);
			iLocal_84 = 0;
		}
	}
}

int func_181()
{
	if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
	{
		if (func_4(Local_353.f_22))
		{
			if (unk_0x5E8694417D361328(unk_0x8CB435AA1E25DA51(Local_353.f_22), 0, 7000) || unk_0x5E8694417D361328(unk_0x8CB435AA1E25DA51(Local_353.f_22), 1, 40000))
			{
				if (unk_0x3D7D0EF6EB39605F(Local_353.f_22))
				{
					if (unk_0x428E17610BCE75C2(Local_353.f_22))
					{
						unk_0xBCA53A1278653F4C(unk_0x8CB435AA1E25DA51(Local_353.f_22), -2000f);
						unk_0x300688EA0EDEE519(unk_0x8CB435AA1E25DA51(Local_353.f_22), 0f);
					}
					return 1;
				}
				else if (unk_0xE9849174628A9C50())
				{
					if (func_10(Local_353.f_22))
					{
						unk_0xBCA53A1278653F4C(unk_0x8CB435AA1E25DA51(Local_353.f_22), -2000f);
						unk_0x300688EA0EDEE519(unk_0x8CB435AA1E25DA51(Local_353.f_22), 0f);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_182()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_289 == -1 && unk_0x889D01384B54BCE3(iLocal_558, 5))
	{
		return 0;
	}
	if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
	{
		if (func_4(Local_353.f_22))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0xD9275EB8FA656B5C(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_353.f_22)))
				{
					if (func_183(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_353.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_289 >= 0)
			{
				if (iLocal_289 != unk_0x044A481E863E2F6B())
				{
					if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iLocal_289)))
					{
						iVar0 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iLocal_289));
						if (func_14(iVar0, 1, 1))
						{
							iVar1 = unk_0xFF34D923BFB5E9FB(iVar0);
							if (unk_0xD9275EB8FA656B5C(iVar1, unk_0x8CB435AA1E25DA51(Local_353.f_22)))
							{
								if (func_183(iVar1, unk_0x8CB435AA1E25DA51(Local_353.f_22), -1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_183(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xE44A580B551C3645(iParam0) && !unk_0xE44A580B551C3645(iParam1))
	{
		if (unk_0xD9275EB8FA656B5C(iParam0, iParam1))
		{
			if (unk_0xD8A521688BDBE867(iParam1, iParam2) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_184()
{
	Global_1689997 = unk_0xDF78B7F06503567E(unk_0x8CB435AA1E25DA51(Local_353.f_22));
	if (unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(unk_0x8CB435AA1E25DA51(Local_353.f_22))))
	{
		unk_0x2025496D9184D312(Global_1689997, 348);
	}
	else
	{
		unk_0x2025496D9184D312(Global_1689997, 225);
	}
	unk_0x1AD45E3CF020D50D(Global_1689997, 2);
	unk_0xFDA1FE98ECD75505(Global_1689997, "IMPEX_HIPR_BLP");
	if (func_113())
	{
		unk_0x58063239A5B8FB80(Global_1689997, 0);
	}
}

int func_185(int iParam0, int iParam1)
{
	if (func_138(iParam0, 1215605247, &uLocal_314, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_186(int iParam0)
{
	if (func_191())
	{
		if (iParam0 == 1)
		{
			if (Global_2446992.f_4236 == -1)
			{
				Global_2446992.f_4236 = 60000;
			}
			func_190(&(Global_2446992.f_4234), 0, 0);
			if (Global_2446992.f_4239 == -1)
			{
				Global_2446992.f_4239 = 10000;
			}
			func_190(&(Global_2446992.f_4237), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_189();
		}
		if ((!unk_0x7A75BEF6DA1EDF3D() && !func_188()) && !func_187(unk_0x1788E93557766241()))
		{
			Global_973956 = 0;
		}
		Global_1602607[unk_0x1788E93557766241() /*12*/].f_7 = 0;
	}
}

int func_187(int iParam0)
{
	if (func_123(iParam0, 1))
	{
		if (Global_1583725[iParam0 /*334*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_188()
{
	return Global_2428577.f_711;
}

void func_189()
{
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (!func_191())
		{
			if (func_14(unk_0x1788E93557766241(), 1, 1))
			{
				unk_0x3F376CC691816BEF(unk_0xA16EC202D9D35357(), 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 342, 0);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 122, 0);
			}
			unk_0xCCB05A9C3FAB04CA(unk_0x1788E93557766241(), 1f);
			unk_0x7622D42AC5B41A4A(0);
			unk_0x5687AEB601657A7E(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xAD7D800044E4059F(0);
			}
		}
		else
		{
			if (func_14(unk_0x1788E93557766241(), 1, 1))
			{
				unk_0x3F376CC691816BEF(unk_0xA16EC202D9D35357(), 0);
				unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), joaat("weapon_unarmed"), 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 342, 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 122, 1);
				unk_0xCCB05A9C3FAB04CA(unk_0x1788E93557766241(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xAD7D800044E4059F(1);
				}
			}
			unk_0x7622D42AC5B41A4A(1);
			unk_0x5687AEB601657A7E(0);
		}
	}
}

void func_190(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1DAD7CE53BEE7710() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x519586565311459B();
		}
		else
		{
			*uParam0 = unk_0x4EAB1171B13C220B();
		}
	}
	else
	{
		*uParam0 = unk_0x09560C7DE2A384BD();
	}
	uParam0->f_1 = 1;
}

bool func_191()
{
	return Global_1312416;
}

void func_192(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!unk_0x889D01384B54BCE3(Global_2446992.f_4405, 27))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4405), 27);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_2446992.f_4405, 27))
	{
		unk_0x29DB79DD4D939B38(&(Global_2446992.f_4405), 27);
	}
}

int func_193()
{
	if (func_113())
	{
		return 0;
	}
	if (!func_194(0, 1, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_194(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x11A809BBE3889742())
	{
		return 0;
	}
	if (func_102())
	{
		return 0;
	}
	if (!unk_0x83B393DE31BAC8F0())
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_123(unk_0x1788E93557766241(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_197(unk_0x1788E93557766241()))
		{
			return 0;
		}
	}
	if (func_105())
	{
		return 0;
	}
	if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		return 0;
	}
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
		{
			return 0;
		}
	}
	if (Global_1573536)
	{
		return 0;
	}
	if (func_196())
	{
		return 0;
	}
	if (func_195())
	{
		return 0;
	}
	if (func_429())
	{
		return 0;
	}
	if (Global_67066)
	{
		return 0;
	}
	if (Global_2453882)
	{
		return 0;
	}
	return 1;
}

bool func_195()
{
	return Global_2428577.f_565;
}

bool func_196()
{
	return Global_2428577.f_715;
}

int func_197(int iParam0)
{
	if (Global_2414327[iParam0 /*255*/].f_205 == 0)
	{
		return 0;
	}
	return 1;
}

void func_198(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205, iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205, iParam0))
	{
		unk_0x29DB79DD4D939B38(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205), iParam0);
	}
}

int func_199(int iParam0, bool bParam1)
{
	if (unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_244.f_4, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_244.f_4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_200()
{
	if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
	{
		if (func_4(Local_353.f_22))
		{
			if (!func_182())
			{
				if (func_201(unk_0xBF8499F46AD9093A(unk_0x8CB435AA1E25DA51(Local_353.f_22), 1), 1215605247, 18))
				{
					if (func_185(unk_0x8CB435AA1E25DA51(Local_353.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_201(struct<3> Param0, int iParam3, int iParam4)
{
	if (unk_0x4970185D4CC64616(Param0, func_141(iParam3), 1) <= IntToFloat(iParam4))
	{
		return 1;
	}
	return 0;
}

void func_202()
{
	if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
	{
		if (func_4(Local_353.f_22))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_353.f_22), 0))
				{
					if (!unk_0x889D01384B54BCE3(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2, 2))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2), 2);
					}
				}
				else if (func_203(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_353.f_22), 1) < 180f)
				{
					if (!unk_0x889D01384B54BCE3(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2, 2))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2), 2);
					}
				}
				else if (unk_0x889D01384B54BCE3(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2, 2))
				{
					unk_0x29DB79DD4D939B38(&(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2), 2);
				}
			}
		}
	}
}

float func_203(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	if (!unk_0xE44A580B551C3645(iParam1))
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Var3, iParam2);
}

void func_204()
{
	int iVar0;
	
	if (iLocal_70)
	{
		func_303();
		if (!unk_0x889D01384B54BCE3(iLocal_558, 1))
		{
			if (Global_2446992.f_1574 > 0)
			{
				if (Global_2446992.f_1577 == 0)
				{
					Global_2446992.f_1577 = unk_0x519586565311459B();
				}
				else if (unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Global_2446992.f_1577) > Global_262145.f_9122)
				{
					if (!func_102())
					{
						if (func_65())
						{
							if (func_193())
							{
								if (!func_302())
								{
									if (!func_301(0) && !func_115())
									{
										Global_16798 = 0;
										iVar0 = func_75(1194, -1, 0);
										if (!unk_0x889D01384B54BCE3(iVar0, 0))
										{
											if (unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Global_2446992.f_1577) > 20000)
											{
												if (func_300(18, "CELL_CLTEST6", 2, "NULL", Global_2446992.f_1574, "TestSender1", 4, 0, 1, 0, 0, bLocal_91, 0, 0, 0, 0, 0))
												{
													unk_0xD0E2BFCE93AE3ABD(&iVar0, 0);
													func_130(1194, iVar0, -1, 1);
													unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 1);
													func_298(0f, 0f, 0f, func_299(19), "");
													Global_2446992.f_1576 = 1;
													iLocal_70 = 0;
												}
											}
										}
										else if (func_300(18, "CELL_CLTEST1", 2, "NULL", Global_2446992.f_1574, "TestSender1", 4, 0, 1, 0, 0, bLocal_91, 0, 0, 0, 0, 0))
										{
											func_298(0f, 0f, 0f, func_299(19), "");
											unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 1);
											Global_2446992.f_1576 = 1;
											iLocal_70 = 0;
										}
									}
								}
								else
								{
									Global_2446992.f_1577 = unk_0x519586565311459B();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (unk_0x889D01384B54BCE3(iLocal_558, 1))
	{
		if (!unk_0x889D01384B54BCE3(iLocal_311, 5))
		{
			if (func_193())
			{
				if (bLocal_91)
				{
					func_137("IMPEX_HELP_LNCH", -1);
				}
				unk_0xD0E2BFCE93AE3ABD(&iLocal_311, 5);
				func_412(&uLocal_297, 0, 0);
			}
		}
	}
	if (iLocal_93)
	{
		if (func_420())
		{
			if (!func_413(&uLocal_101))
			{
				func_412(&uLocal_101, 0, 0);
			}
			else if (func_411(&uLocal_101, 10000, 0))
			{
				if (func_205(18, "CELL_IMPT", 0, 0))
				{
					iLocal_93 = 0;
					func_41(&uLocal_101);
				}
			}
		}
	}
}

bool func_205(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_206(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_206(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_207(&uVar0, iParam0, func_297(), sParam1, iVar165, 3, iParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_207(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x06771AF7795B3ECF(sParam2))
	{
		return 0;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x06771AF7795B3ECF(sParam3))
	{
		return 0;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635());
	iVar1 = func_296(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x06771AF7795B3ECF(uParam7))
	{
		iVar2 = unk_0xB793F1A0B6CC4AE1(sParam7);
	}
	if (func_295(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_291(iParam6))
	{
		return 0;
	}
	if (func_288(iVar0, iVar1, iVar2))
	{
		if (func_287())
		{
			return 0;
		}
		func_286();
		return func_214(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_213(iParam4))
	{
		return 0;
	}
	func_208(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_208(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1321250.f_40.f_1 = iParam0;
	Global_1321250.f_40.f_2 = iParam1;
	Global_1321250.f_40.f_3 = iParam2;
	StringCopy(&(Global_1321250.f_40.f_4), sParam3, 16);
	Global_1321250.f_40.f_8 = iParam4;
	Global_1321250.f_40.f_9 = iParam5;
	Global_1321250.f_40.f_14 = iParam6;
	func_209(iParam4);
	func_286();
	Global_1321250.f_40.f_13 = unk_0xBBFAF6DED9DAD29D(unk_0x519586565311459B(), 7000);
}

void func_209(int iParam0)
{
	if (func_212(iParam0))
	{
		func_211();
		return;
	}
	func_210();
}

void func_210()
{
	Global_1321250.f_40.f_10 = 0;
}

void func_211()
{
	Global_1321250.f_40.f_10 = 1;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_213(int iParam0)
{
	return iParam0 > Global_1321250.f_40.f_8;
}

int func_214(var uParam0, int iParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_285();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_282(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_279(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_282(uParam0, sParam3, sParam4);
		}
		return func_263(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_262(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_253(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_252(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_215(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_215(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_251();
	bVar0 = true;
	if (func_217(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_216(120000);
		return 1;
	}
	return 0;
}

void func_216(int iParam0)
{
	Global_1321250.f_40.f_11 = unk_0xBBFAF6DED9DAD29D(unk_0x519586565311459B(), iParam0);
	Global_1321250.f_40.f_12 = 1;
}

int func_217(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_250();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = unk_0xF3E5891C26514A74(iVar0);
		iVar1 = func_244(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xD5B32A5135C9642C(unk_0x519586565311459B(), Global_1321250.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_243(uParam5, bParam6, &iVar3);
	uVar5 = func_241(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x06771AF7795B3ECF(sParam8))
	{
		iVar6++;
		if (!unk_0x06771AF7795B3ECF(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x9BA82E09A986BA4B(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x889D01384B54BCE3(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x889D01384B54BCE3(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x06771AF7795B3ECF(sVar2))
	{
		bVar12 = func_240(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_221(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x889D01384B54BCE3(iParam4, 0))
	{
		func_220();
	}
	func_251();
	func_219();
	func_218();
	return 1;
}

void func_218()
{
	Global_1321250.f_57 = 0;
	Global_1321250.f_57.f_1 = 0;
}

void func_219()
{
	Global_1321250.f_40 = 3;
}

void func_220()
{
	unk_0xD0E2BFCE93AE3ABD(&Global_2264, 8);
}

int func_221(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_222(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2971 = iParam6;
			unk_0xD0E2BFCE93AE3ABD(&Global_2542626, 0);
		}
		return 1;
	}
	return 0;
}

int func_222(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x9BA82E09A986BA4B(sParam14, sParam15))
	{
	}
	func_234();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14394 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14394 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14394 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if (unk_0x0F5E43D893E5D0E1(unk_0xA16EC202D9D35357()))
			{
				return 0;
			}
		}
		if (Global_2542611 == 1)
		{
			return 0;
		}
		if (unk_0x16CDA1894CFE0781(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x16CDA1894CFE0781(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_233() == 0)
	{
		func_231();
		return 0;
	}
	func_230(Global_2542610);
	StringCopy(&(Global_2541361[Global_2542610 /*104*/]), sParam1, 64);
	Global_2541361[Global_2542610 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2541361[Global_2542610 /*104*/].f_24 = iParam2;
	}
	Global_2541361[Global_2542610 /*104*/].f_25 = iParam7;
	Global_2541361[Global_2542610 /*104*/].f_26 = uParam8;
	Global_2541361[Global_2542610 /*104*/].f_29 = uParam9;
	Global_2541361[Global_2542610 /*104*/].f_30 = uParam12;
	Global_2541361[Global_2542610 /*104*/].f_31 = uParam11;
	Global_2541361[Global_2542610 /*104*/].f_28 = 0;
	Global_2541361[Global_2542610 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2541361[Global_2542610 /*104*/].f_33), sParam4, 64);
	Global_2541361[Global_2542610 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2541361[Global_2542610 /*104*/].f_50), sParam5, 64);
	Global_2541361[Global_2542610 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2541361[Global_2542610 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2541361[Global_2542610 /*104*/].f_83), sParam15, 64);
	func_234();
	switch (iParam16)
	{
		case 3:
			Global_2541361[Global_2542610 /*104*/].f_99[Global_14394] = 1;
			break;
		
		case 0:
			Global_2541361[Global_2542610 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2541361[Global_2542610 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2541361[Global_2542610 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14394)
		{
			case 0:
				func_229(0);
				break;
			
			case 1:
				func_229(1);
				break;
			
			case 2:
				func_229(2);
				break;
			
			case 3:
				func_229(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2542611 = 1;
				break;
			
			case 0:
				Global_2542611 = 1;
				break;
			
			case 2:
				Global_2542611 = 1;
				break;
			
			case 1:
				Global_2542611 = 1;
				break;
			}
	}
	Global_16762[Global_2542610] = 0;
	if (bParam10)
	{
		func_234();
		if (Global_14337)
		{
			StringCopy(&Global_14383, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14394)
			{
				case 0:
					StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_228())
			{
				unk_0xC2E1777941B4536E(-1, "Text_Arrive_Tone", &Global_14383, 1);
			}
		}
	}
	if (!Global_14553)
	{
		if (Global_14394.f_1 == 6)
		{
			func_227(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_223(1);
			func_227(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14374), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_223(int iParam0)
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
	
	Global_16761 = 0;
	Global_2869 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2833[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_226(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 3))
								{
									iVar2 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14556 = 0;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_225(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar2);
								unk_0xD3DF251F2DF3B257();
							}
							if (Global_2435552)
							{
								if (iVar1 == 14)
								{
									func_224(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2833[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97439.f_12395[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97439.f_12395[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97439.f_12395[iVar3 /*104*/].f_99[Global_14394] == 1)
											{
												Global_16761++;
											}
										}
									}
									iVar3++;
								}
								func_224(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16761), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68325)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2541361[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2541361[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2541361[iVar4 /*104*/].f_99[Global_14394] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_224(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14394)
									{
										case 0:
											iVar6 = Global_35970;
											break;
										
										case 1:
											iVar6 = Global_35971;
											break;
										
										case 2:
											iVar6 = Global_35972;
											break;
										
										default:
											break;
									}
									func_224(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_224(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_225(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(Global_2270);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_225(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar7);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 3))
								{
									iVar8 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14556 = 0;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_225(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar8);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 8)
							{
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_225(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(42);
								unk_0xD3DF251F2DF3B257();
							}
							else
							{
								func_224(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2833[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_224(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x06771AF7795B3ECF(uParam7))
	{
		func_225(sParam7);
	}
	if (!unk_0x06771AF7795B3ECF(iParam8))
	{
		func_225(iParam8);
	}
	if (!unk_0x06771AF7795B3ECF(iParam9))
	{
		func_225(iParam9);
	}
	if (!unk_0x06771AF7795B3ECF(iParam10))
	{
		func_225(iParam10);
	}
	if (!unk_0x06771AF7795B3ECF(iParam11))
	{
		func_225(iParam11);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_225(var uParam0)
{
	unk_0xEBC0B3BDAD1250BE(uParam0);
	unk_0x9F94C7B5E8C04AB3();
}

bool func_226(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_227(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD3DF251F2DF3B257();
}

bool func_228()
{
	return Global_1315891;
}

void func_229(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_97439.f_12305[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_230(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4952CA33C6DB5AD4();
	uVar1 = unk_0x26ADBF0B08315387();
	uVar2 = unk_0xBE59E3811BD4FDD7();
	uVar3 = unk_0xA3730885141EEA96();
	uVar4 = unk_0x1EFE4ED658D22AF3() + 1;
	uVar5 = unk_0x4C29EAF01B84254C();
	Global_2541361[iParam0 /*104*/].f_18 = uVar0;
	Global_2541361[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2541361[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2541361[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2541361[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2541361[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_231()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2542610 = 11;
	Global_2541361[Global_2542610 /*104*/].f_18 = -1;
	Global_2541361[Global_2542610 /*104*/].f_18.f_1 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_2 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_3 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_232(Global_2541361[iVar2 /*104*/].f_18, Global_2541361[Global_2542610 /*104*/].f_18))
		{
			Global_2542610 = iVar2;
		}
		iVar2++;
	}
	Global_2541361[Global_2542610 /*104*/].f_24 = 1;
}

int func_232(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_233()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2541361[iVar2 /*104*/].f_24 == 0)
		{
			Global_2542610 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2542610 = 11;
	Global_2541361[Global_2542610 /*104*/].f_18 = -1;
	Global_2541361[Global_2542610 /*104*/].f_18.f_1 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_2 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_3 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2541361[iVar2 /*104*/].f_24 == 0 || Global_2541361[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_232(Global_2541361[iVar2 /*104*/].f_18, Global_2541361[Global_2542610 /*104*/].f_18))
			{
				Global_2542610 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2542610 == 11)
	{
		return 0;
	}
	Global_2541361[Global_2542610 /*104*/].f_99[0] = 0;
	Global_2541361[Global_2542610 /*104*/].f_99[1] = 0;
	Global_2541361[Global_2542610 /*104*/].f_99[2] = 0;
	return 1;
}

void func_234()
{
	if (func_226(14))
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
		Global_14394 = func_235();
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

var func_235()
{
	func_236();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_236()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_239(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_238(unk_0xA16EC202D9D35357());
			if (func_237(iVar0) && (!func_226(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_237(Global_97439.f_1729.f_539.f_3213))
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

bool func_237(int iParam0)
{
	return iParam0 < 3;
}

int func_238(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_239(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_239(int iParam0)
{
	if (func_237(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_240(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_222(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2971 = iParam10;
			unk_0xD0E2BFCE93AE3ABD(&Global_2542626, 0);
		}
		return 1;
	}
	return 0;
}

int func_241(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_242(2, iParam1);
	return iParam0;
}

void func_242(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

var func_243(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x06771AF7795B3ECF(uParam0))
	{
		return sLocal_17;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, sLocal_17))
	{
		return sLocal_17;
	}
	func_242(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x69C910B9EE514763(sParam0);
}

int func_244(int iParam0)
{
	int iVar0;
	
	iVar0 = func_247(iParam0);
	if (iVar0 == -1)
	{
		func_245(iParam0, 1);
		return 0;
	}
	Global_1337286[iVar0 /*5*/].f_4 = 1;
	return Global_1337286[iVar0 /*5*/].f_2;
}

void func_245(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_247(iParam0) != -1)
	{
		return;
	}
	if (Global_1337449)
	{
		if (iParam0 == Global_1337449.f_1)
		{
			return;
		}
	}
	if (func_246(iParam0))
	{
		return;
	}
	if (Global_1337487 >= 32)
	{
		return;
	}
	Global_1337454[Global_1337487] = iParam0;
	Global_1337487++;
	if (bParam1)
	{
	}
}

int func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1337487)
	{
		if (Global_1337454[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_247(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1337447 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1337447)
	{
		if (Global_1337286[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA18877A025EABCF1(Global_1337286[iVar0 /*5*/].f_2) && unk_0x1285CB0DD714CE61(Global_1337286[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_248(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_248(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1337447)
	{
		return;
	}
	if (unk_0xA18877A025EABCF1(Global_1337286[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1337286[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xE60D88CF3EF91AA6(Global_1337286[iParam0 /*5*/].f_2), 64);
			unk_0x5F0F8D01B163177A(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x8138315499FE0236(Global_1337286[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1337447)
	{
		Global_1337286[iVar32 /*5*/] = { Global_1337286[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_249(&(Global_1337286[iVar32 /*5*/]));
	Global_1337447 = (Global_1337447 - 1);
}

void func_249(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_250();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1DAD7CE53BEE7710())
	{
		uParam0->f_3 = unk_0x519586565311459B();
	}
}

int func_250()
{
	return -1;
}

void func_251()
{
	Global_1321250.f_40.f_9 = 4;
}

int func_252(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_251();
	bVar0 = false;
	return func_217(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_253(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_254(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_254(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_250();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = unk_0xF3E5891C26514A74(iVar0);
		iVar1 = func_244(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xD5B32A5135C9642C(unk_0x519586565311459B(), Global_1321250.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16754 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_243(uParam5, bParam6, &iVar3);
	uVar5 = func_241(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x06771AF7795B3ECF(sParam8))
	{
		iVar6++;
		if (!unk_0x06771AF7795B3ECF(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x9BA82E09A986BA4B(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x889D01384B54BCE3(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x889D01384B54BCE3(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x06771AF7795B3ECF(sVar2))
	{
		bVar12 = func_300(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_256(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x889D01384B54BCE3(iParam4, 0))
	{
		func_220();
	}
	func_255();
	func_219();
	func_218();
	return 1;
}

void func_255()
{
	Global_1321250.f_40.f_9 = 3;
}

int func_256(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x29DB79DD4D939B38(&Global_2264, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_257(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2971 = iParam6;
			Global_2874[3 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
			Global_2951 = iParam0;
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 1);
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 7);
		}
		return 1;
	}
	return 0;
}

int func_257(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x9BA82E09A986BA4B(sParam14, sParam15))
	{
	}
	func_234();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14394 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14394 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14394 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if (unk_0x0F5E43D893E5D0E1(unk_0xA16EC202D9D35357()))
			{
				return 0;
			}
		}
		if (Global_97439.f_12305[Global_14394 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x16CDA1894CFE0781(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x16CDA1894CFE0781(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_261() == 0)
	{
		func_259();
		return 0;
	}
	func_258(Global_16760);
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/]), sParam1, 64);
	Global_97439.f_12395[Global_16760 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_97439.f_12395[Global_16760 /*104*/].f_24 = iParam2;
	}
	Global_97439.f_12395[Global_16760 /*104*/].f_25 = iParam7;
	Global_97439.f_12395[Global_16760 /*104*/].f_26 = uParam8;
	Global_97439.f_12395[Global_16760 /*104*/].f_29 = uParam9;
	Global_97439.f_12395[Global_16760 /*104*/].f_30 = uParam12;
	Global_97439.f_12395[Global_16760 /*104*/].f_31 = uParam11;
	Global_97439.f_12395[Global_16760 /*104*/].f_28 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/].f_33), sParam4, 64);
	Global_97439.f_12395[Global_16760 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/].f_50), sParam5, 64);
	Global_97439.f_12395[Global_16760 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/].f_83), sParam15, 64);
	if (unk_0x889D01384B54BCE3(Global_2264, 10))
	{
		Global_97439.f_12395[Global_16760 /*104*/].f_99[0] = 1;
		Global_97439.f_12395[Global_16760 /*104*/].f_99[1] = 1;
		Global_97439.f_12395[Global_16760 /*104*/].f_99[2] = 1;
		Global_2970 = 4;
		func_229(0);
		func_229(2);
		func_229(1);
	}
	else
	{
		func_234();
		switch (iParam16)
		{
			case 3:
				Global_97439.f_12395[Global_16760 /*104*/].f_99[Global_14394] = 1;
				break;
			
			case 0:
				Global_97439.f_12395[Global_16760 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_97439.f_12395[Global_16760 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_97439.f_12395[Global_16760 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14394)
			{
				case 0:
					func_229(0);
					Global_2970 = 0;
					break;
				
				case 1:
					func_229(1);
					Global_2970 = 1;
					break;
				
				case 2:
					func_229(2);
					Global_2970 = 2;
					break;
				
				case 3:
					func_229(3);
					Global_2970 = 3;
					break;
				
				default:
					Global_2970 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x889D01384B54BCE3(Global_2264, 10))
		{
			Global_97439.f_12305[0 /*20*/].f_17 = 1;
			Global_97439.f_12305[1 /*20*/].f_17 = 1;
			Global_97439.f_12305[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_97439.f_12305[Global_14394 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_97439.f_12305[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_97439.f_12305[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_97439.f_12305[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16762[Global_16760] = 0;
	if (bParam10)
	{
		func_234();
		if (Global_14337)
		{
			StringCopy(&Global_14383, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14394)
			{
				case 0:
					StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_228())
			{
				unk_0xC2E1777941B4536E(-1, "Text_Arrive_Tone", &Global_14383, 1);
			}
		}
	}
	if (!Global_14553)
	{
		if (Global_14394.f_1 == 6)
		{
			func_227(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_223(1);
			func_227(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14374), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_258(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4952CA33C6DB5AD4();
	uVar1 = unk_0x26ADBF0B08315387();
	uVar2 = unk_0xBE59E3811BD4FDD7();
	uVar3 = unk_0xA3730885141EEA96();
	uVar4 = unk_0x1EFE4ED658D22AF3() + 1;
	uVar5 = unk_0x4C29EAF01B84254C();
	Global_97439.f_12395[iParam0 /*104*/].f_18 = uVar0;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_259()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68325)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16760 = 34;
	Global_97439.f_12395[Global_16760 /*104*/].f_18 = -1;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_260(Global_97439.f_12395[iVar2 /*104*/].f_18, Global_97439.f_12395[Global_16760 /*104*/].f_18))
		{
			Global_16760 = iVar2;
		}
		iVar2++;
	}
	Global_97439.f_12395[Global_16760 /*104*/].f_24 = 1;
}

int func_260(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_261()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68325)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_97439.f_12395[iVar2 /*104*/].f_24 == 0)
		{
			Global_16760 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16760 = 34;
	Global_97439.f_12395[Global_16760 /*104*/].f_18 = -1;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_97439.f_12395[iVar2 /*104*/].f_24 == 0 || Global_97439.f_12395[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_260(Global_97439.f_12395[iVar2 /*104*/].f_18, Global_97439.f_12395[Global_16760 /*104*/].f_18))
			{
				Global_16760 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16760 == 34)
	{
		return 0;
	}
	Global_97439.f_12395[Global_16760 /*104*/].f_99[0] = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_99[1] = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_99[2] = 0;
	return 1;
}

int func_262(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
	}
	if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
	{
		return 0;
	}
	func_255();
	bVar0 = true;
	if (func_254(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_216(120000);
		return 1;
	}
	return 0;
}

int func_263(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x889D01384B54BCE3(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x889D01384B54BCE3(iParam4, 4))
	{
		bVar0 = func_278(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_269(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x889D01384B54BCE3(iParam4, 3))
		{
			func_268(1);
		}
		if (unk_0x889D01384B54BCE3(iParam4, 5))
		{
			func_267(1);
		}
		func_266();
		func_219();
		func_265();
		func_264();
		return 1;
	}
	return 0;
}

void func_264()
{
	Global_2453438 = 0;
}

void func_265()
{
	Global_1321250.f_57 = 1;
	Global_1321250.f_57.f_1 = 0;
}

void func_266()
{
	Global_1321250.f_40.f_9 = 1;
}

void func_267(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2266, 0);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2266, 0);
	}
}

void func_268(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 20);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 20);
	}
}

int func_269(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_277(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	Global_2621441 = 0;
	return func_270(sParam3, iParam4, bParam7);
}

int func_270(char* sParam0, int iParam1, bool bParam2)
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
					func_276();
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
		if (func_109(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_275();
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
				func_234();
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
				if (func_274())
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
			if (func_273())
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
			func_272();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_271();
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
		func_276();
	}
	return 0;
}

void func_271()
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

void func_272()
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

int func_273()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_274()
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

void func_275()
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

void func_276()
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

void func_277(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
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

int func_278(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_277(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15741 = 1;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	Global_2621441 = 0;
	return func_270(sParam3, iParam4, bParam7);
}

int func_279(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
	}
	if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
	{
		return 0;
	}
	if (func_281(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_280();
		func_266();
		func_219();
		func_265();
		func_264();
		return 1;
	}
	return 0;
}

void func_280()
{
	Global_16711 = 0;
}

bool func_281(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_277(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 1;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 1;
	Global_15747 = 0;
	StringCopy(&Global_15841, sParam5, 24);
	Global_2621441 = 0;
	return func_270(sParam3, iParam4, bParam8);
}

int func_282(var uParam0, char* sParam1, char* sParam2)
{
	if (func_284(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_283();
		func_219();
		func_265();
		return 1;
	}
	return 0;
}

void func_283()
{
	Global_1321250.f_40.f_9 = 2;
}

bool func_284(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_277(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_270(sParam2, iParam3, 0);
}

void func_285()
{
	Global_1321250.f_55 = Global_1321250.f_40.f_1;
	Global_1321250.f_55.f_1 = Global_1321250.f_40.f_10;
}

void func_286()
{
	Global_1321250.f_40 = 1;
}

bool func_287()
{
	return Global_1321250.f_40 == 1;
}

int func_288(int iParam0, int iParam1, int iParam2)
{
	if (!func_289(iParam0))
	{
		return 0;
	}
	if (Global_1321250.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1321250.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_289(int iParam0)
{
	if (!func_290())
	{
		return 0;
	}
	if (!Global_1321250.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_290()
{
	if (Global_1321250.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_291(int iParam0)
{
	if (func_294())
	{
		return 0;
	}
	if (func_104())
	{
		return 0;
	}
	if (func_301(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1690013 || func_293())
	{
		return 0;
	}
	if (!unk_0x889D01384B54BCE3(iParam0, 6))
	{
		if (func_292())
		{
			return 0;
		}
	}
	return 1;
}

bool func_292()
{
	return unk_0xD5B32A5135C9642C(unk_0x519586565311459B(), Global_1336115);
}

int func_293()
{
	if (Global_2533200.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_294()
{
	return func_273();
}

int func_295(int iParam0, int iParam1, int iParam2)
{
	if (!func_104())
	{
		return 0;
	}
	return func_288(iParam0, iParam1, iParam2);
}

int func_296(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0xB793F1A0B6CC4AE1(&cVar0);
}

char* func_297()
{
	return "TXTMSG";
}

int func_298(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!unk_0x06771AF7795B3ECF(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x9BA82E09A986BA4B(&(Global_2446992.f_3809[iVar0 /*26*/].f_4), sParam3))
			{
				if (unk_0x06771AF7795B3ECF(&(Global_2446992.f_3809[iVar0 /*26*/].f_4)))
				{
					Global_2446992.f_3809[iVar0 /*26*/] = 1;
					Global_2446992.f_3809[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2446992.f_3809[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2446992.f_3809[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_26(Global_2446992.f_3809[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2446992.f_3809[iVar0 /*26*/] = 1;
				Global_2446992.f_3809[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2446992.f_3809[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2446992.f_3809[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_299(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_300(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x29DB79DD4D939B38(&Global_2264, 10);
	iVar0 = 3;
	if (func_257(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2971 = iParam10;
			Global_2874[3 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
			Global_2951 = iParam0;
			StringCopy(&Global_2952, sParam5, 64);
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 1);
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 7);
		}
		return 1;
	}
	return 0;
}

int func_301(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_302()
{
	return func_290();
}

void func_303()
{
	if (func_65())
	{
		if (!iLocal_316 == Local_353.f_32)
		{
			Global_2446992.f_1534 = { Local_341 };
			func_304();
			iLocal_316 = Local_353.f_32;
		}
	}
}

void func_304()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2446992.f_1553[iVar1 /*4*/]), "", 16);
		if (!Global_2446992.f_1534[iVar1] == -1 && Global_2446992.f_1534.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2446992.f_1553[iVar0 /*4*/]), func_305(Global_2446992.f_1534[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2446992.f_1574 = iVar0;
}

char* func_305(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return "IMPEX_CAR_0B";
			
			case 1:
				return "IMPEX_CAR_2B";
			
			case 2:
				return "IMPEX_CAR_3B";
			
			case 3:
				return "IMPEX_CAR_4B";
			
			case 4:
				return "IMPEX_CAR_5B";
			
			case 5:
				return "IMPEX_CAR_6B";
			
			case 6:
				return "IMPEX_CAR_7B";
			
			case 7:
				return "IMPEX_CAR_8B";
			
			case 8:
				return "IMPEX_CAR_9B";
			
			case 9:
				return "IMPEX_CAR_10B";
			
			case 10:
				return "IMPEX_CAR_11B";
			
			case 11:
				return "IMPEX_CAR_12B";
			
			case 12:
				return "IMPEX_CAR_13B";
			
			case 13:
				return "IMPEX_CAR_14B";
			
			case 14:
				return "IMPEX_CAR_15B";
			
			case 15:
				return "IMPEX_CAR_16B";
			
			case 16:
				return "IMPEX_CAR_17B";
			
			case 17:
				return "IMPEX_CAR_22B";
			
			case 18:
				return "IMPEX_CAR_19B";
			
			case 19:
				return "IMPEX_CAR_20B";
			
			case 20:
				return "IMPEX_CAR_21B";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "IMPEX_CAR_0";
			
			case 1:
				return "IMPEX_CAR_2";
			
			case 2:
				return "IMPEX_CAR_3";
			
			case 3:
				return "IMPEX_CAR_4";
			
			case 4:
				return "IMPEX_CAR_5";
			
			case 5:
				return "IMPEX_CAR_6";
			
			case 6:
				return "IMPEX_CAR_7";
			
			case 7:
				return "IMPEX_CAR_8";
			
			case 8:
				return "IMPEX_CAR_9";
			
			case 9:
				return "IMPEX_CAR_10";
			
			case 10:
				return "IMPEX_CAR_11";
			
			case 11:
				return "IMPEX_CAR_12";
			
			case 12:
				return "IMPEX_CAR_13";
			
			case 13:
				return "IMPEX_CAR_14";
			
			case 14:
				return "IMPEX_CAR_15";
			
			case 15:
				return "IMPEX_CAR_16";
			
			case 16:
				return "IMPEX_CAR_17";
			
			case 17:
				return "IMPEX_CAR_22";
			
			case 18:
				return "IMPEX_CAR_19";
			
			case 19:
				return "IMPEX_CAR_20";
			
			case 20:
				return "IMPEX_CAR_21";
			}
		
		default:
	}
	return "";
}

void func_306()
{
	int iVar0;
	
	if (!iLocal_85)
	{
		if (!func_310(unk_0x1788E93557766241(), 1))
		{
			if (!Local_353.f_28 == -1)
			{
				if (!iLocal_318 == func_29(Local_353.f_28))
				{
					if (!func_309(unk_0xA16EC202D9D35357()))
					{
						iLocal_318 = func_29(Local_353.f_28);
						iVar0 = 0;
						while (iVar0 < iLocal_328)
						{
							unk_0x3C31603180FA492F(iLocal_328[iVar0], iLocal_318);
							iVar0++;
						}
						iLocal_85 = 1;
						unk_0x939DA7EBCC6588FF(iLocal_318);
						func_308();
						func_307(iLocal_318);
					}
				}
			}
		}
	}
	else if ((func_310(unk_0x1788E93557766241(), 1) || (Local_353.f_28 > -1 && !iLocal_318 == func_29(Local_353.f_28))) || func_309(unk_0xA16EC202D9D35357()))
	{
		unk_0xEA054561294AEC10(iLocal_318);
		iVar0 = 0;
		while (iVar0 < iLocal_328)
		{
			unk_0x7A015EFE117FC83A(iLocal_328[iVar0]);
			iVar0++;
		}
		func_308();
		iLocal_318 = 0;
		iLocal_85 = 0;
	}
}

void func_307(int iParam0)
{
	if (unk_0x889D01384B54BCE3(Local_353.f_23, 0))
	{
		if (iParam0 == Local_353.f_67)
		{
			return;
		}
	}
	switch (iParam0)
	{
		case joaat("sentinel"):
		case joaat("serrano"):
		case joaat("dominator"):
		case joaat("schafter2"):
		case joaat("surge"):
			iLocal_271[0] = unk_0xC0D74545F0DC29BF(-54.2664f, -1679.549f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[1] = unk_0xC0D74545F0DC29BF(-47.0703f, -1115.41f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[2] = unk_0xC0D74545F0DC29BF(1227.06f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[3] = unk_0xC0D74545F0DC29BF(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[4] = unk_0xC0D74545F0DC29BF(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[5] = unk_0xC0D74545F0DC29BF(1123.513f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[6] = unk_0xC0D74545F0DC29BF(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[7] = unk_0xC0D74545F0DC29BF(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[8] = unk_0xC0D74545F0DC29BF(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[9] = unk_0xC0D74545F0DC29BF(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_282 = 1;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_271[0] = unk_0xC0D74545F0DC29BF(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[1] = unk_0xC0D74545F0DC29BF(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[2] = unk_0xC0D74545F0DC29BF(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[3] = unk_0xC0D74545F0DC29BF(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[4] = unk_0xC0D74545F0DC29BF(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[5] = unk_0xC0D74545F0DC29BF(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[6] = unk_0xC0D74545F0DC29BF(-1101.607f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[7] = unk_0xC0D74545F0DC29BF(-3018.759f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[8] = unk_0xC0D74545F0DC29BF(-1550.796f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[9] = unk_0xC0D74545F0DC29BF(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_282 = 1;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_271[0] = unk_0xC0D74545F0DC29BF(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[1] = unk_0xC0D74545F0DC29BF(-2437.372f, 3377.217f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[2] = unk_0xC0D74545F0DC29BF(-1639.857f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[3] = unk_0xC0D74545F0DC29BF(-2981.245f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[4] = unk_0xC0D74545F0DC29BF(-1542.332f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[5] = unk_0xC0D74545F0DC29BF(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[6] = unk_0xC0D74545F0DC29BF(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[7] = unk_0xC0D74545F0DC29BF(-976.5854f, -2573.472f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[8] = unk_0xC0D74545F0DC29BF(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[9] = unk_0xC0D74545F0DC29BF(-208.5685f, -2077.887f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_282 = 1;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_271[0] = unk_0xC0D74545F0DC29BF(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[1] = unk_0xC0D74545F0DC29BF(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[2] = unk_0xC0D74545F0DC29BF(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[3] = unk_0xC0D74545F0DC29BF(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[4] = unk_0xC0D74545F0DC29BF(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[5] = unk_0xC0D74545F0DC29BF(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[6] = unk_0xC0D74545F0DC29BF(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[7] = unk_0xC0D74545F0DC29BF(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[8] = unk_0xC0D74545F0DC29BF(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_271[9] = unk_0xC0D74545F0DC29BF(1218.18f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_282 = 1;
			break;
	}
}

void func_308()
{
	int iVar0;
	
	if (iLocal_282)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x79D56966FF827A94(iLocal_271[iVar0]))
		{
			unk_0x0EC482271186BF9C(iLocal_271[iVar0]);
		}
		iLocal_271[iVar0] = 0;
		iVar0++;
	}
	iLocal_282 = 0;
}

bool func_309(int iParam0)
{
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 0;
	}
	if (unk_0xE44A580B551C3645(iParam0))
	{
	}
	return unk_0x05681B6F593F0A9C(iParam0) == Global_131614;
}

bool func_310(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_311(iParam0) != 0;
	}
	return func_123(iParam0, bParam1);
}

int func_311(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2414327[iParam0 /*255*/].f_1;
	}
	return 0;
}

void func_312()
{
	var uVar0;
	
	if (!func_413(&uLocal_303))
	{
		func_412(&uLocal_303, 0, 0);
	}
	else if (func_411(&uLocal_303, 250, 0))
	{
		func_41(&uLocal_303);
		if (func_324(1, 0))
		{
			if (!unk_0x889D01384B54BCE3(iLocal_311, 5) && !func_323())
			{
			}
			else if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				if ((func_322() || func_323()) || func_319())
				{
					if (!func_318(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
					{
						if (!func_317(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) && !func_15(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
						{
							if (!unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
							{
								if (func_314(&uVar0))
								{
									if (!unk_0x889D01384B54BCE3(iLocal_311, 2))
									{
										if (func_193() && unk_0x83666F9FB8FEBD4B() > 500)
										{
											func_137("IMPEX_FSPRAY_FM", -1);
											unk_0xD0E2BFCE93AE3ABD(&iLocal_311, 2);
										}
									}
									else
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
								else if (!unk_0x889D01384B54BCE3(iLocal_311, 8))
								{
									if (func_193() && unk_0x83666F9FB8FEBD4B() > 500)
									{
										func_137("IMPEX_CASH_FM", -1);
										unk_0xD0E2BFCE93AE3ABD(&iLocal_311, 8);
									}
								}
								else
								{
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else if (!unk_0x889D01384B54BCE3(iLocal_311, 11))
							{
								if (func_193() && unk_0x83666F9FB8FEBD4B() > 500)
								{
									func_137("IMPEX_WANTED_FM", -1);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_311, 11);
								}
							}
							else
							{
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						else if (!unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
						{
							if (!func_313())
							{
								if (!func_15(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
								{
									if (!unk_0x889D01384B54BCE3(iLocal_311, 3))
									{
										unk_0x29DB79DD4D939B38(&iLocal_311, 7);
										if (func_193() && unk_0x83666F9FB8FEBD4B() > 2000)
										{
											if (Global_2446992.f_4359 == 0)
											{
												if (!func_185(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
												{
													func_137("IMPEX_DELIVER_FM", -1);
													unk_0xD0E2BFCE93AE3ABD(&iLocal_311, 3);
												}
											}
										}
									}
									else
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
								else if (!unk_0x889D01384B54BCE3(iLocal_311, 7))
								{
									if (func_193() && unk_0x83666F9FB8FEBD4B() > 2000)
									{
										func_137("IMPEX_RIG_FM", -1);
										unk_0xD0E2BFCE93AE3ABD(&iLocal_311, 7);
									}
								}
								else
								{
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else if (!unk_0x889D01384B54BCE3(iLocal_311, 6))
							{
								if (func_193() && unk_0x83666F9FB8FEBD4B() > 2000)
								{
									func_137("IMPEX_WANTED_P", -1);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_311, 6);
								}
							}
							else
							{
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						else if (!unk_0x889D01384B54BCE3(iLocal_311, 4))
						{
							if (func_193() && unk_0x83666F9FB8FEBD4B() > 5000)
							{
								func_137("IMPEX_WANTED_FM", -1);
								unk_0xD0E2BFCE93AE3ABD(&iLocal_311, 4);
							}
						}
						else
						{
							unk_0xC1B1E9A034A63A62(0);
						}
					}
				}
				else
				{
					if (func_176("IMPEX_FSPRAY_FM"))
					{
						unk_0xFD1E0AEC770DAF2E(1);
					}
					unk_0x29DB79DD4D939B38(&iLocal_311, 2);
					unk_0x29DB79DD4D939B38(&iLocal_311, 3);
					unk_0x29DB79DD4D939B38(&iLocal_311, 4);
					unk_0x29DB79DD4D939B38(&iLocal_311, 6);
					unk_0x29DB79DD4D939B38(&iLocal_311, 7);
					unk_0x29DB79DD4D939B38(&iLocal_311, 8);
					unk_0x29DB79DD4D939B38(&iLocal_311, 11);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else
			{
				if (func_176("IMPEX_FSPRAY_FM"))
				{
					unk_0xFD1E0AEC770DAF2E(1);
				}
				unk_0x29DB79DD4D939B38(&iLocal_311, 2);
				unk_0x29DB79DD4D939B38(&iLocal_311, 3);
				unk_0x29DB79DD4D939B38(&iLocal_311, 4);
				unk_0x29DB79DD4D939B38(&iLocal_311, 6);
				unk_0x29DB79DD4D939B38(&iLocal_311, 7);
				unk_0x29DB79DD4D939B38(&iLocal_311, 8);
				unk_0x29DB79DD4D939B38(&iLocal_311, 11);
				if (unk_0x83666F9FB8FEBD4B() > 0)
				{
					unk_0xC1B1E9A034A63A62(0);
				}
			}
		}
		else if (func_176("IMPEX_FSPRAY_FM"))
		{
			unk_0xFD1E0AEC770DAF2E(1);
		}
	}
}

int func_313()
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar1 = (iVar2 - 1);
		if (!unk_0x557C6E696286C67A(uVar3, iVar1))
		{
			if (unk_0x538DF9E5B1DF01EB(unk_0xD8A521688BDBE867(iVar3, iVar1)))
			{
				if (!unk_0xE44A580B551C3645(unk_0xD8A521688BDBE867(iVar3, iVar1)))
				{
					uVar0 = unk_0xD8A521688BDBE867(iVar3, iVar1);
					if (!unk_0x2303B9FE7CF81971(uVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_314(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		iVar1 = func_316(1);
		*uParam0 = func_315(iVar0);
		if (iVar1 < (400 + *uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_315(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar3 = unk_0x18315AE43ED8C760(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (unk_0x1356C15C4E3843BF(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (unk_0xA3FAF54789FAEF68(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = unk_0xBBDA792448DB5A89((unk_0x6360D2FA3AD62AD1(iParam0) / 1000));
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (unk_0x69976A9AD2B2C34A(iParam0))
	{
		iVar8 += 50;
	}
	if (unk_0xAF033DA8DD0D0CD3(iParam0, 1))
	{
		iVar8 += 50;
	}
	else if (unk_0xE0FA71BBBE357828(iParam0, 1))
	{
		iVar8 += 25;
	}
	if (unk_0xAF033DA8DD0D0CD3(iParam0, 0))
	{
		iVar8 += 50;
	}
	else if (unk_0xE0FA71BBBE357828(iParam0, 0))
	{
		iVar8 += 25;
	}
	if (!unk_0x6A7587D5CDCF4687(iParam0))
	{
		iVar10 += 20;
		if (!unk_0xA7FB2A2F471A969B(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!unk_0xA7FB2A2F471A969B(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (unk_0xD548A98EDA33C15A(unk_0xA609E58449080951(iParam0)))
	{
		iVar1 = 0;
		if (unk_0xD13672BF2D3C4CB1(iParam0, 0))
		{
			iVar1++;
		}
		if (unk_0xD13672BF2D3C4CB1(iParam0, 1))
		{
			iVar1++;
		}
		if (unk_0xD13672BF2D3C4CB1(iParam0, 2))
		{
			iVar1++;
		}
		if (unk_0xD13672BF2D3C4CB1(iParam0, 3))
		{
			iVar1++;
		}
		if (unk_0xD13672BF2D3C4CB1(iParam0, 4))
		{
			iVar1++;
		}
		if (unk_0xD13672BF2D3C4CB1(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (unk_0xA6B66C568655D216(iParam0))
	{
		iVar8 += 15;
	}
	if (unk_0x247F5398772830DB(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (unk_0x46BB957748356042(iParam0, iVar2, 0))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (unk_0xB036725C3107EE50(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (iVar0 > 0)
	{
		iVar4 = 50;
		iVar0 = (iVar0 + iVar4);
	}
	if (iVar0 > 1250)
	{
		iVar0 = 1250;
	}
	return iVar0;
}

int func_316(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0xEADB7AB703FF2133();
	}
	iVar0 = (iVar0 + unk_0xDBED60E4A98E4A0B(-1));
	return iVar0;
}

bool func_317(int iParam0)
{
	return unk_0x53D28141CF743B83(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_318(int iParam0)
{
	if (unk_0x53D28141CF743B83(iParam0, "Veh_Modded_By_Player") && unk_0xD0997DAAAB203234(iParam0, "Veh_Modded_By_Player") != unk_0xB793F1A0B6CC4AE1(unk_0xF3E5891C26514A74(unk_0x1788E93557766241())))
	{
		return 1;
	}
	return 0;
}

int func_319()
{
	var uVar0;
	
	if (func_421())
	{
		return 0;
	}
	if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
	{
		uVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (!func_321(uVar0))
		{
			if (func_320(unk_0xA609E58449080951(uVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_70(iParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_353.f_35[iVar1] == iVar0)
			{
				if (!func_411(&(Local_353.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_321(int iParam0)
{
	if (Global_68325)
	{
		if (unk_0x53D28141CF743B83(iParam0, "Player_Vehicle"))
		{
			return 1;
		}
	}
	return 0;
}

int func_322()
{
	var uVar0;
	
	if (func_421())
	{
		return 0;
	}
	if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
	{
		if (!Global_1680565)
		{
			uVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
			if (!func_321(uVar0))
			{
				if (!unk_0x8A627BCE7B3FB070(uVar0, 0))
				{
					if (unk_0xECFECDAD51A6184F(iVar0, 1))
					{
						if (Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_6 <= 0)
						{
							if (!unk_0x53D28141CF743B83(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1680564)
								{
									if (bLocal_283)
									{
										bLocal_283 = false;
									}
									if (func_69(&Local_341, unk_0xA609E58449080951(iVar0)))
									{
										Global_2446992.f_1578 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_283)
					{
						bLocal_283 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_323()
{
	if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x889D01384B54BCE3(Local_353.f_23, 0))
		{
			if (unk_0xCB5D8B19B62A3B89(Local_353.f_22))
			{
				if (func_4(Local_353.f_22))
				{
					if (unk_0xD9275EB8FA656B5C(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_353.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_324(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		bVar0 = false;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
			{
				bVar0 = false;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (func_123(unk_0x1788E93557766241(), 1))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (func_107())
		{
			bVar0 = false;
		}
	}
	if (!func_14(unk_0x1788E93557766241(), 0, 0))
	{
		bVar0 = false;
	}
	if (func_66(unk_0x1788E93557766241(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_325()
{
	int iVar0;
	
	switch (iLocal_98)
	{
		case 0:
			if (!func_123(unk_0x1788E93557766241(), 1))
			{
				if (!func_413(&uLocal_99) || func_411(&uLocal_99, 2000, 0))
				{
					if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 1199.403f, -3113.591f, 4.5453f) < 400f)
						{
							func_327(&uLocal_103, 4, iLocal_97, "MECHANIC_IMP", 0, 1);
							iLocal_560 = 0;
							iLocal_98++;
						}
					}
					func_41(&uLocal_99);
					func_412(&uLocal_99, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (!func_123(unk_0x1788E93557766241(), 1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_82)
						{
							if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
							{
								if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1204.224f, -3121.533f, 4.357823f, 1204.521f, -3107.603f, 8.653814f, 5.1875f, 0, 1, 0))
								{
									if (!iLocal_560)
									{
										iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
										if (func_315(iVar0) > 500)
										{
											sLocal_561 = "FM_IEPOOR";
										}
										else
										{
											sLocal_561 = "FM_IEGOOD";
										}
										iLocal_560 = 1;
									}
									else if (func_284(&uLocal_103, "FM_1AU", sLocal_561, 12, 0, 0, 0))
									{
										iLocal_268 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
										iLocal_98++;
										iLocal_560 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_326();
						iLocal_98 = 0;
					}
				}
				else
				{
					func_326();
					iLocal_98 = 0;
				}
			}
			break;
		
		case 2:
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (!func_123(unk_0x1788E93557766241(), 1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_82)
						{
							if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
							{
								if (unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0) != iLocal_268)
								{
									iLocal_98 = 1;
								}
							}
						}
					}
					else
					{
						func_326();
						iLocal_98 = 0;
					}
				}
				else
				{
					func_326();
					iLocal_98 = 0;
				}
			}
			break;
	}
}

void func_326()
{
	var uVar0;
	
	if (unk_0x538DF9E5B1DF01EB(iLocal_97))
	{
		unk_0xEA054561294AEC10(joaat("s_m_y_xmech_02"));
		uVar0 = iLocal_97;
		unk_0xD5FE44FF1732DF73(&uVar0);
	}
}

void func_327(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(iParam2))
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

void func_328()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	int iVar12;
	
	if (func_324(1, 1))
	{
		switch (Local_429[unk_0x044A481E863E2F6B() /*4*/].f_1)
		{
			case 0:
				if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
				{
					bVar7 = func_319();
					if ((func_322() || func_323()) || bVar7)
					{
						if (!func_313())
						{
							if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0)
							{
								if (!func_400())
								{
									if (bLocal_81)
									{
										bLocal_81 = false;
									}
									iVar3 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
									if (!iLocal_87)
									{
										if (func_399(iVar3))
										{
											unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 2, 0);
											unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
										}
									}
									iLocal_562 = iVar3;
									if (unk_0x889D01384B54BCE3(iLocal_558, 15))
									{
										unk_0x29DB79DD4D939B38(&iLocal_558, 15);
									}
									if (unk_0x889D01384B54BCE3(iLocal_311, 9))
									{
										unk_0x29DB79DD4D939B38(&iLocal_311, 9);
									}
									if (unk_0x889D01384B54BCE3(iLocal_311, 12))
									{
										unk_0x29DB79DD4D939B38(&iLocal_311, 12);
									}
									if (unk_0x889D01384B54BCE3(iLocal_311, 10))
									{
										unk_0x29DB79DD4D939B38(&iLocal_311, 10);
									}
									if (!unk_0x889D01384B54BCE3(iLocal_558, 12))
									{
										if (bVar7)
										{
											unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 12);
										}
									}
									else if (!bVar7)
									{
										unk_0x29DB79DD4D939B38(&iLocal_558, 12);
									}
									if (func_317(iVar3))
									{
										if (!func_15(iVar3))
										{
											bLocal_74 = true;
											if (unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
											{
												if (bLocal_80)
												{
													bLocal_80 = false;
												}
												if (unk_0xD8A521688BDBE867(iVar3, -1) == unk_0xA16EC202D9D35357())
												{
													bLocal_77 = true;
												}
											}
											else if (func_72())
											{
												if (bLocal_77)
												{
													bLocal_77 = false;
												}
												bLocal_80 = true;
											}
											bLocal_75 = false;
											bLocal_76 = false;
											bLocal_78 = false;
											bLocal_79 = false;
											bLocal_81 = false;
											bLocal_82 = true;
											if (func_398(1215605247, 18))
											{
												bLocal_72 = true;
											}
											iLocal_324 = unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357());
											if (!unk_0x3FE69FBCE43341D9(iLocal_324))
											{
												if (func_185(iLocal_324, 0))
												{
													if (!unk_0x889D01384B54BCE3(iLocal_558, 17))
													{
														unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 17);
													}
													else if (func_185(iLocal_324, 1))
													{
														Var9 = { unk_0xC91C6BF96160A40B(iLocal_324) };
														if (unk_0x5AF66EDEBFA76B9B(iLocal_324) < 0.5f || unk_0x3545D662A0A53653(Var9.f_1) < 1.3f)
														{
															func_397();
															func_393(unk_0x1788E93557766241(), 0, 16388, 1);
															if (func_323())
															{
																unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 4);
																unk_0xD0E2BFCE93AE3ABD(&(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2), 1);
															}
															if (func_322() || func_319())
															{
																unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 6);
															}
															if (func_392())
															{
																bLocal_71 = true;
															}
															else
															{
																bLocal_71 = false;
															}
															unk_0x542B8BF5C21F2470(iLocal_324, 2);
															if (unk_0xC7402AE8FD6AACA2(iLocal_324))
															{
																unk_0x67565210B706E956(iLocal_324, 1, 1, 1, 1, 1, 0, 0, 0);
															}
															Local_429[unk_0x044A481E863E2F6B() /*4*/] = func_70(unk_0xA609E58449080951(iLocal_324));
															Local_429[unk_0x044A481E863E2F6B() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_319[iVar4] = func_250();
																if (!unk_0x557C6E696286C67A(iLocal_324, iVar1))
																{
																	if (unk_0x538DF9E5B1DF01EB(unk_0xD8A521688BDBE867(iLocal_324, iVar1)))
																	{
																		if (!unk_0xE44A580B551C3645(unk_0xD8A521688BDBE867(iLocal_324, iVar1)))
																		{
																			iVar0 = unk_0xD8A521688BDBE867(iLocal_324, iVar1);
																			if (unk_0x2303B9FE7CF81971(iVar0))
																			{
																				if (func_14(unk_0x5D6FBED3ADADE26A(iVar0), 0, 0))
																				{
																					if (unk_0xCA28B4207B8D7828(unk_0x5D6FBED3ADADE26A(iVar0)))
																					{
																						iLocal_319[iVar4] = unk_0x5D6FBED3ADADE26A(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_290 = func_391(unk_0xA609E58449080951(iLocal_324));
															iLocal_291 = func_315(iLocal_324);
															fLocal_292 = unk_0xBBDA792448DB5A89((iLocal_290 - iLocal_291));
															fLocal_292 = (fLocal_292 * Global_262145.f_2391);
															if (unk_0x889D01384B54BCE3(iLocal_558, 4))
															{
																fLocal_292 = (fLocal_292 * 1.3f);
															}
															fLocal_292 = (fLocal_292 / unk_0xBBDA792448DB5A89(iVar5));
															fLocal_293 = 500f;
															func_390();
															func_145(0);
															func_389(1241, 1, -1);
															if (func_176("IMPEX_DELIVER_FM"))
															{
																unk_0xFD1E0AEC770DAF2E(1);
															}
															unk_0x29DB79DD4D939B38(&iLocal_558, 12);
															iVar6 = func_75(1194, -1, 0);
															if (!unk_0x889D01384B54BCE3(iVar6, 1))
															{
																unk_0xD0E2BFCE93AE3ABD(&iVar6, 1);
																func_130(1194, iVar6, -1, 1);
															}
															else if (!unk_0x889D01384B54BCE3(iVar6, 2))
															{
																unk_0xD0E2BFCE93AE3ABD(&iVar6, 2);
																func_130(1194, iVar6, -1, 1);
															}
															func_388();
															iLocal_294 = 0;
															iLocal_294 = unk_0xF2DB717A73826179(fLocal_292);
															iLocal_294 = (iLocal_294 - (iLocal_294 % 25));
															if (iLocal_563 == iVar3)
															{
																iLocal_294 = (iLocal_294 + iLocal_296);
															}
															if (!unk_0x889D01384B54BCE3(iLocal_558, 4))
															{
																if (iLocal_294 > Global_262145.f_145)
																{
																	iLocal_294 = Global_262145.f_145;
																}
															}
															else if (iLocal_294 > Global_262145.f_145)
															{
																iLocal_294 = Global_262145.f_145;
															}
															iLocal_295 = 0;
															fLocal_293 = (fLocal_293 * Global_262145.f_4206);
															iLocal_295 = unk_0xF2DB717A73826179(fLocal_293);
															unk_0x29DB79DD4D939B38(&iLocal_558, 17);
															iLocal_325 = iLocal_324;
															iLocal_327 = unk_0xA609E58449080951(iLocal_324);
															if (!unk_0x889D01384B54BCE3(iLocal_558, 4))
															{
																unk_0x3282C60F401050FF(19, iLocal_295, iLocal_294, iLocal_324);
															}
															else
															{
																unk_0x3282C60F401050FF(120, iLocal_295, iLocal_294, iLocal_324);
															}
															func_387(19, 1);
															func_386();
															func_416();
														}
														else if (unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
														{
															func_393(unk_0x1788E93557766241(), 0, 16388, 1);
														}
													}
												}
												else if (unk_0x889D01384B54BCE3(iLocal_558, 17))
												{
													unk_0x29DB79DD4D939B38(&iLocal_558, 17);
												}
											}
										}
										else
										{
											if (bLocal_74)
											{
												bLocal_74 = false;
											}
											if (bLocal_82)
											{
												bLocal_82 = false;
											}
											if (bLocal_77)
											{
												bLocal_77 = false;
											}
											if (bLocal_80)
											{
												bLocal_80 = false;
											}
											if (bLocal_81)
											{
												bLocal_81 = false;
											}
										}
									}
									else if (!func_15(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
									{
										if (func_314(&iVar8))
										{
											if (!func_318(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
											{
												if (unk_0xD8A521688BDBE867(iVar3, -1) == unk_0xA16EC202D9D35357())
												{
													if (iLocal_563 != iVar3)
													{
														iLocal_563 = iVar3;
														iLocal_296 = 0;
													}
													else if (iLocal_296 != iVar8)
													{
														if (iLocal_296 < iVar8)
														{
															iLocal_296 = iVar8;
														}
													}
												}
												if (!bLocal_75)
												{
													bLocal_75 = true;
												}
												if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
												{
													if (func_72())
													{
														if (bLocal_76)
														{
															bLocal_76 = false;
														}
														if (unk_0xD8A521688BDBE867(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), -1) == unk_0xA16EC202D9D35357())
														{
															if (func_315(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) > 0)
															{
																if (!bLocal_79)
																{
																	bLocal_79 = true;
																}
															}
															else
															{
																if (bLocal_79)
																{
																	bLocal_79 = false;
																}
																if (!bLocal_78)
																{
																	bLocal_78 = true;
																}
															}
														}
													}
												}
												else if (!func_72())
												{
													if (bLocal_78)
													{
														bLocal_78 = false;
													}
													if (bLocal_79)
													{
														bLocal_79 = false;
													}
													if (!bLocal_76)
													{
														if (unk_0xD8A521688BDBE867(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), -1) == unk_0xA16EC202D9D35357())
														{
															bLocal_76 = true;
														}
													}
												}
											}
											else
											{
												func_385();
											}
										}
										else
										{
											func_385();
										}
									}
									else
									{
										func_385();
										if (bLocal_82)
										{
											bLocal_82 = false;
										}
									}
								}
							}
							else
							{
								iVar3 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
								if (iLocal_562 != iVar3)
								{
									if (!iLocal_87)
									{
										if (func_399(iVar3))
										{
											unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 2, 0);
											unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
										}
									}
									iLocal_562 = iVar3;
								}
								if (!bLocal_81)
								{
									func_385();
									bLocal_81 = true;
								}
							}
						}
					}
					else
					{
						func_385();
						if (bLocal_82)
						{
							bLocal_82 = false;
						}
						if (iLocal_87)
						{
							if (Local_353.f_33)
							{
								if (bLocal_92)
								{
									iLocal_87 = 0;
								}
							}
						}
						if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
						{
							if ((func_176("IMPEX_NOT_NEED") || func_176("IMPEX_NO_MORE")) || func_176("IMPEX_NOT_PVEH"))
							{
								unk_0xFD1E0AEC770DAF2E(1);
							}
						}
						iVar2 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
						if (func_321(iVar2))
						{
							if (unk_0xD8A521688BDBE867(iVar2, -1) == unk_0xA16EC202D9D35357())
							{
								if (unk_0x53D28141CF743B83(iVar2, "Player_Vehicle"))
								{
									if (unk_0xD0997DAAAB203234(iVar2, "Player_Vehicle") != unk_0xA3866FB4DB18B9C8(unk_0x1788E93557766241()) || iVar2 == iLocal_562)
									{
										if (unk_0xECFECDAD51A6184F(iVar2, 0))
										{
											if (func_193())
											{
												if (!unk_0x889D01384B54BCE3(iLocal_558, 15))
												{
													if (bVar7 || func_69(&Local_341, unk_0xA609E58449080951(iVar2)))
													{
														func_137("IMPEX_NOT_PVEH", -1);
														unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 15);
													}
												}
											}
										}
									}
									else if (unk_0x889D01384B54BCE3(iLocal_558, 15))
									{
										if (iVar2 != iLocal_562)
										{
											unk_0x29DB79DD4D939B38(&iLocal_558, 15);
										}
									}
								}
							}
						}
						else
						{
							if (unk_0x889D01384B54BCE3(iLocal_558, 15))
							{
								if (iVar2 != iLocal_562)
								{
									unk_0x29DB79DD4D939B38(&iLocal_558, 15);
								}
							}
							if (bLocal_88)
							{
								if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && func_398(1215605247, 18))
								{
									iVar2 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
									if (func_185(iVar2, 0))
									{
										if (!iLocal_86)
										{
											func_145(1);
											iLocal_86 = 1;
										}
										bLocal_72 = true;
									}
								}
								else if (iLocal_86)
								{
									func_145(0);
									iLocal_86 = 0;
									bLocal_72 = false;
								}
							}
						}
						if (func_398(1215605247, 18))
						{
							if (func_193())
							{
								if (func_321(iVar2))
								{
									if (unk_0xECFECDAD51A6184F(iVar2, 0))
									{
										if (!unk_0x889D01384B54BCE3(iLocal_311, 10))
										{
											func_137("IMPEX_NOT_PVEH", -1);
											unk_0xD0E2BFCE93AE3ABD(&iLocal_311, 10);
										}
									}
								}
								else if (func_69(&Local_341, unk_0xA609E58449080951(iVar2)))
								{
									if (unk_0x8A627BCE7B3FB070(iVar2, 0))
									{
										if (!unk_0x889D01384B54BCE3(iLocal_311, 12))
										{
											func_137("IMPEX_NOT_CREW", -1);
											unk_0xD0E2BFCE93AE3ABD(&iLocal_311, 12);
										}
									}
								}
								else if (!unk_0x889D01384B54BCE3(iLocal_311, 9))
								{
									if (unk_0xD8A521688BDBE867(iVar2, -1) == unk_0xA16EC202D9D35357())
									{
										func_137("IMPEX_NOT_NEED", -1);
										unk_0xD0E2BFCE93AE3ABD(&iLocal_311, 9);
									}
								}
							}
						}
						else
						{
							if (unk_0x889D01384B54BCE3(iLocal_311, 9))
							{
								unk_0x29DB79DD4D939B38(&iLocal_311, 9);
							}
							if (unk_0x889D01384B54BCE3(iLocal_311, 10))
							{
								unk_0x29DB79DD4D939B38(&iLocal_311, 10);
							}
							if (unk_0x889D01384B54BCE3(iLocal_311, 12))
							{
								unk_0x29DB79DD4D939B38(&iLocal_311, 12);
							}
							if (unk_0x889D01384B54BCE3(iLocal_558, 12))
							{
								if (func_193())
								{
									func_137("IMPEX_NO_MORE", -1);
									unk_0x29DB79DD4D939B38(&iLocal_558, 12);
									func_112();
								}
							}
						}
					}
				}
				else
				{
					func_385();
					if (bLocal_82)
					{
						bLocal_82 = false;
					}
					if (iLocal_87)
					{
						iLocal_87 = 0;
					}
				}
				break;
			
			case 1:
				if (func_14(unk_0x1788E93557766241(), 1, 1))
				{
					if (!func_138(unk_0xFF34D923BFB5E9FB(unk_0x1788E93557766241()), 1215605247, &uLocal_314, 0, 500, 1, 0))
					{
						Local_429[unk_0x044A481E863E2F6B() /*4*/].f_1 = 2;
					}
				}
				else
				{
					unk_0x29DB79DD4D939B38(&iLocal_558, 4);
					unk_0x29DB79DD4D939B38(&iLocal_558, 6);
					Local_429[unk_0x044A481E863E2F6B() /*4*/].f_1 = 0;
				}
				break;
			
			case 2:
				Local_429[unk_0x044A481E863E2F6B() /*4*/].f_1 = 3;
				break;
			
			case 3:
				if (unk_0x83B393DE31BAC8F0())
				{
					func_384(17, 1, -1);
					if (unk_0x889D01384B54BCE3(iLocal_558, 4))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_429[unk_0x044A481E863E2F6B() /*4*/].f_2), 1);
						func_383();
					}
					else
					{
						func_381();
					}
					if (bLocal_71)
					{
						if (unk_0x889D01384B54BCE3(iLocal_558, 6))
						{
							Local_56.f_2 = 36;
						}
						else
						{
							Local_56.f_2 = 37;
						}
						Local_56.f_3 = Local_429[unk_0x044A481E863E2F6B() /*4*/];
						Local_56.f_10 = iLocal_319[0];
						Local_56.f_11 = iLocal_319[1];
						Local_56.f_12 = iLocal_319[2];
						Local_56.f_13 = iLocal_319[3];
						if (!unk_0x889D01384B54BCE3(iLocal_558, 6))
						{
						}
					}
					unk_0x29DB79DD4D939B38(&iLocal_558, 6);
					func_380(4, iLocal_294);
					if (func_379())
					{
						func_372(941287179, iLocal_294, &iVar12, 0, 0);
						Global_2537915[iVar12 /*69*/].f_8.f_51 = iLocal_327;
					}
					else
					{
						unk_0x66DD506B3BA92F26(iLocal_294, iLocal_327);
					}
					if (iLocal_291 > 0)
					{
						func_371("IMPEX_PASS", iLocal_294, 7000, 0);
					}
					else
					{
						func_371("IMPEX_PASS", iLocal_294, 7000, 0);
					}
					func_343(2, "XPT_IMPEXP", -1636175450, -1930707410, iLocal_295, 1, -1, 0);
					func_332(29);
					func_393(unk_0x1788E93557766241(), 1, 0, 1);
					Local_429[unk_0x044A481E863E2F6B() /*4*/].f_1 = 0;
					Local_429[unk_0x044A481E863E2F6B() /*4*/] = -1;
					unk_0x29DB79DD4D939B38(&iLocal_558, 4);
					iLocal_93 = 1;
					func_329(12, 0);
				}
				break;
		}
	}
	else
	{
		if (!func_310(unk_0x1788E93557766241(), 1))
		{
			if (!bLocal_88)
			{
				if (iLocal_86)
				{
					func_145(0);
					iLocal_86 = 0;
				}
			}
			else if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && func_398(1215605247, 18))
			{
				iVar2 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
				if (func_185(iVar2, 0))
				{
					if (!iLocal_86)
					{
						func_145(1);
						iLocal_86 = 1;
					}
					bLocal_72 = true;
				}
			}
			else if (iLocal_86)
			{
				func_145(0);
				iLocal_86 = 0;
				bLocal_72 = false;
			}
		}
		if (bLocal_75)
		{
			bLocal_75 = false;
		}
		if (bLocal_76)
		{
			bLocal_76 = false;
		}
		if (bLocal_78)
		{
			bLocal_78 = false;
		}
		if (bLocal_79)
		{
			bLocal_79 = false;
		}
	}
}

void func_329(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_331(iParam0, iParam1))
	{
		iVar0 = func_330();
		Global_2435463[iVar0] = iParam0;
	}
}

int func_330()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435463[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_331(int iParam0, var uParam1)
{
	if (Global_1315879)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315891) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_332(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6843)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_410() /*8064*/].f_5756.f_1795[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_410() /*8064*/].f_5756.f_1795[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_410() /*8064*/].f_5756.f_1795[iVar2 /*3*/].f_1)
			{
				func_339(iVar2, 1);
				unk_0xD0E2BFCE93AE3ABD(&Global_2446058, (8 + iVar2));
				func_336(2103, -1);
				func_333(67, -1);
				func_336(2535, -1);
				func_333(69, -1);
				unk_0x732AC1ACE8A38FF5(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0x889D01384B54BCE3(Global_2446058, 12))
					{
						func_329(7, 0);
					}
					else
					{
						func_329(15, 0);
					}
				}
			}
		}
	}
}

void func_333(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_335(iParam0, func_76(iParam1));
	iVar0++;
	func_334(iParam0, iVar0, iParam1);
}

void func_334(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2473157[iParam0 /*5*/][func_76(iParam2)];
	unk_0x680350124CC21957(iVar0, iParam1, 1);
}

int func_335(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473157[iParam0 /*5*/][func_76(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_336(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_75(iParam0, func_76(iParam1), 0);
	iVar0++;
	if (!func_338(iParam0))
	{
		func_130(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_337(iParam0, iVar0, iParam1, 1);
	}
}

void func_337(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1336437[func_76(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1336443[func_76(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1336449[func_76(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1336455[func_76(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1336413[func_76(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1336419[func_76(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1336425[func_76(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1336431[func_76(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1336389[func_76(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1336395[func_76(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1336401[func_76(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1336407[func_76(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1336461[func_76(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1336467[func_76(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1336473[func_76(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1336479[func_76(iParam2)] = iParam1;
			break;
		
		case 1297:
			Global_1336485[func_76(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1336491[func_76(iParam2)] = iParam1;
			break;
		
		case 1272:
			Global_1336497[func_76(iParam2)] = iParam1;
			break;
		
		case 1869:
			Global_2473821[0 /*6*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2260:
			Global_2473821[1 /*6*/][func_76(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1336503[func_76(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1336509[func_76(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1336515[func_76(iParam2)] = iParam1;
			break;
		
		case 1230:
			Global_1336521[func_76(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_338(int iParam0)
{
	if (Global_1336370)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1297:
			case 634:
			case 1272:
			case 759:
			case 760:
			case 761:
			case 1230:
			case 1869:
			case 2260:
				return 1;
				break;
			}
	}
	return 0;
}

void func_339(int iParam0, int iParam1)
{
	if (Global_2097152[func_410() /*8064*/].f_5756.f_1795[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_410() /*8064*/].f_5756.f_1795[iParam0 /*3*/].f_1 = iParam1;
		func_340(func_342(iParam0), iParam1, -1, 1);
	}
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_341())
	{
		iVar0 = Global_2471573[iParam0 /*5*/][func_76(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xA65D74B65C28C5D7(iVar0, iParam1, iParam3);
		}
	}
}

int func_341()
{
	return 1;
	return 0;
}

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 169;
		
		case 1:
			return 170;
		
		case 2:
			return 171;
		
		default:
	}
	return 169;
}

var func_343(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_344(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_344(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_345(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_345(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_370(unk_0x1788E93557766241()) || func_369(unk_0x1788E93557766241()))
	{
		if (Global_262145.f_7316 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7316;
		}
	}
	else if (Global_262145.f_4982 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4982;
	}
	if (func_368(uParam2))
	{
	}
	if (func_367())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_365(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_364(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_362(0, &iVar1);
					break;
				
				case 3:
					func_362(1, &iVar1);
					break;
				
				case 1:
					func_359(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_389(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_355((func_358(unk_0x1788E93557766241()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x449D2838B793CF3B(iVar1, iParam8, iParam9);
				if (Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_2 != -1)
				{
					func_389(1160, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_350(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_346((func_348(unk_0x1788E93557766241()) + iVar1));
			}
			else
			{
				func_346((func_348(unk_0x1788E93557766241()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_346(int iParam0)
{
	if (func_367())
	{
		Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_5 = iParam0;
		func_347(joaat("mpply_globalxp"), iParam0);
	}
}

void func_347(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, uParam1, 1);
	}
}

int func_348(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_14(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1788E93557766241())
			{
				return func_349(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1583725[iParam0 /*334*/].f_188.f_5;
			}
		}
		else
		{
			return func_349(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_350(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_159(unk_0x1788E93557766241()) };
	if (unk_0x70443014BEB6B15D())
	{
		if (unk_0x9A6FFB0772343488(&Var0))
		{
			iVar13 = func_353(func_354(&Var0));
			if (iVar13 == 0)
			{
				func_352(&Global_1336376, iParam0);
				func_351(joaat("mpply_crew_local_xp_0"), Global_1336376);
			}
			else if (iVar13 == 1)
			{
				func_352(&Global_1336377, iParam0);
				func_351(joaat("mpply_crew_local_xp_1"), Global_1336377);
			}
			else if (iVar13 == 2)
			{
				func_352(&Global_1336378, iParam0);
				func_351(joaat("mpply_crew_local_xp_2"), Global_1336378);
			}
			else if (iVar13 == 3)
			{
				func_352(&Global_1336379, iParam0);
				func_351(joaat("mpply_crew_local_xp_3"), Global_1336379);
			}
			else if (iVar13 == 4)
			{
				func_352(&Global_1336380, iParam0);
				func_351(joaat("mpply_crew_local_xp_4"), Global_1336380);
			}
		}
	}
}

void func_351(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1336371 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1336373 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1336373 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1336374 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1336375 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1336376 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1336377 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1336378 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1336379 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1336380 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1336381 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1336382 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1336383 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1336384 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1336385 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1336386 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1336387 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_352(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_353(int iParam0)
{
	if (iParam0 == Global_1336371)
	{
		return 0;
	}
	else if (iParam0 == Global_1336372)
	{
		return 1;
	}
	else if (iParam0 == Global_1336373)
	{
		return 2;
	}
	else if (iParam0 == Global_1336374)
	{
		return 3;
	}
	else if (iParam0 == Global_1336375)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_354(var uParam0)
{
	if (unk_0x70443014BEB6B15D())
	{
		if (unk_0x9A6FFB0772343488(uParam0))
		{
			return Global_2435485;
		}
	}
	return Global_2435485;
}

void func_355(int iParam0, int iParam1, int iParam2)
{
	if (func_367())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7291 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1336491[func_76(-1)])
				{
					unk_0x449D2838B793CF3B(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1336491[func_76(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7290 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x449D2838B793CF3B(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7290 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x449D2838B793CF3B(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_179(unk_0x1788E93557766241()))
		{
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_1 = iParam0;
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_6 = func_356(iParam0, 1);
		}
		func_337(634, iParam0, -1, 1);
		func_130(635, func_356(iParam0, 1), -1, 1);
		Global_1336491[func_76(-1)] = iParam0;
		func_329(7, 0);
	}
}

int func_356(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_357(iParam0, 0);
}

int func_357(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_271370[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_271370[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_358(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1788E93557766241())
			{
				return Global_1336491[func_76(-1)];
			}
			else if (func_179(iParam0))
			{
				return Global_1583725[iParam0 /*334*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1336491[func_76(-1)];
	}
	return 0;
}

void func_359(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241());
	iVar0 = 0;
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		iVar4 = unk_0xCADBCF2AA9B38F40(iVar0);
		if (unk_0x0AFA8C49D2EED33A(iVar4))
		{
			iVar5 = unk_0xCE0E12AD191025E5(iVar4);
			if (unk_0xA2D6C1E24AF2E058(iVar5) != -1)
			{
				if (unk_0xA2D6C1E24AF2E058(iVar5) == iVar1 || func_168(unk_0xA2D6C1E24AF2E058(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != unk_0x1788E93557766241())
					{
						if (func_361(unk_0x1788E93557766241(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_360(*iParam0, 100) * (10f * Global_262145.f_4196)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_360(*iParam0, 100) * (20f * Global_262145.f_4189)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_360(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_361(int iParam0, int iParam1)
{
	if (unk_0x70443014BEB6B15D())
	{
		Global_2446020 = { func_159(iParam0) };
		Global_2446033 = { func_159(iParam1) };
		if (unk_0x9A6FFB0772343488(&Global_2446020))
		{
			if (unk_0x9A6FFB0772343488(&Global_2446033))
			{
				unk_0x55FB44C9EE7B72D8(&Global_2445950, 35, &Global_2446020);
				unk_0x55FB44C9EE7B72D8(&Global_2445985, 35, &Global_2446033);
				if (Global_2445950 == Global_2445985)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_362(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x3F202553F90D4442())
		{
			iVar3 = iVar0;
			if (unk_0x0AFA8C49D2EED33A(iVar3))
			{
				iVar4 = unk_0xCE0E12AD191025E5(iVar3);
				if (func_14(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1788E93557766241())
					{
						iVar1++;
						if (func_361(unk_0x1788E93557766241(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_14(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1788E93557766241())
				{
					if (func_363(unk_0x1788E93557766241(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_361(unk_0x1788E93557766241(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_360(*iParam1, 100) * (10f * Global_262145.f_4196)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_360(*iParam1, 100) * (20f * Global_262145.f_4189)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_363(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_25(iParam0), func_25(iParam1));
	return 0f;
}

int func_364(int iParam0)
{
	int iVar0;
	
	if (unk_0xE6226327EBCC990E() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_360(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_365(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x045E73D0141F51B4(iParam0) > func_358(unk_0x1788E93557766241()))
		{
			iParam0 = -func_358(unk_0x1788E93557766241());
		}
	}
	if (func_366(8000, 0, 0) > 0)
	{
		if (func_366(8000, 0, 0) < (iParam0 + func_358(unk_0x1788E93557766241())))
		{
			iParam0 = (func_366(8000, 0, 0) - func_358(unk_0x1788E93557766241()));
		}
	}
	return iParam0;
}

int func_366(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_271370[iParam0];
}

int func_367()
{
	return 1;
}

int func_368(char* sParam0)
{
	if (unk_0x8CD18E96F1984EE6(uParam0))
	{
		return 1;
	}
	else if (unk_0x9BA82E09A986BA4B(uParam0, "") || unk_0x9BA82E09A986BA4B(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_369(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 2;
}

bool func_370(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 7;
}

void func_371(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x8E9A80E27DB553E5(sParam0);
	unk_0x53B64327E3305DCB(iParam1);
	unk_0x6E070B8EEA199511(iParam2, 1);
}

void func_372(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_379())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
			if (iParam1 > 0)
			{
				func_373(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
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
			func_373(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_373(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_379())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xC9345B47FCA589CF(func_24()) || unk_0x4E4D77A008D3DA63())
		{
			Global_2538376 = 1;
			return 0;
		}
		if (Global_2436286)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2538377 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2537915[iVar1 /*69*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0xC9C87AEBA01C419B(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x625C87495B033820(iVar3))
		{
			*uParam0 = func_378(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2537915[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2538373 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2538375 = 1;
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_377(1, iParam4);
			Global_2538375 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_374(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_374(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xD0E2BFCE93AE3ABD(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_375(iParam0);
	}
}

void func_375(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_379())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_376(iParam0))
		{
			if (!bVar0)
			{
				unk_0xBDF871285913783C();
			}
		}
		else if (!bVar0)
		{
			unk_0xE4B5006C2633FD81(Global_2537915[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2537915[iParam0 /*69*/] = { Var1 };
	}
}

int func_376(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2537915[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_377(int iParam0, var uParam1)
{
	Global_2437461 = uParam1;
	Global_2437460 = iParam0;
}

int func_378(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2537915[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_379())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2537915[iVar0 /*69*/].f_2 = 1;
			Global_2537915[iVar0 /*69*/].f_1 = uParam5;
			Global_2537915[iVar0 /*69*/].f_3 = uParam1;
			Global_2537915[iVar0 /*69*/].f_4 = uParam2;
			Global_2537915[iVar0 /*69*/].f_7 = uParam3;
			Global_2537915[iVar0 /*69*/].f_5 = 0;
			Global_2537915[iVar0 /*69*/] = iParam0;
			Global_2537915[iVar0 /*69*/].f_6 = iParam4;
			Global_2537915[iVar0 /*69*/].f_65 = uParam8;
			Global_2537915[iVar0 /*69*/].f_64 = uParam7;
			Global_2537915[iVar0 /*69*/].f_68 = 0;
			Global_2538373 = 0;
			if (bParam6)
			{
				Global_2537915[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_379()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		return 1;
	}
	return 0;
}

void func_380(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2446992.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4932)
		{
			iParam1 = Global_262145.f_4932;
		}
		Global_2446992.f_270 = iParam1;
		Global_2446992.f_271 = 0;
	}
}

void func_381()
{
	int iVar0;
	
	iVar0 = func_382(42);
	Global_2408985[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2408985[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_382(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2408985[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2408985[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_383()
{
	int iVar0;
	
	iVar0 = func_382(43);
	Global_2408985[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2408985[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_384(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_335(iParam0, func_76(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_334(iParam0, iVar0, iParam2);
}

void func_385()
{
	if (bLocal_81)
	{
		bLocal_81 = false;
	}
	if (bLocal_76)
	{
		bLocal_76 = false;
	}
	if (bLocal_77)
	{
		bLocal_77 = false;
	}
	if (bLocal_78)
	{
		bLocal_78 = false;
	}
	if (bLocal_80)
	{
		bLocal_80 = false;
	}
	if (bLocal_79)
	{
		bLocal_79 = false;
	}
}

void func_386()
{
	Global_2097152[func_410() /*8064*/].f_5756.f_34 = unk_0x5C7391B560C251C7();
}

void func_387(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_410() /*8064*/].f_5756.f_18 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_410() /*8064*/].f_5756.f_17 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_410() /*8064*/].f_5756.f_11 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_410() /*8064*/].f_5756.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_410() /*8064*/].f_5756.f_13 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_410() /*8064*/].f_5756.f_14 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_410() /*8064*/].f_5756.f_15 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_410() /*8064*/].f_5756.f_19 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_410() /*8064*/].f_5756.f_16 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_410() /*8064*/].f_5756.f_22 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_410() /*8064*/].f_5756.f_23 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_410() /*8064*/].f_5756.f_24 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_410() /*8064*/].f_5756.f_25 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_410() /*8064*/].f_5756.f_26 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_410() /*8064*/].f_5756.f_28 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_410() /*8064*/].f_5756.f_27 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_410() /*8064*/].f_5756.f_30 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_410() /*8064*/].f_5756.f_31 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_410() /*8064*/].f_5756.f_29 = iVar0;
			break;
	}
}

void func_388()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_75(1194, -1, 0);
	if (!unk_0x889D01384B54BCE3(iVar0, 3))
	{
		unk_0xD0E2BFCE93AE3ABD(&iVar0, 3);
		unk_0xD0E2BFCE93AE3ABD(&iLocal_559, 1);
		bVar1 = true;
	}
	else if (!unk_0x889D01384B54BCE3(iVar0, 4))
	{
		unk_0xD0E2BFCE93AE3ABD(&iVar0, 4);
		unk_0xD0E2BFCE93AE3ABD(&iLocal_559, 2);
		bVar1 = true;
	}
	else if (!unk_0x889D01384B54BCE3(iVar0, 5))
	{
		unk_0xD0E2BFCE93AE3ABD(&iVar0, 5);
		unk_0xD0E2BFCE93AE3ABD(&iLocal_559, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		func_130(1194, iVar0, -1, 1);
	}
}

void func_389(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_75(iParam0, func_76(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_338(iParam0))
	{
		func_130(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_337(iParam0, iVar0, iParam2, 1);
	}
}

void func_390()
{
	if (!Global_2446992.f_4369)
	{
		Global_2446992.f_4369 = 1;
	}
	func_190(&(Global_2446992.f_4370), 0, 0);
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sentinel"):
			return 9000;
		
		case joaat("serrano"):
			return 9000;
		
		case joaat("dominator"):
			return 5250;
		
		case joaat("schafter2"):
			return 9750;
		
		case joaat("surge"):
			return 5700;
		
		case joaat("jackal"):
			return 9000;
		
		case joaat("ztype"):
			return 0;
		
		case joaat("tailgater"):
			return 8250;
		
		case joaat("landstalker"):
			return 8700;
		
		case joaat("penumbra"):
			return 3600;
		
		case joaat("f620"):
			return 12000;
		
		case joaat("fq2"):
			return 7500;
		
		case joaat("patriot"):
			return 7500;
		
		case joaat("habanero"):
			return 6300;
		
		case joaat("prairie"):
			return 3750;
		
		case joaat("fusilade"):
			return 5400;
		
		case joaat("bjxl"):
			return 4050;
		
		case joaat("gresley"):
			return 4350;
		
		case joaat("buccaneer"):
			return 4200;
		
		case joaat("daemon"):
			return 3000;
		
		case joaat("bagger"):
			return 2400;
		
		default:
	}
	return -1;
}

int func_392()
{
	int iVar0;
	
	if (func_14(unk_0x1788E93557766241(), 1, 1))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
			if (unk_0xECFECDAD51A6184F(iVar0, 0))
			{
				if (!unk_0x557C6E696286C67A(iVar0, -1))
				{
					if (unk_0xD8A521688BDBE867(iVar0, -1) == unk_0xA16EC202D9D35357())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_393(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	var uVar24;
	int iVar25;
	
	if (bParam1)
	{
		if (unk_0x6A132B76AB7C7138())
		{
			unk_0xD2238E59B5C4A250(0);
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		uVar0 = iParam2;
		unk_0xC92B5D880C803814(iParam0, bParam1, uVar0);
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
		if (!func_120())
		{
			bVar23 = false;
			if (bParam1 == 1)
			{
				bVar23 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar23 = true;
			}
			if (bVar9 == 1)
			{
				bVar23 = true;
			}
			if (bVar23)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x38FA37FE3518BA38(iParam0) && unk_0x2AF80829930084FD(iParam0))
		{
			uVar24 = unk_0xFF34D923BFB5E9FB(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x1DAD7CE53BEE7710())
				{
					unk_0x738AEBA425C3D093(1);
				}
				else
				{
					unk_0x423D1EBE54B18555(uVar24, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x1DAD7CE53BEE7710() && !bVar18)
					{
						unk_0x738AEBA425C3D093(0);
					}
					Global_2414327[iParam0 /*255*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_396(uVar24) && !unk_0x3FE69FBCE43341D9(uVar24))
				{
					if (!bVar21)
					{
						unk_0x6A23C3306A8CF21B(iVar24, true, 0);
					}
				}
				if (!unk_0x5A6F774C8E17AA21(iVar24))
				{
					if (!bVar20)
					{
						unk_0x3CC3106305C40A28(iVar24, false);
					}
					unk_0x940C6B8BF42B190B(iVar24, 1);
				}
				else if (!bVar20)
				{
					unk_0x3CC3106305C40A28(iVar24, false);
				}
				unk_0xA8BC819B54F5B824(iVar24, true);
				unk_0x68068FC275E8AC83(iParam0, 0);
				unk_0xEDD99DCB19EC7C49(iVar24);
				unk_0x551186C5C186D1DC(iVar24, 1);
				func_395();
				func_394();
				if (unk_0xA5B13BF6970E2A56())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xA84F80DD9F675CED())
				{
				}
				Global_2414327[iParam0 /*255*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_396(iVar24) && !unk_0x3FE69FBCE43341D9(iVar24))
				{
					if (!bVar21)
					{
						unk_0x6A23C3306A8CF21B(iVar24, !bVar14, 0);
					}
					if (!unk_0x5A6F774C8E17AA21(iVar24))
					{
						if (!bVar20)
						{
							unk_0x3CC3106305C40A28(iVar24, bVar15);
						}
						if (!bVar15)
						{
							unk_0x940C6B8BF42B190B(iVar24, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x68068FC275E8AC83(iParam0, 0);
				}
				else
				{
					unk_0x68068FC275E8AC83(iParam0, 1);
				}
				unk_0xA8BC819B54F5B824(iVar24, bVar16);
				if (bVar2)
				{
					if (!unk_0xF10879F2BBA41065(iVar24) && !unk_0x202EF5D8203705EF(iVar24, 0))
					{
						unk_0x9AB8F163FA160890(iVar24);
					}
				}
			}
			iVar25 = 0;
			if (bVar1)
			{
				iVar25 |= 2;
			}
			if (bVar2)
			{
				iVar25 |= 4;
			}
			if (bVar3)
			{
				iVar25 |= 8;
			}
			if (bVar4)
			{
				iVar25 |= 16;
			}
			if (bVar5)
			{
				iVar25 |= 32;
			}
			if (bVar6)
			{
				iVar25 |= 64;
			}
			if (bVar7)
			{
				iVar25 |= 128;
			}
			if (bVar8)
			{
				iVar25 |= 256;
			}
			if (bVar9)
			{
				iVar25 |= 512;
			}
			if (bVar10)
			{
				iVar25 |= 1024;
			}
			if (bVar11)
			{
				iVar25 |= 2048;
			}
			if (bVar12)
			{
				iVar25 |= 4096;
			}
			unk_0xC92B5D880C803814(iParam0, bParam1, iVar25);
		}
	}
}

void func_394()
{
	struct<2> Var0;
	
	Global_2422491.f_689 = 0;
	Global_2422491.f_690 = 0;
	Global_2422491.f_691 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404570.f_1419 = { Var0 };
}

void func_395()
{
	Global_2404570.f_580 = 0;
	Global_2404570.f_1460 = 0;
	Global_2404570.f_453 = 0;
	Global_2414327[unk_0x1788E93557766241() /*255*/].f_204 = 0;
}

int func_396(int iParam0)
{
	int iVar0;
	
	if (unk_0x202EF5D8203705EF(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x221AC1EF116F6053(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_397()
{
	func_112();
}

int func_398(int iParam0, int iParam1)
{
	if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), func_141(iParam0), 1) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_399(int iParam0)
{
	if (unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		if (unk_0xD8A521688BDBE867(iParam0, -1) == unk_0xA16EC202D9D35357())
		{
			if (!func_318(iParam0))
			{
				if (iParam0 != iLocal_562)
				{
					if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) < 2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_400()
{
	if (Global_2422491.f_499.f_6 || Global_2422491.f_499.f_7)
	{
		return 1;
	}
	return 0;
}

void func_401(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam2;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_402(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_402(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_409(iParam1);
			break;
		
		case 1:
			iVar0 = func_408(iParam1);
			break;
		
		case 2:
			iVar0 = func_407(iParam1);
			break;
		
		case 3:
			iVar0 = func_406(iParam1);
			break;
		
		case 4:
			iVar0 = func_405(iParam1);
			break;
		
		case 5:
			iVar0 = func_404(iParam1);
			break;
		
		case 6:
			iVar0 = func_403(iParam1);
			break;
	}
	return iVar0;
}

int func_403(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 12;
			break;
		
		case 2:
			iVar0 = 13;
			break;
		
		case 3:
			iVar0 = 15;
			break;
		
		case 4:
			iVar0 = 17;
			break;
	}
	return iVar0;
}

int func_404(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 8;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 10;
			break;
		
		case 3:
			iVar0 = 11;
			break;
		
		case 4:
			iVar0 = 14;
			break;
	}
	return iVar0;
}

int func_405(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 16;
			break;
		
		case 1:
			iVar0 = 17;
			break;
		
		case 2:
			iVar0 = 18;
			break;
		
		case 3:
			iVar0 = 19;
			break;
		
		case 4:
			iVar0 = 20;
			break;
	}
	return iVar0;
}

int func_406(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 11;
			break;
		
		case 1:
			iVar0 = 12;
			break;
		
		case 2:
			iVar0 = 13;
			break;
		
		case 3:
			iVar0 = 15;
			break;
		
		case 4:
			iVar0 = 17;
			break;
	}
	return iVar0;
}

int func_407(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 8;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 10;
			break;
		
		case 3:
			iVar0 = 11;
			break;
		
		case 4:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

int func_408(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 4;
			break;
		
		case 1:
			iVar0 = 5;
			break;
		
		case 2:
			iVar0 = 7;
			break;
		
		case 3:
			iVar0 = 8;
			break;
		
		case 4:
			iVar0 = 9;
			break;
	}
	return iVar0;
}

int func_409(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 3:
			iVar0 = 4;
			break;
		
		case 4:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

int func_410()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_411(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_412(uParam0, bParam2, 0);
	if (unk_0x1DAD7CE53BEE7710() && !bParam2)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_412(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1DAD7CE53BEE7710() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x519586565311459B();
			}
			else
			{
				*uParam0 = unk_0x4EAB1171B13C220B();
			}
		}
		else
		{
			*uParam0 = unk_0x09560C7DE2A384BD();
		}
		uParam0->f_1 = 1;
	}
}

bool func_413(var uParam0)
{
	return uParam0->f_1;
}

void func_414()
{
	Global_2097152[func_410() /*8064*/].f_5756.f_35 = unk_0x5C7391B560C251C7();
}

void func_415(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x7A49EF3953280CCA();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_402(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2097152[func_410() /*8064*/].f_5756.f_36 = iVar1;
}

void func_416()
{
	func_419("CELL_CLTEST1", 0);
	func_417("CELL_CLTEST1");
	func_419("CELL_CLTEST6", 0);
	func_417("CELL_CLTEST6");
}

void func_417(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x8CD18E96F1984EE6(&(Global_97439.f_12395[iVar0 /*104*/])))
		{
			if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_12395[iVar0 /*104*/]), sParam0))
			{
				if (Global_97439.f_12395[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_234();
					Global_97439.f_12395[iVar0 /*104*/].f_99[Global_14394] = 0;
					if (func_418(iVar0))
					{
					}
					else
					{
						Global_97439.f_12395[iVar0 /*104*/].f_24 = 0;
						Global_97439.f_12395[iVar0 /*104*/].f_28 = 0;
						Global_97439.f_12395[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x465FBA277E9176E4(Global_97439.f_12395[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_418(int iParam0)
{
	if ((Global_97439.f_12395[iParam0 /*104*/].f_99[0] == 1 || Global_97439.f_12395[iParam0 /*104*/].f_99[1] == 1) || Global_97439.f_12395[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_419(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x8CD18E96F1984EE6(&(Global_97439.f_12395[iVar0 /*104*/])))
		{
			if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_12395[iVar0 /*104*/]), sParam0))
			{
				if (Global_97439.f_12395[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_97439.f_12395[iVar0 /*104*/].f_24 = 1;
				if (Global_97439.f_12395[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_97439.f_12395[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_97439.f_12305[0 /*20*/].f_17 = 0;
					}
					if (Global_97439.f_12395[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_97439.f_12305[1 /*20*/].f_17 = 0;
					}
					if (Global_97439.f_12395[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_97439.f_12305[2 /*20*/].f_17 = 0;
					}
					if (Global_97439.f_12395[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_97439.f_12305[3 /*20*/].f_17 = 0;
					}
					Global_97439.f_12395[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_97439.f_12395[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_420()
{
	if (unk_0x11A809BBE3889742())
	{
		return 0;
	}
	if (func_102())
	{
		return 0;
	}
	if (!unk_0x83B393DE31BAC8F0())
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (func_123(unk_0x1788E93557766241(), 1))
	{
		return 0;
	}
	if (func_105())
	{
		return 0;
	}
	if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		return 0;
	}
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return 0;
	}
	if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (Global_1573536)
	{
		return 0;
	}
	if (func_196())
	{
		return 0;
	}
	if (func_195())
	{
		return 0;
	}
	if (func_429())
	{
		return 0;
	}
	if (unk_0x7A75BEF6DA1EDF3D())
	{
		return 0;
	}
	if (Global_67066)
	{
		return 0;
	}
	if (!func_120())
	{
		return 0;
	}
	if (func_103())
	{
		return 0;
	}
	if (unk_0x31EF25060710376C())
	{
		return 0;
	}
	return 1;
}

bool func_421()
{
	if (Global_2097152[func_410() /*8064*/].f_5756.f_34 == 0)
	{
		return 0;
	}
	return (unk_0x5C7391B560C251C7() - Global_2097152[func_410() /*8064*/].f_5756.f_34) < 86400;
}

bool func_422()
{
	if (Global_2097152[func_410() /*8064*/].f_5756.f_35 == 0)
	{
		return 0;
	}
	return (unk_0x5C7391B560C251C7() - Global_2097152[func_410() /*8064*/].f_5756.f_35) < 86400;
}

bool func_423()
{
	if (!unk_0x889D01384B54BCE3(iLocal_558, 2))
	{
		if (!func_22(unk_0x1788E93557766241(), 0))
		{
			if (((((!unk_0x31EF25060710376C() && !func_123(unk_0x1788E93557766241(), 1)) && !func_107()) && (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))) && unk_0x83B393DE31BAC8F0()) && func_424(19))
			{
				unk_0xD0E2BFCE93AE3ABD(&iLocal_558, 2);
			}
		}
	}
	return unk_0x889D01384B54BCE3(iLocal_558, 2);
}

int func_424(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_426(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = func_425(unk_0x1788E93557766241(), 1);
	iVar2 = func_356(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_425(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_358(iParam0);
}

int func_426(int iParam0)
{
	if (func_98())
	{
		return 1;
	}
	if (func_97())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
			if (!func_427(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
		case 135:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_427(int iParam0)
{
	return func_428(123, iParam0);
}

int func_428(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2471573[iParam0 /*5*/][func_76(uParam1)];
	if (unk_0xD7A6AA341268D26A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_429()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/].f_173 != 0;
}

int func_430()
{
	bool bVar0;
	
	func_436(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315866 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 1;
		}
	}
	if (func_435())
	{
		return 1;
	}
	if (Global_2437386)
	{
		return 1;
	}
	if (func_434())
	{
		return 1;
	}
	if (func_433(157))
	{
		if (!func_432())
		{
			return 1;
		}
	}
	if (func_433(155))
	{
		return 1;
	}
	if (!unk_0x54CE0989F263D8A3())
	{
		return 1;
	}
	if (func_431() != 0)
	{
		if (unk_0x16CDA1894CFE0781(func_431()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_431()
{
	switch (func_78())
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

bool func_432()
{
	return Global_2428577.f_572;
}

int func_433(int iParam0)
{
	if (unk_0xA519E4AC66148E87(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_434()
{
	return Global_2435556;
}

bool func_435()
{
	return Global_2428577.f_567;
}

void func_436(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2C15B7979450724C(1))
	{
		iVar1 = unk_0x8B6CEAB2AD1BD1CD(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6A4B863200ABAA44(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 307:
					func_437(iVar0);
					break;
				
				case 2:
					unk_0x6A4B863200ABAA44(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_437(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 3))
	{
		if (func_14(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xFF34D923BFB5E9FB(Var0.f_1);
			if (unk_0x538DF9E5B1DF01EB(uVar3))
			{
				if (unk_0x202EF5D8203705EF(iVar3, 0))
				{
					uVar4 = unk_0x6ADAC08D70C79DE5(iVar3, 0);
					if (unk_0xA7FB2A2F471A969B(uVar4, Var0.f_2) && unk_0x93C72DAC35C5D38C())
					{
						if (func_438(iVar4, &bVar5))
						{
							unk_0x2FC1F6BC6D0D9D77(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x3A3C5A6572B3C611(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_438(int iParam0, var uParam1)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0x22349EC06EA5B08B(iParam0))
		{
			if (unk_0xFD9706CAB35EA810(iParam0))
			{
				unk_0x7B9576B4E099FB1F(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xD8233CB95CB48A7C(iParam0, 0))
		{
			if (unk_0xC7402AE8FD6AACA2(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_439()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_440()
{
	if (iLocal_96 != -1)
	{
		func_127(iLocal_96, 0);
	}
	func_442(&iLocal_313);
	if (unk_0x889D01384B54BCE3(iLocal_558, 1))
	{
		func_441(0f, 0f, 0f, func_299(19), 1);
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0xE9849174628A9C50())
		{
			if (unk_0x139D18B7A1D82592(Local_353.f_24))
			{
				unk_0xB7A6D93D885AFBB9(Local_353.f_24);
			}
			Local_353.f_24 = -1;
		}
	}
	func_308();
	Global_2446992.f_1546 = 0;
	Global_2446992.f_1547 = 0;
	Global_2446992.f_1549 = 0;
	Global_2446992.f_1575 = 0;
	if (unk_0x889D01384B54BCE3(iLocal_558, 7))
	{
		func_198(6, 0);
	}
	func_326();
	if (unk_0x5660C8AFDD9C1721(Global_1689987))
	{
		unk_0xB6FB9702660D84F6(&Global_1689987);
	}
	func_192(0);
	if (unk_0x5660C8AFDD9C1721(Global_1689997))
	{
		unk_0xB6FB9702660D84F6(&Global_1689997);
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (iLocal_73)
		{
			func_146(1215605247, 0, 0);
			func_145(0);
		}
		if (iLocal_86)
		{
			func_145(0);
		}
	}
	unk_0x82706E6C897B0FA1();
}

void func_441(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0x06771AF7795B3ECF(uParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x9BA82E09A986BA4B(&(Global_2446992.f_3809[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_26(Global_2446992.f_3809[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2446992.f_3809[iVar0 /*26*/] = 0;
					Global_2446992.f_3809[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2446992.f_3809[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2446992.f_3809[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

void func_442(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_443(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35615[iVar0 /*19*/])
		{
			Global_35615[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_443(int iParam0)
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
		if (Global_35615[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_444(struct<20> Param0)
{
	func_450(func_451(Param0.f_0), Param0);
	func_447(0, -1, 0);
	unk_0x241F80BF72379478(&Local_353, 74);
	unk_0x51FC2B81A21C009A(&Local_429, 129);
	unk_0xFF9F94FD851C212A(0);
	if (!func_446())
	{
		return 0;
	}
	Global_2446992.f_1549 = 0;
	Global_2446992.f_4227 = 0;
	if (unk_0xE9849174628A9C50())
	{
	}
	if (func_66(unk_0x1788E93557766241(), 6))
	{
		func_198(6, 0);
	}
	func_445();
	return 1;
}

void func_445()
{
	var uVar0;
	
	uVar0 = func_75(1194, -1, 0);
	if (unk_0x889D01384B54BCE3(uVar0, 3))
	{
		unk_0xD0E2BFCE93AE3ABD(&iLocal_559, 1);
	}
	if (unk_0x889D01384B54BCE3(iVar0, 4))
	{
		unk_0xD0E2BFCE93AE3ABD(&iLocal_559, 2);
	}
	if (unk_0x889D01384B54BCE3(iVar0, 5))
	{
		unk_0xD0E2BFCE93AE3ABD(&iLocal_559, 3);
		unk_0xD0E2BFCE93AE3ABD(&iLocal_559, 0);
	}
}

int func_446()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 0;
		}
		if (unk_0x5D0D85F8A1CCEE45())
		{
			return 1;
		}
		if (func_435())
		{
			return 0;
		}
		if (func_433(155))
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

int func_447(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x92078BBBAEFC7998();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_449();
			}
			else
			{
				return 0;
			}
		}
		if (!func_448())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1DAD7CE53BEE7710())
				{
					if (!bParam2)
					{
						func_449();
					}
					else
					{
						return 0;
					}
				}
				if (func_435())
				{
					if (!bParam2)
					{
						func_449();
					}
					else
					{
						return 0;
					}
				}
				if (func_433(155))
				{
					if (!bParam2)
					{
						func_449();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x0987AD2F87AA4427())
			{
				if (!bParam2)
				{
					func_449();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x92078BBBAEFC7998();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			if (!bParam2)
			{
				func_449();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x0987AD2F87AA4427())
	{
		if (!bParam2)
		{
			func_449();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_448()
{
	return Global_1315866;
}

void func_449()
{
	unk_0x82706E6C897B0FA1();
}

void func_450(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		func_449();
	}
	unk_0x3005435C0CFEEE94(uParam0, 0, Param1.f_16);
}

int func_451(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 56:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 2;
		
		case 70:
			return 1;
		
		case 66:
			return 2;
		
		case 67:
			return 4;
		
		case 68:
			return 2;
		
		case 69:
			return 2;
		
		case 52:
			return 1;
		
		case 71:
			return 2;
		
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
			return 0;
		
		case 78:
			return 1;
		
		default:
	}
	return 0;
}

