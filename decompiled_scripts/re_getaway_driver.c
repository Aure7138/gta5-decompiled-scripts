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
	uLocal_46 = unk_0xF41BA26D26B4196D();
	uLocal_47 = unk_0xFA8D3ADA9D2E2615();
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
	if (unk_0xC11469DCA6FC3BB5(11))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_289[0]))
		{
			if (unk_0x5D6C6BD519D63337(iLocal_289[0]))
			{
				unk_0x5BEB6DE8CD28F036(iLocal_289[0]);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iLocal_289[1]))
		{
			if (unk_0x5D6C6BD519D63337(iLocal_289[1]))
			{
				unk_0x5BEB6DE8CD28F036(iLocal_289[1]);
			}
		}
		func_226(Var1, &iLocal_289, bVar12);
	}
	func_225(&uLocal_313, 3);
	if (func_194(Local_233, -1, 0, 0, 0))
	{
		func_191(-1);
	}
	else
	{
		unk_0x5E8B6D17FF91CD59();
	}
	while (iVar0 != 7)
	{
		iVar18 = 0;
		func_188(&uLocal_313);
		if (!unk_0x4F4FF2F3B81506A7() && !func_187())
		{
			iVar18 = 0;
			iVar0 = 7;
			func_226(Var1, &iLocal_289, bVar12);
		}
		if (!func_187())
		{
			if (func_186() || func_185(7))
			{
				iVar18 = 0;
				iVar0 = 7;
				func_226(Var1, &iLocal_289, bVar12);
			}
		}
		unk_0xCBBDAEEE9AB391E3("RE_GD", 0);
		if (func_184())
		{
			if (unk_0xD42BD6EB2E0F1677(iLocal_289[0]))
			{
				unk_0xCC0EF140F99365C5(&(iLocal_289[0]));
			}
			if (unk_0xD42BD6EB2E0F1677(iLocal_289[1]))
			{
				unk_0xCC0EF140F99365C5(&(iLocal_289[1]));
			}
			while (!func_183())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			func_173(-1, 0);
			func_170();
			iVar18 = 0;
			iVar0 = 7;
			func_226(Var1, &iLocal_289, bVar12);
		}
		if (unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0) && !unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
		{
			if (unk_0x59E02EA311B86CAC(func_169(unk_0x217E9DC48139933D()) - Vector(10f, 20f, 20f), func_169(unk_0x217E9DC48139933D()) + Vector(10f, 20f, 20f)) || unk_0xE4D1851579AECF73(func_169(unk_0x217E9DC48139933D()) - Vector(10f, 20f, 20f), func_169(unk_0x217E9DC48139933D()) + Vector(10f, 20f, 20f)))
			{
				if ((((!unk_0x6CFF81397164A1D3(iLocal_289[0]) && !unk_0x6CFF81397164A1D3(iLocal_289[1])) && unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), unk_0x2F96E7720B0B19EA(), 0)) && unk_0x9C8E4D238C999648(iLocal_289[0], unk_0x2F96E7720B0B19EA(), 0)) && unk_0x9C8E4D238C999648(iLocal_289[1], unk_0x2F96E7720B0B19EA(), 0))
				{
					if (unk_0xFB6BA510A533DF81(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)) < 0.2f)
					{
						if (iLocal_229 == -1)
						{
							iLocal_229 = unk_0x4F67E8ECA7D3F667();
						}
					}
					else
					{
						iLocal_229 = -1;
					}
					if (iLocal_229 != -1 && unk_0x4F67E8ECA7D3F667() > iLocal_229 + 1000)
					{
						if (!func_168())
						{
							func_159(&uLocal_54, "REGETAU", "REAWA_LOSE", 4, 0, 0, 0);
						}
						if (iLocal_229 != -1 && unk_0x4F67E8ECA7D3F667() > iLocal_229 + 10000)
						{
							func_157();
							unk_0x4EDE34FBADD967A6(0);
							func_159(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
							if (!unk_0x6CFF81397164A1D3(iLocal_289[0]))
							{
								unk_0xF4BF3E3D7FE56705(&uLocal_308);
								unk_0x36DBE8E570B9FBCE(0, 0, 0);
								unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
								unk_0xFF7E39890B2840DD(uLocal_308);
								unk_0xD59C10966EB589EA(iLocal_289[0], iLocal_308);
								unk_0x5EC7E18324A7D03D(&iLocal_308);
								unk_0x2AD4789CBFD829EC(iLocal_289[0], 1);
							}
							if (!unk_0x6CFF81397164A1D3(iLocal_289[1]))
							{
								unk_0xF4BF3E3D7FE56705(&iLocal_308);
								unk_0x36DBE8E570B9FBCE(0, 500, 0);
								unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
								unk_0xFF7E39890B2840DD(iLocal_308);
								unk_0xD59C10966EB589EA(iLocal_289[1], iLocal_308);
								unk_0x5EC7E18324A7D03D(&iLocal_308);
								unk_0x2AD4789CBFD829EC(iLocal_289[1], 1);
							}
							iVar18 = 0;
							iVar0 = 7;
							func_226(Var1, &iLocal_289, bVar12);
						}
					}
				}
			}
		}
		if (iVar10 > 1)
		{
			if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) == 0)
			{
				unk_0x9E0FEFE102840007(255, iLocal_309, -1033021910);
				unk_0x9E0FEFE102840007(255, iLocal_309, 1166638144);
				unk_0x9E0FEFE102840007(255, -1033021910, iLocal_309);
				unk_0x9E0FEFE102840007(255, 1166638144, iLocal_309);
			}
			else
			{
				unk_0x9E0FEFE102840007(1, iLocal_309, -1033021910);
				unk_0x9E0FEFE102840007(1, iLocal_309, 1166638144);
				unk_0x9E0FEFE102840007(1, -1033021910, iLocal_309);
				unk_0x9E0FEFE102840007(1, 1166638144, iLocal_309);
			}
		}
		if ((iVar10 > 1 && iVar10 < 7) && !iLocal_282)
		{
			if (unk_0xD42BD6EB2E0F1677(iLocal_288))
			{
				if (unk_0x7B6E7BEC1143AC86(iLocal_288, unk_0x096275889B8E0EE0(), 1))
				{
					func_157();
					unk_0x4EDE34FBADD967A6(0);
					if (!unk_0x6CFF81397164A1D3(iLocal_289[0]))
					{
						unk_0x06C6AD4F38E8412D(iLocal_289[0], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
					}
					if (!unk_0x6CFF81397164A1D3(iLocal_289[1]))
					{
						unk_0x06C6AD4F38E8412D(iLocal_289[1], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
				}
			}
		}
		if ((iVar10 > 7 && iVar10 < 18) && !iLocal_282)
		{
			if (unk_0xD42BD6EB2E0F1677(iLocal_289[0]) && unk_0xD42BD6EB2E0F1677(iLocal_289[1]))
			{
				if (unk_0x6CFF81397164A1D3(iLocal_289[1]) || !unk_0xC057F02B837A27F6(iLocal_289[0], unk_0x096275889B8E0EE0(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_289[0]))
					{
						unk_0xF4BF3E3D7FE56705(&iLocal_308);
						unk_0x36DBE8E570B9FBCE(0, 0, 0);
						unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
						unk_0xFF7E39890B2840DD(iLocal_308);
						unk_0xD59C10966EB589EA(iLocal_289[0], iLocal_308);
						unk_0x5EC7E18324A7D03D(&iLocal_308);
						unk_0x2AD4789CBFD829EC(iLocal_289[0], 1);
						func_157();
						unk_0x4EDE34FBADD967A6(0);
						func_159(&uLocal_54, "REGETAU", "REAWA_FKDB", 4, 0, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
				}
				if (unk_0x6CFF81397164A1D3(iLocal_289[0]) || !unk_0xC057F02B837A27F6(iLocal_289[1], unk_0x096275889B8E0EE0(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_289[1]))
					{
						unk_0xF4BF3E3D7FE56705(&iLocal_308);
						unk_0x36DBE8E570B9FBCE(0, 0, 0);
						unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
						unk_0xFF7E39890B2840DD(iLocal_308);
						unk_0xD59C10966EB589EA(iLocal_289[1], iLocal_308);
						unk_0x5EC7E18324A7D03D(&iLocal_308);
						unk_0x2AD4789CBFD829EC(iLocal_289[1], 1);
						func_157();
						unk_0x4EDE34FBADD967A6(0);
						func_159(&uLocal_54, "REGETAU", "REAWA_DEAD1", 4, 0, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
				}
			}
		}
		if (func_156(&iLocal_289, unk_0x2F96E7720B0B19EA(), 180f))
		{
			if (unk_0x7B6E7BEC1143AC86(iLocal_289[0], unk_0x096275889B8E0EE0(), 1) || unk_0x7B6E7BEC1143AC86(iLocal_289[0], unk_0x096275889B8E0EE0(), 1))
			{
				iLocal_282 = 1;
			}
			if (iLocal_282)
			{
				if (!bLocal_277)
				{
					func_155();
				}
				if (!bLocal_278)
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_288))
					{
						unk_0xF4BF3E3D7FE56705(&iLocal_308);
						if (unk_0xDEE49D5CA6C49148(iLocal_288, "random@getawaydriver", "idle_a", 3) || unk_0xDEE49D5CA6C49148(iLocal_288, "random@getawaydriver", "idle_2_hands_up", 3))
						{
							unk_0x8DBC05C86F873CC9(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), 10000, 2052, 4);
						unk_0xF553365A64BDFF94(0, unk_0x096275889B8E0EE0(), -1, 5f, 3f, 1073741824, 0);
						unk_0x8DBC05C86F873CC9(0, "random@getawaydriver", "gesture_nod_yes_soft", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 3000);
						unk_0x42E581F1274EFDB7(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
						unk_0xFF7E39890B2840DD(iLocal_308);
						unk_0xD59C10966EB589EA(iLocal_288, iLocal_308);
						unk_0x5EC7E18324A7D03D(&iLocal_308);
						unk_0x2AD4789CBFD829EC(iLocal_288, 1);
						bLocal_278 = true;
					}
				}
			}
			else
			{
				iVar18 = 0;
				iVar0 = 7;
				func_226(Var1, &iLocal_289, bVar12);
			}
			if (bLocal_277)
			{
				unk_0xD7FA719CB54866C2(1f);
				unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 0);
				if (!unk_0x6CFF81397164A1D3(uLocal_298[0]))
				{
					if (!unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
					{
						if (unk_0xC057F02B837A27F6(uLocal_298[0], unk_0x096275889B8E0EE0(), 4f, 4f, 4f, 0, 1, 0))
						{
							if (!func_168())
							{
								unk_0xD4648EA39998A07B(uLocal_298[0], unk_0x096275889B8E0EE0(), 1000, 2052, 4);
								func_159(&uLocal_54, "REGETAU", "REAWA_THX", 4, 0, 0, 0);
								unk_0x5AE11BC36633DE4E(0);
							}
							else
							{
								if (!unk_0x6CFF81397164A1D3(uLocal_298[0]))
								{
									unk_0x49876BF356F39E66(uLocal_298[0], 0);
								}
								if (!unk_0x6CFF81397164A1D3(uLocal_298[1]))
								{
									unk_0x49876BF356F39E66(uLocal_298[1], 0);
								}
								if (unk_0xC9D9444186B5A374() > 3000)
								{
									while (!func_183())
									{
										unk_0x4EDE34FBADD967A6(0);
									}
									func_154(5);
									func_173(-1, 0);
									func_170();
									iVar18 = 0;
									iVar0 = 7;
									func_226(Var1, &iLocal_289, bVar12);
								}
							}
						}
						else if (!unk_0xC057F02B837A27F6(uLocal_298[0], unk_0x096275889B8E0EE0(), 120f, 120f, 120f, 0, 1, 0))
						{
							iVar18 = 0;
							iVar0 = 7;
							func_226(Var1, &iLocal_289, bVar12);
						}
					}
					else
					{
						unk_0x0F1ABE64C3C18E5A(uLocal_298[0]);
						func_157();
						unk_0x4EDE34FBADD967A6(0);
						iVar18 = 0;
						iVar0 = 7;
						func_226(Var1, &iLocal_289, bVar12);
					}
				}
				else if (unk_0x6CFF81397164A1D3(iLocal_288))
				{
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
				}
			}
			if (bLocal_278)
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_288))
				{
					if (unk_0xC057F02B837A27F6(iLocal_288, unk_0x096275889B8E0EE0(), 4f, 4f, 4f, 0, 1, 0))
					{
						if (!func_168())
						{
							unk_0xD4648EA39998A07B(iLocal_288, unk_0x096275889B8E0EE0(), 3000, 2048, 2);
							func_159(&uLocal_54, "REGETAU", "REAWA_THANKS", 4, 0, 0, 0);
						}
						else
						{
							if (!unk_0x6CFF81397164A1D3(iLocal_288))
							{
								unk_0x5E95290AF8605EA1(iLocal_288, 1);
							}
							while (func_168())
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							while (!func_183())
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							unk_0xD47A168C2AB90DC4(1);
							func_154(5);
							func_173(-1, 0);
							func_170();
							iVar18 = 0;
							iVar0 = 7;
							func_226(Var1, &iLocal_289, bVar12);
						}
					}
					else if (!unk_0xC057F02B837A27F6(iLocal_288, unk_0x096275889B8E0EE0(), 120f, 120f, 120f, 0, 1, 0))
					{
						iVar18 = 0;
						iVar0 = 7;
						func_226(Var1, &iLocal_289, bVar12);
					}
				}
				else if (unk_0x6CFF81397164A1D3(uLocal_298[0]))
				{
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
				}
			}
		}
		switch (iVar0)
		{
			case 0:
				if (func_142())
				{
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
				}
				if (func_130(1, Var1))
				{
					iVar18 = 0;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_118(3))
				{
					iLocal_312 = 1;
					func_117(1);
					iVar17 = unk_0x4F67E8ECA7D3F667();
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
				unk_0xF73FBE4845C43B5B(&uVar11, 4);
				unk_0xF73FBE4845C43B5B(&uVar11, 1);
				unk_0xF73FBE4845C43B5B(&uVar11, 5);
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
				{
					if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
					{
						if (func_116())
						{
							if (unk_0xB86D29B10F627379(unk_0x2F96E7720B0B19EA(), 0))
							{
								if ((unk_0xE052C1B1CAA4ECE4(unk_0x2F96E7720B0B19EA(), 0) && unk_0xE052C1B1CAA4ECE4(unk_0x2F96E7720B0B19EA(), 2)) && unk_0xE052C1B1CAA4ECE4(unk_0x2F96E7720B0B19EA(), 1))
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
				unk_0x23CFFD4CCB243354(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), &uVar13, &uVar16, 1, 1077936128, 0);
				if (func_115(iVar17, 20000))
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
					if (!func_187())
					{
						if (unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
						{
							iVar18 = 0;
							iVar0 = 6;
							break;
						}
						if (!iLocal_281)
						{
							if (unk_0x3A05A71233588E80(unk_0x096275889B8E0EE0(), Vector(28.4601f, -1565.293f, 61.5891f) - Vector(30f, 30f, 30f), Vector(28.4601f, -1565.293f, 61.5891f) + Vector(30f, 30f, 30f), 0, 1))
							{
								iVar19 = 0;
								while (iVar19 < iLocal_292)
								{
									if (!unk_0x6CFF81397164A1D3(iLocal_292[iVar19]))
									{
										unk_0x06C6AD4F38E8412D(iLocal_292[iVar19], unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
										unk_0x2AD4789CBFD829EC(iLocal_292[iVar19], 1);
									}
									iVar19++;
								}
								if (!unk_0x6CFF81397164A1D3(iLocal_288))
								{
									unk_0x06C6AD4F38E8412D(iLocal_288, unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
									unk_0x2AD4789CBFD829EC(iLocal_288, 1);
								}
								iLocal_281 = 1;
							}
						}
					}
				}
				else if (func_142())
				{
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
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
				func_226(Var1, &iLocal_289, bVar12);
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
	func_226(Var1, &iLocal_289, bVar12);
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
			if (func_114(Local_233, 300f, 1))
			{
				*iParam0 = 1;
			}
			break;
		
		case 1:
			*iParam11 = 0;
			func_104(39, 1);
			func_104(40, 1);
			func_104(41, 1);
			func_104(42, 1);
			func_104(43, 1);
			if (func_103() == 0)
			{
				func_102(&uLocal_54, 0, unk_0x096275889B8E0EE0(), "MICHAEL", 0, 1);
			}
			else if (func_103() == 1)
			{
				func_102(&uLocal_54, 0, unk_0x096275889B8E0EE0(), "FRANKLIN", 0, 1);
			}
			else if (func_103() == 2)
			{
				func_102(&uLocal_54, 0, unk_0x096275889B8E0EE0(), "TREVOR", 0, 1);
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
			uLocal_232 = unk_0x9BAB31815159ABCF(unk_0x217E9DC48139933D());
			unk_0xBBB134FB9D50C0CC(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0, 1);
			unk_0x55686F8055FF786B(Local_233 - Vector(50f, 50f, 50f), Local_233 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
			unk_0x9B759C9B288405EE(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0, 0);
			unk_0xEDF13ED104B0FF6B(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0, 1);
			unk_0xFA28FE3A6246FC30(joaat("picador"));
			unk_0xFA28FE3A6246FC30(joaat("stanier"));
			unk_0xFA28FE3A6246FC30(joaat("patriot"));
			while ((!unk_0x1283B8B89DD5D1B6(joaat("picador")) || !unk_0x1283B8B89DD5D1B6(joaat("stanier"))) || !unk_0x1283B8B89DD5D1B6(joaat("patriot")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iVar52[0] = unk_0xF757863E1E2D8F12(joaat("picador"), 59.5209f, -1547.228f, 28.4602f, 49.1762f, 1, 1);
			iVar52[1] = unk_0xF757863E1E2D8F12(joaat("stanier"), 33.3296f, -1577.537f, 28.2826f, 51.8183f, 1, 1);
			iVar52[2] = unk_0xF757863E1E2D8F12(joaat("patriot"), 48.8282f, -1582.706f, 28.4603f, 226.8345f, 1, 1);
			unk_0x7263332501E07F52(iVar52[0]);
			unk_0x7263332501E07F52(iVar52[1]);
			unk_0x7263332501E07F52(iVar52[2]);
			if (iLocal_230 == 0)
			{
			}
			unk_0x352AB5EAB2338B18("reCriminals", &iLocal_309);
			unk_0x352AB5EAB2338B18("reShopKeep", &iLocal_310);
			unk_0x352AB5EAB2338B18("reCops", &iLocal_311);
			unk_0x9E0FEFE102840007(5, iLocal_309, joaat("COP"));
			unk_0x9E0FEFE102840007(5, iLocal_311, iLocal_309);
			unk_0x9E0FEFE102840007(5, joaat("COP"), iLocal_309);
			unk_0x9E0FEFE102840007(1, joaat("COP"), iLocal_311);
			unk_0x9E0FEFE102840007(1, iLocal_311, joaat("COP"));
			(*uParam10)[0] = unk_0x9066DFD4D92E6773(22, Param1.f_0, Var1[0 /*3*/], fVar8[0], 1, 1);
			unk_0x49876BF356F39E66((*uParam10)[0], 1);
			unk_0x4AD96EF928BD4F9A(Param1.f_0);
			unk_0x6ECBACF91786FB7A((*uParam10)[0], iLocal_309);
			unk_0x5F07E4B73A7FA39C((*uParam10)[0], joaat("weapon_appistol"), -1, 1, 1);
			unk_0x92DA957FFDF2DA79((*uParam10)[0], unk_0x9C1C462D7B1DD1F9(800, 2000));
			unk_0x020E173F318C12DA((*uParam10)[0], 206, 1);
			unk_0xF6482620334B0094((*uParam10)[0], 2, 0);
			unk_0xF6482620334B0094((*uParam10)[0], 1024, 1);
			unk_0xF6482620334B0094((*uParam10)[0], 65536, 1);
			unk_0x584EEBEECD248926((*uParam10)[0], 9, 1, 0, 0);
			func_102(&uLocal_54, 2, (*uParam10)[0], "REGETRobber2", 0, 1);
			(*uParam10)[1] = unk_0x9066DFD4D92E6773(22, Param1.f_1, Var1[1 /*3*/], fVar8[1], 1, 1);
			unk_0x49876BF356F39E66((*uParam10)[1], 1);
			unk_0x4AD96EF928BD4F9A(Param1.f_1);
			unk_0x6ECBACF91786FB7A((*uParam10)[1], iLocal_309);
			unk_0x5F07E4B73A7FA39C((*uParam10)[1], joaat("weapon_pistol"), -1, 1, 1);
			unk_0x92DA957FFDF2DA79((*uParam10)[1], unk_0x9C1C462D7B1DD1F9(800, 2000));
			unk_0x020E173F318C12DA((*uParam10)[1], 206, 1);
			unk_0xF6482620334B0094((*uParam10)[1], 2, 0);
			unk_0xF6482620334B0094((*uParam10)[1], 1024, 1);
			unk_0xF6482620334B0094((*uParam10)[1], 65536, 1);
			unk_0x584EEBEECD248926((*uParam10)[1], 0, 5, 0, 0);
			unk_0x584EEBEECD248926((*uParam10)[1], 1, 1, 0, 0);
			unk_0x584EEBEECD248926((*uParam10)[1], 2, 1, 0, 0);
			unk_0x584EEBEECD248926((*uParam10)[1], 3, 6, 0, 0);
			unk_0x584EEBEECD248926((*uParam10)[1], 4, 6, 2, 0);
			unk_0x584EEBEECD248926((*uParam10)[1], 6, 1, 0, 0);
			unk_0x584EEBEECD248926((*uParam10)[1], 8, 0, 0, 0);
			unk_0x584EEBEECD248926((*uParam10)[1], 9, 0, 0, 0);
			unk_0x584EEBEECD248926((*uParam10)[1], 10, 1, 0, 0);
			unk_0xD937A3C5EF78C429((*uParam10)[1], "PACKIE_AI_Norm_Part1_Booth");
			func_102(&uLocal_54, 1, (*uParam10)[1], "PACKIE", 0, 1);
			iLocal_288 = unk_0x9066DFD4D92E6773(4, Param1.f_2, Var11, fVar14, 1, 1);
			unk_0x4AD96EF928BD4F9A(Param1.f_2);
			unk_0x49876BF356F39E66(iLocal_288, 1);
			unk_0x6ECBACF91786FB7A(iLocal_288, iLocal_310);
			unk_0xD937A3C5EF78C429(iLocal_288, "A_M_Y_Business_01_CHINESE_MINI_01");
			func_102(&uLocal_54, 3, iLocal_288, "StoreOwner", 0, 1);
			iLocal_292[0] = unk_0x9066DFD4D92E6773(5, Param1.f_3, 62.8929f, -1575.52f, 28.6027f, 326.1814f, 1, 1);
			unk_0x4AD96EF928BD4F9A(Param1.f_3);
			unk_0x32A582AACCBCAEFE(iLocal_292[0], 17, 1);
			unk_0x6EE9AE1124E7C613(iLocal_292[0], -1);
			iLocal_292[2] = unk_0x9066DFD4D92E6773(5, Param1.f_3, 61.6538f, -1555.256f, 28.4601f, 206.7004f, 1, 1);
			unk_0x4AD96EF928BD4F9A(Param1.f_3);
			unk_0x32A582AACCBCAEFE(iLocal_292[2], 17, 1);
			unk_0x42E581F1274EFDB7(iLocal_292[2], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, 0);
			iLocal_292[3] = unk_0x9066DFD4D92E6773(4, Param1.f_4, 75.9343f, -1556.306f, 28.6028f, 147.2908f, 1, 1);
			unk_0x4AD96EF928BD4F9A(Param1.f_4);
			unk_0x32A582AACCBCAEFE(iLocal_292[3], 17, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (((((!unk_0x7D5B1F88E7504BBA(iLocal_288) && !unk_0x7D5B1F88E7504BBA(iLocal_292[0])) && !unk_0x7D5B1F88E7504BBA(iLocal_292[2])) && !unk_0x7D5B1F88E7504BBA(iLocal_292[3])) && !unk_0x7D5B1F88E7504BBA((*uParam10)[0])) && !unk_0x7D5B1F88E7504BBA((*uParam10)[1]))
			{
				if (((((unk_0xF70B87AC16EBCD87(iLocal_288) && unk_0xF70B87AC16EBCD87(iLocal_292[0])) && unk_0xF70B87AC16EBCD87(iLocal_292[2])) && unk_0xF70B87AC16EBCD87(iLocal_292[3])) && unk_0xF70B87AC16EBCD87((*uParam10)[0])) && unk_0xF70B87AC16EBCD87((*uParam10)[1]))
				{
					unk_0xA862A2AD321F94B4("random@getawaydriver@thugs");
					unk_0xA862A2AD321F94B4("combat@gestures@pistol@halt");
					unk_0xA862A2AD321F94B4("misslamar1ig_20");
					unk_0xA862A2AD321F94B4("random@getawaydriver");
					while (((!unk_0x27FF6FE8009B40CA("random@getawaydriver@thugs") || !unk_0x27FF6FE8009B40CA("combat@gestures@pistol@halt")) || !unk_0x27FF6FE8009B40CA("misslamar1ig_20")) || !unk_0x27FF6FE8009B40CA("random@getawaydriver"))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (!unk_0x6CFF81397164A1D3(iLocal_288))
					{
						unk_0x714A5898C2276F60(iLocal_288, -1, 0, -1, 0);
						if (!unk_0x6CFF81397164A1D3((*uParam10)[0]))
						{
							unk_0x8DBC05C86F873CC9((*uParam10)[0], "random@getawaydriver@thugs", "base_a", 4f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0xD4648EA39998A07B((*uParam10)[0], unk_0x096275889B8E0EE0(), -1, 2052, 4);
						}
						if (!unk_0x6CFF81397164A1D3((*uParam10)[1]))
						{
							unk_0x8DBC05C86F873CC9((*uParam10)[1], "random@getawaydriver@thugs", "base_b", 4f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0xD4648EA39998A07B((*uParam10)[1], unk_0x096275889B8E0EE0(), -1, 2052, 4);
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
				if (!unk_0x6CFF81397164A1D3(iLocal_292[0]))
				{
					func_100(iLocal_292[0], "GENERIC_SHOCKED_HIGH", 24);
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 1000)
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_292[2]))
				{
					func_100(iLocal_292[2], "GENERIC_FRIGHTENED_HIGH", 24);
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 2000)
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_292[3]))
				{
					func_100(iLocal_292[3], "GENERIC_FRIGHTENED_HIGH", 24);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 81.71976f, -1530.834f, 28.17651f, 26.78526f, -1595.693f, 58.29443f, 32.875f, 0, 1, 0))
			{
				if (!iLocal_281)
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_292[0]))
					{
						unk_0x4EFB17949DC06F34(iLocal_292[0], Local_233, 200f, -1, 0, 0);
					}
					if (!unk_0x6CFF81397164A1D3(iLocal_292[2]))
					{
						unk_0xF4BF3E3D7FE56705(&iLocal_308);
						unk_0xD105DD793D092030(0, 250);
						unk_0x4EFB17949DC06F34(0, Local_233, 200f, -1, 0, 0);
						unk_0xFF7E39890B2840DD(iLocal_308);
						unk_0xD59C10966EB589EA(iLocal_292[2], iLocal_308);
						unk_0x5EC7E18324A7D03D(&iLocal_308);
					}
					if (!unk_0x6CFF81397164A1D3(iLocal_292[3]))
					{
						unk_0xF4BF3E3D7FE56705(&iLocal_308);
						unk_0xD105DD793D092030(0, 500);
						unk_0x4EFB17949DC06F34(0, Local_233, 200f, -1, 0, 0);
						unk_0xFF7E39890B2840DD(iLocal_308);
						unk_0xD59C10966EB589EA(iLocal_292[3], iLocal_308);
						unk_0x5EC7E18324A7D03D(&iLocal_308);
					}
					iLocal_281 = 1;
				}
			}
			if (func_65(uParam10, unk_0x2F96E7720B0B19EA()))
			{
				*iParam0 = 4;
			}
			if (func_64())
			{
				*iParam0 = 18;
			}
			if (unk_0x59E02EA311B86CAC(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)) || unk_0xE4D1851579AECF73(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x6CFF81397164A1D3((*uParam10)[0]) && !unk_0x6CFF81397164A1D3((*uParam10)[1]))
				{
					unk_0x06C6AD4F38E8412D((*uParam10)[0], unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
					unk_0x06C6AD4F38E8412D((*uParam10)[1], unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
					func_157();
					unk_0x4EDE34FBADD967A6(0);
					func_159(&uLocal_54, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 4:
			if (!func_168())
			{
				if ((!unk_0x6CFF81397164A1D3((*uParam10)[0]) && !unk_0x6CFF81397164A1D3((*uParam10)[1])) && !unk_0x6CFF81397164A1D3(iLocal_288))
				{
				}
				if (unk_0xD42BD6EB2E0F1677(iLocal_288))
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_288))
					{
						func_159(&uLocal_54, "REGETAU", "REAWA_DOWN", 4, 0, 0, 0);
						unk_0xD4648EA39998A07B((*uParam10)[0], unk_0x096275889B8E0EE0(), 10000, 2052, 4);
						unk_0xF4BF3E3D7FE56705(&iLocal_308);
						unk_0x8DBC05C86F873CC9(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
						unk_0x8DBC05C86F873CC9(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
						unk_0xFF7E39890B2840DD(iLocal_308);
						unk_0xD59C10966EB589EA(iLocal_288, iLocal_308);
						unk_0x5EC7E18324A7D03D(&iLocal_308);
					}
					*iParam0 = 5;
				}
			}
			if (func_64())
			{
				*iParam0 = 18;
			}
			if (((unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0) || unk_0xF00F3ACC20D97154(unk_0x096275889B8E0EE0())) || unk_0x59E02EA311B86CAC(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f))) || unk_0xE4D1851579AECF73(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x6CFF81397164A1D3((*uParam10)[0]) && !unk_0x6CFF81397164A1D3((*uParam10)[1]))
				{
					unk_0x06C6AD4F38E8412D((*uParam10)[0], unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
					unk_0x06C6AD4F38E8412D((*uParam10)[1], unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
					func_157();
					unk_0x4EDE34FBADD967A6(0);
					func_159(&uLocal_54, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 5:
			if (unk_0x6CFF81397164A1D3(iLocal_288))
			{
				if (!unk_0x6CFF81397164A1D3((*uParam10)[0]) && !unk_0x6CFF81397164A1D3((*uParam10)[1]))
				{
					unk_0xFE920E72A4B34285((*uParam10)[0], unk_0x096275889B8E0EE0(), -1);
					unk_0xFE920E72A4B34285((*uParam10)[1], unk_0x096275889B8E0EE0(), -1);
				}
			}
			else if (unk_0x04932A97CB319DE0(iLocal_288, 242628503) != 1 && unk_0x04932A97CB319DE0(iLocal_288, 242628503) != 0)
			{
				unk_0xF4BF3E3D7FE56705(&iLocal_308);
				unk_0x8DBC05C86F873CC9(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
				unk_0x8DBC05C86F873CC9(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0xFF7E39890B2840DD(iLocal_308);
				unk_0xD59C10966EB589EA(iLocal_288, iLocal_308);
				unk_0x5EC7E18324A7D03D(&iLocal_308);
			}
			if (!unk_0x6CFF81397164A1D3(iLocal_289[0]) && !unk_0x6CFF81397164A1D3(iLocal_289[1]))
			{
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) && !unk_0x2B4DCDD8F91771D2(unk_0x096275889B8E0EE0()))
				{
					if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
					{
						if (unk_0xFB6BA510A533DF81(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)) < 0.1f)
						{
							if (func_116() && unk_0x0D5D119529654EE0(unk_0x2F96E7720B0B19EA()))
							{
								unk_0x07D04AD5EF0CEB94(unk_0xDA76A9F39210D365(unk_0x2F96E7720B0B19EA()), 3);
								if (!unk_0x6CFF81397164A1D3(iLocal_288))
								{
									Local_272 = { unk_0xA86D5F069399F44D(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0) };
									Var56 = { unk_0xC899C78DB72CCBCC(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), -1.5f, -1.5f, 0f) };
									Var59 = { unk_0xC899C78DB72CCBCC(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 1.5f, 0f, 0f) };
									unk_0xF4BF3E3D7FE56705(&iLocal_308);
									unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), 10000, 2096, 4);
									unk_0x0B11639CBB53F15F(0, iLocal_288, 1500, 0);
									unk_0x82B8B9AEEB7D5048(0, Var56, iLocal_288, 3f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
									unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), 10000, 2096, 4);
									unk_0xFF7E39890B2840DD(iLocal_308);
									unk_0xD59C10966EB589EA(iLocal_289[0], iLocal_308);
									unk_0x5EC7E18324A7D03D(&iLocal_308);
									unk_0xF4BF3E3D7FE56705(&iLocal_308);
									unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), 10000, 2096, 4);
									unk_0x0B11639CBB53F15F(0, iLocal_288, 2500, 0);
									unk_0x82B8B9AEEB7D5048(0, Var59, iLocal_288, 3f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
									unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), 10000, 2096, 4);
									unk_0xFF7E39890B2840DD(iLocal_308);
									unk_0xD59C10966EB589EA(iLocal_289[1], iLocal_308);
									unk_0x5EC7E18324A7D03D(&iLocal_308);
								}
								else
								{
									unk_0xC17B8A7D48C194DB(iLocal_289[0], func_63());
									unk_0xC17B8A7D48C194DB(iLocal_289[1], func_63());
									unk_0x4C60E33A2CB9B14D(iLocal_289[0], 1);
									unk_0x4C60E33A2CB9B14D(iLocal_289[1], 0);
									if (unk_0xDA76A9F39210D365(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0())) == joaat("bus"))
									{
										if (!unk_0xE052C1B1CAA4ECE4(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 1))
										{
											uVar62 = unk_0xD214895E39AA3787(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 1);
											if (!unk_0x138190F64DB4BBD1(uVar62))
											{
												unk_0xDC19C288082E586E(uVar62, 1, 0);
												unk_0xCC0EF140F99365C5(&uVar62);
											}
										}
										if (!unk_0xE052C1B1CAA4ECE4(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 0))
										{
											uVar62 = unk_0xD214895E39AA3787(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 0);
											if (!unk_0x138190F64DB4BBD1(uVar62))
											{
												unk_0xDC19C288082E586E(uVar62, 1, 0);
												unk_0xCC0EF140F99365C5(&uVar62);
											}
										}
									}
									unk_0xA8F442E84EF050FC(iLocal_289[0], 1);
									unk_0xA8F442E84EF050FC(iLocal_289[1], 1);
								}
								*iParam0 = 6;
							}
							else if (!iLocal_279)
							{
								if (!func_168())
								{
									func_159(&uLocal_54, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
									unk_0xD4648EA39998A07B(iLocal_289[1], unk_0x096275889B8E0EE0(), -1, 2096, 4);
									iLocal_279 = 1;
								}
							}
						}
					}
				}
				else if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), (*uParam10)[1], 10f, 10f, 10f, 0, 1, 0))
				{
					if (!iLocal_279)
					{
						if (!func_168())
						{
							func_159(&uLocal_54, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
							unk_0xD4648EA39998A07B(iLocal_289[1], unk_0x096275889B8E0EE0(), -1, 2096, 4);
							iLocal_279 = 1;
						}
					}
				}
			}
			if (iLocal_279 || iLocal_280)
			{
				if (unk_0xFB6BA510A533DF81(unk_0x096275889B8E0EE0()) < 0.2f)
				{
					if (iLocal_229 == -1)
					{
						iLocal_229 = unk_0x4F67E8ECA7D3F667();
					}
				}
				else
				{
					iLocal_229 = -1;
				}
				if (iLocal_229 != -1 && unk_0x4F67E8ECA7D3F667() > iLocal_229 + 10000)
				{
					func_157();
					unk_0x4EDE34FBADD967A6(0);
					func_159(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					if (!unk_0x6CFF81397164A1D3(iLocal_289[0]))
					{
						unk_0x06C6AD4F38E8412D(iLocal_289[0], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
						unk_0x2AD4789CBFD829EC(iLocal_289[0], 1);
						unk_0x4EDE34FBADD967A6(0);
						unk_0xEB7C3FF98F454165(&(iLocal_289[0]));
					}
					if (!unk_0x6CFF81397164A1D3(iLocal_289[1]))
					{
						unk_0x06C6AD4F38E8412D(iLocal_289[1], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
						unk_0x2AD4789CBFD829EC(iLocal_289[1], 1);
						unk_0x4EDE34FBADD967A6(0);
						unk_0xEB7C3FF98F454165(&(iLocal_289[1]));
					}
					*iParam11 = 0;
					*iParam0 = 20;
				}
			}
			func_62(uParam10, 120f);
			if (func_64())
			{
				*iParam0 = 18;
			}
			if (((unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0) || unk_0xF00F3ACC20D97154(unk_0x096275889B8E0EE0())) || unk_0x59E02EA311B86CAC(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f))) || unk_0xE4D1851579AECF73(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x6CFF81397164A1D3((*uParam10)[0]) && !unk_0x6CFF81397164A1D3((*uParam10)[1]))
				{
					unk_0x06C6AD4F38E8412D((*uParam10)[0], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
					unk_0x06C6AD4F38E8412D((*uParam10)[1], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
					func_157();
					unk_0x4EDE34FBADD967A6(0);
					func_159(&uLocal_54, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 6:
			*iParam0 = 7;
			break;
		
		case 7:
			*iParam11 = 0;
			if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
			{
				if (!func_61(uParam10, unk_0x2F96E7720B0B19EA(), 120f) || !bLocal_275)
				{
					if (!unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_272, 2f, 2f, 2f, 0, 1, 0))
					{
						if (!unk_0x6CFF81397164A1D3(iLocal_289[0]) && !unk_0x6CFF81397164A1D3(iLocal_289[1]))
						{
							if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) && !unk_0x2B4DCDD8F91771D2(unk_0x096275889B8E0EE0()))
							{
								if (func_116() && unk_0x0D5D119529654EE0(unk_0x2F96E7720B0B19EA()))
								{
									unk_0x07D04AD5EF0CEB94(unk_0xDA76A9F39210D365(unk_0x2F96E7720B0B19EA()), 3);
									while (!unk_0xB935F3154BC913C8(unk_0xDA76A9F39210D365(unk_0x2F96E7720B0B19EA())))
									{
										unk_0x4EDE34FBADD967A6(0);
									}
									if (!unk_0x6CFF81397164A1D3(iLocal_289[0]) && !unk_0x6CFF81397164A1D3(iLocal_289[1]))
									{
										if (!unk_0x5D6C6BD519D63337(iLocal_289[0]) && !unk_0x5D6C6BD519D63337(iLocal_289[1]))
										{
											unk_0x0F1ABE64C3C18E5A(iLocal_289[0]);
											unk_0x0F1ABE64C3C18E5A(iLocal_289[1]);
											unk_0xD4648EA39998A07B(iLocal_289[1], unk_0x096275889B8E0EE0(), 10000, 2052, 4);
											unk_0xC17B8A7D48C194DB(iLocal_289[0], func_63());
											unk_0xC17B8A7D48C194DB(iLocal_289[1], func_63());
											unk_0x4C60E33A2CB9B14D(iLocal_289[0], 1);
											unk_0x4C60E33A2CB9B14D(iLocal_289[1], 0);
											if (unk_0xDA76A9F39210D365(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0())) == joaat("bus"))
											{
												if (!unk_0xE052C1B1CAA4ECE4(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 1))
												{
													uVar63 = unk_0xD214895E39AA3787(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 1);
													if (!unk_0x138190F64DB4BBD1(uVar63))
													{
														unk_0xDC19C288082E586E(uVar63, 1, 0);
														unk_0xCC0EF140F99365C5(&uVar63);
													}
												}
												if (!unk_0xE052C1B1CAA4ECE4(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 0))
												{
													uVar63 = unk_0xD214895E39AA3787(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 0);
													if (!unk_0x138190F64DB4BBD1(uVar63))
													{
														unk_0xDC19C288082E586E(uVar63, 1, 0);
														unk_0xCC0EF140F99365C5(&uVar63);
													}
												}
											}
											unk_0xA8F442E84EF050FC(iLocal_289[0], 1);
											unk_0xA8F442E84EF050FC(iLocal_289[1], 1);
										}
									}
								}
								else if (!iLocal_279)
								{
									if (!func_168())
									{
										func_159(&uLocal_54, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
										iLocal_279 = 1;
									}
								}
							}
							else if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), (*uParam10)[1], 10f, 10f, 10f, 0, 1, 0))
							{
								if (!iLocal_279)
								{
									if (!func_168())
									{
										func_159(&uLocal_54, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
										iLocal_279 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (!unk_0x6CFF81397164A1D3(iLocal_289[0]))
			{
				if (!unk_0x5D6C6BD519D63337(iLocal_289[0]))
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_288))
					{
						if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
						{
							if ((unk_0x04932A97CB319DE0(iLocal_289[0], 242628503) != 1 && unk_0x04932A97CB319DE0(iLocal_289[0], 242628503) != 0) || unk_0x04932A97CB319DE0(iLocal_289[0], 242628503) == 7)
							{
								unk_0xC17B8A7D48C194DB(iLocal_289[0], func_63());
								unk_0xA8F442E84EF050FC(iLocal_289[0], 1);
							}
						}
					}
					else
					{
						unk_0xC17B8A7D48C194DB(iLocal_289[0], func_63());
						unk_0xA8F442E84EF050FC(iLocal_289[0], 1);
					}
				}
				else
				{
					if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
					{
						if ((!unk_0x29B959D9755B1A71(iLocal_289[0]) && !unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_272, 2f, 2f, 2f, 0, 1, 0)) && !unk_0x5E58342602E94718(iLocal_289[0], unk_0xA86D5F069399F44D(unk_0x2F96E7720B0B19EA(), 1), 2.5f, 2.5f, 2.5f, 0, 1, 0))
						{
							unk_0xBF5A066CFBEC2570(iLocal_289[0], 2f);
						}
					}
					if (unk_0x04932A97CB319DE0(iLocal_289[0], -875674219) == 1 || unk_0x04932A97CB319DE0(iLocal_289[0], -875674219) == 0)
					{
					}
				}
			}
			if (!unk_0x6CFF81397164A1D3(iLocal_289[1]))
			{
				if (!unk_0x5D6C6BD519D63337(iLocal_289[1]))
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_288))
					{
						if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
						{
							if ((unk_0x04932A97CB319DE0(iLocal_289[1], 242628503) != 1 && unk_0x04932A97CB319DE0(iLocal_289[1], 242628503) != 0) || unk_0x04932A97CB319DE0(iLocal_289[1], 242628503) == 7)
							{
								unk_0xC17B8A7D48C194DB(iLocal_289[1], func_63());
								unk_0xA8F442E84EF050FC(iLocal_289[1], 1);
							}
						}
					}
					else
					{
						unk_0xC17B8A7D48C194DB(iLocal_289[1], func_63());
						unk_0xA8F442E84EF050FC(iLocal_289[1], 1);
					}
				}
				else
				{
					if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
					{
						if ((!unk_0x29B959D9755B1A71(iLocal_289[1]) && !unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_272, 2f, 2f, 2f, 0, 1, 0)) && !unk_0x5E58342602E94718(iLocal_289[1], unk_0xA86D5F069399F44D(unk_0x2F96E7720B0B19EA(), 1), 2.5f, 2.5f, 2.5f, 0, 1, 0))
						{
							unk_0xBF5A066CFBEC2570(iLocal_289[1], 2f);
						}
					}
					if (unk_0x04932A97CB319DE0(iLocal_289[1], -875674219) == 1 || unk_0x04932A97CB319DE0(iLocal_289[1], -875674219) == 0)
					{
					}
				}
			}
			if (!bLocal_275)
			{
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
				{
					if ((!unk_0x7D5B1F88E7504BBA(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)) && !unk_0x6CFF81397164A1D3(iLocal_289[0])) && !unk_0x6CFF81397164A1D3(iLocal_289[1]))
					{
						if ((unk_0x9C8E4D238C999648(iLocal_289[0], unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0) && !unk_0x9C8E4D238C999648(iLocal_289[1], unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0)) && !unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_289[1], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_275 = true;
						}
						if ((unk_0x9C8E4D238C999648(iLocal_289[1], unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0) && !unk_0x9C8E4D238C999648(iLocal_289[0], unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0)) && !unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_289[0], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_275 = true;
						}
					}
				}
			}
			if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
			{
				if (func_61(uParam10, unk_0x2F96E7720B0B19EA(), 120f) || bLocal_275)
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_288))
					{
						unk_0xF4BF3E3D7FE56705(&iLocal_308);
						unk_0x8DBC05C86F873CC9(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
						unk_0xFF7E39890B2840DD(iLocal_308);
						unk_0xD59C10966EB589EA(iLocal_288, iLocal_308);
						unk_0x5EC7E18324A7D03D(&iLocal_308);
						unk_0x2AD4789CBFD829EC(iLocal_288, 1);
						unk_0xEB7C3FF98F454165(&iLocal_288);
					}
					func_60();
					if (!unk_0x2E941B5FFA2989C6(7.3162f, -1544.838f, 28.2558f, 3f))
					{
						iLocal_306 = unk_0xF757863E1E2D8F12(joaat("police3"), 7.3162f, -1544.838f, 28.2558f, 251.9956f, 1, 1);
						uLocal_302[0] = unk_0x63FC6DA06F97F02C(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						uLocal_302[1] = unk_0x63FC6DA06F97F02C(iLocal_306, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						unk_0x5F07E4B73A7FA39C(uLocal_302[0], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x5F07E4B73A7FA39C(uLocal_302[1], joaat("weapon_pistol"), -1, 0, 1);
						unk_0xD0B043631F703D65(uLocal_302[0], 0);
					}
					if (!unk_0x2E941B5FFA2989C6(91.6602f, -1541.899f, 28.3422f, 3f))
					{
						iLocal_306 = unk_0xF757863E1E2D8F12(joaat("police3"), 91.6602f, -1541.899f, 28.3422f, 127.3064f, 1, 1);
						uLocal_302[0] = unk_0x63FC6DA06F97F02C(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						uLocal_302[1] = unk_0x63FC6DA06F97F02C(iLocal_306, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						unk_0x5F07E4B73A7FA39C(uLocal_302[0], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x5F07E4B73A7FA39C(uLocal_302[1], joaat("weapon_pistol"), -1, 0, 1);
						unk_0xD0B043631F703D65(uLocal_302[0], 0);
					}
					if (!unk_0x2E941B5FFA2989C6(32.8029f, -1594.4f, 28.4262f, 3f))
					{
						iLocal_306 = unk_0xF757863E1E2D8F12(joaat("police3"), 32.8029f, -1594.4f, 28.4262f, 337.7429f, 1, 1);
						uLocal_302[0] = unk_0x63FC6DA06F97F02C(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						uLocal_302[1] = unk_0x63FC6DA06F97F02C(iLocal_306, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						unk_0x5F07E4B73A7FA39C(uLocal_302[0], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x5F07E4B73A7FA39C(uLocal_302[1], joaat("weapon_pistol"), -1, 0, 1);
						unk_0xD0B043631F703D65(uLocal_302[0], 0);
					}
					unk_0x0DAA1660C85AA6AF("SCRIPTED_SCANNER_REPORT_GETAWAY_01", 0f);
					unk_0x7C5C7A44314CB078(unk_0x2F96E7720B0B19EA(), 1);
					unk_0x384D4765395E006C(unk_0x217E9DC48139933D(), 2, 0);
					unk_0xC3FF220EE8A94778(unk_0x217E9DC48139933D(), 0);
					unk_0x42EDA93195813577(unk_0x217E9DC48139933D(), 0f);
					unk_0x9E0FEFE102840007(5, joaat("COP"), iLocal_309);
					unk_0x9E0FEFE102840007(5, iLocal_309, joaat("COP"));
					unk_0x4EDE34FBADD967A6(1000);
					if (!bLocal_275)
					{
						func_159(&uLocal_54, "REGETAU", "REAWA_COPS2", 4, 0, 0, 0);
					}
					if (!unk_0x6CFF81397164A1D3((*uParam10)[iVar48]))
					{
						unk_0xBB19AC7D4DCEFD0F((*uParam10)[iVar48]);
					}
					iLocal_223 = unk_0x4F67E8ECA7D3F667();
					*iParam0 = 8;
				}
			}
			if (!unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 95.0746f, -1520.042f, 28.3593f, -5.9698f, -1641.819f, 38.4042f, 98.1875f, 0, 1, 0))
			{
				if (!unk_0x6CFF81397164A1D3((*uParam10)[0]) && !unk_0x6CFF81397164A1D3((*uParam10)[1]))
				{
					unk_0x06C6AD4F38E8412D((*uParam10)[0], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
					unk_0x06C6AD4F38E8412D((*uParam10)[1], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
					func_157();
					unk_0x4EDE34FBADD967A6(0);
					func_159(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			func_62(uParam10, 120f);
			func_59();
			if (func_64())
			{
				*iParam0 = 18;
			}
			break;
		
		case 8:
			func_58(uLocal_52);
			if (func_115(iLocal_223, 3000))
			{
				*iParam0 = 9;
			}
			if (func_64())
			{
				*iParam0 = 18;
			}
			break;
		
		case 9:
			func_57(uParam10);
			if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) == 0)
			{
				unk_0x9E0FEFE102840007(1, joaat("COP"), iLocal_309);
				unk_0x9E0FEFE102840007(1, iLocal_309, joaat("COP"));
				if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
				{
					unk_0x7C5C7A44314CB078(unk_0x2F96E7720B0B19EA(), 0);
				}
				if (!unk_0x7D5B1F88E7504BBA(iLocal_306))
				{
					unk_0x6C9B2BE03BBD5C98(&iLocal_306);
				}
				if (!unk_0x6CFF81397164A1D3(uLocal_302[0]))
				{
					unk_0xEB7C3FF98F454165(&(uLocal_302[0]));
				}
				if (!unk_0x6CFF81397164A1D3(uLocal_302[1]))
				{
					unk_0xEB7C3FF98F454165(&(uLocal_302[1]));
				}
				func_58(uLocal_52);
				*iParam0 = 10;
			}
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()) && !unk_0x6CFF81397164A1D3((*uParam10)[iVar48]))
				{
					if (!unk_0xEB8F1713A0FC1B96((*uParam10)[iVar48], unk_0x2F96E7720B0B19EA()))
					{
						if (!unk_0xCD82FA174080B3B1(uLocal_284[iVar48]))
						{
							uLocal_284[iVar48] = func_55((*uParam10)[iVar48], 0, 145);
							func_58(uLocal_52);
						}
					}
				}
				iVar48++;
			}
			func_62(uParam10, 120f);
			func_59();
			if (func_53())
			{
				*iParam0 = 12;
			}
			if (func_64())
			{
				*iParam0 = 18;
			}
			break;
		
		case 10:
			if (unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
			{
				unk_0x9E0FEFE102840007(5, joaat("COP"), iLocal_309);
				unk_0x9E0FEFE102840007(5, iLocal_309, joaat("COP"));
				func_58(uLocal_52);
				*iParam0 = 8;
			}
			else
			{
				unk_0x9E0FEFE102840007(1, joaat("COP"), iLocal_309);
				unk_0x9E0FEFE102840007(1, iLocal_309, joaat("COP"));
				Var49 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
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
				if (func_52(Var15[iLocal_222 /*3*/], 0f, 0f, 0f))
				{
					iLocal_222 = 0;
				}
				uLocal_52 = func_50(Var15[iLocal_222 /*3*/], 1);
				if (func_103() == 2 && !func_49())
				{
					if (!unk_0xCD82FA174080B3B1(uLocal_287))
					{
						uLocal_287 = func_50(Local_269, 0);
						unk_0x74F74D3207ED525C(uLocal_287, 269);
						func_47();
					}
				}
				iLocal_223 = unk_0x4F67E8ECA7D3F667();
				if (!iLocal_221)
				{
					func_157();
					unk_0x4EDE34FBADD967A6(0);
					func_159(&uLocal_54, "REGETAU", "REAWA_HOM", 4, 0, 0, 0);
					iLocal_221 = 1;
				}
				*iParam0 = 11;
			}
			if (func_64())
			{
				*iParam0 = 18;
			}
			break;
		
		case 11:
			*iParam11 = 0;
			func_46(uParam10);
			if (unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
			{
				func_58(uLocal_52);
				*iParam0 = 8;
			}
			else
			{
				if (func_45(Var15[iLocal_222 /*3*/]))
				{
					func_159(&uLocal_54, "REGETAU", "REAWA_CULT", 4, 0, 0, 0);
				}
				if (func_43())
				{
					func_157();
					unk_0x4EDE34FBADD967A6(0);
					if (func_42())
					{
						func_159(&uLocal_54, "REGETAU", "REAWA_CULT2", 4, 0, 0, 0);
					}
					else
					{
						func_159(&uLocal_54, "REGETAU", "REAWA_CULT3", 4, 0, 0, 0);
					}
				}
				if (!unk_0x6CFF81397164A1D3(iLocal_289[0]) && !unk_0x6CFF81397164A1D3(iLocal_289[1]))
				{
					if ((unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Var15[iLocal_222 /*3*/], Global_18, 1, 1, 0) && unk_0x5E58342602E94718(iLocal_289[0], Var15[iLocal_222 /*3*/], 20f, 20f, 20f, 0, 1, 0)) && unk_0x5E58342602E94718(iLocal_289[1], Var15[iLocal_222 /*3*/], 20f, 20f, 20f, 0, 1, 0))
					{
						func_58(uLocal_52);
						iVar48 = 0;
						while (iVar48 <= (*uParam10 - 1))
						{
							if (iLocal_219)
							{
								unk_0x334357D0C82BAE3D(unk_0x2F96E7720B0B19EA(), 10.5f, 2, 0);
								unk_0x4EDE34FBADD967A6(1000);
								iLocal_219 = 0;
							}
							if (!unk_0x6CFF81397164A1D3((*uParam10)[iVar48]))
							{
								unk_0xBB19AC7D4DCEFD0F((*uParam10)[iVar48]);
								unk_0x5BEB6DE8CD28F036((*uParam10)[iVar48]);
								unk_0xC794E23DD23F4FB9(uLocal_232);
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
				if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()) && !unk_0x6CFF81397164A1D3((*uParam10)[iVar48]))
				{
					if (!unk_0xEB8F1713A0FC1B96((*uParam10)[iVar48], unk_0x2F96E7720B0B19EA()))
					{
						if (!unk_0xCD82FA174080B3B1(uLocal_284[iVar48]))
						{
							uLocal_284[iVar48] = func_55((*uParam10)[iVar48], 0, 145);
						}
					}
				}
				iVar48++;
			}
			func_62(uParam10, 120f);
			func_59();
			if (unk_0xFB6BA510A533DF81(unk_0x096275889B8E0EE0()) < 0.2f)
			{
				if (iLocal_229 == -1)
				{
					iLocal_229 = unk_0x4F67E8ECA7D3F667();
				}
			}
			else
			{
				iLocal_229 = -1;
			}
			if (iLocal_229 != -1 && unk_0x4F67E8ECA7D3F667() > (iLocal_229 + 60000))
			{
				func_157();
				unk_0x4EDE34FBADD967A6(0);
				func_159(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
				if (!unk_0x6CFF81397164A1D3(iLocal_289[0]))
				{
					unk_0x06C6AD4F38E8412D(iLocal_289[0], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
					unk_0x2AD4789CBFD829EC(iLocal_289[0], 1);
				}
				if (!unk_0x6CFF81397164A1D3(iLocal_289[1]))
				{
					unk_0x06C6AD4F38E8412D(iLocal_289[1], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
					unk_0x2AD4789CBFD829EC(iLocal_289[1], 1);
				}
				*iParam11 = 0;
				*iParam0 = 20;
			}
			if (func_53())
			{
				*iParam0 = 12;
			}
			if (func_64())
			{
				*iParam0 = 18;
			}
			break;
		
		case 12:
			func_155();
			if (bLocal_277)
			{
				unk_0x5BEB6DE8CD28F036(iLocal_289[0]);
				unk_0x5BEB6DE8CD28F036(iLocal_289[1]);
				unk_0x4E4B996C928C7AA6(unk_0x217E9DC48139933D());
				func_157();
				unk_0x4EDE34FBADD967A6(0);
				func_159(&uLocal_54, "REGETAU", "REAWA_COPS3", 4, 0, 0, 0);
				if (!unk_0x6CFF81397164A1D3((*uParam10)[0]))
				{
					unk_0xF4BF3E3D7FE56705(&iLocal_308);
					unk_0x36DBE8E570B9FBCE(0, 0, 4194304);
					unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
					unk_0xFF7E39890B2840DD(iLocal_308);
					unk_0xD59C10966EB589EA((*uParam10)[0], iLocal_308);
					unk_0x5EC7E18324A7D03D(&iLocal_308);
					unk_0x2AD4789CBFD829EC((*uParam10)[0], 1);
				}
				if (!unk_0x6CFF81397164A1D3((*uParam10)[1]))
				{
					unk_0xF4BF3E3D7FE56705(&iLocal_308);
					unk_0x36DBE8E570B9FBCE(0, 500, 4194304);
					unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
					unk_0xFF7E39890B2840DD(iLocal_308);
					unk_0xD59C10966EB589EA((*uParam10)[1], iLocal_308);
					unk_0x5EC7E18324A7D03D(&iLocal_308);
					unk_0x2AD4789CBFD829EC((*uParam10)[1], 1);
				}
				*iParam0 = 20;
			}
			break;
		
		case 13:
			if (unk_0xFB6BA510A533DF81(unk_0x096275889B8E0EE0()) < 5f)
			{
				iVar48 = 0;
				while (iVar48 <= (*uParam10 - 1))
				{
					if (!unk_0x6CFF81397164A1D3((*uParam10)[iVar48]))
					{
						if (unk_0x04932A97CB319DE0((*uParam10)[iVar48], 242628503) != 1 || unk_0x04932A97CB319DE0((*uParam10)[iVar48], 242628503) != 0)
						{
							if (!unk_0x6CFF81397164A1D3((*uParam10)[iVar48]))
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
				if (!unk_0x6CFF81397164A1D3((*uParam10)[0]))
				{
					unk_0xD4648EA39998A07B(unk_0x096275889B8E0EE0(), (*uParam10)[iVar48], 4000, 2048, 2);
					unk_0xF4BF3E3D7FE56705(&iVar0);
					unk_0x36DBE8E570B9FBCE(0, 0, 4194816);
					unk_0x14A4402A811D03C0(0, Var32[iLocal_222 /*3*/], 2f, -1, 1048576000, 0, 1193033728);
					unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
					unk_0xFF7E39890B2840DD(iVar0);
					unk_0xD59C10966EB589EA((*uParam10)[0], iVar0);
					unk_0x5EC7E18324A7D03D(&iVar0);
					if (!unk_0x6CFF81397164A1D3((*uParam10)[1]))
					{
						unk_0xF4BF3E3D7FE56705(&iVar0);
						unk_0x36DBE8E570B9FBCE(0, 2000, 4194816);
						unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), 3000, 2052, 2);
						unk_0x14A4402A811D03C0(0, Var32[iLocal_222 /*3*/], 2f, -1, 1048576000, 0, 1193033728);
						unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
						unk_0xFF7E39890B2840DD(iVar0);
						unk_0xD59C10966EB589EA((*uParam10)[1], iVar0);
						unk_0x5EC7E18324A7D03D(&iVar0);
					}
					iVar0 = 0;
					unk_0x2AD4789CBFD829EC((*uParam10)[iVar48], 1);
					unk_0xD4648EA39998A07B((*uParam10)[iVar48], unk_0x096275889B8E0EE0(), 4000, 2052, 2);
					func_157();
					unk_0x4EDE34FBADD967A6(0);
					if (iLocal_227 > 0)
					{
						func_159(&uLocal_54, "REGETAU", "REAWA_STOP2", 4, 0, 0, 0);
					}
					else
					{
						func_159(&uLocal_54, "REGETAU", "REAWA_STOP", 4, 0, 0, 0);
					}
					*iParam0 = 15;
				}
				iVar48++;
			}
			break;
		
		case 15:
			if (!*bParam12)
			{
				if (!unk_0x6CFF81397164A1D3((*uParam10)[1]))
				{
					if (!iLocal_219)
					{
						unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
						iLocal_219 = 1;
					}
					func_16(func_103(), 1, 1000, 0, 1);
					*bParam12 = 1;
				}
			}
			else if (!unk_0x6CFF81397164A1D3((*uParam10)[0]) && !unk_0x6CFF81397164A1D3((*uParam10)[1]))
			{
				if (!unk_0x52BE10F427339B39((*uParam10)[0], 0) && !unk_0x52BE10F427339B39((*uParam10)[1], 0))
				{
					unk_0x00686F7B3723B82F();
					unk_0x939C1E5F1840360D(unk_0x096275889B8E0EE0());
					while (!func_183())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					func_2(10, 0);
					func_154(6);
					func_173(-1, 0);
					func_170();
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
			unk_0x9E0FEFE102840007(5, iLocal_309, joaat("player"));
			unk_0x9E0FEFE102840007(1, iLocal_309, iLocal_309);
			unk_0x4E4B996C928C7AA6(unk_0x217E9DC48139933D());
			unk_0xD7FA719CB54866C2(0f);
			unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 1);
			iVar65 = 0;
			while (iVar65 < iLocal_289)
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_289[iVar65]))
				{
					if (unk_0xCD82FA174080B3B1(uLocal_284[iVar65]))
					{
						unk_0xF2C3C9DA47AAA54A(&(uLocal_284[iVar65]));
						if (unk_0x52BE10F427339B39(iLocal_289[iVar65], 0))
						{
							unk_0x36DBE8E570B9FBCE(iLocal_289[iVar65], 0, 0);
						}
						if (unk_0xCD82FA174080B3B1(uLocal_52))
						{
							unk_0xF2C3C9DA47AAA54A(&uLocal_52);
						}
						unk_0x5BEB6DE8CD28F036(iLocal_289[iVar65]);
						unk_0xD46E4661E977AEE0(iLocal_289[iVar65], unk_0x096275889B8E0EE0(), 0, 16);
						unk_0x2AD4789CBFD829EC(iLocal_289[iVar65], 1);
					}
				}
				iVar65++;
			}
			func_157();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x6CFF81397164A1D3(iLocal_289[1]))
			{
				func_159(&uLocal_54, "REGETAU", "REAWA_ATTP", 4, 0, 0, 0);
			}
			else if (!unk_0x6CFF81397164A1D3(iLocal_289[0]))
			{
				func_159(&uLocal_54, "REGETAU", "REAWA_ATTB", 4, 0, 0, 0);
			}
			if (!bLocal_278)
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_288))
				{
					unk_0x5E95290AF8605EA1(iLocal_288, 0);
					unk_0x8DBC05C86F873CC9(iLocal_288, "random@getawaydriver", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
				}
			}
			iVar65 = 0;
			while (iVar65 < iLocal_292)
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_292[iVar65]))
				{
					unk_0x06C6AD4F38E8412D(iLocal_292[iVar65], unk_0x096275889B8E0EE0(), 150f, -1, 0, 0);
					unk_0x2AD4789CBFD829EC(iLocal_292[iVar65], 1);
				}
				iVar65++;
			}
			*iParam0 = 19;
			break;
		
		case 19:
			unk_0x9E0FEFE102840007(5, iLocal_309, joaat("player"));
			iVar65 = 0;
			while (iVar65 < iLocal_289)
			{
				if (unk_0x6CFF81397164A1D3(iLocal_289[iVar65]))
				{
					if (unk_0xCD82FA174080B3B1(uLocal_284[iVar65]))
					{
						unk_0xF2C3C9DA47AAA54A(&(uLocal_284[iVar65]));
					}
				}
				if (!unk_0x6CFF81397164A1D3(iLocal_289[iVar65]))
				{
					if (!unk_0xCD82FA174080B3B1(uLocal_284[iVar65]))
					{
						uLocal_284[iVar65] = func_55(iLocal_289[iVar65], 1, 145);
					}
					if (unk_0x5D6C6BD519D63337(iLocal_289[iVar65]))
					{
						unk_0x5BEB6DE8CD28F036(iLocal_289[iVar65]);
					}
					if (unk_0x52BE10F427339B39(iLocal_289[iVar65], 0))
					{
						unk_0x36DBE8E570B9FBCE(iLocal_289[iVar65], 0, 0);
						unk_0xD46E4661E977AEE0(iLocal_289[iVar65], unk_0x096275889B8E0EE0(), 0, 16);
						unk_0x2AD4789CBFD829EC(iLocal_289[iVar65], 1);
					}
					else
					{
						unk_0xD46E4661E977AEE0(iLocal_289[iVar65], unk_0x096275889B8E0EE0(), 0, 16);
						unk_0x2AD4789CBFD829EC(iLocal_289[iVar65], 1);
					}
				}
				iVar65++;
			}
			if (unk_0xCD82FA174080B3B1(uLocal_52))
			{
				unk_0xF2C3C9DA47AAA54A(&uLocal_52);
			}
			break;
		
		case 20:
			if (!func_168())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_2(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	
	unk_0xF73FBE4845C43B5B(&(Global_97353.f_1.f_116), iParam0);
	switch (iParam0)
	{
		case 10:
			unk_0xF73FBE4845C43B5B(&(Global_97353.f_1.f_119), 14);
			break;
		
		case 13:
			unk_0xF73FBE4845C43B5B(&(Global_97353.f_1.f_119), 16);
			break;
		
		case 12:
			unk_0xF73FBE4845C43B5B(&(Global_97353.f_1.f_119), 15);
			break;
		
		case 11:
			unk_0xF73FBE4845C43B5B(&(Global_97353.f_1.f_119), 17);
			break;
	}
	if (!bParam1)
	{
		iVar0 = 0;
		switch (func_15(iParam0))
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
		uVar1 = func_13(iParam0);
		unk_0x88D2BE4120CBF840("FEED_CREW_U");
		unk_0x734AB59A7DBD1DAA(func_13(iParam0));
		unk_0xA514271203084072(uVar1, uVar1, 0, iVar0, "", 0);
		if (!func_12(45))
		{
			func_3("AM_H_CREWU", 2, 0, 20000, 10000, func_6(), 0, 131, 0);
		}
	}
}

void func_3(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_4(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_4(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD3852F22AB713A1F(sParam0, ""))
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
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0xD3852F22AB713A1F(&(Global_97353.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97353.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_8 = (unk_0x4F67E8ECA7D3F667() + iParam3);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = ((unk_0x4F67E8ECA7D3F667() + iParam3) + iParam4);
		}
		else
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97353.f_23635.f_145++;
		func_5();
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97353.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[0])
			{
				Global_97353.f_23635.f_146[0] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[1])
			{
				Global_97353.f_23635.f_146[1] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[2])
			{
				Global_97353.f_23635.f_146[2] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_6()
{
	func_7();
	switch (Global_97353.f_1729.f_539.f_3213)
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

void func_7()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_11(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_10(unk_0x096275889B8E0EE0());
			if (func_9(iVar0) && (!func_8(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_9(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_8(int iParam0)
{
	return Global_34913 == iParam0;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_12(int iParam0)
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
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

var func_13(int iParam0)
{
	return func_14(iParam0);
}

char* func_14(int iParam0)
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

int func_15(int iParam0)
{
	return Global_86242[iParam0 /*5*/];
}

void func_16(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_17(Global_97353.f_29774[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x380F22FED8D528A4(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xA4DDF5DF95E65EED(iVar1, iVar0, 1);
	}
}

int func_17(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_41();
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
					func_40(99, 1);
					func_39(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_39(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_39(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_25(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_24(5))
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
							func_39(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_39(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_39(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_24(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_39(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_39(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_39(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_39(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_39(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_39(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_39(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_39(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_39(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xBC2C927F5C264960())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_39(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_39(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_39(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_39(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_39(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_39(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_24(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_39(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_39(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_39(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_39(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_39(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_39(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_23(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_40(95, iParam3);
					break;
				
				case 1:
					func_40(97, iParam3);
					break;
				
				case 2:
					func_40(96, iParam3);
					break;
			}
			func_40(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_20(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_20(iVar1);
	}
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_39(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_39(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_39(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
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
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97353.f_23789.f_233[iVar2 /*69*/]++;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_19(iParam0);
	if (Global_34913 == 15)
	{
		func_18(0);
	}
	return 1;
}

void func_18(bool bParam0)
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
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97353.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97353.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97353.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97353.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97353.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97353.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97353.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97353.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97353.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97353.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97353.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97353.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97353.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97353.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97353.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97353.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97353.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97353.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_19(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xA4DDF5DF95E65EED(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xA4DDF5DF95E65EED(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xA4DDF5DF95E65EED(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_20(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0) || unk_0x4ED6CFDFE8D4131A(Global_2097152[func_22() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		unk_0x7D1D4A3602B6AD4E(&(Global_2097152[func_22() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x88D2BE4120CBF840("COUP_RED");
		unk_0x734AB59A7DBD1DAA(func_21(iParam0));
		unk_0xA514271203084072(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_21(int iParam0)
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

int func_22()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_23(int iParam0)
{
	func_40(93, iParam0);
	func_40(29, iParam0);
	func_40(30, iParam0);
}

bool func_24(int iParam0)
{
	if (!unk_0x03A753E2C8458335())
	{
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0);
	}
	return unk_0x4ED6CFDFE8D4131A(Global_2097152[func_22() /*8053*/].f_5756.f_10, iParam0);
}

int func_25(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x962C3F7D4BAA7DBC(27))
	{
		return 0;
	}
	if (unk_0x380F22FED8D528A4(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x380F22FED8D528A4(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x380F22FED8D528A4(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x380F22FED8D528A4(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xA4DDF5DF95E65EED(joaat("num_cash_spent"), iVar1, 1);
		func_38(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_26(27, 1);
	return 1;
}

int func_26(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_27(iParam0, iParam1);
}

int func_27(int iParam0, int iParam1)
{
	if (unk_0x962C3F7D4BAA7DBC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_37(&Global_2544859))
	{
		if (func_35(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_28(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x67FB10C1C400FB25(iParam0))
		{
			return 0;
		}
		if (unk_0x962C3F7D4BAA7DBC(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_28(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	func_31(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_29(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_29(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_30(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_30(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_31(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_34(uParam0, iVar0);
		iVar0++;
	}
	func_32(&(uParam0->f_62), (8f - 0.5f));
}

void func_32(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_33(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - fParam1);
	unk_0xF73FBE4845C43B5B(uParam0, 1);
	unk_0x7D1D4A3602B6AD4E(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_33(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
	}
	if (unk_0x03A753E2C8458335())
	{
		iVar0 = unk_0x6AEB0DF30A9DB9F1();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
}

void func_34(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1) != -1;
}

int func_36(var uParam0, int iParam1)
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

bool func_37(var uParam0)
{
	return uParam0->f_68 == 1;
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x70521018B2248C91(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB3F01FFD71B4B4DC(iParam0, iParam1);
	}
	return 0;
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x380F22FED8D528A4(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xA4DDF5DF95E65EED(iParam0, iVar0, 1);
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x03A753E2C8458335())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x380F22FED8D528A4(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xA4DDF5DF95E65EED(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_41()
{
	int iVar0;
	
	if (unk_0x179A3B2BFCDDD9DF())
	{
		unk_0x380F22FED8D528A4(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		unk_0x380F22FED8D528A4(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		unk_0x380F22FED8D528A4(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_42()
{
	if (unk_0x4ED6CFDFE8D4131A(unk_0x9C1C462D7B1DD1F9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_43()
{
	if (func_103() == 2)
	{
		if (func_44())
		{
			if (unk_0x0BE7F4E3CDBAFB28(-1014.154f, 4881.411f, 245.0001f, unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(unk_0x47E385B0D957C8D4()), 0), 1) < 400f)
			{
				if (!Global_24683)
				{
					unk_0xF27F981A5EBAEFDB("AC_EN_ROUTE_CULT");
					Global_24683 = 1;
					if (!Global_24682)
					{
						Global_24682 = 1;
						return 1;
					}
				}
			}
			else if (Global_24683)
			{
				unk_0xF27F981A5EBAEFDB("AC_LEFT_AREA");
				Global_24683 = 0;
			}
		}
	}
	return 0;
}

bool func_44()
{
	return Global_24678;
}

int func_45(struct<3> Param0)
{
	if (func_103() == 2)
	{
		if (func_44() && !Global_24681)
		{
			if (fLocal_51 == -1f)
			{
				fLocal_51 = unk_0x2A488C176D52CCA5(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Param0) > (fLocal_51 + 200f) || unk_0x0BE7F4E3CDBAFB28(-1014.154f, 4881.411f, 245.0001f, unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(unk_0x47E385B0D957C8D4()), 0), 1) < 400f)
			{
				Global_24681 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_46(var uParam0)
{
	if (!unk_0x6CFF81397164A1D3((*uParam0)[0]) && !unk_0x6CFF81397164A1D3((*uParam0)[1]))
	{
		if (unk_0xC057F02B837A27F6((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && unk_0xC057F02B837A27F6((*uParam0)[0], unk_0x096275889B8E0EE0(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_226)
			{
				case 0:
					iLocal_225 = unk_0x4F67E8ECA7D3F667();
					iLocal_226++;
					break;
				
				case 1:
					if (func_115(iLocal_225, 2000))
					{
						if (!func_168())
						{
							func_159(&uLocal_54, "REGETAU", "REAWA_PITCH", 4, 0, 0, 0);
							iLocal_226++;
						}
					}
					break;
				
				case 2:
					if (!func_168())
					{
						if (func_103() == 0)
						{
							func_159(&uLocal_54, "REGETAU", "REAWA_SUREM", 4, 0, 0, 0);
						}
						if (func_103() == 1)
						{
							func_159(&uLocal_54, "REGETAU", "REAWA_SUREF", 4, 0, 0, 0);
						}
						if (func_103() == 2)
						{
							func_159(&uLocal_54, "REGETAU", "REAWA_SURET", 4, 0, 0, 0);
						}
						iLocal_226++;
					}
					break;
				}
			}
	}
}

void func_47()
{
	if (func_103() == 2)
	{
		if (!Global_24680)
		{
			func_48("CULT_BLIP_HELP", -1);
			Global_24680 = 1;
		}
	}
}

void func_48(char* sParam0, int iParam1)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
}

int func_49()
{
	if (Global_97353.f_28192.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

var func_50(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xAFE7B0E5A6396BD2(Param0);
	unk_0x17D3E31025A05A57(uVar0, func_51(unk_0x03A753E2C8458335(), 1f, 1f));
	unk_0xA1BFA381D71B6D00(uVar0, iParam3);
	return uVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_52(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_53()
{
	if (func_54())
	{
		if (((((((unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_245, 50f, 50f, 50f, 0, 1, 0) || unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_248, 50f, 50f, 50f, 0, 1, 0)) || unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_251, 50f, 50f, 50f, 0, 1, 0)) || unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_254, 50f, 50f, 50f, 0, 1, 0)) || unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_257, 50f, 50f, 50f, 0, 1, 0)) || unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_260, 50f, 50f, 50f, 0, 1, 0)) || unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_263, 50f, 50f, 50f, 0, 1, 0)) || unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_266, 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0xFB6BA510A533DF81(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)) < 0.2f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_54()
{
	int iVar0;
	
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		iVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
		if (unk_0xB86D29B10F627379(iVar0, 0))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_289[0]) && !unk_0x6CFF81397164A1D3(iLocal_289[1]))
			{
				if (unk_0x9C8E4D238C999648(iLocal_289[0], iVar0, 0) && unk_0x9C8E4D238C999648(iLocal_289[1], iVar0, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_55(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_56(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCD82FA174080B3B1(uVar0)) && unk_0x73C258C68D6F55B6(&(Global_97353.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x0A062D6D7C0B2C2C(uVar0, &(Global_97353.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_56(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xAF129458D90982F3(iParam0);
	if (unk_0xC3D96AF45FCCEC4C(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_51(unk_0x03A753E2C8458335(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x5F3268378F24D97B(uVar0, bParam1);
		}
		else
		{
			unk_0x2954B7F696FF4E2C(uVar0, 2);
		}
	}
	else if (unk_0xCF8176912DDA4EA5(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_51(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
		unk_0x5F3268378F24D97B(uVar0, bParam1);
	}
	else if (unk_0x0A27A546A375FDEF(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_51(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_57(var uParam0)
{
	if (!unk_0x6CFF81397164A1D3((*uParam0)[0]) && !unk_0x6CFF81397164A1D3((*uParam0)[1]))
	{
		if (unk_0xC057F02B837A27F6((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && unk_0xC057F02B837A27F6((*uParam0)[0], unk_0x096275889B8E0EE0(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_224)
			{
				case 0:
					iLocal_225 = unk_0x4F67E8ECA7D3F667();
					iLocal_224++;
					break;
				
				case 1:
					if (func_115(iLocal_225, 2000))
					{
						if (!func_168())
						{
							func_159(&uLocal_54, "REGETAU", "REAWA_HOM2", 4, 0, 0, 0);
							iLocal_224++;
						}
					}
					break;
				
				case 2:
					if (!func_168())
					{
						if (func_103() == 0)
						{
							func_159(&uLocal_54, "REGETAU", "REAWA_HOM4M", 4, 0, 0, 0);
						}
						if (func_103() == 1)
						{
							func_159(&uLocal_54, "REGETAU", "REAWA_HOM4F", 4, 0, 0, 0);
						}
						if (func_103() == 2)
						{
							func_159(&uLocal_54, "REGETAU", "REAWA_HOM4T", 4, 0, 0, 0);
						}
						iLocal_224++;
					}
					break;
				}
			}
	}
}

void func_58(var uParam0)
{
	if (unk_0xCD82FA174080B3B1(uParam0))
	{
		unk_0xF2C3C9DA47AAA54A(&uParam0);
	}
}

void func_59()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < iLocal_289)
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_289[iVar0]))
		{
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
			{
				if (!func_116())
				{
					unk_0x49876BF356F39E66(iLocal_289[iVar0], 1);
					if (unk_0x5D6C6BD519D63337(iLocal_289[iVar0]))
					{
						unk_0x5BEB6DE8CD28F036(iLocal_289[iVar0]);
					}
					if (unk_0x04932A97CB319DE0(iLocal_289[iVar0], 1227113341) != 1 && unk_0x04932A97CB319DE0(iLocal_289[iVar0], 1227113341) != 0)
					{
						unk_0xF553365A64BDFF94(iLocal_289[iVar0], unk_0x096275889B8E0EE0(), -1, 6f, 2f, 1073741824, 0);
					}
					if (unk_0x52BE10F427339B39(iLocal_289[iVar0], 0))
					{
						unk_0x36DBE8E570B9FBCE(iLocal_289[iVar0], 0, 0);
					}
					if (!iLocal_280)
					{
						if (!func_168())
						{
							func_159(&uLocal_54, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
							iLocal_280 = 1;
						}
					}
				}
				else
				{
					iLocal_280 = 0;
					unk_0x49876BF356F39E66(iLocal_289[iVar0], 0);
					if (unk_0x04932A97CB319DE0(iLocal_289[iVar0], 1227113341) == 1 && unk_0x04932A97CB319DE0(iLocal_289[iVar0], 1227113341) == 0)
					{
						unk_0x0F1ABE64C3C18E5A(iLocal_289[iVar0]);
					}
					if (!unk_0x6CFF81397164A1D3(iLocal_289[0]) && !unk_0x6CFF81397164A1D3(iLocal_289[1]))
					{
						unk_0x4C60E33A2CB9B14D(iLocal_289[0], 1);
						unk_0x4C60E33A2CB9B14D(iLocal_289[1], 0);
						if (unk_0xDA76A9F39210D365(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0())) == joaat("bus"))
						{
							if (!unk_0xE052C1B1CAA4ECE4(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 1))
							{
								uVar1 = unk_0xD214895E39AA3787(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 1);
								if (!unk_0x138190F64DB4BBD1(uVar1))
								{
									unk_0xDC19C288082E586E(uVar1, 1, 0);
									unk_0xCC0EF140F99365C5(&uVar1);
								}
							}
							if (!unk_0xE052C1B1CAA4ECE4(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 0))
							{
								uVar2 = unk_0xD214895E39AA3787(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 0);
								if (!unk_0x138190F64DB4BBD1(uVar2))
								{
									unk_0xDC19C288082E586E(uVar2, 1, 0);
									unk_0xCC0EF140F99365C5(&uVar2);
								}
							}
						}
					}
				}
			}
			else if (!unk_0x5D6C6BD519D63337(iLocal_289[iVar0]))
			{
				unk_0x0F1ABE64C3C18E5A(iLocal_289[iVar0]);
				unk_0xC17B8A7D48C194DB(iLocal_289[iVar0], func_63());
				unk_0xA8F442E84EF050FC(iLocal_289[iVar0], 1);
				if (!unk_0x6CFF81397164A1D3(iLocal_289[0]) && !unk_0x6CFF81397164A1D3(iLocal_289[1]))
				{
					unk_0x4C60E33A2CB9B14D(iLocal_289[0], 1);
					unk_0x4C60E33A2CB9B14D(iLocal_289[1], 0);
				}
			}
		}
		iVar0++;
	}
}

void func_60()
{
	if (!func_49())
	{
		if (func_103() == 2)
		{
			Global_24678 = 1;
		}
	}
}

int func_61(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!unk_0x6CFF81397164A1D3((*uParam0)[iVar0]))
		{
			if (!unk_0x9C8E4D238C999648((*uParam0)[iVar0], iParam1, 0))
			{
				if (fParam2 > 0f)
				{
					if (unk_0xC057F02B837A27F6((*uParam0)[iVar0], unk_0x096275889B8E0EE0(), fParam2, fParam2, fParam2, 0, 1, 0))
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

void func_62(var uParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x6CFF81397164A1D3((*uParam0)[iVar0]))
		{
			if (unk_0xCD82FA174080B3B1(uLocal_284[iVar0]))
			{
				unk_0xF2C3C9DA47AAA54A(&(uLocal_284[iVar0]));
			}
		}
		else
		{
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
			{
				if (unk_0xB86D29B10F627379(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0))
				{
					if (unk_0x9C8E4D238C999648((*uParam0)[iVar0], unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0) && unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0))
					{
						if (unk_0xCD82FA174080B3B1(uLocal_284[iVar0]))
						{
							unk_0xF2C3C9DA47AAA54A(&(uLocal_284[iVar0]));
						}
					}
					else if (!unk_0xCD82FA174080B3B1(uLocal_284[iVar0]))
					{
						uLocal_284[iVar0] = func_55((*uParam0)[iVar0], 0, 145);
					}
				}
			}
			else if (!unk_0xCD82FA174080B3B1(uLocal_284[iVar0]))
			{
				uLocal_284[iVar0] = func_55((*uParam0)[iVar0], 0, 145);
			}
			if (!unk_0xC057F02B837A27F6((*uParam0)[iVar0], unk_0x096275889B8E0EE0(), fParam1, fParam1, fParam1, 0, 1, 0))
			{
				if (unk_0xCD82FA174080B3B1(uLocal_284[iVar0]))
				{
					unk_0xF2C3C9DA47AAA54A(&(uLocal_284[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

var func_63()
{
	return unk_0x9BAB31815159ABCF(unk_0x47E385B0D957C8D4());
}

int func_64()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_289)
	{
		if (unk_0xD42BD6EB2E0F1677(iLocal_289[iVar0]))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_289[iVar0]))
			{
				if (!unk_0x5D6C6BD519D63337(iLocal_289[iVar0]))
				{
					if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
					{
						if (unk_0xE88F19660651D566(iLocal_289[iVar0], unk_0x096275889B8E0EE0()))
						{
							if (!unk_0x6CFF81397164A1D3(iLocal_289[0]) && !unk_0x6CFF81397164A1D3(iLocal_289[1]))
							{
								if (((unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), iLocal_289[0]) || unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), iLocal_289[0])) || unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), iLocal_289[1])) || unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), iLocal_289[1]))
								{
									if (iLocal_228 == -1)
									{
										iLocal_228 = unk_0x4F67E8ECA7D3F667();
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
						if (iLocal_228 != -1 && unk_0x4F67E8ECA7D3F667() > iLocal_228 + 1000)
						{
							func_157();
							unk_0x4EDE34FBADD967A6(0);
							func_159(&uLocal_54, "REGETAU", "REAWA_AIM", 4, 0, 0, 0);
							iLocal_283 = 1;
						}
					}
					if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
					{
						if (unk_0x7B6E7BEC1143AC86(iLocal_289[iVar0], unk_0x2F96E7720B0B19EA(), 1))
						{
							return 1;
						}
					}
					if ((unk_0x7B6E7BEC1143AC86(iLocal_289[iVar0], unk_0x096275889B8E0EE0(), 1) && unk_0x82368787EA73C0F7(iLocal_289[iVar0]) < 190) || (iLocal_228 != -1 && unk_0x4F67E8ECA7D3F667() > iLocal_228 + 5000))
					{
						return 1;
					}
				}
			}
			else
			{
				if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
				{
					if (unk_0x7B6E7BEC1143AC86(iLocal_289[iVar0], unk_0x2F96E7720B0B19EA(), 1))
					{
						return 1;
					}
				}
				if (unk_0x7B6E7BEC1143AC86(iLocal_289[iVar0], unk_0x096275889B8E0EE0(), 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!iLocal_220)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam0 - 1))
		{
			if (!unk_0x6CFF81397164A1D3((*uParam0)[iVar0]))
			{
				if ((unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 121.8366f, -1503.006f, 28.0999f, 0.1367f, -1649.705f, 48.1608f, 125.8125f, 0, 1, 0) && !unk_0x140188E884645624((*uParam0)[iVar0])) || unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, 1, 0))
				{
					if (!unk_0xCD82FA174080B3B1(uLocal_284[iVar0]))
					{
						if (!unk_0x6CFF81397164A1D3((*uParam0)[iVar0]))
						{
							if (!func_187())
							{
								func_90(1);
								func_89(1);
								if (!unk_0x7D5B1F88E7504BBA(iLocal_307))
								{
									if (!unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_307, 0) && !unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_307, 50f, 50f, 50f, 0, 1, 0))
									{
										func_68(iLocal_307, 0, 145);
									}
								}
							}
							uLocal_284[iVar0] = func_55((*uParam0)[iVar0], 0, 145);
							unk_0x8BB337CC6CD674F2(uLocal_284[iVar0], 0);
							func_58(uLocal_53);
						}
					}
					if (!func_168())
					{
						if (iLocal_231 < unk_0x4F67E8ECA7D3F667())
						{
							func_159(&uLocal_54, "REGETAU", "REAWA_SHOUT", 4, 0, 0, 0);
							iLocal_231 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(3500, 4000));
						}
					}
					if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, 1, 0))
					{
						func_66();
						if (!unk_0x7D5B1F88E7504BBA(iParam1))
						{
							if (!func_168())
							{
								if (func_116() && unk_0x0D5D119529654EE0(unk_0x2F96E7720B0B19EA()))
								{
									func_159(&uLocal_54, "REGETAU", "REAWA_START", 4, 0, 0, 0);
									iLocal_220 = 1;
								}
								else
								{
									func_159(&uLocal_54, "REGETAU", "REAWA_START2", 4, 0, 0, 0);
									iLocal_220 = 1;
								}
								if (unk_0xCD82FA174080B3B1(uLocal_284[0]))
								{
									unk_0x8BB337CC6CD674F2(uLocal_284[0], 1);
								}
								if (unk_0xCD82FA174080B3B1(uLocal_284[1]))
								{
									unk_0x8BB337CC6CD674F2(uLocal_284[1], 1);
								}
								if (!unk_0x6CFF81397164A1D3((*uParam0)[1]) && !unk_0x6CFF81397164A1D3(iLocal_288))
								{
									unk_0x28AC5FC91EA70789((*uParam0)[1], 156, 1);
									unk_0xF4BF3E3D7FE56705(&iLocal_308);
									unk_0x8DBC05C86F873CC9(0, "misslamar1ig_20", "stretch_call_hurry_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0x8DBC05C86F873CC9(0, "combat@gestures@pistol@halt", "180", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0x0B11639CBB53F15F(0, iLocal_288, -1, 0);
									unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), -1, 2096, 4);
									unk_0xFF7E39890B2840DD(iLocal_308);
									unk_0xD59C10966EB589EA((*uParam0)[1], iLocal_308);
									unk_0x5EC7E18324A7D03D(&iLocal_308);
								}
								unk_0xD4648EA39998A07B((*uParam0)[iVar0], unk_0x096275889B8E0EE0(), -1, 2096, 4);
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

void func_66()
{
	Global_14558 = 0;
	func_67();
}

void func_67()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if ((unk_0x3AB7C52414B223F6() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x4068804F7FE7AEAF(iParam0, &uVar0);
		if (!unk_0x2CF12F9ACF18F048(uVar1))
		{
			if (unk_0xFD340785ADF8CFB7(uVar1) == unk_0xFD340785ADF8CFB7("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_69(iParam0, iParam2);
	return 1;
}

void func_69(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_74(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xD214895E39AA3787(iParam0, -1);
		if (!unk_0xD42BD6EB2E0F1677(iVar0))
		{
			iVar0 = unk_0x74583B19FEEAFDA7(iParam0, -1);
		}
		if (unk_0xD42BD6EB2E0F1677(iVar0) && !unk_0x6CFF81397164A1D3(iVar0))
		{
			if (unk_0xDA76A9F39210D365(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xDA76A9F39210D365(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xDA76A9F39210D365(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97353.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xDA76A9F39210D365(iParam0) == Global_97353.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x2CF12F9ACF18F048(&(Global_97353.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0xD3852F22AB713A1F(unk_0xF4122ED5ACE92A17(iParam0), &(Global_97353.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97353.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97353.f_18371.f_4800[iVar1] = iVar2;
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
		if (unk_0xDA76A9F39210D365(iParam0) == Global_97353.f_18371.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x2CF12F9ACF18F048(&(Global_97353.f_18371.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0xD3852F22AB713A1F(unk_0xF4122ED5ACE92A17(iParam0), &(Global_97353.f_18371.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97353.f_18371.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97353.f_18371.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_97353.f_18371.f_4796 = 1;
	func_70(iParam0, &(Global_97353.f_18371.f_4742));
}

void func_70(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xB86D29B10F627379(iParam0, 0))
	{
		func_73(uParam1);
		uParam1->f_42 = unk_0xDA76A9F39210D365(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xF4122ED5ACE92A17(iParam0), 16);
		*uParam1 = unk_0x925BC0BB4ADD9133(iParam0);
		unk_0x5AD07C3CF934E67B(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xF39FAB2FF8EABE36(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5D1A7577B21657BF(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0xE109F71384B0E749(iParam0);
		uParam1->f_43 = unk_0xBC48F968D6EADC0D(iParam0);
		uParam1->f_45 = unk_0xBFBF929D2AB51389(iParam0);
		uParam1->f_46 = unk_0xC867FD144F2469D3(iParam0);
		unk_0xF9F04947622179FC(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xC73BFF368F8ECC8E(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0x4F929B2CCC8BB671(iParam0, 2))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 28);
		}
		if (unk_0x4F929B2CCC8BB671(iParam0, 3))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 29);
		}
		if (unk_0x4F929B2CCC8BB671(iParam0, 0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 30);
		}
		if (unk_0x4F929B2CCC8BB671(iParam0, 1))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x7B7BDDF3BC6C3D0E(iParam0, 0))
		{
			uParam1->f_44 = unk_0x9CD9457A4F02F466(iParam0);
		}
		if (unk_0x6BD83A1CACAF87AD(uParam1->f_42))
		{
			if (unk_0xAE0F16A04C1E6E04(iParam0))
			{
				switch (unk_0xB3DBFFF01F5CD60D(iParam0))
				{
					case 2:
					case 0:
						unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 23);
						unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 23);
						unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0xD7C60D33FB5EE7FA(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 9);
		}
		if (unk_0x22335D30EB16E6C3(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 10);
		}
		if (unk_0xB3A5CF3449056D6B(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 13);
			unk_0xF33C54EDBFFBFC70(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0xC6526C3B8D6D4E0C(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 12);
		}
		func_72(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFA9A55D9C4351625(iParam0, iVar0 + 1))
			{
				unk_0xF73FBE4845C43B5B(&(uParam1->f_53), func_71(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x5F655593F79A61BF(iParam0, 0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 11);
		}
		if (unk_0xD9D1CDBF3464DCDF(iParam0, "IgnoredByQuickSave") && unk_0xDEF3F1B071ABB197(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 27);
		}
	}
}

int func_71(int iParam0)
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

int func_72(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB86D29B10F627379(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xAF9BACB8400BED0F(*iParam0) == 0)
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
			if (unk_0xDDADBD56AE4C56D3(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x6F122920B2E54FF4(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCBDF6BADFF4FFDEB(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCBDF6BADFF4FFDEB(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_73(var uParam0)
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

int func_74(int iParam0)
{
	if ((((((((((!unk_0xD42BD6EB2E0F1677(iParam0) || !unk_0xB86D29B10F627379(iParam0, 0)) || func_87(iParam0, 0, 0)) || func_87(iParam0, 1, 0)) || func_87(iParam0, 2, 0)) || func_86(iParam0) != 145) || func_85(iParam0)) || func_84(iParam0)) || func_83(iParam0)) || func_82(iParam0)) || !func_75(unk_0xDA76A9F39210D365(iParam0)))
	{
		if (func_84(iParam0))
		{
		}
		if (func_84(iParam0))
		{
		}
		if (func_87(iParam0, 0, 0))
		{
		}
		if (func_87(iParam0, 1, 0))
		{
		}
		if (func_87(iParam0, 2, 0))
		{
		}
		if (func_86(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_75(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_76(iParam0))
	{
		return 0;
	}
	if (((unk_0x799CFC7C5B743B15(iParam0) || unk_0x6BD83A1CACAF87AD(iParam0)) || unk_0xB9B56D169DBE14C0(iParam0)) || unk_0xFC08C8F8C1EDF174(iParam0))
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

int func_76(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x354F62672DE7DB0A(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x03A753E2C8458335())) || (iParam0 == joaat("buffalo3") && !unk_0x03A753E2C8458335())) || (iParam0 == joaat("gauntlet2") && !unk_0x03A753E2C8458335())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x03A753E2C8458335())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_81())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x575B76101E4810BF())
		{
			if (unk_0x1B7485357D8CFE37(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x32D31669D12B8EB0(Var1.f_0))
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
		if ((((!func_80() && !func_79()) && !func_78()) && !func_77()) && !func_81())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xD1CCC2A2639D325F() || unk_0xB0FB6CFAA5A1C833()) || unk_0x88CFAE250D3E0C71())
		{
		}
		else if (!func_78())
		{
			return 0;
		}
	}
	return 1;
}

int func_77()
{
	return 0;
}

int func_78()
{
	return 1;
}

int func_79()
{
	return 1;
}

int func_80()
{
	if (unk_0x2763DC12BBE2BB6F(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_81()
{
	var uVar0;
	
	if (unk_0x678AD9D5AC57ADBF())
	{
		if (unk_0x4ED6CFDFE8D4131A(unk_0x59555B52B08EAD8E(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (unk_0x179A3B2BFCDDD9DF())
	{
		if (unk_0xBEA038AAF3BCAE99())
		{
			if (unk_0xB88CF9E7E0420A4A())
			{
				if (unk_0x678AD9D5AC57ADBF())
				{
					uVar0 = unk_0x59555B52B08EAD8E(866);
					unk_0xF73FBE4845C43B5B(&uVar0, 0);
					unk_0x6EDBA20BD26B698C(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xDA76A9F39210D365(iParam0);
	uVar1 = unk_0xF4122ED5ACE92A17(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xD3852F22AB713A1F(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_76(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_83(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD42BD6EB2E0F1677(Global_87728[iVar0]))
		{
			if (Global_87728[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_84(int iParam0)
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(iParam0) && unk_0xB86D29B10F627379(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD42BD6EB2E0F1677(Global_87698[iVar0]) && unk_0xB86D29B10F627379(Global_87698[iVar0], 0))
			{
				if (Global_87698[iVar0] == iParam0 && unk_0xDA76A9F39210D365(Global_87698[iVar0]) == unk_0xDA76A9F39210D365(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(Global_67138.f_484[24]))
	{
		if (iParam0 == Global_67138.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD42BD6EB2E0F1677(Global_67138.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67138.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_86(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
	{
		return 145;
	}
	if (!unk_0xB86D29B10F627379(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD42BD6EB2E0F1677(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				return Global_87708[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_87(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD42BD6EB2E0F1677(iParam0) || !unk_0xB86D29B10F627379(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_88(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x4ED6CFDFE8D4131A(Global_97353.f_5486[iVar9], 0))
		{
			if (unk_0x31AF177977A69F9B(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_88(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_89(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_96409, unk_0x8F77B33B6A34D8BA(), 24);
		Global_96403 = 1;
	}
	else
	{
		StringCopy(&Global_96409, "NULL", 24);
		Global_96403 = 0;
	}
}

int func_90(int iParam0)
{
	if (func_94())
	{
		Global_97343 = 1;
		Global_97340 = unk_0x4F67E8ECA7D3F667();
		if (func_93(Global_97342))
		{
			func_91(0);
		}
		unk_0x402669A4BDAA72DA(1, "RE_TITLE");
		if (iParam0 && func_93(Global_97342))
		{
			unk_0x4AF8018BE2CC3D3D();
		}
		return 1;
	}
	return 0;
}

void func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97353.f_28192.f_2 < 3)
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_48(func_92(iParam0), -1);
					Global_97353.f_28192.f_2++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x4ED6CFDFE8D4131A(Global_97349, 1))
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_48(func_92(iParam0), -1);
					Global_97353.f_28192.f_3++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x4ED6CFDFE8D4131A(Global_97349, 2))
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_48(func_92(iParam0), -1);
					Global_97353.f_28192.f_4++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 2);
				}
			}
			break;
	}
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
	switch (func_95(&Global_24503, 0, 5, 0, unk_0x55525C346BEF6960()))
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
		if (Global_87845.f_44 == 1)
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
		Global_34877++;
		*uParam0 = Global_34877;
		unk_0xFEBEEBC9CBDF4B12(unk_0x47E385B0D957C8D4(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x768C017FB878E4F4(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
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
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
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
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_97(int iParam0)
{
	return func_98(iParam0, Global_34913);
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
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_97(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_100(var uParam0, char* sParam1, int iParam2)
{
	unk_0x17033CDF9E0B42C6(uParam0, sParam1, func_101(iParam2), 1);
}

int func_101(int iParam0)
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

void func_102(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(iParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(iParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(iParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(iParam2, 1);
			}
		}
	}
}

int func_103()
{
	func_7();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_104(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_113(iParam0, 2, 1))
		{
			func_112(iParam0, 2, 1);
		}
	}
	else if (func_113(iParam0, 2, 1))
	{
		func_105(iParam0, 2, 1);
	}
}

void func_105(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x03A753E2C8458335())
	{
		if (func_111() == 0)
		{
			uVar0 = func_109(func_110(iParam0), -1, 0);
			unk_0x7D1D4A3602B6AD4E(&uVar0, iParam1);
			func_106(func_110(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_668[iParam0]), iParam1);
	}
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_107(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xA4DDF5DF95E65EED(iVar0, uParam1, iParam3);
	}
}

int func_107(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_108();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

int func_108()
{
	return Global_1312737;
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_107(iParam1)];
	if (unk_0x380F22FED8D528A4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 815;
			break;
		
		case 1:
			return 816;
			break;
		
		case 2:
			return 817;
			break;
		
		case 3:
			return 818;
			break;
		
		case 4:
			return 819;
			break;
		
		case 5:
			return 820;
			break;
		
		case 6:
			return 821;
			break;
		
		case 7:
			return 822;
			break;
		
		case 8:
			return 823;
			break;
		
		case 9:
			return 824;
			break;
		
		case 10:
			return 825;
			break;
		
		case 11:
			return 826;
			break;
		
		case 12:
			return 827;
			break;
		
		case 13:
			return 828;
			break;
		
		case 14:
			return 829;
			break;
		
		case 15:
			return 831;
			break;
		
		case 16:
			return 832;
			break;
		
		case 17:
			return 833;
			break;
		
		case 18:
			return 834;
			break;
		
		case 19:
			return 835;
			break;
		
		case 20:
			return 836;
			break;
		
		case 21:
			return 837;
			break;
		
		case 22:
			return 838;
			break;
		
		case 23:
			return 839;
			break;
		
		case 24:
			return 840;
			break;
		
		case 25:
			return 841;
			break;
		
		case 26:
			return 842;
			break;
		
		case 27:
			return 843;
			break;
		
		case 28:
			return 844;
			break;
		
		case 29:
			return 845;
			break;
		
		case 30:
			return 846;
			break;
		
		case 31:
			return 847;
			break;
		
		case 32:
			return 848;
			break;
		
		case 33:
			return 849;
			break;
		
		case 34:
			return 850;
			break;
		
		case 35:
			return 851;
			break;
		
		case 36:
			return 852;
			break;
		
		case 37:
			return 853;
			break;
		
		case 38:
			return 854;
			break;
		
		case 39:
			return 855;
			break;
		
		case 40:
			return 859;
			break;
		
		case 41:
			return 860;
			break;
		
		case 42:
			return 861;
			break;
		
		case 43:
			return 862;
			break;
		
		default:
			break;
	}
	return 2903;
}

int func_111()
{
	return Global_24444;
}

void func_112(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF73FBE4845C43B5B(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x03A753E2C8458335())
	{
		if (func_111() == 0)
		{
			uVar0 = func_109(func_110(iParam0), -1, 0);
			unk_0xF73FBE4845C43B5B(&uVar0, iParam1);
			func_106(func_110(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF73FBE4845C43B5B(&(Global_97353.f_668[iParam0]), iParam1);
	}
}

int func_113(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[iParam0], iParam1);
	}
	else if (unk_0x03A753E2C8458335())
	{
		if (func_111() == 0)
		{
			return unk_0x4ED6CFDFE8D4131A(func_109(func_110(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_114(struct<3> Param0, float fParam3, int iParam4)
{
	if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Param0, fParam3, fParam3, fParam3, 0, 1, 0))
	{
		if (iParam4 == 0)
		{
			if (unk_0x2E941B5FFA2989C6(Param0, 5f))
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

int func_115(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x4F67E8ECA7D3F667();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		if (unk_0xB86D29B10F627379(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0))
		{
			if (((((!unk_0x2B4DCDD8F91771D2(unk_0x096275889B8E0EE0()) && !unk_0xC45209A56BDACAE8(unk_0x096275889B8E0EE0())) && !unk_0xC0655426C43A17F5(unk_0x096275889B8E0EE0())) && !unk_0x2C0C61DCBEB7E6F3(unk_0x096275889B8E0EE0())) && !unk_0x7122F97890EFE68D(unk_0x096275889B8E0EE0())) && !unk_0xF4CDFCDE130FDC1F(unk_0x096275889B8E0EE0(), joaat("rhino")))
			{
				if (unk_0xA9C55F1C15E62E06(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)) >= 2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
	{
		if (unk_0xB86D29B10F627379(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0()), 0))
		{
			if (((((!unk_0x7331BD1F2125CC77(unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0()))) && !unk_0xB9B56D169DBE14C0(unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0())))) && !unk_0x6BD83A1CACAF87AD(unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0())))) && !unk_0x799CFC7C5B743B15(unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0())))) && !unk_0xFC08C8F8C1EDF174(unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0())))) && unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_117(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_118(int iParam0)
{
	if (unk_0x4F4FF2F3B81506A7())
	{
		if (func_119(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_8(6) || func_8(7))
			{
				return 1;
			}
			else
			{
				return func_119(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_97(5))
			{
				if (func_120(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				iVar0 = func_103();
				if (!func_9(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_129()) || Global_96400) || Global_24446) || func_128()) || func_127(8, -1)) || func_126()) || func_125()) || func_124()) || func_123()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1) || func_129()) || Global_24446) || func_128()) || func_127(8, -1)) || func_124()) || func_126()) || func_125()) || func_123()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_129()) || Global_96400) || Global_24446) || func_128()) || func_127(8, -1)) || func_124()) || func_126()) || func_125()) || func_123()) || Global_97353.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_129()) || Global_96400) || Global_24446) || func_128()) || func_127(8, -1)) || func_126()) || func_125()) || func_123()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_129() || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || func_127(8, -1)) || func_123()) || func_122()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_127(8, -1) || func_126()) || func_125()) || func_122()) || func_121())
						{
							return 0;
						}
						if ((unk_0xED20CB1F5297791D() && unk_0x79065FCE8B636F38() != 3) && unk_0xEC4E85B30EC75438() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
						{
							if ((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_129()) || Global_24446) || func_128()) || func_127(8, -1)) || func_125()) || func_124()) || func_123()) || Global_97353.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || func_129()) || func_125()) || Global_96400) || Global_24446) || func_128()) || Global_35957) || func_127(8, -1)) || func_124()) || func_122()) || func_123()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0)) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1)) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xB600CF743D8150FB(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_129()) || Global_96400) || Global_24446) || func_128()) || func_127(8, -1)) || func_124()) || func_122()) || func_126()) || func_125()) || func_123())
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

var func_121()
{
	return Global_90001.f_1;
}

int func_122()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_123()
{
	if (unk_0x8E34C953364A76DD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_124()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_125()
{
	return Global_90014.f_291 > 0;
}

bool func_126()
{
	return Global_90014.f_290 > 0;
}

bool func_127(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_1327593.f_949, iParam0);
}

var func_128()
{
	return Global_1315900;
}

int func_129()
{
	if (!unk_0x03A753E2C8458335())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_130(int iParam0, struct<7> Param1, var uParam8, var uParam9)
{
	if (iParam0 == 1)
	{
		func_140(&uLocal_313, Param1.f_0);
		func_140(&uLocal_313, Param1.f_1);
		func_140(&uLocal_313, Param1.f_2);
		func_140(&uLocal_313, Param1.f_3);
		func_140(&uLocal_313, Param1.f_4);
		func_140(&uLocal_313, Param1.f_5);
		func_140(&uLocal_313, Param1.f_6);
		if (func_137(&uLocal_313))
		{
			return 1;
		}
	}
	else
	{
		func_131(&uLocal_313, 0);
	}
	return 0;
}

void func_131(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_133(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_132(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_132(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_133(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 30))
		{
			func_134(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_134(var uParam0)
{
	func_135(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_135(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x4ED6CFDFE8D4131A(uParam0, 30))
	{
		switch (func_136(iParam0))
		{
			case 0:
				unk_0x4AD96EF928BD4F9A(uParam2);
				break;
			
			case 1:
				unk_0x4763145053A33D46(uParam1);
				break;
			
			case 2:
				unk_0x817FA1B1EE7CD6F0(uParam1);
				break;
			
			case 3:
				unk_0x4ACA10A91F66F1E2(uParam1);
				break;
			
			case 4:
				unk_0x139E35755418F6AA(iParam2, uParam1);
				break;
			
			case 5:
				unk_0x13A29574EBED2C8E(uParam1);
				break;
			
			case 6:
				unk_0x07EED5C86B43D7B5();
				break;
			
			case 7:
				unk_0x50723A1567C8361E(iParam2);
				break;
			
			case 8:
				unk_0xF3D4779E285B441F(iParam2, unk_0x4ED6CFDFE8D4131A(iParam0, 26));
				break;
			
			case 9:
				unk_0x042F9049EA419E86();
				break;
			
			default:
				break;
		}
	}
}

int func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x4ED6CFDFE8D4131A(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_137(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_138(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_138(var uParam0)
{
	return func_139(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_139(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x4ED6CFDFE8D4131A(uParam0, 30))
	{
		if (unk_0x4ED6CFDFE8D4131A(iParam0, 29))
		{
			switch (func_136(iParam0))
			{
				case 0:
					return unk_0x1283B8B89DD5D1B6(uParam2);
					break;
				
				case 1:
					return unk_0x27FF6FE8009B40CA(uParam1);
					break;
				
				case 2:
					return unk_0x1F23D6B6DA1CC3B2(sParam1);
					break;
				
				case 3:
					return unk_0x54D6900929CCF162(sParam1);
					break;
				
				case 4:
					return unk_0xBA9325BE372AB6EA(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xB8CB92F21E4B35D4(sParam1);
					break;
				
				case 6:
					return unk_0x9C623A934CD60291(sParam1, unk_0x4ED6CFDFE8D4131A(iParam0, 27));
					break;
				
				case 7:
					return unk_0xA5D8E0C2F3C7EEBC(iParam2);
					break;
				
				case 8:
					return unk_0x6C01088174B23EE3(iParam2);
					break;
				
				case 9:
					return unk_0x13A3F30A9ED0BC31();
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

void func_140(var uParam0, int iParam1)
{
	func_141(uParam0, 0, iParam1, "NULL", 0);
}

void func_141(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0xD3852F22AB713A1F(sParam3, "NULL"))
					{
						if (unk_0xD3852F22AB713A1F(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xF73FBE4845C43B5B(uParam0[iVar0 /*18*/], iParam1);
			unk_0xF73FBE4845C43B5B(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_142()
{
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Local_48) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_153())
		{
			return 0;
		}
	}
	if (func_149())
	{
		return 1;
	}
	if (func_143(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_143(float fParam0, bool bParam1)
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
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (func_9(func_103()))
		{
			iVar36 = func_6();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_16828[iVar32 /*6*/], 2) && !unk_0x4ED6CFDFE8D4131A(Global_97353.f_16828[iVar32 /*6*/], 3))
				{
					func_144(iVar32, &Var0);
					fVar35 = unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), Var0.f_6, 1);
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

void func_144(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_145(uParam1, "Abigail1", func_147(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 1:
			func_145(uParam1, "Abigail2", func_147(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 2:
			func_145(uParam1, "Barry1", func_147(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 3:
			func_145(uParam1, "Barry2", func_147(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 4:
			func_145(uParam1, "Barry3", func_147(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 5:
			func_145(uParam1, "Barry3A", func_147(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 6:
			func_145(uParam1, "Barry3C", func_147(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 7:
			func_145(uParam1, "Barry4", func_147(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_146(iParam0), 0, 0);
			break;
		
		case 8:
			func_145(uParam1, "Dreyfuss1", func_147(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 9:
			func_145(uParam1, "Epsilon1", func_147(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 10:
			func_145(uParam1, "Epsilon2", func_147(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 11:
			func_145(uParam1, "Epsilon3", func_147(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 12:
			func_145(uParam1, "Epsilon4", func_147(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 13:
			func_145(uParam1, "Epsilon5", func_147(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 14:
			func_145(uParam1, "Epsilon6", func_147(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 15:
			func_145(uParam1, "Epsilon7", func_147(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 16:
			func_145(uParam1, "Epsilon8", func_147(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 17:
			func_145(uParam1, "Extreme1", func_147(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 18:
			func_145(uParam1, "Extreme2", func_147(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 19:
			func_145(uParam1, "Extreme3", func_147(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 20:
			func_145(uParam1, "Extreme4", func_147(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 21:
			func_145(uParam1, "Fanatic1", func_147(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_146(iParam0), 1, 0);
			break;
		
		case 22:
			func_145(uParam1, "Fanatic2", func_147(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_146(iParam0), 1, 0);
			break;
		
		case 23:
			func_145(uParam1, "Fanatic3", func_147(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_146(iParam0), 0, 1);
			break;
		
		case 24:
			func_145(uParam1, "Hao1", func_147(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_146(iParam0), 0, 1);
			break;
		
		case 25:
			func_145(uParam1, "Hunting1", func_147(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 26:
			func_145(uParam1, "Hunting2", func_147(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 27:
			func_145(uParam1, "Josh1", func_147(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 28:
			func_145(uParam1, "Josh2", func_147(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 29:
			func_145(uParam1, "Josh3", func_147(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 30:
			func_145(uParam1, "Josh4", func_147(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 31:
			func_145(uParam1, "Maude1", func_147(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 32:
			func_145(uParam1, "Minute1", func_147(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 33:
			func_145(uParam1, "Minute2", func_147(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 34:
			func_145(uParam1, "Minute3", func_147(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 35:
			func_145(uParam1, "MrsPhilips1", func_147(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 36:
			func_145(uParam1, "MrsPhilips2", func_147(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 37:
			func_145(uParam1, "Nigel1", func_147(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 38:
			func_145(uParam1, "Nigel1A", func_147(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 39:
			func_145(uParam1, "Nigel1B", func_147(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_146(iParam0), 1, 1);
			break;
		
		case 40:
			func_145(uParam1, "Nigel1C", func_147(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_146(iParam0), 1, 1);
			break;
		
		case 41:
			func_145(uParam1, "Nigel1D", func_147(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_146(iParam0), 1, 1);
			break;
		
		case 42:
			func_145(uParam1, "Nigel2", func_147(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 43:
			func_145(uParam1, "Nigel3", func_147(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
			break;
		
		case 44:
			func_145(uParam1, "Omega1", func_147(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 45:
			func_145(uParam1, "Omega2", func_147(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 46:
			func_145(uParam1, "Paparazzo1", func_147(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 47:
			func_145(uParam1, "Paparazzo2", func_147(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 48:
			func_145(uParam1, "Paparazzo3", func_147(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 49:
			func_145(uParam1, "Paparazzo3A", func_147(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 50:
			func_145(uParam1, "Paparazzo3B", func_147(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 51:
			func_145(uParam1, "Paparazzo4", func_147(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 52:
			func_145(uParam1, "Rampage1", func_147(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 54:
			func_145(uParam1, "Rampage3", func_147(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 55:
			func_145(uParam1, "Rampage4", func_147(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 56:
			func_145(uParam1, "Rampage5", func_147(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
			break;
		
		case 53:
			func_145(uParam1, "Rampage2", func_147(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
			break;
		
		case 57:
			func_145(uParam1, "TheLastOne", func_147(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 58:
			func_145(uParam1, "Tonya1", func_147(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 59:
			func_145(uParam1, "Tonya2", func_147(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 60:
			func_145(uParam1, "Tonya3", func_147(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 61:
			func_145(uParam1, "Tonya4", func_147(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		case 62:
			func_145(uParam1, "Tonya5", func_147(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_145(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_146(int iParam0)
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

struct<2> func_147(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_148(iParam0) };
	if (unk_0x2CF12F9ACF18F048(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_148(int iParam0)
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

int func_149()
{
	if (func_152() && !func_153())
	{
		return 1;
	}
	if (func_151() && func_150())
	{
		return 1;
	}
	return 0;
}

bool func_150()
{
	return Global_97071 > 0;
}

int func_151()
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_152()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_153()
{
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x51E9BBB68A21C058() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_154(int iParam0)
{
	Global_97339 = iParam0;
}

void func_155()
{
	if (!bLocal_277)
	{
		unk_0x5A6D8DF6FBC5D0C4(func_169(unk_0x217E9DC48139933D()) - Vector(0f, 10f, 0f), unk_0x9C1C462D7B1DD1F9(5, 15), &Local_242, 1, 1077936128, 0);
		if (!unk_0x2E941B5FFA2989C6(Local_242, 10f))
		{
			Local_236 = { Local_242 };
			bLocal_276 = true;
		}
		else
		{
			unk_0x5A6D8DF6FBC5D0C4(func_169(unk_0x217E9DC48139933D()) + Vector(0f, 10f, 0f), unk_0x9C1C462D7B1DD1F9(5, 15), &Local_242, 1, 1077936128, 0);
			if (!unk_0x2E941B5FFA2989C6(Local_242, 10f))
			{
				Local_236 = { Local_242 };
				bLocal_276 = true;
			}
			if (bLocal_276)
			{
				if (!unk_0xD42BD6EB2E0F1677(uLocal_298[0]))
				{
					uLocal_298[0] = unk_0x9066DFD4D92E6773(6, joaat("s_m_y_cop_01"), Local_236 + Vector(0f, 5f, 0f), 0f, 1, 1);
					if (func_53())
					{
						unk_0x5F07E4B73A7FA39C(uLocal_298[0], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x6ECBACF91786FB7A(uLocal_298[0], iLocal_311);
						unk_0x49876BF356F39E66(uLocal_298[0], 1);
						unk_0xB6E8AB656A9FABD7(uLocal_298[0], 50f, 0);
						unk_0x2AD4789CBFD829EC(uLocal_298[0], 1);
					}
					else
					{
						unk_0x49876BF356F39E66(uLocal_298[0], 1);
						unk_0xF4BF3E3D7FE56705(&iLocal_308);
						unk_0xF553365A64BDFF94(0, unk_0x096275889B8E0EE0(), -1, 6f, 3f, 1073741824, 0);
						unk_0x8DBC05C86F873CC9(0, "random@getawaydriver", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 0);
						unk_0xD984B17E68AE4E17(0, 3000);
						unk_0xFF7E39890B2840DD(iLocal_308);
						unk_0xD59C10966EB589EA(uLocal_298[0], iLocal_308);
						unk_0x5EC7E18324A7D03D(&iLocal_308);
						unk_0x2AD4789CBFD829EC(uLocal_298[0], 1);
						func_102(&uLocal_54, 4, uLocal_298[0], "REGETCop", 0, 1);
					}
				}
				if (!unk_0xD42BD6EB2E0F1677(uLocal_298[1]))
				{
					uLocal_298[1] = unk_0x9066DFD4D92E6773(6, joaat("s_m_y_cop_01"), Local_236 - Vector(0f, 5f, 0f), 0f, 1, 1);
					if (func_53())
					{
						unk_0x5F07E4B73A7FA39C(uLocal_298[0], joaat("weapon_pistol"), -1, 0, 1);
						unk_0x6ECBACF91786FB7A(uLocal_298[1], iLocal_311);
						unk_0x49876BF356F39E66(uLocal_298[1], 1);
						unk_0xB6E8AB656A9FABD7(uLocal_298[1], 50f, 0);
						unk_0x2AD4789CBFD829EC(uLocal_298[1], 1);
					}
					else
					{
						unk_0x49876BF356F39E66(uLocal_298[1], 1);
						unk_0x2498756DE9903778(uLocal_298[1], 68.7217f, -1569.83f, 28.6027f, 3f, 0, 0, 786603, -1082130432);
						unk_0x2AD4789CBFD829EC(uLocal_298[1], 1);
					}
				}
				if (!unk_0xD42BD6EB2E0F1677(iLocal_305))
				{
					iLocal_305 = unk_0xF757863E1E2D8F12(joaat("police3"), Local_236, 0, 1, 1);
					Local_239 = { func_169(unk_0x217E9DC48139933D()) - unk_0xA86D5F069399F44D(iLocal_305, 1) };
					unk_0xCF2B9C0645C4651B(iLocal_305, unk_0x38D5202FF9271C62(Local_239.f_0, Local_239.f_1));
					unk_0x5D22009AE46EF846(iLocal_305, 1);
				}
				if (!unk_0xD42BD6EB2E0F1677(uLocal_298[2]))
				{
					uLocal_298[2] = unk_0x63FC6DA06F97F02C(iLocal_305, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
					if (func_53())
					{
						unk_0x5F07E4B73A7FA39C(uLocal_298[2], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x6ECBACF91786FB7A(uLocal_298[2], iLocal_311);
						unk_0x32A582AACCBCAEFE(uLocal_298[2], 1, 1);
						unk_0x32A582AACCBCAEFE(uLocal_298[2], 3, 0);
						unk_0x49876BF356F39E66(uLocal_298[2], 1);
						unk_0x8B5A576784E393A4(uLocal_298[2], iLocal_305, iLocal_289[1], 6, 15f, 2, -1f, -1f, 1);
						unk_0x2AD4789CBFD829EC(uLocal_298[2], 1);
					}
					else
					{
						unk_0x49876BF356F39E66(uLocal_298[2], 1);
						unk_0xF4BF3E3D7FE56705(&iLocal_308);
						unk_0xBB26FB233542CFFE(0, iLocal_305, 40.2328f, -1555.753f, 28.2128f, 10f, 0, joaat("police"), 786469, 1f, -1f);
						unk_0xD984B17E68AE4E17(0, 5000);
						unk_0xFF7E39890B2840DD(iLocal_308);
						unk_0xD59C10966EB589EA(uLocal_298[2], iLocal_308);
						unk_0x5EC7E18324A7D03D(&iLocal_308);
						unk_0x2AD4789CBFD829EC(uLocal_298[2], 1);
					}
				}
				bLocal_277 = true;
			}
		}
	}
}

int func_156(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0xD42BD6EB2E0F1677((*uParam0)[iVar0]))
		{
			if (unk_0xD42BD6EB2E0F1677(iParam1))
			{
				if (unk_0xB86D29B10F627379(iParam1, 0))
				{
					if (!unk_0x6CFF81397164A1D3((*uParam0)[iVar0]))
					{
						if (unk_0x9C8E4D238C999648((*uParam0)[iVar0], iParam1, 0))
						{
							return 0;
						}
						if (fParam2 > 0f)
						{
							if (unk_0xC057F02B837A27F6((*uParam0)[iVar0], unk_0x096275889B8E0EE0(), fParam2, fParam2, fParam2, 0, 1, 0))
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

void func_157()
{
	Global_14558 = 0;
	func_158();
}

void func_158()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
	}
}

int func_159(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_167(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_160(sParam2, iParam3, 0);
}

int func_160(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0x89EEEEF0CEB4D045(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_67();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x200E87988220C592())
		{
			return 0;
		}
		if (func_127(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_166();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 20);
			unk_0x7D1D4A3602B6AD4E(&Global_2264, 17);
			unk_0x7D1D4A3602B6AD4E(&Global_2265, 0);
			if (bParam2)
			{
				func_165();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				if (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (func_164())
				{
					return 0;
				}
				if (unk_0x5040BD184F70BF0A(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0xF66C5FD7C3EDEE62(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x391393371909C23E(unk_0x096275889B8E0EE0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0xDDE5C125AC446723(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
					if (unk_0x54A6BAC0E0415FCB(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0x31FD854785361710(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
				}
			}
			if (func_163())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 9))
				{
					return 0;
				}
			}
			func_162();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_161();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_67();
	}
	return 0;
}

void func_161()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x89EEEEF0CEB4D045(0);
	Global_15692 = 1;
}

void func_162()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0x7D1D4A3602B6AD4E(&Global_2264, 16);
}

int func_163()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar1, 1);
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x698F456FB909E077() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xCDBD4FAF88DEEEAE(unk_0x096275889B8E0EE0(), 78, 1))
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

void func_165()
{
	if (func_8(14))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_103();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_166()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

void func_167(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

int func_168()
{
	if (Global_15692 != 0 || unk_0x200E87988220C592())
	{
		return 1;
	}
	return 0;
}

Vector3 func_169(var uParam0)
{
	return unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(uParam0), 0);
}

void func_170()
{
	func_171();
}

int func_171()
{
	if (func_172(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_172(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
}

void func_173(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_181();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_180(iParam0))
	{
		func_179(iParam0, iParam1);
		if (!func_12(51))
		{
			func_3("RE_REWARD", 1, 0, 4000, 10000, func_6(), 0, 138, 0);
			func_178(51);
		}
		if (func_93(iParam0))
		{
			Global_97353.f_28192.f_2 = 3;
		}
		if (func_177(iParam0, iParam1) != 322)
		{
			func_174(func_177(iParam0, iParam1), Local_48.f_0, Local_48.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_154(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				func_154(7);
			}
			else
			{
				func_154(1);
			}
		}
	}
}

void func_174(int iParam0, var uParam1, var uParam2)
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
		func_176((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97353.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97353.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97353.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97353.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97353.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_175();
	}
}

void func_175()
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
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97353.f_8448.f_3853;
	Global_97353.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97353.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97353.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_97353.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_97353.f_8448.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					unk_0x53BF44E14DB83845(joaat("num_rndevents_completed"), Global_97076, 0);
					unk_0xF73FBE4845C43B5B(&(Global_97353.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_97353.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_completed"), Global_97089, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_available"), Global_97072, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_completed"), Global_97090, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_available"), Global_97073, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_completed"), Global_97091, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_available"), Global_97074, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_completed"), Global_97092, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_available"), Global_97075, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_available"), Global_97079, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	unk_0x481BDF6A10C5EF67(joaat("total_progress_made"), Global_97353.f_8448.f_3853, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_story_missions"), Global_97096, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_ambient_missions"), Global_97097, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853))
	{
		func_38(13, unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853));
	}
	if (!unk_0x0010E412C61393C2())
	{
		if (!Global_68245)
		{
			if (func_111() == 2 == 0 && !unk_0x03A753E2C8458335())
			{
				if (unk_0x61E3D90420572762())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_171();
				}
			}
		}
	}
}

int func_176(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_108();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x9DD8670FD28D049C((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x4BECE45A720E7361((iParam0 - 0)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x9DD8670FD28D049C((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x4BECE45A720E7361((iParam0 - 192)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x9DD8670FD28D049C((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x4BECE45A720E7361((iParam0 - 513)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x9DD8670FD28D049C((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x4BECE45A720E7361((iParam0 - 705)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x0177152C7E362CA1((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x4BECE45A720E7361((iParam0 - 3111)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x0177152C7E362CA1((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x4BECE45A720E7361((iParam0 - 2919)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x9DC305C3520822DE((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x4BECE45A720E7361((iParam0 - 4207)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x9DC305C3520822DE((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x4BECE45A720E7361((iParam0 - 4335)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_177(int iParam0, int iParam1)
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

void func_178(int iParam0)
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
		unk_0xF73FBE4845C43B5B(&(Global_97353.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_179(int iParam0, int iParam1)
{
	unk_0xF73FBE4845C43B5B(&(Global_97353.f_28192.f_8[iParam0]), iParam1);
}

int func_180(int iParam0)
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

int func_181()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x8F77B33B6A34D8BA(), 64);
	uVar16 = func_182(Var0);
	return uVar16;
}

int func_182(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xFD340785ADF8CFB7(&cParam0))
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

int func_183()
{
	return 1;
}

int func_184()
{
	if (Global_24679)
	{
		func_154(4);
		return 1;
	}
	return 0;
}

int func_185(int iParam0)
{
	return func_113(iParam0, 5, 1);
}

int func_186()
{
	if (!func_97(5))
	{
		return 1;
	}
	if (func_149())
	{
		return 1;
	}
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_153())
		{
			return 0;
		}
	}
	if (func_143(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	if ((Global_97342 == func_181() && unk_0x924D54E5698AE3E0()) && Global_97343)
	{
		return 1;
	}
	return 0;
}

void func_188(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x77DFA958FCF100C1() >= (uParam0->f_146 + uParam0->f_147) || unk_0x4ED6CFDFE8D4131A(Global_89962.f_20, 2)) || unk_0x4ED6CFDFE8D4131A(Global_89962.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 29))
					{
						func_189(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x77DFA958FCF100C1();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_189(var uParam0)
{
	func_190(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_190(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x4ED6CFDFE8D4131A(*uParam0, 30))
	{
		switch (func_136(*uParam0))
		{
			case 0:
				unk_0xFA28FE3A6246FC30(uParam2);
				break;
			
			case 1:
				unk_0xA862A2AD321F94B4(uParam1);
				break;
			
			case 2:
				unk_0xEF7611B57A820126(sParam1);
				break;
			
			case 3:
				unk_0xC1BA29DF5631B0F8(sParam1, unk_0x4ED6CFDFE8D4131A(*uParam0, 28));
				break;
			
			case 4:
				unk_0xC474CF16EDA45DC9(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x0F4E7383958CD0A4(sParam1);
				break;
			
			case 6:
				unk_0x9C623A934CD60291(sParam1, unk_0x4ED6CFDFE8D4131A(*uParam0, 27));
				break;
			
			case 7:
				unk_0xF6B9CE3F8D5B9B74(iParam2);
				break;
			
			case 8:
				unk_0x7C11D0C2EFACD80D(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x001FF43843028E0C();
				break;
			
			default:
				break;
		}
		unk_0xF73FBE4845C43B5B(uParam0, 29);
	}
}

void func_191(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_181();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_193(iParam0);
	unk_0x7FE28E92FA9F21C3(0);
	unk_0xB1ADCCC4150C6473(1);
	Global_97339 = 0;
	func_192();
}

void func_192()
{
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			unk_0x57F925DF866E2CBD(unk_0xDA76A9F39210D365(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)), 1);
		}
		unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 32, 0);
	}
}

void func_193(int iParam0)
{
	Global_97342 = iParam0;
}

int func_194(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_181();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_81())
		{
			return 0;
		}
	}
	Local_48 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			Var1 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_153())
			{
				return 0;
			}
		}
		if (!Global_97353.f_7341)
		{
			return 0;
		}
		if (func_172(0))
		{
			return 0;
		}
		if (func_149())
		{
			return 0;
		}
		if (func_224())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (func_9(func_103()))
		{
			if (func_143(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !bParam6)
		{
			if ((Var1.f_2 - Local_48.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_223(iParam3))
		{
			return 0;
		}
		if (func_9(func_103()))
		{
			if (func_222(func_103()) == 4 || func_222(func_103()) == 5)
			{
				return 0;
			}
		}
		if (func_9(func_103()))
		{
			if (!func_221(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_220(Global_97353.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x4F67E8ECA7D3F667() - Global_97344) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_219())
		{
			return 0;
		}
		if (unk_0xB15CD1CF58771DE1())
		{
			return 0;
		}
		if (unk_0x924D54E5698AE3E0())
		{
			return 0;
		}
		if (!func_120(4))
		{
			return 0;
		}
		if (!func_97(5))
		{
			return 0;
		}
		if (func_218(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x017C1B3159F79F6C(unk_0xB417689857646F61(unk_0x096275889B8E0EE0())))
		{
			if ((unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(377.153f, -717.567f, 10.0536f) || unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(320.9934f, 265.2515f, 82.1221f)) || unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_218(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_223(30) && !func_218(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_9(func_103()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97353.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97353.f_1729.f_539.f_1524[iVar4];
				if (func_217(iVar8))
				{
					if (func_195(iVar4))
					{
						if (!func_52(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), Var5) < (210f * 210f))
							{
								if (func_103() != iVar4)
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

bool func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97353.f_1729.f_539.f_1524[iParam0];
	return func_196(iVar0);
}

int func_196(int iParam0)
{
	return func_197(iParam0, 1);
}

int func_197(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_217(iParam0))
	{
		return 0;
	}
	func_198(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_198(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_199(func_210(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_199(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_209(iParam0, iParam1))
	{
		iVar0 = func_208(iParam1);
		iVar1 = func_206(iParam0);
		iVar2 = (func_206(iParam0) - func_206(iParam1));
		iVar3 = (func_208(iParam0) - func_208(iParam1));
		iVar4 = (func_205(iParam0) - func_205(iParam1));
		iVar5 = (func_204(iParam0) - func_204(iParam1));
		iVar6 = (func_203(iParam0) - func_203(iParam1));
		iVar7 = (func_202(iParam0) - func_202(iParam1));
	}
	else
	{
		iVar0 = func_208(iParam0);
		iVar1 = func_206(iParam1);
		iVar2 = (func_206(iParam1) - func_206(iParam0));
		iVar3 = (func_208(iParam1) - func_208(iParam0));
		iVar4 = (func_205(iParam1) - func_205(iParam0));
		iVar5 = (func_204(iParam1) - func_204(iParam0));
		iVar6 = (func_203(iParam1) - func_203(iParam0));
		iVar7 = (func_202(iParam1) - func_202(iParam0));
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
		iVar4 = (iVar4 + func_201(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_200(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_200(float fParam0, float fParam1, float fParam2)
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

int func_201(int iParam0, int iParam1)
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

int func_202(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_203(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_204(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_205(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_206(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_207(unk_0x4ED6CFDFE8D4131A(iParam0, 31), -1, 1)) + 2011;
}

int func_207(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_208(int iParam0)
{
	return iParam0 & 15;
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_217(iParam1) || !func_217(iParam0))
	{
		return 1;
	}
	iVar0 = func_206(iParam0);
	iVar1 = func_206(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_204(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_210()
{
	var uVar0;
	
	func_216(&uVar0, unk_0xB6101ABE62B5F080());
	func_215(&uVar0, unk_0x4E162231B823DBBF());
	func_214(&uVar0, unk_0xC82CF208C2B19199());
	func_213(&uVar0, unk_0xDF2FD796C54480A5());
	func_212(&uVar0, unk_0x2D44E8FC79EAB1AC());
	func_211(&uVar0, unk_0xE136DCA28C4A48BA());
	return uVar0;
}

void func_211(var uParam0, int iParam1)
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

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_213(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_208(*uParam0);
	iVar1 = func_206(*uParam0);
	if (iParam1 < 1 || iParam1 > func_201(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_214(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_215(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_216(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_217(int iParam0)
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
	iVar0 = func_202(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_203(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_204(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_206(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_208(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_205(iParam0);
	if (iVar5 < 1 || iVar5 > func_201(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_218(int iParam0, int iParam1)
{
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	func_165();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_220(int iParam0)
{
	return func_209(func_210(), iParam0);
}

int func_221(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_103();
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

int func_222(int iParam0)
{
	if (!func_9(iParam0))
	{
		return 7;
	}
	return Global_97353.f_5944.f_919[iParam0];
}

bool func_223(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_81())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_224()
{
	int iVar0;
	
	if (Global_24594)
	{
		iVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
		if (unk_0xB86D29B10F627379(iVar0, 0))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0xD214895E39AA3787(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_225(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_226(struct<9> Param0, int iParam9, bool bParam10)
{
	int iVar0;
	
	if (iLocal_312)
	{
		func_239(0);
		if (Global_24682)
		{
			unk_0xF27F981A5EBAEFDB("AC_STOP");
		}
		func_238();
		func_89(0);
		unk_0xBBB134FB9D50C0CC(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 1, 1);
		unk_0x7E42B5424BF0E844();
		unk_0x4CEF9886342E2CD1(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0);
		unk_0xC77E39B7E42156B8(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 1);
		unk_0x062D14F18E8B0CAE(unk_0x217E9DC48139933D());
		unk_0xD7FA719CB54866C2(1f);
		if (!unk_0x7D5B1F88E7504BBA(iLocal_307))
		{
			func_68(iLocal_307, 0, 145);
		}
		if (!unk_0x6CFF81397164A1D3(iLocal_288))
		{
			if (unk_0xDEE49D5CA6C49148(iLocal_288, "random@getawaydriver", "idle_a", 3) || unk_0xDEE49D5CA6C49148(iLocal_288, "random@getawaydriver", "idle_2_hands_up", 3))
			{
				unk_0xF4BF3E3D7FE56705(&iLocal_308);
				unk_0x8DBC05C86F873CC9(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
				if (!unk_0x6CFF81397164A1D3((*iParam9)[0]))
				{
					unk_0x06C6AD4F38E8412D(0, (*iParam9)[0], 150f, -1, 0, 0);
				}
				else if (!unk_0x6CFF81397164A1D3((*iParam9)[1]))
				{
					unk_0x06C6AD4F38E8412D(0, (*iParam9)[1], 150f, -1, 0, 0);
				}
				unk_0xFF7E39890B2840DD(iLocal_308);
				unk_0xD59C10966EB589EA(iLocal_288, iLocal_308);
				unk_0x5EC7E18324A7D03D(&iLocal_308);
				unk_0x2AD4789CBFD829EC(iLocal_288, 1);
			}
			unk_0x74D112F5843DB3CA(iLocal_288);
			unk_0x32A582AACCBCAEFE(iLocal_288, 17, 1);
			unk_0x49876BF356F39E66(iLocal_288, 0);
		}
		if (!unk_0x6CFF81397164A1D3((*iParam9)[0]))
		{
			unk_0x020E173F318C12DA((*iParam9)[0], 317, 1);
			unk_0x32A582AACCBCAEFE((*iParam9)[0], 17, 1);
			unk_0x5BEB6DE8CD28F036((*iParam9)[0]);
			unk_0x5E95290AF8605EA1((*iParam9)[0], 1);
			unk_0x49876BF356F39E66((*iParam9)[0], 0);
		}
		if (!unk_0x6CFF81397164A1D3((*iParam9)[1]))
		{
			unk_0x020E173F318C12DA((*iParam9)[1], 317, 1);
			unk_0x32A582AACCBCAEFE((*iParam9)[1], 17, 1);
			unk_0x5BEB6DE8CD28F036((*iParam9)[1]);
			unk_0x5E95290AF8605EA1((*iParam9)[1], 1);
			unk_0x49876BF356F39E66((*iParam9)[1], 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_292)
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_292[iVar0]))
			{
				unk_0x49876BF356F39E66(iLocal_292[iVar0], 0);
			}
			iVar0++;
		}
		if (!unk_0x6CFF81397164A1D3(uLocal_298[0]))
		{
			unk_0x5F07E4B73A7FA39C(uLocal_298[0], joaat("weapon_pistol"), -1, 0, 1);
			unk_0x49876BF356F39E66(uLocal_298[0], 0);
		}
		if (!unk_0x6CFF81397164A1D3(uLocal_298[1]))
		{
			unk_0x5F07E4B73A7FA39C(uLocal_298[1], joaat("weapon_pistol"), -1, 0, 1);
			unk_0x49876BF356F39E66(uLocal_298[1], 0);
		}
		if (!unk_0x6CFF81397164A1D3(uLocal_298[2]))
		{
			unk_0x5F07E4B73A7FA39C(uLocal_298[2], joaat("weapon_pistol"), -1, 0, 1);
			unk_0x49876BF356F39E66(uLocal_298[2], 0);
		}
		if (!bParam10)
		{
			if (!unk_0x6CFF81397164A1D3((*iParam9)[0]))
			{
				unk_0x4EFB17949DC06F34((*iParam9)[0], func_169(unk_0x217E9DC48139933D()), 200f, -1, 0, 0);
			}
			if (!unk_0x6CFF81397164A1D3((*iParam9)[1]))
			{
				unk_0x4EFB17949DC06F34((*iParam9)[1], func_169(unk_0x217E9DC48139933D()), 200f, -1, 0, 0);
			}
		}
		if (!iLocal_219)
		{
			unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
			iLocal_219 = 1;
		}
		func_58(uLocal_52);
		if (unk_0xCD82FA174080B3B1(uLocal_287))
		{
			unk_0xF2C3C9DA47AAA54A(&uLocal_287);
		}
		func_58(uLocal_53);
		func_117(0);
		func_130(0, Param0);
	}
	func_227(-1);
	unk_0x5E8B6D17FF91CD59();
}

void func_227(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_181();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_187())
	{
		func_231(iParam0);
		unk_0x402669A4BDAA72DA(0, 0);
		Global_97344 = unk_0x4F67E8ECA7D3F667();
		func_230(30000);
		StringCopy(&cVar0, func_229(Global_97342, 1), 64);
		if (func_180(Global_97342) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97341, 64);
		}
		unk_0x937D8BBA51EBAAA8(&cVar0, Global_97339, (unk_0x4F67E8ECA7D3F667() - Global_97340), 0);
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97349, 0) && Global_97353.f_28192.f_2 < 3)
	{
		unk_0x7D1D4A3602B6AD4E(&Global_97349, 0);
	}
	func_228(&Global_24503);
	Global_97343 = 0;
	func_193(-1);
}

void func_228(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

char* func_229(int iParam0, bool bParam1)
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

void func_230(int iParam0)
{
	Global_35464 = (unk_0x4F67E8ECA7D3F667() + iParam0);
}

void func_231(int iParam0)
{
	func_232(iParam0, 0, func_237(iParam0));
}

void func_232(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_210();
	func_235(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_234(iParam0, &uVar0);
	Var1 = { func_233(&uVar0) };
}

struct<16> func_233(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_204(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_203(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_202(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_205(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_208(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_206(*uParam0), 64);
	return Var0;
}

void func_234(int iParam0, var uParam1)
{
	Global_97353.f_28192.f_43[iParam0] = *uParam1;
}

void func_235(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_206(*uParam0);
	iVar1 = func_208(*uParam0);
	iVar2 = func_205(*uParam0);
	iVar3 = func_204(*uParam0);
	iVar4 = func_203(*uParam0);
	iVar5 = func_202(*uParam0);
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
	iVar6 = func_201(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_201(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_236(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_216(uParam0, iParam1);
	func_215(uParam0, iParam2);
	func_214(uParam0, iParam3);
	func_213(uParam0, iParam4);
	func_212(uParam0, iParam5);
	func_211(uParam0, iParam6);
}

int func_237(int iParam0)
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

void func_238()
{
	Global_24678 = 0;
	Global_24679 = 0;
	Global_24681 = 0;
	Global_24682 = 0;
	Global_24683 = 0;
}

void func_239(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_104(iVar0, bParam0);
		iVar0++;
	}
}

