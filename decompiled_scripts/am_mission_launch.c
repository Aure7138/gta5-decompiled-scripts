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
	func_347(ScriptParam_0);
	while (true)
	{
		func_346();
		if (func_336() || !func_335(unk_0x0C1D3C552325765B(), 0, 1))
		{
			func_333();
		}
		switch (func_332(unk_0x848AF823A8EA3C62()))
		{
			case 0:
				if (func_331() == 2)
				{
					Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_1 = 2;
				}
				else if (func_331() == 6)
				{
					Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_1 = 5;
				}
				break;
			
			case 2:
				if (func_331() == 2)
				{
					func_324();
					func_49();
				}
				else if (func_331() == 6)
				{
					Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_1 = 5;
				}
				if (((func_46(unk_0x0C1D3C552325765B(), 1) || func_43(unk_0x0C1D3C552325765B())) || unk_0x08BA6DD398CA197C(uLocal_237, 8)) || unk_0x08BA6DD398CA197C(uLocal_237, 16))
				{
					Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_1 = 6;
				}
				break;
			
			case 5:
				func_42(&(Local_99.f_19));
				if (func_41(&(Local_99.f_19)))
				{
					Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_1 = 6;
				}
				break;
			
			case 3:
				Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_1 = 6;
			
			case 6:
				func_333();
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			switch (func_331())
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
	return unk_0x08BA6DD398CA197C(Local_99.f_0, 6);
}

void func_3()
{
	if (unk_0xD9E8CA806A80203D())
	{
		switch (Local_99.f_2)
		{
			case 0:
				if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 10))
				{
					if (func_33(&(Local_99.f_17), 300000, 0))
					{
						unk_0x88B0F0DC270164B7(&Local_99, 10);
					}
				}
				if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 10))
				{
					if (unk_0x08BA6DD398CA197C(Local_99.f_0, 0))
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
					unk_0x88B0F0DC270164B7(&Local_99, 3);
					unk_0x09C86C0C5CA26B1E(&Local_99, 13);
					func_40(&(Local_99.f_21), 0, 0);
					Local_99.f_2 = 2;
				}
				break;
			
			case 2:
				if (unk_0x08BA6DD398CA197C(Local_99.f_0, 4))
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
	
	if (unk_0x3CF373660FCFAFCE(*uParam0))
	{
		uVar0 = unk_0x63CE7A3848B84093(*uParam0);
		unk_0x811BE251B0B13760(&uVar0);
	}
}

int func_6()
{
	if (Local_99.f_5 == 0)
	{
		if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 1))
		{
			iLocal_245 = 0;
			iLocal_246 = unk_0xB5BF1B58C833F7A9(0, 5);
			iLocal_123 = 0;
			Local_99.f_3 = -1;
			Local_99.f_4 = 0;
			unk_0x88B0F0DC270164B7(&Local_99, 1);
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 2))
		{
			if (func_31())
			{
				unk_0x88B0F0DC270164B7(&Local_99, 2);
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
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_12[0]))
	{
		if (Local_99.f_15 == 0)
		{
			unk_0x23DFD22869618226(1);
			Local_99.f_15 = 1;
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 13))
		{
			if (unk_0xD28B39973EB5D6B4(1))
			{
				if (unk_0x0C863D3ED919983C(1))
				{
					if (func_28(1, 1, 1))
					{
						if (func_22(1, 1, 1))
						{
							unk_0x88B0F0DC270164B7(&Local_99, 13);
						}
					}
				}
			}
		}
		if (unk_0x08BA6DD398CA197C(Local_99.f_0, 13))
		{
			if (func_21(iVar1))
			{
				if (func_21(iVar0))
				{
					if (func_12(&Var2, &uVar5))
					{
						if (func_11(&(Local_99.f_12[0]), iVar1, Var2, uVar5, 1, 1, 1, 0, 1, 1, 0))
						{
							unk_0xC5EFC3500CF4BE6F(unk_0x15F0E6D5AC2852F1(Local_99.f_12[0]), 1);
							if (unk_0x71F81D3603710A43("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0xB6E7BA5C3025C547(unk_0x15F0E6D5AC2852F1(Local_99.f_12[0]), "Not_Allow_As_Saved_Veh", 1);
							}
							Local_99.f_15 = 1;
						}
					}
				}
			}
		}
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_12[0]))
	{
		if (!unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
		{
			if (Local_99.f_16 == 0)
			{
				unk_0xF2797029E839595C(1);
				Local_99.f_16 = 1;
			}
			if (unk_0x0C863D3ED919983C(1))
			{
				if (func_21(iVar0))
				{
					if (func_9(Local_99.f_12[0]))
					{
						if (unk_0xB480350E4250D92A(Local_99.f_12[0]))
						{
							if (func_8(&(Local_99.f_9[0]), Local_99.f_12[0], 26, iVar0, -1, 1, 1, 1))
							{
								unk_0xC5EFC3500CF4BE6F(unk_0x564EAE6038A81C07(Local_99.f_9[0]), 1);
								unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_9[0]), 1, 0);
								unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_9[0]), 1);
								unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_9[0]), Global_1574276);
								unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_9[0]), 1, 0);
								unk_0xA082D4AC00BC651A(unk_0x564EAE6038A81C07(Local_99.f_9[0]), unk_0xF2DB717A73826179((200f * Global_262145.f_151)));
								Local_99.f_16 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_9[0]) || !unk_0x3CF373660FCFAFCE(Local_99.f_12[0]))
	{
		return 0;
	}
	return 1;
}

int func_8(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x0C863D3ED919983C(1))
	{
		return 0;
	}
	if (!unk_0x0E091C9F3918F674(uParam1))
	{
		return 0;
	}
	if (!unk_0x1F1B2B6E500380C5(unk_0x15F0E6D5AC2852F1(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9ED2AEF3CEBC2436(unk_0x667A2CFA1914073C(unk_0x15F0E6D5AC2852F1(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(unk_0x564EAE6038A81C07(*uParam0), iParam7);
		if (unk_0x6B8DF4084A1CD2DC(unk_0x564EAE6038A81C07(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_9(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return !func_10(unk_0x15F0E6D5AC2852F1(uParam0));
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (unk_0x912AD5A10E7633F0(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1F1B2B6E500380C5(uParam0, 0))
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
	
	if (!unk_0xD28B39973EB5D6B4(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xD74B8343DB9FEFD5(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xE044C77D0FC9DB66(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xDD3500FFBBCB3F3B(iVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(iVar0, iParam10);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
		{
			if (bParam8)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
			else
			{
				unk_0x748B0DC6DACDF341(*uParam0, 0);
			}
		}
		unk_0x4BA36C8825F6A05D(iVar0, iParam9);
		if (bParam12)
		{
			unk_0xFC40CBF7B90CA77C(iVar0);
			unk_0xF463117DBF0348D6(iVar0, 5, 5, 1f);
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
			if (unk_0x08BA6DD398CA197C(Local_99.f_4, iLocal_246))
			{
				Var0 = { -1232.842f, -1095.003f, 2.2331f };
				Var3 = { -1226.248f, -1089.819f, 10.1513f };
				Var6 = { func_19(0, 0) };
				fVar9 = 19.7853f;
			}
			break;
		
		case 1:
			if (unk_0x08BA6DD398CA197C(Local_99.f_4, iLocal_246))
			{
				Var0 = { -622.0966f, 250.3288f, 75.7075f };
				Var3 = { -614.8635f, 255.2288f, 88.7755f };
				Var6 = { func_19(0, 1) };
				fVar9 = 266.4686f;
			}
			break;
		
		case 2:
			if (unk_0x08BA6DD398CA197C(Local_99.f_4, iLocal_246))
			{
				Var0 = { 794.4784f, -2034.339f, 25.2469f };
				Var3 = { 798.8026f, -2026.004f, 33.2793f };
				Var6 = { func_19(0, 2) };
				fVar9 = 355.9428f;
			}
			break;
		
		case 3:
			if (unk_0x08BA6DD398CA197C(Local_99.f_4, iLocal_246))
			{
				Var0 = { -1623.919f, 1249.831f, 135.2495f };
				Var3 = { -1621.554f, 1257.98f, 145.2376f };
				Var6 = { func_19(0, 3) };
				fVar9 = 353.7463f;
			}
			break;
		
		case 4:
			if (unk_0x08BA6DD398CA197C(Local_99.f_4, iLocal_246))
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
				Local_99.f_3 = unk_0x3052C239D724043B(Var0, Var3);
			}
			else if (unk_0xD4F93C8B74AF0B32(Local_99.f_3))
			{
				if (unk_0xB78A2BE8140860EB(Local_99.f_3))
				{
					if (!unk_0x670DD68CBB8CD4D0(Local_99.f_3))
					{
						if (!func_13(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							unk_0xEADC755C72CA1A07(Local_99.f_3);
							return 1;
						}
						else
						{
							iLocal_246++;
							unk_0xEADC755C72CA1A07(Local_99.f_3);
							Local_99.f_3 = -1;
						}
					}
					else
					{
						iLocal_246++;
						unk_0xEADC755C72CA1A07(Local_99.f_3);
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
		if (func_335(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x999A157665D69393(func_18(unk_0x0C1D3C552325765B()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE514F14357BDEECF(Param0, fParam3))
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
		if (func_335(iVar1, 1, 1))
		{
			if (!func_15(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if ((func_14(iVar1) || !bParam10) && !Global_2421327[iVar1 /*353*/].f_258)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x10B1B072E9514664(iVar1) != unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))) || unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x999A157665D69393(func_18(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x10B1B072E9514664(iVar1) != iParam8 || unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x999A157665D69393(func_18(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
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
	if (unk_0x9125ADC25E13C689(unk_0x21F191D9AFF98B5E(iParam0)) || Global_2421327[iParam0 /*353*/].f_244)
	{
		return 1;
	}
	return 0;
}

bool func_15(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_16(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
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
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
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
	unk_0x491067A8E906F22D(iParam0);
	return unk_0x2C1B5A0D3E233FC3(iParam0);
}

bool func_22(int iParam0, bool bParam1, bool bParam2)
{
	return func_23(0, iParam0, 1, bParam1, bParam2);
}

int func_23(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x08BA6DD398CA197C(Global_1353353, 0))
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
		if (!bParam4 && Global_1588660[unk_0x0C1D3C552325765B() /*532*/] != 3)
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
			return Global_1353353.f_1;
			break;
		
		case 1:
			return Global_1353353.f_2;
			break;
		
		case 2:
			return Global_1353353.f_3;
			break;
	}
	return 0;
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x391BEA92ECF1B445())
			{
				return Global_2421327[iVar0 /*353*/].f_209;
			}
			else
			{
				return unk_0x12FCC59A8F519B65(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x391BEA92ECF1B445())
			{
				return Global_2421327[iVar0 /*353*/].f_210;
			}
			else
			{
				return unk_0x6A3DEBF89FDFEB17(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x391BEA92ECF1B445())
			{
				return Global_2421327[iVar0 /*353*/].f_211;
			}
			else
			{
				return unk_0xD647AEF519458F05(!bParam1);
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
			return Global_1353361;
			break;
		
		case 1:
			return Global_1353362;
			break;
		
		case 2:
			return Global_1353363;
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
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	if (unk_0x08BA6DD398CA197C(Local_99.f_0, 1))
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
			unk_0x88B0F0DC270164B7(&uLocal_237, 1);
		}
		if (iLocal_245 < 5)
		{
			iVar9 = iLocal_123;
			if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar9)))
			{
				iVar0 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar9));
				if (func_335(iVar0, 1, 1))
				{
					iVar1 = unk_0x21F191D9AFF98B5E(iVar0);
					if (unk_0x08BA6DD398CA197C(uLocal_237, 1))
					{
						Var2 = { func_19(Local_99.f_5, iLocal_245) };
						Var5 = { unk_0xC59DF10B4FC39DF8(iVar1, 0) };
						fVar8 = unk_0x999A157665D69393(Var2, Var5, 1);
						if (fVar8 < 300f)
						{
							unk_0x09C86C0C5CA26B1E(&uLocal_237, 1);
						}
					}
				}
			}
			iLocal_123++;
			if (iLocal_123 == Local_138.f_0)
			{
				if (unk_0x08BA6DD398CA197C(uLocal_237, 1))
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_4), iLocal_245);
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
	if (unk_0xA86CA03D9749EEB3() && !bParam2)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_34()
{
	if (unk_0xD9E8CA806A80203D())
	{
		switch (Local_99.f_6)
		{
			case 0:
				if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]) && unk_0x3CF373660FCFAFCE(Local_99.f_12[0]))
				{
					Local_99.f_6 = 1;
				}
				break;
			
			case 1:
				if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
				{
					if (!func_35(Local_99.f_9[0]))
					{
						if (unk_0x3CF373660FCFAFCE(Local_99.f_12[0]))
						{
							if (func_9(Local_99.f_12[0]))
							{
								if (unk_0x72550A6F2BC0E12B(unk_0x564EAE6038A81C07(Local_99.f_9[0]), unk_0x15F0E6D5AC2852F1(Local_99.f_12[0])))
								{
									if (unk_0x08BA6DD398CA197C(Local_99.f_0, 7))
									{
										unk_0x88B0F0DC270164B7(&Local_99, 9);
										Local_99.f_6 = 2;
									}
									else if (unk_0x08BA6DD398CA197C(Local_99.f_0, 14))
									{
										unk_0x88B0F0DC270164B7(&Local_99, 9);
										Local_99.f_6 = 2;
									}
									else if (unk_0x08BA6DD398CA197C(Local_99.f_0, 19))
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
				if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
				{
					if (!func_35(Local_99.f_9[0]))
					{
						if (!unk_0x4745637EEB85132D(unk_0x564EAE6038A81C07(Local_99.f_9[0])))
						{
							Local_99.f_6 = 4;
						}
						else if (unk_0x3CF373660FCFAFCE(Local_99.f_12[0]))
						{
							if (!func_9(Local_99.f_12[0]))
							{
								Local_99.f_6 = 3;
							}
							else if (unk_0x08BA6DD398CA197C(Local_99.f_0, 19))
							{
								Local_99.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
				{
					if (!func_35(Local_99.f_9[0]))
					{
						if (!unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_9[0]), 0))
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
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return unk_0xEB361B4BD195A4D3(unk_0x564EAE6038A81C07(uParam0));
	}
	return 1;
}

void func_36()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (unk_0xD9E8CA806A80203D())
	{
		if (iLocal_122 >= Local_138.f_0)
		{
			iLocal_122 = 0;
			iLocal_244 = 0;
			unk_0x09C86C0C5CA26B1E(&uLocal_237, 0);
			unk_0x88B0F0DC270164B7(&uLocal_237, 5);
			unk_0x09C86C0C5CA26B1E(&Local_99, 5);
			unk_0x09C86C0C5CA26B1E(&Local_99, 17);
			unk_0x09C86C0C5CA26B1E(&uLocal_237, 14);
			unk_0x09C86C0C5CA26B1E(&uLocal_237, 19);
			if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 16))
			{
				if (unk_0x08BA6DD398CA197C(Local_99.f_0, 18))
				{
					if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 4))
					{
						unk_0x88B0F0DC270164B7(&Local_99, 16);
					}
				}
			}
			if (func_39(&(Local_99.f_21)))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 12))
				{
					if (func_33(&(Local_99.f_21), 360000, 0))
					{
						unk_0x88B0F0DC270164B7(&Local_99, 12);
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 15))
					{
						if (func_33(&(Local_99.f_21), 240000, 0))
						{
							unk_0x88B0F0DC270164B7(&Local_99, 15);
						}
					}
				}
				else
				{
					unk_0x88B0F0DC270164B7(&uLocal_237, 9);
				}
			}
		}
		iVar0 = iLocal_122;
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
		{
			uVar3 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar0));
			iVar2 = uVar3;
			if (unk_0x08BA6DD398CA197C(uLocal_237, 5))
			{
				if (Local_138[iVar0 /*3*/].f_2 < 7)
				{
					unk_0x09C86C0C5CA26B1E(&uLocal_237, 5);
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 0))
			{
				if (unk_0x08BA6DD398CA197C(Local_138[iVar0 /*3*/], 0))
				{
					iLocal_244++;
				}
			}
			else if (unk_0x08BA6DD398CA197C(Local_138[iVar0 /*3*/], 2))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 17))
				{
					if (!unk_0x08BA6DD398CA197C(Local_99.f_7, iVar2))
					{
						if (Local_138[iVar0 /*3*/].f_2 > 4)
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_7), iVar2);
							unk_0x88B0F0DC270164B7(&Local_99, 17);
						}
					}
				}
				if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 5))
				{
					unk_0x88B0F0DC270164B7(&Local_99, 5);
				}
				if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 4))
				{
					if (unk_0x08BA6DD398CA197C(Local_138[iVar0 /*3*/], 1))
					{
						Local_99.f_8 = uVar3;
						unk_0x88B0F0DC270164B7(&Local_99, 4);
						unk_0x09C86C0C5CA26B1E(&uLocal_237, 15);
						unk_0x09C86C0C5CA26B1E(&Local_99, 18);
					}
				}
				if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 4))
				{
					if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 18))
					{
						if (unk_0x08BA6DD398CA197C(Local_138[iVar0 /*3*/], 7))
						{
							unk_0x88B0F0DC270164B7(&Local_99, 18);
						}
					}
				}
				if (unk_0x08BA6DD398CA197C(uLocal_237, 9))
				{
					if (unk_0x08BA6DD398CA197C(Local_138[iVar0 /*3*/], 5))
					{
						unk_0x09C86C0C5CA26B1E(&uLocal_237, 9);
					}
				}
				if (!unk_0x08BA6DD398CA197C(uLocal_237, 14))
				{
					if (unk_0x08BA6DD398CA197C(Local_138[iVar0 /*3*/], 6))
					{
						unk_0x88B0F0DC270164B7(&uLocal_237, 14);
					}
				}
				if (!unk_0x08BA6DD398CA197C(uLocal_237, 20))
				{
					if (unk_0x08BA6DD398CA197C(Local_138[iVar0 /*3*/], 8))
					{
						unk_0x88B0F0DC270164B7(&uLocal_237, 20);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
			{
				func_38(iVar1);
			}
			iVar1++;
		}
		iLocal_122++;
		if (iLocal_122 >= Local_138.f_0)
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 16))
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
				{
					if (func_35(Local_99.f_9[0]))
					{
						if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 4))
						{
							if (unk_0x08BA6DD398CA197C(uLocal_237, 15))
							{
								if (!func_39(&uLocal_242))
								{
									func_40(&uLocal_242, 0, 0);
								}
								else if (func_33(&uLocal_242, 2000, 0))
								{
									unk_0x88B0F0DC270164B7(&Local_99, 16);
								}
							}
						}
					}
				}
			}
			unk_0x88B0F0DC270164B7(&uLocal_237, 0);
			if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 0))
			{
				if (iLocal_244 >= 1)
				{
					unk_0x88B0F0DC270164B7(&Local_99, 0);
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 14))
			{
				if (unk_0x08BA6DD398CA197C(uLocal_237, 14))
				{
					unk_0x88B0F0DC270164B7(&Local_99, 14);
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 19))
			{
				if (unk_0x08BA6DD398CA197C(uLocal_237, 20))
				{
					unk_0x88B0F0DC270164B7(&Local_99, 19);
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 6))
			{
				if (unk_0x08BA6DD398CA197C(uLocal_237, 5))
				{
					if (Local_99.f_2 > 1 && Local_99.f_2 <= 7)
					{
						unk_0x88B0F0DC270164B7(&Local_99, 6);
					}
					else if (unk_0x08BA6DD398CA197C(Local_99.f_0, 10))
					{
						unk_0x88B0F0DC270164B7(&Local_99, 6);
					}
				}
			}
			if (unk_0x08BA6DD398CA197C(Local_99.f_0, 17))
			{
				unk_0x09C86C0C5CA26B1E(&Local_99, 17);
				unk_0x09C86C0C5CA26B1E(&Local_99, 15);
				unk_0x09C86C0C5CA26B1E(&Local_99, 12);
				func_37(&(Local_99.f_21));
				func_40(&(Local_99.f_21), 0, 0);
			}
			if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 11))
			{
				if (unk_0x08BA6DD398CA197C(Local_99.f_0, 12))
				{
					if (unk_0x08BA6DD398CA197C(uLocal_237, 9))
					{
						unk_0x88B0F0DC270164B7(&Local_99, 11);
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
	if (unk_0xD9E8CA806A80203D())
	{
		if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 7))
		{
			if (unk_0x08BA6DD398CA197C(Local_138[iParam0 /*3*/], 3))
			{
				unk_0x88B0F0DC270164B7(&Local_99, 7);
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
		if (unk_0xA86CA03D9749EEB3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
			}
			else
			{
				*uParam0 = unk_0xB3FCCA0C64473451();
			}
		}
		else
		{
			*uParam0 = unk_0xDF658EB6CA91DFBC();
		}
		uParam0->f_1 = 1;
	}
}

int func_41(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= 1000)
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
		if (unk_0xD9E8CA806A80203D())
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
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

int func_45(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_208 == 0)
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
	if (Global_1588660[iParam0 /*532*/] == -1)
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
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

void func_49()
{
	func_315();
	func_312();
	if (unk_0x08BA6DD398CA197C(Local_99.f_0, 10))
	{
		if (Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 < 6)
		{
			Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 6;
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_0, 4))
	{
		if (Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 <= 6)
		{
			Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 6;
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_0, 16))
	{
		if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 4))
		{
			if (Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 <= 6)
			{
				Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 6;
				Local_124.f_2 = 41;
				func_310(Local_124, func_311(1));
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_0, 11))
	{
		if (Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 <= 6)
		{
			Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 6;
			Local_124.f_2 = 41;
			func_310(Local_124, func_311(1));
		}
	}
	if (Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 > 0)
	{
		if (Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 < 6)
		{
			if ((((func_46(unk_0x0C1D3C552325765B(), 1) || func_309()) || func_308() > 0) || func_44(unk_0x0C1D3C552325765B(), 1)) || func_307())
			{
				Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 6;
			}
		}
	}
	if (Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 > 0)
	{
		if (Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 < 6)
		{
			if (func_305(unk_0x0C1D3C552325765B()))
			{
				Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 6;
			}
		}
	}
	switch (Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2)
	{
		case 0:
			if (unk_0x08BA6DD398CA197C(Local_138[unk_0x848AF823A8EA3C62() /*3*/], 0))
			{
				if (unk_0x08BA6DD398CA197C(Local_99.f_0, 3))
				{
					if (!unk_0x08BA6DD398CA197C(Local_99.f_0, 15))
					{
						unk_0x88B0F0DC270164B7(&(Local_138[unk_0x848AF823A8EA3C62() /*3*/]), 2);
						func_304(11, 1);
						Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 3;
					}
					else
					{
						Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 6;
						unk_0x88B0F0DC270164B7(&uLocal_237, 16);
					}
				}
			}
			break;
		
		case 3:
			if (func_303(Local_99.f_5))
			{
				func_302(Local_99.f_5);
				Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 4;
			}
			break;
		
		case 4:
			if (!func_301())
			{
				if (func_191())
				{
					Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 5;
					func_189(88, 1);
					func_188();
				}
				else if (unk_0x08BA6DD398CA197C(uLocal_237, 8))
				{
					Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 6;
				}
			}
			else if (func_179())
			{
				Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 5;
			}
			else
			{
				if (unk_0x08BA6DD398CA197C(uLocal_237, 8))
				{
					Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 6;
				}
				if (unk_0x08BA6DD398CA197C(Local_99.f_0, 15))
				{
					func_166(12, 116);
					Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 6;
					unk_0x88B0F0DC270164B7(&uLocal_237, 16);
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
			Local_138[unk_0x848AF823A8EA3C62() /*3*/] = 0;
			unk_0x09C86C0C5CA26B1E(&uLocal_237, 3);
			unk_0x09C86C0C5CA26B1E(&uLocal_237, 4);
			iLocal_236 = 0;
			func_166(12, 116);
			if (unk_0x16833EFAA58E63DB(Global_1738520))
			{
				unk_0x0B57C567D698C373(&Global_1738520);
			}
			func_57(&Local_249);
			func_50();
			func_304(11, 0);
			Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 7;
			break;
		
		case 7:
			if (Local_99.f_2 == 0 && !unk_0x08BA6DD398CA197C(Local_99.f_0, 10))
			{
				Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 0;
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
	if (!unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == Global_1312571.f_9)
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
	
	bVar0 = unk_0xA86CA03D9749EEB3();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x4B50AAB32FBE0483();
		Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
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
		unk_0x775C13C3833376FE(&(Global_1312571.f_12));
		func_54();
		unk_0x953FDEB57BB0D276();
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
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
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
	unk_0xD6B5839441DD3BED(&(Global_1312571.f_12));
	func_54();
	return unk_0x7A2AFC1B08BD3742();
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
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		unk_0x0B57C567D698C373(uParam0);
		bVar0 = true;
	}
	if (unk_0x16833EFAA58E63DB(uParam0->f_1))
	{
		unk_0x0B57C567D698C373(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_7))
	{
		if (!unk_0xEB361B4BD195A4D3(uParam0->f_7))
		{
			if (unk_0x86998240179B9048(uParam0->f_7))
			{
				unk_0x2E0880CA20A96DBE(uParam0->f_7, 0);
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
	
	if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
	{
		if (!func_35(Local_99.f_9[0]))
		{
			if (unk_0x16833EFAA58E63DB(Global_1738520))
			{
				if (func_164())
				{
					unk_0x8373805E5E68D815(Global_1738520, 0);
				}
				else
				{
					unk_0x8373805E5E68D815(Global_1738520, 4);
				}
			}
			else
			{
				Global_1738520 = unk_0x91B4D18C6AFDC14C(unk_0x564EAE6038A81C07(Local_99.f_9[0]));
				unk_0x77804F3DCBA01DB5(Global_1738520, 1);
				unk_0xC40118229E47A3D7(Global_1738520, 0f);
			}
			if (unk_0x16833EFAA58E63DB(Local_249.f_0))
			{
				if (func_164())
				{
					unk_0x8373805E5E68D815(Local_249.f_0, 0);
				}
				else
				{
					unk_0x8373805E5E68D815(Local_249.f_0, 4);
				}
				if (!unk_0x08BA6DD398CA197C(uLocal_237, 10))
				{
					unk_0x6F18BFEFE84565FF(Local_249.f_0, "FM_GDM_BLP");
					unk_0x88B0F0DC270164B7(&uLocal_237, 10);
				}
			}
			if (unk_0x16833EFAA58E63DB(Local_249.f_1))
			{
				if (func_164())
				{
					unk_0x8373805E5E68D815(Local_249.f_1, 0);
				}
				else
				{
					unk_0x8373805E5E68D815(Local_249.f_1, 4);
				}
				if (!unk_0x08BA6DD398CA197C(uLocal_237, 12))
				{
					unk_0x6F18BFEFE84565FF(Local_249.f_1, "FM_GDM_BLP");
					unk_0x88B0F0DC270164B7(&uLocal_237, 12);
				}
			}
			if (!unk_0x08BA6DD398CA197C(uLocal_237, 6))
			{
				if (!unk_0x08BA6DD398CA197C(Global_2359301, 7) && !func_160(unk_0x0C1D3C552325765B(), 0, 0, 0))
				{
					if (unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
					{
						if (!func_164())
						{
							func_154("FM_GDM_KIL", 0);
						}
						unk_0x88B0F0DC270164B7(&uLocal_237, 6);
					}
				}
			}
			else if (unk_0x08BA6DD398CA197C(Global_2359301, 7))
			{
				func_50();
				unk_0x09C86C0C5CA26B1E(&uLocal_237, 6);
			}
			else if (Global_68125)
			{
				func_50();
				unk_0x09C86C0C5CA26B1E(&uLocal_237, 6);
			}
			else if (func_160(unk_0x0C1D3C552325765B(), 0, 0, 0))
			{
				func_50();
				unk_0x09C86C0C5CA26B1E(&uLocal_237, 6);
			}
		}
		else if (unk_0x08BA6DD398CA197C(uLocal_237, 6))
		{
			func_50();
			unk_0x09C86C0C5CA26B1E(&uLocal_237, 6);
		}
		if (!unk_0x08BA6DD398CA197C(Local_138[unk_0x848AF823A8EA3C62() /*3*/], 1))
		{
			iVar1 = unk_0x1F86C8C27A772A49(Local_99.f_9[0], &uVar0);
			if (iVar1 == unk_0x0C1D3C552325765B())
			{
				unk_0x88B0F0DC270164B7(&(Local_138[unk_0x848AF823A8EA3C62() /*3*/]), 1);
				iVar2 = func_151(func_153(unk_0x0C1D3C552325765B(), 1), 1);
				if (iVar2 > 100)
				{
					iVar2 = 100;
				}
				iVar3 = iVar2 * 20;
				iVar3 = unk_0xF2DB717A73826179((Global_262145.f_4226 * IntToFloat(iVar3)));
				func_114(2, "XPT_KAIE", -1859646258, 2131309714, iVar3, 1, -1, 0);
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
				iVar8 = unk_0xB5BF1B58C833F7A9(iVar6, iVar7 + 1) * 100;
				iVar8 = func_113(iVar8, 1);
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
						Global_2572880[iVar9 /*73*/].f_8 = -1146479277;
					}
				}
				else
				{
					unk_0x324147E7C1060EB6(iVar8, -1146479277);
				}
				func_60(5, iVar8);
			}
			else if (iVar1 != func_59())
			{
				if (unk_0xCB129F9A01D14082(iVar1))
				{
					if (!unk_0x08BA6DD398CA197C(Local_138[unk_0x848AF823A8EA3C62() /*3*/], 7))
					{
						if (!unk_0x3F3C7C3B52DD0ECA(iVar1))
						{
							unk_0x88B0F0DC270164B7(&(Local_138[unk_0x848AF823A8EA3C62() /*3*/]), 7);
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
		Global_2482149.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5400)
		{
			iParam1 = Global_262145.f_5400;
		}
		Global_2482149.f_270 = iParam1;
		Global_2482149.f_271 = 0;
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
		if (!unk_0xFCE85827D6C3F47A(func_17()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x6B7B1963D4E447A1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar3))
		{
			*uParam0 = func_69(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2572880[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2573362 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2573371 = 1;
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_68(1, iParam4);
			Global_2573371 = 0;
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
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
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
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_65(&(Global_2572880[iParam0 /*73*/]));
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
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
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
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_68(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_69(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_70())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2572880[iVar0 /*73*/].f_2 = 1;
			Global_2572880[iVar0 /*73*/].f_1 = uParam5;
			Global_2572880[iVar0 /*73*/].f_3 = uParam1;
			Global_2572880[iVar0 /*73*/].f_4 = uParam2;
			Global_2572880[iVar0 /*73*/].f_7 = uParam3;
			Global_2572880[iVar0 /*73*/].f_5 = 0;
			Global_2572880[iVar0 /*73*/] = iParam0;
			Global_2572880[iVar0 /*73*/].f_6 = iParam4;
			Global_2572880[iVar0 /*73*/].f_69 = uParam8;
			Global_2572880[iVar0 /*73*/].f_68 = uParam7;
			Global_2572880[iVar0 /*73*/].f_72 = 0;
			Global_2573362 = 0;
			if (bParam6)
			{
				Global_2572880[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_70()
{
	if (unk_0x955B8C8F89CC3AC0())
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
		if (!func_112())
		{
			if (func_111(0))
			{
				if (!func_107(0))
				{
					if (unk_0xCB129F9A01D14082(func_106()))
					{
						if (func_105() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_105());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_103(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_75("GB_BCUT_TICK1", func_106(), iVar0, 0, 0, 1, 1);
						}
						func_74(20);
						func_72(func_106(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_72(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_335(iParam0, 0, 1))
	{
		Var0.f_0 = 460;
		Var0.f_1 = unk_0x0C1D3C552325765B();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_73(iParam0));
	}
}

var func_73(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

void func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

int func_75(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		unk_0x212C24688D441F9E(func_82(iParam1, -2, 1, 0));
		unk_0xDA35BDB37E728640(func_80(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x212C24688D441F9E(iParam3);
		}
		unk_0x3F9D1B882EC0B8AF(iParam2);
		iVar0 = unk_0xBCD67D962E393B66(0, 1);
		func_76(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_76(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_79() || !unk_0x1504F110F2576375()) || !func_15(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_77(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1747376.f_5[iVar0 /*53*/] = iParam0;
		Global_1747376.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1747376.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1747376.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1747376.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1747376.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1747376.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_78(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1747376++;
	if (Global_1747376 > 5)
	{
		Global_1747376 = 5;
		return Global_1747376;
	}
	return (Global_1747376 - 1);
}

void func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_79()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
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
	
	if (func_305(iParam0))
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
		iVar0 = unk_0x10B1B072E9514664(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1626500.f_80279[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_305(unk_0x0C1D3C552325765B()) || (func_102() && func_101()))
	{
		uVar1 = func_100();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(uVar1))
			{
				if (unk_0xA43666ACD375E339(uVar1) != -1)
				{
					if (func_335(unk_0xA43666ACD375E339(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_99(iParam1, iParam0, 0);
							}
							else
							{
								return func_90(iParam0, unk_0xA43666ACD375E339(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_90(iParam0, unk_0xA43666ACD375E339(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
				{
					return func_99(iParam1, iParam0, 0);
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
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_99(iParam1, iParam0, 0);
		}
		else
		{
			return func_90(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_90(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_83(bool bParam0, int iParam1, bool bParam2)
{
	return func_84(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_84(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_89(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
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
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
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
	if (func_86(Global_1626500.f_83867))
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
		if (iParam0 == Global_262145.f_7751[iVar0])
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
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 0);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 1);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 2);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 4);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 5);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 6);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 8);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 9);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 10);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 12);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 13);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 14);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 15);
				
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
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x10B1B072E9514664(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1588660[iVar2 /*532*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_98(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_89(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_88(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_97(1);
			}
			else
			{
				return func_84(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_88(1);
			}
			else
			{
				return func_84(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_93(iParam0);
	if (!iVar3 == -1)
	{
		return func_91(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_91(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_92(iParam0);
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

var func_92(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_93(int iParam0)
{
	if (!iParam0 == func_59())
	{
		if (func_95(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_94(iParam0)];
		}
	}
	return -1;
}

int func_94(int iParam0)
{
	if (iParam0 != func_59())
	{
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_59();
}

bool func_95(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_96(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_59();
}

int func_96(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_59())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_97(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_98(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == iParam2;
	}
	return unk_0x10B1B072E9514664(iParam0) == iParam2;
}

int func_99(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1626500.f_80279[iParam0] != -1 && Global_1626500.f_80279[iParam0] <= 4)
	{
		if (Global_1626500.f_80279[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1626500.f_80279[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1626500.f_80279[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1626500.f_80279[iParam0] == 4)
		{
			if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 29))
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
			iVar0 = Global_1626500.f_80279[iParam0];
		}
	}
	else
	{
		iVar0 = func_84(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_100()
{
	return Global_2359301.f_2;
}

bool func_101()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

bool func_102()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

void func_103(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_104(1);
	}
	else
	{
		iVar1 = func_104(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_104(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10822;
}

int func_105()
{
	return Global_262145.f_10821;
}

int func_106()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

bool func_107(bool bParam0)
{
	return func_108(unk_0x0C1D3C552325765B(), bParam0);
}

int func_108(int iParam0, bool bParam1)
{
	return func_109(iParam0, bParam1, 1);
}

int func_109(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_59())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_110(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_59() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	if (iParam0 != func_59())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_59())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_111(bool bParam0)
{
	return func_95(unk_0x0C1D3C552325765B(), bParam0);
}

bool func_112()
{
	return func_96(unk_0x0C1D3C552325765B());
}

int func_113(int iParam0, int iParam1)
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

var func_114(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_115(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_115(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_116(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_116(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_150(unk_0x0C1D3C552325765B()) || func_149(unk_0x0C1D3C552325765B()))
	{
		if (Global_262145.f_8088 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8088;
		}
	}
	else if (Global_262145.f_5451 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5451;
	}
	if (func_148(sParam2))
	{
	}
	if (func_147())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_145(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_144(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_142(0, &iVar1);
					break;
				
				case 3:
					func_142(1, &iVar1);
					break;
				
				case 1:
					func_139(&iVar1);
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
			func_136(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_127((func_135(unk_0x0C1D3C552325765B()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x726276BAB6518437(iVar1, iParam8, iParam9);
				if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_2 != -1)
				{
					func_136(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_121(iVar1);
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
				func_117((func_119(unk_0x0C1D3C552325765B()) + iVar1));
			}
			else
			{
				func_117((func_119(unk_0x0C1D3C552325765B()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_117(int iParam0)
{
	if (func_147())
	{
		Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_5 = iParam0;
		func_118(joaat("mpply_globalxp"), iParam0);
	}
}

void func_118(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
}

int func_119(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_335(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return func_120(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_5;
			}
		}
		else
		{
			return func_120(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_121(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_126(unk_0x0C1D3C552325765B()) };
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(&Var0))
		{
			iVar13 = func_124(func_125(&Var0));
			if (iVar13 == 0)
			{
				func_123(&Global_1352222, iParam0);
				func_122(joaat("mpply_crew_local_xp_0"), Global_1352222);
			}
			else if (iVar13 == 1)
			{
				func_123(&Global_1352223, iParam0);
				func_122(joaat("mpply_crew_local_xp_1"), Global_1352223);
			}
			else if (iVar13 == 2)
			{
				func_123(&Global_1352224, iParam0);
				func_122(joaat("mpply_crew_local_xp_2"), Global_1352224);
			}
			else if (iVar13 == 3)
			{
				func_123(&Global_1352225, iParam0);
				func_122(joaat("mpply_crew_local_xp_3"), Global_1352225);
			}
			else if (iVar13 == 4)
			{
				func_123(&Global_1352226, iParam0);
				func_122(joaat("mpply_crew_local_xp_4"), Global_1352226);
			}
		}
	}
}

void func_122(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1352217 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1352219 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1352219 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1352220 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1352221 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1352222 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1352223 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1352224 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1352225 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1352226 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1352227 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1352228 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1352229 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1352230 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1352231 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1352232 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1352233 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_123(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_124(int iParam0)
{
	if (iParam0 == Global_1352217)
	{
		return 0;
	}
	else if (iParam0 == Global_1352218)
	{
		return 1;
	}
	else if (iParam0 == Global_1352219)
	{
		return 2;
	}
	else if (iParam0 == Global_1352220)
	{
		return 3;
	}
	else if (iParam0 == Global_1352221)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_125(var uParam0)
{
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(uParam0))
		{
			return Global_2451705;
		}
	}
	return Global_2451705;
}

struct<13> func_126(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

void func_127(int iParam0, int iParam1, int iParam2)
{
	if (func_147())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8058 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1352337[func_134(-1)])
				{
					unk_0x726276BAB6518437(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1352337[func_134(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x726276BAB6518437(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x726276BAB6518437(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_133(unk_0x0C1D3C552325765B()))
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_1 = iParam0;
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_6 = func_151(iParam0, 1);
		}
		func_132(632, iParam0, -1, 1);
		func_131(633, func_151(iParam0, 1), -1, 1, 0);
		Global_1352337[func_134(-1)] = iParam0;
		func_128(7, 0);
	}
}

void func_128(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_130(iParam0, iParam1))
	{
		iVar0 = func_129();
		Global_2451682[iVar0] = iParam0;
	}
}

int func_129()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2451682[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_130(int iParam0, var uParam1)
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

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_134(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_134(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_134(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_134(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_134(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_134(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_134(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_134(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_134(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_134(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_134(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_134(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_134(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_134(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_134(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_134(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_134(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_134(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_134(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_134(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_134(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_134(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_134(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_134(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_134(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_134(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_134(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_134(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_134(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_134(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_134(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_134(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_134(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_134(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_133(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_2432628.f_1, iParam0);
	}
	return 1;
}

int func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
		if (iVar1 > -1)
		{
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

int func_135(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_134(-1)];
			}
			else if (func_133(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_134(-1)];
	}
	return 0;
}

void func_136(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_138(iParam0, func_134(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_137(iParam0))
	{
		func_131(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_132(iParam0, iVar0, iParam2, 1);
	}
}

int func_137(int iParam0)
{
	if (Global_1352216)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2909:
			case 3038:
			case 4481:
			case 3033:
			case 3034:
			case 3035:
			case 3036:
			case 3037:
			case 3212:
			case 3214:
			case 3616:
			case 3617:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3207:
			case 3201:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3669:
			case 3210:
			case 3209:
				return 1;
				break;
			}
	}
	return 0;
}

int func_138(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_134(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		iVar4 = unk_0x81C7A2950EF11C8A(iVar0);
		if (unk_0x1489FFC2CBA39486(iVar4))
		{
			iVar5 = unk_0xF3B8A064D228878B(iVar4);
			if (unk_0x10B1B072E9514664(iVar5) != -1)
			{
				if (unk_0x10B1B072E9514664(iVar5) == iVar1 || func_89(unk_0x10B1B072E9514664(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0C1D3C552325765B())
					{
						if (func_141(unk_0x0C1D3C552325765B(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_140(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_140(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_140(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_141(int iParam0, int iParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_126(iParam0) };
		Global_2471207 = { func_126(iParam1) };
		if (unk_0xC1B41A655437AD93(&Global_2471194))
		{
			if (unk_0xC1B41A655437AD93(&Global_2471207))
			{
				unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194);
				unk_0x0ADE2D0C6811DC70(&Global_2471159, 35, &Global_2471207);
				if (Global_2471124 == Global_2471159)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_142(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xE5697AB254094B0D())
		{
			iVar3 = iVar0;
			if (unk_0x1489FFC2CBA39486(iVar3))
			{
				iVar4 = unk_0xF3B8A064D228878B(iVar3);
				if (func_335(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0C1D3C552325765B())
					{
						iVar1++;
						if (func_141(unk_0x0C1D3C552325765B(), iVar4))
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
			if (func_335(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0C1D3C552325765B())
				{
					if (func_143(unk_0x0C1D3C552325765B(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_141(unk_0x0C1D3C552325765B(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_140(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_140(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_143(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_18(iParam0), func_18(iParam1));
	return 0f;
}

int func_144(int iParam0)
{
	int iVar0;
	
	if (unk_0x666918BF44D91346() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_140(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_145(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x9ABCEFB6E400C9FB(iParam0) > func_135(unk_0x0C1D3C552325765B()))
		{
			iParam0 = -func_135(unk_0x0C1D3C552325765B());
		}
	}
	if (func_146(8000, 0, 0) > 0)
	{
		if (func_146(8000, 0, 0) < (iParam0 + func_135(unk_0x0C1D3C552325765B())))
		{
			iParam0 = (func_146(8000, 0, 0) - func_135(unk_0x0C1D3C552325765B()));
		}
	}
	return iParam0;
}

int func_146(int iParam0, bool bParam1, int iParam2)
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
	return Global_278713[iParam0];
}

int func_147()
{
	return 1;
}

int func_148(char* sParam0)
{
	if (unk_0xD28EDDD3F7264249(sParam0))
	{
		return 1;
	}
	else if (unk_0x28C1B9853548BD8E(sParam0, "") || unk_0x28C1B9853548BD8E(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_149(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_150(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

int func_151(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_152(iParam0, 0);
}

int func_152(int iParam0, int iParam1)
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
		if (Global_278713[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_278713[iVar3] < iParam0)
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

int func_153(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_135(iParam0);
}

void func_154(char* sParam0, bool bParam1)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return;
	}
	if (func_158(sParam0))
	{
		return;
	}
	func_51();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_157();
	func_156(bParam1);
	func_155();
}

void func_155()
{
	unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 1);
}

void func_156(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_1312571.f_59), 0);
}

void func_157()
{
	Global_1312571.f_10 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 86400000);
	Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
}

bool func_158(char* sParam0)
{
	if (!func_56())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_159(sParam0);
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12));
}

bool func_159(char* sParam0)
{
	if (!func_56())
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

int func_160(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_1588660[iParam0 /*532*/].f_256.f_11 > 0)
	{
		if (bParam1)
		{
			if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
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
		if (func_163(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_161(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_161(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (func_335(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_162(Global_2421327[iParam0 /*353*/].f_308.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_162(int iParam0)
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

int func_163(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (func_335(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_162(Global_2421327[iParam0 /*353*/].f_308.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_164()
{
	if (func_165(16))
	{
		return 1;
	}
	if (func_165(0))
	{
		return 1;
	}
	return 0;
}

bool func_165(int iParam0)
{
	var uVar0;
	
	uVar0 = func_138(2460, -1, 0);
	return unk_0x08BA6DD398CA197C(uVar0, iParam0);
}

void func_166(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_178(iParam0);
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
		func_170();
	}
	func_167(iVar0);
}

void func_167(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1352059)
	{
		return;
	}
	if (Global_2394153[iParam0 /*44*/].f_25 != -1)
	{
		unk_0x5AF920EE00652664(Global_2394153[iParam0 /*44*/].f_25);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1352059)
	{
		Global_2394153[iVar0 /*44*/] = { Global_2394153[iVar1 /*44*/] };
		Global_2394153[iVar0 /*44*/] = { Global_2394153[iVar1 /*44*/] };
		iVar0++;
		iVar1++;
	}
	func_169(iVar0);
	Global_1352059 = (Global_1352059 - 1);
	if (Global_1352030)
	{
		if (Global_1352028 > 0)
		{
			func_168();
		}
	}
}

void func_168()
{
	Global_1352030 = 0;
}

void func_169(int iParam0)
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
	if (unk_0xA86CA03D9749EEB3())
	{
		Global_2394153[iParam0 /*44*/].f_37 = unk_0x4B50AAB32FBE0483();
	}
}

void func_170()
{
	Global_16808 = (Global_16808 - 1);
	if (Global_16808 < 0)
	{
		func_177("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_171();
}

void func_171()
{
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_176(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_172(1);
			func_176(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_172(int iParam0)
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
		if (func_175(14))
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
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_174(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
							{
								if (iVar1 == 14)
								{
									func_173(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_101553.f_12996[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101553.f_12996[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101553.f_12996[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_173(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69617)
								{
									iVar4 = 0;
									iVar4 = Global_2576655;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2576656[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2576656[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2576656[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_173(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36911;
											break;
										
										case 1:
											iVar6 = Global_36912;
											break;
										
										case 2:
											iVar6 = Global_36913;
											break;
										
										default:
											break;
									}
									func_173(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_173(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_174(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(Global_2319);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_174(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar7);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_174(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar8);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 8)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_174(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if ((iVar1 == 23 && unk_0x28C1B9853548BD8E(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x08BA6DD398CA197C(Global_2314, 6))
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_174(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
								func_173(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_173(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_173(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(uParam7))
	{
		func_174(sParam7);
	}
	if (!unk_0x509383441597090D(iParam8))
	{
		func_174(iParam8);
	}
	if (!unk_0x509383441597090D(iParam9))
	{
		func_174(iParam9);
	}
	if (!unk_0x509383441597090D(iParam10))
	{
		func_174(iParam10);
	}
	if (!unk_0x509383441597090D(iParam11))
	{
		func_174(iParam11);
	}
	unk_0xE73340DA551C95E1();
}

void func_174(var uParam0)
{
	unk_0x709662CF2BD061A4(uParam0);
	unk_0x1E77BE8F4283FA05();
}

bool func_175(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_176(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

void func_177(char* sParam0)
{
	if (Global_16808 != 0)
	{
		if (!unk_0x509383441597090D(sParam0))
		{
		}
		Global_16808 = 0;
	}
}

int func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1352059)
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

int func_179()
{
	if (!unk_0x08BA6DD398CA197C(uLocal_237, 17))
	{
		func_181(12, 116, "", 1);
		unk_0x88B0F0DC270164B7(&uLocal_237, 17);
	}
	else if (!unk_0x08BA6DD398CA197C(uLocal_237, 18))
	{
		if (func_180(12, 116))
		{
			unk_0x88B0F0DC270164B7(&uLocal_237, 18);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_180(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_178(iParam0);
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
	func_167(iVar0);
	Global_2395292 = unk_0xDF658EB6CA91DFBC() + 1500;
	return 1;
}

void func_181(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_178(iParam0);
	if (iVar0 != -1)
	{
		func_167(iVar0);
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_182(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1);
}

void func_182(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8)
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
		iVar0 = unk_0x81C85E54237F8A2E(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_187())
		{
			return;
		}
	}
	iVar2 = Global_1352059;
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
	Global_1352059++;
	if (Global_1352059 > 12)
	{
		Global_1352059 = 12;
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
	Global_2394153[iVar4 /*44*/].f_37 = unk_0x4B50AAB32FBE0483();
	Global_2394153[iVar4 /*44*/].f_38 = uParam5;
	Global_2394153[iVar4 /*44*/].f_39 = Global_2395291;
	Global_2394153[iVar4 /*44*/].f_43 = iParam8;
	if (iParam0 == 123)
	{
		Global_2394153[iVar4 /*44*/].f_8 = func_184();
	}
	Global_2395291++;
	func_183();
	Global_2394153[iVar4 /*44*/].f_40 = 0;
	Global_2394153[iVar4 /*44*/].f_41 = 0;
	Global_2394153[iVar4 /*44*/].f_42 = 0;
	if (unk_0x15B0CAB107CFCDE1())
	{
		if (bParam2)
		{
			bVar5 = true;
			if (bVar5)
			{
				Var6 = { func_126(iVar0) };
				iVar19 = unk_0x10DA659EE73D49B8(&Var6);
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

void func_183()
{
	Global_1352032 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 30000);
}

int func_184()
{
	char cVar0[24];
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_186() };
	if (unk_0x509383441597090D(&cVar0) || unk_0x28C1B9853548BD8E(".", &cVar0))
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
				StringCopy(&cVar0, func_185(51, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_185(52, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_185(53, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_185(54, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_185(55, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_185(56, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_185(57, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!unk_0x509383441597090D(&cVar0) && !unk_0x28C1B9853548BD8E(".", &cVar0))
		{
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 == 0)
	{
		return -1;
	}
	uVar8 = func_138(3998, -1, 0);
	iVar9 = 0;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		iVar9 = iVar6 * 3;
		if (iVar9 != -1)
		{
			if (!unk_0x08BA6DD398CA197C(uVar8, iVar9))
			{
				return 7;
			}
		}
		iVar6++;
	}
	return 1;
}

var func_185(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_2506916[iParam0 /*3*/][func_134(iParam1)];
	return unk_0x2111EA6661834353(uVar0, -1);
}

struct<6> func_186()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	
	if (unk_0x509383441597090D(&(Global_1744586.f_10)))
	{
		iVar7 = func_138(3999, -1, 0);
		if (iVar7 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar6 = 0;
			while (iVar6 < 1118)
			{
				if ((Global_794608.f_4[iVar6 /*88*/].f_65 == 0 && Global_794608.f_4[iVar6 /*88*/].f_68 == 1) && unk_0x08BA6DD398CA197C(Global_794608.f_4[iVar6 /*88*/].f_76, 13))
				{
					if (Global_794608.f_98389[iVar6 /*12*/].f_1 == iVar7)
					{
						Var0 = { Global_794608.f_111819[Global_794608.f_98389[iVar6 /*12*/].f_9 /*6*/] };
						iVar6 = 1118;
					}
				}
				iVar6++;
			}
			if (unk_0x509383441597090D(&Var0))
			{
			}
		}
		Global_1744586.f_10 = { Var0 };
		return Var0;
	}
	return Global_1744586.f_10;
}

bool func_187()
{
	return Global_1315189 == 10;
}

void func_188()
{
	var uVar0;
	
	uVar0 = Global_1352331[func_134(-1)];
	unk_0x88B0F0DC270164B7(&uVar0, 8);
	func_132(1296, uVar0, -1, 1);
}

void func_189(int iParam0, bool bParam1)
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
			Global_2097152[func_190() /*10106*/].f_7120.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_190() /*10106*/].f_7120.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_190() /*10106*/].f_7120.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_190() /*10106*/].f_7120.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_190() /*10106*/].f_7120.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_190() /*10106*/].f_7120.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_190() /*10106*/].f_7120.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_190() /*10106*/].f_7120.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_190() /*10106*/].f_7120.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_190() /*10106*/].f_7120.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_190() /*10106*/].f_7120.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_190() /*10106*/].f_7120.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_190() /*10106*/].f_7120.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_190() /*10106*/].f_7120.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_190() /*10106*/].f_7120.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_190() /*10106*/].f_7120.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_190() /*10106*/].f_7120.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_190() /*10106*/].f_7120.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_190() /*10106*/].f_7120.f_30 = iVar0;
			break;
	}
}

int func_190()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_191()
{
	if (!unk_0x08BA6DD398CA197C(uLocal_237, 4))
	{
		if (!unk_0x08BA6DD398CA197C(uLocal_237, 8) || (unk_0x08BA6DD398CA197C(uLocal_237, 8) && func_33(&uLocal_240, 600000, 0)))
		{
			if (func_197(Local_99.f_5))
			{
				unk_0x88B0F0DC270164B7(&uLocal_237, 4);
				unk_0x09C86C0C5CA26B1E(&uLocal_237, 8);
			}
		}
	}
	else if (!func_196())
	{
		if (!unk_0x08BA6DD398CA197C(uLocal_237, 19))
		{
			if (func_195())
			{
				unk_0x88B0F0DC270164B7(&uLocal_237, 19);
			}
			else if (!func_194() && !func_192())
			{
				unk_0x88B0F0DC270164B7(&uLocal_237, 8);
				unk_0x09C86C0C5CA26B1E(&uLocal_237, 4);
				func_40(&uLocal_240, 0, 0);
				iLocal_236 = 0;
			}
		}
		else if (!func_192())
		{
			if (func_194())
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
		unk_0x88B0F0DC270164B7(&uLocal_237, 8);
		unk_0x09C86C0C5CA26B1E(&uLocal_237, 4);
		func_40(&uLocal_240, 0, 0);
		iLocal_236 = 0;
	}
	return 0;
}

bool func_192()
{
	return func_193();
}

bool func_193()
{
	return Global_1336446.f_40 == 3;
}

bool func_194()
{
	return Global_1336446.f_57.f_1;
}

int func_195()
{
	if (Global_15745 == 4)
	{
		if (unk_0xC6CB0C1523C73C77())
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

int func_196()
{
	if (Global_16761)
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)
{
	int iVar0;
	
	switch (iLocal_236)
	{
		case 0:
			if (func_295(0, 1, 1, 1))
			{
				if (!func_294(12, -1))
				{
					func_290(iParam0);
					iLocal_236++;
				}
			}
			break;
		
		case 1:
			iVar0 = func_289(iParam0);
			func_288(iParam0);
			if (func_198(&uLocal_257, iVar0, "FM_1AU", sLocal_422, 0, 0))
			{
				unk_0x09C86C0C5CA26B1E(&uLocal_237, 11);
				iLocal_236++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_198(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_286())
	{
		return 0;
	}
	if (func_285())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_199(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_199(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x509383441597090D(sParam2))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam3))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69());
	iVar1 = func_284(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x509383441597090D(sParam7))
	{
		iVar2 = unk_0x3BB8D1C5FAAB25B3(sParam7);
	}
	if (func_283(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_278(uParam6))
	{
		return 0;
	}
	if (func_275(iVar0, iVar1, iVar2))
	{
		if (func_274())
		{
			return 0;
		}
		func_273();
		return func_206(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_205(iParam4))
	{
		return 0;
	}
	func_200(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_200(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1336446.f_40.f_1 = iParam0;
	Global_1336446.f_40.f_2 = iParam1;
	Global_1336446.f_40.f_3 = iParam2;
	StringCopy(&(Global_1336446.f_40.f_4), sParam3, 16);
	Global_1336446.f_40.f_8 = iParam4;
	Global_1336446.f_40.f_9 = iParam5;
	Global_1336446.f_40.f_14 = uParam6;
	func_201(iParam4);
	func_273();
	Global_1336446.f_40.f_13 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 7000);
}

void func_201(int iParam0)
{
	if (func_204(iParam0))
	{
		func_203();
		return;
	}
	func_202();
}

void func_202()
{
	Global_1336446.f_40.f_10 = 0;
}

void func_203()
{
	Global_1336446.f_40.f_10 = 1;
}

int func_204(int iParam0)
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

bool func_205(int iParam0)
{
	return iParam0 > Global_1336446.f_40.f_8;
}

int func_206(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_272();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_269(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_266(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_269(uParam0, sParam3, sParam4);
		}
		return func_250(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_249(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_239(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_238(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_207(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_207(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_237();
	bVar0 = true;
	if (func_209(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_208(120000);
		return 1;
	}
	return 0;
}

void func_208(int iParam0)
{
	Global_1336446.f_40.f_11 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam0);
	Global_1336446.f_40.f_12 = 1;
}

int func_209(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_231(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
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
	sVar4 = func_230(sParam5, bParam6, &iVar3);
	uVar5 = func_228(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
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
		if (unk_0x08BA6DD398CA197C(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
	{
		bVar12 = func_227(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_213(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(uParam4, 0))
	{
		func_212();
	}
	func_237();
	func_211();
	func_210();
	return 1;
}

void func_210()
{
	Global_1336446.f_57 = 0;
	Global_1336446.f_57.f_1 = 0;
}

void func_211()
{
	Global_1336446.f_40 = 3;
}

void func_212()
{
	unk_0x88B0F0DC270164B7(&Global_2313, 8);
}

int func_213(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_214(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
		}
		return 1;
	}
	return 0;
}

int func_214(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
	{
	}
	func_221();
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
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_2577906 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_220() == 0)
	{
		func_218();
		return 0;
	}
	func_217(Global_2577905);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/]), sParam1, 64);
	Global_2576656[Global_2577905 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2576656[Global_2577905 /*104*/].f_24 = iParam2;
	}
	Global_2576656[Global_2577905 /*104*/].f_25 = iParam7;
	Global_2576656[Global_2577905 /*104*/].f_26 = uParam8;
	Global_2576656[Global_2577905 /*104*/].f_29 = uParam9;
	Global_2576656[Global_2577905 /*104*/].f_30 = uParam12;
	Global_2576656[Global_2577905 /*104*/].f_31 = uParam11;
	Global_2576656[Global_2577905 /*104*/].f_28 = 0;
	Global_2576656[Global_2577905 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_33), sParam4, 64);
	Global_2576656[Global_2577905 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_50), sParam5, 64);
	Global_2576656[Global_2577905 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_83), sParam15, 64);
	func_221();
	switch (iParam16)
	{
		case 3:
			Global_2576656[Global_2577905 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2576656[Global_2577905 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2576656[Global_2577905 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2576656[Global_2577905 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_216(0);
				break;
			
			case 1:
				func_216(1);
				break;
			
			case 2:
				func_216(2);
				break;
			
			case 3:
				func_216(3);
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
				Global_2577906 = 1;
				break;
			
			case 0:
				Global_2577906 = 1;
				break;
			
			case 2:
				Global_2577906 = 1;
				break;
			
			case 1:
				Global_2577906 = 1;
				break;
			}
	}
	Global_16814[Global_2577905] = 0;
	if (bParam10)
	{
		func_221();
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
			if (!func_215())
			{
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_176(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_172(1);
			func_176(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

bool func_215()
{
	return Global_1315229;
}

void func_216(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101553.f_12906[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_217(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_2576656[iParam0 /*104*/].f_18 = uVar0;
	Global_2576656[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2576656[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2576656[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2576656[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2576656[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_218()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_219(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
		{
			Global_2577905 = iVar2;
		}
		iVar2++;
	}
	Global_2576656[Global_2577905 /*104*/].f_24 = 1;
}

int func_219(struct<6> Param0, struct<6> Param6)
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

int func_220()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2576656[iVar2 /*104*/].f_24 == 0)
		{
			Global_2577905 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2576656[iVar2 /*104*/].f_24 == 0 || Global_2576656[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_219(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
			{
				Global_2577905 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2577905 == 11)
	{
		return 0;
	}
	Global_2576656[Global_2577905 /*104*/].f_99[0] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[1] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[2] = 0;
	return 1;
}

void func_221()
{
	if (func_175(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
		Global_14443 = func_222();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69617)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_222()
{
	func_223();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_223()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_226(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_225(unk_0xA0081090911D13E5());
			if (func_224(iVar0) && (!func_175(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_224(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_224(int iParam0)
{
	return iParam0 < 3;
}

int func_225(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_226(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_226(int iParam0)
{
	if (func_224(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_227(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_214(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
		}
		return 1;
	}
	return 0;
}

int func_228(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_229(2, iParam1);
	return iParam0;
}

void func_229(int iParam0, var uParam1)
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

char* func_230(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_229(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFFC9DE7E93AEAE21(sParam0);
}

int func_231(int iParam0)
{
	int iVar0;
	
	iVar0 = func_234(iParam0);
	if (iVar0 == -1)
	{
		func_232(iParam0, 1);
		return 0;
	}
	Global_1353135[iVar0 /*5*/].f_4 = 1;
	return Global_1353135[iVar0 /*5*/].f_2;
}

void func_232(int iParam0, bool bParam1)
{
	if (!func_335(iParam0, 0, 1))
	{
		return;
	}
	if (func_234(iParam0) != -1)
	{
		return;
	}
	if (Global_1353298)
	{
		if (iParam0 == Global_1353298.f_1)
		{
			return;
		}
	}
	if (func_233(iParam0))
	{
		return;
	}
	if (Global_1353336 >= 32)
	{
		return;
	}
	Global_1353303[Global_1353336] = iParam0;
	Global_1353336++;
	if (bParam1)
	{
	}
}

int func_233(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353336)
	{
		if (Global_1353303[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_234(int iParam0)
{
	int iVar0;
	
	if (!func_335(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1353296 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353296)
	{
		if (Global_1353135[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x8AFD1D34F9842BB9(Global_1353135[iVar0 /*5*/].f_2) && unk_0x70FC8DD858474636(Global_1353135[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_235(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_235(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1353296)
	{
		return;
	}
	if (unk_0x8AFD1D34F9842BB9(Global_1353135[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1353135[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x17F6632C0BD7F15A(Global_1353135[iParam0 /*5*/].f_2), 64);
			unk_0xCF5D3892606E7989(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB360DA2AE12FCC02(Global_1353135[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1353296)
	{
		Global_1353135[iVar32 /*5*/] = { Global_1353135[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_236(&(Global_1353135[iVar32 /*5*/]));
	Global_1353296 = (Global_1353296 - 1);
}

void func_236(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_59();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA86CA03D9749EEB3())
	{
		uParam0->f_3 = unk_0x4B50AAB32FBE0483();
	}
}

void func_237()
{
	Global_1336446.f_40.f_9 = 4;
}

int func_238(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_237();
	bVar0 = false;
	return func_209(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_239(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_240(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_240(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_231(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
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
	sVar4 = func_230(sParam5, bParam6, &iVar3);
	uVar5 = func_228(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
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
		if (unk_0x08BA6DD398CA197C(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
	{
		bVar12 = func_248(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_242(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(uParam4, 0))
	{
		func_212();
	}
	func_241();
	func_211();
	func_210();
	return 1;
}

void func_241()
{
	Global_1336446.f_40.f_9 = 3;
}

int func_242(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_243(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_243(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
	{
	}
	func_221();
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
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_247() == 0)
	{
		func_245();
		return 0;
	}
	func_244(Global_16812);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/]), sParam1, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_25 = iParam7;
	Global_101553.f_12996[Global_16812 /*104*/].f_26 = uParam8;
	Global_101553.f_12996[Global_16812 /*104*/].f_29 = uParam9;
	Global_101553.f_12996[Global_16812 /*104*/].f_30 = uParam12;
	Global_101553.f_12996[Global_16812 /*104*/].f_31 = uParam11;
	Global_101553.f_12996[Global_16812 /*104*/].f_28 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x08BA6DD398CA197C(Global_2313, 10))
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_216(0);
		func_216(2);
		func_216(1);
	}
	else
	{
		func_221();
		switch (iParam16)
		{
			case 3:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_216(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_216(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_216(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_216(3);
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
		if (unk_0x08BA6DD398CA197C(Global_2313, 10))
		{
			Global_101553.f_12906[0 /*20*/].f_17 = 1;
			Global_101553.f_12906[1 /*20*/].f_17 = 1;
			Global_101553.f_12906[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101553.f_12906[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101553.f_12906[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101553.f_12906[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101553.f_12906[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_221();
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
			if (!func_215())
			{
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_176(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_172(1);
			func_176(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_244(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_101553.f_12996[iParam0 /*104*/].f_18 = uVar0;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_245()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
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
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_246(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_24 = 1;
}

int func_246(struct<6> Param0, struct<6> Param6)
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

int func_247()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
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
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0 || Global_101553.f_12996[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_246(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
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
	Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

int func_248(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 3;
	if (func_243(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_249(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	func_241();
	bVar0 = true;
	if (func_240(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_208(120000);
		return 1;
	}
	return 0;
}

int func_250(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x08BA6DD398CA197C(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x08BA6DD398CA197C(uParam4, 4))
	{
		bVar0 = func_265(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_256(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x08BA6DD398CA197C(uParam4, 3))
		{
			func_255(1);
		}
		if (unk_0x08BA6DD398CA197C(uParam4, 5))
		{
			func_254(1);
		}
		func_253();
		func_211();
		func_252();
		func_251();
		return 1;
	}
	return 0;
}

void func_251()
{
	Global_2489614 = 0;
}

void func_252()
{
	Global_1336446.f_57 = 1;
	Global_1336446.f_57.f_1 = 0;
}

void func_253()
{
	Global_1336446.f_40.f_9 = 1;
}

void func_254(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2315, 0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
	}
}

void func_255(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 20);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
	}
}

int func_256(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_264(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_257(sParam3, iParam4, bParam7);
}

int func_257(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x588D9B1F6CF36C3C(0);
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
					func_263();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE80581DE0ACF1F8A())
		{
			return 0;
		}
		if (func_294(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_262();
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
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
			if (bParam2)
			{
				func_221();
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
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_261())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
				}
			}
			if (func_260())
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
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
				{
					return 0;
				}
			}
			func_259();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_258();
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
		func_263();
	}
	return 0;
}

void func_258()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x588D9B1F6CF36C3C(0);
	Global_15745 = 1;
}

void func_259()
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
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
}

int func_260()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_261()
{
	int iVar0;
	int iVar1;
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
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

void func_262()
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

void func_263()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
		Global_15745 = 6;
		return;
	}
}

void func_264(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_265(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_264(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_257(sParam3, iParam4, bParam7);
}

int func_266(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (func_268(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_267();
		func_253();
		func_211();
		func_252();
		func_251();
		return 1;
	}
	return 0;
}

void func_267()
{
	Global_16763 = 0;
}

bool func_268(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_264(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_257(sParam3, iParam4, bParam8);
}

int func_269(var uParam0, char* sParam1, char* sParam2)
{
	if (func_271(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_270();
		func_211();
		func_252();
		return 1;
	}
	return 0;
}

void func_270()
{
	Global_1336446.f_40.f_9 = 2;
}

bool func_271(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_264(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_257(sParam2, iParam3, 0);
}

void func_272()
{
	Global_1336446.f_55 = Global_1336446.f_40.f_1;
	Global_1336446.f_55.f_1 = Global_1336446.f_40.f_10;
}

void func_273()
{
	Global_1336446.f_40 = 1;
}

bool func_274()
{
	return Global_1336446.f_40 == 1;
}

int func_275(int iParam0, int iParam1, int iParam2)
{
	if (!func_276(iParam0))
	{
		return 0;
	}
	if (Global_1336446.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1336446.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_276(int iParam0)
{
	if (!func_277())
	{
		return 0;
	}
	if (!Global_1336446.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_277()
{
	if (Global_1336446.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_278(var uParam0)
{
	if (func_282())
	{
		return 0;
	}
	if (func_193())
	{
		return 0;
	}
	if (func_281(0))
	{
		return 0;
	}
	if (Global_1312462.f_18 != 0)
	{
		return 0;
	}
	if (Global_1738544 || func_280())
	{
		return 0;
	}
	if (!unk_0x08BA6DD398CA197C(uParam0, 6))
	{
		if (func_279())
		{
			return 0;
		}
	}
	return 1;
}

bool func_279()
{
	return unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1352032);
}

int func_280()
{
	if (Global_2567282.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_281(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_282()
{
	return func_260();
}

int func_283(int iParam0, int iParam1, int iParam2)
{
	if (!func_193())
	{
		return 0;
	}
	return func_275(iParam0, iParam1, iParam2);
}

int func_284(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x3BB8D1C5FAAB25B3(&cVar0);
}

bool func_285()
{
	return Global_2487434.f_1;
}

int func_286()
{
	if (Global_1336634.f_2)
	{
		return 1;
	}
	return func_287();
}

bool func_287()
{
	return func_282();
}

void func_288(int iParam0)
{
	if (!unk_0x08BA6DD398CA197C(uLocal_237, 11))
	{
		switch (iParam0)
		{
			case 0:
				sLocal_422 = "FMA_KIL1";
				unk_0x88B0F0DC270164B7(&uLocal_237, 11);
				break;
			}
	}
}

int func_289(int iParam0)
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

void func_290(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_292(12, 3, 0);
			func_291(&uLocal_257, 1, 0, "Lester", 0, 1);
			break;
	}
}

void func_291(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(iParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(iParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(iParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(iParam2, 1);
			}
		}
	}
}

void func_292(int iParam0, int iParam1, bool bParam2)
{
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_221();
		if (iParam1 == 4)
		{
			Global_101553.f_32740[iParam0 /*29*/].f_12[0] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_12[1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_12[2] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[0] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101553.f_32740[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69617)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_293();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_293();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_293();
			}
		}
	}
}

void func_293()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0x754E61FE98961B39("");
		StringCopy(&cVar16, unk_0xFFC9DE7E93AEAE21(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0xFFC9DE7E93AEAE21("CELL_253");
		unk_0xDAB775768F2B11B1(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x754E61FE98961B39("CELL_255");
		unk_0xBDE6EEC5F6BDC060(&(Global_2923[1 /*6*/]));
		unk_0xDAB775768F2B11B1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x09C86C0C5CA26B1E(&Global_2313, 0);
}

bool func_294(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

int func_295(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x598A9E990F05F82C())
	{
		return 0;
	}
	if (func_300())
	{
		return 0;
	}
	if (!unk_0xB20CA7A3EE29687A())
	{
		return 0;
	}
	if (func_299())
	{
		return 0;
	}
	if (func_309())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_46(unk_0x0C1D3C552325765B(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_45(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (func_298())
	{
		return 0;
	}
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (Global_1573695)
	{
		return 0;
	}
	if (func_297())
	{
		return 0;
	}
	if (func_296())
	{
		return 0;
	}
	if (func_307())
	{
		return 0;
	}
	if (Global_68125)
	{
		return 0;
	}
	if (Global_2490098)
	{
		return 0;
	}
	return 1;
}

bool func_296()
{
	return Global_2442442.f_569;
}

bool func_297()
{
	return Global_2442442.f_721;
}

bool func_298()
{
	return Global_2432628.f_2489.f_585;
}

bool func_299()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

int func_300()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

int func_301()
{
	var uVar0;
	
	uVar0 = Global_1352331[func_134(-1)];
	if (unk_0x08BA6DD398CA197C(uVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_302(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x3CF373660FCFAFCE(Local_99.f_12[0]))
			{
				Global_2432628.f_3215.f_1[0] = unk_0x15F0E6D5AC2852F1(Local_99.f_12[0]);
			}
			if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
			{
				Global_2432628.f_3215.f_4[0] = unk_0x564EAE6038A81C07(Local_99.f_9[0]);
			}
			break;
	}
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x3CF373660FCFAFCE(Local_99.f_12[0]) && unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_304(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208, iParam0))
		{
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208), iParam0);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208, iParam0))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208), iParam0);
	}
}

int func_305(int iParam0)
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_306())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_306()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

bool func_307()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

int func_308()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_187;
}

bool func_309()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 0);
}

void func_310(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x0C1D3C552325765B();
	if (!iParam14 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Param0, 14, iParam14);
	}
}

int func_311(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
		{
			iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar1));
			if (func_335(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_312()
{
	if (Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 >= 5 && Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 < 6)
	{
		if (unk_0x08BA6DD398CA197C(Local_99.f_0, 4))
		{
			if (!unk_0x08BA6DD398CA197C(uLocal_237, 3))
			{
				if (func_335(Local_99.f_8, 0, 1))
				{
					func_313("FM_TGDM_KIL", Local_99.f_8, 0, 0, 0, 1, 1, 0);
				}
				unk_0x88B0F0DC270164B7(&uLocal_237, 3);
			}
		}
	}
}

int func_313(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x10B1B072E9514664(iParam1);
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		if ((iVar1 != -1 && unk_0x1504F110F2576375()) && iVar1 < 4)
		{
			if (Global_1626500.f_80279[iVar1] != -1)
			{
				unk_0x212C24688D441F9E(func_99(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x212C24688D441F9E(func_82(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x212C24688D441F9E(func_82(iParam1, -2, 1, 0));
		}
		unk_0xDA35BDB37E728640(func_80(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xBCD67D962E393B66(0, 1);
		}
		else
		{
			Global_2471194 = { func_126(iParam1) };
			if (unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194))
			{
				iVar18 = 0;
				if (unk_0x28C1B9853548BD8E(&(Global_2471124.f_22), "Leader") && Global_2471124.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2471124.f_21 > 0)
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
						Var2 = { func_314(&Var2) };
					}
					iVar0 = unk_0xF02E9753777E6C9C(iVar19, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar18, 0, Global_2471124, &Var2, Global_1316386, Global_1316387, Global_1316388);
				}
				else
				{
					iVar0 = unk_0x44B40096A9C3C3F9(iVar19, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar18, 0, Global_2471124, Global_1316386, Global_1316387, Global_1316388);
				}
			}
			else
			{
				iVar0 = unk_0xBCD67D962E393B66(0, 1);
			}
		}
		func_76(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_314(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_315()
{
	int iVar0;
	
	iVar0 = unk_0x848AF823A8EA3C62();
	if (iLocal_247 != Local_99.f_15)
	{
		iLocal_247 = Local_99.f_15;
		unk_0x23DFD22869618226(iLocal_247);
	}
	if (iLocal_248 != Local_99.f_16)
	{
		iLocal_248 = Local_99.f_16;
		unk_0xF2797029E839595C(iLocal_248);
	}
	if (func_335(unk_0x0C1D3C552325765B(), 0, 1))
	{
		if (!unk_0x08BA6DD398CA197C(Local_138[iVar0 /*3*/], 0))
		{
			if (Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 == 0)
			{
				if (func_308() == 0)
				{
					unk_0x88B0F0DC270164B7(&(Local_138[iVar0 /*3*/]), 0);
				}
			}
		}
		else if (unk_0x08BA6DD398CA197C(Local_138[iVar0 /*3*/], 0))
		{
			if ((func_46(unk_0x0C1D3C552325765B(), 1) || func_43(unk_0x0C1D3C552325765B())) || func_308() > 0)
			{
				func_37(&uLocal_238);
				unk_0x09C86C0C5CA26B1E(&(Local_138[iVar0 /*3*/]), 0);
			}
			else if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
				{
					if (!unk_0x08BA6DD398CA197C(uLocal_237, 7))
					{
						unk_0x88B0F0DC270164B7(&uLocal_237, 7);
						func_323();
					}
				}
				else if (unk_0x08BA6DD398CA197C(uLocal_237, 7))
				{
					unk_0x09C86C0C5CA26B1E(&uLocal_237, 7);
					if (!func_44(unk_0x0C1D3C552325765B(), 0))
					{
						func_321();
					}
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_138[iVar0 /*3*/], 3))
		{
			if (Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 > 3 && Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 < 6)
			{
				if (unk_0x08BA6DD398CA197C(Global_2432628.f_3215, 1))
				{
					unk_0x88B0F0DC270164B7(&(Local_138[iVar0 /*3*/]), 3);
				}
			}
		}
		if (Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 > 3)
		{
			if (!unk_0x08BA6DD398CA197C(Local_138[unk_0x848AF823A8EA3C62() /*3*/], 5))
			{
				if (func_320(Local_99.f_5))
				{
					unk_0x88B0F0DC270164B7(&(Local_138[unk_0x848AF823A8EA3C62() /*3*/]), 5);
				}
			}
			else if (!func_320(Local_99.f_5))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_138[unk_0x848AF823A8EA3C62() /*3*/]), 5);
			}
			if (!unk_0x08BA6DD398CA197C(Local_138[unk_0x848AF823A8EA3C62() /*3*/], 6))
			{
				if (func_317(Local_99.f_5))
				{
					unk_0x88B0F0DC270164B7(&(Local_138[unk_0x848AF823A8EA3C62() /*3*/]), 6);
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_138[unk_0x848AF823A8EA3C62() /*3*/], 8))
			{
				if (func_316())
				{
					unk_0x88B0F0DC270164B7(&(Local_138[unk_0x848AF823A8EA3C62() /*3*/]), 8);
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(uLocal_237, 13))
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_9[0]), 1, 0);
					unk_0x88B0F0DC270164B7(&uLocal_237, 13);
				}
			}
		}
	}
}

int func_316()
{
	if (unk_0x3CF373660FCFAFCE(Local_99.f_12[0]))
	{
		if (func_9(Local_99.f_12[0]))
		{
			if (unk_0x9E7343C699F331A6(unk_0x15F0E6D5AC2852F1(Local_99.f_12[0]), 0, 7000) || unk_0x9E7343C699F331A6(unk_0x15F0E6D5AC2852F1(Local_99.f_12[0]), 1, 40000))
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

int func_317(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (func_318(unk_0x564EAE6038A81C07(Local_99.f_9[0])))
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

int func_318(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (unk_0x352F748C85BFEDC5(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	if (unk_0x97209242946B9B9F(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	if (func_319())
	{
		if (unk_0xA6804C0975090D0A(unk_0x0C1D3C552325765B(), &uVar0))
		{
			if (unk_0x60F161681C368C4E(uVar0))
			{
				iVar1 = unk_0x90897FA118314142(uVar0);
				if (unk_0xD3FACCDA4D66AEAD(iVar1))
				{
					if (!unk_0x912AD5A10E7633F0(iVar1, 0))
					{
						if (unk_0x39FEE545B315414E(iVar1, 0))
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

bool func_319()
{
	return Global_1573842;
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(unk_0x564EAE6038A81C07(Local_99.f_9[0]), 1)) < 40000f)
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

void func_321()
{
	if (!Global_1312563)
	{
		return;
	}
	func_322();
}

void func_322()
{
	Global_1312563 = 0;
	StringCopy(&(Global_1312563.f_1), "", 24);
	Global_1312563.f_7 = 0;
}

void func_323()
{
	Global_1312563 = 1;
	StringCopy(&(Global_1312563.f_1), unk_0x367152330DB70D69(), 24);
	Global_1312563.f_7 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312563.f_1));
}

void func_324()
{
	switch (Local_99.f_6)
	{
		case 1:
			if (unk_0xD9E8CA806A80203D())
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_12[0]))
				{
					if (func_9(Local_99.f_12[0]))
					{
						if (!func_35(Local_99.f_9[0]))
						{
							if (unk_0x72550A6F2BC0E12B(unk_0x564EAE6038A81C07(Local_99.f_9[0]), unk_0x15F0E6D5AC2852F1(Local_99.f_12[0])))
							{
								if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_9[0]), -258271821) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_9[0]), -258271821) != 0)
								{
									unk_0x1F1428EF73399830(unk_0x564EAE6038A81C07(Local_99.f_9[0]), unk_0x15F0E6D5AC2852F1(Local_99.f_12[0]), 20f, 786603);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xD9E8CA806A80203D())
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_12[0]))
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
					{
						if (func_9(Local_99.f_12[0]))
						{
							if (!func_35(Local_99.f_9[0]))
							{
								if (unk_0x72550A6F2BC0E12B(unk_0x564EAE6038A81C07(Local_99.f_9[0]), unk_0x15F0E6D5AC2852F1(Local_99.f_12[0])))
								{
									if ((unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_9[0]), -258271821) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_9[0]), -258271821) != 0) || unk_0x08BA6DD398CA197C(Local_99.f_0, 9))
									{
										unk_0x1F1428EF73399830(unk_0x564EAE6038A81C07(Local_99.f_9[0]), unk_0x15F0E6D5AC2852F1(Local_99.f_12[0]), 30f, 786469);
										if (unk_0x08BA6DD398CA197C(Local_99.f_0, 9))
										{
											unk_0x09C86C0C5CA26B1E(&Local_99, 9);
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
			if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_9[0]), -828834893) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_9[0]), -828834893) != 0)
					{
						if (func_328(Local_99.f_9[0]))
						{
							if (unk_0xB480350E4250D92A(Local_99.f_9[0]))
							{
								unk_0x8474D2383AC8AF53(unk_0x564EAE6038A81C07(Local_99.f_9[0]), 0, 0);
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
			{
				if (!func_35(Local_99.f_9[0]))
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_9[0]), 1805844857) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_9[0]), 1805844857) != 0)
						{
							if (func_328(Local_99.f_9[0]))
							{
								if (unk_0xB480350E4250D92A(Local_99.f_9[0]))
								{
									unk_0x69E46DC398F0B2BD(unk_0x564EAE6038A81C07(Local_99.f_9[0]), unk_0xA0081090911D13E5(), 500f, -1, 0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_9[0]))
	{
		if ((Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 >= 5 && Local_138[unk_0x848AF823A8EA3C62() /*3*/].f_2 < 6) && !func_160(unk_0x0C1D3C552325765B(), 0, 0, 0))
		{
			func_325(Local_99.f_9[0], &Local_249, -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_57(&Local_249);
		}
	}
}

void func_325(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		if (func_327())
		{
			Global_2432628 = unk_0x0C1D3C552325765B();
		}
		if (bParam3)
		{
			func_326(unk_0x564EAE6038A81C07(uParam0), uParam1, 1, Global_2432628, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_326(unk_0x564EAE6038A81C07(uParam0), uParam1, -1, Global_2432628, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x16833EFAA58E63DB(*uParam1))
	{
		func_57(uParam1);
	}
}

int func_326(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x4A0FB18E33FE5805();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (!unk_0x86998240179B9048(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x2E0880CA20A96DBE(iParam0, 1);
			}
			else
			{
				unk_0x57C2F08BE587ABD2(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xE632D58AA6B26F2D(iParam0, iParam2);
			unk_0xB1EB57004481ED5D(iParam0, fParam6);
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				unk_0x420759DE4A6A9555(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		unk_0xC6458FBC206C61F2(iParam0, uParam4);
		unk_0x71CB3379ED1310DF(iParam0, uParam5);
		*uParam1 = unk_0x968B07E3B24F8761(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x77804F3DCBA01DB5(*uParam1, iParam8);
				}
				unk_0x940E74834C801A79("STRING");
				if (bParam10)
				{
					unk_0xDA35BDB37E728640(uParam7);
				}
				else
				{
					unk_0xBDE6EEC5F6BDC060(uParam7);
				}
				unk_0x61C3F79E9ECF289E(*uParam1);
				unk_0x420759DE4A6A9555(*uParam1, 7);
			}
		}
		if (!unk_0x08BA6DD398CA197C(uParam1->f_6, 2))
		{
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				if (!unk_0x509383441597090D(uParam7))
				{
					unk_0x940E74834C801A79("STRING");
					if (bParam10)
					{
						unk_0xDA35BDB37E728640(sParam7);
					}
					else
					{
						unk_0xBDE6EEC5F6BDC060(sParam7);
					}
					unk_0x61C3F79E9ECF289E(*uParam1);
				}
				unk_0x88B0F0DC270164B7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x39FEE545B315414E(iParam0, 0))
		{
			uParam1->f_1 = unk_0x165B5F1F7F703B2D(iParam0);
			if (!unk_0x08BA6DD398CA197C(uParam1->f_6, 3))
			{
				if (unk_0x16833EFAA58E63DB(uParam1->f_1))
				{
					unk_0x420759DE4A6A9555(uParam1->f_1, 7);
					unk_0x88B0F0DC270164B7(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x16833EFAA58E63DB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_327()
{
	return Global_1315206;
}

int func_328(var uParam0)
{
	if (unk_0x2042D9774DF3D324(uParam0))
	{
		return 1;
	}
	if (func_329(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_329(var uParam0)
{
	if (!unk_0xD9E8CA806A80203D())
	{
		return 0;
	}
	if (!unk_0x3CF373660FCFAFCE(uParam0))
	{
		return 0;
	}
	if (func_330(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_330(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		unk_0xDC64FA270C733B30(uParam0);
		return unk_0xB480350E4250D92A(uParam0);
	}
	return 0;
}

int func_331()
{
	return Local_99.f_1;
}

int func_332(int iParam0)
{
	return Local_138[iParam0 /*3*/].f_1;
}

void func_333()
{
	func_50();
	func_304(11, 0);
	func_166(12, 116);
	unk_0x09C86C0C5CA26B1E(&(Global_2432628.f_3215), 0);
	unk_0x09C86C0C5CA26B1E(&(Global_2432628.f_3215), 1);
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x848AF823A8EA3C62() > -1)
		{
			Local_138[unk_0x848AF823A8EA3C62() /*3*/] = 0;
		}
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0xD9E8CA806A80203D())
		{
			if (unk_0xD4F93C8B74AF0B32(Local_99.f_3))
			{
				unk_0xEADC755C72CA1A07(Local_99.f_3);
			}
			Local_99.f_3 = -1;
		}
	}
	if (unk_0x16833EFAA58E63DB(Global_1738520))
	{
		unk_0x0B57C567D698C373(&Global_1738520);
	}
	unk_0x09C86C0C5CA26B1E(&uLocal_237, 3);
	unk_0x09C86C0C5CA26B1E(&uLocal_237, 4);
	iLocal_236 = 0;
	if (unk_0x16833EFAA58E63DB(Local_249.f_0))
	{
		unk_0x0B57C567D698C373(&Local_249);
	}
	func_334();
}

void func_334()
{
	unk_0x78C587487CD40B92();
}

int func_335(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_336()
{
	bool bVar0;
	var uVar1;
	
	func_343(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_342())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_341())
	{
		return 1;
	}
	if (func_340(157))
	{
		if (!func_339())
		{
			return 1;
		}
	}
	if (func_340(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_337() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_337()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_337()
{
	switch (func_338())
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

int func_338()
{
	return Global_25185;
}

bool func_339()
{
	return Global_2442442.f_576;
}

int func_340(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_341()
{
	return Global_2451777;
}

bool func_342()
{
	return Global_2442442.f_571;
}

void func_343(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_344(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
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

void func_344(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_335(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_345(uVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_345(int iParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(iParam0))
		{
			if (unk_0x7DF3EE9F5A826186(iParam0))
			{
				unk_0x7B17650F15A8876D(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(iParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_346()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_347(struct<20> Param0)
{
	func_350(func_351(Param0.f_0), Param0);
	func_349(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_99, 23);
	unk_0xCCA45C9E00D2BC01(&Local_138, 97);
	unk_0x401559486BCA4D9B(0);
	if (!func_348())
	{
		func_333();
	}
	unk_0x88B0F0DC270164B7(&(Global_2432628.f_3215), 0);
	unk_0x09C86C0C5CA26B1E(&(Global_2432628.f_3215), 1);
}

int func_348()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 0;
		}
		if (unk_0x7DEEE0ED76EAAD72())
		{
			return 1;
		}
		if (func_342())
		{
			return 0;
		}
		if (func_340(155))
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

int func_349(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_334();
			}
			else
			{
				return 0;
			}
		}
		if (!func_327())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_334();
					}
					else
					{
						return 0;
					}
				}
				if (func_342())
				{
					if (!bParam2)
					{
						func_334();
					}
					else
					{
						return 0;
					}
				}
				if (func_340(155))
				{
					if (!bParam2)
					{
						func_334();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBB81832DD12D2E73())
			{
				if (!bParam2)
				{
					func_334();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF30F4D3B526CD5C2();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (!bParam2)
			{
				func_334();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBB81832DD12D2E73())
	{
		if (!bParam2)
		{
			func_334();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_350(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_334();
	}
	unk_0x786FDD765D4157F4(uParam0, 0, Param1.f_16);
}

int func_351(int iParam0)
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
		
		case 74:
			return 32;
		
		case 73:
			return 32;
		
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
			return 8;
		
		case 81:
			return 32;
		
		case 82:
			return 8;
		
		case 83:
			return 8;
		
		case 91:
			return 8;
		
		case 84:
			return 8;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 8;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 92:
			return 32;
		
		case 93:
			return 32;
		
		case 94:
			return 32;
		
		case 95:
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
		
		case 96:
			return 32;
		
		case 97:
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
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 32;
		
		case 103:
			return 32;
		
		case 101:
			return 32;
		
		case 102:
			return 32;
		
		case 106:
			return 32;
		
		case 107:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 110:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 113:
			return 32;
		
		case 114:
			return 2;
		
		case 119:
			return 1;
		
		case 115:
			return 2;
		
		case 116:
			return 4;
		
		case 117:
			return 2;
		
		case 118:
			return 2;
		
		case 100:
			return 1;
		
		case 120:
			return 2;
		
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return 0;
		
		case 130:
			return 1;
		
		case 127:
			return 4;
		
		case 128:
			return 16;
		
		case 129:
			return 32;
		
		default:
	}
	return 0;
}

