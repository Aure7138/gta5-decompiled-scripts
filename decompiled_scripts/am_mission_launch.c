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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 10;
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
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	struct<22> Local_99 = { 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	struct<14> Local_124 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_138[32];
	var uLocal_235 = 0;
	int iLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	struct<2> Local_249 = { 0, 0 } ;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 16;
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
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
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
	char* sLocal_422 = NULL;
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
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	func_350(ScriptParam_0);
	while (true)
	{
		func_349();
		if (func_339() || !func_338(unk_0xFB6B3EEFAB2DD12C(), 0, 1))
		{
			func_336();
		}
		switch (func_335(unk_0x1E7FB1CA38C403F6()))
		{
			case 0:
				if (func_334() == 2)
				{
					Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_1 = 2;
				}
				else if (func_334() == 6)
				{
					Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_1 = 5;
				}
				break;
			
			case 2:
				if (func_334() == 2)
				{
					func_327();
					func_49();
				}
				else if (func_334() == 6)
				{
					Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_1 = 5;
				}
				if (((func_46(unk_0xFB6B3EEFAB2DD12C(), 1) || func_43(unk_0xFB6B3EEFAB2DD12C())) || unk_0xF44A5E894FE76438(uLocal_237, 8)) || unk_0xF44A5E894FE76438(uLocal_237, 16))
				{
					Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_1 = 6;
				}
				break;
			
			case 5:
				func_42(&(Local_99.f_19));
				if (func_41(&(Local_99.f_19)))
				{
					Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_1 = 6;
				}
				break;
			
			case 3:
				Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_1 = 6;
			
			case 6:
				func_336();
				break;
		}
		if (unk_0x04DE35D10A718EEF())
		{
			switch (func_334())
			{
				case 0:
					func_40(&(Local_99.f_17), 0, 0);
					Local_99.f_1 = 2;
					break;
				
				case 2:
					func_36();
					func_34();
					func_3();
					if (func_1())
					{
						Local_99.f_1 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

bool func_2()
{
	return unk_0xF44A5E894FE76438(Local_99.f_0, 6);
}

void func_3()
{
	if (unk_0x04DE35D10A718EEF())
	{
		switch (Local_99.f_2)
		{
			case 0:
				if (!unk_0xF44A5E894FE76438(Local_99.f_0, 10))
				{
					if (func_33(&(Local_99.f_17), 300000, 0))
					{
						unk_0xB8A73E7DA87B2968(&Local_99, 10);
					}
				}
				if (!unk_0xF44A5E894FE76438(Local_99.f_0, 10))
				{
					if (unk_0xF44A5E894FE76438(Local_99.f_0, 0))
					{
						Local_99.f_5 = func_32();
						Local_99.f_2 = 1;
						Local_99.f_4 = 0;
					}
				}
				break;
			
			case 1:
				if (func_6())
				{
					unk_0xB8A73E7DA87B2968(&Local_99, 3);
					unk_0x4EA098C870B73AB7(&Local_99, 13);
					func_40(&(Local_99.f_21), 0, 0);
					Local_99.f_2 = 2;
				}
				break;
			
			case 2:
				if (unk_0xF44A5E894FE76438(Local_99.f_0, 4))
				{
					func_4(Local_99.f_5);
					Local_99.f_2 = 7;
				}
				break;
			
			case 7:
				func_4(Local_99.f_5);
				break;
			}
	}
}

void func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_5(&(Local_99.f_9[0]));
			func_5(&(Local_99.f_12[0]));
			break;
	}
}

void func_5(var uParam0)
{
	var uVar0;
	
	if (unk_0x1B982A8B37108B3C(*uParam0))
	{
		uVar0 = unk_0x0DE80E23B2BD02BD(*uParam0);
		unk_0x9E5138EA66A3E119(&uVar0);
	}
}

int func_6()
{
	if (Local_99.f_5 == 0)
	{
		if (!unk_0xF44A5E894FE76438(Local_99.f_0, 1))
		{
			iLocal_245 = 0;
			iLocal_246 = unk_0x7BC26452241AC7C9(0, 5);
			iLocal_123 = 0;
			Local_99.f_3 = -1;
			Local_99.f_4 = 0;
			unk_0xB8A73E7DA87B2968(&Local_99, 1);
		}
		if (!unk_0xF44A5E894FE76438(Local_99.f_0, 2))
		{
			if (func_31())
			{
				unk_0xB8A73E7DA87B2968(&Local_99, 2);
			}
		}
		else if (func_7())
		{
			return 1;
		}
	}
	return 0;
}

int func_7()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	
	iVar0 = func_30();
	iVar1 = func_29();
	if (!unk_0x1B982A8B37108B3C(Local_99.f_12[0]))
	{
		if (Local_99.f_15 == 0)
		{
			unk_0xF5116E26EBA83CA9(1);
			Local_99.f_15 = 1;
		}
		if (!unk_0xF44A5E894FE76438(Local_99.f_0, 13))
		{
			if (unk_0x66A05E630CEC173C(1))
			{
				if (unk_0x4EA5429144EA2576(1))
				{
					if (func_28(1, 1, 1))
					{
						if (func_22(1, 1, 1))
						{
							unk_0xB8A73E7DA87B2968(&Local_99, 13);
						}
					}
				}
			}
		}
		if (unk_0xF44A5E894FE76438(Local_99.f_0, 13))
		{
			if (func_21(iVar1))
			{
				if (func_21(iVar0))
				{
					if (func_12(&Var2, &uVar5))
					{
						if (func_11(&(Local_99.f_12[0]), iVar1, Var2, uVar5, 1, 1, 1, 0, 1, 1, 0))
						{
							unk_0x58A5671D02E335D1(unk_0xE95C934718B1A4FF(Local_99.f_12[0]), 1);
							if (unk_0xFACD5AD331C52454("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x570F410C5E24C75B(unk_0xE95C934718B1A4FF(Local_99.f_12[0]), "Not_Allow_As_Saved_Veh", 1);
							}
							Local_99.f_15 = 1;
						}
					}
				}
			}
		}
	}
	if (unk_0x1B982A8B37108B3C(Local_99.f_12[0]))
	{
		if (!unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
		{
			if (Local_99.f_16 == 0)
			{
				unk_0xAC4AA684E16779D5(1);
				Local_99.f_16 = 1;
			}
			if (unk_0x4EA5429144EA2576(1))
			{
				if (func_21(iVar0))
				{
					if (func_9(Local_99.f_12[0]))
					{
						if (unk_0x50CED8EEAE806923(Local_99.f_12[0]))
						{
							if (func_8(&(Local_99.f_9[0]), Local_99.f_12[0], 26, iVar0, -1, 1, 1, 1))
							{
								unk_0x58A5671D02E335D1(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), 1);
								unk_0x9B099BCCBD872090(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), 1, 0);
								unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), 1);
								unk_0x417BCC1ECC12E9A2(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), Global_1574684);
								unk_0x9B099BCCBD872090(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), 1, 0);
								unk_0xE81D470B804DC69A(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), unk_0xF2DB717A73826179((200f * Global_262145.f_151)));
								Local_99.f_16 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0x1B982A8B37108B3C(Local_99.f_9[0]) || !unk_0x1B982A8B37108B3C(Local_99.f_12[0]))
	{
		return 0;
	}
	return 1;
}

int func_8(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x4EA5429144EA2576(1))
	{
		return 0;
	}
	if (!unk_0xF6A32456BABBBA74(uParam1))
	{
		return 0;
	}
	if (!unk_0xA4DB44DF73EF4FE5(unk_0xE95C934718B1A4FF(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x3EE3A80A2D8115F8(unk_0x0BD2D83BDCAED6E6(unk_0xE95C934718B1A4FF(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(unk_0x9E9133ACB2BCC1D5(*uParam0), iParam7);
		if (unk_0xDB6162AABEF41D01(unk_0x9E9133ACB2BCC1D5(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_9(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		return !func_10(unk_0xE95C934718B1A4FF(uParam0));
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (unk_0xB529B2A4B7C64D6D(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xA4DB44DF73EF4FE5(uParam0, 0))
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

int func_11(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0x66A05E630CEC173C(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xBCDF9E3086B4229C(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xDE8A46A23FDCBBFE(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xC4BDEBE5421586E5(iVar0);
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(iVar0, iParam10);
		if (unk_0xDB6162AABEF41D01(iVar0))
		{
			if (bParam8)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
			else
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 0);
			}
		}
		unk_0xC5D75F3BE926D48A(iVar0, iParam9);
		unk_0xB2E0C0D6922D31F2(iVar0, true);
		if (bParam12)
		{
			unk_0xDE6C40B8B4A86A0A(iVar0);
			unk_0x12C2DF66EA2F61B3(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_12(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!func_20(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_246)
	{
		case 0:
			if (unk_0xF44A5E894FE76438(Local_99.f_4, iLocal_246))
			{
				Var0 = { -1232.842f, -1095.003f, 2.2331f };
				Var3 = { -1226.248f, -1089.819f, 10.1513f };
				Var6 = { func_19(0, 0) };
				fVar9 = 19.7853f;
			}
			break;
		
		case 1:
			if (unk_0xF44A5E894FE76438(Local_99.f_4, iLocal_246))
			{
				Var0 = { -622.0966f, 250.3288f, 75.7075f };
				Var3 = { -614.8635f, 255.2288f, 88.7755f };
				Var6 = { func_19(0, 1) };
				fVar9 = 266.4686f;
			}
			break;
		
		case 2:
			if (unk_0xF44A5E894FE76438(Local_99.f_4, iLocal_246))
			{
				Var0 = { 794.4784f, -2034.339f, 25.2469f };
				Var3 = { 798.8026f, -2026.004f, 33.2793f };
				Var6 = { func_19(0, 2) };
				fVar9 = 355.9428f;
			}
			break;
		
		case 3:
			if (unk_0xF44A5E894FE76438(Local_99.f_4, iLocal_246))
			{
				Var0 = { -1623.919f, 1249.831f, 135.2495f };
				Var3 = { -1621.554f, 1257.98f, 145.2376f };
				Var6 = { func_19(0, 3) };
				fVar9 = 353.7463f;
			}
			break;
		
		case 4:
			if (unk_0xF44A5E894FE76438(Local_99.f_4, iLocal_246))
			{
				Var0 = { 1118.077f, 1875.035f, 60.3776f };
				Var3 = { 1127.638f, 1883.083f, 70.1053f };
				Var6 = { func_19(0, 4) };
				fVar9 = 201.3967f;
			}
			break;
	}
	if (iLocal_246 < 5)
	{
		if (!func_20(Var0, 0f, 0f, 0f, 0))
		{
			if (Local_99.f_3 == -1)
			{
				Local_99.f_3 = unk_0x754C713173172189(Var0, Var3);
			}
			else if (unk_0x1E677C61683305CA(Local_99.f_3))
			{
				if (unk_0x403E03F0DEAA75FE(Local_99.f_3))
				{
					if (!unk_0x6BC9987167F4F29D(Local_99.f_3))
					{
						if (!func_13(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							unk_0x87719A53A5335AE4(Local_99.f_3);
							return 1;
						}
						else
						{
							iLocal_246++;
							unk_0x87719A53A5335AE4(Local_99.f_3);
							Local_99.f_3 = -1;
						}
					}
					else
					{
						iLocal_246++;
						unk_0x87719A53A5335AE4(Local_99.f_3);
						Local_99.f_3 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_246++;
		}
	}
	else
	{
		iLocal_246 = 0;
	}
	return 0;
}

int func_13(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_338(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (!unk_0x7E3640C27B17457C())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x8E92CDAEB8357ABD(func_18(unk_0xFB6B3EEFAB2DD12C()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xBB36CABE30AE5FC4(Param0, fParam3))
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
		if (func_338(iVar1, 1, 1))
		{
			if (!func_15(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xFB6B3EEFAB2DD12C()))
				{
					if ((func_14(iVar1) || !bParam10) && !Global_2421621[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2A7336F1C6B39623(iVar1) != unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))) || unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x8E92CDAEB8357ABD(func_18(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x2A7336F1C6B39623(iVar1) != iParam8 || unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x8E92CDAEB8357ABD(func_18(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
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

int func_14(int iParam0)
{
	if (unk_0x9D404C556EC6ABF6(unk_0x4572B13EE70C8F52(iParam0)) || Global_2421621[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

bool func_15(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_16(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_16(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_17();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_17()
{
	return Global_1312731;
}

Vector3 func_18(int iParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iParam0), 0);
}

Vector3 func_19(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				Var0 = { -1228.99f, -1092.231f, 7.0465f };
			}
			else if (iParam1 == 1)
			{
				Var0 = { -618.6293f, 252.6611f, 80.5897f };
			}
			else if (iParam1 == 2)
			{
				Var0 = { 796.6768f, -2029.602f, 28.1346f };
			}
			else if (iParam1 == 3)
			{
				Var0 = { -1622.881f, 1253.516f, 139.6713f };
			}
			else if (iParam1 == 4)
			{
				Var0 = { 1123.27f, 1878.917f, 65.7957f };
			}
			break;
	}
	return Var0;
}

bool func_20(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_21(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x4ACD1E4CBA159ED1(iParam0);
	return unk_0x7AD0E9452821C95D(iParam0);
}

bool func_22(int iParam0, bool bParam1, bool bParam2)
{
	return func_23(0, iParam0, 1, bParam1, bParam2);
}

int func_23(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF44A5E894FE76438(Global_1363465, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_27(iParam0) - func_26(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_26(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_27(iParam0) - func_25(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_26(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_27(iParam0) - func_26(iParam0, 1));
		}
		if (!bParam4 && Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] != 3)
		{
			iVar1 = (iVar1 - func_24(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_24(int iParam0)
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

int func_25(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1363465.f_1;
			break;
		
		case 1:
			return Global_1363465.f_2;
			break;
		
		case 2:
			return Global_1363465.f_3;
			break;
	}
	return 0;
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xFB6B3EEFAB2DD12C();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x5C565D8FF913FF0D())
			{
				return Global_2421621[iVar0 /*358*/].f_212;
			}
			else
			{
				return unk_0x45C6A8F0909682A6(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x5C565D8FF913FF0D())
			{
				return Global_2421621[iVar0 /*358*/].f_213;
			}
			else
			{
				return unk_0xDE6E41B82C16097D(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x5C565D8FF913FF0D())
			{
				return Global_2421621[iVar0 /*358*/].f_214;
			}
			else
			{
				return unk_0x4B95ADFF26B877A7(!bParam1);
			}
			break;
	}
	return 0;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1363473;
			break;
		
		case 1:
			return Global_1363474;
			break;
		
		case 2:
			return Global_1363475;
			break;
	}
	return 0;
}

bool func_28(int iParam0, bool bParam1, bool bParam2)
{
	return func_23(1, iParam0, 1, bParam1, bParam2);
}

int func_29()
{
	return joaat("cavalcade");
}

int func_30()
{
	return joaat("a_m_y_business_03");
}

int func_31()
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	if (unk_0xF44A5E894FE76438(Local_99.f_0, 1))
	{
		if (iLocal_123 >= Local_138.f_0)
		{
			if (iLocal_245 < 5)
			{
				iLocal_245++;
			}
			iLocal_123 = 0;
		}
		if (iLocal_123 == 0)
		{
			unk_0xB8A73E7DA87B2968(&uLocal_237, 1);
		}
		if (iLocal_245 < 5)
		{
			iVar9 = iLocal_123;
			if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar9)))
			{
				iVar0 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar9));
				if (func_338(iVar0, 1, 1))
				{
					uVar1 = unk_0x4572B13EE70C8F52(iVar0);
					if (unk_0xF44A5E894FE76438(uLocal_237, 1))
					{
						Var2 = { func_19(Local_99.f_5, iLocal_245) };
						Var5 = { unk_0xC086F8D75730FA3A(uVar1, 0) };
						fVar8 = unk_0x8E92CDAEB8357ABD(Var2, Var5, 1);
						if (fVar8 < 300f)
						{
							unk_0x4EA098C870B73AB7(&uLocal_237, 1);
						}
					}
				}
			}
			iLocal_123++;
			if (iLocal_123 == Local_138.f_0)
			{
				if (unk_0xF44A5E894FE76438(uLocal_237, 1))
				{
					unk_0xB8A73E7DA87B2968(&(Local_99.f_4), iLocal_245);
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

int func_32()
{
	return 0;
}

int func_33(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_40(uParam0, bParam2, 0);
	if (unk_0x1995B52453EF6537() && !bParam2)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_34()
{
	if (unk_0x04DE35D10A718EEF())
	{
		switch (Local_99.f_6)
		{
			case 0:
				if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]) && unk_0x1B982A8B37108B3C(Local_99.f_12[0]))
				{
					Local_99.f_6 = 1;
				}
				break;
			
			case 1:
				if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
				{
					if (!func_35(Local_99.f_9[0]))
					{
						if (unk_0x1B982A8B37108B3C(Local_99.f_12[0]))
						{
							if (func_9(Local_99.f_12[0]))
							{
								if (unk_0xE4133A0C3C6C74A7(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), unk_0xE95C934718B1A4FF(Local_99.f_12[0])))
								{
									if (unk_0xF44A5E894FE76438(Local_99.f_0, 7))
									{
										unk_0xB8A73E7DA87B2968(&Local_99, 9);
										Local_99.f_6 = 2;
									}
									else if (unk_0xF44A5E894FE76438(Local_99.f_0, 14))
									{
										unk_0xB8A73E7DA87B2968(&Local_99, 9);
										Local_99.f_6 = 2;
									}
									else if (unk_0xF44A5E894FE76438(Local_99.f_0, 19))
									{
										Local_99.f_6 = 3;
									}
								}
								else
								{
									Local_99.f_6 = 4;
								}
							}
							else
							{
								Local_99.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
				{
					if (!func_35(Local_99.f_9[0]))
					{
						if (!unk_0x81C4995860081BC3(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0])))
						{
							Local_99.f_6 = 4;
						}
						else if (unk_0x1B982A8B37108B3C(Local_99.f_12[0]))
						{
							if (!func_9(Local_99.f_12[0]))
							{
								Local_99.f_6 = 3;
							}
							else if (unk_0xF44A5E894FE76438(Local_99.f_0, 19))
							{
								Local_99.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
				{
					if (!func_35(Local_99.f_9[0]))
					{
						if (!unk_0x6A0583ECFCCECC9B(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), 0))
						{
							Local_99.f_6 = 4;
						}
					}
				}
				break;
			
			case 4:
				break;
			}
	}
}

int func_35(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		return unk_0x00B5B0B68211D89B(unk_0x9E9133ACB2BCC1D5(uParam0));
	}
	return 1;
}

void func_36()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (unk_0x04DE35D10A718EEF())
	{
		if (iLocal_122 >= Local_138.f_0)
		{
			iLocal_122 = 0;
			iLocal_244 = 0;
			unk_0x4EA098C870B73AB7(&uLocal_237, 0);
			unk_0xB8A73E7DA87B2968(&uLocal_237, 5);
			unk_0x4EA098C870B73AB7(&Local_99, 5);
			unk_0x4EA098C870B73AB7(&Local_99, 17);
			unk_0x4EA098C870B73AB7(&uLocal_237, 14);
			unk_0x4EA098C870B73AB7(&uLocal_237, 19);
			if (!unk_0xF44A5E894FE76438(Local_99.f_0, 16))
			{
				if (unk_0xF44A5E894FE76438(Local_99.f_0, 18))
				{
					if (!unk_0xF44A5E894FE76438(Local_99.f_0, 4))
					{
						unk_0xB8A73E7DA87B2968(&Local_99, 16);
					}
				}
			}
			if (func_39(&(Local_99.f_21)))
			{
				if (!unk_0xF44A5E894FE76438(Local_99.f_0, 12))
				{
					if (func_33(&(Local_99.f_21), 360000, 0))
					{
						unk_0xB8A73E7DA87B2968(&Local_99, 12);
					}
					if (!unk_0xF44A5E894FE76438(Local_99.f_0, 15))
					{
						if (func_33(&(Local_99.f_21), 240000, 0))
						{
							unk_0xB8A73E7DA87B2968(&Local_99, 15);
						}
					}
				}
				else
				{
					unk_0xB8A73E7DA87B2968(&uLocal_237, 9);
				}
			}
		}
		iVar0 = iLocal_122;
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
		{
			uVar3 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0));
			iVar2 = uVar3;
			if (unk_0xF44A5E894FE76438(uLocal_237, 5))
			{
				if (Local_138[iVar0 /*3*/].f_2 < 7)
				{
					unk_0x4EA098C870B73AB7(&uLocal_237, 5);
				}
			}
			if (!unk_0xF44A5E894FE76438(Local_99.f_0, 0))
			{
				if (unk_0xF44A5E894FE76438(Local_138[iVar0 /*3*/], 0))
				{
					iLocal_244++;
				}
			}
			else if (unk_0xF44A5E894FE76438(Local_138[iVar0 /*3*/], 2))
			{
				if (!unk_0xF44A5E894FE76438(Local_99.f_0, 17))
				{
					if (!unk_0xF44A5E894FE76438(Local_99.f_7, iVar2))
					{
						if (Local_138[iVar0 /*3*/].f_2 > 4)
						{
							unk_0xB8A73E7DA87B2968(&(Local_99.f_7), iVar2);
							unk_0xB8A73E7DA87B2968(&Local_99, 17);
						}
					}
				}
				if (!unk_0xF44A5E894FE76438(Local_99.f_0, 5))
				{
					unk_0xB8A73E7DA87B2968(&Local_99, 5);
				}
				if (!unk_0xF44A5E894FE76438(Local_99.f_0, 4))
				{
					if (unk_0xF44A5E894FE76438(Local_138[iVar0 /*3*/], 1))
					{
						Local_99.f_8 = uVar3;
						unk_0xB8A73E7DA87B2968(&Local_99, 4);
						unk_0x4EA098C870B73AB7(&uLocal_237, 15);
						unk_0x4EA098C870B73AB7(&Local_99, 18);
					}
				}
				if (!unk_0xF44A5E894FE76438(Local_99.f_0, 4))
				{
					if (!unk_0xF44A5E894FE76438(Local_99.f_0, 18))
					{
						if (unk_0xF44A5E894FE76438(Local_138[iVar0 /*3*/], 7))
						{
							unk_0xB8A73E7DA87B2968(&Local_99, 18);
						}
					}
				}
				if (unk_0xF44A5E894FE76438(uLocal_237, 9))
				{
					if (unk_0xF44A5E894FE76438(Local_138[iVar0 /*3*/], 5))
					{
						unk_0x4EA098C870B73AB7(&uLocal_237, 9);
					}
				}
				if (!unk_0xF44A5E894FE76438(uLocal_237, 14))
				{
					if (unk_0xF44A5E894FE76438(Local_138[iVar0 /*3*/], 6))
					{
						unk_0xB8A73E7DA87B2968(&uLocal_237, 14);
					}
				}
				if (!unk_0xF44A5E894FE76438(uLocal_237, 20))
				{
					if (unk_0xF44A5E894FE76438(Local_138[iVar0 /*3*/], 8))
					{
						unk_0xB8A73E7DA87B2968(&uLocal_237, 20);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar1)))
			{
				func_38(iVar1);
			}
			iVar1++;
		}
		iLocal_122++;
		if (iLocal_122 >= Local_138.f_0)
		{
			if (!unk_0xF44A5E894FE76438(Local_99.f_0, 16))
			{
				if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
				{
					if (func_35(Local_99.f_9[0]))
					{
						if (!unk_0xF44A5E894FE76438(Local_99.f_0, 4))
						{
							if (unk_0xF44A5E894FE76438(uLocal_237, 15))
							{
								if (!func_39(&uLocal_242))
								{
									func_40(&uLocal_242, 0, 0);
								}
								else if (func_33(&uLocal_242, 2000, 0))
								{
									unk_0xB8A73E7DA87B2968(&Local_99, 16);
								}
							}
						}
					}
				}
			}
			unk_0xB8A73E7DA87B2968(&uLocal_237, 0);
			if (!unk_0xF44A5E894FE76438(Local_99.f_0, 0))
			{
				if (iLocal_244 >= 1)
				{
					unk_0xB8A73E7DA87B2968(&Local_99, 0);
				}
			}
			if (!unk_0xF44A5E894FE76438(Local_99.f_0, 14))
			{
				if (unk_0xF44A5E894FE76438(uLocal_237, 14))
				{
					unk_0xB8A73E7DA87B2968(&Local_99, 14);
				}
			}
			if (!unk_0xF44A5E894FE76438(Local_99.f_0, 19))
			{
				if (unk_0xF44A5E894FE76438(uLocal_237, 20))
				{
					unk_0xB8A73E7DA87B2968(&Local_99, 19);
				}
			}
			if (!unk_0xF44A5E894FE76438(Local_99.f_0, 6))
			{
				if (unk_0xF44A5E894FE76438(uLocal_237, 5))
				{
					if (Local_99.f_2 > 1 && Local_99.f_2 <= 7)
					{
						unk_0xB8A73E7DA87B2968(&Local_99, 6);
					}
					else if (unk_0xF44A5E894FE76438(Local_99.f_0, 10))
					{
						unk_0xB8A73E7DA87B2968(&Local_99, 6);
					}
				}
			}
			if (unk_0xF44A5E894FE76438(Local_99.f_0, 17))
			{
				unk_0x4EA098C870B73AB7(&Local_99, 17);
				unk_0x4EA098C870B73AB7(&Local_99, 15);
				unk_0x4EA098C870B73AB7(&Local_99, 12);
				func_37(&(Local_99.f_21));
				func_40(&(Local_99.f_21), 0, 0);
			}
			if (!unk_0xF44A5E894FE76438(Local_99.f_0, 11))
			{
				if (unk_0xF44A5E894FE76438(Local_99.f_0, 12))
				{
					if (unk_0xF44A5E894FE76438(uLocal_237, 9))
					{
						unk_0xB8A73E7DA87B2968(&Local_99, 11);
					}
				}
			}
		}
	}
}

void func_37(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_38(int iParam0)
{
	if (unk_0x04DE35D10A718EEF())
	{
		if (!unk_0xF44A5E894FE76438(Local_99.f_0, 7))
		{
			if (unk_0xF44A5E894FE76438(Local_138[iParam0 /*3*/], 3))
			{
				unk_0xB8A73E7DA87B2968(&Local_99, 7);
			}
		}
	}
}

bool func_39(var uParam0)
{
	return uParam0->f_1;
}

void func_40(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1995B52453EF6537() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
			}
			else
			{
				*uParam0 = unk_0x8D8F7D01F0EB4218();
			}
		}
		else
		{
			*uParam0 = unk_0x84A97C70FFDEC0C8();
		}
		uParam0->f_1 = 1;
	}
}

int func_41(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_42(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x04DE35D10A718EEF())
		{
			func_40(uParam0, 0, 0);
		}
	}
}

int func_43(int iParam0)
{
	if (func_45(iParam0))
	{
		if (!func_44(iParam0, 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_44(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_211, iParam1);
}

int func_45(int iParam0)
{
	if (Global_2421621[iParam0 /*358*/].f_211 == 0)
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_47(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589933[iParam0 /*601*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_47(int iParam0)
{
	return func_48(iParam0);
}

bool func_48(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

void func_49()
{
	func_318();
	func_315();
	if (unk_0xF44A5E894FE76438(Local_99.f_0, 10))
	{
		if (Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 < 6)
		{
			Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 6;
		}
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_0, 4))
	{
		if (Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 <= 6)
		{
			Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 6;
		}
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_0, 16))
	{
		if (!unk_0xF44A5E894FE76438(Local_99.f_0, 4))
		{
			if (Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 <= 6)
			{
				Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 6;
				Local_124.f_2 = 41;
				func_313(Local_124, func_314(1));
			}
		}
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_0, 11))
	{
		if (Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 <= 6)
		{
			Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 6;
			Local_124.f_2 = 41;
			func_313(Local_124, func_314(1));
		}
	}
	if (Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 > 0)
	{
		if (Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 < 6)
		{
			if ((((func_46(unk_0xFB6B3EEFAB2DD12C(), 1) || func_312()) || func_311() > 0) || func_44(unk_0xFB6B3EEFAB2DD12C(), 1)) || func_310())
			{
				Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 6;
			}
		}
	}
	if (Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 > 0)
	{
		if (Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 < 6)
		{
			if (func_308(unk_0xFB6B3EEFAB2DD12C()))
			{
				Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 6;
			}
		}
	}
	switch (Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2)
	{
		case 0:
			if (unk_0xF44A5E894FE76438(Local_138[unk_0x1E7FB1CA38C403F6() /*3*/], 0))
			{
				if (unk_0xF44A5E894FE76438(Local_99.f_0, 3))
				{
					if (!unk_0xF44A5E894FE76438(Local_99.f_0, 15))
					{
						unk_0xB8A73E7DA87B2968(&(Local_138[unk_0x1E7FB1CA38C403F6() /*3*/]), 2);
						func_307(11, 1);
						Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 3;
					}
					else
					{
						Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 6;
						unk_0xB8A73E7DA87B2968(&uLocal_237, 16);
					}
				}
			}
			break;
		
		case 3:
			if (func_306(Local_99.f_5))
			{
				func_305(Local_99.f_5);
				Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 4;
			}
			break;
		
		case 4:
			if (!func_304())
			{
				if (func_194())
				{
					Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 5;
					func_192(88, 1);
					func_191();
				}
				else if (unk_0xF44A5E894FE76438(uLocal_237, 8))
				{
					Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 6;
				}
			}
			else if (func_182())
			{
				Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 5;
			}
			else
			{
				if (unk_0xF44A5E894FE76438(uLocal_237, 8))
				{
					Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 6;
				}
				if (unk_0xF44A5E894FE76438(Local_99.f_0, 15))
				{
					func_169(12, 116);
					Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 6;
					unk_0xB8A73E7DA87B2968(&uLocal_237, 16);
				}
			}
			break;
		
		case 5:
			if (Local_99.f_5 == 0)
			{
				func_58();
			}
			break;
		
		case 6:
			Local_138[unk_0x1E7FB1CA38C403F6() /*3*/] = 0;
			unk_0x4EA098C870B73AB7(&uLocal_237, 3);
			unk_0x4EA098C870B73AB7(&uLocal_237, 4);
			iLocal_236 = 0;
			func_169(12, 116);
			if (unk_0x6901135DDCC4904D(Global_1747129))
			{
				unk_0x8A3D7569826A325D(&Global_1747129);
			}
			func_57(&Local_249);
			func_50();
			func_307(11, 0);
			Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 7;
			break;
		
		case 7:
			if (Local_99.f_2 == 0 && !unk_0xF44A5E894FE76438(Local_99.f_0, 10))
			{
				Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 0;
			}
			break;
	}
}

void func_50()
{
	if (!func_56())
	{
		return;
	}
	if (!unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == Global_1312571.f_9)
	{
		return;
	}
	func_51();
}

void func_51()
{
	func_53();
	func_52(0);
}

void func_52(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1995B52453EF6537();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x7414B386C0020BEC();
		Global_1312571.f_11 = unk_0x7414B386C0020BEC();
	}
	StringCopy(&(Global_1312571.f_12), "", 16);
	StringCopy(&(Global_1312571.f_16), "", 64);
	StringCopy(&(Global_1312571.f_32), "", 64);
	Global_1312571.f_52 = 0;
	Global_1312571.f_53 = 0;
	Global_1312571.f_54 = 0;
	Global_1312571.f_55 = -1;
	Global_1312571.f_56 = 0;
	Global_1312571.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_53()
{
	if (!func_55())
	{
	}
	if (func_56())
	{
		unk_0x9F87DFE2C82D23E7(&(Global_1312571.f_12));
		func_54();
		unk_0x231B7D69E0C82ABD();
	}
}

void func_54()
{
	switch (Global_1312571)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xF99222307D7150A9(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0xF99222307D7150A9(Global_1312571.f_52);
			unk_0xF99222307D7150A9(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0x1164369C7A8D1436(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_57);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0x1164369C7A8D1436(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_57);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_32));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_48));
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_32));
			return;
		
		default:
	}
}

int func_55()
{
	if (!func_56())
	{
		return 0;
	}
	unk_0xC450F7ACA7F40F98(&(Global_1312571.f_12));
	func_54();
	return unk_0x1B1A26465DF20C87();
}

int func_56()
{
	if (Global_1312571 == 20)
	{
		return 0;
	}
	return 1;
}

void func_57(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		unk_0x8A3D7569826A325D(uParam0);
		bVar0 = true;
	}
	if (unk_0x6901135DDCC4904D(uParam0->f_1))
	{
		unk_0x8A3D7569826A325D(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x7887B64A08364778(uParam0->f_7))
	{
		if (!unk_0x00B5B0B68211D89B(uParam0->f_7))
		{
			if (unk_0x809387353710848E(uParam0->f_7))
			{
				unk_0x78E064446A641529(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_58()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
	{
		if (!func_35(Local_99.f_9[0]))
		{
			if (unk_0x6901135DDCC4904D(Global_1747129))
			{
				if (func_167())
				{
					unk_0xBEC798FF88A42020(Global_1747129, 0);
				}
				else
				{
					unk_0xBEC798FF88A42020(Global_1747129, 4);
				}
			}
			else
			{
				Global_1747129 = unk_0x890C68C377CE0CA4(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]));
				unk_0x4F095059F1C175D5(Global_1747129, 1);
				unk_0xF563C3AC64885E69(Global_1747129, 0f);
			}
			if (unk_0x6901135DDCC4904D(Local_249.f_0))
			{
				if (func_167())
				{
					unk_0xBEC798FF88A42020(Local_249.f_0, 0);
				}
				else
				{
					unk_0xBEC798FF88A42020(Local_249.f_0, 4);
				}
				if (!unk_0xF44A5E894FE76438(uLocal_237, 10))
				{
					unk_0x2EDAF851B28036F0(Local_249.f_0, "FM_GDM_BLP");
					unk_0xB8A73E7DA87B2968(&uLocal_237, 10);
				}
			}
			if (unk_0x6901135DDCC4904D(Local_249.f_1))
			{
				if (func_167())
				{
					unk_0xBEC798FF88A42020(Local_249.f_1, 0);
				}
				else
				{
					unk_0xBEC798FF88A42020(Local_249.f_1, 4);
				}
				if (!unk_0xF44A5E894FE76438(uLocal_237, 12))
				{
					unk_0x2EDAF851B28036F0(Local_249.f_1, "FM_GDM_BLP");
					unk_0xB8A73E7DA87B2968(&uLocal_237, 12);
				}
			}
			if (!unk_0xF44A5E894FE76438(uLocal_237, 6))
			{
				if (!unk_0xF44A5E894FE76438(Global_2359301, 7) && !func_162(unk_0xFB6B3EEFAB2DD12C(), 0, 0, 0, 0))
				{
					if (unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
					{
						if (!func_167())
						{
							func_156("FM_GDM_KIL", 0);
						}
						unk_0xB8A73E7DA87B2968(&uLocal_237, 6);
					}
				}
			}
			else if (unk_0xF44A5E894FE76438(Global_2359301, 7))
			{
				func_50();
				unk_0x4EA098C870B73AB7(&uLocal_237, 6);
			}
			else if (Global_68127)
			{
				func_50();
				unk_0x4EA098C870B73AB7(&uLocal_237, 6);
			}
			else if (func_162(unk_0xFB6B3EEFAB2DD12C(), 0, 0, 0, 0))
			{
				func_50();
				unk_0x4EA098C870B73AB7(&uLocal_237, 6);
			}
		}
		else if (unk_0xF44A5E894FE76438(uLocal_237, 6))
		{
			func_50();
			unk_0x4EA098C870B73AB7(&uLocal_237, 6);
		}
		if (!unk_0xF44A5E894FE76438(Local_138[unk_0x1E7FB1CA38C403F6() /*3*/], 1))
		{
			iVar1 = unk_0xF15EBC61ACCF20ED(Local_99.f_9[0], &uVar0);
			if (iVar1 == unk_0xFB6B3EEFAB2DD12C())
			{
				unk_0xB8A73E7DA87B2968(&(Local_138[unk_0x1E7FB1CA38C403F6() /*3*/]), 1);
				iVar2 = func_153(func_155(unk_0xFB6B3EEFAB2DD12C(), 1), 1);
				if (iVar2 > 100)
				{
					iVar2 = 100;
				}
				iVar3 = iVar2 * 20;
				iVar3 = unk_0xF2DB717A73826179((Global_262145.f_4226 * IntToFloat(iVar3)));
				func_116(2, "XPT_KAIE", -1859646258, 2131309714, iVar3, 1, -1, 0);
				if (Global_262145.f_2420 != 0f)
				{
					iVar4 = unk_0xF2DB717A73826179(Global_262145.f_2420);
				}
				else
				{
					iVar4 = 2000;
				}
				if (Global_262145.f_2416 != 0f)
				{
					iVar5 = unk_0xF2DB717A73826179(Global_262145.f_2416);
				}
				else
				{
					iVar5 = 8000;
				}
				if (iVar4 >= 100)
				{
					iVar6 = (iVar4 / 100);
				}
				if (iVar5 >= 100)
				{
					iVar7 = (iVar5 / 100);
				}
				iVar8 = unk_0x7BC26452241AC7C9(iVar6, iVar7 + 1) * 100;
				iVar8 = func_115(iVar8, 1);
				if (iVar8 > iVar5)
				{
					iVar8 = iVar5;
				}
				func_71(&iVar8, 1);
				if (func_70())
				{
					if (iVar8 > 0)
					{
						func_61(-352356931, iVar8, &iVar9, 0, 0, 0);
						Global_2590199[iVar9 /*76*/].f_8 = -1146479277;
					}
				}
				else
				{
					unk_0xA9A375D9EF6C8E1E(iVar8, -1146479277);
				}
				func_60(5, iVar8);
			}
			else if (iVar1 != func_59())
			{
				if (unk_0x1E0256D6F1052B31(iVar1))
				{
					if (!unk_0xF44A5E894FE76438(Local_138[unk_0x1E7FB1CA38C403F6() /*3*/], 7))
					{
						if (!unk_0xBF474853319C6A20(iVar1))
						{
							unk_0xB8A73E7DA87B2968(&(Local_138[unk_0x1E7FB1CA38C403F6() /*3*/]), 7);
						}
					}
				}
			}
		}
	}
}

int func_59()
{
	return -1;
}

void func_60(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2494149.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5416)
		{
			iParam1 = Global_262145.f_5416;
		}
		Global_2494149.f_270 = iParam1;
		Global_2494149.f_271 = 0;
	}
}

void func_61(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_70())
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
	else if (bParam5)
	{
		iVar0 = 8;
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
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
			if (iParam1 > 0)
			{
				func_62(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1426920838:
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
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
			func_62(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_62(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_70())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x92433FA8528BEA6E(func_17()) || unk_0x65C1BCEE262A67BB())
		{
			Global_2590709 = 1;
			return 0;
		}
		if (Global_2453631)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2590710 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590199[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0x11B1CD473C92A76D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x12D2D3CC0C448A8D(iVar3))
		{
			*uParam0 = func_69(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2590199[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590699 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2590708 = 1;
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_68(1, iParam4);
			Global_2590708 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_63(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_63(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_125.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_64(iParam0);
	}
}

void func_64(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_70())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_67(iParam0))
		{
			if (!bVar0)
			{
				unk_0x0236A1291D69648C();
			}
		}
		else if (!bVar0)
		{
			unk_0xC388F8C52EDE8188(Global_2590199[iParam0 /*76*/]);
		}
		func_65(&(Global_2590199[iParam0 /*76*/]));
	}
}

void func_65(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_66(&(uParam0->f_8.f_3));
	func_66(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_66(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_67(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_68(int iParam0, var uParam1)
{
	Global_2454792 = uParam1;
	Global_2454791 = iParam0;
}

int func_69(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590199[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_70())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2590199[iVar0 /*76*/].f_2 = 1;
			Global_2590199[iVar0 /*76*/].f_1 = uParam5;
			Global_2590199[iVar0 /*76*/].f_3 = uParam1;
			Global_2590199[iVar0 /*76*/].f_4 = uParam2;
			Global_2590199[iVar0 /*76*/].f_7 = uParam3;
			Global_2590199[iVar0 /*76*/].f_5 = 0;
			Global_2590199[iVar0 /*76*/] = iParam0;
			Global_2590199[iVar0 /*76*/].f_6 = iParam4;
			Global_2590199[iVar0 /*76*/].f_72 = uParam8;
			Global_2590199[iVar0 /*76*/].f_71 = uParam7;
			Global_2590199[iVar0 /*76*/].f_75 = 0;
			Global_2590699 = 0;
			if (bParam6)
			{
				Global_2590199[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_70()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

void func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_114())
		{
			if (func_113(0))
			{
				if (!func_109(0))
				{
					if (unk_0x1E0256D6F1052B31(func_108()))
					{
						if (func_107() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_107());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_105(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_75("GB_BCUT_TICK1", func_108(), iVar0, 0, 0, 1, 1);
						}
						func_74(20);
						func_72(func_108(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_72(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_338(iParam0, 0, 1))
	{
		Var0.f_0 = 474;
		Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xA56AA396FE05B9EC(1, &Var0, 5, func_73(iParam0));
	}
}

var func_73(int iParam0)
{
	var uVar0;
	
	unk_0xB8A73E7DA87B2968(&uVar0, iParam0);
	return uVar0;
}

void func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4710.f_7[iVar0]), iVar1);
}

int func_75(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		unk_0x053CD3063CA9436C(sParam0);
		unk_0xF5640E619D8FCD5B(func_82(iParam1, -2, 1, 0));
		unk_0x4C51E4FBCD1D8830(func_80(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF5640E619D8FCD5B(iParam3);
		}
		unk_0xF99222307D7150A9(iParam2);
		iVar0 = unk_0x84EF96E928190AB1(0, 1);
		func_76(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_76(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_79() || !unk_0x8676DE83D4396C39()) || !func_15(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		return;
	}
	iVar0 = func_77(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1755985.f_5[iVar0 /*53*/] = iParam0;
		Global_1755985.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1755985.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1755985.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1755985.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1755985.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1755985.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1755985 - 1))
	{
		if (iParam0 > Global_1755985.f_5[iVar0 /*53*/].f_1)
		{
			func_78(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1755985++;
	if (Global_1755985 > 5)
	{
		Global_1755985 = 5;
		return Global_1755985;
	}
	return (Global_1755985 - 1);
}

void func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1755985.f_5[iVar0 /*53*/] = { Global_1755985.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_79()
{
	return unk_0xF14C5BAFFF8F4CB7(-1762644250);
}

var func_80(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_81(&cVar0);
}

var func_81(char[4] cParam0)
{
	return cParam0;
}

int func_82(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_308(iParam0))
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
	if (iParam1 == -2)
	{
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1632166.f_82772[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_308(unk_0xFB6B3EEFAB2DD12C()) || (func_104() && func_103()))
	{
		uVar1 = func_102();
		if (unk_0x7887B64A08364778(uVar1))
		{
			if (unk_0xBEC34BF6B72C417A(uVar1))
			{
				if (unk_0x61263E0F7C8C9996(uVar1) != -1)
				{
					if (func_338(unk_0x61263E0F7C8C9996(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
						{
							if (Global_1632166.f_82772[iParam1] != -1)
							{
								return func_100(iParam1, iParam0, 0);
							}
							else
							{
								return func_90(iParam0, unk_0x61263E0F7C8C9996(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_90(iParam0, unk_0x61263E0F7C8C9996(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
			{
				if (Global_1632166.f_82772[iParam1] != -1)
				{
					return func_100(iParam1, iParam0, 0);
				}
				else
				{
					return func_83(0, -1, 0);
				}
			}
			else
			{
				return func_83(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
	{
		if (Global_1632166.f_82772[iParam1] != -1)
		{
			return func_100(iParam1, iParam0, 0);
		}
		else
		{
			return func_90(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
		}
	}
	return func_90(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
}

int func_83(bool bParam0, int iParam1, bool bParam2)
{
	return func_84(unk_0xFB6B3EEFAB2DD12C(), bParam0, iParam1, bParam2);
}

int func_84(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x1E0256D6F1052B31(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_89(iVar0, iParam2, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_88(1);
				}
				else
				{
					return func_88(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_4, 20))
			{
				return func_85(iVar0, iParam2, 1);
			}
			else
			{
				return func_85(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_88(1);
	}
	return func_88(0);
}

int func_85(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_87(iParam0, iParam1);
	if (func_86(Global_1632166.f_86360))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_86(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7770[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_87(int iParam0, int iParam1)
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
			if (!func_89(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_88(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_89(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
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
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 0);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 1);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 2);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 4);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 5);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 6);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 8);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 9);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 10);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 12);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 13);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 14);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_90(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589933[iVar2 /*601*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_99())
			{
				iVar3 = func_95(iParam0);
				if (!iVar3 == -1)
				{
					return func_93(iVar3);
				}
			}
			if ((func_92(iParam1, iParam0, iVar0, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)) || ((func_89(unk_0x2A7336F1C6B39623(iParam1), unk_0x2A7336F1C6B39623(iParam0), 0) && unk_0xF44A5E894FE76438(Global_1632166.f_15, 23)) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)))
			{
				return func_88(1);
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 26))
			{
				return func_91(1);
			}
			else
			{
				return func_84(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574255 || Global_1574246) || Global_1589933[iParam0 /*601*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574255 == 1 && Global_1574265 == 0))
			{
				return func_88(1);
			}
			else
			{
				return func_84(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574250 && Global_1573825.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_95(iParam0);
	if (!iVar4 == -1)
	{
		return func_93(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_91(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_92(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(iParam0) == -1 && unk_0x2A7336F1C6B39623(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == unk_0x2A7336F1C6B39623(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
	}
	return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
}

int func_93(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_94(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_94(int iParam0)
{
	return Global_2415705.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_95(int iParam0)
{
	if (!iParam0 == func_59())
	{
		if (func_97(iParam0, 1))
		{
			return Global_2415705.f_1946.f_11[func_96(iParam0)];
		}
	}
	return -1;
}

int func_96(int iParam0)
{
	if (iParam0 != func_59())
	{
		return Global_1618089[iParam0 /*390*/].f_11;
	}
	return func_59();
}

bool func_97(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_98(iParam0))
		{
			return 0;
		}
	}
	return Global_1618089[iParam0 /*390*/].f_11 != func_59();
}

int func_98(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_59())
		{
			return Global_1618089[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_99()
{
	return Global_2443089.f_12;
}

int func_100(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_99())
	{
		iVar1 = func_95(iParam1);
		if (!iVar1 == -1)
		{
			return func_93(iVar1);
		}
	}
	if (Global_1632166.f_82772[iParam0] != -1 && Global_1632166.f_82772[iParam0] <= 4)
	{
		if (Global_1632166.f_82772[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1632166.f_82772[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1632166.f_82772[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1632166.f_82772[iParam0] == 4)
		{
			if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1632166.f_82772[iParam0];
		}
	}
	else
	{
		iVar0 = func_84(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xF44A5E894FE76438(Global_1632166.f_21, 13))
	{
		iVar0 = func_101(iParam0);
	}
	return iVar0;
}

int func_101(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1632166.f_105330;
			break;
		
		case 1:
			iVar0 = Global_1632166.f_105331;
			break;
		
		case 2:
			iVar0 = Global_1632166.f_105332;
			break;
		
		case 3:
			iVar0 = Global_1632166.f_105333;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_102()
{
	return Global_2359301.f_2;
}

bool func_103()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 4);
}

bool func_104()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

void func_105(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_106(1);
	}
	else
	{
		iVar1 = func_106(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_106(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10889;
}

int func_107()
{
	return Global_262145.f_10888;
}

int func_108()
{
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11;
}

bool func_109(bool bParam0)
{
	return func_110(unk_0xFB6B3EEFAB2DD12C(), bParam0);
}

int func_110(int iParam0, bool bParam1)
{
	return func_111(iParam0, bParam1, 1);
}

int func_111(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_59())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_112(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1618089[iParam0 /*390*/].f_11;
	if (iVar0 != func_59() && Global_1618089[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0, int iParam1)
{
	if (iParam0 != func_59())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_59())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 == iParam0 && Global_1618089[iParam0 /*390*/].f_11.f_289 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_113(bool bParam0)
{
	return func_97(unk_0xFB6B3EEFAB2DD12C(), bParam0);
}

bool func_114()
{
	return func_98(unk_0xFB6B3EEFAB2DD12C());
}

int func_115(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(iParam0) * Global_262145);
				iParam0 = unk_0xF2DB717A73826179(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

var func_116(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_117(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_117(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_118(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_118(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_152(unk_0xFB6B3EEFAB2DD12C()) || func_151(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (Global_262145.f_8151 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8151;
		}
	}
	else if (Global_262145.f_5467 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5467;
	}
	if (func_150(sParam2))
	{
	}
	if (func_149())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_147(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_146(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_144(0, &iVar1);
					break;
				
				case 3:
					func_144(1, &iVar1);
					break;
				
				case 1:
					func_141(&iVar1);
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
			func_138(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_129((func_137(unk_0xFB6B3EEFAB2DD12C()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x2A478F15F6560673(iVar1, iParam8, iParam9);
				if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_2 != -1)
				{
					func_138(1160, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_123(iVar1);
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
				func_119((func_121(unk_0xFB6B3EEFAB2DD12C()) + iVar1));
			}
			else
			{
				func_119((func_121(unk_0xFB6B3EEFAB2DD12C()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_119(int iParam0)
{
	if (func_149())
	{
		Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_5 = iParam0;
		func_120(joaat("mpply_globalxp"), iParam0);
	}
}

void func_120(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, 1);
	}
}

int func_121(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_338(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return func_122(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_5;
			}
		}
		else
		{
			return func_122(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_123(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_128(unk_0xFB6B3EEFAB2DD12C()) };
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(&Var0))
		{
			iVar13 = func_126(func_127(&Var0));
			if (iVar13 == 0)
			{
				func_125(&Global_1362334, iParam0);
				func_124(joaat("mpply_crew_local_xp_0"), Global_1362334);
			}
			else if (iVar13 == 1)
			{
				func_125(&Global_1362335, iParam0);
				func_124(joaat("mpply_crew_local_xp_1"), Global_1362335);
			}
			else if (iVar13 == 2)
			{
				func_125(&Global_1362336, iParam0);
				func_124(joaat("mpply_crew_local_xp_2"), Global_1362336);
			}
			else if (iVar13 == 3)
			{
				func_125(&Global_1362337, iParam0);
				func_124(joaat("mpply_crew_local_xp_3"), Global_1362337);
			}
			else if (iVar13 == 4)
			{
				func_125(&Global_1362338, iParam0);
				func_124(joaat("mpply_crew_local_xp_4"), Global_1362338);
			}
		}
	}
}

void func_124(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1362329 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1362331 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1362331 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1362332 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1362333 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1362334 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1362335 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1362336 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1362337 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1362338 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1362339 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1362340 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1362341 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1362342 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1362343 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1362344 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1362345 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_125(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_126(int iParam0)
{
	if (iParam0 == Global_1362329)
	{
		return 0;
	}
	else if (iParam0 == Global_1362330)
	{
		return 1;
	}
	else if (iParam0 == Global_1362331)
	{
		return 2;
	}
	else if (iParam0 == Global_1362332)
	{
		return 3;
	}
	else if (iParam0 == Global_1362333)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_127(var uParam0)
{
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(uParam0))
		{
			return Global_2452407;
		}
	}
	return Global_2452407;
}

struct<13> func_128(int iParam0)
{
	struct<13> Var0;
	
	unk_0x81C63D2370ED33C5(iParam0, &Var0, 13);
	return Var0;
}

void func_129(int iParam0, int iParam1, int iParam2)
{
	if (func_149())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8121 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362449[func_136(-1)])
				{
					unk_0x2A478F15F6560673(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362449[func_136(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_135(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_1 = iParam0;
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_6 = func_153(iParam0, 1);
		}
		func_134(634, iParam0, -1, 1);
		func_133(635, func_153(iParam0, 1), -1, 1, 0);
		Global_1362449[func_136(-1)] = iParam0;
		func_130(7, 0);
	}
}

void func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_132(iParam0, iParam1))
	{
		iVar0 = func_131();
		Global_2452384[iVar0] = iParam0;
	}
}

int func_131()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2452384[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_132(int iParam0, var uParam1)
{
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_133(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_136(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503773[iParam0 /*3*/][func_136(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1362395[func_136(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1362401[func_136(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1362407[func_136(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1362413[func_136(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1362371[func_136(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1362377[func_136(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1362383[func_136(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1362389[func_136(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362347[func_136(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1362353[func_136(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1362359[func_136(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1362365[func_136(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1362419[func_136(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1362425[func_136(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1362431[func_136(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1362437[func_136(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1362443[func_136(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1362449[func_136(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1362455[func_136(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524224[0 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524224[1 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524224[2 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524224[3 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524295[func_136(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1362461[func_136(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362467[func_136(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362473[func_136(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1362479[func_136(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524258[0 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524258[1 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524258[2 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524258[3 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524258[4 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524298[0 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524298[1 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524298[2 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524298[3 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524298[4 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524314[0 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524314[1 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524314[2 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524314[3 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524314[4 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524258[5 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524224[4 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524330[func_136(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524339[func_136(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524333[func_136(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524342[func_136(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524336[func_136(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524345[func_136(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524348[func_136(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524258[6 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524224[5 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524258[7 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524224[6 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524258[8 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524224[7 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524258[9 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524224[8 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524258[10 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524224[9 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524258[11 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524224[10 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_135(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_2433082.f_1, iParam0);
	}
	return 1;
}

int func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
		if (iVar1 > -1)
		{
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

int func_137(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return Global_1362449[func_136(-1)];
			}
			else if (func_135(iParam0))
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_1;
			}
		}
	}
	else
	{
		return Global_1362449[func_136(-1)];
	}
	return 0;
}

void func_138(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_140(iParam0, func_136(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_139(iParam0))
	{
		func_133(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_134(iParam0, iVar0, iParam2, 1);
	}
}

int func_139(int iParam0)
{
	if (Global_1362328)
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
			case 1298:
			case 634:
			case 1273:
			case 759:
			case 760:
			case 761:
			case 1231:
			case 1870:
			case 2261:
			case 2911:
			case 3040:
			case 5886:
			case 3035:
			case 3036:
			case 3037:
			case 3038:
			case 3039:
			case 3214:
			case 3216:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3209:
			case 3203:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3649:
			case 3650:
			case 3671:
			case 3212:
			case 3211:
			case 3992:
			case 3991:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
				return 1;
				break;
			}
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_136(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		iVar4 = unk_0x1C2C3C236D3FE99A(iVar0);
		if (unk_0x28E01BEA13B73DF2(iVar4))
		{
			iVar5 = unk_0x28B48C55342F6368(iVar4);
			if (unk_0x2A7336F1C6B39623(iVar5) != -1)
			{
				if (unk_0x2A7336F1C6B39623(iVar5) == iVar1 || func_89(unk_0x2A7336F1C6B39623(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xFB6B3EEFAB2DD12C())
					{
						if (func_143(unk_0xFB6B3EEFAB2DD12C(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_142(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_142(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_142(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_143(int iParam0, int iParam1)
{
	if (unk_0x527DE7DC62A1D335())
	{
		Global_2482005 = { func_128(iParam0) };
		Global_2482018 = { func_128(iParam1) };
		if (unk_0xF42D93ECBADC9AE3(&Global_2482005))
		{
			if (unk_0xF42D93ECBADC9AE3(&Global_2482018))
			{
				unk_0xF6955213DB8BD7D3(&Global_2481935, 35, &Global_2482005);
				unk_0xF6955213DB8BD7D3(&Global_2481970, 35, &Global_2482018);
				if (Global_2481935 == Global_2481970)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_144(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x11B9E7FF50B2F4CC())
		{
			iVar3 = iVar0;
			if (unk_0x28E01BEA13B73DF2(iVar3))
			{
				iVar4 = unk_0x28B48C55342F6368(iVar3);
				if (func_338(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
					{
						iVar1++;
						if (func_143(unk_0xFB6B3EEFAB2DD12C(), iVar4))
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
			if (func_338(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
				{
					if (func_145(unk_0xFB6B3EEFAB2DD12C(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_143(unk_0xFB6B3EEFAB2DD12C(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_142(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_142(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_145(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_18(iParam0), func_18(iParam1));
	return 0f;
}

int func_146(int iParam0)
{
	int iVar0;
	
	if (unk_0xBC409772C72D8108() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_142(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_147(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xC6C425A326326DEF(iParam0) > func_137(unk_0xFB6B3EEFAB2DD12C()))
		{
			iParam0 = -func_137(unk_0xFB6B3EEFAB2DD12C());
		}
	}
	if (func_148(8000, 0, 0) > 0)
	{
		if (func_148(8000, 0, 0) < (iParam0 + func_137(unk_0xFB6B3EEFAB2DD12C())))
		{
			iParam0 = (func_148(8000, 0, 0) - func_137(unk_0xFB6B3EEFAB2DD12C()));
		}
	}
	return iParam0;
}

int func_148(int iParam0, bool bParam1, int iParam2)
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
	return Global_279816[iParam0];
}

int func_149()
{
	return 1;
}

int func_150(char* sParam0)
{
	if (unk_0x1C079483C9D16F36(sParam0))
	{
		return 1;
	}
	else if (unk_0xCC257DA11A122B5F(sParam0, "") || unk_0xCC257DA11A122B5F(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_151(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

bool func_152(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

int func_153(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_154(iParam0, 0);
}

int func_154(int iParam0, int iParam1)
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
		if (Global_279816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_279816[iVar3] < iParam0)
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

int func_155(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_137(iParam0);
}

void func_156(char* sParam0, bool bParam1)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return;
	}
	if (unk_0x502AC248EEE98C95(sParam0) > 23)
	{
		return;
	}
	if (func_160(sParam0))
	{
		return;
	}
	func_51();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x0FBCE11007AF301F(), 32);
	Global_1312571.f_9 = unk_0x6D9FF4C899CD785F(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_159();
	func_158(bParam1);
	func_157();
}

void func_157()
{
	unk_0xB8A73E7DA87B2968(&(Global_1312571.f_59), 1);
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		unk_0xB8A73E7DA87B2968(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x4EA098C870B73AB7(&(Global_1312571.f_59), 0);
}

void func_159()
{
	Global_1312571.f_10 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), 86400000);
	Global_1312571.f_11 = unk_0x7414B386C0020BEC();
}

bool func_160(char* sParam0)
{
	if (!func_56())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_161(sParam0);
	}
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_12));
}

bool func_161(char* sParam0)
{
	if (!func_56())
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_16));
}

int func_162(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (Global_1589933[iParam0 /*601*/].f_257.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_166(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_165(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_163(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_163(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (func_338(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_164(Global_2421621[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 3;
			break;
	}
	return -1;
}

int func_165(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (func_338(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_164(Global_2421621[iParam0 /*358*/].f_312.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_166(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (func_338(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_164(Global_2421621[iParam0 /*358*/].f_312.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_167()
{
	if (func_168(16))
	{
		return 1;
	}
	if (func_168(0))
	{
		return 1;
	}
	return 0;
}

bool func_168(int iParam0)
{
	var uVar0;
	
	uVar0 = func_140(2462, -1, 0);
	return unk_0xF44A5E894FE76438(uVar0, iParam0);
}

void func_169(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_181(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!iParam1 == Global_2394153[iVar0 /*44*/].f_7)
	{
		return;
	}
	if (!Global_2394153[iVar0 /*44*/].f_3 && Global_2394153[iVar0 /*44*/])
	{
		Global_2394153[iVar0 /*44*/].f_3 = 1;
		func_173();
	}
	func_170(iVar0);
}

void func_170(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1362171)
	{
		return;
	}
	if (Global_2394153[iParam0 /*44*/].f_25 != -1)
	{
		unk_0xF730E14BB369F77A(Global_2394153[iParam0 /*44*/].f_25);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1362171)
	{
		Global_2394153[iVar0 /*44*/] = { Global_2394153[iVar1 /*44*/] };
		Global_2394153[iVar0 /*44*/] = { Global_2394153[iVar1 /*44*/] };
		iVar0++;
		iVar1++;
	}
	func_172(iVar0);
	Global_1362171 = (Global_1362171 - 1);
	if (Global_1362142)
	{
		if (Global_1362140 > 0)
		{
			func_171();
		}
	}
}

void func_171()
{
	Global_1362142 = 0;
}

void func_172(int iParam0)
{
	Global_2394153[iParam0 /*44*/] = 0;
	Global_2394153[iParam0 /*44*/].f_1 = 0;
	Global_2394153[iParam0 /*44*/].f_2 = 0;
	Global_2394153[iParam0 /*44*/].f_3 = 0;
	Global_2394153[iParam0 /*44*/].f_4 = func_59();
	Global_2394153[iParam0 /*44*/].f_5 = 145;
	Global_2394153[iParam0 /*44*/].f_6 = 1;
	Global_2394153[iParam0 /*44*/].f_7 = -1;
	Global_2394153[iParam0 /*44*/].f_8 = -1;
	StringCopy(&(Global_2394153[iParam0 /*44*/].f_9), "", 64);
	Global_2394153[iParam0 /*44*/].f_25 = -1;
	StringCopy(&(Global_2394153[iParam0 /*44*/].f_26), "", 32);
	Global_2394153[iParam0 /*44*/].f_34 = -1;
	Global_2394153[iParam0 /*44*/].f_35 = -1;
	Global_2394153[iParam0 /*44*/].f_36 = 0;
	Global_2394153[iParam0 /*44*/].f_38 = 0;
	Global_2394153[iParam0 /*44*/].f_39 = -1;
	Global_2394153[iParam0 /*44*/].f_40 = 0;
	Global_2394153[iParam0 /*44*/].f_41 = 0;
	Global_2394153[iParam0 /*44*/].f_42 = 0;
	if (unk_0x1995B52453EF6537())
	{
		Global_2394153[iParam0 /*44*/].f_37 = unk_0x7414B386C0020BEC();
	}
}

void func_173()
{
	Global_16808 = (Global_16808 - 1);
	if (Global_16808 < 0)
	{
		func_180("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_174();
}

void func_174()
{
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_179(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_175(1);
			func_179(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_175(int iParam0)
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
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_178(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_177(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar2);
								unk_0xBBAAC5B2437ACF2A();
							}
							if (Global_2452475)
							{
								if (iVar1 == 14)
								{
									func_176(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
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
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101652.f_13084[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101652.f_13084[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101652.f_13084[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_176(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69697)
								{
									iVar4 = 0;
									iVar4 = Global_2593992;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2593993[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2593993[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2593993[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_176(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36913;
											break;
										
										case 1:
											iVar6 = Global_36914;
											break;
										
										case 2:
											iVar6 = Global_36915;
											break;
										
										default:
											break;
									}
									func_176(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_176(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_177(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(Global_2319);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_177(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar7);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_177(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar8);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 8)
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_177(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(42);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if ((iVar1 == 23 && unk_0xCC257DA11A122B5F(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xF44A5E894FE76438(Global_2314, 6))
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_177(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(42);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1616829.f_1;
								func_176(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_176(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_176(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xC55B9553B3EDADE9(uParam7))
	{
		func_177(sParam7);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam8))
	{
		func_177(iParam8);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam9))
	{
		func_177(iParam9);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam10))
	{
		func_177(iParam10);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam11))
	{
		func_177(iParam11);
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_177(var uParam0)
{
	unk_0x0BBDB952BE56A9DF(uParam0);
	unk_0xCB329F559FA7DCD0();
}

bool func_178(int iParam0)
{
	return Global_35777 == iParam0;
}

void func_179(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_180(char* sParam0)
{
	if (Global_16808 != 0)
	{
		if (!unk_0xC55B9553B3EDADE9(sParam0))
		{
		}
		Global_16808 = 0;
	}
}

int func_181(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1362171)
	{
		if (!Global_2394153[iVar0 /*44*/].f_6)
		{
			if (Global_2394153[iVar0 /*44*/].f_5 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_182()
{
	if (!unk_0xF44A5E894FE76438(uLocal_237, 17))
	{
		func_184(12, 116, "", 1);
		unk_0xB8A73E7DA87B2968(&uLocal_237, 17);
	}
	else if (!unk_0xF44A5E894FE76438(uLocal_237, 18))
	{
		if (func_183(12, 116))
		{
			unk_0xB8A73E7DA87B2968(&uLocal_237, 18);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_181(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2394153[iVar0 /*44*/].f_7)
	{
		return 0;
	}
	if (!Global_2394153[iVar0 /*44*/].f_1)
	{
		return 0;
	}
	func_170(iVar0);
	Global_2395292 = unk_0x84A97C70FFDEC0C8() + 1500;
	return 1;
}

void func_184(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_181(iParam0);
	if (iVar0 != -1)
	{
		func_170(iVar0);
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_185(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1);
}

void func_185(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<13> Var6;
	int iVar19;
	
	iVar0 = func_59();
	iVar1 = 145;
	if (bParam2)
	{
		iVar0 = unk_0x7A4693BB354F3CD3(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_190())
		{
			return;
		}
	}
	iVar2 = Global_1362171;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2394153[iVar2 /*44*/] = { Global_2394153[iVar3 /*44*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1362171++;
	if (Global_1362171 > 12)
	{
		Global_1362171 = 12;
	}
	iVar4 = 0;
	Global_2394153[iVar4 /*44*/] = 0;
	Global_2394153[iVar4 /*44*/].f_1 = 0;
	Global_2394153[iVar4 /*44*/].f_2 = 0;
	Global_2394153[iVar4 /*44*/].f_3 = 0;
	Global_2394153[iVar4 /*44*/].f_4 = iVar0;
	Global_2394153[iVar4 /*44*/].f_5 = iVar1;
	Global_2394153[iVar4 /*44*/].f_6 = bParam2;
	Global_2394153[iVar4 /*44*/].f_7 = iParam0;
	Global_2394153[iVar4 /*44*/].f_8 = -1;
	StringCopy(&(Global_2394153[iVar4 /*44*/].f_9), sParam3, 64);
	Global_2394153[iVar4 /*44*/].f_25 = -1;
	StringCopy(&(Global_2394153[iVar4 /*44*/].f_26), sParam4, 32);
	Global_2394153[iVar4 /*44*/].f_34 = iParam6;
	Global_2394153[iVar4 /*44*/].f_35 = iParam7;
	Global_2394153[iVar4 /*44*/].f_36 = 0;
	Global_2394153[iVar4 /*44*/].f_37 = unk_0x7414B386C0020BEC();
	Global_2394153[iVar4 /*44*/].f_38 = uParam5;
	Global_2394153[iVar4 /*44*/].f_39 = Global_2395291;
	Global_2394153[iVar4 /*44*/].f_43 = iParam8;
	if (iParam0 == 123)
	{
		Global_2394153[iVar4 /*44*/].f_8 = func_187();
	}
	Global_2395291++;
	func_186();
	Global_2394153[iVar4 /*44*/].f_40 = 0;
	Global_2394153[iVar4 /*44*/].f_41 = 0;
	Global_2394153[iVar4 /*44*/].f_42 = 0;
	if (unk_0xF1A016B51831B87B())
	{
		if (bParam2)
		{
			bVar5 = true;
			if (bVar5)
			{
				Var6 = { func_128(iVar0) };
				iVar19 = unk_0x0EADA135C4F71C11(&Var6);
				if (iVar19 != -1)
				{
					Global_2394153[iVar4 /*44*/].f_40 = iVar19;
					Global_2394153[iVar4 /*44*/].f_41 = 1;
					Global_2394153[iVar4 /*44*/].f_42 = 0;
				}
			}
		}
	}
}

void func_186()
{
	Global_1362144 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), 30000);
}

int func_187()
{
	char cVar0[24];
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_189() };
	if (unk_0xC55B9553B3EDADE9(&cVar0) || unk_0xCC257DA11A122B5F(".", &cVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = 0;
	iVar6 = 0;
	while (iVar6 < 7)
	{
		switch (iVar6)
		{
			case 0:
				StringCopy(&cVar0, func_188(51, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_188(52, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_188(53, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_188(54, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_188(55, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_188(56, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_188(57, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!unk_0xC55B9553B3EDADE9(&cVar0) && !unk_0xCC257DA11A122B5F(".", &cVar0))
		{
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 == 0)
	{
		return -1;
	}
	uVar8 = func_140(5403, -1, 0);
	iVar9 = 0;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		iVar9 = iVar6 * 3;
		if (iVar9 != -1)
		{
			if (!unk_0xF44A5E894FE76438(uVar8, iVar9))
			{
				return 7;
			}
		}
		iVar6++;
	}
	return 1;
}

var func_188(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_2523435[iParam0 /*3*/][func_136(iParam1)];
	return unk_0xF1D9DDFE9A9CF52F(uVar0, -1);
}

struct<6> func_189()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	
	if (unk_0xC55B9553B3EDADE9(&(Global_1753195.f_10)))
	{
		iVar7 = func_140(5404, -1, 0);
		if (iVar7 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar6 = 0;
			while (iVar6 < 1118)
			{
				if ((Global_794643.f_4[iVar6 /*88*/].f_65 == 0 && Global_794643.f_4[iVar6 /*88*/].f_68 == 1) && unk_0xF44A5E894FE76438(Global_794643.f_4[iVar6 /*88*/].f_76, 13))
				{
					if (Global_794643.f_98389[iVar6 /*13*/].f_1 == iVar7)
					{
						Var0 = { Global_794643.f_112937[Global_794643.f_98389[iVar6 /*13*/].f_10 /*6*/] };
						iVar6 = 1118;
					}
				}
				iVar6++;
			}
			if (unk_0xC55B9553B3EDADE9(&Var0))
			{
			}
		}
		Global_1753195.f_10 = { Var0 };
		return Var0;
	}
	return Global_1753195.f_10;
}

bool func_190()
{
	return Global_1315189 == 10;
}

void func_191()
{
	var uVar0;
	
	uVar0 = Global_1362443[func_136(-1)];
	unk_0xB8A73E7DA87B2968(&uVar0, 8);
	func_134(1298, uVar0, -1, 1);
}

void func_192(int iParam0, bool bParam1)
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
			Global_2097152[func_193() /*10730*/].f_7546.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_193() /*10730*/].f_7546.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_193() /*10730*/].f_7546.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_193() /*10730*/].f_7546.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_193() /*10730*/].f_7546.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_193() /*10730*/].f_7546.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_193() /*10730*/].f_7546.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_193() /*10730*/].f_7546.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_193() /*10730*/].f_7546.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_193() /*10730*/].f_7546.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_193() /*10730*/].f_7546.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_193() /*10730*/].f_7546.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_193() /*10730*/].f_7546.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_193() /*10730*/].f_7546.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_193() /*10730*/].f_7546.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_193() /*10730*/].f_7546.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_193() /*10730*/].f_7546.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_193() /*10730*/].f_7546.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_193() /*10730*/].f_7546.f_30 = iVar0;
			break;
	}
}

int func_193()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_194()
{
	if (!unk_0xF44A5E894FE76438(uLocal_237, 4))
	{
		if (!unk_0xF44A5E894FE76438(uLocal_237, 8) || (unk_0xF44A5E894FE76438(uLocal_237, 8) && func_33(&uLocal_240, 600000, 0)))
		{
			if (func_200(Local_99.f_5))
			{
				unk_0xB8A73E7DA87B2968(&uLocal_237, 4);
				unk_0x4EA098C870B73AB7(&uLocal_237, 8);
			}
		}
	}
	else if (!func_199())
	{
		if (!unk_0xF44A5E894FE76438(uLocal_237, 19))
		{
			if (func_198())
			{
				unk_0xB8A73E7DA87B2968(&uLocal_237, 19);
			}
			else if (!func_197() && !func_195())
			{
				unk_0xB8A73E7DA87B2968(&uLocal_237, 8);
				unk_0x4EA098C870B73AB7(&uLocal_237, 4);
				func_40(&uLocal_240, 0, 0);
				iLocal_236 = 0;
			}
		}
		else if (!func_195())
		{
			if (func_197())
			{
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&uLocal_237, 8);
		unk_0x4EA098C870B73AB7(&uLocal_237, 4);
		func_40(&uLocal_240, 0, 0);
		iLocal_236 = 0;
	}
	return 0;
}

bool func_195()
{
	return func_196();
}

bool func_196()
{
	return Global_1346465.f_40 == 3;
}

bool func_197()
{
	return Global_1346465.f_57.f_1;
}

int func_198()
{
	if (Global_15745 == 4)
	{
		if (unk_0x982007D3EB9D85D2())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_199()
{
	if (Global_16761)
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	
	switch (iLocal_236)
	{
		case 0:
			if (func_298(0, 1, 1, 1))
			{
				if (!func_297(12, -1))
				{
					func_293(iParam0);
					iLocal_236++;
				}
			}
			break;
		
		case 1:
			iVar0 = func_292(iParam0);
			func_291(iParam0);
			if (func_201(&uLocal_257, iVar0, "FM_1AU", sLocal_422, 0, 0))
			{
				unk_0x4EA098C870B73AB7(&uLocal_237, 11);
				iLocal_236++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_201(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_289())
	{
		return 0;
	}
	if (func_288())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_202(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_202(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC55B9553B3EDADE9(sParam2))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam3))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F());
	iVar1 = func_287(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xC55B9553B3EDADE9(sParam7))
	{
		iVar2 = unk_0x6D9FF4C899CD785F(sParam7);
	}
	if (func_286(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_281(uParam6))
	{
		return 0;
	}
	if (func_278(iVar0, iVar1, iVar2))
	{
		if (func_277())
		{
			return 0;
		}
		func_276();
		return func_209(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_208(iParam4))
	{
		return 0;
	}
	func_203(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_203(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1346465.f_40.f_1 = iParam0;
	Global_1346465.f_40.f_2 = iParam1;
	Global_1346465.f_40.f_3 = iParam2;
	StringCopy(&(Global_1346465.f_40.f_4), sParam3, 16);
	Global_1346465.f_40.f_8 = iParam4;
	Global_1346465.f_40.f_9 = iParam5;
	Global_1346465.f_40.f_14 = uParam6;
	func_204(iParam4);
	func_276();
	Global_1346465.f_40.f_13 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), 7000);
}

void func_204(int iParam0)
{
	if (func_207(iParam0))
	{
		func_206();
		return;
	}
	func_205();
}

void func_205()
{
	Global_1346465.f_40.f_10 = 0;
}

void func_206()
{
	Global_1346465.f_40.f_10 = 1;
}

int func_207(int iParam0)
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

bool func_208(int iParam0)
{
	return iParam0 > Global_1346465.f_40.f_8;
}

int func_209(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_275();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_272(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_269(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_272(uParam0, sParam3, sParam4);
		}
		return func_253(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_252(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_242(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_241(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_210(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_210(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_240();
	bVar0 = true;
	if (func_212(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_211(120000);
		return 1;
	}
	return 0;
}

void func_211(int iParam0)
{
	Global_1346465.f_40.f_11 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), iParam0);
	Global_1346465.f_40.f_12 = 1;
}

int func_212(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_59();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x7746E8ACE891BFA4(iVar0);
		iVar1 = func_234(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8D6C526020C84E23(unk_0x7414B386C0020BEC(), Global_1346465.f_40.f_13))
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
	sVar4 = func_233(sParam5, bParam6, &iVar3);
	uVar5 = func_231(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xC55B9553B3EDADE9(sParam8))
	{
		iVar6++;
		if (!unk_0xC55B9553B3EDADE9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xCC257DA11A122B5F(sVar4, " "))
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
		if (unk_0xF44A5E894FE76438(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xF44A5E894FE76438(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xC55B9553B3EDADE9(sVar2))
	{
		bVar12 = func_230(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_216(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(uParam4, 0))
	{
		func_215();
	}
	func_240();
	func_214();
	func_213();
	return 1;
}

void func_213()
{
	Global_1346465.f_57 = 0;
	Global_1346465.f_57.f_1 = 0;
}

void func_214()
{
	Global_1346465.f_40 = 3;
}

void func_215()
{
	unk_0xB8A73E7DA87B2968(&Global_2313, 8);
}

int func_216(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_217(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0xB8A73E7DA87B2968(&Global_2595258, 0);
		}
		return 1;
	}
	return 0;
}

int func_217(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCC257DA11A122B5F(sParam14, sParam15))
	{
	}
	func_224();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
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
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (unk_0x2C278D8A0121A8DE(unk_0xD5A676B97920D126()))
			{
				return 0;
			}
		}
		if (Global_2595243 == 1)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_223() == 0)
	{
		func_221();
		return 0;
	}
	func_220(Global_2595242);
	StringCopy(&(Global_2593993[Global_2595242 /*104*/]), sParam1, 64);
	Global_2593993[Global_2595242 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2593993[Global_2595242 /*104*/].f_24 = iParam2;
	}
	Global_2593993[Global_2595242 /*104*/].f_25 = iParam7;
	Global_2593993[Global_2595242 /*104*/].f_26 = uParam8;
	Global_2593993[Global_2595242 /*104*/].f_29 = uParam9;
	Global_2593993[Global_2595242 /*104*/].f_30 = uParam12;
	Global_2593993[Global_2595242 /*104*/].f_31 = uParam11;
	Global_2593993[Global_2595242 /*104*/].f_28 = 0;
	Global_2593993[Global_2595242 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_33), sParam4, 64);
	Global_2593993[Global_2595242 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_50), sParam5, 64);
	Global_2593993[Global_2595242 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_83), sParam15, 64);
	func_224();
	switch (iParam16)
	{
		case 3:
			Global_2593993[Global_2595242 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2593993[Global_2595242 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2593993[Global_2595242 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2593993[Global_2595242 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_219(0);
				break;
			
			case 1:
				func_219(1);
				break;
			
			case 2:
				func_219(2);
				break;
			
			case 3:
				func_219(3);
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
				Global_2595243 = 1;
				break;
			
			case 0:
				Global_2595243 = 1;
				break;
			
			case 2:
				Global_2595243 = 1;
				break;
			
			case 1:
				Global_2595243 = 1;
				break;
			}
	}
	Global_16814[Global_2595242] = 0;
	if (bParam10)
	{
		func_224();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_218())
			{
				unk_0xA93E75A5493862BD(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_179(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_175(1);
			func_179(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

bool func_218()
{
	return Global_1315229;
}

void func_219(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101652.f_12994[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_220(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xABA05E2C283C3D5F();
	uVar1 = unk_0xF72CA3D5BA977203();
	uVar2 = unk_0x83D6515EE2CBF18C();
	uVar3 = unk_0x3D13C79BF80EB767();
	uVar4 = unk_0xA93FEF8677A8AF58() + 1;
	uVar5 = unk_0xAC9128C6933DA69B();
	Global_2593993[iParam0 /*104*/].f_18 = uVar0;
	Global_2593993[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2593993[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2593993[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2593993[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2593993[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_221()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2595242 = 11;
	Global_2593993[Global_2595242 /*104*/].f_18 = -1;
	Global_2593993[Global_2595242 /*104*/].f_18.f_1 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_2 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_3 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_222(Global_2593993[iVar2 /*104*/].f_18, Global_2593993[Global_2595242 /*104*/].f_18))
		{
			Global_2595242 = iVar2;
		}
		iVar2++;
	}
	Global_2593993[Global_2595242 /*104*/].f_24 = 1;
}

int func_222(struct<6> Param0, struct<6> Param6)
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

int func_223()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2593993[iVar2 /*104*/].f_24 == 0)
		{
			Global_2595242 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2595242 = 11;
	Global_2593993[Global_2595242 /*104*/].f_18 = -1;
	Global_2593993[Global_2595242 /*104*/].f_18.f_1 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_2 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_3 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2593993[iVar2 /*104*/].f_24 == 0 || Global_2593993[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_222(Global_2593993[iVar2 /*104*/].f_18, Global_2593993[Global_2595242 /*104*/].f_18))
			{
				Global_2595242 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2595242 == 11)
	{
		return 0;
	}
	Global_2593993[Global_2595242 /*104*/].f_99[0] = 0;
	Global_2593993[Global_2595242 /*104*/].f_99[1] = 0;
	Global_2593993[Global_2595242 /*104*/].f_99[2] = 0;
	return 1;
}

void func_224()
{
	if (func_178(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		Global_14443 = func_225();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_225()
{
	func_226();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_226()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_229(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_228(unk_0xD5A676B97920D126());
			if (func_227(iVar0) && (!func_178(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_227(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_227(int iParam0)
{
	return iParam0 < 3;
}

int func_228(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_229(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_229(int iParam0)
{
	if (func_227(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_230(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_217(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0xB8A73E7DA87B2968(&Global_2595258, 0);
		}
		return 1;
	}
	return 0;
}

int func_231(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_232(2, iParam1);
	return iParam0;
}

void func_232(int iParam0, var uParam1)
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

char* func_233(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_232(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xBC2999B1C8F62EDD(sParam0);
}

int func_234(int iParam0)
{
	int iVar0;
	
	iVar0 = func_237(iParam0);
	if (iVar0 == -1)
	{
		func_235(iParam0, 1);
		return 0;
	}
	Global_1363247[iVar0 /*5*/].f_4 = 1;
	return Global_1363247[iVar0 /*5*/].f_2;
}

void func_235(int iParam0, bool bParam1)
{
	if (!func_338(iParam0, 0, 1))
	{
		return;
	}
	if (func_237(iParam0) != -1)
	{
		return;
	}
	if (Global_1363410)
	{
		if (iParam0 == Global_1363410.f_1)
		{
			return;
		}
	}
	if (func_236(iParam0))
	{
		return;
	}
	if (Global_1363448 >= 32)
	{
		return;
	}
	Global_1363415[Global_1363448] = iParam0;
	Global_1363448++;
	if (bParam1)
	{
	}
}

int func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363448)
	{
		if (Global_1363415[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_237(int iParam0)
{
	int iVar0;
	
	if (!func_338(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1363408 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363408)
	{
		if (Global_1363247[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x23723A703C39388B(Global_1363247[iVar0 /*5*/].f_2) && unk_0x4636FE7BA67FB26C(Global_1363247[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_238(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_238(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1363408)
	{
		return;
	}
	if (unk_0x23723A703C39388B(Global_1363247[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1363247[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x48C5A96AE7C462A4(Global_1363247[iParam0 /*5*/].f_2), 64);
			unk_0x776A0FA6BC6101E2(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB8129A62F0984659(Global_1363247[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1363408)
	{
		Global_1363247[iVar32 /*5*/] = { Global_1363247[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_239(&(Global_1363247[iVar32 /*5*/]));
	Global_1363408 = (Global_1363408 - 1);
}

void func_239(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_59();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1995B52453EF6537())
	{
		uParam0->f_3 = unk_0x7414B386C0020BEC();
	}
}

void func_240()
{
	Global_1346465.f_40.f_9 = 4;
}

int func_241(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_240();
	bVar0 = false;
	return func_212(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_242(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_243(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_243(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_59();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x7746E8ACE891BFA4(iVar0);
		iVar1 = func_234(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8D6C526020C84E23(unk_0x7414B386C0020BEC(), Global_1346465.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16806 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_233(sParam5, bParam6, &iVar3);
	uVar5 = func_231(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xC55B9553B3EDADE9(sParam8))
	{
		iVar6++;
		if (!unk_0xC55B9553B3EDADE9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xCC257DA11A122B5F(sVar4, " "))
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
		if (unk_0xF44A5E894FE76438(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xF44A5E894FE76438(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xC55B9553B3EDADE9(sVar2))
	{
		bVar12 = func_251(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_245(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(uParam4, 0))
	{
		func_215();
	}
	func_244();
	func_214();
	func_213();
	return 1;
}

void func_244()
{
	Global_1346465.f_40.f_9 = 3;
}

int func_245(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x4EA098C870B73AB7(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_246(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xB8A73E7DA87B2968(&Global_2313, 1);
			unk_0xB8A73E7DA87B2968(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_246(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCC257DA11A122B5F(sParam14, sParam15))
	{
	}
	func_224();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
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
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (unk_0x2C278D8A0121A8DE(unk_0xD5A676B97920D126()))
			{
				return 0;
			}
		}
		if (Global_101652.f_12994[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_250() == 0)
	{
		func_248();
		return 0;
	}
	func_247(Global_16812);
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/]), sParam1, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101652.f_13084[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_25 = iParam7;
	Global_101652.f_13084[Global_16812 /*104*/].f_26 = uParam8;
	Global_101652.f_13084[Global_16812 /*104*/].f_29 = uParam9;
	Global_101652.f_13084[Global_16812 /*104*/].f_30 = uParam12;
	Global_101652.f_13084[Global_16812 /*104*/].f_31 = uParam11;
	Global_101652.f_13084[Global_16812 /*104*/].f_28 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0xF44A5E894FE76438(Global_2313, 10))
	{
		Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 1;
		Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 1;
		Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_219(0);
		func_219(2);
		func_219(1);
	}
	else
	{
		func_224();
		switch (iParam16)
		{
			case 3:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_219(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_219(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_219(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_219(3);
					Global_3019 = 3;
					break;
				
				default:
					Global_3019 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xF44A5E894FE76438(Global_2313, 10))
		{
			Global_101652.f_12994[0 /*20*/].f_17 = 1;
			Global_101652.f_12994[1 /*20*/].f_17 = 1;
			Global_101652.f_12994[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101652.f_12994[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101652.f_12994[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101652.f_12994[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101652.f_12994[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_224();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_218())
			{
				unk_0xA93E75A5493862BD(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_179(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_175(1);
			func_179(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_247(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xABA05E2C283C3D5F();
	uVar1 = unk_0xF72CA3D5BA977203();
	uVar2 = unk_0x83D6515EE2CBF18C();
	uVar3 = unk_0x3D13C79BF80EB767();
	uVar4 = unk_0xA93FEF8677A8AF58() + 1;
	uVar5 = unk_0xAC9128C6933DA69B();
	Global_101652.f_13084[iParam0 /*104*/].f_18 = uVar0;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_248()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69697)
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
	Global_16812 = 34;
	Global_101652.f_13084[Global_16812 /*104*/].f_18 = -1;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_249(Global_101652.f_13084[iVar2 /*104*/].f_18, Global_101652.f_13084[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_24 = 1;
}

int func_249(struct<6> Param0, struct<6> Param6)
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

int func_250()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69697)
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
		if (Global_101652.f_13084[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101652.f_13084[Global_16812 /*104*/].f_18 = -1;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101652.f_13084[iVar2 /*104*/].f_24 == 0 || Global_101652.f_13084[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_249(Global_101652.f_13084[iVar2 /*104*/].f_18, Global_101652.f_13084[Global_16812 /*104*/].f_18))
			{
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34)
	{
		return 0;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

int func_251(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0x4EA098C870B73AB7(&Global_2313, 10);
	iVar0 = 3;
	if (func_246(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0xB8A73E7DA87B2968(&Global_2313, 1);
			unk_0xB8A73E7DA87B2968(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_252(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
	}
	if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
	{
		return 0;
	}
	func_244();
	bVar0 = true;
	if (func_243(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_211(120000);
		return 1;
	}
	return 0;
}

int func_253(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xF44A5E894FE76438(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xF44A5E894FE76438(uParam4, 4))
	{
		bVar0 = func_268(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_259(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xF44A5E894FE76438(uParam4, 3))
		{
			func_258(1);
		}
		if (unk_0xF44A5E894FE76438(uParam4, 5))
		{
			func_257(1);
		}
		func_256();
		func_214();
		func_255();
		func_254();
		return 1;
	}
	return 0;
}

void func_254()
{
	Global_2501918 = 0;
}

void func_255()
{
	Global_1346465.f_57 = 1;
	Global_1346465.f_57.f_1 = 0;
}

void func_256()
{
	Global_1346465.f_40.f_9 = 1;
}

void func_257(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2315, 0);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2315, 0);
	}
}

void func_258(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 20);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 20);
	}
}

int func_259(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_267(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_260(sParam3, iParam4, bParam7);
}

int func_260(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x73998CD31AEFA620(0);
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
					func_266();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_297(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_265();
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
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_224();
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
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_264())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
				}
			}
			if (func_263())
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_262();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_261();
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
		func_266();
	}
	return 0;
}

void func_261()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(0);
	Global_15745 = 1;
}

void func_262()
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
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_263()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_264()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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

void func_265()
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

void func_266()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_267(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
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

int func_268(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_267(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 1;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_260(sParam3, iParam4, bParam7);
}

int func_269(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
	}
	if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
	{
		return 0;
	}
	if (func_271(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_270();
		func_256();
		func_214();
		func_255();
		func_254();
		return 1;
	}
	return 0;
}

void func_270()
{
	Global_16763 = 0;
}

bool func_271(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_267(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 1;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 1;
	Global_15799 = 0;
	StringCopy(&Global_15893, sParam5, 24);
	Global_2621441 = 0;
	return func_260(sParam3, iParam4, bParam8);
}

int func_272(var uParam0, char* sParam1, char* sParam2)
{
	if (func_274(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_273();
		func_214();
		func_255();
		return 1;
	}
	return 0;
}

void func_273()
{
	Global_1346465.f_40.f_9 = 2;
}

bool func_274(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_267(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_260(sParam2, iParam3, 0);
}

void func_275()
{
	Global_1346465.f_55 = Global_1346465.f_40.f_1;
	Global_1346465.f_55.f_1 = Global_1346465.f_40.f_10;
}

void func_276()
{
	Global_1346465.f_40 = 1;
}

bool func_277()
{
	return Global_1346465.f_40 == 1;
}

int func_278(int iParam0, int iParam1, int iParam2)
{
	if (!func_279(iParam0))
	{
		return 0;
	}
	if (Global_1346465.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1346465.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_279(int iParam0)
{
	if (!func_280())
	{
		return 0;
	}
	if (!Global_1346465.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_280()
{
	if (Global_1346465.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_281(var uParam0)
{
	if (func_285())
	{
		return 0;
	}
	if (func_196())
	{
		return 0;
	}
	if (func_284(0))
	{
		return 0;
	}
	if (Global_1312462.f_18 != 0)
	{
		return 0;
	}
	if (Global_1747153 || func_283())
	{
		return 0;
	}
	if (!unk_0xF44A5E894FE76438(uParam0, 6))
	{
		if (func_282())
		{
			return 0;
		}
	}
	return 1;
}

bool func_282()
{
	return unk_0x8D6C526020C84E23(unk_0x7414B386C0020BEC(), Global_1362144);
}

int func_283()
{
	if (Global_2583825.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_284(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_285()
{
	return func_263();
}

int func_286(int iParam0, int iParam1, int iParam2)
{
	if (!func_196())
	{
		return 0;
	}
	return func_278(iParam0, iParam1, iParam2);
}

int func_287(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x6D9FF4C899CD785F(&cVar0);
}

bool func_288()
{
	return Global_2499487.f_1;
}

int func_289()
{
	if (Global_1346653.f_2)
	{
		return 1;
	}
	return func_290();
}

bool func_290()
{
	return func_285();
}

void func_291(int iParam0)
{
	if (!unk_0xF44A5E894FE76438(uLocal_237, 11))
	{
		switch (iParam0)
		{
			case 0:
				sLocal_422 = "FMA_KIL1";
				unk_0xB8A73E7DA87B2968(&uLocal_237, 11);
				break;
			}
	}
}

int func_292(int iParam0)
{
	int iVar0;
	
	iVar0 = 144;
	switch (iParam0)
	{
		case 0:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_295(12, 3, 0);
			func_294(&uLocal_257, 1, 0, "Lester", 0, 1);
			break;
	}
}

void func_294(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

void func_295(int iParam0, int iParam1, bool bParam2)
{
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_224();
		if (iParam1 == 4)
		{
			Global_101652.f_26993[iParam0 /*29*/].f_12[0] = 1;
			Global_101652.f_26993[iParam0 /*29*/].f_12[1] = 1;
			Global_101652.f_26993[iParam0 /*29*/].f_12[2] = 1;
			Global_101652.f_26993[iParam0 /*29*/].f_24[0] = 1;
			Global_101652.f_26993[iParam0 /*29*/].f_24[1] = 1;
			Global_101652.f_26993[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101652.f_26993[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101652.f_26993[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101652.f_26993[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101652.f_26993[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69697)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_296();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_296();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_296();
			}
		}
	}
}

void func_296()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0x053CD3063CA9436C("");
		StringCopy(&cVar16, unk_0xBC2999B1C8F62EDD(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0xBC2999B1C8F62EDD("CELL_253");
		unk_0xF60216C118DDDFE5(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x053CD3063CA9436C("CELL_255");
		unk_0xB1953EBEF4D6BD85(&(Global_2923[1 /*6*/]));
		unk_0xF60216C118DDDFE5(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x4EA098C870B73AB7(&Global_2313, 0);
}

bool func_297(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

int func_298(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xA14FC57CB26C2B67())
	{
		return 0;
	}
	if (func_303())
	{
		return 0;
	}
	if (!unk_0x8AFBC859AA63D3D7())
	{
		return 0;
	}
	if (func_302())
	{
		return 0;
	}
	if (func_312())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_46(unk_0xFB6B3EEFAB2DD12C(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_45(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 0;
		}
	}
	if (func_301())
	{
		return 0;
	}
	if (unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		return 0;
	}
	if (unk_0x6AAF285DC78E0304())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 0;
		}
	}
	if (Global_1574102)
	{
		return 0;
	}
	if (func_300())
	{
		return 0;
	}
	if (func_299())
	{
		return 0;
	}
	if (func_310())
	{
		return 0;
	}
	if (Global_68127)
	{
		return 0;
	}
	if (Global_2502402)
	{
		return 0;
	}
	return 1;
}

bool func_299()
{
	return Global_2443089.f_570;
}

bool func_300()
{
	return Global_2443089.f_722;
}

bool func_301()
{
	return Global_2433082.f_2506.f_577;
}

bool func_302()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

int func_303()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
	{
		return 1;
	}
	return 0;
}

int func_304()
{
	var uVar0;
	
	uVar0 = Global_1362443[func_136(-1)];
	if (unk_0xF44A5E894FE76438(uVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_305(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x1B982A8B37108B3C(Local_99.f_12[0]))
			{
				Global_2433082.f_3224.f_1[0] = unk_0xE95C934718B1A4FF(Local_99.f_12[0]);
			}
			if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
			{
				Global_2433082.f_3224.f_4[0] = unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]);
			}
			break;
	}
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x1B982A8B37108B3C(Local_99.f_12[0]) && unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_307(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211, iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211), iParam0);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211, iParam0))
	{
		unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211), iParam0);
	}
}

int func_308(int iParam0)
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_309())
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_309()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

bool func_310()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_187 != 0;
}

int func_311()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_188;
}

bool func_312()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 0);
}

void func_313(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	if (!iParam14 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Param0, 14, iParam14);
	}
}

int func_314(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar1)))
		{
			iVar2 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar1));
			if (func_338(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_315()
{
	if (Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 >= 5 && Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 < 6)
	{
		if (unk_0xF44A5E894FE76438(Local_99.f_0, 4))
		{
			if (!unk_0xF44A5E894FE76438(uLocal_237, 3))
			{
				if (func_338(Local_99.f_8, 0, 1))
				{
					func_316("FM_TGDM_KIL", Local_99.f_8, 0, 0, 0, 1, 1, 0);
				}
				unk_0xB8A73E7DA87B2968(&uLocal_237, 3);
			}
		}
	}
}

int func_316(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x2A7336F1C6B39623(iParam1);
	if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		unk_0x053CD3063CA9436C(sParam0);
		if ((iVar1 != -1 && unk_0x8676DE83D4396C39()) && iVar1 < 4)
		{
			if (Global_1632166.f_82772[iVar1] != -1)
			{
				unk_0xF5640E619D8FCD5B(func_100(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xF5640E619D8FCD5B(func_82(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0xF5640E619D8FCD5B(func_82(iParam1, -2, 1, 0));
		}
		unk_0x4C51E4FBCD1D8830(func_80(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x84EF96E928190AB1(0, 1);
		}
		else
		{
			Global_2482005 = { func_128(iParam1) };
			if (unk_0xF6955213DB8BD7D3(&Global_2481935, 35, &Global_2482005))
			{
				iVar18 = 0;
				if (unk_0xCC257DA11A122B5F(&(Global_2481935.f_22), "Leader") && Global_2481935.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2481935.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_317(&Var2) };
					}
					iVar0 = unk_0x060621EC21C1275F(iVar19, unk_0xB06A4D583331C1FF(&Global_2481935, 35), &(Global_2481935.f_17), Global_2481935.f_30, iVar18, 0, Global_2481935, &Var2, Global_1316386, Global_1316387, Global_1316388);
				}
				else
				{
					iVar0 = unk_0x4CFEC8A87106E3F3(iVar19, unk_0xB06A4D583331C1FF(&Global_2481935, 35), &(Global_2481935.f_17), Global_2481935.f_30, iVar18, 0, Global_2481935, Global_1316386, Global_1316387, Global_1316388);
				}
			}
			else
			{
				iVar0 = unk_0x84EF96E928190AB1(0, 1);
			}
		}
		func_76(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_317(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_318()
{
	int iVar0;
	
	iVar0 = unk_0x1E7FB1CA38C403F6();
	if (iLocal_247 != Local_99.f_15)
	{
		iLocal_247 = Local_99.f_15;
		unk_0xF5116E26EBA83CA9(iLocal_247);
	}
	if (iLocal_248 != Local_99.f_16)
	{
		iLocal_248 = Local_99.f_16;
		unk_0xAC4AA684E16779D5(iLocal_248);
	}
	if (func_338(unk_0xFB6B3EEFAB2DD12C(), 0, 1))
	{
		if (!unk_0xF44A5E894FE76438(Local_138[iVar0 /*3*/], 0))
		{
			if (Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 == 0)
			{
				if (func_311() == 0)
				{
					unk_0xB8A73E7DA87B2968(&(Local_138[iVar0 /*3*/]), 0);
				}
			}
		}
		else if (unk_0xF44A5E894FE76438(Local_138[iVar0 /*3*/], 0))
		{
			if ((func_46(unk_0xFB6B3EEFAB2DD12C(), 1) || func_43(unk_0xFB6B3EEFAB2DD12C())) || func_311() > 0)
			{
				func_37(&uLocal_238);
				unk_0x4EA098C870B73AB7(&(Local_138[iVar0 /*3*/]), 0);
			}
			else if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				if (!unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
				{
					if (!unk_0xF44A5E894FE76438(uLocal_237, 7))
					{
						unk_0xB8A73E7DA87B2968(&uLocal_237, 7);
						func_326();
					}
				}
				else if (unk_0xF44A5E894FE76438(uLocal_237, 7))
				{
					unk_0x4EA098C870B73AB7(&uLocal_237, 7);
					if (!func_44(unk_0xFB6B3EEFAB2DD12C(), 0))
					{
						func_324();
					}
				}
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_138[iVar0 /*3*/], 3))
		{
			if (Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 > 3 && Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 < 6)
			{
				if (unk_0xF44A5E894FE76438(Global_2433082.f_3224, 1))
				{
					unk_0xB8A73E7DA87B2968(&(Local_138[iVar0 /*3*/]), 3);
				}
			}
		}
		if (Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 > 3)
		{
			if (!unk_0xF44A5E894FE76438(Local_138[unk_0x1E7FB1CA38C403F6() /*3*/], 5))
			{
				if (func_323(Local_99.f_5))
				{
					unk_0xB8A73E7DA87B2968(&(Local_138[unk_0x1E7FB1CA38C403F6() /*3*/]), 5);
				}
			}
			else if (!func_323(Local_99.f_5))
			{
				unk_0x4EA098C870B73AB7(&(Local_138[unk_0x1E7FB1CA38C403F6() /*3*/]), 5);
			}
			if (!unk_0xF44A5E894FE76438(Local_138[unk_0x1E7FB1CA38C403F6() /*3*/], 6))
			{
				if (func_320(Local_99.f_5))
				{
					unk_0xB8A73E7DA87B2968(&(Local_138[unk_0x1E7FB1CA38C403F6() /*3*/]), 6);
				}
			}
			if (!unk_0xF44A5E894FE76438(Local_138[unk_0x1E7FB1CA38C403F6() /*3*/], 8))
			{
				if (func_319())
				{
					unk_0xB8A73E7DA87B2968(&(Local_138[unk_0x1E7FB1CA38C403F6() /*3*/]), 8);
				}
			}
		}
		if (!unk_0xF44A5E894FE76438(uLocal_237, 13))
		{
			if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					unk_0x9B099BCCBD872090(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), 1, 0);
					unk_0xB8A73E7DA87B2968(&uLocal_237, 13);
				}
			}
		}
	}
}

int func_319()
{
	if (unk_0x1B982A8B37108B3C(Local_99.f_12[0]))
	{
		if (func_9(Local_99.f_12[0]))
		{
			if (unk_0x4EC2DD24B6F44441(unk_0xE95C934718B1A4FF(Local_99.f_12[0]), 0, 7000) || unk_0x4EC2DD24B6F44441(unk_0xE95C934718B1A4FF(Local_99.f_12[0]), 1, 40000))
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

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
					{
						if (func_321(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0])))
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_321(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), uParam0))
	{
		return 1;
	}
	if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), uParam0))
	{
		return 1;
	}
	if (func_322())
	{
		if (unk_0xD5E68CECA2E10B56(unk_0xFB6B3EEFAB2DD12C(), &uVar0))
		{
			if (unk_0x6DA4D1391A7B813F(uVar0))
			{
				uVar1 = unk_0x36B702E1B6552B8A(uVar0);
				if (unk_0x7887B64A08364778(uVar1))
				{
					if (!unk_0xB529B2A4B7C64D6D(uVar1, 0))
					{
						if (unk_0x6A0583ECFCCECC9B(uVar1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_322()
{
	return Global_1574249;
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), 1)) < 40000f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_324()
{
	if (!Global_1312563)
	{
		return;
	}
	func_325();
}

void func_325()
{
	Global_1312563 = 0;
	StringCopy(&(Global_1312563.f_1), "", 24);
	Global_1312563.f_7 = 0;
}

void func_326()
{
	Global_1312563 = 1;
	StringCopy(&(Global_1312563.f_1), unk_0x0FBCE11007AF301F(), 24);
	Global_1312563.f_7 = unk_0x6D9FF4C899CD785F(&(Global_1312563.f_1));
}

void func_327()
{
	switch (Local_99.f_6)
	{
		case 1:
			if (unk_0x04DE35D10A718EEF())
			{
				if (unk_0x1B982A8B37108B3C(Local_99.f_12[0]))
				{
					if (func_9(Local_99.f_12[0]))
					{
						if (!func_35(Local_99.f_9[0]))
						{
							if (unk_0xE4133A0C3C6C74A7(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), unk_0xE95C934718B1A4FF(Local_99.f_12[0])))
							{
								if (unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), -258271821) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), -258271821) != 0)
								{
									unk_0xB192238F4F854097(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), unk_0xE95C934718B1A4FF(Local_99.f_12[0]), 20f, 786603);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x04DE35D10A718EEF())
			{
				if (unk_0x1B982A8B37108B3C(Local_99.f_12[0]))
				{
					if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
					{
						if (func_9(Local_99.f_12[0]))
						{
							if (!func_35(Local_99.f_9[0]))
							{
								if (unk_0xE4133A0C3C6C74A7(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), unk_0xE95C934718B1A4FF(Local_99.f_12[0])))
								{
									if ((unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), -258271821) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), -258271821) != 0) || unk_0xF44A5E894FE76438(Local_99.f_0, 9))
									{
										unk_0xB192238F4F854097(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), unk_0xE95C934718B1A4FF(Local_99.f_12[0]), 30f, 786469);
										if (unk_0xF44A5E894FE76438(Local_99.f_0, 9))
										{
											unk_0x4EA098C870B73AB7(&Local_99, 9);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					if (unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), -828834893) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), -828834893) != 0)
					{
						if (func_331(Local_99.f_9[0]))
						{
							if (unk_0x50CED8EEAE806923(Local_99.f_9[0]))
							{
								unk_0xE9148EE8AA200B60(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), 0, 0);
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
					{
						if (unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), 1805844857) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), 1805844857) != 0)
						{
							if (func_331(Local_99.f_9[0]))
							{
								if (unk_0x50CED8EEAE806923(Local_99.f_9[0]))
								{
									unk_0xBB8F1D58B7578137(unk_0x9E9133ACB2BCC1D5(Local_99.f_9[0]), unk_0xD5A676B97920D126(), 500f, -1, 0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (unk_0x1B982A8B37108B3C(Local_99.f_9[0]))
	{
		if ((Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 >= 5 && Local_138[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 < 6) && !func_162(unk_0xFB6B3EEFAB2DD12C(), 0, 0, 0, 0))
		{
			func_328(Local_99.f_9[0], &Local_249, -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_57(&Local_249);
		}
	}
}

void func_328(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		if (func_330())
		{
			Global_2433082 = unk_0xFB6B3EEFAB2DD12C();
		}
		if (bParam3)
		{
			func_329(unk_0x9E9133ACB2BCC1D5(uParam0), uParam1, 1, Global_2433082, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_329(unk_0x9E9133ACB2BCC1D5(uParam0), uParam1, -1, Global_2433082, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x6901135DDCC4904D(*uParam1))
	{
		func_57(uParam1);
	}
}

int func_329(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xF3F8195C98263BF5();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x00B5B0B68211D89B(uParam0))
	{
		if (!unk_0x809387353710848E(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x78E064446A641529(iParam0, 1);
			}
			else
			{
				unk_0xF12F7DD5C806C87C(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x15384506B12EE9D5(iParam0, iParam2);
			unk_0x542A2C3DC0374D53(iParam0, fParam6);
			if (unk_0x6901135DDCC4904D(*uParam1))
			{
				unk_0x0D792BA553E57B27(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x70F2D7B891171E48(iParam0, iParam9);
		}
		unk_0x445B259664586FAE(iParam0, uParam4);
		unk_0x9B38006BF68A10D5(iParam0, uParam5);
		*uParam1 = unk_0x6CABC22169F0A7EF(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x6901135DDCC4904D(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x4F095059F1C175D5(*uParam1, iParam8);
				}
				unk_0xD5CB3DBDC39C94B8("STRING");
				if (bParam10)
				{
					unk_0x4C51E4FBCD1D8830(uParam7);
				}
				else
				{
					unk_0xB1953EBEF4D6BD85(uParam7);
				}
				unk_0x16754E7FB61E7A65(*uParam1);
				unk_0x0D792BA553E57B27(*uParam1, 7);
			}
		}
		if (!unk_0xF44A5E894FE76438(uParam1->f_6, 2))
		{
			if (unk_0x6901135DDCC4904D(*uParam1))
			{
				if (!unk_0xC55B9553B3EDADE9(uParam7))
				{
					unk_0xD5CB3DBDC39C94B8("STRING");
					if (bParam10)
					{
						unk_0x4C51E4FBCD1D8830(sParam7);
					}
					else
					{
						unk_0xB1953EBEF4D6BD85(sParam7);
					}
					unk_0x16754E7FB61E7A65(*uParam1);
				}
				unk_0xB8A73E7DA87B2968(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x6A0583ECFCCECC9B(iParam0, 0))
		{
			uParam1->f_1 = unk_0x826D1C7EA579B9BB(iParam0);
			if (!unk_0xF44A5E894FE76438(uParam1->f_6, 3))
			{
				if (unk_0x6901135DDCC4904D(uParam1->f_1))
				{
					unk_0x0D792BA553E57B27(uParam1->f_1, 7);
					unk_0xB8A73E7DA87B2968(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x6901135DDCC4904D(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x4EA098C870B73AB7(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_330()
{
	return Global_1315206;
}

int func_331(var uParam0)
{
	if (unk_0x7577EA45D81AA1C8(uParam0))
	{
		return 1;
	}
	if (func_332(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_332(var uParam0)
{
	if (!unk_0x04DE35D10A718EEF())
	{
		return 0;
	}
	if (!unk_0x1B982A8B37108B3C(uParam0))
	{
		return 0;
	}
	if (func_333(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_333(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		unk_0x370543697500755D(uParam0);
		return unk_0x50CED8EEAE806923(uParam0);
	}
	return 0;
}

int func_334()
{
	return Local_99.f_1;
}

int func_335(int iParam0)
{
	return Local_138[iParam0 /*3*/].f_1;
}

void func_336()
{
	func_50();
	func_307(11, 0);
	func_169(12, 116);
	unk_0x4EA098C870B73AB7(&(Global_2433082.f_3224), 0);
	unk_0x4EA098C870B73AB7(&(Global_2433082.f_3224), 1);
	if (unk_0x1995B52453EF6537())
	{
		if (unk_0x1E7FB1CA38C403F6() > -1)
		{
			Local_138[unk_0x1E7FB1CA38C403F6() /*3*/] = 0;
		}
	}
	if (unk_0x1995B52453EF6537())
	{
		if (unk_0x04DE35D10A718EEF())
		{
			if (unk_0x1E677C61683305CA(Local_99.f_3))
			{
				unk_0x87719A53A5335AE4(Local_99.f_3);
			}
			Local_99.f_3 = -1;
		}
	}
	if (unk_0x6901135DDCC4904D(Global_1747129))
	{
		unk_0x8A3D7569826A325D(&Global_1747129);
	}
	unk_0x4EA098C870B73AB7(&uLocal_237, 3);
	unk_0x4EA098C870B73AB7(&uLocal_237, 4);
	iLocal_236 = 0;
	if (unk_0x6901135DDCC4904D(Local_249.f_0))
	{
		unk_0x8A3D7569826A325D(&Local_249);
	}
	func_337();
}

void func_337()
{
	unk_0x01DFCA3621B68C4A();
}

int func_338(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_339()
{
	bool bVar0;
	var uVar1;
	
	func_346(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			return 1;
		}
	}
	if (func_345())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_344())
	{
		return 1;
	}
	if (func_343(157))
	{
		if (!func_342())
		{
			return 1;
		}
	}
	if (func_343(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_340() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_340()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_340()
{
	switch (func_341())
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

int func_341()
{
	return Global_25185;
}

bool func_342()
{
	return Global_2443089.f_577;
}

int func_343(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_344()
{
	return Global_2452479;
}

bool func_345()
{
	return Global_2443089.f_572;
}

void func_346(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 365:
					func_347(iVar0);
					break;
				
				case 2:
					unk_0x49897615E4CA227C(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_347(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_338(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(uVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(iVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_348(uVar4, &bVar5))
						{
							unk_0x0AB574163629C3BD(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB24D3BF5DABD13AA(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_348(var uParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(uParam0))
		{
			if (unk_0x94482DCC4926EF60(uParam0))
			{
				unk_0xC53606C390BE2727(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(uParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_349()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_350(struct<20> Param0)
{
	func_353(func_354(Param0.f_0), Param0);
	func_352(0, -1, 0);
	unk_0x1CB2FF4BC0AF8B2C(&Local_99, 23);
	unk_0x47DDB3A546F48091(&Local_138, 97);
	unk_0x7E85CEE862B85A74(0);
	if (!func_351())
	{
		func_336();
	}
	unk_0xB8A73E7DA87B2968(&(Global_2433082.f_3224), 0);
	unk_0x4EA098C870B73AB7(&(Global_2433082.f_3224), 1);
}

int func_351()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1995B52453EF6537())
		{
			return 0;
		}
		if (unk_0x34AA2E80B3872230())
		{
			return 1;
		}
		if (func_345())
		{
			return 0;
		}
		if (func_343(155))
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

int func_352(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_337();
			}
			else
			{
				return 0;
			}
		}
		if (!func_330())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1995B52453EF6537())
				{
					if (!bParam2)
					{
						func_337();
					}
					else
					{
						return 0;
					}
				}
				if (func_345())
				{
					if (!bParam2)
					{
						func_337();
					}
					else
					{
						return 0;
					}
				}
				if (func_343(155))
				{
					if (!bParam2)
					{
						func_337();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92DD6B9655D31C6A())
			{
				if (!bParam2)
				{
					func_337();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x1E6D5854F5CCAE3F();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			if (!bParam2)
			{
				func_337();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92DD6B9655D31C6A())
	{
		if (!bParam2)
		{
			func_337();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_353(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1995B52453EF6537())
	{
		func_337();
	}
	unk_0x6AFFC4188D3C82E8(uParam0, 0, Param1.f_16);
}

int func_354(int iParam0)
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
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
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
		
		case 106:
			return 32;
		
		case 107:
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
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 113:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 117:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 2;
		
		case 129:
			return 1;
		
		case 125:
			return 2;
		
		case 126:
			return 4;
		
		case 127:
			return 2;
		
		case 128:
			return 2;
		
		case 110:
			return 1;
		
		case 130:
			return 2;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 0;
		
		case 140:
			return 1;
		
		case 137:
			return 4;
		
		case 138:
			return 16;
		
		case 139:
			return 32;
		
		default:
	}
	return 0;
}

