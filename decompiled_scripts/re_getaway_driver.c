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
	uLocal_46 = unk_0x1B46069E4C762829();
	uLocal_47 = unk_0xE2B564EB49C711B1();
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
	if (unk_0x2C897F101BA20806(11))
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_289[0]))
		{
			if (unk_0x9A132E8DFAE1F524(iLocal_289[0]))
			{
				unk_0xA7130AF256ED96A1(iLocal_289[0]);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iLocal_289[1]))
		{
			if (unk_0x9A132E8DFAE1F524(iLocal_289[1]))
			{
				unk_0xA7130AF256ED96A1(iLocal_289[1]);
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
		unk_0x82706E6C897B0FA1();
	}
	while (iVar0 != 7)
	{
		iVar18 = 0;
		func_194(&uLocal_313);
		if (!unk_0xFEC6476AFCF2033F() && !func_193())
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
		unk_0x0022A74B21F0C0B9("RE_GD", 0);
		if (func_190())
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_289[0]))
			{
				unk_0x51A89CCC8A5317D0(&(iLocal_289[0]));
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_289[1]))
			{
				unk_0x51A89CCC8A5317D0(&(iLocal_289[1]));
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
		if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0) && !unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
		{
			if (unk_0xCA34E4192F6CE2E9(func_171(unk_0x1788E93557766241()) - Vector(10f, 20f, 20f), func_171(unk_0x1788E93557766241()) + Vector(10f, 20f, 20f)) || unk_0xD398EB65A5D325DF(func_171(unk_0x1788E93557766241()) - Vector(10f, 20f, 20f), func_171(unk_0x1788E93557766241()) + Vector(10f, 20f, 20f)))
			{
				if ((((!unk_0x2DE0B96E966FD817(iLocal_289[0]) && !unk_0x2DE0B96E966FD817(iLocal_289[1])) && unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0xB49BA83A5C224F40(), 0)) && unk_0xAD203DB71ADF6E57(iLocal_289[0], unk_0xB49BA83A5C224F40(), 0)) && unk_0xAD203DB71ADF6E57(iLocal_289[1], unk_0xB49BA83A5C224F40(), 0))
				{
					if (unk_0x5AF66EDEBFA76B9B(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) < 0.2f)
					{
						if (iLocal_229 == -1)
						{
							iLocal_229 = unk_0x09560C7DE2A384BD();
						}
					}
					else
					{
						iLocal_229 = -1;
					}
					if (iLocal_229 != -1 && unk_0x09560C7DE2A384BD() > iLocal_229 + 1000)
					{
						if (!func_170())
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_LOSE", 4, 0, 0, 0);
						}
						if (iLocal_229 != -1 && unk_0x09560C7DE2A384BD() > iLocal_229 + 10000)
						{
							func_159();
							unk_0x4EDE34FBADD967A6(0);
							func_161(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
							if (!unk_0x2DE0B96E966FD817(iLocal_289[0]))
							{
								unk_0x6D98AA46076A68BE(&uLocal_308);
								unk_0xBB5AA994E06B28E2(0, 0, 0);
								unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
								unk_0x963BB7C99350D827(uLocal_308);
								unk_0x0891776D0327B77A(iLocal_289[0], iLocal_308);
								unk_0x2AF68ED52DC74B7D(&iLocal_308);
								unk_0x2686393074E14730(iLocal_289[0], 1);
							}
							if (!unk_0x2DE0B96E966FD817(iLocal_289[1]))
							{
								unk_0x6D98AA46076A68BE(&iLocal_308);
								unk_0xBB5AA994E06B28E2(0, 500, 0);
								unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
								unk_0x963BB7C99350D827(iLocal_308);
								unk_0x0891776D0327B77A(iLocal_289[1], iLocal_308);
								unk_0x2AF68ED52DC74B7D(&iLocal_308);
								unk_0x2686393074E14730(iLocal_289[1], 1);
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
			if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0)
			{
				unk_0x2966D41514EAE84B(255, iLocal_309, -1033021910);
				unk_0x2966D41514EAE84B(255, iLocal_309, 1166638144);
				unk_0x2966D41514EAE84B(255, -1033021910, iLocal_309);
				unk_0x2966D41514EAE84B(255, 1166638144, iLocal_309);
			}
			else
			{
				unk_0x2966D41514EAE84B(1, iLocal_309, -1033021910);
				unk_0x2966D41514EAE84B(1, iLocal_309, 1166638144);
				unk_0x2966D41514EAE84B(1, -1033021910, iLocal_309);
				unk_0x2966D41514EAE84B(1, 1166638144, iLocal_309);
			}
		}
		if ((iVar10 > 1 && iVar10 < 7) && !iLocal_282)
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_288))
			{
				if (unk_0xBF8ADDCADFC4691E(iLocal_288, unk_0xA16EC202D9D35357(), 1))
				{
					func_159();
					unk_0x4EDE34FBADD967A6(0);
					if (!unk_0x2DE0B96E966FD817(iLocal_289[0]))
					{
						unk_0xEA36CC2E7750344B(iLocal_289[0], unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
					}
					if (!unk_0x2DE0B96E966FD817(iLocal_289[1]))
					{
						unk_0xEA36CC2E7750344B(iLocal_289[1], unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_232(Var1, &iLocal_289, bVar12);
				}
			}
		}
		if ((iVar10 > 7 && iVar10 < 18) && !iLocal_282)
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_289[0]) && unk_0x538DF9E5B1DF01EB(iLocal_289[1]))
			{
				if (unk_0x2DE0B96E966FD817(iLocal_289[1]) || !unk_0x14F9932776F21CC2(iLocal_289[0], unk_0xA16EC202D9D35357(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_289[0]))
					{
						unk_0x6D98AA46076A68BE(&iLocal_308);
						unk_0xBB5AA994E06B28E2(0, 0, 0);
						unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
						unk_0x963BB7C99350D827(iLocal_308);
						unk_0x0891776D0327B77A(iLocal_289[0], iLocal_308);
						unk_0x2AF68ED52DC74B7D(&iLocal_308);
						unk_0x2686393074E14730(iLocal_289[0], 1);
						func_159();
						unk_0x4EDE34FBADD967A6(0);
						func_161(&uLocal_54, "REGETAU", "REAWA_FKDB", 4, 0, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_232(Var1, &iLocal_289, bVar12);
				}
				if (unk_0x2DE0B96E966FD817(iLocal_289[0]) || !unk_0x14F9932776F21CC2(iLocal_289[1], unk_0xA16EC202D9D35357(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_289[1]))
					{
						unk_0x6D98AA46076A68BE(&iLocal_308);
						unk_0xBB5AA994E06B28E2(0, 0, 0);
						unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
						unk_0x963BB7C99350D827(iLocal_308);
						unk_0x0891776D0327B77A(iLocal_289[1], iLocal_308);
						unk_0x2AF68ED52DC74B7D(&iLocal_308);
						unk_0x2686393074E14730(iLocal_289[1], 1);
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
		if (func_158(&iLocal_289, unk_0xB49BA83A5C224F40(), 180f))
		{
			if (unk_0xBF8ADDCADFC4691E(iLocal_289[0], unk_0xA16EC202D9D35357(), 1) || unk_0xBF8ADDCADFC4691E(iLocal_289[0], unk_0xA16EC202D9D35357(), 1))
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
					if (!unk_0x2DE0B96E966FD817(iLocal_288))
					{
						unk_0x6D98AA46076A68BE(&iLocal_308);
						if (unk_0x95EDB2DEFA5BB405(iLocal_288, "random@getawaydriver", "idle_a", 3) || unk_0x95EDB2DEFA5BB405(iLocal_288, "random@getawaydriver", "idle_2_hands_up", 3))
						{
							unk_0x5B5659C49032B96C(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 10000, 2052, 4);
						unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, 5f, 3f, 1073741824, 0);
						unk_0x5B5659C49032B96C(0, "random@getawaydriver", "gesture_nod_yes_soft", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 3000);
						unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
						unk_0x963BB7C99350D827(iLocal_308);
						unk_0x0891776D0327B77A(iLocal_288, iLocal_308);
						unk_0x2AF68ED52DC74B7D(&iLocal_308);
						unk_0x2686393074E14730(iLocal_288, 1);
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
				unk_0xABC4F2A6D7D56CF4(1f);
				unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 0);
				if (!unk_0x2DE0B96E966FD817(uLocal_298[0]))
				{
					if (!unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
					{
						if (unk_0x14F9932776F21CC2(uLocal_298[0], unk_0xA16EC202D9D35357(), 4f, 4f, 4f, 0, 1, 0))
						{
							if (!func_170())
							{
								unk_0x4745F9C50C63A48C(uLocal_298[0], unk_0xA16EC202D9D35357(), 1000, 2052, 4);
								func_161(&uLocal_54, "REGETAU", "REAWA_THX", 4, 0, 0, 0);
								unk_0x5AE11BC36633DE4E(0);
							}
							else
							{
								if (!unk_0x2DE0B96E966FD817(uLocal_298[0]))
								{
									unk_0x2C4E82CF88213975(uLocal_298[0], 0);
								}
								if (!unk_0x2DE0B96E966FD817(uLocal_298[1]))
								{
									unk_0x2C4E82CF88213975(uLocal_298[1], 0);
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
						else if (!unk_0x14F9932776F21CC2(uLocal_298[0], unk_0xA16EC202D9D35357(), 120f, 120f, 120f, 0, 1, 0))
						{
							iVar18 = 0;
							iVar0 = 7;
							func_232(Var1, &iLocal_289, bVar12);
						}
					}
					else
					{
						unk_0x937785D9C1929236(uLocal_298[0]);
						func_159();
						unk_0x4EDE34FBADD967A6(0);
						iVar18 = 0;
						iVar0 = 7;
						func_232(Var1, &iLocal_289, bVar12);
					}
				}
				else if (unk_0x2DE0B96E966FD817(iLocal_288))
				{
					iVar18 = 0;
					iVar0 = 7;
					func_232(Var1, &iLocal_289, bVar12);
				}
			}
			if (bLocal_278)
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_288))
				{
					if (unk_0x14F9932776F21CC2(iLocal_288, unk_0xA16EC202D9D35357(), 4f, 4f, 4f, 0, 1, 0))
					{
						if (!func_170())
						{
							unk_0x4745F9C50C63A48C(iLocal_288, unk_0xA16EC202D9D35357(), 3000, 2048, 2);
							func_161(&uLocal_54, "REGETAU", "REAWA_THANKS", 4, 0, 0, 0);
						}
						else
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_288))
							{
								unk_0xA8BC819B54F5B824(iLocal_288, 1);
							}
							while (func_170())
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							while (!func_189())
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							unk_0x9D4C739200792759(1);
							func_185(9, 0);
							func_156(5);
							func_175(-1, 0);
							func_172();
							iVar18 = 0;
							iVar0 = 7;
							func_232(Var1, &iLocal_289, bVar12);
						}
					}
					else if (!unk_0x14F9932776F21CC2(iLocal_288, unk_0xA16EC202D9D35357(), 120f, 120f, 120f, 0, 1, 0))
					{
						iVar18 = 0;
						iVar0 = 7;
						func_232(Var1, &iLocal_289, bVar12);
					}
				}
				else if (unk_0x2DE0B96E966FD817(uLocal_298[0]))
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
					iVar17 = unk_0x09560C7DE2A384BD();
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
				unk_0xD0E2BFCE93AE3ABD(&uVar11, 4);
				unk_0xD0E2BFCE93AE3ABD(&uVar11, 1);
				unk_0xD0E2BFCE93AE3ABD(&uVar11, 5);
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
					{
						if (func_118())
						{
							if (unk_0xECFECDAD51A6184F(unk_0xB49BA83A5C224F40(), 0))
							{
								if ((unk_0x557C6E696286C67A(unk_0xB49BA83A5C224F40(), 0) && unk_0x557C6E696286C67A(unk_0xB49BA83A5C224F40(), 2)) && unk_0x557C6E696286C67A(unk_0xB49BA83A5C224F40(), 1))
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
				unk_0x7857140D5F527D72(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), &uVar13, &uVar16, 1, 1077936128, 0);
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
						if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
						{
							iVar18 = 0;
							iVar0 = 6;
							break;
						}
						if (!iLocal_281)
						{
							if (unk_0x5EA0BE0B1F9799CB(unk_0xA16EC202D9D35357(), Vector(28.4601f, -1565.293f, 61.5891f) - Vector(30f, 30f, 30f), Vector(28.4601f, -1565.293f, 61.5891f) + Vector(30f, 30f, 30f), 0, 1))
							{
								iVar19 = 0;
								while (iVar19 < iLocal_292)
								{
									if (!unk_0x2DE0B96E966FD817(iLocal_292[iVar19]))
									{
										unk_0xEA36CC2E7750344B(iLocal_292[iVar19], unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
										unk_0x2686393074E14730(iLocal_292[iVar19], 1);
									}
									iVar19++;
								}
								if (!unk_0x2DE0B96E966FD817(iLocal_288))
								{
									unk_0xEA36CC2E7750344B(iLocal_288, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
									unk_0x2686393074E14730(iLocal_288, 1);
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
			if (func_105() == 0)
			{
				func_104(&uLocal_54, 0, unk_0xA16EC202D9D35357(), "MICHAEL", 0, 1);
			}
			else if (func_105() == 1)
			{
				func_104(&uLocal_54, 0, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
			}
			else if (func_105() == 2)
			{
				func_104(&uLocal_54, 0, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
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
			uLocal_232 = unk_0xF8BF19C18CE5C2B2(unk_0x1788E93557766241());
			unk_0xC7210908156431E0(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0, 1);
			unk_0x4210B2DCFC2838AC(Local_233 - Vector(50f, 50f, 50f), Local_233 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
			unk_0x5F99D97514EB47F7(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0, 0);
			unk_0xD3590DDD9D1A8E0D(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0, 1);
			unk_0x939DA7EBCC6588FF(joaat("picador"));
			unk_0x939DA7EBCC6588FF(joaat("stanier"));
			unk_0x939DA7EBCC6588FF(joaat("patriot"));
			while ((!unk_0x5494F37F35C1D7D7(joaat("picador")) || !unk_0x5494F37F35C1D7D7(joaat("stanier"))) || !unk_0x5494F37F35C1D7D7(joaat("patriot")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iVar52[0] = unk_0x9BB6F54E415071A1(joaat("picador"), 59.5209f, -1547.228f, 28.4602f, 49.1762f, 1, 1);
			iVar52[1] = unk_0x9BB6F54E415071A1(joaat("stanier"), 33.3296f, -1577.537f, 28.2826f, 51.8183f, 1, 1);
			iVar52[2] = unk_0x9BB6F54E415071A1(joaat("patriot"), 48.8282f, -1582.706f, 28.4603f, 226.8345f, 1, 1);
			unk_0xAC894C93914464C2(iVar52[0]);
			unk_0xAC894C93914464C2(iVar52[1]);
			unk_0xAC894C93914464C2(iVar52[2]);
			if (iLocal_230 == 0)
			{
			}
			unk_0x0B29CE7F19BFE6C0("reCriminals", &iLocal_309);
			unk_0x0B29CE7F19BFE6C0("reShopKeep", &iLocal_310);
			unk_0x0B29CE7F19BFE6C0("reCops", &iLocal_311);
			unk_0x2966D41514EAE84B(5, iLocal_309, joaat("COP"));
			unk_0x2966D41514EAE84B(5, iLocal_311, iLocal_309);
			unk_0x2966D41514EAE84B(5, joaat("COP"), iLocal_309);
			unk_0x2966D41514EAE84B(1, joaat("COP"), iLocal_311);
			unk_0x2966D41514EAE84B(1, iLocal_311, joaat("COP"));
			(*uParam10)[0] = unk_0x6F9DE0DE8363ADF1(22, Param1.f_0, Var1[0 /*3*/], fVar8[0], 1, 1);
			unk_0x2C4E82CF88213975((*uParam10)[0], 1);
			unk_0xEA054561294AEC10(Param1.f_0);
			unk_0xA9465591B42213AE((*uParam10)[0], iLocal_309);
			unk_0x39272B2594E03395((*uParam10)[0], joaat("weapon_appistol"), -1, 1, 1);
			unk_0x065062839FBD7BCF((*uParam10)[0], unk_0x444ECD635D5FD45F(800, 2000));
			unk_0xA1478EBA54DDE31B((*uParam10)[0], 206, 1);
			unk_0xDEB0A02F25120B62((*uParam10)[0], 2, 0);
			unk_0xDEB0A02F25120B62((*uParam10)[0], 1024, 1);
			unk_0xDEB0A02F25120B62((*uParam10)[0], 65536, 1);
			unk_0x42544C0CC4949BD5((*uParam10)[0], 9, 1, 0, 0);
			func_104(&uLocal_54, 2, (*uParam10)[0], "REGETRobber2", 0, 1);
			(*uParam10)[1] = unk_0x6F9DE0DE8363ADF1(22, Param1.f_1, Var1[1 /*3*/], fVar8[1], 1, 1);
			unk_0x2C4E82CF88213975((*uParam10)[1], 1);
			unk_0xEA054561294AEC10(Param1.f_1);
			unk_0xA9465591B42213AE((*uParam10)[1], iLocal_309);
			unk_0x39272B2594E03395((*uParam10)[1], joaat("weapon_pistol"), -1, 1, 1);
			unk_0x065062839FBD7BCF((*uParam10)[1], unk_0x444ECD635D5FD45F(800, 2000));
			unk_0xA1478EBA54DDE31B((*uParam10)[1], 206, 1);
			unk_0xDEB0A02F25120B62((*uParam10)[1], 2, 0);
			unk_0xDEB0A02F25120B62((*uParam10)[1], 1024, 1);
			unk_0xDEB0A02F25120B62((*uParam10)[1], 65536, 1);
			unk_0x42544C0CC4949BD5((*uParam10)[1], 0, 5, 0, 0);
			unk_0x42544C0CC4949BD5((*uParam10)[1], 1, 1, 0, 0);
			unk_0x42544C0CC4949BD5((*uParam10)[1], 2, 1, 0, 0);
			unk_0x42544C0CC4949BD5((*uParam10)[1], 3, 6, 0, 0);
			unk_0x42544C0CC4949BD5((*uParam10)[1], 4, 6, 2, 0);
			unk_0x42544C0CC4949BD5((*uParam10)[1], 6, 1, 0, 0);
			unk_0x42544C0CC4949BD5((*uParam10)[1], 8, 0, 0, 0);
			unk_0x42544C0CC4949BD5((*uParam10)[1], 9, 0, 0, 0);
			unk_0x42544C0CC4949BD5((*uParam10)[1], 10, 1, 0, 0);
			unk_0x3E99D575EE07FDB3((*uParam10)[1], "PACKIE_AI_Norm_Part1_Booth");
			func_104(&uLocal_54, 1, (*uParam10)[1], "PACKIE", 0, 1);
			iLocal_288 = unk_0x6F9DE0DE8363ADF1(4, Param1.f_2, Var11, fVar14, 1, 1);
			unk_0xEA054561294AEC10(Param1.f_2);
			unk_0x2C4E82CF88213975(iLocal_288, 1);
			unk_0xA9465591B42213AE(iLocal_288, iLocal_310);
			unk_0x3E99D575EE07FDB3(iLocal_288, "A_M_Y_Business_01_CHINESE_MINI_01");
			func_104(&uLocal_54, 3, iLocal_288, "StoreOwner", 0, 1);
			iLocal_292[0] = unk_0x6F9DE0DE8363ADF1(5, Param1.f_3, 62.8929f, -1575.52f, 28.6027f, 326.1814f, 1, 1);
			unk_0xEA054561294AEC10(Param1.f_3);
			unk_0x15EBFEEB77BF84B7(iLocal_292[0], 17, 1);
			unk_0xFC75211D7BD0539E(iLocal_292[0], -1);
			iLocal_292[2] = unk_0x6F9DE0DE8363ADF1(5, Param1.f_3, 61.6538f, -1555.256f, 28.4601f, 206.7004f, 1, 1);
			unk_0xEA054561294AEC10(Param1.f_3);
			unk_0x15EBFEEB77BF84B7(iLocal_292[2], 17, 1);
			unk_0x1DCF0D2934DBC782(iLocal_292[2], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, 0);
			iLocal_292[3] = unk_0x6F9DE0DE8363ADF1(4, Param1.f_4, 75.9343f, -1556.306f, 28.6028f, 147.2908f, 1, 1);
			unk_0xEA054561294AEC10(Param1.f_4);
			unk_0x15EBFEEB77BF84B7(iLocal_292[3], 17, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (((((!unk_0xE44A580B551C3645(iLocal_288) && !unk_0xE44A580B551C3645(iLocal_292[0])) && !unk_0xE44A580B551C3645(iLocal_292[2])) && !unk_0xE44A580B551C3645(iLocal_292[3])) && !unk_0xE44A580B551C3645((*uParam10)[0])) && !unk_0xE44A580B551C3645((*uParam10)[1]))
			{
				if (((((unk_0x4AF3397B0669CEFA(iLocal_288) && unk_0x4AF3397B0669CEFA(iLocal_292[0])) && unk_0x4AF3397B0669CEFA(iLocal_292[2])) && unk_0x4AF3397B0669CEFA(iLocal_292[3])) && unk_0x4AF3397B0669CEFA((*uParam10)[0])) && unk_0x4AF3397B0669CEFA((*uParam10)[1]))
				{
					unk_0x3D28909AF30D70F4("random@getawaydriver@thugs");
					unk_0x3D28909AF30D70F4("combat@gestures@pistol@halt");
					unk_0x3D28909AF30D70F4("misslamar1ig_20");
					unk_0x3D28909AF30D70F4("random@getawaydriver");
					while (((!unk_0x6C47E32491756A1A("random@getawaydriver@thugs") || !unk_0x6C47E32491756A1A("combat@gestures@pistol@halt")) || !unk_0x6C47E32491756A1A("misslamar1ig_20")) || !unk_0x6C47E32491756A1A("random@getawaydriver"))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (!unk_0x2DE0B96E966FD817(iLocal_288))
					{
						unk_0xE3E2D9DEE27396C5(iLocal_288, -1, 0, -1, 0);
						if (!unk_0x2DE0B96E966FD817((*uParam10)[0]))
						{
							unk_0x5B5659C49032B96C((*uParam10)[0], "random@getawaydriver@thugs", "base_a", 4f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0x4745F9C50C63A48C((*uParam10)[0], unk_0xA16EC202D9D35357(), -1, 2052, 4);
						}
						if (!unk_0x2DE0B96E966FD817((*uParam10)[1]))
						{
							unk_0x5B5659C49032B96C((*uParam10)[1], "random@getawaydriver@thugs", "base_b", 4f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0x4745F9C50C63A48C((*uParam10)[1], unk_0xA16EC202D9D35357(), -1, 2052, 4);
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
				if (!unk_0x2DE0B96E966FD817(iLocal_292[0]))
				{
					func_102(iLocal_292[0], "GENERIC_SHOCKED_HIGH", 24);
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 1000)
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_292[2]))
				{
					func_102(iLocal_292[2], "GENERIC_FRIGHTENED_HIGH", 24);
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 2000)
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_292[3]))
				{
					func_102(iLocal_292[3], "GENERIC_FRIGHTENED_HIGH", 24);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 81.71976f, -1530.834f, 28.17651f, 26.78526f, -1595.693f, 58.29443f, 32.875f, 0, 1, 0))
			{
				if (!iLocal_281)
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_292[0]))
					{
						unk_0x0676D83B2FE460E1(iLocal_292[0], Local_233, 200f, -1, 0, 0);
					}
					if (!unk_0x2DE0B96E966FD817(iLocal_292[2]))
					{
						unk_0x6D98AA46076A68BE(&iLocal_308);
						unk_0x976B05703BFD8E48(0, 250);
						unk_0x0676D83B2FE460E1(0, Local_233, 200f, -1, 0, 0);
						unk_0x963BB7C99350D827(iLocal_308);
						unk_0x0891776D0327B77A(iLocal_292[2], iLocal_308);
						unk_0x2AF68ED52DC74B7D(&iLocal_308);
					}
					if (!unk_0x2DE0B96E966FD817(iLocal_292[3]))
					{
						unk_0x6D98AA46076A68BE(&iLocal_308);
						unk_0x976B05703BFD8E48(0, 500);
						unk_0x0676D83B2FE460E1(0, Local_233, 200f, -1, 0, 0);
						unk_0x963BB7C99350D827(iLocal_308);
						unk_0x0891776D0327B77A(iLocal_292[3], iLocal_308);
						unk_0x2AF68ED52DC74B7D(&iLocal_308);
					}
					iLocal_281 = 1;
				}
			}
			if (func_67(uParam10, unk_0xB49BA83A5C224F40()))
			{
				*iParam0 = 4;
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			if (unk_0xCA34E4192F6CE2E9(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)) || unk_0xD398EB65A5D325DF(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x2DE0B96E966FD817((*uParam10)[0]) && !unk_0x2DE0B96E966FD817((*uParam10)[1]))
				{
					unk_0xEA36CC2E7750344B((*uParam10)[0], unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
					unk_0xEA36CC2E7750344B((*uParam10)[1], unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
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
				if ((!unk_0x2DE0B96E966FD817((*uParam10)[0]) && !unk_0x2DE0B96E966FD817((*uParam10)[1])) && !unk_0x2DE0B96E966FD817(iLocal_288))
				{
				}
				if (unk_0x538DF9E5B1DF01EB(iLocal_288))
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_288))
					{
						func_161(&uLocal_54, "REGETAU", "REAWA_DOWN", 4, 0, 0, 0);
						unk_0x4745F9C50C63A48C((*uParam10)[0], unk_0xA16EC202D9D35357(), 10000, 2052, 4);
						unk_0x6D98AA46076A68BE(&iLocal_308);
						unk_0x5B5659C49032B96C(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
						unk_0x5B5659C49032B96C(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
						unk_0x963BB7C99350D827(iLocal_308);
						unk_0x0891776D0327B77A(iLocal_288, iLocal_308);
						unk_0x2AF68ED52DC74B7D(&iLocal_308);
					}
					*iParam0 = 5;
				}
			}
			if (func_66())
			{
				*iParam0 = 18;
			}
			if (((unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0) || unk_0x5852EAA363612207(unk_0xA16EC202D9D35357())) || unk_0xCA34E4192F6CE2E9(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f))) || unk_0xD398EB65A5D325DF(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x2DE0B96E966FD817((*uParam10)[0]) && !unk_0x2DE0B96E966FD817((*uParam10)[1]))
				{
					unk_0xEA36CC2E7750344B((*uParam10)[0], unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
					unk_0xEA36CC2E7750344B((*uParam10)[1], unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
					func_159();
					unk_0x4EDE34FBADD967A6(0);
					func_161(&uLocal_54, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 5:
			if (unk_0x2DE0B96E966FD817(iLocal_288))
			{
				if (!unk_0x2DE0B96E966FD817((*uParam10)[0]) && !unk_0x2DE0B96E966FD817((*uParam10)[1]))
				{
					unk_0x1CAB36EC4E43E586((*uParam10)[0], unk_0xA16EC202D9D35357(), -1);
					unk_0x1CAB36EC4E43E586((*uParam10)[1], unk_0xA16EC202D9D35357(), -1);
				}
			}
			else if (unk_0x221AC1EF116F6053(iLocal_288, 242628503) != 1 && unk_0x221AC1EF116F6053(iLocal_288, 242628503) != 0)
			{
				unk_0x6D98AA46076A68BE(&iLocal_308);
				unk_0x5B5659C49032B96C(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
				unk_0x5B5659C49032B96C(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x963BB7C99350D827(iLocal_308);
				unk_0x0891776D0327B77A(iLocal_288, iLocal_308);
				unk_0x2AF68ED52DC74B7D(&iLocal_308);
			}
			if (!unk_0x2DE0B96E966FD817(iLocal_289[0]) && !unk_0x2DE0B96E966FD817(iLocal_289[1]))
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
				{
					if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
					{
						if (unk_0x5AF66EDEBFA76B9B(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) < 0.1f)
						{
							if (func_118() && unk_0x66679628FFE34E84(unk_0xB49BA83A5C224F40()))
							{
								unk_0x648ADF4C7FD7F710(unk_0xA609E58449080951(unk_0xB49BA83A5C224F40()), 3);
								if (!unk_0x2DE0B96E966FD817(iLocal_288))
								{
									Local_272 = { unk_0xBF8499F46AD9093A(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0) };
									Var56 = { unk_0xA783C6007920169C(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), -1.5f, -1.5f, 0f) };
									Var59 = { unk_0xA783C6007920169C(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 1.5f, 0f, 0f) };
									unk_0x6D98AA46076A68BE(&iLocal_308);
									unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 10000, 2096, 4);
									unk_0x0CDB4D41769B8C93(0, iLocal_288, 1500, 0);
									unk_0x8F194B9DA3131D61(0, Var56, iLocal_288, 3f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
									unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 10000, 2096, 4);
									unk_0x963BB7C99350D827(iLocal_308);
									unk_0x0891776D0327B77A(iLocal_289[0], iLocal_308);
									unk_0x2AF68ED52DC74B7D(&iLocal_308);
									unk_0x6D98AA46076A68BE(&iLocal_308);
									unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 10000, 2096, 4);
									unk_0x0CDB4D41769B8C93(0, iLocal_288, 2500, 0);
									unk_0x8F194B9DA3131D61(0, Var59, iLocal_288, 3f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
									unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 10000, 2096, 4);
									unk_0x963BB7C99350D827(iLocal_308);
									unk_0x0891776D0327B77A(iLocal_289[1], iLocal_308);
									unk_0x2AF68ED52DC74B7D(&iLocal_308);
								}
								else
								{
									unk_0xE4C80CFABEAEED8F(iLocal_289[0], func_65());
									unk_0xE4C80CFABEAEED8F(iLocal_289[1], func_65());
									unk_0x5129CFBCCCCA8250(iLocal_289[0], 1);
									unk_0x5129CFBCCCCA8250(iLocal_289[1], 0);
									if (unk_0xA609E58449080951(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357())) == joaat("bus"))
									{
										if (!unk_0x557C6E696286C67A(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 1))
										{
											uVar62 = unk_0xD8A521688BDBE867(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 1);
											if (!unk_0x22349EC06EA5B08B(uVar62))
											{
												unk_0x7B9576B4E099FB1F(uVar62, 1, 0);
												unk_0x51A89CCC8A5317D0(&uVar62);
											}
										}
										if (!unk_0x557C6E696286C67A(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 0))
										{
											uVar62 = unk_0xD8A521688BDBE867(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 0);
											if (!unk_0x22349EC06EA5B08B(uVar62))
											{
												unk_0x7B9576B4E099FB1F(uVar62, 1, 0);
												unk_0x51A89CCC8A5317D0(&uVar62);
											}
										}
									}
									unk_0x59DFDC536FDF0000(iLocal_289[0], 1);
									unk_0x59DFDC536FDF0000(iLocal_289[1], 1);
								}
								*iParam0 = 6;
							}
							else if (!iLocal_279)
							{
								if (!func_170())
								{
									func_161(&uLocal_54, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
									unk_0x4745F9C50C63A48C(iLocal_289[1], unk_0xA16EC202D9D35357(), -1, 2096, 4);
									iLocal_279 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), (*uParam10)[1], 10f, 10f, 10f, 0, 1, 0))
				{
					if (!iLocal_279)
					{
						if (!func_170())
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
							unk_0x4745F9C50C63A48C(iLocal_289[1], unk_0xA16EC202D9D35357(), -1, 2096, 4);
							iLocal_279 = 1;
						}
					}
				}
			}
			if (iLocal_279 || iLocal_280)
			{
				if (unk_0x5AF66EDEBFA76B9B(unk_0xA16EC202D9D35357()) < 0.2f)
				{
					if (iLocal_229 == -1)
					{
						iLocal_229 = unk_0x09560C7DE2A384BD();
					}
				}
				else
				{
					iLocal_229 = -1;
				}
				if (iLocal_229 != -1 && unk_0x09560C7DE2A384BD() > iLocal_229 + 10000)
				{
					func_159();
					unk_0x4EDE34FBADD967A6(0);
					func_161(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					if (!unk_0x2DE0B96E966FD817(iLocal_289[0]))
					{
						unk_0xEA36CC2E7750344B(iLocal_289[0], unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
						unk_0x2686393074E14730(iLocal_289[0], 1);
						unk_0x4EDE34FBADD967A6(0);
						unk_0x6B3DDEE91652BE59(&(iLocal_289[0]));
					}
					if (!unk_0x2DE0B96E966FD817(iLocal_289[1]))
					{
						unk_0xEA36CC2E7750344B(iLocal_289[1], unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
						unk_0x2686393074E14730(iLocal_289[1], 1);
						unk_0x4EDE34FBADD967A6(0);
						unk_0x6B3DDEE91652BE59(&(iLocal_289[1]));
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
			if (((unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0) || unk_0x5852EAA363612207(unk_0xA16EC202D9D35357())) || unk_0xCA34E4192F6CE2E9(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f))) || unk_0xD398EB65A5D325DF(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x2DE0B96E966FD817((*uParam10)[0]) && !unk_0x2DE0B96E966FD817((*uParam10)[1]))
				{
					unk_0xEA36CC2E7750344B((*uParam10)[0], unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
					unk_0xEA36CC2E7750344B((*uParam10)[1], unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
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
			if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
			{
				if (!func_63(uParam10, unk_0xB49BA83A5C224F40(), 120f) || !bLocal_275)
				{
					if (!unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_272, 2f, 2f, 2f, 0, 1, 0))
					{
						if (!unk_0x2DE0B96E966FD817(iLocal_289[0]) && !unk_0x2DE0B96E966FD817(iLocal_289[1]))
						{
							if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
							{
								if (func_118() && unk_0x66679628FFE34E84(unk_0xB49BA83A5C224F40()))
								{
									unk_0x648ADF4C7FD7F710(unk_0xA609E58449080951(unk_0xB49BA83A5C224F40()), 3);
									while (!unk_0x8AFC458D338220C6(unk_0xA609E58449080951(unk_0xB49BA83A5C224F40())))
									{
										unk_0x4EDE34FBADD967A6(0);
									}
									if (!unk_0x2DE0B96E966FD817(iLocal_289[0]) && !unk_0x2DE0B96E966FD817(iLocal_289[1]))
									{
										if (!unk_0x9A132E8DFAE1F524(iLocal_289[0]) && !unk_0x9A132E8DFAE1F524(iLocal_289[1]))
										{
											unk_0x937785D9C1929236(iLocal_289[0]);
											unk_0x937785D9C1929236(iLocal_289[1]);
											unk_0x4745F9C50C63A48C(iLocal_289[1], unk_0xA16EC202D9D35357(), 10000, 2052, 4);
											unk_0xE4C80CFABEAEED8F(iLocal_289[0], func_65());
											unk_0xE4C80CFABEAEED8F(iLocal_289[1], func_65());
											unk_0x5129CFBCCCCA8250(iLocal_289[0], 1);
											unk_0x5129CFBCCCCA8250(iLocal_289[1], 0);
											if (unk_0xA609E58449080951(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357())) == joaat("bus"))
											{
												if (!unk_0x557C6E696286C67A(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 1))
												{
													uVar63 = unk_0xD8A521688BDBE867(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 1);
													if (!unk_0x22349EC06EA5B08B(uVar63))
													{
														unk_0x7B9576B4E099FB1F(uVar63, 1, 0);
														unk_0x51A89CCC8A5317D0(&uVar63);
													}
												}
												if (!unk_0x557C6E696286C67A(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 0))
												{
													uVar63 = unk_0xD8A521688BDBE867(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 0);
													if (!unk_0x22349EC06EA5B08B(uVar63))
													{
														unk_0x7B9576B4E099FB1F(uVar63, 1, 0);
														unk_0x51A89CCC8A5317D0(&uVar63);
													}
												}
											}
											unk_0x59DFDC536FDF0000(iLocal_289[0], 1);
											unk_0x59DFDC536FDF0000(iLocal_289[1], 1);
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
							else if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), (*uParam10)[1], 10f, 10f, 10f, 0, 1, 0))
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
			if (!unk_0x2DE0B96E966FD817(iLocal_289[0]))
			{
				if (!unk_0x9A132E8DFAE1F524(iLocal_289[0]))
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_288))
					{
						if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
						{
							if ((unk_0x221AC1EF116F6053(iLocal_289[0], 242628503) != 1 && unk_0x221AC1EF116F6053(iLocal_289[0], 242628503) != 0) || unk_0x221AC1EF116F6053(iLocal_289[0], 242628503) == 7)
							{
								unk_0xE4C80CFABEAEED8F(iLocal_289[0], func_65());
								unk_0x59DFDC536FDF0000(iLocal_289[0], 1);
							}
						}
					}
					else
					{
						unk_0xE4C80CFABEAEED8F(iLocal_289[0], func_65());
						unk_0x59DFDC536FDF0000(iLocal_289[0], 1);
					}
				}
				else
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if ((!unk_0x5E01840EE8DA8D5B(iLocal_289[0]) && !unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_272, 2f, 2f, 2f, 0, 1, 0)) && !unk_0x965556ACF6A83973(iLocal_289[0], unk_0xBF8499F46AD9093A(unk_0xB49BA83A5C224F40(), 1), 2.5f, 2.5f, 2.5f, 0, 1, 0))
						{
							unk_0x0015951DD86AA929(iLocal_289[0], 2f);
						}
					}
					if (unk_0x221AC1EF116F6053(iLocal_289[0], -875674219) == 1 || unk_0x221AC1EF116F6053(iLocal_289[0], -875674219) == 0)
					{
					}
				}
			}
			if (!unk_0x2DE0B96E966FD817(iLocal_289[1]))
			{
				if (!unk_0x9A132E8DFAE1F524(iLocal_289[1]))
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_288))
					{
						if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
						{
							if ((unk_0x221AC1EF116F6053(iLocal_289[1], 242628503) != 1 && unk_0x221AC1EF116F6053(iLocal_289[1], 242628503) != 0) || unk_0x221AC1EF116F6053(iLocal_289[1], 242628503) == 7)
							{
								unk_0xE4C80CFABEAEED8F(iLocal_289[1], func_65());
								unk_0x59DFDC536FDF0000(iLocal_289[1], 1);
							}
						}
					}
					else
					{
						unk_0xE4C80CFABEAEED8F(iLocal_289[1], func_65());
						unk_0x59DFDC536FDF0000(iLocal_289[1], 1);
					}
				}
				else
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if ((!unk_0x5E01840EE8DA8D5B(iLocal_289[1]) && !unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_272, 2f, 2f, 2f, 0, 1, 0)) && !unk_0x965556ACF6A83973(iLocal_289[1], unk_0xBF8499F46AD9093A(unk_0xB49BA83A5C224F40(), 1), 2.5f, 2.5f, 2.5f, 0, 1, 0))
						{
							unk_0x0015951DD86AA929(iLocal_289[1], 2f);
						}
					}
					if (unk_0x221AC1EF116F6053(iLocal_289[1], -875674219) == 1 || unk_0x221AC1EF116F6053(iLocal_289[1], -875674219) == 0)
					{
					}
				}
			}
			if (!bLocal_275)
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					if ((!unk_0xE44A580B551C3645(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) && !unk_0x2DE0B96E966FD817(iLocal_289[0])) && !unk_0x2DE0B96E966FD817(iLocal_289[1]))
					{
						if ((unk_0xAD203DB71ADF6E57(iLocal_289[0], unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0) && !unk_0xAD203DB71ADF6E57(iLocal_289[1], unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0)) && !unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_289[1], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_275 = true;
						}
						if ((unk_0xAD203DB71ADF6E57(iLocal_289[1], unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0) && !unk_0xAD203DB71ADF6E57(iLocal_289[0], unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0)) && !unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_289[0], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_275 = true;
						}
					}
				}
			}
			if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
			{
				if (func_63(uParam10, unk_0xB49BA83A5C224F40(), 120f) || bLocal_275)
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_288))
					{
						unk_0x6D98AA46076A68BE(&iLocal_308);
						unk_0x5B5659C49032B96C(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
						unk_0x963BB7C99350D827(iLocal_308);
						unk_0x0891776D0327B77A(iLocal_288, iLocal_308);
						unk_0x2AF68ED52DC74B7D(&iLocal_308);
						unk_0x2686393074E14730(iLocal_288, 1);
						unk_0x6B3DDEE91652BE59(&iLocal_288);
					}
					func_62();
					if (!unk_0x7A98E0DD2E6FAB7A(7.3162f, -1544.838f, 28.2558f, 3f))
					{
						iLocal_306 = unk_0x9BB6F54E415071A1(joaat("police3"), 7.3162f, -1544.838f, 28.2558f, 251.9956f, 1, 1);
						uLocal_302[0] = unk_0x793482A351850A4F(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						uLocal_302[1] = unk_0x793482A351850A4F(iLocal_306, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						unk_0x39272B2594E03395(uLocal_302[0], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x39272B2594E03395(uLocal_302[1], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x383868E60E28653A(uLocal_302[0], 0);
					}
					if (!unk_0x7A98E0DD2E6FAB7A(91.6602f, -1541.899f, 28.3422f, 3f))
					{
						iLocal_306 = unk_0x9BB6F54E415071A1(joaat("police3"), 91.6602f, -1541.899f, 28.3422f, 127.3064f, 1, 1);
						uLocal_302[0] = unk_0x793482A351850A4F(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						uLocal_302[1] = unk_0x793482A351850A4F(iLocal_306, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						unk_0x39272B2594E03395(uLocal_302[0], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x39272B2594E03395(uLocal_302[1], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x383868E60E28653A(uLocal_302[0], 0);
					}
					if (!unk_0x7A98E0DD2E6FAB7A(32.8029f, -1594.4f, 28.4262f, 3f))
					{
						iLocal_306 = unk_0x9BB6F54E415071A1(joaat("police3"), 32.8029f, -1594.4f, 28.4262f, 337.7429f, 1, 1);
						uLocal_302[0] = unk_0x793482A351850A4F(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						uLocal_302[1] = unk_0x793482A351850A4F(iLocal_306, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						unk_0x39272B2594E03395(uLocal_302[0], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x39272B2594E03395(uLocal_302[1], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x383868E60E28653A(uLocal_302[0], 0);
					}
					unk_0x02FE74511D2ACB80("SCRIPTED_SCANNER_REPORT_GETAWAY_01", 0f);
					unk_0x2C7188DECD3E4909(unk_0xB49BA83A5C224F40(), 1);
					unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 2, 0);
					unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
					unk_0xE16BC4BCFA887274(unk_0x1788E93557766241(), 0f);
					unk_0x2966D41514EAE84B(5, joaat("COP"), iLocal_309);
					unk_0x2966D41514EAE84B(5, iLocal_309, joaat("COP"));
					unk_0x4EDE34FBADD967A6(1000);
					if (!bLocal_275)
					{
						func_161(&uLocal_54, "REGETAU", "REAWA_COPS2", 4, 0, 0, 0);
					}
					if (!unk_0x2DE0B96E966FD817((*uParam10)[iVar48]))
					{
						unk_0xFAF4121083211853((*uParam10)[iVar48]);
					}
					iLocal_223 = unk_0x09560C7DE2A384BD();
					*iParam0 = 8;
				}
			}
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 95.0746f, -1520.042f, 28.3593f, -5.9698f, -1641.819f, 38.4042f, 98.1875f, 0, 1, 0))
			{
				if (!unk_0x2DE0B96E966FD817((*uParam10)[0]) && !unk_0x2DE0B96E966FD817((*uParam10)[1]))
				{
					unk_0xEA36CC2E7750344B((*uParam10)[0], unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
					unk_0xEA36CC2E7750344B((*uParam10)[1], unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
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
			if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0)
			{
				unk_0x2966D41514EAE84B(1, joaat("COP"), iLocal_309);
				unk_0x2966D41514EAE84B(1, iLocal_309, joaat("COP"));
				if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
				{
					unk_0x2C7188DECD3E4909(unk_0xB49BA83A5C224F40(), 0);
				}
				if (!unk_0xE44A580B551C3645(iLocal_306))
				{
					unk_0x3A3C5A6572B3C611(&iLocal_306);
				}
				if (!unk_0x2DE0B96E966FD817(uLocal_302[0]))
				{
					unk_0x6B3DDEE91652BE59(&(uLocal_302[0]));
				}
				if (!unk_0x2DE0B96E966FD817(uLocal_302[1]))
				{
					unk_0x6B3DDEE91652BE59(&(uLocal_302[1]));
				}
				func_60(uLocal_52);
				*iParam0 = 10;
			}
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()) && !unk_0x2DE0B96E966FD817((*uParam10)[iVar48]))
				{
					if (!unk_0xD9275EB8FA656B5C((*uParam10)[iVar48], unk_0xB49BA83A5C224F40()))
					{
						if (!unk_0x5660C8AFDD9C1721(uLocal_284[iVar48]))
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
			if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
			{
				unk_0x2966D41514EAE84B(5, joaat("COP"), iLocal_309);
				unk_0x2966D41514EAE84B(5, iLocal_309, joaat("COP"));
				func_60(uLocal_52);
				*iParam0 = 8;
			}
			else
			{
				unk_0x2966D41514EAE84B(1, joaat("COP"), iLocal_309);
				unk_0x2966D41514EAE84B(1, iLocal_309, joaat("COP"));
				Var49 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
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
					if (!unk_0x5660C8AFDD9C1721(uLocal_287))
					{
						uLocal_287 = func_52(Local_269, 0);
						unk_0x2025496D9184D312(uLocal_287, 269);
						func_49();
					}
				}
				iLocal_223 = unk_0x09560C7DE2A384BD();
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
			if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
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
				if (!unk_0x2DE0B96E966FD817(iLocal_289[0]) && !unk_0x2DE0B96E966FD817(iLocal_289[1]))
				{
					if ((unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Var15[iLocal_222 /*3*/], Global_19, 1, 1, 0) && unk_0x965556ACF6A83973(iLocal_289[0], Var15[iLocal_222 /*3*/], 20f, 20f, 20f, 0, 1, 0)) && unk_0x965556ACF6A83973(iLocal_289[1], Var15[iLocal_222 /*3*/], 20f, 20f, 20f, 0, 1, 0))
					{
						func_60(uLocal_52);
						iVar48 = 0;
						while (iVar48 <= (*uParam10 - 1))
						{
							if (iLocal_219)
							{
								unk_0x7DDC5160036EE766(unk_0xB49BA83A5C224F40(), 10.5f, 2, 0);
								unk_0x4EDE34FBADD967A6(1000);
								iLocal_219 = 0;
							}
							if (!unk_0x2DE0B96E966FD817((*uParam10)[iVar48]))
							{
								unk_0xFAF4121083211853((*uParam10)[iVar48]);
								unk_0xA7130AF256ED96A1((*uParam10)[iVar48]);
								unk_0xA65C8C818DE035EE(uLocal_232);
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
				if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()) && !unk_0x2DE0B96E966FD817((*uParam10)[iVar48]))
				{
					if (!unk_0xD9275EB8FA656B5C((*uParam10)[iVar48], unk_0xB49BA83A5C224F40()))
					{
						if (!unk_0x5660C8AFDD9C1721(uLocal_284[iVar48]))
						{
							uLocal_284[iVar48] = func_57((*uParam10)[iVar48], 0, 145);
						}
					}
				}
				iVar48++;
			}
			func_64(uParam10, 120f);
			func_61();
			if (unk_0x5AF66EDEBFA76B9B(unk_0xA16EC202D9D35357()) < 0.2f)
			{
				if (iLocal_229 == -1)
				{
					iLocal_229 = unk_0x09560C7DE2A384BD();
				}
			}
			else
			{
				iLocal_229 = -1;
			}
			if (iLocal_229 != -1 && unk_0x09560C7DE2A384BD() > (iLocal_229 + 60000))
			{
				func_159();
				unk_0x4EDE34FBADD967A6(0);
				func_161(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
				if (!unk_0x2DE0B96E966FD817(iLocal_289[0]))
				{
					unk_0xEA36CC2E7750344B(iLocal_289[0], unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
					unk_0x2686393074E14730(iLocal_289[0], 1);
				}
				if (!unk_0x2DE0B96E966FD817(iLocal_289[1]))
				{
					unk_0xEA36CC2E7750344B(iLocal_289[1], unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
					unk_0x2686393074E14730(iLocal_289[1], 1);
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
				unk_0xA7130AF256ED96A1(iLocal_289[0]);
				unk_0xA7130AF256ED96A1(iLocal_289[1]);
				unk_0xB81B20C00BEE80D3(unk_0x1788E93557766241());
				func_159();
				unk_0x4EDE34FBADD967A6(0);
				func_161(&uLocal_54, "REGETAU", "REAWA_COPS3", 4, 0, 0, 0);
				if (!unk_0x2DE0B96E966FD817((*uParam10)[0]))
				{
					unk_0x6D98AA46076A68BE(&iLocal_308);
					unk_0xBB5AA994E06B28E2(0, 0, 4194304);
					unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
					unk_0x963BB7C99350D827(iLocal_308);
					unk_0x0891776D0327B77A((*uParam10)[0], iLocal_308);
					unk_0x2AF68ED52DC74B7D(&iLocal_308);
					unk_0x2686393074E14730((*uParam10)[0], 1);
				}
				if (!unk_0x2DE0B96E966FD817((*uParam10)[1]))
				{
					unk_0x6D98AA46076A68BE(&iLocal_308);
					unk_0xBB5AA994E06B28E2(0, 500, 4194304);
					unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
					unk_0x963BB7C99350D827(iLocal_308);
					unk_0x0891776D0327B77A((*uParam10)[1], iLocal_308);
					unk_0x2AF68ED52DC74B7D(&iLocal_308);
					unk_0x2686393074E14730((*uParam10)[1], 1);
				}
				*iParam0 = 20;
			}
			break;
		
		case 13:
			if (unk_0x5AF66EDEBFA76B9B(unk_0xA16EC202D9D35357()) < 5f)
			{
				iVar48 = 0;
				while (iVar48 <= (*uParam10 - 1))
				{
					if (!unk_0x2DE0B96E966FD817((*uParam10)[iVar48]))
					{
						if (unk_0x221AC1EF116F6053((*uParam10)[iVar48], 242628503) != 1 || unk_0x221AC1EF116F6053((*uParam10)[iVar48], 242628503) != 0)
						{
							if (!unk_0x2DE0B96E966FD817((*uParam10)[iVar48]))
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
				if (!unk_0x2DE0B96E966FD817((*uParam10)[0]))
				{
					unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), (*uParam10)[iVar48], 4000, 2048, 2);
					unk_0x6D98AA46076A68BE(&iVar0);
					unk_0xBB5AA994E06B28E2(0, 0, 4194816);
					unk_0x353F4B963593F141(0, Var32[iLocal_222 /*3*/], 2f, -1, 1048576000, 0, 1193033728);
					unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
					unk_0x963BB7C99350D827(iVar0);
					unk_0x0891776D0327B77A((*uParam10)[0], iVar0);
					unk_0x2AF68ED52DC74B7D(&iVar0);
					if (!unk_0x2DE0B96E966FD817((*uParam10)[1]))
					{
						unk_0x6D98AA46076A68BE(&iVar0);
						unk_0xBB5AA994E06B28E2(0, 2000, 4194816);
						unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 3000, 2052, 2);
						unk_0x353F4B963593F141(0, Var32[iLocal_222 /*3*/], 2f, -1, 1048576000, 0, 1193033728);
						unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 200f, -1, 0, 0);
						unk_0x963BB7C99350D827(iVar0);
						unk_0x0891776D0327B77A((*uParam10)[1], iVar0);
						unk_0x2AF68ED52DC74B7D(&iVar0);
					}
					iVar0 = 0;
					unk_0x2686393074E14730((*uParam10)[iVar48], 1);
					unk_0x4745F9C50C63A48C((*uParam10)[iVar48], unk_0xA16EC202D9D35357(), 4000, 2052, 2);
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
				if (!unk_0x2DE0B96E966FD817((*uParam10)[1]))
				{
					if (!iLocal_219)
					{
						unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
						iLocal_219 = 1;
					}
					func_17(func_105(), 1, 1000, 0, 1);
					*bParam12 = 1;
				}
			}
			else if (!unk_0x2DE0B96E966FD817((*uParam10)[0]) && !unk_0x2DE0B96E966FD817((*uParam10)[1]))
			{
				if (!unk_0x202EF5D8203705EF((*uParam10)[0], 0) && !unk_0x202EF5D8203705EF((*uParam10)[1], 0))
				{
					unk_0xEDC11454B9658FE1();
					unk_0x574CC08ACCB0F5FC(unk_0xA16EC202D9D35357());
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
			unk_0x2966D41514EAE84B(5, iLocal_309, joaat("player"));
			unk_0x2966D41514EAE84B(1, iLocal_309, iLocal_309);
			unk_0xB81B20C00BEE80D3(unk_0x1788E93557766241());
			unk_0xABC4F2A6D7D56CF4(0f);
			unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 1);
			iVar65 = 0;
			while (iVar65 < iLocal_289)
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_289[iVar65]))
				{
					if (unk_0x5660C8AFDD9C1721(uLocal_284[iVar65]))
					{
						unk_0xB6FB9702660D84F6(&(uLocal_284[iVar65]));
						if (unk_0x202EF5D8203705EF(iLocal_289[iVar65], 0))
						{
							unk_0xBB5AA994E06B28E2(iLocal_289[iVar65], 0, 0);
						}
						if (unk_0x5660C8AFDD9C1721(uLocal_52))
						{
							unk_0xB6FB9702660D84F6(&uLocal_52);
						}
						unk_0xA7130AF256ED96A1(iLocal_289[iVar65]);
						unk_0x85A1016DBBC5E64B(iLocal_289[iVar65], unk_0xA16EC202D9D35357(), 0, 16);
						unk_0x2686393074E14730(iLocal_289[iVar65], 1);
					}
				}
				iVar65++;
			}
			func_159();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x2DE0B96E966FD817(iLocal_289[1]))
			{
				func_161(&uLocal_54, "REGETAU", "REAWA_ATTP", 4, 0, 0, 0);
			}
			else if (!unk_0x2DE0B96E966FD817(iLocal_289[0]))
			{
				func_161(&uLocal_54, "REGETAU", "REAWA_ATTB", 4, 0, 0, 0);
			}
			if (!bLocal_278)
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_288))
				{
					unk_0xA8BC819B54F5B824(iLocal_288, 0);
					unk_0x5B5659C49032B96C(iLocal_288, "random@getawaydriver", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
				}
			}
			iVar65 = 0;
			while (iVar65 < iLocal_292)
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_292[iVar65]))
				{
					unk_0xEA36CC2E7750344B(iLocal_292[iVar65], unk_0xA16EC202D9D35357(), 150f, -1, 0, 0);
					unk_0x2686393074E14730(iLocal_292[iVar65], 1);
				}
				iVar65++;
			}
			*iParam0 = 19;
			break;
		
		case 19:
			unk_0x2966D41514EAE84B(5, iLocal_309, joaat("player"));
			iVar65 = 0;
			while (iVar65 < iLocal_289)
			{
				if (unk_0x2DE0B96E966FD817(iLocal_289[iVar65]))
				{
					if (unk_0x5660C8AFDD9C1721(uLocal_284[iVar65]))
					{
						unk_0xB6FB9702660D84F6(&(uLocal_284[iVar65]));
					}
				}
				if (!unk_0x2DE0B96E966FD817(iLocal_289[iVar65]))
				{
					if (!unk_0x5660C8AFDD9C1721(uLocal_284[iVar65]))
					{
						uLocal_284[iVar65] = func_57(iLocal_289[iVar65], 1, 145);
					}
					if (unk_0x9A132E8DFAE1F524(iLocal_289[iVar65]))
					{
						unk_0xA7130AF256ED96A1(iLocal_289[iVar65]);
					}
					if (unk_0x202EF5D8203705EF(iLocal_289[iVar65], 0))
					{
						unk_0xBB5AA994E06B28E2(iLocal_289[iVar65], 0, 0);
						unk_0x85A1016DBBC5E64B(iLocal_289[iVar65], unk_0xA16EC202D9D35357(), 0, 16);
						unk_0x2686393074E14730(iLocal_289[iVar65], 1);
					}
					else
					{
						unk_0x85A1016DBBC5E64B(iLocal_289[iVar65], unk_0xA16EC202D9D35357(), 0, 16);
						unk_0x2686393074E14730(iLocal_289[iVar65], 1);
					}
				}
				iVar65++;
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_52))
			{
				unk_0xB6FB9702660D84F6(&uLocal_52);
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
	return Global_97439.f_7341.f_328[iParam0 /*6*/];
}

void func_3(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1.f_116), iParam0);
	switch (iParam0)
	{
		case 10:
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1.f_119), 14);
			break;
		
		case 13:
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1.f_119), 16);
			break;
		
		case 12:
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1.f_119), 15);
			break;
		
		case 11:
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1.f_119), 17);
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
		unk_0xA6CE1BB0BF7AE715("FEED_CREW_U");
		unk_0x4498E0CBD76B2D72(func_14(iParam0));
		unk_0xB2BB3F163B7B2B4C(uVar1, uVar1, 0, iVar0, "", 0);
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
		func_6();
	}
}

void func_6()
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

int func_7()
{
	func_8();
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

void func_8()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_12(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_11(unk_0xA16EC202D9D35357());
			if (func_10(iVar0) && (!func_9(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_10(Global_97439.f_1729.f_539.f_3213))
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

bool func_9(int iParam0)
{
	return Global_34915 == iParam0;
}

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
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
		return Global_97439.f_29795[iParam0 /*29*/];
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
		return unk_0x889D01384B54BCE3(Global_97439.f_23635.f_150[iVar1], iVar0);
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
	return Global_86322[iParam0 /*5*/];
}

void func_17(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_18(Global_97439.f_29795[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
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
					switch (unk_0x9C2B33434756C8A2())
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
	func_20(iParam0);
	if (Global_34915 == 15)
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

void func_20(int iParam0)
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

void func_21(int iParam0)
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
	else if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0) || unk_0x889D01384B54BCE3(Global_2097152[func_23() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		unk_0x29DB79DD4D939B38(&(Global_2097152[func_23() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xA6CE1BB0BF7AE715("COUP_RED");
		unk_0x4498E0CBD76B2D72(func_22(iParam0));
		unk_0xB2BB3F163B7B2B4C(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0);
	}
	return unk_0x889D01384B54BCE3(Global_2097152[func_23() /*8064*/].f_5756.f_10, iParam0);
}

int func_26(bool bParam0)
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
	if (unk_0xA7311613D452D616(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24692 != 0 && !Global_68325)
	{
		return 0;
	}
	if (func_38(&Global_2542838))
	{
		if (func_36(&Global_2542838, iParam0))
		{
			return 0;
		}
		if (func_29(&Global_2542838, iParam0))
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

int func_29(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xA7311613D452D616(iParam1))
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
	
	if (unk_0xA7311613D452D616(iParam1))
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
	func_34(uParam0, (Global_2542837 - 0.5f));
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
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3ED04C9A60CBD249(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(iParam0, iVar0, 1);
}

void func_42(int iParam0, int iParam1)
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

void func_43()
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

int func_44()
{
	if (unk_0x889D01384B54BCE3(unk_0x444ECD635D5FD45F(0, 65535), 0))
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
			if (unk_0x4970185D4CC64616(-1014.154f, 4881.411f, 245.0001f, unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(unk_0xA495B6AB6F2BF8C7()), 0), 1) < 400f)
			{
				if (!Global_24685)
				{
					unk_0x495459882382D113("AC_EN_ROUTE_CULT");
					Global_24685 = 1;
					if (!Global_24684)
					{
						Global_24684 = 1;
						return 1;
					}
				}
			}
			else if (Global_24685)
			{
				unk_0x495459882382D113("AC_LEFT_AREA");
				Global_24685 = 0;
			}
		}
	}
	return 0;
}

bool func_46()
{
	return Global_24680;
}

int func_47(struct<3> Param0)
{
	if (func_105() == 2)
	{
		if (func_46() && !Global_24683)
		{
			if (fLocal_51 == -1f)
			{
				fLocal_51 = unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Param0) > (fLocal_51 + 200f) || unk_0x4970185D4CC64616(-1014.154f, 4881.411f, 245.0001f, unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(unk_0xA495B6AB6F2BF8C7()), 0), 1) < 400f)
			{
				Global_24683 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_48(var uParam0)
{
	if (!unk_0x2DE0B96E966FD817((*uParam0)[0]) && !unk_0x2DE0B96E966FD817((*uParam0)[1]))
	{
		if (unk_0x14F9932776F21CC2((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && unk_0x14F9932776F21CC2((*uParam0)[0], unk_0xA16EC202D9D35357(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_226)
			{
				case 0:
					iLocal_225 = unk_0x09560C7DE2A384BD();
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
		if (!Global_24682)
		{
			func_50("CULT_BLIP_HELP", -1);
			Global_24682 = 1;
		}
	}
}

void func_50(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

int func_51()
{
	if (Global_97439.f_28192.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

var func_52(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x64F646E6A974BF18(Param0);
	unk_0xBE97A5A41C1F5C4C(uVar0, func_53(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
	unk_0xF1D09F0F8B016765(uVar0, iParam3);
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
		if (((((((unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_245, 50f, 50f, 50f, 0, 1, 0) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_248, 50f, 50f, 50f, 0, 1, 0)) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_251, 50f, 50f, 50f, 0, 1, 0)) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_254, 50f, 50f, 50f, 0, 1, 0)) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_257, 50f, 50f, 50f, 0, 1, 0)) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_260, 50f, 50f, 50f, 0, 1, 0)) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_263, 50f, 50f, 50f, 0, 1, 0)) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_266, 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0x5AF66EDEBFA76B9B(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) < 0.2f)
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
	
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (unk_0xECFECDAD51A6184F(iVar0, 0))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_289[0]) && !unk_0x2DE0B96E966FD817(iLocal_289[1]))
			{
				if (unk_0xAD203DB71ADF6E57(iLocal_289[0], iVar0, 0) && unk_0xAD203DB71ADF6E57(iLocal_289[1], iVar0, 0))
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
	if ((iParam2 != 145 && unk_0x5660C8AFDD9C1721(uVar0)) && unk_0xC929DDA58687736B(&(Global_97439.f_29795[iParam2 /*29*/].f_3)))
	{
		unk_0xFDA1FE98ECD75505(uVar0, &(Global_97439.f_29795[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_58(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDF78B7F06503567E(iParam0);
	if (unk_0x9FF5D51C24AD2308(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_53(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
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
		unk_0xBE97A5A41C1F5C4C(uVar0, func_53(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
		unk_0x060629C917E581A5(uVar0, bParam1);
	}
	else if (unk_0x15CE956C279F4825(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_53(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_59(var uParam0)
{
	if (!unk_0x2DE0B96E966FD817((*uParam0)[0]) && !unk_0x2DE0B96E966FD817((*uParam0)[1]))
	{
		if (unk_0x14F9932776F21CC2((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && unk_0x14F9932776F21CC2((*uParam0)[0], unk_0xA16EC202D9D35357(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_224)
			{
				case 0:
					iLocal_225 = unk_0x09560C7DE2A384BD();
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
	if (unk_0x5660C8AFDD9C1721(uParam0))
	{
		unk_0xB6FB9702660D84F6(&uParam0);
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
		if (!unk_0x2DE0B96E966FD817(iLocal_289[iVar0]))
		{
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
			{
				if (!func_118())
				{
					unk_0x2C4E82CF88213975(iLocal_289[iVar0], 1);
					if (unk_0x9A132E8DFAE1F524(iLocal_289[iVar0]))
					{
						unk_0xA7130AF256ED96A1(iLocal_289[iVar0]);
					}
					if (unk_0x221AC1EF116F6053(iLocal_289[iVar0], 1227113341) != 1 && unk_0x221AC1EF116F6053(iLocal_289[iVar0], 1227113341) != 0)
					{
						unk_0xF3B924DCFDECDB4B(iLocal_289[iVar0], unk_0xA16EC202D9D35357(), -1, 6f, 2f, 1073741824, 0);
					}
					if (unk_0x202EF5D8203705EF(iLocal_289[iVar0], 0))
					{
						unk_0xBB5AA994E06B28E2(iLocal_289[iVar0], 0, 0);
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
					unk_0x2C4E82CF88213975(iLocal_289[iVar0], 0);
					if (unk_0x221AC1EF116F6053(iLocal_289[iVar0], 1227113341) == 1 && unk_0x221AC1EF116F6053(iLocal_289[iVar0], 1227113341) == 0)
					{
						unk_0x937785D9C1929236(iLocal_289[iVar0]);
					}
					if (!unk_0x2DE0B96E966FD817(iLocal_289[0]) && !unk_0x2DE0B96E966FD817(iLocal_289[1]))
					{
						unk_0x5129CFBCCCCA8250(iLocal_289[0], 1);
						unk_0x5129CFBCCCCA8250(iLocal_289[1], 0);
						if (unk_0xA609E58449080951(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357())) == joaat("bus"))
						{
							if (!unk_0x557C6E696286C67A(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 1))
							{
								uVar1 = unk_0xD8A521688BDBE867(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 1);
								if (!unk_0x22349EC06EA5B08B(uVar1))
								{
									unk_0x7B9576B4E099FB1F(uVar1, 1, 0);
									unk_0x51A89CCC8A5317D0(&uVar1);
								}
							}
							if (!unk_0x557C6E696286C67A(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 0))
							{
								uVar2 = unk_0xD8A521688BDBE867(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 0);
								if (!unk_0x22349EC06EA5B08B(uVar2))
								{
									unk_0x7B9576B4E099FB1F(uVar2, 1, 0);
									unk_0x51A89CCC8A5317D0(&uVar2);
								}
							}
						}
					}
				}
			}
			else if (!unk_0x9A132E8DFAE1F524(iLocal_289[iVar0]))
			{
				unk_0x937785D9C1929236(iLocal_289[iVar0]);
				unk_0xE4C80CFABEAEED8F(iLocal_289[iVar0], func_65());
				unk_0x59DFDC536FDF0000(iLocal_289[iVar0], 1);
				if (!unk_0x2DE0B96E966FD817(iLocal_289[0]) && !unk_0x2DE0B96E966FD817(iLocal_289[1]))
				{
					unk_0x5129CFBCCCCA8250(iLocal_289[0], 1);
					unk_0x5129CFBCCCCA8250(iLocal_289[1], 0);
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
			Global_24680 = 1;
		}
	}
}

int func_63(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!unk_0x2DE0B96E966FD817((*uParam0)[iVar0]))
		{
			if (!unk_0xAD203DB71ADF6E57((*uParam0)[iVar0], iParam1, 0))
			{
				if (fParam2 > 0f)
				{
					if (unk_0x14F9932776F21CC2((*uParam0)[iVar0], unk_0xA16EC202D9D35357(), fParam2, fParam2, fParam2, 0, 1, 0))
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
		if (unk_0x2DE0B96E966FD817((*uParam0)[iVar0]))
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_284[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_284[iVar0]));
			}
		}
		else
		{
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
				{
					if (unk_0xAD203DB71ADF6E57((*uParam0)[iVar0], unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0) && unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
					{
						if (unk_0x5660C8AFDD9C1721(uLocal_284[iVar0]))
						{
							unk_0xB6FB9702660D84F6(&(uLocal_284[iVar0]));
						}
					}
					else if (!unk_0x5660C8AFDD9C1721(uLocal_284[iVar0]))
					{
						uLocal_284[iVar0] = func_57((*uParam0)[iVar0], 0, 145);
					}
				}
			}
			else if (!unk_0x5660C8AFDD9C1721(uLocal_284[iVar0]))
			{
				uLocal_284[iVar0] = func_57((*uParam0)[iVar0], 0, 145);
			}
			if (!unk_0x14F9932776F21CC2((*uParam0)[iVar0], unk_0xA16EC202D9D35357(), fParam1, fParam1, fParam1, 0, 1, 0))
			{
				if (unk_0x5660C8AFDD9C1721(uLocal_284[iVar0]))
				{
					unk_0xB6FB9702660D84F6(&(uLocal_284[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

var func_65()
{
	return unk_0xF8BF19C18CE5C2B2(unk_0xA495B6AB6F2BF8C7());
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_289)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_289[iVar0]))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_289[iVar0]))
			{
				if (!unk_0x9A132E8DFAE1F524(iLocal_289[iVar0]))
				{
					if (unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6))
					{
						if (unk_0x070FE1B33937A5CB(iLocal_289[iVar0], unk_0xA16EC202D9D35357()))
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_289[0]) && !unk_0x2DE0B96E966FD817(iLocal_289[1]))
							{
								if (((unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iLocal_289[0]) || unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iLocal_289[0])) || unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iLocal_289[1])) || unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iLocal_289[1]))
								{
									if (iLocal_228 == -1)
									{
										iLocal_228 = unk_0x09560C7DE2A384BD();
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
						if (iLocal_228 != -1 && unk_0x09560C7DE2A384BD() > iLocal_228 + 1000)
						{
							func_159();
							unk_0x4EDE34FBADD967A6(0);
							func_161(&uLocal_54, "REGETAU", "REAWA_AIM", 4, 0, 0, 0);
							iLocal_283 = 1;
						}
					}
					if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
					{
						if (unk_0xBF8ADDCADFC4691E(iLocal_289[iVar0], unk_0xB49BA83A5C224F40(), 1))
						{
							return 1;
						}
					}
					if ((unk_0xBF8ADDCADFC4691E(iLocal_289[iVar0], unk_0xA16EC202D9D35357(), 1) && unk_0x6360D2FA3AD62AD1(iLocal_289[iVar0]) < 190) || (iLocal_228 != -1 && unk_0x09560C7DE2A384BD() > iLocal_228 + 5000))
					{
						return 1;
					}
				}
			}
			else
			{
				if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
				{
					if (unk_0xBF8ADDCADFC4691E(iLocal_289[iVar0], unk_0xB49BA83A5C224F40(), 1))
					{
						return 1;
					}
				}
				if (unk_0xBF8ADDCADFC4691E(iLocal_289[iVar0], unk_0xA16EC202D9D35357(), 1))
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
			if (!unk_0x2DE0B96E966FD817((*uParam0)[iVar0]))
			{
				if ((unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 121.8366f, -1503.006f, 28.0999f, 0.1367f, -1649.705f, 48.1608f, 125.8125f, 0, 1, 0) && !unk_0x0E7E162F5A49FAAA((*uParam0)[iVar0])) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, 1, 0))
				{
					if (!unk_0x5660C8AFDD9C1721(uLocal_284[iVar0]))
					{
						if (!unk_0x2DE0B96E966FD817((*uParam0)[iVar0]))
						{
							if (!func_193())
							{
								func_92(1);
								func_91(1);
								if (!unk_0xE44A580B551C3645(iLocal_307))
								{
									if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_307, 0) && !unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_307, 50f, 50f, 50f, 0, 1, 0))
									{
										func_70(iLocal_307, 0, 145);
									}
								}
							}
							uLocal_284[iVar0] = func_57((*uParam0)[iVar0], 0, 145);
							unk_0xAF9E05E1AFA9F45F(uLocal_284[iVar0], 0);
							func_60(uLocal_53);
						}
					}
					if (!func_170())
					{
						if (iLocal_231 < unk_0x09560C7DE2A384BD())
						{
							func_161(&uLocal_54, "REGETAU", "REAWA_SHOUT", 4, 0, 0, 0);
							iLocal_231 = (unk_0x09560C7DE2A384BD() + unk_0x444ECD635D5FD45F(3500, 4000));
						}
					}
					if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, 1, 0))
					{
						func_68();
						if (!unk_0xE44A580B551C3645(iParam1))
						{
							if (!func_170())
							{
								if (func_118() && unk_0x66679628FFE34E84(unk_0xB49BA83A5C224F40()))
								{
									func_161(&uLocal_54, "REGETAU", "REAWA_START", 4, 0, 0, 0);
									iLocal_220 = 1;
								}
								else
								{
									func_161(&uLocal_54, "REGETAU", "REAWA_START2", 4, 0, 0, 0);
									iLocal_220 = 1;
								}
								if (unk_0x5660C8AFDD9C1721(uLocal_284[0]))
								{
									unk_0xAF9E05E1AFA9F45F(uLocal_284[0], 1);
								}
								if (unk_0x5660C8AFDD9C1721(uLocal_284[1]))
								{
									unk_0xAF9E05E1AFA9F45F(uLocal_284[1], 1);
								}
								if (!unk_0x2DE0B96E966FD817((*uParam0)[1]) && !unk_0x2DE0B96E966FD817(iLocal_288))
								{
									unk_0x117411595F7E531A((*uParam0)[1], 156, 1);
									unk_0x6D98AA46076A68BE(&iLocal_308);
									unk_0x5B5659C49032B96C(0, "misslamar1ig_20", "stretch_call_hurry_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0x5B5659C49032B96C(0, "combat@gestures@pistol@halt", "180", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0x0CDB4D41769B8C93(0, iLocal_288, -1, 0);
									unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2096, 4);
									unk_0x963BB7C99350D827(iLocal_308);
									unk_0x0891776D0327B77A((*uParam0)[1], iLocal_308);
									unk_0x2AF68ED52DC74B7D(&iLocal_308);
								}
								unk_0x4745F9C50C63A48C((*uParam0)[iVar0], unk_0xA16EC202D9D35357(), -1, 2096, 4);
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

int func_70(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0xFD03B2968C4DD469(iParam0, &uVar0);
		if (!unk_0x06771AF7795B3ECF(uVar1))
		{
			if (unk_0xB793F1A0B6CC4AE1(uVar1) == unk_0xB793F1A0B6CC4AE1("vehicle_gen_controller"))
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
		iVar0 = unk_0xD8A521688BDBE867(iParam0, -1);
		if (!unk_0x538DF9E5B1DF01EB(iVar0))
		{
			iVar0 = unk_0x728F548A96B6E588(iParam0, -1);
		}
		if (unk_0x538DF9E5B1DF01EB(iVar0) && !unk_0x2DE0B96E966FD817(iVar0))
		{
			if (unk_0xA609E58449080951(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xA609E58449080951(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xA609E58449080951(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97439.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xA609E58449080951(iParam0) == Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x06771AF7795B3ECF(&(Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x9BA82E09A986BA4B(unk_0xC2E0CBF2F000307B(iParam0), &(Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97439.f_18371.f_4800[iVar1] = iVar2;
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
		if (unk_0xA609E58449080951(iParam0) == Global_97439.f_18371.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x06771AF7795B3ECF(&(Global_97439.f_18371.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x9BA82E09A986BA4B(unk_0xC2E0CBF2F000307B(iParam0), &(Global_97439.f_18371.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97439.f_18371.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97439.f_18371.f_4798 = iParam1;
	Global_68123 = iParam0;
	Global_97439.f_18371.f_4796 = 1;
	func_72(iParam0, &(Global_97439.f_18371.f_4742));
}

void func_72(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		func_75(uParam1);
		uParam1->f_42 = unk_0xA609E58449080951(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC2E0CBF2F000307B(iParam0), 16);
		*uParam1 = unk_0x6E1ADA6FBEC091EA(iParam0);
		unk_0xABDA00D6C410A603(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xACCED888DA80AA1F(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x27BCAE1F10710BEC(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x4EC2A3086F931215(iParam0);
		uParam1->f_43 = unk_0x960D1BE7E376200B(iParam0);
		uParam1->f_45 = unk_0xD9197C47F38990D8(iParam0);
		uParam1->f_46 = unk_0x5812ABBDAA06BE4A(iParam0);
		unk_0x59A2942E7145EFA4(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xB49AB41D753BA09F(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0x5792E99920C570FD(iParam0, 2))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 28);
		}
		if (unk_0x5792E99920C570FD(iParam0, 3))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 29);
		}
		if (unk_0x5792E99920C570FD(iParam0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 30);
		}
		if (unk_0x5792E99920C570FD(iParam0, 1))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0xE19742BCB95B6E28(iParam0, 0))
		{
			uParam1->f_44 = unk_0xBE52DF6606B79B2D(iParam0);
		}
		if (unk_0xEE41D6C2DA208994(uParam1->f_42))
		{
			if (unk_0xC9F64E53159B529B(iParam0))
			{
				switch (unk_0xFA2BD89016FF31B2(iParam0))
				{
					case 2:
					case 0:
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 23);
						unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 23);
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x9610401E9E4D05A2(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 9);
		}
		if (unk_0xA83FD3D7530A5908(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 10);
		}
		if (unk_0x7CFBF44D83E4C08F(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 13);
			unk_0x37565B4952524D39(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x61BB59E7B67E3575(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 12);
		}
		func_74(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5624226E4F913C53(iParam0, iVar0 + 1))
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), func_73(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x8A627BCE7B3FB070(iParam0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(uParam1->f_53), 11);
		}
		if (unk_0x53D28141CF743B83(iParam0, "IgnoredByQuickSave") && unk_0x258D2FF40E1E3219(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(uParam1->f_53), 27);
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
	
	if (!unk_0xECFECDAD51A6184F(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x1496C675F4DE04ED(*iParam0) == 0)
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
			if (unk_0xA71DB4975987C018(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x9602B91EC545B1EA(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x362B5E7A7FB4996C(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x362B5E7A7FB4996C(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_75(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_76(int iParam0)
{
	if ((((((((((!unk_0x538DF9E5B1DF01EB(iParam0) || !unk_0xECFECDAD51A6184F(iParam0, 0)) || func_89(iParam0, 0, 0)) || func_89(iParam0, 1, 0)) || func_89(iParam0, 2, 0)) || func_88(iParam0) != 145) || func_87(iParam0)) || func_86(iParam0)) || func_85(iParam0)) || func_84(iParam0)) || !func_77(unk_0xA609E58449080951(iParam0)))
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
	if (((unk_0xD18BE100522E5F15(iParam0) || unk_0xEE41D6C2DA208994(iParam0)) || unk_0x38B61EB14C5FBA9E(iParam0)) || unk_0xEEE07492AE30B7BC(iParam0))
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
	if (!unk_0xD3B644BC9C4BCCE4(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1DAD7CE53BEE7710())) || (iParam0 == joaat("buffalo3") && !unk_0x1DAD7CE53BEE7710())) || (iParam0 == joaat("gauntlet2") && !unk_0x1DAD7CE53BEE7710())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1DAD7CE53BEE7710())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_83())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x1D6BD62DDF942BDF())
		{
			if (unk_0x12A9DA9E48BF64B0(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xA90142E282A42D80(Var1.f_0))
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
		if ((unk_0x9F979F481F18EB48() || unk_0xF6BAF9F0C2863FFE()) || unk_0x660675ADB09E441F())
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
	if (unk_0xD5883629B43B6F20(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_83()
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

int func_84(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xA609E58449080951(iParam0);
	uVar1 = unk_0xC2E0CBF2F000307B(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x9BA82E09A986BA4B(uVar1, "LAMAR G "))
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
		if (unk_0x538DF9E5B1DF01EB(Global_87808[iVar0]))
		{
			if (Global_87808[iVar0] == iParam0)
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
	
	if (unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]) && unk_0xECFECDAD51A6184F(Global_87778[iVar0], 0))
			{
				if (Global_87778[iVar0] == iParam0 && unk_0xA609E58449080951(Global_87778[iVar0]) == unk_0xA609E58449080951(iParam0))
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
	
	if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[24]))
	{
		if (iParam0 == Global_67218.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67218.f_484[iVar0])
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
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 145;
	}
	if (!unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]))
		{
			if (Global_87778[iVar0] == iParam0)
			{
				return Global_87788[iVar0];
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
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0) || !unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_90(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x889D01384B54BCE3(Global_97439.f_5486[iVar9], 0))
		{
			if (unk_0x83A989DB79B98F45(&sVar1, iParam0))
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
		StringCopy(&Global_96495, unk_0x7E5A426328F6E635(), 24);
		Global_96489 = 1;
	}
	else
	{
		StringCopy(&Global_96495, "NULL", 24);
		Global_96489 = 0;
	}
}

int func_92(int iParam0)
{
	if (func_96())
	{
		Global_97429 = 1;
		Global_97426 = unk_0x09560C7DE2A384BD();
		if (func_95(Global_97428))
		{
			func_93(0);
		}
		unk_0xBE9A45C5385D0AB1(1, "RE_TITLE");
		if (iParam0 && func_95(Global_97428))
		{
			unk_0x94BF9C1CAC4541F9();
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
			if (Global_97439.f_28192.f_2 < 3)
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_50(func_94(iParam0), -1);
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
					func_50(func_94(iParam0), -1);
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
					func_50(func_94(iParam0), -1);
					Global_97439.f_28192.f_4++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 2);
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
	switch (func_97(&Global_24505, 0, 5, 0, unk_0x60C807BBCBE66CC7()))
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
		if (Global_87925.f_44 == 1)
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
		if (!func_99(iParam2))
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
			func_98(uParam0, iParam4);
		}
	}
	return 2;
}

void func_98(var uParam0, int iParam1)
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

bool func_99(int iParam0)
{
	return func_100(iParam0, Global_34915);
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
	if (Global_34915 == 15)
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
	unk_0xD550A19A432377FF(uParam0, sParam1, func_103(iParam2), 1);
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

int func_105()
{
	func_8();
	return Global_97439.f_1729.f_539.f_3213;
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
		unk_0x29DB79DD4D939B38(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_113() == 0)
		{
			uVar0 = func_111(func_112(iParam0), -1, 0);
			unk_0x29DB79DD4D939B38(&uVar0, iParam1);
			func_108(func_112(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

void func_108(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_109(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, uParam1, iParam3);
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
	uVar0 = Global_2455246[iParam0 /*5*/][func_109(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
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

int func_113()
{
	return Global_24446;
}

void func_114(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_113() == 0)
		{
			uVar0 = func_111(func_112(iParam0), -1, 0);
			unk_0xD0E2BFCE93AE3ABD(&uVar0, iParam1);
			func_108(func_112(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

int func_115(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x889D01384B54BCE3(Global_90094.f_1272[iParam0], iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_113() == 0)
		{
			return unk_0x889D01384B54BCE3(func_111(func_112(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_116(struct<3> Param0, float fParam3, int iParam4)
{
	if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Param0, fParam3, fParam3, fParam3, 0, 1, 0))
	{
		if (iParam4 == 0)
		{
			if (unk_0x7A98E0DD2E6FAB7A(Param0, 5f))
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
	
	iVar0 = unk_0x09560C7DE2A384BD();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
		{
			if (((((!unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()) && !unk_0x0336D2959717E8D2(unk_0xA16EC202D9D35357())) && !unk_0xB302E5F6DEB1F735(unk_0xA16EC202D9D35357())) && !unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357())) && !unk_0xEB0CE6F99664BF31(unk_0xA16EC202D9D35357())) && !unk_0x51E5BE292F56EC84(unk_0xA16EC202D9D35357(), joaat("rhino")))
			{
				if (unk_0xE3C88401E17BFBB2(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) >= 2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
	{
		if (unk_0xECFECDAD51A6184F(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357()), 0))
		{
			if (((((!unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357()))) && !unk_0x38B61EB14C5FBA9E(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())))) && !unk_0xEE41D6C2DA208994(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())))) && !unk_0xD18BE100522E5F15(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())))) && !unk_0xEEE07492AE30B7BC(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())))) && unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())) != joaat("rhino"))
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
	if (unk_0xFEC6476AFCF2033F())
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
	
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
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
						if (((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_131()) || Global_96486) || Global_24448) || func_130()) || func_129(8, -1)) || func_128()) || func_127()) || func_126()) || func_125()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1) || func_131()) || Global_24448) || func_130()) || func_129(8, -1)) || func_126()) || func_128()) || func_127()) || func_125()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_131()) || Global_96486) || Global_24448) || func_130()) || func_129(8, -1)) || func_126()) || func_128()) || func_127()) || func_125()) || Global_97439.f_5944.f_919[iVar0] == 5) || Global_35462 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_131()) || Global_96486) || Global_24448) || func_130()) || func_129(8, -1)) || func_128()) || func_127()) || func_125()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_131() || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || func_129(8, -1)) || func_125()) || func_124()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_129(8, -1) || func_128()) || func_127()) || func_124()) || func_123())
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
							if ((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_131()) || Global_24448) || func_130()) || func_129(8, -1)) || func_127()) || func_126()) || func_125()) || Global_97439.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || func_131()) || func_127()) || Global_96486) || Global_24448) || func_130()) || Global_35965) || func_129(8, -1)) || func_126()) || func_124()) || func_125()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0)) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1)) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_131()) || Global_96486) || Global_24448) || func_130()) || func_129(8, -1)) || func_126()) || func_124()) || func_128()) || func_127()) || func_125())
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
	return Global_90081.f_1;
}

int func_124()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 13);
	}
	return 0;
}

int func_125()
{
	if (unk_0x16CDA1894CFE0781(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_126()
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

bool func_127()
{
	return Global_90094.f_291 > 0;
}

bool func_128()
{
	return Global_90094.f_290 > 0;
}

bool func_129(int iParam0, int iParam1)
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

var func_130()
{
	return Global_1315891;
}

int func_131()
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return Global_87925.f_44 == 1;
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
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
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
	if (unk_0x889D01384B54BCE3(uParam0, 30))
	{
		switch (func_138(iParam0))
		{
			case 0:
				unk_0xEA054561294AEC10(uParam2);
				break;
			
			case 1:
				unk_0xB845ECB6BD2996BD(uParam1);
				break;
			
			case 2:
				unk_0xF4E0DE38B3046EF1(uParam1);
				break;
			
			case 3:
				unk_0x4A79FCCDF915C20B(uParam1);
				break;
			
			case 4:
				unk_0xA0B5A2A31FD758CC(iParam2, uParam1);
				break;
			
			case 5:
				unk_0x3DE6488DAAEAB507(uParam1);
				break;
			
			case 6:
				unk_0x0C2EDF73A2AD1F31();
				break;
			
			case 7:
				unk_0x7782C61D47F5F794(iParam2);
				break;
			
			case 8:
				unk_0x3D3D5DB8C3B816AF(iParam2, unk_0x889D01384B54BCE3(iParam0, 26));
				break;
			
			case 9:
				unk_0x465D89CA94CBF67D();
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
		if (unk_0x889D01384B54BCE3(uParam0, iVar0))
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
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 29))
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
	if (unk_0x889D01384B54BCE3(uParam0, 30))
	{
		if (unk_0x889D01384B54BCE3(iParam0, 29))
		{
			switch (func_138(iParam0))
			{
				case 0:
					return unk_0x5494F37F35C1D7D7(uParam2);
					break;
				
				case 1:
					return unk_0x6C47E32491756A1A(uParam1);
					break;
				
				case 2:
					return unk_0x307330CEB84DD3AE(sParam1);
					break;
				
				case 3:
					return unk_0xDC8071F347A8DD3F(sParam1);
					break;
				
				case 4:
					return unk_0x0C73411A25059A28(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xBE56E3F122265AAC(sParam1);
					break;
				
				case 6:
					return unk_0x45B7DFCE888B2A02(sParam1, unk_0x889D01384B54BCE3(iParam0, 27));
					break;
				
				case 7:
					return unk_0xACFDEC9C39CAD932(iParam2);
					break;
				
				case 8:
					return unk_0x5CD78FA34B48CB6E(iParam2);
					break;
				
				case 9:
					return unk_0xEA01082BB3EA9C37();
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
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x9BA82E09A986BA4B(sParam3, "NULL"))
					{
						if (unk_0x9BA82E09A986BA4B(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xD0E2BFCE93AE3ABD(uParam0[iVar0 /*18*/], iParam1);
			unk_0xD0E2BFCE93AE3ABD(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_144()
{
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_48) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_155())
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
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (func_10(func_105()))
		{
			iVar36 = func_7();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 2) && !unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 3))
				{
					func_146(iVar32, &Var0);
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
	return Global_97157 > 0;
}

int func_153()
{
	if (Global_87369 != -1)
	{
		return 1;
	}
	return 0;
}

int func_154()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 20);
	}
	return 0;
}

int func_155()
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

void func_156(int iParam0)
{
	Global_97425 = iParam0;
}

void func_157()
{
	if (!bLocal_277)
	{
		unk_0x4555877B8D40F1EF(func_171(unk_0x1788E93557766241()) - Vector(0f, 10f, 0f), unk_0x444ECD635D5FD45F(5, 15), &Local_242, 1, 1077936128, 0);
		if (!unk_0x7A98E0DD2E6FAB7A(Local_242, 10f))
		{
			Local_236 = { Local_242 };
			bLocal_276 = true;
		}
		else
		{
			unk_0x4555877B8D40F1EF(func_171(unk_0x1788E93557766241()) + Vector(0f, 10f, 0f), unk_0x444ECD635D5FD45F(5, 15), &Local_242, 1, 1077936128, 0);
			if (!unk_0x7A98E0DD2E6FAB7A(Local_242, 10f))
			{
				Local_236 = { Local_242 };
				bLocal_276 = true;
			}
			if (bLocal_276)
			{
				if (!unk_0x538DF9E5B1DF01EB(uLocal_298[0]))
				{
					uLocal_298[0] = unk_0x6F9DE0DE8363ADF1(6, joaat("s_m_y_cop_01"), Local_236 + Vector(0f, 5f, 0f), 0f, 1, 1);
					if (func_55())
					{
						unk_0x39272B2594E03395(uLocal_298[0], joaat("weapon_pistol"), -1, 1, 1);
						unk_0xA9465591B42213AE(uLocal_298[0], iLocal_311);
						unk_0x2C4E82CF88213975(uLocal_298[0], 1);
						unk_0x28F7FDF6BC8BA514(uLocal_298[0], 50f, 0);
						unk_0x2686393074E14730(uLocal_298[0], 1);
					}
					else
					{
						unk_0x2C4E82CF88213975(uLocal_298[0], 1);
						unk_0x6D98AA46076A68BE(&iLocal_308);
						unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, 6f, 3f, 1073741824, 0);
						unk_0x5B5659C49032B96C(0, "random@getawaydriver", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
						unk_0xA06765CC8C24CED7(0, 3000);
						unk_0x963BB7C99350D827(iLocal_308);
						unk_0x0891776D0327B77A(uLocal_298[0], iLocal_308);
						unk_0x2AF68ED52DC74B7D(&iLocal_308);
						unk_0x2686393074E14730(uLocal_298[0], 1);
						func_104(&uLocal_54, 4, uLocal_298[0], "REGETCop", 0, 1);
					}
				}
				if (!unk_0x538DF9E5B1DF01EB(uLocal_298[1]))
				{
					uLocal_298[1] = unk_0x6F9DE0DE8363ADF1(6, joaat("s_m_y_cop_01"), Local_236 - Vector(0f, 5f, 0f), 0f, 1, 1);
					if (func_55())
					{
						unk_0x39272B2594E03395(uLocal_298[0], joaat("weapon_pistol"), -1, 0, 1);
						unk_0xA9465591B42213AE(uLocal_298[1], iLocal_311);
						unk_0x2C4E82CF88213975(uLocal_298[1], 1);
						unk_0x28F7FDF6BC8BA514(uLocal_298[1], 50f, 0);
						unk_0x2686393074E14730(uLocal_298[1], 1);
					}
					else
					{
						unk_0x2C4E82CF88213975(uLocal_298[1], 1);
						unk_0x6344A08C11506593(uLocal_298[1], 68.7217f, -1569.83f, 28.6027f, 3f, 0, 0, 786603, -1082130432);
						unk_0x2686393074E14730(uLocal_298[1], 1);
					}
				}
				if (!unk_0x538DF9E5B1DF01EB(iLocal_305))
				{
					iLocal_305 = unk_0x9BB6F54E415071A1(joaat("police3"), Local_236, 0, 1, 1);
					Local_239 = { func_171(unk_0x1788E93557766241()) - unk_0xBF8499F46AD9093A(iLocal_305, 1) };
					unk_0x34639238667C4381(iLocal_305, unk_0x3C616B96B92181C5(Local_239.f_0, Local_239.f_1));
					unk_0x426C3D44449AE9F1(iLocal_305, 1);
				}
				if (!unk_0x538DF9E5B1DF01EB(uLocal_298[2]))
				{
					uLocal_298[2] = unk_0x793482A351850A4F(iLocal_305, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
					if (func_55())
					{
						unk_0x39272B2594E03395(uLocal_298[2], joaat("weapon_pistol"), -1, 1, 1);
						unk_0xA9465591B42213AE(uLocal_298[2], iLocal_311);
						unk_0x15EBFEEB77BF84B7(uLocal_298[2], 1, 1);
						unk_0x15EBFEEB77BF84B7(uLocal_298[2], 3, 0);
						unk_0x2C4E82CF88213975(uLocal_298[2], 1);
						unk_0xD14A21CF793D510E(uLocal_298[2], iLocal_305, iLocal_289[1], 6, 15f, 2, -1f, -1f, 1);
						unk_0x2686393074E14730(uLocal_298[2], 1);
					}
					else
					{
						unk_0x2C4E82CF88213975(uLocal_298[2], 1);
						unk_0x6D98AA46076A68BE(&iLocal_308);
						unk_0x9909D1FE2BA25A9B(0, iLocal_305, 40.2328f, -1555.753f, 28.2128f, 10f, 0, joaat("police"), 786469, 1f, -1f);
						unk_0xA06765CC8C24CED7(0, 5000);
						unk_0x963BB7C99350D827(iLocal_308);
						unk_0x0891776D0327B77A(uLocal_298[2], iLocal_308);
						unk_0x2AF68ED52DC74B7D(&iLocal_308);
						unk_0x2686393074E14730(uLocal_298[2], 1);
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
		if (unk_0x538DF9E5B1DF01EB((*uParam0)[iVar0]))
		{
			if (unk_0x538DF9E5B1DF01EB(iParam1))
			{
				if (unk_0xECFECDAD51A6184F(iParam1, 0))
				{
					if (!unk_0x2DE0B96E966FD817((*uParam0)[iVar0]))
					{
						if (unk_0xAD203DB71ADF6E57((*uParam0)[iVar0], iParam1, 0))
						{
							return 0;
						}
						if (fParam2 > 0f)
						{
							if (unk_0x14F9932776F21CC2((*uParam0)[iVar0], unk_0xA16EC202D9D35357(), fParam2, fParam2, fParam2, 0, 1, 0))
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
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(0);
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
					func_69();
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
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
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
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_166())
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
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
	unk_0x0D68C13151B68364(0);
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
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
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

void func_167()
{
	if (func_9(14))
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
		Global_14394 = func_105();
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
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

Vector3 func_171(var uParam0)
{
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(uParam0), 0);
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

bool func_174(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
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
			Global_97439.f_28192.f_2 = 3;
		}
		if (func_179(iParam0, iParam1) != 322)
		{
			func_176(func_179(iParam0, iParam1), Local_48.f_0, Local_48.f_1);
		}
		Global_97427 = iParam1;
		if (Global_97425 == 0)
		{
			if (((Global_97428 == 1 || Global_97428 == 5) || Global_97428 == 11) || Global_97428 == 25)
			{
				func_156(2);
			}
			else if ((Global_97428 == 26 || Global_97428 == 8) || Global_97428 == 17)
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
		func_40(13, unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853));
	}
	if (!unk_0x0DA6B7D4A76F5536())
	{
		if (!Global_68325)
		{
			if (func_113() == 2 == 0 && !unk_0x1DAD7CE53BEE7710())
			{
				if (unk_0xECA1708601B2AF8E())
				{
					Global_97173 = 0;
				}
				if (!Global_54758)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_110();
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
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_181(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_28192.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x7E5A426328F6E635(), 64);
	uVar16 = func_184(Var0);
	return uVar16;
}

int func_184(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_185(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_188(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_29607.f_1), iVar0);
			if (!bParam1)
			{
				func_186(func_187(iParam0));
			}
		}
	}
}

void func_186(var uParam0)
{
	unk_0xA6CE1BB0BF7AE715("");
	unk_0x2617A9F5E57A474E("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", uParam0);
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
		return unk_0x889D01384B54BCE3(Global_97439.f_29607.f_1, iParam0);
	}
	return 0;
}

int func_189()
{
	return 1;
}

int func_190()
{
	if (Global_24681)
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
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_155())
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
	if ((Global_97428 == func_183() && unk_0x03FD20E179B3FCF4()) && Global_97429)
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
		if ((unk_0xA152BE858C442B26() >= (uParam0->f_146 + uParam0->f_147) || unk_0x889D01384B54BCE3(Global_90042.f_20, 2)) || unk_0x889D01384B54BCE3(Global_90042.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 29))
					{
						func_195(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xA152BE858C442B26();
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
	if (unk_0x889D01384B54BCE3(*uParam0, 30))
	{
		switch (func_138(*uParam0))
		{
			case 0:
				unk_0x939DA7EBCC6588FF(uParam2);
				break;
			
			case 1:
				unk_0x3D28909AF30D70F4(uParam1);
				break;
			
			case 2:
				unk_0x660D567D3EB18812(sParam1);
				break;
			
			case 3:
				unk_0x52964052BC489DDD(sParam1, unk_0x889D01384B54BCE3(*uParam0, 28));
				break;
			
			case 4:
				unk_0xDF529DC50AE6BC93(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xB3F2C2105E254F2B(sParam1);
				break;
			
			case 6:
				unk_0x45B7DFCE888B2A02(sParam1, unk_0x889D01384B54BCE3(*uParam0, 27));
				break;
			
			case 7:
				unk_0x2EDAAB9A8F7BCA0B(iParam2);
				break;
			
			case 8:
				unk_0x95AB598E6554985B(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xE8C49E8D4B533F7D();
				break;
			
			default:
				break;
		}
		unk_0xD0E2BFCE93AE3ABD(uParam0, 29);
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
	unk_0xAF49C3B252CD2D4A(0);
	unk_0x612AE23D2DD952F2(1);
	Global_97425 = 0;
	func_198();
}

void func_198()
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

void func_199(int iParam0)
{
	Global_97428 = iParam0;
}

int func_200(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_155())
			{
				return 0;
			}
		}
		if (!Global_97439.f_7341)
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
		if (Global_97428 != -1)
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
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !bParam6)
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
		if (!func_226(Global_97439.f_28192.f_43[iParam3]))
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
		if (func_225())
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
		if (unk_0xF7037F2CC07D58B0(unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357())))
		{
			if ((unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(377.153f, -717.567f, 10.0536f) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(320.9934f, 265.2515f, 82.1221f)) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_224(0, 0))
		{
			return 0;
		}
		if (Global_24592)
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
				Var5 = { Global_97439.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97439.f_1729.f_539.f_1524[iVar4];
				if (func_223(iVar8))
				{
					if (func_201(iVar4))
					{
						if (!func_54(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_97439.f_1729.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_213(unk_0x889D01384B54BCE3(iParam0, 31), -1, 1)) + 2011;
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
	
	func_222(&uVar0, unk_0x4952CA33C6DB5AD4());
	func_221(&uVar0, unk_0x26ADBF0B08315387());
	func_220(&uVar0, unk_0xBE59E3811BD4FDD7());
	func_219(&uVar0, unk_0xA3730885141EEA96());
	func_218(&uVar0, unk_0x1EFE4ED658D22AF3());
	func_217(&uVar0, unk_0x4C29EAF01B84254C());
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
	if (unk_0x889D01384B54BCE3(Global_97439.f_28192.f_8[iParam0], iParam1))
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
	return Global_97439.f_5944.f_919[iParam0];
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
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_230()
{
	int iVar0;
	
	if (Global_24596)
	{
		iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (unk_0xECFECDAD51A6184F(iVar0, 0))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xD8A521688BDBE867(iVar0, 0)))
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
		if (Global_24684)
		{
			unk_0x495459882382D113("AC_STOP");
		}
		func_244();
		func_91(0);
		unk_0xC7210908156431E0(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 1, 1);
		unk_0x8C4265EEC0D6FD1A();
		unk_0x048EBBC32AA03D69(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0);
		unk_0x46A747493835E815(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 1);
		unk_0xE1C7160267A374EF(unk_0x1788E93557766241());
		unk_0xABC4F2A6D7D56CF4(1f);
		if (!unk_0xE44A580B551C3645(iLocal_307))
		{
			func_70(iLocal_307, 0, 145);
		}
		if (!unk_0x2DE0B96E966FD817(iLocal_288))
		{
			if (unk_0x95EDB2DEFA5BB405(iLocal_288, "random@getawaydriver", "idle_a", 3) || unk_0x95EDB2DEFA5BB405(iLocal_288, "random@getawaydriver", "idle_2_hands_up", 3))
			{
				unk_0x6D98AA46076A68BE(&iLocal_308);
				unk_0x5B5659C49032B96C(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
				if (!unk_0x2DE0B96E966FD817((*iParam9)[0]))
				{
					unk_0xEA36CC2E7750344B(0, (*iParam9)[0], 150f, -1, 0, 0);
				}
				else if (!unk_0x2DE0B96E966FD817((*iParam9)[1]))
				{
					unk_0xEA36CC2E7750344B(0, (*iParam9)[1], 150f, -1, 0, 0);
				}
				unk_0x963BB7C99350D827(iLocal_308);
				unk_0x0891776D0327B77A(iLocal_288, iLocal_308);
				unk_0x2AF68ED52DC74B7D(&iLocal_308);
				unk_0x2686393074E14730(iLocal_288, 1);
			}
			unk_0x2A6FA367FED380C2(iLocal_288);
			unk_0x15EBFEEB77BF84B7(iLocal_288, 17, 1);
			unk_0x2C4E82CF88213975(iLocal_288, 0);
		}
		if (!unk_0x2DE0B96E966FD817((*iParam9)[0]))
		{
			unk_0xA1478EBA54DDE31B((*iParam9)[0], 317, 1);
			unk_0x15EBFEEB77BF84B7((*iParam9)[0], 17, 1);
			unk_0xA7130AF256ED96A1((*iParam9)[0]);
			unk_0xA8BC819B54F5B824((*iParam9)[0], 1);
			unk_0x2C4E82CF88213975((*iParam9)[0], 0);
		}
		if (!unk_0x2DE0B96E966FD817((*iParam9)[1]))
		{
			unk_0xA1478EBA54DDE31B((*iParam9)[1], 317, 1);
			unk_0x15EBFEEB77BF84B7((*iParam9)[1], 17, 1);
			unk_0xA7130AF256ED96A1((*iParam9)[1]);
			unk_0xA8BC819B54F5B824((*iParam9)[1], 1);
			unk_0x2C4E82CF88213975((*iParam9)[1], 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_292)
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_292[iVar0]))
			{
				unk_0x2C4E82CF88213975(iLocal_292[iVar0], 0);
			}
			iVar0++;
		}
		if (!unk_0x2DE0B96E966FD817(uLocal_298[0]))
		{
			unk_0x39272B2594E03395(uLocal_298[0], joaat("weapon_pistol"), -1, 0, 1);
			unk_0x2C4E82CF88213975(uLocal_298[0], 0);
		}
		if (!unk_0x2DE0B96E966FD817(uLocal_298[1]))
		{
			unk_0x39272B2594E03395(uLocal_298[1], joaat("weapon_pistol"), -1, 0, 1);
			unk_0x2C4E82CF88213975(uLocal_298[1], 0);
		}
		if (!unk_0x2DE0B96E966FD817(uLocal_298[2]))
		{
			unk_0x39272B2594E03395(uLocal_298[2], joaat("weapon_pistol"), -1, 0, 1);
			unk_0x2C4E82CF88213975(uLocal_298[2], 0);
		}
		if (!bParam10)
		{
			if (!unk_0x2DE0B96E966FD817((*iParam9)[0]))
			{
				unk_0x0676D83B2FE460E1((*iParam9)[0], func_171(unk_0x1788E93557766241()), 200f, -1, 0, 0);
			}
			if (!unk_0x2DE0B96E966FD817((*iParam9)[1]))
			{
				unk_0x0676D83B2FE460E1((*iParam9)[1], func_171(unk_0x1788E93557766241()), 200f, -1, 0, 0);
			}
		}
		if (!iLocal_219)
		{
			unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
			iLocal_219 = 1;
		}
		func_60(uLocal_52);
		if (unk_0x5660C8AFDD9C1721(uLocal_287))
		{
			unk_0xB6FB9702660D84F6(&uLocal_287);
		}
		func_60(uLocal_53);
		func_119(0);
		func_132(0, Param0);
	}
	func_233(-1);
	unk_0x82706E6C897B0FA1();
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
		unk_0xBE9A45C5385D0AB1(0, 0);
		Global_97430 = unk_0x09560C7DE2A384BD();
		func_236(30000);
		StringCopy(&cVar0, func_235(Global_97428, 1), 64);
		if (func_182(Global_97428) > 0)
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
	func_234(&Global_24505);
	Global_97429 = 0;
	func_199(-1);
}

void func_234(var uParam0)
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
	Global_35466 = (unk_0x09560C7DE2A384BD() + iParam0);
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
	Global_97439.f_28192.f_43[iParam0] = *uParam1;
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
	func_219(uParam0, iParam4);
	func_218(uParam0, iParam5);
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
	Global_24680 = 0;
	Global_24681 = 0;
	Global_24683 = 0;
	Global_24684 = 0;
	Global_24685 = 0;
}

void func_245(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_106(iVar0, bParam0);
		iVar0++;
	}
}

