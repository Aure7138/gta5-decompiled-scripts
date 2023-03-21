#region Local Var
	char* sLocal_0 = NULL;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	struct<3> Local_5 = { 0, 0, 0 } ;
	var uLocal_8 = 28;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = -1;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 1;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56[39] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<3> Local_109 = { 0, 0, 0 } ;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	var uLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146[143] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	var uLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	int iLocal_322 = 0;
	bool bLocal_323 = 0;
	int iLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	bool bLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	int iLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	bool bLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	struct<2> Local_401 = { 0, 0 } ;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	int iLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	int iLocal_413 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.46.49";
	bLocal_42 = true;
	iLocal_113 = -1;
	iLocal_114 = -1;
	iLocal_119 = -1;
	iLocal_120 = -1;
	iLocal_129 = -1;
	iLocal_130 = -1;
	iLocal_132 = -1;
	iLocal_133 = -1;
	iLocal_134 = -1;
	iLocal_135 = -1;
	iLocal_136 = -1;
	iLocal_143 = -1;
	iLocal_331 = -1;
	iLocal_336 = -1;
	iLocal_337 = -1;
	iLocal_343 = -1;
	iLocal_344 = -1;
	iLocal_349 = -1;
	iLocal_400 = -1;
	unk_0x2F3193E06C2EFF44(0);
	unk_0x42B65DEEF2EDF2A1(0);
	unk_0x5341E3E598550C46();
	Global_1315789 = unk_0xFEB6EEC0545AF7AA(sLocal_0);
	iVar0 = unk_0xFD34717937104F1C() + 10000;
	while (unk_0xFD34717937104F1C() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		func_586(&uLocal_1);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x8F1A9FE6D91AAFEB();
}

void func_1()
{
	func_544(&uLocal_43);
	if (unk_0x4C9BACA8D249CB13() && Global_2456479.f_3)
	{
		func_538();
		func_535();
		func_520(&uLocal_8);
		bLocal_340 = true;
		func_519();
		func_518();
		func_515();
		func_513();
		func_512();
		func_501();
		func_500();
		func_491();
		func_490();
		func_486();
		func_483();
		func_482();
		func_479();
		func_478();
		func_469();
		func_466();
		func_465();
		func_462();
		func_457();
		func_456();
		func_455();
		func_454();
		func_450();
		func_448();
		func_439();
		func_437();
		func_434();
		func_433();
		func_432();
		func_431();
		func_382();
		func_379();
		func_378();
		func_376();
		func_372();
		func_370();
		func_369();
		func_367();
		func_361();
		func_355();
		func_353();
		func_351();
		func_348();
		func_347();
		func_345();
		func_344();
		func_343();
		func_312();
		func_310();
		func_281();
		func_277();
		func_276();
		func_275();
		func_274();
		func_272();
		func_270();
		func_264();
		func_260();
		func_259();
		func_258();
		func_256();
		func_254();
		func_252();
		func_237();
		if (unk_0x47C01C0E6F4C1D06())
		{
			func_231();
		}
		func_229();
		func_227();
		func_225();
		func_223();
		func_221();
		func_219();
		func_216();
		if (unk_0xD8B89B387D170E27())
		{
			func_215();
			func_214();
			func_210();
			func_209();
			func_206();
			func_201();
			func_200();
			func_199();
			func_198();
			func_197();
			func_195();
		}
		else
		{
			if (iLocal_137)
			{
				iLocal_137 = 0;
			}
			if (iLocal_138)
			{
				iLocal_138 = 0;
			}
			if (iLocal_390)
			{
				iLocal_390 = 0;
			}
			if (iLocal_400 > -1)
			{
				unk_0xB4442316D0B880FD(iLocal_400);
				iLocal_400 = -1;
			}
			iLocal_398 = 0;
			iLocal_397 = 0;
			iLocal_399 = 0;
			if (iLocal_396)
			{
				iLocal_396 = 0;
			}
		}
	}
	func_193();
	func_192();
	func_191();
	func_182();
	func_180();
	func_168();
	func_165();
	func_164();
	func_133();
	func_132();
	func_131();
	func_127();
	func_122();
	func_120();
	func_119();
	func_115();
	func_112();
	func_107();
	func_106();
	func_105();
	func_104();
	func_95();
	func_94();
	func_93();
	func_90();
	func_89();
	func_88();
	func_86();
	func_83();
	func_82();
	if (unk_0x7DD04831D0FC44CA())
	{
		func_33();
		func_27();
		func_25();
	}
	func_16();
	func_15();
	func_6();
	func_2();
}

void func_2()
{
	if (unk_0x05EFB6A616B6FADE(Global_1668658, 12))
	{
		if (!func_4() || func_3())
		{
			unk_0xFA57C719261AA55D(&Global_1668658, 12);
			unk_0xFA57C719261AA55D(&(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_341), 29);
			Global_1668658.f_2462 = 0;
			Global_1668658.f_2463 = -1;
			Global_1668658.f_2464 = 0;
			unk_0xFA57C719261AA55D(&(Global_1668658.f_2), 4);
			unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_1), 5);
			unk_0xFA57C719261AA55D(&(Global_1668658.f_2), 22);
		}
	}
}

bool func_3()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_196 != 0;
}

int func_4()
{
	if (func_5() == 0)
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	return Global_1312466.f_18;
}

void func_6()
{
	if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_1, 7) || unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309, 8))
	{
		unk_0xD0F5726B351557F4();
		unk_0x8C8D0900658C8AC2();
		if (!unk_0x4EAEDDFEDE3BEE19())
		{
			unk_0x9EA8CBEA7355649E(0, 200);
			unk_0x9EA8CBEA7355649E(2, 200);
		}
		unk_0xD481A812073CCF02(0, 200, 1);
		unk_0xD481A812073CCF02(2, 200, 1);
		func_14(&uLocal_411, 0, 0);
	}
	if (func_13(&uLocal_411))
	{
		if ((!func_12(&uLocal_411, 5000, 0) || !unk_0x3A83743561B4F70C()) && !func_8(unk_0xD4E735F4B6A956AC()))
		{
			unk_0xD0F5726B351557F4();
			unk_0x8C8D0900658C8AC2();
			if (!unk_0x4EAEDDFEDE3BEE19())
			{
				unk_0x9EA8CBEA7355649E(0, 200);
				unk_0x9EA8CBEA7355649E(2, 200);
			}
			unk_0xD481A812073CCF02(0, 200, 1);
			unk_0xD481A812073CCF02(2, 200, 1);
		}
		else if ((func_12(&uLocal_411, 5000, 0) && unk_0x3A83743561B4F70C()) || func_8(unk_0xD4E735F4B6A956AC()))
		{
			func_7(&uLocal_411);
		}
	}
}

void func_7(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_8(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_11())
			{
				return func_9(Global_2423801[iParam0 /*413*/].f_309.f_4) == 5;
			}
		}
	}
	return 0;
}

int func_9(int iParam0)
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
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
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
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
	}
	return -1;
}

int func_10(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x58E3CCF930D23BD5(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_11()
{
	return -1;
}

int func_12(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_14(uParam0, bParam2, 0);
	if (unk_0x4C9BACA8D249CB13() && !bParam2)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_13(var uParam0)
{
	return uParam0->f_1;
}

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4C9BACA8D249CB13() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xFFCC7EBF88BDEE54();
			}
			else
			{
				*uParam0 = unk_0x7546CD2A62C6DBB6();
			}
		}
		else
		{
			*uParam0 = unk_0xFD34717937104F1C();
		}
		uParam0->f_1 = 1;
	}
}

void func_15()
{
	if (unk_0xD1ABB20CFF127CCC() && !unk_0xBE079F709C76E132())
	{
		if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (!func_3())
			{
				if (unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()))
				{
					if (((unk_0xD73B1037F6BD4B90(2, 188) || unk_0xD73B1037F6BD4B90(2, 187)) || unk_0x55D3DD553C0E44E6(2, 196) < -25) || unk_0x55D3DD553C0E44E6(2, 196) > 25)
					{
						if (iLocal_349 == -1)
						{
							iLocal_349 = unk_0xFD34717937104F1C() + 10000;
							iLocal_350 = 0;
						}
					}
					else if (!iLocal_350)
					{
						iLocal_350 = 1;
					}
				}
				else if (!iLocal_350)
				{
					iLocal_350 = 1;
				}
			}
			else if (!iLocal_350)
			{
				iLocal_350 = 1;
			}
		}
		else if (!iLocal_350)
		{
			iLocal_350 = 1;
		}
	}
	else if (!iLocal_350)
	{
		iLocal_350 = 1;
	}
	if (iLocal_350)
	{
		if (iLocal_349 != -1)
		{
			iLocal_349 = -1;
			iLocal_350 = 0;
		}
	}
	else if (iLocal_349 != -1)
	{
		if (iLocal_349 < unk_0xFD34717937104F1C())
		{
			unk_0xDFCC2872C0A03340(0);
			iLocal_349 = -1;
		}
	}
}

void func_16()
{
	if (Global_2456479.f_3)
	{
		if (((func_24() || func_23()) || func_22()) && (func_21() || func_20()))
		{
			func_19();
			func_18();
			func_17();
		}
	}
}

void func_17()
{
	Global_1654972 = 0;
}

void func_18()
{
	Global_2448386.f_746 = 0;
}

void func_19()
{
	Global_2448386.f_744 = 0;
}

var func_20()
{
	return Global_2448386.f_595;
}

var func_21()
{
	return Global_2448386.f_744;
}

var func_22()
{
	return Global_2448386.f_582;
}

var func_23()
{
	return Global_2448386.f_746;
}

var func_24()
{
	return Global_2449169.f_2844.f_34;
}

void func_25()
{
	if (Global_1312371 == 1)
	{
		if (Global_1312503 == 22)
		{
			Global_1312503 = 20;
			iLocal_342 = 1;
			func_26(168);
			func_26(167);
		}
	}
}

void func_26(int iParam0)
{
	var uVar0;
	
	if (Global_1383835.f_22 >= 20)
	{
		return;
	}
	uVar0 = iParam0;
	Global_1383835.f_23[Global_1383835.f_22] = uVar0;
	Global_1383835.f_22++;
}

void func_27()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if ((bLocal_340 || func_32() == 0) || Global_1312857)
	{
		if (iLocal_346)
		{
			func_31();
		}
		else if (iLocal_348)
		{
			bVar0 = (func_32() == 999 && func_30() == 999);
			if (!bVar0)
			{
				if (func_29())
				{
					iLocal_345 = 0;
					iLocal_346 = 0;
					iLocal_344 = -1;
					Global_2458208 = 1;
					iLocal_339 = 1;
					func_28(168);
					func_28(167);
				}
				else if (func_32() == 0 && func_30() != -1)
				{
					iLocal_346 = 1;
				}
				else
				{
					Global_2458208 = 1;
					iLocal_345 = 1;
				}
				iLocal_348 = 0;
			}
		}
		else if ((func_30() != 0 || Global_1312857) && !iLocal_345)
		{
			if (iLocal_344 == -1)
			{
				iLocal_344 = unk_0x5E0F2F352218B916();
			}
			else if (!Global_2458208)
			{
				iVar1 = (unk_0x5E0F2F352218B916() - iLocal_344);
				bVar2 = (func_32() == 999 && func_30() == 999);
				if (iVar1 > 90)
				{
					if ((func_32() == 0 && func_30() != -1) || ((Global_1312857 && func_30() == -1) && func_32() == 999))
					{
						iLocal_346 = 1;
					}
					else if (bVar2)
					{
						iLocal_348 = 1;
					}
					else if ((func_32() == 0 && func_30() == -1) && Global_1312857)
					{
						iLocal_346 = 1;
					}
					else if (func_32() == 0 && !bLocal_340)
					{
						iLocal_346 = 1;
					}
					else
					{
						Global_2458208 = 1;
						iLocal_345 = 1;
					}
					iLocal_344 = -1;
				}
				else if (unk_0x5E0F2F352218B916() != iLocal_344)
				{
					iLocal_344 = unk_0x5E0F2F352218B916();
				}
			}
		}
		else if (func_30() == 0)
		{
			if (!Global_1312857 && iLocal_345)
			{
				iLocal_345 = 0;
			}
			iLocal_344 = -1;
		}
	}
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1383835.f_22 <= 0)
	{
		return;
	}
	iVar1 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_1383835.f_22)
	{
		if (Global_1383835.f_23[iVar0] == iVar1)
		{
			Global_1383835.f_23[iVar0] = 0;
		}
		iVar0++;
	}
}

int func_29()
{
	if (((func_30() == -1 && !unk_0x47C3DC461C758C29()) && func_4()) && unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
	{
		return 1;
	}
	return 0;
}

int func_30()
{
	return Global_25459;
}

void func_31()
{
	if (iLocal_347)
	{
		if (func_29() && unk_0x3A83743561B4F70C())
		{
			iLocal_345 = 0;
			iLocal_346 = 0;
			iLocal_347 = 0;
			Global_2458208 = 1;
			iLocal_339 = 1;
			iLocal_344 = -1;
			func_28(168);
			func_28(167);
		}
	}
	else if (func_30() == 0 && !Global_1312857)
	{
		unk_0x5DEF814991FF7421(1, 0, 0);
		func_26(168);
		iLocal_347 = 1;
	}
	else if (func_30() == -1 && func_29())
	{
		iLocal_345 = 0;
		iLocal_346 = 0;
		iLocal_344 = -1;
		func_28(168);
		func_28(167);
	}
}

int func_32()
{
	return Global_25460;
}

void func_33()
{
	bool bVar0;
	int iVar1;
	
	if (iLocal_341)
	{
		if (Global_2445070.f_9 == 7)
		{
			iLocal_341 = 0;
		}
		else if (Global_1312791 != 13)
		{
			if (Global_2445070.f_1 == 1)
			{
				func_37();
				iLocal_342 = 1;
				func_26(168);
				func_26(167);
				unk_0xEC247C2197F98888(1);
			}
			else
			{
				Global_2445070.f_9 = 7;
				iLocal_342 = 1;
				func_26(168);
				func_26(167);
				unk_0xEC247C2197F98888(1);
			}
			iLocal_341 = 0;
		}
	}
	else if ((Global_1312791 == 4 || Global_1312791 == 13) && Global_2445070.f_9 != 7)
	{
		bVar0 = false;
		if (iLocal_343 == -1)
		{
			iLocal_343 = unk_0x5E0F2F352218B916();
		}
		else
		{
			iVar1 = (unk_0x5E0F2F352218B916() - iLocal_343);
			if (iVar1 > 30)
			{
				bVar0 = true;
			}
			else
			{
				iLocal_343 = unk_0x5E0F2F352218B916();
			}
		}
		if (bVar0)
		{
			if (Global_1312791 == 13)
			{
				iLocal_341 = 1;
			}
			else if (Global_2445070.f_1 == 1)
			{
				func_37();
				iLocal_342 = 1;
				func_26(168);
				func_26(167);
				unk_0xEC247C2197F98888(1);
			}
			else
			{
				Global_2445070.f_9 = 7;
				iLocal_342 = 1;
				func_26(168);
				func_26(167);
				unk_0xEC247C2197F98888(1);
			}
			iLocal_343 = -1;
		}
	}
	else if (iLocal_343 != -1)
	{
		iLocal_343 = -1;
	}
	if (iLocal_342 && func_29())
	{
		func_28(168);
		func_28(167);
		iLocal_342 = 0;
		Global_2458208 = 1;
		iLocal_339 = 1;
		unk_0xEC247C2197F98888(0);
	}
	func_34();
}

void func_34()
{
	if (iLocal_338)
	{
		if (Global_2458208 == 0)
		{
			Global_2458208 = 1;
		}
		iLocal_338 = 0;
	}
	if (iLocal_339)
	{
		if (unk_0xFBCB8B1C66936084())
		{
			iLocal_339 = 0;
		}
		else
		{
			func_35();
		}
	}
}

void func_35()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(1))
	{
		iVar1 = unk_0x5712B9353A8F6573(1, iVar0);
		if (iVar1 == 168)
		{
			if (!unk_0xFBCB8B1C66936084())
			{
				if (Global_2458208 == 0)
				{
					Global_2458208 = 1;
				}
				iLocal_338 = 1;
			}
		}
		iVar0++;
	}
	if (!iLocal_338)
	{
		if (func_36())
		{
			if (Global_2458208 == 0)
			{
				Global_2458208 = 1;
				iLocal_339 = 0;
				iLocal_338 = 1;
			}
		}
	}
}

bool func_36()
{
	return unk_0x05EFB6A616B6FADE(Global_1312423, 0);
}

void func_37()
{
	func_81(1);
	func_78();
	func_58();
	if (unk_0x775BD24A17C4FD36() || func_57())
	{
		unk_0xDFCC2872C0A03340(0);
		unk_0x9662BE461F9FDF9E(0);
	}
	func_56(0);
	func_54();
	if (func_53())
	{
		func_52(0);
		func_50(31);
		func_39(5);
	}
	else
	{
		func_52(0);
		func_38(-1);
		func_50(32);
		func_39(57);
	}
	unk_0x135C61E339DABBAC(1);
}

void func_38(int iParam0)
{
	Global_25460 = iParam0;
}

void func_39(int iParam0)
{
	var uVar0;
	char* sVar1;
	int iVar2;
	
	uVar0 = func_49();
	if (Global_1312857)
	{
		sVar1 = func_48(iParam0);
		iVar2 = unk_0xFEB6EEC0545AF7AA(sVar1);
		func_47(&Global_2460442, 1, 0);
		unk_0xA69E4DBDECE33DE2(iVar2, 1, uVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_40();
	}
	Global_1312792 = iParam0;
}

void func_40()
{
	if (Global_2458104)
	{
		if (func_42())
		{
			unk_0x9662BE461F9FDF9E(0);
			func_41();
		}
	}
}

void func_41()
{
	if (Global_2458101)
	{
		if (!Global_2458100)
		{
			Global_2458100 = 1;
			Global_2458106 = unk_0xFD34717937104F1C();
			Global_2458105 = 1;
		}
	}
}

int func_42()
{
	if (Global_2449169.f_6346 && Global_2458101)
	{
		if (func_43())
		{
			if (func_4() && !unk_0x71364F510A1CB69F())
			{
				if (Global_2449169.f_6366 == 122)
				{
					return 1;
				}
				if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_68.f_2, 26))
				{
					return 1;
				}
				if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_68.f_2, 27))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_43()
{
	if (func_46(unk_0xD4E735F4B6A956AC()) && unk_0x05EFB6A616B6FADE(Global_1668658.f_3315, 22))
	{
		return 0;
	}
	if (Global_1315670)
	{
		return 0;
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		return 0;
	}
	if (func_45())
	{
		return 0;
	}
	if ((Global_2458102 && func_44()) || Global_2458102 == 0)
	{
		return 1;
	}
	if (Global_2458103)
	{
		if (Global_2449169.f_6366 == 122)
		{
			return 1;
		}
	}
	return 0;
}

bool func_44()
{
	return unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12);
}

bool func_45()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386.f_2, 11);
}

int func_46(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_9(Global_2423801[iParam0 /*413*/].f_309.f_4) == 13;
			}
		}
	}
	return 0;
}

void func_47(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x4C9BACA8D249CB13() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xFFCC7EBF88BDEE54();
		}
		else
		{
			*uParam0 = unk_0x7546CD2A62C6DBB6();
		}
	}
	else
	{
		*uParam0 = unk_0xFD34717937104F1C();
	}
	uParam0->f_1 = 1;
}

char* func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 28:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 29:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 30:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 31:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 33:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 34:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 35:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 37:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 38:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 39:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 45:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 46:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 47:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 48:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 50:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 51:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 44:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 53:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 52:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 54:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 55:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 57:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 61:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 62:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 63:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 64:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 65:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 66:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		default:
	}
	return "";
}

var func_49()
{
	return Global_1312792;
}

void func_50(int iParam0)
{
	var uVar0;
	
	uVar0 = func_51();
	Global_1312791 = iParam0;
}

var func_51()
{
	return Global_1312791;
}

void func_52(int iParam0)
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		unk_0xD56584987F6EA23F("LOCK_RIGHTMOUSE_CLICK");
		unk_0x233A5B4A35140C6B(iParam0);
		unk_0x271C1332F482646C();
	}
}

bool func_53()
{
	return Global_1312826;
}

void func_54()
{
	if (func_55())
	{
		unk_0x1822D89124A221F7();
	}
	else
	{
		unk_0xA6BC88CB93F7C58E();
	}
}

bool func_55()
{
	return Global_1573282.f_4;
}

void func_56(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B756FF7161B9AB0("PlayMenuMusic", 1);
	}
	else if (bParam0 == 0)
	{
		unk_0x0B756FF7161B9AB0("PlayMenuMusic", 0);
	}
}

var func_57()
{
	return Global_2458113;
}

void func_58()
{
	Global_1312737 = 0;
	func_77(0);
	func_76(0);
	func_75(0);
	func_74(0);
	func_73(0);
	func_72(0);
	func_71(0, -1);
	func_70(0);
	func_69(0);
	func_68(0);
	func_67(0);
	func_70(0);
	func_66(0);
	func_65(0);
	func_64(0);
	func_63(0);
	func_62(0);
	func_61(0);
	func_60(0);
	func_59(0);
}

void func_59(int iParam0)
{
	Global_2460429 = iParam0;
}

void func_60(int iParam0)
{
	Global_1312748 = iParam0;
}

void func_61(int iParam0)
{
	Global_1312747 = iParam0;
}

void func_62(int iParam0)
{
	Global_2460499 = iParam0;
}

void func_63(int iParam0)
{
	Global_1312742 = iParam0;
}

void func_64(int iParam0)
{
	Global_2459725 = iParam0;
}

void func_65(int iParam0)
{
	Global_2458190 = iParam0;
}

void func_66(int iParam0)
{
	Global_2459352 = iParam0;
}

void func_67(int iParam0)
{
	Global_2459728 = iParam0;
}

void func_68(int iParam0)
{
	Global_1312749 = iParam0;
}

void func_69(int iParam0)
{
	Global_2459726 = iParam0;
}

void func_70(int iParam0)
{
	Global_2459731 = iParam0;
}

void func_71(int iParam0, int iParam1)
{
	Global_2460521 = iParam1;
	Global_2460520 = iParam0;
}

void func_72(int iParam0)
{
	Global_1312745 = iParam0;
}

void func_73(int iParam0)
{
	Global_2460385 = iParam0;
}

void func_74(int iParam0)
{
	Global_2460386 = iParam0;
}

void func_75(int iParam0)
{
	Global_1312743 = iParam0;
}

void func_76(int iParam0)
{
	Global_1312856 = iParam0;
}

void func_77(int iParam0)
{
	Global_1312740 = iParam0;
}

void func_78()
{
	func_80();
	func_79();
	unk_0xFA57C719261AA55D(&Global_1312423, 2);
	unk_0xFA57C719261AA55D(&Global_1312423, 4);
	unk_0xFA57C719261AA55D(&Global_1312423, 5);
	unk_0xFA57C719261AA55D(&Global_1312423, 6);
	Global_1312440 = 0;
}

void func_79()
{
	unk_0xFA57C719261AA55D(&Global_1312423, 1);
}

void func_80()
{
	unk_0xFA57C719261AA55D(&Global_1312423, 0);
}

void func_81(int iParam0)
{
	Global_1312863 = iParam0;
}

void func_82()
{
	switch (Global_1655047)
	{
		case 11:
		case 10:
			unk_0xD0F5726B351557F4();
			if ((unk_0x817B152F7462D506() % 30) == 0)
			{
			}
			break;
	}
}

void func_83()
{
	struct<3> Var0;
	
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (func_84(unk_0xD4E735F4B6A956AC()))
		{
			if (!iLocal_410)
			{
				iLocal_409 = Global_262145.f_22789;
				iLocal_410 = 1;
			}
			Var0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
			if (((unk_0x499324B3EF19C288(Var0, -1381.524f, -477.9127f, 71.0821f, 1) < 10f || unk_0x499324B3EF19C288(Var0, -1572.022f, -573.55f, 107.5629f, 1) < 10f) || unk_0x499324B3EF19C288(Var0, -139.216f, -632.184f, 167.8604f, 1) < 10f) || unk_0x499324B3EF19C288(Var0, -72.7126f, -816.2345f, 242.4259f, 1) < 10f)
			{
				Global_1684995 = 0;
				if (Global_262145.f_22789 == 0)
				{
					Global_262145.f_22789 = 1;
				}
			}
			else if (Global_262145.f_22789 != iLocal_409)
			{
				Global_262145.f_22789 = iLocal_409;
			}
		}
	}
}

int func_84(int iParam0)
{
	if (func_85(Global_1589747[iParam0 /*790*/].f_273.f_24))
	{
		return 1;
	}
	return 0;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

void func_86()
{
	if (func_8(unk_0xD4E735F4B6A956AC()) && !func_87(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			if ((((((unk_0xDF0ADAD7E584090D(2, 199) || unk_0xDF0ADAD7E584090D(2, 200)) || unk_0xD73B1037F6BD4B90(2, 199)) || unk_0xD73B1037F6BD4B90(2, 200)) || unk_0x53E955948D35BDB5(2, 199)) || unk_0x53E955948D35BDB5(2, 200)) || unk_0xD1ABB20CFF127CCC())
			{
				if (!iLocal_408)
				{
					iLocal_408 = 1;
					func_14(&uLocal_406, 0, 0);
				}
			}
		}
	}
	if (iLocal_408)
	{
		if (func_13(&uLocal_406))
		{
			if (!func_12(&uLocal_406, 10000, 0))
			{
				if (unk_0x4EAEDDFEDE3BEE19() && unk_0xEC5714A5E961B06E() == 163296038)
				{
					unk_0x5DEF814991FF7421(1, 0, 0);
					func_7(&uLocal_406);
					iLocal_408 = 0;
				}
			}
			else
			{
				func_7(&uLocal_406);
				iLocal_408 = 0;
			}
		}
	}
}

int func_87(int iParam0)
{
	if (iParam0 != func_11() && func_10(iParam0, 1, 1))
	{
		return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_309, 3);
	}
	return 0;
}

void func_88()
{
	if (Global_1668658.f_2463 == 81)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1668658.f_2, 22))
		{
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				unk_0xCB482EF95FAE4D73(unk_0xA19140A5C42D8715(), 0, 0);
			}
		}
	}
}

void func_89()
{
	if (!unk_0x05EFB6A616B6FADE(Global_1686214, 3))
	{
		unk_0x2BCFB39E86340DAA(&Global_1686214, 3);
	}
	if (!unk_0x05EFB6A616B6FADE(Global_1686214, 2))
	{
		unk_0x2BCFB39E86340DAA(&Global_1686214, 2);
	}
	if (unk_0x05EFB6A616B6FADE(Global_1686214, 5))
	{
		unk_0xFA57C719261AA55D(&Global_1686214, 5);
	}
	if (!unk_0x05EFB6A616B6FADE(Global_1686214, 6))
	{
		unk_0x2BCFB39E86340DAA(&Global_1686214, 6);
	}
}

void func_90()
{
	if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_98 == 8 && !(func_92(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_4, 13) && func_91()))
	{
		if (func_8(unk_0xD4E735F4B6A956AC()))
		{
			if (!iLocal_382)
			{
				iLocal_382 = 1;
			}
		}
	}
	if ((iLocal_382 && !func_4()) && func_5() != 1)
	{
		unk_0xE8B3104D1CB25CDC(unk_0xA19140A5C42D8715(), 291.9964f, 179.742f, 103.2897f, 0, 0, 1);
		iLocal_382 = 0;
	}
}

bool func_91()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386.f_3, 8);
}

bool func_92(int iParam0, int iParam1)
{
	return func_9(iParam0) == iParam1;
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_2437022.f_1052[iVar0]))
		{
			unk_0xD35967F259E26F3C(Global_2437022.f_1052[iVar0]);
		}
		iVar0++;
	}
}

void func_94()
{
	if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309, 25))
		{
			iLocal_381 = 1;
		}
		else if (iLocal_381)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
			iLocal_381 = 0;
		}
	}
}

void func_95()
{
	if (func_103() || ((unk_0x05EFB6A616B6FADE(Global_1668658.f_2, 22) && !func_4()) && Global_1668658.f_2462))
	{
		if (!iLocal_378)
		{
			iLocal_378 = 1;
			func_14(&uLocal_379, 0, 0);
		}
	}
	if (iLocal_378 && !func_103())
	{
		if ((!func_4() || unk_0x05EFB6A616B6FADE(Global_2448386, 20)) || (unk_0x05EFB6A616B6FADE(Global_1668658.f_2, 22) && Global_1668658.f_2462))
		{
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				unk_0xCB482EF95FAE4D73(unk_0xA19140A5C42D8715(), 0, 0);
			}
			func_99(Global_1668658.f_2463);
			func_96();
			iLocal_378 = 0;
			func_7(&uLocal_379);
		}
	}
	if (iLocal_378)
	{
		if (func_13(&uLocal_379))
		{
			if (func_12(&uLocal_379, 10000, 0))
			{
				iLocal_378 = 0;
				func_7(&uLocal_379);
			}
		}
	}
}

void func_96()
{
	Global_1668658.f_2463 = -1;
	Global_1668658.f_2464 = 0;
	Global_1668658.f_2465 = { 0f, 0f, 0f };
	Global_1668658.f_2468 = 0f;
	Global_1668658.f_2470 = 0;
	Global_1668658.f_2462 = 0;
	Global_1668658.f_2472 = -1;
	Global_1668658.f_2474 = 0;
	Global_1668658.f_2471 = 0;
	func_98(0);
	if (func_103())
	{
		func_97(0);
		unk_0xFA57C719261AA55D(&Global_1668658, 7);
	}
}

void func_97(bool bParam0)
{
	if (bParam0)
	{
		unk_0x2BCFB39E86340DAA(&Global_1668658, 6);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_1668658, 6);
	}
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_1668658.f_3314, 2))
		{
			unk_0x2BCFB39E86340DAA(&(Global_1668658.f_3314), 2);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_1668658.f_3314, 2))
	{
		unk_0xFA57C719261AA55D(&(Global_1668658.f_3314), 2);
	}
}

void func_99(int iParam0)
{
	if (!func_102(iParam0))
	{
		return;
	}
	func_100(0, iParam0);
	func_100(1, iParam0);
	func_100(2, iParam0);
	func_100(3, iParam0);
	func_100(4, iParam0);
	func_100(10, iParam0);
	Global_1668658.f_1665[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1668658.f_2035[iParam0] = 0f;
	if (Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_12 == iParam0)
	{
		Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_12 = -1;
		unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309), 2);
		unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309), 1);
	}
	if (unk_0x05EFB6A616B6FADE(Global_1668658.f_2, 22))
	{
		unk_0xFA57C719261AA55D(&(Global_1668658.f_2), 22);
	}
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_101(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_1647[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_1653[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_1659[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_2159[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_2165[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_2405[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_2411[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_2417[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_2437[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_2443[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_2171[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_2423[iVar0]), iVar1);
			return;
			break;
		
		case 12:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_2429[iVar0]), iVar1);
			return;
			break;
		
		case 13:
			unk_0xFA57C719261AA55D(&(Global_1668658.f_2180[iVar0]), iVar1);
			return;
			break;
	}
}

void func_101(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

int func_102(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 123)
	{
		return 1;
	}
	return 0;
}

bool func_103()
{
	return unk_0x05EFB6A616B6FADE(Global_1668658, 6);
}

void func_104()
{
	if (!func_10(unk_0xD4E735F4B6A956AC(), 1, 1) || Global_2405070.f_2663)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1668658, 15))
		{
			unk_0xFA57C719261AA55D(&Global_1668658, 15);
		}
		if (unk_0x05EFB6A616B6FADE(Global_1668658.f_3309, 6))
		{
			unk_0xFA57C719261AA55D(&(Global_1668658.f_3309), 6);
		}
	}
}

void func_105()
{
	if ((!func_4() && !unk_0x4EAEDDFEDE3BEE19()) && unk_0x3A83743561B4F70C())
	{
		if (unk_0x05EFB6A616B6FADE(Global_1668658, 15))
		{
			unk_0xFA57C719261AA55D(&Global_1668658, 15);
		}
	}
	if (!func_8(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x3A83743561B4F70C() && unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0x05EFB6A616B6FADE(Global_1668658, 15))
			{
				if (!func_13(&uLocal_376))
				{
					func_14(&uLocal_376, 0, 0);
				}
				else if (func_12(&uLocal_376, 5000, 0))
				{
					unk_0xFA57C719261AA55D(&Global_1668658, 15);
					func_7(&uLocal_376);
				}
			}
		}
	}
}

void func_106()
{
	if (((func_4() && !unk_0x47C3DC461C758C29()) && unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) && !Global_105016)
	{
		if (func_30() == -1 || func_30() == 999)
		{
			if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == joaat("mp_m_freemode_01") || unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == joaat("mp_f_freemode_01"))
			{
				if (!iLocal_371)
				{
					if (!func_13(&uLocal_372))
					{
						func_14(&uLocal_372, 0, 0);
					}
					else if (func_12(&uLocal_372, 500, 0))
					{
						iLocal_371 = 1;
						func_7(&uLocal_372);
					}
				}
			}
		}
		else if (func_30() == 0)
		{
			if (iLocal_371)
			{
				unk_0x5DEF814991FF7421(1, 0, 0);
				iLocal_371 = 0;
			}
		}
	}
	else if (func_13(&uLocal_372))
	{
		func_7(&uLocal_372);
	}
}

void func_107()
{
	if (func_111(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			if (func_110(unk_0xA19140A5C42D8715(), 0) != -1)
			{
				if (func_109(unk_0xD4E735F4B6A956AC()) && !func_108(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_26))
				{
					if (!func_13(&uLocal_374))
					{
						func_14(&uLocal_374, 0, 0);
					}
					else if (func_12(&uLocal_374, 2500, 0))
					{
						Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_26 = func_11();
						Global_2524719.f_4883.f_2 = -1;
						func_7(&uLocal_374);
					}
				}
				else
				{
					func_7(&uLocal_374);
				}
			}
			if (unk_0xD3C4AB5E628133C1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), joaat("oppressor2")))
			{
				if (unk_0x42230CB5B84CC08B(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)) && !Global_1677633)
				{
					unk_0xC19EDC1D7179164C(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0, 1, 0);
				}
				unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 429, 1);
				unk_0xD481A812073CCF02(0, 72, 1);
				unk_0xD481A812073CCF02(0, 71, 1);
			}
		}
		else
		{
			func_7(&uLocal_374);
		}
	}
	else
	{
		func_7(&uLocal_374);
	}
}

int func_108(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_11())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_109(int iParam0)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_26 != func_11())
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (unk_0x5D7DFE2058701942(iParam0, iParam1))
		{
			uVar0 = unk_0xCAEB6CE71A2C7212(iParam0, iParam1);
			if (unk_0xDC5D81351D6A4DDB(uVar0))
			{
				iVar1 = unk_0xE251DF9395C4E1C4(unk_0x8F474E419F56E48D(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x588F5E48C78F1C73(iVar0, iVar3, 0))
					{
						if (unk_0xB0D49A1F9F054602(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_111(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_9(Global_2423801[iParam0 /*413*/].f_309.f_4) == 4;
			}
		}
	}
	return 0;
}

void func_112()
{
	if (func_114(unk_0xD4E735F4B6A956AC()))
	{
		if (!iLocal_330)
		{
			iLocal_330 = 1;
		}
		Global_1663728 = 1;
	}
	else if (iLocal_330)
	{
		iLocal_330 = 0;
		Global_1663728 = 0;
	}
	if (!func_46(unk_0xD4E735F4B6A956AC()))
	{
		if (func_114(unk_0xD4E735F4B6A956AC()))
		{
			func_113(0);
		}
	}
}

void func_113(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196, 22))
		{
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196), 22);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196, 22))
	{
		unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196), 22);
	}
}

bool func_114(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_196, 22);
}

void func_115()
{
	int iVar0;
	int iVar1;
	
	if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_196 == 24)
	{
		if (!iLocal_368)
		{
			if (func_118(Global_4456448.f_130782))
			{
				iVar0 = 0;
				while (iVar0 < 18)
				{
					iVar1 = 0;
					while (iVar1 < 32)
					{
						unk_0x2BCFB39E86340DAA(&(Global_4456448.f_53228[iVar0]), iVar1);
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < 93)
					{
						unk_0xFA57C719261AA55D(&(Global_4456448.f_53247[iVar0 /*4*/][func_117(iVar1)]), func_116(iVar1));
						iVar1++;
					}
					unk_0xFA57C719261AA55D(&(Global_4456448.f_53228[Global_2445084[4]]), 31);
					iVar0++;
				}
				unk_0xFA57C719261AA55D(&(Global_4456448.f_53227), 31);
			}
			iLocal_368 = 1;
		}
	}
	else if (iLocal_368)
	{
		iLocal_368 = 0;
	}
}

int func_116(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_117(iParam0) * 31);
}

int func_117(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_262145.f_6340[iVar1] == 2)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5785[iVar1])
				{
					if (iParam0 == Global_262145.f_5019[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

void func_119()
{
	if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 201.2196f, 5174.217f, -89.99727f, 198.8149f, 5175.969f, -87.49727f, 1.75f, 0, 1, 0))
		{
			if ((unk_0xD1ABB20CFF127CCC() || unk_0x607776744A243309()) || unk_0x71364F510A1CB69F())
			{
				Global_262145.f_24786 = 1;
				if (!iLocal_367)
				{
					iLocal_367 = 1;
				}
			}
		}
		else if (iLocal_367)
		{
			Global_262145.f_24786 = 0;
			iLocal_367 = 0;
		}
	}
}

void func_120()
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_24 != -1 || Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_4 != -1)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			if (Global_2437022.f_3973 != 0)
			{
				if ((((((((((unk_0x05EFB6A616B6FADE(Global_2437022.f_3973, 0) || unk_0x05EFB6A616B6FADE(Global_2437022.f_3973, 1)) || unk_0x05EFB6A616B6FADE(Global_2437022.f_3973, 2)) || unk_0x05EFB6A616B6FADE(Global_2437022.f_3973, 3)) || unk_0x05EFB6A616B6FADE(Global_2437022.f_3973, 4)) || unk_0x05EFB6A616B6FADE(Global_2437022.f_3973, 5)) || unk_0x05EFB6A616B6FADE(Global_2437022.f_3973, 6)) || unk_0x05EFB6A616B6FADE(Global_2437022.f_3973, 7)) || unk_0x05EFB6A616B6FADE(Global_2437022.f_3973, 11)) || unk_0x05EFB6A616B6FADE(Global_2437022.f_3973, 12)) || unk_0x05EFB6A616B6FADE(Global_2437022.f_3973, 15))
				{
					bVar0 = true;
				}
			}
			if (unk_0x3CAC2741CC1A631F(&(Global_17367.f_1), "BB_FIRST_0") || unk_0x3CAC2741CC1A631F(&(Global_17367.f_1), "PEG_TITLE"))
			{
				if (func_121())
				{
					bVar0 = true;
				}
			}
			if (!unk_0xFD028954156A8598())
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (!iLocal_365)
		{
			iLocal_357 = Global_1663725;
			iLocal_358 = Global_1678545;
			iLocal_359 = Global_1678546;
			iLocal_360 = Global_1677624;
			iLocal_361 = Global_1678554;
			iLocal_362 = Global_1678555;
			iLocal_363 = Global_1678556;
			iLocal_364 = Global_1685668;
			Global_1663725 = 1;
			Global_1678545 = 1;
			Global_1678546 = 1;
			Global_1677624 = 1;
			Global_1678554 = 1;
			Global_1678555 = 1;
			Global_1678556 = 1;
			Global_1685668 = 1;
			iLocal_365 = 1;
		}
	}
	else if (iLocal_365)
	{
		Global_1663725 = iLocal_357;
		Global_1678545 = iLocal_358;
		Global_1678546 = iLocal_359;
		Global_1677624 = iLocal_360;
		Global_1678554 = iLocal_361;
		Global_1678555 = iLocal_362;
		Global_1678556 = iLocal_363;
		Global_1685668 = iLocal_364;
		iLocal_357 = 0;
		iLocal_358 = 0;
		iLocal_359 = 0;
		iLocal_360 = 0;
		iLocal_361 = 0;
		iLocal_362 = 0;
		iLocal_363 = 0;
		iLocal_364 = 0;
		iLocal_365 = 0;
	}
}

bool func_121()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

void func_122()
{
	var uVar0[15];
	int iVar16;
	int iVar17;
	
	if (func_46(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x3DF0D4C48D463CA8())
		{
			if (!iLocal_353)
			{
				iLocal_353 = 1;
			}
		}
		else if (iLocal_353)
		{
			iLocal_353 = 0;
		}
		if (unk_0xD4E735F4B6A956AC() == Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_7)
		{
			if (!iLocal_354)
			{
				iLocal_354 = 1;
			}
		}
		else if (iLocal_354)
		{
			iLocal_354 = 0;
		}
	}
	if (func_46(unk_0xD4E735F4B6A956AC()) && !unk_0x3DF0D4C48D463CA8())
	{
		if (unk_0xD4E735F4B6A956AC() == Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_7)
		{
			if (unk_0x3CAC2741CC1A631F(&(Global_17367.f_4690), "CMOD_SEL") && unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_195, 9))
			{
				if (!iLocal_352)
				{
					iLocal_352 = 1;
				}
			}
			if (func_126(unk_0xD4E735F4B6A956AC()))
			{
				if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					if (((unk_0x4EAEDDFEDE3BEE19() && unk_0xEC5714A5E961B06E() == 15890625) && unk_0xEC5714A5E961B06E() != 0) || ((unk_0x4EAEDDFEDE3BEE19() && unk_0xEC5714A5E961B06E() == 358620163) && unk_0xEC5714A5E961B06E() != 0))
					{
						func_125(0);
					}
				}
			}
			if (iLocal_352)
			{
				if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_195, 9))
				{
					if (!func_13(&uLocal_355))
					{
						func_14(&uLocal_355, 0, 0);
					}
					else if (func_12(&uLocal_355, 10000, 0))
					{
						func_7(&uLocal_355);
						iLocal_352 = 0;
					}
					return;
				}
				else
				{
					func_7(&uLocal_355);
					iLocal_352 = 0;
				}
			}
			if ((((((!func_126(unk_0xD4E735F4B6A956AC()) && !unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196, 22)) && !unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_195, 9)) && !unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_195, 11)) && !unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_270, 28)) && unk_0x3A83743561B4F70C()) || !func_4())
			{
				iVar16 = unk_0xA4C9135FF4C7C4D2(unk_0xA19140A5C42D8715(), &uVar0);
				iVar17 = 0;
				while (iVar17 < iVar16)
				{
					if (((unk_0xDC5D81351D6A4DDB(uVar0[iVar17]) && unk_0xFAC06EE780B57279(uVar0[iVar17])) && !unk_0x7112137033807390(uVar0[iVar17], 0)) && !unk_0xD3C4AB5E628133C1(uVar0[iVar17], joaat("rcbandito")))
					{
						if ((((unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(uVar0[iVar17], 1), 204.6f, 5180.8f, -89.7f, 1) < 3.5f || unk_0x54F6F5A823224519(uVar0[iVar17], 208.924f, 5180.386f, -89.99876f, 172.1084f, 5180.182f, -85.07375f, 6.5f, 0, 1, 0)) || (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(uVar0[iVar17], 1), 204.6f, 5180.8f, -89.7f, 1) > 2.5f && unk_0x2BDB423A5E45639B(uVar0[iVar17]) == joaat("Arena_Mod_Rm"))) && func_123() == 0) || ((unk_0x54F6F5A823224519(uVar0[iVar17], 172.3511f, 5216.716f, 10.07497f, 172.4333f, 5163.599f, 13.82492f, 8.75f, 0, 1, 0) || unk_0x54F6F5A823224519(uVar0[iVar17], 190.5412f, 5186.568f, 9.678089f, 167.7094f, 5187.524f, 14.97465f, 11.75f, 0, 1, 0)) && func_123() != 0))
						{
							if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), uVar0[iVar17], 0))
							{
								unk_0xCB482EF95FAE4D73(unk_0xA19140A5C42D8715(), 0, 0);
							}
							iLocal_351 = uVar0[iVar17];
						}
					}
					iVar17++;
				}
			}
		}
	}
	else if (!func_46(unk_0xD4E735F4B6A956AC()))
	{
		if (iLocal_352)
		{
			func_7(&uLocal_355);
			iLocal_352 = 0;
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_351))
	{
		if (unk_0xB540EEBB14C48518(iLocal_351))
		{
			unk_0x1F7948851FB36E88(iLocal_351, 0, 1);
			unk_0x4C842FAB634AC89E(&iLocal_351);
		}
		else
		{
			unk_0x39926DD5354848E1(iLocal_351);
		}
	}
	if (!func_4())
	{
		if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196, 22))
		{
			unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196), 22);
		}
	}
}

int func_123()
{
	return func_124(unk_0xD4E735F4B6A956AC());
}

var func_124(int iParam0)
{
	return unk_0x493DDADBC14A1274(Global_2423801[iParam0 /*413*/].f_309.f_3, 28, 31);
}

void func_125(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196, 23))
		{
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196), 23);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196, 23))
	{
		unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196), 23);
	}
}

bool func_126(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_196, 23);
}

void func_127()
{
	int iVar0;
	int iVar1;
	
	if (func_46(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			if (func_110(unk_0xA19140A5C42D8715(), 0) != -1)
			{
				if (((func_130(1) || unk_0xBE079F709C76E132()) || func_128()) || unk_0xD1ABB20CFF127CCC())
				{
					unk_0xCB482EF95FAE4D73(unk_0xA19140A5C42D8715(), 0, 0);
				}
				iVar0 = unk_0xB0D49A1F9F054602(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), -1, 0);
				if (!unk_0x7112137033807390(iVar0, 0))
				{
					iVar1 = unk_0x77065AD41B64E946(iVar0);
				}
				if (func_10(iVar1, 1, 1) && iVar1 != unk_0xD4E735F4B6A956AC())
				{
					if (unk_0x05EFB6A616B6FADE(Global_2423801[iVar1 /*413*/].f_195, 9))
					{
						if (unk_0x4EAEDDFEDE3BEE19())
						{
							unk_0xCB482EF95FAE4D73(unk_0xA19140A5C42D8715(), 0, 0);
						}
					}
				}
			}
		}
	}
}

int func_128()
{
	if (unk_0x05EFB6A616B6FADE(iLocal_329, 0))
	{
		return 1;
	}
	if (func_129())
	{
		unk_0x2BCFB39E86340DAA(&iLocal_329, 2);
		return 1;
	}
	if (unk_0x05EFB6A616B6FADE(iLocal_329, 2))
	{
		if ((!unk_0xD73B1037F6BD4B90(2, 202) && !unk_0xDF0ADAD7E584090D(2, 202)) && !unk_0x4E6A396CA4DB68F6(2, 202))
		{
			unk_0xFA57C719261AA55D(&iLocal_329, 2);
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_129()
{
	return Global_1684995;
}

bool func_130(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

void func_131()
{
	if (unk_0x05EFB6A616B6FADE(Global_96622, 0))
	{
		if (((!func_4() || ((unk_0x4EAEDDFEDE3BEE19() && unk_0xEC5714A5E961B06E() == 15890625) && unk_0xEC5714A5E961B06E() != 0)) || ((unk_0x4EAEDDFEDE3BEE19() && unk_0xEC5714A5E961B06E() == 163296038) && unk_0xEC5714A5E961B06E() != 0)) || ((unk_0x4EAEDDFEDE3BEE19() && unk_0xEC5714A5E961B06E() == -333360189) && unk_0xEC5714A5E961B06E() != 0))
		{
			Global_262145.f_24787 = 1;
			Global_1668658.f_16 = 0;
			if (!iLocal_324)
			{
				iLocal_324 = 1;
			}
		}
		if (iLocal_324)
		{
			if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
			{
				if (!unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 201.2196f, 5174.217f, -89.99727f, 198.8149f, 5175.969f, -87.49727f, 1.75f, 0, 1, 0))
				{
					if (!func_13(&uLocal_325))
					{
						func_14(&uLocal_325, 0, 0);
					}
					else if (func_12(&uLocal_325, 3000, 0))
					{
						unk_0xFA57C719261AA55D(&Global_96622, 0);
						func_7(&uLocal_325);
					}
				}
				else
				{
					func_7(&uLocal_325);
				}
			}
		}
	}
	else if (iLocal_324)
	{
		Global_262145.f_24787 = 0;
		func_7(&uLocal_325);
		iLocal_324 = 0;
	}
}

void func_132()
{
	if (unk_0x3CAC2741CC1A631F(&(Global_17367.f_1), "FMMCCMENU_1T"))
	{
		if (Global_4456448.f_76665 == 59)
		{
			unk_0xD481A812073CCF02(2, 201, 1);
		}
	}
}

void func_133()
{
	int iVar0;
	
	if ((Global_1574393 && Global_4456448.f_53223 == 15) && (Global_4456448.f_55584 == 10 || Global_4456448.f_55584 == 10))
	{
		iVar0 = 0;
		if (!Global_1312782 && Global_1312784)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (func_10(unk_0x1483A8AE554B8B2B(iVar0), 0, 1))
				{
					if ((unk_0x1483A8AE554B8B2B(iVar0) != unk_0xD4E735F4B6A956AC() && !func_159(unk_0x1483A8AE554B8B2B(iVar0))) && !func_158(unk_0x1483A8AE554B8B2B(iVar0), 0))
					{
						if (unk_0xDCD85F41DF16BC05(iVar0))
						{
							unk_0x812A3DA372F04113(iVar0, 0, 1, 0);
							unk_0x971D929360CDAB66(iVar0, 0, 255);
						}
						else if (unk_0x42CD80ACBA11F242())
						{
							if (!unk_0xD99708728DB885FF(iVar0))
							{
								func_134(unk_0x1483A8AE554B8B2B(iVar0), iVar0);
							}
						}
					}
					else if (func_159(unk_0x1483A8AE554B8B2B(iVar0)) || func_158(unk_0x1483A8AE554B8B2B(iVar0), 0))
					{
						if (unk_0xDCD85F41DF16BC05(iVar0))
						{
							unk_0x971D929360CDAB66(iVar0, 0, 0);
						}
					}
				}
				iVar0++;
			}
		}
	}
}

int func_134(int iParam0, int iParam1)
{
	struct<13> Var0;
	struct<35> Var13;
	int iVar48;
	int iVar49;
	int iVar50;
	var uVar51;
	int iVar52;
	int iVar53;
	
	if (func_155(15, iParam0) == 0)
	{
		func_153(iParam1, iParam0);
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1378308.f_65, iParam1) && unk_0xDCD85F41DF16BC05(iParam1))
	{
		return 1;
	}
	if (!unk_0xDCD85F41DF16BC05(iParam1))
	{
		if (!Global_2533837.f_3.f_99[iParam1])
		{
			if (unk_0xB61391F88AC365CC(iParam1))
			{
				Var0 = { func_152(iParam0) };
				if (func_151(&Var0))
				{
					Var13 = { func_148(&Var0) };
					Global_1378308[iParam1 /*2*/] = { Var13.f_17 };
					if (func_147(&Var0))
					{
						iVar48 = 1;
					}
					else
					{
						iVar48 = 0;
					}
					if (func_146(&Var0))
					{
						iVar49 = 1;
					}
					else
					{
						iVar49 = 0;
					}
				}
				else
				{
					StringCopy(&(Global_1378308[iParam1 /*2*/]), "", 8);
				}
				unk_0xC6A4490A9C87C8C5(iParam1, unk_0xB330C43B9B7B1724(iParam0), iVar49, iVar48, &(Var13.f_17), Var13.f_30, Global_1314014, Global_1314015, Global_1314016);
				uVar51 = func_140(iParam0, -2, 0, 0);
				iVar50 = 0;
				while (iVar50 <= 29)
				{
					if (iVar50 != 1 && func_139(iVar50))
					{
						if (iVar50 == 2)
						{
							unk_0x0AF7D8875C47A38B(iParam1, uVar51);
							unk_0x971D929360CDAB66(iParam1, 2, 255);
						}
						else
						{
							unk_0x3C9523340395B56E(iParam1, iVar50, uVar51);
						}
						if ((iVar50 != 2 && iVar50 != 0) && iVar50 != 17)
						{
							unk_0x971D929360CDAB66(iParam1, iVar50, 190);
						}
					}
					iVar50++;
				}
				unk_0x3C9523340395B56E(iParam1, 1, 1);
				unk_0x971D929360CDAB66(iParam1, 0, 255);
				unk_0x971D929360CDAB66(iParam1, 11, 255);
				Global_1378308.f_166[iParam1] = iParam1;
				unk_0xFA57C719261AA55D(&(Global_1378308.f_65), iParam1);
			}
		}
	}
	else if (!unk_0x05EFB6A616B6FADE(Global_1378308.f_65, iParam1))
	{
		unk_0x2BCFB39E86340DAA(&(Global_1378308.f_65), iParam1);
		if (unk_0xDCD85F41DF16BC05(iParam1))
		{
			iVar53 = func_140(iParam0, -2, 0, 0);
			iVar52 = 0;
			while (iVar52 <= 29)
			{
				if (iVar52 != 1 && func_139(iVar52))
				{
					if (iVar52 == 2)
					{
						unk_0x0AF7D8875C47A38B(iParam1, iVar53);
						unk_0x971D929360CDAB66(iParam1, 2, 255);
					}
					else
					{
						unk_0x3C9523340395B56E(iParam1, iVar52, iVar53);
					}
					if ((iVar52 != 2 && iVar52 != 0) && iVar52 != 17)
					{
						if (func_138() && !func_135())
						{
							unk_0x971D929360CDAB66(iParam1, iVar52, 255);
						}
						else
						{
							unk_0x971D929360CDAB66(iParam1, iVar52, 190);
						}
					}
				}
				iVar52++;
			}
			if (unk_0x3CAC2741CC1A631F(&(Global_1378308[unk_0xD4E735F4B6A956AC() /*2*/]), &(Global_1378308[iParam1 /*2*/])))
			{
				unk_0x3C9523340395B56E(iParam1, 1, 13);
			}
			else
			{
				unk_0x3C9523340395B56E(iParam1, 1, 1);
			}
			unk_0x971D929360CDAB66(iParam1, 0, 255);
			unk_0x971D929360CDAB66(iParam1, 11, 255);
		}
	}
	return 0;
}

int func_135()
{
	if (!func_137() && func_136())
	{
		return 1;
	}
	return 0;
}

bool func_136()
{
	return (Global_1574393 && unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12));
}

int func_137()
{
	if (Global_4456448.f_131902 == 1 || Global_4456448.f_131902 == 2)
	{
		return 1;
	}
	return 0;
}

int func_138()
{
	if (func_44() && unk_0xD8B89B387D170E27())
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

int func_140(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_141(iParam0, unk_0xD4E735F4B6A956AC(), iParam1, bParam2, bParam3);
}

int func_141(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (iVar0 != -1)
	{
		if (func_145(iParam1, iParam0, iVar0))
		{
			return func_144();
		}
		else
		{
			return func_142(iParam1, 1, iVar0, bParam4);
		}
	}
	else if (Global_1574393 || Global_1574384)
	{
		if (iParam0 == iParam1 || (Global_1574393 == 1 && Global_1574403 == 0))
		{
			return func_144();
		}
		else
		{
			return func_142(iParam1, 1, iVar0, bParam4);
		}
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_142(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_143(iVar0, iParam2))
			{
				return func_144();
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						switch (iParam2)
						{
							case 1:
								return 28;
							
							case 2:
								return 29;
							
							case 3:
								return 30;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam2)
						{
							case 0:
								return 28;
							
							case 2:
								return 29;
							
							case 3:
								return 30;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam2)
						{
							case 0:
								return 28;
							
							case 1:
								return 29;
							
							case 3:
								return 30;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 0:
								return 28;
							
							case 1:
								return 29;
							
							case 2:
								return 30;
							
							default:
						}
						break;
					}
				}
		}
		return 28;
	}
	else
	{
		return func_144();
	}
	return func_144();
}

int func_143(int iParam0, int iParam1)
{
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
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 0);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 1);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 2);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 4);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 5);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 6);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 8);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 9);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 10);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 12);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 13);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 14);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_144()
{
	return 118;
}

bool func_145(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2)
	{
		if (unk_0xE46ECB9FD23D3264(iParam0) == -1 && unk_0xE46ECB9FD23D3264(iParam1) == -1)
		{
			return 0;
		}
		return unk_0xE46ECB9FD23D3264(iParam0) == unk_0xE46ECB9FD23D3264(iParam1);
	}
	else
	{
		if (unk_0xE46ECB9FD23D3264(iParam0) == -1 && iParam2 == -1)
		{
			return 0;
		}
		return unk_0xE46ECB9FD23D3264(iParam0) == iParam2;
	}
	return unk_0xE46ECB9FD23D3264(iParam0) == iParam2;
}

int func_146(var uParam0)
{
	struct<22> Var0;
	
	if (unk_0x65A878D380D59179())
	{
		if (unk_0xD1832FEBE50B1AB1())
		{
			if (unk_0xE0B3F7A8017F6425(uParam0))
			{
				unk_0xE087FDE0E2FA8ADF(&Var0, 35, uParam0);
				if (Var0.f_21 == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_147(var uParam0)
{
	struct<21> Var0;
	
	if (unk_0x65A878D380D59179())
	{
		if (unk_0xD1832FEBE50B1AB1() && unk_0xE0B3F7A8017F6425(uParam0))
		{
			unk_0xE087FDE0E2FA8ADF(&Var0, 35, uParam0);
			if (Var0.f_20 == 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<35> func_148(var uParam0)
{
	struct<35> Var0;
	
	if (func_149(uParam0))
	{
		return Global_1312889[unk_0xD4E735F4B6A956AC() /*35*/];
	}
	unk_0xE087FDE0E2FA8ADF(&Var0, 35, uParam0);
	return Var0;
}

int func_149(var uParam0)
{
	struct<13> Var0;
	
	Var0 = { func_150() };
	if (unk_0xC9C6FA9E6066F480(uParam0, &Var0))
	{
		return 1;
	}
	return 0;
}

struct<13> func_150()
{
	struct<13> Var0;
	
	unk_0xC74FEEC21D486D18(&Var0, 13);
	return Var0;
}

int func_151(var uParam0)
{
	if (unk_0x65A878D380D59179())
	{
		if (unk_0xD1832FEBE50B1AB1() && unk_0xE0B3F7A8017F6425(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_152(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

void func_153(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1378308.f_99[iVar0 /*33*/][iParam0] != 0)
		{
			if (unk_0xDCD85F41DF16BC05(iParam0))
			{
				unk_0xEA7D66C871373EA5(iParam0, 0);
			}
			Global_1378308.f_99[iVar0 /*33*/][iParam0] = 0;
			func_154(iParam1);
		}
		iVar0++;
	}
}

void func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		Global_1368245.f_241.f_34[iVar0 /*33*/][iParam0] = 0;
		iVar0++;
	}
}

bool func_155(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_241.f_68[func_157(iParam0) /*33*/][iParam1], func_156(iParam0));
}

int func_156(int iParam0)
{
	return (iParam0 % 32);
}

int func_157(int iParam0)
{
	return (iParam0 / 32);
}

int func_158(int iParam0, int iParam1)
{
	if (unk_0xDE26AC7E7C308E75("MPBitset", 3))
	{
		if (unk_0xAEAF59799C2F26E4(unk_0xC75DB7A64F3796EC(iParam0), "MPBitset"))
		{
			if (unk_0x05EFB6A616B6FADE(unk_0xBB4F5216F3FCA8EA(unk_0xC75DB7A64F3796EC(iParam0), "MPBitset"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_159(int iParam0)
{
	if (func_161(iParam0, 0))
	{
		return 1;
	}
	if (func_160())
	{
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			return 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_160()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

bool func_161(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_162(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			bVar0 = unk_0xE46ECB9FD23D3264(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_162(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_163();
	}
	if (Global_1312837[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_163()
{
	return Global_1312736;
}

void func_164()
{
	if (unk_0x8B1574454E8C2421(joaat("fm_race_creator")) > 0 || unk_0x8B1574454E8C2421(joaat("fm_deathmatch_creator")) > 0)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12) && Global_4456448.f_146778 != 0)
		{
			Global_4456448.f_146778 = 0;
		}
	}
}

void func_165()
{
	int iVar0;
	int iVar1;
	
	if (Global_1315785 == 1)
	{
		if (Global_1312881 > 8)
		{
			if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
			{
				if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine"), 0))
				{
					iVar0 = unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine"));
					iVar1 = func_166(9531, -1, 0);
					if (iVar0 < iVar1)
					{
						unk_0x3CB081F41F423663(unk_0xA19140A5C42D8715(), unk_0x7353FDD251A636E0(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine")), iVar1);
					}
				}
			}
		}
	}
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_167(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_167(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_163();
		if (iVar1 > -1)
		{
			Global_2535232 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2535232 = 1;
		}
	}
	return iVar0;
}

void func_168()
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	struct<8> Var9;
	int iVar17;
	
	if (unk_0x4C9BACA8D249CB13())
	{
		iVar0 = 0;
		while (iVar0 < unk_0x5D7B2A77420FF19E(1))
		{
			iVar1 = unk_0x5712B9353A8F6573(1, iVar0);
			if (iVar1 == 163)
			{
				if (unk_0x8866A4E42CDA3EF1(1, iVar0, &Var2, 7))
				{
					Var9.f_1 = Var2.f_0;
					Var9.f_2 = Var2.f_1;
					Var9.f_5 = Var2.f_3;
					Var9.f_7 = Var2.f_5;
					if ((Var9.f_1 == joaat("pickup_ammo_bullet_mp") || Var9.f_1 == joaat("pickup_weapon_raycarbine")) || Var9.f_1 == joaat("pickup_weapon_rayminigun"))
					{
						if (Var2.f_1 > Global_262145.f_25632 || Var2.f_1 > Global_262145.f_25633)
						{
							iLocal_290 = 1;
							iLocal_291 = 1;
							iLocal_296 = unk_0xFD34717937104F1C();
						}
						if (Global_1312415 != joaat("weapon_rayminigun") && Global_1312415 != joaat("weapon_raycarbine"))
						{
							if (Var2.f_1 > func_178(Global_1312415))
							{
								iLocal_292 = 1;
								iLocal_296 = unk_0xFD34717937104F1C();
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (func_177())
		{
			iVar17 = 0;
			if (iLocal_290 == 1 || iLocal_291 == 1)
			{
				if (iLocal_290 == 1)
				{
					if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine"), 0))
					{
						if (Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 == 148 || Global_1574388)
						{
							iVar17 = iLocal_293;
						}
						else
						{
							iVar17 = (Global_262145.f_25632 + iLocal_293);
						}
						if (unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine")) > iVar17)
						{
							iLocal_290 = 0;
							iLocal_291 = 0;
							unk_0x3CB081F41F423663(unk_0xA19140A5C42D8715(), unk_0x7353FDD251A636E0(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine")), iVar17);
						}
					}
					else
					{
						iLocal_290 = 0;
					}
				}
				if (iLocal_291 == 1)
				{
					if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_rayminigun"), 0))
					{
						if (Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 == 148 || Global_1574388)
						{
							iVar17 = iLocal_294;
						}
						else
						{
							iVar17 = (Global_262145.f_25633 + iLocal_294);
						}
						if (unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_rayminigun")) > iVar17)
						{
							iLocal_290 = 0;
							iLocal_291 = 0;
							unk_0x3CB081F41F423663(unk_0xA19140A5C42D8715(), unk_0x7353FDD251A636E0(unk_0xA19140A5C42D8715(), joaat("weapon_rayminigun")), iVar17);
						}
					}
					else
					{
						iLocal_291 = 0;
					}
				}
			}
			if (iLocal_292)
			{
				if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), Global_1312415, 0))
				{
					iVar17 = (iLocal_295 + func_178(Global_1312415));
					if (unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), Global_1312415) > iVar17)
					{
						iLocal_290 = 0;
						iLocal_291 = 0;
						iLocal_292 = 0;
						unk_0x3CB081F41F423663(unk_0xA19140A5C42D8715(), unk_0x7353FDD251A636E0(unk_0xA19140A5C42D8715(), Global_1312415), iVar17);
					}
				}
				else
				{
					iLocal_292 = 0;
				}
			}
		}
		func_169();
	}
	if ((iLocal_291 == 1 || iLocal_290 == 1) || iLocal_292 == 0)
	{
		if (((Global_1654543 == 1 || Global_1574380 == 1) || !unk_0x4C9BACA8D249CB13()) || unk_0xFD34717937104F1C() > iLocal_296 + 2000)
		{
			iLocal_291 = 0;
			iLocal_290 = 0;
			iLocal_292 = 0;
		}
	}
}

void func_169()
{
	if ((iLocal_290 == 0 && iLocal_291 == 0) && iLocal_292 == 0)
	{
		if (func_177())
		{
			if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine"), 0))
			{
				if (unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine")) > 0)
				{
					if (iLocal_293 != unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine")))
					{
						iLocal_293 = unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine"));
					}
				}
				else
				{
					iLocal_293 = 0;
				}
			}
			if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_rayminigun"), 0))
			{
				if (unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_rayminigun")) > 0)
				{
					if (iLocal_294 != unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_rayminigun")))
					{
						iLocal_294 = unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_rayminigun"));
					}
				}
				else
				{
					iLocal_294 = 0;
				}
			}
			if ((Global_1312415 != joaat("weapon_rayminigun") && Global_1312415 != joaat("weapon_raycarbine")) && Global_1312415 != joaat("weapon_flare"))
			{
				if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), Global_1312415, 0))
				{
					if (unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), Global_1312415) > 0)
					{
						if (iLocal_295 != unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), Global_1312415))
						{
							iLocal_295 = func_166(func_170(Global_1312415), -1, 0);
						}
					}
					else
					{
						iLocal_295 = 0;
					}
				}
			}
		}
	}
}

int func_170(int iParam0)
{
	if (func_30() == 0 || func_32() == 0)
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				return 258;
				break;
			
			case joaat("weapon_combatpistol"):
				return 268;
				break;
			
			case joaat("weapon_appistol"):
				return 288;
				break;
			
			case joaat("weapon_microsmg"):
				return 298;
				break;
			
			case joaat("weapon_smg"):
				return 308;
				break;
			
			case joaat("weapon_assaultrifle"):
				return 327;
				break;
			
			case joaat("weapon_carbinerifle"):
				return 336;
				break;
			
			case joaat("weapon_advancedrifle"):
				return 345;
				break;
			
			case joaat("weapon_mg"):
				return 354;
				break;
			
			case joaat("weapon_combatmg"):
				return 363;
				break;
			
			case joaat("weapon_pumpshotgun"):
				return 381;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				return 391;
				break;
			
			case joaat("weapon_assaultshotgun"):
				return 409;
				break;
			
			case joaat("weapon_sniperrifle"):
				return 428;
				break;
			
			case joaat("weapon_grenadelauncher"):
				return 446;
				break;
			
			case joaat("weapon_rpg"):
				return 453;
				break;
			
			case joaat("weapon_minigun"):
				return 462;
				break;
			
			case joaat("weapon_grenade"):
				return 470;
				break;
			
			case joaat("weapon_smokegrenade"):
				return 479;
				break;
			
			case joaat("weapon_stickybomb"):
				return 487;
				break;
			
			case joaat("weapon_stungun"):
				return 419;
				break;
			
			case joaat("gadget_parachute"):
				return 584;
				break;
			
			case joaat("weapon_molotov"):
				return 496;
				break;
			
			case joaat("weapon_petrolcan"):
				return 587;
				break;
			
			case joaat("weapon_knife"):
				return 200;
				break;
			
			case joaat("weapon_nightstick"):
				return 207;
				break;
			
			case joaat("weapon_bat"):
				return 242;
				break;
			
			case joaat("weapon_heavysniper"):
				return 437;
				break;
			
			case joaat("weapon_golfclub"):
				return 249;
				break;
			
			case joaat("weapon_crowbar"):
				return 214;
				break;
			
			case joaat("weapon_hammer"):
				return 235;
				break;
			
			case joaat("weapon_pistol50"):
				return 278;
				break;
			
			case -572349828:
				return 372;
				break;
			
			case joaat("weapon_assaultsmg"):
				return 318;
				break;
			
			case 392730790:
				return 440;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				return 400;
				break;
			
			case joaat("weapon_bottle"):
				return 1737;
				break;
			
			case joaat("weapon_specialcarbine"):
				return 8006;
				break;
			
			case joaat("weapon_snspistol"):
				return 1747;
				break;
			
			case joaat("weapon_heavypistol"):
				return 7996;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 8016;
				break;
			
			case joaat("weapon_gusenberg"):
				return 8026;
				break;
			
			case joaat("weapon_vintagepistol"):
				return 8309;
				break;
			
			case joaat("weapon_flaregun"):
				return 8062;
				break;
			
			case joaat("weapon_firework"):
				return 8319;
				break;
			
			case joaat("weapon_musket"):
				return 8329;
				break;
			
			case joaat("weapon_dagger"):
				return 8299;
				break;
			
			case joaat("weapon_heavyshotgun"):
				return 8407;
				break;
			
			case joaat("weapon_marksmanrifle"):
				return 8417;
				break;
			
			case joaat("weapon_hominglauncher"):
				return 8441;
				break;
			
			case joaat("weapon_proxmine"):
				return 8433;
				break;
			
			case joaat("weapon_combatpdw"):
				return 8451;
				break;
			
			case joaat("weapon_knuckle"):
				return 8458;
				break;
			
			case joaat("weapon_marksmanpistol"):
				return 8468;
				break;
			
			case joaat("weapon_hatchet"):
				return 8425;
				break;
			
			case joaat("weapon_machete"):
				return 8476;
				break;
			
			case joaat("weapon_machinepistol"):
				return 8486;
				break;
			
			case joaat("weapon_dbshotgun"):
				return 8514;
				break;
			
			case joaat("weapon_compactrifle"):
				return 8504;
				break;
			
			case joaat("weapon_flashlight"):
				return 8522;
				break;
			
			case joaat("weapon_switchblade"):
				return 8522;
				break;
			
			case joaat("weapon_revolver"):
				return 8542;
				break;
			
			case joaat("weapon_autoshotgun"):
				return 8593;
				break;
			
			case joaat("weapon_minismg"):
				return 8619;
				break;
			
			case joaat("weapon_compactlauncher"):
				return 8609;
				break;
			
			case joaat("weapon_battleaxe"):
				return 8637;
				break;
			
			case joaat("weapon_pipebomb"):
				return 8627;
				break;
			
			case joaat("weapon_poolcue"):
				return 8638;
				break;
			
			case joaat("weapon_wrench"):
				return 228;
				break;
			
			case joaat("weapon_assaultrifle_mk2"):
				if (func_171(joaat("component_assaultrifle_mk2_clip_armorpiercing"), joaat("weapon_assaultrifle_mk2"), -1))
				{
					return 5564;
					break;
				}
				else if (func_171(joaat("component_assaultrifle_mk2_clip_fmj"), joaat("weapon_assaultrifle_mk2"), -1))
				{
					return 5565;
					break;
				}
				else if (func_171(joaat("component_assaultrifle_mk2_clip_incendiary"), joaat("weapon_assaultrifle_mk2"), -1))
				{
					return 5566;
					break;
				}
				else if (func_171(joaat("component_assaultrifle_mk2_clip_tracer"), joaat("weapon_assaultrifle_mk2"), -1))
				{
					return 5567;
					break;
				}
				else
				{
					return 327;
					break;
				}
				break;
			
			case joaat("weapon_carbinerifle_mk2"):
				if (func_171(joaat("component_carbinerifle_mk2_clip_armorpiercing"), joaat("weapon_carbinerifle_mk2"), -1))
				{
					return 5568;
					break;
				}
				else if (func_171(joaat("component_carbinerifle_mk2_clip_fmj"), joaat("weapon_carbinerifle_mk2"), -1))
				{
					return 5569;
					break;
				}
				else if (func_171(joaat("component_carbinerifle_mk2_clip_incendiary"), joaat("weapon_carbinerifle_mk2"), -1))
				{
					return 5570;
					break;
				}
				else if (func_171(joaat("component_carbinerifle_mk2_clip_tracer"), joaat("weapon_carbinerifle_mk2"), -1))
				{
					return 5571;
					break;
				}
				else
				{
					return 336;
					break;
				}
				break;
			
			case joaat("weapon_combatmg_mk2"):
				if (func_171(joaat("component_combatmg_mk2_clip_armorpiercing"), joaat("weapon_combatmg_mk2"), -1))
				{
					return 5572;
					break;
				}
				else if (func_171(joaat("component_combatmg_mk2_clip_fmj"), joaat("weapon_combatmg_mk2"), -1))
				{
					return 5573;
					break;
				}
				else if (func_171(joaat("component_combatmg_mk2_clip_incendiary"), joaat("weapon_combatmg_mk2"), -1))
				{
					return 5574;
					break;
				}
				else if (func_171(joaat("component_combatmg_mk2_clip_tracer"), joaat("weapon_combatmg_mk2"), -1))
				{
					return 5575;
					break;
				}
				else
				{
					return 363;
					break;
				}
				break;
			
			case joaat("weapon_heavysniper_mk2"):
				if (func_171(joaat("component_heavysniper_mk2_clip_armorpiercing"), joaat("weapon_heavysniper_mk2"), -1))
				{
					return 5576;
					break;
				}
				else if (func_171(joaat("component_heavysniper_mk2_clip_explosive"), joaat("weapon_heavysniper_mk2"), -1))
				{
					return 5577;
					break;
				}
				else if (func_171(joaat("component_heavysniper_mk2_clip_fmj"), joaat("weapon_heavysniper_mk2"), -1))
				{
					return 5578;
					break;
				}
				else if (func_171(joaat("component_heavysniper_mk2_clip_incendiary"), joaat("weapon_heavysniper_mk2"), -1))
				{
					return 5579;
					break;
				}
				else
				{
					return 437;
					break;
				}
				break;
			
			case joaat("weapon_pistol_mk2"):
				if (func_171(joaat("component_pistol_mk2_clip_fmj"), joaat("weapon_pistol_mk2"), -1))
				{
					return 5580;
					break;
				}
				else if (func_171(joaat("component_pistol_mk2_clip_hollowpoint"), joaat("weapon_pistol_mk2"), -1))
				{
					return 5581;
					break;
				}
				else if (func_171(joaat("component_pistol_mk2_clip_incendiary"), joaat("weapon_pistol_mk2"), -1))
				{
					return 5582;
					break;
				}
				else if (func_171(joaat("component_pistol_mk2_clip_tracer"), joaat("weapon_pistol_mk2"), -1))
				{
					return 5583;
					break;
				}
				else
				{
					return 258;
					break;
				}
				break;
			
			case joaat("weapon_smg_mk2"):
				if (func_171(joaat("component_smg_mk2_clip_fmj"), joaat("weapon_smg_mk2"), -1))
				{
					return 5584;
					break;
				}
				else if (func_171(joaat("component_smg_mk2_clip_hollowpoint"), joaat("weapon_smg_mk2"), -1))
				{
					return 5585;
					break;
				}
				else if (func_171(joaat("component_smg_mk2_clip_incendiary"), joaat("weapon_smg_mk2"), -1))
				{
					return 5586;
					break;
				}
				else if (func_171(joaat("component_smg_mk2_clip_tracer"), joaat("weapon_smg_mk2"), -1))
				{
					return 5587;
					break;
				}
				else
				{
					return 308;
					break;
				}
				break;
			
			case joaat("weapon_doubleaction"):
				return 9141;
				break;
			
			case joaat("weapon_bullpuprifle_mk2"):
				if (func_171(joaat("component_bullpuprifle_mk2_clip_armorpiercing"), joaat("weapon_bullpuprifle_mk2"), -1))
				{
					return 6399;
					break;
				}
				else if (func_171(joaat("component_bullpuprifle_mk2_clip_fmj"), joaat("weapon_bullpuprifle_mk2"), -1))
				{
					return 6400;
					break;
				}
				else if (func_171(joaat("component_bullpuprifle_mk2_clip_incendiary"), joaat("weapon_bullpuprifle_mk2"), -1))
				{
					return 6401;
					break;
				}
				else if (func_171(joaat("component_bullpuprifle_mk2_clip_tracer"), joaat("weapon_bullpuprifle_mk2"), -1))
				{
					return 6402;
					break;
				}
				else
				{
					return 8016;
					break;
				}
				break;
			
			case joaat("weapon_marksmanrifle_mk2"):
				if (func_171(joaat("component_marksmanrifle_mk2_clip_armorpiercing"), joaat("weapon_marksmanrifle_mk2"), -1))
				{
					return 6403;
					break;
				}
				else if (func_171(joaat("component_marksmanrifle_mk2_clip_fmj"), joaat("weapon_marksmanrifle_mk2"), -1))
				{
					return 6404;
					break;
				}
				else if (func_171(joaat("component_marksmanrifle_mk2_clip_incendiary"), joaat("weapon_marksmanrifle_mk2"), -1))
				{
					return 6405;
					break;
				}
				else if (func_171(joaat("component_marksmanrifle_mk2_clip_tracer"), joaat("weapon_marksmanrifle_mk2"), -1))
				{
					return 6406;
					break;
				}
				else
				{
					return 8417;
					break;
				}
				break;
			
			case joaat("weapon_pumpshotgun_mk2"):
				if (func_171(joaat("component_pumpshotgun_mk2_clip_armorpiercing"), joaat("weapon_pumpshotgun_mk2"), -1))
				{
					return 6395;
					break;
				}
				else if (func_171(joaat("component_pumpshotgun_mk2_clip_explosive"), joaat("weapon_pumpshotgun_mk2"), -1))
				{
					return 6396;
					break;
				}
				else if (func_171(joaat("component_pumpshotgun_mk2_clip_hollowpoint"), joaat("weapon_pumpshotgun_mk2"), -1))
				{
					return 6397;
					break;
				}
				else if (func_171(joaat("component_pumpshotgun_mk2_clip_incendiary"), joaat("weapon_pumpshotgun_mk2"), -1))
				{
					return 6398;
					break;
				}
				else
				{
					return 381;
					break;
				}
				break;
			
			case joaat("weapon_revolver_mk2"):
				if (func_171(joaat("component_revolver_mk2_clip_fmj"), joaat("weapon_revolver_mk2"), -1))
				{
					return 6407;
					break;
				}
				else if (func_171(joaat("component_revolver_mk2_clip_hollowpoint"), joaat("weapon_revolver_mk2"), -1))
				{
					return 6408;
					break;
				}
				else if (func_171(joaat("component_revolver_mk2_clip_incendiary"), joaat("weapon_revolver_mk2"), -1))
				{
					return 6409;
					break;
				}
				else if (func_171(joaat("component_revolver_mk2_clip_tracer"), joaat("weapon_revolver_mk2"), -1))
				{
					return 6410;
					break;
				}
				else
				{
					return 8542;
					break;
				}
				break;
			
			case joaat("weapon_snspistol_mk2"):
				if (func_171(joaat("component_snspistol_mk2_clip_fmj"), joaat("weapon_snspistol_mk2"), -1))
				{
					return 6411;
					break;
				}
				else if (func_171(joaat("component_snspistol_mk2_clip_hollowpoint"), joaat("weapon_snspistol_mk2"), -1))
				{
					return 6412;
					break;
				}
				else if (func_171(joaat("component_snspistol_mk2_clip_incendiary"), joaat("weapon_snspistol_mk2"), -1))
				{
					return 6413;
					break;
				}
				else if (func_171(joaat("component_snspistol_mk2_clip_tracer"), joaat("weapon_snspistol_mk2"), -1))
				{
					return 6414;
					break;
				}
				else
				{
					return 1747;
					break;
				}
				break;
			
			case joaat("weapon_specialcarbine_mk2"):
				if (func_171(joaat("component_specialcarbine_mk2_clip_armorpiercing"), joaat("weapon_specialcarbine_mk2"), -1))
				{
					return 6415;
					break;
				}
				else if (func_171(joaat("component_specialcarbine_mk2_clip_fmj"), joaat("weapon_specialcarbine_mk2"), -1))
				{
					return 6416;
					break;
				}
				else if (func_171(joaat("component_specialcarbine_mk2_clip_incendiary"), joaat("weapon_specialcarbine_mk2"), -1))
				{
					return 6417;
					break;
				}
				else if (func_171(joaat("component_specialcarbine_mk2_clip_tracer"), joaat("weapon_specialcarbine_mk2"), -1))
				{
					return 6418;
					break;
				}
				else
				{
					return 8006;
					break;
				}
				break;
			
			case joaat("weapon_stone_hatchet"):
				return 9362;
				break;
				break;
			
			case joaat("weapon_raypistol"):
				return 9521;
				break;
				break;
			
			case joaat("weapon_raycarbine"):
				return 9531;
				break;
				break;
			
			case joaat("weapon_rayminigun"):
				return 9541;
				break;
				break;
			}
	}
	return 6413;
}

bool func_171(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_176())
	{
		return 0;
	}
	iVar0 = func_174(iParam0, iParam1, iParam2);
	iVar1 = func_172(iParam0, iParam1);
	return unk_0x05EFB6A616B6FADE(iVar0, func_156(iVar1));
}

int func_172(int iParam0, int iParam1)
{
	return func_173(iParam0, iParam1);
}

int func_173(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 211;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 212;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 213;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 187;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 215;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 193;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 389;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 216;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 189;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			switch (iParam0)
			{
				case joaat("component_heavyrifle_clip_01"):
					return 99;
					break;
				
				case joaat("component_heavyrifle_clip_02"):
					return 100;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 208;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 190;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 390;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 191;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 391;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 192;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 394;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 205;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 172;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 392;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 203;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 154;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 155;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 156;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 157;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 158;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 159;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 160;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 161;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 162;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 184;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 185;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 206;
					break;
				
				case joaat("component_at_pi_supp"):
					return 183;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 194;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 195;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 196;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 197;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 198;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 393;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 199;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 200;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 204;
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam0)
			{
				case joaat("component_minismg_clip_01"):
					return 209;
					break;
				
				case joaat("component_minismg_clip_02"):
					return 210;
					break;
			}
			break;
		
		case joaat("weapon_pistol_mk2"):
			switch (iParam0)
			{
				case joaat("component_pistol_mk2_clip_01"):
					return 217;
					break;
				
				case joaat("component_pistol_mk2_clip_02"):
					return 218;
					break;
				
				case joaat("component_pistol_mk2_clip_fmj"):
					return 219;
					break;
				
				case joaat("component_pistol_mk2_clip_hollowpoint"):
					return 220;
					break;
				
				case joaat("component_pistol_mk2_clip_incendiary"):
					return 221;
					break;
				
				case joaat("component_pistol_mk2_clip_tracer"):
					return 222;
					break;
				
				case joaat("component_at_pi_flsh_02"):
					return 223;
					break;
				
				case joaat("component_at_pi_rail"):
					return 224;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 225;
					break;
				
				case joaat("component_at_pi_comp"):
					return 226;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
					break;
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			switch (iParam0)
			{
				case joaat("component_smg_mk2_clip_01"):
					return 227;
					break;
				
				case joaat("component_smg_mk2_clip_02"):
					return 228;
					break;
				
				case joaat("component_smg_mk2_clip_fmj"):
					return 229;
					break;
				
				case joaat("component_smg_mk2_clip_hollowpoint"):
					return 230;
					break;
				
				case joaat("component_smg_mk2_clip_incendiary"):
					return 231;
					break;
				
				case joaat("component_smg_mk2_clip_tracer"):
					return 232;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 233;
					break;
				
				case joaat("component_at_sights_smg"):
					return 234;
					break;
				
				case joaat("component_at_scope_macro_02_smg_mk2"):
					return 235;
					break;
				
				case joaat("component_at_scope_small_smg_mk2"):
					return 236;
					break;
				
				case joaat("component_at_pi_supp"):
					return 237;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 238;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 239;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 240;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 241;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 242;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 243;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 244;
					break;
				
				case joaat("component_at_sb_barrel_01"):
					return 245;
					break;
				
				case joaat("component_at_sb_barrel_02"):
					return 246;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_mk2_clip_01"):
					return 247;
					break;
				
				case joaat("component_heavysniper_mk2_clip_02"):
					return 248;
					break;
				
				case joaat("component_heavysniper_mk2_clip_armorpiercing"):
					return 249;
					break;
				
				case joaat("component_heavysniper_mk2_clip_explosive"):
					return 250;
					break;
				
				case joaat("component_heavysniper_mk2_clip_fmj"):
					return 251;
					break;
				
				case joaat("component_heavysniper_mk2_clip_incendiary"):
					return 252;
					break;
				
				case joaat("component_at_scope_large_mk2"):
					return 253;
					break;
				
				case joaat("component_at_scope_max"):
					return 254;
					break;
				
				case joaat("component_at_scope_nv"):
					return 255;
					break;
				
				case joaat("component_at_scope_thermal"):
					return 256;
					break;
				
				case joaat("component_at_sr_supp_03"):
					return 257;
					break;
				
				case joaat("component_at_muzzle_08"):
					return 258;
					break;
				
				case joaat("component_at_muzzle_09"):
					return 259;
					break;
				
				case joaat("component_at_sr_barrel_01"):
					return 260;
					break;
				
				case joaat("component_at_sr_barrel_02"):
					return 261;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
					break;
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			switch (iParam0)
			{
				case joaat("component_combatmg_mk2_clip_01"):
					return 262;
					break;
				
				case joaat("component_combatmg_mk2_clip_02"):
					return 263;
					break;
				
				case joaat("component_combatmg_mk2_clip_armorpiercing"):
					return 264;
					break;
				
				case joaat("component_combatmg_mk2_clip_fmj"):
					return 265;
					break;
				
				case joaat("component_combatmg_mk2_clip_incendiary"):
					return 266;
					break;
				
				case joaat("component_combatmg_mk2_clip_tracer"):
					return 267;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 268;
					break;
				
				case joaat("component_at_sights"):
					return 269;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 270;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 271;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 272;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 273;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 274;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 275;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 276;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 277;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 278;
					break;
				
				case joaat("component_at_mg_barrel_01"):
					return 279;
					break;
				
				case joaat("component_at_mg_barrel_02"):
					return 280;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_mk2_clip_01"):
					return 281;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_02"):
					return 282;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
					return 283;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_fmj"):
					return 284;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_incendiary"):
					return 285;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_tracer"):
					return 286;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 287;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 288;
					break;
				
				case joaat("component_at_sights"):
					return 289;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 290;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 291;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 292;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 293;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 294;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 295;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 296;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 297;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 298;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 299;
					break;
				
				case joaat("component_at_ar_barrel_01"):
					return 300;
					break;
				
				case joaat("component_at_ar_barrel_02"):
					return 301;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_mk2_clip_01"):
					return 302;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_02"):
					return 303;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
					return 304;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_fmj"):
					return 305;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_incendiary"):
					return 306;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_tracer"):
					return 307;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 308;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 309;
					break;
				
				case joaat("component_at_sights"):
					return 310;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 311;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 312;
					break;
				
				case joaat("component_at_ar_supp"):
					return 313;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 314;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 315;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 316;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 317;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 318;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 319;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 320;
					break;
				
				case joaat("component_at_cr_barrel_01"):
					return 321;
					break;
				
				case joaat("component_at_cr_barrel_02"):
					return 322;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			switch (iParam0)
			{
				case joaat("component_pumpshotgun_mk2_clip_01"):
					return 395;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
					return 396;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_explosive"):
					return 397;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
					return 398;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_incendiary"):
					return 399;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 400;
					break;
				
				case joaat("component_at_sights"):
					return 401;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 402;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 403;
					break;
				
				case joaat("component_at_sr_supp_03"):
					return 404;
					break;
				
				case joaat("component_at_muzzle_08"):
					return 405;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_mk2_clip_01"):
					return 406;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_02"):
					return 407;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
					return 408;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_fmj"):
					return 409;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_incendiary"):
					return 410;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_tracer"):
					return 411;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 412;
					break;
				
				case joaat("component_at_sights"):
					return 413;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 414;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 415;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 416;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 417;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 418;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 419;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 420;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 421;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 422;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 423;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 424;
					break;
				
				case joaat("component_at_sc_barrel_01"):
					return 425;
					break;
				
				case joaat("component_at_sc_barrel_02"):
					return 426;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
					break;
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			switch (iParam0)
			{
				case joaat("component_snspistol_mk2_clip_01"):
					return 427;
					break;
				
				case joaat("component_snspistol_mk2_clip_02"):
					return 428;
					break;
				
				case joaat("component_snspistol_mk2_clip_fmj"):
					return 429;
					break;
				
				case joaat("component_snspistol_mk2_clip_hollowpoint"):
					return 430;
					break;
				
				case joaat("component_snspistol_mk2_clip_incendiary"):
					return 431;
					break;
				
				case joaat("component_snspistol_mk2_clip_tracer"):
					return 432;
					break;
				
				case joaat("component_at_pi_flsh_03"):
					return 433;
					break;
				
				case joaat("component_at_pi_rail_02"):
					return 434;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 435;
					break;
				
				case joaat("component_at_pi_comp_02"):
					return 436;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_mk2_clip_01"):
					return 437;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_02"):
					return 438;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
					return 439;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_fmj"):
					return 440;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_incendiary"):
					return 441;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_tracer"):
					return 442;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 443;
					break;
				
				case joaat("component_at_sights"):
					return 444;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 445;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom_mk2"):
					return 446;
					break;
				
				case joaat("component_at_ar_supp"):
					return 447;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 448;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 449;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 450;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 451;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 452;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 453;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 454;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 455;
					break;
				
				case joaat("component_at_mrfl_barrel_01"):
					return 456;
					break;
				
				case joaat("component_at_mrfl_barrel_02"):
					return 457;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
					break;
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			switch (iParam0)
			{
				case joaat("component_revolver_mk2_clip_01"):
					return 458;
					break;
				
				case joaat("component_revolver_mk2_clip_fmj"):
					return 459;
					break;
				
				case joaat("component_revolver_mk2_clip_hollowpoint"):
					return 460;
					break;
				
				case joaat("component_revolver_mk2_clip_incendiary"):
					return 461;
					break;
				
				case joaat("component_revolver_mk2_clip_tracer"):
					return 462;
					break;
				
				case joaat("component_at_sights"):
					return 463;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 464;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 465;
					break;
				
				case joaat("component_at_pi_comp_03"):
					return 466;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_mk2_clip_01"):
					return 467;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_02"):
					return 468;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
					return 469;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_fmj"):
					return 470;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_incendiary"):
					return 471;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_tracer"):
					return 472;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 473;
					break;
				
				case joaat("component_at_sights"):
					return 474;
					break;
				
				case joaat("component_at_scope_macro_02_mk2"):
					return 475;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 476;
					break;
				
				case joaat("component_at_bp_barrel_01"):
					return 477;
					break;
				
				case joaat("component_at_bp_barrel_02"):
					return 478;
					break;
				
				case joaat("component_at_ar_supp"):
					return 479;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 480;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 481;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 482;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 483;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 484;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 485;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 486;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 487;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
					break;
			}
			break;
		
		case joaat("weapon_raypistol"):
			switch (iParam0)
			{
				case joaat("component_raypistol_varmod_xmas18"):
					return 554;
					break;
			}
			break;
	}
	return 0;
}

int func_174(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_166(func_175(iParam0, iParam1), iParam2, 0);
	return iVar0;
}

int func_175(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_172(iParam0, iParam1);
	iVar1 = func_157(iVar0);
	if ((func_30() == 0 || func_32() == 0) || (func_30() == 999 && func_32() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 687;
				break;
			
			case 1:
				return 688;
				break;
			
			case 2:
				return 689;
				break;
			
			case 3:
				return 690;
				break;
			
			case 4:
				return 1753;
				break;
			
			case 5:
				return 2435;
				break;
			
			case 6:
				return 2827;
				break;
			
			case 7:
				return 5501;
				break;
			
			case 8:
				return 5505;
				break;
			
			case 9:
				return 5509;
				break;
			
			case 10:
				return 5622;
				break;
			
			case 11:
				return 5626;
				break;
			
			case 12:
				return 5630;
				break;
			
			case 13:
				return 5634;
				break;
			
			case 14:
				return 6373;
				break;
			
			case 15:
				return 6496;
				break;
			
			case 16:
				return 6516;
				break;
			
			case 17:
				return 6522;
				break;
			}
	}
	return 1753;
}

bool func_176()
{
	return Global_1312836;
}

int func_177()
{
	if (!unk_0xD32647D293B05ADD(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x04232A13D3CB650F() && unk_0x49B680F5AF4359D0())
		{
			return 0;
		}
		if (Global_1654543 == 1)
		{
			return 0;
		}
		if (Global_1574380 == 1)
		{
			return 0;
		}
		if (Global_1361433)
		{
			return 0;
		}
		if ((!unk_0x3BE8B7AEED1A3971() && !unk_0x607776744A243309()) && !unk_0x71364F510A1CB69F())
		{
			if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
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
	return 0;
}

int func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = func_179(iParam0, 2);
	switch (iParam0)
	{
		case joaat("weapon_minigun"):
			iVar0 = 200;
			break;
		
		case joaat("weapon_grenadelauncher"):
			iVar0 = 10;
			break;
		
		case joaat("weapon_rpg"):
		case joaat("weapon_firework"):
			iVar0 = 5;
			break;
		
		case joaat("weapon_musket"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
			iVar0 = 8;
			break;
		
		case joaat("weapon_raypistol"):
			return 1;
			break;
		
		case joaat("weapon_rayminigun"):
			return Global_262145.f_25633;
			break;
		
		case joaat("weapon_raycarbine"):
			return Global_262145.f_25632;
			break;
	}
	return iVar0;
}

int func_179(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		return (unk_0x8B0F1AE7686BED1C(iParam0) * iParam1);
	}
	return 0;
}

void func_180()
{
	if ((((Global_4265278.f_252 > 0 && Global_4265278.f_126[0] == 7) && Global_4265278[0] == 257) && Global_93284.f_416 != -1) && unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == joaat("mp_m_freemode_01"))
	{
		if (Global_71186)
		{
			unk_0x2BCFB39E86340DAA(&(Global_93284.f_1336[Global_93284.f_416]), 8);
			Global_71186 = 0;
			iLocal_143 = Global_93284.f_416;
		}
		else if (iLocal_143 != -1)
		{
			unk_0xFA57C719261AA55D(&(Global_93284.f_1336[iLocal_143]), 8);
			iLocal_143 = -1;
			uLocal_144 = unk_0xFFCC7EBF88BDEE54();
		}
	}
	else if (iLocal_143 != -1)
	{
		unk_0xFA57C719261AA55D(&(Global_93284.f_1336[iLocal_143]), 8);
		iLocal_143 = -1;
		uLocal_144 = unk_0xFFCC7EBF88BDEE54();
	}
	else if (!Global_71186)
	{
		if ((((unk_0xFEB6EEC0545AF7AA(&(Global_36827[0 /*32*/].f_8)) != 1427936265 || !Global_36827[0 /*32*/]) && !func_181()) && unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) && unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), uLocal_144)) > 1000)
		{
			Global_71186 = 1;
		}
	}
}

bool func_181()
{
	return Global_93284.f_328 > 0;
}

void func_182()
{
	if (unk_0x4C9BACA8D249CB13() && Global_2456479.f_3)
	{
		if (unk_0xD8B89B387D170E27())
		{
			if (func_190(unk_0xD4E735F4B6A956AC()))
			{
				if (!Global_1686197)
				{
					if ((!func_161(unk_0xD4E735F4B6A956AC(), 0) && !func_189()) && func_188(1))
					{
						if (((!Global_1654543 && func_4()) && func_190(unk_0xD4E735F4B6A956AC())) && Global_1312783)
						{
							if (!iLocal_127)
							{
								func_186();
								iLocal_127 = 1;
								iLocal_129 = func_185();
								iLocal_130 = func_184();
							}
						}
					}
				}
				else if (func_183(155))
				{
					iLocal_128 = 1;
					return;
				}
				else if (!iLocal_127)
				{
					iLocal_129 = func_185();
					iLocal_130 = func_184();
					iLocal_127 = 1;
				}
			}
		}
		else if (iLocal_127)
		{
			iLocal_129 = -1;
			iLocal_130 = -1;
			iLocal_127 = 0;
			iLocal_128 = 0;
		}
	}
	else if (iLocal_127 && !iLocal_128)
	{
		iLocal_129 = -1;
		iLocal_130 = -1;
		iLocal_127 = 0;
		iLocal_128 = 0;
	}
	if (iLocal_128)
	{
		if (iLocal_130 > 0)
		{
			if (func_185() == iLocal_129 || func_185() == 0)
			{
				Global_1686197 = 1;
			}
		}
		iLocal_128 = 0;
	}
}

int func_183(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_184()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_785.f_1;
}

int func_185()
{
	return Global_1685682[unk_0xD4E735F4B6A956AC() /*15*/].f_3;
}

void func_186()
{
	if (!func_188(1))
	{
		return;
	}
	Global_2458124 = 1;
	Global_1686197 = 1;
	func_187(25100, 1, -1, 1);
}

int func_187(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar18;
	int iVar19;
	
	if (iParam2 == -1)
	{
		iParam2 = func_163();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar19, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

bool func_188(bool bParam0)
{
	if (bParam0)
	{
		return (unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12) && func_137());
	}
	return unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12);
}

bool func_189()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

int func_190(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_1589747[iParam0 /*790*/].f_273.f_330 != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_191()
{
	if (unk_0x8B1574454E8C2421(joaat("creator")) > 0)
	{
		if (!iLocal_126)
		{
			iLocal_126 = 1;
		}
	}
	else if (unk_0x8B1574454E8C2421(joaat("freemode")) > 0 && iLocal_126)
	{
		unk_0xE02F1591180A0BF5(0);
		unk_0x0DD0220533DCE40A(0);
		iLocal_126 = 0;
	}
}

void func_192()
{
	if (!iLocal_115)
	{
		if (Global_106070.f_28022[0 /*29*/] != joaat("player_zero"))
		{
			iLocal_115 = 1;
		}
		else if (Global_106070.f_28022[1 /*29*/] != joaat("player_one"))
		{
			iLocal_115 = 1;
		}
		else if (Global_106070.f_28022[2 /*29*/] != joaat("player_two"))
		{
			iLocal_115 = 1;
		}
	}
	if (((iLocal_115 && func_10(unk_0xD4E735F4B6A956AC(), 1, 1)) && !Global_1574184) && Global_25459 == 0)
	{
		unk_0x5DEF814991FF7421(-201, 0, 0);
	}
}

void func_193()
{
	if (!iLocal_139)
	{
		if (func_194())
		{
			if (Global_25459 == 999)
			{
				iLocal_139 = 1;
			}
		}
	}
	else if (Global_25459 == -1 || Global_25459 == 2)
	{
		iLocal_139 = 0;
	}
	else if (Global_25459 == 0)
	{
		if (unk_0x4C9BACA8D249CB13() && Global_2456479.f_3)
		{
			if (func_4() && !Global_1312857)
			{
				unk_0x63A311E7111108AF();
				iLocal_139 = 0;
			}
		}
	}
}

bool func_194()
{
	return Global_1312749;
}

void func_195()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4[4];
	var uVar9[4];
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (Global_4456448.f_130782 != Global_262145.f_5019[6 /*51*/][5])
	{
		return;
	}
	if (Global_1686746 || (!iLocal_399 && Global_1312783))
	{
		iVar0 = 0;
		while (iVar0 <= 99)
		{
			unk_0xE11F00B4AC919F45(iVar0, "NULL_SOUND", 0, 1);
			iVar0++;
		}
		iLocal_398 = 0;
		iLocal_399 = 1;
		return;
	}
	if (iLocal_400 == -1)
	{
		iLocal_400 = unk_0x7A3ECD08D6D1D554();
	}
	iVar1 = unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC());
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar14 = iVar3;
		if (unk_0xC77FA683E9BB485B(iVar14))
		{
			iVar15 = unk_0xEE978C39384D834F(iVar14);
			if (!unk_0x05EFB6A616B6FADE(Global_1589747[iVar14 /*790*/].f_39.f_18, 14) && !func_161(iVar14, 0))
			{
				iVar16 = unk_0xE46ECB9FD23D3264(iVar14);
				if (iVar16 > -1 && iVar16 < 4)
				{
					uVar4[iVar16]++;
				}
				if (func_159(iVar14) || unk_0x4915F4759304D5CF(iVar15))
				{
					if (iVar16 > -1 && iVar16 < 4)
					{
						uVar9[iVar16]++;
					}
				}
			}
		}
		iVar3++;
	}
	if (iVar1 > -1)
	{
		if ((uVar4[iVar1] - uVar9[iVar1]) == 1)
		{
			bVar2 = true;
		}
		else
		{
			bVar2 = false;
		}
	}
	else
	{
		bVar2 = false;
	}
	if (Global_1686746)
	{
		bVar2 = false;
	}
	if (!Global_1312783)
	{
		bVar2 = false;
	}
	if (func_159(unk_0xD4E735F4B6A956AC()) || unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		bVar2 = false;
	}
	if (!bVar2)
	{
		if (iLocal_400 > -1)
		{
			if (iLocal_398)
			{
				unk_0x5DE59A67B5F326CF(iLocal_400);
				iLocal_398 = 0;
				func_14(&Local_401, 0, 0);
			}
		}
		if (func_13(&Local_401) && func_196(Local_401, 1500, 0))
		{
			iVar17 = 0;
			while (iVar17 <= 99)
			{
				unk_0xE11F00B4AC919F45(iVar17, "NULL_SOUND", 0, 1);
				iVar17++;
			}
			func_7(&Local_401);
		}
	}
	else if (!iLocal_398)
	{
		unk_0xE11F00B4AC919F45(iLocal_400, "Last_Alive", "DLC_SR_RS_Player_Sounds", 1);
		iLocal_398 = 1;
	}
}

int func_196(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x4C9BACA8D249CB13() && !bParam3)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_197()
{
	int iVar0;
	
	if (Global_4456448.f_130782 != Global_262145.f_5019[6 /*51*/][5])
	{
		return;
	}
	if (Global_1312783)
	{
		iLocal_397 = 1;
	}
	if (!func_4() && iLocal_397)
	{
		iVar0 = 0;
		while (iVar0 <= 99)
		{
			unk_0xE11F00B4AC919F45(iVar0, "NULL_SOUND", 0, 1);
			iVar0++;
		}
		iLocal_396 = 1;
	}
}

void func_198()
{
	if (Global_262145.f_9095[8] != 964856427)
	{
		Global_262145.f_9095[8] = 964856427;
	}
}

void func_199()
{
	if (Global_4456448 == 0 && Global_4456448.f_152990 == 15)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_4456448.f_13, 2))
		{
			unk_0x2BCFB39E86340DAA(&(Global_4456448.f_13), 2);
		}
	}
}

void func_200()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	int iVar8;
	float fVar9;
	
	if (Global_4456448.f_130782 == -1801970482)
	{
		if (Global_969023.f_13[0] < 3)
		{
			iVar0 = unk_0xA19140A5C42D8715();
			Var1 = { Global_4456448.f_50212[0 /*119*/].f_1[0 /*3*/] };
			if (unk_0x4915F4759304D5CF(iVar0))
			{
				return;
			}
			Var4 = { unk_0xE2BBD32891C18569(iVar0, 1) };
			if (unk_0x5D7DFE2058701942(iVar0, 0))
			{
				iVar8 = unk_0xCAEB6CE71A2C7212(iVar0, 0);
				fVar7 = unk_0xEAA5CEF8875FEEED(iVar8);
				fVar9 = unk_0x499324B3EF19C288(Var1, Var4, 1);
				if (fVar9 < Global_4456448.f_50212[0 /*119*/].f_14[0])
				{
					if (unk_0x8F474E419F56E48D(iVar8) == joaat("oppressor2") && fVar7 < 1f)
					{
						unk_0xC19EDC1D7179164C(iVar8, 0, 1, 0);
					}
				}
			}
		}
	}
}

void func_201()
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	int iVar7;
	int iVar8;
	struct<4> Var9;
	int iVar14;
	
	if (!Global_1312782 && Global_1668586)
	{
		bVar0 = true;
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_146775, 21))
		{
			Var2 = { func_205(151) };
			iVar1 = unk_0xB68EB57358F46F86(Var2, Var2.f_3);
			if (iVar1 == 0)
			{
			}
			if (!iLocal_390)
			{
				if (unk_0x893915B076B1DDF7(iVar1))
				{
					func_203(151, 0);
					iVar7 = 0;
					iVar7 = 0;
					while (iVar7 <= (13 - 1))
					{
						if (iVar7 != 12 && iVar7 != 0)
						{
							if (unk_0xE0A4C16EE6C60363(iVar1, func_202(iVar7)))
							{
								unk_0xCD2417B9AC84180C(iVar1, func_202(iVar7));
							}
						}
						iVar7++;
					}
					unk_0xEF6CE4AF8D633F85(iVar1);
					unk_0x1BBA2DDBEBA5EC7A(iVar1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_146775, 22))
		{
			Var9 = { func_205(152) };
			iVar8 = unk_0xB68EB57358F46F86(Var9, Var9.f_3);
			if (iVar8 == 0)
			{
			}
			if (!iLocal_390)
			{
				func_203(152, 0);
				if (unk_0x893915B076B1DDF7(iVar8))
				{
					iVar14 = 0;
					iVar14 = 0;
					while (iVar14 <= (13 - 1))
					{
						if (iVar14 != 12 && iVar14 != 0)
						{
							if (unk_0xE0A4C16EE6C60363(iVar8, func_202(iVar14)))
							{
								unk_0xCD2417B9AC84180C(iVar8, func_202(iVar14));
							}
						}
						iVar14++;
					}
					unk_0xEF6CE4AF8D633F85(iVar8);
					unk_0x1BBA2DDBEBA5EC7A(iVar8);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (bVar0)
		{
			iLocal_390 = 1;
		}
	}
}

char* func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "basic_style_set";
		
		case 1:
			return "branded_style_set";
		
		case 2:
			return "urban_style_set";
		
		case 3:
			return "pump_01";
		
		case 4:
			return "pump_02";
		
		case 5:
			return "pump_03";
		
		case 6:
			return "pump_04";
		
		case 7:
			return "pump_05";
		
		case 8:
			return "pump_06";
		
		case 9:
			return "pump_07";
		
		case 10:
			return "pump_08";
		
		case 11:
			return "door_blocker";
		
		case 12:
			return "car_floor_hatch";
		
		default:
	}
	return "";
}

void func_203(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_204(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_31895[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_31895[Var0.f_1]), Var0.f_0);
	}
}

struct<2> func_204(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3.f_0 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 6)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3.f_0 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

struct<5> func_205(int iParam0)
{
	struct<5> Var0;
	
	switch (iParam0)
	{
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
	}
	return Var0;
}

void func_206()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	struct<3> Var8;
	float fVar11;
	
	if (((unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12) && unk_0x05EFB6A616B6FADE(Global_4456448.f_32, 23)) && !Global_1312782) && func_4())
	{
		if (!Global_1312784)
		{
			iVar0 = unk_0xA19140A5C42D8715();
			if (!unk_0x4915F4759304D5CF(iVar0) && !unk_0x05EFB6A616B6FADE(Global_1686219, 0))
			{
				iVar1 = unk_0xD4E735F4B6A956AC();
				if (iVar1 > -1)
				{
					iVar2 = unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC());
					iVar3 = func_208();
					if ((iVar2 > -1 && iVar2 != 8) && iVar3 > -1)
					{
						Var4 = { Global_4456448.f_120945[iVar2 /*1141*/][iVar3 /*19*/] + Vector(0.5f, 0f, 0f) };
						if (!func_207(Var4))
						{
							if (unk_0x5D7DFE2058701942(iVar0, 0))
							{
								iVar7 = unk_0xCAEB6CE71A2C7212(iVar0, 0);
								Var8 = { unk_0xE2BBD32891C18569(iVar7, 1) };
								unk_0x8F7BA8E028ADF980(Var8, &fVar11, 0, 0);
								if ((fVar11 - Var8.f_2) <= 0.35f && fVar11 > Var8.f_2)
								{
									unk_0x4299736016AECE26(iVar7, Var4, 1, 0, 0, 1);
									if (unk_0x99F546A9200EA026(iVar7, 5f))
									{
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_207(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC());
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar3 = unk_0x1483A8AE554B8B2B(iVar0);
		if (func_10(iVar3, 0, 1))
		{
			if (iVar3 != unk_0xD4E735F4B6A956AC())
			{
				if (!func_161(iVar3, 0))
				{
					iVar1 = iVar3;
					if (!unk_0x05EFB6A616B6FADE(Global_1589747[iVar3 /*790*/].f_39.f_18, 14) && !unk_0x05EFB6A616B6FADE(Global_1589747[iVar3 /*790*/].f_99.f_32, 5))
					{
						if (unk_0xE46ECB9FD23D3264(iVar3) == iVar2 && (iVar2 > -1 && iVar2 != 8))
						{
							iVar4++;
						}
					}
				}
			}
			else
			{
				iVar0 = 32;
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_209()
{
	int iVar0;
	
	if (Global_1574174)
	{
		if (!iLocal_138)
		{
			if (func_189() || func_161(unk_0xD4E735F4B6A956AC(), 0))
			{
				iVar0 = 0;
				while (iVar0 < 32)
				{
					Global_1625435[iVar0 /*560*/].f_11.f_115 = -1;
					iVar0++;
				}
				iLocal_138 = 1;
			}
		}
	}
	else if (iLocal_138)
	{
		iLocal_138 = 0;
	}
}

void func_210()
{
	int iVar0;
	
	iVar0 = unk_0xD4E735F4B6A956AC();
	if (func_212(iVar0) && func_161(iVar0, 0))
	{
		if (func_211(iVar0))
		{
			if (Global_1589747[iVar0 /*790*/].f_98 == 5)
			{
				if (!iLocal_137)
				{
				}
			}
			else if (Global_1589747[iVar0 /*790*/].f_98 == 4)
			{
				if (iLocal_137)
				{
					unk_0x5DEF814991FF7421(50 + 1, 0, 0);
				}
			}
			else if (iLocal_137)
			{
				iLocal_137 = 0;
			}
		}
		else if (iLocal_137)
		{
			iLocal_137 = 0;
		}
	}
}

int func_211(int iParam0)
{
	if (Global_1589747[iParam0 /*790*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_212(int iParam0)
{
	return func_213(iParam0);
}

bool func_213(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

void func_214()
{
	if (unk_0x8B1574454E8C2421(joaat("fm_mission_controller")) > 0)
	{
		if (((Global_2448386.f_558.f_10 > 0 && func_188(0)) && !unk_0x05EFB6A616B6FADE(Global_1686334, 0)) && !Global_1312782)
		{
			unk_0x2BCFB39E86340DAA(&Global_1686334, 0);
		}
	}
}

void func_215()
{
	int iVar0;
	int iVar1[4];
	int iVar6[4];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	
	if ((((!Global_1312784 || Global_1312782) || Global_1654543) || !unk_0x05EFB6A616B6FADE(Global_4456448.f_31, 6)) || !unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12))
	{
		return;
	}
	iVar0 = unk_0xD4E735F4B6A956AC();
	if (Global_1625435[iVar0 /*560*/].f_488 != Global_1623783)
	{
		Global_1625435[iVar0 /*560*/].f_488 = Global_1623783;
	}
	if (Global_1625435[iVar0 /*560*/].f_489 != unk_0xF2DB717A73826179(Global_1623787))
	{
		Global_1625435[iVar0 /*560*/].f_489 = unk_0xF2DB717A73826179(Global_1623787);
	}
	iVar11 = 0;
	iVar12 = 0;
	iVar13 = 0;
	iVar13 = 0;
	while (iVar13 <= 31)
	{
		iVar14 = iVar13;
		if (unk_0xC77FA683E9BB485B(iVar14))
		{
			if (!unk_0x05EFB6A616B6FADE(Global_1624218[iVar13 /*38*/].f_29, 17))
			{
				if (Global_1625435[iVar13 /*560*/].f_488 > Global_1625435[iVar12 /*560*/].f_488)
				{
					iVar12 = iVar13;
				}
				else if (Global_1625435[iVar13 /*560*/].f_489 > Global_1625435[iVar12 /*560*/].f_489)
				{
					iVar12 = iVar13;
				}
				iVar15 = unk_0xE46ECB9FD23D3264(iVar14);
				if (iVar15 > -1 && iVar15 < 4)
				{
					iVar6[iVar15] = (iVar6[iVar15] + Global_1625435[iVar13 /*560*/].f_489);
					iVar1[iVar15] = (iVar1[iVar15] + Global_1625435[iVar13 /*560*/].f_488);
				}
			}
		}
		iVar13++;
	}
	if (Global_1378988.f_1)
	{
		iVar16 = 0;
		iVar16 = 0;
		while (iVar16 <= 1)
		{
			if (iVar1[iVar16] > iVar1[iVar11])
			{
				iVar11 = iVar16;
			}
			else if (iVar6[iVar16] == iVar6[iVar11])
			{
				iVar11 = iVar16;
			}
			iVar16++;
		}
	}
	if (!unk_0x05EFB6A616B6FADE(Global_1686219, 0))
	{
		if (Global_1378988.f_1)
		{
			if (iVar11 > -1)
			{
				if (iVar11 != unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()))
				{
					bVar17 = true;
				}
			}
		}
		else if (iVar12 > -1)
		{
			if (iVar12 != iVar0)
			{
				bVar17 = true;
			}
		}
		if (Global_1686216 <= 5000 && Global_1686216 > 0)
		{
			if (bVar17)
			{
				iVar18 = unk_0xA19140A5C42D8715();
				if (!unk_0x4915F4759304D5CF(iVar18))
				{
					if (unk_0x5D7DFE2058701942(iVar18, 0))
					{
						iVar19 = unk_0xCAEB6CE71A2C7212(iVar18, 0);
						if (!unk_0x7112137033807390(iVar19, 0))
						{
							unk_0x33CF95E95A476FB9(iVar18, 0);
							unk_0xD6CDDEFB0FD5B191(iVar18, 0, 0, 0, 0, 0, 0, 0, 0);
							unk_0xC099EA2A4F22A1F3(iVar19, 1, 1, -1);
						}
					}
				}
			}
		}
	}
}

void func_216()
{
	if (func_218(unk_0xD4E735F4B6A956AC()))
	{
		if (Global_2524719.f_789)
		{
			iLocal_413 = 1;
		}
	}
	else if (iLocal_413)
	{
		if (Global_2524719.f_789)
		{
			func_217();
			iLocal_413 = 0;
		}
		else
		{
			iLocal_413 = 0;
		}
	}
}

void func_217()
{
	Global_2524719.f_789 = 0;
}

int func_218(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_309.f_1, 29);
	}
	return 0;
}

void func_219()
{
	if (func_220(unk_0xD4E735F4B6A956AC()) && func_123() > 0)
	{
		if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1502.654f, -3005.55f, -82.93376f, -1512.73f, -3005.445f, -79.75568f, 3f, 0, 1, 0))
		{
			unk_0xD481A812073CCF02(0, 23, 1);
		}
	}
}

int func_220(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_9(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

void func_221()
{
	if (func_222(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 461.7465f, 4823.253f, -54.99372f, 462.5652f, 4827.365f, -52.99368f, 3f, 0, 1, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 492.2975f, 4835.403f, -54.99366f, 495.1879f, 4832.057f, -52.97646f, 3f, 0, 1, 0))
		{
			unk_0xD481A812073CCF02(0, 23, 1);
		}
	}
}

int func_222(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_9(Global_2423801[iParam0 /*413*/].f_309.f_4) == 9;
			}
		}
	}
	return 0;
}

void func_223()
{
	struct<3> Var0;
	
	if (func_224(unk_0xD4E735F4B6A956AC()) && func_123() == 0)
	{
		if (Global_93284.f_326 != joaat("Int_01_garage"))
		{
			unk_0xD481A812073CCF02(0, 23, 1);
		}
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			Var0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
			if (Var0.f_2 > -76f)
			{
				unk_0xD481A812073CCF02(0, 23, 1);
			}
		}
	}
}

int func_224(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_9(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

void func_225()
{
	if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (unk_0xC10AB2F83514403D(unk_0xA19140A5C42D8715(), 1097.535f, -3016.011f, -40.7658f, 1109.298f, -2983.69f, -34.1882f, 0, 1, 0))
		{
			if (!func_226())
			{
				if (!iLocal_405)
				{
					if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()) && unk_0x3A83743561B4F70C())
					{
						if (!func_13(&uLocal_403))
						{
							func_14(&uLocal_403, 0, 0);
						}
						else if (func_12(&uLocal_403, 10000, 0))
						{
							iLocal_405 = 1;
						}
					}
				}
			}
			else
			{
				iLocal_405 = 0;
				func_7(&uLocal_403);
			}
		}
		if (iLocal_405)
		{
			if (!unk_0x71364F510A1CB69F())
			{
				unk_0x9662BE461F9FDF9E(500);
			}
			else if (!func_4() && func_5() != 1)
			{
				unk_0xE8B3104D1CB25CDC(unk_0xA19140A5C42D8715(), 291.9964f, 179.742f, 103.2897f, 0, 0, 1);
				unk_0x70C1F5AA59767FE6(500);
				iLocal_405 = 0;
				func_7(&uLocal_403);
			}
		}
	}
}

bool func_226()
{
	int iVar0;
	
	iVar0 = unk_0x8B1574454E8C2421(joaat("am_mp_smpl_interior_int"));
	return (iVar0 > 0 || unk_0x653C5F9B95C5F892("AM_MP_SMPL_INTERIOR_INT", Global_1668658.f_2269, 1, 0));
}

void func_227()
{
	if ((Global_2524719.f_3954 && func_228(unk_0xA19140A5C42D8715())) && unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), 419.2876f, 4815.423f, -59.9983f, 0.4f, 0.5f, 2f, 0, 1, 0))
	{
		if (Global_2503988 == 0)
		{
			Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_183 = func_11();
			Global_2503988 = 2147483647;
			iLocal_395 = 1;
		}
	}
	else if (iLocal_395)
	{
		iLocal_395 = 0;
		Global_2503988 = 0;
	}
}

int func_228(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_229()
{
	if (unk_0xD8B89B387D170E27())
	{
		if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			iLocal_384 = unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715());
		}
		if (unk_0x893915B076B1DDF7(iLocal_384))
		{
			if (!iLocal_389)
			{
				unk_0xFA353DF21C47F87B(iLocal_384, &uLocal_386, &iLocal_385);
				iLocal_389 = 1;
			}
		}
		else
		{
			iLocal_385 = -1;
			if (iLocal_389)
			{
				iLocal_389 = 0;
			}
		}
		if (iLocal_385 == unk_0xFEB6EEC0545AF7AA("lr_supermod_int"))
		{
			if (!iLocal_383 && !func_230(unk_0xD4E735F4B6A956AC(), 1, 1))
			{
				Global_1361433 = 1;
				iLocal_383 = 1;
			}
		}
		else if (iLocal_383)
		{
			Global_1361433 = 0;
			iLocal_383 = 0;
		}
	}
	else if (iLocal_383)
	{
		Global_1361433 = 0;
		iLocal_383 = 0;
	}
}

int func_230(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_231()
{
	struct<6> Var0;
	char* sVar6;
	int iVar7;
	
	switch (iLocal_332)
	{
		case 0:
			iLocal_335 = unk_0x346268472B5F4E43();
			iLocal_332 = 1;
			break;
		
		case 4:
			Var0 = { func_236(iLocal_334) };
			if (func_235(0))
			{
				if (iLocal_337 == iLocal_335)
				{
					if (func_234(unk_0xFEB6EEC0545AF7AA(unk_0x08791BD93D5986C6(&Var0)), iLocal_334) == iLocal_337)
					{
						iLocal_336 = -1;
						iLocal_332 = 1;
					}
					else
					{
						iLocal_336 = unk_0xFEB6EEC0545AF7AA(unk_0x08791BD93D5986C6(&Var0));
						iLocal_337 = iLocal_335;
					}
				}
				return;
			}
			if (unk_0xFEB6EEC0545AF7AA(unk_0x08791BD93D5986C6(&Var0)) != iLocal_336)
			{
				iLocal_336 = -1;
				iLocal_332 = 1;
			}
			break;
		
		case 1:
			if (!Global_1312857)
			{
				Var0 = { func_236(iLocal_334) };
				sVar6 = unk_0x08791BD93D5986C6(&Var0);
				if (func_235(1))
				{
					iLocal_332 = 4;
					iLocal_336 = unk_0xFEB6EEC0545AF7AA(unk_0x08791BD93D5986C6(&Var0));
					return;
				}
				if (unk_0xFEB6EEC0545AF7AA(sVar6) != func_233(iLocal_334, iLocal_335))
				{
					iVar7 = func_234(unk_0xFEB6EEC0545AF7AA(sVar6), iLocal_334);
					if (iVar7 == iLocal_335 || iVar7 == -1)
					{
						iLocal_332 = 3;
					}
				}
				else
				{
					iLocal_334 = (iLocal_334 + 1 % 4);
				}
			}
			break;
		
		case 3:
			if (unk_0xEC103C948D1D3BEF(&iLocal_331, 1474183246, -1235790552, -50712147, 0, 1))
			{
				if (unk_0x93EA4BE98F3F425A(iLocal_331))
				{
					iLocal_332 = 2;
				}
			}
			break;
		
		case 2:
			func_232();
			if (iLocal_333 && unk_0xBDAA2C842F5C47BF(iLocal_331))
			{
				iLocal_331 = -1;
				iLocal_332 = 5;
			}
			break;
		
		case 5:
			break;
	}
}

void func_232()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_331 == -1 || iLocal_333)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(1))
	{
		if (unk_0x5712B9353A8F6573(1, iVar0) == 223)
		{
			if (unk_0x8866A4E42CDA3EF1(1, iVar0, &iVar1, 7))
			{
				if (iVar1 == iLocal_331 && iVar1 != -1)
				{
					iLocal_333 = 1;
				}
			}
		}
		iVar0++;
	}
}

int func_233(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 2111296764;
					break;
				
				case 1:
					return -1317602083;
					break;
				
				case 2:
					return -910612651;
					break;
				
				case 3:
					return -1474214072;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1021899225;
					break;
				
				case 1:
					return 679011386;
					break;
				
				case 2:
					return 463811610;
					break;
				
				case 3:
					return 1930095683;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					return -1805362695;
					break;
				
				case 1:
					return -1573921628;
					break;
				
				case 2:
					return 885756706;
					break;
				
				case 3:
					return 1885681508;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return -258358122;
					break;
				
				case 1:
					return 1555880605;
					break;
				
				case 2:
					return -1960003857;
					break;
				
				case 3:
					return -597990375;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1721351407;
					break;
				
				case 1:
					return 741359209;
					break;
				
				case 2:
					return 441858779;
					break;
				
				case 3:
					return -1159020831;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return 415345858;
					break;
				
				case 1:
					return -513273277;
					break;
				
				case 2:
					return -1943986577;
					break;
				
				case 3:
					return -1620984898;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1428801595;
					break;
				
				case 1:
					return -1149738778;
					break;
				
				case 2:
					return -1221272685;
					break;
				
				case 3:
					return 1213328744;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return -864746233;
					break;
				
				case 1:
					return -1361771507;
					break;
				
				case 2:
					return 1417040819;
					break;
				
				case 3:
					return -1051057840;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1677374897;
					break;
				
				case 1:
					return 352821643;
					break;
				
				case 2:
					return 1911968163;
					break;
				
				case 3:
					return 501495443;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return -1566717061;
					break;
				
				case 1:
					return 973286373;
					break;
				
				case 2:
					return -56691625;
					break;
				
				case 3:
					return -1096821952;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					return -1969221819;
					break;
				
				case 1:
					return 925667021;
					break;
				
				case 2:
					return 619035286;
					break;
				
				case 3:
					return -1379681663;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 1850472792;
					break;
				
				case 1:
					return -774928472;
					break;
				
				case 2:
					return 380655946;
					break;
				
				case 3:
					return 1623899730;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1732200539;
					break;
				
				case 1:
					return 352821643;
					break;
				
				case 2:
					return 797150728;
					break;
				
				case 3:
					return 501495443;
					break;
			}
			break;
	}
	return -1;
}

int func_234(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 12 + 1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_233(iParam1, iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_235(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x346268472B5F4E43();
	if (iVar0 != iLocal_335)
	{
		if (bParam0)
		{
			iLocal_337 = iLocal_335;
		}
		iLocal_335 = iVar0;
		return 1;
	}
	return 0;
}

struct<6> func_236(int iParam0)
{
	struct<6> Var0;
	
	StringCopy(&Var0, "UNKNOWN", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "LOADING_SPLAYER_L", 24);
			break;
		
		case 1:
			StringCopy(&Var0, "LOADING_MPLAYER_L", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "PM_INF_PGOB0", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "PM_INF_PGOT5", 24);
			break;
	}
	return Var0;
}

void func_237()
{
	int iVar0;
	
	if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_1732, 30))
	{
		iVar0 = func_166(7877, -1, 0);
		if ((!unk_0x05EFB6A616B6FADE(iVar0, 9) || !unk_0x05EFB6A616B6FADE(iVar0, 10)) || !unk_0x05EFB6A616B6FADE(iVar0, 11))
		{
			if (((((!func_249() && !func_248(unk_0xD4E735F4B6A956AC())) && !unk_0xD8B89B387D170E27()) && !func_247(unk_0xD4E735F4B6A956AC())) && !func_245(unk_0xD4E735F4B6A956AC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && func_243(0, 1, 1, 1, 1, 1, 1, 1, 1))
			{
				func_239();
				if (!unk_0x05EFB6A616B6FADE(iVar0, 9))
				{
					unk_0x2BCFB39E86340DAA(&iVar0, 9);
				}
				else if (!unk_0x05EFB6A616B6FADE(iVar0, 10))
				{
					unk_0x2BCFB39E86340DAA(&iVar0, 10);
				}
				else if (!unk_0x05EFB6A616B6FADE(iVar0, 11))
				{
					unk_0x2BCFB39E86340DAA(&iVar0, 11);
				}
				func_238(7877, iVar0, -1, 1, 0);
				unk_0x2BCFB39E86340DAA(&(Global_2524719.f_1732), 30);
			}
		}
		else
		{
			unk_0x2BCFB39E86340DAA(&(Global_2524719.f_1732), 30);
		}
	}
}

void func_238(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_167(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

void func_239()
{
	unk_0x143A55A4EA118F24("MIS_CUST_TXT3");
	unk_0x42360C300250E797(func_242());
	unk_0x42360C300250E797(func_241());
	unk_0x42360C300250E797(func_240());
	unk_0x9E55AC8543FF8836(0, 0, 1, -1);
}

char* func_240()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return " of modes inside the Nuclear Missile Base under Mount Chiliad.";
		
		case 4:
			return "en la base de misiles nucleares del monte Chiliad.";
		
		case 3:
			return " a delle modalit?? nella base missilistica nel Mount Chiliad.";
		
		case 2:
			return "Auswahl an Modi im Atomraketensilo im Mount Chiliad zu spielen.";
		
		case 1:
			return "et jouez ?? des modes dans le silo nucl??aire du Mont Chiliad.";
		
		case 6:
			return "?? w tryby wewn??trz bazy rakietowej pod g??r?? Chiliad.";
		
		case 7:
			return "???? ~HUD_COLOUR_NET_PLAYER23~~BLIP_ADVERSARY_BUNKER~~s~.";
		
		case 5:
			return "uma variedade de modos em uma base nuclear sob o Monte Chiliad.";
		
		case 11:
			return " los modos en la base de misiles nucleares bajo Mount Chiliad.";
		
		case 8:
			return "?????? ??? ????????? ?????? ????????? ?????????????????????.";
		
		case 10:
			return "???????????????????????????????????????????????????????????????";
		
		case 9:
			return "??????????????????????????????????????????????????????";
		
		case 12:
			return "???????????????????????????????????????????????????";
		
		default:
	}
	return "";
}

char* func_241()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return "~BLIP_ADVERSARY_BUNKER~~s~ to play a range";
		
		case 4:
			return "~BLIP_ADVERSARY_BUNKER~~s~ para jugar a diversos modos ";
		
		case 3:
			return "~HUD_COLOUR_NET_PLAYER23~~BLIP_ADVERSARY_BUNKER~~s~ per giocare";
		
		case 2:
			return "~HUD_COLOUR_NET_PLAYER23~~BLIP_ADVERSARY_BUNKER~~s~, um eine ";
		
		case 1:
			return "~HUD_COLOUR_NET_PLAYER23~~BLIP_ADVERSARY_BUNKER~~s~ ";
		
		case 6:
			return "~HUD_COLOUR_NET_PLAYER23~~BLIP_ADVERSARY_BUNKER~~s~, aby zagra";
		
		case 7:
			return "?????????? ?????????????? ?? ??????, ???????????????????? ";
		
		case 5:
			return "~HUD_COLOUR_NET_PLAYER23~~BLIP_ADVERSARY_BUNKER~~s~ para jogar ";
		
		case 11:
			return "~BLIP_ADVERSARY_BUNKER~~s~ para jugar una actualizaci??n de";
		
		case 8:
			return "~BLIP_ADVERSARY_BUNKER~~s~??? ????????? ????????? ???????????? ";
		
		case 10:
			return "~HUD_COLOUR_NET_PLAYER23~~BLIP_ADVERSARY_BUNKER~~s~????????????";
		
		case 9:
			return "~BLIP_ADVERSARY_BUNKER~~s~ ??????????????????????????????";
		
		case 12:
			return "~BLIP_ADVERSARY_BUNKER~~s~ ?????????????????????";
		
		default:
	}
	return "";
}

char* func_242()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return "The Bunker Series has been updated. Enter ~HUD_COLOUR_NET_PLAYER23~";
		
		case 4:
			return "Series de b??nker actualizadas. Ve a ~HUD_COLOUR_NET_PLAYER23~";
		
		case 3:
			return "La serie di sfide del bunker ?? stata aggiornata. Raggiungi ";
		
		case 2:
			return "Die Bunkerserie wurde aktualisiert. Begib dich zu?? ";
		
		case 1:
			return "??preuves bunker mises ?? jour. Rejoignez ";
		
		case 6:
			return "Zaktualizowano seri?? akcji w bunkrze. Wejd?? do ";
		
		case 7:
			return "?????????? ?????????????? ?????????????? ??????????????????. ";
		
		case 5:
			return "Os Desafios de Bunker foram atualizados. V?? at?? ";
		
		case 11:
			return "Series de b??nker: entra en ~HUD_COLOUR_NET_PLAYER23~";
		
		case 8:
			return "?????? ????????? ????????????: ~HUD_COLOUR_NET_PLAYER23~";
		
		case 10:
			return "?????????????????????????????????????????????????????????";
		
		case 9:
			return "????????????????????????????????? ~HUD_COLOUR_NET_PLAYER23~";
		
		case 12:
			return "?????????????????????????????? ~HUD_COLOUR_NET_PLAYER23~";
		
		default:
	}
	return "";
}

int func_243(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (unk_0x8D4ED2C97DFF2321() == -1)
	{
		return 0;
	}
	if (bParam3)
	{
		if ((unk_0x05EFB6A616B6FADE(Global_1589747[unk_0x8D4ED2C97DFF2321() /*790*/].f_13.f_1, 0) || Global_1589747[unk_0x8D4ED2C97DFF2321() /*790*/] != -1) || Global_1311716[0 /*4*/] > 0)
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (Global_1312847)
		{
			return 0;
		}
	}
	if (bParam6)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1654685, 15))
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_2524719.f_1719, 20))
		{
			return 0;
		}
	}
	if (bParam4)
	{
		if (Global_15822 != 0 || unk_0x904275961B875DEB())
		{
			return 0;
		}
	}
	if (bParam5)
	{
		if (unk_0x05EFB6A616B6FADE(Global_2524719.f_1721, 29))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (Global_2423801[unk_0x8D4ED2C97DFF2321() /*413*/].f_208 != 0)
		{
			return 0;
		}
	}
	if (bParam7)
	{
		if (unk_0x05EFB6A616B6FADE(Global_2524719.f_1724, 10))
		{
			if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_1724, 12))
			{
				return 0;
			}
		}
	}
	if (bParam8)
	{
		if (unk_0x05EFB6A616B6FADE(Global_2524719.f_1724, 16))
		{
			if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_1724, 18))
			{
				return 0;
			}
		}
	}
	if (Global_1625435[unk_0x8D4ED2C97DFF2321() /*560*/] != -1)
	{
		if (Global_2437022.f_2704[0 /*80*/].f_1 != 0)
		{
			return 0;
		}
	}
	if ((((((((((((((((((((((((func_244(unk_0xD4E735F4B6A956AC(), 236) || unk_0xE06AA0996C4E4E03()) || unk_0x05EFB6A616B6FADE(Global_1589747[unk_0x8D4ED2C97DFF2321() /*790*/].f_273.f_22, 14)) || unk_0x05EFB6A616B6FADE(Global_1589747[unk_0x8D4ED2C97DFF2321() /*790*/].f_273.f_22, 11)) || !unk_0x3A83743561B4F70C()) || Global_2534143) || unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100) || unk_0x05EFB6A616B6FADE(Global_1589747[unk_0x8D4ED2C97DFF2321() /*790*/].f_39.f_18, 0)) || Global_2437022.f_3028.f_578) || unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715())) || unk_0xD1ABB20CFF127CCC()) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || Global_1589747[unk_0x8D4ED2C97DFF2321() /*790*/].f_35) || unk_0x05EFB6A616B6FADE(Global_2423801[unk_0x8D4ED2C97DFF2321() /*413*/].f_208, 0)) || Global_1312466.f_18 != 0) || Global_1574167) || Global_2448386.f_733) || Global_2448386.f_580) || Global_1589747[unk_0x8D4ED2C97DFF2321() /*790*/].f_196 != 0) || Global_68494) || Global_2394733) || Global_25724) || Global_25725) || Global_4262186[unk_0x8D4ED2C97DFF2321() /*19*/].f_3 > -1) || Global_4456448.f_152990 == 15)
	{
		return 0;
	}
	return 1;
}

int func_244(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		if (Global_1625435[iParam0 /*560*/] == iParam1)
		{
			return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 7);
		}
	}
	return 0;
}

int func_245(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	if (Global_1589747[iParam0 /*790*/].f_273.f_24 > 0)
	{
		if (bParam1)
		{
			if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 0))
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
		if (func_246(iParam0) == 0)
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_246(iParam0) == 2)
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_246(iParam0) == 1)
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_246(iParam0) == 4)
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_246(iParam0) == 7)
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_246(iParam0) == 9)
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_246(iParam0) == 8)
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_246(iParam0) == 11)
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_246(iParam0) == 11)
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_246(iParam0) == 12)
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_246(iParam0) == 13)
		{
			return 1;
		}
	}
	return 0;
}

int func_246(int iParam0)
{
	if (Global_2423801[iParam0 /*413*/].f_309.f_4 == -1)
	{
		return -1;
	}
	return func_9(Global_2423801[iParam0 /*413*/].f_309.f_4);
}

int func_247(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
		else if ((Global_1312857 && iParam0 == unk_0xD4E735F4B6A956AC()) && func_10(iParam0, 1, 0))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_1625435[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

int func_249()
{
	if (func_251(unk_0xD4E735F4B6A956AC(), 0) && func_250(unk_0xD4E735F4B6A956AC()))
	{
		return 1;
	}
	return 0;
}

bool func_250(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_11.f_4, 20);
}

int func_251(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_252()
{
	if (!unk_0xD8B89B387D170E27())
	{
		if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if ((func_46(unk_0xD4E735F4B6A956AC()) && Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_7 != unk_0xD4E735F4B6A956AC()) && unk_0x8B1574454E8C2421(joaat("am_mp_arena_garage")) > 0)
			{
				if (Global_1668652 == 4)
				{
					if (func_253())
					{
						if (unk_0xE6F861B0A4D50CE0())
						{
							if ((!iLocal_394 && Global_1668658.f_17) && Global_1668658.f_19)
							{
								unk_0x99D88BBC8B927586();
								iLocal_394 = 1;
							}
						}
					}
					else
					{
						iLocal_394 = 1;
					}
				}
				else if (Global_1668652 > 4)
				{
					iLocal_394 = 1;
				}
			}
			else if (iLocal_394)
			{
				iLocal_394 = 0;
			}
		}
		else if (iLocal_394)
		{
			iLocal_394 = 0;
		}
	}
	else if (iLocal_394)
	{
		iLocal_394 = 0;
	}
}

bool func_253()
{
	bool bVar0;
	
	if (!func_228(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	bVar0 = unk_0xC10AB2F83514403D(unk_0xA19140A5C42D8715(), 145.8645f, 5154.39f, -90.0862f, 234.807f, 5211.929f, -80.5237f, 0, 1, 0);
	if (!bVar0)
	{
		bVar0 = unk_0xC10AB2F83514403D(unk_0xA19140A5C42D8715(), 148.9561f, 5161.855f, 9.8155f, 194.362f, 5220.034f, 17.27f, 0, 1, 0);
	}
	return bVar0;
}

void func_254()
{
	var uVar0;
	
	if ((!unk_0xD8B89B387D170E27() && func_30() == 0) && (unk_0x817B152F7462D506() % 10) == 0)
	{
		uVar0 = unk_0xB68EB57358F46F86(969.5376f, -3000.411f, -48.6469f, "imp_impexp_int_02");
		if (func_255(152))
		{
			func_203(152, 0);
		}
		if (unk_0x893915B076B1DDF7(uVar0))
		{
			if (unk_0xCA96527943C16C82(iVar0))
			{
				unk_0x91B3D9D185F338A1(iVar0, 0);
			}
			if (unk_0xD2242EF5F75A0A99(iVar0))
			{
				unk_0xF397403C7F0F348D(iVar0, 0);
			}
		}
	}
}

int func_255(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_204(iParam0) };
	if (Var0.f_1 != -1 && unk_0x05EFB6A616B6FADE(Global_31895[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

void func_256()
{
	if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196, 24) || bLocal_391)
	{
		unk_0xD0F5726B351557F4();
		if (!bLocal_391)
		{
			bLocal_391 = true;
		}
		if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196, 24) || Global_2524719.f_3954)
		{
			func_7(&uLocal_392);
		}
		if (func_3())
		{
			if (Global_4456448.f_130782 != 0 && !func_257(Global_4456448.f_130782))
			{
				unk_0x5DEF814991FF7421(-201, 0, 0);
			}
		}
		if ((!func_3() && !unk_0x47C3DC461C758C29()) && func_4())
		{
			if (!unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_196, 24) && !Global_2524719.f_3954)
			{
				if (!func_13(&uLocal_392))
				{
					func_14(&uLocal_392, 1, 0);
				}
				else if (func_12(&uLocal_392, 300, 1))
				{
					bLocal_391 = false;
					if (!bLocal_391)
					{
					}
				}
			}
			if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 205.3092f, 5162.609f, -86.5974f, 1) > 7f)
			{
				Global_1668658.f_2261 = 1;
			}
		}
	}
}

int func_257(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_262145.f_6340[iVar1] == 251)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5785[iVar1])
				{
					if (iParam0 == Global_262145.f_5019[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

void func_258()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (func_220(unk_0xD4E735F4B6A956AC()))
	{
		iVar1 = unk_0x78CED56884DEF3D7(-1522.425f, -2992.416f, -82.042f, 5f, joaat("hei_prop_hei_securitypanel"), 0, 0, 0);
		if (!unk_0xDC5D81351D6A4DDB(iVar1))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!iLocal_370)
		{
			iLocal_370 = 1;
			Global_1663728 = 1;
		}
	}
	else if (iLocal_370)
	{
		iLocal_370 = 0;
		Global_1663728 = 0;
	}
}

void func_259()
{
	if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_341, 14))
	{
		unk_0xD481A812073CCF02(0, 75, 1);
	}
}

void func_260()
{
	if ((func_263() || func_262()) || func_261())
	{
		iLocal_369 = 1;
		Global_1668658.f_2460 = 1;
	}
	else if (iLocal_369)
	{
		iLocal_369 = 0;
		Global_1668658.f_2460 = 0;
	}
}

int func_261()
{
	if (func_224(unk_0xD4E735F4B6A956AC()))
	{
		if (((!unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1586.923f, -3011.684f, -77.005f, -1586.929f, -3013.898f, -75.005f, 2f, 0, 1, 0) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1586.245f, -3016.417f, -77.005f, -1585.159f, -3017.226f, -75.005f, 2f, 0, 1, 0)) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1575.793f, -3014.969f, -80.00592f, -1579.351f, -3014.922f, -78.00592f, 2f, 0, 1, 0)) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1584.422f, -3008.716f, -76.98012f, -1585.765f, -3009.746f, -74.98012f, 4f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_262()
{
	return Global_4254407.f_770;
}

int func_263()
{
	if (Global_2437022.f_1151.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_264()
{
	if (func_268())
	{
		if (!func_267())
		{
			func_266();
			iLocal_366 = 1;
		}
	}
	else if (iLocal_366)
	{
		iLocal_366 = 0;
		func_265();
	}
}

void func_265()
{
	Global_2437022.f_1151.f_9 = 0;
}

void func_266()
{
	Global_2437022.f_1151.f_9 = 1;
}

bool func_267()
{
	return Global_2437022.f_1151.f_9;
}

int func_268()
{
	if ((func_269(&Global_2458552, 1) || func_269(&Global_2458552, 0)) || func_269(&Global_2458552, 2))
	{
		return 0;
	}
	return 1;
}

bool func_269(var uParam0, int iParam1)
{
	return *uParam0 == iParam1;
}

void func_270()
{
	bool bVar0;
	
	bVar0 = false;
	if (!unk_0xD8B89B387D170E27())
	{
		if (func_84(unk_0xD4E735F4B6A956AC()))
		{
			if (Global_2458220 != -1)
			{
				bVar0 = true;
			}
		}
		if (func_161(unk_0xD4E735F4B6A956AC(), 0))
		{
			bVar0 = true;
		}
		if (func_46(unk_0xD4E735F4B6A956AC()))
		{
			if (func_271(unk_0xD4E735F4B6A956AC()) || Global_2524719.f_3954)
			{
				bVar0 = true;
			}
		}
		if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_663)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!Global_262145.f_22789)
		{
			Global_262145.f_22789 = 1;
			iLocal_328 = 1;
		}
	}
	else if (iLocal_328)
	{
		Global_262145.f_22789 = 0;
		iLocal_328 = 0;
	}
}

bool func_271(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_196, 24);
}

void func_272()
{
	if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (func_273(unk_0xD4E735F4B6A956AC()))
		{
			if (func_222(unk_0xD4E735F4B6A956AC()))
			{
				if (Global_2503988 == 0)
				{
					Global_2503988 = 2147483647;
					iLocal_327 = 1;
				}
			}
			else if (iLocal_327)
			{
				Global_2503988 = 0;
				iLocal_327 = 0;
			}
		}
		else if (iLocal_327)
		{
			Global_2503988 = 0;
			iLocal_327 = 0;
		}
	}
	else if (iLocal_327)
	{
		Global_2503988 = 0;
		iLocal_327 = 0;
	}
}

int func_273(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_269, 14);
	}
	return 0;
}

void func_274()
{
	if (!func_46(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x05EFB6A616B6FADE(Global_96622, 0))
		{
			unk_0xFA57C719261AA55D(&Global_96622, 0);
		}
	}
}

void func_275()
{
	if (Global_3934113)
	{
		Global_1663730 = 1;
		if (!bLocal_323)
		{
			bLocal_323 = true;
		}
	}
	else if (bLocal_323)
	{
		Global_1663730 = 0;
	}
}

void func_276()
{
	int iVar0;
	
	if (unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715()))
	{
		iVar0 = unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715());
		if (!unk_0x7112137033807390(iVar0, 0))
		{
			if (unk_0xD3C4AB5E628133C1(iVar0, joaat("rcbandito")))
			{
				unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
			}
		}
	}
	if (unk_0xEB3AADF92B6AB741(unk_0xA19140A5C42D8715()) != 0)
	{
		if (!unk_0x7112137033807390(unk_0xEB3AADF92B6AB741(unk_0xA19140A5C42D8715()), 0))
		{
			if (unk_0xD3C4AB5E628133C1(unk_0xEB3AADF92B6AB741(unk_0xA19140A5C42D8715()), joaat("rcbandito")))
			{
				unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
			}
		}
	}
	if (unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715()) != 0)
	{
		if (!unk_0x7112137033807390(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715()), 0))
		{
			if (unk_0xD3C4AB5E628133C1(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715()), joaat("rcbandito")))
			{
				unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
			}
		}
	}
}

void func_277()
{
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && func_110(unk_0xA19140A5C42D8715(), 0) == -1)
	{
		if (func_279(unk_0xD4E735F4B6A956AC()))
		{
			if (func_278(unk_0xD4E735F4B6A956AC()) == 122)
			{
				if (!iLocal_322)
				{
					iLocal_322 = 1;
				}
			}
		}
		else if (iLocal_322)
		{
			if (!func_46(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x3A83743561B4F70C())
				{
					if (unk_0x3DF0D4C48D463CA8())
					{
						unk_0xA7CA68B004FFBD04(0, 0);
					}
					unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						unk_0x33CF95E95A476FB9(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0);
					}
					iLocal_322 = 0;
				}
			}
		}
	}
}

int func_278(int iParam0)
{
	if (iParam0 != func_11() && func_10(iParam0, 1, 1))
	{
		return Global_2423801[iParam0 /*413*/].f_309.f_13;
	}
	return -1;
}

int func_279(int iParam0)
{
	if (iParam0 != func_11() && func_10(iParam0, 1, 1))
	{
		if (func_87(iParam0) && !func_280(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_280(int iParam0)
{
	if (iParam0 != func_11() && func_10(iParam0, 1, 1))
	{
		return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_309, 4);
	}
	return 0;
}

void func_281()
{
	if (func_309())
	{
		if (func_10(unk_0xD4E735F4B6A956AC(), 0, 1) && func_307(unk_0xD4E735F4B6A956AC()))
		{
			if (iLocal_319)
			{
				if (!func_305())
				{
					iLocal_319 = 0;
					iLocal_318 = 0;
					iLocal_317 = 0;
					func_7(&uLocal_320);
				}
			}
			else if (iLocal_318)
			{
				if (func_282(226))
				{
					iLocal_319 = 1;
					iLocal_318 = 0;
				}
			}
			else if (iLocal_317)
			{
				if (!func_13(&uLocal_320))
				{
					func_14(&uLocal_320, 0, 0);
				}
				else if (func_12(&uLocal_320, 10000, 0))
				{
					func_7(&uLocal_320);
					iLocal_318 = 1;
					iLocal_317 = 0;
				}
			}
			else if (func_305())
			{
				if (func_166(5446, -1, 0) == 255)
				{
					iLocal_317 = 1;
					func_7(&uLocal_320);
				}
			}
		}
		else
		{
			iLocal_317 = 0;
			iLocal_318 = 0;
			iLocal_319 = 0;
		}
	}
}

int func_282(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0 == 226;
	if (func_309())
	{
		iVar1 = func_303(bVar0);
		if (!func_284(5, iVar1, &iLocal_316))
		{
			return 0;
		}
		if (iLocal_316 == 3)
		{
		}
		else if (iLocal_316 == 2)
		{
			func_283(iVar1);
		}
	}
	return 1;
}

void func_283(int iParam0)
{
	Global_4263468 = iParam0;
}

bool func_284(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (func_302() != -1)
			{
				return 0;
			}
			iVar0 = func_301(iParam0);
			if (func_297(78225582, -1799524201, iParam1, -1018905335, 1, 0, 1, 4, iVar0, 3))
			{
				*uParam2 = 1;
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && func_291())
			{
			}
			else
			{
				*uParam2 = 3;
				func_287(func_302());
			}
			break;
		
		case 1:
			if (func_286(func_302()))
			{
				if (func_285(func_302()) == 2)
				{
					*uParam2 = 2;
					func_287(func_302());
					func_283(iParam1);
				}
				else
				{
					*uParam2 = 3;
					func_287(func_302());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_285(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_2;
	}
	return 0;
}

int func_286(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_2 != 1;
	}
	return 0;
}

void func_287(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_309())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_290(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_4262927[iParam0 /*80*/].f_61);
		}
		func_288(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_288(var uParam0)
{
	uParam0->f_61 = 0;
	uParam0->f_61 = 2147483647;
	uParam0->f_61.f_1 = 0;
	uParam0->f_61.f_2 = 0;
	uParam0->f_61.f_3 = -1593119440;
	uParam0->f_61.f_4 = -2085313189;
	uParam0->f_61.f_5 = 0;
	uParam0->f_61.f_6 = 1227573907;
	uParam0->f_61.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_289(&(uParam0->f_13));
	func_289(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 16);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_61.f_8 = 0;
	uParam0->f_61.f_9 = 0;
	uParam0->f_61.f_10 = 0;
	uParam0->f_61.f_11 = 0;
	uParam0->f_61.f_13 = 0;
	uParam0->f_61.f_12 = 0;
	uParam0->f_61.f_14 = 0;
	uParam0->f_61.f_15 = 0;
	uParam0->f_61.f_16 = 0;
	uParam0->f_61.f_18 = 0;
}

void func_289(var uParam0)
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

int func_290(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

int func_291()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_309())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_302();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_163()) || unk_0x64BE694244417BDA())
		{
			if (func_296(Global_4262927[iVar2 /*80*/].f_61.f_6, Global_4262927[iVar2 /*80*/].f_61.f_4, Global_4262927[iVar2 /*80*/].f_61.f_1) == 1)
			{
				Global_4263478 = 1;
			}
			return 0;
		}
		if (Global_2459349)
		{
			if (Global_4262927[iVar2 /*80*/].f_61.f_6 == 1067618600 || Global_4262927[iVar2 /*80*/].f_61.f_6 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_295(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar3))
		{
			Global_4262927[iVar2 /*80*/].f_61.f_13 = 1;
			Global_4262927[iVar2 /*80*/].f_61.f_12 = 0;
			Global_4262927[iVar2 /*80*/].f_61.f_14 = unk_0x817B152F7462D506();
			if (bVar0)
			{
				Global_4262927[iVar2 /*80*/].f_61.f_8 = 1;
				Global_4262927[iVar2 /*80*/].f_61.f_12 = 1;
			}
			Global_4262927[iVar2 /*80*/].f_61.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_292(Global_4262927[iVar2 /*80*/], iVar2);
			}
			Global_4263464 = 1;
			return 1;
		}
	}
	return 0;
}

void func_292(struct<62> Param0, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)
{
	struct<3> Var0;
	int iVar35;
	
	if (iParam80 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -313275313;
	Var0.f_1 = unk_0xD4E735F4B6A956AC();
	Var0.f_2 = { Param0.f_61 };
	Var0.f_2.f_32 = iParam80;
	iVar35 = func_294(Var0.f_1);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_293();
		unk_0x04F37AFC39D93909(1, &Var0, 35, iVar35);
	}
}

void func_293()
{
	unk_0xD75A4240F0AD8613("AM_ARENA_SHP");
}

var func_294(int iParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, iParam0);
	return uVar0;
}

int func_295(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61;
	}
	return -1;
}

int func_296(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_297(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_309())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_163()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_302();
	if (iVar1 == -1)
	{
		if (!func_299(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_298(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4262927[iVar1 /*80*/].f_61.f_1 = Var2.f_2;
		Global_4262927[iVar1 /*80*/].f_61.f_15 = Var2.f_0;
		Global_4262927[iVar1 /*80*/].f_61.f_16 = Var2.f_1;
		if (bVar0 || unk_0x37434C9C32C0C1D5(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_298(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_299(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_309())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_163()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4262927[iVar1 /*80*/].f_61.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4262927[iVar1 /*80*/].f_61.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0xE85465535CBA17D7())
		{
			unk_0x220FA7ABD5D740BF();
		}
	}
	if (bVar0 || unk_0x4A5CD6185EA0E17E(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_300(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_300(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_309())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4262927[iVar0 /*80*/].f_61.f_2 = 1;
			Global_4262927[iVar0 /*80*/].f_61.f_1 = iParam5;
			Global_4262927[iVar0 /*80*/].f_61.f_3 = iParam1;
			Global_4262927[iVar0 /*80*/].f_61.f_4 = iParam2;
			Global_4262927[iVar0 /*80*/].f_61.f_7 = uParam3;
			Global_4262927[iVar0 /*80*/].f_61.f_5 = 0;
			Global_4262927[iVar0 /*80*/].f_61 = uParam0;
			Global_4262927[iVar0 /*80*/].f_61.f_6 = iParam4;
			Global_4262927[iVar0 /*80*/].f_61.f_11 = uParam8;
			Global_4262927[iVar0 /*80*/].f_61.f_10 = uParam7;
			Global_4262927[iVar0 /*80*/].f_61.f_13 = iParam9;
			Global_4262927[iVar0 /*80*/].f_61.f_12 = 0;
			Global_4262927[iVar0 /*80*/].f_61.f_14 = unk_0x817B152F7462D506();
			Global_4262927[iVar0 /*80*/].f_61.f_18 = 0;
			Global_4263464 = 0;
			if (bParam6)
			{
				Global_4262927[iVar0 /*80*/].f_61.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_292(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_301(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY5_v0", 64);
			break;
	}
	if (unk_0x429D45A6C6520026(&cVar0))
	{
		return -1;
	}
	return unk_0xFEB6EEC0545AF7AA(&cVar0);
}

int func_302()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_295(iVar0) != 2147483647)
		{
			if (func_290(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_303(bool bParam0)
{
	char* sVar0;
	
	func_304(&sVar0, bParam0);
	return unk_0xFEB6EEC0545AF7AA(&sVar0);
}

void func_304(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		StringCopy(sParam0, "IG_SELL_0_t0_v0", 64);
	}
	else
	{
		StringCopy(sParam0, "IG_BUY_0_t0_v0", 64);
	}
}

int func_305()
{
	if ((func_108(unk_0xD4E735F4B6A956AC()) && func_251(unk_0xD4E735F4B6A956AC(), 0)) && func_306(unk_0xD4E735F4B6A956AC()) == 226)
	{
		return 1;
	}
	return 0;
}

int func_306(int iParam0)
{
	if (func_251(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

bool func_307(int iParam0)
{
	return func_308(iParam0) != 0;
}

int func_308(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_273.f_174[5 /*12*/];
}

int func_309()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_310()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (func_279(unk_0xD4E735F4B6A956AC()))
	{
		if (func_278(unk_0xD4E735F4B6A956AC()) == 122)
		{
			if (unk_0xD4E735F4B6A956AC() == Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_7)
			{
				if (unk_0xDC5D81351D6A4DDB(Global_1686223))
				{
					if (!iLocal_313)
					{
						iLocal_313 = 1;
					}
				}
			}
		}
	}
	if (((iLocal_313 && !func_46(unk_0xD4E735F4B6A956AC())) && !func_87(unk_0xD4E735F4B6A956AC())) && unk_0x8B1574454E8C2421(unk_0xFEB6EEC0545AF7AA("AM_MP_ARENA_GARAGE")) < 1)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_1686223))
		{
			if (unk_0xB540EEBB14C48518(Global_1686223))
			{
				unk_0x1F7948851FB36E88(Global_1686223, 0, 1);
				unk_0x4C842FAB634AC89E(&Global_1686223);
				iLocal_313 = 0;
			}
			else
			{
				unk_0x39926DD5354848E1(Global_1686223);
			}
		}
	}
	if (func_46(unk_0xD4E735F4B6A956AC()))
	{
		if (!iLocal_314)
		{
			Global_4266905 = 1;
			iLocal_314 = 1;
		}
	}
	else if (iLocal_314)
	{
		iLocal_314 = 0;
		Global_4266905 = 0;
	}
	if (func_46(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xD4E735F4B6A956AC() == Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_7)
		{
			if (!func_311(unk_0xD4E735F4B6A956AC()))
			{
				iVar0 = 6;
				iVar1 = unk_0xEB67B4270D12F60E(198.4483f, 5175.033f, -88.8037f, 3f, joaat("rcbandito"), iVar0);
				if (unk_0xDC5D81351D6A4DDB(iVar1))
				{
					if (unk_0xB540EEBB14C48518(iVar1))
					{
						unk_0x1F7948851FB36E88(iVar1, 0, 1);
						unk_0x4C842FAB634AC89E(&iVar1);
					}
					else
					{
						unk_0x39926DD5354848E1(iVar1);
					}
				}
			}
		}
	}
	uVar2 = Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_5;
	if (func_46(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xD4E735F4B6A956AC() != Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_7)
		{
			if (unk_0xD4E735F4B6A956AC() == unk_0x8A9029ED8BCBFA86("AM_MP_ARENA_GARAGE", uVar2, 0))
			{
				if (!unk_0x99E35885976A6F83(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_7, "AM_MP_ARENA_GARAGE", uVar2) && !func_87(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_7))
				{
					iVar3 = 6;
					iVar4 = unk_0xEB67B4270D12F60E(198.4483f, 5175.033f, -88.8037f, 3f, joaat("rcbandito"), iVar3);
					if (unk_0xDC5D81351D6A4DDB(iVar4))
					{
						if (unk_0xB540EEBB14C48518(iVar4))
						{
							unk_0x1F7948851FB36E88(iVar4, 0, 1);
							unk_0x4C842FAB634AC89E(&iVar4);
						}
						else
						{
							unk_0x39926DD5354848E1(iVar4);
						}
					}
				}
			}
			Global_262145.f_24689 = 0;
			Global_4266905 = 1;
			if (!iLocal_312)
			{
				uLocal_315 = Global_262145.f_24682;
				iLocal_312 = 1;
				Global_262145.f_24682 = 1575162000;
			}
		}
		else if (iLocal_312)
		{
			Global_262145.f_24689 = 1;
			iLocal_312 = 0;
			Global_262145.f_24682 = uLocal_315;
			Global_4266905 = 0;
		}
	}
	else if (iLocal_312)
	{
		Global_262145.f_24689 = 1;
		iLocal_312 = 0;
		Global_262145.f_24682 = uLocal_315;
		Global_4266905 = 0;
	}
}

int func_311(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_261, 4);
	}
	return 0;
}

void func_312()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((unk_0x3A83743561B4F70C() && func_4()) && unk_0x4C9BACA8D249CB13())
	{
		if (!iLocal_311)
		{
			iVar1 = 0;
			while (iVar1 <= 256)
			{
				func_342(iVar1, &iVar2, 1);
				if (iVar2 >= 0 && iVar1 != 257)
				{
					iVar0 = func_166(func_341(4, iVar2), func_163(), 0);
					if (iVar0 == joaat("rcbandito"))
					{
						func_313(iVar2, -1);
					}
				}
				iVar1++;
			}
			iLocal_311 = 1;
		}
	}
	else if (iLocal_311)
	{
		iLocal_311 = 0;
	}
}

void func_313(int iParam0, int iParam1)
{
	int iVar0;
	
	func_340(iParam0, &iVar0);
	if (iVar0 >= 0)
	{
		func_336(iVar0, -1, -1);
	}
	func_333(&(Global_1321304[iParam0 /*141*/]));
	Global_2097152[func_332() /*12745*/].f_8178.f_1274 = unk_0x5E0F2F352218B916();
	func_314(iParam0, &(Global_1321304[iParam0 /*141*/]), 0, iParam1, 0, 0);
}

int func_314(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[func_332() /*12745*/].f_8178.f_1274 = unk_0x5E0F2F352218B916();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_331(1411, iParam0);
	func_330(iVar1, uParam1->f_137, iParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = func_331(1412, iParam0);
	func_330(iVar1, uParam1->f_138, iParam3, 1);
	if (!bParam4)
	{
	}
	if (func_329(iParam0))
	{
	}
	else
	{
		iVar1 = func_331(1413, iParam0);
		func_330(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_331(1414, iParam0) + iVar0);
				func_330(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			else
			{
				iVar1 = (func_328(iParam0) + (iVar0 - 25));
				func_330(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_331(1439, iParam0) + iVar0);
			func_330(iVar1, uParam1->f_59[iVar0], iParam3, 1);
			iVar0++;
		}
	}
	iVar1 = func_331(1441, iParam0);
	func_330(iVar1, uParam1->f_62, iParam3, 1);
	iVar1 = func_331(1442, iParam0);
	func_330(iVar1, uParam1->f_63, iParam3, 1);
	iVar1 = func_331(1443, iParam0);
	func_330(iVar1, uParam1->f_64, iParam3, 1);
	if (func_329(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_331(1444, iParam0);
		func_330(iVar1, uParam1->f_65, iParam3, 1);
	}
	iVar1 = func_331(1445, iParam0);
	func_330(iVar1, uParam1->f_67, iParam3, 1);
	if (func_329(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_331(1446, iParam0);
		func_330(iVar1, uParam1->f_68, iParam3, 1);
	}
	iVar1 = func_331(1447, iParam0);
	func_330(iVar1, uParam1->f_69, iParam3, 1);
	iVar1 = func_331(1448, iParam0);
	func_330(iVar1, uParam1->f_70, -1, 1);
	iVar1 = func_331(1449, iParam0);
	func_330(iVar1, uParam1->f_71, iParam3, 1);
	iVar1 = func_331(1450, iParam0);
	func_330(iVar1, uParam1->f_72, iParam3, 1);
	iVar1 = func_331(1451, iParam0);
	func_330(iVar1, uParam1->f_73, iParam3, 1);
	iVar1 = func_331(1452, iParam0);
	func_330(iVar1, uParam1->f_5, iParam3, 1);
	iVar1 = func_331(1453, iParam0);
	func_330(iVar1, uParam1->f_6, iParam3, 1);
	iVar1 = func_331(1454, iParam0);
	func_330(iVar1, uParam1->f_7, iParam3, 1);
	iVar1 = func_331(1455, iParam0);
	func_330(iVar1, uParam1->f_8, iParam3, 1);
	if (func_329(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_331(3880, iParam0);
		func_330(iVar1, uParam1->f_74, iParam3, 1);
		iVar1 = func_331(3881, iParam0);
		func_330(iVar1, uParam1->f_75, iParam3, 1);
		iVar1 = func_331(3882, iParam0);
		func_330(iVar1, uParam1->f_76, iParam3, 1);
		iVar1 = func_327(iParam0);
		func_330(iVar1, uParam1->f_97, iParam3, 1);
		iVar1 = func_326(iParam0);
		func_330(iVar1, uParam1->f_99, iParam3, 1);
		iVar1 = func_316(iParam0);
		func_330(iVar1, uParam1->f_98, iParam3, 1);
	}
	iVar2 = Global_2097152[func_332() /*12745*/].f_8178.f_1274;
	if (bParam5)
	{
		iVar2 = unk_0x5E0F2F352218B916();
	}
	func_238(1628, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_238(func_341(1, iParam0), uParam1->f_102, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_238(func_341(2, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_238(func_341(3, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_238(func_341(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_238(func_341(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_238(func_341(7, iParam0), uParam1->f_139, iParam3, 1, 0);
	if (!func_329(iParam0))
	{
		if (!unk_0x429D45A6C6520026(&(uParam1->f_1)))
		{
			func_315(func_341(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_315(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_167(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xFA6DA35484C73C8C(iVar0, uParam1);
	}
}

int func_316(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 < func_317(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	return 0;
}

int func_317(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_325(iParam0);
		return func_324(iVar0);
	}
	return (func_318(iParam0, -1) * iParam0 + 1);
}

int func_318(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_320(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_85(iParam1))
			{
				return 0;
			}
			else if (func_319(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 <= 124 && iParam1 > 0)
			{
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
	}
	return 0;
}

int func_319(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_320(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_321(unk_0xD4E735F4B6A956AC(), 0);
	}
	if (bParam1)
	{
		if (func_321(unk_0xD4E735F4B6A956AC(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_321(int iParam0, bool bParam1)
{
	if (Global_1589590 != func_11())
	{
		if (!func_323(Global_1589590))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xD4E735F4B6A956AC() != Global_1589590)
			{
				if (unk_0x05EFB6A616B6FADE(Global_2423801[Global_1589590 /*413*/].f_195, 24) || func_322(Global_1589590))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 24);
}

int func_322(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 9);
	}
	return 0;
}

int func_323(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_341, 2);
	}
	return 0;
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_325(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_326(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 < func_317(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	return 0;
}

int func_327(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 < func_317(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	return 0;
}

int func_328(int iParam0)
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 < func_317(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	return 0;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
			return 1;
			break;
	}
	return 0;
}

var func_330(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_163();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x255504F58AF9B890((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x255504F58AF9B890((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x255504F58AF9B890((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x255504F58AF9B890((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x931785B1D4E0FF39((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x255504F58AF9B890((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x931785B1D4E0FF39((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x255504F58AF9B890((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x255504F58AF9B890((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x255504F58AF9B890((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x255504F58AF9B890((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x255504F58AF9B890((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x255504F58AF9B890((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x255504F58AF9B890((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x255504F58AF9B890((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x255504F58AF9B890((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x255504F58AF9B890((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x255504F58AF9B890((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x255504F58AF9B890((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x255504F58AF9B890((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x255504F58AF9B890((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x255504F58AF9B890((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x440E9EB086F84471(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_331(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_317(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_317(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_317(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_317(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	return iVar0;
}

int func_332()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_333(var uParam0)
{
	func_334(uParam0);
	uParam0->f_102 = 0;
	uParam0->f_103 = 0;
	uParam0->f_104 = 0;
	StringCopy(&(uParam0->f_105), "", 64);
	StringCopy(&(uParam0->f_121), "", 64);
	uParam0->f_137 = 0;
	uParam0->f_138 = 0;
	uParam0->f_139 = 0;
	uParam0->f_140 = 0;
}

void func_334(var uParam0)
{
	func_335(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_335(var uParam0)
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

void func_336(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_337(iParam0, iParam1, iParam2);
	if (iParam0 >= 261)
	{
		return;
	}
	if (iParam2 == func_163() || iParam2 == -1)
	{
		Global_1663734[iParam0] = iParam1;
	}
}

void func_337(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_330(func_339(iParam0), iParam1, iParam2, 1);
		func_330(func_338(iParam0), 0, iParam2, 1);
	}
	else
	{
		func_330(func_339(iParam0), 255, iParam2, 1);
		func_330(func_338(iParam0), (iParam1 - 255), iParam2, 1);
	}
}

int func_338(int iParam0)
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	return (24625 + iParam0);
}

int func_339(int iParam0)
{
	if (iParam0 <= 38)
	{
		return (4036 + iParam0);
	}
	else if (iParam0 <= 48)
	{
		return ((5905 + iParam0) - 39);
	}
	else if (iParam0 <= 51)
	{
		return ((6025 + iParam0) - 49);
	}
	else if (iParam0 <= 64)
	{
		return ((7199 + iParam0) - 52);
	}
	else if (iParam0 <= 87)
	{
		return ((9207 + iParam0) - 65);
	}
	else if (iParam0 < 158)
	{
		return ((14734 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 184)
	{
		return ((17911 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18903 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21757 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24595 + iParam0) - 231);
	}
	return (4036 + iParam0);
}

void func_340(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 261)
		{
			if (iParam0 == (Global_1663734[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

int func_341(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case joaat("mpsv_lp0_31"):
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case joaat("mpsv_lp0_31"):
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case joaat("mpsv_lp0_31"):
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case joaat("mpsv_lp0_31"):
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case joaat("mpsv_lp0_31"):
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case joaat("mpsv_lp0_31"):
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case joaat("mpsv_lp0_31"):
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			break;
			break;
	}
	return 1629;
}

void func_342(int iParam0, var uParam1, bool bParam2)
{
	if (Global_262145.f_10050)
	{
		*uParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*uParam1 = (Global_1663734[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x817B152F7462D506() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*uParam1 = -1;
	}
}

void func_343()
{
	if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (func_46(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0xD4E735F4B6A956AC() != Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309.f_7)
			{
				if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 201.2196f, 5174.217f, -89.99727f, 198.8149f, 5175.969f, -87.49727f, 1.75f, 0, 1, 0))
				{
					if (!Global_262145.f_24786)
					{
						Global_262145.f_24786 = 1;
						if (!iLocal_310)
						{
							iLocal_310 = 1;
						}
					}
				}
				else if (iLocal_310)
				{
					Global_262145.f_24786 = 0;
					iLocal_310 = 0;
				}
			}
			else if (iLocal_310)
			{
				Global_262145.f_24786 = 0;
				iLocal_310 = 0;
			}
		}
		else if (iLocal_310)
		{
			Global_262145.f_24786 = 0;
			iLocal_310 = 0;
		}
	}
}

void func_344()
{
	int iVar0;
	
	if (Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_200)
	{
		iVar0 = unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), Global_2437022.f_70);
		if (iVar0 < 0)
		{
			Global_2437022.f_70 = unk_0xFFCC7EBF88BDEE54();
		}
	}
}

void func_345()
{
	bool bVar0;
	
	bVar0 = ((unk_0xD73B1037F6BD4B90(2, 199) || unk_0xDF0ADAD7E584090D(2, 199)) || unk_0x4E6A396CA4DB68F6(2, 199));
	if ((Global_68494 && func_346() == 6) && func_84(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x8B1574454E8C2421(joaat("appsecuroserv")) > 0 && bVar0)
		{
			Global_68494 = 0;
		}
	}
}

int func_346()
{
	return Global_2458220;
}

void func_347()
{
	int iVar0;
	
	iVar0 = func_228(unk_0xA19140A5C42D8715());
	if (iVar0 && !unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
	{
		iVar0 = 0;
	}
	if (unk_0xD8B89B387D170E27() || iVar0)
	{
		if (!Global_262145.f_25491)
		{
			iLocal_309 = 1;
			Global_262145.f_25491 = 1;
		}
	}
	else if (iLocal_309)
	{
		iLocal_309 = 0;
		Global_262145.f_25491 = 0;
	}
}

void func_348()
{
	if (func_350(unk_0xD4E735F4B6A956AC()))
	{
		if (!func_230(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (func_12(&uLocal_307, 10000, 0))
			{
				func_349(0);
				func_7(&uLocal_307);
			}
		}
		else
		{
			func_7(&uLocal_307);
		}
	}
	else if (func_13(&uLocal_307))
	{
		func_7(&uLocal_307);
	}
}

void func_349(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309, 25))
		{
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309), 25);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309, 25))
	{
		unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_309), 25);
	}
}

int func_350(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_309, 25);
	}
	return 0;
}

void func_351()
{
	if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (func_352(unk_0xD4E735F4B6A956AC()))
		{
			if (!iLocal_303)
			{
				iLocal_303 = 1;
				unk_0x0B756FF7161B9AB0("MobileRadioInGame", 1);
			}
			unk_0x863EF4AF862F63EC(0, 81, 1);
			unk_0x863EF4AF862F63EC(0, 82, 1);
			unk_0x863EF4AF862F63EC(0, 83, 1);
			unk_0x863EF4AF862F63EC(0, 84, 1);
			unk_0x863EF4AF862F63EC(0, 85, 1);
		}
		else if (iLocal_303)
		{
			iLocal_303 = 0;
			unk_0x0B756FF7161B9AB0("MobileRadioInGame", 0);
		}
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0xD3C4AB5E628133C1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), joaat("rcbandito")))
			{
				if (!iLocal_304)
				{
					iLocal_304 = 1;
					unk_0x0B756FF7161B9AB0("MobileRadioInGame", 1);
				}
				unk_0x863EF4AF862F63EC(0, 81, 1);
				unk_0x863EF4AF862F63EC(0, 82, 1);
				unk_0x863EF4AF862F63EC(0, 83, 1);
				unk_0x863EF4AF862F63EC(0, 84, 1);
				unk_0x863EF4AF862F63EC(0, 85, 1);
				if (Global_4456448.f_53223 == 15 && Global_4456448.f_55584 == 10)
				{
					if (Global_1589747[unk_0x8D4ED2C97DFF2321() /*790*/].f_767)
					{
						iLocal_306 = 1;
					}
					if (iLocal_305 || iLocal_306)
					{
						if (unk_0x7D8590E7AD7006E8() != Global_2405070.f_2670)
						{
							unk_0x1D147B251AD9C664(Global_2405070.f_2670);
							iLocal_305 = 0;
							iLocal_306 = 0;
						}
					}
				}
			}
			else if (iLocal_304)
			{
				iLocal_304 = 0;
				iLocal_305 = 0;
				iLocal_306 = 0;
				unk_0x0B756FF7161B9AB0("MobileRadioInGame", 0);
			}
		}
		else if (iLocal_304)
		{
			iLocal_304 = 0;
			iLocal_305 = 0;
			iLocal_306 = 0;
			unk_0x0B756FF7161B9AB0("MobileRadioInGame", 0);
		}
	}
	else if (iLocal_305)
	{
		iLocal_305 = 1;
		iLocal_303 = 0;
		iLocal_304 = 0;
		iLocal_306 = 0;
	}
}

int func_352(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_325, 29);
	}
	return 0;
}

void func_353()
{
	if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (func_354(unk_0xD4E735F4B6A956AC()))
		{
			if (!iLocal_302)
			{
				iLocal_302 = 1;
			}
		}
		else if (iLocal_302)
		{
			if (!func_46(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x3A83743561B4F70C())
				{
					if (unk_0x3DF0D4C48D463CA8())
					{
						unk_0xA7CA68B004FFBD04(0, 0);
					}
					unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						unk_0x33CF95E95A476FB9(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0);
					}
					iLocal_302 = 0;
				}
			}
		}
	}
}

int func_354(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_270, 28);
	}
	return 0;
}

void func_355()
{
	if (func_346() == 6 && func_84(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x8B1574454E8C2421(joaat("appsecuroserv")) > 0)
		{
			if (func_45() || func_360())
			{
				func_356();
			}
		}
	}
}

void func_356()
{
	if (func_45() || func_360())
	{
		func_359();
		func_357();
	}
}

void func_357()
{
	if ((!func_3() && !func_358()) && Global_2449168)
	{
		Global_4456448.f_130782 = 0;
	}
}

bool func_358()
{
	return Global_2448386.f_580;
}

void func_359()
{
	Global_2448386.f_645 = 1;
}

var func_360()
{
	return Global_2448386.f_624;
}

void func_361()
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var8;
	
	bVar0 = false;
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 0) && func_84(unk_0xD4E735F4B6A956AC()))
		{
			iVar1 = Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_24;
			func_362(iVar1, 818, &Var2, 88);
			func_362(iVar1, 819, &Var8, 88);
			if ((func_45() || func_360()) && unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Var2, Var8, 1.4f, 0, 1, 0))
			{
				if (!Global_1663723)
				{
					iLocal_300 = 1;
					Global_1663723 = 1;
				}
			}
			else if (iLocal_300)
			{
				iLocal_300 = 0;
				Global_1663723 = 0;
			}
			if (func_346() == 6)
			{
				iLocal_301 = 1;
				Global_262145.f_22789 = 1;
				bVar0 = true;
			}
		}
		else if (iLocal_300)
		{
			iLocal_300 = 0;
			Global_1663723 = 0;
		}
	}
	else if (iLocal_300)
	{
		iLocal_300 = 0;
		Global_1663723 = 0;
	}
	if (!bVar0 && iLocal_301)
	{
		Global_262145.f_22789 = 0;
		iLocal_301 = 0;
	}
}

void func_362(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<6> Var0[2];
	struct<3> Var13;
	
	Var0[0 /*6*/] = { func_366(iParam3) };
	Var0[1 /*6*/] = { func_366(iParam0) };
	*uParam2 = { func_364(iParam1, iParam3) };
	Var13 = { *uParam2 - Var0[0 /*6*/] };
	Var13 = { func_363(Var13, -Var0[0 /*6*/].f_3.f_2) };
	Var13 = { func_363(Var13, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0x2F230B37E9FFF23F(Var0[1 /*6*/], 0f, Var13) };
	switch (iParam1)
	{
		case 819:
		case 818:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_363(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_364(var uParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar23;
	
	iVar23 = 0;
	if (func_365(iParam1, &uVar6))
	{
		iVar23 = 1;
	}
	if (iVar23 && unk_0x8024DD8F8A7C2282(&Var0, &(Var0.f_3), uParam0, uVar6))
	{
		return Var0;
	}
	return Var0;
}

int func_365(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_366(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
	}
	return Var0;
}

void func_367()
{
	if (func_368(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xD1ABB20CFF127CCC())
		{
			unk_0xDFCC2872C0A03340(0);
		}
		else
		{
			unk_0xD0F5726B351557F4();
		}
	}
}

int func_368(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_309, 7);
	}
	return 0;
}

void func_369()
{
	if (unk_0x05EFB6A616B6FADE(Global_1668658.f_3314, 5))
	{
		Global_1663730 = 1;
	}
	else if (unk_0x3A83743561B4F70C())
	{
		Global_1663730 = 0;
	}
}

void func_370()
{
	var uVar0;
	
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		uVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (unk_0xDE26AC7E7C308E75("Not_Allow_As_Saved_Veh", 3))
		{
			if (unk_0xAEAF59799C2F26E4(uVar0, "Not_Allow_As_Saved_Veh"))
			{
				if (unk_0xBB4F5216F3FCA8EA(uVar0, "Not_Allow_As_Saved_Veh") != 0 && !Global_4456448.f_101)
				{
					Global_4456448.f_101 = 1;
					iLocal_297 = 1;
					func_14(&uLocal_298, 0, 0);
				}
			}
		}
	}
	if (iLocal_297)
	{
		if (func_371() || func_12(&uLocal_298, 15000, 0))
		{
			iLocal_297 = 0;
			Global_4456448.f_101 = 0;
			func_7(&uLocal_298);
		}
	}
}

bool func_371()
{
	return Global_1668658.f_15 != -1;
}

void func_372()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if ((((unk_0xD8B89B387D170E27() && !func_161(unk_0xD4E735F4B6A956AC(), 0)) && !func_189()) && func_188(1)) && func_4())
	{
		if (!iLocal_145)
		{
			iVar1 = 0;
			while (iVar1 <= joaat("weapon_rayminigun"))
			{
				iVar0 = iVar1;
				if (iVar0 != joaat("weapon_unarmed") || iVar0 != 0)
				{
					iVar2 = func_170(iVar0);
					if (((((((((((((((((iVar0 != joaat("weapon_knife") && iVar0 != joaat("gadget_parachute")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_nightstick")) && iVar0 != joaat("weapon_golfclub")) && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("gadget_parachute")) && iVar0 != joaat("weapon_pistol")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_bottle")) && iVar0 != joaat("weapon_dagger")) && iVar0 != joaat("weapon_knuckle")) && iVar0 != joaat("weapon_hatchet")) && iVar0 != joaat("weapon_machete")) && iVar0 != joaat("weapon_switchblade")) && iVar0 != joaat("weapon_battleaxe")) && iVar0 != joaat("weapon_poolcue")) && iVar0 != joaat("weapon_wrench"))
					{
						if (iVar1 > -1 && iVar1 < 143)
						{
							iLocal_146[iVar1] = func_166(iVar2, -1, 0);
						}
					}
				}
				iVar1++;
			}
			iLocal_145 = 1;
		}
	}
	else if ((func_4() && iLocal_145) && !unk_0xD8B89B387D170E27())
	{
		if (func_375())
		{
			iVar3 = 0;
			while (iVar3 <= joaat("weapon_rayminigun"))
			{
				iVar0 = iVar3;
				if (iVar0 != joaat("weapon_unarmed") || iVar0 != 0)
				{
					iVar4 = func_170(iVar0);
					if (((((((((((((((((iVar0 != joaat("weapon_knife") && iVar0 != joaat("gadget_parachute")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_nightstick")) && iVar0 != joaat("weapon_golfclub")) && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("gadget_parachute")) && iVar0 != joaat("weapon_pistol")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_bottle")) && iVar0 != joaat("weapon_dagger")) && iVar0 != joaat("weapon_knuckle")) && iVar0 != joaat("weapon_hatchet")) && iVar0 != joaat("weapon_machete")) && iVar0 != joaat("weapon_switchblade")) && iVar0 != joaat("weapon_battleaxe")) && iVar0 != joaat("weapon_poolcue")) && iVar0 != joaat("weapon_wrench"))
					{
						if (iVar3 > -1 && iVar3 < 143)
						{
							if (iLocal_146[iVar3] != func_166(iVar4, -1, 0) && func_166(iVar4, -1, 0) == 0)
							{
								if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), iVar0, 0))
								{
									func_238(iVar4, iLocal_146[iVar3], -1, 1, 0);
									iVar5 = func_374(iVar0);
									if (func_373(iVar5))
									{
										unk_0x3CB081F41F423663(unk_0xA19140A5C42D8715(), iVar5, iLocal_146[iVar3]);
									}
									unk_0xF0188A1B49D79AF7(unk_0xA19140A5C42D8715(), iVar0, iLocal_146[iVar3], 0, 0);
								}
							}
						}
					}
				}
				iVar3++;
			}
			iLocal_145 = 0;
		}
		else
		{
			iLocal_145 = 0;
		}
	}
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AMMO_PISTOL_FMJ"):
		case joaat("AMMO_PISTOL_HOLLOWPOINT"):
		case joaat("AMMO_PISTOL_INCENDIARY"):
		case joaat("AMMO_PISTOL_TRACER"):
		case joaat("AMMO_SMG_FMJ"):
		case joaat("AMMO_SMG_HOLLOWPOINT"):
		case joaat("AMMO_SMG_INCENDIARY"):
		case joaat("AMMO_SMG_TRACER"):
		case joaat("AMMO_SNIPER_ARMORPIERCING"):
		case joaat("AMMO_SNIPER_EXPLOSIVE"):
		case joaat("AMMO_SNIPER_FMJ"):
		case joaat("AMMO_SNIPER_INCENDIARY"):
		case joaat("AMMO_MG_ARMORPIERCING"):
		case joaat("AMMO_MG_FMJ"):
		case joaat("AMMO_MG_INCENDIARY"):
		case joaat("AMMO_MG_TRACER"):
		case joaat("AMMO_RIFLE_ARMORPIERCING"):
		case joaat("AMMO_RIFLE_FMJ"):
		case joaat("AMMO_RIFLE_INCENDIARY"):
		case joaat("AMMO_RIFLE_TRACER"):
		case joaat("AMMO_SHOTGUN_ARMORPIERCING"):
		case joaat("AMMO_SHOTGUN_EXPLOSIVE"):
		case joaat("AMMO_SHOTGUN_HOLLOWPOINT"):
		case joaat("AMMO_SHOTGUN_INCENDIARY"):
			return 1;
			break;
	}
	return 0;
}

int func_374(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			iVar0 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_pistol_mk2"):
			iVar0 = joaat("AMMO_PISTOL");
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_pistol_mk2_clip_fmj")))
				{
					iVar0 = joaat("AMMO_PISTOL_FMJ");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_pistol_mk2_clip_hollowpoint")))
				{
					iVar0 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_pistol_mk2_clip_incendiary")))
				{
					iVar0 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_pistol_mk2_clip_tracer")))
				{
					iVar0 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		
		case joaat("weapon_smg"):
			iVar0 = joaat("AMMO_SMG");
			break;
		
		case joaat("weapon_smg_mk2"):
			iVar0 = joaat("AMMO_SMG");
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_smg_mk2_clip_fmj")))
				{
					iVar0 = joaat("AMMO_SMG_FMJ");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_smg_mk2_clip_hollowpoint")))
				{
					iVar0 = joaat("AMMO_SMG_HOLLOWPOINT");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_smg_mk2_clip_incendiary")))
				{
					iVar0 = joaat("AMMO_SMG_INCENDIARY");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_smg_mk2_clip_tracer")))
				{
					iVar0 = joaat("AMMO_SMG_TRACER");
				}
			}
			break;
		
		case joaat("weapon_heavysniper"):
			iVar0 = joaat("AMMO_SNIPER");
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			iVar0 = joaat("AMMO_SNIPER");
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_heavysniper_mk2_clip_armorpiercing")))
				{
					iVar0 = joaat("AMMO_SNIPER_ARMORPIERCING");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_heavysniper_mk2_clip_explosive")))
				{
					iVar0 = joaat("AMMO_SNIPER_EXPLOSIVE");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_heavysniper_mk2_clip_fmj")))
				{
					iVar0 = joaat("AMMO_SNIPER_FMJ");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_heavysniper_mk2_clip_incendiary")))
				{
					iVar0 = joaat("AMMO_SNIPER_INCENDIARY");
				}
			}
			break;
		
		case joaat("weapon_combatmg"):
			iVar0 = joaat("AMMO_MG");
			break;
		
		case joaat("weapon_combatmg_mk2"):
			iVar0 = joaat("AMMO_MG");
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_combatmg_mk2_clip_armorpiercing")))
				{
					iVar0 = joaat("AMMO_MG_ARMORPIERCING");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_combatmg_mk2_clip_fmj")))
				{
					iVar0 = joaat("AMMO_MG_FMJ");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_combatmg_mk2_clip_incendiary")))
				{
					iVar0 = joaat("AMMO_MG_INCENDIARY");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_combatmg_mk2_clip_tracer")))
				{
					iVar0 = joaat("AMMO_MG_TRACER");
				}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar0 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			iVar0 = joaat("AMMO_RIFLE");
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_assaultrifle_mk2_clip_armorpiercing")))
				{
					iVar0 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_assaultrifle_mk2_clip_fmj")))
				{
					iVar0 = joaat("AMMO_RIFLE_FMJ");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_assaultrifle_mk2_clip_incendiary")))
				{
					iVar0 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_assaultrifle_mk2_clip_tracer")))
				{
					iVar0 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar0 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			iVar0 = joaat("AMMO_RIFLE");
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_carbinerifle_mk2_clip_armorpiercing")))
				{
					iVar0 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_carbinerifle_mk2_clip_fmj")))
				{
					iVar0 = joaat("AMMO_RIFLE_FMJ");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_carbinerifle_mk2_clip_incendiary")))
				{
					iVar0 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_carbinerifle_mk2_clip_tracer")))
				{
					iVar0 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar0 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			iVar0 = joaat("AMMO_SHOTGUN");
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_pumpshotgun_mk2_clip_armorpiercing")))
				{
					iVar0 = joaat("AMMO_SHOTGUN_ARMORPIERCING");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_pumpshotgun_mk2_clip_explosive")))
				{
					iVar0 = joaat("AMMO_SHOTGUN_EXPLOSIVE");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_pumpshotgun_mk2_clip_hollowpoint")))
				{
					iVar0 = joaat("AMMO_SHOTGUN_HOLLOWPOINT");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_pumpshotgun_mk2_clip_incendiary")))
				{
					iVar0 = joaat("AMMO_SHOTGUN_INCENDIARY");
				}
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			iVar0 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			iVar0 = joaat("AMMO_RIFLE");
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_specialcarbine_mk2_clip_armorpiercing")))
				{
					iVar0 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_specialcarbine_mk2_clip_fmj")))
				{
					iVar0 = joaat("AMMO_RIFLE_FMJ");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_specialcarbine_mk2_clip_incendiary")))
				{
					iVar0 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_specialcarbine_mk2_clip_tracer")))
				{
					iVar0 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		
		case joaat("weapon_snspistol"):
			iVar0 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_snspistol_mk2"):
			iVar0 = joaat("AMMO_PISTOL");
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_snspistol_mk2_clip_fmj")))
				{
					iVar0 = joaat("AMMO_PISTOL_FMJ");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_snspistol_mk2_clip_hollowpoint")))
				{
					iVar0 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_snspistol_mk2_clip_incendiary")))
				{
					iVar0 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_snspistol_mk2_clip_tracer")))
				{
					iVar0 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			iVar0 = joaat("AMMO_SNIPER");
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			iVar0 = joaat("AMMO_SNIPER");
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_marksmanrifle_mk2_clip_armorpiercing")))
				{
					iVar0 = joaat("AMMO_SNIPER_ARMORPIERCING");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_marksmanrifle_mk2_clip_fmj")))
				{
					iVar0 = joaat("AMMO_SNIPER_FMJ");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_marksmanrifle_mk2_clip_incendiary")))
				{
					iVar0 = joaat("AMMO_SNIPER_INCENDIARY");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_marksmanrifle_mk2_clip_tracer")))
				{
					iVar0 = joaat("AMMO_SNIPER_TRACER");
				}
			}
			break;
		
		case joaat("weapon_revolver"):
			iVar0 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_revolver_mk2"):
			iVar0 = joaat("AMMO_PISTOL");
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_revolver_mk2_clip_fmj")))
				{
					iVar0 = joaat("AMMO_PISTOL_FMJ");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_revolver_mk2_clip_hollowpoint")))
				{
					iVar0 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_revolver_mk2_clip_incendiary")))
				{
					iVar0 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_revolver_mk2_clip_tracer")))
				{
					iVar0 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			iVar0 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			iVar0 = joaat("AMMO_RIFLE");
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_bullpuprifle_mk2_clip_armorpiercing")))
				{
					iVar0 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_bullpuprifle_mk2_clip_fmj")))
				{
					iVar0 = joaat("AMMO_RIFLE_FMJ");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_bullpuprifle_mk2_clip_incendiary")))
				{
					iVar0 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (unk_0x15763A17141CD6EE(unk_0xA19140A5C42D8715(), iParam0, joaat("component_bullpuprifle_mk2_clip_tracer")))
				{
					iVar0 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
	}
	return iVar0;
}

int func_375()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 <= joaat("weapon_rayminigun"))
	{
		iVar0 = iVar1;
		if (iVar0 != joaat("weapon_unarmed") || iVar0 != 0)
		{
			iVar2 = func_170(iVar0);
			if (((((((((((((((((iVar0 != joaat("weapon_knife") && iVar0 != joaat("gadget_parachute")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_nightstick")) && iVar0 != joaat("weapon_golfclub")) && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("gadget_parachute")) && iVar0 != joaat("weapon_pistol")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_bottle")) && iVar0 != joaat("weapon_dagger")) && iVar0 != joaat("weapon_knuckle")) && iVar0 != joaat("weapon_hatchet")) && iVar0 != joaat("weapon_machete")) && iVar0 != joaat("weapon_switchblade")) && iVar0 != joaat("weapon_battleaxe")) && iVar0 != joaat("weapon_poolcue")) && iVar0 != joaat("weapon_wrench"))
			{
				if (func_166(iVar2, -1, 0) != 0)
				{
					return 0;
				}
			}
		}
		iVar1++;
	}
	return 1;
}

void func_376()
{
	if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_401, 0))
	{
		if (unk_0x2F161E7C6520CC0A() || func_377())
		{
			Global_1684975 = 0;
			Global_1684972 = 1;
		}
	}
	else if (Global_1684972)
	{
		Global_1684972 = 0;
	}
}

bool func_377()
{
	return unk_0x05724BB62A634BD8() != 0;
}

void func_378()
{
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && !func_230(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if ((unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1153.478f, -2167.444f, -13.82685f, -1125.479f, -2140.134f, 28.40295f, 32f, 0, 1, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1554.891f, -579.9868f, 32.91862f, -1573.224f, -552.1144f, 43.9537f, 8f, 0, 1, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1435.019f, -3019.551f, 12.7993f, -1421.163f, -3019.689f, 5.313002f, 11.5f, 0, 1, 0))
		{
			if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1) && !func_3())
			{
				unk_0x6259CDB47862A4F3(unk_0xA19140A5C42D8715(), 0, 0);
				if (unk_0xB540EEBB14C48518(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
				{
					unk_0xBAAFB49544432ABD(unk_0xA19140A5C42D8715(), -1167.073f, -2188.131f, 12.1956f);
				}
				else
				{
					unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), -1167.073f, -2188.131f, 12.1956f, 0, 0, 0, 1);
				}
			}
		}
	}
}

void func_379()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_280(unk_0xD4E735F4B6A956AC()) && Global_1668630) && func_380())
	{
		if (unk_0xDC5D81351D6A4DDB(Global_2524719.f_285))
		{
			bVar0 = false;
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = unk_0x1483A8AE554B8B2B(iVar1);
				if (iVar2 != func_11() && iVar2 != unk_0xD4E735F4B6A956AC())
				{
					iVar3 = unk_0xEE978C39384D834F(iVar2);
					if ((unk_0xDC5D81351D6A4DDB(iVar3) && unk_0x4915F4759304D5CF(iVar3)) && unk_0xE0FD180CD24C0B67(iVar3, Global_2524719.f_285, 0))
					{
						bVar0 = true;
					}
				}
				iVar1++;
			}
			if (bVar0)
			{
				if (unk_0xB540EEBB14C48518(Global_2524719.f_285))
				{
					unk_0x1F7948851FB36E88(Global_2524719.f_285, 1, 1);
					unk_0x4C842FAB634AC89E(&(Global_2524719.f_285));
				}
				else
				{
					unk_0x39926DD5354848E1(Global_2524719.f_285);
				}
			}
		}
	}
}

int func_380()
{
	if (func_381(2) || func_381(1))
	{
		return 1;
	}
	return 0;
}

bool func_381(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0x05EFB6A616B6FADE(Global_2437022.f_502.f_1, iParam0);
	}
	return unk_0x05EFB6A616B6FADE(Global_2437022.f_502.f_2, (iParam0 - 32));
}

void func_382()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x47C01C0E6F4C1D06() && (unk_0x817B152F7462D506() % 60) == 0)
	{
		if ((func_10(unk_0xD4E735F4B6A956AC(), 1, 1) && func_4()) && !unk_0xD8B89B387D170E27())
		{
			iVar1 = func_430();
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				iVar2 = func_429(iVar0);
				iVar3 = func_428(iVar2);
				iVar4 = func_426(iVar2);
				if (func_424(iVar4) && !func_387(func_391(iVar3, 0)))
				{
					func_384(func_391(iVar3, 0));
					func_383();
				}
				iVar0++;
			}
		}
	}
}

void func_383()
{
	if (!Global_2524719.f_4883.f_328)
	{
		Global_2524719.f_4883.f_328 = 1;
	}
}

void func_384(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_2097152[func_332() /*12745*/].f_5500.f_1[(iParam0 / 32)]), (iParam0 % 32));
		Global_2097152[func_332() /*12745*/].f_5500 = unk_0x5E0F2F352218B916();
		func_386();
		func_385();
	}
}

void func_385()
{
}

void func_386()
{
	func_238(1724, Global_2097152[func_332() /*12745*/].f_5500, -1, 1, 0);
	func_238(1725, Global_2097152[func_332() /*12745*/].f_5500.f_1[0], -1, 1, 0);
	func_238(1726, Global_2097152[func_332() /*12745*/].f_5500.f_1[1], -1, 1, 0);
	func_238(1727, Global_2097152[func_332() /*12745*/].f_5500.f_1[2], -1, 1, 0);
	func_238(1728, Global_2097152[func_332() /*12745*/].f_5500.f_1[3], -1, 1, 0);
}

int func_387(int iParam0)
{
	if (func_309())
	{
		if (iParam0 == func_391(245, 0) && func_166(3168, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_391(323, 0) && func_166(5393, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_391(324, 0) && func_388(9461, -1, -1))
		{
			return 1;
		}
		if (iParam0 == func_391(357, 0) && func_166(6156, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_391(402, 0) && func_166(7207, -1, 0) != 0)
		{
			return 1;
		}
	}
	if (iParam0 != -1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_2097152[func_332() /*12745*/].f_5500.f_1[(iParam0 / 32)], (iParam0 % 32)))
		{
			return 1;
		}
	}
	return 0;
}

int func_388(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_163();
	}
	iVar1 = func_390(iParam0, iParam1);
	uVar2 = func_389(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_389(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_390(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_163();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_391(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case joaat("mpsv_lp0_31"):
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_392(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_392(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		default:
	}
	return -1;
}

int func_392(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_423(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (unk_0xD711DD98E3A47F79())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_422() && func_421())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && unk_0x4C9BACA8D249CB13()) || (iParam0 == 207 && unk_0x4C9BACA8D249CB13())) || (iParam0 == 208 && unk_0x4C9BACA8D249CB13())) || (iParam0 == 209 && unk_0x4C9BACA8D249CB13()))
	{
		if (func_422())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_420(iParam0))
	{
		if (Global_69996)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_419(iVar0);
	if (iVar1 != -1)
	{
		if (func_417(func_418(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_416(iParam0))
	{
		if (func_422())
		{
			if ((iParam0 == 205 && Global_262145.f_19619) || (iParam0 != 205 && Global_262145.f_19618))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_415(iParam0))
	{
		if (func_411(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_410(iVar0);
	if (iVar2 != -1)
	{
		if (func_408(func_409(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_407(iVar0);
	if (iVar3 > 0)
	{
		if (func_405(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_404(iVar0);
	if (iVar4 != -1)
	{
		if (func_402(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_401(iVar0);
	if (iVar5 != -1)
	{
		if (func_396(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_395(iVar0);
	if (iVar6 != -1)
	{
		if (func_393(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_393(int iParam0)
{
	if (!Global_71205)
	{
		return 0;
	}
	if (func_395(iParam0) != -1)
	{
		if (func_424(func_394(iParam0)))
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

int func_394(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 8;
			break;
		
		case joaat("cerberus2"):
			return 9;
			break;
		
		case joaat("cerberus3"):
			return 10;
			break;
		
		case joaat("brutus"):
			return 11;
			break;
		
		case joaat("brutus2"):
			return 12;
			break;
		
		case joaat("brutus3"):
			return 13;
			break;
		
		case joaat("zr380"):
			return 14;
			break;
		
		case joaat("zr3802"):
			return 15;
			break;
		
		case joaat("zr3803"):
			return 16;
			break;
		
		case joaat("scarab"):
			return 20;
			break;
		
		case joaat("scarab2"):
			return 21;
			break;
		
		case joaat("scarab3"):
			return 22;
			break;
		
		case joaat("imperator"):
			return 17;
			break;
		
		case joaat("imperator2"):
			return 18;
			break;
		
		case joaat("imperator3"):
			return 19;
			break;
		
		case joaat("impaler"):
			return 102;
			break;
		
		case joaat("ratloader2"):
			return 103;
			break;
		
		case joaat("glendale"):
			return 104;
			break;
		
		case joaat("slamvan"):
			return 105;
			break;
		
		case joaat("dominator"):
			return 106;
			break;
		
		case joaat("issi3"):
			return 107;
			break;
		
		case joaat("gargoyle"):
			return 108;
			break;
	}
	return -1;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 0;
		
		case joaat("cerberus2"):
			return 1;
		
		case joaat("cerberus3"):
			return 2;
		
		case joaat("brutus"):
			return 3;
		
		case joaat("brutus2"):
			return 4;
		
		case joaat("brutus3"):
			return 5;
		
		case joaat("scarab"):
			return 6;
		
		case joaat("scarab2"):
			return 7;
		
		case joaat("scarab3"):
			return 8;
		
		case joaat("imperator"):
			return 9;
		
		case joaat("imperator2"):
			return 10;
		
		case joaat("imperator3"):
			return 11;
		
		case joaat("zr380"):
			return 12;
		
		case joaat("zr3802"):
			return 13;
		
		case joaat("zr3803"):
			return 14;
		
		case joaat("ratloader2"):
			return 15;
		
		case joaat("glendale"):
			return 16;
		
		case joaat("slamvan"):
			return 17;
		
		case joaat("dominator"):
			return 18;
		
		case joaat("impaler"):
			return 19;
		
		case joaat("issi3"):
			return 20;
		
		case joaat("gargoyle"):
			return 21;
		
		default:
	}
	return -1;
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			if (func_166(7230, -1, 0) >= func_400(iParam0) || Global_262145.f_24020)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pounder2"):
			if (func_166(7230, -1, 0) >= func_400(iParam0) || Global_262145.f_24021)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("oppressor2"):
			if (func_397(22050, -1, -1) >= func_400(iParam0) || Global_262145.f_24022)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pbus2"):
			if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_272.f_7, 1) || Global_262145.f_24024)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("patriot2"):
			if (func_166(7228, -1, 0) >= func_400(iParam0) || Global_262145.f_24025)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("blimp3"):
			if (func_166(7228, -1, 0) >= func_400(iParam0) || Global_262145.f_24026)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("scramjet"):
			if (func_388(22123, -1, -1) || Global_262145.f_24023)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_397(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_163();
	}
	iVar0 = 0;
	iVar1 = func_399(iParam0, iParam1);
	uVar2 = func_398(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8107725D56824351(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_398(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x255504F58AF9B890((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x255504F58AF9B890((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x255504F58AF9B890((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x255504F58AF9B890((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x255504F58AF9B890((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x255504F58AF9B890((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x255504F58AF9B890((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x255504F58AF9B890((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x255504F58AF9B890((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x255504F58AF9B890((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x255504F58AF9B890((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x255504F58AF9B890((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x255504F58AF9B890((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x255504F58AF9B890((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x255504F58AF9B890((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x255504F58AF9B890((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x255504F58AF9B890((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x255504F58AF9B890((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x255504F58AF9B890((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x255504F58AF9B890((iParam0 - 22194)) * 8) * 8;
	}
	return iVar0;
}

int func_399(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_163();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x931785B1D4E0FF39((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x931785B1D4E0FF39((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	return iVar0;
}

int func_400(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return Global_262145.f_24027;
			break;
		
		case joaat("pounder2"):
			return Global_262145.f_24028;
			break;
		
		case joaat("oppressor2"):
			return Global_262145.f_24029;
			break;
		
		case joaat("patriot2"):
			return Global_262145.f_24030;
			break;
		
		case joaat("blimp3"):
			return Global_262145.f_24031;
			break;
	}
	return 0;
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return 0;
			break;
		
		case joaat("pounder2"):
			return 1;
			break;
		
		case joaat("oppressor2"):
			return 2;
			break;
		
		case joaat("scramjet"):
			return 3;
			break;
		
		case joaat("pbus2"):
			return 4;
			break;
		
		case joaat("patriot2"):
			return 5;
			break;
		
		case joaat("blimp3"):
			return 6;
			break;
	}
	return -1;
}

int func_402(int iParam0)
{
	int iVar0;
	
	if (!Global_71205)
	{
		return 0;
	}
	iVar0 = func_166(5661, -1, 0);
	switch (iParam0)
	{
		case joaat("deluxo"):
			return unk_0x05EFB6A616B6FADE(iVar0, func_403(1));
		
		case joaat("akula"):
			return unk_0x05EFB6A616B6FADE(iVar0, func_403(2));
		
		case joaat("riot2"):
			return unk_0x05EFB6A616B6FADE(iVar0, func_403(6));
		
		case joaat("stromberg"):
			return unk_0x05EFB6A616B6FADE(iVar0, func_403(7));
		
		case joaat("chernobog"):
			return unk_0x05EFB6A616B6FADE(iVar0, func_403(10));
		
		case joaat("barrage"):
			return unk_0x05EFB6A616B6FADE(iVar0, func_403(11));
		
		case joaat("khanjali"):
			return unk_0x05EFB6A616B6FADE(iVar0, func_403(12));
		
		case joaat("volatol"):
			return unk_0x05EFB6A616B6FADE(iVar0, func_403(13));
		
		case joaat("thruster"):
			return unk_0x05EFB6A616B6FADE(iVar0, func_403(15));
		
		default:
	}
	return 0;
}

int func_403(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case joaat("deluxo"):
			return 0;
			break;
		
		case joaat("akula"):
			return 1;
			break;
		
		case joaat("riot2"):
			return 2;
			break;
		
		case joaat("stromberg"):
			return 3;
			break;
		
		case joaat("chernobog"):
			return 4;
			break;
		
		case joaat("barrage"):
			return 5;
			break;
		
		case joaat("khanjali"):
			return 6;
			break;
		
		case joaat("volatol"):
			return 7;
			break;
		
		case joaat("thruster"):
			return 8;
			break;
	}
	return -1;
}

int func_405(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_71205)
	{
		return 0;
	}
	iVar0 = func_407(iParam0);
	iVar1 = func_406();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_406()
{
	return func_166(6113, -1, 0);
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
			return Global_262145.f_22078;
		
		case joaat("rogue"):
			return Global_262145.f_22079;
		
		case joaat("alphaz1"):
			return Global_262145.f_22080;
		
		case joaat("havok"):
			return Global_262145.f_22081;
		
		case joaat("starling"):
			return Global_262145.f_22082;
		
		case joaat("molotok"):
			return Global_262145.f_22083;
		
		case joaat("tula"):
			return Global_262145.f_22084;
		
		case joaat("bombushka"):
			return Global_262145.f_22085;
		
		case joaat("howard"):
			return Global_262145.f_22086;
		
		case joaat("mogul"):
			return Global_262145.f_22087;
		
		case joaat("pyro"):
			return Global_262145.f_22088;
		
		case joaat("seabreeze"):
			return Global_262145.f_22089;
		
		case joaat("nokota"):
			return Global_262145.f_22090;
		
		case joaat("hunter"):
			return Global_262145.f_22091;
		
		default:
	}
	return 0;
}

bool func_408(int iParam0)
{
	if (!Global_71205)
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(func_166(5463, -1, 0), iParam0);
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
		
		case joaat("halftrack"):
			return 1;
		
		case joaat("trailersmall2"):
			return 2;
		
		case joaat("apc"):
			return 3;
		
		case joaat("tampa3"):
			return 5;
		
		case joaat("oppressor"):
			return 7;
		
		default:
	}
	return 3;
}

int func_410(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
			break;
		
		case joaat("halftrack"):
			return 1;
			break;
		
		case joaat("trailersmall2"):
			return 2;
			break;
		
		case joaat("apc"):
			return 3;
			break;
		
		case joaat("tampa3"):
			return 4;
			break;
		
		case joaat("oppressor"):
			return 5;
			break;
	}
	return -1;
}

int func_411(int iParam0)
{
	int iVar0;
	
	if (!Global_71205)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_412(iVar0);
}

bool func_412(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_176())
	{
		return 0;
	}
	iVar0 = func_413(iParam0);
	iVar1 = iParam0;
	return unk_0x05EFB6A616B6FADE(iVar0, func_156(iVar1));
}

int func_413(var uParam0)
{
	int iVar0;
	
	iVar0 = func_166(func_414(uParam0), -1, 0);
	return iVar0;
}

int func_414(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_157(iVar0);
	if ((func_30() == 0 || func_32() == 0) || (func_30() == 999 && func_32() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 738;
				break;
			
			case 1:
				return 739;
				break;
			}
	}
	return 9954;
}

int func_415(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_416(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

bool func_417(int iParam0)
{
	if (!Global_71205)
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(func_166(5326, -1, 0), iParam0);
}

int func_418(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0;
		
		case joaat("dune5"):
			return 0;
		
		case joaat("wastelander"):
			return 1;
		
		case joaat("blazer5"):
			return 2;
		
		case joaat("phantom2"):
			return 3;
		
		case joaat("voltic2"):
			return 4;
		
		case joaat("technical2"):
			return 5;
		
		case joaat("boxville5"):
			return 6;
		
		case joaat("ruiner2"):
			return 7;
		
		default:
	}
	return 0;
}

int func_419(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_420(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

int func_421()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	if (unk_0x05EFB6A616B6FADE(Global_25, 5))
	{
		if (unk_0x05EFB6A616B6FADE(Global_25, 1) || unk_0x05EFB6A616B6FADE(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AD48F3CEBA882E9(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (unk_0x05EFB6A616B6FADE(iVar0, 5))
		{
			if (unk_0x05EFB6A616B6FADE(iVar0, 1) || unk_0x05EFB6A616B6FADE(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0xF93DEFC3A4C8A766(0))
	{
		if (Global_144766.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x2AD48F3CEBA882E9(iVar2, &iVar1, -1))
			{
				if (unk_0x05EFB6A616B6FADE(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x63141F5FDACF3D9B())
	{
		iVar3 = unk_0x3278E95F94254201(866);
		if (unk_0x05EFB6A616B6FADE(iVar3, 1) || unk_0x05EFB6A616B6FADE(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0xC29B8FF8374918FD())
	{
		if (unk_0x0A68AE586CCE49F6())
		{
			if (unk_0x59E183DE06AD5BA4())
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp_unlock_exclus_content"), &uVar4, -1);
				unk_0x2BCFB39E86340DAA(&uVar4, 1);
				unk_0x2BCFB39E86340DAA(&uVar4, 3);
				unk_0x2BCFB39E86340DAA(&uVar4, 5);
				unk_0x2BCFB39E86340DAA(&Global_25, 1);
				unk_0x2BCFB39E86340DAA(&Global_25, 3);
				unk_0x2BCFB39E86340DAA(&Global_25, 5);
				unk_0x93180BE33E7149EF(joaat("sp_unlock_exclus_content"), uVar4, 1);
				if (unk_0x63141F5FDACF3D9B())
				{
					iVar4 = unk_0x3278E95F94254201(866);
					unk_0x2BCFB39E86340DAA(&iVar4, 1);
					unk_0x2BCFB39E86340DAA(&iVar4, 3);
					unk_0xF8B43D25409B2964(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_422()
{
	var uVar0;
	
	if (unk_0xC29B8FF8374918FD())
	{
		if (unk_0x0A68AE586CCE49F6())
		{
			if (unk_0x3750826756EA2005())
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x2BCFB39E86340DAA(&uVar0, 2);
				unk_0x2BCFB39E86340DAA(&uVar0, 4);
				unk_0x2BCFB39E86340DAA(&uVar0, 6);
				unk_0x2BCFB39E86340DAA(&Global_25, 2);
				unk_0x2BCFB39E86340DAA(&Global_25, 4);
				unk_0x2BCFB39E86340DAA(&Global_25, 6);
				unk_0x93180BE33E7149EF(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x63141F5FDACF3D9B())
				{
					iVar0 = unk_0x3278E95F94254201(866);
					unk_0x2BCFB39E86340DAA(&iVar0, 0);
					unk_0xF8B43D25409B2964(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_144765 == 2)
	{
		return 1;
	}
	else if (Global_144765 == 3)
	{
		return 0;
	}
	if (unk_0x63141F5FDACF3D9B())
	{
		if (unk_0x05EFB6A616B6FADE(unk_0x3278E95F94254201(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_423(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 258:
			return joaat("tug");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case joaat("mpsv_lp0_31"):
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		case 220:
			return joaat("brawler");
		
		case 221:
			return joaat("chino");
		
		case 222:
			return joaat("coquette3");
		
		case 223:
			return joaat("t20");
		
		case 224:
			return joaat("toro");
		
		case 225:
			return joaat("vindicator");
		
		case 229:
			return joaat("primo");
		
		case 228:
			return joaat("moonbeam");
		
		case 227:
			return joaat("faction");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("voodoo2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 264:
			return joaat("seven70");
		
		case 259:
			return joaat("windsor2");
		
		case 260:
			return joaat("prototipo");
		
		case 261:
			return joaat("fmj");
		
		case 262:
			return joaat("bestiagts");
		
		case 265:
			return joaat("pfister811");
		
		case 266:
			return joaat("reaper");
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("limo2");
		
		case 238:
			return joaat("mamba");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_68473;
		
		case 251:
			return joaat("virgo3");
		
		case 250:
			return joaat("tornado");
		
		case 249:
			return joaat("sabregt");
		
		case 252:
			return joaat("faction");
		
		case 246:
			return joaat("tampa");
		
		case 247:
			return joaat("sultan");
		
		case 49:
			return joaat("banshee");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("volatus");
		
		case 254:
			return joaat("cargobob2");
		
		case 255:
			return joaat("rumpo3");
		
		case 256:
			return joaat("brickade");
		
		case 257:
			return joaat("nimbus");
		
		case 267:
			return joaat("le7b");
		
		case 268:
			return joaat("omnis");
		
		case 269:
			return joaat("tropos");
		
		case 270:
			return joaat("brioso");
		
		case 271:
			return joaat("trophytruck");
		
		case 272:
			return joaat("trophytruck2");
		
		case 273:
			return joaat("contender");
		
		case 274:
			return joaat("cliffhanger");
		
		case 275:
			return joaat("bf400");
		
		case 279:
			return joaat("tyrus");
		
		case 280:
			return joaat("lynx");
		
		case 281:
			return joaat("sheava");
		
		case 276:
			return joaat("rallytruck");
		
		case 277:
			return joaat("tampa2");
		
		case 278:
			return joaat("gargoyle");
		
		case 282:
			return joaat("bagger");
		
		case 283:
			return joaat("esskey");
		
		case 284:
			return joaat("nightblade");
		
		case 285:
			return joaat("defiler");
		
		case 286:
			return joaat("avarus");
		
		case 287:
			return joaat("zombiea");
		
		case 288:
			return joaat("zombieb");
		
		case 289:
			return joaat("chimera");
		
		case 290:
			return joaat("daemon2");
		
		case 291:
			return joaat("ratbike");
		
		case 292:
			return joaat("shotaro");
		
		case 293:
			return joaat("raptor");
		
		case 294:
			return joaat("hakuchou2");
		
		case 296:
			return joaat("blazer4");
		
		case 297:
			return joaat("sanctus");
		
		case 295:
			return joaat("vortex");
		
		case 298:
			return joaat("manchez");
		
		case 299:
			return joaat("tornado6");
		
		case 300:
			return joaat("youga2");
		
		case 301:
			return joaat("wolfsbane");
		
		case 302:
			return joaat("faggio3");
		
		case 303:
			return joaat("faggio");
		
		case 304:
			return joaat("dune5");
		
		case 305:
			return joaat("phantom2");
		
		case 306:
			return joaat("technical2");
		
		case 307:
			return joaat("blazer5");
		
		case 308:
			return joaat("boxville5");
		
		case 309:
			return joaat("wastelander");
		
		case 310:
			return joaat("ruiner2");
		
		case 311:
			return joaat("voltic2");
		
		case 312:
			return joaat("penetrator");
		
		case 313:
			return joaat("tempesta");
		
		case 314:
			return joaat("italigtb");
		
		case 315:
			return joaat("nero");
		
		case 316:
			return joaat("diablous");
		
		case 317:
			return joaat("fcr");
		
		case 318:
			return joaat("specter");
		
		case 319:
			return joaat("gp1");
		
		case 320:
			return joaat("infernus2");
		
		case 321:
			return joaat("ruston");
		
		case 322:
			return joaat("turismo2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_68474;
		
		case 324:
			return Global_68475;
		
		case 325:
			return joaat("cheetah2");
		
		case 326:
			return joaat("torero");
		
		case 327:
			return joaat("vagner");
		
		case 328:
			return joaat("xa21");
		
		case 329:
			return joaat("apc");
		
		case 330:
			return joaat("dune3");
		
		case 331:
			return joaat("halftrack");
		
		case 332:
			return joaat("oppressor");
		
		case 333:
			return joaat("tampa3");
		
		case 334:
			return joaat("trailersmall2");
		
		case 335:
			return joaat("ardent");
		
		case 336:
			return joaat("nightshark");
		
		case 337:
			return joaat("lazer");
		
		case 338:
			return joaat("microlight");
		
		case 339:
			return joaat("mogul");
		
		case 340:
			return joaat("rogue");
		
		case 341:
			return joaat("starling");
		
		case 342:
			return joaat("seabreeze");
		
		case 343:
			return joaat("tula");
		
		case 344:
			return joaat("pyro");
		
		case 345:
			return joaat("molotok");
		
		case 346:
			return joaat("nokota");
		
		case 347:
			return joaat("bombushka");
		
		case 348:
			return joaat("hunter");
		
		case 349:
			return joaat("havok");
		
		case 350:
			return joaat("howard");
		
		case 351:
			return joaat("alphaz1");
		
		case 352:
			return joaat("cyclone");
		
		case 353:
			return joaat("visione");
		
		case 354:
			return joaat("retinue");
		
		case 355:
			return joaat("rapidgt3");
		
		case 356:
			return joaat("vigilante");
		
		case 357:
			return Global_68476;
		
		case 358:
			return joaat("deluxo");
		
		case 359:
			return joaat("stromberg");
		
		case 360:
			return joaat("riot2");
		
		case 361:
			return joaat("chernobog");
		
		case 362:
			return joaat("khanjali");
		
		case 363:
			return joaat("akula");
		
		case 364:
			return joaat("thruster");
		
		case 365:
			return joaat("barrage");
		
		case 366:
			return joaat("volatol");
		
		case 367:
			return joaat("comet4");
		
		case 368:
			return joaat("neon");
		
		case 369:
			return joaat("streiter");
		
		case 370:
			return joaat("sentinel3");
		
		case 371:
			return joaat("yosemite");
		
		case 372:
			return joaat("sc1");
		
		case 373:
			return joaat("autarch");
		
		case 374:
			return joaat("gt500");
		
		case 375:
			return joaat("hustler");
		
		case 376:
			return joaat("revolter");
		
		case 377:
			return joaat("pariah");
		
		case 378:
			return joaat("raiden");
		
		case 379:
			return joaat("savestra");
		
		case 380:
			return joaat("riata");
		
		case 381:
			return joaat("hermes");
		
		case 382:
			return joaat("comet5");
		
		case 383:
			return joaat("z190");
		
		case 384:
			return joaat("viseris");
		
		case 385:
			return joaat("kamacho");
		
		case 386:
			return joaat("gb200");
		
		case 387:
			return joaat("fagaloa");
		
		case 388:
			return joaat("ellie");
		
		case 389:
			return joaat("issi3");
		
		case 390:
			return joaat("michelli");
		
		case 391:
			return joaat("flashgt");
		
		case 392:
			return joaat("hotring");
		
		case 393:
			return joaat("tezeract");
		
		case 394:
			return joaat("tyrant");
		
		case 395:
			return joaat("dominator3");
		
		case 396:
			return joaat("taipan");
		
		case 397:
			return joaat("entity2");
		
		case 398:
			return joaat("jester3");
		
		case 399:
			return joaat("cheburek");
		
		case 400:
			return joaat("caracara");
		
		case 401:
			return joaat("seasparrow");
		
		case 402:
			return Global_68477;
		
		case 403:
			return joaat("mule4");
		
		case 404:
			return joaat("pounder2");
		
		case 405:
			return joaat("swinger");
		
		case 406:
			return joaat("menacer");
		
		case 407:
			return joaat("scramjet");
		
		case 408:
			return joaat("strikeforce");
		
		case 409:
			return joaat("oppressor2");
		
		case 410:
			return joaat("patriot2");
		
		case 411:
			return joaat("stafford");
		
		case 412:
			return joaat("freecrawler");
		
		case 415:
			return joaat("futo");
		
		case 416:
			return joaat("ruiner");
		
		case 417:
			return joaat("romero");
		
		case 418:
			return joaat("prairie");
		
		case 419:
			return joaat("baller");
		
		case 420:
			return joaat("serrano");
		
		case 421:
			return joaat("bjxl");
		
		case 422:
			return joaat("habanero");
		
		case 423:
			return joaat("fq2");
		
		case 424:
			return joaat("patriot");
		
		case 413:
			return joaat("blimp3");
		
		case 414:
			return joaat("pbus2");
		
		case 425:
			return joaat("cerberus");
		
		case 426:
			return joaat("cerberus2");
		
		case 427:
			return joaat("cerberus3");
		
		case 428:
			return joaat("brutus");
		
		case 429:
			return joaat("brutus2");
		
		case 430:
			return joaat("brutus3");
		
		case 431:
			return joaat("scarab");
		
		case 432:
			return joaat("scarab2");
		
		case 433:
			return joaat("scarab3");
		
		case 434:
			return joaat("imperator");
		
		case 435:
			return joaat("imperator2");
		
		case 436:
			return joaat("imperator3");
		
		case 437:
			return joaat("zr380");
		
		case 438:
			return joaat("zr3802");
		
		case 439:
			return joaat("zr3803");
		
		case 440:
			return joaat("impaler");
		
		case 450:
			return joaat("taxi");
		
		case 451:
			return joaat("bulldozer");
		
		case 452:
			return joaat("speedo2");
		
		case 453:
			return joaat("trash2");
		
		case 454:
			return joaat("barracks2");
		
		case 455:
			return joaat("mixer");
		
		case 456:
			return joaat("dune2");
		
		case 457:
			return joaat("tractor");
		
		case 458:
			return joaat("blista3");
		
		case 441:
			return joaat("vamos");
		
		case 442:
			return joaat("tulip");
		
		case 443:
			return joaat("deveste");
		
		case 444:
			return joaat("schlagen");
		
		case 445:
			return joaat("toros");
		
		case 446:
			return joaat("deviant");
		
		case 447:
			return joaat("clique");
		
		case 448:
			return joaat("italigto");
		
		case 449:
			return joaat("rcbandito");
		
		default:
	}
	return 0;
}

bool func_424(int iParam0)
{
	return func_388(func_425(iParam0), -1, -1);
}

int func_425(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		
		case 9:
			return 24964;
			break;
		
		case 10:
			return 24966;
			break;
		
		case 11:
			return 24965;
			break;
		
		case 12:
			return 24968;
			break;
		
		case 13:
			return 25101;
			break;
		
		case 14:
			return 24967;
			break;
		
		case 15:
			return 25105;
			break;
		
		case 16:
			return 25106;
			break;
		
		case 20:
			return 25102;
			break;
		
		case 21:
			return 25103;
			break;
		
		case 22:
			return 25104;
			break;
		
		case 102:
			return 24969;
			break;
		
		case 17:
			return 25107;
			break;
		
		case 18:
			return 25108;
			break;
		
		case 19:
			return 25109;
			break;
		
		case 103:
			return 24972;
			break;
		
		case 104:
			return 24973;
			break;
		
		case 105:
			return 24974;
			break;
		
		case 106:
			return 24975;
			break;
		
		case 107:
			return 24976;
			break;
		
		case 108:
			return 24978;
			break;
		
		case 109:
			return 24980;
			break;
		
		case 110:
			return 24981;
			break;
		
		case 111:
			return 24982;
			break;
		
		case 112:
			return 24983;
			break;
		
		case 113:
			return 24984;
			break;
		
		case 114:
			return 24985;
			break;
		
		case 115:
			return 24986;
			break;
		
		case 116:
			return 24987;
			break;
		
		case 117:
			return 24988;
			break;
		
		case 118:
			return 24989;
			break;
		
		case 119:
			return 24990;
			break;
		
		case 120:
			return 24991;
			break;
		
		case 0:
			return 24992;
			break;
		
		case 1:
			return 24993;
			break;
		
		case 2:
			return 24994;
			break;
		
		case 3:
			return 24995;
			break;
		
		case 4:
			return 24996;
			break;
		
		case 5:
			return 24997;
			break;
		
		case 6:
			return 24998;
			break;
		
		case 7:
			return 24999;
			break;
		
		case 121:
			return 25117;
			break;
		
		case 122:
			return 25118;
			break;
		
		case 23:
			return 25119;
			break;
		
		case 133:
			return 25125;
			break;
		
		case 134:
			return 25127;
			break;
		
		case 135:
			return 25128;
			break;
		
		case 27:
			return 25129;
			break;
		
		case 154:
			return 25136;
			break;
		
		case 155:
			return 25139;
			break;
		
		case 156:
			return 25140;
			break;
		
		case 31:
			return 25141;
			break;
		
		case 175:
			return 25148;
			break;
		
		case 176:
			return 25151;
			break;
		
		case 177:
			return 25152;
			break;
		
		case 35:
			return 25153;
			break;
		
		case 187:
			return 25160;
			break;
		
		case 188:
			return 25161;
			break;
		
		case 39:
			return 25162;
			break;
		
		case 200:
			return 25168;
			break;
		
		case 201:
			return 25169;
			break;
		
		case 202:
			return 25170;
			break;
		
		case 203:
			return 25173;
			break;
		
		case 204:
			return 25174;
			break;
		
		case 43:
			return 25175;
			break;
		
		case 228:
			return 25179;
			break;
		
		case 229:
			return 25180;
			break;
		
		case 230:
			return 25183;
			break;
		
		case 231:
			return 25184;
			break;
		
		case 47:
			return 25185;
			break;
		
		case 243:
			return 25188;
			break;
		
		case 244:
			return 25191;
			break;
		
		case 245:
			return 25192;
			break;
		
		case 51:
			return 25193;
			break;
		
		case 254:
			return 25198;
			break;
		
		case 255:
			return 25202;
			break;
		
		case 256:
			return 25203;
			break;
		
		case 55:
			return 25204;
			break;
		
		case 269:
			return 25209;
			break;
		
		case 270:
			return 25212;
			break;
		
		case 271:
			return 25213;
			break;
		
		case 59:
			return 25214;
			break;
		
		case 279:
			return 25217;
			break;
		
		case 280:
			return 25221;
			break;
		
		case 281:
			return 25222;
			break;
		
		case 63:
			return 25223;
			break;
		
		case 302:
			return 25228;
			break;
		
		case 303:
			return 24979;
			break;
		
		case 304:
			return 25229;
			break;
		
		case 305:
			return 25111;
			break;
		
		case 67:
			return 25230;
			break;
		
		case 68:
			return 25112;
			break;
		
		case 72:
			return 25231;
			break;
		
		case 73:
			return 25233;
			break;
		
		case 74:
			return 25234;
			break;
		
		case 75:
			return 25235;
			break;
		
		case 76:
			return 25236;
			break;
		
		case 77:
			return 25394;
			break;
		
		case 306:
			return 25395;
			break;
		
		case 307:
			return 25396;
			break;
		
		case 308:
			return 25397;
			break;
		
		case 309:
			return 25398;
			break;
		
		case 310:
			return 25399;
			break;
		
		case 311:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 25245;
			break;
		
		case 80:
			return 25246;
			break;
		
		case 81:
			return 25247;
			break;
		
		case 82:
			return 25248;
			break;
		
		case 83:
			return 25249;
			break;
		
		case 84:
			return 25250;
			break;
		
		case 85:
			return 25000;
			break;
		
		case 86:
			return 25251;
			break;
		
		case 87:
			return 25252;
			break;
		
		case 88:
			return 25253;
			break;
		
		case 89:
			return 25254;
			break;
		
		case 90:
			return 25255;
			break;
		
		case 91:
			return 25256;
			break;
		
		case 92:
			return 25257;
			break;
		
		case 93:
			return 25258;
			break;
		
		case 94:
			return 25259;
			break;
		
		case 95:
			return 25260;
			break;
		
		case 96:
			return 25261;
			break;
		
		case 97:
			return 25262;
			break;
		
		case 98:
			return 25263;
			break;
		
		case 99:
			return 25264;
			break;
		
		case 100:
			return 25225;
			break;
		
		case 101:
			return 25178;
			break;
		
		case 312:
			return 25265;
			break;
		
		case 313:
			return 25266;
			break;
		
		case 314:
			return 25267;
			break;
		
		case 315:
			return 25268;
			break;
		
		case 316:
			return 24977;
			break;
		
		case 317:
			return 25269;
			break;
		
		case 318:
			return 25270;
			break;
		
		case 319:
			return 25271;
			break;
		
		case 320:
			return 25272;
			break;
		
		case 321:
			return 25273;
			break;
		
		case 322:
			return 25274;
			break;
		
		case 323:
			return 25275;
			break;
		
		case 324:
			return 25276;
			break;
		
		case 325:
			return 25277;
			break;
		
		case 326:
			return 25278;
			break;
		
		case 327:
			return 25279;
			break;
		
		case 328:
			return 25280;
			break;
		
		case 329:
			return 25281;
			break;
		
		case 330:
			return 25282;
			break;
		
		case 331:
			return 25283;
			break;
		
		case 332:
			return 25284;
			break;
		
		case 333:
			return 25285;
			break;
		
		case 334:
			return 25286;
			break;
		
		case 335:
			return 25287;
			break;
		
		case 336:
			return 25288;
			break;
		
		case 337:
			return 25289;
			break;
		
		case 338:
			return 25290;
			break;
		
		case 339:
			return 25291;
			break;
		
		case 340:
			return 25292;
			break;
		
		case 341:
			return 25293;
			break;
		
		case 342:
			return 25294;
			break;
		
		case 343:
			return 25295;
			break;
		
		case 344:
			return 25296;
			break;
		
		case 345:
			return 25297;
			break;
		
		case 346:
			return 25298;
			break;
		
		case 347:
			return 25299;
			break;
		
		case 348:
			return 25300;
			break;
		
		case 349:
			return 25301;
			break;
		
		case 350:
			return 25302;
			break;
		
		case 351:
			return 25303;
			break;
		
		case 352:
			return 25304;
			break;
		
		case 353:
			return 25305;
			break;
		
		case 354:
			return 25306;
			break;
		
		case 355:
			return 25307;
			break;
		
		case 356:
			return 25308;
			break;
		
		case 357:
			return 25309;
			break;
		
		case 358:
			return 25310;
			break;
		
		case 359:
			return 25311;
			break;
		
		case 360:
			return 25312;
			break;
		
		case 361:
			return 25313;
			break;
		
		case 362:
			return 25314;
			break;
		
		case 363:
			return 25315;
			break;
		
		case 364:
			return 25316;
			break;
		
		case 365:
			return 25317;
			break;
		
		case 366:
			return 25318;
			break;
		
		case 367:
			return 25319;
			break;
		
		case 368:
			return 25320;
			break;
		
		case 369:
			return 25321;
			break;
		
		case 370:
			return 25322;
			break;
		
		case 371:
			return 25323;
			break;
		
		case 372:
			return 25324;
			break;
		
		case 373:
			return 25325;
			break;
		
		case 374:
			return 25326;
			break;
		
		case 375:
			return 25327;
			break;
		
		case 376:
			return 25328;
			break;
		
		case 377:
			return 25329;
			break;
		
		case 378:
			return 25330;
			break;
		
		case 379:
			return 25331;
			break;
		
		case 380:
			return 25332;
			break;
		
		case 381:
			return 25333;
			break;
		
		case 382:
			return 25334;
			break;
		
		case 383:
			return 25335;
			break;
		
		case 384:
			return 25336;
			break;
		
		case 385:
			return 25337;
			break;
		
		case 386:
			return 25338;
			break;
		
		case 387:
			return 25339;
			break;
		
		case 388:
			return 25340;
			break;
		
		case 389:
			return 25341;
			break;
		
		case 390:
			return 25342;
			break;
		
		case 391:
			return 25343;
			break;
		
		case 392:
			return 25344;
			break;
		
		case 393:
			return 25345;
			break;
		
		case 394:
			return 25346;
			break;
		
		case 395:
			return 25347;
			break;
		
		case 396:
			return 24970;
			break;
		
		case 397:
			return 25348;
			break;
		
		case 398:
			return 25349;
			break;
		
		case 399:
			return 25350;
			break;
		
		case 400:
			return 25351;
			break;
		
		case 401:
			return 25352;
			break;
		
		case 402:
			return 25353;
			break;
		
		case 403:
			return 25354;
			break;
		
		case 404:
			return 25355;
			break;
		
		case 405:
			return 25356;
			break;
		
		case 406:
			return 25357;
			break;
		
		case 407:
			return 25358;
			break;
		
		case 408:
			return 25359;
			break;
		
		case 409:
			return 25360;
			break;
		
		case 410:
			return 25361;
			break;
		
		case 411:
			return 25362;
			break;
		
		case 412:
			return 25363;
			break;
		
		case 413:
			return 25364;
			break;
		
		case 414:
			return 25365;
			break;
		
		case 415:
			return 25366;
			break;
		
		case 416:
			return 25367;
			break;
		
		case 417:
			return 25368;
			break;
		
		case 418:
			return 25369;
			break;
		
		case 419:
			return 25370;
			break;
		
		case 420:
			return 25371;
			break;
		
		case 421:
			return 25373;
			break;
		
		case 422:
			return 25374;
			break;
		
		case 423:
			return 25375;
			break;
		
		case 424:
			return 25377;
			break;
		
		case 425:
			return 25378;
			break;
		
		case 426:
			return 25379;
			break;
		
		case 427:
			return 25382;
			break;
		
		case 428:
			return 25383;
			break;
		
		case 429:
			return 25386;
			break;
		
		case 430:
			return 25390;
			break;
		
		case 431:
			return 25391;
			break;
		
		case 432:
			return 25392;
			break;
		
		case 433:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		
		case 25:
			return 25113;
			break;
		
		case 26:
			return 25114;
			break;
		
		case 28:
			return 25115;
			break;
		
		case 29:
			return 25116;
			break;
		
		case 30:
			return 25120;
			break;
		
		case 32:
			return 25121;
			break;
		
		case 33:
			return 25122;
			break;
		
		case 34:
			return 25123;
			break;
		
		case 36:
			return 25124;
			break;
		
		case 37:
			return 25126;
			break;
		
		case 38:
			return 25130;
			break;
		
		case 40:
			return 25131;
			break;
		
		case 41:
			return 25132;
			break;
		
		case 42:
			return 25133;
			break;
		
		case 44:
			return 25134;
			break;
		
		case 45:
			return 25137;
			break;
		
		case 46:
			return 25138;
			break;
		
		case 48:
			return 25142;
			break;
		
		case 49:
			return 25143;
			break;
		
		case 50:
			return 25144;
			break;
		
		case 52:
			return 25145;
			break;
		
		case 53:
			return 25146;
			break;
		
		case 54:
			return 25147;
			break;
		
		case 56:
			return 25149;
			break;
		
		case 57:
			return 25150;
			break;
		
		case 58:
			return 25154;
			break;
		
		case 60:
			return 25155;
			break;
		
		case 61:
			return 25156;
			break;
		
		case 62:
			return 25157;
			break;
		
		case 64:
			return 25158;
			break;
		
		case 65:
			return 25159;
			break;
		
		case 66:
			return 25163;
			break;
		
		case 69:
			return 25164;
			break;
		
		case 70:
			return 25165;
			break;
		
		case 71:
			return 25166;
			break;
		
		case 123:
			return 25167;
			break;
		
		case 124:
			return 25171;
			break;
		
		case 125:
			return 25172;
			break;
		
		case 126:
			return 25176;
			break;
		
		case 127:
			return 25177;
			break;
		
		case 128:
			return 25181;
			break;
		
		case 129:
			return 25182;
			break;
		
		case 130:
			return 25186;
			break;
		
		case 131:
			return 25187;
			break;
		
		case 132:
			return 25189;
			break;
		
		case 136:
			return 25190;
			break;
		
		case 137:
			return 25194;
			break;
		
		case 138:
			return 25195;
			break;
		
		case 139:
			return 25196;
			break;
		
		case 140:
			return 25197;
			break;
		
		case 141:
			return 25199;
			break;
		
		case 142:
			return 25200;
			break;
		
		case 143:
			return 25201;
			break;
		
		case 144:
			return 25205;
			break;
		
		case 145:
			return 25206;
			break;
		
		case 146:
			return 25207;
			break;
		
		case 147:
			return 25208;
			break;
		
		case 148:
			return 25210;
			break;
		
		case 149:
			return 25211;
			break;
		
		case 150:
			return 25215;
			break;
		
		case 151:
			return 25216;
			break;
		
		case 152:
			return 25218;
			break;
		
		case 153:
			return 25219;
			break;
		
		case 157:
			return 25220;
			break;
		
		case 158:
			return 25224;
			break;
		
		case 159:
			return 25226;
			break;
		
		case 160:
			return 25227;
			break;
		
		case 161:
			return 25232;
			break;
		
		case 162:
			return 25372;
			break;
		
		case 163:
			return 25376;
			break;
		
		case 164:
			return 25380;
			break;
		
		case 165:
			return 25381;
			break;
		
		case 166:
			return 25384;
			break;
		
		case 167:
			return 25385;
			break;
		
		case 168:
			return 25387;
			break;
		
		case 169:
			return 25388;
			break;
		
		case 170:
			return 25389;
			break;
		
		case 171:
			return 25407;
			break;
		
		case 172:
			return 25408;
			break;
		
		case 173:
			return 25409;
			break;
		
		case 174:
			return 25410;
			break;
		
		case 178:
			return 25411;
			break;
		
		case 179:
			return 25412;
			break;
		
		case 180:
			return 25413;
			break;
		
		case 181:
			return 25414;
			break;
		
		case 182:
			return 25415;
			break;
		
		case 183:
			return 25416;
			break;
		
		case 184:
			return 25417;
			break;
		
		case 185:
			return 25418;
			break;
		
		case 186:
			return 25419;
			break;
		
		case 189:
			return 25420;
			break;
		
		case 190:
			return 25421;
			break;
		
		case 191:
			return 25422;
			break;
		
		case 192:
			return 25423;
			break;
		
		case 193:
			return 25424;
			break;
		
		case 194:
			return 25425;
			break;
		
		case 195:
			return 25426;
			break;
		
		case 196:
			return 25427;
			break;
		
		case 197:
			return 25428;
			break;
		
		case 198:
			return 25429;
			break;
		
		case 199:
			return 25430;
			break;
		
		case 205:
			return 25431;
			break;
		
		case 206:
			return 25432;
			break;
		
		case 207:
			return 25433;
			break;
		
		case 208:
			return 25434;
			break;
		
		case 209:
			return 25435;
			break;
		
		case 210:
			return 25436;
			break;
		
		case 211:
			return 25437;
			break;
		
		case 212:
			return 25438;
			break;
		
		case 213:
			return 25439;
			break;
		
		case 214:
			return 25440;
			break;
		
		case 215:
			return 25441;
			break;
		
		case 216:
			return 25442;
			break;
		
		case 217:
			return 25443;
			break;
		
		case 218:
			return 25444;
			break;
		
		case 219:
			return 25445;
			break;
		
		case 220:
			return 25446;
			break;
		
		case 221:
			return 25447;
			break;
		
		case 222:
			return 25448;
			break;
		
		case 223:
			return 25449;
			break;
		
		case 224:
			return 25450;
			break;
		
		case 225:
			return 25451;
			break;
		
		case 226:
			return 25452;
			break;
		
		case 227:
			return 25453;
			break;
		
		case 232:
			return 25454;
			break;
		
		case 233:
			return 25455;
			break;
		
		case 234:
			return 25456;
			break;
		
		case 235:
			return 25457;
			break;
		
		case 236:
			return 25458;
			break;
		
		case 237:
			return 25459;
			break;
		
		case 238:
			return 25460;
			break;
		
		case 239:
			return 25461;
			break;
		
		case 240:
			return 25462;
			break;
		
		case 241:
			return 25463;
			break;
		
		case 242:
			return 25464;
			break;
		
		case 246:
			return 25465;
			break;
		
		case 247:
			return 25466;
			break;
		
		case 248:
			return 25467;
			break;
		
		case 249:
			return 25468;
			break;
		
		case 250:
			return 25469;
			break;
		
		case 251:
			return 25470;
			break;
		
		case 252:
			return 25471;
			break;
		
		case 253:
			return 25472;
			break;
		
		case 257:
			return 25473;
			break;
		
		case 258:
			return 25474;
			break;
		
		case 259:
			return 25475;
			break;
		
		case 260:
			return 25476;
			break;
		
		case 261:
			return 25477;
			break;
		
		case 262:
			return 25478;
			break;
		
		case 263:
			return 25479;
			break;
		
		case 264:
			return 25480;
			break;
		
		case 265:
			return 25481;
			break;
		
		case 266:
			return 25482;
			break;
		
		case 267:
			return 25483;
			break;
		
		case 268:
			return 25484;
			break;
		
		case 272:
			return 25485;
			break;
		
		case 273:
			return 25486;
			break;
		
		case 274:
			return 25487;
			break;
		
		case 275:
			return 25488;
			break;
		
		case 276:
			return 25489;
			break;
		
		case 277:
			return 25490;
			break;
		
		case 278:
			return 25491;
			break;
		
		case 282:
			return 25492;
			break;
		
		case 283:
			return 25493;
			break;
		
		case 284:
			return 25494;
			break;
		
		case 285:
			return 25495;
			break;
		
		case 286:
			return 25496;
			break;
		
		case 287:
			return 25497;
			break;
		
		case 288:
			return 25498;
			break;
		
		case 289:
			return 25499;
			break;
		
		case 290:
			return 25500;
			break;
		
		case 291:
			return 25501;
			break;
		
		case 292:
			return 25502;
			break;
		
		case 293:
			return 25503;
			break;
		
		case 294:
			return 25504;
			break;
		
		case 295:
			return 25505;
			break;
		
		case 296:
			return 25506;
			break;
		
		case 297:
			return 25507;
			break;
		
		case 298:
			return 25508;
			break;
		
		case 299:
			return 25509;
			break;
		
		case 300:
			return 25510;
			break;
		
		case 301:
			return 25511;
			break;
	}
	return 0;
}

int func_426(int iParam0)
{
	switch (func_427(iParam0))
	{
		case joaat("taxi"):
			return 0;
		
		case joaat("bulldozer"):
			return 1;
		
		case joaat("speedo2"):
			return 2;
		
		case joaat("trash2"):
			return 3;
		
		case joaat("barracks2"):
			return 4;
		
		case joaat("mixer2"):
			return 5;
		
		case joaat("dune2"):
			return 6;
		
		case joaat("tractor"):
			return 7;
		
		default:
	}
	return -1;
}

int func_427(int iParam0)
{
	if (iParam0 == Global_262145.f_25406)
	{
		return joaat("taxi");
	}
	if (iParam0 == Global_262145.f_25407)
	{
		return joaat("bulldozer");
	}
	if (iParam0 == Global_262145.f_25408)
	{
		return joaat("speedo2");
	}
	if (iParam0 == Global_262145.f_25409)
	{
		return joaat("trash2");
	}
	if (iParam0 == Global_262145.f_25410)
	{
		return joaat("barracks2");
	}
	if (iParam0 == Global_262145.f_25411)
	{
		return joaat("mixer2");
	}
	if (iParam0 == Global_262145.f_25412)
	{
		return joaat("dune2");
	}
	if (iParam0 == Global_262145.f_25413)
	{
		return joaat("tractor");
	}
	return 0;
}

int func_428(int iParam0)
{
	switch (func_427(iParam0))
	{
		case joaat("taxi"):
			return 450;
		
		case joaat("bulldozer"):
			return 451;
		
		case joaat("speedo2"):
			return 452;
		
		case joaat("trash2"):
			return 453;
		
		case joaat("barracks2"):
			return 454;
		
		case joaat("mixer2"):
			return 455;
		
		case joaat("dune2"):
			return 456;
		
		case joaat("tractor"):
			return 457;
		
		default:
	}
	return -1;
}

var func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_25406;
			break;
		
		case 1:
			return Global_262145.f_25407;
			break;
		
		case 2:
			return Global_262145.f_25408;
			break;
		
		case 3:
			return Global_262145.f_25409;
			break;
		
		case 4:
			return Global_262145.f_25410;
			break;
		
		case 5:
			return Global_262145.f_25411;
			break;
		
		case 6:
			return Global_262145.f_25412;
			break;
		
		case 7:
			return Global_262145.f_25413;
			break;
	}
	return Global_262145.f_25406;
}

var func_430()
{
	return 7 + 1;
}

void func_431()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_181())
	{
		iVar0 = unk_0x774CB20D17C3FF03(unk_0xA19140A5C42D8715(), 5);
		iVar1 = unk_0x7710E77D1959B321(unk_0xA19140A5C42D8715(), 5);
		if (iVar0 >= 70 && iVar0 <= 80)
		{
			if (iVar1 == 0)
			{
				unk_0x519EC0448A77FA81(unk_0xD4E735F4B6A956AC());
			}
		}
	}
}

void func_432()
{
	if (unk_0x05EFB6A616B6FADE(Global_1574559, 0))
	{
		if (!unk_0x05EFB6A616B6FADE(Global_1574559.f_1, 1))
		{
			unk_0x2BCFB39E86340DAA(&(Global_1574559.f_1), 1);
			iLocal_142 = 1;
		}
	}
	else if (iLocal_142)
	{
		unk_0xFA57C719261AA55D(&(Global_1574559.f_1), 1);
		iLocal_142 = 0;
	}
}

void func_433()
{
	if (Global_1574559.f_1 == -1)
	{
		Global_1574559.f_1 = 0;
	}
}

void func_434()
{
	if (!func_190(unk_0xD4E735F4B6A956AC()))
	{
		if (iLocal_141 == 0)
		{
			iLocal_141 = 1;
		}
	}
	else if (iLocal_141)
	{
		func_436(joaat("mpply_aw_joinspec"), 0);
		func_435(0);
		iLocal_141 = 0;
	}
}

void func_435(int iParam0)
{
	if (Global_2504041 != iParam0)
	{
		Global_2504041 = iParam0;
	}
}

void func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x0C62A7470B522D80(iVar0, iParam1, 1);
	}
}

void func_437()
{
	if (!unk_0xD8B89B387D170E27())
	{
		if ((func_46(unk_0xD4E735F4B6A956AC()) && !func_87(unk_0xD4E735F4B6A956AC())) && func_123() == 0)
		{
			if (func_4() && unk_0x3A83743561B4F70C())
			{
				if (func_438(unk_0xD4E735F4B6A956AC(), 0))
				{
					if (!iLocal_140)
					{
						unk_0x2BCFB39E86340DAA(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_3), 6);
						iLocal_140 = 1;
					}
				}
				else if (iLocal_140)
				{
					unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_3), 6);
					iLocal_140 = 0;
				}
			}
		}
		else if (iLocal_140)
		{
			unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_3), 6);
			iLocal_140 = 0;
		}
	}
	else if (iLocal_140)
	{
		unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_3), 6);
		iLocal_140 = 0;
	}
}

bool func_438(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_108(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_11();
}

void func_439()
{
	int iVar0;
	
	if (func_443(5) || func_443(4))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && func_110(unk_0xA19140A5C42D8715(), 0) == -1)
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x3CAC2741CC1A631F(&(Global_17367.f_1), "CMOD_WHE2_T0"))
			{
				if (Global_17367.f_5734 == 0)
				{
					func_441(iVar0);
				}
			}
			else if ((((unk_0x3CAC2741CC1A631F(&(Global_17367.f_1), "CMOD_WHE1_T") || unk_0x3CAC2741CC1A631F(&(Global_17367.f_1), "CMOD_WHE4_T")) || unk_0x3CAC2741CC1A631F(&(Global_17367.f_1), "CMOD_WHE0_T")) || unk_0x3CAC2741CC1A631F(&(Global_17367.f_1), "CMOD_MOD_T")) || unk_0x3CAC2741CC1A631F(&(Global_17367.f_1), "CMOD_MOD_E"))
			{
				if (func_440(unk_0x8F474E419F56E48D(iVar0)))
				{
					if (unk_0x22D95AF01E737CA1(iVar0, 23) == -1)
					{
						func_441(iVar0);
					}
				}
			}
		}
	}
}

int func_440(int iParam0)
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case -398987772:
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return 1;
		
		default:
	}
	return 0;
}

void func_441(int iParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0xD8185C6194306C6E(iParam0, &uVar0, &uVar1);
	switch (unk_0x8F474E419F56E48D(iParam0))
	{
		case joaat("dominator4"):
		case joaat("dominator6"):
		case joaat("impaler2"):
		case joaat("issi4"):
		case joaat("issi6"):
		case joaat("slamvan4"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster5"):
		case joaat("bruiser"):
		case joaat("bruiser3"):
			unk_0x8B55653F1DAE7C6F(iParam0, uVar0, 160);
			break;
		
		case joaat("impaler4"):
			unk_0x8B55653F1DAE7C6F(iParam0, uVar0, 156);
			break;
		
		case joaat("deathbike"):
			unk_0x8B55653F1DAE7C6F(iParam0, uVar0, 145);
			break;
		
		case joaat("deathbike2"):
			unk_0x8B55653F1DAE7C6F(iParam0, uVar0, 160);
			break;
		
		case joaat("deathbike3"):
			unk_0x8B55653F1DAE7C6F(iParam0, uVar0, 160);
			break;
		
		default:
			if (func_442(iParam0) && !unk_0xD3C4AB5E628133C1(iParam0, joaat("deathbike2")))
			{
				unk_0x8B55653F1DAE7C6F(iParam0, uVar0, 160);
			}
			break;
	}
}

int func_442(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
	{
		switch (unk_0x8F474E419F56E48D(iParam0))
		{
			case joaat("imperator2"):
			case joaat("deathbike2"):
			case joaat("impaler3"):
			case joaat("brutus2"):
			case joaat("bruiser2"):
			case joaat("slamvan5"):
			case joaat("issi5"):
			case joaat("monster4"):
			case joaat("scarab2"):
			case joaat("cerberus2"):
			case joaat("dominator5"):
			case joaat("zr3802"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_443(int iParam0)
{
	int iVar0;
	
	if (func_181())
	{
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (func_447(iVar0) == iParam0)
			{
				if (func_444(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_444(int iParam0)
{
	return func_445(iParam0, 6, 1);
}

int func_445(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0x05EFB6A616B6FADE(Global_93284.f_1336[iParam0], iParam1);
	}
	else if (unk_0x4C9BACA8D249CB13())
	{
		if (func_30() == 0)
		{
			return unk_0x05EFB6A616B6FADE(func_166(func_446(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_446(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8488;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		default:
			break;
	}
	return 9954;
}

int func_447(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
	}
	return 6;
}

void func_448()
{
	if (((((iLocal_131 != Global_71178 || iLocal_132 != Global_71179) || iLocal_133 != Global_71180) || iLocal_134 != Global_71181) || iLocal_135 != Global_71182) || iLocal_136 != Global_71183)
	{
		if (!iLocal_131 == Global_71178)
		{
		}
		if (!iLocal_132 == Global_71179)
		{
		}
		if (!iLocal_133 == Global_71180)
		{
		}
		if (!iLocal_134 == Global_71181)
		{
		}
		if (!iLocal_135 == Global_71182)
		{
		}
		if (Global_71179 == 63 || Global_71179 == 62)
		{
			if (unk_0x8F474E419F56E48D(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC())) == joaat("mp_f_freemode_01"))
			{
				if (Global_71183 == 61)
				{
					Global_71183 = 79;
					unk_0xBC17DC7C428EC7F1(unk_0xD4E735F4B6A956AC(), 5, Global_71183, func_449(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), Global_71179), 0);
					unk_0x72A0FF8C49CFFC0D(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), 5, Global_71183, func_449(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), Global_71179), 0);
				}
				else if (Global_71183 == 39)
				{
					Global_71183 = 79;
					unk_0xBC17DC7C428EC7F1(unk_0xD4E735F4B6A956AC(), 5, Global_71183, func_449(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), Global_71179), 0);
					unk_0x72A0FF8C49CFFC0D(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), 5, Global_71183, func_449(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), Global_71179), 0);
				}
			}
			else if (unk_0x8F474E419F56E48D(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC())) == joaat("mp_m_freemode_01"))
			{
				if (Global_71183 == 39)
				{
					Global_71183 = 78;
					unk_0xBC17DC7C428EC7F1(unk_0xD4E735F4B6A956AC(), 5, Global_71183, func_449(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), Global_71179), 0);
					unk_0x72A0FF8C49CFFC0D(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), 5, Global_71183, func_449(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), Global_71179), 0);
				}
			}
		}
		iLocal_131 = Global_71178;
		iLocal_132 = Global_71179;
		iLocal_133 = Global_71180;
		iLocal_134 = Global_71181;
		iLocal_135 = Global_71182;
		iLocal_136 = Global_71183;
	}
}

int func_449(var uParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

void func_450()
{
	if (((Global_71205 && Global_25459 == 0) && func_10(unk_0xD4E735F4B6A956AC(), 1, 1)) && func_453() >= 434)
	{
		if ((unk_0x817B152F7462D506() % 120) == 0)
		{
			if (func_452())
			{
				func_451();
			}
		}
	}
}

void func_451()
{
	if (func_452())
	{
		unk_0xFA57C719261AA55D(&(Global_2524719.f_1732), 17);
	}
}

bool func_452()
{
	if (!unk_0x05EFB6A616B6FADE(func_166(7877, -1, 0), 0))
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_2524719.f_1732, 17);
}

int func_453()
{
	return ((Global_1686198 + Global_1686199) + Global_1686200);
}

void func_454()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD8B89B387D170E27())
	{
		if (!func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (Global_1312415 == joaat("weapon_raycarbine") || Global_1312415 == joaat("weapon_rayminigun"))
			{
				iLocal_124 = 1;
				Global_1312878 = 0;
			}
		}
		else if (iLocal_124)
		{
			iLocal_124 = 0;
			if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine"), 0))
			{
				iVar0 = func_166(9531, -1, 0);
				if (unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine")) != iVar0)
				{
					unk_0x3CB081F41F423663(unk_0xA19140A5C42D8715(), unk_0x7353FDD251A636E0(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine")), iVar0);
				}
			}
			if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_rayminigun"), 0))
			{
				iVar1 = func_166(9541, -1, 0);
				if (unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_rayminigun")) != iVar1)
				{
					unk_0x3CB081F41F423663(unk_0xA19140A5C42D8715(), unk_0x7353FDD251A636E0(unk_0xA19140A5C42D8715(), joaat("weapon_rayminigun")), iVar1);
				}
			}
		}
	}
}

void func_455()
{
	if (Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 == 148 || Global_1574388)
	{
		if (!func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (Global_1312415 == joaat("weapon_raycarbine") || Global_1312415 == joaat("weapon_rayminigun"))
			{
				iLocal_124 = 1;
				Global_1312878 = 0;
			}
		}
		else if (iLocal_124)
		{
			iLocal_124 = 0;
			if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine"), 0))
			{
				if (unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine")) == 0)
				{
					unk_0x3CB081F41F423663(unk_0xA19140A5C42D8715(), unk_0x7353FDD251A636E0(unk_0xA19140A5C42D8715(), joaat("weapon_raycarbine")), func_166(9531, -1, 0));
				}
			}
			if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_rayminigun"), 0))
			{
				if (unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_rayminigun")) == 0)
				{
					unk_0x3CB081F41F423663(unk_0xA19140A5C42D8715(), unk_0x7353FDD251A636E0(unk_0xA19140A5C42D8715(), joaat("weapon_rayminigun")), func_166(9541, -1, 0));
				}
			}
		}
	}
}

void func_456()
{
	if (!iLocal_125)
	{
		if ((Global_71205 && Global_25459 == 0) && func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			func_187(25180, 1, -1, 1);
			iLocal_125 = 1;
		}
	}
}

void func_457()
{
	int iVar0;
	var uVar1;
	
	if ((func_3() && func_188(1)) && unk_0xD8B89B387D170E27())
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (iVar0 == 0)
			{
				if (Global_96094.f_10[iVar0] >= func_461(iVar0) && !unk_0xDD38C9BE3BA698E1(func_461(iVar0), 0, 1, 0, &uVar1, -1))
				{
					func_460();
				}
			}
			else if (!func_459(iVar0))
			{
				if (!unk_0xDD38C9BE3BA698E1(func_461(iVar0), 0, 1, 0, &uVar1, -1))
				{
					func_458(iVar0);
				}
			}
			iVar0++;
		}
	}
}

void func_458(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			unk_0x2BCFB39E86340DAA(&(Global_4456448.f_154299), 6);
			break;
		
		case 2:
			unk_0x2BCFB39E86340DAA(&(Global_4456448.f_154299), 2);
			break;
		
		case 3:
			unk_0x2BCFB39E86340DAA(&(Global_4456448.f_154299), 5);
			break;
	}
}

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return unk_0x05EFB6A616B6FADE(Global_4456448.f_154299, 6);
		
		case 2:
			return unk_0x05EFB6A616B6FADE(Global_4456448.f_154299, 2);
		
		case 3:
			return unk_0x05EFB6A616B6FADE(Global_4456448.f_154299, 5);
		
		default:
	}
	return 0;
}

void func_460()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_96094[iVar0] = 0;
		Global_96094.f_5[iVar0] = 0;
		Global_96094.f_10[iVar0] = 0;
		IntToString(&(Global_93284.f_428[iVar0 /*4*/]), 0, 16);
		Global_93284.f_941[iVar0] = 0;
		iVar0++;
	}
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11400;
		
		case 1:
			return 20000;
		
		case 2:
			return 50000;
		
		case 3:
			return 50000;
		
		default:
	}
	return 1000;
}

void func_462()
{
	if (((!unk_0x05EFB6A616B6FADE(Global_2524719.f_1719, 20) && !func_464()) && func_463(0) == 251) && func_46(unk_0xD4E735F4B6A956AC()))
	{
		unk_0x2BCFB39E86340DAA(&(Global_2524719.f_1719), 20);
	}
}

int func_463(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_2448386.f_6;
}

bool func_464()
{
	return func_388(25009, -1, -1);
}

void func_465()
{
	if (((unk_0x8B1574454E8C2421(joaat("am_mp_nightclub")) > 0 || unk_0x8B1574454E8C2421(joaat("am_mp_defunct_base")) > 0) || unk_0x8B1574454E8C2421(joaat("base_lounge_seats")) > 0) || unk_0x8B1574454E8C2421(joaat("am_mp_hangar")) > 0)
	{
		if (func_463(0) == 251 && func_257(Global_4456448.f_130782))
		{
			if (!Global_1686734)
			{
				iLocal_123 = 1;
				Global_1686734 = 1;
			}
			Global_2504290 = 100;
		}
	}
	else if (iLocal_123)
	{
		iLocal_123 = 0;
		Global_1686734 = 0;
	}
}

void func_466()
{
	int iVar0;
	struct<3> Var1;
	
	if ((((unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && func_322(unk_0xD4E735F4B6A956AC())) && func_110(unk_0xA19140A5C42D8715(), 0) == -1) && func_46(unk_0xD4E735F4B6A956AC())) && func_123() == 0)
	{
		iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (unk_0xDC5D81351D6A4DDB(iVar0) && !unk_0x7112137033807390(iVar0, 0))
		{
			if ((unk_0x3DF0D4C48D463CA8() && func_443(5)) && unk_0x3CAC2741CC1A631F(&(Global_17367.f_1), "CMOD_MOD_T"))
			{
				unk_0xA7CA68B004FFBD04(0, 0);
				func_468(1);
				func_467(0);
			}
			if (func_440(unk_0x8F474E419F56E48D(iVar0)))
			{
				Var1 = { unk_0xE2BBD32891C18569(iVar0, 1) };
				if (Var1.f_2 < -90.5f)
				{
					unk_0xE8B3104D1CB25CDC(iVar0, Var1.f_0, Var1.f_1, -89f, 0, 0, 1);
					unk_0x99F546A9200EA026(iVar0, 0f);
				}
			}
		}
	}
}

void func_467(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_195, 14))
		{
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_195), 14);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_195, 14))
	{
		unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_195), 14);
	}
}

void func_468(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_195, 13))
		{
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_195), 13);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_195, 13))
	{
		unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_195), 13);
	}
}

void func_469()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_397(385, -1, -1);
	iVar1 = unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715());
	if (iLocal_121 != iVar0 || iLocal_122 != iVar1)
	{
		if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
		{
		}
		else
		{
			iLocal_121 = 0;
			iLocal_122 = 0;
			return;
		}
		if (iVar0 != -99)
		{
			iVar2 = -99;
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				iVar2 = func_476(iVar0);
			}
			else if (iVar1 == joaat("mp_f_freemode_01"))
			{
				iVar2 = func_470(iVar0);
			}
			if (iVar2 != -99 && iVar0 != iVar2)
			{
				func_330(385, iVar2, -1, 1);
			}
		}
		iLocal_121 = iVar0;
		iLocal_122 = iVar1;
	}
}

int func_470(int iParam0)
{
	if (Global_95684)
	{
		return func_471(iParam0);
	}
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 148;
			break;
		
		case 7:
			return 149;
			break;
		
		case 13:
			return 150;
			break;
		
		case 18:
			return 151;
			break;
		
		case 24:
			return 152;
			break;
		
		case 30:
			return 153;
			break;
		
		case 35:
			return 154;
			break;
		
		case 41:
			return 155;
			break;
		
		case 47:
			return 156;
			break;
		
		case 53:
			return 157;
			break;
		
		case 60:
			return 158;
			break;
		
		case 67:
			return 159;
			break;
		
		case 73:
			return 160;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 161;
			break;
		
		case 85:
			return 162;
			break;
		
		case 92:
			return 163;
			break;
		
		case 97:
			return 164;
			break;
		
		case 102:
			return 165;
			break;
		
		case 108:
			return 166;
			break;
		
		case 113:
			return 167;
			break;
		
		case 118:
			return 168;
			break;
		
		case 123:
			return 169;
			break;
		
		case 128:
			return 170;
			break;
		
		case 134:
			return 171;
			break;
		
		case 135:
			return 172;
			break;
		
		case 136:
			return 173;
			break;
		
		case 137:
			return 174;
			break;
		
		case 138:
			return 175;
			break;
		
		case 139:
			return 176;
			break;
		
		case 140:
			return 177;
			break;
		
		case 141:
			return 178;
			break;
		
		case 142:
			return 179;
			break;
		
		case 143:
			return 180;
			break;
		
		case 144:
			return 181;
			break;
		
		case 145:
			return 182;
			break;
		
		case 146:
			return 183;
			break;
		
		case 147:
			return 184;
			break;
	}
	return iParam0;
}

int func_471(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 1)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_0_0"), 2, 4);
	}
	else if (iParam0 == 7)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_1_0"), 2, 4);
	}
	else if (iParam0 == 13)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_2_0"), 2, 4);
	}
	else if (iParam0 == 18)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_3_0"), 2, 4);
	}
	else if (iParam0 == 24)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_4_0"), 2, 4);
	}
	else if (iParam0 == 30)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_5_0"), 2, 4);
	}
	else if (iParam0 == 35)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_6_0"), 2, 4);
	}
	else if (iParam0 == 41)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_7_0"), 2, 4);
	}
	else if (iParam0 == 47)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_8_0"), 2, 4);
	}
	else if (iParam0 == 53)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_9_0"), 2, 4);
	}
	else if (iParam0 == 60)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_10_0"), 2, 4);
	}
	else if (iParam0 == 67)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_11_0"), 2, 4);
	}
	else if (iParam0 == 73)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_12_0"), 2, 4);
	}
	else if (iParam0 == 79)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_13_0"), 2, 4);
	}
	else if (iParam0 == 85)
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_14_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_BEACH_F_HAIR00"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_15_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_BEACH_F_HAIR05"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_16_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_BUSI_F_HAIR0_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_18_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_BUSI_F_HAIR1_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_19_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_VAL_F_HAIR0_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_17_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_HIPS_F_HAIR0_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_20_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_HIPS_F_HAIR1_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_21_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_IND_F_HAIR0_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_22_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_LOW_F_HAIR0_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_23_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_LOW_F_HAIR1_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_24_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_LOW_F_HAIR2_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_25_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_LOW_F_HAIR3_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_26_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_LOW2_F_HAIR0_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_27_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_LOW2_F_HAIR1_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_28_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_LOW2_F_HAIR2_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_29_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_0_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_30_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_1_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_31_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_2_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_32_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_3_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_33_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_4_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_34_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_35_0"), 2, 4);
	}
	else if (iParam0 == func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4))
	{
		return func_472(joaat("mp_f_freemode_01"), joaat("DLC_MP_GR_F_HAIR_36_0"), 2, 4);
	}
	return iParam0;
}

int func_472(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xF21D7CAB6815AD7E(&Var0);
		iVar18 = 0;
		iVar19 = unk_0x6182A22F4D99005E(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x1B674FE324A34577(iVar17, &Var0);
			if (!unk_0x3B61940560400F58(Var0.f_0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_475(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x4EC128057F5B6F27(&Var20);
		iVar38 = 0;
		iVar39 = unk_0x6182A22F4D99005E(iParam3, 6, -1, 0, -1, func_474(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xF947B64BF5B65A2E(iVar37, &Var20);
			if (!unk_0x3B61940560400F58(Var20.f_0))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_473(iParam0, func_474(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_473(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_476(int iParam0)
{
	if (Global_95684)
	{
		return func_477(iParam0);
	}
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 140;
			break;
		
		case 7:
			return 141;
			break;
		
		case 13:
			return 142;
			break;
		
		case 19:
			return 143;
			break;
		
		case 26:
			return 144;
			break;
		
		case 32:
			return 145;
			break;
		
		case 38:
			return 146;
			break;
		
		case 45:
			return 147;
			break;
		
		case 50:
			return 148;
			break;
		
		case 57:
			return 149;
			break;
		
		case 63:
			return 150;
			break;
		
		case 69:
			return 151;
			break;
		
		case 74:
			return 152;
			break;
		
		case 80:
			return 153;
			break;
		
		case 85:
			return 154;
			break;
		
		case 91:
			return 155;
			break;
		
		case 96:
			return 156;
			break;
		
		case 101:
			return 157;
			break;
		
		case 106:
			return 158;
			break;
		
		case 111:
			return 159;
			break;
		
		case 116:
			return 160;
			break;
		
		case 121:
			return 161;
			break;
		
		case 126:
			return 126;
			break;
		
		case 127:
			return 162;
			break;
		
		case 128:
			return 163;
			break;
		
		case 129:
			return 164;
			break;
		
		case 130:
			return 165;
			break;
		
		case 131:
			return 166;
			break;
		
		case 132:
			return 167;
			break;
		
		case 133:
			return 168;
			break;
		
		case 134:
			return 169;
			break;
		
		case 135:
			return 170;
			break;
		
		case 136:
			return 171;
			break;
		
		case 137:
			return 172;
			break;
		
		case 138:
			return 173;
			break;
		
		case 139:
			return 174;
			break;
	}
	return iParam0;
}

int func_477(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 1)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_0_0"), 2, 3);
	}
	else if (iParam0 == 7)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_1_0"), 2, 3);
	}
	else if (iParam0 == 13)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_2_0"), 2, 3);
	}
	else if (iParam0 == 19)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_3_0"), 2, 3);
	}
	else if (iParam0 == 26)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_4_0"), 2, 3);
	}
	else if (iParam0 == 32)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_5_0"), 2, 3);
	}
	else if (iParam0 == 38)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_6_0"), 2, 3);
	}
	else if (iParam0 == 45)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_7_0"), 2, 3);
	}
	else if (iParam0 == 50)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_8_0"), 2, 3);
	}
	else if (iParam0 == 57)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_9_0"), 2, 3);
	}
	else if (iParam0 == 63)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_10_0"), 2, 3);
	}
	else if (iParam0 == 69)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_11_0"), 2, 3);
	}
	else if (iParam0 == 74)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_12_0"), 2, 3);
	}
	else if (iParam0 == 80)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_13_0"), 2, 3);
	}
	else if (iParam0 == 85)
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_14_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_BEACH_M_HAIR00"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_15_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_BEACH_M_HAIR05"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_16_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_BUSI_M_HAIR0_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_17_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_BUSI_M_HAIR1_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_18_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_HIPS_M_HAIR0_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_19_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_HIPS_M_HAIR1_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_20_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_IND_M_HAIR0_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_21_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_LOW_M_HAIR0_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_22_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_LOW_M_HAIR1_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_23_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_LOW_M_HAIR2_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_24_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_LOW_M_HAIR3_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_25_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_LOW2_M_HAIR0_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_26_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_LOW2_M_HAIR1_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_27_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_LOW2_M_HAIR2_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_28_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_BIKER_M_HAIR_0_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_29_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_BIKER_M_HAIR_1_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_30_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_BIKER_M_HAIR_2_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_31_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_BIKER_M_HAIR_3_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_32_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_BIKER_M_HAIR_4_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_33_0"), 2, 3);
	}
	else if (iParam0 == func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_BIKER_M_HAIR_5_0"), 2, 3))
	{
		return func_472(joaat("mp_m_freemode_01"), joaat("DLC_MP_GR_M_HAIR_34_0"), 2, 3);
	}
	return iParam0;
}

void func_478()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD8B89B387D170E27())
	{
		if (Global_1685679.f_1 != iLocal_120)
		{
			if (iLocal_120 == -1)
			{
				iLocal_120 = Global_1685679.f_1;
			}
			else if (Global_1685679.f_1 == 0)
			{
				iLocal_120 = 0;
			}
			else
			{
				iVar0 = (Global_1685679.f_1 - iLocal_120);
				if (Global_1685679.f_1 < 12)
				{
					iVar0 *= 2;
				}
				Global_1685679.f_1 = (Global_1685679.f_1 + iVar0);
				iLocal_120 = Global_1685679.f_1;
			}
		}
		if (Global_1685679 != iLocal_119)
		{
			if (iLocal_119 == -1)
			{
				iLocal_119 = Global_1685679;
			}
			else if (Global_1685679 == 0)
			{
				iLocal_119 = 0;
			}
			else
			{
				iVar1 = (Global_1685679 - iLocal_119);
				if (Global_1685679 < 12)
				{
					iVar1 *= 2;
				}
				Global_1685679 = (Global_1685679 + iVar1);
				iLocal_119 = Global_1685679;
			}
		}
	}
	else
	{
		iLocal_119 = -1;
		iLocal_120 = -1;
	}
}

void func_479()
{
	if (unk_0x05EFB6A616B6FADE(Global_1668658.f_3315, 23))
	{
		if (!Global_2409250.f_18)
		{
			Global_2409250.f_18 = 1;
			func_481(0);
			func_480();
			iLocal_118 = 1;
		}
	}
	else if (iLocal_118)
	{
		iLocal_118 = 0;
		Global_2409250.f_18 = 0;
	}
}

void func_480()
{
	Global_2409250.f_23 = -1;
	Global_2409250.f_24 = -1;
}

void func_481(int iParam0)
{
	if (!Global_2409250 == iParam0)
	{
		Global_2409250.f_1 = 0;
	}
	Global_2409250 = iParam0;
	if (unk_0x4C9BACA8D249CB13())
	{
		Global_2409250.f_3 = unk_0xFFCC7EBF88BDEE54();
	}
}

void func_482()
{
	var uVar0;
	int iVar1;
	
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && func_110(unk_0xA19140A5C42D8715(), 0) == -1)
	{
		uVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if ((unk_0x8F474E419F56E48D(uVar0) == joaat("scarab") || unk_0x8F474E419F56E48D(iVar0) == joaat("scarab2")) || unk_0x8F474E419F56E48D(iVar0) == joaat("scarab3"))
		{
			iVar1 = unk_0x22D95AF01E737CA1(iVar0, 5);
			if (iVar1 != unk_0x22D95AF01E737CA1(iVar0, 16))
			{
				if (iVar1 == -1)
				{
					unk_0xF1338FDC7D6CF388(iVar0, 16);
				}
				else
				{
					unk_0x1EE56D43DA30ADC6(iVar0, 16, iVar1, 0);
				}
			}
		}
	}
}

void func_483()
{
	int iVar0;
	var uVar1[64];
	int iVar66;
	struct<3> Var67;
	float fVar70;
	
	if (func_485(unk_0xD4E735F4B6A956AC()))
	{
		if (!unk_0x5CA3186381FC012C())
		{
			iVar0 = unk_0x751DA0D8357E8793(unk_0xA19140A5C42D8715(), &uVar1, -1);
			iVar66 = 0;
			while (iVar66 <= iVar0)
			{
				if (iVar66 < 64)
				{
					if (unk_0xDC5D81351D6A4DDB(uVar1[iVar66]))
					{
						if (unk_0x8F474E419F56E48D(uVar1[iVar66]) == joaat("ig_rashcosvki"))
						{
							Var67 = { unk_0xE2BBD32891C18569(uVar1[iVar66], 1) };
							if (func_484(Var67, 1707f, 2520f, 45f, 5f, 0))
							{
								if (Var67.f_2 <= 45f)
								{
									if (unk_0xB540EEBB14C48518(uVar1[iVar66]))
									{
										unk_0x836A6A722DEA63F1(uVar1[iVar66]);
										fVar70 = 0f;
										unk_0x8F7BA8E028ADF980(Var67, &fVar70, 0, 0);
										Var67.f_2 = fVar70;
										unk_0x4299736016AECE26(uVar1[iVar66], Var67, 1, 0, 0, 1);
										unk_0x3A3E4B7C6FBE305D(uVar1[iVar66], 0, 0);
									}
								}
							}
						}
						else
						{
							iVar66++;
						}
					}

int func_484(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x69C0BB7D03EE045D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x69C0BB7D03EE045D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x69C0BB7D03EE045D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x69C0BB7D03EE045D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x69C0BB7D03EE045D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_485(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

void func_486()
{
	if (!Global_2405070.f_2663)
	{
		if (Global_2409250 == 7)
		{
			if (!func_13(&uLocal_116))
			{
				func_14(&uLocal_116, 0, 0);
			}
			else if (func_12(&uLocal_116, 35000, 0))
			{
				func_488(7);
				func_487();
				func_481(0);
				func_7(&uLocal_116);
			}
		}
		else
		{
			func_7(&uLocal_116);
		}
	}
	else
	{
		func_7(&uLocal_116);
	}
}

void func_487()
{
	Global_2409250.f_14 = 0;
}

void func_488(int iParam0)
{
	if (iParam0 == func_489())
	{
		Global_2409250.f_14 = 0;
	}
}

int func_489()
{
	return Global_2409250;
}

void func_490()
{
	if (((unk_0x4C9BACA8D249CB13() && func_10(unk_0xD4E735F4B6A956AC(), 1, 1)) && !Global_1574184) && Global_25459 == 0)
	{
		if (unk_0x8B1574454E8C2421(joaat("animal_controller")) != 0)
		{
			unk_0x5DEF814991FF7421(-201, 0, 0);
		}
	}
}

void func_491()
{
	if ((func_4() && func_30() == 0) && !Global_1312857)
	{
		if ((((unk_0xB4425D8F229C123D() && func_499()) && !func_497(unk_0xD4E735F4B6A956AC())) || func_495()) || func_493())
		{
			if (func_492())
			{
				unk_0x63A311E7111108AF();
			}
		}
	}
}

int func_492()
{
	int iVar0;
	
	iVar0 = joaat("player_zero");
	unk_0xCACEBBBEAD8F262E(iVar0);
	if (unk_0x7FC99CCC73354033(iVar0))
	{
		unk_0x041B27626566B361(unk_0xD4E735F4B6A956AC(), iVar0);
		unk_0xE79EB4D6EFBA3038(0);
		return 1;
	}
	return 0;
}

int func_493()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715());
	iVar1 = 0;
	while (iVar1 < 28)
	{
		if (iVar0 == func_494(iVar1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("player_one");
		
		case 1:
			return joaat("player_two");
		
		case 2:
			return joaat("player_zero");
		
		case 3:
			return joaat("ig_amandatownley");
		
		case 4:
			return joaat("ig_beverly");
		
		case 5:
			return joaat("ig_brad");
		
		case 6:
			return joaat("ig_chrisformage");
		
		case 7:
			return joaat("ig_davenorton");
		
		case 8:
			return joaat("ig_devin");
		
		case 9:
			return joaat("ig_drfriedlander");
		
		case 10:
			return joaat("ig_fabien");
		
		case 11:
			return joaat("ig_floyd");
		
		case 12:
			return joaat("ig_jimmydisanto");
		
		case 13:
			return joaat("ig_lamardavis");
		
		case 14:
			return joaat("ig_lazlow");
		
		case 15:
			return joaat("ig_lestercrest");
		
		case 16:
			return joaat("ig_maude");
		
		case 17:
			return joaat("ig_mrs_thornhill");
		
		case 18:
			return joaat("ig_nervousron");
		
		case 19:
			return joaat("ig_patricia");
		
		case 20:
			return joaat("ig_siemonyetarian");
		
		case 21:
			return joaat("ig_solomon");
		
		case 22:
			return joaat("ig_stevehains");
		
		case 23:
			return joaat("ig_stretch");
		
		case 24:
			return joaat("ig_tanisha");
		
		case 25:
			return joaat("ig_taocheng");
		
		case 26:
			return joaat("ig_tracydisanto");
		
		case 27:
			return joaat("ig_wade");
		
		default:
	}
	return 0;
	return 0;
}

int func_495()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715());
	iVar1 = 0;
	while (iVar1 < 13)
	{
		if (iVar0 == func_496(iVar1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_496(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("u_m_y_hippie_01");
		
		case 1:
			return joaat("u_m_y_baygor");
		
		case 2:
			return joaat("u_m_o_finguru_01");
		
		case 3:
			return joaat("u_m_y_militarybum");
		
		case 4:
			return joaat("u_m_m_griff_01");
		
		case 5:
			return joaat("u_f_y_comjane");
		
		case 6:
			return joaat("s_m_m_strpreach_01");
		
		case 7:
			return joaat("u_m_m_jesus_01");
		
		case 8:
			return joaat("u_m_y_mani");
		
		case 9:
			return joaat("s_m_y_mime");
		
		case 10:
			return joaat("u_f_o_moviestar");
		
		case 11:
			return joaat("u_m_y_imporage");
		
		case 12:
			return joaat("u_m_y_zombie_01");
		
		default:
	}
	return 0;
	return 0;
}

int func_497(int iParam0)
{
	if (func_498(iParam0) == 146)
	{
		if (iParam0 == Global_2524719.f_4808)
		{
			return 1;
		}
	}
	return 0;
}

int func_498(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/];
	}
	return -1;
}

int func_499()
{
	int iVar0;
	
	iVar0 = unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715());
	switch (iVar0)
	{
		case joaat("a_c_boar"):
		case joaat("a_c_cat_01"):
		case joaat("a_c_cow"):
		case joaat("a_c_coyote"):
		case joaat("a_c_deer"):
		case joaat("a_c_husky"):
		case joaat("a_c_mtlion"):
		case joaat("a_c_pig"):
		case joaat("a_c_poodle"):
		case joaat("a_c_pug"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_retriever"):
		case joaat("a_c_rottweiler"):
		case joaat("a_c_shepherd"):
		case joaat("a_c_westy"):
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
		case joaat("ig_orleans"):
			return 1;
			break;
	}
	return 0;
}

void func_500()
{
	if ((Global_105016 && unk_0x8B1574454E8C2421(joaat("director_mode")) <= 0) && func_4())
	{
		unk_0x63A311E7111108AF();
	}
}

void func_501()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_13(&uLocal_107))
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 2);
		if (func_12(&uLocal_107, 60000, 0))
		{
			func_47(&uLocal_107, 0, 0);
			func_7(&uLocal_107);
		}
	}
	if (func_13(&uLocal_105) && func_12(&uLocal_105, 1000, 0))
	{
		if (iLocal_114 == -1)
		{
			if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				iLocal_114 = unk_0x7A3ECD08D6D1D554();
				unk_0x6020229E34827A69(iLocal_114, "05", unk_0xA19140A5C42D8715(), "DLC_GR_CS2_Sounds", 0, 0);
			}
		}
		else if (func_12(&uLocal_105, 4000, 0))
		{
			if (!unk_0x57269F5E44F5F616(iLocal_114))
			{
				unk_0x5DE59A67B5F326CF(iLocal_114);
			}
			unk_0xB4442316D0B880FD(iLocal_114);
			iLocal_114 = -1;
			unk_0x5AD7D03C214BDA88("DLC_GR_CS2_General_Scene");
			func_47(&uLocal_105, 0, 0);
			func_7(&uLocal_105);
		}
	}
	if (!iLocal_99 && !func_508())
	{
		return;
	}
	iLocal_99 = 1;
	unk_0x2BCFB39E86340DAA(&Global_2384, 2);
	if (!unk_0xDC5D81351D6A4DDB(uLocal_98))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		unk_0xCACEBBBEAD8F262E(iVar0);
		if (unk_0x7FC99CCC73354033(iVar0))
		{
			iLocal_98 = unk_0xDAD26B7BC6DCE4C1(iVar0, 360.8759f, 5623.427f, 780.1747f, 0, 0, 1);
			unk_0xA5DE74AE39867B03(iVar0);
			unk_0xB29E08C7AB729BAD(iLocal_98, 1);
			unk_0xA45E1AA8B9CF45AD(iLocal_98, 8000);
			iVar1 = func_166(7866, -1, 0);
			func_238(7866, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			unk_0xF5E156DAD876D58B(&Var2);
			Local_109 = { unk_0xE2BBD32891C18569(iLocal_98, 0) };
			iLocal_112 = 0;
		}
	}
	else
	{
		func_507();
		if (unk_0x3A83743561B4F70C() || unk_0x3BE8B7AEED1A3971())
		{
			if (iLocal_113 == -1)
			{
				unk_0x8969D02DEDC106D2("DLC_GR_CS2_General_Scene");
				iLocal_113 = unk_0x7A3ECD08D6D1D554();
				unk_0x6020229E34827A69(iLocal_113, "07", iLocal_98, "DLC_GR_CS2_Sounds", 0, 0);
			}
			if (!iLocal_100)
			{
				if (func_12(&uLocal_101, 4500, 0))
				{
					unk_0xB29E08C7AB729BAD(iLocal_98, 0);
					func_47(&uLocal_101, 0, 0);
					func_7(&uLocal_101);
					func_14(&uLocal_103, 0, 0);
					iLocal_100 = 1;
				}
			}
			else
			{
				fVar46 = (unk_0xBBDA792448DB5A89(func_506(&uLocal_103, 0, 0)) / unk_0xBBDA792448DB5A89(func_505()));
				fVar47 = (unk_0xBBDA792448DB5A89(func_506(&uLocal_101, 0, 0)) / unk_0xBBDA792448DB5A89(func_504()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_502(Local_109, func_503(), fVar47) };
				unk_0x4299736016AECE26(iLocal_98, Var48, 1, 0, 0, 1);
				if (fVar47 >= 1f)
				{
					iLocal_112++;
					Local_109 = { unk_0xE2BBD32891C18569(iLocal_98, 0) };
					func_47(&uLocal_101, 0, 0);
					func_7(&uLocal_101);
					if (func_504() == -1)
					{
						unk_0xC0AC848E56940C34(&iLocal_98);
						unk_0xE0FB800C6F342939();
						if (!unk_0x57269F5E44F5F616(iLocal_113))
						{
							unk_0x5DE59A67B5F326CF(iLocal_113);
						}
						unk_0xB4442316D0B880FD(iLocal_113);
						iLocal_113 = -1;
						func_14(&uLocal_105, 0, 0);
						func_14(&uLocal_107, 0, 0);
						func_47(&uLocal_103, 0, 0);
						func_7(&uLocal_103);
						Local_109 = { 0f, 0f, 0f };
						iLocal_112 = 0;
						iLocal_99 = 0;
						iLocal_100 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_502(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_503()
{
	switch (iLocal_112)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
		
		case 1:
			return -1082.865f, 6390.52f, 924.2493f;
		
		case 2:
			return -2542.874f, 7217.514f, 1051.333f;
		
		case 3:
			return -4139.106f, 8143.302f, 1412.694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_504()
{
	switch (iLocal_112)
	{
		case 0:
			return 2000;
		
		case 1:
			return 1000;
		
		case 2:
			return 100;
		
		case 3:
			return 50;
		
		default:
	}
	return -1;
}

int func_505()
{
	return 3150;
}

var func_506(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x4C9BACA8D249CB13() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0);
		}
		else
		{
			return unk_0x1893BEC593409B02(unk_0x7546CD2A62C6DBB6(), *uParam0);
		}
	}
	return unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), *uParam0);
}

void func_507()
{
	struct<3> Var0;
	
	Var0 = { unk_0x288B716F47E9BBBC(iLocal_98, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	unk_0x76D3D51F5F66367F(iLocal_98, Var0, 2, 1);
}

int func_508()
{
	if (((((((func_388(22107, -1, -1) && Global_2409250 == 7) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0)) && func_511(unk_0xA19140A5C42D8715(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2449169.f_3068.f_178 >= 1) && Global_2449169.f_3068.f_178 < 4) && func_510()) && func_509())
	{
		return 1;
	}
	return 0;
}

int func_509()
{
	if (func_388(15476, -1, -1) && func_166(5450, func_163(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_510()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xEB349569DF18782A(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		if ((iVar0 == joaat("rain") || iVar0 == joaat("THUNDER")) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == joaat("rain") || iVar1 == joaat("THUNDER")) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_511(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xE2BBD32891C18569(uParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_512()
{
	var uVar0;
	
	if (((((((func_188(0) && unk_0x893915B076B1DDF7(Global_1686751)) && unk_0x2A8A410BC14B59BC(Global_1686751)) && !unk_0x05EFB6A616B6FADE(Global_1686219, 0)) && !func_189()) && !func_161(unk_0xD4E735F4B6A956AC(), 0)) && !Global_2504035) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
		{
			uVar0 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
		}
		else
		{
			return;
		}
		if (unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) != Global_1686751 || unk_0xDA3A4E46D189F555(uVar0) != Global_1686751)
		{
			if (unk_0xDC5D81351D6A4DDB(iVar0) && !unk_0x7112137033807390(iVar0, 0))
			{
				unk_0xAF41F12C925CC0DB(iVar0, Global_1686751);
				unk_0x2C85F91B93BF288E(iVar0, Global_1686751, joaat("Arena_Room"));
			}
			if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				unk_0xAF41F12C925CC0DB(unk_0xA19140A5C42D8715(), Global_1686751);
				unk_0x2C85F91B93BF288E(unk_0xA19140A5C42D8715(), Global_1686751, joaat("Arena_Room"));
			}
		}
	}
}

void func_513()
{
	int iVar0;
	
	if (!iLocal_97)
	{
		if (Global_1574194)
		{
			iVar0 = func_514(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10013 = 1;
			}
			iLocal_97 = 1;
		}
	}
	else if (!Global_1574194)
	{
		iLocal_97 = 0;
	}
}

int func_514(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x2AD48F3CEBA882E9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_515()
{
	if (!iLocal_96)
	{
		if (Global_1574194)
		{
			if (func_517() || func_516())
			{
				Global_262145.f_19565 = 1;
			}
			else
			{
				Global_262145.f_19565 = 0;
			}
			iLocal_96 = 1;
		}
	}
	else if (!Global_1574194)
	{
		iLocal_96 = 0;
	}
}

int func_516()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_514(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10122)
	{
		return 0;
	}
	uVar1[0] = func_514(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_514(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_514(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_514(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10118 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10122)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_517()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_514(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10121)
	{
		return 0;
	}
	uVar1[0] = func_514(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_514(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_514(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_514(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10117 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10121)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_518()
{
	int iVar0;
	
	if (unk_0x47C01C0E6F4C1D06())
	{
		iVar0 = 0;
		while (iVar0 < Global_1589747)
		{
			unk_0x2BCFB39E86340DAA(&(Global_1589747[iVar0 /*790*/].f_652), 1);
			iVar0++;
		}
	}
}

void func_519()
{
	if (Global_262145.f_10097 != 120)
	{
		Global_262145.f_10097 = 120;
	}
}

void func_520(var uParam0)
{
	func_534(uParam0);
	if (func_533())
	{
		func_527(uParam0);
		func_524(uParam0);
		func_523(uParam0, 0);
	}
	else
	{
		func_522(uParam0);
		func_521(uParam0);
		func_523(uParam0, 1);
	}
}

void func_521(var uParam0)
{
	if (unk_0x05EFB6A616B6FADE(uParam0->f_29, 0))
	{
		unk_0x8FAC08959C2D32F8(909.883f, 55.974f, 83.67f, 40f, -70657116, 0);
		unk_0x8FAC08959C2D32F8(909.867f, 55.985f, 83.67f, 40f, -1799784105, 0);
		unk_0xFA57C719261AA55D(&(uParam0->f_29), 0);
	}
	if (unk_0x05EFB6A616B6FADE(uParam0->f_29, 1))
	{
		unk_0x8FAC08959C2D32F8(930.948f, -2.906f, 77.762f, 20f, joaat("prop_sec_barier_02b"), 0);
		unk_0xFA57C719261AA55D(&(uParam0->f_29), 1);
	}
}

void func_522(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (unk_0xDC5D81351D6A4DDB((*uParam0)[iVar0]))
		{
			unk_0xC0AC848E56940C34(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_523(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x05EFB6A616B6FADE(uParam0->f_29, 2))
		{
			unk_0x413F34FCFABEDE4B(892.3843f, 13.15325f, 85.76491f, 940.4319f, 72.6683f, 74.80891f, 1, 0);
			unk_0xFA57C719261AA55D(&(uParam0->f_29), 2);
		}
	}
	else if (!unk_0x05EFB6A616B6FADE(uParam0->f_29, 2))
	{
		unk_0x413F34FCFABEDE4B(892.3843f, 13.15325f, 85.76491f, 940.4319f, 72.6683f, 74.80891f, 0, 0);
		unk_0x2BCFB39E86340DAA(&(uParam0->f_29), 2);
	}
}

void func_524(var uParam0)
{
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_29, 0) && func_526(uParam0))
	{
		unk_0x5F041E7AE5419FEC(909.883f, 55.974f, 83.67f, 40f, -70657116, 1);
		unk_0x5F041E7AE5419FEC(909.867f, 55.985f, 83.67f, 40f, -1799784105, 1);
		unk_0x2BCFB39E86340DAA(&(uParam0->f_29), 0);
	}
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_29, 1) && func_525(uParam0))
	{
		unk_0x5F041E7AE5419FEC(930.948f, -2.906f, 77.762f, 20f, joaat("prop_sec_barier_02b"), 1);
		unk_0x2BCFB39E86340DAA(&(uParam0->f_29), 1);
	}
}

int func_525(var uParam0)
{
	switch (uParam0->f_30)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_526(var uParam0)
{
	switch (uParam0->f_30)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

void func_527(var uParam0)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	bVar0 = false;
	if (func_12(&(uParam0->f_31), 1000, 0))
	{
		if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1) && unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 917.4495f, 50.9877f, 79.7648f, 0) < 1200f)
		{
			bVar0 = true;
		}
		func_7(&(uParam0->f_31));
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < func_532(uParam0))
	{
		if (!unk_0xDC5D81351D6A4DDB((*uParam0)[iVar1]))
		{
			uVar2 = func_531(uParam0, iVar1);
			Var3 = { func_530(uParam0, iVar1) };
			Var6 = { func_529(uParam0, iVar1) };
			(*uParam0)[iVar1] = unk_0xFCFC8CC5FF74580D(uVar2, Var3, 0, 0, 0);
			unk_0x76D3D51F5F66367F((*uParam0)[iVar1], Var6, 2, 1);
			unk_0xB29E08C7AB729BAD((*uParam0)[iVar1], 1);
			unk_0x33CF95E95A476FB9((*uParam0)[iVar1], 1);
			unk_0xA45E1AA8B9CF45AD((*uParam0)[iVar1], 1200);
		}
		else if (!func_528(unk_0xE2BBD32891C18569((*uParam0)[iVar1], 0), func_530(uParam0, iVar1), 0))
		{
			unk_0x4299736016AECE26((*uParam0)[iVar1], func_530(uParam0, iVar1), 0, 0, 0, 1);
			unk_0x76D3D51F5F66367F((*uParam0)[iVar1], func_529(uParam0, iVar1), 2, 1);
		}
		iVar1++;
	}
}

bool func_528(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_529(var uParam0, int iParam1)
{
	switch (uParam0->f_30)
	{
		case 0:
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -140.201f;
				
				case 1:
					return 0f, 0f, -26.803f;
				
				case 2:
					return 0f, 0f, -26.805f;
				
				case 3:
					return 0f, 0f, 56.597f;
				
				case 4:
					return 0f, 0f, 82.397f;
				
				case 5:
					return 0f, 0f, 31.997f;
				
				case 6:
					return 0f, 0f, -41.4f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -26.805f;
				
				case 1:
					return 0f, 0f, -122.403f;
				
				case 2:
					return 0f, 0f, -122.203f;
				
				case 3:
					return 0f, 0f, -122.403f;
				
				case 4:
					return 0f, 90f, -68.6f;
				
				case 5:
					return 0f, 0f, -68.8f;
				
				case 6:
					return 0f, 0f, -73.203f;
				
				case 7:
					return 0f, 0f, -29.805f;
				
				case 8:
					return 0f, 0f, 69.997f;
				
				case 9:
					return 0f, 0f, 142.999f;
				
				case 10:
					return 0f, 0f, 150.753f;
				
				case 11:
					return 0f, 0f, 58.205f;
				
				case 12:
					return 8.45f, -0.235f, 149.607f;
				
				case 13:
					return -4.341f, 0.272f, 151.599f;
				
				case 14:
					return -4.349f, -0.046f, 147.397f;
				
				case 15:
					return 0f, 0f, -11.401f;
				
				case 16:
					return 0f, 0f, 60.799f;
				
				case 17:
					return 0f, 0f, -74.8002f;
				
				case 18:
					return 0f, 0f, 153.5994f;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return -0.601f, 0f, -21.003f;
				
				case 1:
					return 0f, 0f, -26.805f;
				
				case 2:
					return 0f, 0f, -122.403f;
				
				case 3:
					return 0f, 0f, -122.203f;
				
				case 4:
					return 0f, 0f, -122.403f;
				
				case 5:
					return 0f, 90f, -68.6f;
				
				case 6:
					return 0f, 0f, -68.8f;
				
				case 7:
					return -0.578f, 0.0209f, 163.7967f;
				
				case 8:
					return 0f, 0f, -158.203f;
				
				case 9:
					return 0f, 0f, -39.005f;
				
				case 10:
					return 0f, 0f, -39.005f;
				
				case 11:
					return 0f, 4.2f, -121.9998f;
				
				case 12:
					return -4.348f, -0.077f, 146.994f;
				
				case 13:
					return -4.339f, 0.288f, 151.805f;
				
				case 14:
					return 0f, 0f, 68.997f;
				
				case 15:
					return 0f, 0f, 65.997f;
				
				case 16:
					return 0f, 0f, 171.196f;
				
				case 17:
					return 0f, 0.8f, -120.1998f;
				
				case 18:
					return -8.432f, -0.715f, -36.858f;
				
				case 19:
					return -8.462f, 0.02f, -31.856f;
				
				case 20:
					return 8.448f, 0.36f, 145.552f;
				
				case 21:
					return 0f, 0f, -39.8f;
				
				case 22:
					return 0f, 0f, -33f;
				
				case 23:
					return 0.0564f, 0.0847f, -32.811f;
				
				case 24:
					return 0f, 0f, -100.9998f;
				
				case 25:
					return 0f, 5.1f, -168.5999f;
				
				case 26:
					return 0f, 0f, 6.2801f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_530(var uParam0, int iParam1)
{
	switch (uParam0->f_30)
	{
		case 0:
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 929.487f, 49.512f, 79.9f;
				
				case 1:
					return 919.019f, 40.67f, 79.764f;
				
				case 2:
					return 927.41f, 53.634f, 79.764f;
				
				case 3:
					return 926.918f, 45.32f, 79.903f;
				
				case 4:
					return 926.258f, 43.4f, 79.901f;
				
				case 5:
					return 928.242f, 46.731f, 79.9f;
				
				case 6:
					return 922.298f, 39.858f, 79.884f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 927.41f, 53.634f, 79.764f;
				
				case 1:
					return 938.462f, 69.867f, 77.763f;
				
				case 2:
					return 939.972f, 72.308f, 77.804f;
				
				case 3:
					return 939.22f, 71.089f, 77.781f;
				
				case 4:
					return 916.105f, 57.9f, 81.121f;
				
				case 5:
					return 914.016f, 55.336f, 81.161f;
				
				case 6:
					return 920.656f, 43.759f, 79.766f;
				
				case 7:
					return 918.776f, 40.149f, 79.766f;
				
				case 8:
					return 918.517f, 61.977f, 79.77f;
				
				case 9:
					return 908.244f, 44.328f, 79.85f;
				
				case 10:
					return 920.789f, 38.139f, 79.992f;
				
				case 11:
					return 927.8f, 44.726f, 79.903f;
				
				case 12:
					return 930.691f, 59.666f, 79.366f;
				
				case 13:
					return 905.105f, 41.315f, 79.499f;
				
				case 14:
					return 906.584f, 40.161f, 79.484f;
				
				case 15:
					return 925.493f, 50.716f, 79.77f;
				
				case 16:
					return 924.697f, 48.435f, 79.77f;
				
				case 17:
					return 910.4991f, 48.1964f, 79.7541f;
				
				case 18:
					return 928.3137f, 49.4299f, 79.8834f;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 919.0626f, 39.0816f, 80.3563f;
				
				case 1:
					return 927.41f, 53.634f, 79.764f;
				
				case 2:
					return 938.462f, 69.867f, 77.763f;
				
				case 3:
					return 939.972f, 72.308f, 77.804f;
				
				case 4:
					return 939.22f, 71.089f, 77.781f;
				
				case 5:
					return 916.105f, 57.9f, 81.121f;
				
				case 6:
					return 914.016f, 55.336f, 81.161f;
				
				case 7:
					return 917.8382f, 39.6477f, 80.3544f;
				
				case 8:
					return 924.903f, 49.91f, 79.766f;
				
				case 9:
					return 910.226f, 48.627f, 79.766f;
				
				case 10:
					return 908.395f, 44.986f, 79.77f;
				
				case 11:
					return 906.5847f, 21.0608f, 78.2375f;
				
				case 12:
					return 901.832f, 35.477f, 78.991f;
				
				case 13:
					return 909.907f, 26.38f, 78.729f;
				
				case 14:
					return 928.753f, 47.473f, 79.905f;
				
				case 15:
					return 920.425f, 41.891f, 79.765f;
				
				case 16:
					return 920.78f, 43.488f, 79.765f;
				
				case 17:
					return 943.8463f, 80.8881f, 77.9081f;
				
				case 18:
					return 935.78f, 66.738f, 78.075f;
				
				case 19:
					return 933.818f, 63.818f, 78.602f;
				
				case 20:
					return 922.534f, 68.397f, 78.908f;
				
				case 21:
					return 940.6934f, 75.7089f, 77.8455f;
				
				case 22:
					return 917.804f, 61.9117f, 79.7705f;
				
				case 23:
					return 918.8526f, 60.9649f, 79.7607f;
				
				case 24:
					return 927.9077f, 75.8366f, 77.7302f;
				
				case 25:
					return 905.8984f, 40.9564f, 79.4779f;
				
				case 26:
					return 923.204f, 40.8807f, 79.8824f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_531(var uParam0, int iParam1)
{
	switch (uParam0->f_30)
	{
		case 0:
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_cementbags01");
				
				case 1:
					return joaat("prop_woodpile_01b");
				
				case 2:
					return joaat("prop_skip_06a");
				
				case 3:
					return joaat("prop_barrier_work02a");
				
				case 4:
					return joaat("prop_barrier_work01a");
				
				case 5:
					return joaat("prop_barrier_work01a");
				
				case 6:
					return joaat("prop_generator_03b");
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_skip_06a");
				
				case 1:
					return joaat("prop_portaloo_01a");
				
				case 2:
					return joaat("prop_portaloo_01a");
				
				case 3:
					return joaat("prop_portaloo_01a");
				
				case 4:
					return joaat("prop_cablespool_03");
				
				case 5:
					return joaat("prop_cablespool_03");
				
				case 6:
					return joaat("prop_pallettruck_01");
				
				case 7:
					return joaat("prop_cons_crate");
				
				case 8:
					return joaat("prop_conc_blocks01a");
				
				case 9:
					return joaat("prop_cons_cements01");
				
				case 10:
					return joaat("prop_cons_cements01");
				
				case 11:
					return joaat("prop_barrier_work02a");
				
				case 12:
					return joaat("prop_woodpile_01b");
				
				case 13:
					return joaat("prop_woodpile_01b");
				
				case 14:
					return joaat("prop_woodpile_01b");
				
				case 15:
					return joaat("prop_conc_blocks01a");
				
				case 16:
					return joaat("prop_conc_blocks01a");
				
				case 17:
					return joaat("prop_generator_03b");
				
				case 18:
					return joaat("prop_generator_03b");
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_pipes_conc_01");
				
				case 1:
					return joaat("prop_skip_06a");
				
				case 2:
					return joaat("prop_portaloo_01a");
				
				case 3:
					return joaat("prop_portaloo_01a");
				
				case 4:
					return joaat("prop_portaloo_01a");
				
				case 5:
					return joaat("prop_cablespool_03");
				
				case 6:
					return joaat("prop_cablespool_03");
				
				case 7:
					return joaat("prop_pipes_conc_01");
				
				case 8:
					return joaat("prop_pallettruck_01");
				
				case 9:
					return joaat("prop_cons_crate");
				
				case 10:
					return joaat("prop_conc_blocks01a");
				
				case 11:
					return joaat("prop_portacabin01");
				
				case 12:
					return joaat("prop_skip_06a");
				
				case 13:
					return joaat("prop_bin_14a");
				
				case 14:
					return joaat("prop_conc_blocks01a");
				
				case 15:
					return joaat("prop_cementbags01");
				
				case 16:
					return joaat("prop_cementbags01");
				
				case 17:
					return joaat("prop_portacabin01");
				
				case 18:
					return joaat("prop_cons_crate");
				
				case 19:
					return joaat("prop_conc_blocks01a");
				
				case 20:
					return joaat("prop_pipes_01b");
				
				case 21:
					return joaat("prop_dumpster_01a");
				
				case 22:
					return joaat("prop_woodpile_01c");
				
				case 23:
					return joaat("prop_woodpile_01c");
				
				case 24:
					return joaat("prop_generator_03b");
				
				case 25:
					return joaat("prop_generator_03b");
				
				case 26:
					return joaat("prop_generator_03b");
				
				default:
			}
			break;
	}
	return 0;
}

int func_532(var uParam0)
{
	switch (uParam0->f_30)
	{
		case 0:
			return 0;
		
		case 1:
			return 7;
		
		case 2:
			return 19;
		
		case 3:
			return 27;
		
		default:
	}
	return 0;
}

int func_533()
{
	int iVar0;
	
	iVar0 = 0;
	if ((unk_0x4C9BACA8D249CB13() && Global_2423801[unk_0x8D4ED2C97DFF2321() /*413*/] >= 2) && !unk_0xD8B89B387D170E27())
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_534(var uParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x5E0F2F352218B916();
	bVar1 = false;
	if (iVar0 > 1561021200)
	{
		if (uParam0->f_30 != 3)
		{
			if (uParam0->f_30 != -1)
			{
				bVar1 = true;
			}
			uParam0->f_30 = 3;
		}
	}
	else if (iVar0 > 1560416400)
	{
		if (uParam0->f_30 != 2)
		{
			if (uParam0->f_30 != -1)
			{
				bVar1 = true;
			}
			uParam0->f_30 = 2;
		}
	}
	else if (iVar0 > 1559206800)
	{
		if (uParam0->f_30 != 1)
		{
			if (uParam0->f_30 != -1)
			{
				bVar1 = true;
			}
			uParam0->f_30 = 1;
		}
	}
	else if (iVar0 > 1559206800)
	{
		if (uParam0->f_30 != 0)
		{
			if (uParam0->f_30 != -1)
			{
				bVar1 = true;
			}
			uParam0->f_30 = 0;
		}
	}
	else if (uParam0->f_30 != -1)
	{
		bVar1 = true;
		uParam0->f_30 = -1;
	}
	if (bVar1)
	{
		func_522(uParam0);
		func_521(uParam0);
	}
}

void func_535()
{
	struct<3> Var0;
	var uVar3;
	
	if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		Var0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && func_536(Var0))
		{
			if (Var0.f_2 < 120f)
			{
				if (unk_0x8F7BA8E028ADF980(Var0, &uVar3, 0, 0))
				{
					func_7(&uLocal_3);
					Local_5 = { Var0 };
				}
				else if (!func_13(&uLocal_3))
				{
					func_14(&uLocal_3, 0, 0);
				}
				else if (func_12(&uLocal_3, 5000, 0))
				{
					func_7(&uLocal_3);
					if (unk_0xB540EEBB14C48518(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
					{
						unk_0xBAAFB49544432ABD(unk_0xA19140A5C42D8715(), Local_5);
					}
					else
					{
						unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), Local_5, 0, 0, 0, 1);
					}
					unk_0x6259CDB47862A4F3(unk_0xA19140A5C42D8715(), 0, 0);
					Global_4456448.f_77 = { Local_5 };
					Global_1574631.f_20 = 1;
					Global_1574631.f_21 = 999;
				}
			}
		}
		else if (func_13(&uLocal_3))
		{
			func_7(&uLocal_3);
		}
	}
}

int func_536(struct<2> Param0, var uParam2)
{
	if (Global_4456448.f_101)
	{
		return 0;
	}
	if (unk_0x3DF0D4C48D463CA8())
	{
		return 0;
	}
	if (unk_0xD8B89B387D170E27())
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0x8D4ED2C97DFF2321() /*413*/].f_309, 5))
	{
		return 0;
	}
	if (Global_1668658.f_28)
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0x8D4ED2C97DFF2321() /*790*/].f_273.f_22, 14) || unk_0x05EFB6A616B6FADE(Global_1589747[unk_0x8D4ED2C97DFF2321() /*790*/].f_273.f_22, 11))
	{
		return 0;
	}
	if (func_230(unk_0xD4E735F4B6A956AC(), 1, 1) && !unk_0x05EFB6A616B6FADE(Global_1678593, 5))
	{
		return 0;
	}
	if (Param0.f_0 < -1724f || Param0.f_0 > 1694f)
	{
		return 0;
	}
	if (Param0.f_1 < -3330f || Param0.f_1 > 5468f)
	{
		return 0;
	}
	if (unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	if (unk_0x5BEFAE930E36AE54(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	if (unk_0xE13F2DC045CFCEA3(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	if (unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	if (func_537(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	if (unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1668658.f_3309, 10) || unk_0x05EFB6A616B6FADE(Global_1668658.f_3309, 10))
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1668658, 14) || unk_0x05EFB6A616B6FADE(Global_1668658, 17))
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1668658, 22))
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1668658.f_3315, 27))
	{
		return 0;
	}
	return 1;
}

int func_537(int iParam0)
{
	var uVar0;
	
	if (unk_0x4915F4759304D5CF(uParam0) || !unk_0x5D7DFE2058701942(iParam0, 0))
	{
		return 0;
	}
	uVar0 = unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(iParam0, 0));
	if (unk_0xD7ACB5DACC6B9C97(uVar0))
	{
		return 1;
	}
	return 0;
}

void func_538()
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	
	if (func_10(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		Var0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
		bVar3 = true;
		iVar4 = 0;
		while (iVar4 < 1)
		{
			if (func_543(Var0, iVar4))
			{
				if (func_542(iVar4))
				{
					bVar3 = false;
					if (!func_528(Global_1589611, func_541(iVar4), 0))
					{
						Global_1589611 = { func_541(iVar4) };
						Global_1589611.f_6 = { func_540(iVar4) };
						Global_1589611.f_3 = { func_539(iVar4) };
					}
				}
				else
				{
					iVar4++;
				}
				if (bVar3)
				{
					if (!func_207(Global_1589611))
					{
						Global_1589611 = { 0f, 0f, 0f };
						Global_1589611.f_6 = { 0f, 0f, 0f };
						Global_1589611.f_3 = { 0f, 0f, 0f };
					}
				}
			}

Vector3 func_539(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -699.982f, -2228.944f, 4.9366f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_540(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12f, 10f, 10f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_541(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -700.6508f, -2252.413f, 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_542(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

bool func_543(struct<3> Param0, int iParam3)
{
	return unk_0xB7A628320EFF8E47(Param0, func_541(iParam3)) < 900f;
}

void func_544(var uParam0)
{
	var uVar0;
	
	if (*uParam0 == 5 || !Global_2456479.f_3)
	{
		return;
	}
	func_581(uParam0);
	if (((((((((((((!unk_0x4C9BACA8D249CB13() || unk_0xD8B89B387D170E27()) || func_84(unk_0xD4E735F4B6A956AC())) || unk_0x3CF7FBACA6B46850(unk_0xD4E735F4B6A956AC())) || !unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC())) || unk_0xFECCC4BD11AD49F5(unk_0xD4E735F4B6A956AC())) || unk_0x4374EED90C523366(unk_0xA19140A5C42D8715())) || Global_68494) || Global_70017) || (func_251(unk_0xD4E735F4B6A956AC(), 0) && unk_0x05EFB6A616B6FADE(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_4, 20))) || func_438(unk_0xD4E735F4B6A956AC(), 0)) || func_3()) || func_579(unk_0xD4E735F4B6A956AC(), 32)) || Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] == 5)
	{
		func_578(uParam0);
		return;
	}
	if (uParam0->f_4 == 0 && Global_2456479.f_6)
	{
		uParam0->f_4 = func_577(600);
		uParam0->f_5 = func_576();
		uParam0->f_5 = func_575(uParam0->f_5);
		uParam0->f_5 = func_574(uParam0->f_5);
	}
	if (uParam0->f_5 == -1)
	{
		return;
	}
	func_573();
	func_569(uParam0);
	switch (*uParam0)
	{
		case 0:
			if (!unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_142, 22))
			{
				return;
			}
			if (!func_4())
			{
				return;
			}
			func_14(&(uParam0->f_6), 0, 0);
			if ((!unk_0x05EFB6A616B6FADE(uParam0->f_3, 6) && !func_568()) && !func_567())
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			func_566(uParam0, 0);
			if (func_12(&(uParam0->f_6), 150000, 0))
			{
				if (func_563())
				{
					func_559(func_562(), func_561(), func_560(), -1);
					uVar0 = func_166(3820, -1, 0);
					if (!unk_0x05EFB6A616B6FADE(uVar0, 6))
					{
						unk_0x2BCFB39E86340DAA(&iVar0, 6);
						func_238(3820, iVar0, -1, 1, 0);
					}
					else if (!unk_0x05EFB6A616B6FADE(iVar0, 7))
					{
						unk_0x2BCFB39E86340DAA(&iVar0, 7);
						func_238(3820, iVar0, -1, 1, 0);
					}
					else if (!unk_0x05EFB6A616B6FADE(iVar0, 8))
					{
						unk_0x2BCFB39E86340DAA(&iVar0, 8);
						func_238(3820, iVar0, -1, 1, 0);
					}
					unk_0x2BCFB39E86340DAA(&(uParam0->f_3), 6);
					*uParam0 = 2;
					func_7(&(uParam0->f_6));
				}
			}
			break;
		
		case 2:
			if (uParam0->f_5 != 0)
			{
				func_558(uParam0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (!unk_0x05EFB6A616B6FADE(uParam0->f_3, 3))
			{
				if (func_12(&(uParam0->f_6), 60000, 0) && !unk_0xE06AA0996C4E4E03())
				{
					unk_0x2BCFB39E86340DAA(&(uParam0->f_3), 3);
					unk_0x2BCFB39E86340DAA(&(uParam0->f_1), 2);
					func_7(&(uParam0->f_6));
					Global_1686755 = 1;
					Global_1686755.f_1 = uParam0->f_5;
					Global_1686755.f_2 = 18;
					unk_0x2BCFB39E86340DAA(&(uParam0->f_3), 2);
				}
			}
			else if (unk_0x05EFB6A616B6FADE(uParam0->f_1, 2))
			{
				if (func_12(&(uParam0->f_6), 1200000, 0))
				{
					unk_0xFA57C719261AA55D(&(uParam0->f_1), 2);
					unk_0xFA57C719261AA55D(&(uParam0->f_3), 5);
				}
			}
			else
			{
				func_557(uParam0);
			}
			func_566(uParam0, 1);
			func_545(uParam0);
			break;
		
		case 4:
			break;
	}
}

void func_545(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	
	fVar4 = 1E+07f;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		fVar3 = unk_0xB7A628320EFF8E47(func_556(iVar1), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0));
		if (fVar3 < fVar4)
		{
			fVar4 = fVar3;
			iVar2 = iVar1;
		}
		if (!unk_0x05EFB6A616B6FADE(uParam0->f_1, 1))
		{
			if (!unk_0xE06AA0996C4E4E03() && fVar3 < 2500f)
			{
				if (unk_0x346268472B5F4E43() == 7)
				{
					func_559(func_555(), func_554(), func_553(), -1);
				}
				else
				{
					func_552(func_555(), func_554(), -1);
				}
				unk_0x2BCFB39E86340DAA(&(uParam0->f_1), 1);
			}
		}
		Var5 = { func_556(iVar1) };
		if (fVar3 < 10000f)
		{
			func_551(Var5);
		}
		if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), Var5, 2.75f, 2.75f, 2.75f, 0, 1, 0))
		{
			bVar0 = true;
			unk_0xD481A812073CCF02(0, 101, 1);
			unk_0xD481A812073CCF02(0, 81, 1);
			unk_0xD481A812073CCF02(0, 82, 1);
			unk_0xD481A812073CCF02(0, 85, 1);
			unk_0xD481A812073CCF02(0, 332, 1);
			unk_0xD481A812073CCF02(0, 333, 1);
			if (!func_549("STRING", func_550(), 0))
			{
				func_548("STRING", func_550(), 30000);
				unk_0x2BCFB39E86340DAA(&(uParam0->f_1), 0);
			}
			if (unk_0xD73B1037F6BD4B90(2, 51) && !func_547(0))
			{
				Global_1686755.f_3 = 1;
				Global_1686755.f_4 = uParam0->f_5;
				func_546(uParam0);
				*uParam0 = 4;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		func_546(uParam0);
	}
	if (uParam0->f_2 != iVar2)
	{
		uParam0->f_2 = iVar2;
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (unk_0xCE3CB618AFE55EFB(uParam0->f_10[iVar1]))
			{
				if (iVar1 == uParam0->f_2)
				{
					unk_0x0D31A3B4644EC204(uParam0->f_10[iVar1], 0);
				}
				else
				{
					unk_0x0D31A3B4644EC204(uParam0->f_10[iVar1], 1);
				}
			}
			iVar1++;
		}
	}
}

void func_546(var uParam0)
{
	if (unk_0x05EFB6A616B6FADE(uParam0->f_1, 0))
	{
		if (func_549("STRING", func_550(), 0))
		{
			unk_0x135C61E339DABBAC(1);
		}
		unk_0xFA57C719261AA55D(&(uParam0->f_1), 0);
	}
}

int func_547(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
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
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_548(char* sParam0, var uParam1, int iParam2)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x42360C300250E797(uParam1);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam2);
}

bool func_549(char* sParam0, var uParam1, int iParam2)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xBA9FB571BCB6C1BD(iParam2);
	}
	unk_0xC327C023FDA37F2E(uParam1);
	return unk_0x3D94488A86ABB03F(0);
}

char* func_550()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return "~s~Press ~INPUT_CONTEXT~ ~s~to enter.~s~";
		
		case 4:
			return "~s~Pulsa ~INPUT_CONTEXT~~s~para entrar.~s~";
		
		case 3:
			return "~s~Premi ~INPUT_CONTEXT~ ~s~per entrare~s~.";
		
		case 2:
			return "~s~Dr??cke ~INPUT_CONTEXT~, um einzutreten.~s~";
		
		case 1:
			return "~s~Appuyez sur ~INPUT_CONTEXT~ ~s~pour entrer~s~.";
		
		case 6:
			return "~s~Naci??nij ~INPUT_CONTEXT~~s~, aby wej????~s~.";
		
		case 7:
			return "~s~?????????????? ~INPUT_CONTEXT~ ~s~, ?????????? ??????????????????????.~s~";
		
		case 5:
			return "~s~Pressione ~INPUT_CONTEXT~ ~s~para entrar.~s~";
		
		case 11:
			return "~s~Presiona ~INPUT_CONTEXT~ ~s~para entrar~s~.";
		
		case 8:
			return "~s~??????????????? ~INPUT_CONTEXT~~s~??? ???????????????.~s~";
		
		case 10:
			return "~s~~INPUT_CONTEXT~~s~????????????~s~";
		
		case 9:
			return "~s~?????~INPUT_CONTEXT~??~s~?????????~s~";
		
		case 12:
			return "~s~?????~INPUT_CONTEXT~??~s~?????????~s~";
		
		default:
	}
	return "";
}

void func_551(struct<3> Param0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	struct<3> Var5;
	
	fVar4 = 1f;
	unk_0x1C828C4226A9FADF(12, &uVar0, &uVar1, &uVar2, &uVar3);
	Var5 = { Param0 };
	Var5.f_2 = (Var5.f_2 - 0.7f);
	unk_0xC0BA7F3D0AB2E224(1, Var5, 0f, 0f, 0f, 0f, 0f, 0f, (fVar4 * 1.8f), (fVar4 * 1.8f), 2.5f, uVar0, uVar1, uVar2, 150, 0, 0, 2, 0, 0, 0, 0);
}

void func_552(var uParam0, var uParam1, int iParam2)
{
	unk_0x143A55A4EA118F24("BRIEF_STRING2");
	unk_0xC327C023FDA37F2E(uParam0);
	unk_0xC327C023FDA37F2E(uParam1);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam2);
}

char* func_553()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return "";
		
		case 4:
			return "";
		
		case 3:
			return "";
		
		case 2:
			return "";
		
		case 1:
			return "";
		
		case 6:
			return "";
		
		case 7:
			return "?????????????? ???? ??????????????????????.";
		
		case 5:
			return "";
		
		case 11:
			return "";
		
		case 8:
			return "";
		
		case 10:
			return "";
		
		case 9:
			return "";
		
		case 12:
			return "";
		
		default:
	}
	return "";
}

char* func_554()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return "y the currently active Repo Mission.";
		
		case 4:
			return "para jugar a la misi??n de embargo activa.";
		
		case 3:
			return "sione di recupero attiva.";
		
		case 2:
			return " um die aktuelle R??ckf??hrungsmission zu starten.";
		
		case 1:
			return "pour participer ?? la mission de saisie en cours.";
		
		case 6:
			return "aktywn?? konfiskat??.";
		
		case 7:
			return "?????????? ?????????????????????? ?? ???????????????? ";
		
		case 5:
			return "a Miss??o de Retomada ativa.";
		
		case 11:
			return " para jugar la misi??n de embargo activa.";
		
		case 8:
			return "~BLIP_SIMEON_FAMILY~~s~??? ??????????????????.";
		
		case 10:
			return "???????????????????????????????????????????????????";
		
		case 9:
			return "?????????????????????????????????";
		
		case 12:
			return "???????????????";
		
		default:
	}
	return "";
}

char* func_555()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return "Enter ~BLIP_SIMEON_FAMILY~~s~ to pla";
		
		case 4:
			return "Entra en ~BLIP_SIMEON_FAMILY~~s~ ";
		
		case 3:
			return "Raggiungi ~BLIP_SIMEON_FAMILY~~s~ ed entra per giocare alla mis";
		
		case 2:
			return "Betritt??~BLIP_SIMEON_FAMILY~~s~,";
		
		case 1:
			return "Rejoignez ~BLIP_SIMEON_FAMILY~~s~ ";
		
		case 6:
			return "Wejd?? do ~BLIP_SIMEON_FAMILY~~s~, aby rozegra?? obecnie ";
		
		case 7:
			return "?????????????????????????? ?? ~BLIP_SIMEON_FAMILY~~s~, ";
		
		case 5:
			return "V?? at?? ~BLIP_SIMEON_FAMILY~~s~ para jogar ";
		
		case 11:
			return "Entra en ~BLIP_SIMEON_FAMILY~~s~";
		
		case 8:
			return "?????? ???????????? ?????? ????????? ?????????????????? ";
		
		case 10:
			return "~BLIP_SIMEON_FAMILY~~s~???????????????????????????????????????";
		
		case 9:
			return "?????? ~BLIP_SIMEON_FAMILY~~s~ ??????";
		
		case 12:
			return "?????? ~BLIP_SIMEON_FAMILY~~s~ ?????????????????????";
		
		default:
	}
	return "";
}

Vector3 func_556(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -59.0544f, -1109.503f, 25.4358f;
		
		default:
	}
	return -59.0544f, -1109.503f, 25.4358f;
}

void func_557(var uParam0)
{
	if (uParam0->f_5 != 0 && !unk_0x05EFB6A616B6FADE(uParam0->f_3, 2))
	{
		Global_1686755 = 1;
		Global_1686755.f_1 = uParam0->f_5;
		Global_1686755.f_2 = 18;
		unk_0x2BCFB39E86340DAA(&(uParam0->f_3), 2);
		if (unk_0x05EFB6A616B6FADE(uParam0->f_3, 5))
		{
			unk_0xFA57C719261AA55D(&(uParam0->f_3), 5);
		}
	}
}

void func_558(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0xCE3CB618AFE55EFB(uParam0->f_10[iVar0]))
		{
			uParam0->f_10[iVar0] = unk_0xA70969818F182A36(func_556(iVar0));
			unk_0x7DB79A42AADE120F(uParam0->f_10[iVar0], 293);
			unk_0xC4F12E446CCE89F5(uParam0->f_10[iVar0], "ACCNA_SIM");
			unk_0x3070F458AEF47C98(uParam0->f_10[iVar0], 4);
			if (!unk_0x05EFB6A616B6FADE(uParam0->f_3, (0 + iVar0)))
			{
				unk_0x0798CD089167D3C1(uParam0->f_10[iVar0], 1);
				unk_0xB951092EA72637CD(uParam0->f_10[iVar0], 250);
				unk_0xE14767EA16F946A4(uParam0->f_10[iVar0], 7000);
				unk_0x2BCFB39E86340DAA(&(uParam0->f_3), (0 + iVar0));
			}
		}
		iVar0++;
	}
}

void func_559(var uParam0, var uParam1, var uParam2, int iParam3)
{
	unk_0x143A55A4EA118F24("MIS_CUST_TXT3");
	unk_0x42360C300250E797(uParam0);
	unk_0x42360C300250E797(uParam1);
	unk_0x42360C300250E797(uParam2);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam3);
}

char* func_560()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return "ions now via the Online section of the Pause Menu.";
		
		case 4:
			return "misiones a trav??s de la secci??n Online del men?? de pausa.";
		
		case 3:
			return "i tramite la sezione Online del menu di pausa.";
		
		case 2:
			return "Online-Bereich des Pause-Men??s auf diese Jobs zu.";
		
		case 1:
			return "missions maintenant via la section En ligne du menu Pause.";
		
		case 6:
			return "Online w menu pauzy.";
		
		case 7:
			return "?????? ???????????????? '????????' ?? ???????? ??????????.";
		
		case 5:
			return " atrav??s da se????o GTA Online do Menu de Pausa.";
		
		case 11:
			return " de la secci??n 'GTA Online' del men?? de pausa.";
		
		case 8:
			return "????????? ???????????? ?????? ????????? ??????????????????.";
		
		case 10:
			return "???ONLINE??????????????????????????????????????????????????????";
		
		case 9:
			return "???????????????????????????????????????????????????";
		
		case 12:
			return "??????????????????????????????????????????";
		
		default:
	}
	return "";
}

char* func_561()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return "~BLIP_SIMEON_FAMILY~~s~ or access these new miss";
		
		case 4:
			return "ve hasta ~BLIP_SIMEON_FAMILY~~s~ o accede a estas nuevas ";
		
		case 3:
			return "ggiungi ~BLIP_SIMEON_FAMILY~~s~ o accedi a queste nuove mission";
		
		case 2:
			return "~BLIP_SIMEON_FAMILY~~s~ oder greife ??ber den ";
		
		case 1:
			return "rejoignez ~BLIP_SIMEON_FAMILY~~s~ ou lancez ces nouvelles ";
		
		case 6:
			return "~BLIP_SIMEON_FAMILY~~s~ lub uruchom akcj?? za pomoc?? sekcji ";
		
		case 7:
			return "???????????????????? ???? ?????????? ~BLIP_SIMEON_FAMILY~~s~ ";
		
		case 5:
			return " ~BLIP_SIMEON_FAMILY~~s~ ou acesse essas novas miss??es";
		
		case 11:
			return " ~BLIP_SIMEON_FAMILY~~s~ o accede a estas actividades a trav??s";
		
		case 8:
			return "~BLIP_SIMEON_FAMILY~~s~??? ????????? ?????? ?????? ????????? ";
		
		case 10:
			return "???~BLIP_SIMEON_FAMILY~~s~????????????????????????????????????";
		
		case 9:
			return "?????? ~BLIP_SIMEON_FAMILY~~s~ ????????????????????????";
		
		case 12:
			return "~BLIP_SIMEON_FAMILY~~s~ ????????????????????????";
		
		default:
	}
	return "";
}

char* func_562()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return "PREMIUM DELUXE REPO WORK NOW AVAILABLE: Go to ";
		
		case 4:
			return "EMBARGO DE PREMIUM DELUXE YA DISPONIBLE: ";
		
		case 3:
			return "NUOVA MISSIONE DI RECUPERO DELLA PREMIUM DELUXE DISPONIBILE: ra";
		
		case 2:
			return "PREMIUM-DELUXE-R??CKF??HRUNG VERF??GBAR: Begib dich zu ";
		
		case 1:
			return "SAISIES DE PREMIUM DELUXE MAINTENANT DISPONIBLES : ";
		
		case 6:
			return "DOST??PNA NOWA KONFISKATA PREMIUM DELUXE: Udaj si?? do ";
		
		case 7:
			return "?????????? ?????????????????????? ?????? PREMIUM DELUXE: ";
		
		case 5:
			return "RETOMADAS PREMIUM DELUXE J?? DISPON??VEIS: v?? at??";
		
		case 11:
			return "NUEVOS EMBARGOS DE LUJO DISPONIBLES: ve hasta";
		
		case 8:
			return "????????? ???????????? ????????? ?????? ?????? ?????? ??????: ";
		
		case 10:
			return "???????????????????????????????????????????????????????????????";
		
		case 9:
			return "???????????????????????????????????????";
		
		case 12:
			return "??????????????????????????????????????????????????? ";
		
		default:
	}
	return "";
}

int func_563()
{
	if (!Global_1686755.f_5 && !iLocal_55)
	{
		iLocal_55 = 1;
		Global_1686755.f_5 = 1;
		StringCopy(&(Global_1686755.f_7), func_565(), 64);
		StringCopy(&(Global_1686755.f_23), func_564(), 64);
		Global_1686755.f_6 = 18;
	}
	else if (iLocal_55)
	{
		iLocal_55 = 0;
		return 1;
	}
	return 0;
}

char* func_564()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return " profitable repo work, we call it even. Come to Premium Deluxe";
		
		case 4:
			return "con algunos embargos y estaremos en paz. Ven a Premium Deluxe.";
		
		case 3:
			return "o pari. Vieni alla Premium Deluxe.";
		
		case 2:
			return "R??ckf??hrungsjob und wir sind quitt. Komm zu Premium Deluxe.";
		
		case 1:
			return "pour une saisie, on sera quittes. Viens chez Premium Deluxe.";
		
		case 6:
			return "skatami i b??dziemy kwita. Wpadnij do Premium Deluxe.";
		
		case 7:
			return "?? ?????????? ??????????. ???????????? ?? Premium Deluxe.";
		
		case 5:
			return "as retomadas, vamos estar quites. Venha at?? a Premium Deluxe.";
		
		case 11:
			return " y estaremos a mano. Ve a Premium Autom??viles de Lujo.";
		
		case 8:
			return "?????? ?????? ???????????? ???????????? ???????????? ?????????.";
		
		case 10:
			return "???????????????????????????????????????????????????????????????";
		
		case 9:
			return "????????????????????????????????????????????????????????????";
		
		case 12:
			return "????????????????????????????????????????????????????????????";
		
		default:
	}
	return "";
}

char* func_565()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return "You owe me a favor, remember? Good news. You help me with some";
		
		case 4:
			return "Te recuerdo que me debes una, pero est??s de suerte: ay??dame ";
		
		case 3:
			return "Mi devi un favore, ricordi? Aiutami con qualche recupero e siam";
		
		case 2:
			return "Du schuldest mir noch einen Gefallen. Hilf mir bei einem ";
		
		case 1:
			return "Tu m'es redevable, mais j'ai une bonne nouvelle. Si tu m'aides ";
		
		case 6:
			return "Wisisz mi przys??ug??, pami??tasz? Pomo??esz mi z kilkoma konfi";
		
		case 7:
			return "???? ?????????? ????????????. ?????????????????? ????????????, ";
		
		case 5:
			return "Voc?? tava me devendo uma, lembra? Ent??o, se me ajudar com um";
		
		case 11:
			return "Me debes una, ??no? ??Pues bien! Ay??dame con algunos embargos";
		
		case 8:
			return "????????? ?????? ??? ??? ?????? ?????? ????????? ???????????? ";
		
		case 10:
			return "???????????????????????????????????????????????????????????????";
		
		case 9:
			return "????????????????????????????????????????????????????????????";
		
		case 12:
			return "????????????????????????????????????????????????????????????";
		
		default:
	}
	return "";
}

void func_566(var uParam0, bool bParam1)
{
	if (unk_0x5E0F2F352218B916() > uParam0->f_4)
	{
		uParam0->f_4 = 0;
		uParam0->f_5 = 0;
		unk_0xFA57C719261AA55D(&(uParam0->f_3), 2);
		if (bParam1)
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_3), 5);
		}
	}
}

bool func_567()
{
	var uVar0;
	
	uVar0 = func_166(3820, -1, 0);
	return ((unk_0x05EFB6A616B6FADE(uVar0, 6) && unk_0x05EFB6A616B6FADE(iVar0, 7)) && unk_0x05EFB6A616B6FADE(iVar0, 8));
}

bool func_568()
{
	var uVar0;
	
	uVar0 = func_166(3820, -1, 0);
	return ((unk_0x05EFB6A616B6FADE(uVar0, 3) || unk_0x05EFB6A616B6FADE(iVar0, 4)) || unk_0x05EFB6A616B6FADE(iVar0, 5));
}

void func_569(var uParam0)
{
	var uVar0;
	
	if (unk_0x05EFB6A616B6FADE(uParam0->f_3, 7) && !unk_0xE06AA0996C4E4E03())
	{
		if (!func_4())
		{
			return;
		}
		if (!func_13(&(uParam0->f_8)))
		{
			func_14(&(uParam0->f_8), 0, 0);
		}
		else if (func_12(&(uParam0->f_8), 5000, 0))
		{
			uVar0 = func_166(3820, -1, 0);
			if (!unk_0x05EFB6A616B6FADE(uVar0, 3))
			{
				unk_0x2BCFB39E86340DAA(&iVar0, 3);
			}
			else if (!unk_0x05EFB6A616B6FADE(iVar0, 4))
			{
				unk_0x2BCFB39E86340DAA(&iVar0, 4);
			}
			else if (!unk_0x05EFB6A616B6FADE(iVar0, 5))
			{
				unk_0x2BCFB39E86340DAA(&iVar0, 5);
			}
			else
			{
				unk_0xFA57C719261AA55D(&(uParam0->f_3), 7);
			}
			if (unk_0x05EFB6A616B6FADE(uParam0->f_3, 7))
			{
				func_559(func_572(), func_571(), func_570(), -1);
				unk_0xFA57C719261AA55D(&(uParam0->f_3), 7);
				func_238(3820, iVar0, -1, 1, 0);
			}
		}
	}
}

char* func_570()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return " for 'Repo -' in the Missions category of the Jobs menu.";
		
		case 4:
			return "'Embargo' en la categor??a Misiones del men?? de actividades.";
		
		case 3:
			return "ra le missioni nel menu Attivit??.";
		
		case 2:
			return "'R??ckf??hrung' im Men?? 'Jobs', um sie zu spielen.";
		
		case 1:
			return "ions 'Saisie -' dans la cat??gorie Missions du menu Activit??s.";
		
		case 6:
			return "w kategorii misji w menu akcji, aby w nie zagra??.";
		
		case 7:
			return "?? ?????????????????? '??????????????' ?? ???????? ??????.";
		
		case 5:
			return "Retomada -' dentre as Miss??es no Menu de Servi??os.";
		
		case 11:
			return " en 'Misiones' del men?? de actividades para iniciarlas.";
		
		case 8:
			return "???????????? ?????? ????????? ??????????????????.";
		
		case 10:
			return "???????????????????????????????????????????????????????????????";
		
		case 9:
			return "????????????????????????????????????????????????";
		
		case 12:
			return "??????????????????????????????'?????????'???";
		
		default:
	}
	return "";
}

char* func_571()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return "in the Online section of the Pause Menu. Look";
		
		case 4:
			return "disponibles en la secci??n Online del men?? de pausa. Busca ";
		
		case 3:
			return "nche nella sezione Online del menu di pausa. Cerca 'Recupero' t";
		
		case 2:
			return "'Online' des Pause-Men??s verf??gbar. Gehe zur Kategorie ";
		
		case 1:
			return " dans la section En ligne du menu Pause. Recherchez les miss";
		
		case 6:
			return "Online w menu pauzy. Szukaj 'Konfiskata -' ";
		
		case 7:
			return "?? ?????????????? '????????' ???????? ?????????? ";
		
		case 5:
			return "n??veis na se????o GTA Online do Menu de Pausa. Procure por '";
		
		case 11:
			return " la secci??n 'GTA Online' del men?? de pausa. Busca 'Embargo'";
		
		case 8:
			return "????????? ??????????????? ?????? ??????. ?????? ?????? ??? ";
		
		case 10:
			return "?????????ONLINE?????????????????????????????????????????????";
		
		case 9:
			return "???????????????????????????????????????????????????";
		
		case 12:
			return "????????????????????????????????????????????????";
		
		default:
	}
	return "";
}

char* func_572()
{
	switch (unk_0x346268472B5F4E43())
	{
		case 0:
			return "Premium Deluxe Repo Missions are also available ";
		
		case 4:
			return "Las misiones de embargo de Premium Deluxe tambi??n est??n ";
		
		case 3:
			return "Le missioni di recupero della Premium Deluxe sono disponibili a";
		
		case 2:
			return "Premium-Deluxe-R??ckf??hrungen sind auch im Men??punkt ";
		
		case 1:
			return "Les missions de saisie de Premium Deluxe sont aussi disponibles";
		
		case 6:
			return "Konfiskaty Premium Deluxe s?? r??wnie?? dost??pne w sekcji ";
		
		case 7:
			return "?????????????????????? ?????? Premium Deluxe ???????????????? ";
		
		case 5:
			return "As miss??es Retomada Premium Deluxe tamb??m est??o dispo";
		
		case 11:
			return "Las misiones de embargo de lujo tambi??n est??n disponibles en";
		
		case 8:
			return "???????????? ????????? ?????? ????????? ?????? ?????? ?????? ";
		
		case 10:
			return "???????????????????????????????????????????????????????????????";
		
		case 9:
			return "?????????????????????????????????????????????????????????";
		
		case 12:
			return "????????????????????????????????????????????????";
		
		default:
	}
	return "";
}

void func_573()
{
	var uVar0;
	
	uVar0 = func_166(3820, -1, 0);
	if (!bLocal_41 && !bLocal_42)
	{
	}
	else if (bLocal_41 && !bLocal_42)
	{
		if (!unk_0x05EFB6A616B6FADE(uVar0, 9))
		{
			unk_0xFA57C719261AA55D(&iVar0, 6);
			unk_0xFA57C719261AA55D(&iVar0, 7);
			unk_0xFA57C719261AA55D(&iVar0, 8);
			unk_0xFA57C719261AA55D(&iVar0, 3);
			unk_0xFA57C719261AA55D(&iVar0, 4);
			unk_0xFA57C719261AA55D(&iVar0, 5);
			unk_0x2BCFB39E86340DAA(&iVar0, 9);
			func_238(3820, iVar0, -1, 1, 0);
		}
	}
	else if (!bLocal_41 && bLocal_42)
	{
		if (!unk_0x05EFB6A616B6FADE(iVar0, 10))
		{
			unk_0xFA57C719261AA55D(&iVar0, 6);
			unk_0xFA57C719261AA55D(&iVar0, 7);
			unk_0xFA57C719261AA55D(&iVar0, 8);
			unk_0xFA57C719261AA55D(&iVar0, 3);
			unk_0xFA57C719261AA55D(&iVar0, 4);
			unk_0xFA57C719261AA55D(&iVar0, 5);
			unk_0x2BCFB39E86340DAA(&iVar0, 10);
			func_238(3820, iVar0, -1, 1, 0);
		}
	}
}

int func_574(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1218)
	{
		if (iParam0 == Global_794709.f_107189[iVar0 /*13*/].f_1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_575(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -623391175;
		
		case 1:
			return -1801970482;
		
		case 2:
			return -589934703;
		
		case 3:
			return -1591493106;
		
		case 4:
			return 1511571939;
		
		case 5:
			return -590314610;
		
		case 6:
			return -439469264;
		
		case 7:
			return 1240484981;
		
		default:
	}
	return 0;
}

int func_576()
{
	return ((unk_0x5E0F2F352218B916() / 600) % 8);
}

int func_577(int iParam0)
{
	int iVar0;
	
	iVar0 = (unk_0x5E0F2F352218B916() / iParam0);
	iVar0++;
	iVar0 = (iVar0 * iParam0);
	return iVar0;
}

void func_578(var uParam0)
{
	int iVar0;
	
	if (*uParam0 != 0)
	{
		func_546(uParam0);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (unk_0xCE3CB618AFE55EFB(uParam0->f_10[iVar0]))
			{
				unk_0xE1623437A3194332(&(uParam0->f_10[iVar0]));
			}
			iVar0++;
		}
		*uParam0 = 0;
		uParam0->f_4 = 0;
		uParam0->f_5 = 0;
		uParam0->f_1 = 0;
		uParam0->f_2 = -1;
		func_7(&(uParam0->f_6));
		func_7(&(uParam0->f_8));
		if (!unk_0x4C9BACA8D249CB13())
		{
			unk_0xFA57C719261AA55D(&(uParam0->f_3), 4);
		}
	}
}

int func_579(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_580(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1589747[iVar0 /*790*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_580(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_2437022.f_1, iParam0);
	}
	return 1;
}

void func_581(var uParam0)
{
	if (unk_0x4C9BACA8D249CB13() && unk_0xD8B89B387D170E27())
	{
		if (((!unk_0x05EFB6A616B6FADE(uParam0->f_3, 8) && Global_4456448.f_130782 != 0) && !func_358()) && !func_3())
		{
			if (Global_4456448 == 0)
			{
				if (func_585(Global_4456448.f_130782))
				{
					unk_0x2BCFB39E86340DAA(&(uParam0->f_3), 7);
					Global_4456448.f_59 = Global_262145.f_11472;
					func_582(1);
				}
			}
			unk_0x2BCFB39E86340DAA(&(uParam0->f_3), 8);
		}
		if (unk_0x05EFB6A616B6FADE(uParam0->f_3, 7))
		{
			if (Global_262145.f_8872 != 1)
			{
				Global_262145.f_8872 = 1;
			}
			if (Global_4456448.f_59 != Global_262145.f_11472)
			{
				Global_4456448.f_59 = Global_262145.f_11472;
			}
		}
	}
	else if (unk_0x05EFB6A616B6FADE(uParam0->f_3, 8))
	{
		unk_0xFA57C719261AA55D(&(uParam0->f_3), 8);
		func_582(0);
	}
}

void func_582(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 1218)
		{
			if (Global_4456448 == 0)
			{
				if (Global_794709.f_4[iVar0 /*88*/].f_68 == 2 || unk_0x05EFB6A616B6FADE(Global_794709.f_4[iVar0 /*88*/].f_76, 1))
				{
					if (func_585(Global_794709.f_107189[iVar0 /*13*/].f_1) || func_583(Global_794709.f_107189[iVar0 /*13*/].f_1))
					{
						if (!unk_0x05EFB6A616B6FADE(Global_794709.f_4[iVar0 /*88*/].f_76, 14) && Global_4456448.f_130782 != Global_794709.f_107189[iVar0 /*13*/].f_1)
						{
							unk_0x2BCFB39E86340DAA(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
							unk_0x2BCFB39E86340DAA(&(iLocal_56[iVar2]), iVar1);
						}
					}
					else if (unk_0x05EFB6A616B6FADE(Global_794709.f_4[iVar0 /*88*/].f_76, 14))
					{
						unk_0xFA57C719261AA55D(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
						unk_0x2BCFB39E86340DAA(&(iLocal_56[iVar2]), iVar1);
					}
				}
			}
			iVar1++;
			if (iVar1 >= 32)
			{
				iVar1 = 0;
				iVar2++;
			}
			iVar0++;
		}
		Global_262145.f_8872 = 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 1218)
		{
			if (unk_0x05EFB6A616B6FADE(iLocal_56[iVar2], iVar1))
			{
				if (func_585(Global_794709.f_107189[iVar0 /*13*/].f_1) || func_583(Global_794709.f_107189[iVar0 /*13*/].f_1))
				{
					if (unk_0x05EFB6A616B6FADE(Global_794709.f_4[iVar0 /*88*/].f_76, 14))
					{
						unk_0xFA57C719261AA55D(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
					}
				}
				else if (!unk_0x05EFB6A616B6FADE(Global_794709.f_4[iVar0 /*88*/].f_76, 14))
				{
					unk_0x2BCFB39E86340DAA(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
				}
			}
			iVar1++;
			if (iVar1 >= 32)
			{
				iVar1 = 0;
				iVar2++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_56)
		{
			iLocal_56[iVar0] = 0;
			iVar0++;
		}
		Global_262145.f_8872 = 2;
	}
}

int func_583(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 0)
	{
		if (iParam0 == func_584(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_584(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1657186075;
		
		case 1:
			return -1789688675;
		
		case 2:
			return -1433171161;
		
		case 3:
			return -1635197776;
		
		case 4:
			return -1509298929;
		
		case 5:
			return 1367922159;
		
		default:
	}
	return 1657186075;
}

int func_585(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == func_575(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_586(var uParam0)
{
	if (func_589())
	{
		func_587(uParam0);
	}
}

void func_587(var uParam0)
{
	if (!*uParam0)
	{
		if (unk_0xD1ABB20CFF127CCC())
		{
			switch (uParam0->f_1)
			{
				case 0:
					if (unk_0xDF0ADAD7E584090D(2, 189))
					{
						uParam0->f_1++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0xDF0ADAD7E584090D(2, 190))
					{
						uParam0->f_1++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						uParam0->f_1 = 0;
					}
					break;
				
				case 2:
					if (unk_0xDF0ADAD7E584090D(2, 189))
					{
						uParam0->f_1++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						uParam0->f_1 = 0;
					}
					break;
				
				case 3:
					if (unk_0xDF0ADAD7E584090D(2, 190))
					{
						uParam0->f_1++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						uParam0->f_1 = 0;
					}
					break;
				
				case 4:
					if (unk_0xDF0ADAD7E584090D(2, 188))
					{
						*uParam0 = 1;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						uParam0->f_1 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xD1ABB20CFF127CCC())
	{
		switch (uParam0->f_1)
		{
			case 0:
				if (unk_0xDF0ADAD7E584090D(2, 188))
				{
					uParam0->f_1++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0xDF0ADAD7E584090D(2, 190))
				{
					uParam0->f_1++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					uParam0->f_1 = 0;
				}
				break;
			
			case 2:
				if (unk_0xDF0ADAD7E584090D(2, 189))
				{
					uParam0->f_1++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					uParam0->f_1 = 0;
				}
				break;
			
			case 3:
				if (unk_0xDF0ADAD7E584090D(2, 190))
				{
					uParam0->f_1++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					uParam0->f_1 = 0;
				}
				break;
			
			case 4:
				if (unk_0xDF0ADAD7E584090D(2, 189))
				{
					*uParam0 = 0;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					uParam0->f_1 = 0;
				}
				break;
			}
	}
	if (*uParam0)
	{
		unk_0xFD5A6B90A46ACED0(0f, 0.23f);
		unk_0xA6D7328EAA8CB61E(255, 255, 255, 255);
		func_588(0.69f, 0.06f, "STRING", sLocal_0);
	}
}

void func_588(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0x42360C300250E797(sParam3);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, 0);
}

bool func_589()
{
	return unk_0x05BEBC245254F6F2(-1762644250);
}

