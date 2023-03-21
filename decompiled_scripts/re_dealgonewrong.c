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
	if (unk_0x76BF814AB8D4CAB8(11))
	{
		func_170();
	}
	if (func_128(Local_49, -1, 0, 0, 0))
	{
		func_125(-1);
	}
	else
	{
		unk_0x810C5D6462DD69E6();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0x6E65FD9B611945AD() || unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), -1503.54f, 4934.923f, 114.2284f, 100f, 100f, 100f, 0, 1, 0)) || iLocal_47 == 2)
		{
			if (!func_124())
			{
				if (func_123())
				{
					func_170();
				}
			}
			unk_0x89FD0BC32FAB9F88("RE_DGW", 0);
			switch (iLocal_47)
			{
				case 0:
					if (iLocal_455)
					{
						iLocal_47 = 1;
					}
					else
					{
						if (func_111())
						{
							func_170();
						}
						func_108();
					}
					break;
				
				case 1:
					func_107();
					func_96();
					break;
				
				case 2:
					switch (iLocal_46)
					{
						case 0:
							func_107();
							iLocal_46 = 1;
							break;
						
						case 1:
							func_107();
							func_76();
							if (iLocal_48 >= 6)
							{
								if (!func_75())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (bLocal_267)
										{
											func_74(&(uLocal_150[iVar0]), &(uLocal_194[iVar0]), &(uLocal_176[iVar0]), &(uLocal_204[iVar0]));
											func_69(uLocal_176[0], unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_69(uLocal_176[1], unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 2f, 0f, 1000, 0f);
											func_64(&(uLocal_150[iVar0]), &(uLocal_194[iVar0]), &(uLocal_176[iVar0]), &(uLocal_204[iVar0]));
										}
										else if (bLocal_264)
										{
											func_74(&(uLocal_150[iVar0]), &(uLocal_194[iVar0]), &(uLocal_166[iVar0]), &(uLocal_204[iVar0]));
											func_69(uLocal_166[0], unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_69(uLocal_166[1], unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 5f, 0f, 1000, 0f);
											func_64(&(uLocal_150[iVar0]), &(uLocal_194[iVar0]), &(uLocal_166[iVar0]), &(uLocal_204[iVar0]));
										}
										else if (bLocal_265)
										{
											func_74(&(uLocal_155[iVar0]), &(uLocal_199[iVar0]), &(uLocal_171[iVar0]), &(uLocal_209[iVar0]));
											func_69(uLocal_171[0], unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_69(uLocal_171[1], unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 5f, 0f, 1000, 0f);
											func_64(&(uLocal_155[iVar0]), &(uLocal_199[iVar0]), &(uLocal_171[iVar0]), &(uLocal_209[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_41();
								}
							}
							if (((unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()) || unk_0xFD166B55AB97EE31(unk_0x18F7BE9ACB7D08F4())) && !unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_234, 100f, 100f, 100f, 0, 1, 0)) && iLocal_48 < 2)
							{
								func_41();
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
			func_170();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_455 && !iLocal_262)
	{
		unk_0x6D88D1D62502CEFC();
		unk_0x8BB3FA32294185BB(1f);
		if (unk_0xE769D9B5158D0F11(uLocal_181))
		{
			unk_0x40D517D991458154(&uLocal_181);
		}
		if (unk_0xE769D9B5158D0F11(uLocal_182))
		{
			unk_0x40D517D991458154(&uLocal_182);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xE769D9B5158D0F11(uLocal_194[iVar0]))
			{
				unk_0x40D517D991458154(&(uLocal_194[iVar0]));
			}
			if (unk_0xE769D9B5158D0F11(uLocal_204[iVar0]))
			{
				unk_0x40D517D991458154(&(uLocal_204[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					if (!unk_0x0FAE113CE72ED842(uLocal_150[iVar0]))
					{
						if (unk_0xEA07F07380ABC460(uLocal_150[iVar0], unk_0x18F7BE9ACB7D08F4(), 100f, 100f, 100f, 0, 1, 0))
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
			if (unk_0xE769D9B5158D0F11(uLocal_199[iVar0]))
			{
				unk_0x40D517D991458154(&(uLocal_199[iVar0]));
			}
			if (unk_0xE769D9B5158D0F11(uLocal_209[iVar0]))
			{
				unk_0x40D517D991458154(&(uLocal_209[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					if (!unk_0x0FAE113CE72ED842(uLocal_155[iVar0]))
					{
						if (unk_0xEA07F07380ABC460(uLocal_155[iVar0], unk_0x18F7BE9ACB7D08F4(), 100f, 100f, 100f, 0, 1, 0))
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
			unk_0x4F7751BE82240EB4(5, 1);
			unk_0x4F7751BE82240EB4(3, 1);
		}
		if (bLocal_266)
		{
			func_3(func_36(), 1, 25000);
		}
		iLocal_262 = 1;
	}
	if (!unk_0x6157232E032EBC56(Local_234, 30f) && unk_0x2A488C176D52CCA5(func_2(unk_0x8CFC7D6E1DA5D304()), Local_234) > 300f)
	{
		func_170();
	}
}

Vector3 func_2(var uParam0)
{
	return unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(uParam0), 0);
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_104551.f_28020[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_35();
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
					func_34(99, 1);
					func_33(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_33(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_33(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_17(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_13(5))
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
							func_33(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_33(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_33(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_13(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_33(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_33(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_33(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_33(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_33(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_33(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_33(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x088BDDE9EE449CE6())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_33(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_33(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_33(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_33(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_13(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_33(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_33(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_33(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_33(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_12(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_34(95, iParam3);
					break;
				
				case 1:
					func_34(97, iParam3);
					break;
				
				case 2:
					func_34(96, iParam3);
					break;
			}
			func_34(98, iParam3);
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
	iVar5 = (Global_53075[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53075[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53075[iVar2] = 2147483647;
				}
				else
				{
					Global_53075[iVar2] = (Global_53075[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_33(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_33(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_33(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53075[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53075[iVar2];
			Global_53075[iVar2] = (Global_53075[iVar2] - iParam3);
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
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104551.f_20534.f_233[iVar2 /*69*/]++;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_35859 == 15)
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
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53083[iVar0 /*3*/][0] = Global_104551.f_20534[iVar0];
		Global_53083.f_31[iVar0 /*3*/][0] = Global_104551.f_20534.f_11[iVar0];
		Global_53083.f_62[iVar0 /*3*/][0] = Global_104551.f_20534.f_22[iVar0];
		Global_53083.f_93[iVar0 /*3*/][0] = Global_104551.f_20534.f_33[iVar0];
		Global_53083.f_124[iVar0 /*3*/][0] = Global_104551.f_20534.f_44[iVar0];
		Global_53083.f_155[iVar0 /*3*/][0] = Global_104551.f_20534.f_55[iVar0];
		Global_53083.f_186[iVar0 /*3*/][0] = Global_104551.f_20534.f_66[iVar0];
		Global_53083.f_217[iVar0 /*3*/][0] = Global_104551.f_20534.f_77[iVar0];
		Global_53083.f_248[iVar0 /*3*/][0] = Global_104551.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53083[iVar0 /*3*/][1] = Global_104551.f_20534[iVar0];
			Global_53083.f_31[iVar0 /*3*/][1] = Global_104551.f_20534.f_11[iVar0];
			Global_53083.f_62[iVar0 /*3*/][1] = Global_104551.f_20534.f_22[iVar0];
			Global_53083.f_93[iVar0 /*3*/][1] = Global_104551.f_20534.f_33[iVar0];
			Global_53083.f_124[iVar0 /*3*/][1] = Global_104551.f_20534.f_44[iVar0];
			Global_53083.f_155[iVar0 /*3*/][1] = Global_104551.f_20534.f_55[iVar0];
			Global_53083.f_186[iVar0 /*3*/][1] = Global_104551.f_20534.f_66[iVar0];
			Global_53083.f_217[iVar0 /*3*/][1] = Global_104551.f_20534.f_77[iVar0];
			Global_53083.f_248[iVar0 /*3*/][1] = Global_104551.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53075[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xD92C8D8AF3C67820(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xD92C8D8AF3C67820(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xD92C8D8AF3C67820(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_7(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_10(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0) || unk_0xB03A1684359C50A1(Global_2097152[func_9() /*12062*/].f_7637.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		unk_0x62148293B793073B(&(Global_2097152[func_9() /*12062*/].f_7637.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x55E6536147AC42E6("COUP_RED");
		unk_0xBEFD1ED9B6BE5127(func_8(iParam0));
		unk_0xB317125F2A5746EB(&cVar1, &cVar1, 1, 0, "", 0);
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
		
		case 8:
			return "COUP_XMAS2017";
		
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

int func_10(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_11();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_11()
{
	return Global_1312736;
}

void func_12(int iParam0)
{
	func_34(93, iParam0);
	func_34(29, iParam0);
	func_34(30, iParam0);
}

bool func_13(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_14(129, -1, -1);
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0);
	}
	return unk_0xB03A1684359C50A1(Global_2097152[func_9() /*12062*/].f_7637.f_10, iParam0);
}

int func_14(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_11();
	}
	iVar1 = func_16(iParam0, iParam1);
	uVar2 = func_15(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_15(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_11();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_17(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x391A4DC2CC8A9143(27))
	{
		return 0;
	}
	if (unk_0xD194C635833AC189(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD194C635833AC189(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xD92C8D8AF3C67820(joaat("num_cash_spent"), iVar1, 1);
		func_32(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_18(27, 1);
	return 1;
}

int func_18(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_19(iParam0, iParam1);
}

int func_19(int iParam0, int iParam1)
{
	if (func_31(14) && !func_30(iParam0))
	{
		return 0;
	}
	if (unk_0x391A4DC2CC8A9143(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25479 != 0 && !Global_70852)
	{
		return 0;
	}
	if (func_29(&Global_4267379))
	{
		if (func_27(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_20(&Global_4267379, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x4815E9FF4A7078A5(iParam0))
		{
			return 0;
		}
		if (unk_0x391A4DC2CC8A9143(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_20(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	func_23(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_21(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_21(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_22(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_22(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_23(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_24(uParam0, iVar0);
		iVar0++;
	}
	func_25(uParam0, (Global_4267378 - 0.5f));
}

void func_24(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_25(var uParam0, float fParam1)
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

float func_26(var uParam0)
{
	return uParam0->f_80;
}

bool func_27(var uParam0, int iParam1)
{
	return func_28(uParam0, iParam1) != -1;
}

int func_28(var uParam0, int iParam1)
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

bool func_29(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_30(int iParam0)
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

bool func_31(int iParam0)
{
	return Global_35859 == iParam0;
}

int func_32(int iParam0, int iParam1)
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
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
	}
	return 0;
}

void func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD194C635833AC189(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xD92C8D8AF3C67820(iParam0, iVar0, 1);
}

void func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/])
	{
		unk_0xD194C635833AC189(Global_51643[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xD92C8D8AF3C67820(Global_51643[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_35()
{
	int iVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		unk_0xD194C635833AC189(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53075[0] == iVar0)
		{
			Global_53075[0] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53075[1] == iVar0)
		{
			Global_53075[1] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53075[2] == iVar0)
		{
			Global_53075[2] = iVar0;
		}
	}
}

int func_36()
{
	func_37();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_37()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_40(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_39(unk_0x18F7BE9ACB7D08F4());
			if (func_38(iVar0) && (!func_31(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_38(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41()
{
	while (func_63())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_62())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_45(-1, 0);
	func_42();
	iLocal_47 = 3;
}

void func_42()
{
	func_43();
}

int func_43()
{
	if (func_44(0))
	{
		return 0;
	}
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

bool func_44(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

void func_45(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_60();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_59(iParam0))
	{
		func_58(iParam0, iParam1);
		if (!func_57(51))
		{
			func_53("RE_REWARD", 1, 0, 4000, 10000, func_56(), 0, 138, 0);
			func_52(51);
		}
		if (func_51(iParam0))
		{
			Global_104551.f_24965.f_2 = 3;
		}
		if (func_50(iParam0, iParam1) != 322)
		{
			func_47(func_50(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_104539 = iParam1;
		if (Global_104537 == 0)
		{
			if (((Global_104540 == 1 || Global_104540 == 5) || Global_104540 == 11) || Global_104540 == 25)
			{
				func_46(2);
			}
			else if ((Global_104540 == 26 || Global_104540 == 8) || Global_104540 == 17)
			{
				func_46(7);
			}
			else
			{
				func_46(1);
			}
		}
	}
}

void func_46(int iParam0)
{
	Global_104537 = iParam0;
}

void func_47(int iParam0, var uParam1, var uParam2)
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
		func_10((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104551.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104551.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104551.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104551.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104551.f_10164[iParam0 /*12*/].f_10 = uParam1;
		Global_104551.f_10164[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_48();
	}
}

void func_48()
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
	Global_104287 = 0;
	Global_104288 = 0;
	Global_104289 = 0;
	Global_104290 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104551.f_10164.f_3853;
	Global_104551.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104551.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104551.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104287++;
					fVar1 = (fVar1 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104288++;
					fVar2 = (fVar2 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104289++;
					fVar3 = (fVar3 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104290++;
					fVar4 = (fVar4 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104291++;
					fVar5 = (fVar5 + (Global_104551.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104292++;
					fVar6 = (fVar6 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104293++;
					fVar7 = (fVar7 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104270 > 0)
	{
		if (Global_104287 == Global_104270)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104271 > 0)
	{
		if (Global_104288 == Global_104271)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104272 > 0)
	{
		if (Global_104289 == Global_104272)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104273 > 0)
	{
		if (Global_104290 == Global_104273)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104274 > 0)
	{
		if (((Global_104291 == Global_104274 || (Global_104274 * 10 / Global_104291) < 41) || Global_104291 > Global_104277) || Global_104291 == Global_104277)
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_10164.f_3856, 14))
			{
				if (Global_104291 == Global_104274)
				{
					unk_0x251A50BCC815FD98(joaat("num_rndevents_completed"), Global_104274, 0);
					unk_0xD2A9C3F486236CC5(&(Global_104551.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar7 = 5f;
		}
	}
	Global_104551.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104291 > Global_104277 || Global_104291 == Global_104277)
	{
		iVar9 = Global_104277;
	}
	else
	{
		iVar9 = Global_104291;
	}
	unk_0xD92C8D8AF3C67820(joaat("num_missions_completed"), Global_104287, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_missions_available"), Global_104270, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_completed"), Global_104288, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_available"), Global_104271, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_completed"), Global_104289, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_available"), Global_104272, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_completed"), Global_104290, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_available"), Global_104273, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_available"), Global_104277, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_completed"), (Global_104293 + Global_104292), 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_available"), (Global_104276 + Global_104275), 1);
	Global_104294 = (Global_104287 * 100 / Global_104270);
	Global_104296 = ((Global_104289 + Global_104288) * 100 / (Global_104272 + Global_104271));
	Global_104295 = ((Global_104290 + iVar9) * 100 / (Global_104273 + Global_104277));
	Global_104297 = ((Global_104292 + Global_104293) * 100 / (Global_104275 + Global_104276));
	unk_0xEB08A76786EAA075(joaat("total_progress_made"), Global_104551.f_10164.f_3853, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_story_missions"), Global_104294, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_ambient_missions"), Global_104295, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_oddjobs"), Global_104296, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853))
	{
		func_32(13, unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853));
	}
	if (!unk_0x24BDFF94FAF6CE49())
	{
		if (!Global_70852)
		{
			if (func_49() == 2 == 0 && !unk_0x44243F2E2F58B8E3())
			{
				if (unk_0x9D67C2091DFDB507())
				{
					Global_104285 = 0;
				}
				if (!Global_55901)
				{
					func_43();
				}
			}
		}
	}
}

int func_49()
{
	return Global_25233;
}

int func_50(int iParam0, int iParam1)
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

int func_51(int iParam0)
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

void func_52(int iParam0)
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
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_20380.f_150[iVar1]), iVar0);
	}
}

void func_53(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_54(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_54(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9D39145AD645E383(sParam0, ""))
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
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0x9D39145AD645E383(&(Global_104551.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104551.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_8 = (unk_0x5AFB8ED811F05E4D() + iParam3);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = ((unk_0x5AFB8ED811F05E4D() + iParam3) + iParam4);
		}
		else
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104551.f_20380.f_145++;
		func_55();
	}
}

void func_55()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104551.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[0])
			{
				Global_104551.f_20380.f_146[0] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[1])
			{
				Global_104551.f_20380.f_146[1] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[2])
			{
				Global_104551.f_20380.f_146[2] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_56()
{
	func_37();
	switch (Global_104551.f_2353.f_539.f_4301)
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

int func_57(int iParam0)
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
		return unk_0xB03A1684359C50A1(Global_104551.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_58(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_104551.f_24965.f_8[iParam0]), iParam1);
}

int func_59(int iParam0)
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

int func_60()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xFCA64981FEF7C913(), 64);
	uVar16 = func_61(Var0);
	return uVar16;
}

int func_61(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x6E987D62C8535B6E(&cParam0))
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

int func_62()
{
	return 1;
}

int func_63()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

void func_64(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (unk_0x31F12808DC47A9E5(*uParam2))
	{
		if (unk_0xC4B84EB67F78C1F0(*uParam2, 0))
		{
			if (!unk_0x0FAE113CE72ED842(*uParam0))
			{
				if (unk_0x88B79D32B518C327(*uParam0, *uParam2, 0))
				{
					if (unk_0xE769D9B5158D0F11(*uParam1))
					{
						unk_0x40D517D991458154(uParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0xE769D9B5158D0F11(*uParam1))
				{
					*uParam1 = func_67(*uParam0, 1, 145);
				}
			}
			if (!unk_0xE769D9B5158D0F11(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = func_65(unk_0x761660F5CE986DC4(*uParam2, 1), 0);
					unk_0x71925FF3194E84CE(*uParam3, 1);
					unk_0xF60CEE5003674AF0(*uParam3, 9);
					unk_0x61C2EC67C90074E5(*uParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { unk_0x85D7B5415209F462(*uParam3) };
				Var4 = { unk_0x761660F5CE986DC4(*uParam2, 1) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * unk_0x0000000050597EE2()));
				unk_0x466CCEBC4B294723(*uParam3, Var1);
				if (iVar0 == 0)
				{
					unk_0x40D517D991458154(uParam3);
				}
			}
		}
		else
		{
			if (unk_0xE769D9B5158D0F11(*uParam3))
			{
				unk_0x40D517D991458154(uParam3);
			}
			if (!unk_0x0FAE113CE72ED842(*uParam0))
			{
				if (!unk_0xE769D9B5158D0F11(*uParam1))
				{
					*uParam1 = func_67(*uParam0, 1, 145);
				}
			}
		}
	}
}

var func_65(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x29F0B4D7EFF08BF6(Param0);
	unk_0x0590222010A36CE4(uVar0, func_66(unk_0x44243F2E2F58B8E3(), 1f, 1f));
	unk_0x63EECA6600F1090E(uVar0, iParam3);
	return uVar0;
}

float func_66(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_67(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_68(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE769D9B5158D0F11(uVar0)) && unk_0xD76CFACBF6A6F21E(&(Global_104551.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x61C2EC67C90074E5(uVar0, &(Global_104551.f_28020[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x31F12808DC47A9E5(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA8EDC17CEEA40DFA(iParam0);
	if (unk_0x978B4E1292EBBE41(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_66(unk_0x44243F2E2F58B8E3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1DF6703E5077ABE1(uVar0, bParam1);
		}
		else
		{
			unk_0x71925FF3194E84CE(uVar0, 2);
		}
	}
	else if (unk_0xB6C2454233C8F532(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_66(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
		unk_0x1DF6703E5077ABE1(uVar0, bParam1);
	}
	else if (unk_0x2E4A20D66F5AD135(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_66(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_69(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	struct<3> Var0;
	
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		if (((((((unk_0x31F12808DC47A9E5(iParam1) && iParam0 != iParam1) && !unk_0x9605D2F02FA93911(unk_0x4F69FBD64CDF125B(iParam1))) && !unk_0xD8BB60C76D29E4BB(unk_0x4F69FBD64CDF125B(iParam1))) && !unk_0xB6353CAE3EBC0919(unk_0x4F69FBD64CDF125B(iParam1))) && !unk_0xA403D842C198CAFF(unk_0x4F69FBD64CDF125B(iParam1))) && unk_0x19160618B3657F0E(iParam1)) && func_73(iParam0))
		{
			if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0xA89DC5E1C1F12DBF(*uParam2, *uParam3, Param7) };
				func_72(iParam1, uParam4, uParam5);
			}
			if (!unk_0xD76674575E7BA743(iParam0))
			{
				*uParam6 = unk_0x5AFB8ED811F05E4D();
			}
			else if ((unk_0x5AFB8ED811F05E4D() - *uParam6) > iParam10)
			{
				if (func_71(iParam0, iParam1, 1) > fParam11 && unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!func_70(*uParam2))
					{
						if (!unk_0x6157232E032EBC56(*uParam2, 3f))
						{
							unk_0xE6B6928D4EED07B1(*uParam2, 1.5f, 0);
							unk_0xE54597236B7D8C63(*uParam2, 3f, 0, 0, 0, 0, 0, 0);
							unk_0x990FFD4FB6ADD630(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0xB88121FF8A34A66F(iParam0, *uParam3);
							unk_0x9B53B2691E2B1F79(iParam0, 1084227584);
							unk_0xFBD899EB9A2EF7F4(iParam0, 10f);
							unk_0x0F3F86C855582784(iParam0, 1, 1, 0);
							*uParam6 = unk_0x5AFB8ED811F05E4D();
						}
						else
						{
							Var0 = { unk_0xA89DC5E1C1F12DBF(Local_113, uLocal_112, Param7) };
							if (!func_70(Var0))
							{
								if (!unk_0x6157232E032EBC56(Var0, 2f))
								{
									unk_0xE6B6928D4EED07B1(Var0, 1.5f, 0);
									unk_0xE54597236B7D8C63(Var0, 3f, 0, 0, 0, 0, 0, 0);
									unk_0x990FFD4FB6ADD630(iParam0, Var0, 1, 0, 0, 1);
									unk_0xB88121FF8A34A66F(iParam0, uLocal_112);
									unk_0x9B53B2691E2B1F79(iParam0, 1084227584);
									unk_0xFBD899EB9A2EF7F4(iParam0, 10f);
									unk_0x0F3F86C855582784(iParam0, 1, 1, 0);
									*uParam6 = unk_0x5AFB8ED811F05E4D();
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
			*uParam6 = unk_0x5AFB8ED811F05E4D();
		}
	}
}

int func_70(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_71(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Var3, iParam2);
}

void func_72(int iParam0, var uParam1, var uParam2)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			*uParam1 = { unk_0x761660F5CE986DC4(iParam0, 1) };
			*uParam2 = unk_0x93FDA3BF59E7B77F(iParam0);
		}
	}
}

int func_73(int iParam0)
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			if (!unk_0x74B8CA477787A438(iParam0, -1, 0))
			{
				iVar0 = unk_0x4983F8C51A0C0AF3(iParam0, -1, 0);
				if (unk_0x31F12808DC47A9E5(iVar0))
				{
					if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_74(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (unk_0x0FAE113CE72ED842(*uParam0))
		{
			if (unk_0xE769D9B5158D0F11(*uParam1))
			{
				unk_0x40D517D991458154(uParam1);
			}
			unk_0xDBE64C5761554FBF(uParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0x657B649BA2AD3582(*uParam0, 0))
			{
			}
			else if (unk_0x31F12808DC47A9E5(*uParam2))
			{
				if (unk_0xC4B84EB67F78C1F0(*uParam2, 0))
				{
					if (unk_0x88B79D32B518C327(*uParam0, *uParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x31F12808DC47A9E5(*uParam2))
	{
		if (unk_0xC4B84EB67F78C1F0(*uParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0x84854164769BB257(*uParam2);
				unk_0xF584C5576016093C(*uParam2);
				unk_0x9DE3D7ABB54710CB(*uParam2, 0);
				unk_0x4F5FF3F3FDCAB15D(uParam2);
				if (unk_0xE769D9B5158D0F11(*uParam3))
				{
					unk_0x40D517D991458154(uParam3);
				}
			}
		}
		else
		{
			unk_0x84854164769BB257(*uParam2);
			unk_0xF584C5576016093C(*uParam2);
			unk_0x9DE3D7ABB54710CB(*uParam2, 0);
			unk_0x4F5FF3F3FDCAB15D(uParam2);
			if (unk_0xE769D9B5158D0F11(*uParam3))
			{
				unk_0x40D517D991458154(uParam3);
			}
		}
	}
}

int func_75()
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
		if (unk_0x31F12808DC47A9E5(uLocal_150[iVar1]))
		{
			if (!unk_0x0FAE113CE72ED842(uLocal_150[iVar1]))
			{
				if (unk_0xEA07F07380ABC460(uLocal_150[iVar1], unk_0x18F7BE9ACB7D08F4(), 200f, 200f, 200f, 0, 1, 0))
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
		if (unk_0x31F12808DC47A9E5(uLocal_155[iVar1]))
		{
			if (!unk_0x0FAE113CE72ED842(uLocal_155[iVar1]))
			{
				if (unk_0xEA07F07380ABC460(uLocal_155[iVar1], unk_0x18F7BE9ACB7D08F4(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_76()
{
	int iVar0;
	
	if (bLocal_456)
	{
		if (bLocal_267)
		{
		}
		else if (bLocal_264)
		{
			if (!unk_0x0FAE113CE72ED842(uLocal_150[0]) && !unk_0x74C2FE037DFC8B4A(uLocal_166[0], 0))
			{
			}
			if (!unk_0x0FAE113CE72ED842(uLocal_150[1]) && !unk_0x74C2FE037DFC8B4A(uLocal_166[1], 0))
			{
			}
		}
		else
		{
			if (!unk_0x0FAE113CE72ED842(uLocal_155[0]) && !unk_0x74C2FE037DFC8B4A(uLocal_171[0], 0))
			{
			}
			if (!unk_0x0FAE113CE72ED842(uLocal_155[1]) && !unk_0x74C2FE037DFC8B4A(uLocal_171[1], 0))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x255BDFEA15148E0E(uLocal_221[iVar0]);
			if (unk_0x0FAE113CE72ED842(uLocal_150[iVar0]))
			{
				if (unk_0xE769D9B5158D0F11(uLocal_194[iVar0]))
				{
					unk_0x40D517D991458154(&(uLocal_194[iVar0]));
					iLocal_124++;
				}
			}
			else if (!unk_0x657B649BA2AD3582(uLocal_150[iVar0], 0))
			{
				if (!unk_0xE769D9B5158D0F11(uLocal_194[iVar0]))
				{
					uLocal_194[iVar0] = func_67(uLocal_150[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x255BDFEA15148E0E(uLocal_221[iVar0]);
			if (unk_0x0FAE113CE72ED842(uLocal_155[iVar0]))
			{
				if (unk_0xE769D9B5158D0F11(uLocal_199[iVar0]))
				{
					unk_0x40D517D991458154(&(uLocal_199[iVar0]));
					iLocal_125++;
				}
			}
			else if (!unk_0x657B649BA2AD3582(uLocal_155[iVar0], 0))
			{
				if (!unk_0xE769D9B5158D0F11(uLocal_199[iVar0]))
				{
					uLocal_199[iVar0] = func_67(uLocal_155[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_124 >= 4 && iLocal_125 >= 4)
		{
			func_41();
		}
	}
	func_92();
	func_91();
	switch (iLocal_48)
	{
		case 0:
			if (((unk_0xCEAD83D88C710EF1(unk_0x8CFC7D6E1DA5D304()) || !unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_234 + Vector(0f, 20f, 0f), 170f, 270f, 50f, 0, 1, 0)) || unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, 0, 1, 0)) || unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, 0, 1, 0))
			{
				if (!bLocal_267)
				{
					if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, 0, 1, 0) || unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, 0, 1, 0))
					{
						bLocal_267 = true;
					}
				}
				if (unk_0xF4689463B0435A46(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), &Local_240, 1, 1077936128, 0))
				{
					if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_240, 20f, 20f, 20f, 0, 1, 0))
					{
						unk_0x4F7751BE82240EB4(5, 1);
						unk_0x4F7751BE82240EB4(3, 1);
						unk_0xC1B1E9A034A63A62(0);
						func_89();
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
					if (((!unk_0x74C2FE037DFC8B4A(uLocal_176[0], 0) && !unk_0x74C2FE037DFC8B4A(uLocal_176[1], 0)) && !unk_0x0FAE113CE72ED842(uLocal_150[0])) && !unk_0x0FAE113CE72ED842(uLocal_150[1]))
					{
						unk_0x8D77EFA08616AD64(uLocal_150[0], uLocal_176[0], -1);
						unk_0x8D77EFA08616AD64(uLocal_150[1], uLocal_176[1], -1);
						unk_0x273FE09AE985A00A(uLocal_150[0], 3, 0);
						unk_0x273FE09AE985A00A(uLocal_150[1], 3, 0);
						unk_0xC741149CBDE5831B(uLocal_150[0], 0);
						unk_0xC741149CBDE5831B(uLocal_150[1], 0);
						iLocal_48 = 5;
					}
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 10000)
			{
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if (!unk_0x1BA9B31667735F34(unk_0x18F7BE9ACB7D08F4(), joaat("rebel")))
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
			Local_243 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			uLocal_132 = unk_0x61E9B3BFA06B017B(10, 15);
			if (!unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, 0, 1, 0))
			{
				if (unk_0xF76F6CDAE27FDDDA(Local_243, uLocal_132, &(Local_439[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_439[1 /*3*/] = { Local_439[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x6157232E032EBC56(Local_439[0 /*3*/], 7f) && !unk_0x6157232E032EBC56(Local_439[1 /*3*/], 7f))
					{
						if (unk_0xC4B84EB67F78C1F0(uLocal_166[0], 0))
						{
							unk_0x990FFD4FB6ADD630(uLocal_166[0], Local_439[0 /*3*/], 1, 0, 0, 1);
							func_88(uLocal_166[0], uLocal_150[0]);
						}
						if (unk_0xC4B84EB67F78C1F0(uLocal_166[1], 0))
						{
							unk_0x990FFD4FB6ADD630(uLocal_166[1], Local_439[1 /*3*/], 1, 0, 0, 1);
							func_88(uLocal_166[1], uLocal_150[1]);
						}
						if (func_36() == 0)
						{
							func_77(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_36() == 1)
						{
							func_77(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_36() == 2)
						{
							func_77(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_264 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_48 = 6;
					}
				}
			}
			break;
		
		case 4:
			Local_243 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			uLocal_132 = unk_0x61E9B3BFA06B017B(30, 35);
			if (!unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, 0, 1, 0))
			{
				if (unk_0xF76F6CDAE27FDDDA(Local_243, uLocal_132, &(Local_439[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_439[1 /*3*/] = { Local_439[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x6157232E032EBC56(Local_439[0 /*3*/], 7f) && !unk_0x6157232E032EBC56(Local_439[1 /*3*/], 7f))
					{
						if (unk_0xC4B84EB67F78C1F0(uLocal_171[0], 0))
						{
							unk_0x990FFD4FB6ADD630(uLocal_171[0], Local_439[0 /*3*/], 1, 0, 0, 1);
							func_88(uLocal_171[0], uLocal_155[0]);
						}
						if (unk_0xC4B84EB67F78C1F0(uLocal_171[1], 0))
						{
							unk_0x990FFD4FB6ADD630(uLocal_171[1], Local_439[1 /*3*/], 1, 0, 0, 1);
							func_88(uLocal_171[1], uLocal_155[1]);
						}
						if (func_36() == 0)
						{
							func_77(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_36() == 1)
						{
							func_77(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_36() == 2)
						{
							func_77(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_265 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_48 = 6;
					}
				}
			}
			break;
		
		case 5:
			Local_243 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			uLocal_132 = unk_0x61E9B3BFA06B017B(5, 10);
			if (unk_0xF76F6CDAE27FDDDA(Local_243, uLocal_132, &(Local_439[0 /*3*/]), 1, 1077936128, 0))
			{
				Local_439[1 /*3*/] = { Local_439[0 /*3*/] + Vector(0f, 5f, 0f) };
				if (!unk_0x6157232E032EBC56(Local_439[0 /*3*/], 7f) && !unk_0x6157232E032EBC56(Local_439[1 /*3*/], 7f))
				{
					if (unk_0xC4B84EB67F78C1F0(uLocal_176[0], 0))
					{
						unk_0x990FFD4FB6ADD630(uLocal_176[0], Local_439[0 /*3*/], 1, 0, 0, 1);
						func_88(uLocal_176[0], uLocal_150[0]);
					}
					if (unk_0xC4B84EB67F78C1F0(uLocal_176[1], 0))
					{
						unk_0x990FFD4FB6ADD630(uLocal_176[1], Local_439[1 /*3*/], 1, 0, 0, 1);
						func_88(uLocal_176[1], uLocal_150[1]);
					}
					if (func_36() == 0)
					{
						func_77(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_36() == 1)
					{
						func_77(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_36() == 2)
					{
						func_77(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_264 = true;
					unk_0xC1B1E9A034A63A62(0);
					iLocal_48 = 6;
				}
			}
			break;
		
		case 6:
			if (func_63())
			{
				fLocal_120 = unk_0x3D81861E1A1652A9(1.5f, 2.5f);
				fLocal_121 = unk_0x3D81861E1A1652A9(2f, 4f);
				fLocal_122 = unk_0x3D81861E1A1652A9(0.1f, 2f);
				if (iLocal_134 < 5 && iLocal_135 < unk_0x5AFB8ED811F05E4D())
				{
					Local_90 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
					unk_0xD2F6F6FC4C503C52((Local_90.f_0 + fLocal_120), (Local_90.f_1 + fLocal_121), (Local_90.f_2 + fLocal_122), (Local_90.f_0 - fLocal_120), (Local_90.f_1 - fLocal_121), Local_90.f_2, 10, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
					iLocal_135 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(200, 500));
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

bool func_77(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_87(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_78(sParam2, iParam3, 0);
}

int func_78(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_86();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_85(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_84();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam2)
			{
				func_83();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_82())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
				}
			}
			if (func_81())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
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
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
				{
					return 0;
				}
			}
			func_80();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_79();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_86();
	}
	return 0;
}

void func_79()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

void func_80()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x62148293B793073B(&Global_2324, 16);
}

int func_81()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	int iVar0;
	int iVar1;
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
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

void func_83()
{
	if (func_31(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_36();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

void func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_85(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

void func_86()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_87(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = uParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

void func_88(int iParam0, var uParam1)
{
	unk_0x73D7E57BF0ED7FEB(uParam0, 0);
	unk_0x9B53B2691E2B1F79(uParam0, 1084227584);
	Local_436 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	Local_452 = { Local_243 - Local_436 };
	unk_0xB88121FF8A34A66F(iParam0, unk_0x7F21F40674579303(Local_452.f_0, Local_452.f_1));
	if (bLocal_267)
	{
		if (!unk_0x0FAE113CE72ED842(uParam1))
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				unk_0x2B02179B17A77BC3(uParam1, unk_0x18F7BE9ACB7D08F4());
				unk_0x4EDE34FBADD967A6(1);
				if (!unk_0x0FAE113CE72ED842(uParam1))
				{
					unk_0x2AFFA2813AFD2F83(uParam1, 32, 1);
				}
			}
			else
			{
				unk_0x48CA7222706D392C(uParam1, iParam0, unk_0x18F7BE9ACB7D08F4(), 6, 20f, 786469, -1f, -1f, 1);
			}
			if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
			{
				unk_0xFBD899EB9A2EF7F4(iParam0, unk_0x2A72627520A107B5(unk_0x18F7BE9ACB7D08F4()));
			}
		}
	}
	else if (!unk_0x0FAE113CE72ED842(uParam1))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			unk_0x2B02179B17A77BC3(uParam1, unk_0x18F7BE9ACB7D08F4());
		}
		else
		{
			unk_0x48CA7222706D392C(uParam1, iParam0, unk_0x18F7BE9ACB7D08F4(), 2, 100f, 786469, -1f, -1f, 1);
		}
		unk_0xFBD899EB9A2EF7F4(iParam0, unk_0x2A72627520A107B5(unk_0x18F7BE9ACB7D08F4()));
	}
}

void func_89()
{
	int iVar0;
	
	uLocal_166[0] = unk_0x3064CCF56C6C32BC(joaat("rebel"), -1595.964f, 4732.479f, 0f, 305f, 1, 1, 0);
	unk_0x337F2213526139E0(uLocal_166[0], 1, 0);
	unk_0x0F3F86C855582784(uLocal_166[0], 1, 1, 0);
	unk_0x91663DAD5DDAFA96(uLocal_166[0], 2);
	unk_0xDC633118188196B0(uLocal_166[0], 1);
	unk_0x73D7E57BF0ED7FEB(uLocal_166[0], 1);
	unk_0x1C4B08C81FA52071(uLocal_166[0], "49GNL112");
	uLocal_166[1] = unk_0x3064CCF56C6C32BC(joaat("rebel"), -1570.34f, 4733.755f, 0f, 305f, 1, 1, 0);
	unk_0x337F2213526139E0(uLocal_166[1], 1, 0);
	unk_0x0F3F86C855582784(uLocal_166[1], 1, 1, 0);
	unk_0x91663DAD5DDAFA96(uLocal_166[1], 2);
	unk_0xDC633118188196B0(uLocal_166[1], 1);
	unk_0x73D7E57BF0ED7FEB(uLocal_166[1], 1);
	unk_0x1C4B08C81FA52071(uLocal_166[1], "47TMS703");
	uLocal_176[0] = unk_0x3064CCF56C6C32BC(joaat("sanchez"), Vector(0f, 4732.479f, -1595.964f) + Vector(10f, 10f, 10f), 305f, 1, 1, 0);
	unk_0x337F2213526139E0(uLocal_176[0], 1, 0);
	unk_0x0F3F86C855582784(uLocal_176[0], 1, 1, 0);
	unk_0x91663DAD5DDAFA96(uLocal_176[0], 2);
	unk_0xDC633118188196B0(uLocal_176[0], 1);
	unk_0x73D7E57BF0ED7FEB(uLocal_176[0], 1);
	unk_0x1C4B08C81FA52071(uLocal_176[0], "49GNL112");
	uLocal_176[1] = unk_0x3064CCF56C6C32BC(joaat("sanchez"), Vector(0f, 4733.755f, -1570.34f) + Vector(10f, 10f, 10f), 305f, 1, 1, 0);
	unk_0x337F2213526139E0(uLocal_176[1], 1, 0);
	unk_0x0F3F86C855582784(uLocal_176[1], 1, 1, 0);
	unk_0x91663DAD5DDAFA96(uLocal_176[1], 2);
	unk_0xDC633118188196B0(uLocal_176[1], 1);
	unk_0x73D7E57BF0ED7FEB(uLocal_176[1], 1);
	unk_0x1C4B08C81FA52071(uLocal_176[1], "47TMS703");
	uLocal_150[0] = unk_0xC52E83A4C0F88DAB(uLocal_166[0], 26, joaat("g_m_m_chigoon_02"), -1, 1, 1);
	uLocal_150[1] = unk_0xC52E83A4C0F88DAB(uLocal_166[1], 26, joaat("g_m_m_chigoon_02"), -1, 1, 1);
	if (!bLocal_267)
	{
		uLocal_150[2] = unk_0xC52E83A4C0F88DAB(uLocal_166[0], 26, joaat("g_m_m_chigoon_02"), 0, 1, 1);
		uLocal_150[3] = unk_0xC52E83A4C0F88DAB(uLocal_166[1], 26, joaat("g_m_m_chigoon_02"), 0, 1, 1);
	}
	uLocal_171[0] = unk_0x3064CCF56C6C32BC(joaat("bobcatxl"), -1356.281f, 5000f, 0f, 125.2811f, 1, 1, 0);
	unk_0x337F2213526139E0(uLocal_171[0], 1, 0);
	unk_0x0F3F86C855582784(uLocal_171[0], 1, 1, 0);
	unk_0x91663DAD5DDAFA96(uLocal_171[0], 2);
	unk_0xDC633118188196B0(uLocal_171[0], 1);
	unk_0x73D7E57BF0ED7FEB(uLocal_171[0], 1);
	unk_0x1C4B08C81FA52071(uLocal_171[0], "49GNL112");
	uLocal_171[1] = unk_0x3064CCF56C6C32BC(joaat("bobcatxl"), -1373.589f, 5000f, 0f, 125.459f, 1, 1, 0);
	unk_0x337F2213526139E0(uLocal_171[1], 1, 0);
	unk_0x0F3F86C855582784(uLocal_171[1], 1, 1, 0);
	unk_0x91663DAD5DDAFA96(uLocal_171[1], 2);
	unk_0xDC633118188196B0(uLocal_171[1], 1);
	unk_0x73D7E57BF0ED7FEB(uLocal_171[1], 1);
	unk_0x1C4B08C81FA52071(uLocal_171[1], "47TMS703");
	uLocal_155[0] = unk_0xC52E83A4C0F88DAB(uLocal_171[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
	uLocal_155[1] = unk_0xC52E83A4C0F88DAB(uLocal_171[1], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
	uLocal_155[2] = unk_0xC52E83A4C0F88DAB(uLocal_171[0], 26, joaat("g_m_y_salvagoon_03"), 0, 1, 1);
	uLocal_155[3] = unk_0xC52E83A4C0F88DAB(uLocal_171[1], 26, joaat("g_m_y_salvagoon_03"), 0, 1, 1);
	unk_0x48E76A4B7B58B77A("RE_deal1", &iLocal_268);
	unk_0x48E76A4B7B58B77A("RE_deal2", &iLocal_269);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x0FAE113CE72ED842(uLocal_150[iVar0]))
		{
			unk_0x641E77554763EF06(uLocal_150[iVar0], iLocal_268);
			unk_0x337F2213526139E0(uLocal_150[iVar0], 1, 0);
			if (bLocal_267)
			{
				unk_0x7D154B840BD03D00(uLocal_150[0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
				if (!unk_0x0FAE113CE72ED842(uLocal_150[1]))
				{
					unk_0x7D154B840BD03D00(uLocal_150[1], joaat("weapon_pistol"), -1, 1, 1);
				}
				unk_0x9D02030EF7A1C310(uLocal_150[iVar0], 15);
				unk_0x273FE09AE985A00A(uLocal_150[iVar0], 3, 0);
			}
			else
			{
				unk_0x7D154B840BD03D00(uLocal_150[iVar0], joaat("weapon_pistol"), -1, 1, 1);
				unk_0x9D02030EF7A1C310(uLocal_150[iVar0], 13);
			}
			unk_0x273FE09AE985A00A(uLocal_150[iVar0], 13, 1);
			unk_0x273FE09AE985A00A(uLocal_150[iVar0], 2, 1);
			unk_0x273FE09AE985A00A(uLocal_150[iVar0], 1, 1);
			func_90(&uLocal_271, 4, uLocal_150[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x0FAE113CE72ED842(uLocal_150[iVar0]))
		{
			unk_0x641E77554763EF06(uLocal_155[iVar0], iLocal_269);
			unk_0x337F2213526139E0(uLocal_155[iVar0], 1, 0);
			if (bLocal_267)
			{
				unk_0x7D154B840BD03D00(uLocal_150[0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
				if (!unk_0x0FAE113CE72ED842(uLocal_150[1]))
				{
					unk_0x7D154B840BD03D00(uLocal_150[1], joaat("weapon_pistol"), -1, 1, 1);
				}
				unk_0x9D02030EF7A1C310(uLocal_150[iVar0], 15);
				unk_0x273FE09AE985A00A(uLocal_150[iVar0], 3, 0);
				func_90(&uLocal_271, 4, uLocal_150[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				unk_0x7D154B840BD03D00(uLocal_155[iVar0], joaat("weapon_pistol"), -1, 1, 1);
				unk_0x9D02030EF7A1C310(uLocal_155[iVar0], 13);
				func_90(&uLocal_271, 5, uLocal_155[iVar0], "REDGWSalvadoran", 0, 1);
			}
			unk_0x273FE09AE985A00A(uLocal_155[iVar0], 13, 1);
			unk_0x273FE09AE985A00A(uLocal_155[iVar0], 2, 1);
			unk_0x273FE09AE985A00A(uLocal_155[iVar0], 1, 1);
		}
		iVar0++;
	}
	unk_0xFB5F4D76105A21B5(3, iLocal_268, iLocal_269);
	unk_0xFB5F4D76105A21B5(3, iLocal_269, iLocal_268);
	unk_0xFB5F4D76105A21B5(3, iLocal_268, joaat("player"));
	unk_0xFB5F4D76105A21B5(3, iLocal_269, joaat("player"));
	unk_0x419C9117019F2E5A(joaat("g_m_m_chigoon_02"));
	unk_0x419C9117019F2E5A(joaat("g_m_y_salvagoon_03"));
	unk_0x419C9117019F2E5A(joaat("rebel"));
	unk_0x419C9117019F2E5A(joaat("bobcatxl"));
	unk_0x419C9117019F2E5A(joaat("sanchez"));
	unk_0x419C9117019F2E5A(joaat("a_c_rottweiler"));
	bLocal_456 = true;
	iLocal_46 = 1;
}

void func_90(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(uParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(uParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(uParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(uParam2, 1);
			}
		}
	}
}

void func_91()
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
					if (!unk_0x0FAE113CE72ED842(uLocal_150[iVar0]))
					{
						if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), uLocal_150[iVar0], 100f, 100f, 20f, 0, 1, 0))
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
					if (!unk_0x0FAE113CE72ED842(uLocal_155[iVar1]))
					{
						if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), uLocal_155[iVar1], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_130 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			unk_0xFB5F4D76105A21B5(5, iLocal_268, iLocal_269);
			unk_0xFB5F4D76105A21B5(5, iLocal_269, iLocal_268);
			unk_0xFB5F4D76105A21B5(5, iLocal_268, joaat("player"));
			unk_0xFB5F4D76105A21B5(5, iLocal_269, joaat("player"));
			if (bLocal_264)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0x0FAE113CE72ED842(uLocal_150[iVar2]))
					{
						if ((!unk_0x8E6B1A41766B5731(uLocal_150[iVar2], 0) && unk_0x2BBAA45ECDE3DAE2(uLocal_150[iVar2], 579380604) != 1) && unk_0x2BBAA45ECDE3DAE2(uLocal_150[iVar2], 579380604) != 0)
						{
							unk_0x267F7A2DFDFFB077(uLocal_150[iVar2]);
							unk_0x48B25C02FAB9DC81(uLocal_150[iVar2], unk_0x18F7BE9ACB7D08F4(), 0, 16);
							unk_0x10F31830C95ED2E5(uLocal_150[iVar2], 1);
						}
					}
					iVar2++;
				}
				if (func_77(&uLocal_271, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_127 = unk_0x5AFB8ED811F05E4D();
					iLocal_130 = 4;
				}
			}
			if (bLocal_265)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!unk_0x0FAE113CE72ED842(uLocal_155[iVar3]))
					{
						if ((!unk_0x8E6B1A41766B5731(uLocal_155[iVar3], 0) && unk_0x2BBAA45ECDE3DAE2(uLocal_155[iVar3], 579380604) != 1) && unk_0x2BBAA45ECDE3DAE2(uLocal_155[iVar3], 579380604) != 0)
						{
							unk_0x267F7A2DFDFFB077(uLocal_155[iVar3]);
							unk_0x48B25C02FAB9DC81(uLocal_155[iVar3], unk_0x18F7BE9ACB7D08F4(), 0, 16);
							unk_0x10F31830C95ED2E5(uLocal_155[iVar3], 1);
						}
					}
					iVar3++;
				}
				if (func_77(&uLocal_271, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_127 = unk_0x5AFB8ED811F05E4D();
					iLocal_130 = 4;
				}
			}
			break;
	}
}

void func_92()
{
	switch (iLocal_128)
	{
		case 0:
			if (!unk_0x0FAE113CE72ED842(uLocal_136))
			{
				if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_237, 7f, 7f, 10f, 0, 1, 0))
				{
					func_94();
					unk_0x4EDE34FBADD967A6(0);
					func_77(&uLocal_271, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					unk_0x6016A20BFEAEFE11(uLocal_136, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 2);
					if (!unk_0xE769D9B5158D0F11(uLocal_182))
					{
						uLocal_182 = func_93(uLocal_214);
					}
					iLocal_127 = unk_0x5AFB8ED811F05E4D();
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
			if (!unk_0x0FAE113CE72ED842(uLocal_136))
			{
				if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), uLocal_136, 10f, 10f, 6f, 0, 1, 0))
				{
					if (!func_63())
					{
						func_77(&uLocal_271, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!unk_0x0FAE113CE72ED842(uLocal_136))
						{
							unk_0x6016A20BFEAEFE11(uLocal_136, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 2);
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
			if (!func_63() || unk_0xC9D9444186B5A374() > 4000)
			{
				if (!unk_0x0FAE113CE72ED842(uLocal_136))
				{
					unk_0x874004759C4BE8DC(uLocal_136, 0);
					unk_0x40D517D991458154(&uLocal_183);
				}
				if (unk_0xC9D9444186B5A374() > 7000)
				{
					if (!unk_0x0FAE113CE72ED842(uLocal_137[6]))
					{
						unk_0x874004759C4BE8DC(uLocal_137[6], 0);
						unk_0x40D517D991458154(&(uLocal_184[6]));
					}
				}
				if (unk_0xC9D9444186B5A374() > 9000)
				{
					if (!unk_0x0FAE113CE72ED842(uLocal_137[7]))
					{
						unk_0x874004759C4BE8DC(uLocal_137[7], 0);
						unk_0x40D517D991458154(&(uLocal_184[7]));
					}
					iLocal_129++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x0FAE113CE72ED842(uLocal_137[6]))
			{
				unk_0x874004759C4BE8DC(uLocal_137[6], 0);
			}
			if (!unk_0x0FAE113CE72ED842(uLocal_137[7]))
			{
				unk_0x874004759C4BE8DC(uLocal_137[7], 0);
			}
			if (!unk_0x0FAE113CE72ED842(uLocal_136))
			{
				unk_0x874004759C4BE8DC(uLocal_136, 0);
			}
			break;
	}
}

int func_93(var uParam0)
{
	var uVar0;
	
	if (!unk_0x351CD242DF0BE9BA(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x34373C6A4661A2FA(uParam0);
	unk_0x0590222010A36CE4(uVar0, func_66(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	return uVar0;
}

void func_94()
{
	Global_14622 = 0;
	func_95();
}

void func_95()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

void func_96()
{
	int iVar0;
	
	if (unk_0x3EFEA066EF92D5B7(uLocal_214))
	{
		if (unk_0xE769D9B5158D0F11(uLocal_181))
		{
			unk_0x40D517D991458154(&uLocal_181);
		}
		if (unk_0xE769D9B5158D0F11(uLocal_182))
		{
			unk_0x40D517D991458154(&uLocal_182);
		}
		iLocal_129 = 1;
		iLocal_47 = 2;
		iLocal_46 = 0;
	}
	else
	{
		unk_0x8BB3FA32294185BB(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x31F12808DC47A9E5(uLocal_137[iVar0]))
			{
				if (!unk_0x0FAE113CE72ED842(uLocal_137[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (unk_0xE769D9B5158D0F11(uLocal_184[iVar0]))
				{
					unk_0x40D517D991458154(&(uLocal_184[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_147)
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_147[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_124())
		{
			if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_52[7 /*3*/], 110f, 95f, 40f, 0, 1, 0))
			{
				if (unk_0xE769D9B5158D0F11(uLocal_181))
				{
					unk_0x40D517D991458154(&uLocal_181);
				}
				if ((!unk_0xE769D9B5158D0F11(uLocal_183) && !unk_0xE769D9B5158D0F11(uLocal_184[6])) && !unk_0xE769D9B5158D0F11(uLocal_184[7]))
				{
					uLocal_183 = func_67(uLocal_136, 1, 145);
					uLocal_184[6] = func_67(uLocal_137[6], 1, 145);
					uLocal_184[7] = func_67(uLocal_137[7], 1, 145);
				}
				unk_0x2E9500102925D891(uLocal_183, 0);
				unk_0x2E9500102925D891(uLocal_184[6], 0);
				unk_0x2E9500102925D891(uLocal_184[7], 0);
				func_97(1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(uLocal_137[6]))
		{
			if (((((unk_0x2BBAA45ECDE3DAE2(uLocal_137[6], 1785177548) != 1 && unk_0x2BBAA45ECDE3DAE2(uLocal_137[6], 1785177548) != 0) || unk_0x25A40FAC128F45B0(uLocal_137[6])) || unk_0x8D11942CD2B49BB5(unk_0x18F7BE9ACB7D08F4(), uLocal_137[6])) || unk_0x20BE2EAD83953A78(uLocal_137[6])) || unk_0x2B9DD94F17265ECD(uLocal_137[6]))
			{
				unk_0x874004759C4BE8DC(uLocal_137[6], 0);
			}
		}
		if (!unk_0x0FAE113CE72ED842(uLocal_137[7]))
		{
			if (((((unk_0x2BBAA45ECDE3DAE2(uLocal_137[7], 1785177548) != 1 && unk_0x2BBAA45ECDE3DAE2(uLocal_137[7], 1785177548) != 0) || unk_0x25A40FAC128F45B0(uLocal_137[7])) || unk_0x8D11942CD2B49BB5(unk_0x18F7BE9ACB7D08F4(), uLocal_137[7])) || unk_0x20BE2EAD83953A78(uLocal_137[7])) || unk_0x2B9DD94F17265ECD(uLocal_137[7]))
			{
				unk_0x874004759C4BE8DC(uLocal_137[7], 0);
			}
		}
		if (!unk_0x0FAE113CE72ED842(uLocal_136))
		{
			if (((((unk_0x2BBAA45ECDE3DAE2(uLocal_136, 1785177548) != 1 && unk_0x2BBAA45ECDE3DAE2(uLocal_136, 1785177548) != 0) || unk_0x25A40FAC128F45B0(uLocal_136)) || unk_0x8D11942CD2B49BB5(unk_0x18F7BE9ACB7D08F4(), uLocal_136)) || unk_0x20BE2EAD83953A78(uLocal_136)) || unk_0x2B9DD94F17265ECD(uLocal_136))
			{
				unk_0x874004759C4BE8DC(uLocal_136, 0);
			}
		}
		if (!bLocal_263)
		{
		}
	}
	func_92();
	switch (iLocal_131)
	{
		case 0:
			if (!unk_0x0FAE113CE72ED842(uLocal_137[6]))
			{
				if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), unk_0x761660F5CE986DC4(uLocal_137[6], 1) + Vector(0f, 2.5f, 0f), 9f, 5f, 5f, 0, 1, 0) && unk_0x4CA763CF04749B94(unk_0x18F7BE9ACB7D08F4(), uLocal_137[6]))
				{
					unk_0x6016A20BFEAEFE11(uLocal_137[6], unk_0x18F7BE9ACB7D08F4(), -1, 2048, 2);
					unk_0x6016A20BFEAEFE11(unk_0x18F7BE9ACB7D08F4(), uLocal_137[6], 4000, 2048, 2);
					func_77(&uLocal_271, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_127 = unk_0x5AFB8ED811F05E4D();
					iLocal_131 = 1;
				}
			}
			if (!unk_0x0FAE113CE72ED842(uLocal_137[7]))
			{
				if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), unk_0x761660F5CE986DC4(uLocal_137[7], 1) + Vector(0f, 3f, 0f), 9f, 7f, 5f, 0, 1, 0) && unk_0x4CA763CF04749B94(unk_0x18F7BE9ACB7D08F4(), uLocal_137[7]))
				{
					unk_0x6016A20BFEAEFE11(uLocal_137[7], unk_0x18F7BE9ACB7D08F4(), -1, 2048, 2);
					unk_0x6016A20BFEAEFE11(unk_0x18F7BE9ACB7D08F4(), uLocal_137[7], 4000, 2048, 2);
					func_77(&uLocal_271, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_127 = unk_0x5AFB8ED811F05E4D();
					iLocal_131 = 1;
				}
			}
			if (unk_0x0FAE113CE72ED842(uLocal_137[6]) && unk_0x0FAE113CE72ED842(uLocal_137[7]))
			{
				iLocal_131 = 2;
			}
			break;
		
		case 1:
			if (unk_0xE769D9B5158D0F11(uLocal_183))
			{
				unk_0x2E9500102925D891(uLocal_183, 1);
			}
			if (unk_0xE769D9B5158D0F11(uLocal_184[6]))
			{
				unk_0x2E9500102925D891(uLocal_184[6], 1);
			}
			if (unk_0xE769D9B5158D0F11(uLocal_184[7]))
			{
				unk_0x2E9500102925D891(uLocal_184[7], 1);
			}
			iLocal_126 = unk_0x5AFB8ED811F05E4D();
			if ((iLocal_126 - iLocal_127) > 6000 && !func_63())
			{
				if (!unk_0x0FAE113CE72ED842(uLocal_137[6]))
				{
				}
				if (!unk_0x0FAE113CE72ED842(uLocal_137[7]))
				{
				}
				if (!unk_0xE769D9B5158D0F11(uLocal_182))
				{
					uLocal_182 = func_93(uLocal_214);
				}
				unk_0x8BB3FA32294185BB(0f);
				if (!func_124())
				{
					func_97(1);
				}
				iLocal_131 = 2;
			}
			break;
	}
}

int func_97(int iParam0)
{
	if (func_101())
	{
		Global_104541 = 1;
		Global_104538 = unk_0x5AFB8ED811F05E4D();
		if (func_51(Global_104540))
		{
			func_98(0);
		}
		unk_0xC5FD44365E5AB875(1, "RE_TITLE");
		if (iParam0 && func_51(Global_104540))
		{
			unk_0x27F308A2D49D3A49();
		}
		return 1;
	}
	return 0;
}

void func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_104551.f_24965.f_2 < 3)
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_99(func_100(iParam0), -1);
					Global_104551.f_24965.f_2++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB03A1684359C50A1(Global_104547, 1))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_99(func_100(iParam0), -1);
					Global_104551.f_24965.f_3++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB03A1684359C50A1(Global_104547, 2))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_99(func_100(iParam0), -1);
					Global_104551.f_24965.f_4++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 2);
				}
			}
			break;
	}
}

void func_99(var uParam0, int iParam1)
{
	unk_0x2202872EA73499C3(uParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

char* func_100(int iParam0)
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

int func_101()
{
	switch (func_102(&Global_25292, 0, 5, 0, unk_0xBCF9D020FA9C313D()))
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

int func_102(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90452.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_106(0))
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		unk_0x36643EAE6212D16F(unk_0x0A91D180DDC7A1B8(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x9BEC17E13AB1F07F(8);
		}
		Global_35859 = iParam2;
		Global_35821 = *uParam0;
		Global_35822 = iParam4;
		Global_35820 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35820 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35820)
			{
				if (Global_35826[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35821 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_104(iParam2))
		{
			return 0;
		}
		if (Global_35820 == 8)
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		Global_35826[Global_35820 /*4*/] = Global_35823;
		Global_35826[Global_35820 /*4*/].f_1 = iParam1;
		Global_35826[Global_35820 /*4*/].f_2 = iParam2;
		Global_35826[Global_35820 /*4*/].f_3 = 0;
		Global_35820++;
		if (iParam4 != 0)
		{
			func_103(uParam0, iParam4);
		}
	}
	return 2;
}

void func_103(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35820 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35820)
	{
		if (Global_35826[iVar0 /*4*/] == *uParam0)
		{
			Global_35826[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_104(int iParam0)
{
	return func_105(iParam0, Global_35859);
}

int func_105(int iParam0, int iParam1)
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

int func_106(int iParam0)
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	if (func_104(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_107()
{
	int iVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(uLocal_160[0], 0))
	{
		if (unk_0x4983F8C51A0C0AF3(uLocal_160[0], -1, 0) == uLocal_137[8])
		{
			unk_0xE2B42A82F5C453D8(uLocal_160[0], 60000f);
			unk_0xF01B79642B4ECE5F(uLocal_160[0]);
		}
	}
	if (!unk_0x0FAE113CE72ED842(uLocal_136))
	{
		if (unk_0x0B90D19A63676F41(uLocal_136))
		{
			unk_0x874004759C4BE8DC(uLocal_136, 0);
		}
	}
	else if (unk_0xE769D9B5158D0F11(uLocal_183))
	{
		unk_0x40D517D991458154(&uLocal_183);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x6157232E032EBC56(Local_234, 30f) && unk_0x2A488C176D52CCA5(func_2(unk_0x8CFC7D6E1DA5D304()), Local_234) > 300f)
		{
			if (unk_0x31F12808DC47A9E5(uLocal_137[iVar0]))
			{
				unk_0xDBE64C5761554FBF(&(uLocal_137[iVar0]));
			}
		}
		if (unk_0x0FAE113CE72ED842(uLocal_137[iVar0]))
		{
			if (unk_0xE769D9B5158D0F11(uLocal_184[iVar0]))
			{
				unk_0x40D517D991458154(&(uLocal_184[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_108()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	unk_0x9016574B77A748EE(joaat("g_m_m_chigoon_02"));
	unk_0x9016574B77A748EE(joaat("g_m_y_salvagoon_03"));
	unk_0x9016574B77A748EE(joaat("rebel"));
	unk_0x9016574B77A748EE(joaat("bobcatxl"));
	unk_0x9016574B77A748EE(joaat("sanchez"));
	unk_0x9016574B77A748EE(joaat("a_c_rottweiler"));
	unk_0x9016574B77A748EE(joaat("prop_security_case_01"));
	unk_0x831CD0FBFB26EC7E("random@dealgonewrong");
	unk_0x831CD0FBFB26EC7E("random@dealgonewrongdead_peds");
	if ((((((((unk_0xEDFE27D1AEA0EA7F(joaat("g_m_m_chigoon_02")) && unk_0xEDFE27D1AEA0EA7F(joaat("g_m_y_salvagoon_03"))) && unk_0xEDFE27D1AEA0EA7F(joaat("rebel"))) && unk_0xEDFE27D1AEA0EA7F(joaat("bobcatxl"))) && unk_0xEDFE27D1AEA0EA7F(joaat("sanchez"))) && unk_0xEDFE27D1AEA0EA7F(joaat("a_c_rottweiler"))) && unk_0xEDFE27D1AEA0EA7F(joaat("prop_security_case_01"))) && unk_0x028356968FDD2DF2("random@dealgonewrong")) && unk_0x028356968FDD2DF2("random@dealgonewrongdead_peds"))
	{
		unk_0x1701E0E6A11D6B65(Local_234 - Vector(150f, 150f, 150f), Local_234 + Vector(150f, 150f, 150f), 0, 1, 1, 1);
		unk_0x116D235ABEF5CE46(joaat("bobcatxl"), 1);
		unk_0x116D235ABEF5CE46(joaat("rebel"), 1);
		unk_0x4F7751BE82240EB4(5, 0);
		unk_0x4F7751BE82240EB4(3, 0);
		uLocal_160[0] = unk_0x3064CCF56C6C32BC(joaat("bobcatxl"), -1626.94f, 4729.889f, 51.3463f, 347.1188f, 1, 1, 0);
		unk_0x337F2213526139E0(uLocal_160[0], 1, 0);
		unk_0x9B53B2691E2B1F79(uLocal_160[0], 1084227584);
		unk_0x0F3F86C855582784(uLocal_160[0], 1, 1, 0);
		unk_0x91663DAD5DDAFA96(uLocal_160[0], 2);
		unk_0x1A9F0BE7AECEABB1(uLocal_160[0], 500f);
		unk_0xE4A75DC396208954(uLocal_160[0], 500f);
		unk_0xDE2241F5D2C60ED8(uLocal_160[0], 1, 1);
		unk_0x3A512019378B91C7(uLocal_160[0], 0, 0, 1148846080);
		unk_0xEFD0EAC2563BA3F1(uLocal_160[0], 6);
		unk_0x0C479E1994DA8B57(uLocal_160[0], "RADIO_06_COUNTRY");
		unk_0x1C4B08C81FA52071(uLocal_160[0], "76JON418");
		unk_0xA0611ED281CB47AA(uLocal_160[0], 1);
		uLocal_160[1] = unk_0x3064CCF56C6C32BC(joaat("rebel"), -1619.432f, 4747.792f, 52.7502f, 146.6017f, 1, 1, 0);
		unk_0x337F2213526139E0(uLocal_160[1], 1, 0);
		unk_0x9B53B2691E2B1F79(uLocal_160[1], 1084227584);
		unk_0x0F3F86C855582784(uLocal_160[1], 1, 1, 0);
		unk_0x91663DAD5DDAFA96(uLocal_160[1], 2);
		unk_0x1A9F0BE7AECEABB1(uLocal_160[1], 600f);
		unk_0xE4A75DC396208954(uLocal_160[1], 400f);
		unk_0xDE2241F5D2C60ED8(uLocal_160[1], 1, 1);
		unk_0xDE2241F5D2C60ED8(uLocal_160[1], 2, 1);
		unk_0xDE2241F5D2C60ED8(uLocal_160[1], 3, 0);
		unk_0xDE2241F5D2C60ED8(uLocal_160[1], 4, 0);
		unk_0xEFD0EAC2563BA3F1(uLocal_160[1], 6);
		unk_0x0C479E1994DA8B57(uLocal_160[1], "RADIO_06_COUNTRY");
		unk_0x1C4B08C81FA52071(uLocal_160[1], "79ERK121");
		unk_0xA0611ED281CB47AA(uLocal_160[1], 1);
		unk_0x45DD2A11584F4EC4(uLocal_160[1], 1);
		uLocal_160[2] = unk_0x3064CCF56C6C32BC(joaat("bobcatxl"), -1636.216f, 4748.061f, 51.5484f, 199.3236f, 1, 1, 0);
		unk_0x1C4B08C81FA52071(uLocal_160[2], "83JOH802");
		unk_0x337F2213526139E0(uLocal_160[2], 1, 0);
		unk_0x9B53B2691E2B1F79(uLocal_160[2], 1084227584);
		unk_0x0F3F86C855582784(uLocal_160[2], 1, 1, 0);
		unk_0x91663DAD5DDAFA96(uLocal_160[2], 2);
		unk_0x1A9F0BE7AECEABB1(uLocal_160[2], 60f);
		unk_0xE4A75DC396208954(uLocal_160[2], 1000f);
		unk_0xDE2241F5D2C60ED8(uLocal_160[2], 1, 0);
		unk_0x3A512019378B91C7(uLocal_160[2], 1, 0, 1148846080);
		uLocal_160[3] = unk_0x3064CCF56C6C32BC(joaat("rebel"), -1641.578f, 4736.783f, 52.5984f, 278.1865f, 1, 1, 0);
		unk_0x1C4B08C81FA52071(uLocal_160[3], "85TOR114");
		unk_0x337F2213526139E0(uLocal_160[3], 1, 0);
		unk_0x9B53B2691E2B1F79(uLocal_160[3], 1084227584);
		unk_0x0F3F86C855582784(uLocal_160[3], 1, 1, 0);
		unk_0x91663DAD5DDAFA96(uLocal_160[3], 2);
		unk_0x1A9F0BE7AECEABB1(uLocal_160[3], 500f);
		unk_0xE4A75DC396208954(uLocal_160[3], 500f);
		unk_0xDE2241F5D2C60ED8(uLocal_160[3], 1, 0);
		unk_0xDE2241F5D2C60ED8(uLocal_160[3], 2, 0);
		unk_0xDE2241F5D2C60ED8(uLocal_160[3], 3, 0);
		unk_0xDE2241F5D2C60ED8(uLocal_160[3], 4, 0);
		unk_0x3A512019378B91C7(uLocal_160[3], 0, 0, 1148846080);
		unk_0x3A512019378B91C7(uLocal_160[3], 5, 0, 1148846080);
		if (!unk_0x351CD242DF0BE9BA(uLocal_214))
		{
			iVar0 = 0;
			unk_0xD2A9C3F486236CC5(&iVar0, 1);
			unk_0xD2A9C3F486236CC5(&iVar0, 3);
			unk_0xD2A9C3F486236CC5(&iVar0, 4);
			uLocal_214 = unk_0x8767B3B24E487514(joaat("pickup_money_case"), Local_237, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
			unk_0x419C9117019F2E5A(joaat("prop_security_case_01"));
		}
		Local_246[0 /*3*/] = { -1640.411f, 4740.702f, 52.6218f };
		Local_246[1 /*3*/] = { -1624.664f, 4746.569f, 51.541f };
		Local_246[2 /*3*/] = { -1626.339f, 4734.232f, 51.6176f };
		Local_246[3 /*3*/] = { -1634.297f, 4741.213f, 51.9737f };
		Local_246[4 /*3*/] = { -1644.717f, 4736.446f, 52.3014f };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!unk_0x351CD242DF0BE9BA(uLocal_215[iVar1]))
			{
				iVar2 = 0;
				unk_0xD2A9C3F486236CC5(&iVar2, 3);
				unk_0xD2A9C3F486236CC5(&iVar2, 4);
				if (iVar1 < 2)
				{
					uLocal_215[iVar1] = unk_0x5ABEF538412867C6(joaat("pickup_weapon_sawnoffshotgun"), Local_246[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
				else if (iVar1 == 4)
				{
					uLocal_215[iVar1] = unk_0x8767B3B24E487514(joaat("pickup_weapon_assaultrifle"), Local_246[iVar1 /*3*/], 90f, 50f, 0f, 0, 50, 2, 1, 0);
				}
				else
				{
					uLocal_215[iVar1] = unk_0x5ABEF538412867C6(joaat("pickup_weapon_pistol"), Local_246[iVar1 /*3*/], iVar2, -1, 1, 0);
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
				uLocal_137[iVar1] = unk_0x364B87C5C64BD100(22, joaat("g_m_y_salvagoon_03"), Local_52[iVar1 /*3*/], fLocal_80[iVar1], 1, 1);
				unk_0x764AFC5A3A16C2B0(uLocal_137[iVar1], 227, 1);
			}
			else
			{
				uLocal_137[iVar1] = unk_0x364B87C5C64BD100(22, joaat("g_m_m_chigoon_02"), Local_52[iVar1 /*3*/], fLocal_80[iVar1], 1, 1);
			}
			iVar1++;
		}
		iLocal_147[0] = unk_0x364B87C5C64BD100(26, joaat("a_c_rottweiler"), -1635.005f, 4737.181f, 53.4995f, 33.4155f, 1, 1);
		iLocal_147[1] = unk_0x364B87C5C64BD100(26, joaat("a_c_rottweiler"), -1625.215f, 4741.119f, 52.5762f, 316.2733f, 1, 1);
		iVar1 = 0;
		while (iVar1 < iLocal_147)
		{
			unk_0xBDFA8A71B1A23D86(iLocal_147[iVar1], 1);
			unk_0xF342BF6A7A4C7A8F(iLocal_147[iVar1], 1, 0);
			unk_0x764AFC5A3A16C2B0(iLocal_147[iVar1], 227, 1);
			Local_90 = { unk_0x761660F5CE986DC4(iLocal_147[iVar1], 1) };
			Local_93 = { Local_90.f_0, (Local_90.f_1 - 2f), (Local_90.f_2 - 0.5f) };
			Local_96 = { Local_90.f_0, (Local_90.f_1 + 50f), (Local_90.f_2 - 0.5f) };
			unk_0xD2F6F6FC4C503C52(Local_93, Local_96, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iVar1++;
		}
		unk_0x981A584B2E775D45(uLocal_137[0], "random@dealgonewrongdead_peds", "ped_b", -1635.928f, 4707.941f, 46.383f, -29.25f, 12.25f, 171.75f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x981A584B2E775D45(uLocal_137[1], "random@dealgonewrongdead_peds", "ped_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x981A584B2E775D45(uLocal_137[2], "random@dealgonewrongdead_peds", "ped_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x981A584B2E775D45(uLocal_137[3], "random@dealgonewrongdead_peds", "ped_c", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x981A584B2E775D45(uLocal_137[4], "random@dealgonewrongdead_peds", "ped_d", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x981A584B2E775D45(uLocal_137[5], "random@dealgonewrongdead_peds", "ped_e", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x981A584B2E775D45(iLocal_147[0], "random@dealgonewrongdead_peds", "dog_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x981A584B2E775D45(iLocal_147[1], "random@dealgonewrongdead_peds", "dog_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x5DB02DB8247E27C9(50f);
		func_110();
		unk_0x5DB02DB8247E27C9(1f);
		if (unk_0xC4B84EB67F78C1F0(uLocal_160[0], 0))
		{
			uLocal_137[8] = unk_0xC52E83A4C0F88DAB(uLocal_160[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
			unk_0x337F2213526139E0(uLocal_137[8], 1, 0);
			unk_0xD60265036564F81C(uLocal_137[8], 1);
			unk_0x874004759C4BE8DC(uLocal_137[8], 0);
		}
		if (!unk_0xE769D9B5158D0F11(uLocal_181))
		{
		}
		unk_0x48E76A4B7B58B77A("re_DealGoneWrong", &uLocal_270);
		uLocal_137[6] = unk_0x364B87C5C64BD100(22, joaat("g_m_m_chigoon_02"), Local_52[6 /*3*/], fLocal_80[6], 1, 1);
		func_90(&uLocal_271, 4, uLocal_137[6], "REDGWChinese", 0, 1);
		unk_0x40E2910BAF39B1C7(uLocal_137[6], 1);
		unk_0xDC633118188196B0(uLocal_137[6], 1);
		unk_0x641E77554763EF06(uLocal_137[6], uLocal_270);
		uVar3 = unk_0x3C3438327FFEB224(Local_52[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, 0);
		unk_0x4DD2EB945B4192FD(uLocal_137[6], uVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xAB888668498FCC04(uVar3, 1);
		unk_0x10F31830C95ED2E5(uLocal_137[6], 1);
		unk_0x764AFC5A3A16C2B0(uLocal_137[6], 227, 1);
		uLocal_137[7] = unk_0x364B87C5C64BD100(22, joaat("g_m_y_salvagoon_03"), -1640.311f, 4738.4f, 50.2f, fLocal_80[7], 1, 1);
		func_90(&uLocal_271, 5, uLocal_137[7], "REDGWSalvadoran", 0, 1);
		unk_0x40E2910BAF39B1C7(uLocal_137[7], 1);
		unk_0xDC633118188196B0(uLocal_137[7], 1);
		unk_0x641E77554763EF06(uLocal_137[7], iLocal_270);
		uVar4 = unk_0x3C3438327FFEB224(Local_52[7 /*3*/] + Vector(0.92f, 0.65f, -0.65f), 0f, 0f, 34.1111f, 0);
		unk_0x4DD2EB945B4192FD(uLocal_137[7], uVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xAB888668498FCC04(uVar4, 1);
		unk_0xE8444942F8401658(uVar4, 0.5f);
		unk_0x10F31830C95ED2E5(uLocal_137[7], 1);
		unk_0x764AFC5A3A16C2B0(uLocal_137[7], 227, 1);
		uLocal_136 = unk_0x364B87C5C64BD100(22, joaat("g_m_m_chigoon_02"), Local_117, fLocal_123, 1, 1);
		func_90(&uLocal_271, 4, uLocal_136, "REDGWChinese", 0, 1);
		unk_0x40E2910BAF39B1C7(uLocal_136, 1);
		unk_0x641E77554763EF06(uLocal_136, iLocal_270);
		uVar5 = unk_0x3C3438327FFEB224(Local_117, 7.5f, -12.75f, 51.5f, 0);
		unk_0x4DD2EB945B4192FD(uLocal_136, uVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xAB888668498FCC04(uVar5, 1);
		unk_0x58F6B49606932378(uLocal_136, 4f, 18f, 326.7277f, 0, 1);
		unk_0x10F31830C95ED2E5(uLocal_136, 1);
		unk_0x764AFC5A3A16C2B0(uLocal_136, 227, 1);
		unk_0xFB5F4D76105A21B5(5, iLocal_270, joaat("player"));
		if (func_36() == 0)
		{
			func_90(&uLocal_271, 0, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
		}
		if (func_36() == 1)
		{
			func_90(&uLocal_271, 1, unk_0x18F7BE9ACB7D08F4(), "FRANKLIN", 0, 1);
		}
		if (func_36() == 2)
		{
			func_90(&uLocal_271, 2, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
		}
		uLocal_221[0] = unk_0x6B01B73E7B5A03F7(1110, -1632.953f, 4745.359f, 51.7876f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[1] = unk_0x6B01B73E7B5A03F7(1110, -1634.87f, 4744.458f, 51.8233f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[2] = unk_0x6B01B73E7B5A03F7(1110, -1636.971f, 4736.595f, 52.2814f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[3] = unk_0x6B01B73E7B5A03F7(1110, -1625.561f, 4741.241f, 51.7102f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[4] = unk_0x6B01B73E7B5A03F7(1110, -1621.533f, 4744.576f, 51.9093f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[5] = unk_0x6B01B73E7B5A03F7(1110, -1621.963f, 4737.039f, 51.4174f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[6] = unk_0x6B01B73E7B5A03F7(1110, -1628.517f, 4736.906f, 51.8207f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[7] = unk_0x6B01B73E7B5A03F7(1110, -1629.324f, 4732.146f, 51.6947f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[8] = unk_0x6B01B73E7B5A03F7(1110, -1640.287f, 4738.437f, 52.1756f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[9] = unk_0x6B01B73E7B5A03F7(1110, -1640.055f, 4701.995f, 41.2428f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[10] = unk_0x6B01B73E7B5A03F7(1110, -1641.924f, 4692.236f, 38.3762f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!unk_0x74C2FE037DFC8B4A(uLocal_137[iVar1], 0))
			{
				unk_0xBDFA8A71B1A23D86(uLocal_137[iVar1], 1);
				unk_0x882B022908552A3F(uLocal_137[iVar1], 0, 0.3f, 0.6f, 3);
				unk_0x882B022908552A3F(uLocal_137[iVar1], 0, 0.65f, 0.6f, 3);
				unk_0x4EDE34FBADD967A6(unk_0x61E9B3BFA06B017B(100, 500));
				if (iVar1 <= 5)
				{
					if (unk_0xE769D9B5158D0F11(uLocal_184[iVar1]))
					{
						unk_0x40D517D991458154(&(uLocal_184[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (unk_0x31F12808DC47A9E5(unk_0x952F33F151D40D1A()))
		{
			if (!unk_0x90D1FDC9D31B7BE1(unk_0x952F33F151D40D1A()))
			{
				unk_0x337F2213526139E0(unk_0x952F33F151D40D1A(), 1, 0);
			}
		}
		iLocal_455 = 1;
	}
}

Vector3 func_109(struct<3> Param0)
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

void func_110()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x31F12808DC47A9E5(uLocal_160[iVar0]))
		{
			Local_99 = { unk_0x0AF3D0AB54EA2104(uLocal_160[iVar0], 0f, 0f, 0.5f) };
		}
		iLocal_133 = 0;
		while (iLocal_133 < 5)
		{
			fLocal_120 = unk_0x3D81861E1A1652A9(1.5f, 2.5f);
			fLocal_121 = unk_0x3D81861E1A1652A9(2f, 4f);
			fLocal_122 = unk_0x3D81861E1A1652A9(0.1f, 2f);
			unk_0x4EDE34FBADD967A6(0);
			Local_102 = { (Local_99.f_0 - fLocal_120), (Local_99.f_1 - fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { (Local_99.f_0 + fLocal_120), (Local_99.f_1 + fLocal_121), Local_99.f_2 };
			unk_0xD2F6F6FC4C503C52(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_102 = { (Local_99.f_0 + fLocal_120), (Local_99.f_1 + fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { (Local_99.f_0 - fLocal_120), (Local_99.f_1 - fLocal_121), Local_99.f_2 };
			unk_0xD2F6F6FC4C503C52(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_102 = { (Local_99.f_0 + fLocal_120), (Local_99.f_1 - fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { (Local_99.f_0 - fLocal_120), (Local_99.f_1 + fLocal_121), Local_99.f_2 };
			unk_0xD2F6F6FC4C503C52(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_102 = { (Local_99.f_0 - fLocal_120), (Local_99.f_1 + fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { (Local_99.f_0 + fLocal_120), (Local_99.f_1 - fLocal_121), Local_99.f_2 };
			unk_0xD2F6F6FC4C503C52(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_102 = { Local_99.f_0, (Local_99.f_1 + fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { Local_99.f_0, (Local_99.f_1 - fLocal_121), Local_99.f_2 };
			unk_0xD2F6F6FC4C503C52(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iLocal_133++;
		}
		iVar0++;
	}
}

int func_111()
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_118())
	{
		return 1;
	}
	if (func_112(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_112(float fParam0, bool bParam1)
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
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_38(func_36()))
		{
			iVar36 = func_56();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 2) && !unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 3))
				{
					func_113(iVar32, &Var0);
					fVar35 = unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var0.f_6, 1);
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

void func_113(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_114(uParam1, "Abigail1", func_116(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 1:
			func_114(uParam1, "Abigail2", func_116(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 2:
			func_114(uParam1, "Barry1", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 3:
			func_114(uParam1, "Barry2", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 4:
			func_114(uParam1, "Barry3", func_116(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 5:
			func_114(uParam1, "Barry3A", func_116(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 6:
			func_114(uParam1, "Barry3C", func_116(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 7:
			func_114(uParam1, "Barry4", func_116(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_115(iParam0), 0, 0);
			break;
		
		case 8:
			func_114(uParam1, "Dreyfuss1", func_116(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 9:
			func_114(uParam1, "Epsilon1", func_116(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 10:
			func_114(uParam1, "Epsilon2", func_116(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 11:
			func_114(uParam1, "Epsilon3", func_116(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 12:
			func_114(uParam1, "Epsilon4", func_116(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 13:
			func_114(uParam1, "Epsilon5", func_116(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 14:
			func_114(uParam1, "Epsilon6", func_116(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 15:
			func_114(uParam1, "Epsilon7", func_116(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 16:
			func_114(uParam1, "Epsilon8", func_116(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 17:
			func_114(uParam1, "Extreme1", func_116(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 18:
			func_114(uParam1, "Extreme2", func_116(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 19:
			func_114(uParam1, "Extreme3", func_116(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 20:
			func_114(uParam1, "Extreme4", func_116(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 21:
			func_114(uParam1, "Fanatic1", func_116(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 22:
			func_114(uParam1, "Fanatic2", func_116(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 23:
			func_114(uParam1, "Fanatic3", func_116(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_115(iParam0), 0, 1);
			break;
		
		case 24:
			func_114(uParam1, "Hao1", func_116(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_115(iParam0), 0, 1);
			break;
		
		case 25:
			func_114(uParam1, "Hunting1", func_116(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 26:
			func_114(uParam1, "Hunting2", func_116(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 27:
			func_114(uParam1, "Josh1", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 28:
			func_114(uParam1, "Josh2", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 29:
			func_114(uParam1, "Josh3", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 30:
			func_114(uParam1, "Josh4", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 31:
			func_114(uParam1, "Maude1", func_116(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 32:
			func_114(uParam1, "Minute1", func_116(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 33:
			func_114(uParam1, "Minute2", func_116(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 34:
			func_114(uParam1, "Minute3", func_116(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 35:
			func_114(uParam1, "MrsPhilips1", func_116(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 36:
			func_114(uParam1, "MrsPhilips2", func_116(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 37:
			func_114(uParam1, "Nigel1", func_116(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 38:
			func_114(uParam1, "Nigel1A", func_116(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 39:
			func_114(uParam1, "Nigel1B", func_116(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 40:
			func_114(uParam1, "Nigel1C", func_116(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 41:
			func_114(uParam1, "Nigel1D", func_116(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 42:
			func_114(uParam1, "Nigel2", func_116(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 43:
			func_114(uParam1, "Nigel3", func_116(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 44:
			func_114(uParam1, "Omega1", func_116(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 45:
			func_114(uParam1, "Omega2", func_116(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 46:
			func_114(uParam1, "Paparazzo1", func_116(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 47:
			func_114(uParam1, "Paparazzo2", func_116(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 48:
			func_114(uParam1, "Paparazzo3", func_116(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 49:
			func_114(uParam1, "Paparazzo3A", func_116(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 50:
			func_114(uParam1, "Paparazzo3B", func_116(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 51:
			func_114(uParam1, "Paparazzo4", func_116(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 52:
			func_114(uParam1, "Rampage1", func_116(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 54:
			func_114(uParam1, "Rampage3", func_116(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 55:
			func_114(uParam1, "Rampage4", func_116(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 56:
			func_114(uParam1, "Rampage5", func_116(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 53:
			func_114(uParam1, "Rampage2", func_116(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 57:
			func_114(uParam1, "TheLastOne", func_116(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 58:
			func_114(uParam1, "Tonya1", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 59:
			func_114(uParam1, "Tonya2", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 60:
			func_114(uParam1, "Tonya3", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 61:
			func_114(uParam1, "Tonya4", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 62:
			func_114(uParam1, "Tonya5", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_114(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_115(int iParam0)
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

struct<2> func_116(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_117(iParam0) };
	if (unk_0xFAFFA408239A026B(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_117(int iParam0)
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

int func_118()
{
	if (func_121() && !func_122())
	{
		return 1;
	}
	if (func_120() && func_119())
	{
		return 1;
	}
	return 0;
}

bool func_119()
{
	return Global_104269 > 0;
}

int func_120()
{
	if (Global_89896 != -1)
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 20);
	}
	return 0;
}

int func_122()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x05C1AD623B6C5E86() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_123()
{
	if (!func_104(5))
	{
		return 1;
	}
	if (func_118())
	{
		return 1;
	}
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_112(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_124()
{
	if ((Global_104540 == func_60() && unk_0xD436A6CEB14BAC66()) && Global_104541)
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_60();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_127(iParam0);
	unk_0x0A022B047163ACAE(0);
	unk_0xD42F50467E7AD46D(1);
	Global_104537 = 0;
	func_126();
}

void func_126()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			unk_0x116D235ABEF5CE46(unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)), 1);
		}
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 0);
	}
}

void func_127(int iParam0)
{
	Global_104540 = iParam0;
}

int func_128(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_142815)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_60();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_169())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			Var1 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_122())
			{
				return 0;
			}
		}
		if (!Global_104551.f_9055)
		{
			return 0;
		}
		if (func_44(0))
		{
			return 0;
		}
		if (func_118())
		{
			return 0;
		}
		if (func_168())
		{
			return 0;
		}
		if (Global_104540 != -1)
		{
			return 0;
		}
		if (func_38(func_36()))
		{
			if (func_112(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_167(iParam3))
		{
			return 0;
		}
		if (func_38(func_36()))
		{
			if (func_166(func_36()) == 4 || func_166(func_36()) == 5)
			{
				return 0;
			}
		}
		if (func_38(func_36()))
		{
			if (!func_165(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_164(Global_104551.f_24965.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x5AFB8ED811F05E4D() - Global_104542) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_163())
		{
			return 0;
		}
		if (unk_0xEFD3E4A202A0D9DA())
		{
			return 0;
		}
		if (unk_0xD436A6CEB14BAC66())
		{
			return 0;
		}
		if (!func_154(4))
		{
			return 0;
		}
		if (!func_104(5))
		{
			return 0;
		}
		if (func_153(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xB79050CDE709F080(unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4())))
		{
			if ((unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(377.153f, -717.567f, 10.0536f) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(320.9934f, 265.2515f, 82.1221f)) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_153(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_167(30) && !func_153(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_38(func_36()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_104551.f_2353.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_104551.f_2353.f_539.f_2276[iVar4];
				if (func_152(iVar8))
				{
					if (func_130(iVar4))
					{
						if (!func_129(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var5) < (210f * 210f))
							{
								if (func_36() != iVar4)
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

bool func_129(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_104551.f_2353.f_539.f_2276[iParam0];
	return func_131(iVar0);
}

int func_131(int iParam0)
{
	return func_132(iParam0, 1);
}

int func_132(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_152(iParam0))
	{
		return 0;
	}
	func_133(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_133(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_134(func_145(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_134(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_144(iParam0, iParam1))
	{
		iVar0 = func_143(iParam1);
		iVar1 = func_141(iParam0);
		iVar2 = (func_141(iParam0) - func_141(iParam1));
		iVar3 = (func_143(iParam0) - func_143(iParam1));
		iVar4 = (func_140(iParam0) - func_140(iParam1));
		iVar5 = (func_139(iParam0) - func_139(iParam1));
		iVar6 = (func_138(iParam0) - func_138(iParam1));
		iVar7 = (func_137(iParam0) - func_137(iParam1));
	}
	else
	{
		iVar0 = func_143(iParam0);
		iVar1 = func_141(iParam1);
		iVar2 = (func_141(iParam1) - func_141(iParam0));
		iVar3 = (func_143(iParam1) - func_143(iParam0));
		iVar4 = (func_140(iParam1) - func_140(iParam0));
		iVar5 = (func_139(iParam1) - func_139(iParam0));
		iVar6 = (func_138(iParam1) - func_138(iParam0));
		iVar7 = (func_137(iParam1) - func_137(iParam0));
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
		iVar4 = (iVar4 + func_136(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_135(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_135(float fParam0, float fParam1, float fParam2)
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

int func_136(int iParam0, int iParam1)
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

int func_137(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_138(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_139(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_140(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_141(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_142(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_142(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_143(int iParam0)
{
	return iParam0 & 15;
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_152(iParam1) || !func_152(iParam0))
	{
		return 1;
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
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
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
	return 0;
}

int func_145()
{
	var uVar0;
	
	func_151(&uVar0, unk_0xB093145A4ED05C87());
	func_150(&uVar0, unk_0x4BF279EB036481A0());
	func_149(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_148(&uVar0, unk_0x518720E0DE404FFC());
	func_147(&uVar0, unk_0x5E3E9A684A609866());
	func_146(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

void func_146(var uParam0, int iParam1)
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

void func_147(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_148(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_143(*uParam0);
	iVar1 = func_141(*uParam0);
	if (iParam1 < 1 || iParam1 > func_136(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_150(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_151(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_152(int iParam0)
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
	iVar0 = func_137(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_138(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_139(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_141(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_143(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_140(iParam0);
	if (iVar5 < 1 || iVar5 > func_136(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_153(int iParam0, int iParam1)
{
	if (unk_0xB03A1684359C50A1(Global_104551.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				iVar0 = func_36();
				if (!func_38(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_162()) || Global_103598) || Global_25235) || func_161()) || func_85(8, -1)) || func_160()) || func_159()) || func_158()) || func_157()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1) || func_162()) || Global_25235) || func_161()) || func_85(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_162()) || Global_103598) || Global_25235) || func_161()) || func_85(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_104551.f_7658.f_919[iVar0] == 5) || Global_36406 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_162()) || Global_103598) || Global_25235) || func_161()) || func_85(8, -1)) || func_160()) || func_159()) || func_157()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_162() || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || func_85(8, -1)) || func_157()) || func_156()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_85(8, -1) || func_160()) || func_159()) || func_156()) || func_155())
						{
							return 0;
						}
						if ((unk_0x51CFE20A158947F4() && unk_0x32C5C8379484CA74() != 3) && unk_0xCAC20ED19D675C6E() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
						{
							if ((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_162()) || Global_25235) || func_161()) || func_85(8, -1)) || func_159()) || func_158()) || func_157()) || Global_104551.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || func_162()) || func_159()) || Global_103598) || Global_25235) || func_161()) || Global_36991) || func_85(8, -1)) || func_158()) || func_156()) || func_157()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0x00C9F17EF169BFC9(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_162()) || Global_103598) || Global_25235) || func_161()) || func_85(8, -1)) || func_158()) || func_156()) || func_160()) || func_159()) || func_157())
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

var func_155()
{
	return Global_92868.f_1;
}

int func_156()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_157()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	if (Global_71112)
	{
		return 1;
	}
	else if (Global_55895 && !Global_55901)
	{
		return 1;
	}
	return 0;
}

bool func_159()
{
	return Global_92881.f_316 > 0;
}

bool func_160()
{
	return Global_92881.f_315 > 0;
}

var func_161()
{
	return Global_1312854;
}

int func_162()
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
	}
	return 0;
}

int func_163()
{
	func_83();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_164(int iParam0)
{
	return func_144(func_145(), iParam0);
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_36();
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

int func_166(int iParam0)
{
	if (!func_38(iParam0))
	{
		return 7;
	}
	return Global_104551.f_7658.f_919[iParam0];
}

bool func_167(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_169())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xB03A1684359C50A1(Global_104551.f_24965, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB03A1684359C50A1(Global_104551.f_24965.f_1, iVar0);
	}
	return bVar1;
}

int func_168()
{
	var uVar0;
	
	if (Global_25383)
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			uVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0xC4B84EB67F78C1F0(uVar0, 0))
			{
				if (!unk_0x0FAE113CE72ED842(unk_0x4983F8C51A0C0AF3(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_169()
{
	int iVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0xD51AEB3E72C71D1B())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xD2A9C3F486236CC5(&iVar0, 2);
				unk_0xD2A9C3F486236CC5(&iVar0, 4);
				unk_0xD2A9C3F486236CC5(&iVar0, 6);
				unk_0xD2A9C3F486236CC5(&Global_25, 2);
				unk_0xD2A9C3F486236CC5(&Global_25, 4);
				unk_0xD2A9C3F486236CC5(&Global_25, 6);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x16DC46A28107A94A())
				{
					iVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&iVar0, 0);
					unk_0x167AC4B8CEEB1F11(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143070 == 2)
	{
		return 1;
	}
	else if (Global_143070 == 3)
	{
		return 0;
	}
	if (unk_0x16DC46A28107A94A())
	{
		if (unk_0xB03A1684359C50A1(unk_0x3A75EA627A024B7A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_170()
{
	int iVar0;
	
	if (iLocal_455 && !iLocal_262)
	{
		unk_0x6D88D1D62502CEFC();
		unk_0x8BB3FA32294185BB(1f);
		if (unk_0xE769D9B5158D0F11(uLocal_181))
		{
			unk_0x40D517D991458154(&uLocal_181);
		}
		if (unk_0xE769D9B5158D0F11(uLocal_182))
		{
			unk_0x40D517D991458154(&uLocal_182);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xE769D9B5158D0F11(uLocal_194[iVar0]))
			{
				unk_0x40D517D991458154(&(uLocal_194[iVar0]));
			}
			if (unk_0xE769D9B5158D0F11(uLocal_204[iVar0]))
			{
				unk_0x40D517D991458154(&(uLocal_204[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					if (!unk_0x0FAE113CE72ED842(uLocal_150[iVar0]))
					{
						if (unk_0xEA07F07380ABC460(uLocal_150[iVar0], unk_0x18F7BE9ACB7D08F4(), 100f, 100f, 100f, 0, 1, 0))
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
			if (unk_0xE769D9B5158D0F11(uLocal_199[iVar0]))
			{
				unk_0x40D517D991458154(&(uLocal_199[iVar0]));
			}
			if (unk_0xE769D9B5158D0F11(uLocal_209[iVar0]))
			{
				unk_0x40D517D991458154(&(uLocal_209[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					if (!unk_0x0FAE113CE72ED842(uLocal_155[iVar0]))
					{
						if (unk_0xEA07F07380ABC460(uLocal_155[iVar0], unk_0x18F7BE9ACB7D08F4(), 100f, 100f, 100f, 0, 1, 0))
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
			unk_0x4F7751BE82240EB4(5, 1);
			unk_0x4F7751BE82240EB4(3, 1);
		}
		if (bLocal_266)
		{
			func_3(func_36(), 1, 25000);
		}
	}
	func_171(-1);
	unk_0x810C5D6462DD69E6();
}

void func_171(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_60();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_124())
	{
		func_175(iParam0);
		unk_0xC5FD44365E5AB875(0, 0);
		Global_104542 = unk_0x5AFB8ED811F05E4D();
		func_174(30000);
		StringCopy(&cVar0, func_173(Global_104540, 1), 64);
		if (func_59(Global_104540) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104539, 64);
		}
		unk_0x50686B0B250B8042(&cVar0, Global_104537, (unk_0x5AFB8ED811F05E4D() - Global_104538), 0);
	}
	else if (unk_0xB03A1684359C50A1(Global_104547, 0) && Global_104551.f_24965.f_2 < 3)
	{
		unk_0x62148293B793073B(&Global_104547, 0);
	}
	func_172(&Global_25292);
	Global_104541 = 0;
	func_127(-1);
}

void func_172(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35821)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35820 = 0;
	Global_35822 = 0;
	Global_35859 = 15;
	Global_55898 = 0;
	Global_55899 = 0;
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
	Global_36410 = (unk_0x5AFB8ED811F05E4D() + iParam0);
}

void func_175(int iParam0)
{
	func_176(iParam0, 0, func_181(iParam0));
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_145();
	func_179(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_178(iParam0, &uVar0);
	Var1 = { func_177(&uVar0) };
}

struct<16> func_177(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_139(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_138(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_137(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_140(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_143(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_141(*uParam0), 64);
	return Var0;
}

void func_178(int iParam0, var uParam1)
{
	Global_104551.f_24965.f_43[iParam0] = *uParam1;
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
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_143(*uParam0);
	iVar2 = func_140(*uParam0);
	iVar3 = func_139(*uParam0);
	iVar4 = func_138(*uParam0);
	iVar5 = func_137(*uParam0);
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
	iVar6 = func_136(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_136(iVar1, iVar0);
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
	func_151(uParam0, iParam1);
	func_150(uParam0, iParam2);
	func_149(uParam0, iParam3);
	func_147(uParam0, iParam5);
	func_148(uParam0, iParam4);
	func_146(uParam0, iParam6);
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

