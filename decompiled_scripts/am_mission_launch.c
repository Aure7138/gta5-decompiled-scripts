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
		if (func_339() || !func_338(unk_0xBE369BE1BC57A796(), 0, 1))
		{
			func_336();
		}
		switch (func_335(unk_0xCA1D9459B2CC7619()))
		{
			case 0:
				if (func_334() == 2)
				{
					Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_1 = 2;
				}
				else if (func_334() == 6)
				{
					Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_1 = 5;
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
					Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_1 = 5;
				}
				if (((func_46(unk_0xBE369BE1BC57A796(), 1) || func_43(unk_0xBE369BE1BC57A796())) || unk_0x48B8265059381CD0(uLocal_237, 8)) || unk_0x48B8265059381CD0(uLocal_237, 16))
				{
					Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_1 = 6;
				}
				break;
			
			case 5:
				func_42(&(Local_99.f_19));
				if (func_41(&(Local_99.f_19)))
				{
					Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_1 = 6;
				}
				break;
			
			case 3:
				Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_1 = 6;
			
			case 6:
				func_336();
				break;
		}
		if (unk_0x415DF132F15085E8())
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
	return unk_0x48B8265059381CD0(Local_99.f_0, 6);
}

void func_3()
{
	if (unk_0x415DF132F15085E8())
	{
		switch (Local_99.f_2)
		{
			case 0:
				if (!unk_0x48B8265059381CD0(Local_99.f_0, 10))
				{
					if (func_33(&(Local_99.f_17), 300000, 0))
					{
						unk_0xEB79FECD9022AAF0(&Local_99, 10);
					}
				}
				if (!unk_0x48B8265059381CD0(Local_99.f_0, 10))
				{
					if (unk_0x48B8265059381CD0(Local_99.f_0, 0))
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
					unk_0xEB79FECD9022AAF0(&Local_99, 3);
					unk_0x21E7933CCC7B3724(&Local_99, 13);
					func_40(&(Local_99.f_21), 0, 0);
					Local_99.f_2 = 2;
				}
				break;
			
			case 2:
				if (unk_0x48B8265059381CD0(Local_99.f_0, 4))
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
	
	if (unk_0x841F312D66362BF7(*uParam0))
	{
		uVar0 = unk_0x03981D6F4893D7D0(*uParam0);
		unk_0x47C2619E72CEAA4F(&uVar0);
	}
}

int func_6()
{
	if (Local_99.f_5 == 0)
	{
		if (!unk_0x48B8265059381CD0(Local_99.f_0, 1))
		{
			iLocal_245 = 0;
			iLocal_246 = unk_0x0E29C61F26D96FDB(0, 5);
			iLocal_123 = 0;
			Local_99.f_3 = -1;
			Local_99.f_4 = 0;
			unk_0xEB79FECD9022AAF0(&Local_99, 1);
		}
		if (!unk_0x48B8265059381CD0(Local_99.f_0, 2))
		{
			if (func_31())
			{
				unk_0xEB79FECD9022AAF0(&Local_99, 2);
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
	if (!unk_0x841F312D66362BF7(Local_99.f_12[0]))
	{
		if (Local_99.f_15 == 0)
		{
			unk_0x43FD798CD0523B1F(1);
			Local_99.f_15 = 1;
		}
		if (!unk_0x48B8265059381CD0(Local_99.f_0, 13))
		{
			if (unk_0x54EBD52F64A07B00(1))
			{
				if (unk_0x2357075D7B96D56A(1))
				{
					if (func_28(1, 1, 1))
					{
						if (func_22(1, 1, 1))
						{
							unk_0xEB79FECD9022AAF0(&Local_99, 13);
						}
					}
				}
			}
		}
		if (unk_0x48B8265059381CD0(Local_99.f_0, 13))
		{
			if (func_21(iVar1))
			{
				if (func_21(iVar0))
				{
					if (func_12(&Var2, &uVar5))
					{
						if (func_11(&(Local_99.f_12[0]), iVar1, Var2, uVar5, 1, 1, 1, 0, 1, 1, 0))
						{
							unk_0x6FE87B0CB5BE8FB1(unk_0xC7C67E717B20DA89(Local_99.f_12[0]), 1);
							if (unk_0x34D7B5822CF22910("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x25E9B908B35A0675(unk_0xC7C67E717B20DA89(Local_99.f_12[0]), "Not_Allow_As_Saved_Veh", 1);
							}
							Local_99.f_15 = 1;
						}
					}
				}
			}
		}
	}
	if (unk_0x841F312D66362BF7(Local_99.f_12[0]))
	{
		if (!unk_0x841F312D66362BF7(Local_99.f_9[0]))
		{
			if (Local_99.f_16 == 0)
			{
				unk_0x06EC4FFE0DCCA716(1);
				Local_99.f_16 = 1;
			}
			if (unk_0x2357075D7B96D56A(1))
			{
				if (func_21(iVar0))
				{
					if (func_9(Local_99.f_12[0]))
					{
						if (unk_0x093776FE2E6B4BAC(Local_99.f_12[0]))
						{
							if (func_8(&(Local_99.f_9[0]), Local_99.f_12[0], 26, iVar0, -1, 1, 1, 1))
							{
								unk_0x6FE87B0CB5BE8FB1(unk_0xDE2767751C03729D(Local_99.f_9[0]), 1);
								unk_0x7771211498B88EA3(unk_0xDE2767751C03729D(Local_99.f_9[0]), 1, 0);
								unk_0xCC61640A821F277C(unk_0xDE2767751C03729D(Local_99.f_9[0]), 1);
								unk_0x3BB70315907D9456(unk_0xDE2767751C03729D(Local_99.f_9[0]), Global_1574723);
								unk_0x7771211498B88EA3(unk_0xDE2767751C03729D(Local_99.f_9[0]), 1, 0);
								unk_0x4B04B4FAE554FA03(unk_0xDE2767751C03729D(Local_99.f_9[0]), unk_0xF2DB717A73826179((200f * Global_262145.f_153)));
								Local_99.f_16 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0x841F312D66362BF7(Local_99.f_9[0]) || !unk_0x841F312D66362BF7(Local_99.f_12[0]))
	{
		return 0;
	}
	return 1;
}

int func_8(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x2357075D7B96D56A(1))
	{
		return 0;
	}
	if (!unk_0x49C2DB27EDED0049(uParam1))
	{
		return 0;
	}
	if (!unk_0x45CD66F0A131E554(unk_0xC7C67E717B20DA89(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x60A7E0316C35C19D(unk_0x3FBC0964EB7878AF(unk_0xC7C67E717B20DA89(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(unk_0xDE2767751C03729D(*uParam0), iParam7);
		if (unk_0x04DB71A22837F85C(unk_0xDE2767751C03729D(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_9(var uParam0)
{
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		return !func_10(unk_0xC7C67E717B20DA89(uParam0));
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (unk_0xA929B2923D14E2F8(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x45CD66F0A131E554(uParam0, 0))
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
	var uVar0;
	
	if (!unk_0x54EBD52F64A07B00(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x0668B21A0C3A4821(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x692A2891A2BA7352(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x90C414D950E11ED7(uVar0);
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(uVar0, iParam10);
		if (unk_0x04DB71A22837F85C(uVar0))
		{
			if (bParam8)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
			}
			else
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 0);
			}
		}
		unk_0xBE993A95A7771E1E(uVar0, iParam9);
		unk_0xBF95E912FF7B9A12(uVar0, 1);
		if (bParam12)
		{
			unk_0x07D85C47233917C3(uVar0);
			unk_0x800D9F6E9FDC9680(uVar0, 5, 5, 1f);
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
			if (unk_0x48B8265059381CD0(Local_99.f_4, iLocal_246))
			{
				Var0 = { -1232.842f, -1095.003f, 2.2331f };
				Var3 = { -1226.248f, -1089.819f, 10.1513f };
				Var6 = { func_19(0, 0) };
				fVar9 = 19.7853f;
			}
			break;
		
		case 1:
			if (unk_0x48B8265059381CD0(Local_99.f_4, iLocal_246))
			{
				Var0 = { -622.0966f, 250.3288f, 75.7075f };
				Var3 = { -614.8635f, 255.2288f, 88.7755f };
				Var6 = { func_19(0, 1) };
				fVar9 = 266.4686f;
			}
			break;
		
		case 2:
			if (unk_0x48B8265059381CD0(Local_99.f_4, iLocal_246))
			{
				Var0 = { 794.4784f, -2034.339f, 25.2469f };
				Var3 = { 798.8026f, -2026.004f, 33.2793f };
				Var6 = { func_19(0, 2) };
				fVar9 = 355.9428f;
			}
			break;
		
		case 3:
			if (unk_0x48B8265059381CD0(Local_99.f_4, iLocal_246))
			{
				Var0 = { -1623.919f, 1249.831f, 135.2495f };
				Var3 = { -1621.554f, 1257.98f, 145.2376f };
				Var6 = { func_19(0, 3) };
				fVar9 = 353.7463f;
			}
			break;
		
		case 4:
			if (unk_0x48B8265059381CD0(Local_99.f_4, iLocal_246))
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
				Local_99.f_3 = unk_0x7578D68ED86C70E5(Var0, Var3);
			}
			else if (unk_0xF4B38546B3A1EDA3(Local_99.f_3))
			{
				if (unk_0x88384729AD1C4262(Local_99.f_3))
				{
					if (!unk_0xC3562A4B065033A3(Local_99.f_3))
					{
						if (!func_13(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							unk_0x6ACF6CEA82656F30(Local_99.f_3);
							return 1;
						}
						else
						{
							iLocal_246++;
							unk_0x6ACF6CEA82656F30(Local_99.f_3);
							Local_99.f_3 = -1;
						}
					}
					else
					{
						iLocal_246++;
						unk_0x6ACF6CEA82656F30(Local_99.f_3);
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
		if (func_338(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			if (!unk_0x25BD4C26D84038CD())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x3DC4639D5F23DEA2(func_18(unk_0xBE369BE1BC57A796()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xF7E1BD8196545EE3(Param0, fParam3))
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
			if (!func_15(iVar1, 0) && unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xBE369BE1BC57A796()))
				{
					if ((func_14(iVar1) || !bParam10) && !Global_2421664[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0xB58DEBB81964A4E9(iVar1) == unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB58DEBB81964A4E9(iVar1) != unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))) || unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0x3DC4639D5F23DEA2(func_18(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB58DEBB81964A4E9(iVar1) != iParam8 || unk_0xB58DEBB81964A4E9(iVar1) == -1)
						{
							if (unk_0x3DC4639D5F23DEA2(func_18(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
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
	if (unk_0xF86EF5C41AFF5F1F(unk_0xDF7CE83326F434E9(iParam0)) || Global_2421664[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

bool func_15(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_16(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
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
	if (Global_1315213[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_17()
{
	return Global_1312735;
}

Vector3 func_18(int iParam0)
{
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iParam0), 0);
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
	unk_0xE1324F59713746FA(iParam0);
	return unk_0x9F746898F7881612(iParam0);
}

bool func_22(int iParam0, bool bParam1, bool bParam2)
{
	return func_23(0, iParam0, 1, bParam1, bParam2);
}

int func_23(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x48B8265059381CD0(Global_1364290, 0))
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
		if (!bParam4 && Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] != 3)
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
			return Global_1364290.f_1;
			break;
		
		case 1:
			return Global_1364290.f_2;
			break;
		
		case 2:
			return Global_1364290.f_3;
			break;
	}
	return 0;
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xBE369BE1BC57A796();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_212;
			}
			else
			{
				return unk_0xA2D6CF086A2F622F(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_213;
			}
			else
			{
				return unk_0x71726B5B622E1778(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_214;
			}
			else
			{
				return unk_0xC124B46B968EA962(!bParam1);
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
			return Global_1364298;
			break;
		
		case 1:
			return Global_1364299;
			break;
		
		case 2:
			return Global_1364300;
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
	
	if (unk_0x48B8265059381CD0(Local_99.f_0, 1))
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
			unk_0xEB79FECD9022AAF0(&uLocal_237, 1);
		}
		if (iLocal_245 < 5)
		{
			iVar9 = iLocal_123;
			if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar9)))
			{
				iVar0 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar9));
				if (func_338(iVar0, 1, 1))
				{
					uVar1 = unk_0xDF7CE83326F434E9(iVar0);
					if (unk_0x48B8265059381CD0(uLocal_237, 1))
					{
						Var2 = { func_19(Local_99.f_5, iLocal_245) };
						Var5 = { unk_0x57240623C1BC6E88(uVar1, 0) };
						fVar8 = unk_0x3DC4639D5F23DEA2(Var2, Var5, 1);
						if (fVar8 < 300f)
						{
							unk_0x21E7933CCC7B3724(&uLocal_237, 1);
						}
					}
				}
			}
			iLocal_123++;
			if (iLocal_123 == Local_138.f_0)
			{
				if (unk_0x48B8265059381CD0(uLocal_237, 1))
				{
					unk_0xEB79FECD9022AAF0(&(Local_99.f_4), iLocal_245);
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
	if (unk_0x63C468D583002D23() && !bParam2)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_34()
{
	if (unk_0x415DF132F15085E8())
	{
		switch (Local_99.f_6)
		{
			case 0:
				if (unk_0x841F312D66362BF7(Local_99.f_9[0]) && unk_0x841F312D66362BF7(Local_99.f_12[0]))
				{
					Local_99.f_6 = 1;
				}
				break;
			
			case 1:
				if (unk_0x841F312D66362BF7(Local_99.f_9[0]))
				{
					if (!func_35(Local_99.f_9[0]))
					{
						if (unk_0x841F312D66362BF7(Local_99.f_12[0]))
						{
							if (func_9(Local_99.f_12[0]))
							{
								if (unk_0x7B816C72877502C5(unk_0xDE2767751C03729D(Local_99.f_9[0]), unk_0xC7C67E717B20DA89(Local_99.f_12[0])))
								{
									if (unk_0x48B8265059381CD0(Local_99.f_0, 7))
									{
										unk_0xEB79FECD9022AAF0(&Local_99, 9);
										Local_99.f_6 = 2;
									}
									else if (unk_0x48B8265059381CD0(Local_99.f_0, 14))
									{
										unk_0xEB79FECD9022AAF0(&Local_99, 9);
										Local_99.f_6 = 2;
									}
									else if (unk_0x48B8265059381CD0(Local_99.f_0, 19))
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
				if (unk_0x841F312D66362BF7(Local_99.f_9[0]))
				{
					if (!func_35(Local_99.f_9[0]))
					{
						if (!unk_0xD035C652F0986F10(unk_0xDE2767751C03729D(Local_99.f_9[0])))
						{
							Local_99.f_6 = 4;
						}
						else if (unk_0x841F312D66362BF7(Local_99.f_12[0]))
						{
							if (!func_9(Local_99.f_12[0]))
							{
								Local_99.f_6 = 3;
							}
							else if (unk_0x48B8265059381CD0(Local_99.f_0, 19))
							{
								Local_99.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0x841F312D66362BF7(Local_99.f_9[0]))
				{
					if (!func_35(Local_99.f_9[0]))
					{
						if (!unk_0xFD0FE723227D5AB6(unk_0xDE2767751C03729D(Local_99.f_9[0]), 0))
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
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		return unk_0xCA41A00932714525(unk_0xDE2767751C03729D(uParam0));
	}
	return 1;
}

void func_36()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (unk_0x415DF132F15085E8())
	{
		if (iLocal_122 >= Local_138.f_0)
		{
			iLocal_122 = 0;
			iLocal_244 = 0;
			unk_0x21E7933CCC7B3724(&uLocal_237, 0);
			unk_0xEB79FECD9022AAF0(&uLocal_237, 5);
			unk_0x21E7933CCC7B3724(&Local_99, 5);
			unk_0x21E7933CCC7B3724(&Local_99, 17);
			unk_0x21E7933CCC7B3724(&uLocal_237, 14);
			unk_0x21E7933CCC7B3724(&uLocal_237, 19);
			if (!unk_0x48B8265059381CD0(Local_99.f_0, 16))
			{
				if (unk_0x48B8265059381CD0(Local_99.f_0, 18))
				{
					if (!unk_0x48B8265059381CD0(Local_99.f_0, 4))
					{
						unk_0xEB79FECD9022AAF0(&Local_99, 16);
					}
				}
			}
			if (func_39(&(Local_99.f_21)))
			{
				if (!unk_0x48B8265059381CD0(Local_99.f_0, 12))
				{
					if (func_33(&(Local_99.f_21), 360000, 0))
					{
						unk_0xEB79FECD9022AAF0(&Local_99, 12);
					}
					if (!unk_0x48B8265059381CD0(Local_99.f_0, 15))
					{
						if (func_33(&(Local_99.f_21), 240000, 0))
						{
							unk_0xEB79FECD9022AAF0(&Local_99, 15);
						}
					}
				}
				else
				{
					unk_0xEB79FECD9022AAF0(&uLocal_237, 9);
				}
			}
		}
		iVar0 = iLocal_122;
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar0)))
		{
			uVar3 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0));
			iVar2 = uVar3;
			if (unk_0x48B8265059381CD0(uLocal_237, 5))
			{
				if (Local_138[iVar0 /*3*/].f_2 < 7)
				{
					unk_0x21E7933CCC7B3724(&uLocal_237, 5);
				}
			}
			if (!unk_0x48B8265059381CD0(Local_99.f_0, 0))
			{
				if (unk_0x48B8265059381CD0(Local_138[iVar0 /*3*/], 0))
				{
					iLocal_244++;
				}
			}
			else if (unk_0x48B8265059381CD0(Local_138[iVar0 /*3*/], 2))
			{
				if (!unk_0x48B8265059381CD0(Local_99.f_0, 17))
				{
					if (!unk_0x48B8265059381CD0(Local_99.f_7, iVar2))
					{
						if (Local_138[iVar0 /*3*/].f_2 > 4)
						{
							unk_0xEB79FECD9022AAF0(&(Local_99.f_7), iVar2);
							unk_0xEB79FECD9022AAF0(&Local_99, 17);
						}
					}
				}
				if (!unk_0x48B8265059381CD0(Local_99.f_0, 5))
				{
					unk_0xEB79FECD9022AAF0(&Local_99, 5);
				}
				if (!unk_0x48B8265059381CD0(Local_99.f_0, 4))
				{
					if (unk_0x48B8265059381CD0(Local_138[iVar0 /*3*/], 1))
					{
						Local_99.f_8 = uVar3;
						unk_0xEB79FECD9022AAF0(&Local_99, 4);
						unk_0x21E7933CCC7B3724(&uLocal_237, 15);
						unk_0x21E7933CCC7B3724(&Local_99, 18);
					}
				}
				if (!unk_0x48B8265059381CD0(Local_99.f_0, 4))
				{
					if (!unk_0x48B8265059381CD0(Local_99.f_0, 18))
					{
						if (unk_0x48B8265059381CD0(Local_138[iVar0 /*3*/], 7))
						{
							unk_0xEB79FECD9022AAF0(&Local_99, 18);
						}
					}
				}
				if (unk_0x48B8265059381CD0(uLocal_237, 9))
				{
					if (unk_0x48B8265059381CD0(Local_138[iVar0 /*3*/], 5))
					{
						unk_0x21E7933CCC7B3724(&uLocal_237, 9);
					}
				}
				if (!unk_0x48B8265059381CD0(uLocal_237, 14))
				{
					if (unk_0x48B8265059381CD0(Local_138[iVar0 /*3*/], 6))
					{
						unk_0xEB79FECD9022AAF0(&uLocal_237, 14);
					}
				}
				if (!unk_0x48B8265059381CD0(uLocal_237, 20))
				{
					if (unk_0x48B8265059381CD0(Local_138[iVar0 /*3*/], 8))
					{
						unk_0xEB79FECD9022AAF0(&uLocal_237, 20);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar1)))
			{
				func_38(iVar1);
			}
			iVar1++;
		}
		iLocal_122++;
		if (iLocal_122 >= Local_138.f_0)
		{
			if (!unk_0x48B8265059381CD0(Local_99.f_0, 16))
			{
				if (unk_0x841F312D66362BF7(Local_99.f_9[0]))
				{
					if (func_35(Local_99.f_9[0]))
					{
						if (!unk_0x48B8265059381CD0(Local_99.f_0, 4))
						{
							if (unk_0x48B8265059381CD0(uLocal_237, 15))
							{
								if (!func_39(&uLocal_242))
								{
									func_40(&uLocal_242, 0, 0);
								}
								else if (func_33(&uLocal_242, 2000, 0))
								{
									unk_0xEB79FECD9022AAF0(&Local_99, 16);
								}
							}
						}
					}
				}
			}
			unk_0xEB79FECD9022AAF0(&uLocal_237, 0);
			if (!unk_0x48B8265059381CD0(Local_99.f_0, 0))
			{
				if (iLocal_244 >= 1)
				{
					unk_0xEB79FECD9022AAF0(&Local_99, 0);
				}
			}
			if (!unk_0x48B8265059381CD0(Local_99.f_0, 14))
			{
				if (unk_0x48B8265059381CD0(uLocal_237, 14))
				{
					unk_0xEB79FECD9022AAF0(&Local_99, 14);
				}
			}
			if (!unk_0x48B8265059381CD0(Local_99.f_0, 19))
			{
				if (unk_0x48B8265059381CD0(uLocal_237, 20))
				{
					unk_0xEB79FECD9022AAF0(&Local_99, 19);
				}
			}
			if (!unk_0x48B8265059381CD0(Local_99.f_0, 6))
			{
				if (unk_0x48B8265059381CD0(uLocal_237, 5))
				{
					if (Local_99.f_2 > 1 && Local_99.f_2 <= 7)
					{
						unk_0xEB79FECD9022AAF0(&Local_99, 6);
					}
					else if (unk_0x48B8265059381CD0(Local_99.f_0, 10))
					{
						unk_0xEB79FECD9022AAF0(&Local_99, 6);
					}
				}
			}
			if (unk_0x48B8265059381CD0(Local_99.f_0, 17))
			{
				unk_0x21E7933CCC7B3724(&Local_99, 17);
				unk_0x21E7933CCC7B3724(&Local_99, 15);
				unk_0x21E7933CCC7B3724(&Local_99, 12);
				func_37(&(Local_99.f_21));
				func_40(&(Local_99.f_21), 0, 0);
			}
			if (!unk_0x48B8265059381CD0(Local_99.f_0, 11))
			{
				if (unk_0x48B8265059381CD0(Local_99.f_0, 12))
				{
					if (unk_0x48B8265059381CD0(uLocal_237, 9))
					{
						unk_0xEB79FECD9022AAF0(&Local_99, 11);
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
	if (unk_0x415DF132F15085E8())
	{
		if (!unk_0x48B8265059381CD0(Local_99.f_0, 7))
		{
			if (unk_0x48B8265059381CD0(Local_138[iParam0 /*3*/], 3))
			{
				unk_0xEB79FECD9022AAF0(&Local_99, 7);
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
		if (unk_0x63C468D583002D23() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xCB150A8B81012128();
			}
			else
			{
				*uParam0 = unk_0x8F8F2E80A7DA4D64();
			}
		}
		else
		{
			*uParam0 = unk_0x94E3E074F38DF86C();
		}
		uParam0->f_1 = 1;
	}
}

int func_41(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= 1000)
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
		if (unk_0x415DF132F15085E8())
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
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_211, iParam1);
}

int func_45(int iParam0)
{
	if (Global_2421664[iParam0 /*358*/].f_211 == 0)
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
	if (Global_1591201[iParam0 /*602*/] == -1)
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
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_13.f_1, 0);
}

void func_49()
{
	func_318();
	func_315();
	if (unk_0x48B8265059381CD0(Local_99.f_0, 10))
	{
		if (Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 < 6)
		{
			Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 6;
		}
	}
	if (unk_0x48B8265059381CD0(Local_99.f_0, 4))
	{
		if (Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 <= 6)
		{
			Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 6;
		}
	}
	if (unk_0x48B8265059381CD0(Local_99.f_0, 16))
	{
		if (!unk_0x48B8265059381CD0(Local_99.f_0, 4))
		{
			if (Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 <= 6)
			{
				Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 6;
				Local_124.f_2 = 41;
				func_313(Local_124, func_314(1));
			}
		}
	}
	if (unk_0x48B8265059381CD0(Local_99.f_0, 11))
	{
		if (Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 <= 6)
		{
			Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 6;
			Local_124.f_2 = 41;
			func_313(Local_124, func_314(1));
		}
	}
	if (Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 > 0)
	{
		if (Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 < 6)
		{
			if ((((func_46(unk_0xBE369BE1BC57A796(), 1) || func_312()) || func_311() > 0) || func_44(unk_0xBE369BE1BC57A796(), 1)) || func_310())
			{
				Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 6;
			}
		}
	}
	if (Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 > 0)
	{
		if (Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 < 6)
		{
			if (func_308(unk_0xBE369BE1BC57A796()))
			{
				Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 6;
			}
		}
	}
	switch (Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2)
	{
		case 0:
			if (unk_0x48B8265059381CD0(Local_138[unk_0xCA1D9459B2CC7619() /*3*/], 0))
			{
				if (unk_0x48B8265059381CD0(Local_99.f_0, 3))
				{
					if (!unk_0x48B8265059381CD0(Local_99.f_0, 15))
					{
						unk_0xEB79FECD9022AAF0(&(Local_138[unk_0xCA1D9459B2CC7619() /*3*/]), 2);
						func_307(11, 1);
						Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 3;
					}
					else
					{
						Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 6;
						unk_0xEB79FECD9022AAF0(&uLocal_237, 16);
					}
				}
			}
			break;
		
		case 3:
			if (func_306(Local_99.f_5))
			{
				func_305(Local_99.f_5);
				Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 4;
			}
			break;
		
		case 4:
			if (!func_304())
			{
				if (func_194())
				{
					Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 5;
					func_192(88, 1);
					func_191();
				}
				else if (unk_0x48B8265059381CD0(uLocal_237, 8))
				{
					Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 6;
				}
			}
			else if (func_182())
			{
				Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 5;
			}
			else
			{
				if (unk_0x48B8265059381CD0(uLocal_237, 8))
				{
					Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 6;
				}
				if (unk_0x48B8265059381CD0(Local_99.f_0, 15))
				{
					func_169(12, 116);
					Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 6;
					unk_0xEB79FECD9022AAF0(&uLocal_237, 16);
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
			Local_138[unk_0xCA1D9459B2CC7619() /*3*/] = 0;
			unk_0x21E7933CCC7B3724(&uLocal_237, 3);
			unk_0x21E7933CCC7B3724(&uLocal_237, 4);
			iLocal_236 = 0;
			func_169(12, 116);
			if (unk_0xA3794949321E107C(Global_1751008))
			{
				unk_0x020DF7300725ECAB(&Global_1751008);
			}
			func_57(&Local_249);
			func_50();
			func_307(11, 0);
			Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 7;
			break;
		
		case 7:
			if (Local_99.f_2 == 0 && !unk_0x48B8265059381CD0(Local_99.f_0, 10))
			{
				Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 0;
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
	if (!unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) == Global_1312575.f_9)
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
	
	bVar0 = unk_0x63C468D583002D23();
	Global_1312575 = 20;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
	if (bVar0)
	{
		Global_1312575.f_10 = unk_0xCB150A8B81012128();
		Global_1312575.f_11 = unk_0xCB150A8B81012128();
	}
	StringCopy(&(Global_1312575.f_12), "", 16);
	StringCopy(&(Global_1312575.f_16), "", 64);
	StringCopy(&(Global_1312575.f_32), "", 64);
	Global_1312575.f_52 = 0;
	Global_1312575.f_53 = 0;
	Global_1312575.f_54 = 0;
	Global_1312575.f_55 = -1;
	Global_1312575.f_56 = 0;
	Global_1312575.f_59 = 0;
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
		unk_0x97C3FF45B25050A7(&(Global_1312575.f_12));
		func_54();
		unk_0x8DC57A8DB7696F93();
	}
}

void func_54()
{
	switch (Global_1312575)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x69967F83C1E636E2(Global_1312575.f_52);
			return;
		
		case 2:
			unk_0x69967F83C1E636E2(Global_1312575.f_52);
			unk_0x69967F83C1E636E2(Global_1312575.f_53);
			return;
		
		case 3:
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			return;
		
		case 4:
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 5:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			return;
		
		case 6:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			return;
		
		case 7:
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			return;
		
		case 8:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			return;
		
		case 9:
			unk_0xE124F0A8E5E81191(&(Global_1312575.f_16));
			return;
		
		case 10:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_32));
			return;
		
		case 12:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 13:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			unk_0x80A171A436807CA0(Global_1312575.f_57);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 11:
			unk_0xE124F0A8E5E81191(&(Global_1312575.f_16));
			return;
		
		case 14:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 15:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0x80A171A436807CA0(Global_1312575.f_57);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 17:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_32));
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_48));
			return;
		
		case 16:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			return;
		
		case 19:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			return;
		
		case 18:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_48));
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_32));
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
	unk_0x5A99EA84320AB387(&(Global_1312575.f_12));
	func_54();
	return unk_0x2B886121A03F928A();
}

int func_56()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

void func_57(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA3794949321E107C(*uParam0))
	{
		unk_0x020DF7300725ECAB(uParam0);
		bVar0 = true;
	}
	if (unk_0xA3794949321E107C(uParam0->f_1))
	{
		unk_0x020DF7300725ECAB(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x23E9113C762466ED(uParam0->f_7))
	{
		if (!unk_0xCA41A00932714525(uParam0->f_7))
		{
			if (unk_0x708B478711FA7649(uParam0->f_7))
			{
				unk_0x53D9FD8A3418C8E9(uParam0->f_7, 0);
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
	
	if (unk_0x841F312D66362BF7(Local_99.f_9[0]))
	{
		if (!func_35(Local_99.f_9[0]))
		{
			if (unk_0xA3794949321E107C(Global_1751008))
			{
				if (func_167())
				{
					unk_0x8E5BEC1151739D19(Global_1751008, 0);
				}
				else
				{
					unk_0x8E5BEC1151739D19(Global_1751008, 4);
				}
			}
			else
			{
				Global_1751008 = unk_0xF1FE04D602EA392E(unk_0xDE2767751C03729D(Local_99.f_9[0]));
				unk_0xCC930AE12D020496(Global_1751008, 1);
				unk_0x00EA14207118EEE2(Global_1751008, 0f);
			}
			if (unk_0xA3794949321E107C(Local_249.f_0))
			{
				if (func_167())
				{
					unk_0x8E5BEC1151739D19(Local_249.f_0, 0);
				}
				else
				{
					unk_0x8E5BEC1151739D19(Local_249.f_0, 4);
				}
				if (!unk_0x48B8265059381CD0(uLocal_237, 10))
				{
					unk_0xAAF15482D9DB27D9(Local_249.f_0, "FM_GDM_BLP");
					unk_0xEB79FECD9022AAF0(&uLocal_237, 10);
				}
			}
			if (unk_0xA3794949321E107C(Local_249.f_1))
			{
				if (func_167())
				{
					unk_0x8E5BEC1151739D19(Local_249.f_1, 0);
				}
				else
				{
					unk_0x8E5BEC1151739D19(Local_249.f_1, 4);
				}
				if (!unk_0x48B8265059381CD0(uLocal_237, 12))
				{
					unk_0xAAF15482D9DB27D9(Local_249.f_1, "FM_GDM_BLP");
					unk_0xEB79FECD9022AAF0(&uLocal_237, 12);
				}
			}
			if (!unk_0x48B8265059381CD0(uLocal_237, 6))
			{
				if (!unk_0x48B8265059381CD0(Global_2359301, 7) && !func_162(unk_0xBE369BE1BC57A796(), 0, 0, 0, 0))
				{
					if (unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
					{
						if (!func_167())
						{
							func_156("FM_GDM_KIL", 0);
						}
						unk_0xEB79FECD9022AAF0(&uLocal_237, 6);
					}
				}
			}
			else if (unk_0x48B8265059381CD0(Global_2359301, 7))
			{
				func_50();
				unk_0x21E7933CCC7B3724(&uLocal_237, 6);
			}
			else if (Global_68131)
			{
				func_50();
				unk_0x21E7933CCC7B3724(&uLocal_237, 6);
			}
			else if (func_162(unk_0xBE369BE1BC57A796(), 0, 0, 0, 0))
			{
				func_50();
				unk_0x21E7933CCC7B3724(&uLocal_237, 6);
			}
		}
		else if (unk_0x48B8265059381CD0(uLocal_237, 6))
		{
			func_50();
			unk_0x21E7933CCC7B3724(&uLocal_237, 6);
		}
		if (!unk_0x48B8265059381CD0(Local_138[unk_0xCA1D9459B2CC7619() /*3*/], 1))
		{
			iVar1 = unk_0x74CEEA5617F4A924(Local_99.f_9[0], &uVar0);
			if (iVar1 == unk_0xBE369BE1BC57A796())
			{
				unk_0xEB79FECD9022AAF0(&(Local_138[unk_0xCA1D9459B2CC7619() /*3*/]), 1);
				iVar2 = func_153(func_155(unk_0xBE369BE1BC57A796(), 1), 1);
				if (iVar2 > 100)
				{
					iVar2 = 100;
				}
				iVar3 = iVar2 * 20;
				iVar3 = unk_0xF2DB717A73826179((Global_262145.f_4228 * IntToFloat(iVar3)));
				func_116(2, "XPT_KAIE", -1859646258, 2131309714, iVar3, 1, -1, 0);
				if (Global_262145.f_2422 != 0f)
				{
					iVar4 = unk_0xF2DB717A73826179(Global_262145.f_2422);
				}
				else
				{
					iVar4 = 2000;
				}
				if (Global_262145.f_2418 != 0f)
				{
					iVar5 = unk_0xF2DB717A73826179(Global_262145.f_2418);
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
				iVar8 = unk_0x0E29C61F26D96FDB(iVar6, iVar7 + 1) * 100;
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
						Global_2590252[iVar9 /*76*/].f_8 = -1146479277;
					}
				}
				else
				{
					unk_0xAC37AD7990AC61A0(iVar8, -1146479277);
				}
				func_60(5, iVar8);
			}
			else if (iVar1 != func_59())
			{
				if (unk_0x7268A1112372AA44(iVar1))
				{
					if (!unk_0x48B8265059381CD0(Local_138[unk_0xCA1D9459B2CC7619() /*3*/], 7))
					{
						if (!unk_0xD54DE3C9493BFEC2(iVar1))
						{
							unk_0xEB79FECD9022AAF0(&(Local_138[unk_0xCA1D9459B2CC7619() /*3*/]), 7);
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
		Global_2494199.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5491)
		{
			iParam1 = Global_262145.f_5491;
		}
		Global_2494199.f_270 = iParam1;
		Global_2494199.f_271 = 0;
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
		case -135813048:
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
		if (!unk_0xAE2B681D784C7E64(func_17()) || unk_0xB4EE84164EB16A6B())
		{
			Global_2590762 = 1;
			return 0;
		}
		if (Global_2453677)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2590763 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590252[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0x1EB4A371BFB0E524(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x0F0045367541BC90(iVar3))
		{
			*uParam0 = func_69(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2590252[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590752 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2590761 = 1;
			Global_2590764 = iParam4;
			Global_2590766 = iParam3;
			Global_2590767 = 1;
			Global_2590765 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2590764 = iParam4;
			Global_2590766 = iParam3;
			Global_2590767 = 1;
			Global_2590765 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_68(1, iParam4);
			Global_2590761 = 0;
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
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_125.f_71), 0);
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
				unk_0x9B9AF9D22D9F6313();
			}
		}
		else if (!bVar0)
		{
			unk_0x2A618463FE332188(Global_2590252[iParam0 /*76*/]);
		}
		func_65(&(Global_2590252[iParam0 /*76*/]));
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
		return Global_2590252[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_68(int iParam0, var uParam1)
{
	Global_2454840 = uParam1;
	Global_2454839 = iParam0;
}

int func_69(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590252[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_70())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2590252[iVar0 /*76*/].f_2 = 1;
			Global_2590252[iVar0 /*76*/].f_1 = uParam5;
			Global_2590252[iVar0 /*76*/].f_3 = uParam1;
			Global_2590252[iVar0 /*76*/].f_4 = uParam2;
			Global_2590252[iVar0 /*76*/].f_7 = uParam3;
			Global_2590252[iVar0 /*76*/].f_5 = 0;
			Global_2590252[iVar0 /*76*/] = iParam0;
			Global_2590252[iVar0 /*76*/].f_6 = iParam4;
			Global_2590252[iVar0 /*76*/].f_72 = uParam8;
			Global_2590252[iVar0 /*76*/].f_71 = uParam7;
			Global_2590252[iVar0 /*76*/].f_75 = 0;
			Global_2590752 = 0;
			if (bParam6)
			{
				Global_2590252[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_70()
{
	if (unk_0xEF4E5E47AF0D4480())
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
					if (unk_0x7268A1112372AA44(func_108()))
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
		Var0.f_0 = 490;
		Var0.f_1 = unk_0xBE369BE1BC57A796();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x504D0D40319365B7(1, &Var0, 5, func_73(iParam0));
	}
}

var func_73(int iParam0)
{
	var uVar0;
	
	unk_0xEB79FECD9022AAF0(&uVar0, iParam0);
	return uVar0;
}

void func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4710.f_7[iVar0]), iVar1);
}

int func_75(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		if (unk_0x9C88EB7B70229335(&Var1))
		{
		}
		unk_0xBD18006F0815A298(sParam0);
		unk_0x80A171A436807CA0(func_82(iParam1, -2, 1, 0));
		unk_0xBAB00B98D1E61BEE(func_80(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x80A171A436807CA0(iParam3);
		}
		unk_0x69967F83C1E636E2(iParam2);
		iVar0 = unk_0x23048DD0C6E21613(0, 1);
		func_76(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_76(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_79() || !unk_0xF7271A9481CAC8E3()) || !func_15(unk_0xBE369BE1BC57A796(), 0))
	{
		return;
	}
	iVar0 = func_77(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1759864.f_5[iVar0 /*53*/] = iParam0;
		Global_1759864.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1759864.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1759864.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1759864.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1759864.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1759864.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1759864 - 1))
	{
		if (iParam0 > Global_1759864.f_5[iVar0 /*53*/].f_1)
		{
			func_78(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1759864++;
	if (Global_1759864 > 5)
	{
		Global_1759864 = 5;
		return Global_1759864;
	}
	return (Global_1759864 - 1);
}

void func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1759864.f_5[iVar0 /*53*/] = { Global_1759864.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_79()
{
	return unk_0x6948821CC8D52AC2(-1762644250);
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
		iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1633501.f_85058[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_308(unk_0xBE369BE1BC57A796()) || (func_104() && func_103())) && !unk_0x48B8265059381CD0(Global_2494199.f_4449, 31))
	{
		uVar1 = func_102();
		if (unk_0x23E9113C762466ED(uVar1))
		{
			if (unk_0x0764AC92F08BEC9E(uVar1))
			{
				if (unk_0xDE881A032F5BA110(uVar1) != -1)
				{
					if (func_338(unk_0xDE881A032F5BA110(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
						{
							if (Global_1633501.f_85058[iParam1] != -1)
							{
								return func_100(iParam1, iParam0, 0);
							}
							else
							{
								return func_90(iParam0, unk_0xDE881A032F5BA110(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_90(iParam0, unk_0xDE881A032F5BA110(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
			{
				if (Global_1633501.f_85058[iParam1] != -1)
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
	if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
	{
		if (Global_1633501.f_85058[iParam1] != -1)
		{
			return func_100(iParam1, iParam0, 0);
		}
		else
		{
			return func_90(iParam0, unk_0xBE369BE1BC57A796(), iParam1, bParam2, bParam3);
		}
	}
	return func_90(iParam0, unk_0xBE369BE1BC57A796(), iParam1, bParam2, bParam3);
}

int func_83(bool bParam0, int iParam1, bool bParam2)
{
	return func_84(unk_0xBE369BE1BC57A796(), bParam0, iParam1, bParam2);
}

int func_84(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x7268A1112372AA44(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_89(iVar0, iParam2, 0) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18))
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
			else if (unk_0x48B8265059381CD0(Global_1633501.f_4, 20))
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
	if (func_86(Global_1633501.f_88646))
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
		if (iParam0 == Global_262145.f_7845[iVar0])
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
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 0);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 1);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 2);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 4);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 5);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 6);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 8);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 9);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 10);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 12);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 13);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 14);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 15);
				
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
		iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1591201[iVar2 /*602*/] == 148)
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
			if ((func_92(iParam1, iParam0, iVar0, 0) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18)) || ((func_89(unk_0xB58DEBB81964A4E9(iParam1), unk_0xB58DEBB81964A4E9(iParam0), 0) && unk_0x48B8265059381CD0(Global_1633501.f_15, 23)) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18)))
			{
				return func_88(1);
			}
			else if (unk_0x48B8265059381CD0(Global_1633501.f_15, 26))
			{
				return func_91(1);
			}
			else
			{
				return func_84(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574288 || Global_1574279) || Global_1591201[iParam0 /*602*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574288 == 1 && Global_1574298 == 0))
			{
				return func_88(1);
			}
			else
			{
				return func_84(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574283 && Global_1573825.f_14 == iParam0)
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
			if (unk_0xB58DEBB81964A4E9(iParam0) == -1 && unk_0xB58DEBB81964A4E9(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xB58DEBB81964A4E9(iParam0) == unk_0xB58DEBB81964A4E9(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xB58DEBB81964A4E9(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xB58DEBB81964A4E9(iParam0) == iParam2;
	}
	return unk_0xB58DEBB81964A4E9(iParam0) == iParam2;
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
	return Global_2415716.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_95(int iParam0)
{
	if (!iParam0 == func_59())
	{
		if (func_97(iParam0, 1))
		{
			return Global_2415716.f_1946.f_11[func_96(iParam0)];
		}
	}
	return -1;
}

int func_96(int iParam0)
{
	if (iParam0 != func_59())
	{
		return Global_1619421[iParam0 /*390*/].f_11;
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
	return Global_1619421[iParam0 /*390*/].f_11 != func_59();
}

int func_98(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_59())
		{
			return Global_1619421[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_99()
{
	return Global_2443134.f_12;
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
	if (Global_1633501.f_85058[iParam0] != -1 && Global_1633501.f_85058[iParam0] <= 4)
	{
		if (Global_1633501.f_85058[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1633501.f_85058[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1633501.f_85058[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1633501.f_85058[iParam0] == 4)
		{
			if (unk_0x48B8265059381CD0(Global_1633501.f_15, 29))
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
			iVar0 = Global_1633501.f_85058[iParam0];
		}
	}
	else
	{
		iVar0 = func_84(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0x48B8265059381CD0(Global_1633501.f_21, 13))
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
			iVar0 = Global_1633501.f_107616;
			break;
		
		case 1:
			iVar0 = Global_1633501.f_107617;
			break;
		
		case 2:
			iVar0 = Global_1633501.f_107618;
			break;
		
		case 3:
			iVar0 = Global_1633501.f_107619;
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
	return unk_0x48B8265059381CD0(Global_2359301, 4);
}

bool func_104()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
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
	return Global_262145.f_11010;
}

int func_107()
{
	return Global_262145.f_11009;
}

int func_108()
{
	return Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11;
}

bool func_109(bool bParam0)
{
	return func_110(unk_0xBE369BE1BC57A796(), bParam0);
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
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_59() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0, int iParam1)
{
	if (iParam0 != func_59())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_59())
		{
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 && Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_113(bool bParam0)
{
	return func_97(unk_0xBE369BE1BC57A796(), bParam0);
}

bool func_114()
{
	return func_98(unk_0xBE369BE1BC57A796());
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
	
	if (func_152(unk_0xBE369BE1BC57A796()) || func_151(unk_0xBE369BE1BC57A796()))
	{
		if (Global_262145.f_8270 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8270;
		}
	}
	else if (Global_262145.f_5542 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5542;
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
				func_129((func_137(unk_0xBE369BE1BC57A796()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x4A006931F5B47F5F(iVar1, iParam8, iParam9);
				if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_2 != -1)
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
				func_119((func_121(unk_0xBE369BE1BC57A796()) + iVar1));
			}
			else
			{
				func_119((func_121(unk_0xBE369BE1BC57A796()) + iParam6));
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
		Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_5 = iParam0;
		func_120(joaat("mpply_globalxp"), iParam0);
	}
}

void func_120(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, uParam1, 1);
	}
}

int func_121(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_338(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xBE369BE1BC57A796())
			{
				return func_122(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1591201[iParam0 /*602*/].f_203.f_5;
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
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_123(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_128(unk_0xBE369BE1BC57A796()) };
	if (unk_0x749CE7B33672D350())
	{
		if (unk_0x3B13D05FD2D29D80(&Var0))
		{
			iVar13 = func_126(func_127(&Var0));
			if (iVar13 == 0)
			{
				func_125(&Global_1363158, iParam0);
				func_124(joaat("mpply_crew_local_xp_0"), Global_1363158);
			}
			else if (iVar13 == 1)
			{
				func_125(&Global_1363159, iParam0);
				func_124(joaat("mpply_crew_local_xp_1"), Global_1363159);
			}
			else if (iVar13 == 2)
			{
				func_125(&Global_1363160, iParam0);
				func_124(joaat("mpply_crew_local_xp_2"), Global_1363160);
			}
			else if (iVar13 == 3)
			{
				func_125(&Global_1363161, iParam0);
				func_124(joaat("mpply_crew_local_xp_3"), Global_1363161);
			}
			else if (iVar13 == 4)
			{
				func_125(&Global_1363162, iParam0);
				func_124(joaat("mpply_crew_local_xp_4"), Global_1363162);
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
		unk_0x731753D8494ABECD(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1363153 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1363155 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1363155 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1363156 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1363157 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1363158 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1363159 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1363160 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1363161 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1363162 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1363163 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1363164 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1363165 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1363166 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1363167 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1363168 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1363169 = uParam1;
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
	if (iParam0 == Global_1363153)
	{
		return 0;
	}
	else if (iParam0 == Global_1363154)
	{
		return 1;
	}
	else if (iParam0 == Global_1363155)
	{
		return 2;
	}
	else if (iParam0 == Global_1363156)
	{
		return 3;
	}
	else if (iParam0 == Global_1363157)
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
	if (unk_0x749CE7B33672D350())
	{
		if (unk_0x3B13D05FD2D29D80(uParam0))
		{
			return Global_2452452;
		}
	}
	return Global_2452452;
}

struct<13> func_128(int iParam0)
{
	struct<13> Var0;
	
	unk_0xF3EE72618DF96AF7(iParam0, &Var0, 13);
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
		if (Global_262145.f_8240 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1363273[func_136(-1)])
				{
					unk_0x4A006931F5B47F5F(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1363273[func_136(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8239 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x4A006931F5B47F5F(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8239 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x4A006931F5B47F5F(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_135(unk_0xBE369BE1BC57A796()))
		{
			Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_1 = iParam0;
			Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_6 = func_153(iParam0, 1);
		}
		func_134(634, iParam0, -1, 1);
		func_133(635, func_153(iParam0, 1), -1, 1, 0);
		Global_1363273[func_136(-1)] = iParam0;
		func_130(7, 0);
	}
}

void func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_132(iParam0, iParam1))
	{
		iVar0 = func_131();
		Global_2452429[iVar0] = iParam0;
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
		if (Global_2452429[iVar1] == 0)
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
	if (Global_1315221)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315233) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	iVar0 = Global_2503826[iParam0 /*3*/][func_136(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503826[iParam0 /*3*/][func_136(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1363219[func_136(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1363225[func_136(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1363231[func_136(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1363237[func_136(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1363195[func_136(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1363201[func_136(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1363207[func_136(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1363213[func_136(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1363171[func_136(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1363177[func_136(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1363183[func_136(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1363189[func_136(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1363243[func_136(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1363249[func_136(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1363255[func_136(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1363261[func_136(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1363267[func_136(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1363273[func_136(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1363279[func_136(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524277[0 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524277[1 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524277[2 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524277[3 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524348[func_136(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1363285[func_136(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1363291[func_136(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1363297[func_136(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1363303[func_136(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524311[0 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524311[1 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524311[2 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524311[3 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524311[4 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524351[0 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524351[1 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524351[2 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524351[3 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524351[4 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524367[0 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524367[1 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524367[2 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524367[3 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524367[4 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524311[5 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524277[4 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524383[func_136(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524392[func_136(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524386[func_136(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524395[func_136(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524389[func_136(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524398[func_136(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524401[func_136(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524311[6 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524277[5 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524311[7 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524277[6 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524311[8 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524277[7 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524311[9 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524277[8 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524311[10 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524277[9 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524311[11 /*3*/][func_136(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524277[10 /*3*/][func_136(iParam2)] = iParam1;
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
		return unk_0x48B8265059381CD0(Global_2433125.f_1, iParam0);
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
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

int func_137(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xBE369BE1BC57A796())
			{
				return Global_1363273[func_136(-1)];
			}
			else if (func_135(iParam0))
			{
				return Global_1591201[iParam0 /*602*/].f_203.f_1;
			}
		}
	}
	else
	{
		return Global_1363273[func_136(-1)];
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
	if (Global_1363152)
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
	uVar0 = Global_2503826[iParam0 /*3*/][func_136(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
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
	
	iVar1 = unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796());
	iVar0 = 0;
	while (iVar0 < unk_0xCF8627766CD5D4CE())
	{
		iVar4 = unk_0x62C65E3042052191(iVar0);
		if (unk_0x5877B93374C85567(iVar4))
		{
			iVar5 = unk_0xD878F413B7BB4895(iVar4);
			if (unk_0xB58DEBB81964A4E9(iVar5) != -1)
			{
				if (unk_0xB58DEBB81964A4E9(iVar5) == iVar1 || func_89(unk_0xB58DEBB81964A4E9(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xBE369BE1BC57A796())
					{
						if (func_143(unk_0xBE369BE1BC57A796(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_142(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_142(*iParam0, 100) * (20f * Global_262145.f_4210)));
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
	if (unk_0x749CE7B33672D350())
	{
		Global_2482053 = { func_128(iParam0) };
		Global_2482066 = { func_128(iParam1) };
		if (unk_0x3B13D05FD2D29D80(&Global_2482053))
		{
			if (unk_0x3B13D05FD2D29D80(&Global_2482066))
			{
				unk_0x7E1D32162078314A(&Global_2481983, 35, &Global_2482053);
				unk_0x7E1D32162078314A(&Global_2482018, 35, &Global_2482066);
				if (Global_2481983 == Global_2482018)
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
		while (iVar0 < unk_0xCF8627766CD5D4CE())
		{
			iVar3 = iVar0;
			if (unk_0x5877B93374C85567(iVar3))
			{
				iVar4 = unk_0xD878F413B7BB4895(iVar3);
				if (func_338(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xBE369BE1BC57A796())
					{
						iVar1++;
						if (func_143(unk_0xBE369BE1BC57A796(), iVar4))
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
				if (iVar4 != unk_0xBE369BE1BC57A796())
				{
					if (func_145(unk_0xBE369BE1BC57A796(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_143(unk_0xBE369BE1BC57A796(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_142(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_142(*iParam1, 100) * (20f * Global_262145.f_4210)));
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
	
	if (unk_0xF38E4347579BAB61() != 3)
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
		if (unk_0x049F77DED8AE0AF4(iParam0) > func_137(unk_0xBE369BE1BC57A796()))
		{
			iParam0 = -func_137(unk_0xBE369BE1BC57A796());
		}
	}
	if (func_148(8000, 0, 0) > 0)
	{
		if (func_148(8000, 0, 0) < (iParam0 + func_137(unk_0xBE369BE1BC57A796())))
		{
			iParam0 = (func_148(8000, 0, 0) - func_137(unk_0xBE369BE1BC57A796()));
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
	return Global_280048[iParam0];
}

int func_149()
{
	return 1;
}

int func_150(char* sParam0)
{
	if (unk_0xD3115E7F7876D6E6(sParam0))
	{
		return 1;
	}
	else if (unk_0x6A7B0D91FD88D9EE(sParam0, "") || unk_0x6A7B0D91FD88D9EE(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_151(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 2;
}

bool func_152(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 7;
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
		if (Global_280048[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_280048[iVar3] < iParam0)
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
	if (unk_0x9C88EB7B70229335(sParam0))
	{
		return;
	}
	if (unk_0x761258E562C07369(sParam0) > 23)
	{
		return;
	}
	if (func_160(sParam0))
	{
		return;
	}
	func_51();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0x6AF6B39BFDB53CB5(), 32);
	Global_1312575.f_9 = unk_0x765F5B806B517045(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_159();
	func_158(bParam1);
	func_157();
}

void func_157()
{
	unk_0xEB79FECD9022AAF0(&(Global_1312575.f_59), 1);
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		unk_0xEB79FECD9022AAF0(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0x21E7933CCC7B3724(&(Global_1312575.f_59), 0);
}

void func_159()
{
	Global_1312575.f_10 = unk_0xD9D7B8709F0A4696(unk_0xCB150A8B81012128(), 86400000);
	Global_1312575.f_11 = unk_0xCB150A8B81012128();
}

bool func_160(char* sParam0)
{
	if (!func_56())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_161(sParam0);
	}
	if (unk_0x9C88EB7B70229335(sParam0))
	{
		return 0;
	}
	return unk_0x765F5B806B517045(sParam0) == unk_0x765F5B806B517045(&(Global_1312575.f_12));
}

bool func_161(char* sParam0)
{
	if (!func_56())
	{
		return 0;
	}
	if (unk_0x9C88EB7B70229335(sParam0))
	{
		return 0;
	}
	return unk_0x765F5B806B517045(sParam0) == unk_0x765F5B806B517045(&(Global_1312575.f_16));
}

int func_162(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (Global_1591201[iParam0 /*602*/].f_258.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 0))
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
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_164(Global_2421664[iParam0 /*358*/].f_312.f_1) == 1;
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
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_164(Global_2421664[iParam0 /*358*/].f_312.f_1) == 2;
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
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_164(Global_2421664[iParam0 /*358*/].f_312.f_1) == 0;
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
	return unk_0x48B8265059381CD0(uVar0, iParam0);
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
	
	if (iParam0 >= Global_1362995)
	{
		return;
	}
	if (Global_2394153[iParam0 /*44*/].f_25 != -1)
	{
		unk_0x20F0B569F9F3A02A(Global_2394153[iParam0 /*44*/].f_25);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1362995)
	{
		Global_2394153[iVar0 /*44*/] = { Global_2394153[iVar1 /*44*/] };
		Global_2394153[iVar0 /*44*/] = { Global_2394153[iVar1 /*44*/] };
		iVar0++;
		iVar1++;
	}
	func_172(iVar0);
	Global_1362995 = (Global_1362995 - 1);
	if (Global_1362966)
	{
		if (Global_1362964 > 0)
		{
			func_171();
		}
	}
}

void func_171()
{
	Global_1362966 = 0;
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
	if (unk_0x63C468D583002D23())
	{
		Global_2394153[iParam0 /*44*/].f_37 = unk_0xCB150A8B81012128();
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
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_177(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar2);
								unk_0x44983883E630A945();
							}
							if (Global_2452520)
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
									if (Global_101700.f_13100[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101700.f_13100[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101700.f_13100[iVar3 /*104*/].f_99[Global_14443] == 1)
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
								if (Global_69702)
								{
									iVar4 = 0;
									iVar4 = Global_2594052;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2594053[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2594053[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2594053[iVar5 /*104*/].f_99[Global_14443] == 1)
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
											iVar6 = Global_36917;
											break;
										
										case 1:
											iVar6 = Global_36918;
											break;
										
										case 2:
											iVar6 = Global_36919;
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
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_177(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(Global_2319);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_177(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar7);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_177(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar8);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 8)
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_177(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if ((iVar1 == 23 && unk_0x6A7B0D91FD88D9EE(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x48B8265059381CD0(Global_2314, 6))
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_177(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
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
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9C88EB7B70229335(uParam7))
	{
		func_177(sParam7);
	}
	if (!unk_0x9C88EB7B70229335(iParam8))
	{
		func_177(iParam8);
	}
	if (!unk_0x9C88EB7B70229335(iParam9))
	{
		func_177(iParam9);
	}
	if (!unk_0x9C88EB7B70229335(iParam10))
	{
		func_177(iParam10);
	}
	if (!unk_0x9C88EB7B70229335(iParam11))
	{
		func_177(iParam11);
	}
	unk_0x44983883E630A945();
}

void func_177(var uParam0)
{
	unk_0xDCEB60B79ECB219E(uParam0);
	unk_0x1798EBF9408190D3();
}

bool func_178(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_179(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x44983883E630A945();
}

void func_180(char* sParam0)
{
	if (Global_16808 != 0)
	{
		if (!unk_0x9C88EB7B70229335(sParam0))
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
	while (iVar0 < Global_1362995)
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
	if (!unk_0x48B8265059381CD0(uLocal_237, 17))
	{
		func_184(12, 116, "", 1);
		unk_0xEB79FECD9022AAF0(&uLocal_237, 17);
	}
	else if (!unk_0x48B8265059381CD0(uLocal_237, 18))
	{
		if (func_183(12, 116))
		{
			unk_0xEB79FECD9022AAF0(&uLocal_237, 18);
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
	Global_2395292 = unk_0x94E3E074F38DF86C() + 1500;
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
		iVar0 = unk_0x0C36F33B3F746611(iParam1);
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
	iVar2 = Global_1362995;
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
	Global_1362995++;
	if (Global_1362995 > 12)
	{
		Global_1362995 = 12;
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
	Global_2394153[iVar4 /*44*/].f_37 = unk_0xCB150A8B81012128();
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
	if (unk_0x8EA3D5407E9F4AF0())
	{
		if (bParam2)
		{
			bVar5 = true;
			if (bVar5)
			{
				Var6 = { func_128(iVar0) };
				iVar19 = unk_0x881930817E5BC788(&Var6);
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
	Global_1362968 = unk_0xD9D7B8709F0A4696(unk_0xCB150A8B81012128(), 30000);
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
	if (unk_0x9C88EB7B70229335(&cVar0) || unk_0x6A7B0D91FD88D9EE(".", &cVar0))
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
		if (!unk_0x9C88EB7B70229335(&cVar0) && !unk_0x6A7B0D91FD88D9EE(".", &cVar0))
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
			if (!unk_0x48B8265059381CD0(uVar8, iVar9))
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
	
	uVar0 = Global_2523488[iParam0 /*3*/][func_136(iParam1)];
	return unk_0x63ACC1C0994F0997(uVar0, -1);
}

struct<6> func_189()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	
	if (unk_0x9C88EB7B70229335(&(Global_1757074.f_10)))
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
				if ((Global_794643.f_4[iVar6 /*88*/].f_65 == 0 && Global_794643.f_4[iVar6 /*88*/].f_68 == 1) && unk_0x48B8265059381CD0(Global_794643.f_4[iVar6 /*88*/].f_76, 13))
				{
					if (Global_794643.f_98389[iVar6 /*13*/].f_1 == iVar7)
					{
						Var0 = { Global_794643.f_112937[Global_794643.f_98389[iVar6 /*13*/].f_10 /*6*/] };
						iVar6 = 1118;
					}
				}
				iVar6++;
			}
			if (unk_0x9C88EB7B70229335(&Var0))
			{
			}
		}
		Global_1757074.f_10 = { Var0 };
		return Var0;
	}
	return Global_1757074.f_10;
}

bool func_190()
{
	return Global_1315193 == 10;
}

void func_191()
{
	var uVar0;
	
	uVar0 = Global_1363267[func_136(-1)];
	unk_0xEB79FECD9022AAF0(&uVar0, 8);
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
			Global_2097152[func_193() /*10758*/].f_7546.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_193() /*10758*/].f_7546.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_193() /*10758*/].f_7546.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_193() /*10758*/].f_7546.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_193() /*10758*/].f_7546.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_193() /*10758*/].f_7546.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_193() /*10758*/].f_7546.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_193() /*10758*/].f_7546.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_193() /*10758*/].f_7546.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_193() /*10758*/].f_7546.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_193() /*10758*/].f_7546.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_193() /*10758*/].f_7546.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_193() /*10758*/].f_7546.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_193() /*10758*/].f_7546.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_193() /*10758*/].f_7546.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_193() /*10758*/].f_7546.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_193() /*10758*/].f_7546.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_193() /*10758*/].f_7546.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_193() /*10758*/].f_7546.f_30 = iVar0;
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
	if (!unk_0x48B8265059381CD0(uLocal_237, 4))
	{
		if (!unk_0x48B8265059381CD0(uLocal_237, 8) || (unk_0x48B8265059381CD0(uLocal_237, 8) && func_33(&uLocal_240, 600000, 0)))
		{
			if (func_200(Local_99.f_5))
			{
				unk_0xEB79FECD9022AAF0(&uLocal_237, 4);
				unk_0x21E7933CCC7B3724(&uLocal_237, 8);
			}
		}
	}
	else if (!func_199())
	{
		if (!unk_0x48B8265059381CD0(uLocal_237, 19))
		{
			if (func_198())
			{
				unk_0xEB79FECD9022AAF0(&uLocal_237, 19);
			}
			else if (!func_197() && !func_195())
			{
				unk_0xEB79FECD9022AAF0(&uLocal_237, 8);
				unk_0x21E7933CCC7B3724(&uLocal_237, 4);
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
		unk_0xEB79FECD9022AAF0(&uLocal_237, 8);
		unk_0x21E7933CCC7B3724(&uLocal_237, 4);
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
	return Global_1346673.f_40 == 3;
}

bool func_197()
{
	return Global_1346673.f_57.f_1;
}

int func_198()
{
	if (Global_15745 == 4)
	{
		if (unk_0x3ED8A07C6FA41E1B())
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
				unk_0x21E7933CCC7B3724(&uLocal_237, 11);
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
	
	if (unk_0x9C88EB7B70229335(sParam2))
	{
		return 0;
	}
	if (unk_0x761258E562C07369(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x9C88EB7B70229335(sParam3))
	{
		return 0;
	}
	if (unk_0x761258E562C07369(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5());
	iVar1 = func_287(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x9C88EB7B70229335(sParam7))
	{
		iVar2 = unk_0x765F5B806B517045(sParam7);
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
	Global_1346673.f_40.f_1 = iParam0;
	Global_1346673.f_40.f_2 = iParam1;
	Global_1346673.f_40.f_3 = iParam2;
	StringCopy(&(Global_1346673.f_40.f_4), sParam3, 16);
	Global_1346673.f_40.f_8 = iParam4;
	Global_1346673.f_40.f_9 = iParam5;
	Global_1346673.f_40.f_14 = uParam6;
	func_204(iParam4);
	func_276();
	Global_1346673.f_40.f_13 = unk_0xD9D7B8709F0A4696(unk_0xCB150A8B81012128(), 7000);
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
	Global_1346673.f_40.f_10 = 0;
}

void func_206()
{
	Global_1346673.f_40.f_10 = 1;
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
	return iParam0 > Global_1346673.f_40.f_8;
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
	Global_1346673.f_40.f_11 = unk_0xD9D7B8709F0A4696(unk_0xCB150A8B81012128(), iParam0);
	Global_1346673.f_40.f_12 = 1;
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
		sVar2 = unk_0x592E5DF66777D40F(iVar0);
		iVar1 = func_234(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x94F6F6877B5A3EDF(unk_0xCB150A8B81012128(), Global_1346673.f_40.f_13))
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
	if (!unk_0x9C88EB7B70229335(sParam8))
	{
		iVar6++;
		if (!unk_0x9C88EB7B70229335(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x6A7B0D91FD88D9EE(sVar4, " "))
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
		if (unk_0x48B8265059381CD0(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x48B8265059381CD0(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x9C88EB7B70229335(sVar2))
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
	if (unk_0x48B8265059381CD0(uParam4, 0))
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
	Global_1346673.f_57 = 0;
	Global_1346673.f_57.f_1 = 0;
}

void func_214()
{
	Global_1346673.f_40 = 3;
}

void func_215()
{
	unk_0xEB79FECD9022AAF0(&Global_2313, 8);
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
			unk_0xEB79FECD9022AAF0(&Global_2595318, 0);
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
	if (unk_0x6A7B0D91FD88D9EE(sParam14, sParam15))
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if (unk_0x3AD4FC6271B0E925(unk_0x17B5CC8A8615737D()))
			{
				return 0;
			}
		}
		if (Global_2595303 == 1)
		{
			return 0;
		}
		if (unk_0x82F1A060D8F4583B(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x82F1A060D8F4583B(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_223() == 0)
	{
		func_221();
		return 0;
	}
	func_220(Global_2595302);
	StringCopy(&(Global_2594053[Global_2595302 /*104*/]), sParam1, 64);
	Global_2594053[Global_2595302 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2594053[Global_2595302 /*104*/].f_24 = iParam2;
	}
	Global_2594053[Global_2595302 /*104*/].f_25 = iParam7;
	Global_2594053[Global_2595302 /*104*/].f_26 = uParam8;
	Global_2594053[Global_2595302 /*104*/].f_29 = uParam9;
	Global_2594053[Global_2595302 /*104*/].f_30 = uParam12;
	Global_2594053[Global_2595302 /*104*/].f_31 = uParam11;
	Global_2594053[Global_2595302 /*104*/].f_28 = 0;
	Global_2594053[Global_2595302 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2594053[Global_2595302 /*104*/].f_33), sParam4, 64);
	Global_2594053[Global_2595302 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2594053[Global_2595302 /*104*/].f_50), sParam5, 64);
	Global_2594053[Global_2595302 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2594053[Global_2595302 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2594053[Global_2595302 /*104*/].f_83), sParam15, 64);
	func_224();
	switch (iParam16)
	{
		case 3:
			Global_2594053[Global_2595302 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2594053[Global_2595302 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2594053[Global_2595302 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2594053[Global_2595302 /*104*/].f_99[1] = 1;
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
				Global_2595303 = 1;
				break;
			
			case 0:
				Global_2595303 = 1;
				break;
			
			case 2:
				Global_2595303 = 1;
				break;
			
			case 1:
				Global_2595303 = 1;
				break;
			}
	}
	Global_16814[Global_2595302] = 0;
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
				unk_0x4988C48537D1AE4F(-1, "Text_Arrive_Tone", &Global_14432, 1);
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
	return Global_1315233;
}

void func_219(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101700.f_13010[iParam0 /*20*/].f_8;
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
	
	uVar0 = unk_0x0956E4296D9CC40A();
	uVar1 = unk_0x32883EAC7DC86C40();
	uVar2 = unk_0x80BC37C67CB292E5();
	uVar3 = unk_0x202B089E6328ABFA();
	uVar4 = unk_0xCD8338A83E1BCC14() + 1;
	uVar5 = unk_0x1BBFD9409EC2598C();
	Global_2594053[iParam0 /*104*/].f_18 = uVar0;
	Global_2594053[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2594053[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2594053[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2594053[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2594053[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_221()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2595302 = 11;
	Global_2594053[Global_2595302 /*104*/].f_18 = -1;
	Global_2594053[Global_2595302 /*104*/].f_18.f_1 = 0;
	Global_2594053[Global_2595302 /*104*/].f_18.f_2 = 0;
	Global_2594053[Global_2595302 /*104*/].f_18.f_3 = 0;
	Global_2594053[Global_2595302 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_222(Global_2594053[iVar2 /*104*/].f_18, Global_2594053[Global_2595302 /*104*/].f_18))
		{
			Global_2595302 = iVar2;
		}
		iVar2++;
	}
	Global_2594053[Global_2595302 /*104*/].f_24 = 1;
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
		if (Global_2594053[iVar2 /*104*/].f_24 == 0)
		{
			Global_2595302 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2595302 = 11;
	Global_2594053[Global_2595302 /*104*/].f_18 = -1;
	Global_2594053[Global_2595302 /*104*/].f_18.f_1 = 0;
	Global_2594053[Global_2595302 /*104*/].f_18.f_2 = 0;
	Global_2594053[Global_2595302 /*104*/].f_18.f_3 = 0;
	Global_2594053[Global_2595302 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2594053[iVar2 /*104*/].f_24 == 0 || Global_2594053[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_222(Global_2594053[iVar2 /*104*/].f_18, Global_2594053[Global_2595302 /*104*/].f_18))
			{
				Global_2595302 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2595302 == 11)
	{
		return 0;
	}
	Global_2594053[Global_2595302 /*104*/].f_99[0] = 0;
	Global_2594053[Global_2595302 /*104*/].f_99[1] = 0;
	Global_2594053[Global_2595302 /*104*/].f_99[2] = 0;
	return 1;
}

void func_224()
{
	if (func_178(14))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
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
		if (Global_69702)
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
	return Global_101700.f_2095.f_539.f_3549;
}

void func_226()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_229(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_228(unk_0x17B5CC8A8615737D());
			if (func_227(iVar0) && (!func_178(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_227(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_227(int iParam0)
{
	return iParam0 < 3;
}

int func_228(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(uParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
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
			unk_0xEB79FECD9022AAF0(&Global_2595318, 0);
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
	if (unk_0x9C88EB7B70229335(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_232(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xC7E52B74A3B4973C(sParam0);
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
	Global_1364072[iVar0 /*5*/].f_4 = 1;
	return Global_1364072[iVar0 /*5*/].f_2;
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
	if (Global_1364235)
	{
		if (iParam0 == Global_1364235.f_1)
		{
			return;
		}
	}
	if (func_236(iParam0))
	{
		return;
	}
	if (Global_1364273 >= 32)
	{
		return;
	}
	Global_1364240[Global_1364273] = iParam0;
	Global_1364273++;
	if (bParam1)
	{
	}
}

int func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1364273)
	{
		if (Global_1364240[iVar0] == iParam0)
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
	if (Global_1364233 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1364233)
	{
		if (Global_1364072[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x570F715345905581(Global_1364072[iVar0 /*5*/].f_2) && unk_0x97CCE7AE66FA8CB9(Global_1364072[iVar0 /*5*/].f_2))
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
	
	if (iParam0 >= Global_1364233)
	{
		return;
	}
	if (unk_0x570F715345905581(Global_1364072[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1364072[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x7F897CE1A139406E(Global_1364072[iParam0 /*5*/].f_2), 64);
			unk_0xA15206CC127327EA(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x3DD64AC41265D51A(Global_1364072[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1364233)
	{
		Global_1364072[iVar32 /*5*/] = { Global_1364072[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_239(&(Global_1364072[iVar32 /*5*/]));
	Global_1364233 = (Global_1364233 - 1);
}

void func_239(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_59();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x63C468D583002D23())
	{
		uParam0->f_3 = unk_0xCB150A8B81012128();
	}
}

void func_240()
{
	Global_1346673.f_40.f_9 = 4;
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
		sVar2 = unk_0x592E5DF66777D40F(iVar0);
		iVar1 = func_234(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x94F6F6877B5A3EDF(unk_0xCB150A8B81012128(), Global_1346673.f_40.f_13))
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
	if (!unk_0x9C88EB7B70229335(sParam8))
	{
		iVar6++;
		if (!unk_0x9C88EB7B70229335(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x6A7B0D91FD88D9EE(sVar4, " "))
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
		if (unk_0x48B8265059381CD0(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x48B8265059381CD0(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x9C88EB7B70229335(sVar2))
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
	if (unk_0x48B8265059381CD0(uParam4, 0))
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
	Global_1346673.f_40.f_9 = 3;
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
	
	unk_0x21E7933CCC7B3724(&Global_2313, 10);
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
			Global_2923[3 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xEB79FECD9022AAF0(&Global_2313, 1);
			unk_0xEB79FECD9022AAF0(&Global_2313, 7);
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
	if (unk_0x6A7B0D91FD88D9EE(sParam14, sParam15))
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if (unk_0x3AD4FC6271B0E925(unk_0x17B5CC8A8615737D()))
			{
				return 0;
			}
		}
		if (Global_101700.f_13010[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x82F1A060D8F4583B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x82F1A060D8F4583B(joaat("apptextmessage")) > 0)
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
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/]), sParam1, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101700.f_13100[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_25 = iParam7;
	Global_101700.f_13100[Global_16812 /*104*/].f_26 = uParam8;
	Global_101700.f_13100[Global_16812 /*104*/].f_29 = uParam9;
	Global_101700.f_13100[Global_16812 /*104*/].f_30 = uParam12;
	Global_101700.f_13100[Global_16812 /*104*/].f_31 = uParam11;
	Global_101700.f_13100[Global_16812 /*104*/].f_28 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x48B8265059381CD0(Global_2313, 10))
	{
		Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 1;
		Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 1;
		Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 1;
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
				Global_101700.f_13100[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 1;
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
		if (unk_0x48B8265059381CD0(Global_2313, 10))
		{
			Global_101700.f_13010[0 /*20*/].f_17 = 1;
			Global_101700.f_13010[1 /*20*/].f_17 = 1;
			Global_101700.f_13010[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101700.f_13010[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101700.f_13010[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101700.f_13010[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101700.f_13010[1 /*20*/].f_17 = 1;
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
				unk_0x4988C48537D1AE4F(-1, "Text_Arrive_Tone", &Global_14432, 1);
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
	
	uVar0 = unk_0x0956E4296D9CC40A();
	uVar1 = unk_0x32883EAC7DC86C40();
	uVar2 = unk_0x80BC37C67CB292E5();
	uVar3 = unk_0x202B089E6328ABFA();
	uVar4 = unk_0xCD8338A83E1BCC14() + 1;
	uVar5 = unk_0x1BBFD9409EC2598C();
	Global_101700.f_13100[iParam0 /*104*/].f_18 = uVar0;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_248()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69702)
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
	Global_101700.f_13100[Global_16812 /*104*/].f_18 = -1;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_249(Global_101700.f_13100[iVar2 /*104*/].f_18, Global_101700.f_13100[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_24 = 1;
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
	
	if (Global_69702)
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
		if (Global_101700.f_13100[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101700.f_13100[Global_16812 /*104*/].f_18 = -1;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101700.f_13100[iVar2 /*104*/].f_24 == 0 || Global_101700.f_13100[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_249(Global_101700.f_13100[iVar2 /*104*/].f_18, Global_101700.f_13100[Global_16812 /*104*/].f_18))
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
	Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 0;
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
	unk_0x21E7933CCC7B3724(&Global_2313, 10);
	iVar0 = 3;
	if (func_246(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0xEB79FECD9022AAF0(&Global_2313, 1);
			unk_0xEB79FECD9022AAF0(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_252(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
	}
	if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
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
	
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x48B8265059381CD0(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x48B8265059381CD0(uParam4, 4))
	{
		bVar0 = func_268(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_259(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x48B8265059381CD0(uParam4, 3))
		{
			func_258(1);
		}
		if (unk_0x48B8265059381CD0(uParam4, 5))
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
	Global_2501971 = 0;
}

void func_255()
{
	Global_1346673.f_57 = 1;
	Global_1346673.f_57.f_1 = 0;
}

void func_256()
{
	Global_1346673.f_40.f_9 = 1;
}

void func_257(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2315, 0);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2315, 0);
	}
}

void func_258(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 20);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 20);
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
					unk_0x660E8E7836E95077(0);
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
		if (unk_0x55C74612BE548D78())
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
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
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
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_264())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
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
	unk_0x660E8E7836E95077(0);
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
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
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
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
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
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
	}
	if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
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
	Global_1346673.f_40.f_9 = 2;
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
	Global_1346673.f_55 = Global_1346673.f_40.f_1;
	Global_1346673.f_55.f_1 = Global_1346673.f_40.f_10;
}

void func_276()
{
	Global_1346673.f_40 = 1;
}

bool func_277()
{
	return Global_1346673.f_40 == 1;
}

int func_278(int iParam0, int iParam1, int iParam2)
{
	if (!func_279(iParam0))
	{
		return 0;
	}
	if (Global_1346673.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1346673.f_40.f_3 != iParam2)
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
	if (!Global_1346673.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_280()
{
	if (Global_1346673.f_40 == 0)
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
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1751032 || func_283())
	{
		return 0;
	}
	if (!unk_0x48B8265059381CD0(uParam0, 6))
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
	return unk_0x94F6F6877B5A3EDF(unk_0xCB150A8B81012128(), Global_1362968);
}

int func_283()
{
	if (Global_2583878.f_797 > -1)
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
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
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
	return unk_0x765F5B806B517045(&cVar0);
}

bool func_288()
{
	return Global_2499540.f_1;
}

int func_289()
{
	if (Global_1346861.f_2)
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
	if (!unk_0x48B8265059381CD0(uLocal_237, 11))
	{
		switch (iParam0)
		{
			case 0:
				sLocal_422 = "FMA_KIL1";
				unk_0xEB79FECD9022AAF0(&uLocal_237, 11);
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
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
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
			Global_101700.f_27009[iParam0 /*29*/].f_12[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[2] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69702)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_296();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_296();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
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
	
	StringCopy(&cVar0, unk_0xC7E52B74A3B4973C(&(Global_101700.f_27009[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0xBD18006F0815A298("");
		StringCopy(&cVar16, unk_0xC7E52B74A3B4973C(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0xC7E52B74A3B4973C("CELL_253");
		unk_0x6132B0FB7289E50A(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xBD18006F0815A298("CELL_255");
		unk_0x34D84D73B5DF8E80(&(Global_2923[1 /*6*/]));
		unk_0x6132B0FB7289E50A(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x21E7933CCC7B3724(&Global_2313, 0);
}

bool func_297(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

int func_298(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x9E123D5FF2973C60())
	{
		return 0;
	}
	if (func_303())
	{
		return 0;
	}
	if (!unk_0x30F06AB0772AFB80())
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
		if (func_46(unk_0xBE369BE1BC57A796(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_45(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
	}
	if (func_301())
	{
		return 0;
	}
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		return 0;
	}
	if (unk_0x95DBE123BC2DB80B())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
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
	if (Global_68131)
	{
		return 0;
	}
	if (Global_2502455)
	{
		return 0;
	}
	return 1;
}

bool func_299()
{
	return Global_2443134.f_570;
}

bool func_300()
{
	return Global_2443134.f_722;
}

bool func_301()
{
	return Global_2433125.f_2506.f_577;
}

bool func_302()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

int func_303()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

int func_304()
{
	var uVar0;
	
	uVar0 = Global_1363267[func_136(-1)];
	if (unk_0x48B8265059381CD0(uVar0, 8))
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
			if (unk_0x841F312D66362BF7(Local_99.f_12[0]))
			{
				Global_2433125.f_3224.f_1[0] = unk_0xC7C67E717B20DA89(Local_99.f_12[0]);
			}
			if (unk_0x841F312D66362BF7(Local_99.f_9[0]))
			{
				Global_2433125.f_3224.f_4[0] = unk_0xDE2767751C03729D(Local_99.f_9[0]);
			}
			break;
	}
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x841F312D66362BF7(Local_99.f_12[0]) && unk_0x841F312D66362BF7(Local_99.f_9[0]))
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
		if (!unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211, iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211), iParam0);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211, iParam0))
	{
		unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211), iParam0);
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
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_309()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

bool func_310()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_188 != 0;
}

int func_311()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_189;
}

bool func_312()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 0);
}

void func_313(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xBE369BE1BC57A796();
	if (!iParam14 == 0)
	{
		unk_0x504D0D40319365B7(1, &Param0, 14, iParam14);
	}
}

int func_314(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar1)))
		{
			iVar2 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar1));
			if (func_338(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xBE369BE1BC57A796() || iParam0)
				{
					unk_0xEB79FECD9022AAF0(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_315()
{
	if (Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 >= 5 && Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 < 6)
	{
		if (unk_0x48B8265059381CD0(Local_99.f_0, 4))
		{
			if (!unk_0x48B8265059381CD0(uLocal_237, 3))
			{
				if (func_338(Local_99.f_8, 0, 1))
				{
					func_316("FM_TGDM_KIL", Local_99.f_8, 0, 0, 0, 1, 1, 0);
				}
				unk_0xEB79FECD9022AAF0(&uLocal_237, 3);
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
	iVar1 = unk_0xB58DEBB81964A4E9(iParam1);
	if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		if (unk_0x9C88EB7B70229335(&Var2))
		{
		}
		unk_0xBD18006F0815A298(sParam0);
		if ((iVar1 != -1 && unk_0xF7271A9481CAC8E3()) && iVar1 < 4)
		{
			if (Global_1633501.f_85058[iVar1] != -1)
			{
				unk_0x80A171A436807CA0(func_100(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x80A171A436807CA0(func_82(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x80A171A436807CA0(func_82(iParam1, -2, 1, 0));
		}
		unk_0xBAB00B98D1E61BEE(func_80(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x23048DD0C6E21613(0, 1);
		}
		else
		{
			Global_2482053 = { func_128(iParam1) };
			if (unk_0x7E1D32162078314A(&Global_2481983, 35, &Global_2482053))
			{
				iVar18 = 0;
				if (unk_0x6A7B0D91FD88D9EE(&(Global_2481983.f_22), "Leader") && Global_2481983.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2481983.f_21 > 0)
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
					iVar0 = unk_0x484290510553BCE9(iVar19, unk_0x1A03CEC7A8F6CCA0(&Global_2481983, 35), &(Global_2481983.f_17), Global_2481983.f_30, iVar18, 0, Global_2481983, &Var2, Global_1316390, Global_1316391, Global_1316392);
				}
				else
				{
					iVar0 = unk_0xDFBD23CE6CF19FDE(iVar19, unk_0x1A03CEC7A8F6CCA0(&Global_2481983, 35), &(Global_2481983.f_17), Global_2481983.f_30, iVar18, 0, Global_2481983, Global_1316390, Global_1316391, Global_1316392);
				}
			}
			else
			{
				iVar0 = unk_0x23048DD0C6E21613(0, 1);
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
	
	iVar0 = unk_0xCA1D9459B2CC7619();
	if (iLocal_247 != Local_99.f_15)
	{
		iLocal_247 = Local_99.f_15;
		unk_0x43FD798CD0523B1F(iLocal_247);
	}
	if (iLocal_248 != Local_99.f_16)
	{
		iLocal_248 = Local_99.f_16;
		unk_0x06EC4FFE0DCCA716(iLocal_248);
	}
	if (func_338(unk_0xBE369BE1BC57A796(), 0, 1))
	{
		if (!unk_0x48B8265059381CD0(Local_138[iVar0 /*3*/], 0))
		{
			if (Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 == 0)
			{
				if (func_311() == 0)
				{
					unk_0xEB79FECD9022AAF0(&(Local_138[iVar0 /*3*/]), 0);
				}
			}
		}
		else if (unk_0x48B8265059381CD0(Local_138[iVar0 /*3*/], 0))
		{
			if ((func_46(unk_0xBE369BE1BC57A796(), 1) || func_43(unk_0xBE369BE1BC57A796())) || func_311() > 0)
			{
				func_37(&uLocal_238);
				unk_0x21E7933CCC7B3724(&(Local_138[iVar0 /*3*/]), 0);
			}
			else if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
				{
					if (!unk_0x48B8265059381CD0(uLocal_237, 7))
					{
						unk_0xEB79FECD9022AAF0(&uLocal_237, 7);
						func_326();
					}
				}
				else if (unk_0x48B8265059381CD0(uLocal_237, 7))
				{
					unk_0x21E7933CCC7B3724(&uLocal_237, 7);
					if (!func_44(unk_0xBE369BE1BC57A796(), 0))
					{
						func_324();
					}
				}
			}
		}
		if (!unk_0x48B8265059381CD0(Local_138[iVar0 /*3*/], 3))
		{
			if (Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 > 3 && Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 < 6)
			{
				if (unk_0x48B8265059381CD0(Global_2433125.f_3224, 1))
				{
					unk_0xEB79FECD9022AAF0(&(Local_138[iVar0 /*3*/]), 3);
				}
			}
		}
		if (Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 > 3)
		{
			if (!unk_0x48B8265059381CD0(Local_138[unk_0xCA1D9459B2CC7619() /*3*/], 5))
			{
				if (func_323(Local_99.f_5))
				{
					unk_0xEB79FECD9022AAF0(&(Local_138[unk_0xCA1D9459B2CC7619() /*3*/]), 5);
				}
			}
			else if (!func_323(Local_99.f_5))
			{
				unk_0x21E7933CCC7B3724(&(Local_138[unk_0xCA1D9459B2CC7619() /*3*/]), 5);
			}
			if (!unk_0x48B8265059381CD0(Local_138[unk_0xCA1D9459B2CC7619() /*3*/], 6))
			{
				if (func_320(Local_99.f_5))
				{
					unk_0xEB79FECD9022AAF0(&(Local_138[unk_0xCA1D9459B2CC7619() /*3*/]), 6);
				}
			}
			if (!unk_0x48B8265059381CD0(Local_138[unk_0xCA1D9459B2CC7619() /*3*/], 8))
			{
				if (func_319())
				{
					unk_0xEB79FECD9022AAF0(&(Local_138[unk_0xCA1D9459B2CC7619() /*3*/]), 8);
				}
			}
		}
		if (!unk_0x48B8265059381CD0(uLocal_237, 13))
		{
			if (unk_0x841F312D66362BF7(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					unk_0x7771211498B88EA3(unk_0xDE2767751C03729D(Local_99.f_9[0]), 1, 0);
					unk_0xEB79FECD9022AAF0(&uLocal_237, 13);
				}
			}
		}
	}
}

int func_319()
{
	if (unk_0x841F312D66362BF7(Local_99.f_12[0]))
	{
		if (func_9(Local_99.f_12[0]))
		{
			if (unk_0x01F09F0D64EF3285(unk_0xC7C67E717B20DA89(Local_99.f_12[0]), 0, 7000) || unk_0x01F09F0D64EF3285(unk_0xC7C67E717B20DA89(Local_99.f_12[0]), 1, 40000))
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
			if (unk_0x841F312D66362BF7(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
					{
						if (func_321(unk_0xDE2767751C03729D(Local_99.f_9[0])))
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
	
	if (unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), uParam0))
	{
		return 1;
	}
	if (unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), uParam0))
	{
		return 1;
	}
	if (func_322())
	{
		if (unk_0x7940476800F126AE(unk_0xBE369BE1BC57A796(), &uVar0))
		{
			if (unk_0x80E9CA64E9C8E070(uVar0))
			{
				uVar1 = unk_0xB80CAAF3D65FBC1F(uVar0);
				if (unk_0x23E9113C762466ED(uVar1))
				{
					if (!unk_0xA929B2923D14E2F8(uVar1, 0))
					{
						if (unk_0xFD0FE723227D5AB6(uVar1, 0))
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
	return Global_1574282;
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x841F312D66362BF7(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(unk_0xDE2767751C03729D(Local_99.f_9[0]), 1)) < 40000f)
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
	if (!Global_1312567)
	{
		return;
	}
	func_325();
}

void func_325()
{
	Global_1312567 = 0;
	StringCopy(&(Global_1312567.f_1), "", 24);
	Global_1312567.f_7 = 0;
}

void func_326()
{
	Global_1312567 = 1;
	StringCopy(&(Global_1312567.f_1), unk_0x6AF6B39BFDB53CB5(), 24);
	Global_1312567.f_7 = unk_0x765F5B806B517045(&(Global_1312567.f_1));
}

void func_327()
{
	switch (Local_99.f_6)
	{
		case 1:
			if (unk_0x415DF132F15085E8())
			{
				if (unk_0x841F312D66362BF7(Local_99.f_12[0]))
				{
					if (func_9(Local_99.f_12[0]))
					{
						if (!func_35(Local_99.f_9[0]))
						{
							if (unk_0x7B816C72877502C5(unk_0xDE2767751C03729D(Local_99.f_9[0]), unk_0xC7C67E717B20DA89(Local_99.f_12[0])))
							{
								if (unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_9[0]), -258271821) != 1 && unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_9[0]), -258271821) != 0)
								{
									unk_0x9178B6CFE95D27C6(unk_0xDE2767751C03729D(Local_99.f_9[0]), unk_0xC7C67E717B20DA89(Local_99.f_12[0]), 20f, 786603);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x415DF132F15085E8())
			{
				if (unk_0x841F312D66362BF7(Local_99.f_12[0]))
				{
					if (unk_0x841F312D66362BF7(Local_99.f_9[0]))
					{
						if (func_9(Local_99.f_12[0]))
						{
							if (!func_35(Local_99.f_9[0]))
							{
								if (unk_0x7B816C72877502C5(unk_0xDE2767751C03729D(Local_99.f_9[0]), unk_0xC7C67E717B20DA89(Local_99.f_12[0])))
								{
									if ((unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_9[0]), -258271821) != 1 && unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_9[0]), -258271821) != 0) || unk_0x48B8265059381CD0(Local_99.f_0, 9))
									{
										unk_0x9178B6CFE95D27C6(unk_0xDE2767751C03729D(Local_99.f_9[0]), unk_0xC7C67E717B20DA89(Local_99.f_12[0]), 30f, 786469);
										if (unk_0x48B8265059381CD0(Local_99.f_0, 9))
										{
											unk_0x21E7933CCC7B3724(&Local_99, 9);
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
			if (unk_0x841F312D66362BF7(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					if (unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_9[0]), -828834893) != 1 && unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_9[0]), -828834893) != 0)
					{
						if (func_331(Local_99.f_9[0]))
						{
							if (unk_0x093776FE2E6B4BAC(Local_99.f_9[0]))
							{
								unk_0x83150B7E65C16AFE(unk_0xDE2767751C03729D(Local_99.f_9[0]), 0, 0);
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x841F312D66362BF7(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
					{
						if (unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_9[0]), 1805844857) != 1 && unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_9[0]), 1805844857) != 0)
						{
							if (func_331(Local_99.f_9[0]))
							{
								if (unk_0x093776FE2E6B4BAC(Local_99.f_9[0]))
								{
									unk_0xCA58071CE9CCE891(unk_0xDE2767751C03729D(Local_99.f_9[0]), unk_0x17B5CC8A8615737D(), 500f, -1, 0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (unk_0x841F312D66362BF7(Local_99.f_9[0]))
	{
		if ((Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 >= 5 && Local_138[unk_0xCA1D9459B2CC7619() /*3*/].f_2 < 6) && !func_162(unk_0xBE369BE1BC57A796(), 0, 0, 0, 0))
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
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		if (func_330())
		{
			Global_2433125 = unk_0xBE369BE1BC57A796();
		}
		if (bParam3)
		{
			func_329(unk_0xDE2767751C03729D(uParam0), uParam1, 1, Global_2433125, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_329(unk_0xDE2767751C03729D(uParam0), uParam1, -1, Global_2433125, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xA3794949321E107C(*uParam1))
	{
		func_57(uParam1);
	}
}

int func_329(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x592069F95C314814();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xCA41A00932714525(uParam0))
	{
		if (!unk_0x708B478711FA7649(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x53D9FD8A3418C8E9(iParam0, 1);
			}
			else
			{
				unk_0x20DA9B5EBDD69183(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x7E0E4A8CBE4A8769(iParam0, iParam2);
			unk_0xC49F45795B7AFEEA(iParam0, fParam6);
			if (unk_0xA3794949321E107C(*uParam1))
			{
				unk_0x84DAB725836026C6(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x8F033B85B9F09390(iParam0, iParam9);
		}
		unk_0xB9B7F383FB2453E6(iParam0, uParam4);
		unk_0xB04373FE92ECD69C(iParam0, uParam5);
		*uParam1 = unk_0x4DFA608A26DB4230(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA3794949321E107C(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xCC930AE12D020496(*uParam1, iParam8);
				}
				unk_0x457AECF7F7E33610("STRING");
				if (bParam10)
				{
					unk_0xBAB00B98D1E61BEE(uParam7);
				}
				else
				{
					unk_0x34D84D73B5DF8E80(uParam7);
				}
				unk_0xB58BBC88882D90A6(*uParam1);
				unk_0x84DAB725836026C6(*uParam1, 7);
			}
		}
		if (!unk_0x48B8265059381CD0(uParam1->f_6, 2))
		{
			if (unk_0xA3794949321E107C(*uParam1))
			{
				if (!unk_0x9C88EB7B70229335(uParam7))
				{
					unk_0x457AECF7F7E33610("STRING");
					if (bParam10)
					{
						unk_0xBAB00B98D1E61BEE(sParam7);
					}
					else
					{
						unk_0x34D84D73B5DF8E80(sParam7);
					}
					unk_0xB58BBC88882D90A6(*uParam1);
				}
				unk_0xEB79FECD9022AAF0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xFD0FE723227D5AB6(iParam0, 0))
		{
			uParam1->f_1 = unk_0x3329BF35D4BD3992(iParam0);
			if (!unk_0x48B8265059381CD0(uParam1->f_6, 3))
			{
				if (unk_0xA3794949321E107C(uParam1->f_1))
				{
					unk_0x84DAB725836026C6(uParam1->f_1, 7);
					unk_0xEB79FECD9022AAF0(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xA3794949321E107C(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x21E7933CCC7B3724(&(uParam1->f_6), 3);
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
	return Global_1315210;
}

int func_331(var uParam0)
{
	if (unk_0x1E76805ECF5AA8B0(uParam0))
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
	if (!unk_0x415DF132F15085E8())
	{
		return 0;
	}
	if (!unk_0x841F312D66362BF7(uParam0))
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
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		unk_0x4EDACF77CDD9CFEB(uParam0);
		return unk_0x093776FE2E6B4BAC(uParam0);
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
	unk_0x21E7933CCC7B3724(&(Global_2433125.f_3224), 0);
	unk_0x21E7933CCC7B3724(&(Global_2433125.f_3224), 1);
	if (unk_0x63C468D583002D23())
	{
		if (unk_0xCA1D9459B2CC7619() > -1)
		{
			Local_138[unk_0xCA1D9459B2CC7619() /*3*/] = 0;
		}
	}
	if (unk_0x63C468D583002D23())
	{
		if (unk_0x415DF132F15085E8())
		{
			if (unk_0xF4B38546B3A1EDA3(Local_99.f_3))
			{
				unk_0x6ACF6CEA82656F30(Local_99.f_3);
			}
			Local_99.f_3 = -1;
		}
	}
	if (unk_0xA3794949321E107C(Global_1751008))
	{
		unk_0x020DF7300725ECAB(&Global_1751008);
	}
	unk_0x21E7933CCC7B3724(&uLocal_237, 3);
	unk_0x21E7933CCC7B3724(&uLocal_237, 4);
	iLocal_236 = 0;
	if (unk_0xA3794949321E107C(Local_249.f_0))
	{
		unk_0x020DF7300725ECAB(&Local_249);
	}
	func_337();
}

void func_337()
{
	unk_0x921053BAF754303D();
}

int func_338(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCF7855B965948E97(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433125.f_3[iVar0])
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
	if (Global_1315210 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			return 1;
		}
	}
	if (func_345())
	{
		return 1;
	}
	if (Global_2454747)
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
	if (!unk_0x6C119F3638AC7ABE())
	{
		return 1;
	}
	if (func_340() != 0)
	{
		if (unk_0x82F1A060D8F4583B(func_340()) == 0)
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
	return Global_25190;
}

bool func_342()
{
	return Global_2443134.f_577;
}

int func_343(int iParam0)
{
	if (unk_0x08E5392A79D45DEE(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_344()
{
	return Global_2452525;
}

bool func_345()
{
	return Global_2443134.f_572;
}

void func_346(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x91015F07066D5841(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 381:
					func_347(iVar0);
					break;
				
				case 2:
					unk_0x91015F07066D5841(1, iVar0, &Var4, 3);
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
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 3))
	{
		if (func_338(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xDF7CE83326F434E9(Var0.f_1);
			if (unk_0x23E9113C762466ED(uVar3))
			{
				if (unk_0xFD0FE723227D5AB6(uVar3, 0))
				{
					uVar4 = unk_0x60604E51E30D25B8(iVar3, 0);
					if (unk_0x4AFDA497DA0BF602(uVar4, Var0.f_2) && unk_0x9A0AB9C5586EA71E())
					{
						if (func_348(uVar4, &bVar5))
						{
							unk_0x7DCEC4E83315DC12(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x921CF98C637B0043(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_348(var uParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xC26429B504BA534D(uParam0))
		{
			if (unk_0xFB2400809D8DC8C7(uParam0))
			{
				if (!unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(uParam0)))
				{
					unk_0xF0F77C99098F999B(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x45CA7F42CA715849(uParam0, 0))
		{
			if (unk_0xC38F0FBE1914783C(uParam0))
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
	unk_0xB5EAF11213E48C1C(&Local_99, 23);
	unk_0x0C3BA36587E6FBEE(&Local_138, 97);
	unk_0xAA78C60F0BF0F8D4(0);
	if (!func_351())
	{
		func_336();
	}
	unk_0xEB79FECD9022AAF0(&(Global_2433125.f_3224), 0);
	unk_0x21E7933CCC7B3724(&(Global_2433125.f_3224), 1);
}

int func_351()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x63C468D583002D23())
		{
			return 0;
		}
		if (unk_0xF8A920554B0F81A7())
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
	
	iVar0 = unk_0xCC130A646D137F0D();
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
				if (!unk_0x63C468D583002D23())
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
			else if (!unk_0x9AD8CE0019487D7C())
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
		iVar0 = unk_0xCC130A646D137F0D();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x63C468D583002D23())
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
	else if (!unk_0x9AD8CE0019487D7C())
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
	if (!unk_0x63C468D583002D23())
	{
		func_337();
	}
	unk_0x181A13B993F735EB(uParam0, 0, Param1.f_16);
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

