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
	if (unk_0x2C897F101BA20806(11))
	{
		func_167();
	}
	if (func_125(Local_48, -1, 0, 0, 0))
	{
		func_122(-1);
	}
	else
	{
		unk_0x82706E6C897B0FA1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0xFEC6476AFCF2033F() || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), -1503.54f, 4934.923f, 114.2284f, 100f, 100f, 100f, 0, 1, 0)) || iLocal_46 == 2)
		{
			if (!func_121())
			{
				if (func_120())
				{
					func_167();
				}
			}
			unk_0x0022A74B21F0C0B9("RE_DGW", 0);
			switch (iLocal_46)
			{
				case 0:
					if (iLocal_454)
					{
						iLocal_46 = 1;
					}
					else
					{
						if (func_108())
						{
							func_167();
						}
						func_105();
					}
					break;
				
				case 1:
					func_104();
					func_93();
					break;
				
				case 2:
					switch (iLocal_45)
					{
						case 0:
							func_104();
							iLocal_45 = 1;
							break;
						
						case 1:
							func_104();
							func_73();
							if (iLocal_47 >= 6)
							{
								if (!func_72())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (bLocal_266)
										{
											func_71(&(uLocal_149[iVar0]), &(uLocal_193[iVar0]), &(uLocal_175[iVar0]), &(uLocal_203[iVar0]));
											func_66(uLocal_175[0], unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 0f, 0f, 1000, 0f);
											func_66(uLocal_175[1], unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 2f, 0f, 1000, 0f);
											func_61(&(uLocal_149[iVar0]), &(uLocal_193[iVar0]), &(uLocal_175[iVar0]), &(uLocal_203[iVar0]));
										}
										else if (bLocal_263)
										{
											func_71(&(uLocal_149[iVar0]), &(uLocal_193[iVar0]), &(uLocal_165[iVar0]), &(uLocal_203[iVar0]));
											func_66(uLocal_165[0], unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 0f, 0f, 1000, 0f);
											func_66(uLocal_165[1], unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 5f, 0f, 1000, 0f);
											func_61(&(uLocal_149[iVar0]), &(uLocal_193[iVar0]), &(uLocal_165[iVar0]), &(uLocal_203[iVar0]));
										}
										else if (bLocal_264)
										{
											func_71(&(uLocal_154[iVar0]), &(uLocal_198[iVar0]), &(uLocal_170[iVar0]), &(uLocal_208[iVar0]));
											func_66(uLocal_170[0], unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 0f, 0f, 1000, 0f);
											func_66(uLocal_170[1], unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 5f, 0f, 1000, 0f);
											func_61(&(uLocal_154[iVar0]), &(uLocal_198[iVar0]), &(uLocal_170[iVar0]), &(uLocal_208[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_36();
								}
							}
							if (((unk_0xB4AD7D9D08986FF5(unk_0xA16EC202D9D35357()) || unk_0x0336D2959717E8D2(unk_0xA16EC202D9D35357())) && !unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_233, 100f, 100f, 100f, 0, 1, 0)) && iLocal_47 < 2)
							{
								func_36();
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
			func_167();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_454 && !iLocal_261)
	{
		unk_0x8C4265EEC0D6FD1A();
		unk_0xABC4F2A6D7D56CF4(1f);
		if (unk_0x5660C8AFDD9C1721(uLocal_180))
		{
			unk_0xB6FB9702660D84F6(&uLocal_180);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_181))
		{
			unk_0xB6FB9702660D84F6(&uLocal_181);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_193[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_193[iVar0]));
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_203[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_203[iVar0]));
			}
			if (iLocal_47 >= 6)
			{
				if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_149[iVar0]))
					{
						if (unk_0x14F9932776F21CC2(uLocal_149[iVar0], unk_0xA16EC202D9D35357(), 100f, 100f, 100f, 0, 1, 0))
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
			if (unk_0x5660C8AFDD9C1721(uLocal_198[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_198[iVar0]));
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_208[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_208[iVar0]));
			}
			if (iLocal_47 >= 6)
			{
				if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_154[iVar0]))
					{
						if (unk_0x14F9932776F21CC2(uLocal_154[iVar0], unk_0xA16EC202D9D35357(), 100f, 100f, 100f, 0, 1, 0))
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
			unk_0x24469800558B4973(5, 1);
			unk_0x24469800558B4973(3, 1);
		}
		if (bLocal_265)
		{
			func_3(func_31(), 1, 25000);
		}
		iLocal_261 = 1;
	}
	if (!unk_0x7A98E0DD2E6FAB7A(Local_233, 30f) && unk_0x2A488C176D52CCA5(func_2(unk_0x1788E93557766241()), Local_233) > 300f)
	{
		func_167();
	}
}

Vector3 func_2(var uParam0)
{
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(uParam0), 0);
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_97439.f_29795[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_30();
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
					func_29(99, 1);
					func_28(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_28(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_28(joaat("sp2_money_total_spent"), iParam3);
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
							func_28(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_28(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_28(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_28(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_28(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_28(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_28(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_28(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_28(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_28(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_28(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_28(joaat("sp2_money_spent_property"), iParam3);
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
									func_28(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_28(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_28(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_28(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_28(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_28(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_28(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_28(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_28(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_28(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_28(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_28(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_29(95, iParam3);
					break;
				
				case 1:
					func_29(97, iParam3);
					break;
				
				case 2:
					func_29(96, iParam3);
					break;
			}
			func_29(98, iParam3);
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
					func_28(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_28(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_28(joaat("sp2_total_cash_earned"), iParam3);
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
	func_6(iParam0);
	if (Global_34915 == 15)
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

void func_6(int iParam0)
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

void func_7(int iParam0)
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
	else if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0) || unk_0x889D01384B54BCE3(Global_2097152[func_9() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		unk_0x29DB79DD4D939B38(&(Global_2097152[func_9() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xA6CE1BB0BF7AE715("COUP_RED");
		unk_0x4498E0CBD76B2D72(func_8(iParam0));
		unk_0xB2BB3F163B7B2B4C(&cVar1, &cVar1, 1, 0, "", 0);
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
	func_29(93, iParam0);
	func_29(29, iParam0);
	func_29(30, iParam0);
}

bool func_11(int iParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0);
	}
	return unk_0x889D01384B54BCE3(Global_2097152[func_9() /*8064*/].f_5756.f_10, iParam0);
}

int func_12(bool bParam0)
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
		func_27(27, iVar1);
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
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_14(iParam0, iParam1);
}

int func_14(int iParam0, int iParam1)
{
	if (func_26(14) && !func_25(iParam0))
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
	if (func_24(&Global_2542838))
	{
		if (func_22(&Global_2542838, iParam0))
		{
			return 0;
		}
		if (func_15(&Global_2542838, iParam0))
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

int func_15(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_25(iParam1))
	{
		return 0;
	}
	if (func_22(uParam0, iParam1))
	{
		return 0;
	}
	if (func_21(uParam0) < 0f)
	{
		func_20(uParam0, 0);
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
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_25(iParam1))
	{
		return 0;
	}
	if (func_22(uParam0, iParam1))
	{
		return 0;
	}
	if (func_21(uParam0) < 0f)
	{
		func_20(uParam0, 0);
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
	return (*uParam0)[iParam1] == 70;
}

void func_18(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0, iVar0);
		iVar0++;
	}
	func_20(uParam0, (Global_2542837 - 0.5f));
}

void func_19(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_20(var uParam0, float fParam1)
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

float func_21(var uParam0)
{
	return uParam0->f_72;
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
	return uParam0->f_71 == 1;
}

int func_25(int iParam0)
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

bool func_26(int iParam0)
{
	return Global_34915 == iParam0;
}

int func_27(int iParam0, int iParam1)
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

void func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3ED04C9A60CBD249(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(iParam0, iVar0, 1);
}

void func_29(int iParam0, int iParam1)
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

void func_30()
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

int func_31()
{
	func_32();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_32()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_35(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_34(unk_0xA16EC202D9D35357());
			if (func_33(iVar0) && (!func_26(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_33(Global_97439.f_1729.f_539.f_3213))
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

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_36()
{
	while (func_60())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_59())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_40(-1, 0);
	func_37();
	iLocal_46 = 3;
}

void func_37()
{
	func_38();
}

int func_38()
{
	if (func_39(0))
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

bool func_39(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

void func_40(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_56(iParam0))
	{
		func_55(iParam0, iParam1);
		if (!func_54(51))
		{
			func_50("RE_REWARD", 1, 0, 4000, 10000, func_53(), 0, 138, 0);
			func_49(51);
		}
		if (func_48(iParam0))
		{
			Global_97439.f_28192.f_2 = 3;
		}
		if (func_47(iParam0, iParam1) != 322)
		{
			func_42(func_47(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97427 = iParam1;
		if (Global_97425 == 0)
		{
			if (((Global_97428 == 1 || Global_97428 == 5) || Global_97428 == 11) || Global_97428 == 25)
			{
				func_41(2);
			}
			else if ((Global_97428 == 26 || Global_97428 == 8) || Global_97428 == 17)
			{
				func_41(7);
			}
			else
			{
				func_41(1);
			}
		}
	}
}

void func_41(int iParam0)
{
	Global_97425 = iParam0;
}

void func_42(int iParam0, var uParam1, var uParam2)
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
		func_45((891 + iParam0), 1, -1, 1);
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
		func_43();
	}
}

void func_43()
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
		func_27(13, unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853));
	}
	if (!unk_0x0DA6B7D4A76F5536())
	{
		if (!Global_68325)
		{
			if (func_44() == 2 == 0 && !unk_0x1DAD7CE53BEE7710())
			{
				if (unk_0xECA1708601B2AF8E())
				{
					Global_97173 = 0;
				}
				if (!Global_54758)
				{
					func_38();
				}
			}
		}
	}
}

int func_44()
{
	return Global_24446;
}

int func_45(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_46();
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

int func_46()
{
	return Global_1312729;
}

int func_47(int iParam0, int iParam1)
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

int func_48(int iParam0)
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

void func_49(int iParam0)
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

void func_50(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_51(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_51(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_52();
	}
}

void func_52()
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

int func_53()
{
	func_32();
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

int func_54(int iParam0)
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

void func_55(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_28192.f_8[iParam0]), iParam1);
}

int func_56(int iParam0)
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

int func_57()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x7E5A426328F6E635(), 64);
	uVar16 = func_58(Var0);
	return uVar16;
}

int func_58(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_59()
{
	return 1;
}

int func_60()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

void func_61(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (unk_0x538DF9E5B1DF01EB(*uParam2))
	{
		if (unk_0xECFECDAD51A6184F(*uParam2, 0))
		{
			if (!unk_0x2DE0B96E966FD817(*uParam0))
			{
				if (unk_0xAD203DB71ADF6E57(*uParam0, *uParam2, 0))
				{
					if (unk_0x5660C8AFDD9C1721(*uParam1))
					{
						unk_0xB6FB9702660D84F6(uParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0x5660C8AFDD9C1721(*uParam1))
				{
					*uParam1 = func_64(*uParam0, 1, 145);
				}
			}
			if (!unk_0x5660C8AFDD9C1721(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = func_62(unk_0xBF8499F46AD9093A(*uParam2, 1), 0);
					unk_0x1AD45E3CF020D50D(*uParam3, 1);
					unk_0x85C00B9AEF9CC0BE(*uParam3, 9);
					unk_0xFDA1FE98ECD75505(*uParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { unk_0x19E074E292E9B9F6(*uParam3) };
				Var4 = { unk_0xBF8499F46AD9093A(*uParam2, 1) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * unk_0x0000000050597EE2()));
				unk_0xEF247769E001D314(*uParam3, Var1);
				if (iVar0 == 0)
				{
					unk_0xB6FB9702660D84F6(uParam3);
				}
			}
		}
		else
		{
			if (unk_0x5660C8AFDD9C1721(*uParam3))
			{
				unk_0xB6FB9702660D84F6(uParam3);
			}
			if (!unk_0x2DE0B96E966FD817(*uParam0))
			{
				if (!unk_0x5660C8AFDD9C1721(*uParam1))
				{
					*uParam1 = func_64(*uParam0, 1, 145);
				}
			}
		}
	}
}

var func_62(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x64F646E6A974BF18(Param0);
	unk_0xBE97A5A41C1F5C4C(uVar0, func_63(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
	unk_0xF1D09F0F8B016765(uVar0, iParam3);
	return uVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_64(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_65(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x5660C8AFDD9C1721(uVar0)) && unk_0xC929DDA58687736B(&(Global_97439.f_29795[iParam2 /*29*/].f_3)))
	{
		unk_0xFDA1FE98ECD75505(uVar0, &(Global_97439.f_29795[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_65(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDF78B7F06503567E(iParam0);
	if (unk_0x9FF5D51C24AD2308(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_63(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
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
		unk_0xBE97A5A41C1F5C4C(uVar0, func_63(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
		unk_0x060629C917E581A5(uVar0, bParam1);
	}
	else if (unk_0x15CE956C279F4825(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_63(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_66(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	struct<3> Var0;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		if (((((((unk_0x538DF9E5B1DF01EB(iParam1) && iParam0 != iParam1) && !unk_0xD18BE100522E5F15(unk_0xA609E58449080951(iParam1))) && !unk_0xEE41D6C2DA208994(unk_0xA609E58449080951(iParam1))) && !unk_0x38B61EB14C5FBA9E(unk_0xA609E58449080951(iParam1))) && !unk_0xEEE07492AE30B7BC(unk_0xA609E58449080951(iParam1))) && unk_0x66679628FFE34E84(iParam1)) && func_70(iParam0))
		{
			if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0xCC6B7A025E72F529(*uParam2, *uParam3, Param7) };
				func_69(iParam1, uParam4, uParam5);
			}
			if (!unk_0x0E7E162F5A49FAAA(iParam0))
			{
				*uParam6 = unk_0x09560C7DE2A384BD();
			}
			else if ((unk_0x09560C7DE2A384BD() - *uParam6) > iParam10)
			{
				if (func_68(iParam0, iParam1, 1) > fParam11 && unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!func_67(*uParam2))
					{
						if (!unk_0x7A98E0DD2E6FAB7A(*uParam2, 3f))
						{
							unk_0x11E84835ED616A25(*uParam2, 1.5f, 0);
							unk_0x597CB55BA0825820(*uParam2, 3f, 0, 0, 0, 0, 0);
							unk_0x6C43BF7625967266(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x34639238667C4381(iParam0, *uParam3);
							unk_0xAC894C93914464C2(iParam0);
							unk_0x213AEEC6A495123F(iParam0, 10f);
							unk_0x6EBB9B0E214CCF0F(iParam0, 1, 1);
							*uParam6 = unk_0x09560C7DE2A384BD();
						}
						else
						{
							Var0 = { unk_0xCC6B7A025E72F529(Local_112, uLocal_111, Param7) };
							if (!func_67(Var0))
							{
								if (!unk_0x7A98E0DD2E6FAB7A(Var0, 2f))
								{
									unk_0x11E84835ED616A25(Var0, 1.5f, 0);
									unk_0x597CB55BA0825820(Var0, 3f, 0, 0, 0, 0, 0);
									unk_0x6C43BF7625967266(iParam0, Var0, 1, 0, 0, 1);
									unk_0x34639238667C4381(iParam0, uLocal_111);
									unk_0xAC894C93914464C2(iParam0);
									unk_0x213AEEC6A495123F(iParam0, 10f);
									unk_0x6EBB9B0E214CCF0F(iParam0, 1, 1);
									*uParam6 = unk_0x09560C7DE2A384BD();
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
			*uParam6 = unk_0x09560C7DE2A384BD();
		}
	}
}

int func_67(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_68(int iParam0, int iParam1, int iParam2)
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

void func_69(int iParam0, var uParam1, var uParam2)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			*uParam1 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
			*uParam2 = unk_0xD1613577C809E98B(iParam0);
		}
	}
}

int func_70(int iParam0)
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			if (!unk_0x557C6E696286C67A(iParam0, -1))
			{
				iVar0 = unk_0xD8A521688BDBE867(iParam0, -1);
				if (unk_0x538DF9E5B1DF01EB(iVar0))
				{
					if (!unk_0xE44A580B551C3645(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_71(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(*uParam0))
	{
		if (unk_0x2DE0B96E966FD817(*uParam0))
		{
			if (unk_0x5660C8AFDD9C1721(*uParam1))
			{
				unk_0xB6FB9702660D84F6(uParam1);
			}
			unk_0x6B3DDEE91652BE59(uParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0x202EF5D8203705EF(*uParam0, 0))
			{
			}
			else if (unk_0x538DF9E5B1DF01EB(*uParam2))
			{
				if (unk_0xECFECDAD51A6184F(*uParam2, 0))
				{
					if (unk_0xAD203DB71ADF6E57(*uParam0, *uParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x538DF9E5B1DF01EB(*uParam2))
	{
		if (unk_0xECFECDAD51A6184F(*uParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0xA78F348116859C5F(*uParam2);
				unk_0x8141EAEB97026180(*uParam2);
				unk_0x9122271AF278554B(*uParam2, 0);
				unk_0x3A3C5A6572B3C611(uParam2);
				if (unk_0x5660C8AFDD9C1721(*uParam3))
				{
					unk_0xB6FB9702660D84F6(uParam3);
				}
			}
		}
		else
		{
			unk_0xA78F348116859C5F(*uParam2);
			unk_0x8141EAEB97026180(*uParam2);
			unk_0x9122271AF278554B(*uParam2, 0);
			unk_0x3A3C5A6572B3C611(uParam2);
			if (unk_0x5660C8AFDD9C1721(*uParam3))
			{
				unk_0xB6FB9702660D84F6(uParam3);
			}
		}
	}
}

int func_72()
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
		if (unk_0x538DF9E5B1DF01EB(uLocal_149[iVar1]))
		{
			if (!unk_0x2DE0B96E966FD817(uLocal_149[iVar1]))
			{
				if (unk_0x14F9932776F21CC2(uLocal_149[iVar1], unk_0xA16EC202D9D35357(), 200f, 200f, 200f, 0, 1, 0))
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
		if (unk_0x538DF9E5B1DF01EB(uLocal_154[iVar1]))
		{
			if (!unk_0x2DE0B96E966FD817(uLocal_154[iVar1]))
			{
				if (unk_0x14F9932776F21CC2(uLocal_154[iVar1], unk_0xA16EC202D9D35357(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_73()
{
	int iVar0;
	
	if (bLocal_455)
	{
		if (bLocal_266)
		{
		}
		else if (bLocal_263)
		{
			if (!unk_0x2DE0B96E966FD817(uLocal_149[0]) && !unk_0xE44A580B551C3645(uLocal_165[0]))
			{
			}
			if (!unk_0x2DE0B96E966FD817(uLocal_149[1]) && !unk_0xE44A580B551C3645(uLocal_165[1]))
			{
			}
		}
		else
		{
			if (!unk_0x2DE0B96E966FD817(uLocal_154[0]) && !unk_0xE44A580B551C3645(uLocal_170[0]))
			{
			}
			if (!unk_0x2DE0B96E966FD817(uLocal_154[1]) && !unk_0xE44A580B551C3645(uLocal_170[1]))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0xAC6E7F1E5DE7D77F(uLocal_220[iVar0]);
			if (unk_0x2DE0B96E966FD817(uLocal_149[iVar0]))
			{
				if (unk_0x5660C8AFDD9C1721(uLocal_193[iVar0]))
				{
					unk_0xB6FB9702660D84F6(&(uLocal_193[iVar0]));
					iLocal_123++;
				}
			}
			else if (!unk_0x202EF5D8203705EF(uLocal_149[iVar0], 0))
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_193[iVar0]))
				{
					uLocal_193[iVar0] = func_64(uLocal_149[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0xAC6E7F1E5DE7D77F(uLocal_220[iVar0]);
			if (unk_0x2DE0B96E966FD817(uLocal_154[iVar0]))
			{
				if (unk_0x5660C8AFDD9C1721(uLocal_198[iVar0]))
				{
					unk_0xB6FB9702660D84F6(&(uLocal_198[iVar0]));
					iLocal_124++;
				}
			}
			else if (!unk_0x202EF5D8203705EF(uLocal_154[iVar0], 0))
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_198[iVar0]))
				{
					uLocal_198[iVar0] = func_64(uLocal_154[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_123 >= 4 && iLocal_124 >= 4)
		{
			func_36();
		}
	}
	func_89();
	func_88();
	switch (iLocal_47)
	{
		case 0:
			if (((unk_0xAB3130B7084278DF(unk_0x1788E93557766241()) || !unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_233 + Vector(0f, 20f, 0f), 170f, 270f, 50f, 0, 1, 0)) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, 0, 1, 0)) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, 0, 1, 0))
			{
				if (!bLocal_266)
				{
					if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, 0, 1, 0) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, 0, 1, 0))
					{
						bLocal_266 = true;
					}
				}
				if (unk_0xA62BDF5350C248B7(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), &Local_239, 1, 1077936128, 0))
				{
					if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_239, 20f, 20f, 20f, 0, 1, 0))
					{
						unk_0x24469800558B4973(5, 1);
						unk_0x24469800558B4973(3, 1);
						unk_0xC1B1E9A034A63A62(0);
						func_86();
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
					if (((!unk_0xE44A580B551C3645(uLocal_175[0]) && !unk_0xE44A580B551C3645(uLocal_175[1])) && !unk_0x2DE0B96E966FD817(uLocal_149[0])) && !unk_0x2DE0B96E966FD817(uLocal_149[1]))
					{
						unk_0x3195B1192FB0EA3D(uLocal_149[0], uLocal_175[0], -1);
						unk_0x3195B1192FB0EA3D(uLocal_149[1], uLocal_175[1], -1);
						unk_0x15EBFEEB77BF84B7(uLocal_149[0], 3, 0);
						unk_0x15EBFEEB77BF84B7(uLocal_149[1], 3, 0);
						unk_0x49D26ECEB56A3095(uLocal_149[0], 0);
						unk_0x49D26ECEB56A3095(uLocal_149[1], 0);
						iLocal_47 = 5;
					}
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 10000)
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					if (!unk_0x51E5BE292F56EC84(unk_0xA16EC202D9D35357(), joaat("rebel")))
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
			Local_242 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			uLocal_131 = unk_0x444ECD635D5FD45F(10, 15);
			if (!unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, 0, 1, 0))
			{
				if (unk_0x4555877B8D40F1EF(Local_242, uLocal_131, &(Local_438[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_438[1 /*3*/] = { Local_438[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x7A98E0DD2E6FAB7A(Local_438[0 /*3*/], 7f) && !unk_0x7A98E0DD2E6FAB7A(Local_438[1 /*3*/], 7f))
					{
						if (unk_0xECFECDAD51A6184F(uLocal_165[0], 0))
						{
							unk_0x6C43BF7625967266(uLocal_165[0], Local_438[0 /*3*/], 1, 0, 0, 1);
							func_85(uLocal_165[0], uLocal_149[0]);
						}
						if (unk_0xECFECDAD51A6184F(uLocal_165[1], 0))
						{
							unk_0x6C43BF7625967266(uLocal_165[1], Local_438[1 /*3*/], 1, 0, 0, 1);
							func_85(uLocal_165[1], uLocal_149[1]);
						}
						if (func_31() == 0)
						{
							func_74(&uLocal_270, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_31() == 1)
						{
							func_74(&uLocal_270, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_31() == 2)
						{
							func_74(&uLocal_270, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_263 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_47 = 6;
					}
				}
			}
			break;
		
		case 4:
			Local_242 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			uLocal_131 = unk_0x444ECD635D5FD45F(30, 35);
			if (!unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, 0, 1, 0))
			{
				if (unk_0x4555877B8D40F1EF(Local_242, uLocal_131, &(Local_438[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_438[1 /*3*/] = { Local_438[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x7A98E0DD2E6FAB7A(Local_438[0 /*3*/], 7f) && !unk_0x7A98E0DD2E6FAB7A(Local_438[1 /*3*/], 7f))
					{
						if (unk_0xECFECDAD51A6184F(uLocal_170[0], 0))
						{
							unk_0x6C43BF7625967266(uLocal_170[0], Local_438[0 /*3*/], 1, 0, 0, 1);
							func_85(uLocal_170[0], uLocal_154[0]);
						}
						if (unk_0xECFECDAD51A6184F(uLocal_170[1], 0))
						{
							unk_0x6C43BF7625967266(uLocal_170[1], Local_438[1 /*3*/], 1, 0, 0, 1);
							func_85(uLocal_170[1], uLocal_154[1]);
						}
						if (func_31() == 0)
						{
							func_74(&uLocal_270, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_31() == 1)
						{
							func_74(&uLocal_270, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_31() == 2)
						{
							func_74(&uLocal_270, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_264 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_47 = 6;
					}
				}
			}
			break;
		
		case 5:
			Local_242 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			uLocal_131 = unk_0x444ECD635D5FD45F(5, 10);
			if (unk_0x4555877B8D40F1EF(Local_242, uLocal_131, &(Local_438[0 /*3*/]), 1, 1077936128, 0))
			{
				Local_438[1 /*3*/] = { Local_438[0 /*3*/] + Vector(0f, 5f, 0f) };
				if (!unk_0x7A98E0DD2E6FAB7A(Local_438[0 /*3*/], 7f) && !unk_0x7A98E0DD2E6FAB7A(Local_438[1 /*3*/], 7f))
				{
					if (unk_0xECFECDAD51A6184F(uLocal_175[0], 0))
					{
						unk_0x6C43BF7625967266(uLocal_175[0], Local_438[0 /*3*/], 1, 0, 0, 1);
						func_85(uLocal_175[0], uLocal_149[0]);
					}
					if (unk_0xECFECDAD51A6184F(uLocal_175[1], 0))
					{
						unk_0x6C43BF7625967266(uLocal_175[1], Local_438[1 /*3*/], 1, 0, 0, 1);
						func_85(uLocal_175[1], uLocal_149[1]);
					}
					if (func_31() == 0)
					{
						func_74(&uLocal_270, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_31() == 1)
					{
						func_74(&uLocal_270, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_31() == 2)
					{
						func_74(&uLocal_270, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_263 = true;
					unk_0xC1B1E9A034A63A62(0);
					iLocal_47 = 6;
				}
			}
			break;
		
		case 6:
			if (func_60())
			{
				fLocal_119 = unk_0x1E253A1A83763D22(1.5f, 2.5f);
				fLocal_120 = unk_0x1E253A1A83763D22(2f, 4f);
				fLocal_121 = unk_0x1E253A1A83763D22(0.1f, 2f);
				if (iLocal_133 < 5 && iLocal_134 < unk_0x09560C7DE2A384BD())
				{
					Local_89 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
					unk_0xBE0CCC837372AE90((Local_89.f_0 + fLocal_119), (Local_89.f_1 + fLocal_120), (Local_89.f_2 + fLocal_121), (Local_89.f_0 - fLocal_119), (Local_89.f_1 - fLocal_120), Local_89.f_2, 10, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
					iLocal_134 = (unk_0x09560C7DE2A384BD() + unk_0x444ECD635D5FD45F(200, 500));
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

bool func_74(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_75(sParam2, iParam3, 0);
}

int func_75(char* sParam0, int iParam1, bool bParam2)
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
					func_83();
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
		if (func_82(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_81();
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
				func_80();
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
				if (func_79())
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
			if (func_78())
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
			func_77();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_76();
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
		func_83();
	}
	return 0;
}

void func_76()
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

void func_77()
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

int func_78()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_79()
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

void func_80()
{
	if (func_26(14))
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
		Global_14394 = func_31();
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

void func_81()
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

bool func_82(int iParam0, int iParam1)
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

void func_83()
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

void func_84(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_85(int iParam0, var uParam1)
{
	unk_0x3CC3106305C40A28(uParam0, 0);
	unk_0xAC894C93914464C2(uParam0);
	Local_435 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	Local_451 = { Local_242 - Local_435 };
	unk_0x34639238667C4381(iParam0, unk_0x3C616B96B92181C5(Local_451.f_0, Local_451.f_1));
	if (bLocal_266)
	{
		if (!unk_0x2DE0B96E966FD817(uParam1))
		{
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				unk_0x399D9FE0F364130F(uParam1, unk_0xA16EC202D9D35357());
				unk_0x4EDE34FBADD967A6(1);
				if (!unk_0x2DE0B96E966FD817(uParam1))
				{
					unk_0xC6E8E213C2523379(uParam1, 32, 1);
				}
			}
			else
			{
				unk_0xD14A21CF793D510E(uParam1, iParam0, unk_0xA16EC202D9D35357(), 6, 20f, 786469, -1f, -1f, 1);
			}
			if (!unk_0xE44A580B551C3645(iParam0))
			{
				unk_0x213AEEC6A495123F(iParam0, unk_0x5AF66EDEBFA76B9B(unk_0xA16EC202D9D35357()));
			}
		}
	}
	else if (!unk_0x2DE0B96E966FD817(uParam1))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			unk_0x399D9FE0F364130F(uParam1, unk_0xA16EC202D9D35357());
		}
		else
		{
			unk_0xD14A21CF793D510E(uParam1, iParam0, unk_0xA16EC202D9D35357(), 2, 100f, 786469, -1f, -1f, 1);
		}
		unk_0x213AEEC6A495123F(iParam0, unk_0x5AF66EDEBFA76B9B(unk_0xA16EC202D9D35357()));
	}
}

void func_86()
{
	int iVar0;
	
	uLocal_165[0] = unk_0x9BB6F54E415071A1(joaat("rebel"), -1595.964f, 4732.479f, 0f, 305f, 1, 1);
	unk_0x7B9576B4E099FB1F(uLocal_165[0], 1, 0);
	unk_0x6EBB9B0E214CCF0F(uLocal_165[0], 1, 1);
	unk_0x1143B1E42EAAE947(uLocal_165[0], 2);
	unk_0x2D79C863A05FB8F7(uLocal_165[0], 1);
	unk_0x3CC3106305C40A28(uLocal_165[0], 1);
	unk_0x3F5ED6FBAE13F4E5(uLocal_165[0], "49GNL112");
	uLocal_165[1] = unk_0x9BB6F54E415071A1(joaat("rebel"), -1570.34f, 4733.755f, 0f, 305f, 1, 1);
	unk_0x7B9576B4E099FB1F(uLocal_165[1], 1, 0);
	unk_0x6EBB9B0E214CCF0F(uLocal_165[1], 1, 1);
	unk_0x1143B1E42EAAE947(uLocal_165[1], 2);
	unk_0x2D79C863A05FB8F7(uLocal_165[1], 1);
	unk_0x3CC3106305C40A28(uLocal_165[1], 1);
	unk_0x3F5ED6FBAE13F4E5(uLocal_165[1], "47TMS703");
	uLocal_175[0] = unk_0x9BB6F54E415071A1(joaat("sanchez"), Vector(0f, 4732.479f, -1595.964f) + Vector(10f, 10f, 10f), 305f, 1, 1);
	unk_0x7B9576B4E099FB1F(uLocal_175[0], 1, 0);
	unk_0x6EBB9B0E214CCF0F(uLocal_175[0], 1, 1);
	unk_0x1143B1E42EAAE947(uLocal_175[0], 2);
	unk_0x2D79C863A05FB8F7(uLocal_175[0], 1);
	unk_0x3CC3106305C40A28(uLocal_175[0], 1);
	unk_0x3F5ED6FBAE13F4E5(uLocal_175[0], "49GNL112");
	uLocal_175[1] = unk_0x9BB6F54E415071A1(joaat("sanchez"), Vector(0f, 4733.755f, -1570.34f) + Vector(10f, 10f, 10f), 305f, 1, 1);
	unk_0x7B9576B4E099FB1F(uLocal_175[1], 1, 0);
	unk_0x6EBB9B0E214CCF0F(uLocal_175[1], 1, 1);
	unk_0x1143B1E42EAAE947(uLocal_175[1], 2);
	unk_0x2D79C863A05FB8F7(uLocal_175[1], 1);
	unk_0x3CC3106305C40A28(uLocal_175[1], 1);
	unk_0x3F5ED6FBAE13F4E5(uLocal_175[1], "47TMS703");
	uLocal_149[0] = unk_0x793482A351850A4F(uLocal_165[0], 26, joaat("g_m_m_chigoon_02"), -1, 1, 1);
	uLocal_149[1] = unk_0x793482A351850A4F(uLocal_165[1], 26, joaat("g_m_m_chigoon_02"), -1, 1, 1);
	if (!bLocal_266)
	{
		uLocal_149[2] = unk_0x793482A351850A4F(uLocal_165[0], 26, joaat("g_m_m_chigoon_02"), 0, 1, 1);
		uLocal_149[3] = unk_0x793482A351850A4F(uLocal_165[1], 26, joaat("g_m_m_chigoon_02"), 0, 1, 1);
	}
	uLocal_170[0] = unk_0x9BB6F54E415071A1(joaat("bobcatxl"), -1356.281f, 5000f, 0f, 125.2811f, 1, 1);
	unk_0x7B9576B4E099FB1F(uLocal_170[0], 1, 0);
	unk_0x6EBB9B0E214CCF0F(uLocal_170[0], 1, 1);
	unk_0x1143B1E42EAAE947(uLocal_170[0], 2);
	unk_0x2D79C863A05FB8F7(uLocal_170[0], 1);
	unk_0x3CC3106305C40A28(uLocal_170[0], 1);
	unk_0x3F5ED6FBAE13F4E5(uLocal_170[0], "49GNL112");
	uLocal_170[1] = unk_0x9BB6F54E415071A1(joaat("bobcatxl"), -1373.589f, 5000f, 0f, 125.459f, 1, 1);
	unk_0x7B9576B4E099FB1F(uLocal_170[1], 1, 0);
	unk_0x6EBB9B0E214CCF0F(uLocal_170[1], 1, 1);
	unk_0x1143B1E42EAAE947(uLocal_170[1], 2);
	unk_0x2D79C863A05FB8F7(uLocal_170[1], 1);
	unk_0x3CC3106305C40A28(uLocal_170[1], 1);
	unk_0x3F5ED6FBAE13F4E5(uLocal_170[1], "47TMS703");
	uLocal_154[0] = unk_0x793482A351850A4F(uLocal_170[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
	uLocal_154[1] = unk_0x793482A351850A4F(uLocal_170[1], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
	uLocal_154[2] = unk_0x793482A351850A4F(uLocal_170[0], 26, joaat("g_m_y_salvagoon_03"), 0, 1, 1);
	uLocal_154[3] = unk_0x793482A351850A4F(uLocal_170[1], 26, joaat("g_m_y_salvagoon_03"), 0, 1, 1);
	unk_0x0B29CE7F19BFE6C0("RE_deal1", &iLocal_267);
	unk_0x0B29CE7F19BFE6C0("RE_deal2", &iLocal_268);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x2DE0B96E966FD817(uLocal_149[iVar0]))
		{
			unk_0xA9465591B42213AE(uLocal_149[iVar0], iLocal_267);
			unk_0x7B9576B4E099FB1F(uLocal_149[iVar0], 1, 0);
			if (bLocal_266)
			{
				unk_0x39272B2594E03395(uLocal_149[0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
				if (!unk_0x2DE0B96E966FD817(uLocal_149[1]))
				{
					unk_0x39272B2594E03395(uLocal_149[1], joaat("weapon_pistol"), -1, 1, 1);
				}
				unk_0xE97E86766A24F0FA(uLocal_149[iVar0], 15);
				unk_0x15EBFEEB77BF84B7(uLocal_149[iVar0], 3, 0);
			}
			else
			{
				unk_0x39272B2594E03395(uLocal_149[iVar0], joaat("weapon_pistol"), -1, 1, 1);
				unk_0xE97E86766A24F0FA(uLocal_149[iVar0], 13);
			}
			unk_0x15EBFEEB77BF84B7(uLocal_149[iVar0], 13, 1);
			unk_0x15EBFEEB77BF84B7(uLocal_149[iVar0], 2, 1);
			unk_0x15EBFEEB77BF84B7(uLocal_149[iVar0], 1, 1);
			func_87(&uLocal_270, 4, uLocal_149[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x2DE0B96E966FD817(uLocal_149[iVar0]))
		{
			unk_0xA9465591B42213AE(uLocal_154[iVar0], iLocal_268);
			unk_0x7B9576B4E099FB1F(uLocal_154[iVar0], 1, 0);
			if (bLocal_266)
			{
				unk_0x39272B2594E03395(uLocal_149[0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
				if (!unk_0x2DE0B96E966FD817(uLocal_149[1]))
				{
					unk_0x39272B2594E03395(uLocal_149[1], joaat("weapon_pistol"), -1, 1, 1);
				}
				unk_0xE97E86766A24F0FA(uLocal_149[iVar0], 15);
				unk_0x15EBFEEB77BF84B7(uLocal_149[iVar0], 3, 0);
				func_87(&uLocal_270, 4, uLocal_149[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				unk_0x39272B2594E03395(uLocal_154[iVar0], joaat("weapon_pistol"), -1, 1, 1);
				unk_0xE97E86766A24F0FA(uLocal_154[iVar0], 13);
				func_87(&uLocal_270, 5, uLocal_154[iVar0], "REDGWSalvadoran", 0, 1);
			}
			unk_0x15EBFEEB77BF84B7(uLocal_154[iVar0], 13, 1);
			unk_0x15EBFEEB77BF84B7(uLocal_154[iVar0], 2, 1);
			unk_0x15EBFEEB77BF84B7(uLocal_154[iVar0], 1, 1);
		}
		iVar0++;
	}
	unk_0x2966D41514EAE84B(3, iLocal_267, iLocal_268);
	unk_0x2966D41514EAE84B(3, iLocal_268, iLocal_267);
	unk_0x2966D41514EAE84B(3, iLocal_267, joaat("player"));
	unk_0x2966D41514EAE84B(3, iLocal_268, joaat("player"));
	unk_0xEA054561294AEC10(joaat("g_m_m_chigoon_02"));
	unk_0xEA054561294AEC10(joaat("g_m_y_salvagoon_03"));
	unk_0xEA054561294AEC10(joaat("rebel"));
	unk_0xEA054561294AEC10(joaat("bobcatxl"));
	unk_0xEA054561294AEC10(joaat("sanchez"));
	unk_0xEA054561294AEC10(joaat("a_c_rottweiler"));
	bLocal_455 = true;
	iLocal_45 = 1;
}

void func_87(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
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
				unk_0x54CA1F435E64266A(uParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(uParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(uParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(uParam2, 1);
			}
		}
	}
}

void func_88()
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
					if (!unk_0x2DE0B96E966FD817(uLocal_149[iVar0]))
					{
						if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_149[iVar0], 100f, 100f, 20f, 0, 1, 0))
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
					if (!unk_0x2DE0B96E966FD817(uLocal_154[iVar1]))
					{
						if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_154[iVar1], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_129 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			unk_0x2966D41514EAE84B(5, iLocal_267, iLocal_268);
			unk_0x2966D41514EAE84B(5, iLocal_268, iLocal_267);
			unk_0x2966D41514EAE84B(5, iLocal_267, joaat("player"));
			unk_0x2966D41514EAE84B(5, iLocal_268, joaat("player"));
			if (bLocal_263)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_149[iVar2]))
					{
						if ((!unk_0x0E9F33AA2B8E5EB6(uLocal_149[iVar2], 0) && unk_0x221AC1EF116F6053(uLocal_149[iVar2], 579380604) != 1) && unk_0x221AC1EF116F6053(uLocal_149[iVar2], 579380604) != 0)
						{
							unk_0x937785D9C1929236(uLocal_149[iVar2]);
							unk_0x85A1016DBBC5E64B(uLocal_149[iVar2], unk_0xA16EC202D9D35357(), 0, 16);
							unk_0x2686393074E14730(uLocal_149[iVar2], 1);
						}
					}
					iVar2++;
				}
				if (func_74(&uLocal_270, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_126 = unk_0x09560C7DE2A384BD();
					iLocal_129 = 4;
				}
			}
			if (bLocal_264)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_154[iVar3]))
					{
						if ((!unk_0x0E9F33AA2B8E5EB6(uLocal_154[iVar3], 0) && unk_0x221AC1EF116F6053(uLocal_154[iVar3], 579380604) != 1) && unk_0x221AC1EF116F6053(uLocal_154[iVar3], 579380604) != 0)
						{
							unk_0x937785D9C1929236(uLocal_154[iVar3]);
							unk_0x85A1016DBBC5E64B(uLocal_154[iVar3], unk_0xA16EC202D9D35357(), 0, 16);
							unk_0x2686393074E14730(uLocal_154[iVar3], 1);
						}
					}
					iVar3++;
				}
				if (func_74(&uLocal_270, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_126 = unk_0x09560C7DE2A384BD();
					iLocal_129 = 4;
				}
			}
			break;
	}
}

void func_89()
{
	switch (iLocal_127)
	{
		case 0:
			if (!unk_0x2DE0B96E966FD817(uLocal_135))
			{
				if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_236, 7f, 7f, 10f, 0, 1, 0))
				{
					func_91();
					unk_0x4EDE34FBADD967A6(0);
					func_74(&uLocal_270, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					unk_0x4745F9C50C63A48C(uLocal_135, unk_0xA16EC202D9D35357(), -1, 2048, 2);
					if (!unk_0x5660C8AFDD9C1721(uLocal_181))
					{
						uLocal_181 = func_90(uLocal_213);
					}
					iLocal_126 = unk_0x09560C7DE2A384BD();
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
			if (!unk_0x2DE0B96E966FD817(uLocal_135))
			{
				if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_135, 10f, 10f, 6f, 0, 1, 0))
				{
					if (!func_60())
					{
						func_74(&uLocal_270, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!unk_0x2DE0B96E966FD817(uLocal_135))
						{
							unk_0x4745F9C50C63A48C(uLocal_135, unk_0xA16EC202D9D35357(), -1, 2048, 2);
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
			if (!func_60() || unk_0xC9D9444186B5A374() > 4000)
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_135))
				{
					unk_0x4C31C3561F937348(uLocal_135, 0);
					unk_0xB6FB9702660D84F6(&uLocal_182);
				}
				if (unk_0xC9D9444186B5A374() > 7000)
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_136[6]))
					{
						unk_0x4C31C3561F937348(uLocal_136[6], 0);
						unk_0xB6FB9702660D84F6(&(uLocal_183[6]));
					}
				}
				if (unk_0xC9D9444186B5A374() > 9000)
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_136[7]))
					{
						unk_0x4C31C3561F937348(uLocal_136[7], 0);
						unk_0xB6FB9702660D84F6(&(uLocal_183[7]));
					}
					iLocal_128++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x2DE0B96E966FD817(uLocal_136[6]))
			{
				unk_0x4C31C3561F937348(uLocal_136[6], 0);
			}
			if (!unk_0x2DE0B96E966FD817(uLocal_136[7]))
			{
				unk_0x4C31C3561F937348(uLocal_136[7], 0);
			}
			if (!unk_0x2DE0B96E966FD817(uLocal_135))
			{
				unk_0x4C31C3561F937348(uLocal_135, 0);
			}
			break;
	}
}

int func_90(var uParam0)
{
	var uVar0;
	
	if (!unk_0x27C40BD761A1E76F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE86F8FB78D76001F(uParam0);
	unk_0xBE97A5A41C1F5C4C(uVar0, func_63(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
	return uVar0;
}

void func_91()
{
	Global_14559 = 0;
	func_92();
}

void func_92()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
	}
}

void func_93()
{
	int iVar0;
	
	if (unk_0x3FCA2F27F738473E(uLocal_213))
	{
		if (unk_0x5660C8AFDD9C1721(uLocal_180))
		{
			unk_0xB6FB9702660D84F6(&uLocal_180);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_181))
		{
			unk_0xB6FB9702660D84F6(&uLocal_181);
		}
		iLocal_128 = 1;
		iLocal_46 = 2;
		iLocal_45 = 0;
	}
	else
	{
		unk_0xABC4F2A6D7D56CF4(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x538DF9E5B1DF01EB(uLocal_136[iVar0]))
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_136[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (unk_0x5660C8AFDD9C1721(uLocal_183[iVar0]))
				{
					unk_0xB6FB9702660D84F6(&(uLocal_183[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_146)
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_146[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_121())
		{
			if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_51[7 /*3*/], 110f, 95f, 40f, 0, 1, 0))
			{
				if (unk_0x5660C8AFDD9C1721(uLocal_180))
				{
					unk_0xB6FB9702660D84F6(&uLocal_180);
				}
				if ((!unk_0x5660C8AFDD9C1721(uLocal_182) && !unk_0x5660C8AFDD9C1721(uLocal_183[6])) && !unk_0x5660C8AFDD9C1721(uLocal_183[7]))
				{
					uLocal_182 = func_64(uLocal_135, 1, 145);
					uLocal_183[6] = func_64(uLocal_136[6], 1, 145);
					uLocal_183[7] = func_64(uLocal_136[7], 1, 145);
				}
				unk_0xAF9E05E1AFA9F45F(uLocal_182, 0);
				unk_0xAF9E05E1AFA9F45F(uLocal_183[6], 0);
				unk_0xAF9E05E1AFA9F45F(uLocal_183[7], 0);
				func_94(1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(uLocal_136[6]))
		{
			if (((((unk_0x221AC1EF116F6053(uLocal_136[6], 1785177548) != 1 && unk_0x221AC1EF116F6053(uLocal_136[6], 1785177548) != 0) || unk_0x042EE007A41C88D4(uLocal_136[6])) || unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), uLocal_136[6])) || unk_0xE1D540101EC17933(uLocal_136[6])) || unk_0x3EBEB227491853A1(uLocal_136[6]))
			{
				unk_0x4C31C3561F937348(uLocal_136[6], 0);
			}
		}
		if (!unk_0x2DE0B96E966FD817(uLocal_136[7]))
		{
			if (((((unk_0x221AC1EF116F6053(uLocal_136[7], 1785177548) != 1 && unk_0x221AC1EF116F6053(uLocal_136[7], 1785177548) != 0) || unk_0x042EE007A41C88D4(uLocal_136[7])) || unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), uLocal_136[7])) || unk_0xE1D540101EC17933(uLocal_136[7])) || unk_0x3EBEB227491853A1(uLocal_136[7]))
			{
				unk_0x4C31C3561F937348(uLocal_136[7], 0);
			}
		}
		if (!unk_0x2DE0B96E966FD817(uLocal_135))
		{
			if (((((unk_0x221AC1EF116F6053(uLocal_135, 1785177548) != 1 && unk_0x221AC1EF116F6053(uLocal_135, 1785177548) != 0) || unk_0x042EE007A41C88D4(uLocal_135)) || unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), uLocal_135)) || unk_0xE1D540101EC17933(uLocal_135)) || unk_0x3EBEB227491853A1(uLocal_135))
			{
				unk_0x4C31C3561F937348(uLocal_135, 0);
			}
		}
		if (!bLocal_262)
		{
		}
	}
	func_89();
	switch (iLocal_130)
	{
		case 0:
			if (!unk_0x2DE0B96E966FD817(uLocal_136[6]))
			{
				if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), unk_0xBF8499F46AD9093A(uLocal_136[6], 1) + Vector(0f, 2.5f, 0f), 9f, 5f, 5f, 0, 1, 0) && unk_0x070FE1B33937A5CB(unk_0xA16EC202D9D35357(), uLocal_136[6]))
				{
					unk_0x4745F9C50C63A48C(uLocal_136[6], unk_0xA16EC202D9D35357(), -1, 2048, 2);
					unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), uLocal_136[6], 4000, 2048, 2);
					func_74(&uLocal_270, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_126 = unk_0x09560C7DE2A384BD();
					iLocal_130 = 1;
				}
			}
			if (!unk_0x2DE0B96E966FD817(uLocal_136[7]))
			{
				if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), unk_0xBF8499F46AD9093A(uLocal_136[7], 1) + Vector(0f, 3f, 0f), 9f, 7f, 5f, 0, 1, 0) && unk_0x070FE1B33937A5CB(unk_0xA16EC202D9D35357(), uLocal_136[7]))
				{
					unk_0x4745F9C50C63A48C(uLocal_136[7], unk_0xA16EC202D9D35357(), -1, 2048, 2);
					unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), uLocal_136[7], 4000, 2048, 2);
					func_74(&uLocal_270, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_126 = unk_0x09560C7DE2A384BD();
					iLocal_130 = 1;
				}
			}
			if (unk_0x2DE0B96E966FD817(uLocal_136[6]) && unk_0x2DE0B96E966FD817(uLocal_136[7]))
			{
				iLocal_130 = 2;
			}
			break;
		
		case 1:
			if (unk_0x5660C8AFDD9C1721(uLocal_182))
			{
				unk_0xAF9E05E1AFA9F45F(uLocal_182, 1);
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_183[6]))
			{
				unk_0xAF9E05E1AFA9F45F(uLocal_183[6], 1);
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_183[7]))
			{
				unk_0xAF9E05E1AFA9F45F(uLocal_183[7], 1);
			}
			iLocal_125 = unk_0x09560C7DE2A384BD();
			if ((iLocal_125 - iLocal_126) > 6000 && !func_60())
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_136[6]))
				{
				}
				if (!unk_0x2DE0B96E966FD817(uLocal_136[7]))
				{
				}
				if (!unk_0x5660C8AFDD9C1721(uLocal_181))
				{
					uLocal_181 = func_90(uLocal_213);
				}
				unk_0xABC4F2A6D7D56CF4(0f);
				if (!func_121())
				{
					func_94(1);
				}
				iLocal_130 = 2;
			}
			break;
	}
}

int func_94(int iParam0)
{
	if (func_98())
	{
		Global_97429 = 1;
		Global_97426 = unk_0x09560C7DE2A384BD();
		if (func_48(Global_97428))
		{
			func_95(0);
		}
		unk_0xBE9A45C5385D0AB1(1, "RE_TITLE");
		if (iParam0 && func_48(Global_97428))
		{
			unk_0x94BF9C1CAC4541F9();
		}
		return 1;
	}
	return 0;
}

void func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97439.f_28192.f_2 < 3)
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_96(func_97(iParam0), -1);
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
					func_96(func_97(iParam0), -1);
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
					func_96(func_97(iParam0), -1);
					Global_97439.f_28192.f_4++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 2);
				}
			}
			break;
	}
}

void func_96(var uParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(uParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

char* func_97(int iParam0)
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

int func_98()
{
	switch (func_99(&Global_24505, 0, 5, 0, unk_0x60C807BBCBE66CC7()))
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

int func_99(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_103(0))
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
		if (!func_101(iParam2))
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
			func_100(uParam0, iParam4);
		}
	}
	return 2;
}

void func_100(var uParam0, int iParam1)
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

bool func_101(int iParam0)
{
	return func_102(iParam0, Global_34915);
}

int func_102(int iParam0, int iParam1)
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

int func_103(int iParam0)
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	if (func_101(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_104()
{
	int iVar0;
	
	if (!unk_0xE44A580B551C3645(uLocal_159[0]))
	{
		if (unk_0xD8A521688BDBE867(uLocal_159[0], -1) == uLocal_136[8])
		{
			unk_0xD4A8BC0015313E1C(uLocal_159[0], 60000f);
			unk_0x6B23B935E1094169(uLocal_159[0]);
		}
	}
	if (!unk_0x2DE0B96E966FD817(uLocal_135))
	{
		if (unk_0xEAABEAE1DB589285(uLocal_135))
		{
			unk_0x4C31C3561F937348(uLocal_135, 0);
		}
	}
	else if (unk_0x5660C8AFDD9C1721(uLocal_182))
	{
		unk_0xB6FB9702660D84F6(&uLocal_182);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x7A98E0DD2E6FAB7A(Local_233, 30f) && unk_0x2A488C176D52CCA5(func_2(unk_0x1788E93557766241()), Local_233) > 300f)
		{
			if (unk_0x538DF9E5B1DF01EB(uLocal_136[iVar0]))
			{
				unk_0x6B3DDEE91652BE59(&(uLocal_136[iVar0]));
			}
		}
		if (unk_0x2DE0B96E966FD817(uLocal_136[iVar0]))
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_183[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_183[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	unk_0x939DA7EBCC6588FF(joaat("g_m_m_chigoon_02"));
	unk_0x939DA7EBCC6588FF(joaat("g_m_y_salvagoon_03"));
	unk_0x939DA7EBCC6588FF(joaat("rebel"));
	unk_0x939DA7EBCC6588FF(joaat("bobcatxl"));
	unk_0x939DA7EBCC6588FF(joaat("sanchez"));
	unk_0x939DA7EBCC6588FF(joaat("a_c_rottweiler"));
	unk_0x939DA7EBCC6588FF(joaat("prop_security_case_01"));
	unk_0x3D28909AF30D70F4("random@dealgonewrong");
	unk_0x3D28909AF30D70F4("random@dealgonewrongdead_peds");
	if ((((((((unk_0x5494F37F35C1D7D7(joaat("g_m_m_chigoon_02")) && unk_0x5494F37F35C1D7D7(joaat("g_m_y_salvagoon_03"))) && unk_0x5494F37F35C1D7D7(joaat("rebel"))) && unk_0x5494F37F35C1D7D7(joaat("bobcatxl"))) && unk_0x5494F37F35C1D7D7(joaat("sanchez"))) && unk_0x5494F37F35C1D7D7(joaat("a_c_rottweiler"))) && unk_0x5494F37F35C1D7D7(joaat("prop_security_case_01"))) && unk_0x6C47E32491756A1A("random@dealgonewrong")) && unk_0x6C47E32491756A1A("random@dealgonewrongdead_peds"))
	{
		unk_0x4210B2DCFC2838AC(Local_233 - Vector(150f, 150f, 150f), Local_233 + Vector(150f, 150f, 150f), 0, 1, 1, 1);
		unk_0x32DC163A33A4AB6D(joaat("bobcatxl"), 1);
		unk_0x32DC163A33A4AB6D(joaat("rebel"), 1);
		unk_0x24469800558B4973(5, 0);
		unk_0x24469800558B4973(3, 0);
		uLocal_159[0] = unk_0x9BB6F54E415071A1(joaat("bobcatxl"), -1626.94f, 4729.889f, 51.3463f, 347.1188f, 1, 1);
		unk_0x7B9576B4E099FB1F(uLocal_159[0], 1, 0);
		unk_0xAC894C93914464C2(uLocal_159[0]);
		unk_0x6EBB9B0E214CCF0F(uLocal_159[0], 1, 1);
		unk_0x1143B1E42EAAE947(uLocal_159[0], 2);
		unk_0xBCA53A1278653F4C(uLocal_159[0], 500f);
		unk_0x300688EA0EDEE519(uLocal_159[0], 500f);
		unk_0xA4FABA09D10C713D(uLocal_159[0], 1, 1);
		unk_0x4AD2CC399F715C31(uLocal_159[0], 0, 0, 1148846080);
		unk_0xC98BED9A30834D11(uLocal_159[0], 6);
		unk_0x4C4993C4A4C173AD(uLocal_159[0], "RADIO_06_COUNTRY");
		unk_0x3F5ED6FBAE13F4E5(uLocal_159[0], "76JON418");
		unk_0xBAE0E085DFB45D18(uLocal_159[0], 1);
		uLocal_159[1] = unk_0x9BB6F54E415071A1(joaat("rebel"), -1619.432f, 4747.792f, 52.7502f, 146.6017f, 1, 1);
		unk_0x7B9576B4E099FB1F(uLocal_159[1], 1, 0);
		unk_0xAC894C93914464C2(uLocal_159[1]);
		unk_0x6EBB9B0E214CCF0F(uLocal_159[1], 1, 1);
		unk_0x1143B1E42EAAE947(uLocal_159[1], 2);
		unk_0xBCA53A1278653F4C(uLocal_159[1], 600f);
		unk_0x300688EA0EDEE519(uLocal_159[1], 400f);
		unk_0xA4FABA09D10C713D(uLocal_159[1], 1, 1);
		unk_0xA4FABA09D10C713D(uLocal_159[1], 2, 1);
		unk_0xA4FABA09D10C713D(uLocal_159[1], 3, 0);
		unk_0xA4FABA09D10C713D(uLocal_159[1], 4, 0);
		unk_0xC98BED9A30834D11(uLocal_159[1], 6);
		unk_0x4C4993C4A4C173AD(uLocal_159[1], "RADIO_06_COUNTRY");
		unk_0x3F5ED6FBAE13F4E5(uLocal_159[1], "79ERK121");
		unk_0xBAE0E085DFB45D18(uLocal_159[1], 1);
		unk_0x822826B4A2067BB2(uLocal_159[1], 1);
		uLocal_159[2] = unk_0x9BB6F54E415071A1(joaat("bobcatxl"), -1636.216f, 4748.061f, 51.5484f, 199.3236f, 1, 1);
		unk_0x3F5ED6FBAE13F4E5(uLocal_159[2], "83JOH802");
		unk_0x7B9576B4E099FB1F(uLocal_159[2], 1, 0);
		unk_0xAC894C93914464C2(uLocal_159[2]);
		unk_0x6EBB9B0E214CCF0F(uLocal_159[2], 1, 1);
		unk_0x1143B1E42EAAE947(uLocal_159[2], 2);
		unk_0xBCA53A1278653F4C(uLocal_159[2], 60f);
		unk_0x300688EA0EDEE519(uLocal_159[2], 1000f);
		unk_0xA4FABA09D10C713D(uLocal_159[2], 1, 0);
		unk_0x4AD2CC399F715C31(uLocal_159[2], 1, 0, 1148846080);
		uLocal_159[3] = unk_0x9BB6F54E415071A1(joaat("rebel"), -1641.578f, 4736.783f, 52.5984f, 278.1865f, 1, 1);
		unk_0x3F5ED6FBAE13F4E5(uLocal_159[3], "85TOR114");
		unk_0x7B9576B4E099FB1F(uLocal_159[3], 1, 0);
		unk_0xAC894C93914464C2(uLocal_159[3]);
		unk_0x6EBB9B0E214CCF0F(uLocal_159[3], 1, 1);
		unk_0x1143B1E42EAAE947(uLocal_159[3], 2);
		unk_0xBCA53A1278653F4C(uLocal_159[3], 500f);
		unk_0x300688EA0EDEE519(uLocal_159[3], 500f);
		unk_0xA4FABA09D10C713D(uLocal_159[3], 1, 0);
		unk_0xA4FABA09D10C713D(uLocal_159[3], 2, 0);
		unk_0xA4FABA09D10C713D(uLocal_159[3], 3, 0);
		unk_0xA4FABA09D10C713D(uLocal_159[3], 4, 0);
		unk_0x4AD2CC399F715C31(uLocal_159[3], 0, 0, 1148846080);
		unk_0x4AD2CC399F715C31(uLocal_159[3], 5, 0, 1148846080);
		if (!unk_0x27C40BD761A1E76F(uLocal_213))
		{
			iVar0 = 0;
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 1);
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 3);
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 4);
			uLocal_213 = unk_0x82212519219FCCB5(joaat("pickup_money_case"), Local_236, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
			unk_0xEA054561294AEC10(joaat("prop_security_case_01"));
		}
		Local_245[0 /*3*/] = { -1640.411f, 4740.702f, 52.6218f };
		Local_245[1 /*3*/] = { -1624.664f, 4746.569f, 51.541f };
		Local_245[2 /*3*/] = { -1626.339f, 4734.232f, 51.6176f };
		Local_245[3 /*3*/] = { -1634.297f, 4741.213f, 51.9737f };
		Local_245[4 /*3*/] = { -1644.717f, 4736.446f, 52.3014f };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!unk_0x27C40BD761A1E76F(uLocal_214[iVar1]))
			{
				iVar2 = 0;
				unk_0xD0E2BFCE93AE3ABD(&iVar2, 3);
				unk_0xD0E2BFCE93AE3ABD(&iVar2, 4);
				if (iVar1 < 2)
				{
					uLocal_214[iVar1] = unk_0xE3FFBBF0B5D956E4(joaat("pickup_weapon_sawnoffshotgun"), Local_245[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
				else if (iVar1 == 4)
				{
					uLocal_214[iVar1] = unk_0x82212519219FCCB5(joaat("pickup_weapon_assaultrifle"), Local_245[iVar1 /*3*/], 90f, 50f, 0f, 0, 50, 2, 1, 0);
				}
				else
				{
					uLocal_214[iVar1] = unk_0xE3FFBBF0B5D956E4(joaat("pickup_weapon_pistol"), Local_245[iVar1 /*3*/], iVar2, -1, 1, 0);
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
				uLocal_136[iVar1] = unk_0x6F9DE0DE8363ADF1(22, joaat("g_m_y_salvagoon_03"), Local_51[iVar1 /*3*/], fLocal_79[iVar1], 1, 1);
				unk_0xA1478EBA54DDE31B(uLocal_136[iVar1], 227, 1);
			}
			else
			{
				uLocal_136[iVar1] = unk_0x6F9DE0DE8363ADF1(22, joaat("g_m_m_chigoon_02"), Local_51[iVar1 /*3*/], fLocal_79[iVar1], 1, 1);
			}
			iVar1++;
		}
		iLocal_146[0] = unk_0x6F9DE0DE8363ADF1(26, joaat("a_c_rottweiler"), -1635.005f, 4737.181f, 53.4995f, 33.4155f, 1, 1);
		iLocal_146[1] = unk_0x6F9DE0DE8363ADF1(26, joaat("a_c_rottweiler"), -1625.215f, 4741.119f, 52.5762f, 316.2733f, 1, 1);
		iVar1 = 0;
		while (iVar1 < iLocal_146)
		{
			unk_0x551186C5C186D1DC(iLocal_146[iVar1], 1);
			unk_0x6A23C3306A8CF21B(iLocal_146[iVar1], 1, 0);
			unk_0xA1478EBA54DDE31B(iLocal_146[iVar1], 227, 1);
			Local_89 = { unk_0xBF8499F46AD9093A(iLocal_146[iVar1], 1) };
			Local_92 = { Local_89.f_0, (Local_89.f_1 - 2f), (Local_89.f_2 - 0.5f) };
			Local_95 = { Local_89.f_0, (Local_89.f_1 + 50f), (Local_89.f_2 - 0.5f) };
			unk_0xBE0CCC837372AE90(Local_92, Local_95, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iVar1++;
		}
		unk_0xDD107997C480601E(uLocal_136[0], "random@dealgonewrongdead_peds", "ped_b", -1635.928f, 4707.941f, 46.383f, -29.25f, 12.25f, 171.75f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0xDD107997C480601E(uLocal_136[1], "random@dealgonewrongdead_peds", "ped_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0xDD107997C480601E(uLocal_136[2], "random@dealgonewrongdead_peds", "ped_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0xDD107997C480601E(uLocal_136[3], "random@dealgonewrongdead_peds", "ped_c", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0xDD107997C480601E(uLocal_136[4], "random@dealgonewrongdead_peds", "ped_d", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0xDD107997C480601E(uLocal_136[5], "random@dealgonewrongdead_peds", "ped_e", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0xDD107997C480601E(iLocal_146[0], "random@dealgonewrongdead_peds", "dog_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0xDD107997C480601E(iLocal_146[1], "random@dealgonewrongdead_peds", "dog_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0xDCE4740CE34FBFAD(50f);
		func_107();
		unk_0xDCE4740CE34FBFAD(1f);
		if (unk_0xECFECDAD51A6184F(uLocal_159[0], 0))
		{
			uLocal_136[8] = unk_0x793482A351850A4F(uLocal_159[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
			unk_0x7B9576B4E099FB1F(uLocal_136[8], 1, 0);
			unk_0xE9E0F7305BC666ED(uLocal_136[8], 1);
			unk_0x4C31C3561F937348(uLocal_136[8], 0);
		}
		if (!unk_0x5660C8AFDD9C1721(uLocal_180))
		{
		}
		unk_0x0B29CE7F19BFE6C0("re_DealGoneWrong", &uLocal_269);
		uLocal_136[6] = unk_0x6F9DE0DE8363ADF1(22, joaat("g_m_m_chigoon_02"), Local_51[6 /*3*/], fLocal_79[6], 1, 1);
		func_87(&uLocal_270, 4, uLocal_136[6], "REDGWChinese", 0, 1);
		unk_0x2C4E82CF88213975(uLocal_136[6], 1);
		unk_0x2D79C863A05FB8F7(uLocal_136[6], 1);
		unk_0xA9465591B42213AE(uLocal_136[6], uLocal_269);
		uVar3 = unk_0x7D9AB6E493591276(Local_51[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, 0);
		unk_0x10D8E64E13BD715C(uLocal_136[6], uVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x3E26976B7A367C36(uVar3, 1);
		unk_0x2686393074E14730(uLocal_136[6], 1);
		unk_0xA1478EBA54DDE31B(uLocal_136[6], 227, 1);
		uLocal_136[7] = unk_0x6F9DE0DE8363ADF1(22, joaat("g_m_y_salvagoon_03"), -1640.311f, 4738.4f, 50.2f, fLocal_79[7], 1, 1);
		func_87(&uLocal_270, 5, uLocal_136[7], "REDGWSalvadoran", 0, 1);
		unk_0x2C4E82CF88213975(uLocal_136[7], 1);
		unk_0x2D79C863A05FB8F7(uLocal_136[7], 1);
		unk_0xA9465591B42213AE(uLocal_136[7], iLocal_269);
		uVar4 = unk_0x7D9AB6E493591276(Local_51[7 /*3*/] + Vector(0.92f, 0.65f, -0.65f), 0f, 0f, 34.1111f, 0);
		unk_0x10D8E64E13BD715C(uLocal_136[7], uVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x3E26976B7A367C36(uVar4, 1);
		unk_0x9ACE46E3A6C225BC(uVar4, 0.5f);
		unk_0x2686393074E14730(uLocal_136[7], 1);
		unk_0xA1478EBA54DDE31B(uLocal_136[7], 227, 1);
		uLocal_135 = unk_0x6F9DE0DE8363ADF1(22, joaat("g_m_m_chigoon_02"), Local_116, fLocal_122, 1, 1);
		func_87(&uLocal_270, 4, uLocal_135, "REDGWChinese", 0, 1);
		unk_0x2C4E82CF88213975(uLocal_135, 1);
		unk_0xA9465591B42213AE(uLocal_135, iLocal_269);
		uVar5 = unk_0x7D9AB6E493591276(Local_116, 7.5f, -12.75f, 51.5f, 0);
		unk_0x10D8E64E13BD715C(uLocal_135, uVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x3E26976B7A367C36(uVar5, 1);
		unk_0x0BBAD8A322CB595E(uLocal_135, 4f, 18f, 326.7277f, 0, 1);
		unk_0x2686393074E14730(uLocal_135, 1);
		unk_0xA1478EBA54DDE31B(uLocal_135, 227, 1);
		unk_0x2966D41514EAE84B(5, iLocal_269, joaat("player"));
		if (func_31() == 0)
		{
			func_87(&uLocal_270, 0, unk_0xA16EC202D9D35357(), "MICHAEL", 0, 1);
		}
		if (func_31() == 1)
		{
			func_87(&uLocal_270, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
		}
		if (func_31() == 2)
		{
			func_87(&uLocal_270, 2, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
		}
		uLocal_220[0] = unk_0x9F9408A1A58DD5CC(1110, -1632.953f, 4745.359f, 51.7876f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[1] = unk_0x9F9408A1A58DD5CC(1110, -1634.87f, 4744.458f, 51.8233f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[2] = unk_0x9F9408A1A58DD5CC(1110, -1636.971f, 4736.595f, 52.2814f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[3] = unk_0x9F9408A1A58DD5CC(1110, -1625.561f, 4741.241f, 51.7102f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[4] = unk_0x9F9408A1A58DD5CC(1110, -1621.533f, 4744.576f, 51.9093f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[5] = unk_0x9F9408A1A58DD5CC(1110, -1621.963f, 4737.039f, 51.4174f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[6] = unk_0x9F9408A1A58DD5CC(1110, -1628.517f, 4736.906f, 51.8207f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[7] = unk_0x9F9408A1A58DD5CC(1110, -1629.324f, 4732.146f, 51.6947f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[8] = unk_0x9F9408A1A58DD5CC(1110, -1640.287f, 4738.437f, 52.1756f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[9] = unk_0x9F9408A1A58DD5CC(1110, -1640.055f, 4701.995f, 41.2428f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_220[10] = unk_0x9F9408A1A58DD5CC(1110, -1641.924f, 4692.236f, 38.3762f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!unk_0xE44A580B551C3645(uLocal_136[iVar1]))
			{
				unk_0x551186C5C186D1DC(uLocal_136[iVar1], 1);
				unk_0xAFCD1B456A601B3E(uLocal_136[iVar1], 0, 0.3f, 0.6f, 3);
				unk_0xAFCD1B456A601B3E(uLocal_136[iVar1], 0, 0.65f, 0.6f, 3);
				unk_0x4EDE34FBADD967A6(unk_0x444ECD635D5FD45F(100, 500));
				if (iVar1 <= 5)
				{
					if (unk_0x5660C8AFDD9C1721(uLocal_183[iVar1]))
					{
						unk_0xB6FB9702660D84F6(&(uLocal_183[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (unk_0x538DF9E5B1DF01EB(unk_0xB49BA83A5C224F40()))
		{
			if (!unk_0x22349EC06EA5B08B(unk_0xB49BA83A5C224F40()))
			{
				unk_0x7B9576B4E099FB1F(unk_0xB49BA83A5C224F40(), 1, 0);
			}
		}
		iLocal_454 = 1;
	}
}

Vector3 func_106(struct<3> Param0)
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

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x538DF9E5B1DF01EB(uLocal_159[iVar0]))
		{
			Local_98 = { unk_0xA783C6007920169C(uLocal_159[iVar0], 0f, 0f, 0.5f) };
		}
		iLocal_132 = 0;
		while (iLocal_132 < 5)
		{
			fLocal_119 = unk_0x1E253A1A83763D22(1.5f, 2.5f);
			fLocal_120 = unk_0x1E253A1A83763D22(2f, 4f);
			fLocal_121 = unk_0x1E253A1A83763D22(0.1f, 2f);
			unk_0x4EDE34FBADD967A6(0);
			Local_101 = { (Local_98.f_0 - fLocal_119), (Local_98.f_1 - fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { (Local_98.f_0 + fLocal_119), (Local_98.f_1 + fLocal_120), Local_98.f_2 };
			unk_0xBE0CCC837372AE90(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_101 = { (Local_98.f_0 + fLocal_119), (Local_98.f_1 + fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { (Local_98.f_0 - fLocal_119), (Local_98.f_1 - fLocal_120), Local_98.f_2 };
			unk_0xBE0CCC837372AE90(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_101 = { (Local_98.f_0 + fLocal_119), (Local_98.f_1 - fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { (Local_98.f_0 - fLocal_119), (Local_98.f_1 + fLocal_120), Local_98.f_2 };
			unk_0xBE0CCC837372AE90(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_101 = { (Local_98.f_0 - fLocal_119), (Local_98.f_1 + fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { (Local_98.f_0 + fLocal_119), (Local_98.f_1 - fLocal_120), Local_98.f_2 };
			unk_0xBE0CCC837372AE90(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_101 = { Local_98.f_0, (Local_98.f_1 + fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { Local_98.f_0, (Local_98.f_1 - fLocal_120), Local_98.f_2 };
			unk_0xBE0CCC837372AE90(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iLocal_132++;
		}
		iVar0++;
	}
}

int func_108()
{
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_119())
		{
			return 0;
		}
	}
	if (func_115())
	{
		return 1;
	}
	if (func_109(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_109(float fParam0, bool bParam1)
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
		if (func_33(func_31()))
		{
			iVar36 = func_53();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 2) && !unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 3))
				{
					func_110(iVar32, &Var0);
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

void func_110(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_111(uParam1, "Abigail1", func_113(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 1:
			func_111(uParam1, "Abigail2", func_113(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 2:
			func_111(uParam1, "Barry1", func_113(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 3:
			func_111(uParam1, "Barry2", func_113(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 4:
			func_111(uParam1, "Barry3", func_113(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 5:
			func_111(uParam1, "Barry3A", func_113(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 6:
			func_111(uParam1, "Barry3C", func_113(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 7:
			func_111(uParam1, "Barry4", func_113(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_112(iParam0), 0, 0);
			break;
		
		case 8:
			func_111(uParam1, "Dreyfuss1", func_113(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 9:
			func_111(uParam1, "Epsilon1", func_113(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 10:
			func_111(uParam1, "Epsilon2", func_113(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 11:
			func_111(uParam1, "Epsilon3", func_113(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 12:
			func_111(uParam1, "Epsilon4", func_113(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 13:
			func_111(uParam1, "Epsilon5", func_113(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 14:
			func_111(uParam1, "Epsilon6", func_113(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 15:
			func_111(uParam1, "Epsilon7", func_113(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 16:
			func_111(uParam1, "Epsilon8", func_113(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 17:
			func_111(uParam1, "Extreme1", func_113(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 18:
			func_111(uParam1, "Extreme2", func_113(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 19:
			func_111(uParam1, "Extreme3", func_113(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 20:
			func_111(uParam1, "Extreme4", func_113(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 21:
			func_111(uParam1, "Fanatic1", func_113(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_112(iParam0), 1, 0);
			break;
		
		case 22:
			func_111(uParam1, "Fanatic2", func_113(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_112(iParam0), 1, 0);
			break;
		
		case 23:
			func_111(uParam1, "Fanatic3", func_113(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_112(iParam0), 0, 1);
			break;
		
		case 24:
			func_111(uParam1, "Hao1", func_113(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_112(iParam0), 0, 1);
			break;
		
		case 25:
			func_111(uParam1, "Hunting1", func_113(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 26:
			func_111(uParam1, "Hunting2", func_113(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 27:
			func_111(uParam1, "Josh1", func_113(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 28:
			func_111(uParam1, "Josh2", func_113(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 29:
			func_111(uParam1, "Josh3", func_113(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 30:
			func_111(uParam1, "Josh4", func_113(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 31:
			func_111(uParam1, "Maude1", func_113(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 32:
			func_111(uParam1, "Minute1", func_113(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 33:
			func_111(uParam1, "Minute2", func_113(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 34:
			func_111(uParam1, "Minute3", func_113(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 35:
			func_111(uParam1, "MrsPhilips1", func_113(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 36:
			func_111(uParam1, "MrsPhilips2", func_113(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 37:
			func_111(uParam1, "Nigel1", func_113(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 38:
			func_111(uParam1, "Nigel1A", func_113(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 39:
			func_111(uParam1, "Nigel1B", func_113(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_112(iParam0), 1, 1);
			break;
		
		case 40:
			func_111(uParam1, "Nigel1C", func_113(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_112(iParam0), 1, 1);
			break;
		
		case 41:
			func_111(uParam1, "Nigel1D", func_113(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_112(iParam0), 1, 1);
			break;
		
		case 42:
			func_111(uParam1, "Nigel2", func_113(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 43:
			func_111(uParam1, "Nigel3", func_113(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 44:
			func_111(uParam1, "Omega1", func_113(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 45:
			func_111(uParam1, "Omega2", func_113(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 46:
			func_111(uParam1, "Paparazzo1", func_113(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 47:
			func_111(uParam1, "Paparazzo2", func_113(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 48:
			func_111(uParam1, "Paparazzo3", func_113(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 49:
			func_111(uParam1, "Paparazzo3A", func_113(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 50:
			func_111(uParam1, "Paparazzo3B", func_113(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 51:
			func_111(uParam1, "Paparazzo4", func_113(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 52:
			func_111(uParam1, "Rampage1", func_113(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 54:
			func_111(uParam1, "Rampage3", func_113(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 55:
			func_111(uParam1, "Rampage4", func_113(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 56:
			func_111(uParam1, "Rampage5", func_113(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 53:
			func_111(uParam1, "Rampage2", func_113(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 57:
			func_111(uParam1, "TheLastOne", func_113(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 58:
			func_111(uParam1, "Tonya1", func_113(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 59:
			func_111(uParam1, "Tonya2", func_113(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 60:
			func_111(uParam1, "Tonya3", func_113(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 61:
			func_111(uParam1, "Tonya4", func_113(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 62:
			func_111(uParam1, "Tonya5", func_113(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_111(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_112(int iParam0)
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

struct<2> func_113(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_114(iParam0) };
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

struct<2> func_114(int iParam0)
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

int func_115()
{
	if (func_118() && !func_119())
	{
		return 1;
	}
	if (func_117() && func_116())
	{
		return 1;
	}
	return 0;
}

bool func_116()
{
	return Global_97157 > 0;
}

int func_117()
{
	if (Global_87369 != -1)
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 20);
	}
	return 0;
}

int func_119()
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

int func_120()
{
	if (!func_101(5))
	{
		return 1;
	}
	if (func_115())
	{
		return 1;
	}
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_119())
		{
			return 0;
		}
	}
	if (func_109(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	if ((Global_97428 == func_57() && unk_0x03FD20E179B3FCF4()) && Global_97429)
	{
		return 1;
	}
	return 0;
}

void func_122(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_124(iParam0);
	unk_0xAF49C3B252CD2D4A(0);
	unk_0x612AE23D2DD952F2(1);
	Global_97425 = 0;
	func_123();
}

void func_123()
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

void func_124(int iParam0)
{
	Global_97428 = iParam0;
}

int func_125(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_57();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_166())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_119())
			{
				return 0;
			}
		}
		if (!Global_97439.f_7341)
		{
			return 0;
		}
		if (func_39(0))
		{
			return 0;
		}
		if (func_115())
		{
			return 0;
		}
		if (func_165())
		{
			return 0;
		}
		if (Global_97428 != -1)
		{
			return 0;
		}
		if (func_33(func_31()))
		{
			if (func_109(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_164(iParam3))
		{
			return 0;
		}
		if (func_33(func_31()))
		{
			if (func_163(func_31()) == 4 || func_163(func_31()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_31()))
		{
			if (!func_162(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_161(Global_97439.f_28192.f_43[iParam3]))
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
		if (func_160())
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
		if (!func_151(4))
		{
			return 0;
		}
		if (!func_101(5))
		{
			return 0;
		}
		if (func_150(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_150(0, 0))
		{
			return 0;
		}
		if (Global_24592)
		{
			return 0;
		}
		if (func_164(30) && !func_150(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_31()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97439.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97439.f_1729.f_539.f_1524[iVar4];
				if (func_149(iVar8))
				{
					if (func_127(iVar4))
					{
						if (!func_126(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var5) < (210f * 210f))
							{
								if (func_31() != iVar4)
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

bool func_126(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_127(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97439.f_1729.f_539.f_1524[iParam0];
	return func_128(iVar0);
}

int func_128(int iParam0)
{
	return func_129(iParam0, 1);
}

int func_129(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_149(iParam0))
	{
		return 0;
	}
	func_130(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_130(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_131(func_142(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_131(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_141(iParam0, iParam1))
	{
		iVar0 = func_140(iParam1);
		iVar1 = func_138(iParam0);
		iVar2 = (func_138(iParam0) - func_138(iParam1));
		iVar3 = (func_140(iParam0) - func_140(iParam1));
		iVar4 = (func_137(iParam0) - func_137(iParam1));
		iVar5 = (func_136(iParam0) - func_136(iParam1));
		iVar6 = (func_135(iParam0) - func_135(iParam1));
		iVar7 = (func_134(iParam0) - func_134(iParam1));
	}
	else
	{
		iVar0 = func_140(iParam0);
		iVar1 = func_138(iParam1);
		iVar2 = (func_138(iParam1) - func_138(iParam0));
		iVar3 = (func_140(iParam1) - func_140(iParam0));
		iVar4 = (func_137(iParam1) - func_137(iParam0));
		iVar5 = (func_136(iParam1) - func_136(iParam0));
		iVar6 = (func_135(iParam1) - func_135(iParam0));
		iVar7 = (func_134(iParam1) - func_134(iParam0));
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
		iVar4 = (iVar4 + func_133(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_132(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_132(float fParam0, float fParam1, float fParam2)
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

int func_133(int iParam0, int iParam1)
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

int func_134(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_135(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_136(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_137(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_138(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_139(unk_0x889D01384B54BCE3(iParam0, 31), -1, 1)) + 2011;
}

int func_139(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_140(int iParam0)
{
	return iParam0 & 15;
}

int func_141(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_149(iParam1) || !func_149(iParam0))
	{
		return 1;
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
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
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
	return 0;
}

int func_142()
{
	var uVar0;
	
	func_148(&uVar0, unk_0x4952CA33C6DB5AD4());
	func_147(&uVar0, unk_0x26ADBF0B08315387());
	func_146(&uVar0, unk_0xBE59E3811BD4FDD7());
	func_145(&uVar0, unk_0xA3730885141EEA96());
	func_144(&uVar0, unk_0x1EFE4ED658D22AF3());
	func_143(&uVar0, unk_0x4C29EAF01B84254C());
	return uVar0;
}

void func_143(var uParam0, int iParam1)
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

void func_144(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_145(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_140(*uParam0);
	iVar1 = func_138(*uParam0);
	if (iParam1 < 1 || iParam1 > func_133(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_146(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_147(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_148(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_149(int iParam0)
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
	iVar0 = func_134(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_135(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_136(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_138(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_140(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_137(iParam0);
	if (iVar5 < 1 || iVar5 > func_133(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_150(int iParam0, int iParam1)
{
	if (unk_0x889D01384B54BCE3(Global_97439.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_151(int iParam0)
{
	int iVar0;
	
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				iVar0 = func_31();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_159()) || Global_96486) || Global_24448) || func_158()) || func_82(8, -1)) || func_157()) || func_156()) || func_155()) || func_154()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1) || func_159()) || Global_24448) || func_158()) || func_82(8, -1)) || func_155()) || func_157()) || func_156()) || func_154()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_159()) || Global_96486) || Global_24448) || func_158()) || func_82(8, -1)) || func_155()) || func_157()) || func_156()) || func_154()) || Global_97439.f_5944.f_919[iVar0] == 5) || Global_35462 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_159()) || Global_96486) || Global_24448) || func_158()) || func_82(8, -1)) || func_157()) || func_156()) || func_154()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_159() || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || func_82(8, -1)) || func_154()) || func_153()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_82(8, -1) || func_157()) || func_156()) || func_153()) || func_152())
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
							if ((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_159()) || Global_24448) || func_158()) || func_82(8, -1)) || func_156()) || func_155()) || func_154()) || Global_97439.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || func_159()) || func_156()) || Global_96486) || Global_24448) || func_158()) || Global_35965) || func_82(8, -1)) || func_155()) || func_153()) || func_154()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0)) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1)) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_159()) || Global_96486) || Global_24448) || func_158()) || func_82(8, -1)) || func_155()) || func_153()) || func_157()) || func_156()) || func_154())
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

var func_152()
{
	return Global_90081.f_1;
}

int func_153()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 13);
	}
	return 0;
}

int func_154()
{
	if (unk_0x16CDA1894CFE0781(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_155()
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

bool func_156()
{
	return Global_90094.f_291 > 0;
}

bool func_157()
{
	return Global_90094.f_290 > 0;
}

var func_158()
{
	return Global_1315891;
}

int func_159()
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return Global_87925.f_44 == 1;
	}
	return 0;
}

int func_160()
{
	func_80();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_161(int iParam0)
{
	return func_141(func_142(), iParam0);
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_31();
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

int func_163(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_97439.f_5944.f_919[iParam0];
}

bool func_164(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_166())
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

int func_165()
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

int func_166()
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

void func_167()
{
	int iVar0;
	
	if (iLocal_454 && !iLocal_261)
	{
		unk_0x8C4265EEC0D6FD1A();
		unk_0xABC4F2A6D7D56CF4(1f);
		if (unk_0x5660C8AFDD9C1721(uLocal_180))
		{
			unk_0xB6FB9702660D84F6(&uLocal_180);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_181))
		{
			unk_0xB6FB9702660D84F6(&uLocal_181);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_193[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_193[iVar0]));
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_203[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_203[iVar0]));
			}
			if (iLocal_47 >= 6)
			{
				if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_149[iVar0]))
					{
						if (unk_0x14F9932776F21CC2(uLocal_149[iVar0], unk_0xA16EC202D9D35357(), 100f, 100f, 100f, 0, 1, 0))
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
			if (unk_0x5660C8AFDD9C1721(uLocal_198[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_198[iVar0]));
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_208[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_208[iVar0]));
			}
			if (iLocal_47 >= 6)
			{
				if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_154[iVar0]))
					{
						if (unk_0x14F9932776F21CC2(uLocal_154[iVar0], unk_0xA16EC202D9D35357(), 100f, 100f, 100f, 0, 1, 0))
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
			unk_0x24469800558B4973(5, 1);
			unk_0x24469800558B4973(3, 1);
		}
		if (bLocal_265)
		{
			func_3(func_31(), 1, 25000);
		}
	}
	func_168(-1);
	unk_0x82706E6C897B0FA1();
}

void func_168(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_121())
	{
		func_172(iParam0);
		unk_0xBE9A45C5385D0AB1(0, 0);
		Global_97430 = unk_0x09560C7DE2A384BD();
		func_171(30000);
		StringCopy(&cVar0, func_170(Global_97428, 1), 64);
		if (func_56(Global_97428) > 0)
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
	func_169(&Global_24505);
	Global_97429 = 0;
	func_124(-1);
}

void func_169(var uParam0)
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

char* func_170(int iParam0, bool bParam1)
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

void func_171(int iParam0)
{
	Global_35466 = (unk_0x09560C7DE2A384BD() + iParam0);
}

void func_172(int iParam0)
{
	func_173(iParam0, 0, func_178(iParam0));
}

void func_173(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_142();
	func_176(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_175(iParam0, &uVar0);
	Var1 = { func_174(&uVar0) };
}

struct<16> func_174(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
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
	StringConCat(&Var0, ":", 64);
	iVar16 = func_134(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_137(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_140(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_138(*uParam0), 64);
	return Var0;
}

void func_175(int iParam0, var uParam1)
{
	Global_97439.f_28192.f_43[iParam0] = *uParam1;
}

void func_176(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_138(*uParam0);
	iVar1 = func_140(*uParam0);
	iVar2 = func_137(*uParam0);
	iVar3 = func_136(*uParam0);
	iVar4 = func_135(*uParam0);
	iVar5 = func_134(*uParam0);
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
	iVar6 = func_133(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_133(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_177(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_177(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_148(uParam0, iParam1);
	func_147(uParam0, iParam2);
	func_146(uParam0, iParam3);
	func_145(uParam0, iParam4);
	func_144(uParam0, iParam5);
	func_143(uParam0, iParam6);
}

int func_178(int iParam0)
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

