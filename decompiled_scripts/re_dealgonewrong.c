#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_51[9];
	float fLocal_79[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<3> Local_112 = { 0, 0, 0 } ;
	var uLocal_115 = 0;
	struct<3> Local_116 = { 0, 0, 0 } ;
	float fLocal_119 = 0f;
	float fLocal_120 = 0f;
	float fLocal_121 = 0f;
	float fLocal_122 = 0f;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_146[2] = { 0, 0 };
	var uLocal_149[4] = { 0, 0, 0, 0 };
	var uLocal_154[4] = { 0, 0, 0, 0 };
	var uLocal_159[5] = { 0, 0, 0, 0, 0 };
	var uLocal_165[4] = { 0, 0, 0, 0 };
	var uLocal_170[4] = { 0, 0, 0, 0 };
	var uLocal_175[4] = { 0, 0, 0, 0 };
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_193[4] = { 0, 0, 0, 0 };
	var uLocal_198[4] = { 0, 0, 0, 0 };
	var uLocal_203[4] = { 0, 0, 0, 0 };
	var uLocal_208[4] = { 0, 0, 0, 0 };
	var uLocal_213 = 0;
	var uLocal_214[5] = { 0, 0, 0, 0, 0 };
	var uLocal_220[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_233 = { 0, 0, 0 } ;
	struct<3> Local_236 = { 0, 0, 0 } ;
	struct<3> Local_239 = { 0, 0, 0 } ;
	struct<3> Local_242 = { 0, 0, 0 } ;
	struct<3> Local_245[5];
	int iLocal_261 = 0;
	bool bLocal_262 = 0;
	bool bLocal_263 = 0;
	bool bLocal_264 = 0;
	bool bLocal_265 = 0;
	bool bLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 16;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
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
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
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
	struct<3> Local_435 = { 0, 0, 0 } ;
	struct<3> Local_438[4];
	struct<3> Local_451 = { 0, 0, 0 } ;
	int iLocal_454 = 0;
	bool bLocal_455 = 0;
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
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_233 = { -1635.648f, 4737.801f, 52.4304f };
	Local_236 = { -1640.745f, 4696.386f, 39.279f };
	Local_48 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xD63E63DFACCEB80E(11))
	{
		func_166();
	}
	if (func_124(Local_48, -1, 0, 0, 0))
	{
		func_121(-1);
	}
	else
	{
		unk_0xE60DEFFB2A853900();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0xB819D1DD7DA58F08() || unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), -1503.54f, 4934.923f, 114.2284f, 100f, 100f, 100f, 0, 1, 0)) || iLocal_46 == 2)
		{
			if (!func_120())
			{
				if (func_119())
				{
					func_166();
				}
			}
			unk_0x2F626F4BEC43C4F6("RE_DGW", 0);
			switch (iLocal_46)
			{
				case 0:
					if (iLocal_454)
					{
						iLocal_46 = 1;
					}
					else
					{
						if (func_107())
						{
							func_166();
						}
						func_104();
					}
					break;
				
				case 1:
					func_103();
					func_92();
					break;
				
				case 2:
					switch (iLocal_45)
					{
						case 0:
							func_103();
							iLocal_45 = 1;
							break;
						
						case 1:
							func_103();
							func_72();
							if (iLocal_47 >= 6)
							{
								if (!func_71())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (bLocal_266)
										{
											func_70(&(uLocal_149[iVar0]), &(uLocal_193[iVar0]), &(uLocal_175[iVar0]), &(uLocal_203[iVar0]));
											func_65(uLocal_175[0], unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 0f, 0f, 1000, 0f);
											func_65(uLocal_175[1], unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 2f, 0f, 1000, 0f);
											func_60(&(uLocal_149[iVar0]), &(uLocal_193[iVar0]), &(uLocal_175[iVar0]), &(uLocal_203[iVar0]));
										}
										else if (bLocal_263)
										{
											func_70(&(uLocal_149[iVar0]), &(uLocal_193[iVar0]), &(uLocal_165[iVar0]), &(uLocal_203[iVar0]));
											func_65(uLocal_165[0], unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 0f, 0f, 1000, 0f);
											func_65(uLocal_165[1], unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 5f, 0f, 1000, 0f);
											func_60(&(uLocal_149[iVar0]), &(uLocal_193[iVar0]), &(uLocal_165[iVar0]), &(uLocal_203[iVar0]));
										}
										else if (bLocal_264)
										{
											func_70(&(uLocal_154[iVar0]), &(uLocal_198[iVar0]), &(uLocal_170[iVar0]), &(uLocal_208[iVar0]));
											func_65(uLocal_170[0], unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 0f, 0f, 1000, 0f);
											func_65(uLocal_170[1], unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 5f, 0f, 1000, 0f);
											func_60(&(uLocal_154[iVar0]), &(uLocal_198[iVar0]), &(uLocal_170[iVar0]), &(uLocal_208[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_35();
								}
							}
							if (((unk_0x04C9AA01BF03901E(unk_0x9F92518438215DD0()) || unk_0x75766A2EF9F81DB3(unk_0x9F92518438215DD0())) && !unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_233, 100f, 100f, 100f, 0, 1, 0)) && iLocal_47 < 2)
							{
								func_35();
							}
							break;
					}
					break;
				
				case 3:
					func_1();
					break;
			}
		}
		else
		{
			func_166();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_454 && !iLocal_261)
	{
		unk_0x845977C673188B47();
		unk_0xB1E35D138037D248(1f);
		if (unk_0x2E6E8D325977B3EC(uLocal_180))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_180);
		}
		if (unk_0x2E6E8D325977B3EC(uLocal_181))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_181);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x2E6E8D325977B3EC(uLocal_193[iVar0]))
			{
				unk_0x0451B5D93A4BDAA0(&(uLocal_193[iVar0]));
			}
			if (unk_0x2E6E8D325977B3EC(uLocal_203[iVar0]))
			{
				unk_0x0451B5D93A4BDAA0(&(uLocal_203[iVar0]));
			}
			if (iLocal_47 >= 6)
			{
				if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
				{
					if (!unk_0x3E0478C40AB5B38D(uLocal_149[iVar0]))
					{
						if (unk_0x5093D6F9140AD109(uLocal_149[iVar0], unk_0x9F92518438215DD0(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_265 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x2E6E8D325977B3EC(uLocal_198[iVar0]))
			{
				unk_0x0451B5D93A4BDAA0(&(uLocal_198[iVar0]));
			}
			if (unk_0x2E6E8D325977B3EC(uLocal_208[iVar0]))
			{
				unk_0x0451B5D93A4BDAA0(&(uLocal_208[iVar0]));
			}
			if (iLocal_47 >= 6)
			{
				if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
				{
					if (!unk_0x3E0478C40AB5B38D(uLocal_154[iVar0]))
					{
						if (unk_0x5093D6F9140AD109(uLocal_154[iVar0], unk_0x9F92518438215DD0(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_265 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_45 >= 1)
		{
			unk_0x2250E32CE864C09F(5, 1);
			unk_0x2250E32CE864C09F(3, 1);
		}
		if (bLocal_265)
		{
			func_3(func_29(), 1, 25000);
		}
		iLocal_261 = 1;
	}
	if (!unk_0xE298336AB6E66F7E(Local_233, 30f) && unk_0x2A488C176D52CCA5(func_2(unk_0xCFC72E446B0B3AD7()), Local_233) > 300f)
	{
		func_166();
	}
}

Vector3 func_2(var uParam0)
{
	return unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(uParam0), 0);
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (Global_97358.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97358.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_97358.f_29774[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_28();
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
					func_27(99, 1);
					func_26(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_26(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_26(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_12(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_11(5))
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
							func_26(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_26(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_26(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_11(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_26(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_26(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_26(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_26(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_26(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_26(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_26(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_26(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_26(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x63D5B7FC98AAD9B7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_26(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_26(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_26(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_26(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_26(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_26(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_11(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_26(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_26(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_26(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_26(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_26(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_26(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_10(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_27(95, iParam3);
					break;
				
				case 1:
					func_27(97, iParam3);
					break;
				
				case 2:
					func_27(96, iParam3);
					break;
			}
			func_27(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
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
					func_26(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_26(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_26(joaat("sp2_total_cash_earned"), iParam3);
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
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97358.f_23789.f_233[iVar2 /*69*/]++;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_34913 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)
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
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97358.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97358.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97358.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97358.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97358.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97358.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97358.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97358.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97358.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97358.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97358.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97358.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97358.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97358.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97358.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97358.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97358.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97358.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xC46BDC34976E9532(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xC46BDC34976E9532(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xC46BDC34976E9532(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_7(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0) || unk_0x94E72F17611BCD3C(Global_2097152[func_9() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_23789.f_471), iParam0);
		unk_0xF76EE56D3E7DAF1B(&(Global_2097152[func_9() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x3BE5C2319988C0DB("COUP_RED");
		unk_0xDB4BC767CEF09274(func_8(iParam0));
		unk_0x47BD44C357490C29(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)
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

int func_9()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0)
{
	func_27(93, iParam0);
	func_27(29, iParam0);
	func_27(30, iParam0);
}

bool func_11(int iParam0)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0);
	}
	return unk_0x94E72F17611BCD3C(Global_2097152[func_9() /*8064*/].f_5756.f_10, iParam0);
}

int func_12(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x43C8E3C45AFA597C(27))
	{
		return 0;
	}
	if (unk_0x39496A55977AA312(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x39496A55977AA312(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x39496A55977AA312(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x39496A55977AA312(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xC46BDC34976E9532(joaat("num_cash_spent"), iVar1, 1);
		func_25(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_13(27, 1);
	return 1;
}

int func_13(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_14(iParam0, iParam1);
}

int func_14(int iParam0, int iParam1)
{
	if (unk_0x43C8E3C45AFA597C(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_24(&Global_2545750))
	{
		if (func_22(&Global_2545750, iParam0))
		{
			return 0;
		}
		if (func_15(&Global_2545750, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x640DBCBD28EEC61A(iParam0))
		{
			return 0;
		}
		if (unk_0x43C8E3C45AFA597C(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_15(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0x43C8E3C45AFA597C(iParam1))
	{
		return 0;
	}
	if (func_22(uParam0, iParam1))
	{
		return 0;
	}
	func_18(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_16(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_16(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x43C8E3C45AFA597C(iParam1))
	{
		return 0;
	}
	if (func_22(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_17(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_17(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_18(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_21(uParam0, iVar0);
		iVar0++;
	}
	func_19(&(uParam0->f_62), (8f - 0.5f));
}

void func_19(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_20(unk_0x94E72F17611BCD3C(*uParam0, 4)) - fParam1);
	unk_0xEDB9A377CD8B7F03(uParam0, 1);
	unk_0xF76EE56D3E7DAF1B(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_20(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		iVar0 = unk_0x6A8628B6E9F055B3();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
}

void func_21(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_22(var uParam0, int iParam1)
{
	return func_23(uParam0, iParam1) != -1;
}

int func_23(var uParam0, int iParam1)
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

bool func_24(var uParam0)
{
	return uParam0->f_68 == 1;
}

int func_25(int iParam0, int iParam1)
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
	iVar0 = unk_0xB52E39FB32049D7B(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x72E8D9153ACCB3F4(iParam0, iParam1);
	}
	return 0;
}

void func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x39496A55977AA312(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xC46BDC34976E9532(iParam0, iVar0, 1);
}

void func_27(int iParam0, int iParam1)
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
	if (unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x39496A55977AA312(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xC46BDC34976E9532(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_28()
{
	int iVar0;
	
	if (unk_0x9183AA5076D2BF07())
	{
		unk_0x39496A55977AA312(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		unk_0x39496A55977AA312(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		unk_0x39496A55977AA312(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_29()
{
	func_30();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_30()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_34(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_33(unk_0x9F92518438215DD0());
			if (func_32(iVar0) && (!func_31(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_32(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_31(int iParam0)
{
	return Global_34913 == iParam0;
}

bool func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)
{
	if (func_32(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35()
{
	while (func_59())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_58())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_39(-1, 0);
	func_36();
	iLocal_46 = 3;
}

void func_36()
{
	func_37();
}

int func_37()
{
	if (func_38(0))
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

bool func_38(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

void func_39(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_55(iParam0))
	{
		func_54(iParam0, iParam1);
		if (!func_53(51))
		{
			func_49("RE_REWARD", 1, 0, 4000, 10000, func_52(), 0, 138, 0);
			func_48(51);
		}
		if (func_47(iParam0))
		{
			Global_97358.f_28192.f_2 = 3;
		}
		if (func_46(iParam0, iParam1) != 322)
		{
			func_41(func_46(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97346 = iParam1;
		if (Global_97344 == 0)
		{
			if (((Global_97347 == 1 || Global_97347 == 5) || Global_97347 == 11) || Global_97347 == 25)
			{
				func_40(2);
			}
			else if ((Global_97347 == 26 || Global_97347 == 8) || Global_97347 == 17)
			{
				func_40(7);
			}
			else
			{
				func_40(1);
			}
		}
	}
}

void func_40(int iParam0)
{
	Global_97344 = iParam0;
}

void func_41(int iParam0, var uParam1, var uParam2)
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
		func_44((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97358.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97358.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97358.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97358.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97358.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97358.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_42();
	}
}

void func_42()
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
	Global_97094 = 0;
	Global_97095 = 0;
	Global_97096 = 0;
	Global_97097 = 0;
	Global_97098 = 0;
	Global_97099 = 0;
	Global_97100 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97358.f_8448.f_3853;
	Global_97358.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97358.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97358.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97094++;
					fVar1 = (fVar1 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97095++;
					fVar2 = (fVar2 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97096++;
					fVar3 = (fVar3 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97097++;
					fVar4 = (fVar4 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97098++;
					fVar5 = (fVar5 + (Global_97358.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97099++;
					fVar6 = (fVar6 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97100++;
					fVar7 = (fVar7 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97079 > 0)
	{
		if (Global_97096 == Global_97079)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97080 > 0)
	{
		if (Global_97097 == Global_97080)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97081 > 0)
	{
		if (((Global_97098 == Global_97081 || (Global_97081 * 10 / Global_97098) < 41) || Global_97098 > Global_97084) || Global_97098 == Global_97084)
		{
			if (!unk_0x94E72F17611BCD3C(Global_97358.f_8448.f_3856, 14))
			{
				if (Global_97098 == Global_97081)
				{
					unk_0x21F0CE088EF06776(joaat("num_rndevents_completed"), Global_97081, 0);
					unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97082 > 0)
	{
		if (Global_97099 == Global_97082)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97083 > 0)
	{
		if (Global_97100 == Global_97083)
		{
			fVar7 = 5f;
		}
	}
	Global_97358.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97098 > Global_97084 || Global_97098 == Global_97084)
	{
		iVar9 = Global_97084;
	}
	else
	{
		iVar9 = Global_97098;
	}
	unk_0xC46BDC34976E9532(joaat("num_missions_completed"), Global_97094, 1);
	unk_0xC46BDC34976E9532(joaat("num_missions_available"), Global_97077, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_completed"), Global_97095, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_available"), Global_97078, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_completed"), Global_97096, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_available"), Global_97079, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_completed"), Global_97097, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_available"), Global_97080, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_available"), Global_97084, 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_completed"), (Global_97100 + Global_97099), 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_available"), (Global_97083 + Global_97082), 1);
	Global_97101 = (Global_97094 * 100 / Global_97077);
	Global_97103 = ((Global_97096 + Global_97095) * 100 / (Global_97079 + Global_97078));
	Global_97102 = ((Global_97097 + iVar9) * 100 / (Global_97080 + Global_97084));
	Global_97104 = ((Global_97099 + Global_97100) * 100 / (Global_97082 + Global_97083));
	unk_0xBCD0D59720958AE8(joaat("total_progress_made"), Global_97358.f_8448.f_3853, 1);
	unk_0xC46BDC34976E9532(joaat("percent_story_missions"), Global_97101, 1);
	unk_0xC46BDC34976E9532(joaat("percent_ambient_missions"), Global_97102, 1);
	unk_0xC46BDC34976E9532(joaat("percent_oddjobs"), Global_97103, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853))
	{
		func_25(13, unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853));
	}
	if (!unk_0xE30896F28DC0733C())
	{
		if (!Global_68245)
		{
			if (func_43() == 2 == 0 && !unk_0x4B69FB3A5B09A1BA())
			{
				if (unk_0x7F7C75BD0BC3CD70())
				{
					Global_97092 = 0;
				}
				if (!Global_54750)
				{
					func_37();
				}
			}
		}
	}
}

int func_43()
{
	return Global_24444;
}

int func_44(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_45();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		uVar8 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		uVar9 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_45()
{
	return Global_1312737;
}

int func_46(int iParam0, int iParam1)
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

int func_47(int iParam0)
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

void func_48(int iParam0)
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
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_49(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_50(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_50(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6B08EC9A88700FBB(sParam0, ""))
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
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x6B08EC9A88700FBB(&(Global_97358.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97358.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_8 = (unk_0x17103F66FBB44C3C() + iParam3);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = ((unk_0x17103F66FBB44C3C() + iParam3) + iParam4);
		}
		else
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97358.f_23635.f_145++;
		func_51();
	}
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97358.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[0])
			{
				Global_97358.f_23635.f_146[0] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[1])
			{
				Global_97358.f_23635.f_146[1] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[2])
			{
				Global_97358.f_23635.f_146[2] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_52()
{
	func_30();
	switch (Global_97358.f_1729.f_539.f_3213)
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

int func_53(int iParam0)
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
		return unk_0x94E72F17611BCD3C(Global_97358.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_54(int iParam0, int iParam1)
{
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28192.f_8[iParam0]), iParam1);
}

int func_55(int iParam0)
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

int func_56()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xC2E9075570B5D2B9(), 64);
	uVar16 = func_57(Var0);
	return uVar16;
}

int func_57(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x398F092142D37E17(&cParam0))
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

int func_58()
{
	return 1;
}

int func_59()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

void func_60(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (unk_0x746960881FB19A89(*uParam2))
	{
		if (unk_0xFC38B241541883D3(*uParam2, 0))
		{
			if (!unk_0x3E0478C40AB5B38D(*uParam0))
			{
				if (unk_0x44E080690DA76A2A(*uParam0, *uParam2, 0))
				{
					if (unk_0x2E6E8D325977B3EC(*uParam1))
					{
						unk_0x0451B5D93A4BDAA0(uParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0x2E6E8D325977B3EC(*uParam1))
				{
					*uParam1 = func_63(*uParam0, 1, 145);
				}
			}
			if (!unk_0x2E6E8D325977B3EC(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = func_61(unk_0x77009B1C011405A9(*uParam2, 1), 0);
					unk_0x016722B6E0559A9A(*uParam3, 1);
					unk_0x15DE80E4F3BF69A9(*uParam3, 9);
					unk_0x2A8C2BEEA4F7041F(*uParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { unk_0xF4A29E04CA54F443(*uParam3) };
				Var4 = { unk_0x77009B1C011405A9(*uParam2, 1) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * unk_0x0000000050597EE2()));
				unk_0xAB1A4C1CDE66050B(*uParam3, Var1);
				if (iVar0 == 0)
				{
					unk_0x0451B5D93A4BDAA0(uParam3);
				}
			}
		}
		else
		{
			if (unk_0x2E6E8D325977B3EC(*uParam3))
			{
				unk_0x0451B5D93A4BDAA0(uParam3);
			}
			if (!unk_0x3E0478C40AB5B38D(*uParam0))
			{
				if (!unk_0x2E6E8D325977B3EC(*uParam1))
				{
					*uParam1 = func_63(*uParam0, 1, 145);
				}
			}
		}
	}
}

var func_61(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x2290D76D0A4ACACA(Param0);
	unk_0xD4916ED85412C8D9(uVar0, func_62(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
	unk_0xD8EEE815F0120FCE(uVar0, iParam3);
	return uVar0;
}

float func_62(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_63(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_64(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2E6E8D325977B3EC(uVar0)) && unk_0x75426D5397CE9E5D(&(Global_97358.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x2A8C2BEEA4F7041F(uVar0, &(Global_97358.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x746960881FB19A89(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x5304FE8A2CED6AE8(iParam0);
	if (unk_0x2B1914308D0376C8(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_62(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xFEE42298F5E238BE(uVar0, bParam1);
		}
		else
		{
			unk_0x016722B6E0559A9A(uVar0, 2);
		}
	}
	else if (unk_0x4E178F5D4155391A(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_62(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
		unk_0xFEE42298F5E238BE(uVar0, bParam1);
	}
	else if (unk_0xA6C29CC20CD3DCB4(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_62(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_65(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	struct<3> Var0;
	
	if (unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0))
	{
		if (((((((unk_0x746960881FB19A89(iParam1) && iParam0 != iParam1) && !unk_0x567194A60F82D51A(unk_0xB6A50C909A8FABC3(iParam1))) && !unk_0xDB519A4108C6BFB1(unk_0xB6A50C909A8FABC3(iParam1))) && !unk_0xAAF77E03CD60491E(unk_0xB6A50C909A8FABC3(iParam1))) && !unk_0x297BD02A9765671B(unk_0xB6A50C909A8FABC3(iParam1))) && unk_0xF37F1CECABC7FC33(iParam1)) && func_69(iParam0))
		{
			if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0x81D32A4E7E765EA7(*uParam2, *uParam3, Param7) };
				func_68(iParam1, uParam4, uParam5);
			}
			if (!unk_0xC7FF9739199F83C9(iParam0))
			{
				*uParam6 = unk_0x17103F66FBB44C3C();
			}
			else if ((unk_0x17103F66FBB44C3C() - *uParam6) > iParam10)
			{
				if (func_67(iParam0, iParam1, 1) > fParam11 && unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!func_66(*uParam2))
					{
						if (!unk_0xE298336AB6E66F7E(*uParam2, 3f))
						{
							unk_0xA82CB0D67E22220B(*uParam2, 1.5f, 0);
							unk_0x8F9D4AA83F37F6E2(*uParam2, 3f, 0, 0, 0, 0, 0);
							unk_0xFA51DC22F6E34F6E(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x03D97EDECF2E1859(iParam0, *uParam3);
							unk_0x77C765087051EDD6(iParam0);
							unk_0xBF3459C0ACC7B82F(iParam0, 10f);
							unk_0x6FD45FA39DD18625(iParam0, 1, 1);
							*uParam6 = unk_0x17103F66FBB44C3C();
						}
						else
						{
							Var0 = { unk_0x81D32A4E7E765EA7(Local_112, uLocal_111, Param7) };
							if (!func_66(Var0))
							{
								if (!unk_0xE298336AB6E66F7E(Var0, 2f))
								{
									unk_0xA82CB0D67E22220B(Var0, 1.5f, 0);
									unk_0x8F9D4AA83F37F6E2(Var0, 3f, 0, 0, 0, 0, 0);
									unk_0xFA51DC22F6E34F6E(iParam0, Var0, 1, 0, 0, 1);
									unk_0x03D97EDECF2E1859(iParam0, uLocal_111);
									unk_0x77C765087051EDD6(iParam0);
									unk_0xBF3459C0ACC7B82F(iParam0, 10f);
									unk_0x6FD45FA39DD18625(iParam0, 1, 1);
									*uParam6 = unk_0x17103F66FBB44C3C();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x17103F66FBB44C3C();
		}
	}
}

int func_66(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_67(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	if (!unk_0x0BA451447C3B1A8D(iParam1))
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Var3, iParam2);
}

void func_68(int iParam0, var uParam1, var uParam2)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(iParam0))
		{
			*uParam1 = { unk_0x77009B1C011405A9(iParam0, 1) };
			*uParam2 = unk_0xE691E4EA6B4440C6(iParam0);
		}
	}
}

int func_69(int iParam0)
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(iParam0))
		{
			if (!unk_0x4A33023BC86AAA7F(iParam0, -1))
			{
				iVar0 = unk_0xB5BBEB12C77EE430(iParam0, -1);
				if (unk_0x746960881FB19A89(iVar0))
				{
					if (!unk_0x0BA451447C3B1A8D(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_70(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (unk_0x3E0478C40AB5B38D(*uParam0))
		{
			if (unk_0x2E6E8D325977B3EC(*uParam1))
			{
				unk_0x0451B5D93A4BDAA0(uParam1);
			}
			unk_0x995B3705D02B0401(uParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0x827151D7B70CB853(*uParam0, 0))
			{
			}
			else if (unk_0x746960881FB19A89(*uParam2))
			{
				if (unk_0xFC38B241541883D3(*uParam2, 0))
				{
					if (unk_0x44E080690DA76A2A(*uParam0, *uParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x746960881FB19A89(*uParam2))
	{
		if (unk_0xFC38B241541883D3(*uParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0x62DAED390EC70145(*uParam2);
				unk_0x147A431959878235(*uParam2);
				unk_0xC932874B6133A2D2(*uParam2, 0);
				unk_0x9187463EB4918A4D(uParam2);
				if (unk_0x2E6E8D325977B3EC(*uParam3))
				{
					unk_0x0451B5D93A4BDAA0(uParam3);
				}
			}
		}
		else
		{
			unk_0x62DAED390EC70145(*uParam2);
			unk_0x147A431959878235(*uParam2);
			unk_0xC932874B6133A2D2(*uParam2, 0);
			unk_0x9187463EB4918A4D(uParam2);
			if (unk_0x2E6E8D325977B3EC(*uParam3))
			{
				unk_0x0451B5D93A4BDAA0(uParam3);
			}
		}
	}
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (!bLocal_455)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x746960881FB19A89(uLocal_149[iVar1]))
		{
			if (!unk_0x3E0478C40AB5B38D(uLocal_149[iVar1]))
			{
				if (unk_0x5093D6F9140AD109(uLocal_149[iVar1], unk_0x9F92518438215DD0(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x746960881FB19A89(uLocal_154[iVar1]))
		{
			if (!unk_0x3E0478C40AB5B38D(uLocal_154[iVar1]))
			{
				if (unk_0x5093D6F9140AD109(uLocal_154[iVar1], unk_0x9F92518438215DD0(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_72()
{
	int iVar0;
	
	if (bLocal_455)
	{
		if (bLocal_266)
		{
		}
		else if (bLocal_263)
		{
			if (!unk_0x3E0478C40AB5B38D(uLocal_149[0]) && !unk_0x0BA451447C3B1A8D(uLocal_165[0]))
			{
			}
			if (!unk_0x3E0478C40AB5B38D(uLocal_149[1]) && !unk_0x0BA451447C3B1A8D(uLocal_165[1]))
			{
			}
		}
		else
		{
			if (!unk_0x3E0478C40AB5B38D(uLocal_154[0]) && !unk_0x0BA451447C3B1A8D(uLocal_170[0]))
			{
			}
			if (!unk_0x3E0478C40AB5B38D(uLocal_154[1]) && !unk_0x0BA451447C3B1A8D(uLocal_170[1]))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x42F321038CD8C66E(uLocal_220[iVar0]);
			if (unk_0x3E0478C40AB5B38D(uLocal_149[iVar0]))
			{
				if (unk_0x2E6E8D325977B3EC(uLocal_193[iVar0]))
				{
					unk_0x0451B5D93A4BDAA0(&(uLocal_193[iVar0]));
					iLocal_123++;
				}
			}
			else if (!unk_0x827151D7B70CB853(uLocal_149[iVar0], 0))
			{
				if (!unk_0x2E6E8D325977B3EC(uLocal_193[iVar0]))
				{
					uLocal_193[iVar0] = func_63(uLocal_149[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x42F321038CD8C66E(uLocal_220[iVar0]);
			if (unk_0x3E0478C40AB5B38D(uLocal_154[iVar0]))
			{
				if (unk_0x2E6E8D325977B3EC(uLocal_198[iVar0]))
				{
					unk_0x0451B5D93A4BDAA0(&(uLocal_198[iVar0]));
					iLocal_124++;
				}
			}
			else if (!unk_0x827151D7B70CB853(uLocal_154[iVar0], 0))
			{
				if (!unk_0x2E6E8D325977B3EC(uLocal_198[iVar0]))
				{
					uLocal_198[iVar0] = func_63(uLocal_154[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_123 >= 4 && iLocal_124 >= 4)
		{
			func_35();
		}
	}
	func_88();
	func_87();
	switch (iLocal_47)
	{
		case 0:
			if (((unk_0x7E169A85A1D751E5(unk_0xCFC72E446B0B3AD7()) || !unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_233 + Vector(0f, 20f, 0f), 170f, 270f, 50f, 0, 1, 0)) || unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, 0, 1, 0)) || unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, 0, 1, 0))
			{
				if (!bLocal_266)
				{
					if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, 0, 1, 0) || unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, 0, 1, 0))
					{
						bLocal_266 = true;
					}
				}
				if (unk_0xED56472331EEB661(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), &Local_239, 1, 1077936128, 0))
				{
					if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_239, 20f, 20f, 20f, 0, 1, 0))
					{
						unk_0x2250E32CE864C09F(5, 1);
						unk_0x2250E32CE864C09F(3, 1);
						unk_0xC1B1E9A034A63A62(0);
						func_85();
						iLocal_47 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 5000 || bLocal_266)
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_47 = 2;
			}
			break;
		
		case 2:
			if (bLocal_266)
			{
				if (unk_0x83666F9FB8FEBD4B() > 3500)
				{
					if (((!unk_0x0BA451447C3B1A8D(uLocal_175[0]) && !unk_0x0BA451447C3B1A8D(uLocal_175[1])) && !unk_0x3E0478C40AB5B38D(uLocal_149[0])) && !unk_0x3E0478C40AB5B38D(uLocal_149[1]))
					{
						unk_0x4DB6897DB04DE279(uLocal_149[0], uLocal_175[0], -1);
						unk_0x4DB6897DB04DE279(uLocal_149[1], uLocal_175[1], -1);
						unk_0x64277E0EB39C1162(uLocal_149[0], 3, 0);
						unk_0x64277E0EB39C1162(uLocal_149[1], 3, 0);
						unk_0x9C718295C759454B(uLocal_149[0], 0);
						unk_0x9C718295C759454B(uLocal_149[1], 0);
						iLocal_47 = 5;
					}
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 10000)
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					if (!unk_0x50118CDA0B25074C(unk_0x9F92518438215DD0(), joaat("rebel")))
					{
						iLocal_47 = 3;
					}
					else
					{
						iLocal_47 = 4;
					}
				}
				else
				{
					iLocal_47 = 3;
				}
			}
			break;
		
		case 3:
			Local_242 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			uLocal_131 = unk_0x073B65E051D2F03E(10, 15);
			if (!unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, 0, 1, 0))
			{
				if (unk_0xB60134452ED5852A(Local_242, uLocal_131, &(Local_438[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_438[1 /*3*/] = { Local_438[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0xE298336AB6E66F7E(Local_438[0 /*3*/], 7f) && !unk_0xE298336AB6E66F7E(Local_438[1 /*3*/], 7f))
					{
						if (unk_0xFC38B241541883D3(uLocal_165[0], 0))
						{
							unk_0xFA51DC22F6E34F6E(uLocal_165[0], Local_438[0 /*3*/], 1, 0, 0, 1);
							func_84(uLocal_165[0], uLocal_149[0]);
						}
						if (unk_0xFC38B241541883D3(uLocal_165[1], 0))
						{
							unk_0xFA51DC22F6E34F6E(uLocal_165[1], Local_438[1 /*3*/], 1, 0, 0, 1);
							func_84(uLocal_165[1], uLocal_149[1]);
						}
						if (func_29() == 0)
						{
							func_73(&uLocal_270, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_29() == 1)
						{
							func_73(&uLocal_270, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_29() == 2)
						{
							func_73(&uLocal_270, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_263 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_47 = 6;
					}
				}
			}
			break;
		
		case 4:
			Local_242 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			uLocal_131 = unk_0x073B65E051D2F03E(30, 35);
			if (!unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, 0, 1, 0))
			{
				if (unk_0xB60134452ED5852A(Local_242, uLocal_131, &(Local_438[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_438[1 /*3*/] = { Local_438[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0xE298336AB6E66F7E(Local_438[0 /*3*/], 7f) && !unk_0xE298336AB6E66F7E(Local_438[1 /*3*/], 7f))
					{
						if (unk_0xFC38B241541883D3(uLocal_170[0], 0))
						{
							unk_0xFA51DC22F6E34F6E(uLocal_170[0], Local_438[0 /*3*/], 1, 0, 0, 1);
							func_84(uLocal_170[0], uLocal_154[0]);
						}
						if (unk_0xFC38B241541883D3(uLocal_170[1], 0))
						{
							unk_0xFA51DC22F6E34F6E(uLocal_170[1], Local_438[1 /*3*/], 1, 0, 0, 1);
							func_84(uLocal_170[1], uLocal_154[1]);
						}
						if (func_29() == 0)
						{
							func_73(&uLocal_270, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_29() == 1)
						{
							func_73(&uLocal_270, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_29() == 2)
						{
							func_73(&uLocal_270, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_264 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_47 = 6;
					}
				}
			}
			break;
		
		case 5:
			Local_242 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			uLocal_131 = unk_0x073B65E051D2F03E(5, 10);
			if (unk_0xB60134452ED5852A(Local_242, uLocal_131, &(Local_438[0 /*3*/]), 1, 1077936128, 0))
			{
				Local_438[1 /*3*/] = { Local_438[0 /*3*/] + Vector(0f, 5f, 0f) };
				if (!unk_0xE298336AB6E66F7E(Local_438[0 /*3*/], 7f) && !unk_0xE298336AB6E66F7E(Local_438[1 /*3*/], 7f))
				{
					if (unk_0xFC38B241541883D3(uLocal_175[0], 0))
					{
						unk_0xFA51DC22F6E34F6E(uLocal_175[0], Local_438[0 /*3*/], 1, 0, 0, 1);
						func_84(uLocal_175[0], uLocal_149[0]);
					}
					if (unk_0xFC38B241541883D3(uLocal_175[1], 0))
					{
						unk_0xFA51DC22F6E34F6E(uLocal_175[1], Local_438[1 /*3*/], 1, 0, 0, 1);
						func_84(uLocal_175[1], uLocal_149[1]);
					}
					if (func_29() == 0)
					{
						func_73(&uLocal_270, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_29() == 1)
					{
						func_73(&uLocal_270, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_29() == 2)
					{
						func_73(&uLocal_270, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_263 = true;
					unk_0xC1B1E9A034A63A62(0);
					iLocal_47 = 6;
				}
			}
			break;
		
		case 6:
			if (func_59())
			{
				fLocal_119 = unk_0x3250987ED5A577C0(1.5f, 2.5f);
				fLocal_120 = unk_0x3250987ED5A577C0(2f, 4f);
				fLocal_121 = unk_0x3250987ED5A577C0(0.1f, 2f);
				if (iLocal_133 < 5 && iLocal_134 < unk_0x17103F66FBB44C3C())
				{
					Local_89 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
					unk_0xF471B61923F42BB1((Local_89.f_0 + fLocal_119), (Local_89.f_1 + fLocal_120), (Local_89.f_2 + fLocal_121), (Local_89.f_0 - fLocal_119), (Local_89.f_1 - fLocal_120), Local_89.f_2, 10, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
					iLocal_134 = (unk_0x17103F66FBB44C3C() + unk_0x073B65E051D2F03E(200, 500));
					iLocal_133++;
				}
			}
			if (iLocal_133 > 4)
			{
				iLocal_47 = 7;
			}
			break;
	}
}

bool func_73(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_74(sParam2, iParam3, 0);
}

int func_74(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xC318E8D9E0AA1394(0);
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
					func_82();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xDFF00E8709AA7095())
		{
			return 0;
		}
		if (func_81(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_80();
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
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
			unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
			if (bParam2)
			{
				func_79();
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
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (func_78())
				{
					return 0;
				}
				if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0x963737771EA06D79(unk_0x9F92518438215DD0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
					if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
				}
			}
			if (func_77())
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
				if (unk_0x94E72F17611BCD3C(Global_2263, 9))
				{
					return 0;
				}
			}
			func_76();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_75();
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
		func_82();
	}
	return 0;
}

void func_75()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC318E8D9E0AA1394(0);
	Global_15692 = 1;
}

void func_76()
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
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 16);
}

int func_77()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_78()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5CC26ADF98AA54C9() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
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

void func_79()
{
	if (func_31(14))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
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
		Global_14393 = func_29();
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

void func_80()
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

bool func_81(int iParam0, int iParam1)
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
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

void func_82()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if ((unk_0x71F866C9C77F9B9F() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(1);
		Global_15692 = 6;
		return;
	}
}

void func_83(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_84(int iParam0, var uParam1)
{
	unk_0xD9B13F0A69759C12(uParam0, 0);
	unk_0x77C765087051EDD6(uParam0);
	Local_435 = { unk_0x77009B1C011405A9(iParam0, 1) };
	Local_451 = { Local_242 - Local_435 };
	unk_0x03D97EDECF2E1859(iParam0, unk_0x4F034F83AF91EC27(Local_451.f_0, Local_451.f_1));
	if (bLocal_266)
	{
		if (!unk_0x3E0478C40AB5B38D(uParam1))
		{
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				unk_0xB38040CC686E765D(uParam1, unk_0x9F92518438215DD0());
				unk_0x4EDE34FBADD967A6(1);
				if (!unk_0x3E0478C40AB5B38D(uParam1))
				{
					unk_0x1877A59B1CA6AC7B(uParam1, 32, 1);
				}
			}
			else
			{
				unk_0x7FC0EEAECC1615C3(uParam1, iParam0, unk_0x9F92518438215DD0(), 6, 20f, 786469, -1f, -1f, 1);
			}
			if (!unk_0x0BA451447C3B1A8D(iParam0))
			{
				unk_0xBF3459C0ACC7B82F(iParam0, unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()));
			}
		}
	}
	else if (!unk_0x3E0478C40AB5B38D(uParam1))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			unk_0xB38040CC686E765D(uParam1, unk_0x9F92518438215DD0());
		}
		else
		{
			unk_0x7FC0EEAECC1615C3(uParam1, iParam0, unk_0x9F92518438215DD0(), 2, 100f, 786469, -1f, -1f, 1);
		}
		unk_0xBF3459C0ACC7B82F(iParam0, unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()));
	}
}

void func_85()
{
	int iVar0;
	
	uLocal_165[0] = unk_0xB0694AD0A3BB8936(joaat("rebel"), -1595.964f, 4732.479f, 0f, 305f, 1, 1);
	unk_0x336AE92FD68DEF98(uLocal_165[0], 1, 0);
	unk_0x6FD45FA39DD18625(uLocal_165[0], 1, 1);
	unk_0x4F089107CDB61F75(uLocal_165[0], 2);
	unk_0x69C5E202565B9651(uLocal_165[0], 1);
	unk_0xD9B13F0A69759C12(uLocal_165[0], 1);
	unk_0xE5BC3245AAD29D00(uLocal_165[0], "49GNL112");
	uLocal_165[1] = unk_0xB0694AD0A3BB8936(joaat("rebel"), -1570.34f, 4733.755f, 0f, 305f, 1, 1);
	unk_0x336AE92FD68DEF98(uLocal_165[1], 1, 0);
	unk_0x6FD45FA39DD18625(uLocal_165[1], 1, 1);
	unk_0x4F089107CDB61F75(uLocal_165[1], 2);
	unk_0x69C5E202565B9651(uLocal_165[1], 1);
	unk_0xD9B13F0A69759C12(uLocal_165[1], 1);
	unk_0xE5BC3245AAD29D00(uLocal_165[1], "47TMS703");
	uLocal_175[0] = unk_0xB0694AD0A3BB8936(joaat("sanchez"), Vector(0f, 4732.479f, -1595.964f) + Vector(10f, 10f, 10f), 305f, 1, 1);
	unk_0x336AE92FD68DEF98(uLocal_175[0], 1, 0);
	unk_0x6FD45FA39DD18625(uLocal_175[0], 1, 1);
	unk_0x4F089107CDB61F75(uLocal_175[0], 2);
	unk_0x69C5E202565B9651(uLocal_175[0], 1);
	unk_0xD9B13F0A69759C12(uLocal_175[0], 1);
	unk_0xE5BC3245AAD29D00(uLocal_175[0], "49GNL112");
	uLocal_175[1] = unk_0xB0694AD0A3BB8936(joaat("sanchez"), Vector(0f, 4733.755f, -1570.34f) + Vector(10f, 10f, 10f), 305f, 1, 1);
	unk_0x336AE92FD68DEF98(uLocal_175[1], 1, 0);
	unk_0x6FD45FA39DD18625(uLocal_175[1], 1, 1);
	unk_0x4F089107CDB61F75(uLocal_175[1], 2);
	unk_0x69C5E202565B9651(uLocal_175[1], 1);
	unk_0xD9B13F0A69759C12(uLocal_175[1], 1);
	unk_0xE5BC3245AAD29D00(uLocal_175[1], "47TMS703");
	uLocal_149[0] = unk_0xAD7526C9AA33EE39(uLocal_165[0], 26, joaat("g_m_m_chigoon_02"), -1, 1, 1);
	uLocal_149[1] = unk_0xAD7526C9AA33EE39(uLocal_165[1], 26, joaat("g_m_m_chigoon_02"), -1, 1, 1);
	if (!bLocal_266)
	{
		uLocal_149[2] = unk_0xAD7526C9AA33EE39(uLocal_165[0], 26, joaat("g_m_m_chigoon_02"), 0, 1, 1);
		uLocal_149[3] = unk_0xAD7526C9AA33EE39(uLocal_165[1], 26, joaat("g_m_m_chigoon_02"), 0, 1, 1);
	}
	uLocal_170[0] = unk_0xB0694AD0A3BB8936(joaat("bobcatxl"), -1356.281f, 5000f, 0f, 125.2811f, 1, 1);
	unk_0x336AE92FD68DEF98(uLocal_170[0], 1, 0);
	unk_0x6FD45FA39DD18625(uLocal_170[0], 1, 1);
	unk_0x4F089107CDB61F75(uLocal_170[0], 2);
	unk_0x69C5E202565B9651(uLocal_170[0], 1);
	unk_0xD9B13F0A69759C12(uLocal_170[0], 1);
	unk_0xE5BC3245AAD29D00(uLocal_170[0], "49GNL112");
	uLocal_170[1] = unk_0xB0694AD0A3BB8936(joaat("bobcatxl"), -1373.589f, 5000f, 0f, 125.459f, 1, 1);
	unk_0x336AE92FD68DEF98(uLocal_170[1], 1, 0);
	unk_0x6FD45FA39DD18625(uLocal_170[1], 1, 1);
	unk_0x4F089107CDB61F75(uLocal_170[1], 2);
	unk_0x69C5E202565B9651(uLocal_170[1], 1);
	unk_0xD9B13F0A69759C12(uLocal_170[1], 1);
	unk_0xE5BC3245AAD29D00(uLocal_170[1], "47TMS703");
	uLocal_154[0] = unk_0xAD7526C9AA33EE39(uLocal_170[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
	uLocal_154[1] = unk_0xAD7526C9AA33EE39(uLocal_170[1], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
	uLocal_154[2] = unk_0xAD7526C9AA33EE39(uLocal_170[0], 26, joaat("g_m_y_salvagoon_03"), 0, 1, 1);
	uLocal_154[3] = unk_0xAD7526C9AA33EE39(uLocal_170[1], 26, joaat("g_m_y_salvagoon_03"), 0, 1, 1);
	unk_0x4B38C66919CC2E48("RE_deal1", &iLocal_267);
	unk_0x4B38C66919CC2E48("RE_deal2", &iLocal_268);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x3E0478C40AB5B38D(uLocal_149[iVar0]))
		{
			unk_0xA50AD6983D49A772(uLocal_149[iVar0], iLocal_267);
			unk_0x336AE92FD68DEF98(uLocal_149[iVar0], 1, 0);
			if (bLocal_266)
			{
				unk_0x46D3B8FF073CD238(uLocal_149[0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
				if (!unk_0x3E0478C40AB5B38D(uLocal_149[1]))
				{
					unk_0x46D3B8FF073CD238(uLocal_149[1], joaat("weapon_pistol"), -1, 1, 1);
				}
				unk_0x488909512824324E(uLocal_149[iVar0], 15);
				unk_0x64277E0EB39C1162(uLocal_149[iVar0], 3, 0);
			}
			else
			{
				unk_0x46D3B8FF073CD238(uLocal_149[iVar0], joaat("weapon_pistol"), -1, 1, 1);
				unk_0x488909512824324E(uLocal_149[iVar0], 13);
			}
			unk_0x64277E0EB39C1162(uLocal_149[iVar0], 13, 1);
			unk_0x64277E0EB39C1162(uLocal_149[iVar0], 2, 1);
			unk_0x64277E0EB39C1162(uLocal_149[iVar0], 1, 1);
			func_86(&uLocal_270, 4, uLocal_149[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x3E0478C40AB5B38D(uLocal_149[iVar0]))
		{
			unk_0xA50AD6983D49A772(uLocal_154[iVar0], iLocal_268);
			unk_0x336AE92FD68DEF98(uLocal_154[iVar0], 1, 0);
			if (bLocal_266)
			{
				unk_0x46D3B8FF073CD238(uLocal_149[0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
				if (!unk_0x3E0478C40AB5B38D(uLocal_149[1]))
				{
					unk_0x46D3B8FF073CD238(uLocal_149[1], joaat("weapon_pistol"), -1, 1, 1);
				}
				unk_0x488909512824324E(uLocal_149[iVar0], 15);
				unk_0x64277E0EB39C1162(uLocal_149[iVar0], 3, 0);
				func_86(&uLocal_270, 4, uLocal_149[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				unk_0x46D3B8FF073CD238(uLocal_154[iVar0], joaat("weapon_pistol"), -1, 1, 1);
				unk_0x488909512824324E(uLocal_154[iVar0], 13);
				func_86(&uLocal_270, 5, uLocal_154[iVar0], "REDGWSalvadoran", 0, 1);
			}
			unk_0x64277E0EB39C1162(uLocal_154[iVar0], 13, 1);
			unk_0x64277E0EB39C1162(uLocal_154[iVar0], 2, 1);
			unk_0x64277E0EB39C1162(uLocal_154[iVar0], 1, 1);
		}
		iVar0++;
	}
	unk_0xF2061C15946C53A2(3, iLocal_267, iLocal_268);
	unk_0xF2061C15946C53A2(3, iLocal_268, iLocal_267);
	unk_0xF2061C15946C53A2(3, iLocal_267, joaat("player"));
	unk_0xF2061C15946C53A2(3, iLocal_268, joaat("player"));
	unk_0x0880E86251A44B7F(joaat("g_m_m_chigoon_02"));
	unk_0x0880E86251A44B7F(joaat("g_m_y_salvagoon_03"));
	unk_0x0880E86251A44B7F(joaat("rebel"));
	unk_0x0880E86251A44B7F(joaat("bobcatxl"));
	unk_0x0880E86251A44B7F(joaat("sanchez"));
	unk_0x0880E86251A44B7F(joaat("a_c_rottweiler"));
	bLocal_455 = true;
	iLocal_45 = 1;
}

void func_86(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x3E0478C40AB5B38D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(uParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(uParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(uParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(uParam2, 1);
			}
		}
	}
}

void func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iLocal_129)
	{
		case 0:
			if (bLocal_263)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (!unk_0x3E0478C40AB5B38D(uLocal_149[iVar0]))
					{
						if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), uLocal_149[iVar0], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_129 = 3;
						}
					}
					iVar0++;
				}
			}
			if (bLocal_264)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!unk_0x3E0478C40AB5B38D(uLocal_154[iVar1]))
					{
						if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), uLocal_154[iVar1], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_129 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			unk_0xF2061C15946C53A2(5, iLocal_267, iLocal_268);
			unk_0xF2061C15946C53A2(5, iLocal_268, iLocal_267);
			unk_0xF2061C15946C53A2(5, iLocal_267, joaat("player"));
			unk_0xF2061C15946C53A2(5, iLocal_268, joaat("player"));
			if (bLocal_263)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0x3E0478C40AB5B38D(uLocal_149[iVar2]))
					{
						if ((!unk_0x5D1AEC61B1517F38(uLocal_149[iVar2], 0) && unk_0xE962BD784DD0E442(uLocal_149[iVar2], 579380604) != 1) && unk_0xE962BD784DD0E442(uLocal_149[iVar2], 579380604) != 0)
						{
							unk_0x32D18ECD9E6F9BE2(uLocal_149[iVar2]);
							unk_0xF78316EFCA911012(uLocal_149[iVar2], unk_0x9F92518438215DD0(), 0, 16);
							unk_0xE8105B7E3908547D(uLocal_149[iVar2], 1);
						}
					}
					iVar2++;
				}
				if (func_73(&uLocal_270, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_126 = unk_0x17103F66FBB44C3C();
					iLocal_129 = 4;
				}
			}
			if (bLocal_264)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!unk_0x3E0478C40AB5B38D(uLocal_154[iVar3]))
					{
						if ((!unk_0x5D1AEC61B1517F38(uLocal_154[iVar3], 0) && unk_0xE962BD784DD0E442(uLocal_154[iVar3], 579380604) != 1) && unk_0xE962BD784DD0E442(uLocal_154[iVar3], 579380604) != 0)
						{
							unk_0x32D18ECD9E6F9BE2(uLocal_154[iVar3]);
							unk_0xF78316EFCA911012(uLocal_154[iVar3], unk_0x9F92518438215DD0(), 0, 16);
							unk_0xE8105B7E3908547D(uLocal_154[iVar3], 1);
						}
					}
					iVar3++;
				}
				if (func_73(&uLocal_270, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_126 = unk_0x17103F66FBB44C3C();
					iLocal_129 = 4;
				}
			}
			break;
	}
}

void func_88()
{
	switch (iLocal_127)
	{
		case 0:
			if (!unk_0x3E0478C40AB5B38D(uLocal_135))
			{
				if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_236, 7f, 7f, 10f, 0, 1, 0))
				{
					func_90();
					unk_0x4EDE34FBADD967A6(0);
					func_73(&uLocal_270, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					unk_0x402A96371F34E6D8(uLocal_135, unk_0x9F92518438215DD0(), -1, 2048, 2);
					if (!unk_0x2E6E8D325977B3EC(uLocal_181))
					{
						uLocal_181 = func_89(uLocal_213);
					}
					iLocal_126 = unk_0x17103F66FBB44C3C();
					iLocal_127++;
				}
			}
			else
			{
				iLocal_127++;
			}
			break;
	}
	switch (iLocal_128)
	{
		case 1:
			if (!unk_0x3E0478C40AB5B38D(uLocal_135))
			{
				if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), uLocal_135, 10f, 10f, 6f, 0, 1, 0))
				{
					if (!func_59())
					{
						func_73(&uLocal_270, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!unk_0x3E0478C40AB5B38D(uLocal_135))
						{
							unk_0x402A96371F34E6D8(uLocal_135, unk_0x9F92518438215DD0(), -1, 2048, 2);
							unk_0x5AE11BC36633DE4E(0);
							iLocal_128++;
						}
					}
				}
			}
			else
			{
				unk_0x5AE11BC36633DE4E(0);
				iLocal_128++;
			}
			break;
		
		case 2:
			if (!func_59() || unk_0xC9D9444186B5A374() > 4000)
			{
				if (!unk_0x3E0478C40AB5B38D(uLocal_135))
				{
					unk_0x5C66176FC9E6724C(uLocal_135, 0);
					unk_0x0451B5D93A4BDAA0(&uLocal_182);
				}
				if (unk_0xC9D9444186B5A374() > 7000)
				{
					if (!unk_0x3E0478C40AB5B38D(uLocal_136[6]))
					{
						unk_0x5C66176FC9E6724C(uLocal_136[6], 0);
						unk_0x0451B5D93A4BDAA0(&(uLocal_183[6]));
					}
				}
				if (unk_0xC9D9444186B5A374() > 9000)
				{
					if (!unk_0x3E0478C40AB5B38D(uLocal_136[7]))
					{
						unk_0x5C66176FC9E6724C(uLocal_136[7], 0);
						unk_0x0451B5D93A4BDAA0(&(uLocal_183[7]));
					}
					iLocal_128++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x3E0478C40AB5B38D(uLocal_136[6]))
			{
				unk_0x5C66176FC9E6724C(uLocal_136[6], 0);
			}
			if (!unk_0x3E0478C40AB5B38D(uLocal_136[7]))
			{
				unk_0x5C66176FC9E6724C(uLocal_136[7], 0);
			}
			if (!unk_0x3E0478C40AB5B38D(uLocal_135))
			{
				unk_0x5C66176FC9E6724C(uLocal_135, 0);
			}
			break;
	}
}

int func_89(var uParam0)
{
	var uVar0;
	
	if (!unk_0x303D473D180EAA17(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x56F3A0BEE1BE9871(uParam0);
	unk_0xD4916ED85412C8D9(uVar0, func_62(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
	return uVar0;
}

void func_90()
{
	Global_14558 = 0;
	func_91();
}

void func_91()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
	}
}

void func_92()
{
	int iVar0;
	
	if (unk_0xB16891D2706A2EF7(uLocal_213))
	{
		if (unk_0x2E6E8D325977B3EC(uLocal_180))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_180);
		}
		if (unk_0x2E6E8D325977B3EC(uLocal_181))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_181);
		}
		iLocal_128 = 1;
		iLocal_46 = 2;
		iLocal_45 = 0;
	}
	else
	{
		unk_0xB1E35D138037D248(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x746960881FB19A89(uLocal_136[iVar0]))
			{
				if (!unk_0x3E0478C40AB5B38D(uLocal_136[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (unk_0x2E6E8D325977B3EC(uLocal_183[iVar0]))
				{
					unk_0x0451B5D93A4BDAA0(&(uLocal_183[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_146)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_146[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_120())
		{
			if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_51[7 /*3*/], 110f, 95f, 40f, 0, 1, 0))
			{
				if (unk_0x2E6E8D325977B3EC(uLocal_180))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_180);
				}
				if ((!unk_0x2E6E8D325977B3EC(uLocal_182) && !unk_0x2E6E8D325977B3EC(uLocal_183[6])) && !unk_0x2E6E8D325977B3EC(uLocal_183[7]))
				{
					uLocal_182 = func_63(uLocal_135, 1, 145);
					uLocal_183[6] = func_63(uLocal_136[6], 1, 145);
					uLocal_183[7] = func_63(uLocal_136[7], 1, 145);
				}
				unk_0x49101D6A0E39441B(uLocal_182, 0);
				unk_0x49101D6A0E39441B(uLocal_183[6], 0);
				unk_0x49101D6A0E39441B(uLocal_183[7], 0);
				func_93(1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(uLocal_136[6]))
		{
			if (((((unk_0xE962BD784DD0E442(uLocal_136[6], 1785177548) != 1 && unk_0xE962BD784DD0E442(uLocal_136[6], 1785177548) != 0) || unk_0x0FC809E10EF0EAC3(uLocal_136[6])) || unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), uLocal_136[6])) || unk_0x53E0A6267F3FFBEF(uLocal_136[6])) || unk_0xABE5C64FCBE738EC(uLocal_136[6]))
			{
				unk_0x5C66176FC9E6724C(uLocal_136[6], 0);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(uLocal_136[7]))
		{
			if (((((unk_0xE962BD784DD0E442(uLocal_136[7], 1785177548) != 1 && unk_0xE962BD784DD0E442(uLocal_136[7], 1785177548) != 0) || unk_0x0FC809E10EF0EAC3(uLocal_136[7])) || unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), uLocal_136[7])) || unk_0x53E0A6267F3FFBEF(uLocal_136[7])) || unk_0xABE5C64FCBE738EC(uLocal_136[7]))
			{
				unk_0x5C66176FC9E6724C(uLocal_136[7], 0);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(uLocal_135))
		{
			if (((((unk_0xE962BD784DD0E442(uLocal_135, 1785177548) != 1 && unk_0xE962BD784DD0E442(uLocal_135, 1785177548) != 0) || unk_0x0FC809E10EF0EAC3(uLocal_135)) || unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), uLocal_135)) || unk_0x53E0A6267F3FFBEF(uLocal_135)) || unk_0xABE5C64FCBE738EC(uLocal_135))
			{
				unk_0x5C66176FC9E6724C(uLocal_135, 0);
			}
		}
		if (!bLocal_262)
		{
		}
	}
	func_88();
	switch (iLocal_130)
	{
		case 0:
			if (!unk_0x3E0478C40AB5B38D(uLocal_136[6]))
			{
				if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), unk_0x77009B1C011405A9(uLocal_136[6], 1) + Vector(0f, 2.5f, 0f), 9f, 5f, 5f, 0, 1, 0) && unk_0xCEC6A26F61687EAE(unk_0x9F92518438215DD0(), uLocal_136[6]))
				{
					unk_0x402A96371F34E6D8(uLocal_136[6], unk_0x9F92518438215DD0(), -1, 2048, 2);
					unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), uLocal_136[6], 4000, 2048, 2);
					func_73(&uLocal_270, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_126 = unk_0x17103F66FBB44C3C();
					iLocal_130 = 1;
				}
			}
			if (!unk_0x3E0478C40AB5B38D(uLocal_136[7]))
			{
				if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), unk_0x77009B1C011405A9(uLocal_136[7], 1) + Vector(0f, 3f, 0f), 9f, 7f, 5f, 0, 1, 0) && unk_0xCEC6A26F61687EAE(unk_0x9F92518438215DD0(), uLocal_136[7]))
				{
					unk_0x402A96371F34E6D8(uLocal_136[7], unk_0x9F92518438215DD0(), -1, 2048, 2);
					unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), uLocal_136[7], 4000, 2048, 2);
					func_73(&uLocal_270, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_126 = unk_0x17103F66FBB44C3C();
					iLocal_130 = 1;
				}
			}
			if (unk_0x3E0478C40AB5B38D(uLocal_136[6]) && unk_0x3E0478C40AB5B38D(uLocal_136[7]))
			{
				iLocal_130 = 2;
			}
			break;
		
		case 1:
			if (unk_0x2E6E8D325977B3EC(uLocal_182))
			{
				unk_0x49101D6A0E39441B(uLocal_182, 1);
			}
			if (unk_0x2E6E8D325977B3EC(uLocal_183[6]))
			{
				unk_0x49101D6A0E39441B(uLocal_183[6], 1);
			}
			if (unk_0x2E6E8D325977B3EC(uLocal_183[7]))
			{
				unk_0x49101D6A0E39441B(uLocal_183[7], 1);
			}
			iLocal_125 = unk_0x17103F66FBB44C3C();
			if ((iLocal_125 - iLocal_126) > 6000 && !func_59())
			{
				if (!unk_0x3E0478C40AB5B38D(uLocal_136[6]))
				{
				}
				if (!unk_0x3E0478C40AB5B38D(uLocal_136[7]))
				{
				}
				if (!unk_0x2E6E8D325977B3EC(uLocal_181))
				{
					uLocal_181 = func_89(uLocal_213);
				}
				unk_0xB1E35D138037D248(0f);
				if (!func_120())
				{
					func_93(1);
				}
				iLocal_130 = 2;
			}
			break;
	}
}

int func_93(int iParam0)
{
	if (func_97())
	{
		Global_97348 = 1;
		Global_97345 = unk_0x17103F66FBB44C3C();
		if (func_47(Global_97347))
		{
			func_94(0);
		}
		unk_0x50809CE263545545(1, "RE_TITLE");
		if (iParam0 && func_47(Global_97347))
		{
			unk_0x951B29B8E6D6CC38();
		}
		return 1;
	}
	return 0;
}

void func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97358.f_28192.f_2 < 3)
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_95(func_96(iParam0), -1);
					Global_97358.f_28192.f_2++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x94E72F17611BCD3C(Global_97354, 1))
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_95(func_96(iParam0), -1);
					Global_97358.f_28192.f_3++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x94E72F17611BCD3C(Global_97354, 2))
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_95(func_96(iParam0), -1);
					Global_97358.f_28192.f_4++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 2);
				}
			}
			break;
	}
}

void func_95(var uParam0, int iParam1)
{
	unk_0x21D4405986536E14(uParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

char* func_96(int iParam0)
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

int func_97()
{
	switch (func_98(&Global_24503, 0, 5, 0, unk_0x81ACA1EEF1E4410D()))
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

int func_98(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_102(0))
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		unk_0xC243E2F8392527C0(unk_0x2563F6EECD8726D3(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x160853D5D71EE3FE(8);
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
		if (!func_100(iParam2))
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
			func_99(uParam0, iParam4);
		}
	}
	return 2;
}

void func_99(var uParam0, int iParam1)
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

bool func_100(int iParam0)
{
	return func_101(iParam0, Global_34913);
}

int func_101(int iParam0, int iParam1)
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

int func_102(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_100(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_103()
{
	int iVar0;
	
	if (!unk_0x0BA451447C3B1A8D(uLocal_159[0]))
	{
		if (unk_0xB5BBEB12C77EE430(uLocal_159[0], -1) == uLocal_136[8])
		{
			unk_0x94E226D89A871E23(uLocal_159[0], 60000f);
			unk_0x05BA1376AA63460F(uLocal_159[0]);
		}
	}
	if (!unk_0x3E0478C40AB5B38D(uLocal_135))
	{
		if (unk_0xBD280C076BC69C97(uLocal_135))
		{
			unk_0x5C66176FC9E6724C(uLocal_135, 0);
		}
	}
	else if (unk_0x2E6E8D325977B3EC(uLocal_182))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_182);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xE298336AB6E66F7E(Local_233, 30f) && unk_0x2A488C176D52CCA5(func_2(unk_0xCFC72E446B0B3AD7()), Local_233) > 300f)
		{
			if (unk_0x746960881FB19A89(uLocal_136[iVar0]))
			{
				unk_0x995B3705D02B0401(&(uLocal_136[iVar0]));
			}
		}
		if (unk_0x3E0478C40AB5B38D(uLocal_136[iVar0]))
		{
			if (unk_0x2E6E8D325977B3EC(uLocal_183[iVar0]))
			{
				unk_0x0451B5D93A4BDAA0(&(uLocal_183[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_104()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	unk_0x3BC6D217451D6BB7(joaat("g_m_m_chigoon_02"));
	unk_0x3BC6D217451D6BB7(joaat("g_m_y_salvagoon_03"));
	unk_0x3BC6D217451D6BB7(joaat("rebel"));
	unk_0x3BC6D217451D6BB7(joaat("bobcatxl"));
	unk_0x3BC6D217451D6BB7(joaat("sanchez"));
	unk_0x3BC6D217451D6BB7(joaat("a_c_rottweiler"));
	unk_0x3BC6D217451D6BB7(joaat("prop_security_case_01"));
	unk_0xDA293E5084610B09("random@dealgonewrong");
	unk_0xDA293E5084610B09("random@dealgonewrongdead_peds");
	if ((((((((unk_0x149162179DBAEDB0(joaat("g_m_m_chigoon_02")) && unk_0x149162179DBAEDB0(joaat("g_m_y_salvagoon_03"))) && unk_0x149162179DBAEDB0(joaat("rebel"))) && unk_0x149162179DBAEDB0(joaat("bobcatxl"))) && unk_0x149162179DBAEDB0(joaat("sanchez"))) && unk_0x149162179DBAEDB0(joaat("a_c_rottweiler"))) && unk_0x149162179DBAEDB0(joaat("prop_security_case_01"))) && unk_0x3DA2EED4204CE591("random@dealgonewrong")) && unk_0x3DA2EED4204CE591("random@dealgonewrongdead_peds"))
	{
		unk_0x676E460800A9E1B7(Local_233 - Vector(150f, 150f, 150f), Local_233 + Vector(150f, 150f, 150f), 0, 1, 1, 1);
		unk_0x60DAE84D0B296FD2(joaat("bobcatxl"), 1);
		unk_0x60DAE84D0B296FD2(joaat("rebel"), 1);
		unk_0x2250E32CE864C09F(5, 0);
		unk_0x2250E32CE864C09F(3, 0);
		uLocal_159[0] = unk_0xB0694AD0A3BB8936(joaat("bobcatxl"), -1626.94f, 4729.889f, 51.3463f, 347.1188f, 1, 1);
		unk_0x336AE92FD68DEF98(uLocal_159[0], 1, 0);
		unk_0x77C765087051EDD6(uLocal_159[0]);
		unk_0x6FD45FA39DD18625(uLocal_159[0], 1, 1);
		unk_0x4F089107CDB61F75(uLocal_159[0], 2);
		unk_0x8063FF52148C1749(uLocal_159[0], 500f);
		unk_0x76DD68AB949475D7(uLocal_159[0], 500f);
		unk_0x2125574BF8773B98(uLocal_159[0], 1, 1);
		unk_0x59E61BAD0D3047D6(uLocal_159[0], 0, 0, 1148846080);
		unk_0xD1F7F7685105B01C(uLocal_159[0], 6);
		unk_0xF137CB02A3F10019(uLocal_159[0], "RADIO_06_COUNTRY");
		unk_0xE5BC3245AAD29D00(uLocal_159[0], "76JON418");
		unk_0xC7C9C824705A3C60(uLocal_159[0], 1);
		uLocal_159[1] = unk_0xB0694AD0A3BB8936(joaat("rebel"), -1619.432f, 4747.792f, 52.7502f, 146.6017f, 1, 1);
		unk_0x336AE92FD68DEF98(uLocal_159[1], 1, 0);
		unk_0x77C765087051EDD6(uLocal_159[1]);
		unk_0x6FD45FA39DD18625(uLocal_159[1], 1, 1);
		unk_0x4F089107CDB61F75(uLocal_159[1], 2);
		unk_0x8063FF52148C1749(uLocal_159[1], 600f);
		unk_0x76DD68AB949475D7(uLocal_159[1], 400f);
		unk_0x2125574BF8773B98(uLocal_159[1], 1, 1);
		unk_0x2125574BF8773B98(uLocal_159[1], 2, 1);
		unk_0x2125574BF8773B98(uLocal_159[1], 3, 0);
		unk_0x2125574BF8773B98(uLocal_159[1], 4, 0);
		unk_0xD1F7F7685105B01C(uLocal_159[1], 6);
		unk_0xF137CB02A3F10019(uLocal_159[1], "RADIO_06_COUNTRY");
		unk_0xE5BC3245AAD29D00(uLocal_159[1], "79ERK121");
		unk_0xC7C9C824705A3C60(uLocal_159[1], 1);
		unk_0x5232D5FF1F933BDE(uLocal_159[1], 1);
		uLocal_159[2] = unk_0xB0694AD0A3BB8936(joaat("bobcatxl"), -1636.216f, 4748.061f, 51.5484f, 199.3236f, 1, 1);
		unk_0xE5BC3245AAD29D00(uLocal_159[2], "83JOH802");
		unk_0x336AE92FD68DEF98(uLocal_159[2], 1, 0);
		unk_0x77C765087051EDD6(uLocal_159[2]);
		unk_0x6FD45FA39DD18625(uLocal_159[2], 1, 1);
		unk_0x4F089107CDB61F75(uLocal_159[2], 2);
		unk_0x8063FF52148C1749(uLocal_159[2], 60f);
		unk_0x76DD68AB949475D7(uLocal_159[2], 1000f);
		unk_0x2125574BF8773B98(uLocal_159[2], 1, 0);
		unk_0x59E61BAD0D3047D6(uLocal_159[2], 1, 0, 1148846080);
		uLocal_159[3] = unk_0xB0694AD0A3BB8936(joaat("rebel"), -1641.578f, 4736.783f, 52.5984f, 278.1865f, 1, 1);
		unk_0xE5BC3245AAD29D00(uLocal_159[3], "85TOR114");
		unk_0x336AE92FD68DEF98(uLocal_159[3], 1, 0);
		unk_0x77C765087051EDD6(uLocal_159[3]);
		unk_0x6FD45FA39DD18625(uLocal_159[3], 1, 1);
		unk_0x4F089107CDB61F75(uLocal_159[3], 2);
		unk_0x8063FF52148C1749(uLocal_159[3], 500f);
		unk_0x76DD68AB949475D7(uLocal_159[3], 500f);
		unk_0x2125574BF8773B98(uLocal_159[3], 1, 0);
		unk_0x2125574BF8773B98(uLocal_159[3], 2, 0);
		unk_0x2125574BF8773B98(uLocal_159[3], 3, 0);
		unk_0x2125574BF8773B98(uLocal_159[3], 4, 0);
		unk_0x59E61BAD0D3047D6(uLocal_159[3], 0, 0, 1148846080);
		unk_0x59E61BAD0D3047D6(uLocal_159[3], 5, 0, 1148846080);
		if (!unk_0x303D473D180EAA17(uLocal_213))
		{
			iVar0 = 0;
			unk_0xEDB9A377CD8B7F03(&iVar0, 1);
			unk_0xEDB9A377CD8B7F03(&iVar0, 3);
			unk_0xEDB9A377CD8B7F03(&iVar0, 4);
			uLocal_213 = unk_0xC4163BC5B413E6F6(joaat("pickup_money_case"), Local_236, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
			unk_0x0880E86251A44B7F(joaat("prop_security_case_01"));
		}
		Local_245[0 /*3*/] = { -1640.411f, 4740.702f, 52.6218f };
		Local_245[1 /*3*/] = { -1624.664f, 4746.569f, 51.541f };
		Local_245[2 /*3*/] = { -1626.339f, 4734.232f, 51.6176f };
		Local_245[3 /*3*/] = { -1634.297f, 4741.213f, 51.9737f };
		Local_245[4 /*3*/] = { -1644.717f, 4736.446f, 52.3014f };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!unk_0x303D473D180EAA17(uLocal_214[iVar1]))
			{
				iVar2 = 0;
				unk_0xEDB9A377CD8B7F03(&iVar2, 3);
				unk_0xEDB9A377CD8B7F03(&iVar2, 4);
				if (iVar1 < 2)
				{
					uLocal_214[iVar1] = unk_0xF8670CA33A75995A(joaat("pickup_weapon_sawnoffshotgun"), Local_245[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
				else if (iVar1 == 4)
				{
					uLocal_214[iVar1] = unk_0xC4163BC5B413E6F6(joaat("pickup_weapon_assaultrifle"), Local_245[iVar1 /*3*/], 90f, 50f, 0f, 0, 50, 2, 1, 0);
				}
				else
				{
					uLocal_214[iVar1] = unk_0xF8670CA33A75995A(joaat("pickup_weapon_pistol"), Local_245[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
			}
			iVar1++;
		}
		Local_51[0 /*3*/] = { -1636.535f, 4708.455f, 46.09f };
		fLocal_79[0] = 177.0024f;
		Local_51[1 /*3*/] = { -1621.19f, 4744.868f, 52.4254f };
		fLocal_79[1] = 146.9645f;
		Local_51[2 /*3*/] = { -1622.795f, 4735.975f, 51.474f };
		fLocal_79[2] = 48.6546f;
		Local_51[3 /*3*/] = { -1632.695f, 4742.906f, 51.8604f };
		fLocal_79[3] = 155.0678f;
		Local_51[4 /*3*/] = { -1629.544f, 4738.6f, 52.1784f };
		fLocal_79[4] = 278.3085f;
		Local_51[5 /*3*/] = { -1634.764f, 4745.188f, 51.3926f };
		fLocal_79[5] = 270.3501f;
		Local_51[7 /*3*/] = { -1628.321f, 4731.502f, 51.7644f };
		fLocal_79[7] = 352.9167f;
		Local_51[6 /*3*/] = { -1640.311f, 4738.4f, 52.2f };
		fLocal_79[6] = 34.1111f;
		Local_116 = { -1641.735f, 4692.13f, 39.394f };
		fLocal_122 = 326.7277f;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (iVar1 <= 3)
			{
				uLocal_136[iVar1] = unk_0xA00B5D954AD320BF(22, joaat("g_m_y_salvagoon_03"), Local_51[iVar1 /*3*/], fLocal_79[iVar1], 1, 1);
				unk_0x9001FCB58244C11D(uLocal_136[iVar1], 227, 1);
			}
			else
			{
				uLocal_136[iVar1] = unk_0xA00B5D954AD320BF(22, joaat("g_m_m_chigoon_02"), Local_51[iVar1 /*3*/], fLocal_79[iVar1], 1, 1);
			}
			iVar1++;
		}
		iLocal_146[0] = unk_0xA00B5D954AD320BF(26, joaat("a_c_rottweiler"), -1635.005f, 4737.181f, 53.4995f, 33.4155f, 1, 1);
		iLocal_146[1] = unk_0xA00B5D954AD320BF(26, joaat("a_c_rottweiler"), -1625.215f, 4741.119f, 52.5762f, 316.2733f, 1, 1);
		iVar1 = 0;
		while (iVar1 < iLocal_146)
		{
			unk_0x29C0F4A5219281BA(iLocal_146[iVar1], 1);
			unk_0x4220BD8C5CDBF540(iLocal_146[iVar1], 1, 0);
			unk_0x9001FCB58244C11D(iLocal_146[iVar1], 227, 1);
			Local_89 = { unk_0x77009B1C011405A9(iLocal_146[iVar1], 1) };
			Local_92 = { Local_89.f_0, (Local_89.f_1 - 2f), (Local_89.f_2 - 0.5f) };
			Local_95 = { Local_89.f_0, (Local_89.f_1 + 50f), (Local_89.f_2 - 0.5f) };
			unk_0xF471B61923F42BB1(Local_92, Local_95, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iVar1++;
		}
		unk_0x0B7D6B6B8084020E(uLocal_136[0], "random@dealgonewrongdead_peds", "ped_b", -1635.928f, 4707.941f, 46.383f, -29.25f, 12.25f, 171.75f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x0B7D6B6B8084020E(uLocal_136[1], "random@dealgonewrongdead_peds", "ped_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x0B7D6B6B8084020E(uLocal_136[2], "random@dealgonewrongdead_peds", "ped_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x0B7D6B6B8084020E(uLocal_136[3], "random@dealgonewrongdead_peds", "ped_c", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x0B7D6B6B8084020E(uLocal_136[4], "random@dealgonewrongdead_peds", "ped_d", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x0B7D6B6B8084020E(uLocal_136[5], "random@dealgonewrongdead_peds", "ped_e", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x0B7D6B6B8084020E(iLocal_146[0], "random@dealgonewrongdead_peds", "dog_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x0B7D6B6B8084020E(iLocal_146[1], "random@dealgonewrongdead_peds", "dog_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x290256CE566DD632(50f);
		func_106();
		unk_0x290256CE566DD632(1f);
		if (unk_0xFC38B241541883D3(uLocal_159[0], 0))
		{
			uLocal_136[8] = unk_0xAD7526C9AA33EE39(uLocal_159[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
			unk_0x336AE92FD68DEF98(uLocal_136[8], 1, 0);
			unk_0x64185E0B5583477F(uLocal_136[8], 1);
			unk_0x5C66176FC9E6724C(uLocal_136[8], 0);
		}
		if (!unk_0x2E6E8D325977B3EC(uLocal_180))
		{
		}
		unk_0x4B38C66919CC2E48("re_DealGoneWrong", &uLocal_269);
		uLocal_136[6] = unk_0xA00B5D954AD320BF(22, joaat("g_m_m_chigoon_02"), Local_51[6 /*3*/], fLocal_79[6], 1, 1);
		func_86(&uLocal_270, 4, uLocal_136[6], "REDGWChinese", 0, 1);
		unk_0x4A1AC49BA4A747F7(uLocal_136[6], 1);
		unk_0x69C5E202565B9651(uLocal_136[6], 1);
		unk_0xA50AD6983D49A772(uLocal_136[6], uLocal_269);
		uVar3 = unk_0x8E83718430E22797(Local_51[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, 0);
		unk_0x6C4954C76B25F972(uLocal_136[6], uVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x25821CAAB3B8EF73(uVar3, 1);
		unk_0xE8105B7E3908547D(uLocal_136[6], 1);
		unk_0x9001FCB58244C11D(uLocal_136[6], 227, 1);
		uLocal_136[7] = unk_0xA00B5D954AD320BF(22, joaat("g_m_y_salvagoon_03"), -1640.311f, 4738.4f, 50.2f, fLocal_79[7], 1, 1);
		func_86(&uLocal_270, 5, uLocal_136[7], "REDGWSalvadoran", 0, 1);
		unk_0x4A1AC49BA4A747F7(uLocal_136[7], 1);
		unk_0x69C5E202565B9651(uLocal_136[7], 1);
		unk_0xA50AD6983D49A772(uLocal_136[7], iLocal_269);
		uVar4 = unk_0x8E83718430E22797(Local_51[7 /*3*/] + Vector(0.92f, 0.65f, -0.65f), 0f, 0f, 34.1111f, 0);
		unk_0x6C4954C76B25F972(uLocal_136[7], uVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x25821CAAB3B8EF73(uVar4, 1);
		unk_0x47E1E12B5E2888D4(uVar4, 0.5f);
		unk_0xE8105B7E3908547D(uLocal_136[7], 1);
		unk_0x9001FCB58244C11D(uLocal_136[7], 227, 1);
		uLocal_135 = unk_0xA00B5D954AD320BF(22, joaat("g_m_m_chigoon_02"), Local_116, fLocal_122, 1, 1);
		func_86(&uLocal_270, 4, uLocal_135, "REDGWChinese", 0, 1);
		unk_0x4A1AC49BA4A747F7(uLocal_135, 1);
		unk_0xA50AD6983D49A772(uLocal_135, iLocal_269);
		uVar5 = unk_0x8E83718430E22797(Local_116, 7.5f, -12.75f, 51.5f, 0);
		unk_0x6C4954C76B25F972(uLocal_135, uVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x25821CAAB3B8EF73(uVar5, 1);
		unk_0x8F856D0103CF1B91(uLocal_135, 4f, 18f, 326.7277f, 0, 1);
		unk_0xE8105B7E3908547D(uLocal_135, 1);
		unk_0x9001FCB58244C11D(uLocal_135, 227, 1);
		unk_0xF2061C15946C53A2(5, iLocal_269, joaat("player"));
		if (func_29() == 0)
		{
			func_86(&uLocal_270, 0, unk_0x9F92518438215DD0(), "MICHAEL", 0, 1);
		}
		if (func_29() == 1)
		{
			func_86(&uLocal_270, 1, unk_0x9F92518438215DD0(), "FRANKLIN", 0, 1);
		}
		if (func_29() == 2)
		{
			func_86(&uLocal_270, 2, unk_0x9F92518438215DD0(), "TREVOR", 0, 1);
		}
		uLocal_220[0] = unk_0x9915B058CE25AC53(1110, -1632.953f, 4745.359f, 51.7876f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[1] = unk_0x9915B058CE25AC53(1110, -1634.87f, 4744.458f, 51.8233f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[2] = unk_0x9915B058CE25AC53(1110, -1636.971f, 4736.595f, 52.2814f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[3] = unk_0x9915B058CE25AC53(1110, -1625.561f, 4741.241f, 51.7102f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[4] = unk_0x9915B058CE25AC53(1110, -1621.533f, 4744.576f, 51.9093f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[5] = unk_0x9915B058CE25AC53(1110, -1621.963f, 4737.039f, 51.4174f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[6] = unk_0x9915B058CE25AC53(1110, -1628.517f, 4736.906f, 51.8207f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[7] = unk_0x9915B058CE25AC53(1110, -1629.324f, 4732.146f, 51.6947f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[8] = unk_0x9915B058CE25AC53(1110, -1640.287f, 4738.437f, 52.1756f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[9] = unk_0x9915B058CE25AC53(1110, -1640.055f, 4701.995f, 41.2428f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[10] = unk_0x9915B058CE25AC53(1110, -1641.924f, 4692.236f, 38.3762f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!unk_0x0BA451447C3B1A8D(uLocal_136[iVar1]))
			{
				unk_0x29C0F4A5219281BA(uLocal_136[iVar1], 1);
				unk_0xAD1DDA09E71B46CB(uLocal_136[iVar1], 0, 0.3f, 0.6f, 3);
				unk_0xAD1DDA09E71B46CB(uLocal_136[iVar1], 0, 0.65f, 0.6f, 3);
				unk_0x4EDE34FBADD967A6(unk_0x073B65E051D2F03E(100, 500));
				if (iVar1 <= 5)
				{
					if (unk_0x2E6E8D325977B3EC(uLocal_183[iVar1]))
					{
						unk_0x0451B5D93A4BDAA0(&(uLocal_183[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (unk_0x746960881FB19A89(unk_0x228A016F863DED95()))
		{
			if (!unk_0x34E74FF8690AA4B1(unk_0x228A016F863DED95()))
			{
				unk_0x336AE92FD68DEF98(unk_0x228A016F863DED95(), 1, 0);
			}
		}
		iLocal_454 = 1;
	}
}

Vector3 func_105(struct<3> Param0)
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

void func_106()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x746960881FB19A89(uLocal_159[iVar0]))
		{
			Local_98 = { unk_0x20CBCBD58A2C73B4(uLocal_159[iVar0], 0f, 0f, 0.5f) };
		}
		iLocal_132 = 0;
		while (iLocal_132 < 5)
		{
			fLocal_119 = unk_0x3250987ED5A577C0(1.5f, 2.5f);
			fLocal_120 = unk_0x3250987ED5A577C0(2f, 4f);
			fLocal_121 = unk_0x3250987ED5A577C0(0.1f, 2f);
			unk_0x4EDE34FBADD967A6(0);
			Local_101 = { (Local_98.f_0 - fLocal_119), (Local_98.f_1 - fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { (Local_98.f_0 + fLocal_119), (Local_98.f_1 + fLocal_120), Local_98.f_2 };
			unk_0xF471B61923F42BB1(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_101 = { (Local_98.f_0 + fLocal_119), (Local_98.f_1 + fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { (Local_98.f_0 - fLocal_119), (Local_98.f_1 - fLocal_120), Local_98.f_2 };
			unk_0xF471B61923F42BB1(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_101 = { (Local_98.f_0 + fLocal_119), (Local_98.f_1 - fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { (Local_98.f_0 - fLocal_119), (Local_98.f_1 + fLocal_120), Local_98.f_2 };
			unk_0xF471B61923F42BB1(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_101 = { (Local_98.f_0 - fLocal_119), (Local_98.f_1 + fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { (Local_98.f_0 + fLocal_119), (Local_98.f_1 - fLocal_120), Local_98.f_2 };
			unk_0xF471B61923F42BB1(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_101 = { Local_98.f_0, (Local_98.f_1 + fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { Local_98.f_0, (Local_98.f_1 - fLocal_120), Local_98.f_2 };
			unk_0xF471B61923F42BB1(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iLocal_132++;
		}
		iVar0++;
	}
}

int func_107()
{
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_118())
		{
			return 0;
		}
	}
	if (func_114())
	{
		return 1;
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
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (func_32(func_29()))
		{
			iVar36 = func_52();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 2) && !unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 3))
				{
					func_109(iVar32, &Var0);
					fVar35 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Var0.f_6, 1);
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
	if (unk_0x9E9AFDBF482248F6(&cVar2))
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
	if (func_117() && !func_118())
	{
		return 1;
	}
	if (func_116() && func_115())
	{
		return 1;
	}
	return 0;
}

bool func_115()
{
	return Global_97076 > 0;
}

int func_116()
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_117()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_118()
{
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xC981EEB259E36845() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_119()
{
	if (!func_100(5))
	{
		return 1;
	}
	if (func_114())
	{
		return 1;
	}
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_118())
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

int func_120()
{
	if ((Global_97347 == func_56() && unk_0x5B668B6112C83376()) && Global_97348)
	{
		return 1;
	}
	return 0;
}

void func_121(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_123(iParam0);
	unk_0xEDE0414F2E7294E3(0);
	unk_0xA81D632371FE58C9(1);
	Global_97344 = 0;
	func_122();
}

void func_122()
{
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			unk_0x60DAE84D0B296FD2(unk_0xB6A50C909A8FABC3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)), 1);
		}
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 0);
	}
}

void func_123(int iParam0)
{
	Global_97347 = iParam0;
}

int func_124(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131425)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_56();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_165())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			Var1 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_118())
			{
				return 0;
			}
		}
		if (!Global_97358.f_7341)
		{
			return 0;
		}
		if (func_38(0))
		{
			return 0;
		}
		if (func_114())
		{
			return 0;
		}
		if (func_164())
		{
			return 0;
		}
		if (Global_97347 != -1)
		{
			return 0;
		}
		if (func_32(func_29()))
		{
			if (func_108(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_163(iParam3))
		{
			return 0;
		}
		if (func_32(func_29()))
		{
			if (func_162(func_29()) == 4 || func_162(func_29()) == 5)
			{
				return 0;
			}
		}
		if (func_32(func_29()))
		{
			if (!func_161(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_160(Global_97358.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x17103F66FBB44C3C() - Global_97349) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_159())
		{
			return 0;
		}
		if (unk_0xDC8D2FA0A650F78B())
		{
			return 0;
		}
		if (unk_0x5B668B6112C83376())
		{
			return 0;
		}
		if (!func_150(4))
		{
			return 0;
		}
		if (!func_100(5))
		{
			return 0;
		}
		if (func_149(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xF67FA89DDC5D0BDC(unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0())))
		{
			if ((unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(377.153f, -717.567f, 10.0536f) || unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(320.9934f, 265.2515f, 82.1221f)) || unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_149(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_163(30) && !func_149(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_32(func_29()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97358.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97358.f_1729.f_539.f_1524[iVar4];
				if (func_148(iVar8))
				{
					if (func_126(iVar4))
					{
						if (!func_125(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Var5) < (210f * 210f))
							{
								if (func_29() != iVar4)
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

bool func_125(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_126(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97358.f_1729.f_539.f_1524[iParam0];
	return func_127(iVar0);
}

int func_127(int iParam0)
{
	return func_128(iParam0, 1);
}

int func_128(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_148(iParam0))
	{
		return 0;
	}
	func_129(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_129(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_130(func_141(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_130(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_140(iParam0, iParam1))
	{
		iVar0 = func_139(iParam1);
		iVar1 = func_137(iParam0);
		iVar2 = (func_137(iParam0) - func_137(iParam1));
		iVar3 = (func_139(iParam0) - func_139(iParam1));
		iVar4 = (func_136(iParam0) - func_136(iParam1));
		iVar5 = (func_135(iParam0) - func_135(iParam1));
		iVar6 = (func_134(iParam0) - func_134(iParam1));
		iVar7 = (func_133(iParam0) - func_133(iParam1));
	}
	else
	{
		iVar0 = func_139(iParam0);
		iVar1 = func_137(iParam1);
		iVar2 = (func_137(iParam1) - func_137(iParam0));
		iVar3 = (func_139(iParam1) - func_139(iParam0));
		iVar4 = (func_136(iParam1) - func_136(iParam0));
		iVar5 = (func_135(iParam1) - func_135(iParam0));
		iVar6 = (func_134(iParam1) - func_134(iParam0));
		iVar7 = (func_133(iParam1) - func_133(iParam0));
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
		iVar4 = (iVar4 + func_132(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_131(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_131(float fParam0, float fParam1, float fParam2)
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

int func_132(int iParam0, int iParam1)
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

int func_133(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_134(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_135(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_136(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_137(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_138(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
}

int func_138(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_139(int iParam0)
{
	return iParam0 & 15;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_148(iParam1) || !func_148(iParam0))
	{
		return 1;
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
	else if (iVar0 < iVar1)
	{
		return 0;
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
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_141()
{
	var uVar0;
	
	func_147(&uVar0, unk_0xD9940DF735CED1D5());
	func_146(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_145(&uVar0, unk_0x3E15607264E063C3());
	func_144(&uVar0, unk_0xA2C54D866C588926());
	func_143(&uVar0, unk_0x35E06151CD8A2DD1());
	func_142(&uVar0, unk_0x4C625096668FC49E());
	return uVar0;
}

void func_142(var uParam0, int iParam1)
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

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_144(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_139(*uParam0);
	iVar1 = func_137(*uParam0);
	if (iParam1 < 1 || iParam1 > func_132(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_145(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_146(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_147(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_148(int iParam0)
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
	iVar0 = func_133(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_134(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_135(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_137(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_139(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_136(iParam0);
	if (iVar5 < 1 || iVar5 > func_132(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0, int iParam1)
{
	if (unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0)
{
	int iVar0;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				iVar0 = func_29();
				if (!func_32(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_158()) || Global_96405) || Global_24446) || func_157()) || func_81(8, -1)) || func_156()) || func_155()) || func_154()) || func_153()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1) || func_158()) || Global_24446) || func_157()) || func_81(8, -1)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_158()) || Global_96405) || Global_24446) || func_157()) || func_81(8, -1)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_97358.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_158()) || Global_96405) || Global_24446) || func_157()) || func_81(8, -1)) || func_156()) || func_155()) || func_153()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_158() || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || func_81(8, -1)) || func_153()) || func_152()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_81(8, -1) || func_156()) || func_155()) || func_152()) || func_151())
						{
							return 0;
						}
						if ((unk_0x2D8FCFBC4E01FF7C() && unk_0x07A396B1A4E45F2E() != 3) && unk_0x3EFE2A7CA77DFD27() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
						{
							if ((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_158()) || Global_24446) || func_157()) || func_81(8, -1)) || func_155()) || func_154()) || func_153()) || Global_97358.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || func_158()) || func_155()) || Global_96405) || Global_24446) || func_157()) || Global_35957) || func_81(8, -1)) || func_154()) || func_152()) || func_153()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1)) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0xC8399522CF774929(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_158()) || Global_96405) || Global_24446) || func_157()) || func_81(8, -1)) || func_154()) || func_152()) || func_156()) || func_155()) || func_153())
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

var func_151()
{
	return Global_90001.f_1;
}

int func_152()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_153()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_154()
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

bool func_155()
{
	return Global_90014.f_291 > 0;
}

bool func_156()
{
	return Global_90014.f_290 > 0;
}

var func_157()
{
	return Global_1315900;
}

int func_158()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_159()
{
	func_79();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_160(int iParam0)
{
	return func_140(func_141(), iParam0);
}

int func_161(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_29();
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

int func_162(int iParam0)
{
	if (!func_32(iParam0))
	{
		return 7;
	}
	return Global_97358.f_5944.f_919[iParam0];
}

bool func_163(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_165())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x94E72F17611BCD3C(Global_97358.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_164()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (unk_0xFC38B241541883D3(uVar0, 0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0xB5BBEB12C77EE430(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_165()
{
	var uVar0;
	
	if (unk_0x6979E33C9417DF13())
	{
		if (unk_0x94E72F17611BCD3C(unk_0xF10205C2D28EABD5(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131677 == 2)
	{
		return 1;
	}
	if (unk_0x9183AA5076D2BF07())
	{
		if (unk_0x92966E63982CCDA8())
		{
			if (unk_0xDE4ECE183EAC7EDB())
			{
				if (unk_0x6979E33C9417DF13())
				{
					uVar0 = unk_0xF10205C2D28EABD5(866);
					unk_0xEDB9A377CD8B7F03(&uVar0, 0);
					unk_0x69EF975E73B9F02D(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_166()
{
	int iVar0;
	
	if (iLocal_454 && !iLocal_261)
	{
		unk_0x845977C673188B47();
		unk_0xB1E35D138037D248(1f);
		if (unk_0x2E6E8D325977B3EC(uLocal_180))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_180);
		}
		if (unk_0x2E6E8D325977B3EC(uLocal_181))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_181);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x2E6E8D325977B3EC(uLocal_193[iVar0]))
			{
				unk_0x0451B5D93A4BDAA0(&(uLocal_193[iVar0]));
			}
			if (unk_0x2E6E8D325977B3EC(uLocal_203[iVar0]))
			{
				unk_0x0451B5D93A4BDAA0(&(uLocal_203[iVar0]));
			}
			if (iLocal_47 >= 6)
			{
				if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
				{
					if (!unk_0x3E0478C40AB5B38D(uLocal_149[iVar0]))
					{
						if (unk_0x5093D6F9140AD109(uLocal_149[iVar0], unk_0x9F92518438215DD0(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_265 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x2E6E8D325977B3EC(uLocal_198[iVar0]))
			{
				unk_0x0451B5D93A4BDAA0(&(uLocal_198[iVar0]));
			}
			if (unk_0x2E6E8D325977B3EC(uLocal_208[iVar0]))
			{
				unk_0x0451B5D93A4BDAA0(&(uLocal_208[iVar0]));
			}
			if (iLocal_47 >= 6)
			{
				if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
				{
					if (!unk_0x3E0478C40AB5B38D(uLocal_154[iVar0]))
					{
						if (unk_0x5093D6F9140AD109(uLocal_154[iVar0], unk_0x9F92518438215DD0(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_265 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_45 >= 1)
		{
			unk_0x2250E32CE864C09F(5, 1);
			unk_0x2250E32CE864C09F(3, 1);
		}
		if (bLocal_265)
		{
			func_3(func_29(), 1, 25000);
		}
	}
	func_167(-1);
	unk_0xE60DEFFB2A853900();
}

void func_167(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_120())
	{
		func_171(iParam0);
		unk_0x50809CE263545545(0, 0);
		Global_97349 = unk_0x17103F66FBB44C3C();
		func_170(30000);
		StringCopy(&cVar0, func_169(Global_97347, 1), 64);
		if (func_55(Global_97347) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97346, 64);
		}
		unk_0xB87D4A9CC02132A5(&cVar0, Global_97344, (unk_0x17103F66FBB44C3C() - Global_97345), 0);
	}
	else if (unk_0x94E72F17611BCD3C(Global_97354, 0) && Global_97358.f_28192.f_2 < 3)
	{
		unk_0xF76EE56D3E7DAF1B(&Global_97354, 0);
	}
	func_168(&Global_24503);
	Global_97348 = 0;
	func_123(-1);
}

void func_168(var uParam0)
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

char* func_169(int iParam0, bool bParam1)
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

void func_170(int iParam0)
{
	Global_35464 = (unk_0x17103F66FBB44C3C() + iParam0);
}

void func_171(int iParam0)
{
	func_172(iParam0, 0, func_177(iParam0));
}

void func_172(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_141();
	func_175(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_174(iParam0, &uVar0);
	Var1 = { func_173(&uVar0) };
}

struct<16> func_173(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_135(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_134(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_133(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_136(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_139(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_137(*uParam0), 64);
	return Var0;
}

void func_174(int iParam0, var uParam1)
{
	Global_97358.f_28192.f_43[iParam0] = *uParam1;
}

void func_175(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_137(*uParam0);
	iVar1 = func_139(*uParam0);
	iVar2 = func_136(*uParam0);
	iVar3 = func_135(*uParam0);
	iVar4 = func_134(*uParam0);
	iVar5 = func_133(*uParam0);
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
	iVar6 = func_132(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_132(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_176(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_176(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_147(uParam0, iParam1);
	func_146(uParam0, iParam2);
	func_145(uParam0, iParam3);
	func_144(uParam0, iParam4);
	func_143(uParam0, iParam5);
	func_142(uParam0, iParam6);
}

int func_177(int iParam0)
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

