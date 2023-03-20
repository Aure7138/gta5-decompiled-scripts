#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 16;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
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
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
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
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	var uLocal_232 = 0;
	struct<3> Local_233 = { 0, 0, 0 } ;
	struct<3> Local_236 = { 0, 0, 0 } ;
	struct<3> Local_239 = { 0, 0, 0 } ;
	struct<3> Local_242 = { 0, 0, 0 } ;
	struct<3> Local_245 = { 0, 0, 0 } ;
	struct<3> Local_248 = { 0, 0, 0 } ;
	struct<3> Local_251 = { 0, 0, 0 } ;
	struct<3> Local_254 = { 0, 0, 0 } ;
	struct<3> Local_257 = { 0, 0, 0 } ;
	struct<3> Local_260 = { 0, 0, 0 } ;
	struct<3> Local_263 = { 0, 0, 0 } ;
	struct<3> Local_266 = { 0, 0, 0 } ;
	struct<3> Local_269 = { 0, 0, 0 } ;
	struct<3> Local_272 = { 0, 0, 0 } ;
	bool bLocal_275 = 0;
	bool bLocal_276 = 0;
	bool bLocal_277 = 0;
	bool bLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	var uLocal_284[2] = { 0, 0 };
	var uLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289[2] = { 0, 0 };
	int iLocal_292[5] = { 0, 0, 0, 0, 0 };
	var uLocal_298[3] = { 0, 0, 0 };
	var uLocal_302[2] = { 0, 0 };
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	var uLocal_313 = 8;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 1;
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
	int iVar0;
	struct<9> Var1;
	int iVar10;
	var uVar11;
	bool bVar12;
	var uVar13;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	iLocal_0 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_46 = unk_0xE30164C14FFD22B6();
	uLocal_47 = unk_0xE1ABDD92C442B1EE();
	fLocal_51 = -1f;
	iLocal_219 = 1;
	iLocal_228 = -1;
	iLocal_229 = -1;
	Local_245 = { 370.2576f, -1597.488f, 35.94954f };
	Local_248 = { 824.992f, -1289.267f, 27.24564f };
	Local_251 = { 450.1889f, -981.6754f, 42.69174f };
	Local_254 = { -1088.37f, -842.2911f, 30.27554f };
	Local_257 = { 608.9076f, 0.806411f, 100.2497f };
	Local_260 = { -562.0159f, -130.8113f, 37.4369f };
	Local_263 = { 1855.237f, 3683.236f, 33.29165f };
	Local_266 = { -443.5063f, 6016.231f, 30.71787f };
	Local_269 = { -1034.6f, 4918.6f, 205.9f };
	iVar0 = 0;
	iVar10 = 0;
	Local_233 = { ScriptParam_0.f_1[0 /*3*/] };
	Var1.f_0 = joaat("g_m_y_mexgoon_02");
	Var1.f_1 = joaat("hc_gunman");
	Var1.f_2 = joaat("mp_m_shopkeep_01");
	Var1.f_3 = joaat("a_f_y_soucent_01");
	Var1.f_4 = joaat("a_m_m_soucent_01");
	Var1.f_5 = joaat("s_m_y_cop_01");
	Var1.f_6 = joaat("police3");
	if (unk_0x8D841F1DD3FA555F(11))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_289[0]))
		{
			if (unk_0xCD67A1A6022640ED(iLocal_289[0]))
			{
				unk_0x6EC15FE0ADD3E99C(iLocal_289[0]);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_289[1]))
		{
			if (unk_0xCD67A1A6022640ED(iLocal_289[1]))
			{
				unk_0x6EC15FE0ADD3E99C(iLocal_289[1]);
			}
		}
		func_232(Var1, &iLocal_289, bVar12);
	}
	func_231(&uLocal_313, 3);
	if (func_200(Local_233, -1, 0, 0, 0))
	{
		func_197(-1);
	}
	else
	{
		unk_0xC23A229F78DAD92A();
	}
	while (iVar0 != 7)
	{
		iVar18 = 0;
		func_194(&uLocal_313);
		if (!unk_0x52AB115D3D6A8417() && !func_193())
		{
			iVar18 = 0;
			iVar0 = 7;
			func_232(Var1, &iLocal_289, bVar12);
		}
		if (!func_193())
		{
			if (func_192() || func_191(7))
			{
				iVar18 = 0;
				iVar0 = 7;
				func_232(Var1, &iLocal_289, bVar12);
			}
		}
		unk_0x36137B7A77318822("RE_GD", 0);
		if (func_190())
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_289[0]))
			{
				unk_0xF210D34D7F7152ED(&(iLocal_289[0]));
			}
			if (unk_0x86CCCD2FAE9D5E65(iLocal_289[1]))
			{
				unk_0xF210D34D7F7152ED(&(iLocal_289[1]));
			}
			while (!func_189())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			func_185(9, 0);
			func_175(-1, 0);
			func_172();
			iVar18 = 0;
			iVar0 = 7;
			func_232(Var1, &iLocal_289, bVar12);
		}
		if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0) && !unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
		{
			if (unk_0x8F0DA78DFE28D60F(func_171(unk_0x1329891157A54C63()) - Vector(10f, 20f, 20f), func_171(unk_0x1329891157A54C63()) + Vector(10f, 20f, 20f)) || unk_0x57E9C5666B081646(func_171(unk_0x1329891157A54C63()) - Vector(10f, 20f, 20f), func_171(unk_0x1329891157A54C63()) + Vector(10f, 20f, 20f)))
			{
				if ((((!unk_0x5FEB513A4402FD59(iLocal_289[0]) && !unk_0x5FEB513A4402FD59(iLocal_289[1])) && unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x2ADE2CEED2637E95(), 0)) && unk_0x04C377C10639B842(iLocal_289[0], unk_0x2ADE2CEED2637E95(), 0)) && unk_0x04C377C10639B842(iLocal_289[1], unk_0x2ADE2CEED2637E95(), 0))
				{
					if (unk_0xA04824262F150982(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) < 0.2f)
					{
						if (iLocal_229 == -1)
						{
							iLocal_229 = unk_0x48E480685981C7D4();
						}
					}
					else
					{
						iLocal_229 = -1;
					}
					if (iLocal_229 != -1 && unk_0x48E480685981C7D4() > iLocal_229 + 1000)
					{
						if (!func_170())
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_LOSE", 4, 0, 0, 0);
						}
						if (iLocal_229 != -1 && unk_0x48E480685981C7D4() > iLocal_229 + 10000)
						{
							func_159();
							unk_0x4EDE34FBADD967A6(0);
							func_161(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
							if (!unk_0x5FEB513A4402FD59(iLocal_289[0]))
							{
								unk_0xEAD984C2869B8B7C(&uLocal_308);
								unk_0x98046F3D16B9CF76(0, 0, 0);
								unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
								unk_0x56D9ED1541046AF6(uLocal_308);
								unk_0xC65002CAA1212AF9(iLocal_289[0], iLocal_308);
								unk_0xA3561415EB3DA3A3(&iLocal_308);
								unk_0x6CB332CB31E9FA96(iLocal_289[0], 1);
							}
							if (!unk_0x5FEB513A4402FD59(iLocal_289[1]))
							{
								unk_0xEAD984C2869B8B7C(&iLocal_308);
								unk_0x98046F3D16B9CF76(0, 500, 0);
								unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
								unk_0x56D9ED1541046AF6(iLocal_308);
								unk_0xC65002CAA1212AF9(iLocal_289[1], iLocal_308);
								unk_0xA3561415EB3DA3A3(&iLocal_308);
								unk_0x6CB332CB31E9FA96(iLocal_289[1], 1);
							}
							iVar18 = 0;
							iVar0 = 7;
							func_232(Var1, &iLocal_289, bVar12);
						}
					}
				}
			}
		}
		if (iVar10 > 1)
		{
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
			{
				unk_0xF8E77F310A5B6EAB(255, iLocal_309, -1033021910);
				unk_0xF8E77F310A5B6EAB(255, iLocal_309, 1166638144);
				unk_0xF8E77F310A5B6EAB(255, -1033021910, iLocal_309);
				unk_0xF8E77F310A5B6EAB(255, 1166638144, iLocal_309);
			}
			else
			{
				unk_0xF8E77F310A5B6EAB(1, iLocal_309, -1033021910);
				unk_0xF8E77F310A5B6EAB(1, iLocal_309, 1166638144);
				unk_0xF8E77F310A5B6EAB(1, -1033021910, iLocal_309);
				unk_0xF8E77F310A5B6EAB(1, 1166638144, iLocal_309);
			}
		}
		if ((iVar10 > 1 && iVar10 < 7) && !iLocal_282)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_288))
			{
				if (unk_0xBBEF8270CE27C0EE(iLocal_288, unk_0x81873881071CD9FE(), 1))
				{
					func_159();
					unk_0x4EDE34FBADD967A6(0);
					if (!unk_0x5FEB513A4402FD59(iLocal_289[0]))
					{
						unk_0x754376E2234CBB4A(iLocal_289[0], unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_289[1]))
					{
						unk_0x754376E2234CBB4A(iLocal_289[1], unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_232(Var1, &iLocal_289, bVar12);
				}
			}
		}
		if ((iVar10 > 7 && iVar10 < 18) && !iLocal_282)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_289[0]) && unk_0x86CCCD2FAE9D5E65(iLocal_289[1]))
			{
				if (unk_0x5FEB513A4402FD59(iLocal_289[1]) || !unk_0x8D28631AAAEFC957(iLocal_289[0], unk_0x81873881071CD9FE(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_289[0]))
					{
						unk_0xEAD984C2869B8B7C(&iLocal_308);
						unk_0x98046F3D16B9CF76(0, 0, 0);
						unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
						unk_0x56D9ED1541046AF6(iLocal_308);
						unk_0xC65002CAA1212AF9(iLocal_289[0], iLocal_308);
						unk_0xA3561415EB3DA3A3(&iLocal_308);
						unk_0x6CB332CB31E9FA96(iLocal_289[0], 1);
						func_159();
						unk_0x4EDE34FBADD967A6(0);
						func_161(&uLocal_54, "REGETAU", "REAWA_FKDB", 4, 0, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_232(Var1, &iLocal_289, bVar12);
				}
				if (unk_0x5FEB513A4402FD59(iLocal_289[0]) || !unk_0x8D28631AAAEFC957(iLocal_289[1], unk_0x81873881071CD9FE(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_289[1]))
					{
						unk_0xEAD984C2869B8B7C(&iLocal_308);
						unk_0x98046F3D16B9CF76(0, 0, 0);
						unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
						unk_0x56D9ED1541046AF6(iLocal_308);
						unk_0xC65002CAA1212AF9(iLocal_289[1], iLocal_308);
						unk_0xA3561415EB3DA3A3(&iLocal_308);
						unk_0x6CB332CB31E9FA96(iLocal_289[1], 1);
						func_159();
						unk_0x4EDE34FBADD967A6(0);
						func_161(&uLocal_54, "REGETAU", "REAWA_DEAD1", 4, 0, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_232(Var1, &iLocal_289, bVar12);
				}
			}
		}
		if (func_158(&iLocal_289, unk_0x2ADE2CEED2637E95(), 180f))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_289[0], unk_0x81873881071CD9FE(), 1) || unk_0xBBEF8270CE27C0EE(iLocal_289[0], unk_0x81873881071CD9FE(), 1))
			{
				iLocal_282 = 1;
			}
			if (iLocal_282)
			{
				if (!bLocal_277)
				{
					func_157();
				}
				if (!bLocal_278)
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_288))
					{
						unk_0xEAD984C2869B8B7C(&iLocal_308);
						if (unk_0x0BAE7BE122182FA8(iLocal_288, "random@getawaydriver", "idle_a", 3) || unk_0x0BAE7BE122182FA8(iLocal_288, "random@getawaydriver", "idle_2_hands_up", 3))
						{
							unk_0x31C1393E4ACFD794(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 10000, 2052, 4);
						unk_0x65C82688BA49CA39(0, unk_0x81873881071CD9FE(), -1, 5f, 3f, 1073741824, 0);
						unk_0x31C1393E4ACFD794(0, "random@getawaydriver", "gesture_nod_yes_soft", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 3000);
						unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
						unk_0x56D9ED1541046AF6(iLocal_308);
						unk_0xC65002CAA1212AF9(iLocal_288, iLocal_308);
						unk_0xA3561415EB3DA3A3(&iLocal_308);
						unk_0x6CB332CB31E9FA96(iLocal_288, 1);
						bLocal_278 = true;
					}
				}
			}
			else
			{
				iVar18 = 0;
				iVar0 = 7;
				func_232(Var1, &iLocal_289, bVar12);
			}
			if (bLocal_277)
			{
				unk_0x5B6D37392F5991C3(1f);
				unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
				if (!unk_0x5FEB513A4402FD59(uLocal_298[0]))
				{
					if (!unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
					{
						if (unk_0x8D28631AAAEFC957(uLocal_298[0], unk_0x81873881071CD9FE(), 4f, 4f, 4f, 0, 1, 0))
						{
							if (!func_170())
							{
								unk_0xAF625598EDA64AD3(uLocal_298[0], unk_0x81873881071CD9FE(), 1000, 2052, 4);
								func_161(&uLocal_54, "REGETAU", "REAWA_THX", 4, 0, 0, 0);
								unk_0x5AE11BC36633DE4E(0);
							}
							else
							{
								if (!unk_0x5FEB513A4402FD59(uLocal_298[0]))
								{
									unk_0x1D15D99A10A15334(uLocal_298[0], 0);
								}
								if (!unk_0x5FEB513A4402FD59(uLocal_298[1]))
								{
									unk_0x1D15D99A10A15334(uLocal_298[1], 0);
								}
								if (unk_0xC9D9444186B5A374() > 3000)
								{
									while (!func_189())
									{
										unk_0x4EDE34FBADD967A6(0);
									}
									func_185(9, 0);
									func_156(5);
									func_175(-1, 0);
									func_172();
									iVar18 = 0;
									iVar0 = 7;
									func_232(Var1, &iLocal_289, bVar12);
								}
							}
						}
						else if (!unk_0x8D28631AAAEFC957(uLocal_298[0], unk_0x81873881071CD9FE(), 120f, 120f, 120f, 0, 1, 0))
						{
							iVar18 = 0;
							iVar0 = 7;
							func_232(Var1, &iLocal_289, bVar12);
						}
					}
					else
					{
						unk_0x27CC98B7C879C320(uLocal_298[0]);
						func_159();
						unk_0x4EDE34FBADD967A6(0);
						iVar18 = 0;
						iVar0 = 7;
						func_232(Var1, &iLocal_289, bVar12);
					}
				}
				else if (unk_0x5FEB513A4402FD59(iLocal_288))
				{
					iVar18 = 0;
					iVar0 = 7;
					func_232(Var1, &iLocal_289, bVar12);
				}
			}
			if (bLocal_278)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_288))
				{
					if (unk_0x8D28631AAAEFC957(iLocal_288, unk_0x81873881071CD9FE(), 4f, 4f, 4f, 0, 1, 0))
					{
						if (!func_170())
						{
							unk_0xAF625598EDA64AD3(iLocal_288, unk_0x81873881071CD9FE(), 3000, 2048, 2);
							func_161(&uLocal_54, "REGETAU", "REAWA_THANKS", 4, 0, 0, 0);
						}
						else
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_288))
							{
								unk_0x33B1E568CEF14B0D(iLocal_288, 1);
							}
							while (func_170())
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							while (!func_189())
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							unk_0x6CBCF8F4B982C3FD(1);
							func_185(9, 0);
							func_156(5);
							func_175(-1, 0);
							func_172();
							iVar18 = 0;
							iVar0 = 7;
							func_232(Var1, &iLocal_289, bVar12);
						}
					}
					else if (!unk_0x8D28631AAAEFC957(iLocal_288, unk_0x81873881071CD9FE(), 120f, 120f, 120f, 0, 1, 0))
					{
						iVar18 = 0;
						iVar0 = 7;
						func_232(Var1, &iLocal_289, bVar12);
					}
				}
				else if (unk_0x5FEB513A4402FD59(uLocal_298[0]))
				{
					iVar18 = 0;
					iVar0 = 7;
					func_232(Var1, &iLocal_289, bVar12);
				}
			}
		}
		switch (iVar0)
		{
			case 0:
				if (func_144())
				{
					iVar18 = 0;
					iVar0 = 7;
					func_232(Var1, &iLocal_289, bVar12);
				}
				if (func_132(1, Var1))
				{
					iVar18 = 0;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_120(3))
				{
					iLocal_312 = 1;
					func_119(1);
					iVar17 = unk_0x48E480685981C7D4();
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar18 = 0;
				break;
			
			case 4:
				iVar18 = 0;
				unk_0xF3148AAF69AF9CBC(&uVar11, 4);
				unk_0xF3148AAF69AF9CBC(&uVar11, 1);
				unk_0xF3148AAF69AF9CBC(&uVar11, 5);
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
					{
						if (func_118())
						{
							if (unk_0x7404950238A154C2(unk_0x2ADE2CEED2637E95(), 0))
							{
								if ((unk_0xBEB00EB4ADDC2A33(unk_0x2ADE2CEED2637E95(), 0) && unk_0xBEB00EB4ADDC2A33(unk_0x2ADE2CEED2637E95(), 2)) && unk_0xBEB00EB4ADDC2A33(unk_0x2ADE2CEED2637E95(), 1))
								{
									iVar0 = 5;
								}
							}
						}
					}
				}
				else
				{
					iVar0 = 6;
				}
				iVar0 = 5;
				unk_0x82B37C69DDE2AC99(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), &uVar13, &uVar16, 1, 1077936128, 0);
				if (func_117(iVar17, 20000))
				{
					iVar0 = 6;
				}
				if (iVar0 != 5)
				{
				}
				break;
			
			case 5:
				if (iVar10 > 1)
				{
					if (!func_193())
					{
						if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							iVar18 = 0;
							iVar0 = 6;
							break;
						}
						if (!iLocal_281)
						{
							if (unk_0x8121EBA1C6EF7984(unk_0x81873881071CD9FE(), Vector(28.4601f, -1565.293f, 61.5891f) - Vector(30f, 30f, 30f), Vector(28.4601f, -1565.293f, 61.5891f) + Vector(30f, 30f, 30f), 0, 1))
							{
								iVar19 = 0;
								while (iVar19 < iLocal_292)
								{
									if (!unk_0x5FEB513A4402FD59(iLocal_292[iVar19]))
									{
										unk_0x754376E2234CBB4A(iLocal_292[iVar19], unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
										unk_0x6CB332CB31E9FA96(iLocal_292[iVar19], 1);
									}
									iVar19++;
								}
								if (!unk_0x5FEB513A4402FD59(iLocal_288))
								{
									unk_0x754376E2234CBB4A(iLocal_288, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
									unk_0x6CB332CB31E9FA96(iLocal_288, 1);
								}
								iLocal_281 = 1;
							}
						}
					}
				}
				else if (func_144())
				{
					iVar18 = 0;
					iVar0 = 7;
					func_232(Var1, &iLocal_289, bVar12);
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar10, Var1, &iLocal_289, &iVar18, &bVar12))
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			
			case 6:
				iVar18 = 0;
				iVar0 = 7;
				func_232(Var1, &iLocal_289, bVar12);
				break;
				break;
			
			case 7:
				iVar18 = 0;
				break;
		}
		if (iVar0 != 7)
		{
			unk_0x4EDE34FBADD967A6(iVar18);
		}
	}
	func_232(Var1, &iLocal_289, bVar12);
}

int func_1(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1[2];
	float fVar8[2];
	struct<3> Var11;
	float fVar14;
	struct<3> Var15[5];
	float fVar31;
	struct<3> Var32[5];
	int iVar48;
	struct<3> Var49;
	int iVar52[3];
	struct<3> Var56;
	struct<3> Var59;
	var uVar62;
	var uVar63;
	int iVar64;
	int iVar65;
	
	Var15[0 /*3*/] = { -56.7157f, -1317.766f, 27.9845f };
	Var15[1 /*3*/] = { 457.5345f, -813.3361f, 26.511f };
	Var15[2 /*3*/] = { 884.047f, -2239.43f, 29.4387f };
	Var15[3 /*3*/] = { -1339.328f, -762.4225f, 19.314f };
	Var15[4 /*3*/] = { -461.6898f, 283.665f, 82.2492f };
	Var32[0 /*3*/] = { -45.2654f, -1290.126f, 28.1977f };
	Var32[1 /*3*/] = { 470.193f, -731.1867f, 26.412f };
	Var32[2 /*3*/] = { 889.9938f, -2177.638f, 29.5195f };
	Var32[3 /*3*/] = { -1334.826f, -792.1527f, 18.8175f };
	Var32[4 /*3*/] = { -424.5901f, 288.3558f, 82.2293f };
	switch (*iParam0)
	{
		case 0:
			if (func_116(Local_233, 300f, 1))
			{
				*iParam0 = 1;
			}
			break;
		
		case 1:
			*iParam11 = 0;
			func_106(39, 1);
			func_106(40, 1);
			func_106(41, 1);
			func_106(42, 1);
			func_106(43, 1);
			func_106(44, 1);
			if (func_105() == 0)
			{
				func_104(&uLocal_54, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
			}
			else if (func_105() == 1)
			{
				func_104(&uLocal_54, 0, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
			}
			else if (func_105() == 2)
			{
				func_104(&uLocal_54, 0, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
			}
			if (unk_0x2A488C176D52CCA5(Local_233, 933.83f, 3640.22f, 32.36f) < 20f)
			{
				Var1[0 /*3*/] = { 943.1853f, 3647.218f, 31.3603f };
				fVar8[0] = 58.2967f;
				Var1[1 /*3*/] = { 941.3207f, 3650.301f, 31.3111f };
				fVar8[1] = 92.7793f;
				Var11 = { 939.2422f, 3649.755f, 31.3536f };
				fVar14 = 260.4475f;
			}
			else if (unk_0x2A488C176D52CCA5(Local_233, 57.86f, -1562.4f, 29.47f) < 20f)
			{
				Var1[0 /*3*/] = { 66.0644f, -1564.218f, 28.4602f };
				fVar8[0] = 198.4093f;
				Var1[1 /*3*/] = { 63.5055f, -1568.178f, 28.4602f };
				fVar8[1] = 254.133f;
				Var11 = { 68.4259f, -1569.067f, 28.6027f };
				fVar14 = 64.1114f;
			}
			uLocal_232 = unk_0xC80D3C64CC2CE6A3(unk_0x1329891157A54C63());
			unk_0x3DD1ED742E99F292(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0, 1);
			unk_0x13705C66F125D98D(Local_233 - Vector(50f, 50f, 50f), Local_233 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
			unk_0xF47DE13A08D86AB8(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0, 0);
			unk_0xEB1F3AEB071C6A9E(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0, 1);
			unk_0x32A12757CBF48A33(joaat("picador"));
			unk_0x32A12757CBF48A33(joaat("stanier"));
			unk_0x32A12757CBF48A33(joaat("patriot"));
			while ((!unk_0x33ACB874CECA2D4B(joaat("picador")) || !unk_0x33ACB874CECA2D4B(joaat("stanier"))) || !unk_0x33ACB874CECA2D4B(joaat("patriot")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iVar52[0] = unk_0xE00F8DEA9778FC87(joaat("picador"), 59.5209f, -1547.228f, 28.4602f, 49.1762f, 1, 1);
			iVar52[1] = unk_0xE00F8DEA9778FC87(joaat("stanier"), 33.3296f, -1577.537f, 28.2826f, 51.8183f, 1, 1);
			iVar52[2] = unk_0xE00F8DEA9778FC87(joaat("patriot"), 48.8282f, -1582.706f, 28.4603f, 226.8345f, 1, 1);
			unk_0x5CC9D6711FE01F0D(iVar52[0]);
			unk_0x5CC9D6711FE01F0D(iVar52[1]);
			unk_0x5CC9D6711FE01F0D(iVar52[2]);
			if (iLocal_230 == 0)
			{
			}
			unk_0x4865E80F793024CE("reCriminals", &iLocal_309);
			unk_0x4865E80F793024CE("reShopKeep", &iLocal_310);
			unk_0x4865E80F793024CE("reCops", &iLocal_311);
			unk_0xF8E77F310A5B6EAB(5, iLocal_309, joaat("COP"));
			unk_0xF8E77F310A5B6EAB(5, iLocal_311, iLocal_309);
			unk_0xF8E77F310A5B6EAB(5, joaat("COP"), iLocal_309);
			unk_0xF8E77F310A5B6EAB(1, joaat("COP"), iLocal_311);
			unk_0xF8E77F310A5B6EAB(1, iLocal_311, joaat("COP"));
			(*uParam10)[0] = unk_0x206897C6DBC12488(22, Param1.f_0, Var1[0 /*3*/], fVar8[0], 1, 1);
			unk_0x1D15D99A10A15334((*uParam10)[0], 1);
			unk_0x887F4488DA99FD21(Param1.f_0);
			unk_0x506A601663C5417C((*uParam10)[0], iLocal_309);
			unk_0x8E4A427F5C43E416((*uParam10)[0], joaat("weapon_appistol"), -1, 1, 1);
			unk_0x0CD6B65135C8C3FE((*uParam10)[0], unk_0x2E0A9E3291F398E3(800, 2000));
			unk_0xCE566DBDCACD245E((*uParam10)[0], 206, 1);
			unk_0x7F5F0D37173E518C((*uParam10)[0], 2, 0);
			unk_0x7F5F0D37173E518C((*uParam10)[0], 1024, 1);
			unk_0x7F5F0D37173E518C((*uParam10)[0], 65536, 1);
			unk_0x03F73D35E5AC583A((*uParam10)[0], 9, 1, 0, 0);
			func_104(&uLocal_54, 2, (*uParam10)[0], "REGETRobber2", 0, 1);
			(*uParam10)[1] = unk_0x206897C6DBC12488(22, Param1.f_1, Var1[1 /*3*/], fVar8[1], 1, 1);
			unk_0x1D15D99A10A15334((*uParam10)[1], 1);
			unk_0x887F4488DA99FD21(Param1.f_1);
			unk_0x506A601663C5417C((*uParam10)[1], iLocal_309);
			unk_0x8E4A427F5C43E416((*uParam10)[1], joaat("weapon_pistol"), -1, 1, 1);
			unk_0x0CD6B65135C8C3FE((*uParam10)[1], unk_0x2E0A9E3291F398E3(800, 2000));
			unk_0xCE566DBDCACD245E((*uParam10)[1], 206, 1);
			unk_0x7F5F0D37173E518C((*uParam10)[1], 2, 0);
			unk_0x7F5F0D37173E518C((*uParam10)[1], 1024, 1);
			unk_0x7F5F0D37173E518C((*uParam10)[1], 65536, 1);
			unk_0x03F73D35E5AC583A((*uParam10)[1], 0, 5, 0, 0);
			unk_0x03F73D35E5AC583A((*uParam10)[1], 1, 1, 0, 0);
			unk_0x03F73D35E5AC583A((*uParam10)[1], 2, 1, 0, 0);
			unk_0x03F73D35E5AC583A((*uParam10)[1], 3, 6, 0, 0);
			unk_0x03F73D35E5AC583A((*uParam10)[1], 4, 6, 2, 0);
			unk_0x03F73D35E5AC583A((*uParam10)[1], 6, 1, 0, 0);
			unk_0x03F73D35E5AC583A((*uParam10)[1], 8, 0, 0, 0);
			unk_0x03F73D35E5AC583A((*uParam10)[1], 9, 0, 0, 0);
			unk_0x03F73D35E5AC583A((*uParam10)[1], 10, 1, 0, 0);
			unk_0xEF1A2C5B3EE83E3E((*uParam10)[1], "PACKIE_AI_Norm_Part1_Booth");
			func_104(&uLocal_54, 1, (*uParam10)[1], "PACKIE", 0, 1);
			iLocal_288 = unk_0x206897C6DBC12488(4, Param1.f_2, Var11, fVar14, 1, 1);
			unk_0x887F4488DA99FD21(Param1.f_2);
			unk_0x1D15D99A10A15334(iLocal_288, 1);
			unk_0x506A601663C5417C(iLocal_288, iLocal_310);
			unk_0xEF1A2C5B3EE83E3E(iLocal_288, "A_M_Y_Business_01_CHINESE_MINI_01");
			func_104(&uLocal_54, 3, iLocal_288, "StoreOwner", 0, 1);
			iLocal_292[0] = unk_0x206897C6DBC12488(5, Param1.f_3, 62.8929f, -1575.52f, 28.6027f, 326.1814f, 1, 1);
			unk_0x887F4488DA99FD21(Param1.f_3);
			unk_0x4B9FA68A3AC8C29D(iLocal_292[0], 17, 1);
			unk_0x492E306B5A7C779A(iLocal_292[0], -1);
			iLocal_292[2] = unk_0x206897C6DBC12488(5, Param1.f_3, 61.6538f, -1555.256f, 28.4601f, 206.7004f, 1, 1);
			unk_0x887F4488DA99FD21(Param1.f_3);
			unk_0x4B9FA68A3AC8C29D(iLocal_292[2], 17, 1);
			unk_0x0E13137B34FB5F45(iLocal_292[2], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, 0);
			iLocal_292[3] = unk_0x206897C6DBC12488(4, Param1.f_4, 75.9343f, -1556.306f, 28.6028f, 147.2908f, 1, 1);
			unk_0x887F4488DA99FD21(Param1.f_4);
			unk_0x4B9FA68A3AC8C29D(iLocal_292[3], 17, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (((((!unk_0x930F8FBB8E9537CC(iLocal_288) && !unk_0x930F8FBB8E9537CC(iLocal_292[0])) && !unk_0x930F8FBB8E9537CC(iLocal_292[2])) && !unk_0x930F8FBB8E9537CC(iLocal_292[3])) && !unk_0x930F8FBB8E9537CC((*uParam10)[0])) && !unk_0x930F8FBB8E9537CC((*uParam10)[1]))
			{
				if (((((unk_0x8CA9DD653EF4C9B8(iLocal_288) && unk_0x8CA9DD653EF4C9B8(iLocal_292[0])) && unk_0x8CA9DD653EF4C9B8(iLocal_292[2])) && unk_0x8CA9DD653EF4C9B8(iLocal_292[3])) && unk_0x8CA9DD653EF4C9B8((*uParam10)[0])) && unk_0x8CA9DD653EF4C9B8((*uParam10)[1]))
				{
					unk_0x295DC04FC13E025B("random@getawaydriver@thugs");
					unk_0x295DC04FC13E025B("combat@gestures@pistol@halt");
					unk_0x295DC04FC13E025B("misslamar1ig_20");
					unk_0x295DC04FC13E025B("random@getawaydriver");
					while (((!unk_0x8E8B546E1A81D27F("random@getawaydriver@thugs") || !unk_0x8E8B546E1A81D27F("combat@gestures@pistol@halt")) || !unk_0x8E8B546E1A81D27F("misslamar1ig_20")) || !unk_0x8E8B546E1A81D27F("random@getawaydriver"))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_288))
					{
						unk_0x197CE92C1E34D4B6(iLocal_288, -1, 0, -1, 0);
						if (!unk_0x5FEB513A4402FD59((*uParam10)[0]))
						{
							unk_0x31C1393E4ACFD794((*uParam10)[0], "random@getawaydriver@thugs", "base_a", 4f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0xAF625598EDA64AD3((*uParam10)[0], unk_0x81873881071CD9FE(), -1, 2052, 4);
						}
						if (!unk_0x5FEB513A4402FD59((*uParam10)[1]))
						{
							unk_0x31C1393E4ACFD794((*uParam10)[1], "random@getawaydriver@thugs", "base_b", 4f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0xAF625598EDA64AD3((*uParam10)[1], unk_0x81873881071CD9FE(), -1, 2052, 4);
						}
					}
					unk_0xC1B1E9A034A63A62(0);
					*iParam0 = 3;
				}
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() > 0)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_292[0]))
				{
					func_102(iLocal_292[0], "GENERIC_SHOCKED_HIGH", 24);
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 1000)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_292[2]))
				{
					func_102(iLocal_292[2], "GENERIC_FRIGHTENED_HIGH", 24);
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 2000)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_292[3]))
				{
					func_102(iLocal_292[3], "GENERIC_FRIGHTENED_HIGH", 24);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 81.71976f, -1530.834f, 28.17651f, 26.78526f, -1595.693f, 58.29443f, 32.875f, 0, 1, 0))
			{
				if (!iLocal_281)
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_292[0]))
					{
						unk_0x06189C52198B2264(iLocal_292[0], Local_233, 200f, -1, 0, 0);
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_292[2]))
					{
						unk_0xEAD984C2869B8B7C(&iLocal_308);
						unk_0x5EAAD72695348E00(0, 250);
						unk_0x06189C52198B2264(0, Local_233, 200f, -1, 0, 0);
						unk_0x56D9ED1541046AF6(iLocal_308);
						unk_0xC65002CAA1212AF9(iLocal_292[2], iLocal_308);
						unk_0xA3561415EB3DA3A3(&iLocal_308);
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_292[3]))
					{
						unk_0xEAD984C2869B8B7C(&iLocal_308);
						unk_0x5EAAD72695348E00(0, 500);
						unk_0x06189C52198B2264(0, Local_233, 200f, -1, 0, 0);
						unk_0x56D9ED1541046AF6(iLocal_308);
						unk_0xC65002CAA1212AF9(iLocal_292[3], iLocal_308);
						unk_0xA3561415EB3DA3A3(&iLocal_308);
					}
					iLocal_281 = 1;
				}
			}
			if (func_67(uParam10, unk_0x2ADE2CEED2637E95()))
			{
				*iParam0 = 4;
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			if (unk_0x8F0DA78DFE28D60F(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)) || unk_0x57E9C5666B081646(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x5FEB513A4402FD59((*uParam10)[0]) && !unk_0x5FEB513A4402FD59((*uParam10)[1]))
				{
					unk_0x754376E2234CBB4A((*uParam10)[0], unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
					unk_0x754376E2234CBB4A((*uParam10)[1], unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
					func_159();
					unk_0x4EDE34FBADD967A6(0);
					func_161(&uLocal_54, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 4:
			if (!func_170())
			{
				if ((!unk_0x5FEB513A4402FD59((*uParam10)[0]) && !unk_0x5FEB513A4402FD59((*uParam10)[1])) && !unk_0x5FEB513A4402FD59(iLocal_288))
				{
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_288))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_288))
					{
						func_161(&uLocal_54, "REGETAU", "REAWA_DOWN", 4, 0, 0, 0);
						unk_0xAF625598EDA64AD3((*uParam10)[0], unk_0x81873881071CD9FE(), 10000, 2052, 4);
						unk_0xEAD984C2869B8B7C(&iLocal_308);
						unk_0x31C1393E4ACFD794(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
						unk_0x31C1393E4ACFD794(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
						unk_0x56D9ED1541046AF6(iLocal_308);
						unk_0xC65002CAA1212AF9(iLocal_288, iLocal_308);
						unk_0xA3561415EB3DA3A3(&iLocal_308);
					}
					*iParam0 = 5;
				}
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			if (((unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0) || unk_0x73B48A5F8A9477E7(unk_0x81873881071CD9FE())) || unk_0x8F0DA78DFE28D60F(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f))) || unk_0x57E9C5666B081646(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x5FEB513A4402FD59((*uParam10)[0]) && !unk_0x5FEB513A4402FD59((*uParam10)[1]))
				{
					unk_0x754376E2234CBB4A((*uParam10)[0], unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
					unk_0x754376E2234CBB4A((*uParam10)[1], unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
					func_159();
					unk_0x4EDE34FBADD967A6(0);
					func_161(&uLocal_54, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 5:
			if (unk_0x5FEB513A4402FD59(iLocal_288))
			{
				if (!unk_0x5FEB513A4402FD59((*uParam10)[0]) && !unk_0x5FEB513A4402FD59((*uParam10)[1]))
				{
					unk_0xF88735A9354A45F3((*uParam10)[0], unk_0x81873881071CD9FE(), -1);
					unk_0xF88735A9354A45F3((*uParam10)[1], unk_0x81873881071CD9FE(), -1);
				}
			}
			else if (unk_0xFA1212DE7C455679(iLocal_288, 242628503) != 1 && unk_0xFA1212DE7C455679(iLocal_288, 242628503) != 0)
			{
				unk_0xEAD984C2869B8B7C(&iLocal_308);
				unk_0x31C1393E4ACFD794(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
				unk_0x31C1393E4ACFD794(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x56D9ED1541046AF6(iLocal_308);
				unk_0xC65002CAA1212AF9(iLocal_288, iLocal_308);
				unk_0xA3561415EB3DA3A3(&iLocal_308);
			}
			if (!unk_0x5FEB513A4402FD59(iLocal_289[0]) && !unk_0x5FEB513A4402FD59(iLocal_289[1]))
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
				{
					if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
					{
						if (unk_0xA04824262F150982(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) < 0.1f)
						{
							if (func_118() && unk_0x653781B2157A929D(unk_0x2ADE2CEED2637E95()))
							{
								unk_0xEE7F8F35078C057B(unk_0x14B7103DBD149FFE(unk_0x2ADE2CEED2637E95()), 3);
								if (!unk_0x5FEB513A4402FD59(iLocal_288))
								{
									Local_272 = { unk_0xB6AE0DAE06D56288(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0) };
									Var56 = { unk_0xB07F27EC3B05E4EA(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), -1.5f, -1.5f, 0f) };
									Var59 = { unk_0xB07F27EC3B05E4EA(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 1.5f, 0f, 0f) };
									unk_0xEAD984C2869B8B7C(&iLocal_308);
									unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 10000, 2096, 4);
									unk_0xE7D69AA8A129E7D3(0, iLocal_288, 1500, 0);
									unk_0xE2585A2920C4268E(0, Var56, iLocal_288, 3f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
									unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 10000, 2096, 4);
									unk_0x56D9ED1541046AF6(iLocal_308);
									unk_0xC65002CAA1212AF9(iLocal_289[0], iLocal_308);
									unk_0xA3561415EB3DA3A3(&iLocal_308);
									unk_0xEAD984C2869B8B7C(&iLocal_308);
									unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 10000, 2096, 4);
									unk_0xE7D69AA8A129E7D3(0, iLocal_288, 2500, 0);
									unk_0xE2585A2920C4268E(0, Var59, iLocal_288, 3f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
									unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 10000, 2096, 4);
									unk_0x56D9ED1541046AF6(iLocal_308);
									unk_0xC65002CAA1212AF9(iLocal_289[1], iLocal_308);
									unk_0xA3561415EB3DA3A3(&iLocal_308);
								}
								else
								{
									unk_0xABED360AB1F46D3D(iLocal_289[0], func_65());
									unk_0xABED360AB1F46D3D(iLocal_289[1], func_65());
									unk_0x2DA3CE5ACB2F30AC(iLocal_289[0], 1);
									unk_0x2DA3CE5ACB2F30AC(iLocal_289[1], 0);
									if (unk_0x14B7103DBD149FFE(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE())) == joaat("bus"))
									{
										if (!unk_0xBEB00EB4ADDC2A33(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 1))
										{
											uVar62 = unk_0xB0B9E53CEFDB16AA(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 1);
											if (!unk_0xE86442941AE40E75(uVar62))
											{
												unk_0xD768713E73165208(uVar62, 1, 0);
												unk_0xF210D34D7F7152ED(&uVar62);
											}
										}
										if (!unk_0xBEB00EB4ADDC2A33(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 0))
										{
											uVar62 = unk_0xB0B9E53CEFDB16AA(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 0);
											if (!unk_0xE86442941AE40E75(uVar62))
											{
												unk_0xD768713E73165208(uVar62, 1, 0);
												unk_0xF210D34D7F7152ED(&uVar62);
											}
										}
									}
									unk_0x64ACA71A49AA111C(iLocal_289[0], 1);
									unk_0x64ACA71A49AA111C(iLocal_289[1], 1);
								}
								*iParam0 = 6;
							}
							else if (!iLocal_279)
							{
								if (!func_170())
								{
									func_161(&uLocal_54, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
									unk_0xAF625598EDA64AD3(iLocal_289[1], unk_0x81873881071CD9FE(), -1, 2096, 4);
									iLocal_279 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), (*uParam10)[1], 10f, 10f, 10f, 0, 1, 0))
				{
					if (!iLocal_279)
					{
						if (!func_170())
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
							unk_0xAF625598EDA64AD3(iLocal_289[1], unk_0x81873881071CD9FE(), -1, 2096, 4);
							iLocal_279 = 1;
						}
					}
				}
			}
			if (iLocal_279 || iLocal_280)
			{
				if (unk_0xA04824262F150982(unk_0x81873881071CD9FE()) < 0.2f)
				{
					if (iLocal_229 == -1)
					{
						iLocal_229 = unk_0x48E480685981C7D4();
					}
				}
				else
				{
					iLocal_229 = -1;
				}
				if (iLocal_229 != -1 && unk_0x48E480685981C7D4() > iLocal_229 + 10000)
				{
					func_159();
					unk_0x4EDE34FBADD967A6(0);
					func_161(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					if (!unk_0x5FEB513A4402FD59(iLocal_289[0]))
					{
						unk_0x754376E2234CBB4A(iLocal_289[0], unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
						unk_0x6CB332CB31E9FA96(iLocal_289[0], 1);
						unk_0x4EDE34FBADD967A6(0);
						unk_0x71A8BCA218722FA1(&(iLocal_289[0]));
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_289[1]))
					{
						unk_0x754376E2234CBB4A(iLocal_289[1], unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
						unk_0x6CB332CB31E9FA96(iLocal_289[1], 1);
						unk_0x4EDE34FBADD967A6(0);
						unk_0x71A8BCA218722FA1(&(iLocal_289[1]));
					}
					*iParam11 = 0;
					*iParam0 = 20;
				}
			}
			func_64(uParam10, 120f);
			if (func_66())
			{
				*iParam0 = 18;
			}
			if (((unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0) || unk_0x73B48A5F8A9477E7(unk_0x81873881071CD9FE())) || unk_0x8F0DA78DFE28D60F(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f))) || unk_0x57E9C5666B081646(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x5FEB513A4402FD59((*uParam10)[0]) && !unk_0x5FEB513A4402FD59((*uParam10)[1]))
				{
					unk_0x754376E2234CBB4A((*uParam10)[0], unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
					unk_0x754376E2234CBB4A((*uParam10)[1], unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
					func_159();
					unk_0x4EDE34FBADD967A6(0);
					func_161(&uLocal_54, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 6:
			*iParam0 = 7;
			break;
		
		case 7:
			*iParam11 = 0;
			if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
			{
				if (!func_63(uParam10, unk_0x2ADE2CEED2637E95(), 120f) || !bLocal_275)
				{
					if (!unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_272, 2f, 2f, 2f, 0, 1, 0))
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_289[0]) && !unk_0x5FEB513A4402FD59(iLocal_289[1]))
						{
							if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
							{
								if (func_118() && unk_0x653781B2157A929D(unk_0x2ADE2CEED2637E95()))
								{
									unk_0xEE7F8F35078C057B(unk_0x14B7103DBD149FFE(unk_0x2ADE2CEED2637E95()), 3);
									while (!unk_0x518D7D5175AEE673(unk_0x14B7103DBD149FFE(unk_0x2ADE2CEED2637E95())))
									{
										unk_0x4EDE34FBADD967A6(0);
									}
									if (!unk_0x5FEB513A4402FD59(iLocal_289[0]) && !unk_0x5FEB513A4402FD59(iLocal_289[1]))
									{
										if (!unk_0xCD67A1A6022640ED(iLocal_289[0]) && !unk_0xCD67A1A6022640ED(iLocal_289[1]))
										{
											unk_0x27CC98B7C879C320(iLocal_289[0]);
											unk_0x27CC98B7C879C320(iLocal_289[1]);
											unk_0xAF625598EDA64AD3(iLocal_289[1], unk_0x81873881071CD9FE(), 10000, 2052, 4);
											unk_0xABED360AB1F46D3D(iLocal_289[0], func_65());
											unk_0xABED360AB1F46D3D(iLocal_289[1], func_65());
											unk_0x2DA3CE5ACB2F30AC(iLocal_289[0], 1);
											unk_0x2DA3CE5ACB2F30AC(iLocal_289[1], 0);
											if (unk_0x14B7103DBD149FFE(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE())) == joaat("bus"))
											{
												if (!unk_0xBEB00EB4ADDC2A33(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 1))
												{
													uVar63 = unk_0xB0B9E53CEFDB16AA(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 1);
													if (!unk_0xE86442941AE40E75(uVar63))
													{
														unk_0xD768713E73165208(uVar63, 1, 0);
														unk_0xF210D34D7F7152ED(&uVar63);
													}
												}
												if (!unk_0xBEB00EB4ADDC2A33(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 0))
												{
													uVar63 = unk_0xB0B9E53CEFDB16AA(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 0);
													if (!unk_0xE86442941AE40E75(uVar63))
													{
														unk_0xD768713E73165208(uVar63, 1, 0);
														unk_0xF210D34D7F7152ED(&uVar63);
													}
												}
											}
											unk_0x64ACA71A49AA111C(iLocal_289[0], 1);
											unk_0x64ACA71A49AA111C(iLocal_289[1], 1);
										}
									}
								}
								else if (!iLocal_279)
								{
									if (!func_170())
									{
										func_161(&uLocal_54, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
										iLocal_279 = 1;
									}
								}
							}
							else if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), (*uParam10)[1], 10f, 10f, 10f, 0, 1, 0))
							{
								if (!iLocal_279)
								{
									if (!func_170())
									{
										func_161(&uLocal_54, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
										iLocal_279 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (!unk_0x5FEB513A4402FD59(iLocal_289[0]))
			{
				if (!unk_0xCD67A1A6022640ED(iLocal_289[0]))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_288))
					{
						if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
						{
							if ((unk_0xFA1212DE7C455679(iLocal_289[0], 242628503) != 1 && unk_0xFA1212DE7C455679(iLocal_289[0], 242628503) != 0) || unk_0xFA1212DE7C455679(iLocal_289[0], 242628503) == 7)
							{
								unk_0xABED360AB1F46D3D(iLocal_289[0], func_65());
								unk_0x64ACA71A49AA111C(iLocal_289[0], 1);
							}
						}
					}
					else
					{
						unk_0xABED360AB1F46D3D(iLocal_289[0], func_65());
						unk_0x64ACA71A49AA111C(iLocal_289[0], 1);
					}
				}
				else
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if ((!unk_0x463E18F5BBDEA9C4(iLocal_289[0]) && !unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_272, 2f, 2f, 2f, 0, 1, 0)) && !unk_0x515B65C19A5CA9B1(iLocal_289[0], unk_0xB6AE0DAE06D56288(unk_0x2ADE2CEED2637E95(), 1), 2.5f, 2.5f, 2.5f, 0, 1, 0))
						{
							unk_0x3776159AF6933ED3(iLocal_289[0], 2f);
						}
					}
					if (unk_0xFA1212DE7C455679(iLocal_289[0], -875674219) == 1 || unk_0xFA1212DE7C455679(iLocal_289[0], -875674219) == 0)
					{
					}
				}
			}
			if (!unk_0x5FEB513A4402FD59(iLocal_289[1]))
			{
				if (!unk_0xCD67A1A6022640ED(iLocal_289[1]))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_288))
					{
						if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
						{
							if ((unk_0xFA1212DE7C455679(iLocal_289[1], 242628503) != 1 && unk_0xFA1212DE7C455679(iLocal_289[1], 242628503) != 0) || unk_0xFA1212DE7C455679(iLocal_289[1], 242628503) == 7)
							{
								unk_0xABED360AB1F46D3D(iLocal_289[1], func_65());
								unk_0x64ACA71A49AA111C(iLocal_289[1], 1);
							}
						}
					}
					else
					{
						unk_0xABED360AB1F46D3D(iLocal_289[1], func_65());
						unk_0x64ACA71A49AA111C(iLocal_289[1], 1);
					}
				}
				else
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if ((!unk_0x463E18F5BBDEA9C4(iLocal_289[1]) && !unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_272, 2f, 2f, 2f, 0, 1, 0)) && !unk_0x515B65C19A5CA9B1(iLocal_289[1], unk_0xB6AE0DAE06D56288(unk_0x2ADE2CEED2637E95(), 1), 2.5f, 2.5f, 2.5f, 0, 1, 0))
						{
							unk_0x3776159AF6933ED3(iLocal_289[1], 2f);
						}
					}
					if (unk_0xFA1212DE7C455679(iLocal_289[1], -875674219) == 1 || unk_0xFA1212DE7C455679(iLocal_289[1], -875674219) == 0)
					{
					}
				}
			}
			if (!bLocal_275)
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					if ((!unk_0x930F8FBB8E9537CC(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) && !unk_0x5FEB513A4402FD59(iLocal_289[0])) && !unk_0x5FEB513A4402FD59(iLocal_289[1]))
					{
						if ((unk_0x04C377C10639B842(iLocal_289[0], unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0) && !unk_0x04C377C10639B842(iLocal_289[1], unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0)) && !unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_289[1], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_275 = true;
						}
						if ((unk_0x04C377C10639B842(iLocal_289[1], unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0) && !unk_0x04C377C10639B842(iLocal_289[0], unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0)) && !unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_289[0], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_275 = true;
						}
					}
				}
			}
			if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
			{
				if (func_63(uParam10, unk_0x2ADE2CEED2637E95(), 120f) || bLocal_275)
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_288))
					{
						unk_0xEAD984C2869B8B7C(&iLocal_308);
						unk_0x31C1393E4ACFD794(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
						unk_0x56D9ED1541046AF6(iLocal_308);
						unk_0xC65002CAA1212AF9(iLocal_288, iLocal_308);
						unk_0xA3561415EB3DA3A3(&iLocal_308);
						unk_0x6CB332CB31E9FA96(iLocal_288, 1);
						unk_0x71A8BCA218722FA1(&iLocal_288);
					}
					func_62();
					if (!unk_0x547A2AA158CA2804(7.3162f, -1544.838f, 28.2558f, 3f))
					{
						iLocal_306 = unk_0xE00F8DEA9778FC87(joaat("police3"), 7.3162f, -1544.838f, 28.2558f, 251.9956f, 1, 1);
						uLocal_302[0] = unk_0x4D135F3066A9BF9C(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						uLocal_302[1] = unk_0x4D135F3066A9BF9C(iLocal_306, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						unk_0x8E4A427F5C43E416(uLocal_302[0], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x8E4A427F5C43E416(uLocal_302[1], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x632435B4905EF92E(uLocal_302[0], 0);
					}
					if (!unk_0x547A2AA158CA2804(91.6602f, -1541.899f, 28.3422f, 3f))
					{
						iLocal_306 = unk_0xE00F8DEA9778FC87(joaat("police3"), 91.6602f, -1541.899f, 28.3422f, 127.3064f, 1, 1);
						uLocal_302[0] = unk_0x4D135F3066A9BF9C(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						uLocal_302[1] = unk_0x4D135F3066A9BF9C(iLocal_306, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						unk_0x8E4A427F5C43E416(uLocal_302[0], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x8E4A427F5C43E416(uLocal_302[1], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x632435B4905EF92E(uLocal_302[0], 0);
					}
					if (!unk_0x547A2AA158CA2804(32.8029f, -1594.4f, 28.4262f, 3f))
					{
						iLocal_306 = unk_0xE00F8DEA9778FC87(joaat("police3"), 32.8029f, -1594.4f, 28.4262f, 337.7429f, 1, 1);
						uLocal_302[0] = unk_0x4D135F3066A9BF9C(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						uLocal_302[1] = unk_0x4D135F3066A9BF9C(iLocal_306, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						unk_0x8E4A427F5C43E416(uLocal_302[0], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x8E4A427F5C43E416(uLocal_302[1], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x632435B4905EF92E(uLocal_302[0], 0);
					}
					unk_0x82608A776F2B66C4("SCRIPTED_SCANNER_REPORT_GETAWAY_01", 0f);
					unk_0x0175D90DBB1149FA(unk_0x2ADE2CEED2637E95(), 1);
					unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 2, 0);
					unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
					unk_0xE453EF46E6CA8CB3(unk_0x1329891157A54C63(), 0f);
					unk_0xF8E77F310A5B6EAB(5, joaat("COP"), iLocal_309);
					unk_0xF8E77F310A5B6EAB(5, iLocal_309, joaat("COP"));
					unk_0x4EDE34FBADD967A6(1000);
					if (!bLocal_275)
					{
						func_161(&uLocal_54, "REGETAU", "REAWA_COPS2", 4, 0, 0, 0);
					}
					if (!unk_0x5FEB513A4402FD59((*uParam10)[iVar48]))
					{
						unk_0xD24EA1F9FB501BB5((*uParam10)[iVar48]);
					}
					iLocal_223 = unk_0x48E480685981C7D4();
					*iParam0 = 8;
				}
			}
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 95.0746f, -1520.042f, 28.3593f, -5.9698f, -1641.819f, 38.4042f, 98.1875f, 0, 1, 0))
			{
				if (!unk_0x5FEB513A4402FD59((*uParam10)[0]) && !unk_0x5FEB513A4402FD59((*uParam10)[1]))
				{
					unk_0x754376E2234CBB4A((*uParam10)[0], unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
					unk_0x754376E2234CBB4A((*uParam10)[1], unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
					func_159();
					unk_0x4EDE34FBADD967A6(0);
					func_161(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			func_64(uParam10, 120f);
			func_61();
			if (func_66())
			{
				*iParam0 = 18;
			}
			break;
		
		case 8:
			func_60(uLocal_52);
			if (func_117(iLocal_223, 3000))
			{
				*iParam0 = 9;
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			break;
		
		case 9:
			func_59(uParam10);
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
			{
				unk_0xF8E77F310A5B6EAB(1, joaat("COP"), iLocal_309);
				unk_0xF8E77F310A5B6EAB(1, iLocal_309, joaat("COP"));
				if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
				{
					unk_0x0175D90DBB1149FA(unk_0x2ADE2CEED2637E95(), 0);
				}
				if (!unk_0x930F8FBB8E9537CC(iLocal_306))
				{
					unk_0xE0913C01F5C0CC3D(&iLocal_306);
				}
				if (!unk_0x5FEB513A4402FD59(uLocal_302[0]))
				{
					unk_0x71A8BCA218722FA1(&(uLocal_302[0]));
				}
				if (!unk_0x5FEB513A4402FD59(uLocal_302[1]))
				{
					unk_0x71A8BCA218722FA1(&(uLocal_302[1]));
				}
				func_60(uLocal_52);
				*iParam0 = 10;
			}
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()) && !unk_0x5FEB513A4402FD59((*uParam10)[iVar48]))
				{
					if (!unk_0x58A69336FE7307D8((*uParam10)[iVar48], unk_0x2ADE2CEED2637E95()))
					{
						if (!unk_0xFBACB273AA628CC5(uLocal_284[iVar48]))
						{
							uLocal_284[iVar48] = func_57((*uParam10)[iVar48], 0, 145);
							func_60(uLocal_52);
						}
					}
				}
				iVar48++;
			}
			func_64(uParam10, 120f);
			func_61();
			if (func_55())
			{
				*iParam0 = 12;
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			break;
		
		case 10:
			if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
			{
				unk_0xF8E77F310A5B6EAB(5, joaat("COP"), iLocal_309);
				unk_0xF8E77F310A5B6EAB(5, iLocal_309, joaat("COP"));
				func_60(uLocal_52);
				*iParam0 = 8;
			}
			else
			{
				unk_0xF8E77F310A5B6EAB(1, joaat("COP"), iLocal_309);
				unk_0xF8E77F310A5B6EAB(1, iLocal_309, joaat("COP"));
				Var49 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
				fVar31 = 9999f;
				iVar64 = 0;
				while (iVar64 < Var15.f_0)
				{
					if (unk_0x2A488C176D52CCA5(Var49, Var15[iVar64 /*3*/]) < fVar31)
					{
						fVar31 = unk_0x2A488C176D52CCA5(Var49, Var15[iVar64 /*3*/]);
						iLocal_222 = iVar64;
					}
					iVar64++;
				}
				if (func_54(Var15[iLocal_222 /*3*/], 0f, 0f, 0f, 0))
				{
					iLocal_222 = 0;
				}
				uLocal_52 = func_52(Var15[iLocal_222 /*3*/], 1);
				if (func_105() == 2 && !func_51())
				{
					if (!unk_0xFBACB273AA628CC5(uLocal_287))
					{
						uLocal_287 = func_52(Local_269, 0);
						unk_0x8F827BB0F6ED7AA8(uLocal_287, 269);
						func_49();
					}
				}
				iLocal_223 = unk_0x48E480685981C7D4();
				if (!iLocal_221)
				{
					func_159();
					unk_0x4EDE34FBADD967A6(0);
					func_161(&uLocal_54, "REGETAU", "REAWA_HOM", 4, 0, 0, 0);
					iLocal_221 = 1;
				}
				*iParam0 = 11;
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			break;
		
		case 11:
			*iParam11 = 0;
			func_48(uParam10);
			if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
			{
				func_60(uLocal_52);
				*iParam0 = 8;
			}
			else
			{
				if (func_47(Var15[iLocal_222 /*3*/]))
				{
					func_161(&uLocal_54, "REGETAU", "REAWA_CULT", 4, 0, 0, 0);
				}
				if (func_45())
				{
					func_159();
					unk_0x4EDE34FBADD967A6(0);
					if (func_44())
					{
						func_161(&uLocal_54, "REGETAU", "REAWA_CULT2", 4, 0, 0, 0);
					}
					else
					{
						func_161(&uLocal_54, "REGETAU", "REAWA_CULT3", 4, 0, 0, 0);
					}
				}
				if (!unk_0x5FEB513A4402FD59(iLocal_289[0]) && !unk_0x5FEB513A4402FD59(iLocal_289[1]))
				{
					if ((unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Var15[iLocal_222 /*3*/], Global_19, 1, 1, 0) && unk_0x515B65C19A5CA9B1(iLocal_289[0], Var15[iLocal_222 /*3*/], 20f, 20f, 20f, 0, 1, 0)) && unk_0x515B65C19A5CA9B1(iLocal_289[1], Var15[iLocal_222 /*3*/], 20f, 20f, 20f, 0, 1, 0))
					{
						func_60(uLocal_52);
						iVar48 = 0;
						while (iVar48 <= (*uParam10 - 1))
						{
							if (iLocal_219)
							{
								unk_0xE4DF2496E641851E(unk_0x2ADE2CEED2637E95(), 10.5f, 2, 0);
								unk_0x4EDE34FBADD967A6(1000);
								iLocal_219 = 0;
							}
							if (!unk_0x5FEB513A4402FD59((*uParam10)[iVar48]))
							{
								unk_0xD24EA1F9FB501BB5((*uParam10)[iVar48]);
								unk_0x6EC15FE0ADD3E99C((*uParam10)[iVar48]);
								unk_0x9E307B670BC445AF(uLocal_232);
							}
							iVar48++;
						}
						*iParam0 = 13;
					}
				}
			}
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()) && !unk_0x5FEB513A4402FD59((*uParam10)[iVar48]))
				{
					if (!unk_0x58A69336FE7307D8((*uParam10)[iVar48], unk_0x2ADE2CEED2637E95()))
					{
						if (!unk_0xFBACB273AA628CC5(uLocal_284[iVar48]))
						{
							uLocal_284[iVar48] = func_57((*uParam10)[iVar48], 0, 145);
						}
					}
				}
				iVar48++;
			}
			func_64(uParam10, 120f);
			func_61();
			if (unk_0xA04824262F150982(unk_0x81873881071CD9FE()) < 0.2f)
			{
				if (iLocal_229 == -1)
				{
					iLocal_229 = unk_0x48E480685981C7D4();
				}
			}
			else
			{
				iLocal_229 = -1;
			}
			if (iLocal_229 != -1 && unk_0x48E480685981C7D4() > (iLocal_229 + 60000))
			{
				func_159();
				unk_0x4EDE34FBADD967A6(0);
				func_161(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
				if (!unk_0x5FEB513A4402FD59(iLocal_289[0]))
				{
					unk_0x754376E2234CBB4A(iLocal_289[0], unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
					unk_0x6CB332CB31E9FA96(iLocal_289[0], 1);
				}
				if (!unk_0x5FEB513A4402FD59(iLocal_289[1]))
				{
					unk_0x754376E2234CBB4A(iLocal_289[1], unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
					unk_0x6CB332CB31E9FA96(iLocal_289[1], 1);
				}
				*iParam11 = 0;
				*iParam0 = 20;
			}
			if (func_55())
			{
				*iParam0 = 12;
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			break;
		
		case 12:
			func_157();
			if (bLocal_277)
			{
				unk_0x6EC15FE0ADD3E99C(iLocal_289[0]);
				unk_0x6EC15FE0ADD3E99C(iLocal_289[1]);
				unk_0x49F00D2F32CBC5B5(unk_0x1329891157A54C63());
				func_159();
				unk_0x4EDE34FBADD967A6(0);
				func_161(&uLocal_54, "REGETAU", "REAWA_COPS3", 4, 0, 0, 0);
				if (!unk_0x5FEB513A4402FD59((*uParam10)[0]))
				{
					unk_0xEAD984C2869B8B7C(&iLocal_308);
					unk_0x98046F3D16B9CF76(0, 0, 4194304);
					unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
					unk_0x56D9ED1541046AF6(iLocal_308);
					unk_0xC65002CAA1212AF9((*uParam10)[0], iLocal_308);
					unk_0xA3561415EB3DA3A3(&iLocal_308);
					unk_0x6CB332CB31E9FA96((*uParam10)[0], 1);
				}
				if (!unk_0x5FEB513A4402FD59((*uParam10)[1]))
				{
					unk_0xEAD984C2869B8B7C(&iLocal_308);
					unk_0x98046F3D16B9CF76(0, 500, 4194304);
					unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
					unk_0x56D9ED1541046AF6(iLocal_308);
					unk_0xC65002CAA1212AF9((*uParam10)[1], iLocal_308);
					unk_0xA3561415EB3DA3A3(&iLocal_308);
					unk_0x6CB332CB31E9FA96((*uParam10)[1], 1);
				}
				*iParam0 = 20;
			}
			break;
		
		case 13:
			if (unk_0xA04824262F150982(unk_0x81873881071CD9FE()) < 5f)
			{
				iVar48 = 0;
				while (iVar48 <= (*uParam10 - 1))
				{
					if (!unk_0x5FEB513A4402FD59((*uParam10)[iVar48]))
					{
						if (unk_0xFA1212DE7C455679((*uParam10)[iVar48], 242628503) != 1 || unk_0xFA1212DE7C455679((*uParam10)[iVar48], 242628503) != 0)
						{
							if (!unk_0x5FEB513A4402FD59((*uParam10)[iVar48]))
							{
								iVar0 = 0;
								iLocal_227 = iVar48;
							}
						}
					}
					iVar48++;
				}
				*iParam0 = 14;
			}
			break;
		
		case 14:
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!unk_0x5FEB513A4402FD59((*uParam10)[0]))
				{
					unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), (*uParam10)[iVar48], 4000, 2048, 2);
					unk_0xEAD984C2869B8B7C(&iVar0);
					unk_0x98046F3D16B9CF76(0, 0, 4194816);
					unk_0xD91194CE3D1E1D77(0, Var32[iLocal_222 /*3*/], 2f, -1, 1048576000, 0, 1193033728);
					unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
					unk_0x56D9ED1541046AF6(iVar0);
					unk_0xC65002CAA1212AF9((*uParam10)[0], iVar0);
					unk_0xA3561415EB3DA3A3(&iVar0);
					if (!unk_0x5FEB513A4402FD59((*uParam10)[1]))
					{
						unk_0xEAD984C2869B8B7C(&iVar0);
						unk_0x98046F3D16B9CF76(0, 2000, 4194816);
						unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 3000, 2052, 2);
						unk_0xD91194CE3D1E1D77(0, Var32[iLocal_222 /*3*/], 2f, -1, 1048576000, 0, 1193033728);
						unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
						unk_0x56D9ED1541046AF6(iVar0);
						unk_0xC65002CAA1212AF9((*uParam10)[1], iVar0);
						unk_0xA3561415EB3DA3A3(&iVar0);
					}
					iVar0 = 0;
					unk_0x6CB332CB31E9FA96((*uParam10)[iVar48], 1);
					unk_0xAF625598EDA64AD3((*uParam10)[iVar48], unk_0x81873881071CD9FE(), 4000, 2052, 2);
					func_159();
					unk_0x4EDE34FBADD967A6(0);
					if (iLocal_227 > 0)
					{
						func_161(&uLocal_54, "REGETAU", "REAWA_STOP2", 4, 0, 0, 0);
					}
					else
					{
						func_161(&uLocal_54, "REGETAU", "REAWA_STOP", 4, 0, 0, 0);
					}
					*iParam0 = 15;
				}
				iVar48++;
			}
			break;
		
		case 15:
			if (!*bParam12)
			{
				if (!unk_0x5FEB513A4402FD59((*uParam10)[1]))
				{
					if (!iLocal_219)
					{
						unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
						iLocal_219 = 1;
					}
					func_17(func_105(), 1, 1000, 0, 1);
					*bParam12 = 1;
				}
			}
			else if (!unk_0x5FEB513A4402FD59((*uParam10)[0]) && !unk_0x5FEB513A4402FD59((*uParam10)[1]))
			{
				if (!unk_0xE5AB05962FA1FF3F((*uParam10)[0], 0) && !unk_0xE5AB05962FA1FF3F((*uParam10)[1], 0))
				{
					unk_0xD1C83BD797927DD5();
					unk_0xF64D185C5B88AF31(unk_0x81873881071CD9FE());
					while (!func_189())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					func_3(10, 0);
					if (func_2(77))
					{
						func_185(9, 0);
					}
					func_156(6);
					func_175(-1, 0);
					func_172();
					*iParam0 = 20;
				}
			}
			break;
		
		case 16:
			*bParam12 = 1;
			*iParam0 = 20;
			break;
		
		case 17:
			break;
		
		case 18:
			iLocal_282 = 1;
			unk_0xF8E77F310A5B6EAB(5, iLocal_309, joaat("player"));
			unk_0xF8E77F310A5B6EAB(1, iLocal_309, iLocal_309);
			unk_0x49F00D2F32CBC5B5(unk_0x1329891157A54C63());
			unk_0x5B6D37392F5991C3(0f);
			unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
			iVar65 = 0;
			while (iVar65 < iLocal_289)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_289[iVar65]))
				{
					if (unk_0xFBACB273AA628CC5(uLocal_284[iVar65]))
					{
						unk_0x0A8175F24237A3D4(&(uLocal_284[iVar65]));
						if (unk_0xE5AB05962FA1FF3F(iLocal_289[iVar65], 0))
						{
							unk_0x98046F3D16B9CF76(iLocal_289[iVar65], 0, 0);
						}
						if (unk_0xFBACB273AA628CC5(uLocal_52))
						{
							unk_0x0A8175F24237A3D4(&uLocal_52);
						}
						unk_0x6EC15FE0ADD3E99C(iLocal_289[iVar65]);
						unk_0x633A554EB6BC4E71(iLocal_289[iVar65], unk_0x81873881071CD9FE(), 0, 16);
						unk_0x6CB332CB31E9FA96(iLocal_289[iVar65], 1);
					}
				}
				iVar65++;
			}
			func_159();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x5FEB513A4402FD59(iLocal_289[1]))
			{
				func_161(&uLocal_54, "REGETAU", "REAWA_ATTP", 4, 0, 0, 0);
			}
			else if (!unk_0x5FEB513A4402FD59(iLocal_289[0]))
			{
				func_161(&uLocal_54, "REGETAU", "REAWA_ATTB", 4, 0, 0, 0);
			}
			if (!bLocal_278)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_288))
				{
					unk_0x33B1E568CEF14B0D(iLocal_288, 0);
					unk_0x31C1393E4ACFD794(iLocal_288, "random@getawaydriver", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
				}
			}
			iVar65 = 0;
			while (iVar65 < iLocal_292)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_292[iVar65]))
				{
					unk_0x754376E2234CBB4A(iLocal_292[iVar65], unk_0x81873881071CD9FE(), 150f, -1, 0, 0);
					unk_0x6CB332CB31E9FA96(iLocal_292[iVar65], 1);
				}
				iVar65++;
			}
			*iParam0 = 19;
			break;
		
		case 19:
			unk_0xF8E77F310A5B6EAB(5, iLocal_309, joaat("player"));
			iVar65 = 0;
			while (iVar65 < iLocal_289)
			{
				if (unk_0x5FEB513A4402FD59(iLocal_289[iVar65]))
				{
					if (unk_0xFBACB273AA628CC5(uLocal_284[iVar65]))
					{
						unk_0x0A8175F24237A3D4(&(uLocal_284[iVar65]));
					}
				}
				if (!unk_0x5FEB513A4402FD59(iLocal_289[iVar65]))
				{
					if (!unk_0xFBACB273AA628CC5(uLocal_284[iVar65]))
					{
						uLocal_284[iVar65] = func_57(iLocal_289[iVar65], 1, 145);
					}
					if (unk_0xCD67A1A6022640ED(iLocal_289[iVar65]))
					{
						unk_0x6EC15FE0ADD3E99C(iLocal_289[iVar65]);
					}
					if (unk_0xE5AB05962FA1FF3F(iLocal_289[iVar65], 0))
					{
						unk_0x98046F3D16B9CF76(iLocal_289[iVar65], 0, 0);
						unk_0x633A554EB6BC4E71(iLocal_289[iVar65], unk_0x81873881071CD9FE(), 0, 16);
						unk_0x6CB332CB31E9FA96(iLocal_289[iVar65], 1);
					}
					else
					{
						unk_0x633A554EB6BC4E71(iLocal_289[iVar65], unk_0x81873881071CD9FE(), 0, 16);
						unk_0x6CB332CB31E9FA96(iLocal_289[iVar65], 1);
					}
				}
				iVar65++;
			}
			if (unk_0xFBACB273AA628CC5(uLocal_52))
			{
				unk_0x0A8175F24237A3D4(&uLocal_52);
			}
			break;
		
		case 20:
			if (!func_170())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_98931.f_7699.f_330[iParam0 /*6*/];
}

void func_3(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1.f_116), iParam0);
	switch (iParam0)
	{
		case 10:
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1.f_119), 14);
			break;
		
		case 13:
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1.f_119), 16);
			break;
		
		case 12:
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1.f_119), 15);
			break;
		
		case 11:
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1.f_119), 17);
			break;
	}
	if (!bParam1)
	{
		iVar0 = 0;
		switch (func_16(iParam0))
		{
			case 1:
				iVar0 = 6;
				break;
			
			case 3:
				iVar0 = 4;
				break;
			
			case 2:
				iVar0 = 5;
				break;
		}
		uVar1 = func_14(iParam0);
		unk_0x02A6B267064771B1("FEED_CREW_U");
		unk_0x072D7B028D6C7A05(func_14(iParam0));
		unk_0xDFBE4FFEF7FC22F3(uVar1, uVar1, 0, iVar0, "", 0);
		if (!func_13(45))
		{
			func_4("AM_H_CREWU", 2, 0, 20000, 10000, func_7(), 0, 131, 0);
		}
	}
}

void func_4(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_5(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_5(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD994929E13CC1ED5(sParam0, ""))
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
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_98931.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_8 = (unk_0x48E480685981C7D4() + iParam3);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = ((unk_0x48E480685981C7D4() + iParam3) + iParam4);
		}
		else
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_98931.f_24859.f_145++;
		func_6();
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_98931.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[0])
			{
				Global_98931.f_24859.f_146[0] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[1])
			{
				Global_98931.f_24859.f_146[1] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[2])
			{
				Global_98931.f_24859.f_146[2] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_7()
{
	func_8();
	switch (Global_98931.f_1750.f_539.f_3549)
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

void func_8()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_12(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_11(unk_0x81873881071CD9FE());
			if (func_10(iVar0) && (!func_9(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_10(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_9(int iParam0)
{
	return Global_35443 == iParam0;
}

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_13(int iParam0)
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
		return unk_0x236D8AD7EE179F46(Global_98931.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

var func_14(int iParam0)
{
	return func_15(iParam0);
}

char* func_15(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

int func_16(int iParam0)
{
	return Global_87017[iParam0 /*5*/];
}

void func_17(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_18(Global_98931.f_32499[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x85C45034BA638694(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x123B783056E76C4E(iVar1, iVar0, 1);
	}
}

int func_18(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_43();
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
					func_42(99, 1);
					func_41(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_41(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_41(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_26(0);
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
							func_41(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_41(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_41(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA60A6B4935A3E9A7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_41(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_42(95, iParam3);
					break;
				
				case 1:
					func_42(97, iParam3);
					break;
				
				case 2:
					func_42(96, iParam3);
					break;
			}
			func_42(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_21(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_21(iVar1);
	}
	iVar5 = (Global_52577[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52577[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52577[iVar2] = 2147483647;
				}
				else
				{
					Global_52577[iVar2] = (Global_52577[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_41(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_41(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_41(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52577[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52577[iVar2];
			Global_52577[iVar2] = (Global_52577[iVar2] - iParam3);
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
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_98931.f_25013.f_233[iVar2 /*69*/]++;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_20(iParam0);
	if (Global_35443 == 15)
	{
		func_19(0);
	}
	return 1;
}

void func_19(bool bParam0)
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
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52585[iVar0 /*3*/][0] = Global_98931.f_25013[iVar0];
		Global_52585.f_31[iVar0 /*3*/][0] = Global_98931.f_25013.f_11[iVar0];
		Global_52585.f_62[iVar0 /*3*/][0] = Global_98931.f_25013.f_22[iVar0];
		Global_52585.f_93[iVar0 /*3*/][0] = Global_98931.f_25013.f_33[iVar0];
		Global_52585.f_124[iVar0 /*3*/][0] = Global_98931.f_25013.f_44[iVar0];
		Global_52585.f_155[iVar0 /*3*/][0] = Global_98931.f_25013.f_55[iVar0];
		Global_52585.f_186[iVar0 /*3*/][0] = Global_98931.f_25013.f_66[iVar0];
		Global_52585.f_217[iVar0 /*3*/][0] = Global_98931.f_25013.f_77[iVar0];
		Global_52585.f_248[iVar0 /*3*/][0] = Global_98931.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52585[iVar0 /*3*/][1] = Global_98931.f_25013[iVar0];
			Global_52585.f_31[iVar0 /*3*/][1] = Global_98931.f_25013.f_11[iVar0];
			Global_52585.f_62[iVar0 /*3*/][1] = Global_98931.f_25013.f_22[iVar0];
			Global_52585.f_93[iVar0 /*3*/][1] = Global_98931.f_25013.f_33[iVar0];
			Global_52585.f_124[iVar0 /*3*/][1] = Global_98931.f_25013.f_44[iVar0];
			Global_52585.f_155[iVar0 /*3*/][1] = Global_98931.f_25013.f_55[iVar0];
			Global_52585.f_186[iVar0 /*3*/][1] = Global_98931.f_25013.f_66[iVar0];
			Global_52585.f_217[iVar0 /*3*/][1] = Global_98931.f_25013.f_77[iVar0];
			Global_52585.f_248[iVar0 /*3*/][1] = Global_98931.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52577[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x123B783056E76C4E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x123B783056E76C4E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x123B783056E76C4E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_21(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0) || unk_0x236D8AD7EE179F46(Global_2097152[func_23() /*9662*/].f_7252.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		unk_0xC69E84EBBD7166E6(&(Global_2097152[func_23() /*9662*/].f_7252.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x02A6B267064771B1("COUP_RED");
		unk_0x072D7B028D6C7A05(func_22(iParam0));
		unk_0xDFBE4FFEF7FC22F3(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_22(int iParam0)
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

int func_23()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_24(int iParam0)
{
	func_42(93, iParam0);
	func_42(29, iParam0);
	func_42(30, iParam0);
}

bool func_25(int iParam0)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0);
	}
	return unk_0x236D8AD7EE179F46(Global_2097152[func_23() /*9662*/].f_7252.f_10, iParam0);
}

int func_26(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x8A933F79CD45968A(27))
	{
		return 0;
	}
	if (unk_0x85C45034BA638694(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x85C45034BA638694(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x123B783056E76C4E(joaat("num_cash_spent"), iVar1, 1);
		func_40(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_27(27, 1);
	return 1;
}

int func_27(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_28(iParam0, iParam1);
}

int func_28(int iParam0, int iParam1)
{
	if (func_9(14) && !func_39(iParam0))
	{
		return 0;
	}
	if (unk_0x8A933F79CD45968A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25192 != 0 && !Global_69020)
	{
		return 0;
	}
	if (func_38(&Global_2550589))
	{
		if (func_36(&Global_2550589, iParam0))
		{
			return 0;
		}
		if (func_29(&Global_2550589, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xCE7DBCA2772D9659(iParam0))
		{
			return 0;
		}
		if (unk_0x8A933F79CD45968A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_29(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_9(14) && !func_39(iParam1))
	{
		return 0;
	}
	if (func_36(uParam0, iParam1))
	{
		return 0;
	}
	if (func_35(uParam0) < 0f)
	{
		func_34(uParam0, 0);
	}
	func_32(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_30(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_30(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_9(14) && !func_39(iParam1))
	{
		return 0;
	}
	if (func_36(uParam0, iParam1))
	{
		return 0;
	}
	if (func_35(uParam0) < 0f)
	{
		func_34(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_31(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_31(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_32(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_33(uParam0, iVar0);
		iVar0++;
	}
	func_34(uParam0, (Global_2550588 - 0.5f));
}

void func_33(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_34(var uParam0, float fParam1)
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

float func_35(var uParam0)
{
	return uParam0->f_72;
}

bool func_36(var uParam0, int iParam1)
{
	return func_37(uParam0, iParam1) != -1;
}

int func_37(var uParam0, int iParam1)
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

bool func_38(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_39(int iParam0)
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

int func_40(int iParam0, int iParam1)
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
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x85C45034BA638694(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x123B783056E76C4E(iParam0, iVar0, 1);
}

void func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/])
	{
		unk_0x85C45034BA638694(Global_51145[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x123B783056E76C4E(Global_51145[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_43()
{
	int iVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		unk_0x85C45034BA638694(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52577[0] == iVar0)
		{
			Global_52577[0] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52577[1] == iVar0)
		{
			Global_52577[1] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52577[2] == iVar0)
		{
			Global_52577[2] = iVar0;
		}
	}
}

int func_44()
{
	if (unk_0x236D8AD7EE179F46(unk_0x2E0A9E3291F398E3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_45()
{
	if (func_105() == 2)
	{
		if (func_46())
		{
			if (unk_0x0D6E79537424BACE(-1014.154f, 4881.411f, 245.0001f, unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(unk_0xEC537F0C0E8265EE()), 0), 1) < 400f)
			{
				if (!Global_25185)
				{
					unk_0x80650551CC58C784("AC_EN_ROUTE_CULT");
					Global_25185 = 1;
					if (!Global_25184)
					{
						Global_25184 = 1;
						return 1;
					}
				}
			}
			else if (Global_25185)
			{
				unk_0x80650551CC58C784("AC_LEFT_AREA");
				Global_25185 = 0;
			}
		}
	}
	return 0;
}

bool func_46()
{
	return Global_25180;
}

int func_47(struct<3> Param0)
{
	if (func_105() == 2)
	{
		if (func_46() && !Global_25183)
		{
			if (fLocal_51 == -1f)
			{
				fLocal_51 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Param0) > (fLocal_51 + 200f) || unk_0x0D6E79537424BACE(-1014.154f, 4881.411f, 245.0001f, unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(unk_0xEC537F0C0E8265EE()), 0), 1) < 400f)
			{
				Global_25183 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_48(var uParam0)
{
	if (!unk_0x5FEB513A4402FD59((*uParam0)[0]) && !unk_0x5FEB513A4402FD59((*uParam0)[1]))
	{
		if (unk_0x8D28631AAAEFC957((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && unk_0x8D28631AAAEFC957((*uParam0)[0], unk_0x81873881071CD9FE(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_226)
			{
				case 0:
					iLocal_225 = unk_0x48E480685981C7D4();
					iLocal_226++;
					break;
				
				case 1:
					if (func_117(iLocal_225, 2000))
					{
						if (!func_170())
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_PITCH", 4, 0, 0, 0);
							iLocal_226++;
						}
					}
					break;
				
				case 2:
					if (!func_170())
					{
						if (func_105() == 0)
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_SUREM", 4, 0, 0, 0);
						}
						if (func_105() == 1)
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_SUREF", 4, 0, 0, 0);
						}
						if (func_105() == 2)
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_SURET", 4, 0, 0, 0);
						}
						iLocal_226++;
					}
					break;
				}
			}
	}
}

void func_49()
{
	if (func_105() == 2)
	{
		if (!Global_25182)
		{
			func_50("CULT_BLIP_HELP", -1);
			Global_25182 = 1;
		}
	}
}

void func_50(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

int func_51()
{
	if (Global_98931.f_29444.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

var func_52(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_53(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
	unk_0x116FDB7E27590C7F(uVar0, iParam3);
	return uVar0;
}

float func_53(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_54(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_55()
{
	if (func_56())
	{
		if (((((((unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_245, 50f, 50f, 50f, 0, 1, 0) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_248, 50f, 50f, 50f, 0, 1, 0)) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_251, 50f, 50f, 50f, 0, 1, 0)) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_254, 50f, 50f, 50f, 0, 1, 0)) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_257, 50f, 50f, 50f, 0, 1, 0)) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_260, 50f, 50f, 50f, 0, 1, 0)) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_263, 50f, 50f, 50f, 0, 1, 0)) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_266, 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0xA04824262F150982(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) < 0.2f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_56()
{
	int iVar0;
	
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x7404950238A154C2(iVar0, 0))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_289[0]) && !unk_0x5FEB513A4402FD59(iLocal_289[1]))
			{
				if (unk_0x04C377C10639B842(iLocal_289[0], iVar0, 0) && unk_0x04C377C10639B842(iLocal_289[1], iVar0, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_57(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_58(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(uVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_58(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_53(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(uVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_53(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_53(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_59(var uParam0)
{
	if (!unk_0x5FEB513A4402FD59((*uParam0)[0]) && !unk_0x5FEB513A4402FD59((*uParam0)[1]))
	{
		if (unk_0x8D28631AAAEFC957((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && unk_0x8D28631AAAEFC957((*uParam0)[0], unk_0x81873881071CD9FE(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_224)
			{
				case 0:
					iLocal_225 = unk_0x48E480685981C7D4();
					iLocal_224++;
					break;
				
				case 1:
					if (func_117(iLocal_225, 2000))
					{
						if (!func_170())
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_HOM2", 4, 0, 0, 0);
							iLocal_224++;
						}
					}
					break;
				
				case 2:
					if (!func_170())
					{
						if (func_105() == 0)
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_HOM4M", 4, 0, 0, 0);
						}
						if (func_105() == 1)
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_HOM4F", 4, 0, 0, 0);
						}
						if (func_105() == 2)
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_HOM4T", 4, 0, 0, 0);
						}
						iLocal_224++;
					}
					break;
				}
			}
	}
}

void func_60(var uParam0)
{
	if (unk_0xFBACB273AA628CC5(uParam0))
	{
		unk_0x0A8175F24237A3D4(&uParam0);
	}
}

void func_61()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < iLocal_289)
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_289[iVar0]))
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
			{
				if (!func_118())
				{
					unk_0x1D15D99A10A15334(iLocal_289[iVar0], 1);
					if (unk_0xCD67A1A6022640ED(iLocal_289[iVar0]))
					{
						unk_0x6EC15FE0ADD3E99C(iLocal_289[iVar0]);
					}
					if (unk_0xFA1212DE7C455679(iLocal_289[iVar0], 1227113341) != 1 && unk_0xFA1212DE7C455679(iLocal_289[iVar0], 1227113341) != 0)
					{
						unk_0x65C82688BA49CA39(iLocal_289[iVar0], unk_0x81873881071CD9FE(), -1, 6f, 2f, 1073741824, 0);
					}
					if (unk_0xE5AB05962FA1FF3F(iLocal_289[iVar0], 0))
					{
						unk_0x98046F3D16B9CF76(iLocal_289[iVar0], 0, 0);
					}
					if (!iLocal_280)
					{
						if (!func_170())
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
							iLocal_280 = 1;
						}
					}
				}
				else
				{
					iLocal_280 = 0;
					unk_0x1D15D99A10A15334(iLocal_289[iVar0], 0);
					if (unk_0xFA1212DE7C455679(iLocal_289[iVar0], 1227113341) == 1 && unk_0xFA1212DE7C455679(iLocal_289[iVar0], 1227113341) == 0)
					{
						unk_0x27CC98B7C879C320(iLocal_289[iVar0]);
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_289[0]) && !unk_0x5FEB513A4402FD59(iLocal_289[1]))
					{
						unk_0x2DA3CE5ACB2F30AC(iLocal_289[0], 1);
						unk_0x2DA3CE5ACB2F30AC(iLocal_289[1], 0);
						if (unk_0x14B7103DBD149FFE(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE())) == joaat("bus"))
						{
							if (!unk_0xBEB00EB4ADDC2A33(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 1))
							{
								uVar1 = unk_0xB0B9E53CEFDB16AA(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 1);
								if (!unk_0xE86442941AE40E75(uVar1))
								{
									unk_0xD768713E73165208(uVar1, 1, 0);
									unk_0xF210D34D7F7152ED(&uVar1);
								}
							}
							if (!unk_0xBEB00EB4ADDC2A33(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 0))
							{
								uVar2 = unk_0xB0B9E53CEFDB16AA(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 0);
								if (!unk_0xE86442941AE40E75(uVar2))
								{
									unk_0xD768713E73165208(uVar2, 1, 0);
									unk_0xF210D34D7F7152ED(&uVar2);
								}
							}
						}
					}
				}
			}
			else if (!unk_0xCD67A1A6022640ED(iLocal_289[iVar0]))
			{
				unk_0x27CC98B7C879C320(iLocal_289[iVar0]);
				unk_0xABED360AB1F46D3D(iLocal_289[iVar0], func_65());
				unk_0x64ACA71A49AA111C(iLocal_289[iVar0], 1);
				if (!unk_0x5FEB513A4402FD59(iLocal_289[0]) && !unk_0x5FEB513A4402FD59(iLocal_289[1]))
				{
					unk_0x2DA3CE5ACB2F30AC(iLocal_289[0], 1);
					unk_0x2DA3CE5ACB2F30AC(iLocal_289[1], 0);
				}
			}
		}
		iVar0++;
	}
}

void func_62()
{
	if (!func_51())
	{
		if (func_105() == 2)
		{
			Global_25180 = 1;
		}
	}
}

int func_63(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!unk_0x5FEB513A4402FD59((*uParam0)[iVar0]))
		{
			if (!unk_0x04C377C10639B842((*uParam0)[iVar0], iParam1, 0))
			{
				if (fParam2 > 0f)
				{
					if (unk_0x8D28631AAAEFC957((*uParam0)[iVar0], unk_0x81873881071CD9FE(), fParam2, fParam2, fParam2, 0, 1, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_64(var uParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x5FEB513A4402FD59((*uParam0)[iVar0]))
		{
			if (unk_0xFBACB273AA628CC5(uLocal_284[iVar0]))
			{
				unk_0x0A8175F24237A3D4(&(uLocal_284[iVar0]));
			}
		}
		else
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				if (unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
				{
					if (unk_0x04C377C10639B842((*uParam0)[iVar0], unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0) && unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
					{
						if (unk_0xFBACB273AA628CC5(uLocal_284[iVar0]))
						{
							unk_0x0A8175F24237A3D4(&(uLocal_284[iVar0]));
						}
					}
					else if (!unk_0xFBACB273AA628CC5(uLocal_284[iVar0]))
					{
						uLocal_284[iVar0] = func_57((*uParam0)[iVar0], 0, 145);
					}
				}
			}
			else if (!unk_0xFBACB273AA628CC5(uLocal_284[iVar0]))
			{
				uLocal_284[iVar0] = func_57((*uParam0)[iVar0], 0, 145);
			}
			if (!unk_0x8D28631AAAEFC957((*uParam0)[iVar0], unk_0x81873881071CD9FE(), fParam1, fParam1, fParam1, 0, 1, 0))
			{
				if (unk_0xFBACB273AA628CC5(uLocal_284[iVar0]))
				{
					unk_0x0A8175F24237A3D4(&(uLocal_284[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

var func_65()
{
	return unk_0xC80D3C64CC2CE6A3(unk_0xEC537F0C0E8265EE());
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_289)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_289[iVar0]))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_289[iVar0]))
			{
				if (!unk_0xCD67A1A6022640ED(iLocal_289[iVar0]))
				{
					if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
					{
						if (unk_0x246F0F22FE99F17E(iLocal_289[iVar0], unk_0x81873881071CD9FE()))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_289[0]) && !unk_0x5FEB513A4402FD59(iLocal_289[1]))
							{
								if (((unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_289[0]) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_289[0])) || unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_289[1])) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_289[1]))
								{
									if (iLocal_228 == -1)
									{
										iLocal_228 = unk_0x48E480685981C7D4();
									}
								}
								else
								{
									iLocal_228 = -1;
								}
							}
						}
					}
					if (!iLocal_283)
					{
						if (iLocal_228 != -1 && unk_0x48E480685981C7D4() > iLocal_228 + 1000)
						{
							func_159();
							unk_0x4EDE34FBADD967A6(0);
							func_161(&uLocal_54, "REGETAU", "REAWA_AIM", 4, 0, 0, 0);
							iLocal_283 = 1;
						}
					}
					if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
					{
						if (unk_0xBBEF8270CE27C0EE(iLocal_289[iVar0], unk_0x2ADE2CEED2637E95(), 1))
						{
							return 1;
						}
					}
					if ((unk_0xBBEF8270CE27C0EE(iLocal_289[iVar0], unk_0x81873881071CD9FE(), 1) && unk_0x4DC6EF945236C0F7(iLocal_289[iVar0]) < 190) || (iLocal_228 != -1 && unk_0x48E480685981C7D4() > iLocal_228 + 5000))
					{
						return 1;
					}
				}
			}
			else
			{
				if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
				{
					if (unk_0xBBEF8270CE27C0EE(iLocal_289[iVar0], unk_0x2ADE2CEED2637E95(), 1))
					{
						return 1;
					}
				}
				if (unk_0xBBEF8270CE27C0EE(iLocal_289[iVar0], unk_0x81873881071CD9FE(), 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_67(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!iLocal_220)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam0 - 1))
		{
			if (!unk_0x5FEB513A4402FD59((*uParam0)[iVar0]))
			{
				if ((unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 121.8366f, -1503.006f, 28.0999f, 0.1367f, -1649.705f, 48.1608f, 125.8125f, 0, 1, 0) && !unk_0x895C275673BCEAB0((*uParam0)[iVar0])) || unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, 1, 0))
				{
					if (!unk_0xFBACB273AA628CC5(uLocal_284[iVar0]))
					{
						if (!unk_0x5FEB513A4402FD59((*uParam0)[iVar0]))
						{
							if (!func_193())
							{
								func_92(1);
								func_91(1);
								if (!unk_0x930F8FBB8E9537CC(iLocal_307))
								{
									if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_307, 0) && !unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_307, 50f, 50f, 50f, 0, 1, 0))
									{
										func_70(iLocal_307, 0, 145);
									}
								}
							}
							uLocal_284[iVar0] = func_57((*uParam0)[iVar0], 0, 145);
							unk_0x3C8D013C840ADA0A(uLocal_284[iVar0], 0);
							func_60(uLocal_53);
						}
					}
					if (!func_170())
					{
						if (iLocal_231 < unk_0x48E480685981C7D4())
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_SHOUT", 4, 0, 0, 0);
							iLocal_231 = (unk_0x48E480685981C7D4() + unk_0x2E0A9E3291F398E3(3500, 4000));
						}
					}
					if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, 1, 0))
					{
						func_68();
						if (!unk_0x930F8FBB8E9537CC(iParam1))
						{
							if (!func_170())
							{
								if (func_118() && unk_0x653781B2157A929D(unk_0x2ADE2CEED2637E95()))
								{
									func_161(&uLocal_54, "REGETAU", "REAWA_START", 4, 0, 0, 0);
									iLocal_220 = 1;
								}
								else
								{
									func_161(&uLocal_54, "REGETAU", "REAWA_START2", 4, 0, 0, 0);
									iLocal_220 = 1;
								}
								if (unk_0xFBACB273AA628CC5(uLocal_284[0]))
								{
									unk_0x3C8D013C840ADA0A(uLocal_284[0], 1);
								}
								if (unk_0xFBACB273AA628CC5(uLocal_284[1]))
								{
									unk_0x3C8D013C840ADA0A(uLocal_284[1], 1);
								}
								if (!unk_0x5FEB513A4402FD59((*uParam0)[1]) && !unk_0x5FEB513A4402FD59(iLocal_288))
								{
									unk_0x0B895A812F665A52((*uParam0)[1], 156, 1);
									unk_0xEAD984C2869B8B7C(&iLocal_308);
									unk_0x31C1393E4ACFD794(0, "misslamar1ig_20", "stretch_call_hurry_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0x31C1393E4ACFD794(0, "combat@gestures@pistol@halt", "180", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0xE7D69AA8A129E7D3(0, iLocal_288, -1, 0);
									unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2096, 4);
									unk_0x56D9ED1541046AF6(iLocal_308);
									unk_0xC65002CAA1212AF9((*uParam0)[1], iLocal_308);
									unk_0xA3561415EB3DA3A3(&iLocal_308);
								}
								unk_0xAF625598EDA64AD3((*uParam0)[iVar0], unk_0x81873881071CD9FE(), -1, 2096, 4);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_68()
{
	Global_14559 = 0;
	func_69();
}

void func_69()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x9DE804DB82E9D0FC(iParam0, &uVar0);
		if (!unk_0xB318FDA0D1ABDB20(uVar1))
		{
			if (unk_0x8DAF7A748E41AD46(uVar1) == unk_0x8DAF7A748E41AD46("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_71(iParam0, iParam2);
	return 1;
}

void func_71(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_76(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xB0B9E53CEFDB16AA(iParam0, -1);
		if (!unk_0x86CCCD2FAE9D5E65(iVar0))
		{
			iVar0 = unk_0x24E1D5759BFC6ECE(iParam0, -1);
		}
		if (unk_0x86CCCD2FAE9D5E65(iVar0) && !unk_0x5FEB513A4402FD59(iVar0))
		{
			if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_98931.f_1750.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x14B7103DBD149FFE(iParam0) == Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xB318FDA0D1ABDB20(&(Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xD994929E13CC1ED5(unk_0xE0DCE5625B61B0CC(iParam0), &(Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_98931.f_18731.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x14B7103DBD149FFE(iParam0) == Global_98931.f_18731.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xB318FDA0D1ABDB20(&(Global_98931.f_18731.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xD994929E13CC1ED5(unk_0xE0DCE5625B61B0CC(iParam0), &(Global_98931.f_18731.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_98931.f_18731.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_98931.f_18731.f_5590 = iParam1;
	Global_68794 = iParam0;
	Global_98931.f_18731.f_5588 = 1;
	func_72(iParam0, &(Global_98931.f_18731.f_5510));
}

void func_72(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		func_75(uParam1);
		uParam1->f_66 = unk_0x14B7103DBD149FFE(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE0DCE5625B61B0CC(iParam0), 16);
		*uParam1 = unk_0xBF74E89FC6941108(iParam0);
		unk_0x1D3AAB0507DD3600(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x6942D519F6FE2C32(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB931B48FB3E13CF0(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x48F64101B58EB7F7(iParam0);
		uParam1->f_67 = unk_0xA3EFB2F9FFCDC48D(iParam0);
		uParam1->f_69 = unk_0xBB644BAE860F67B7(iParam0);
		uParam1->f_70 = unk_0x4AC847D90EBAFAEE(iParam0);
		unk_0x332D9608C3A4D1BE(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3182B161F39E40BC(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x1CD308F8479FBE52(iParam0, 2))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 28);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 3))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 29);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 30);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 1))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xD31A4E6B116BE250(iParam0, 0))
		{
			uParam1->f_68 = unk_0x48D44DDE1A5A9BD7(iParam0);
		}
		if (unk_0x1699D7B95446F15C(uParam1->f_66))
		{
			if (unk_0x923087289F6BA752(iParam0))
			{
				switch (unk_0x3D09A88E72AB7687(iParam0))
				{
					case 2:
					case 0:
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 23);
						unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 23);
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x263B56EFBC6AC36C(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 9);
		}
		if (unk_0x1E729885E653D827(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 10);
		}
		if (unk_0x6E728693163D9496(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 13);
			unk_0x4B850687F46D6E15(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9EBDB9930E2E0600(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 12);
		}
		func_74(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), func_73(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x45AFEFCDD35076F2(iParam0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 11);
		}
		if (unk_0xCEC9D74C9FF51C8C(iParam0, "IgnoredByQuickSave") && unk_0x53ABC9BE848EA65A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 27);
		}
	}
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_74(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7404950238A154C2(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xBE23E5C609DF6E79(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x91B47E3FC237F24A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x64D946BA23568D30(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB0BC5473B799F536(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB0BC5473B799F536(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_75(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_76(int iParam0)
{
	if ((((((((((!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0)) || func_89(iParam0, 0, 0)) || func_89(iParam0, 1, 0)) || func_89(iParam0, 2, 0)) || func_88(iParam0) != 145) || func_87(iParam0)) || func_86(iParam0)) || func_85(iParam0)) || func_84(iParam0)) || !func_77(unk_0x14B7103DBD149FFE(iParam0)))
	{
		if (func_86(iParam0))
		{
		}
		if (func_86(iParam0))
		{
		}
		if (func_89(iParam0, 0, 0))
		{
		}
		if (func_89(iParam0, 1, 0))
		{
		}
		if (func_89(iParam0, 2, 0))
		{
		}
		if (func_88(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_78(iParam0))
	{
		return 0;
	}
	if (((unk_0x9F59BCFFFEAAD4B1(iParam0) || unk_0x1699D7B95446F15C(iParam0)) || unk_0xE083914AB72DD7CE(iParam0)) || unk_0xE4CD4B212196D2C5(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_78(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xA84E120D1B16B142(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1C6DF6AD69BE853E())) || (iParam0 == joaat("buffalo3") && !unk_0x1C6DF6AD69BE853E())) || (iParam0 == joaat("gauntlet2") && !unk_0x1C6DF6AD69BE853E())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1C6DF6AD69BE853E())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_83())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xCDB51B918CEDF9B8())
		{
			if (unk_0x292BAD2AB4F88E45(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xA10BCE9255970BC8(Var1.f_0))
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
		if ((((!func_82() && !func_81()) && !func_80()) && !func_79()) && !func_83())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x3F0C224D3CC05EF2() || unk_0x913B1C01C1BA6C6F()) || unk_0xEC209B562C5EFDB2())
		{
		}
		else if (!func_80())
		{
			return 0;
		}
	}
	return 1;
}

int func_79()
{
	return 0;
}

int func_80()
{
	return 1;
}

int func_81()
{
	return 1;
}

int func_82()
{
	if (unk_0x2D6859674806FDCE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_83()
{
	var uVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF3148AAF69AF9CBC(&uVar0, 2);
				unk_0xF3148AAF69AF9CBC(&uVar0, 4);
				unk_0xF3148AAF69AF9CBC(&uVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					iVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&iVar0, 0);
					unk_0x0A726855B16BE29A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_135975 == 2)
	{
		return 1;
	}
	else if (Global_135975 == 3)
	{
		return 0;
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		if (unk_0x236D8AD7EE179F46(unk_0xE19FDB171CBF814A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_84(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	uVar1 = unk_0xE0DCE5625B61B0CC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xD994929E13CC1ED5(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_78(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_88503[iVar0]))
		{
			if (Global_88503[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_86(int iParam0)
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]) && unk_0x7404950238A154C2(Global_88473[iVar0], 0))
			{
				if (Global_88473[iVar0] == iParam0 && unk_0x14B7103DBD149FFE(Global_88473[iVar0]) == unk_0x14B7103DBD149FFE(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[24]))
	{
		if (iParam0 == Global_67889.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67889.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_88(int iParam0)
{
	int iVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 145;
	}
	if (!unk_0x7404950238A154C2(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]))
		{
			if (Global_88473[iVar0] == iParam0)
			{
				return Global_88483[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_89(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_90(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x236D8AD7EE179F46(Global_98931.f_5843[iVar9], 0))
		{
			if (unk_0x9ED6CC42898E5346(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_90(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_91(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_97987, unk_0x11CA2334E341B424(), 24);
		Global_97981 = 1;
	}
	else
	{
		StringCopy(&Global_97987, "NULL", 24);
		Global_97981 = 0;
	}
}

int func_92(int iParam0)
{
	if (func_96())
	{
		Global_98921 = 1;
		Global_98918 = unk_0x48E480685981C7D4();
		if (func_95(Global_98920))
		{
			func_93(0);
		}
		unk_0x13754D0D5B45CB5D(1, "RE_TITLE");
		if (iParam0 && func_95(Global_98920))
		{
			unk_0x34D34ABC20E130B1();
		}
		return 1;
	}
	return 0;
}

void func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_98931.f_29444.f_2 < 3)
			{
				if (!unk_0x4C075069555D364B())
				{
					func_50(func_94(iParam0), -1);
					Global_98931.f_29444.f_2++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 1))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_50(func_94(iParam0), -1);
					Global_98931.f_29444.f_3++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 2))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_50(func_94(iParam0), -1);
					Global_98931.f_29444.f_4++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 2);
				}
			}
			break;
	}
}

char* func_94(int iParam0)
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

int func_95(int iParam0)
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

int func_96()
{
	switch (func_97(&Global_25005, 0, 5, 0, unk_0x8F56512BDA9F6921()))
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

int func_97(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88620.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_101(0))
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		unk_0xE5BBA710593FB752(unk_0xEC537F0C0E8265EE(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xEC4E76F112E5A727(8);
		}
		Global_35443 = iParam2;
		Global_35405 = *uParam0;
		Global_35406 = iParam4;
		Global_35404 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35404 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35404)
			{
				if (Global_35410[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35405 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_99(iParam2))
		{
			return 0;
		}
		if (Global_35404 == 8)
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		Global_35410[Global_35404 /*4*/] = Global_35407;
		Global_35410[Global_35404 /*4*/].f_1 = iParam1;
		Global_35410[Global_35404 /*4*/].f_2 = iParam2;
		Global_35410[Global_35404 /*4*/].f_3 = 0;
		Global_35404++;
		if (iParam4 != 0)
		{
			func_98(uParam0, iParam4);
		}
	}
	return 2;
}

void func_98(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35404 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35404)
	{
		if (Global_35410[iVar0 /*4*/] == *uParam0)
		{
			Global_35410[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_99(int iParam0)
{
	return func_100(iParam0, Global_35443);
}

int func_100(int iParam0, int iParam1)
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

int func_101(int iParam0)
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	if (func_99(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_102(var uParam0, char* sParam1, int iParam2)
{
	unk_0xE66E1668957ECE7B(uParam0, sParam1, func_103(iParam2), 1);
}

int func_103(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_104(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
			}
		}
	}
}

int func_105()
{
	func_8();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_106(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_115(iParam0, 2, 1))
		{
			func_114(iParam0, 2, 1);
		}
	}
	else if (func_115(iParam0, 2, 1))
	{
		func_107(iParam0, 2, 1);
	}
}

void func_107(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xC69E84EBBD7166E6(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_113() == 0)
		{
			uVar0 = func_111(func_112(iParam0), -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, iParam1);
			func_108(func_112(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

void func_108(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_109(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, iParam3);
	}
}

int func_109(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_110();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

int func_110()
{
	return Global_1312729;
}

int func_111(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_109(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

int func_113()
{
	return Global_24946;
}

void func_114(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_113() == 0)
		{
			uVar0 = func_111(func_112(iParam0), -1, 0);
			unk_0xF3148AAF69AF9CBC(&uVar0, iParam1);
			func_108(func_112(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

int func_115(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_113() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_111(func_112(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_116(struct<3> Param0, float fParam3, int iParam4)
{
	if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Param0, fParam3, fParam3, fParam3, 0, 1, 0))
	{
		if (iParam4 == 0)
		{
			if (unk_0x547A2AA158CA2804(Param0, 5f))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_117(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x48E480685981C7D4();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
		{
			if (((((!unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()) && !unk_0x73513C0B8FDDCF2F(unk_0x81873881071CD9FE())) && !unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE())) && !unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE())) && !unk_0x193403916286AA4E(unk_0x81873881071CD9FE())) && !unk_0x557EC1A9A884772D(unk_0x81873881071CD9FE(), joaat("rhino")))
			{
				if (unk_0x59D35AC211D17FAB(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) >= 2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		if (unk_0x7404950238A154C2(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE()), 0))
		{
			if (((((!unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE()))) && !unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())))) && !unk_0x1699D7B95446F15C(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())))) && !unk_0x9F59BCFFFEAAD4B1(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())))) && !unk_0xE4CD4B212196D2C5(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())))) && unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_119(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_120(int iParam0)
{
	if (unk_0x52AB115D3D6A8417())
	{
		if (func_121(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_9(6) || func_9(7))
			{
				return 1;
			}
			else
			{
				return func_121(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_99(5))
			{
				if (func_122(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_122(int iParam0)
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				iVar0 = func_105();
				if (!func_10(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_131()) || Global_97978) || Global_24948) || func_130()) || func_129(8, -1)) || func_128()) || func_127()) || func_126()) || func_125()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x375975027050A891(unk_0x1329891157A54C63(), 1) || func_131()) || Global_24948) || func_130()) || func_129(8, -1)) || func_126()) || func_128()) || func_127()) || func_125()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_131()) || Global_97978) || Global_24948) || func_130()) || func_129(8, -1)) || func_126()) || func_128()) || func_127()) || func_125()) || Global_98931.f_6302.f_919[iVar0] == 5) || Global_35990 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_131()) || Global_97978) || Global_24948) || func_130()) || func_129(8, -1)) || func_128()) || func_127()) || func_125()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_131() || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || func_129(8, -1)) || func_125()) || func_124()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_129(8, -1) || func_128()) || func_127()) || func_124()) || func_123())
						{
							return 0;
						}
						if ((unk_0xF33755A765033580() && unk_0xCC3731E2C2E07187() != 3) && unk_0x74F26547462074EE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
						{
							if ((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_131()) || Global_24948) || func_130()) || func_129(8, -1)) || func_127()) || func_126()) || func_125()) || Global_98931.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || func_131()) || func_127()) || Global_97978) || Global_24948) || func_130()) || Global_36493) || func_129(8, -1)) || func_126()) || func_124()) || func_125()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1)) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0xD496D3841112DF95(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_131()) || Global_97978) || Global_24948) || func_130()) || func_129(8, -1)) || func_126()) || func_124()) || func_128()) || func_127()) || func_125())
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

var func_123()
{
	return Global_90848.f_1;
}

int func_124()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 13);
	}
	return 0;
}

int func_125()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_126()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

bool func_127()
{
	return Global_90861.f_297 > 0;
}

bool func_128()
{
	return Global_90861.f_296 > 0;
}

bool func_129(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

var func_130()
{
	return Global_1315892;
}

int func_131()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

int func_132(int iParam0, struct<7> Param1, var uParam8, var uParam9)
{
	if (iParam0 == 1)
	{
		func_142(&uLocal_313, Param1.f_0);
		func_142(&uLocal_313, Param1.f_1);
		func_142(&uLocal_313, Param1.f_2);
		func_142(&uLocal_313, Param1.f_3);
		func_142(&uLocal_313, Param1.f_4);
		func_142(&uLocal_313, Param1.f_5);
		func_142(&uLocal_313, Param1.f_6);
		if (func_139(&uLocal_313))
		{
			return 1;
		}
	}
	else
	{
		func_133(&uLocal_313, 0);
	}
	return 0;
}

void func_133(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_135(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_134(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_134(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_135(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			func_136(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_136(var uParam0)
{
	func_137(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_137(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x236D8AD7EE179F46(uParam0, 30))
	{
		switch (func_138(iParam0))
		{
			case 0:
				unk_0x887F4488DA99FD21(uParam2);
				break;
			
			case 1:
				unk_0xD8323B49BAE93D80(uParam1);
				break;
			
			case 2:
				unk_0x89A95366100690C0(uParam1);
				break;
			
			case 3:
				unk_0x9B331DCFDFC55491(uParam1);
				break;
			
			case 4:
				unk_0x4855165A2773595C(iParam2, uParam1);
				break;
			
			case 5:
				unk_0x010ACF5A865CA942(uParam1);
				break;
			
			case 6:
				unk_0xABF33AFE6B2877A8();
				break;
			
			case 7:
				unk_0xEDEECB22A033000E(iParam2);
				break;
			
			case 8:
				unk_0xBEE99C97A1B87F95(iParam2, unk_0x236D8AD7EE179F46(iParam0, 26));
				break;
			
			case 9:
				unk_0x954FB3FC1E04A7A9();
				break;
			
			default:
				break;
		}
	}
}

int func_138(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x236D8AD7EE179F46(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_139(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_140(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_140(var uParam0)
{
	return func_141(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_141(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x236D8AD7EE179F46(uParam0, 30))
	{
		if (unk_0x236D8AD7EE179F46(iParam0, 29))
		{
			switch (func_138(iParam0))
			{
				case 0:
					return unk_0x33ACB874CECA2D4B(uParam2);
					break;
				
				case 1:
					return unk_0x8E8B546E1A81D27F(uParam1);
					break;
				
				case 2:
					return unk_0xDBB20E5B224C075C(sParam1);
					break;
				
				case 3:
					return unk_0x682001A921A80123(sParam1);
					break;
				
				case 4:
					return unk_0x498998F33897432E(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x0F7866B4F5BE7CD4(sParam1);
					break;
				
				case 6:
					return unk_0x9D2B95F4020E5347(sParam1, unk_0x236D8AD7EE179F46(iParam0, 27));
					break;
				
				case 7:
					return unk_0x55D66FAE859776D2(iParam2);
					break;
				
				case 8:
					return unk_0xCD8DA898314F3016(iParam2);
					break;
				
				case 9:
					return unk_0x7A74065A1435C8AB();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_142(var uParam0, int iParam1)
{
	func_143(uParam0, 0, iParam1, "NULL", 0);
}

void func_143(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0xD994929E13CC1ED5(sParam3, "NULL"))
					{
						if (unk_0xD994929E13CC1ED5(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xF3148AAF69AF9CBC(uParam0[iVar0 /*18*/], iParam1);
			unk_0xF3148AAF69AF9CBC(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_144()
{
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_48) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_155())
		{
			return 0;
		}
	}
	if (func_151())
	{
		return 1;
	}
	if (func_145(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_145(float fParam0, bool bParam1)
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
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (func_10(func_105()))
		{
			iVar36 = func_7();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 2) && !unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 3))
				{
					func_146(iVar32, &Var0);
					fVar35 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var0.f_6, 1);
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

void func_146(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_147(uParam1, "Abigail1", func_149(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 1:
			func_147(uParam1, "Abigail2", func_149(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 2:
			func_147(uParam1, "Barry1", func_149(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 3:
			func_147(uParam1, "Barry2", func_149(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 4:
			func_147(uParam1, "Barry3", func_149(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 5:
			func_147(uParam1, "Barry3A", func_149(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 6:
			func_147(uParam1, "Barry3C", func_149(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 7:
			func_147(uParam1, "Barry4", func_149(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_148(iParam0), 0, 0);
			break;
		
		case 8:
			func_147(uParam1, "Dreyfuss1", func_149(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 9:
			func_147(uParam1, "Epsilon1", func_149(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 10:
			func_147(uParam1, "Epsilon2", func_149(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 11:
			func_147(uParam1, "Epsilon3", func_149(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 12:
			func_147(uParam1, "Epsilon4", func_149(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 13:
			func_147(uParam1, "Epsilon5", func_149(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 14:
			func_147(uParam1, "Epsilon6", func_149(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 15:
			func_147(uParam1, "Epsilon7", func_149(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 16:
			func_147(uParam1, "Epsilon8", func_149(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 17:
			func_147(uParam1, "Extreme1", func_149(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 18:
			func_147(uParam1, "Extreme2", func_149(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 19:
			func_147(uParam1, "Extreme3", func_149(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 20:
			func_147(uParam1, "Extreme4", func_149(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 21:
			func_147(uParam1, "Fanatic1", func_149(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_148(iParam0), 1, 0);
			break;
		
		case 22:
			func_147(uParam1, "Fanatic2", func_149(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_148(iParam0), 1, 0);
			break;
		
		case 23:
			func_147(uParam1, "Fanatic3", func_149(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_148(iParam0), 0, 1);
			break;
		
		case 24:
			func_147(uParam1, "Hao1", func_149(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_148(iParam0), 0, 1);
			break;
		
		case 25:
			func_147(uParam1, "Hunting1", func_149(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 26:
			func_147(uParam1, "Hunting2", func_149(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 27:
			func_147(uParam1, "Josh1", func_149(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 28:
			func_147(uParam1, "Josh2", func_149(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 29:
			func_147(uParam1, "Josh3", func_149(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 30:
			func_147(uParam1, "Josh4", func_149(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 31:
			func_147(uParam1, "Maude1", func_149(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 32:
			func_147(uParam1, "Minute1", func_149(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 33:
			func_147(uParam1, "Minute2", func_149(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 34:
			func_147(uParam1, "Minute3", func_149(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 35:
			func_147(uParam1, "MrsPhilips1", func_149(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 36:
			func_147(uParam1, "MrsPhilips2", func_149(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 37:
			func_147(uParam1, "Nigel1", func_149(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 38:
			func_147(uParam1, "Nigel1A", func_149(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 39:
			func_147(uParam1, "Nigel1B", func_149(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_148(iParam0), 1, 1);
			break;
		
		case 40:
			func_147(uParam1, "Nigel1C", func_149(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_148(iParam0), 1, 1);
			break;
		
		case 41:
			func_147(uParam1, "Nigel1D", func_149(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_148(iParam0), 1, 1);
			break;
		
		case 42:
			func_147(uParam1, "Nigel2", func_149(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 43:
			func_147(uParam1, "Nigel3", func_149(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 44:
			func_147(uParam1, "Omega1", func_149(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 45:
			func_147(uParam1, "Omega2", func_149(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 46:
			func_147(uParam1, "Paparazzo1", func_149(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 47:
			func_147(uParam1, "Paparazzo2", func_149(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 48:
			func_147(uParam1, "Paparazzo3", func_149(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 49:
			func_147(uParam1, "Paparazzo3A", func_149(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 50:
			func_147(uParam1, "Paparazzo3B", func_149(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 51:
			func_147(uParam1, "Paparazzo4", func_149(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 52:
			func_147(uParam1, "Rampage1", func_149(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 54:
			func_147(uParam1, "Rampage3", func_149(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 55:
			func_147(uParam1, "Rampage4", func_149(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 56:
			func_147(uParam1, "Rampage5", func_149(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 53:
			func_147(uParam1, "Rampage2", func_149(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 57:
			func_147(uParam1, "TheLastOne", func_149(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 58:
			func_147(uParam1, "Tonya1", func_149(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 59:
			func_147(uParam1, "Tonya2", func_149(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 60:
			func_147(uParam1, "Tonya3", func_149(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 61:
			func_147(uParam1, "Tonya4", func_149(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 62:
			func_147(uParam1, "Tonya5", func_149(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_147(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_148(int iParam0)
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

struct<2> func_149(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_150(iParam0) };
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_150(int iParam0)
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

int func_151()
{
	if (func_154() && !func_155())
	{
		return 1;
	}
	if (func_153() && func_152())
	{
		return 1;
	}
	return 0;
}

bool func_152()
{
	return Global_98649 > 0;
}

int func_153()
{
	if (Global_88064 != -1)
	{
		return 1;
	}
	return 0;
}

int func_154()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 20);
	}
	return 0;
}

int func_155()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x9C5272432A46019C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_156(int iParam0)
{
	Global_98917 = iParam0;
}

void func_157()
{
	if (!bLocal_277)
	{
		unk_0x6FF90B691E3204B1(func_171(unk_0x1329891157A54C63()) - Vector(0f, 10f, 0f), unk_0x2E0A9E3291F398E3(5, 15), &Local_242, 1, 1077936128, 0);
		if (!unk_0x547A2AA158CA2804(Local_242, 10f))
		{
			Local_236 = { Local_242 };
			bLocal_276 = true;
		}
		else
		{
			unk_0x6FF90B691E3204B1(func_171(unk_0x1329891157A54C63()) + Vector(0f, 10f, 0f), unk_0x2E0A9E3291F398E3(5, 15), &Local_242, 1, 1077936128, 0);
			if (!unk_0x547A2AA158CA2804(Local_242, 10f))
			{
				Local_236 = { Local_242 };
				bLocal_276 = true;
			}
			if (bLocal_276)
			{
				if (!unk_0x86CCCD2FAE9D5E65(uLocal_298[0]))
				{
					uLocal_298[0] = unk_0x206897C6DBC12488(6, joaat("s_m_y_cop_01"), Local_236 + Vector(0f, 5f, 0f), 0f, 1, 1);
					if (func_55())
					{
						unk_0x8E4A427F5C43E416(uLocal_298[0], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x506A601663C5417C(uLocal_298[0], iLocal_311);
						unk_0x1D15D99A10A15334(uLocal_298[0], 1);
						unk_0xEC29A7F05A3AA03E(uLocal_298[0], 50f, 0);
						unk_0x6CB332CB31E9FA96(uLocal_298[0], 1);
					}
					else
					{
						unk_0x1D15D99A10A15334(uLocal_298[0], 1);
						unk_0xEAD984C2869B8B7C(&iLocal_308);
						unk_0x65C82688BA49CA39(0, unk_0x81873881071CD9FE(), -1, 6f, 3f, 1073741824, 0);
						unk_0x31C1393E4ACFD794(0, "random@getawaydriver", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
						unk_0x52A7A8711E08087B(0, 3000);
						unk_0x56D9ED1541046AF6(iLocal_308);
						unk_0xC65002CAA1212AF9(uLocal_298[0], iLocal_308);
						unk_0xA3561415EB3DA3A3(&iLocal_308);
						unk_0x6CB332CB31E9FA96(uLocal_298[0], 1);
						func_104(&uLocal_54, 4, uLocal_298[0], "REGETCop", 0, 1);
					}
				}
				if (!unk_0x86CCCD2FAE9D5E65(uLocal_298[1]))
				{
					uLocal_298[1] = unk_0x206897C6DBC12488(6, joaat("s_m_y_cop_01"), Local_236 - Vector(0f, 5f, 0f), 0f, 1, 1);
					if (func_55())
					{
						unk_0x8E4A427F5C43E416(uLocal_298[0], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x506A601663C5417C(uLocal_298[1], iLocal_311);
						unk_0x1D15D99A10A15334(uLocal_298[1], 1);
						unk_0xEC29A7F05A3AA03E(uLocal_298[1], 50f, 0);
						unk_0x6CB332CB31E9FA96(uLocal_298[1], 1);
					}
					else
					{
						unk_0x1D15D99A10A15334(uLocal_298[1], 1);
						unk_0x3B7399E54E7916C6(uLocal_298[1], 68.7217f, -1569.83f, 28.6027f, 3f, 0, 0, 786603, -1082130432);
						unk_0x6CB332CB31E9FA96(uLocal_298[1], 1);
					}
				}
				if (!unk_0x86CCCD2FAE9D5E65(iLocal_305))
				{
					iLocal_305 = unk_0xE00F8DEA9778FC87(joaat("police3"), Local_236, 0, 1, 1);
					Local_239 = { func_171(unk_0x1329891157A54C63()) - unk_0xB6AE0DAE06D56288(iLocal_305, 1) };
					unk_0xC24172029826A66F(iLocal_305, unk_0x097CA9356FED843D(Local_239.f_0, Local_239.f_1));
					unk_0x6A8A78C1DAEC9CEB(iLocal_305, 1);
				}
				if (!unk_0x86CCCD2FAE9D5E65(uLocal_298[2]))
				{
					uLocal_298[2] = unk_0x4D135F3066A9BF9C(iLocal_305, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
					if (func_55())
					{
						unk_0x8E4A427F5C43E416(uLocal_298[2], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x506A601663C5417C(uLocal_298[2], iLocal_311);
						unk_0x4B9FA68A3AC8C29D(uLocal_298[2], 1, 1);
						unk_0x4B9FA68A3AC8C29D(uLocal_298[2], 3, 0);
						unk_0x1D15D99A10A15334(uLocal_298[2], 1);
						unk_0xEFACB1875068FA30(uLocal_298[2], iLocal_305, iLocal_289[1], 6, 15f, 2, -1f, -1f, 1);
						unk_0x6CB332CB31E9FA96(uLocal_298[2], 1);
					}
					else
					{
						unk_0x1D15D99A10A15334(uLocal_298[2], 1);
						unk_0xEAD984C2869B8B7C(&iLocal_308);
						unk_0x1ABA8A919187E144(0, iLocal_305, 40.2328f, -1555.753f, 28.2128f, 10f, 0, joaat("police"), 786469, 1f, -1f);
						unk_0x52A7A8711E08087B(0, 5000);
						unk_0x56D9ED1541046AF6(iLocal_308);
						unk_0xC65002CAA1212AF9(uLocal_298[2], iLocal_308);
						unk_0xA3561415EB3DA3A3(&iLocal_308);
						unk_0x6CB332CB31E9FA96(uLocal_298[2], 1);
					}
				}
				bLocal_277 = true;
			}
		}
	}
}

int func_158(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x86CCCD2FAE9D5E65((*uParam0)[iVar0]))
		{
			if (unk_0x86CCCD2FAE9D5E65(iParam1))
			{
				if (unk_0x7404950238A154C2(iParam1, 0))
				{
					if (!unk_0x5FEB513A4402FD59((*uParam0)[iVar0]))
					{
						if (unk_0x04C377C10639B842((*uParam0)[iVar0], iParam1, 0))
						{
							return 0;
						}
						if (fParam2 > 0f)
						{
							if (unk_0x8D28631AAAEFC957((*uParam0)[iVar0], unk_0x81873881071CD9FE(), fParam2, fParam2, fParam2, 0, 1, 0))
							{
								return 0;
							}
						}
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
		iVar0++;
	}
	return 1;
}

void func_159()
{
	Global_14559 = 0;
	func_160();
}

void func_160()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

int func_161(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_169(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_162(sParam2, iParam3, 0);
}

int func_162(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x9E95048D8C96C1EA(0);
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
					func_69();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_129(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_168();
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
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_167();
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
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_166())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
					{
						return 0;
					}
				}
			}
			if (func_165())
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_164();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_163();
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
		func_69();
	}
	return 0;
}

void func_163()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_164()
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
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_165()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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

void func_167()
{
	if (func_9(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
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
		Global_14394 = func_105();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

void func_168()
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

void func_169(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_170()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

Vector3 func_171(var uParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(uParam0), 0);
}

void func_172()
{
	func_173();
}

int func_173()
{
	if (func_174(0))
	{
		return 0;
	}
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_174(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

void func_175(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_183();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_182(iParam0))
	{
		func_181(iParam0, iParam1);
		if (!func_13(51))
		{
			func_4("RE_REWARD", 1, 0, 4000, 10000, func_7(), 0, 138, 0);
			func_180(51);
		}
		if (func_95(iParam0))
		{
			Global_98931.f_29444.f_2 = 3;
		}
		if (func_179(iParam0, iParam1) != 322)
		{
			func_176(func_179(iParam0, iParam1), Local_48.f_0, Local_48.f_1);
		}
		Global_98919 = iParam1;
		if (Global_98917 == 0)
		{
			if (((Global_98920 == 1 || Global_98920 == 5) || Global_98920 == 11) || Global_98920 == 25)
			{
				func_156(2);
			}
			else if ((Global_98920 == 26 || Global_98920 == 8) || Global_98920 == 17)
			{
				func_156(7);
			}
			else
			{
				func_156(1);
			}
		}
	}
}

void func_176(int iParam0, var uParam1, var uParam2)
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
		func_178((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = uParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_177();
	}
}

void func_177()
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
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_40(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_113() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
				{
					func_173();
				}
			}
		}
	}
}

int func_178(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_110();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_179(int iParam0, int iParam1)
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

void func_180(int iParam0)
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
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_24859.f_150[iVar1]), iVar0);
	}
}

void func_181(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29444.f_8[iParam0]), iParam1);
}

int func_182(int iParam0)
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

int func_183()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x11CA2334E341B424(), 64);
	uVar16 = func_184(Var0);
	return uVar16;
}

int func_184(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x8DAF7A748E41AD46(&cParam0))
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

void func_185(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_188(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_30883.f_1), iVar0);
			if (!bParam1)
			{
				func_186(func_187(iParam0));
			}
		}
	}
}

void func_186(var uParam0)
{
	unk_0x02A6B267064771B1("");
	unk_0x360C2C4758544C84("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", uParam0);
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_188(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_30883.f_1, iParam0);
	}
	return 0;
}

int func_189()
{
	return 1;
}

int func_190()
{
	if (Global_25181)
	{
		func_156(4);
		return 1;
	}
	return 0;
}

int func_191(int iParam0)
{
	return func_115(iParam0, 5, 1);
}

int func_192()
{
	if (!func_99(5))
	{
		return 1;
	}
	if (func_151())
	{
		return 1;
	}
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_155())
		{
			return 0;
		}
	}
	if (func_145(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if ((Global_98920 == func_183() && unk_0x9284F36E422CA571()) && Global_98921)
	{
		return 1;
	}
	return 0;
}

void func_194(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x5CE96B2C9C8B727F() >= (uParam0->f_146 + uParam0->f_147) || unk_0x236D8AD7EE179F46(Global_90809.f_20, 2)) || unk_0x236D8AD7EE179F46(Global_90809.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 29))
					{
						func_195(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x5CE96B2C9C8B727F();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_195(var uParam0)
{
	func_196(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_196(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x236D8AD7EE179F46(*uParam0, 30))
	{
		switch (func_138(*uParam0))
		{
			case 0:
				unk_0x32A12757CBF48A33(uParam2);
				break;
			
			case 1:
				unk_0x295DC04FC13E025B(uParam1);
				break;
			
			case 2:
				unk_0xF147E5A343BAF150(sParam1);
				break;
			
			case 3:
				unk_0xB711FC19ADBD3C70(sParam1, unk_0x236D8AD7EE179F46(*uParam0, 28));
				break;
			
			case 4:
				unk_0x995DCDA796A47049(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x2D148CBB17A2B0C7(sParam1);
				break;
			
			case 6:
				unk_0x9D2B95F4020E5347(sParam1, unk_0x236D8AD7EE179F46(*uParam0, 27));
				break;
			
			case 7:
				unk_0x0A3E2A43DEA2DB9D(iParam2);
				break;
			
			case 8:
				unk_0x86B83C54AF71BD12(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x18C8823792832C78();
				break;
			
			default:
				break;
		}
		unk_0xF3148AAF69AF9CBC(uParam0, 29);
	}
}

void func_197(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_183();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_199(iParam0);
	unk_0x154D79F694221AD0(0);
	unk_0xCE84C16ABC548B6E(1);
	Global_98917 = 0;
	func_198();
}

void func_198()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			unk_0xB5A91586385F755B(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)), 1);
		}
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 0);
	}
}

void func_199(int iParam0)
{
	Global_98920 = iParam0;
}

int func_200(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_135723)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_183();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_83())
		{
			return 0;
		}
	}
	Local_48 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_155())
			{
				return 0;
			}
		}
		if (!Global_98931.f_7699)
		{
			return 0;
		}
		if (func_174(0))
		{
			return 0;
		}
		if (func_151())
		{
			return 0;
		}
		if (func_230())
		{
			return 0;
		}
		if (Global_98920 != -1)
		{
			return 0;
		}
		if (func_10(func_105()))
		{
			if (func_145(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !bParam6)
		{
			if ((Var1.f_2 - Local_48.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_229(iParam3))
		{
			return 0;
		}
		if (func_10(func_105()))
		{
			if (func_228(func_105()) == 4 || func_228(func_105()) == 5)
			{
				return 0;
			}
		}
		if (func_10(func_105()))
		{
			if (!func_227(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_226(Global_98931.f_29444.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x48E480685981C7D4() - Global_98922) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_225())
		{
			return 0;
		}
		if (unk_0x0C59B91B32EEDDEE())
		{
			return 0;
		}
		if (unk_0x9284F36E422CA571())
		{
			return 0;
		}
		if (!func_122(4))
		{
			return 0;
		}
		if (!func_99(5))
		{
			return 0;
		}
		if (func_224(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x59F36F53A82C2E72(unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE())))
		{
			if ((unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(377.153f, -717.567f, 10.0536f) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(320.9934f, 265.2515f, 82.1221f)) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_224(0, 0))
		{
			return 0;
		}
		if (Global_25092)
		{
			return 0;
		}
		if (func_229(30) && !func_224(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_10(func_105()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_98931.f_1750.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_98931.f_1750.f_539.f_1524[iVar4];
				if (func_223(iVar8))
				{
					if (func_201(iVar4))
					{
						if (!func_54(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var5) < (210f * 210f))
							{
								if (func_105() != iVar4)
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

bool func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_98931.f_1750.f_539.f_1524[iParam0];
	return func_202(iVar0);
}

int func_202(int iParam0)
{
	return func_203(iParam0, 1);
}

int func_203(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_223(iParam0))
	{
		return 0;
	}
	func_204(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_204(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_205(func_216(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_205(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_215(iParam0, iParam1))
	{
		iVar0 = func_214(iParam1);
		iVar1 = func_212(iParam0);
		iVar2 = (func_212(iParam0) - func_212(iParam1));
		iVar3 = (func_214(iParam0) - func_214(iParam1));
		iVar4 = (func_211(iParam0) - func_211(iParam1));
		iVar5 = (func_210(iParam0) - func_210(iParam1));
		iVar6 = (func_209(iParam0) - func_209(iParam1));
		iVar7 = (func_208(iParam0) - func_208(iParam1));
	}
	else
	{
		iVar0 = func_214(iParam0);
		iVar1 = func_212(iParam1);
		iVar2 = (func_212(iParam1) - func_212(iParam0));
		iVar3 = (func_214(iParam1) - func_214(iParam0));
		iVar4 = (func_211(iParam1) - func_211(iParam0));
		iVar5 = (func_210(iParam1) - func_210(iParam0));
		iVar6 = (func_209(iParam1) - func_209(iParam0));
		iVar7 = (func_208(iParam1) - func_208(iParam0));
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
		iVar4 = (iVar4 + func_207(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_206(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_206(float fParam0, float fParam1, float fParam2)
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

int func_207(int iParam0, int iParam1)
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

int func_208(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_209(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_210(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_211(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_212(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_213(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
}

int func_213(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_214(int iParam0)
{
	return iParam0 & 15;
}

int func_215(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_223(iParam1) || !func_223(iParam0))
	{
		return 1;
	}
	iVar0 = func_212(iParam0);
	iVar1 = func_212(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_214(iParam0);
	iVar1 = func_214(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_211(iParam0);
	iVar1 = func_211(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_210(iParam0);
	iVar1 = func_210(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_208(iParam0);
	iVar1 = func_208(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_216()
{
	var uVar0;
	
	func_222(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_221(&uVar0, unk_0x25B31B877207A3A9());
	func_220(&uVar0, unk_0x0C937048CF6952B5());
	func_219(&uVar0, unk_0x8B6B3DD84CE74978());
	func_218(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_217(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

void func_217(var uParam0, int iParam1)
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

void func_218(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_219(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_214(*uParam0);
	iVar1 = func_212(*uParam0);
	if (iParam1 < 1 || iParam1 > func_207(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_220(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_221(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_222(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_223(int iParam0)
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
	iVar0 = func_208(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_209(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_210(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_212(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_214(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_211(iParam0);
	if (iVar5 < 1 || iVar5 > func_207(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_224(int iParam0, int iParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_225()
{
	func_167();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_226(int iParam0)
{
	return func_215(func_216(), iParam0);
}

int func_227(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_105();
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

int func_228(int iParam0)
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_98931.f_6302.f_919[iParam0];
}

bool func_229(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_83())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_1, iVar0);
	}
	return bVar1;
}

int func_230()
{
	int iVar0;
	
	if (Global_25096)
	{
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x7404950238A154C2(iVar0, 0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0xB0B9E53CEFDB16AA(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_231(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_232(struct<9> Param0, int iParam9, bool bParam10)
{
	int iVar0;
	
	if (iLocal_312)
	{
		func_245(0);
		if (Global_25184)
		{
			unk_0x80650551CC58C784("AC_STOP");
		}
		func_244();
		func_91(0);
		unk_0x3DD1ED742E99F292(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 1, 1);
		unk_0x3C936873011FA97B();
		unk_0x8DBC0C86D2397C6A(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0);
		unk_0xFEA6E2B6E5CAFC2E(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 1);
		unk_0xD600F85196278A9D(unk_0x1329891157A54C63());
		unk_0x5B6D37392F5991C3(1f);
		if (!unk_0x930F8FBB8E9537CC(iLocal_307))
		{
			func_70(iLocal_307, 0, 145);
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_288))
		{
			if (unk_0x0BAE7BE122182FA8(iLocal_288, "random@getawaydriver", "idle_a", 3) || unk_0x0BAE7BE122182FA8(iLocal_288, "random@getawaydriver", "idle_2_hands_up", 3))
			{
				unk_0xEAD984C2869B8B7C(&iLocal_308);
				unk_0x31C1393E4ACFD794(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
				if (!unk_0x5FEB513A4402FD59((*iParam9)[0]))
				{
					unk_0x754376E2234CBB4A(0, (*iParam9)[0], 150f, -1, 0, 0);
				}
				else if (!unk_0x5FEB513A4402FD59((*iParam9)[1]))
				{
					unk_0x754376E2234CBB4A(0, (*iParam9)[1], 150f, -1, 0, 0);
				}
				unk_0x56D9ED1541046AF6(iLocal_308);
				unk_0xC65002CAA1212AF9(iLocal_288, iLocal_308);
				unk_0xA3561415EB3DA3A3(&iLocal_308);
				unk_0x6CB332CB31E9FA96(iLocal_288, 1);
			}
			unk_0x4191220706130B86(iLocal_288);
			unk_0x4B9FA68A3AC8C29D(iLocal_288, 17, 1);
			unk_0x1D15D99A10A15334(iLocal_288, 0);
		}
		if (!unk_0x5FEB513A4402FD59((*iParam9)[0]))
		{
			unk_0xCE566DBDCACD245E((*iParam9)[0], 317, 1);
			unk_0x4B9FA68A3AC8C29D((*iParam9)[0], 17, 1);
			unk_0x6EC15FE0ADD3E99C((*iParam9)[0]);
			unk_0x33B1E568CEF14B0D((*iParam9)[0], 1);
			unk_0x1D15D99A10A15334((*iParam9)[0], 0);
		}
		if (!unk_0x5FEB513A4402FD59((*iParam9)[1]))
		{
			unk_0xCE566DBDCACD245E((*iParam9)[1], 317, 1);
			unk_0x4B9FA68A3AC8C29D((*iParam9)[1], 17, 1);
			unk_0x6EC15FE0ADD3E99C((*iParam9)[1]);
			unk_0x33B1E568CEF14B0D((*iParam9)[1], 1);
			unk_0x1D15D99A10A15334((*iParam9)[1], 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_292)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_292[iVar0]))
			{
				unk_0x1D15D99A10A15334(iLocal_292[iVar0], 0);
			}
			iVar0++;
		}
		if (!unk_0x5FEB513A4402FD59(uLocal_298[0]))
		{
			unk_0x8E4A427F5C43E416(uLocal_298[0], joaat("weapon_pistol"), -1, 0, 1);
			unk_0x1D15D99A10A15334(uLocal_298[0], 0);
		}
		if (!unk_0x5FEB513A4402FD59(uLocal_298[1]))
		{
			unk_0x8E4A427F5C43E416(uLocal_298[1], joaat("weapon_pistol"), -1, 0, 1);
			unk_0x1D15D99A10A15334(uLocal_298[1], 0);
		}
		if (!unk_0x5FEB513A4402FD59(uLocal_298[2]))
		{
			unk_0x8E4A427F5C43E416(uLocal_298[2], joaat("weapon_pistol"), -1, 0, 1);
			unk_0x1D15D99A10A15334(uLocal_298[2], 0);
		}
		if (!bParam10)
		{
			if (!unk_0x5FEB513A4402FD59((*iParam9)[0]))
			{
				unk_0x06189C52198B2264((*iParam9)[0], func_171(unk_0x1329891157A54C63()), 200f, -1, 0, 0);
			}
			if (!unk_0x5FEB513A4402FD59((*iParam9)[1]))
			{
				unk_0x06189C52198B2264((*iParam9)[1], func_171(unk_0x1329891157A54C63()), 200f, -1, 0, 0);
			}
		}
		if (!iLocal_219)
		{
			unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
			iLocal_219 = 1;
		}
		func_60(uLocal_52);
		if (unk_0xFBACB273AA628CC5(uLocal_287))
		{
			unk_0x0A8175F24237A3D4(&uLocal_287);
		}
		func_60(uLocal_53);
		func_119(0);
		func_132(0, Param0);
	}
	func_233(-1);
	unk_0xC23A229F78DAD92A();
}

void func_233(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_183();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_193())
	{
		func_237(iParam0);
		unk_0x13754D0D5B45CB5D(0, 0);
		Global_98922 = unk_0x48E480685981C7D4();
		func_236(30000);
		StringCopy(&cVar0, func_235(Global_98920, 1), 64);
		if (func_182(Global_98920) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_98919, 64);
		}
		unk_0xAD4A8703D0E8206B(&cVar0, Global_98917, (unk_0x48E480685981C7D4() - Global_98918), 0);
	}
	else if (unk_0x236D8AD7EE179F46(Global_98927, 0) && Global_98931.f_29444.f_2 < 3)
	{
		unk_0xC69E84EBBD7166E6(&Global_98927, 0);
	}
	func_234(&Global_25005);
	Global_98921 = 0;
	func_199(-1);
}

void func_234(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35405)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35404 = 0;
	Global_35406 = 0;
	Global_35443 = 15;
	Global_55399 = 0;
	Global_55400 = 0;
}

char* func_235(int iParam0, bool bParam1)
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

void func_236(int iParam0)
{
	Global_35994 = (unk_0x48E480685981C7D4() + iParam0);
}

void func_237(int iParam0)
{
	func_238(iParam0, 0, func_243(iParam0));
}

void func_238(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_216();
	func_241(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_240(iParam0, &uVar0);
	Var1 = { func_239(&uVar0) };
}

struct<16> func_239(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_210(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_209(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_208(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_211(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_214(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_212(*uParam0), 64);
	return Var0;
}

void func_240(int iParam0, var uParam1)
{
	Global_98931.f_29444.f_43[iParam0] = *uParam1;
}

void func_241(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_212(*uParam0);
	iVar1 = func_214(*uParam0);
	iVar2 = func_211(*uParam0);
	iVar3 = func_210(*uParam0);
	iVar4 = func_209(*uParam0);
	iVar5 = func_208(*uParam0);
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
	iVar6 = func_207(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_207(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_242(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_242(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_222(uParam0, iParam1);
	func_221(uParam0, iParam2);
	func_220(uParam0, iParam3);
	func_218(uParam0, iParam5);
	func_219(uParam0, iParam4);
	func_217(uParam0, iParam6);
}

int func_243(int iParam0)
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

void func_244()
{
	Global_25180 = 0;
	Global_25181 = 0;
	Global_25183 = 0;
	Global_25184 = 0;
	Global_25185 = 0;
}

void func_245(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_106(iVar0, bParam0);
		iVar0++;
	}
}

