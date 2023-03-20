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
	int iLocal_18 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52[9];
	float fLocal_80[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	struct<3> Local_113 = { 0, 0, 0 } ;
	var uLocal_116 = 0;
	struct<3> Local_117 = { 0, 0, 0 } ;
	float fLocal_120 = 0f;
	float fLocal_121 = 0f;
	float fLocal_122 = 0f;
	float fLocal_123 = 0f;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_147[2] = { 0, 0 };
	var uLocal_150[4] = { 0, 0, 0, 0 };
	var uLocal_155[4] = { 0, 0, 0, 0 };
	var uLocal_160[5] = { 0, 0, 0, 0, 0 };
	var uLocal_166[4] = { 0, 0, 0, 0 };
	var uLocal_171[4] = { 0, 0, 0, 0 };
	var uLocal_176[4] = { 0, 0, 0, 0 };
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_194[4] = { 0, 0, 0, 0 };
	var uLocal_199[4] = { 0, 0, 0, 0 };
	var uLocal_204[4] = { 0, 0, 0, 0 };
	var uLocal_209[4] = { 0, 0, 0, 0 };
	var uLocal_214 = 0;
	var uLocal_215[5] = { 0, 0, 0, 0, 0 };
	var uLocal_221[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_234 = { 0, 0, 0 } ;
	struct<3> Local_237 = { 0, 0, 0 } ;
	struct<3> Local_240 = { 0, 0, 0 } ;
	struct<3> Local_243 = { 0, 0, 0 } ;
	struct<3> Local_246[5];
	int iLocal_262 = 0;
	bool bLocal_263 = 0;
	bool bLocal_264 = 0;
	bool bLocal_265 = 0;
	bool bLocal_266 = 0;
	bool bLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	var uLocal_271 = 16;
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
	var uLocal_435 = 0;
	struct<3> Local_436 = { 0, 0, 0 } ;
	struct<3> Local_439[4];
	struct<3> Local_452 = { 0, 0, 0 } ;
	int iLocal_455 = 0;
	bool bLocal_456 = 0;
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
	iLocal_18 = -1;
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
	Local_234 = { -1635.648f, 4737.801f, 52.4304f };
	Local_237 = { -1640.745f, 4696.386f, 39.279f };
	Local_49 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x4B4BD87E3D30C50D(11))
	{
		func_167();
	}
	if (func_125(Local_49, -1, 0, 0, 0))
	{
		func_122(-1);
	}
	else
	{
		unk_0x2F798BA2098FDADE();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0xD8AD97AB31334199() || unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), -1503.54f, 4934.923f, 114.2284f, 100f, 100f, 100f, 0, 1, 0)) || iLocal_47 == 2)
		{
			if (!func_121())
			{
				if (func_120())
				{
					func_167();
				}
			}
			unk_0x185B194BB229460F("RE_DGW", 0);
			switch (iLocal_47)
			{
				case 0:
					if (iLocal_455)
					{
						iLocal_47 = 1;
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
					switch (iLocal_46)
					{
						case 0:
							func_104();
							iLocal_46 = 1;
							break;
						
						case 1:
							func_104();
							func_73();
							if (iLocal_48 >= 6)
							{
								if (!func_72())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (bLocal_267)
										{
											func_71(&(uLocal_150[iVar0]), &(uLocal_194[iVar0]), &(uLocal_176[iVar0]), &(uLocal_204[iVar0]));
											func_66(uLocal_176[0], unk_0x08CA1B7A7938D598(unk_0x77F050A399DB77ED()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_66(uLocal_176[1], unk_0x08CA1B7A7938D598(unk_0x77F050A399DB77ED()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 2f, 0f, 1000, 0f);
											func_61(&(uLocal_150[iVar0]), &(uLocal_194[iVar0]), &(uLocal_176[iVar0]), &(uLocal_204[iVar0]));
										}
										else if (bLocal_264)
										{
											func_71(&(uLocal_150[iVar0]), &(uLocal_194[iVar0]), &(uLocal_166[iVar0]), &(uLocal_204[iVar0]));
											func_66(uLocal_166[0], unk_0x08CA1B7A7938D598(unk_0x77F050A399DB77ED()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_66(uLocal_166[1], unk_0x08CA1B7A7938D598(unk_0x77F050A399DB77ED()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 5f, 0f, 1000, 0f);
											func_61(&(uLocal_150[iVar0]), &(uLocal_194[iVar0]), &(uLocal_166[iVar0]), &(uLocal_204[iVar0]));
										}
										else if (bLocal_265)
										{
											func_71(&(uLocal_155[iVar0]), &(uLocal_199[iVar0]), &(uLocal_171[iVar0]), &(uLocal_209[iVar0]));
											func_66(uLocal_171[0], unk_0x08CA1B7A7938D598(unk_0x77F050A399DB77ED()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_66(uLocal_171[1], unk_0x08CA1B7A7938D598(unk_0x77F050A399DB77ED()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 5f, 0f, 1000, 0f);
											func_61(&(uLocal_155[iVar0]), &(uLocal_199[iVar0]), &(uLocal_171[iVar0]), &(uLocal_209[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_36();
								}
							}
							if (((unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED()) || unk_0xE1E91209C16784C8(unk_0x77F050A399DB77ED())) && !unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_234, 100f, 100f, 100f, 0, 1, 0)) && iLocal_48 < 2)
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
	
	if (iLocal_455 && !iLocal_262)
	{
		unk_0x3309AB731FDAB1DB();
		unk_0x4AAD01BBE039D160(1f);
		if (unk_0xC3B073777B46C61A(uLocal_181))
		{
			unk_0x296CDA10C549A502(&uLocal_181);
		}
		if (unk_0xC3B073777B46C61A(uLocal_182))
		{
			unk_0x296CDA10C549A502(&uLocal_182);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xC3B073777B46C61A(uLocal_194[iVar0]))
			{
				unk_0x296CDA10C549A502(&(uLocal_194[iVar0]));
			}
			if (unk_0xC3B073777B46C61A(uLocal_204[iVar0]))
			{
				unk_0x296CDA10C549A502(&(uLocal_204[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
				{
					if (!unk_0x1E80C02AC16B6622(uLocal_150[iVar0]))
					{
						if (unk_0x0C8E94332AE582B1(uLocal_150[iVar0], unk_0x77F050A399DB77ED(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xC3B073777B46C61A(uLocal_199[iVar0]))
			{
				unk_0x296CDA10C549A502(&(uLocal_199[iVar0]));
			}
			if (unk_0xC3B073777B46C61A(uLocal_209[iVar0]))
			{
				unk_0x296CDA10C549A502(&(uLocal_209[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
				{
					if (!unk_0x1E80C02AC16B6622(uLocal_155[iVar0]))
					{
						if (unk_0x0C8E94332AE582B1(uLocal_155[iVar0], unk_0x77F050A399DB77ED(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_46 >= 1)
		{
			unk_0xC8CA2CBC777B0FA7(5, 1);
			unk_0xC8CA2CBC777B0FA7(3, 1);
		}
		if (bLocal_266)
		{
			func_3(func_31(), 1, 25000);
		}
		iLocal_262 = 1;
	}
	if (!unk_0xDEB29D8C0ACA57B9(Local_234, 30f) && unk_0x2A488C176D52CCA5(func_2(unk_0x8ACD527A7E574590()), Local_234) > 300f)
	{
		func_167();
	}
}

Vector3 func_2(var uParam0)
{
	return unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(uParam0), 0);
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_99250.f_32503[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
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
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
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
					switch (unk_0xD8D50BE3C4300244())
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
	iVar5 = (Global_52834[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52834[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52834[iVar2] = 2147483647;
				}
				else
				{
					Global_52834[iVar2] = (Global_52834[iVar2] + iParam3);
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
				if ((Global_52834[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52834[iVar2];
			Global_52834[iVar2] = (Global_52834[iVar2] - iParam3);
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
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_99250.f_25017.f_233[iVar2 /*69*/]++;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_1++;
		if (Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_35700 == 15)
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
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52842[iVar0 /*3*/][0] = Global_99250.f_25017[iVar0];
		Global_52842.f_31[iVar0 /*3*/][0] = Global_99250.f_25017.f_11[iVar0];
		Global_52842.f_62[iVar0 /*3*/][0] = Global_99250.f_25017.f_22[iVar0];
		Global_52842.f_93[iVar0 /*3*/][0] = Global_99250.f_25017.f_33[iVar0];
		Global_52842.f_124[iVar0 /*3*/][0] = Global_99250.f_25017.f_44[iVar0];
		Global_52842.f_155[iVar0 /*3*/][0] = Global_99250.f_25017.f_55[iVar0];
		Global_52842.f_186[iVar0 /*3*/][0] = Global_99250.f_25017.f_66[iVar0];
		Global_52842.f_217[iVar0 /*3*/][0] = Global_99250.f_25017.f_77[iVar0];
		Global_52842.f_248[iVar0 /*3*/][0] = Global_99250.f_25017.f_88[iVar0];
		if (!bParam0)
		{
			Global_52842[iVar0 /*3*/][1] = Global_99250.f_25017[iVar0];
			Global_52842.f_31[iVar0 /*3*/][1] = Global_99250.f_25017.f_11[iVar0];
			Global_52842.f_62[iVar0 /*3*/][1] = Global_99250.f_25017.f_22[iVar0];
			Global_52842.f_93[iVar0 /*3*/][1] = Global_99250.f_25017.f_33[iVar0];
			Global_52842.f_124[iVar0 /*3*/][1] = Global_99250.f_25017.f_44[iVar0];
			Global_52842.f_155[iVar0 /*3*/][1] = Global_99250.f_25017.f_55[iVar0];
			Global_52842.f_186[iVar0 /*3*/][1] = Global_99250.f_25017.f_66[iVar0];
			Global_52842.f_217[iVar0 /*3*/][1] = Global_99250.f_25017.f_77[iVar0];
			Global_52842.f_248[iVar0 /*3*/][1] = Global_99250.f_25017.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52834[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x5716C8F12991E399(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x5716C8F12991E399(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x5716C8F12991E399(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_7(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x4C779B19E6DDCDA2())
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0) || unk_0xB56FEBC510E7E9DE(Global_2097152[func_9() /*10185*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		unk_0xA5F70A8B83BDFA49(&(Global_2097152[func_9() /*10185*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2B8B3581C4E63AD1("COUP_RED");
		unk_0x703D2B4B1C7E10B6(func_8(iParam0));
		unk_0xEF85B88DC049EA23(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0);
	}
	return unk_0xB56FEBC510E7E9DE(Global_2097152[func_9() /*10185*/].f_7698.f_10, iParam0);
}

int func_12(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xEB1F5947DDF281A3(27))
	{
		return 0;
	}
	if (unk_0xBA16CA557222A92B(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xBA16CA557222A92B(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xBA16CA557222A92B(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xBA16CA557222A92B(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x5716C8F12991E399(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0xEB1F5947DDF281A3(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25361 != 0 && !Global_69317)
	{
		return 0;
	}
	if (func_24(&Global_2558981))
	{
		if (func_22(&Global_2558981, iParam0))
		{
			return 0;
		}
		if (func_15(&Global_2558981, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x7F2415D4902EF64D(iParam0))
		{
			return 0;
		}
		if (unk_0xEB1F5947DDF281A3(iParam0))
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
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
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
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
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
	func_20(uParam0, (Global_2558980 - 0.5f));
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
	return Global_35700 == iParam0;
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
	iVar0 = unk_0xDE96DC4582CFD56F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CB31CF925F17754(iParam0, iParam1);
	}
	return 0;
}

void func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xBA16CA557222A92B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x5716C8F12991E399(iParam0, iVar0, 1);
}

void func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/])
	{
		unk_0xBA16CA557222A92B(Global_51402[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x5716C8F12991E399(Global_51402[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_30()
{
	int iVar0;
	
	if (unk_0x9C77CB51883D12D1())
	{
		unk_0xBA16CA557222A92B(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52834[0] == iVar0)
		{
			Global_52834[0] = iVar0;
		}
		unk_0xBA16CA557222A92B(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52834[1] == iVar0)
		{
			Global_52834[1] = iVar0;
		}
		unk_0xBA16CA557222A92B(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52834[2] == iVar0)
		{
			Global_52834[2] = iVar0;
		}
	}
}

int func_31()
{
	func_32();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_32()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_35(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_34(unk_0x77F050A399DB77ED());
			if (func_33(iVar0) && (!func_26(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_33(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
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
		return Global_99250.f_32503[iParam0 /*29*/];
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
	iLocal_47 = 3;
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
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

bool func_39(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
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
			Global_99250.f_29448.f_2 = 3;
		}
		if (func_47(iParam0, iParam1) != 322)
		{
			func_42(func_47(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_99238 = iParam1;
		if (Global_99236 == 0)
		{
			if (((Global_99239 == 1 || Global_99239 == 5) || Global_99239 == 11) || Global_99239 == 25)
			{
				func_41(2);
			}
			else if ((Global_99239 == 26 || Global_99239 == 8) || Global_99239 == 17)
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
	Global_99236 = iParam0;
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
	if (Global_99250.f_8812[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99250.f_8812[iParam0 /*12*/].f_6 == 11 || Global_99250.f_8812[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99250.f_8812[iParam0 /*12*/].f_5 = 1;
		Global_99250.f_8812[iParam0 /*12*/].f_10 = uParam1;
		Global_99250.f_8812[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_98986 = 0;
	Global_98987 = 0;
	Global_98988 = 0;
	Global_98989 = 0;
	Global_98990 = 0;
	Global_98991 = 0;
	Global_98992 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99250.f_8812.f_3853;
	Global_99250.f_8812.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99250.f_8812[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99250.f_8812[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98986++;
					fVar1 = (fVar1 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98987++;
					fVar2 = (fVar2 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98988++;
					fVar3 = (fVar3 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98989++;
					fVar4 = (fVar4 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98990++;
					fVar5 = (fVar5 + (Global_99250.f_8812[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98991++;
					fVar6 = (fVar6 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98992++;
					fVar7 = (fVar7 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98969 > 0)
	{
		if (Global_98986 == Global_98969)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98970 > 0)
	{
		if (Global_98987 == Global_98970)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98971 > 0)
	{
		if (Global_98988 == Global_98971)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98972 > 0)
	{
		if (Global_98989 == Global_98972)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98973 > 0)
	{
		if (((Global_98990 == Global_98973 || (Global_98973 * 10 / Global_98990) < 41) || Global_98990 > Global_98976) || Global_98990 == Global_98976)
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_8812.f_3856, 14))
			{
				if (Global_98990 == Global_98973)
				{
					unk_0x9E0BBE2E0E32750D(joaat("num_rndevents_completed"), Global_98973, 0);
					unk_0x573691DB812DC8AA(&(Global_99250.f_8812.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98974 > 0)
	{
		if (Global_98991 == Global_98974)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98975 > 0)
	{
		if (Global_98992 == Global_98975)
		{
			fVar7 = 5f;
		}
	}
	Global_99250.f_8812.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98990 > Global_98976 || Global_98990 == Global_98976)
	{
		iVar9 = Global_98976;
	}
	else
	{
		iVar9 = Global_98990;
	}
	unk_0x5716C8F12991E399(joaat("num_missions_completed"), Global_98986, 1);
	unk_0x5716C8F12991E399(joaat("num_missions_available"), Global_98969, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_completed"), Global_98987, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_available"), Global_98970, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_completed"), Global_98988, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_available"), Global_98971, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_completed"), Global_98989, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_available"), Global_98972, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_available"), Global_98976, 1);
	unk_0x5716C8F12991E399(joaat("num_misc_completed"), (Global_98992 + Global_98991), 1);
	unk_0x5716C8F12991E399(joaat("num_misc_available"), (Global_98975 + Global_98974), 1);
	Global_98993 = (Global_98986 * 100 / Global_98969);
	Global_98995 = ((Global_98988 + Global_98987) * 100 / (Global_98971 + Global_98970));
	Global_98994 = ((Global_98989 + iVar9) * 100 / (Global_98972 + Global_98976));
	Global_98996 = ((Global_98991 + Global_98992) * 100 / (Global_98974 + Global_98975));
	unk_0x46160091B23E8313(joaat("total_progress_made"), Global_99250.f_8812.f_3853, 1);
	unk_0x5716C8F12991E399(joaat("percent_story_missions"), Global_98993, 1);
	unk_0x5716C8F12991E399(joaat("percent_ambient_missions"), Global_98994, 1);
	unk_0x5716C8F12991E399(joaat("percent_oddjobs"), Global_98995, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853))
	{
		func_27(13, unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853));
	}
	if (!unk_0xB94B9782B4E786E9())
	{
		if (!Global_69317)
		{
			if (func_44() == 2 == 0 && !unk_0x4C779B19E6DDCDA2())
			{
				if (unk_0x01128ADE88E1C42B())
				{
					Global_98984 = 0;
				}
				if (!Global_55659)
				{
					func_38();
				}
			}
		}
	}
}

int func_44()
{
	return Global_25115;
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
	var uVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_46();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA1F1837E4A137310((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEDF2A618D8A93F7D((iParam0 - 0)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA1F1837E4A137310((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEDF2A618D8A93F7D((iParam0 - 192)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA1F1837E4A137310((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEDF2A618D8A93F7D((iParam0 - 513)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA1F1837E4A137310((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEDF2A618D8A93F7D((iParam0 - 705)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC9FE62843EA157C0((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEDF2A618D8A93F7D((iParam0 - 3111)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC9FE62843EA157C0((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEDF2A618D8A93F7D((iParam0 - 2919)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x1F3B95F25F60E511((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEDF2A618D8A93F7D((iParam0 - 4207)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x1F3B95F25F60E511((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEDF2A618D8A93F7D((iParam0 - 4335)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x1F3B95F25F60E511((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEDF2A618D8A93F7D((iParam0 - 6029)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_46()
{
	return Global_1312746;
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
		unk_0x573691DB812DC8AA(&(Global_99250.f_24863.f_150[iVar1]), iVar0);
	}
}

void func_50(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_51(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_51(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35D1CAD6ADAB6491(sParam0, ""))
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
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0x35D1CAD6ADAB6491(&(Global_99250.f_24863[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99250.f_24863.f_145 < 9)
	{
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_4), sParam1, 16);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_8 = (unk_0x3EAC9995EC220C5A() + iParam3);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_9 = iParam5;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_11 = iParam6;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_12 = uParam2;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_13 = iParam7;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_14 = iParam8;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = ((unk_0x3EAC9995EC220C5A() + iParam3) + iParam4);
		}
		else
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = -1;
		}
		Global_99250.f_24863.f_145++;
		func_52();
	}
}

void func_52()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_99250.f_24863.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[0])
			{
				Global_99250.f_24863.f_146[0] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[1])
			{
				Global_99250.f_24863.f_146[1] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[2])
			{
				Global_99250.f_24863.f_146[2] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_53()
{
	func_32();
	switch (Global_99250.f_1754.f_539.f_3549)
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
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_24863.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_55(int iParam0, int iParam1)
{
	unk_0x573691DB812DC8AA(&(Global_99250.f_29448.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x664B47C58CE8A0A4(), 64);
	uVar16 = func_58(Var0);
	return uVar16;
}

int func_58(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x39BD4614CF899227(&cParam0))
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
	if (Global_15712 != 0 || unk_0x1066B6347C40B301())
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
	
	if (unk_0x1F2158D615BC4B25(*uParam2))
	{
		if (unk_0x968EA16107097324(*uParam2, 0))
		{
			if (!unk_0x1E80C02AC16B6622(*uParam0))
			{
				if (unk_0xE5FADE1166052251(*uParam0, *uParam2, 0))
				{
					if (unk_0xC3B073777B46C61A(*uParam1))
					{
						unk_0x296CDA10C549A502(uParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0xC3B073777B46C61A(*uParam1))
				{
					*uParam1 = func_64(*uParam0, 1, 145);
				}
			}
			if (!unk_0xC3B073777B46C61A(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = func_62(unk_0xAF99169F0F5AE41D(*uParam2, 1), 0);
					unk_0x80553402FCEB9A9C(*uParam3, 1);
					unk_0x18EA864BF4963320(*uParam3, 9);
					unk_0x45C91EE3FC674072(*uParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { unk_0xAF014E234F6ECC62(*uParam3) };
				Var4 = { unk_0xAF99169F0F5AE41D(*uParam2, 1) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * unk_0x0000000050597EE2()));
				unk_0x15751CDFDEEBDEA2(*uParam3, Var1);
				if (iVar0 == 0)
				{
					unk_0x296CDA10C549A502(uParam3);
				}
			}
		}
		else
		{
			if (unk_0xC3B073777B46C61A(*uParam3))
			{
				unk_0x296CDA10C549A502(uParam3);
			}
			if (!unk_0x1E80C02AC16B6622(*uParam0))
			{
				if (!unk_0xC3B073777B46C61A(*uParam1))
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
	
	uVar0 = unk_0x1802011F6E339FFF(Param0);
	unk_0x61CD4A0BA23CE782(uVar0, func_63(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
	unk_0x49AFDB1662AE2A92(uVar0, iParam3);
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
	if ((iParam2 != 145 && unk_0xC3B073777B46C61A(uVar0)) && unk_0x03BBACB5FC5BF182(&(Global_99250.f_32503[iParam2 /*29*/].f_3)))
	{
		unk_0x45C91EE3FC674072(uVar0, &(Global_99250.f_32503[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_65(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1F2158D615BC4B25(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xBAA49E1DC5584B87(iParam0);
	if (unk_0xDD21A3DB256904E7(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_63(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
		}
		else
		{
			unk_0x80553402FCEB9A9C(uVar0, 2);
		}
	}
	else if (unk_0x94195F7CA642F937(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_63(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
		unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
	}
	else if (unk_0x0449EE7873816A89(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_63(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_66(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	struct<3> Var0;
	
	if (unk_0x1F2158D615BC4B25(iParam0) && unk_0x968EA16107097324(iParam0, 0))
	{
		if (((((((unk_0x1F2158D615BC4B25(iParam1) && iParam0 != iParam1) && !unk_0xD3FAF4AD23FDF2DA(unk_0xDF1398076E26B0E4(iParam1))) && !unk_0x4F32F86538FB8979(unk_0xDF1398076E26B0E4(iParam1))) && !unk_0x5FA5E5014A0AC183(unk_0xDF1398076E26B0E4(iParam1))) && !unk_0xD68DC1905B617ADD(unk_0xDF1398076E26B0E4(iParam1))) && unk_0x2D081DEC13E78241(iParam1)) && func_70(iParam0))
		{
			if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0xB91BD3EFC17D9612(*uParam2, *uParam3, Param7) };
				func_69(iParam1, uParam4, uParam5);
			}
			if (!unk_0x3D8234BA64B54520(iParam0))
			{
				*uParam6 = unk_0x3EAC9995EC220C5A();
			}
			else if ((unk_0x3EAC9995EC220C5A() - *uParam6) > iParam10)
			{
				if (func_68(iParam0, iParam1, 1) > fParam11 && unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!func_67(*uParam2))
					{
						if (!unk_0xDEB29D8C0ACA57B9(*uParam2, 3f))
						{
							unk_0xD1C12864812BFA0A(*uParam2, 1.5f, 0);
							unk_0x3B97B8A2AAD89A9D(*uParam2, 3f, 0, 0, 0, 0, 0);
							unk_0x0B5F372F57E469AC(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x2DA164E80FDEE7F2(iParam0, *uParam3);
							unk_0xC1D3820702043A43(iParam0);
							unk_0x6BD950A4FEA6D505(iParam0, 10f);
							unk_0xB99FFA77B01C4714(iParam0, 1, 1, 0);
							*uParam6 = unk_0x3EAC9995EC220C5A();
						}
						else
						{
							Var0 = { unk_0xB91BD3EFC17D9612(Local_113, uLocal_112, Param7) };
							if (!func_67(Var0))
							{
								if (!unk_0xDEB29D8C0ACA57B9(Var0, 2f))
								{
									unk_0xD1C12864812BFA0A(Var0, 1.5f, 0);
									unk_0x3B97B8A2AAD89A9D(Var0, 3f, 0, 0, 0, 0, 0);
									unk_0x0B5F372F57E469AC(iParam0, Var0, 1, 0, 0, 1);
									unk_0x2DA164E80FDEE7F2(iParam0, uLocal_112);
									unk_0xC1D3820702043A43(iParam0);
									unk_0x6BD950A4FEA6D505(iParam0, 10f);
									unk_0xB99FFA77B01C4714(iParam0, 1, 1, 0);
									*uParam6 = unk_0x3EAC9995EC220C5A();
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
			*uParam6 = unk_0x3EAC9995EC220C5A();
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
	
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	if (!unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 0) };
	}
	return unk_0xA2490B3CE6382FBB(Var0, Var3, iParam2);
}

void func_69(int iParam0, var uParam1, var uParam2)
{
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			*uParam1 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
			*uParam2 = unk_0x7578EBD2DA3F8DD2(iParam0);
		}
	}
}

int func_70(int iParam0)
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			if (!unk_0x9A2BADF8B8CE0E2A(iParam0, -1))
			{
				iVar0 = unk_0x07A8845F7F106A38(iParam0, -1);
				if (unk_0x1F2158D615BC4B25(iVar0))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
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
	
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (unk_0x1E80C02AC16B6622(*uParam0))
		{
			if (unk_0xC3B073777B46C61A(*uParam1))
			{
				unk_0x296CDA10C549A502(uParam1);
			}
			unk_0xA29D53AF339F4CD0(uParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0xB42592B9FFEB5EDE(*uParam0, 0))
			{
			}
			else if (unk_0x1F2158D615BC4B25(*uParam2))
			{
				if (unk_0x968EA16107097324(*uParam2, 0))
				{
					if (unk_0xE5FADE1166052251(*uParam0, *uParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x1F2158D615BC4B25(*uParam2))
	{
		if (unk_0x968EA16107097324(*uParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0xAB08E0AE50DC39E0(*uParam2);
				unk_0xF290DF09A88A384C(*uParam2);
				unk_0x41DB6F5436D4B4A9(*uParam2, 0);
				unk_0xB84D4C251623B60C(uParam2);
				if (unk_0xC3B073777B46C61A(*uParam3))
				{
					unk_0x296CDA10C549A502(uParam3);
				}
			}
		}
		else
		{
			unk_0xAB08E0AE50DC39E0(*uParam2);
			unk_0xF290DF09A88A384C(*uParam2);
			unk_0x41DB6F5436D4B4A9(*uParam2, 0);
			unk_0xB84D4C251623B60C(uParam2);
			if (unk_0xC3B073777B46C61A(*uParam3))
			{
				unk_0x296CDA10C549A502(uParam3);
			}
		}
	}
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (!bLocal_456)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x1F2158D615BC4B25(uLocal_150[iVar1]))
		{
			if (!unk_0x1E80C02AC16B6622(uLocal_150[iVar1]))
			{
				if (unk_0x0C8E94332AE582B1(uLocal_150[iVar1], unk_0x77F050A399DB77ED(), 200f, 200f, 200f, 0, 1, 0))
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
		if (unk_0x1F2158D615BC4B25(uLocal_155[iVar1]))
		{
			if (!unk_0x1E80C02AC16B6622(uLocal_155[iVar1]))
			{
				if (unk_0x0C8E94332AE582B1(uLocal_155[iVar1], unk_0x77F050A399DB77ED(), 200f, 200f, 200f, 0, 1, 0))
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
	
	if (bLocal_456)
	{
		if (bLocal_267)
		{
		}
		else if (bLocal_264)
		{
			if (!unk_0x1E80C02AC16B6622(uLocal_150[0]) && !unk_0x0B6E83A9A7ED3EBA(uLocal_166[0]))
			{
			}
			if (!unk_0x1E80C02AC16B6622(uLocal_150[1]) && !unk_0x0B6E83A9A7ED3EBA(uLocal_166[1]))
			{
			}
		}
		else
		{
			if (!unk_0x1E80C02AC16B6622(uLocal_155[0]) && !unk_0x0B6E83A9A7ED3EBA(uLocal_171[0]))
			{
			}
			if (!unk_0x1E80C02AC16B6622(uLocal_155[1]) && !unk_0x0B6E83A9A7ED3EBA(uLocal_171[1]))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x366FE43D1DBC68E6(uLocal_221[iVar0]);
			if (unk_0x1E80C02AC16B6622(uLocal_150[iVar0]))
			{
				if (unk_0xC3B073777B46C61A(uLocal_194[iVar0]))
				{
					unk_0x296CDA10C549A502(&(uLocal_194[iVar0]));
					iLocal_124++;
				}
			}
			else if (!unk_0xB42592B9FFEB5EDE(uLocal_150[iVar0], 0))
			{
				if (!unk_0xC3B073777B46C61A(uLocal_194[iVar0]))
				{
					uLocal_194[iVar0] = func_64(uLocal_150[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x366FE43D1DBC68E6(uLocal_221[iVar0]);
			if (unk_0x1E80C02AC16B6622(uLocal_155[iVar0]))
			{
				if (unk_0xC3B073777B46C61A(uLocal_199[iVar0]))
				{
					unk_0x296CDA10C549A502(&(uLocal_199[iVar0]));
					iLocal_125++;
				}
			}
			else if (!unk_0xB42592B9FFEB5EDE(uLocal_155[iVar0], 0))
			{
				if (!unk_0xC3B073777B46C61A(uLocal_199[iVar0]))
				{
					uLocal_199[iVar0] = func_64(uLocal_155[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_124 >= 4 && iLocal_125 >= 4)
		{
			func_36();
		}
	}
	func_89();
	func_88();
	switch (iLocal_48)
	{
		case 0:
			if (((unk_0xEE912E66BB8D66C3(unk_0x8ACD527A7E574590()) || !unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_234 + Vector(0f, 20f, 0f), 170f, 270f, 50f, 0, 1, 0)) || unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, 0, 1, 0)) || unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, 0, 1, 0))
			{
				if (!bLocal_267)
				{
					if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, 0, 1, 0) || unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, 0, 1, 0))
					{
						bLocal_267 = true;
					}
				}
				if (unk_0x47131342B8ABCAA4(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), &Local_240, 1, 1077936128, 0))
				{
					if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_240, 20f, 20f, 20f, 0, 1, 0))
					{
						unk_0xC8CA2CBC777B0FA7(5, 1);
						unk_0xC8CA2CBC777B0FA7(3, 1);
						unk_0xC1B1E9A034A63A62(0);
						func_86();
						iLocal_48 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 5000 || bLocal_267)
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_48 = 2;
			}
			break;
		
		case 2:
			if (bLocal_267)
			{
				if (unk_0x83666F9FB8FEBD4B() > 3500)
				{
					if (((!unk_0x0B6E83A9A7ED3EBA(uLocal_176[0]) && !unk_0x0B6E83A9A7ED3EBA(uLocal_176[1])) && !unk_0x1E80C02AC16B6622(uLocal_150[0])) && !unk_0x1E80C02AC16B6622(uLocal_150[1]))
					{
						unk_0x213DEA03167527BC(uLocal_150[0], uLocal_176[0], -1);
						unk_0x213DEA03167527BC(uLocal_150[1], uLocal_176[1], -1);
						unk_0xB424F90D6E96BCF8(uLocal_150[0], 3, 0);
						unk_0xB424F90D6E96BCF8(uLocal_150[1], 3, 0);
						unk_0xBF71A9BD63EAD423(uLocal_150[0], 0);
						unk_0xBF71A9BD63EAD423(uLocal_150[1], 0);
						iLocal_48 = 5;
					}
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 10000)
			{
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					if (!unk_0xCF9A4297B6D5AB5C(unk_0x77F050A399DB77ED(), joaat("rebel")))
					{
						iLocal_48 = 3;
					}
					else
					{
						iLocal_48 = 4;
					}
				}
				else
				{
					iLocal_48 = 3;
				}
			}
			break;
		
		case 3:
			Local_243 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			uLocal_132 = unk_0xA3746E7F17F47DC2(10, 15);
			if (!unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, 0, 1, 0))
			{
				if (unk_0xEBCB31D6E4BC1DCC(Local_243, uLocal_132, &(Local_439[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_439[1 /*3*/] = { Local_439[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0xDEB29D8C0ACA57B9(Local_439[0 /*3*/], 7f) && !unk_0xDEB29D8C0ACA57B9(Local_439[1 /*3*/], 7f))
					{
						if (unk_0x968EA16107097324(uLocal_166[0], 0))
						{
							unk_0x0B5F372F57E469AC(uLocal_166[0], Local_439[0 /*3*/], 1, 0, 0, 1);
							func_85(uLocal_166[0], uLocal_150[0]);
						}
						if (unk_0x968EA16107097324(uLocal_166[1], 0))
						{
							unk_0x0B5F372F57E469AC(uLocal_166[1], Local_439[1 /*3*/], 1, 0, 0, 1);
							func_85(uLocal_166[1], uLocal_150[1]);
						}
						if (func_31() == 0)
						{
							func_74(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_31() == 1)
						{
							func_74(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_31() == 2)
						{
							func_74(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_264 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_48 = 6;
					}
				}
			}
			break;
		
		case 4:
			Local_243 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			uLocal_132 = unk_0xA3746E7F17F47DC2(30, 35);
			if (!unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, 0, 1, 0))
			{
				if (unk_0xEBCB31D6E4BC1DCC(Local_243, uLocal_132, &(Local_439[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_439[1 /*3*/] = { Local_439[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0xDEB29D8C0ACA57B9(Local_439[0 /*3*/], 7f) && !unk_0xDEB29D8C0ACA57B9(Local_439[1 /*3*/], 7f))
					{
						if (unk_0x968EA16107097324(uLocal_171[0], 0))
						{
							unk_0x0B5F372F57E469AC(uLocal_171[0], Local_439[0 /*3*/], 1, 0, 0, 1);
							func_85(uLocal_171[0], uLocal_155[0]);
						}
						if (unk_0x968EA16107097324(uLocal_171[1], 0))
						{
							unk_0x0B5F372F57E469AC(uLocal_171[1], Local_439[1 /*3*/], 1, 0, 0, 1);
							func_85(uLocal_171[1], uLocal_155[1]);
						}
						if (func_31() == 0)
						{
							func_74(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_31() == 1)
						{
							func_74(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_31() == 2)
						{
							func_74(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_265 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_48 = 6;
					}
				}
			}
			break;
		
		case 5:
			Local_243 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			uLocal_132 = unk_0xA3746E7F17F47DC2(5, 10);
			if (unk_0xEBCB31D6E4BC1DCC(Local_243, uLocal_132, &(Local_439[0 /*3*/]), 1, 1077936128, 0))
			{
				Local_439[1 /*3*/] = { Local_439[0 /*3*/] + Vector(0f, 5f, 0f) };
				if (!unk_0xDEB29D8C0ACA57B9(Local_439[0 /*3*/], 7f) && !unk_0xDEB29D8C0ACA57B9(Local_439[1 /*3*/], 7f))
				{
					if (unk_0x968EA16107097324(uLocal_176[0], 0))
					{
						unk_0x0B5F372F57E469AC(uLocal_176[0], Local_439[0 /*3*/], 1, 0, 0, 1);
						func_85(uLocal_176[0], uLocal_150[0]);
					}
					if (unk_0x968EA16107097324(uLocal_176[1], 0))
					{
						unk_0x0B5F372F57E469AC(uLocal_176[1], Local_439[1 /*3*/], 1, 0, 0, 1);
						func_85(uLocal_176[1], uLocal_150[1]);
					}
					if (func_31() == 0)
					{
						func_74(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_31() == 1)
					{
						func_74(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_31() == 2)
					{
						func_74(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_264 = true;
					unk_0xC1B1E9A034A63A62(0);
					iLocal_48 = 6;
				}
			}
			break;
		
		case 6:
			if (func_60())
			{
				fLocal_120 = unk_0x1BB2D16654966BFB(1.5f, 2.5f);
				fLocal_121 = unk_0x1BB2D16654966BFB(2f, 4f);
				fLocal_122 = unk_0x1BB2D16654966BFB(0.1f, 2f);
				if (iLocal_134 < 5 && iLocal_135 < unk_0x3EAC9995EC220C5A())
				{
					Local_90 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
					unk_0xBC8DDA752FF15DF5((Local_90.f_0 + fLocal_120), (Local_90.f_1 + fLocal_121), (Local_90.f_2 + fLocal_122), (Local_90.f_0 - fLocal_120), (Local_90.f_1 - fLocal_121), Local_90.f_2, 10, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
					iLocal_135 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(200, 500));
					iLocal_134++;
				}
			}
			if (iLocal_134 > 4)
			{
				iLocal_48 = 7;
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
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_75(sParam2, iParam3, 0);
}

int func_75(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xC9AB825AA4821BDA(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
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
		if (unk_0x1066B6347C40B301())
		{
			return 0;
		}
		if (func_82(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_81();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0xA5F70A8B83BDFA49(&Global_2283, 20);
			unk_0xA5F70A8B83BDFA49(&Global_2284, 17);
			unk_0xA5F70A8B83BDFA49(&Global_2285, 0);
			if (bParam2)
			{
				func_80();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (func_79())
				{
					return 0;
				}
				if (unk_0x8408B4A4C23B6D99(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0x04CAC901929627FE(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xE89300623E310620(unk_0x77F050A399DB77ED(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xAB5BBCD9D3B6625D(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
					if (unk_0x7E0A8E0015B69AA4(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0xB32A2CF30C462699(unk_0x8ACD527A7E574590()))
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
				switch (Global_14413.f_1)
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
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 9))
				{
					return 0;
				}
			}
			func_77();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_76();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC9AB825AA4821BDA(0);
	Global_15712 = 1;
}

void func_77()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0xA5F70A8B83BDFA49(&Global_2284, 16);
}

int func_78()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_79()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar1, 1);
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x294E2F2AFFA6421E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0xEE92F60CC00FFBD6(unk_0x77F050A399DB77ED(), 78, 1))
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
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_31();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_81()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_82(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
}

void func_83()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if ((unk_0xEA9C2A206A86B744() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(1);
		Global_15712 = 6;
		return;
	}
}

void func_84(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_85(int iParam0, var uParam1)
{
	unk_0xB92C428B448B51A4(uParam0, 0);
	unk_0xC1D3820702043A43(uParam0);
	Local_436 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	Local_452 = { Local_243 - Local_436 };
	unk_0x2DA164E80FDEE7F2(iParam0, unk_0xA4F14A9B0DDEB91E(Local_452.f_0, Local_452.f_1));
	if (bLocal_267)
	{
		if (!unk_0x1E80C02AC16B6622(uParam1))
		{
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				unk_0x8421FA22CDDAD772(uParam1, unk_0x77F050A399DB77ED());
				unk_0x4EDE34FBADD967A6(1);
				if (!unk_0x1E80C02AC16B6622(uParam1))
				{
					unk_0x49C5A89DE03CDC7F(uParam1, 32, 1);
				}
			}
			else
			{
				unk_0x277D239A78FD3309(uParam1, iParam0, unk_0x77F050A399DB77ED(), 6, 20f, 786469, -1f, -1f, 1);
			}
			if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
			{
				unk_0x6BD950A4FEA6D505(iParam0, unk_0x2AA05370067DC5AC(unk_0x77F050A399DB77ED()));
			}
		}
	}
	else if (!unk_0x1E80C02AC16B6622(uParam1))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			unk_0x8421FA22CDDAD772(uParam1, unk_0x77F050A399DB77ED());
		}
		else
		{
			unk_0x277D239A78FD3309(uParam1, iParam0, unk_0x77F050A399DB77ED(), 2, 100f, 786469, -1f, -1f, 1);
		}
		unk_0x6BD950A4FEA6D505(iParam0, unk_0x2AA05370067DC5AC(unk_0x77F050A399DB77ED()));
	}
}

void func_86()
{
	int iVar0;
	
	uLocal_166[0] = unk_0x2EEA15C0C12C8CDE(joaat("rebel"), -1595.964f, 4732.479f, 0f, 305f, 1, 1);
	unk_0x8D429A827A931AC9(uLocal_166[0], 1, 0);
	unk_0xB99FFA77B01C4714(uLocal_166[0], 1, 1, 0);
	unk_0x9918CD095D8B0583(uLocal_166[0], 2);
	unk_0x79FC96D30AEDF69A(uLocal_166[0], 1);
	unk_0xB92C428B448B51A4(uLocal_166[0], 1);
	unk_0xE1BEFB80AC811E83(uLocal_166[0], "49GNL112");
	uLocal_166[1] = unk_0x2EEA15C0C12C8CDE(joaat("rebel"), -1570.34f, 4733.755f, 0f, 305f, 1, 1);
	unk_0x8D429A827A931AC9(uLocal_166[1], 1, 0);
	unk_0xB99FFA77B01C4714(uLocal_166[1], 1, 1, 0);
	unk_0x9918CD095D8B0583(uLocal_166[1], 2);
	unk_0x79FC96D30AEDF69A(uLocal_166[1], 1);
	unk_0xB92C428B448B51A4(uLocal_166[1], 1);
	unk_0xE1BEFB80AC811E83(uLocal_166[1], "47TMS703");
	uLocal_176[0] = unk_0x2EEA15C0C12C8CDE(joaat("sanchez"), Vector(0f, 4732.479f, -1595.964f) + Vector(10f, 10f, 10f), 305f, 1, 1);
	unk_0x8D429A827A931AC9(uLocal_176[0], 1, 0);
	unk_0xB99FFA77B01C4714(uLocal_176[0], 1, 1, 0);
	unk_0x9918CD095D8B0583(uLocal_176[0], 2);
	unk_0x79FC96D30AEDF69A(uLocal_176[0], 1);
	unk_0xB92C428B448B51A4(uLocal_176[0], 1);
	unk_0xE1BEFB80AC811E83(uLocal_176[0], "49GNL112");
	uLocal_176[1] = unk_0x2EEA15C0C12C8CDE(joaat("sanchez"), Vector(0f, 4733.755f, -1570.34f) + Vector(10f, 10f, 10f), 305f, 1, 1);
	unk_0x8D429A827A931AC9(uLocal_176[1], 1, 0);
	unk_0xB99FFA77B01C4714(uLocal_176[1], 1, 1, 0);
	unk_0x9918CD095D8B0583(uLocal_176[1], 2);
	unk_0x79FC96D30AEDF69A(uLocal_176[1], 1);
	unk_0xB92C428B448B51A4(uLocal_176[1], 1);
	unk_0xE1BEFB80AC811E83(uLocal_176[1], "47TMS703");
	uLocal_150[0] = unk_0x73B8FD017061F240(uLocal_166[0], 26, joaat("g_m_m_chigoon_02"), -1, 1, 1);
	uLocal_150[1] = unk_0x73B8FD017061F240(uLocal_166[1], 26, joaat("g_m_m_chigoon_02"), -1, 1, 1);
	if (!bLocal_267)
	{
		uLocal_150[2] = unk_0x73B8FD017061F240(uLocal_166[0], 26, joaat("g_m_m_chigoon_02"), 0, 1, 1);
		uLocal_150[3] = unk_0x73B8FD017061F240(uLocal_166[1], 26, joaat("g_m_m_chigoon_02"), 0, 1, 1);
	}
	uLocal_171[0] = unk_0x2EEA15C0C12C8CDE(joaat("bobcatxl"), -1356.281f, 5000f, 0f, 125.2811f, 1, 1);
	unk_0x8D429A827A931AC9(uLocal_171[0], 1, 0);
	unk_0xB99FFA77B01C4714(uLocal_171[0], 1, 1, 0);
	unk_0x9918CD095D8B0583(uLocal_171[0], 2);
	unk_0x79FC96D30AEDF69A(uLocal_171[0], 1);
	unk_0xB92C428B448B51A4(uLocal_171[0], 1);
	unk_0xE1BEFB80AC811E83(uLocal_171[0], "49GNL112");
	uLocal_171[1] = unk_0x2EEA15C0C12C8CDE(joaat("bobcatxl"), -1373.589f, 5000f, 0f, 125.459f, 1, 1);
	unk_0x8D429A827A931AC9(uLocal_171[1], 1, 0);
	unk_0xB99FFA77B01C4714(uLocal_171[1], 1, 1, 0);
	unk_0x9918CD095D8B0583(uLocal_171[1], 2);
	unk_0x79FC96D30AEDF69A(uLocal_171[1], 1);
	unk_0xB92C428B448B51A4(uLocal_171[1], 1);
	unk_0xE1BEFB80AC811E83(uLocal_171[1], "47TMS703");
	uLocal_155[0] = unk_0x73B8FD017061F240(uLocal_171[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
	uLocal_155[1] = unk_0x73B8FD017061F240(uLocal_171[1], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
	uLocal_155[2] = unk_0x73B8FD017061F240(uLocal_171[0], 26, joaat("g_m_y_salvagoon_03"), 0, 1, 1);
	uLocal_155[3] = unk_0x73B8FD017061F240(uLocal_171[1], 26, joaat("g_m_y_salvagoon_03"), 0, 1, 1);
	unk_0x72FAE653AFC04E97("RE_deal1", &iLocal_268);
	unk_0x72FAE653AFC04E97("RE_deal2", &iLocal_269);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x1E80C02AC16B6622(uLocal_150[iVar0]))
		{
			unk_0x054E434B0AECBDA6(uLocal_150[iVar0], iLocal_268);
			unk_0x8D429A827A931AC9(uLocal_150[iVar0], 1, 0);
			if (bLocal_267)
			{
				unk_0x1592B6D205958934(uLocal_150[0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
				if (!unk_0x1E80C02AC16B6622(uLocal_150[1]))
				{
					unk_0x1592B6D205958934(uLocal_150[1], joaat("weapon_pistol"), -1, 1, 1);
				}
				unk_0x15E0B3143320FB58(uLocal_150[iVar0], 15);
				unk_0xB424F90D6E96BCF8(uLocal_150[iVar0], 3, 0);
			}
			else
			{
				unk_0x1592B6D205958934(uLocal_150[iVar0], joaat("weapon_pistol"), -1, 1, 1);
				unk_0x15E0B3143320FB58(uLocal_150[iVar0], 13);
			}
			unk_0xB424F90D6E96BCF8(uLocal_150[iVar0], 13, 1);
			unk_0xB424F90D6E96BCF8(uLocal_150[iVar0], 2, 1);
			unk_0xB424F90D6E96BCF8(uLocal_150[iVar0], 1, 1);
			func_87(&uLocal_271, 4, uLocal_150[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x1E80C02AC16B6622(uLocal_150[iVar0]))
		{
			unk_0x054E434B0AECBDA6(uLocal_155[iVar0], iLocal_269);
			unk_0x8D429A827A931AC9(uLocal_155[iVar0], 1, 0);
			if (bLocal_267)
			{
				unk_0x1592B6D205958934(uLocal_150[0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
				if (!unk_0x1E80C02AC16B6622(uLocal_150[1]))
				{
					unk_0x1592B6D205958934(uLocal_150[1], joaat("weapon_pistol"), -1, 1, 1);
				}
				unk_0x15E0B3143320FB58(uLocal_150[iVar0], 15);
				unk_0xB424F90D6E96BCF8(uLocal_150[iVar0], 3, 0);
				func_87(&uLocal_271, 4, uLocal_150[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				unk_0x1592B6D205958934(uLocal_155[iVar0], joaat("weapon_pistol"), -1, 1, 1);
				unk_0x15E0B3143320FB58(uLocal_155[iVar0], 13);
				func_87(&uLocal_271, 5, uLocal_155[iVar0], "REDGWSalvadoran", 0, 1);
			}
			unk_0xB424F90D6E96BCF8(uLocal_155[iVar0], 13, 1);
			unk_0xB424F90D6E96BCF8(uLocal_155[iVar0], 2, 1);
			unk_0xB424F90D6E96BCF8(uLocal_155[iVar0], 1, 1);
		}
		iVar0++;
	}
	unk_0x329C14474C072D19(3, iLocal_268, iLocal_269);
	unk_0x329C14474C072D19(3, iLocal_269, iLocal_268);
	unk_0x329C14474C072D19(3, iLocal_268, joaat("player"));
	unk_0x329C14474C072D19(3, iLocal_269, joaat("player"));
	unk_0xFB4F6722A032A0F0(joaat("g_m_m_chigoon_02"));
	unk_0xFB4F6722A032A0F0(joaat("g_m_y_salvagoon_03"));
	unk_0xFB4F6722A032A0F0(joaat("rebel"));
	unk_0xFB4F6722A032A0F0(joaat("bobcatxl"));
	unk_0xFB4F6722A032A0F0(joaat("sanchez"));
	unk_0xFB4F6722A032A0F0(joaat("a_c_rottweiler"));
	bLocal_456 = true;
	iLocal_46 = 1;
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
	if (!Global_69317)
	{
		if (!unk_0x1E80C02AC16B6622(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x5A0EAF1DC22647FF(uParam2, 0);
			}
			else
			{
				unk_0x5A0EAF1DC22647FF(uParam2, 1);
			}
		}
		if (!unk_0x1E80C02AC16B6622(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xFAF696F3B3892233(uParam2, 0);
			}
			else
			{
				unk_0xFAF696F3B3892233(uParam2, 1);
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
	
	switch (iLocal_130)
	{
		case 0:
			if (bLocal_264)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (!unk_0x1E80C02AC16B6622(uLocal_150[iVar0]))
					{
						if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), uLocal_150[iVar0], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_130 = 3;
						}
					}
					iVar0++;
				}
			}
			if (bLocal_265)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!unk_0x1E80C02AC16B6622(uLocal_155[iVar1]))
					{
						if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), uLocal_155[iVar1], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_130 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			unk_0x329C14474C072D19(5, iLocal_268, iLocal_269);
			unk_0x329C14474C072D19(5, iLocal_269, iLocal_268);
			unk_0x329C14474C072D19(5, iLocal_268, joaat("player"));
			unk_0x329C14474C072D19(5, iLocal_269, joaat("player"));
			if (bLocal_264)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0x1E80C02AC16B6622(uLocal_150[iVar2]))
					{
						if ((!unk_0x1CC086F95707C553(uLocal_150[iVar2], 0) && unk_0x49C650267EDFEBC6(uLocal_150[iVar2], 579380604) != 1) && unk_0x49C650267EDFEBC6(uLocal_150[iVar2], 579380604) != 0)
						{
							unk_0xE2CB8488CFA42209(uLocal_150[iVar2]);
							unk_0xFBE25F0677076CF9(uLocal_150[iVar2], unk_0x77F050A399DB77ED(), 0, 16);
							unk_0x112CD899A3BEE719(uLocal_150[iVar2], 1);
						}
					}
					iVar2++;
				}
				if (func_74(&uLocal_271, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_127 = unk_0x3EAC9995EC220C5A();
					iLocal_130 = 4;
				}
			}
			if (bLocal_265)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!unk_0x1E80C02AC16B6622(uLocal_155[iVar3]))
					{
						if ((!unk_0x1CC086F95707C553(uLocal_155[iVar3], 0) && unk_0x49C650267EDFEBC6(uLocal_155[iVar3], 579380604) != 1) && unk_0x49C650267EDFEBC6(uLocal_155[iVar3], 579380604) != 0)
						{
							unk_0xE2CB8488CFA42209(uLocal_155[iVar3]);
							unk_0xFBE25F0677076CF9(uLocal_155[iVar3], unk_0x77F050A399DB77ED(), 0, 16);
							unk_0x112CD899A3BEE719(uLocal_155[iVar3], 1);
						}
					}
					iVar3++;
				}
				if (func_74(&uLocal_271, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_127 = unk_0x3EAC9995EC220C5A();
					iLocal_130 = 4;
				}
			}
			break;
	}
}

void func_89()
{
	switch (iLocal_128)
	{
		case 0:
			if (!unk_0x1E80C02AC16B6622(uLocal_136))
			{
				if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_237, 7f, 7f, 10f, 0, 1, 0))
				{
					func_91();
					unk_0x4EDE34FBADD967A6(0);
					func_74(&uLocal_271, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					unk_0xD0C8DD55C652567F(uLocal_136, unk_0x77F050A399DB77ED(), -1, 2048, 2);
					if (!unk_0xC3B073777B46C61A(uLocal_182))
					{
						uLocal_182 = func_90(uLocal_214);
					}
					iLocal_127 = unk_0x3EAC9995EC220C5A();
					iLocal_128++;
				}
			}
			else
			{
				iLocal_128++;
			}
			break;
	}
	switch (iLocal_129)
	{
		case 1:
			if (!unk_0x1E80C02AC16B6622(uLocal_136))
			{
				if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), uLocal_136, 10f, 10f, 6f, 0, 1, 0))
				{
					if (!func_60())
					{
						func_74(&uLocal_271, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!unk_0x1E80C02AC16B6622(uLocal_136))
						{
							unk_0xD0C8DD55C652567F(uLocal_136, unk_0x77F050A399DB77ED(), -1, 2048, 2);
							unk_0x5AE11BC36633DE4E(0);
							iLocal_129++;
						}
					}
				}
			}
			else
			{
				unk_0x5AE11BC36633DE4E(0);
				iLocal_129++;
			}
			break;
		
		case 2:
			if (!func_60() || unk_0xC9D9444186B5A374() > 4000)
			{
				if (!unk_0x1E80C02AC16B6622(uLocal_136))
				{
					unk_0x9F48F299B333353E(uLocal_136, 0);
					unk_0x296CDA10C549A502(&uLocal_183);
				}
				if (unk_0xC9D9444186B5A374() > 7000)
				{
					if (!unk_0x1E80C02AC16B6622(uLocal_137[6]))
					{
						unk_0x9F48F299B333353E(uLocal_137[6], 0);
						unk_0x296CDA10C549A502(&(uLocal_184[6]));
					}
				}
				if (unk_0xC9D9444186B5A374() > 9000)
				{
					if (!unk_0x1E80C02AC16B6622(uLocal_137[7]))
					{
						unk_0x9F48F299B333353E(uLocal_137[7], 0);
						unk_0x296CDA10C549A502(&(uLocal_184[7]));
					}
					iLocal_129++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x1E80C02AC16B6622(uLocal_137[6]))
			{
				unk_0x9F48F299B333353E(uLocal_137[6], 0);
			}
			if (!unk_0x1E80C02AC16B6622(uLocal_137[7]))
			{
				unk_0x9F48F299B333353E(uLocal_137[7], 0);
			}
			if (!unk_0x1E80C02AC16B6622(uLocal_136))
			{
				unk_0x9F48F299B333353E(uLocal_136, 0);
			}
			break;
	}
}

int func_90(var uParam0)
{
	var uVar0;
	
	if (!unk_0xAE5A4FE344CB20A9(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x713298C4C81DB8B5(uParam0);
	unk_0x61CD4A0BA23CE782(uVar0, func_63(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
	return uVar0;
}

void func_91()
{
	Global_14578 = 0;
	func_92();
}

void func_92()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
	}
}

void func_93()
{
	int iVar0;
	
	if (unk_0x62E51B6A256A51C2(uLocal_214))
	{
		if (unk_0xC3B073777B46C61A(uLocal_181))
		{
			unk_0x296CDA10C549A502(&uLocal_181);
		}
		if (unk_0xC3B073777B46C61A(uLocal_182))
		{
			unk_0x296CDA10C549A502(&uLocal_182);
		}
		iLocal_129 = 1;
		iLocal_47 = 2;
		iLocal_46 = 0;
	}
	else
	{
		unk_0x4AAD01BBE039D160(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x1F2158D615BC4B25(uLocal_137[iVar0]))
			{
				if (!unk_0x1E80C02AC16B6622(uLocal_137[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (unk_0xC3B073777B46C61A(uLocal_184[iVar0]))
				{
					unk_0x296CDA10C549A502(&(uLocal_184[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_147)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_147[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_121())
		{
			if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_52[7 /*3*/], 110f, 95f, 40f, 0, 1, 0))
			{
				if (unk_0xC3B073777B46C61A(uLocal_181))
				{
					unk_0x296CDA10C549A502(&uLocal_181);
				}
				if ((!unk_0xC3B073777B46C61A(uLocal_183) && !unk_0xC3B073777B46C61A(uLocal_184[6])) && !unk_0xC3B073777B46C61A(uLocal_184[7]))
				{
					uLocal_183 = func_64(uLocal_136, 1, 145);
					uLocal_184[6] = func_64(uLocal_137[6], 1, 145);
					uLocal_184[7] = func_64(uLocal_137[7], 1, 145);
				}
				unk_0x9555F96101785581(uLocal_183, 0);
				unk_0x9555F96101785581(uLocal_184[6], 0);
				unk_0x9555F96101785581(uLocal_184[7], 0);
				func_94(1);
			}
		}
		if (!unk_0x1E80C02AC16B6622(uLocal_137[6]))
		{
			if (((((unk_0x49C650267EDFEBC6(uLocal_137[6], 1785177548) != 1 && unk_0x49C650267EDFEBC6(uLocal_137[6], 1785177548) != 0) || unk_0x01CB02EE3F3F9481(uLocal_137[6])) || unk_0x32F9EB04315127B4(unk_0x77F050A399DB77ED(), uLocal_137[6])) || unk_0x5A12CB727B35559D(uLocal_137[6])) || unk_0x7073FA9C2D0A60C3(uLocal_137[6]))
			{
				unk_0x9F48F299B333353E(uLocal_137[6], 0);
			}
		}
		if (!unk_0x1E80C02AC16B6622(uLocal_137[7]))
		{
			if (((((unk_0x49C650267EDFEBC6(uLocal_137[7], 1785177548) != 1 && unk_0x49C650267EDFEBC6(uLocal_137[7], 1785177548) != 0) || unk_0x01CB02EE3F3F9481(uLocal_137[7])) || unk_0x32F9EB04315127B4(unk_0x77F050A399DB77ED(), uLocal_137[7])) || unk_0x5A12CB727B35559D(uLocal_137[7])) || unk_0x7073FA9C2D0A60C3(uLocal_137[7]))
			{
				unk_0x9F48F299B333353E(uLocal_137[7], 0);
			}
		}
		if (!unk_0x1E80C02AC16B6622(uLocal_136))
		{
			if (((((unk_0x49C650267EDFEBC6(uLocal_136, 1785177548) != 1 && unk_0x49C650267EDFEBC6(uLocal_136, 1785177548) != 0) || unk_0x01CB02EE3F3F9481(uLocal_136)) || unk_0x32F9EB04315127B4(unk_0x77F050A399DB77ED(), uLocal_136)) || unk_0x5A12CB727B35559D(uLocal_136)) || unk_0x7073FA9C2D0A60C3(uLocal_136))
			{
				unk_0x9F48F299B333353E(uLocal_136, 0);
			}
		}
		if (!bLocal_263)
		{
		}
	}
	func_89();
	switch (iLocal_131)
	{
		case 0:
			if (!unk_0x1E80C02AC16B6622(uLocal_137[6]))
			{
				if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), unk_0xAF99169F0F5AE41D(uLocal_137[6], 1) + Vector(0f, 2.5f, 0f), 9f, 5f, 5f, 0, 1, 0) && unk_0xAD3F74EEDD16A143(unk_0x77F050A399DB77ED(), uLocal_137[6]))
				{
					unk_0xD0C8DD55C652567F(uLocal_137[6], unk_0x77F050A399DB77ED(), -1, 2048, 2);
					unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), uLocal_137[6], 4000, 2048, 2);
					func_74(&uLocal_271, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_127 = unk_0x3EAC9995EC220C5A();
					iLocal_131 = 1;
				}
			}
			if (!unk_0x1E80C02AC16B6622(uLocal_137[7]))
			{
				if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), unk_0xAF99169F0F5AE41D(uLocal_137[7], 1) + Vector(0f, 3f, 0f), 9f, 7f, 5f, 0, 1, 0) && unk_0xAD3F74EEDD16A143(unk_0x77F050A399DB77ED(), uLocal_137[7]))
				{
					unk_0xD0C8DD55C652567F(uLocal_137[7], unk_0x77F050A399DB77ED(), -1, 2048, 2);
					unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), uLocal_137[7], 4000, 2048, 2);
					func_74(&uLocal_271, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_127 = unk_0x3EAC9995EC220C5A();
					iLocal_131 = 1;
				}
			}
			if (unk_0x1E80C02AC16B6622(uLocal_137[6]) && unk_0x1E80C02AC16B6622(uLocal_137[7]))
			{
				iLocal_131 = 2;
			}
			break;
		
		case 1:
			if (unk_0xC3B073777B46C61A(uLocal_183))
			{
				unk_0x9555F96101785581(uLocal_183, 1);
			}
			if (unk_0xC3B073777B46C61A(uLocal_184[6]))
			{
				unk_0x9555F96101785581(uLocal_184[6], 1);
			}
			if (unk_0xC3B073777B46C61A(uLocal_184[7]))
			{
				unk_0x9555F96101785581(uLocal_184[7], 1);
			}
			iLocal_126 = unk_0x3EAC9995EC220C5A();
			if ((iLocal_126 - iLocal_127) > 6000 && !func_60())
			{
				if (!unk_0x1E80C02AC16B6622(uLocal_137[6]))
				{
				}
				if (!unk_0x1E80C02AC16B6622(uLocal_137[7]))
				{
				}
				if (!unk_0xC3B073777B46C61A(uLocal_182))
				{
					uLocal_182 = func_90(uLocal_214);
				}
				unk_0x4AAD01BBE039D160(0f);
				if (!func_121())
				{
					func_94(1);
				}
				iLocal_131 = 2;
			}
			break;
	}
}

int func_94(int iParam0)
{
	if (func_98())
	{
		Global_99240 = 1;
		Global_99237 = unk_0x3EAC9995EC220C5A();
		if (func_48(Global_99239))
		{
			func_95(0);
		}
		unk_0x275546117AF1F063(1, "RE_TITLE");
		if (iParam0 && func_48(Global_99239))
		{
			unk_0x358EC418194057C1();
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
			if (Global_99250.f_29448.f_2 < 3)
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_96(func_97(iParam0), -1);
					Global_99250.f_29448.f_2++;
					unk_0x573691DB812DC8AA(&Global_99246, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB56FEBC510E7E9DE(Global_99246, 1))
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_96(func_97(iParam0), -1);
					Global_99250.f_29448.f_3++;
					unk_0x573691DB812DC8AA(&Global_99246, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB56FEBC510E7E9DE(Global_99246, 2))
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_96(func_97(iParam0), -1);
					Global_99250.f_29448.f_4++;
					unk_0x573691DB812DC8AA(&Global_99246, 2);
				}
			}
			break;
	}
}

void func_96(var uParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(uParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
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
	switch (func_99(&Global_25174, 0, 5, 0, unk_0x8EC1FFF6B789C28E()))
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
		if (Global_88917.f_44 == 1)
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
		Global_35664++;
		*uParam0 = Global_35664;
		unk_0xB0B3F015E2C68AA2(unk_0x7F3E348C0892D8D2(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x6F0D8BCEF1D3C17F(8);
		}
		Global_35700 = iParam2;
		Global_35662 = *uParam0;
		Global_35663 = iParam4;
		Global_35661 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35661 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35661)
			{
				if (Global_35667[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35662 == *uParam0)
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
		if (Global_35661 == 8)
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		Global_35667[Global_35661 /*4*/] = Global_35664;
		Global_35667[Global_35661 /*4*/].f_1 = iParam1;
		Global_35667[Global_35661 /*4*/].f_2 = iParam2;
		Global_35667[Global_35661 /*4*/].f_3 = 0;
		Global_35661++;
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
	
	if (Global_35661 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35661)
	{
		if (Global_35667[iVar0 /*4*/] == *uParam0)
		{
			Global_35667[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_101(int iParam0)
{
	return func_102(iParam0, Global_35700);
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
	if (Global_35700 == 15)
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
	
	if (!unk_0x0B6E83A9A7ED3EBA(uLocal_160[0]))
	{
		if (unk_0x07A8845F7F106A38(uLocal_160[0], -1) == uLocal_137[8])
		{
			unk_0x9D170F1E92158A89(uLocal_160[0], 60000f);
			unk_0x9006D80185A371A5(uLocal_160[0]);
		}
	}
	if (!unk_0x1E80C02AC16B6622(uLocal_136))
	{
		if (unk_0xCD7683F575A67B31(uLocal_136))
		{
			unk_0x9F48F299B333353E(uLocal_136, 0);
		}
	}
	else if (unk_0xC3B073777B46C61A(uLocal_183))
	{
		unk_0x296CDA10C549A502(&uLocal_183);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xDEB29D8C0ACA57B9(Local_234, 30f) && unk_0x2A488C176D52CCA5(func_2(unk_0x8ACD527A7E574590()), Local_234) > 300f)
		{
			if (unk_0x1F2158D615BC4B25(uLocal_137[iVar0]))
			{
				unk_0xA29D53AF339F4CD0(&(uLocal_137[iVar0]));
			}
		}
		if (unk_0x1E80C02AC16B6622(uLocal_137[iVar0]))
		{
			if (unk_0xC3B073777B46C61A(uLocal_184[iVar0]))
			{
				unk_0x296CDA10C549A502(&(uLocal_184[iVar0]));
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
	
	unk_0xC60576ADD1AECA45(joaat("g_m_m_chigoon_02"));
	unk_0xC60576ADD1AECA45(joaat("g_m_y_salvagoon_03"));
	unk_0xC60576ADD1AECA45(joaat("rebel"));
	unk_0xC60576ADD1AECA45(joaat("bobcatxl"));
	unk_0xC60576ADD1AECA45(joaat("sanchez"));
	unk_0xC60576ADD1AECA45(joaat("a_c_rottweiler"));
	unk_0xC60576ADD1AECA45(joaat("prop_security_case_01"));
	unk_0x6E2E777C1AD81C36("random@dealgonewrong");
	unk_0x6E2E777C1AD81C36("random@dealgonewrongdead_peds");
	if ((((((((unk_0x4A4B6FD54C499B7D(joaat("g_m_m_chigoon_02")) && unk_0x4A4B6FD54C499B7D(joaat("g_m_y_salvagoon_03"))) && unk_0x4A4B6FD54C499B7D(joaat("rebel"))) && unk_0x4A4B6FD54C499B7D(joaat("bobcatxl"))) && unk_0x4A4B6FD54C499B7D(joaat("sanchez"))) && unk_0x4A4B6FD54C499B7D(joaat("a_c_rottweiler"))) && unk_0x4A4B6FD54C499B7D(joaat("prop_security_case_01"))) && unk_0x5263DE3D9A17A86F("random@dealgonewrong")) && unk_0x5263DE3D9A17A86F("random@dealgonewrongdead_peds"))
	{
		unk_0x2277155D92E898D2(Local_234 - Vector(150f, 150f, 150f), Local_234 + Vector(150f, 150f, 150f), 0, 1, 1, 1);
		unk_0x5416146016E39BF7(joaat("bobcatxl"), 1);
		unk_0x5416146016E39BF7(joaat("rebel"), 1);
		unk_0xC8CA2CBC777B0FA7(5, 0);
		unk_0xC8CA2CBC777B0FA7(3, 0);
		uLocal_160[0] = unk_0x2EEA15C0C12C8CDE(joaat("bobcatxl"), -1626.94f, 4729.889f, 51.3463f, 347.1188f, 1, 1);
		unk_0x8D429A827A931AC9(uLocal_160[0], 1, 0);
		unk_0xC1D3820702043A43(uLocal_160[0]);
		unk_0xB99FFA77B01C4714(uLocal_160[0], 1, 1, 0);
		unk_0x9918CD095D8B0583(uLocal_160[0], 2);
		unk_0x46C662B7638C9190(uLocal_160[0], 500f);
		unk_0x42691817311F7969(uLocal_160[0], 500f);
		unk_0x90908B101918C346(uLocal_160[0], 1, 1);
		unk_0xAD078C0B06C631F5(uLocal_160[0], 0, 0, 1148846080);
		unk_0x8A78AABC0529785F(uLocal_160[0], 6);
		unk_0x2AFB88A145F284B6(uLocal_160[0], "RADIO_06_COUNTRY");
		unk_0xE1BEFB80AC811E83(uLocal_160[0], "76JON418");
		unk_0x6C33EFBF6D00C25E(uLocal_160[0], 1);
		uLocal_160[1] = unk_0x2EEA15C0C12C8CDE(joaat("rebel"), -1619.432f, 4747.792f, 52.7502f, 146.6017f, 1, 1);
		unk_0x8D429A827A931AC9(uLocal_160[1], 1, 0);
		unk_0xC1D3820702043A43(uLocal_160[1]);
		unk_0xB99FFA77B01C4714(uLocal_160[1], 1, 1, 0);
		unk_0x9918CD095D8B0583(uLocal_160[1], 2);
		unk_0x46C662B7638C9190(uLocal_160[1], 600f);
		unk_0x42691817311F7969(uLocal_160[1], 400f);
		unk_0x90908B101918C346(uLocal_160[1], 1, 1);
		unk_0x90908B101918C346(uLocal_160[1], 2, 1);
		unk_0x90908B101918C346(uLocal_160[1], 3, 0);
		unk_0x90908B101918C346(uLocal_160[1], 4, 0);
		unk_0x8A78AABC0529785F(uLocal_160[1], 6);
		unk_0x2AFB88A145F284B6(uLocal_160[1], "RADIO_06_COUNTRY");
		unk_0xE1BEFB80AC811E83(uLocal_160[1], "79ERK121");
		unk_0x6C33EFBF6D00C25E(uLocal_160[1], 1);
		unk_0x4B7A42A794939C70(uLocal_160[1], 1);
		uLocal_160[2] = unk_0x2EEA15C0C12C8CDE(joaat("bobcatxl"), -1636.216f, 4748.061f, 51.5484f, 199.3236f, 1, 1);
		unk_0xE1BEFB80AC811E83(uLocal_160[2], "83JOH802");
		unk_0x8D429A827A931AC9(uLocal_160[2], 1, 0);
		unk_0xC1D3820702043A43(uLocal_160[2]);
		unk_0xB99FFA77B01C4714(uLocal_160[2], 1, 1, 0);
		unk_0x9918CD095D8B0583(uLocal_160[2], 2);
		unk_0x46C662B7638C9190(uLocal_160[2], 60f);
		unk_0x42691817311F7969(uLocal_160[2], 1000f);
		unk_0x90908B101918C346(uLocal_160[2], 1, 0);
		unk_0xAD078C0B06C631F5(uLocal_160[2], 1, 0, 1148846080);
		uLocal_160[3] = unk_0x2EEA15C0C12C8CDE(joaat("rebel"), -1641.578f, 4736.783f, 52.5984f, 278.1865f, 1, 1);
		unk_0xE1BEFB80AC811E83(uLocal_160[3], "85TOR114");
		unk_0x8D429A827A931AC9(uLocal_160[3], 1, 0);
		unk_0xC1D3820702043A43(uLocal_160[3]);
		unk_0xB99FFA77B01C4714(uLocal_160[3], 1, 1, 0);
		unk_0x9918CD095D8B0583(uLocal_160[3], 2);
		unk_0x46C662B7638C9190(uLocal_160[3], 500f);
		unk_0x42691817311F7969(uLocal_160[3], 500f);
		unk_0x90908B101918C346(uLocal_160[3], 1, 0);
		unk_0x90908B101918C346(uLocal_160[3], 2, 0);
		unk_0x90908B101918C346(uLocal_160[3], 3, 0);
		unk_0x90908B101918C346(uLocal_160[3], 4, 0);
		unk_0xAD078C0B06C631F5(uLocal_160[3], 0, 0, 1148846080);
		unk_0xAD078C0B06C631F5(uLocal_160[3], 5, 0, 1148846080);
		if (!unk_0xAE5A4FE344CB20A9(uLocal_214))
		{
			iVar0 = 0;
			unk_0x573691DB812DC8AA(&iVar0, 1);
			unk_0x573691DB812DC8AA(&iVar0, 3);
			unk_0x573691DB812DC8AA(&iVar0, 4);
			uLocal_214 = unk_0x224F6FCD2D1EABBD(joaat("pickup_money_case"), Local_237, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
			unk_0xFB4F6722A032A0F0(joaat("prop_security_case_01"));
		}
		Local_246[0 /*3*/] = { -1640.411f, 4740.702f, 52.6218f };
		Local_246[1 /*3*/] = { -1624.664f, 4746.569f, 51.541f };
		Local_246[2 /*3*/] = { -1626.339f, 4734.232f, 51.6176f };
		Local_246[3 /*3*/] = { -1634.297f, 4741.213f, 51.9737f };
		Local_246[4 /*3*/] = { -1644.717f, 4736.446f, 52.3014f };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!unk_0xAE5A4FE344CB20A9(uLocal_215[iVar1]))
			{
				iVar2 = 0;
				unk_0x573691DB812DC8AA(&iVar2, 3);
				unk_0x573691DB812DC8AA(&iVar2, 4);
				if (iVar1 < 2)
				{
					uLocal_215[iVar1] = unk_0x668D94B26744D7B2(joaat("pickup_weapon_sawnoffshotgun"), Local_246[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
				else if (iVar1 == 4)
				{
					uLocal_215[iVar1] = unk_0x224F6FCD2D1EABBD(joaat("pickup_weapon_assaultrifle"), Local_246[iVar1 /*3*/], 90f, 50f, 0f, 0, 50, 2, 1, 0);
				}
				else
				{
					uLocal_215[iVar1] = unk_0x668D94B26744D7B2(joaat("pickup_weapon_pistol"), Local_246[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
			}
			iVar1++;
		}
		Local_52[0 /*3*/] = { -1636.535f, 4708.455f, 46.09f };
		fLocal_80[0] = 177.0024f;
		Local_52[1 /*3*/] = { -1621.19f, 4744.868f, 52.4254f };
		fLocal_80[1] = 146.9645f;
		Local_52[2 /*3*/] = { -1622.795f, 4735.975f, 51.474f };
		fLocal_80[2] = 48.6546f;
		Local_52[3 /*3*/] = { -1632.695f, 4742.906f, 51.8604f };
		fLocal_80[3] = 155.0678f;
		Local_52[4 /*3*/] = { -1629.544f, 4738.6f, 52.1784f };
		fLocal_80[4] = 278.3085f;
		Local_52[5 /*3*/] = { -1634.764f, 4745.188f, 51.3926f };
		fLocal_80[5] = 270.3501f;
		Local_52[7 /*3*/] = { -1628.321f, 4731.502f, 51.7644f };
		fLocal_80[7] = 352.9167f;
		Local_52[6 /*3*/] = { -1640.311f, 4738.4f, 52.2f };
		fLocal_80[6] = 34.1111f;
		Local_117 = { -1641.735f, 4692.13f, 39.394f };
		fLocal_123 = 326.7277f;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (iVar1 <= 3)
			{
				uLocal_137[iVar1] = unk_0x6665DCC708A346F3(22, joaat("g_m_y_salvagoon_03"), Local_52[iVar1 /*3*/], fLocal_80[iVar1], 1, 1);
				unk_0x1706625EBCDDEBF9(uLocal_137[iVar1], 227, 1);
			}
			else
			{
				uLocal_137[iVar1] = unk_0x6665DCC708A346F3(22, joaat("g_m_m_chigoon_02"), Local_52[iVar1 /*3*/], fLocal_80[iVar1], 1, 1);
			}
			iVar1++;
		}
		iLocal_147[0] = unk_0x6665DCC708A346F3(26, joaat("a_c_rottweiler"), -1635.005f, 4737.181f, 53.4995f, 33.4155f, 1, 1);
		iLocal_147[1] = unk_0x6665DCC708A346F3(26, joaat("a_c_rottweiler"), -1625.215f, 4741.119f, 52.5762f, 316.2733f, 1, 1);
		iVar1 = 0;
		while (iVar1 < iLocal_147)
		{
			unk_0x9AAEF18E6D4F7CB8(iLocal_147[iVar1], 1);
			unk_0x5817B24FA3E70BC6(iLocal_147[iVar1], 1, 0);
			unk_0x1706625EBCDDEBF9(iLocal_147[iVar1], 227, 1);
			Local_90 = { unk_0xAF99169F0F5AE41D(iLocal_147[iVar1], 1) };
			Local_93 = { Local_90.f_0, (Local_90.f_1 - 2f), (Local_90.f_2 - 0.5f) };
			Local_96 = { Local_90.f_0, (Local_90.f_1 + 50f), (Local_90.f_2 - 0.5f) };
			unk_0xBC8DDA752FF15DF5(Local_93, Local_96, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iVar1++;
		}
		unk_0x5218A76678A43A34(uLocal_137[0], "random@dealgonewrongdead_peds", "ped_b", -1635.928f, 4707.941f, 46.383f, -29.25f, 12.25f, 171.75f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x5218A76678A43A34(uLocal_137[1], "random@dealgonewrongdead_peds", "ped_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x5218A76678A43A34(uLocal_137[2], "random@dealgonewrongdead_peds", "ped_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x5218A76678A43A34(uLocal_137[3], "random@dealgonewrongdead_peds", "ped_c", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x5218A76678A43A34(uLocal_137[4], "random@dealgonewrongdead_peds", "ped_d", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x5218A76678A43A34(uLocal_137[5], "random@dealgonewrongdead_peds", "ped_e", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x5218A76678A43A34(iLocal_147[0], "random@dealgonewrongdead_peds", "dog_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x5218A76678A43A34(iLocal_147[1], "random@dealgonewrongdead_peds", "dog_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x921596BE3FF1D89B(50f);
		func_107();
		unk_0x921596BE3FF1D89B(1f);
		if (unk_0x968EA16107097324(uLocal_160[0], 0))
		{
			uLocal_137[8] = unk_0x73B8FD017061F240(uLocal_160[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
			unk_0x8D429A827A931AC9(uLocal_137[8], 1, 0);
			unk_0x1FA81C0096F721DC(uLocal_137[8], 1);
			unk_0x9F48F299B333353E(uLocal_137[8], 0);
		}
		if (!unk_0xC3B073777B46C61A(uLocal_181))
		{
		}
		unk_0x72FAE653AFC04E97("re_DealGoneWrong", &uLocal_270);
		uLocal_137[6] = unk_0x6665DCC708A346F3(22, joaat("g_m_m_chigoon_02"), Local_52[6 /*3*/], fLocal_80[6], 1, 1);
		func_87(&uLocal_271, 4, uLocal_137[6], "REDGWChinese", 0, 1);
		unk_0x9526D9575C237F2F(uLocal_137[6], 1);
		unk_0x79FC96D30AEDF69A(uLocal_137[6], 1);
		unk_0x054E434B0AECBDA6(uLocal_137[6], uLocal_270);
		uVar3 = unk_0xFCF0CDCAF2761068(Local_52[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, 0);
		unk_0x3C6CCFC07FD12077(uLocal_137[6], uVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x33AD23CCE6A61B0F(uVar3, 1);
		unk_0x112CD899A3BEE719(uLocal_137[6], 1);
		unk_0x1706625EBCDDEBF9(uLocal_137[6], 227, 1);
		uLocal_137[7] = unk_0x6665DCC708A346F3(22, joaat("g_m_y_salvagoon_03"), -1640.311f, 4738.4f, 50.2f, fLocal_80[7], 1, 1);
		func_87(&uLocal_271, 5, uLocal_137[7], "REDGWSalvadoran", 0, 1);
		unk_0x9526D9575C237F2F(uLocal_137[7], 1);
		unk_0x79FC96D30AEDF69A(uLocal_137[7], 1);
		unk_0x054E434B0AECBDA6(uLocal_137[7], iLocal_270);
		uVar4 = unk_0xFCF0CDCAF2761068(Local_52[7 /*3*/] + Vector(0.92f, 0.65f, -0.65f), 0f, 0f, 34.1111f, 0);
		unk_0x3C6CCFC07FD12077(uLocal_137[7], uVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x33AD23CCE6A61B0F(uVar4, 1);
		unk_0xEE4C4CE6312DD1EF(uVar4, 0.5f);
		unk_0x112CD899A3BEE719(uLocal_137[7], 1);
		unk_0x1706625EBCDDEBF9(uLocal_137[7], 227, 1);
		uLocal_136 = unk_0x6665DCC708A346F3(22, joaat("g_m_m_chigoon_02"), Local_117, fLocal_123, 1, 1);
		func_87(&uLocal_271, 4, uLocal_136, "REDGWChinese", 0, 1);
		unk_0x9526D9575C237F2F(uLocal_136, 1);
		unk_0x054E434B0AECBDA6(uLocal_136, iLocal_270);
		uVar5 = unk_0xFCF0CDCAF2761068(Local_117, 7.5f, -12.75f, 51.5f, 0);
		unk_0x3C6CCFC07FD12077(uLocal_136, uVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x33AD23CCE6A61B0F(uVar5, 1);
		unk_0x188DB3CD3BF87211(uLocal_136, 4f, 18f, 326.7277f, 0, 1);
		unk_0x112CD899A3BEE719(uLocal_136, 1);
		unk_0x1706625EBCDDEBF9(uLocal_136, 227, 1);
		unk_0x329C14474C072D19(5, iLocal_270, joaat("player"));
		if (func_31() == 0)
		{
			func_87(&uLocal_271, 0, unk_0x77F050A399DB77ED(), "MICHAEL", 0, 1);
		}
		if (func_31() == 1)
		{
			func_87(&uLocal_271, 1, unk_0x77F050A399DB77ED(), "FRANKLIN", 0, 1);
		}
		if (func_31() == 2)
		{
			func_87(&uLocal_271, 2, unk_0x77F050A399DB77ED(), "TREVOR", 0, 1);
		}
		uLocal_221[0] = unk_0xFD0453065AAB2899(1110, -1632.953f, 4745.359f, 51.7876f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[1] = unk_0xFD0453065AAB2899(1110, -1634.87f, 4744.458f, 51.8233f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[2] = unk_0xFD0453065AAB2899(1110, -1636.971f, 4736.595f, 52.2814f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[3] = unk_0xFD0453065AAB2899(1110, -1625.561f, 4741.241f, 51.7102f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[4] = unk_0xFD0453065AAB2899(1110, -1621.533f, 4744.576f, 51.9093f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[5] = unk_0xFD0453065AAB2899(1110, -1621.963f, 4737.039f, 51.4174f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[6] = unk_0xFD0453065AAB2899(1110, -1628.517f, 4736.906f, 51.8207f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[7] = unk_0xFD0453065AAB2899(1110, -1629.324f, 4732.146f, 51.6947f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[8] = unk_0xFD0453065AAB2899(1110, -1640.287f, 4738.437f, 52.1756f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[9] = unk_0xFD0453065AAB2899(1110, -1640.055f, 4701.995f, 41.2428f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[10] = unk_0xFD0453065AAB2899(1110, -1641.924f, 4692.236f, 38.3762f, 0f, 0f, -1f, func_106(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(uLocal_137[iVar1]))
			{
				unk_0x9AAEF18E6D4F7CB8(uLocal_137[iVar1], 1);
				unk_0x276A2E2A62252234(uLocal_137[iVar1], 0, 0.3f, 0.6f, 3);
				unk_0x276A2E2A62252234(uLocal_137[iVar1], 0, 0.65f, 0.6f, 3);
				unk_0x4EDE34FBADD967A6(unk_0xA3746E7F17F47DC2(100, 500));
				if (iVar1 <= 5)
				{
					if (unk_0xC3B073777B46C61A(uLocal_184[iVar1]))
					{
						unk_0x296CDA10C549A502(&(uLocal_184[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (unk_0x1F2158D615BC4B25(unk_0xD8D1111EA0CFD1DB()))
		{
			if (!unk_0x335346A332B62CA2(unk_0xD8D1111EA0CFD1DB()))
			{
				unk_0x8D429A827A931AC9(unk_0xD8D1111EA0CFD1DB(), 1, 0);
			}
		}
		iLocal_455 = 1;
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
		if (unk_0x1F2158D615BC4B25(uLocal_160[iVar0]))
		{
			Local_99 = { unk_0x03C14E8A9400F2A9(uLocal_160[iVar0], 0f, 0f, 0.5f) };
		}
		iLocal_133 = 0;
		while (iLocal_133 < 5)
		{
			fLocal_120 = unk_0x1BB2D16654966BFB(1.5f, 2.5f);
			fLocal_121 = unk_0x1BB2D16654966BFB(2f, 4f);
			fLocal_122 = unk_0x1BB2D16654966BFB(0.1f, 2f);
			unk_0x4EDE34FBADD967A6(0);
			Local_102 = { (Local_99.f_0 - fLocal_120), (Local_99.f_1 - fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { (Local_99.f_0 + fLocal_120), (Local_99.f_1 + fLocal_121), Local_99.f_2 };
			unk_0xBC8DDA752FF15DF5(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_102 = { (Local_99.f_0 + fLocal_120), (Local_99.f_1 + fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { (Local_99.f_0 - fLocal_120), (Local_99.f_1 - fLocal_121), Local_99.f_2 };
			unk_0xBC8DDA752FF15DF5(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_102 = { (Local_99.f_0 + fLocal_120), (Local_99.f_1 - fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { (Local_99.f_0 - fLocal_120), (Local_99.f_1 + fLocal_121), Local_99.f_2 };
			unk_0xBC8DDA752FF15DF5(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_102 = { (Local_99.f_0 - fLocal_120), (Local_99.f_1 + fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { (Local_99.f_0 + fLocal_120), (Local_99.f_1 - fLocal_121), Local_99.f_2 };
			unk_0xBC8DDA752FF15DF5(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_102 = { Local_99.f_0, (Local_99.f_1 + fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { Local_99.f_0, (Local_99.f_1 - fLocal_121), Local_99.f_2 };
			unk_0xBC8DDA752FF15DF5(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iLocal_133++;
		}
		iVar0++;
	}
}

int func_108()
{
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_119())
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
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (func_33(func_31()))
		{
			iVar36 = func_53();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar32 /*6*/], 2) && !unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar32 /*6*/], 3))
				{
					func_110(iVar32, &Var0);
					fVar35 = unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), Var0.f_6, 1);
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
	if (unk_0x0AAC2160036975D9(&cVar2))
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
	return Global_98968 > 0;
}

int func_117()
{
	if (Global_88361 != -1)
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 20);
	}
	return 0;
}

int func_119()
{
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x93920F49CB9AD85E() == 1f)
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
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_119())
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
	if ((Global_99239 == func_57() && unk_0x74E62879922177A9()) && Global_99240)
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
	unk_0x13FDF28AC5D80885(0);
	unk_0x62E4698C0067789A(1);
	Global_99236 = 0;
	func_123();
}

void func_123()
{
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			unk_0x5416146016E39BF7(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)), 1);
		}
		unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 32, 0);
	}
}

void func_124(int iParam0)
{
	Global_99239 = iParam0;
}

int func_125(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_136046)
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
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			Var1 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_119())
			{
				return 0;
			}
		}
		if (!Global_99250.f_7703)
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
		if (Global_99239 != -1)
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
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
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
		if (!func_161(Global_99250.f_29448.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x3EAC9995EC220C5A() - Global_99241) < 150000)
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
		if (unk_0x21DB261DC1511E40())
		{
			return 0;
		}
		if (unk_0x74E62879922177A9())
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
		if (unk_0x5C31634D1DECF73C(unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED())))
		{
			if ((unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(377.153f, -717.567f, 10.0536f) || unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(320.9934f, 265.2515f, 82.1221f)) || unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_150(0, 0))
		{
			return 0;
		}
		if (Global_25261)
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
				Var5 = { Global_99250.f_1754.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_99250.f_1754.f_539.f_1524[iVar4];
				if (func_149(iVar8))
				{
					if (func_127(iVar4))
					{
						if (!func_126(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_99250.f_1754.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_139(unk_0xB56FEBC510E7E9DE(iParam0, 31), -1, 1)) + 2011;
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
	
	func_148(&uVar0, unk_0x624CC88A8815545E());
	func_147(&uVar0, unk_0xD3D98375D5CA69E4());
	func_146(&uVar0, unk_0x5C5157A539753532());
	func_145(&uVar0, unk_0xCB12BC5A618B995B());
	func_144(&uVar0, unk_0x9746D90F14C930B9());
	func_143(&uVar0, unk_0xD45B57A596913560());
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
	if (unk_0xB56FEBC510E7E9DE(Global_99250.f_29448.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_151(int iParam0)
{
	int iVar0;
	
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
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
						if (((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_159()) || Global_98297) || Global_25117) || func_158()) || func_82(8, -1)) || func_157()) || func_156()) || func_155()) || func_154()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1) || func_159()) || Global_25117) || func_158()) || func_82(8, -1)) || func_155()) || func_157()) || func_156()) || func_154()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_159()) || Global_98297) || Global_25117) || func_158()) || func_82(8, -1)) || func_155()) || func_157()) || func_156()) || func_154()) || Global_99250.f_6306.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_159()) || Global_98297) || Global_25117) || func_158()) || func_82(8, -1)) || func_157()) || func_156()) || func_154()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_159() || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || func_82(8, -1)) || func_154()) || func_153()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_82(8, -1) || func_157()) || func_156()) || func_153()) || func_152())
						{
							return 0;
						}
						if ((unk_0xA153A26DF49EBCC0() && unk_0xD802C73A0EC92D7F() != 3) && unk_0x9F0EFBAAF424E79A() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
						{
							if ((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_159()) || Global_25117) || func_158()) || func_82(8, -1)) || func_156()) || func_155()) || func_154()) || Global_99250.f_6306.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || func_159()) || func_156()) || Global_98297) || Global_25117) || func_158()) || Global_36750) || func_82(8, -1)) || func_155()) || func_153()) || func_154()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0)) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1)) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0xCDC007CB03638977(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_159()) || Global_98297) || Global_25117) || func_158()) || func_82(8, -1)) || func_155()) || func_153()) || func_157()) || func_156()) || func_154())
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
	return Global_91145.f_1;
}

int func_153()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_154()
{
	if (unk_0xB1A77D5C890711F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_155()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
	{
		return 1;
	}
	return 0;
}

bool func_156()
{
	return Global_91158.f_297 > 0;
}

bool func_157()
{
	return Global_91158.f_296 > 0;
}

var func_158()
{
	return Global_1315910;
}

int func_159()
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

int func_160()
{
	func_80();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
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
	return Global_99250.f_6306.f_919[iParam0];
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
		bVar1 = unk_0xB56FEBC510E7E9DE(Global_99250.f_29448, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB56FEBC510E7E9DE(Global_99250.f_29448.f_1, iVar0);
	}
	return bVar1;
}

int func_165()
{
	var uVar0;
	
	if (Global_25265)
	{
		uVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if (unk_0x968EA16107097324(uVar0, 0))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x07A8845F7F106A38(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_166()
{
	int iVar0;
	
	if (unk_0x9C77CB51883D12D1())
	{
		if (unk_0xF5783AD1B5945861())
		{
			if (unk_0x05E0388968EC9D08())
			{
				unk_0xBA16CA557222A92B(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x573691DB812DC8AA(&iVar0, 2);
				unk_0x573691DB812DC8AA(&iVar0, 4);
				unk_0x573691DB812DC8AA(&iVar0, 6);
				unk_0x573691DB812DC8AA(&Global_25, 2);
				unk_0x573691DB812DC8AA(&Global_25, 4);
				unk_0x573691DB812DC8AA(&Global_25, 6);
				unk_0x5716C8F12991E399(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x5B08E2B84948C788())
				{
					iVar0 = unk_0x824EA95BCC498CB4(866);
					unk_0x573691DB812DC8AA(&iVar0, 0);
					unk_0xF49776B60F784AFF(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_136298 == 2)
	{
		return 1;
	}
	else if (Global_136298 == 3)
	{
		return 0;
	}
	if (unk_0x5B08E2B84948C788())
	{
		if (unk_0xB56FEBC510E7E9DE(unk_0x824EA95BCC498CB4(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_167()
{
	int iVar0;
	
	if (iLocal_455 && !iLocal_262)
	{
		unk_0x3309AB731FDAB1DB();
		unk_0x4AAD01BBE039D160(1f);
		if (unk_0xC3B073777B46C61A(uLocal_181))
		{
			unk_0x296CDA10C549A502(&uLocal_181);
		}
		if (unk_0xC3B073777B46C61A(uLocal_182))
		{
			unk_0x296CDA10C549A502(&uLocal_182);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xC3B073777B46C61A(uLocal_194[iVar0]))
			{
				unk_0x296CDA10C549A502(&(uLocal_194[iVar0]));
			}
			if (unk_0xC3B073777B46C61A(uLocal_204[iVar0]))
			{
				unk_0x296CDA10C549A502(&(uLocal_204[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
				{
					if (!unk_0x1E80C02AC16B6622(uLocal_150[iVar0]))
					{
						if (unk_0x0C8E94332AE582B1(uLocal_150[iVar0], unk_0x77F050A399DB77ED(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xC3B073777B46C61A(uLocal_199[iVar0]))
			{
				unk_0x296CDA10C549A502(&(uLocal_199[iVar0]));
			}
			if (unk_0xC3B073777B46C61A(uLocal_209[iVar0]))
			{
				unk_0x296CDA10C549A502(&(uLocal_209[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
				{
					if (!unk_0x1E80C02AC16B6622(uLocal_155[iVar0]))
					{
						if (unk_0x0C8E94332AE582B1(uLocal_155[iVar0], unk_0x77F050A399DB77ED(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_46 >= 1)
		{
			unk_0xC8CA2CBC777B0FA7(5, 1);
			unk_0xC8CA2CBC777B0FA7(3, 1);
		}
		if (bLocal_266)
		{
			func_3(func_31(), 1, 25000);
		}
	}
	func_168(-1);
	unk_0x2F798BA2098FDADE();
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
		unk_0x275546117AF1F063(0, 0);
		Global_99241 = unk_0x3EAC9995EC220C5A();
		func_171(30000);
		StringCopy(&cVar0, func_170(Global_99239, 1), 64);
		if (func_56(Global_99239) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_99238, 64);
		}
		unk_0x0C0A547C7A0D11B0(&cVar0, Global_99236, (unk_0x3EAC9995EC220C5A() - Global_99237), 0);
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_99246, 0) && Global_99250.f_29448.f_2 < 3)
	{
		unk_0xA5F70A8B83BDFA49(&Global_99246, 0);
	}
	func_169(&Global_25174);
	Global_99240 = 0;
	func_124(-1);
}

void func_169(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35662)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35661 = 0;
	Global_35663 = 0;
	Global_35700 = 15;
	Global_55656 = 0;
	Global_55657 = 0;
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
	Global_36251 = (unk_0x3EAC9995EC220C5A() + iParam0);
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
	Global_99250.f_29448.f_43[iParam0] = *uParam1;
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
	func_144(uParam0, iParam5);
	func_145(uParam0, iParam4);
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

