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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
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
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
#endregion

void __EntryFunction__()
{
	var uVar0;
	bool bVar2;
	
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	fLocal_98 = 0.952f;
	fLocal_99 = 0.949f;
	if (unk_0xB9B05E900D325C36(32))
	{
		unk_0xBEE2834559A8897A();
	}
	unk_0x11103F6657466FF8();
	while (true)
	{
		if (func_234(&uVar0, 5, 0))
		{
			func_39();
		}
		if (Global_1356070.f_1 == 0)
		{
			bVar2 = true;
		}
		func_38();
		func_37();
		func_11();
		if (bVar2)
		{
			unk_0x40C8D24AE8508DEC("timerbar_lines");
			func_1();
			unk_0xBEE2834559A8897A();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	struct<2> Var1;
	
	func_10();
	func_9();
	func_8();
	func_7();
	func_6();
	func_5();
	func_4();
	func_3();
	func_2();
	Global_1356070 = 0;
	Global_1356070.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_1356070.f_2[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_23[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_44[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_65[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_86[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_107[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_128[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_149[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_170[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_191[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_212[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_233[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_254[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_275[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_296[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_317[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_338[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_359[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_464[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_485[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_506[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_527[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_548[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_569[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_590[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_611[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_632[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_653[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_674[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_695[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_716[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_737[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_758[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_779[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_821[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_1045[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_853[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_885[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_917[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_949[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_981[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_1013[iVar0 /*2*/] = { Var1 };
		Global_1356070.f_842[iVar0] = 0;
		Global_1356070.f_874[iVar0] = 0;
		Global_1356070.f_906[iVar0] = 0;
		Global_1356070.f_938[iVar0] = 0;
		Global_1356070.f_970[iVar0] = 0;
		Global_1356070.f_1002[iVar0] = 0;
		Global_1356070.f_1034[iVar0] = 0;
		Global_1356070.f_1066[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 13)
	{
		Global_1356070.f_5941[iVar0] = 0;
		Global_1356070.f_5955[iVar0] = 0;
		Global_1356070.f_5969[iVar0] = 0;
		Global_1356070.f_5983[iVar0] = 0;
		iVar0++;
	}
	Global_1356070.f_5997 = 0;
	Global_1356070.f_5998 = 0f;
}

void func_2()
{
	struct<227> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	if (Global_2434914)
	{
		unk_0x44666CF18D6E211C(&(Global_1356070.f_4767), &Var0, 227);
	}
	else
	{
		Global_1356070.f_4767 = { Var0 };
	}
}

void func_3()
{
	struct<401> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Var0.f_336 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	if (Global_2434914)
	{
		unk_0x44666CF18D6E211C(&(Global_1356070.f_4366), &Var0, 401);
	}
	else
	{
		Global_1356070.f_4366 = { Var0 };
	}
}

void func_4()
{
	struct<596> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_443 = 10;
	Var0.f_454 = 10;
	Var0.f_465 = 10;
	Var0.f_486 = 10;
	Var0.f_497 = 10;
	Var0.f_508 = 10;
	Var0.f_519 = 10;
	Var0.f_530 = 10;
	Var0.f_541 = 10;
	Var0.f_552 = 10;
	Var0.f_563 = 10;
	Var0.f_574 = 10;
	Var0.f_585 = 10;
	if (Global_2434914)
	{
		unk_0x44666CF18D6E211C(&(Global_1356070.f_3770), &Var0, 596);
	}
	else
	{
		Global_1356070.f_3770 = { Var0 };
	}
}

void func_5()
{
	struct<314> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	if (Global_2434914)
	{
		unk_0x44666CF18D6E211C(&(Global_1356070.f_3456), &Var0, 314);
	}
	else
	{
		Global_1356070.f_3456 = { Var0 };
	}
}

void func_6()
{
	struct<358> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Var0.f_336 = 10;
	Var0.f_347 = 10;
	if (Global_2434914)
	{
		unk_0x44666CF18D6E211C(&(Global_1356070.f_3098), &Var0, 358);
	}
	else
	{
		Global_1356070.f_3098 = { Var0 };
	}
}

void func_7()
{
	struct<475> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_248 = 10;
	Var0.f_259 = 10;
	Var0.f_420 = 10;
	Var0.f_431 = 10;
	Var0.f_442 = 10;
	Var0.f_453 = 10;
	Var0.f_464 = 10;
	if (Global_2434914)
	{
		unk_0x44666CF18D6E211C(&(Global_1356070.f_2623), &Var0, 475);
	}
	else
	{
		Global_1356070.f_2623 = { Var0 };
	}
}

void func_8()
{
	struct<719> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_33 = 10;
	Var0.f_44 = 10;
	Var0.f_55 = 10;
	Var0.f_66 = 10;
	Var0.f_77 = 10;
	Var0.f_88 = 10;
	Var0.f_99 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_293 = 10;
	Var0.f_304 = 10;
	Var0.f_315 = 10;
	Var0.f_326 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	Var0.f_401 = 10;
	Var0.f_412 = 10;
	Var0.f_423 = 10;
	Var0.f_434 = 10;
	Var0.f_445 = 10;
	Var0.f_456 = 10;
	Var0.f_467 = 10;
	Var0.f_478 = 10;
	Var0.f_489 = 10;
	Var0.f_500 = 10;
	Var0.f_511 = 10;
	Var0.f_522 = 10;
	Var0.f_533 = 10;
	Var0.f_544 = 10;
	Var0.f_555 = 10;
	Var0.f_576 = 10;
	Var0.f_587 = 10;
	Var0.f_598 = 10;
	Var0.f_609 = 10;
	Var0.f_620 = 10;
	Var0.f_631 = 10;
	Var0.f_642 = 10;
	Var0.f_653 = 10;
	Var0.f_664 = 10;
	Var0.f_675 = 10;
	Var0.f_686 = 10;
	Var0.f_697 = 10;
	Var0.f_708 = 10;
	if (Global_2434914)
	{
		unk_0x44666CF18D6E211C(&(Global_1356070.f_1904), &Var0, 719);
	}
	else
	{
		Global_1356070.f_1904 = { Var0 };
	}
}

void func_9()
{
	struct<345> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_258 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_301 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	if (Global_2434914)
	{
		unk_0x44666CF18D6E211C(&(Global_1356070.f_1559), &Var0, 345);
	}
	else
	{
		Global_1356070.f_1559 = { Var0 };
	}
}

void func_10()
{
	struct<466> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_258 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_301 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	Var0.f_345 = 10;
	Var0.f_356 = 10;
	Var0.f_367 = 10;
	Var0.f_378 = 10;
	Var0.f_389 = 10;
	Var0.f_400 = 10;
	Var0.f_411 = 10;
	Var0.f_422 = 10;
	Var0.f_433 = 10;
	Var0.f_444 = 10;
	Var0.f_455 = 10;
	if (Global_2434914)
	{
		unk_0x44666CF18D6E211C(&(Global_1356070.f_1093), &Var0, 466);
	}
	else
	{
		Global_1356070.f_1093 = { Var0 };
	}
}

void func_11()
{
	int iVar0;
	
	Global_1356070 = 0;
	Global_1356070.f_1078 = 0.725f;
	Global_1356070.f_1077 = func_30();
	Global_1356070.f_1 = 0;
	Global_1356070.f_1079 = 0;
	Global_1356070.f_1080 = 0;
	Global_1356070.f_1081 = 0;
	Global_1356070.f_1082 = 0;
	Global_1356070.f_1083 = 0;
	Global_1356070.f_1084 = 0;
	Global_1356070.f_1085 = 0;
	Global_1356070.f_1086 = 0;
	Global_1356070.f_1087 = 0;
	Global_1356070.f_1088 = 0;
	Global_1356070.f_1089 = 0;
	Global_1356070.f_1090 = 0;
	Global_1356070.f_1091 = 0;
	Global_1356070.f_1092 = 0;
	Global_2456642 = 0;
	Global_2455128 = 0;
	Global_2455129 = 0;
	Global_2456617 = 1;
	Global_2457336 = 0;
	if (func_29(3))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(3, iVar0) && func_27(3, iVar0))
			{
				func_26(iVar0);
				func_25(3, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(6))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(6, iVar0) && func_27(6, iVar0))
			{
				func_24(iVar0);
				func_25(6, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(7))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(7, iVar0) && func_27(7, iVar0))
			{
				func_23(iVar0);
				func_25(7, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(4))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(4, iVar0) && func_27(4, iVar0))
			{
				func_22(iVar0);
				func_25(4, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(5))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(5, iVar0) && func_27(5, iVar0))
			{
				func_21(iVar0);
				func_25(5, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(1))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(1, iVar0) && func_27(1, iVar0))
			{
				func_20(iVar0);
				func_25(1, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(0))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(0, iVar0) && func_27(0, iVar0))
			{
				func_19(iVar0);
				func_25(0, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(2))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(2, iVar0) && func_27(2, iVar0) == 0)
			{
				func_18(iVar0);
				func_25(2, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(8))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(8, iVar0) && func_27(8, iVar0) == 0)
			{
				func_17(iVar0);
				func_25(8, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(9))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(9, iVar0) && func_27(9, iVar0) == 0)
			{
				func_16(iVar0);
				func_25(9, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(10))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(10, iVar0) && func_27(10, iVar0) == 0)
			{
				func_14(iVar0);
				func_25(10, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(11))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(11, iVar0) && func_27(11, iVar0) == 0)
			{
				func_13(iVar0);
				func_25(11, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(12))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(12, iVar0) && func_27(12, iVar0) == 0)
			{
				func_12(iVar0);
				func_25(12, iVar0);
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0)
{
	Global_1356070.f_5539[iParam0] = 0;
	Global_1356070.f_5539.f_11[iParam0] = 0;
	Global_1356070.f_5539.f_22[iParam0] = 0f;
	StringCopy(&(Global_1356070.f_5539.f_33[iParam0 /*6*/]), "", 24);
	Global_1356070.f_5539.f_94[iParam0] = 0;
	Global_1356070.f_5539.f_105[iParam0] = 0;
	Global_1356070.f_5539.f_116[iParam0] = 0;
	Global_1356070.f_5539.f_127[iParam0] = 0;
	Global_1356070.f_5539.f_138[iParam0] = 0;
	Global_1356070.f_5539.f_149[iParam0] = 0;
	Global_1356070.f_5539.f_160[iParam0] = 0;
	Global_1356070.f_5539.f_171[iParam0] = 0;
	Global_1356070.f_5539.f_182[iParam0] = 0;
	Global_1356070.f_5539.f_193[iParam0] = 0;
	Global_1356070.f_5539.f_204[iParam0] = 0;
	Global_1356070.f_5539.f_215[iParam0] = 0;
	Global_1356070.f_5539.f_226[iParam0] = 0;
	Global_1356070.f_5539.f_237[iParam0] = 2;
	Global_1356070.f_5539.f_248[iParam0] = 0;
	Global_1356070.f_5539.f_259[iParam0] = 0;
	Global_1356070.f_5539.f_270[iParam0] = 0;
	Global_1356070.f_5539.f_281[iParam0] = 0;
	Global_1356070.f_5539.f_292[iParam0] = 0;
	Global_1356070.f_5539.f_303[iParam0] = 0;
	Global_1356070.f_5539.f_314[iParam0] = 0;
	Global_1356070.f_5539.f_325[iParam0] = 0;
	Global_1356070.f_5539.f_336[iParam0] = 0;
	Global_1356070.f_5539.f_347[iParam0] = 0;
	Global_1356070.f_5539.f_358[iParam0] = 0;
	Global_1356070.f_5539.f_369[iParam0] = 0;
	Global_1356070.f_5539.f_380[iParam0] = 0;
	Global_1356070.f_5539.f_391[iParam0] = 0;
}

void func_13(int iParam0)
{
	Global_1356070.f_5374[iParam0] = 0;
	Global_1356070.f_5374.f_11[iParam0] = 0;
	Global_1356070.f_5374.f_22[iParam0] = 0;
	Global_1356070.f_5374.f_33[iParam0] = 0;
	Global_1356070.f_5374.f_44[iParam0] = 0;
	Global_1356070.f_5374.f_55[iParam0] = 0;
	Global_1356070.f_5374.f_66[iParam0] = 0;
	Global_1356070.f_5374.f_77[iParam0] = 0;
	Global_1356070.f_5374.f_88[iParam0] = 0;
	Global_1356070.f_5374.f_99[iParam0] = 2;
	Global_1356070.f_5374.f_110[iParam0] = 0;
	Global_1356070.f_5374.f_121[iParam0] = 0;
	Global_1356070.f_5374.f_132[iParam0] = 0;
	Global_1356070.f_5374.f_143[iParam0] = 0;
	Global_1356070.f_5374.f_154[iParam0] = -1;
}

void func_14(int iParam0)
{
	Global_1356070.f_5027[iParam0] = 0;
	Global_1356070.f_5027.f_11[iParam0] = 0;
	StringCopy(&(Global_1356070.f_5027.f_22[iParam0 /*16*/]), "", 64);
	Global_1356070.f_5027.f_183[iParam0] = -1;
	Global_1356070.f_5027.f_194[iParam0] = 1;
	Global_1356070.f_5027.f_205[iParam0] = -1;
	Global_1356070.f_5027.f_216[iParam0] = 2;
	Global_1356070.f_5027.f_227[iParam0] = 0;
	Global_1356070.f_5027.f_238[iParam0] = 0;
	func_15(&(Global_1356070.f_5027.f_249[iParam0 /*2*/]));
	Global_1356070.f_5027.f_270[iParam0] = -1;
	Global_1356070.f_5027.f_314[iParam0] = 0;
}

void func_15(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_16(int iParam0)
{
	Global_1356070.f_4994[iParam0] = 0;
	Global_1356070.f_4994.f_11[iParam0] = 1;
	Global_1356070.f_4994.f_22[iParam0] = 2;
}

void func_17(int iParam0)
{
	Global_1356070.f_4767[iParam0] = 0f;
	StringCopy(&(Global_1356070.f_4767.f_11[iParam0 /*16*/]), "", 64);
	Global_1356070.f_4767.f_172[iParam0] = 0;
	Global_1356070.f_4767[iParam0] = 0f;
	Global_1356070.f_4767.f_183[iParam0] = 0;
	Global_1356070.f_4767.f_194[iParam0] = 0;
	Global_1356070.f_4767.f_205[iParam0] = 0;
	Global_1356070.f_4767.f_216[iParam0] = 2;
}

void func_18(int iParam0)
{
	Global_1356070.f_1904[iParam0] = 0;
	Global_1356070.f_1904.f_11[iParam0] = 0;
	Global_1356070.f_1904.f_22[iParam0] = 0;
	Global_1356070.f_1904.f_33[iParam0] = 0;
	Global_1356070.f_1904.f_44[iParam0] = 0;
	Global_1356070.f_1904.f_55[iParam0] = 0;
	Global_1356070.f_1904.f_66[iParam0] = 0;
	Global_1356070.f_1904.f_77[iParam0] = 0;
	Global_1356070.f_1904.f_88[iParam0] = 0;
	StringCopy(&(Global_1356070.f_1904.f_99[iParam0 /*16*/]), "", 64);
	Global_1356070.f_1904.f_260[iParam0] = -1;
	Global_1356070.f_1904.f_271[iParam0] = -1;
	Global_1356070.f_1904.f_282[iParam0] = 18;
	Global_1356070.f_1904.f_293[iParam0] = 6;
	Global_1356070.f_1904.f_304[iParam0] = -1;
	Global_1356070.f_1904.f_315[iParam0] = 2;
	Global_1356070.f_1904.f_326[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1356070.f_1904.f_357[iParam0] = 0;
	Global_1356070.f_1904.f_368[iParam0] = 1;
	Global_1356070.f_1904.f_379[iParam0] = 1;
	Global_1356070.f_1904.f_390[iParam0] = 1;
	Global_1356070.f_1904.f_401[iParam0] = 1;
	Global_1356070.f_1904.f_412[iParam0] = 1;
	Global_1356070.f_1904.f_423[iParam0] = 1;
	Global_1356070.f_1904.f_434[iParam0] = 1;
	Global_1356070.f_1904.f_445[iParam0] = 1;
	Global_1356070.f_1904.f_456[iParam0] = 1;
	Global_1356070.f_1904.f_467[iParam0] = 1;
	Global_1356070.f_1904.f_478[iParam0] = 1;
	Global_1356070.f_1904.f_489[iParam0] = 1;
	Global_1356070.f_1904.f_500[iParam0] = 1;
	Global_1356070.f_1904.f_511[iParam0] = 1;
	Global_1356070.f_1904.f_522[iParam0] = 1;
	Global_1356070.f_1904.f_533[iParam0] = 1;
	func_15(&(Global_1356070.f_1904.f_555[iParam0 /*2*/]));
	Global_1356070.f_1904.f_576[iParam0] = -1;
	Global_1356070.f_1904.f_609[iParam0] = 0;
}

void func_19(int iParam0)
{
	Global_1356070.f_1093[iParam0] = 0;
	Global_1356070.f_1093.f_11[iParam0] = 0;
	StringCopy(&(Global_1356070.f_1093.f_22[iParam0 /*16*/]), "", 64);
	Global_1356070.f_1093.f_183[iParam0] = -1;
	Global_1356070.f_1093.f_194[iParam0] = 1;
	Global_1356070.f_1093.f_205[iParam0] = -1;
	Global_1356070.f_1093.f_216[iParam0] = 2;
	Global_1356070.f_1093.f_227[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1356070.f_1093.f_258[iParam0] = 0;
	Global_1356070.f_1093.f_269[iParam0] = 0;
	func_15(&(Global_1356070.f_1093.f_280[iParam0 /*2*/]));
	Global_1356070.f_1093.f_301[iParam0] = -1;
	Global_1356070.f_1093.f_334[iParam0] = 0;
	Global_1356070.f_1093.f_345[iParam0] = 0;
	Global_1356070.f_1093.f_356[iParam0] = 0;
	Global_1356070.f_1093.f_444[iParam0] = 1;
	Global_1356070.f_1093.f_455[iParam0] = -1;
}

void func_20(int iParam0)
{
	Global_1356070.f_1559[iParam0] = 0;
	Global_1356070.f_1559.f_11[iParam0] = 0;
	StringCopy(&(Global_1356070.f_1559.f_22[iParam0 /*16*/]), "", 64);
	Global_1356070.f_1559.f_183[iParam0] = -1;
	Global_1356070.f_1559.f_194[iParam0] = 1;
	Global_1356070.f_1559.f_205[iParam0] = -1;
	Global_1356070.f_1559.f_216[iParam0] = 2;
	Global_1356070.f_1559.f_227[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1356070.f_1559.f_258[iParam0] = 0;
	Global_2510109[iParam0] = 0;
	Global_2510120[iParam0] = 0;
	Global_2510131[iParam0] = 0;
	Global_2510142[iParam0] = 0;
	Global_2510153[iParam0] = 0;
	Global_2510164[iParam0] = 0;
	Global_2510175[iParam0] = 0;
	Global_2510186[iParam0] = 0;
	Global_2510197[iParam0] = 0;
	Global_2510208[iParam0] = 0;
	Global_2510219[iParam0] = 0;
	Global_2510230[iParam0] = 0;
	Global_2510241[iParam0] = 0;
	Global_2510252[iParam0] = 0;
	Global_2510263[iParam0] = 0;
	Global_2510274[iParam0] = 0;
	func_15(&(Global_1356070.f_1559.f_280[iParam0 /*2*/]));
	Global_1356070.f_1559.f_301[iParam0] = -1;
}

void func_21(int iParam0)
{
	Global_1356070.f_3456[iParam0] = 0;
	StringCopy(&(Global_1356070.f_3456.f_11[iParam0 /*16*/]), "", 64);
	Global_1356070.f_3456.f_172[iParam0] = -1;
	Global_1356070.f_3456.f_183[iParam0] = -1;
	Global_1356070.f_3456.f_194[iParam0] = 1;
	Global_1356070.f_3456.f_205[iParam0] = -1;
	Global_1356070.f_3456.f_216[iParam0] = 2;
	Global_1356070.f_3456.f_227[iParam0] = 0;
	func_15(&(Global_1356070.f_3456.f_238[iParam0 /*2*/]));
	Global_1356070.f_3456.f_259[iParam0] = -1;
}

void func_22(int iParam0)
{
	Global_1356070.f_3098[iParam0] = -1;
	StringCopy(&(Global_1356070.f_3098.f_11[iParam0 /*16*/]), "", 64);
	Global_1356070.f_3098.f_172[iParam0] = -1;
	Global_1356070.f_3098.f_183[iParam0] = -1;
	Global_1356070.f_3098.f_194[iParam0] = 1;
	Global_1356070.f_3098.f_205[iParam0] = -1;
	Global_1356070.f_3098.f_216[iParam0] = 2;
	Global_1356070.f_3098.f_227[iParam0] = 0;
	func_15(&(Global_1356070.f_3098.f_238[iParam0 /*2*/]));
	Global_1356070.f_3098.f_259[iParam0] = -1;
}

void func_23(int iParam0)
{
	Global_1356070.f_4366[iParam0] = 0;
	StringCopy(&(Global_1356070.f_4366.f_11[iParam0 /*16*/]), "", 64);
	Global_1356070.f_4366.f_172[iParam0] = -1;
	Global_1356070.f_4366.f_183[iParam0] = -1;
	Global_1356070.f_4366.f_194[iParam0] = 0;
	Global_1356070.f_4366.f_205[iParam0] = 1;
	Global_1356070.f_4366.f_216[iParam0] = 0;
	Global_1356070.f_4366.f_227[iParam0] = -1;
	Global_1356070.f_4366.f_249[iParam0] = 2;
	Global_1356070.f_4366.f_260[iParam0] = 0;
	func_15(&(Global_1356070.f_4366.f_282[iParam0 /*2*/]));
	Global_1356070.f_4366.f_303[iParam0] = -1;
}

void func_24(int iParam0)
{
	Global_1356070.f_3770[iParam0] = 0;
	StringCopy(&(Global_1356070.f_3770.f_11[iParam0 /*16*/]), "", 64);
	Global_1356070.f_3770.f_172[iParam0] = -1;
	Global_1356070.f_3770.f_183[iParam0] = 1;
	Global_1356070.f_3770.f_194[iParam0] = -1;
	Global_1356070.f_3770.f_260[iParam0] = 2;
	Global_1356070.f_3770.f_271[iParam0] = 0;
	StringCopy(&(Global_1356070.f_3770.f_282[iParam0 /*16*/]), "", 64);
	Global_1356070.f_3770.f_443[iParam0] = 0;
	Global_1356070.f_3770.f_454[iParam0] = -1f;
	func_15(&(Global_1356070.f_3770.f_465[iParam0 /*2*/]));
	Global_1356070.f_3770.f_486[iParam0] = -1;
	Global_1356070.f_3770.f_519[iParam0] = 0;
}

void func_25(int iParam0, int iParam1)
{
	unk_0xD804ACF2A7171150(&(Global_1356070.f_5969[iParam0]), iParam1);
}

void func_26(int iParam0)
{
	Global_1356070.f_2623[iParam0] = 0;
	StringCopy(&(Global_1356070.f_2623.f_11[iParam0 /*16*/]), "", 64);
	Global_1356070.f_2623.f_172[iParam0] = -1;
	Global_1356070.f_2623.f_183[iParam0] = 1;
	Global_1356070.f_2623.f_194[iParam0] = -1;
	Global_1356070.f_2623.f_205[iParam0] = 2;
	Global_1356070.f_2623.f_216[iParam0] = 0;
	func_15(&(Global_1356070.f_2623.f_227[iParam0 /*2*/]));
	Global_1356070.f_2623.f_248[iParam0] = -1;
}

bool func_27(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1356070.f_5941[iParam0], iParam1);
}

bool func_28(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1356070.f_5969[iParam0], iParam1);
}

int func_29(int iParam0)
{
	if (Global_1356070.f_5941[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

float func_30()
{
	float fVar0;
	
	fVar0 = (0.925f - 0.002f);
	fVar0 = (fVar0 + (-0.036f * IntToFloat(Global_1356070.f_1079)));
	if (Global_1356070.f_1080 == 1)
	{
		fVar0 = (fVar0 + -0.15f);
	}
	else if (Global_1356070.f_1081 == 1)
	{
		fVar0 = (fVar0 + (-0.048f - 0.753f));
	}
	if (Global_1356070.f_1084 == 1)
	{
		fVar0 = (fVar0 + -0.919f);
	}
	if (Global_1356070.f_1085 == 1)
	{
		fVar0 = (fVar0 + -0.184f);
	}
	if (Global_1356070.f_1086 == 1)
	{
		fVar0 = (fVar0 + -0.522f);
	}
	if (Global_1356070.f_1082 == 1 && Global_1356070.f_1083 == 0)
	{
		switch (func_31())
		{
			case 0:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 2:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 1:
				fVar0 = (fVar0 + -0.414f);
				break;
			
			default:
				fVar0 = (fVar0 + -0.405f);
				break;
			}
	}
	return fVar0;
}

int func_31()
{
	func_32();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_32()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_36(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_35(unk_0x0031992CA618A445());
			if (func_34(iVar0) && (!func_33(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_34(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_33(int iParam0)
{
	return Global_35813 == iParam0;
}

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_1356070.f_5941[iVar0] = 0;
		iVar0++;
	}
}

void func_38()
{
	Global_2456529 = 0;
}

void func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[12];
	int iVar16;
	int iVar17;
	
	if (unk_0xA57912B867B7EED3())
	{
		if (Global_1356070.f_1079 == 0)
		{
			func_233(1);
		}
	}
	func_229();
	if (func_224())
	{
		if ((unk_0xA83FFA3FA7711E6D() % 100) == 0)
		{
			if (func_219(unk_0x3D35F9864E4640B1()))
			{
				func_218();
			}
		}
		if (func_217())
		{
			Global_1354565.f_1179 = 1;
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			iVar16 = 0;
			if (func_27(7, iVar0))
			{
				Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_3770.f_260[iVar0];
			}
			iVar16 = 1;
			if (func_27(3, iVar0))
			{
				Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_2623.f_205[iVar0];
			}
			iVar16 = 2;
			if (func_27(4, iVar0))
			{
				Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_3098.f_216[iVar0];
			}
			iVar16 = 3;
			if (func_27(5, iVar0))
			{
				Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_3456.f_216[iVar0];
			}
			iVar16 = 4;
			if (func_27(1, iVar0))
			{
				Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_1559.f_216[iVar0];
			}
			iVar16 = 5;
			if (func_27(0, iVar0))
			{
				Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_1093.f_216[iVar0];
			}
			iVar16 = 6;
			if (func_27(6, iVar0))
			{
				Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_3770.f_260[iVar0];
			}
			iVar16 = 7;
			if (func_27(2, iVar0))
			{
				Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_1904.f_315[iVar0];
			}
			iVar16 = 8;
			if (func_27(8, iVar0))
			{
				Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_4767.f_216[iVar0];
			}
			iVar16 = 9;
			if (func_27(9, iVar0))
			{
				Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_4994.f_22[iVar0];
			}
			iVar16 = 10;
			if (func_27(10, iVar0))
			{
				Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_5027.f_216[iVar0];
			}
			iVar16 = 11;
			if (func_27(11, iVar0))
			{
				Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_5374.f_99[iVar0];
			}
			iVar16 = 12;
			if (func_27(12, iVar0))
			{
				Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_5539.f_237[iVar0];
			}
			iVar0++;
		}
		iVar16 = 0;
		if (Global_1354565.f_1179 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar16 = 0;
				if (func_27(7, iVar0))
				{
					Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_4366.f_249[iVar0];
					if (Global_1354565.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] != Global_1356070.f_4366.f_249[iVar0] && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_4366.f_249[iVar0] == 2) || Global_1356070.f_4366.f_249[iVar0] != 2)) && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_4366.f_249[iVar0] == 13) || Global_1356070.f_4366.f_249[iVar0] != 13))
						{
							Global_1354565.f_1324[iVar16 /*11*/][iVar0] = Global_1356070.f_4366.f_249[iVar0];
						}
					}
				}
				iVar16 = 1;
				if (func_27(3, iVar0))
				{
					Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_2623.f_205[iVar0];
					if (Global_1354565.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] != Global_1356070.f_2623.f_205[iVar0] && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_2623.f_205[iVar0] == 2) || Global_1356070.f_2623.f_205[iVar0] != 2)) && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_2623.f_205[iVar0] == 13) || Global_1356070.f_2623.f_205[iVar0] != 13))
						{
							Global_1354565.f_1324[iVar16 /*11*/][iVar0] = Global_1356070.f_2623.f_205[iVar0];
						}
					}
				}
				iVar16 = 2;
				if (func_27(4, iVar0))
				{
					Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_3098.f_216[iVar0];
					if (Global_1354565.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] != Global_1356070.f_3098.f_216[iVar0] && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_3098.f_216[iVar0] == 2) || Global_1356070.f_3098.f_216[iVar0] != 2)) && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_3098.f_216[iVar0] == 13) || Global_1356070.f_3098.f_216[iVar0] != 13))
						{
							Global_1354565.f_1324[iVar16 /*11*/][iVar0] = Global_1356070.f_3098.f_216[iVar0];
						}
					}
				}
				iVar16 = 3;
				if (func_27(5, iVar0))
				{
					Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_3456.f_216[iVar0];
					if (Global_1354565.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] != Global_1356070.f_3456.f_216[iVar0] && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_3456.f_216[iVar0] == 2) || Global_1356070.f_3456.f_216[iVar0] != 2)) && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_3456.f_216[iVar0] == 13) || Global_1356070.f_3456.f_216[iVar0] != 13))
						{
							Global_1354565.f_1324[iVar16 /*11*/][iVar0] = Global_1356070.f_3456.f_216[iVar0];
						}
					}
				}
				iVar16 = 4;
				if (func_27(1, iVar0))
				{
					Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_1559.f_216[iVar0];
					if (Global_1354565.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] != Global_1356070.f_1559.f_216[iVar0] && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_1559.f_216[iVar0] == 2) || Global_1356070.f_1559.f_216[iVar0] != 2)) && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_1559.f_216[iVar0] == 13) || Global_1356070.f_1559.f_216[iVar0] != 13))
						{
							Global_1354565.f_1324[iVar16 /*11*/][iVar0] = Global_1356070.f_1559.f_216[iVar0];
						}
					}
				}
				iVar16 = 5;
				if (func_27(0, iVar0))
				{
					Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_1093.f_216[iVar0];
					if (Global_1354565.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] != Global_1356070.f_1093.f_216[iVar0] && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_1093.f_216[iVar0] == 2) || Global_1356070.f_1093.f_216[iVar0] != 2)) && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_1093.f_216[iVar0] == 13) || Global_1356070.f_1093.f_216[iVar0] != 13))
						{
							Global_1354565.f_1324[iVar16 /*11*/][iVar0] = Global_1356070.f_1093.f_216[iVar0];
						}
					}
				}
				iVar16 = 6;
				if (func_27(6, iVar0))
				{
					Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_3770.f_260[iVar0];
					if (Global_1354565.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] != Global_1356070.f_3770.f_260[iVar0] && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_3770.f_260[iVar0] == 2) || Global_1356070.f_3770.f_260[iVar0] != 2)) && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_3770.f_260[iVar0] == 13) || Global_1356070.f_3770.f_260[iVar0] != 13))
						{
							Global_1354565.f_1324[iVar16 /*11*/][iVar0] = Global_1356070.f_3770.f_260[iVar0];
						}
					}
				}
				iVar16 = 7;
				if (func_27(2, iVar0))
				{
					Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_1904.f_315[iVar0];
					if (Global_1354565.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] != Global_1356070.f_1904.f_315[iVar0] && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_1904.f_315[iVar0] == 2) || Global_1356070.f_1904.f_315[iVar0] != 2)) && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_1904.f_315[iVar0] == 13) || Global_1356070.f_1904.f_315[iVar0] != 13))
						{
							Global_1354565.f_1324[iVar16 /*11*/][iVar0] = Global_1356070.f_1904.f_315[iVar0];
						}
					}
				}
				iVar16 = 8;
				if (func_27(8, iVar0))
				{
					Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_4767.f_216[iVar0];
					if (Global_1354565.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] != Global_1356070.f_4767.f_216[iVar0] && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_4767.f_216[iVar0] == 2) || Global_1356070.f_4767.f_216[iVar0] != 2)) && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_4767.f_216[iVar0] == 13) || Global_1356070.f_4767.f_216[iVar0] != 13))
						{
							Global_1354565.f_1324[iVar16 /*11*/][iVar0] = Global_1356070.f_4767.f_216[iVar0];
						}
					}
				}
				iVar16 = 9;
				if (func_27(9, iVar0))
				{
					Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_4994.f_22[iVar0];
					if (Global_1354565.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] != Global_1356070.f_4994.f_22[iVar0] && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_4994.f_22[iVar0] == 2) || Global_1356070.f_4994.f_22[iVar0] != 2)) && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_4994.f_22[iVar0] == 13) || Global_1356070.f_4994.f_22[iVar0] != 13))
						{
							Global_1354565.f_1324[iVar16 /*11*/][iVar0] = Global_1356070.f_4994.f_22[iVar0];
						}
					}
				}
				iVar16 = 10;
				if (func_27(10, iVar0))
				{
					Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_5027.f_216[iVar0];
					if (Global_1354565.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] != Global_1356070.f_5027.f_216[iVar0] && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_5027.f_216[iVar0] == 2) || Global_1356070.f_5027.f_216[iVar0] != 2)) && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_5027.f_216[iVar0] == 13) || Global_1356070.f_5027.f_216[iVar0] != 13))
						{
							Global_1354565.f_1324[iVar16 /*11*/][iVar0] = Global_1356070.f_5027.f_216[iVar0];
						}
					}
				}
				iVar16 = 11;
				if (func_27(11, iVar0))
				{
					Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_5374.f_99[iVar0];
					if (Global_1354565.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] != Global_1356070.f_5374.f_99[iVar0] && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_5374.f_99[iVar0] == 2) || Global_1356070.f_5374.f_99[iVar0] != 2)) && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_5374.f_99[iVar0] == 13) || Global_1356070.f_5374.f_99[iVar0] != 13))
						{
							Global_1354565.f_1324[iVar16 /*11*/][iVar0] = Global_1356070.f_5374.f_99[iVar0];
						}
					}
				}
				iVar16 = 12;
				if (func_27(12, iVar0))
				{
					Global_1354565.f_1180[iVar16 /*11*/][iVar0] = Global_1356070.f_5539.f_237[iVar0];
					if (Global_1354565.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] != Global_1356070.f_5539.f_237[iVar0] && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_5539.f_237[iVar0] == 2) || Global_1356070.f_5539.f_237[iVar0] != 2)) && ((Global_1354565.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1356070.f_5539.f_237[iVar0] == 13) || Global_1356070.f_5539.f_237[iVar0] != 13))
						{
							Global_1354565.f_1324[iVar16 /*11*/][iVar0] = Global_1356070.f_5539.f_237[iVar0];
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_1354565.f_1180[iVar1 /*11*/][iVar0] != Global_1354565.f_1324[iVar1 /*11*/][iVar0])
					{
						Global_1354565.f_1324[iVar1 /*11*/][iVar0] = 0;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				iVar3[iVar2] = 0;
				iVar2++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_1354565.f_1180[iVar1 /*11*/][iVar0] == 3)
					{
						iVar3[0] = 1;
					}
					if (Global_1354565.f_1180[iVar1 /*11*/][iVar0] == 4)
					{
						iVar3[1] = 1;
					}
					if (Global_1354565.f_1180[iVar1 /*11*/][iVar0] == 5)
					{
						iVar3[2] = 1;
					}
					if (Global_1354565.f_1180[iVar1 /*11*/][iVar0] == 6)
					{
						iVar3[3] = 1;
					}
					if (Global_1354565.f_1180[iVar1 /*11*/][iVar0] == 7)
					{
						iVar3[4] = 1;
					}
					if (Global_1354565.f_1180[iVar1 /*11*/][iVar0] == 8)
					{
						iVar3[5] = 1;
					}
					if (Global_1354565.f_1180[iVar1 /*11*/][iVar0] == 9)
					{
						iVar3[6] = 1;
					}
					if (Global_1354565.f_1180[iVar1 /*11*/][iVar0] == 10)
					{
						iVar3[7] = 1;
					}
					if (Global_1354565.f_1180[iVar1 /*11*/][iVar0] == 11)
					{
						iVar3[8] = 1;
					}
					if (Global_1354565.f_1180[iVar1 /*11*/][iVar0] == 12)
					{
						iVar3[9] = 1;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_1354565.f_1180[iVar1 /*11*/][iVar0] == 2)
					{
						iVar2 = 0;
						while (iVar2 <= 11)
						{
							if (iVar3[iVar2] == 0)
							{
								Global_1354565.f_1180[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1354565.f_1324[iVar1 /*11*/][iVar0] = Global_1354565.f_1180[iVar1 /*11*/][iVar0];
								iVar2 = 12;
							}
							iVar2++;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_1354565.f_1180[iVar1 /*11*/][iVar0] == 13)
					{
						iVar2 = 11;
						while (iVar2 >= 1)
						{
							if (iVar3[iVar2] == 0 && iVar3[(iVar2 - 1)] == 1)
							{
								Global_1354565.f_1180[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1354565.f_1324[iVar1 /*11*/][iVar0] = Global_1354565.f_1180[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							else if (iVar2 == 1 && iVar3[0] == 0)
							{
								Global_1354565.f_1180[iVar1 /*11*/][iVar0] = 3;
								iVar3[0] = 1;
								Global_1354565.f_1324[iVar1 /*11*/][iVar0] = Global_1354565.f_1180[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							iVar2 = (iVar2 + -1);
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			Global_1354565.f_1179 = 0;
		}
		if (Global_1356070.f_1084)
		{
			iVar17 = 84;
		}
		else
		{
			iVar17 = 66;
		}
		if (func_224())
		{
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				if (func_29(7))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1354565.f_1324[0 /*11*/][iVar0] == iVar1 + 3 || Global_1354565.f_1180[0 /*11*/][iVar0] == 1)
						{
							if (func_213(Global_1354565.f_1180[0 /*11*/][iVar0]))
							{
								func_209(1);
								if (Global_1356070.f_1081 == 0)
								{
									unk_0x661705F074A804D1(82, iVar17);
									unk_0x399D1A0AE11E61E3(uLocal_96, uLocal_97, fLocal_98, fLocal_99);
								}
								func_193(iVar0, Global_1356070.f_4366[iVar0], &(Global_1356070.f_4366.f_11[iVar0 /*16*/]), Global_1356070.f_4366.f_172[iVar0], Global_1356070.f_4366.f_194[iVar0], Global_1356070.f_4366.f_216[iVar0], Global_1356070.f_4366.f_205[iVar0], Global_1356070.f_4366.f_183[iVar0], Global_1356070.f_4366.f_227[iVar0], Global_1356070.f_4366.f_260[iVar0], Global_1356070.f_4366.f_314[iVar0], Global_1356070.f_4366.f_325[iVar0], Global_1356070.f_4366.f_357[iVar0], Global_1356070.f_4366.f_238[iVar0], Global_1356070.f_4366.f_271[iVar0], Global_1356070.f_4366.f_368[iVar0], Global_1356070.f_4366.f_379[iVar0], Global_1356070.f_4366.f_390[iVar0]);
								if (Global_1356070.f_1081 == 0)
								{
									unk_0x26742F01C78031C2();
								}
								func_209(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(3))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1354565.f_1324[1 /*11*/][iVar0] == iVar1 + 3 || Global_1354565.f_1180[1 /*11*/][iVar0] == 1)
						{
							if (func_213(Global_1354565.f_1180[1 /*11*/][iVar0]))
							{
								func_209(1);
								unk_0x661705F074A804D1(82, iVar17);
								unk_0x399D1A0AE11E61E3(uLocal_96, uLocal_97, fLocal_98, fLocal_99);
								func_192(iVar0, Global_1356070.f_2623[iVar0], &(Global_1356070.f_2623.f_11[iVar0 /*16*/]), Global_1356070.f_2623.f_183[iVar0], Global_1356070.f_2623.f_172[iVar0], Global_1356070.f_2623.f_194[iVar0], Global_1356070.f_2623.f_216[iVar0], &(Global_1356070.f_2623.f_259[iVar0 /*16*/]), Global_1356070.f_2623.f_420[iVar0], Global_1356070.f_2623.f_453[iVar0], Global_1356070.f_2623.f_431[iVar0], Global_1356070.f_2623.f_442[iVar0], Global_1356070.f_2623.f_464[iVar0]);
								unk_0x26742F01C78031C2();
								func_209(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(4))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1354565.f_1324[2 /*11*/][iVar0] == iVar1 + 3 || Global_1354565.f_1180[2 /*11*/][iVar0] == 1)
						{
							if (func_213(Global_1354565.f_1180[2 /*11*/][iVar0]))
							{
								func_209(1);
								unk_0x661705F074A804D1(82, iVar17);
								unk_0x399D1A0AE11E61E3(uLocal_96, uLocal_97, fLocal_98, fLocal_99);
								func_191(iVar0, Global_1356070.f_3098[iVar0], Global_1356070.f_3098.f_172[iVar0], &(Global_1356070.f_3098.f_11[iVar0 /*16*/]), Global_1356070.f_3098.f_194[iVar0], Global_1356070.f_3098.f_183[iVar0], Global_1356070.f_3098.f_205[iVar0], Global_1356070.f_3098.f_227[iVar0], Global_1356070.f_3098.f_270[iVar0], Global_1356070.f_3098.f_281[iVar0], Global_1356070.f_3098.f_292[iVar0], Global_1356070.f_3098.f_303[iVar0], Global_1356070.f_3098.f_314[iVar0], Global_1356070.f_3098.f_325[iVar0], Global_1356070.f_3098.f_336[iVar0], Global_1356070.f_3098.f_347[iVar0]);
								unk_0x26742F01C78031C2();
								func_209(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(5))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1354565.f_1324[3 /*11*/][iVar0] == iVar1 + 3 || Global_1354565.f_1180[3 /*11*/][iVar0] == 1)
						{
							if (func_213(Global_1354565.f_1180[3 /*11*/][iVar0]))
							{
								func_209(1);
								unk_0x661705F074A804D1(82, iVar17);
								unk_0x399D1A0AE11E61E3(uLocal_96, uLocal_97, fLocal_98, fLocal_99);
								func_190(iVar0, Global_1356070.f_3456[iVar0], Global_1356070.f_3456.f_172[iVar0], &(Global_1356070.f_3456.f_11[iVar0 /*16*/]), Global_1356070.f_3456.f_194[iVar0], Global_1356070.f_3456.f_183[iVar0], Global_1356070.f_3456.f_205[iVar0], Global_1356070.f_3456.f_227[iVar0], Global_1356070.f_3456.f_270[iVar0], Global_1356070.f_3456.f_281[iVar0], Global_1356070.f_3456.f_292[iVar0], Global_1356070.f_3456.f_303[iVar0]);
								unk_0x26742F01C78031C2();
								func_209(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(1))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1354565.f_1324[4 /*11*/][iVar0] == iVar1 + 3 || Global_1354565.f_1180[4 /*11*/][iVar0] == 1)
						{
							if (func_213(Global_1354565.f_1180[4 /*11*/][iVar0]))
							{
								func_209(1);
								unk_0x661705F074A804D1(82, iVar17);
								unk_0x399D1A0AE11E61E3(uLocal_96, uLocal_97, fLocal_98, fLocal_99);
								func_180(iVar0, Global_1356070.f_1559[iVar0], Global_1356070.f_1559.f_11[iVar0], &(Global_1356070.f_1559.f_22[iVar0 /*16*/]), Global_1356070.f_1559.f_194[iVar0], Global_1356070.f_1559.f_205[iVar0], Global_1356070.f_1559.f_258[iVar0], Global_1356070.f_1559.f_183[iVar0], Global_1356070.f_1559.f_227[iVar0 /*3*/], Global_1356070.f_1559.f_227[iVar0 /*3*/].f_1, Global_1356070.f_1559.f_312[iVar0], Global_1356070.f_1559.f_323[iVar0], Global_1356070.f_1559.f_269[iVar0], Global_2510109[iVar0], Global_2510120[iVar0], Global_2510131[iVar0], Global_2510142[iVar0], Global_2510153[iVar0], Global_2510164[iVar0], Global_2510175[iVar0], Global_2510186[iVar0], Global_1356070.f_1559.f_334[iVar0]);
								unk_0x26742F01C78031C2();
								func_209(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(0))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1354565.f_1324[5 /*11*/][iVar0] == iVar1 + 3 || Global_1354565.f_1180[5 /*11*/][iVar0] == 1)
						{
							if (func_213(Global_1354565.f_1180[5 /*11*/][iVar0]))
							{
								func_209(1);
								unk_0x661705F074A804D1(82, iVar17);
								unk_0x399D1A0AE11E61E3(uLocal_96, uLocal_97, fLocal_98, fLocal_99);
								func_168(iVar0, Global_1356070.f_1093[iVar0], Global_1356070.f_1093.f_11[iVar0], &(Global_1356070.f_1093.f_22[iVar0 /*16*/]), Global_1356070.f_1093.f_194[iVar0], Global_1356070.f_1093.f_183[iVar0], Global_1356070.f_1093.f_227[iVar0 /*3*/], Global_1356070.f_1093.f_227[iVar0 /*3*/].f_1, Global_1356070.f_1093.f_258[iVar0], Global_1356070.f_1093.f_205[iVar0], Global_1356070.f_1093.f_269[iVar0], Global_1356070.f_1093.f_312[iVar0], Global_1356070.f_1093.f_323[iVar0], Global_1356070.f_1093.f_334[iVar0], Global_1356070.f_1093.f_345[iVar0], Global_1356070.f_1093.f_356[iVar0], Global_1356070.f_1093.f_367[iVar0], Global_1356070.f_1093.f_378[iVar0], Global_1356070.f_1093.f_389[iVar0], Global_1356070.f_1093.f_400[iVar0], Global_1356070.f_1093.f_411[iVar0], Global_1356070.f_1093.f_422[iVar0], Global_1356070.f_1093.f_433[iVar0], Global_1356070.f_1093.f_444[iVar0], Global_1356070.f_1093.f_455[iVar0]);
								unk_0x26742F01C78031C2();
								func_209(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(6))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1354565.f_1324[6 /*11*/][iVar0] == iVar1 + 3 || Global_1354565.f_1180[6 /*11*/][iVar0] == 1)
						{
							if (func_213(Global_1354565.f_1180[6 /*11*/][iVar0]))
							{
								func_209(1);
								unk_0x661705F074A804D1(82, iVar17);
								unk_0x399D1A0AE11E61E3(uLocal_96, uLocal_97, fLocal_98, fLocal_99);
								func_161(iVar0, Global_1356070.f_3770[iVar0], &(Global_1356070.f_3770.f_11[iVar0 /*16*/]), Global_1356070.f_3770.f_183[iVar0], Global_1356070.f_3770.f_172[iVar0], Global_1356070.f_3770.f_194[iVar0], Global_1356070.f_3770.f_271[iVar0], &(Global_1356070.f_3770.f_282[iVar0 /*16*/]), Global_1356070.f_3770.f_443[iVar0], Global_1356070.f_3770.f_454[iVar0], Global_1356070.f_3770.f_497[iVar0], Global_1356070.f_3770.f_508[iVar0], Global_1356070.f_3770.f_205[iVar0], Global_1356070.f_3770.f_216[iVar0], Global_1356070.f_3770.f_227[iVar0], Global_1356070.f_3770.f_238[iVar0], Global_1356070.f_3770.f_249[iVar0], Global_1356070.f_3770.f_519[iVar0], Global_1356070.f_3770.f_530[iVar0], Global_1356070.f_3770.f_541[iVar0], Global_1356070.f_3770.f_552[iVar0], Global_1356070.f_3770.f_563[iVar0], Global_1356070.f_3770.f_574[iVar0], Global_1356070.f_3770.f_585[iVar0]);
								unk_0x26742F01C78031C2();
								func_209(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(2))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1354565.f_1324[7 /*11*/][iVar0] == iVar1 + 3 || Global_1354565.f_1180[7 /*11*/][iVar0] == 1)
						{
							if (func_213(Global_1354565.f_1180[7 /*11*/][iVar0]))
							{
								func_209(1);
								unk_0x661705F074A804D1(82, iVar17);
								unk_0x399D1A0AE11E61E3(uLocal_96, uLocal_97, fLocal_98, fLocal_99);
								func_149(iVar0, Global_1356070.f_1904[iVar0], &(Global_1356070.f_1904.f_99[iVar0 /*16*/]), Global_1356070.f_1904.f_282[iVar0], Global_1356070.f_1904.f_293[iVar0], Global_1356070.f_1904.f_260[iVar0], Global_1356070.f_1904.f_11[iVar0], Global_1356070.f_1904.f_22[iVar0], Global_1356070.f_1904.f_33[iVar0], Global_1356070.f_1904.f_44[iVar0], Global_1356070.f_1904.f_55[iVar0], Global_1356070.f_1904.f_66[iVar0], Global_1356070.f_1904.f_77[iVar0], Global_1356070.f_1904.f_88[iVar0], Global_1356070.f_1904.f_271[iVar0], Global_1356070.f_1904.f_304[iVar0], Global_1356070.f_1904.f_357[iVar0], Global_1356070.f_1904.f_326[iVar0 /*3*/], Global_1356070.f_1904.f_326[iVar0 /*3*/].f_1, Global_1356070.f_1904.f_368[iVar0], Global_1356070.f_1904.f_379[iVar0], Global_1356070.f_1904.f_390[iVar0], Global_1356070.f_1904.f_401[iVar0], Global_1356070.f_1904.f_412[iVar0], Global_1356070.f_1904.f_423[iVar0], Global_1356070.f_1904.f_434[iVar0], Global_1356070.f_1904.f_445[iVar0], Global_1356070.f_1904.f_456[iVar0], Global_1356070.f_1904.f_467[iVar0], Global_1356070.f_1904.f_478[iVar0], Global_1356070.f_1904.f_489[iVar0], Global_1356070.f_1904.f_500[iVar0], Global_1356070.f_1904.f_511[iVar0], Global_1356070.f_1904.f_522[iVar0], Global_1356070.f_1904.f_533[iVar0], Global_1356070.f_1904.f_587[iVar0], Global_1356070.f_1904.f_598[iVar0], Global_1356070.f_1904.f_544[iVar0], Global_2510197[iVar0], Global_2510208[iVar0], Global_2510219[iVar0], Global_2510230[iVar0], Global_2510241[iVar0], Global_2510252[iVar0], Global_2510263[iVar0], Global_2510274[iVar0], Global_1356070.f_1904.f_609[iVar0], Global_1356070.f_1904.f_620[iVar0], Global_1356070.f_1904.f_631[iVar0], Global_1356070.f_1904.f_642[iVar0], Global_1356070.f_1904.f_653[iVar0], Global_1356070.f_1904.f_664[iVar0], Global_1356070.f_1904.f_675[iVar0], Global_1356070.f_1904.f_686[iVar0], Global_1356070.f_1904.f_697[iVar0], Global_1356070.f_1904.f_708[iVar0]);
								unk_0x26742F01C78031C2();
								func_209(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(8))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1354565.f_1324[8 /*11*/][iVar0] == iVar1 + 3 || Global_1354565.f_1180[8 /*11*/][iVar0] == 1)
						{
							if (func_213(Global_1354565.f_1180[8 /*11*/][iVar0]))
							{
								func_209(1);
								unk_0x661705F074A804D1(82, iVar17);
								unk_0x399D1A0AE11E61E3(uLocal_96, uLocal_97, fLocal_98, fLocal_99);
								func_146(iVar0, &(Global_1356070.f_4767.f_11[iVar0 /*16*/]), Global_1356070.f_4767[iVar0], Global_1356070.f_4767.f_172[iVar0], Global_1356070.f_4767.f_183[iVar0], Global_1356070.f_4767.f_194[iVar0], Global_1356070.f_4767.f_205[iVar0]);
								unk_0x26742F01C78031C2();
								func_209(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(9))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1354565.f_1324[9 /*11*/][iVar0] == iVar1 + 3 || Global_1354565.f_1180[9 /*11*/][iVar0] == 1)
						{
							if (func_213(Global_1354565.f_1180[9 /*11*/][iVar0]))
							{
								func_209(1);
								unk_0x661705F074A804D1(82, iVar17);
								unk_0x399D1A0AE11E61E3(uLocal_96, uLocal_97, fLocal_98, fLocal_99);
								func_140(iVar0, Global_1356070.f_4994[iVar0], Global_1356070.f_4994.f_11[iVar0]);
								unk_0x26742F01C78031C2();
								func_209(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(10))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1354565.f_1324[10 /*11*/][iVar0] == iVar1 + 3 || Global_1354565.f_1180[10 /*11*/][iVar0] == 1)
						{
							if (func_213(Global_1354565.f_1180[10 /*11*/][iVar0]))
							{
								func_209(1);
								unk_0x661705F074A804D1(82, iVar17);
								unk_0x399D1A0AE11E61E3(uLocal_96, uLocal_97, fLocal_98, fLocal_99);
								func_108(iVar0, Global_1356070.f_5027[iVar0], Global_1356070.f_5027.f_11[iVar0], &(Global_1356070.f_5027.f_22[iVar0 /*16*/]), Global_1356070.f_5027.f_194[iVar0], Global_1356070.f_5027.f_183[iVar0], Global_1356070.f_5027.f_227[iVar0], Global_1356070.f_5027.f_205[iVar0], Global_1356070.f_5027.f_238[iVar0], Global_1356070.f_5027.f_281[iVar0], Global_1356070.f_5027.f_292[iVar0], Global_1356070.f_5027.f_303[iVar0], Global_1356070.f_5027.f_314[iVar0], Global_1356070.f_5027.f_325[iVar0], Global_1356070.f_5027.f_336[iVar0]);
								unk_0x26742F01C78031C2();
								func_209(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(11))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1354565.f_1324[11 /*11*/][iVar0] == iVar1 + 3 || Global_1354565.f_1180[11 /*11*/][iVar0] == 1)
						{
							if (func_213(Global_1354565.f_1180[11 /*11*/][iVar0]))
							{
								func_209(1);
								unk_0x661705F074A804D1(82, iVar17);
								unk_0x399D1A0AE11E61E3(uLocal_96, uLocal_97, fLocal_98, fLocal_99);
								func_104(iVar0, Global_1356070.f_5374[iVar0], Global_1356070.f_5374.f_11[iVar0], Global_1356070.f_5374.f_22[iVar0], Global_1356070.f_5374.f_33[iVar0], Global_1356070.f_5374.f_44[iVar0], Global_1356070.f_5374.f_55[iVar0], Global_1356070.f_5374.f_66[iVar0], Global_1356070.f_5374.f_77[iVar0], Global_1356070.f_5374.f_88[iVar0], Global_1356070.f_5374.f_110[iVar0], Global_1356070.f_5374.f_121[iVar0], Global_1356070.f_5374.f_132[iVar0], Global_1356070.f_5374.f_143[iVar0], Global_1356070.f_5374.f_154[iVar0]);
								unk_0x26742F01C78031C2();
								func_209(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(12))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1354565.f_1324[12 /*11*/][iVar0] == iVar1 + 3 || Global_1354565.f_1180[12 /*11*/][iVar0] == 1)
						{
							if (func_213(Global_1354565.f_1180[12 /*11*/][iVar0]))
							{
								func_209(1);
								unk_0x661705F074A804D1(82, iVar17);
								unk_0x399D1A0AE11E61E3(uLocal_96, uLocal_97, fLocal_98, fLocal_99);
								func_41(iVar0, Global_1356070.f_5539[iVar0], Global_1356070.f_5539.f_22[iVar0], &(Global_1356070.f_5539.f_33[iVar0 /*6*/]), Global_1356070.f_5539.f_94[iVar0], Global_1356070.f_5539.f_11[iVar0], Global_1356070.f_5539.f_105[iVar0], Global_1356070.f_5539.f_116[iVar0], Global_1356070.f_5539.f_127[iVar0], Global_1356070.f_5539.f_138[iVar0], Global_1356070.f_5539.f_149[iVar0], Global_1356070.f_5539.f_160[iVar0], Global_1356070.f_5539.f_171[iVar0], Global_1356070.f_5539.f_182[iVar0], Global_1356070.f_5539.f_193[iVar0], Global_1356070.f_5539.f_204[iVar0], Global_1356070.f_5539.f_215[iVar0], Global_1356070.f_5539.f_226[iVar0], Global_1356070.f_5539.f_248[iVar0], Global_1356070.f_5539.f_259[iVar0], Global_1356070.f_5539.f_270[iVar0], Global_1356070.f_5539.f_281[iVar0], Global_1356070.f_5539.f_292[iVar0], Global_1356070.f_5539.f_303[iVar0], Global_1356070.f_5539.f_314[iVar0], Global_1356070.f_5539.f_325[iVar0], Global_1356070.f_5539.f_336[iVar0], Global_1356070.f_5539.f_347[iVar0], Global_1356070.f_5539.f_358[iVar0], Global_1356070.f_5539.f_369[iVar0], Global_1356070.f_5539.f_380[iVar0], Global_1356070.f_5539.f_391[iVar0]);
								unk_0x26742F01C78031C2();
								func_209(0);
							}
						}
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		func_40();
	}
}

void func_40()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_1356070.f_5955[iVar0] = Global_1356070.f_5941[iVar0];
		iVar0++;
	}
}

void func_41(int iParam0, int iParam1, float fParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, var uParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, bool bParam26, int iParam27, int iParam28, var uParam29, int iParam30, int iParam31)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_27(12, iParam0))
	{
		func_42(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, fParam2, sParam3, iParam4, iParam5, bParam6, iParam7, 1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, uParam18, bParam19, iParam20, iParam21, iParam22, iParam23, iParam24, iParam25, bParam26, iParam27, iParam28, uParam29, iParam30, iParam31);
	}
}

void func_42(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, var uParam23, bool bParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, bool bParam31, int iParam32, int iParam33, var uParam34, int iParam35, int iParam36)
{
	struct<8> Var0;
	struct<8> Var9;
	struct<8> Var18;
	struct<8> Var27;
	struct<8> Var36;
	struct<8> Var45;
	struct<8> Var54;
	struct<8> Var63;
	struct<8> Var72;
	struct<8> Var81;
	struct<8> Var90;
	struct<8> Var99;
	struct<8> Var108;
	struct<8> Var117;
	struct<8> Var126;
	struct<8> Var135;
	var uVar144;
	var uVar145;
	var uVar146;
	var uVar147;
	var uVar148;
	char cVar149[24];
	struct<3> Var155;
	char cVar161[24];
	char cVar167[24];
	struct<3> Var173;
	char cVar179[24];
	char cVar185[24];
	struct<3> Var191;
	char cVar197[24];
	char cVar203[24];
	struct<3> Var209;
	char cVar215[24];
	char cVar221[24];
	struct<3> Var227;
	char cVar233[24];
	char cVar239[24];
	char cVar245[24];
	char cVar251[24];
	char cVar257[24];
	char cVar263[24];
	char cVar269[24];
	char cVar275[24];
	char cVar281[24];
	char cVar287[24];
	char cVar293[24];
	char cVar299[24];
	char cVar305[24];
	char cVar311[24];
	char cVar317[24];
	char cVar323[24];
	int iVar329;
	int iVar330;
	int iVar331;
	int iVar332;
	int iVar333;
	int iVar334;
	int iVar335;
	int iVar336;
	int iVar337;
	int iVar338;
	int iVar339;
	int iVar340;
	int iVar341;
	int iVar342;
	int iVar343;
	int iVar344;
	bool bVar345;
	bool bVar346;
	
	Global_1356070++;
	if (func_103())
	{
		func_102(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_101(uParam1, 3);
		if (iParam5 < 1000000)
		{
			if ((unk_0x2DA8A432EC3C3D33() == 8 && fParam6 >= 100f) && unk_0xB3404E397FF56B3B("AMCH_KMHN", sParam7))
			{
				func_100(uParam2, 0, 0);
			}
			else if ((unk_0x2DA8A432EC3C3D33() == 8 || unk_0x2DA8A432EC3C3D33() == 9) && ((iParam5 > 999 || iParam9 > 999) || fParam6 > 1000f))
			{
				func_100(uParam2, 0, 0);
			}
			else if (iParam9 > 99)
			{
				func_99(uParam2, 0, 0);
			}
			else
			{
				func_98(uParam2, 0, 0);
			}
		}
		else if (unk_0x2DA8A432EC3C3D33() == 8 && (unk_0xB3404E397FF56B3B("HUD_CASH", sParam7) || unk_0xB3404E397FF56B3B("HUD_CASH_NEG", sParam7)))
		{
			func_100(uParam2, 0, 0);
		}
		else
		{
			func_99(uParam2, 0, 0);
		}
		func_96(uParam1);
		func_95(uParam2);
		func_94(12, iParam0);
		if (Global_1356070 == 1)
		{
			func_93(iParam12);
		}
		func_87(uParam2, uParam3, uParam4, iParam12, uParam1);
		func_86(uParam2, iParam11);
		uParam2->f_6 = 255;
		Var9.f_0 = (*uParam4 + 0.095f);
		Var18.f_0 = (*uParam4 + 0.095f);
		Var27.f_0 = (*uParam4 + 0.095f);
		Var36.f_0 = (*uParam4 + 0.072f);
		Var45.f_0 = (*uParam4 + 0.072f);
		Var54.f_0 = (*uParam4 + 0.072f);
		Var63.f_0 = (*uParam4 + 0.049f);
		Var72.f_0 = (*uParam4 + 0.049f);
		Var81.f_0 = (*uParam4 + 0.049f);
		Var90.f_0 = (*uParam4 + 0.026f);
		Var99.f_0 = (*uParam4 + 0.026f);
		Var108.f_0 = (*uParam4 + 0.026f);
		Var117.f_0 = (*uParam4 + 0.003f);
		Var126.f_0 = (*uParam4 + 0.003f);
		Var135.f_0 = (*uParam4 + 0.003f);
		if (func_85())
		{
			Var9.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var18.f_1 = (uParam4->f_1 + 0.016f);
			Var27.f_1 = (uParam4->f_1 + 0.016f);
			Var36.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var45.f_1 = (uParam4->f_1 + 0.016f);
			Var54.f_1 = (uParam4->f_1 + 0.016f);
			Var63.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var72.f_1 = (uParam4->f_1 + 0.016f);
			Var81.f_1 = (uParam4->f_1 + 0.016f);
			Var90.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var99.f_1 = (uParam4->f_1 + 0.016f);
			Var108.f_1 = (uParam4->f_1 + 0.016f);
			Var117.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var126.f_1 = (uParam4->f_1 + 0.016f);
			Var135.f_1 = (uParam4->f_1 + 0.016f);
		}
		else
		{
			Var9.f_1 = (uParam4->f_1 + 0.0185f);
			Var18.f_1 = (uParam4->f_1 + 0.019f);
			Var27.f_1 = (uParam4->f_1 + 0.019f);
			Var36.f_1 = (uParam4->f_1 + 0.0185f);
			Var45.f_1 = (uParam4->f_1 + 0.019f);
			Var54.f_1 = (uParam4->f_1 + 0.019f);
			Var63.f_1 = (uParam4->f_1 + 0.0185f);
			Var72.f_1 = (uParam4->f_1 + 0.019f);
			Var81.f_1 = (uParam4->f_1 + 0.019f);
			Var90.f_1 = (uParam4->f_1 + 0.0185f);
			Var99.f_1 = (uParam4->f_1 + 0.019f);
			Var108.f_1 = (uParam4->f_1 + 0.019f);
			Var117.f_1 = (uParam4->f_1 + 0.0185f);
			Var126.f_1 = (uParam4->f_1 + 0.019f);
			Var135.f_1 = (uParam4->f_1 + 0.019f);
		}
		Var9.f_2 = (0.016f + 0.003f);
		Var18.f_2 = (0.016f + 0.003f);
		Var27.f_2 = (0.016f + 0.003f);
		Var36.f_2 = (0.016f + 0.003f);
		Var45.f_2 = (0.016f + 0.003f);
		Var54.f_2 = (0.016f + 0.003f);
		Var63.f_2 = (0.016f + 0.003f);
		Var72.f_2 = (0.016f + 0.003f);
		Var81.f_2 = (0.016f + 0.003f);
		Var90.f_2 = (0.016f + 0.003f);
		Var99.f_2 = (0.016f + 0.003f);
		Var108.f_2 = (0.016f + 0.003f);
		Var117.f_2 = (0.016f + 0.003f);
		Var126.f_2 = (0.016f + 0.003f);
		Var135.f_2 = (0.016f + 0.003f);
		Var9.f_3 = (0.032f + 0.004f);
		Var18.f_3 = (0.032f + 0.004f);
		Var27.f_3 = (0.032f + 0.004f);
		Var36.f_3 = (0.032f + 0.004f);
		Var45.f_3 = (0.032f + 0.004f);
		Var54.f_3 = (0.032f + 0.004f);
		Var63.f_3 = (0.032f + 0.004f);
		Var72.f_3 = (0.032f + 0.004f);
		Var81.f_3 = (0.032f + 0.004f);
		Var90.f_3 = (0.032f + 0.004f);
		Var99.f_3 = (0.032f + 0.004f);
		Var108.f_3 = (0.032f + 0.004f);
		Var117.f_3 = (0.032f + 0.004f);
		Var126.f_3 = (0.032f + 0.004f);
		Var135.f_3 = (0.032f + 0.004f);
		Var9.f_7 = 255;
		Var18.f_7 = 255;
		Var27.f_7 = 255;
		Var36.f_7 = 255;
		Var45.f_7 = 255;
		Var54.f_7 = 255;
		Var63.f_7 = 255;
		Var72.f_7 = 255;
		Var81.f_7 = 255;
		Var90.f_7 = 255;
		Var99.f_7 = 255;
		Var108.f_7 = 255;
		Var117.f_7 = 255;
		Var126.f_7 = 255;
		Var135.f_7 = 255;
		func_84(&Var9, 1);
		func_84(&Var18, 1);
		func_84(&Var27, 1);
		func_84(&Var36, 1);
		func_84(&Var45, 1);
		func_84(&Var54, 1);
		func_84(&Var63, 1);
		func_84(&Var72, 1);
		func_84(&Var81, 1);
		func_84(&Var90, 1);
		func_84(&Var99, 1);
		func_84(&Var108, 1);
		func_84(&Var117, 1);
		func_84(&Var126, 1);
		func_84(&Var135, 1);
		StringCopy(&cVar149, "", 24);
		StringCopy(&Var155, "", 24);
		StringCopy(&cVar161, "", 24);
		StringCopy(&cVar167, "", 24);
		StringCopy(&Var173, "", 24);
		StringCopy(&cVar179, "", 24);
		StringCopy(&cVar185, "", 24);
		StringCopy(&Var191, "", 24);
		StringCopy(&cVar197, "", 24);
		StringCopy(&cVar203, "", 24);
		StringCopy(&Var209, "", 24);
		StringCopy(&cVar215, "", 24);
		StringCopy(&cVar221, "", 24);
		StringCopy(&Var227, "", 24);
		StringCopy(&cVar233, "", 24);
		StringCopy(&cVar239, "", 24);
		StringCopy(&cVar245, "", 24);
		StringCopy(&cVar251, "", 24);
		StringCopy(&cVar257, "", 24);
		StringCopy(&cVar263, "", 24);
		StringCopy(&cVar269, "", 24);
		StringCopy(&cVar275, "", 24);
		StringCopy(&cVar281, "", 24);
		StringCopy(&cVar287, "", 24);
		StringCopy(&cVar293, "", 24);
		StringCopy(&cVar299, "", 24);
		StringCopy(&cVar305, "", 24);
		StringCopy(&cVar311, "", 24);
		StringCopy(&cVar317, "", 24);
		StringCopy(&cVar323, "", 24);
		iVar329 = 1;
		iVar330 = 1;
		iVar331 = 1;
		iVar332 = 1;
		iVar333 = 1;
		iVar334 = 1;
		iVar335 = 1;
		iVar336 = 1;
		iVar337 = 1;
		iVar338 = 1;
		iVar339 = 1;
		iVar340 = 1;
		iVar341 = 1;
		iVar342 = 1;
		iVar343 = 1;
		func_76(&iParam18, &Var9, &cVar149, &cVar239, &iVar329, &iParam13, &uVar144, &Var18, &Var155, &cVar245, &iVar330, iParam11, iParam25);
		func_76(&iParam19, &Var36, &cVar167, &cVar257, &iVar332, &iParam14, &uVar145, &Var45, &Var173, &cVar263, &iVar333, iParam11, iParam26);
		func_76(&iParam20, &Var63, &cVar185, &cVar275, &iVar335, &iParam15, &uVar146, &Var72, &Var191, &cVar281, &iVar336, iParam11, iParam27);
		func_76(&iParam21, &Var90, &cVar203, &cVar293, &iVar338, &iParam16, &uVar147, &Var99, &Var209, &cVar299, &iVar339, iParam11, iParam28);
		func_76(&iParam22, &Var117, &cVar221, &cVar311, &iVar341, &iParam17, &uVar148, &Var126, &Var227, &cVar317, &iVar342, iParam11, iParam29);
		unk_0x59B2F61C9D01132B("TimerBars", 0);
		if (func_74(&cVar149, &Var155, &cVar167, &Var173, &cVar185, &Var191, &cVar203, &Var209, &cVar221, &Var227) && unk_0xB56F0E1C89B9E069("TimerBars"))
		{
			iVar344 = func_73();
			unk_0x38C75B31337B3454(iVar344);
			Var0.f_0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			if (iParam5 < 1000000)
			{
				Var0.f_0 = (Var0.f_0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.008f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.036f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			else
			{
				Var0.f_0 = (Var0.f_0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.01f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.033f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			if (func_85())
			{
				Var0.f_0 = (Var0.f_0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1356070.f_5998 = (Global_1356070.f_5998 + Var0.f_3);
			func_65("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_64(uParam1, 0);
			if (iParam35 == 0)
			{
				func_63(iParam0);
			}
			if (func_62(iParam35, &(Global_1356070.f_422[iParam0 /*2*/]), &(Global_1356070.f_443[iParam0 /*2*/])))
			{
				bVar345 = true;
			}
			else
			{
				bVar345 = false;
			}
			if (uParam34 && unk_0x01E5C4868E4E75B3())
			{
				if (bVar345)
				{
					if (iParam33 == iParam13 && iParam36 == 5)
					{
						func_61(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
					}
					if (iParam33 == iParam14 && iParam36 == 4)
					{
						func_61(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
					}
					if (iParam33 == iParam15 && iParam36 == 3)
					{
						func_61(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
					}
					if (iParam33 == iParam16 && iParam36 == 2)
					{
						func_61(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
					}
					if (iParam33 == iParam17 && iParam36 == 1)
					{
						func_61(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
					}
				}
				if (iParam33 == iParam13 && iParam36 != 5)
				{
					func_61(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
				}
				if (iParam33 == iParam14 && iParam36 != 4)
				{
					func_61(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
				}
				if (iParam33 == iParam15 && iParam36 != 3)
				{
					func_61(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
				}
				if (iParam33 == iParam16 && iParam36 != 2)
				{
					func_61(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
				}
				if (iParam33 == iParam17 && iParam36 != 1)
				{
					func_61(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
				}
				if (iParam33 != iParam13)
				{
					func_61(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
				}
				if (iParam33 != iParam14)
				{
					func_61(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
				}
				if (iParam33 != iParam15)
				{
					func_61(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
				}
				if (iParam33 != iParam16)
				{
					func_61(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
				}
				if (iParam33 != iParam17)
				{
					func_61(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
				}
			}
			else
			{
				func_61(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
				func_61(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
				func_61(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
				func_61(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
				func_61(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
			}
			if (iParam32 == 0)
			{
				func_60(iParam0);
			}
			if (func_62(iParam32, &(Global_1356070.f_380[iParam0 /*2*/]), &(Global_1356070.f_401[iParam0 /*2*/])))
			{
				bVar346 = true;
			}
			else
			{
				bVar346 = false;
			}
			if (bParam24)
			{
				switch (iParam30)
				{
					case -1:
						func_58(&Var27, &cVar161, &cVar251, &iVar331, &iParam13, &uParam23, iParam11);
						func_58(&Var54, &cVar179, &cVar269, &iVar334, &iParam14, &uParam23, iParam11);
						func_58(&Var81, &cVar197, &cVar287, &iVar337, &iParam15, &uParam23, iParam11);
						func_58(&Var108, &cVar215, &cVar305, &iVar340, &iParam16, &uParam23, iParam11);
						func_58(&Var135, &cVar233, &cVar323, &iVar343, &iParam17, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_57(&Var27, &cVar161, &cVar251, iVar331);
								func_57(&Var54, &cVar179, &cVar269, iVar334);
								func_57(&Var81, &cVar197, &cVar287, iVar337);
								func_57(&Var108, &cVar215, &cVar305, iVar340);
								func_57(&Var135, &cVar233, &cVar323, iVar343);
							}
						}
						else
						{
							func_57(&Var27, &cVar161, &cVar251, iVar331);
							func_57(&Var54, &cVar179, &cVar269, iVar334);
							func_57(&Var81, &cVar197, &cVar287, iVar337);
							func_57(&Var108, &cVar215, &cVar305, iVar340);
							func_57(&Var135, &cVar233, &cVar323, iVar343);
						}
						break;
					
					case 0:
						break;
					
					case 1:
						func_58(&Var27, &cVar161, &cVar251, &iVar331, &iParam13, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_57(&Var27, &cVar161, &cVar251, iVar331);
							}
						}
						else
						{
							func_57(&Var27, &cVar161, &cVar251, iVar331);
						}
						break;
					
					case 2:
						func_58(&Var54, &cVar179, &cVar269, &iVar334, &iParam14, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_57(&Var54, &cVar179, &cVar269, iVar334);
							}
						}
						else
						{
							func_57(&Var54, &cVar179, &cVar269, iVar334);
						}
						break;
					
					case 3:
						func_58(&Var81, &cVar197, &cVar287, &iVar337, &iParam15, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_57(&Var81, &cVar197, &cVar287, iVar337);
							}
						}
						else
						{
							func_57(&Var81, &cVar197, &cVar287, iVar337);
						}
						break;
					
					case 4:
						func_58(&Var108, &cVar215, &cVar305, &iVar340, &iParam16, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_57(&Var108, &cVar215, &cVar305, iVar340);
							}
						}
						else
						{
							func_57(&Var108, &cVar215, &cVar305, iVar340);
						}
						break;
					
					case 5:
						func_58(&Var135, &cVar233, &cVar323, &iVar343, &iParam17, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_57(&Var135, &cVar233, &cVar323, iVar343);
							}
						}
						else
						{
							func_57(&Var135, &cVar233, &cVar323, iVar343);
						}
						break;
					}
			}
			func_64(uParam2, 0);
			if (bParam10)
			{
				func_56(uParam4, uParam2, "???", "", 1, 2);
			}
			else if (func_55(sParam7))
			{
				if (iParam9 == 0)
				{
					if (iParam8 == 0)
					{
						if (iParam5 != -999)
						{
							func_53(uParam4, uParam2, "NUMBER", iParam5, 2);
						}
					}
					else
					{
						func_51(uParam4, uParam2, "NUMBER", fParam6, Global_2456617, 2);
					}
				}
				else
				{
					func_49(uParam4, uParam2, "TIMER_DASHES", iParam5, iParam9, 2, 0);
				}
			}
			else if (unk_0xB3404E397FF56B3B("HUD_CASH", sParam7) || unk_0xB3404E397FF56B3B("HUD_CASH_S", sParam7))
			{
				sParam7 = "HUD_CASH_S";
				*uParam2 = 5;
				func_64(uParam2, 0);
				func_44(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (unk_0xB3404E397FF56B3B("HUD_CASH_NEG", sParam7) || unk_0xB3404E397FF56B3B("HUD_CASH_NEG_S", sParam7))
			{
				*uParam2 = 5;
				func_64(uParam2, 0);
				sParam7 = "HUD_CASH_NEG_S";
				func_44(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (iParam8 == 0)
			{
				func_53(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else
			{
				func_51(uParam4, uParam2, sParam7, fParam6, Global_2456617, 2);
			}
			func_43();
		}
	}
}

void func_43()
{
	unk_0x38C75B31337B3454(4);
}

void func_44(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_55(sVar0))
	{
		if (func_47())
		{
			func_64(uParam1, 0);
			unk_0x41D772AFFBD36843(iParam4);
			unk_0x0B8B91F21AE25854(sVar0);
			unk_0x96577CAA1D1E72DB(iParam3);
			unk_0xCA44A68ABB26D497(iParam3, 1);
			unk_0x7E43DE6F9866B44B(func_46(*uParam0), func_45(uParam0->f_1), 0);
		}
	}
}

float func_45(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_46(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_47()
{
	if (func_48())
	{
		return 1;
	}
	if (unk_0x5114FCEE2A997B95())
	{
		return 0;
	}
	if (unk_0x229840854A80E0D9() || unk_0x4413A34F0AAF1146())
	{
		return 0;
	}
	if (unk_0xC19E9068E7E4F6B0())
	{
		return 0;
	}
	return 1;
}

bool func_48()
{
	return Global_1312438;
}

void func_49(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_55(sVar0))
	{
		if (func_47())
		{
			func_64(uParam1, 0);
			unk_0xAC1B647E90E8412A(iParam6);
			unk_0x41D772AFFBD36843(iParam5);
			func_50(func_46(*uParam0), func_45(uParam0->f_1), sVar0, iParam3, iParam4);
		}
	}
}

void func_50(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x96577CAA1D1E72DB(uParam3);
	unk_0x96577CAA1D1E72DB(uParam4);
	unk_0x7E43DE6F9866B44B(uParam0, uParam1, 0);
}

void func_51(var uParam0, var uParam1, char* sParam2, float fParam3, var uParam4, int iParam5)
{
	if (!func_55(sParam2))
	{
		if (func_47())
		{
			func_64(uParam1, 0);
			unk_0x41D772AFFBD36843(iParam5);
			func_52(func_46(*uParam0), func_45(uParam0->f_1), sParam2, fParam3, uParam4);
		}
	}
}

void func_52(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x5E66471E79E6D3ED(uParam3, uParam4);
	unk_0x7E43DE6F9866B44B(uParam0, uParam1, 0);
}

void func_53(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_55(sVar0))
	{
		if (func_47())
		{
			func_64(uParam1, 0);
			unk_0x41D772AFFBD36843(iParam4);
			func_54(func_46(*uParam0), func_45(uParam0->f_1), sVar0, iParam3, 0);
		}
	}
}

void func_54(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x96577CAA1D1E72DB(uParam3);
	unk_0x7E43DE6F9866B44B(uParam0, uParam1, iParam4);
}

int func_55(char* sParam0)
{
	if (unk_0x996B09F758C57FBE(sParam0))
	{
		return 1;
	}
	else if (unk_0xB3404E397FF56B3B(sParam0, "") || unk_0xB3404E397FF56B3B(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_56(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	if (!func_55(sParam2))
	{
		if (func_47())
		{
			func_64(uParam1, 0);
			unk_0x41D772AFFBD36843(iParam5);
			if (func_55(sParam3))
			{
				sVar0 = "STRING";
			}
			else
			{
				sVar0 = sParam3;
			}
			unk_0x0B8B91F21AE25854(sVar0);
			unk_0xDBB8FCB00B701798(iParam4);
			unk_0x50B3C23D0902259F(sParam2);
			unk_0x7E43DE6F9866B44B(func_46(*uParam0), func_45(uParam0->f_1), 0);
		}
	}
}

void func_57(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (!unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		unk_0x59B2F61C9D01132B(sParam1, 0);
		if (unk_0xB56F0E1C89B9E069(sParam1))
		{
			func_84(uParam0, iParam3);
			func_65(sParam1, sParam2, uParam0, 1, 0, 4, 0);
		}
	}
}

void func_58(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5, int iParam6)
{
	if (*uParam5 != func_59() && *iParam4 != func_59())
	{
		if (*uParam5 == *iParam4)
		{
			StringCopy(sParam1, "timerbar_sr", 24);
			StringCopy(sParam2, "timer_box", 24);
			*iParam3 = iParam6;
			uParam0->f_2 = (0.016f + 0.008f);
			uParam0->f_3 = 0.038f;
		}
	}
}

int func_59()
{
	return -1;
}

void func_60(int iParam0)
{
	func_15(&(Global_1356070.f_380[iParam0 /*2*/]));
	func_15(&(Global_1356070.f_401[iParam0 /*2*/]));
}

void func_61(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
	{
		func_84(uParam1, iParam5);
		func_65(sParam3, sParam4, uParam1, 1, 0, 4, 0);
	}
	if (((((iParam0 == 27 || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		unk_0xB922891BFD232C45(2, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x45A34FA87FBE9599(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, uVar0, uVar1, uVar2, 153, 0);
	}
	if ((((((((((((((iParam0 == 18 || iParam0 == 19) || iParam0 == 20) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		if (!unk_0x0BD3CCFB6C6CFA91(sParam6))
		{
			func_84(uParam2, iParam8);
			func_65(sParam6, sParam7, uParam2, 1, 0, 4, 0);
		}
	}
}

int func_62(int iParam0, var uParam1, var uParam2)
{
	if (func_234(uParam1, iParam0, 0))
	{
		return 1;
	}
	if (func_234(uParam2, 300, 0))
	{
		if (func_234(uParam2, 800, 0))
		{
			func_15(uParam2);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_63(int iParam0)
{
	func_15(&(Global_1356070.f_422[iParam0 /*2*/]));
	func_15(&(Global_1356070.f_443[iParam0 /*2*/]));
}

void func_64(var uParam0, bool bParam1)
{
	unk_0x4E250FE9E4D8720F(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0x7A1F4BBECE23C9E3(uParam0->f_8, uParam0->f_9);
	}
	unk_0xD1F2C9FF58856AEC(uParam0->f_1, uParam0->f_2);
	unk_0x52D4D0409C49DF8C(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			unk_0xC281192783C5BD3D();
			unk_0x473B15F195A283BE();
			break;
		
		case 3:
			unk_0x473B15F195A283BE();
			break;
		
		case 2:
			unk_0xC281192783C5BD3D();
			break;
	}
	if (bParam1)
	{
		unk_0x38C75B31337B3454(4);
	}
}

void func_65(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_72(&Var0);
			break;
		
		case 1:
			func_71(&Var0);
			break;
		
		case 5:
			func_70(&Var0);
			break;
		
		case 6:
			func_69(&Var0);
			break;
		
		case 7:
			func_68(&Var0);
			break;
		
		case 8:
			func_67(&Var0);
			break;
		
		case 9:
			func_66(&Var0);
			break;
	}
	if (func_47())
	{
		unk_0x38C75B31337B3454(iParam5);
		if (iParam3 == 1)
		{
			unk_0x1638116285563DAD(sParam0, sParam1, func_46(Var0.f_0), func_45(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0x1638116285563DAD(sParam0, sParam1, func_46(Var0.f_0), func_45(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x38C75B31337B3454(4);
	}
}

void func_66(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_67(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_68(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_69(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_70(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_71(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_72(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_73()
{
	int iVar0;
	
	iVar0 = 1;
	if (Global_1356070.f_1087)
	{
		iVar0 = 7;
	}
	return iVar0;
}

int func_74(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	
	iVar0 = 1;
	if (func_75(sParam0, sParam1) == 0)
	{
		iVar0 = 0;
	}
	if (func_75(sParam2, sParam3) == 0)
	{
		iVar0 = 0;
	}
	if (func_75(sParam4, sParam5) == 0)
	{
		iVar0 = 0;
	}
	if (func_75(sParam6, sParam7) == 0)
	{
		iVar0 = 0;
	}
	if (func_75(sParam8, sParam9) == 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_75(char* sParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		unk_0x59B2F61C9D01132B(sParam0, 0);
		if (unk_0xB56F0E1C89B9E069(sParam0))
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 1;
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		unk_0x59B2F61C9D01132B(sParam1, 0);
		if (unk_0xB56F0E1C89B9E069(sParam1))
		{
			iVar1 = 1;
		}
	}
	else
	{
		iVar1 = 1;
	}
	if (iVar0 && iVar1)
	{
		return 1;
	}
	return 0;
}

void func_76(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, var uParam5, var uParam6, var uParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	switch (*uParam0)
	{
		case 5:
			uParam1->f_3 = (uParam1->f_3 + -0.009f);
			uParam1->f_2 = (uParam1->f_2 + -0.002f);
			if (func_85())
			{
				uParam1->f_1 = (uParam1->f_1 + 0.0055f);
			}
			else
			{
				uParam1->f_1 = (uParam1->f_1 + 0.0025f);
			}
			StringCopy(sParam2, "MPRPSymbol", 24);
			StringCopy(sParam3, "RP", 24);
			break;
		
		case 2:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Rockets", 24);
			break;
		
		case 3:
			StringCopy(sParam2, "MpSpecialRace", 24);
			StringCopy(sParam3, "HOMING_ROCKET", 24);
			break;
		
		case 1:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Spikes", 24);
			break;
		
		case 4:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Boost", 24);
			break;
		
		case 6:
			StringCopy(sParam2, "CrossTheLine", 24);
			StringCopy(sParam3, "Timer_LargeTick_32", 24);
			break;
		
		case 7:
			StringCopy(sParam2, "CrossTheLine", 24);
			StringCopy(sParam3, "Timer_LargeCross_32", 24);
			break;
		
		case 8:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Beast", 24);
			*iParam4 = 118;
			break;
		
		case 9:
			StringCopy(sParam2, "MPSpecialRace", 24);
			StringCopy(sParam3, "MACHINE_GUN", 24);
			break;
		
		case 10:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Random", 24);
			*iParam4 = 118;
			break;
		
		case 11:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Slow_Time", 24);
			break;
		
		case 12:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Swap", 24);
			*iParam4 = 118;
			break;
		
		case 13:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Testosterone", 24);
			*iParam4 = 118;
			break;
		
		case 14:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Thermal", 24);
			*iParam4 = 118;
			break;
		
		case 15:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Weed", 24);
			*iParam4 = 118;
			break;
		
		case 16:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Hidden", 24);
			*iParam4 = 118;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
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
			if (*uParam5 != func_59())
			{
				*uParam6 = func_77(*uParam5);
				if (*uParam6 != 0)
				{
					StringCopy(sParam2, unk_0x7EBBB7725601519D(*uParam6), 24);
					StringCopy(sParam3, unk_0x7EBBB7725601519D(*uParam6), 24);
				}
			}
			uParam1->f_2 = (0.016f + 0.004f);
			uParam1->f_3 = 0.034f;
			if (*uParam0 == 18)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_cross", 24);
				*iParam10 = iParam11;
			}
			if (*uParam0 == 19)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_tick", 24);
				*iParam10 = iParam11;
			}
			if (*uParam0 == 20 || *uParam0 == 27)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_0", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 21 || *uParam0 == 28)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_1", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 22 || *uParam0 == 29)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_2", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 23 || *uParam0 == 30)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_3", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 24 || *uParam0 == 31)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_4", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 25 || *uParam0 == 32)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_5", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 26)
			{
				*iParam10 = iParam11;
			}
			if ((((((*uParam0 == 20 || *uParam0 == 21) || *uParam0 == 22) || *uParam0 == 23) || *uParam0 == 24) || *uParam0 == 25) || *uParam0 == 26)
			{
				uParam1->f_7 = 127;
			}
			break;
		
		case 0:
			uParam1->f_7 = 0;
			uParam7->f_7 = 0;
			break;
	}
}

int func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = func_81(iParam0);
	if (iVar0 == -1)
	{
		func_78(iParam0, 1);
		return 0;
	}
	Global_1365860[iVar0 /*5*/].f_4 = 1;
	return Global_1365860[iVar0 /*5*/].f_2;
}

void func_78(int iParam0, bool bParam1)
{
	if (!func_80(iParam0, 0, 1))
	{
		return;
	}
	if (func_81(iParam0) != -1)
	{
		return;
	}
	if (Global_1366023)
	{
		if (iParam0 == Global_1366023.f_1)
		{
			return;
		}
	}
	if (func_79(iParam0))
	{
		return;
	}
	if (Global_1366061 >= 32)
	{
		return;
	}
	Global_1366028[Global_1366061] = iParam0;
	Global_1366061++;
	if (bParam1)
	{
	}
}

int func_79(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1366061)
	{
		if (Global_1366028[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_80(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434915.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	int iVar0;
	
	if (!func_80(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1366021 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1366021)
	{
		if (Global_1365860[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x1F20678A3517FA33(Global_1365860[iVar0 /*5*/].f_2) && unk_0x484948706DA7FDE0(Global_1365860[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_82(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_82(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1366021)
	{
		return;
	}
	if (unk_0x1F20678A3517FA33(Global_1365860[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1365860[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x7EBBB7725601519D(Global_1365860[iParam0 /*5*/].f_2), 64);
			unk_0x24EBBC5B25484B08(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x3597EC3F7CA70174(Global_1365860[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1366021)
	{
		Global_1365860[iVar32 /*5*/] = { Global_1365860[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_83(&(Global_1365860[iVar32 /*5*/]));
	Global_1366021 = (Global_1366021 - 1);
}

void func_83(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_59();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x27CA09C6DFAB1E79())
	{
		uParam0->f_3 = unk_0x898811EA80D35DE2();
	}
}

void func_84(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB922891BFD232C45(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

int func_85()
{
	if ((unk_0x2DA8A432EC3C3D33() == 8 || unk_0x2DA8A432EC3C3D33() == 9) || unk_0x2DA8A432EC3C3D33() == 10)
	{
		return 1;
	}
	return 0;
}

void func_86(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB922891BFD232C45(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
	uParam0->f_6 = uVar3;
}

void func_87(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	float fVar0;
	
	fVar0 = func_92(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_91(iParam3);
	uParam1->f_1 = (uParam1->f_1 + func_90(uParam4));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_89(uParam0));
	func_88(iParam3, -fVar0);
}

void func_88(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 1:
			Global_1356070.f_1077 = (Global_1356070.f_1077 + fParam1);
			break;
		
		case 2:
			Global_1356070.f_1078 = (Global_1356070.f_1078 + fParam1);
			break;
	}
}

float func_89(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 9:
			fVar0 = ((((((-0.01f - 0.005f) + 0.004f) - 0.0005f) - 0.002f) + 0.002f) + 0.0005f);
			break;
		
		case 10:
			fVar0 = ((((-0.025f - 0.003f) + 0.002f) - 0.006f) + 0.001f);
			break;
		
		case 11:
			fVar0 = ((((-0.047f - 0.004f) + 0.012f) + 0.001f) + 0.007f);
			break;
		
		case 12:
			fVar0 = ((-0.019f + 0.011f) + 0.004f);
			break;
		
		case 13:
			fVar0 = (-0.012f + 0.001f);
			break;
		
		case 14:
			fVar0 = ((-0.012f + 0.001f) + 0.001f);
			break;
		
		case 15:
			fVar0 = ((((-0.035f - 0.008f) + 0.006f) + 0.013f) + 0.0005f);
			break;
		
		case 16:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) - 0.001f) + 0.001f);
			break;
		
		case 17:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.0007f);
			break;
		
		case 18:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.003f);
			break;
		
		case 6:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
		
		case 19:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
	}
	if (func_85())
	{
		fVar0 = (fVar0 + 0.003f);
	}
	return fVar0;
}

float func_90(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 6:
			fVar0 = 0f;
			break;
	}
	return fVar0;
}

float func_91(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1356070.f_1077;
			break;
		
		case 2:
			return Global_1356070.f_1078;
			break;
	}
	return Global_1356070.f_1077;
}

float func_92(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 9:
			fVar0 = (((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.0018f) + 0.0005f) - 0.0005f);
			break;
		
		case 10:
			fVar0 = (((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) + 0.003f) + 0.002f) - 0.004f);
			break;
		
		case 11:
			fVar0 = (((((0.065f + 0.009f) - 0.006f) - 0.009f) + 0.001f) - 0.009f);
			break;
		
		case 12:
			fVar0 = 0f;
			break;
		
		case 13:
			fVar0 = (0.065f + 0.009f);
			break;
		
		case 14:
			fVar0 = (((0.065f + 0.009f) - 0.015f) - 0.022f);
			break;
		
		case 15:
			fVar0 = 0f;
			break;
		
		case 16:
			fVar0 = ((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.002f) + 0.0003f);
			break;
		
		case 17:
			fVar0 = ((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) - 0.0005f);
			break;
		
		case 18:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
		
		case 19:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
	}
	return fVar0;
}

void func_93(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			Global_1356070.f_1077 = func_30();
			break;
		
		case 2:
			Global_1356070.f_1078 = func_30();
			break;
	}
}

void func_94(int iParam0, var uParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1356070.f_5969[iParam0]), uParam1);
}

void func_95(var uParam0)
{
	float fVar0;
	
	fVar0 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) + 0.001f);
	uParam0->f_9 = fVar0;
	if (Global_1356070.f_1081 == 0)
	{
		switch (uParam0->f_10)
		{
			case 11:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			case 10:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			default:
				break;
			}
	}
	if (Global_1356070.f_1081 == 1)
	{
		uParam0->f_9 = fVar0;
		uParam0->f_9 = (uParam0->f_9 + -0.113f);
	}
}

void func_96(var uParam0)
{
	float fVar0;
	
	fVar0 = ((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.03f);
	if (Global_1356070.f_1088)
	{
		fVar0 = (fVar0 + -0.034f);
		if (unk_0x3CCF948E5BFC63FE() == 0)
		{
			fVar0 = (fVar0 + -0.02f);
		}
	}
	if (Global_1356070.f_1089 && Global_1356070.f_1088 == 0)
	{
		fVar0 = (fVar0 + (-0.015f - 0.003f));
		if (unk_0x3CCF948E5BFC63FE() == 0)
		{
			fVar0 = (fVar0 + -0.017f);
		}
	}
	if ((Global_1356070.f_1090 && Global_1356070.f_1089 == 0) && Global_1356070.f_1088 == 0)
	{
		fVar0 = (fVar0 + -0.038f);
	}
	if (Global_1356070.f_1081 == 1)
	{
		fVar0 = (fVar0 + -0.113f);
	}
	if (((unk_0x2DA8A432EC3C3D33() == 7 && unk_0x2DA8A432EC3C3D33() == 1) && !unk_0x3CCF948E5BFC63FE()) && Global_1356070.f_1090)
	{
		fVar0 = (fVar0 + -0.007f);
	}
	if (Global_1356070.f_1091)
	{
		if ((((unk_0x2DA8A432EC3C3D33() != 0 && unk_0x2DA8A432EC3C3D33() != 5) && unk_0x2DA8A432EC3C3D33() != 6) && unk_0x2DA8A432EC3C3D33() != 9) && unk_0x2DA8A432EC3C3D33() != 11)
		{
			fVar0 = (fVar0 + -0.009f);
		}
		else
		{
			fVar0 = (fVar0 + -0.009f);
		}
	}
	if (Global_1356070.f_1092)
	{
		if (func_97())
		{
			fVar0 = (fVar0 + -0.03f);
		}
		else if ((((unk_0x2DA8A432EC3C3D33() != 0 && unk_0x2DA8A432EC3C3D33() != 5) && unk_0x2DA8A432EC3C3D33() != 6) && unk_0x2DA8A432EC3C3D33() != 9) && unk_0x2DA8A432EC3C3D33() != 11)
		{
			fVar0 = (fVar0 + -0.024f);
		}
		else
		{
			fVar0 = (fVar0 + -0.019f);
		}
	}
	if (((((((((unk_0x2DA8A432EC3C3D33() == 8 || unk_0x2DA8A432EC3C3D33() == 7) || unk_0x2DA8A432EC3C3D33() == 1) && Global_1356070.f_1089 == 0) && Global_1356070.f_1088 == 0) && Global_1356070.f_1081 == 0) && Global_1356070.f_1090 == 0) && Global_1356070.f_1091 == 0) && Global_1356070.f_1092 == 0) && unk_0x20551D6D924ED04B())
	{
		fVar0 = (fVar0 + -0.005f);
	}
	uParam0->f_9 = fVar0;
}

int func_97()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xD9151D5BCEE2689C(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

void func_98(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 16;
}

void func_99(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 17;
}

void func_100(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f) - 0.06f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 18;
}

void func_101(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_102(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	*uParam0 = fParam1;
	uParam0->f_1 = (fParam2 + fParam9);
	uParam0->f_2 = fParam3;
	uParam0->f_3 = fParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
}

int func_103()
{
	return 1;
}

void func_104(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_27(11, iParam0))
	{
		func_105(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, uParam1, 1, uParam2, uParam3, uParam4, uParam5, iParam6, iParam7, iParam8, iParam9, bParam10, bParam11, bParam12, bParam13, iParam14);
	}
}

void func_105(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)
{
	struct<8> Var0;
	bool bVar9;
	int iVar10;
	struct<8> Var11;
	struct<8> Var20;
	struct<8> Var29;
	struct<8> Var38;
	struct<8> Var47;
	struct<8> Var56;
	struct<8> Var65;
	struct<8> Var74;
	var uVar83;
	var uVar84;
	var uVar85;
	var uVar86;
	char cVar87[24];
	struct<3> Var93;
	char cVar99[24];
	struct<3> Var105;
	char cVar111[24];
	struct<3> Var117;
	char cVar123[24];
	struct<3> Var129;
	char[] cVar135[8];
	char[] cVar141[8];
	char[] cVar147[8];
	char[] cVar153[8];
	char[] cVar159[8];
	char[] cVar165[8];
	char[] cVar171[8];
	char[] cVar177[8];
	int iVar183;
	int iVar184;
	int iVar185;
	int iVar186;
	int iVar187;
	int iVar188;
	int iVar189;
	int iVar190;
	
	Global_1356070++;
	if (func_103())
	{
		func_94(11, iParam0);
		func_101(uParam1, 0);
		func_96(uParam1);
		if (Global_1356070 == 1)
		{
			func_93(iParam6);
		}
		func_98(uParam2, 0, 0);
		func_95(uParam2);
		func_87(uParam2, uParam3, uParam4, iParam6, uParam1);
		func_102(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (iParam19 == 0)
		{
			func_107(iParam0);
		}
		if (func_62(iParam19, &(Global_1356070.f_338[iParam0 /*2*/]), &(Global_1356070.f_359[iParam0 /*2*/])))
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		unk_0x59B2F61C9D01132B("TimerBars", 0);
		if (unk_0xB56F0E1C89B9E069("TimerBars"))
		{
			iVar10 = func_73();
			unk_0x38C75B31337B3454(iVar10);
			Var0.f_0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			Var0.f_0 = (Var0.f_0 + 0.079f);
			Var0.f_1 = (Var0.f_1 + 0.008f);
			Var0.f_2 = (Var0.f_2 + 0.157f);
			Var0.f_3 = (Var0.f_3 + 0.036f);
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_85())
			{
				Var0.f_0 = (Var0.f_0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1356070.f_5998 = (Global_1356070.f_5998 + Var0.f_3);
			func_65("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_64(uParam1, 0);
			Var11.f_0 = ((*uParam4 + 0.145f) + 0.001f);
			Var20.f_0 = ((*uParam4 + 0.145f) + 0.001f);
			Var29.f_0 = (*uParam4 + 0.123f);
			Var38.f_0 = (*uParam4 + 0.123f);
			Var47.f_0 = (*uParam4 + 0.101f);
			Var56.f_0 = (*uParam4 + 0.101f);
			Var65.f_0 = (*uParam4 + 0.078f);
			Var74.f_0 = (*uParam4 + 0.078f);
			if (func_85())
			{
				Var11.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var20.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var29.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var38.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var47.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var56.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var65.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var74.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
			}
			else
			{
				Var11.f_1 = (uParam4->f_1 + 0.0185f);
				Var20.f_1 = (uParam4->f_1 + 0.019f);
				Var29.f_1 = (uParam4->f_1 + 0.0185f);
				Var38.f_1 = (uParam4->f_1 + 0.019f);
				Var47.f_1 = (uParam4->f_1 + 0.0185f);
				Var56.f_1 = (uParam4->f_1 + 0.019f);
				Var65.f_1 = (uParam4->f_1 + 0.0185f);
				Var74.f_1 = (uParam4->f_1 + 0.019f);
			}
			Var11.f_2 = (0.016f + 0.003f);
			Var20.f_2 = (0.016f + 0.003f);
			Var29.f_2 = (0.016f + 0.003f);
			Var38.f_2 = (0.016f + 0.003f);
			Var47.f_2 = (0.016f + 0.003f);
			Var56.f_2 = (0.016f + 0.003f);
			Var65.f_2 = (0.016f + 0.003f);
			Var74.f_2 = (0.016f + 0.003f);
			Var11.f_3 = (0.032f + 0.004f);
			Var20.f_3 = (0.032f + 0.004f);
			Var29.f_3 = (0.032f + 0.004f);
			Var38.f_3 = (0.032f + 0.004f);
			Var47.f_3 = (0.032f + 0.004f);
			Var56.f_3 = (0.032f + 0.004f);
			Var65.f_3 = (0.032f + 0.004f);
			Var74.f_3 = (0.032f + 0.004f);
			Var11.f_7 = 255;
			Var20.f_7 = 255;
			Var29.f_7 = 255;
			Var38.f_7 = 255;
			Var47.f_7 = 255;
			Var56.f_7 = 255;
			Var65.f_7 = 255;
			Var74.f_7 = 255;
			func_84(&Var11, 1);
			func_84(&Var20, 1);
			func_84(&Var29, 1);
			func_84(&Var38, 1);
			func_84(&Var47, 1);
			func_84(&Var56, 1);
			func_84(&Var65, 1);
			func_84(&Var74, 1);
			StringCopy(&cVar87, "", 24);
			StringCopy(&Var93, "", 24);
			StringCopy(&cVar99, "", 24);
			StringCopy(&Var105, "", 24);
			StringCopy(&cVar111, "", 24);
			StringCopy(&Var117, "", 24);
			StringCopy(&cVar123, "", 24);
			StringCopy(&Var129, "", 24);
			iVar183 = 1;
			iVar184 = 1;
			iVar185 = 1;
			iVar186 = 1;
			iVar187 = 1;
			iVar188 = 1;
			iVar189 = 1;
			iVar190 = 1;
			func_76(&iParam11, &Var11, &cVar87, &cVar135, &iVar183, &uParam7, &uVar83, &Var20, &Var93, &cVar141, &iVar184, uParam5, 0);
			func_76(&iParam12, &Var29, &cVar99, &cVar147, &iVar185, &uParam8, &uVar84, &Var38, &Var105, &cVar153, &iVar186, uParam5, 0);
			func_76(&iParam13, &Var47, &cVar111, &cVar159, &iVar187, &uParam9, &uVar85, &Var56, &Var117, &cVar165, &iVar188, uParam5, 0);
			func_76(&iParam14, &Var65, &cVar123, &cVar171, &iVar189, &uParam10, &uVar86, &Var74, &Var129, &cVar177, &iVar190, uParam5, 0);
			if (bParam15)
			{
				if (bVar9)
				{
					func_106(iParam11, &Var11, &Var20, &cVar87, &cVar135, iVar183, &Var93, &cVar141, iVar184);
				}
			}
			else
			{
				func_106(iParam11, &Var11, &Var20, &cVar87, &cVar135, iVar183, &Var93, &cVar141, iVar184);
			}
			if (bParam16)
			{
				if (bVar9)
				{
					func_106(iParam12, &Var29, &Var38, &cVar99, &cVar147, iVar185, &Var105, &cVar153, iVar186);
				}
			}
			else
			{
				func_106(iParam12, &Var29, &Var38, &cVar99, &cVar147, iVar185, &Var105, &cVar153, iVar186);
			}
			if (bParam17)
			{
				if (bVar9)
				{
					func_106(iParam13, &Var47, &Var56, &cVar111, &cVar159, iVar187, &Var117, &cVar165, iVar188);
				}
			}
			else
			{
				func_106(iParam13, &Var47, &Var56, &cVar111, &cVar159, iVar187, &Var117, &cVar165, iVar188);
			}
			if (bParam18)
			{
				if (bVar9)
				{
					func_106(iParam14, &Var65, &Var74, &cVar123, &cVar171, iVar189, &Var129, &cVar177, iVar190);
				}
			}
			else
			{
				func_106(iParam14, &Var65, &Var74, &cVar123, &cVar171, iVar189, &Var129, &cVar177, iVar190);
			}
		}
		func_43();
	}
}

void func_106(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
	{
		unk_0x59B2F61C9D01132B(sParam3, 0);
		if (unk_0xB56F0E1C89B9E069(sParam3))
		{
			func_84(uParam1, iParam5);
			func_65(sParam3, sParam4, uParam1, 1, 0, 4, 0);
		}
	}
	if (((((iParam0 == 27 || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		unk_0xB922891BFD232C45(2, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x45A34FA87FBE9599(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, uVar0, uVar1, uVar2, 153, 0);
	}
	if ((((((((((((((iParam0 == 18 || iParam0 == 19) || iParam0 == 20) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		if (!unk_0x0BD3CCFB6C6CFA91(sParam6))
		{
			unk_0x59B2F61C9D01132B(sParam6, 0);
			if (unk_0xB56F0E1C89B9E069(sParam6))
			{
				func_84(uParam2, iParam8);
				func_65(sParam6, sParam7, uParam2, 1, 0, 4, 0);
			}
		}
	}
}

void func_107(int iParam0)
{
	func_15(&(Global_1356070.f_338[iParam0 /*2*/]));
	func_15(&(Global_1356070.f_359[iParam0 /*2*/]));
}

void func_108(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14)
{
	var uVar0;
	var uVar11;
	var uVar13;
	
	if (func_27(10, iParam0))
	{
		uVar13 = 4;
		func_109(iParam0, &uVar0, &uVar11, &uVar13, iParam1, iParam2, 1, sParam3, iParam4, iParam7, bParam6, iParam5, uParam8, iParam9, iParam10, iParam11, bParam12, iParam13, iParam14);
	}
}

void func_109(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18)
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;
	
	Global_1356070++;
	if (func_103())
	{
		if (iParam13 == 2)
		{
		}
		func_94(10, iParam0);
		if (func_85())
		{
			func_139(uParam1, 0);
		}
		else if (bParam16)
		{
			func_101(uParam1, 0);
		}
		else if (bParam10)
		{
			func_138(uParam1, 3);
		}
		else
		{
			func_101(uParam1, 0);
		}
		if (Global_1356070 == 1)
		{
			func_93(iParam6);
		}
		func_132(uParam2, uParam3, &Var0, iParam6, uParam1);
		func_96(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_130())));
		if (iParam11 == 0)
		{
			func_129(iParam0);
		}
		if (iParam14 == 0)
		{
			func_128(iParam0);
		}
		if (func_62(iParam11, &(Global_1356070.f_296[iParam0 /*2*/]), &(Global_1356070.f_317[iParam0 /*2*/])))
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		unk_0x59B2F61C9D01132B("TimerBars", 0);
		if (unk_0xB56F0E1C89B9E069("TimerBars"))
		{
			iVar10 = func_73();
			unk_0x38C75B31337B3454(iVar10);
			Var0.f_0 = *uParam2;
			Var0.f_1 = uParam2->f_1;
			Var0.f_0 = (Var0.f_0 + 0.079f);
			Var0.f_1 = (Var0.f_1 + 0.008f);
			Var0.f_2 = (Var0.f_2 + 0.157f);
			Var0.f_3 = (Var0.f_3 + 0.036f);
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_85())
			{
				Var0.f_0 = (Var0.f_0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1356070.f_5998 = (Global_1356070.f_5998 + Var0.f_3);
			if (iParam14 > 0)
			{
				Var11 = { Var0 };
				if (func_234(&(Global_1356070.f_821[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_127(Global_1356070.f_821[iParam0 /*2*/], 1250, 0))
					{
						Global_1356070.f_842[iParam0] = (Global_1356070.f_842[iParam0] - 17);
					}
					Var11.f_7 = Global_1356070.f_842[iParam0];
					func_84(&Var11, iParam8);
					func_65("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
				}
			}
			else
			{
				Global_1356070.f_842[iParam0] = 255;
				func_126(&(Global_1356070.f_821[iParam0 /*2*/]), 0, 0);
			}
			func_65("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			func_120(&Var0, iParam17);
			if (func_85())
			{
				if (bParam10)
				{
					if (unk_0x2DA8A432EC3C3D33() == 9)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (unk_0x2DA8A432EC3C3D33() == 9)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.012f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.008f);
				}
			}
			else if (bParam10)
			{
				uParam2->f_1 = (uParam2->f_1 + (-0.005f + 0.001f));
			}
			iVar10 = func_73();
			unk_0x38C75B31337B3454(iVar10);
			if (bParam16)
			{
				func_119(uParam1, iParam8);
				func_64(uParam1, 0);
				func_56(uParam2, uParam1, sParam7, "", iParam18, 2);
			}
			else if (bParam10 == 1)
			{
				func_119(uParam1, iParam8);
				func_64(uParam1, 0);
				func_56(uParam2, uParam1, sParam7, "", iParam18, 2);
			}
			else
			{
				func_64(uParam1, 0);
				if (iParam9 == -1)
				{
					func_117(uParam2, uParam1, sParam7, 0, 1);
				}
				else
				{
					func_53(uParam2, uParam1, sParam7, iParam9, 2);
				}
			}
			iVar10 = func_73();
			unk_0x38C75B31337B3454(iVar10);
			if (bVar9)
			{
				func_113(iParam4, iParam5, uParam3, iParam8, uParam12, iVar10);
				func_110(iParam15, uParam3, iVar10);
			}
			func_43();
		}
	}
}

void func_110(int iParam0, var uParam1, int iParam2)
{
	struct<9> Var0[1];
	
	if (iParam0 == joaat("weapon_advancedrifle"))
	{
	}
	Var0[0 /*9*/] = 0f;
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = -0.015f;
	Var0[0 /*9*/].f_3 = -0.025f;
	unk_0x59B2F61C9D01132B("MPKillQuota", 0);
	if (unk_0xB56F0E1C89B9E069("MPKillQuota"))
	{
		func_112(uParam1[0 /*9*/], &(Var0[0 /*9*/]));
		func_84(uParam1[0 /*9*/], 1);
		unk_0x38C75B31337B3454(iParam2);
		(uParam1[0 /*9*/])->f_7 = 255;
		func_65("MPKillQuota", func_111(iParam0), uParam1[0 /*9*/], 0, 0, iParam2, 0);
		unk_0x38C75B31337B3454(iParam2);
	}
}

char* func_111(int iParam0)
{
	switch (iParam0)
	{
		case -572349828:
			return "WEAPON_ASSAULT_MG";
		
		case joaat("weapon_ball"):
			return "WEAPON_BALL";
		
		case joaat("weapon_bat"):
			return "WEAPON_BAT";
		
		case joaat("weapon_bottle"):
			return "WEAPON_BOTTLE";
		
		case joaat("weapon_bullpuprifle"):
			return "WEAPON_BULLPUPRIFLE";
		
		case joaat("weapon_combatpdw"):
			return "WEAPON_COMBATPDW";
		
		case joaat("weapon_compactrifle"):
			return "WEAPON_COMPACTRIFLE";
		
		case joaat("weapon_crowbar"):
			return "WEAPON_CROWBAR";
		
		case joaat("weapon_dagger"):
			return "WEAPON_DAGGER";
		
		case joaat("weapon_dbshotgun"):
			return "WEAPON_DBSHOTGUN";
		
		case joaat("weapon_firework"):
			return "WEAPON_FIREWORK";
		
		case joaat("weapon_flare"):
			return "WEAPON_FLARE";
		
		case joaat("weapon_flaregun"):
			return "WEAPON_FLARE_GUN";
		
		case joaat("weapon_flashlight"):
			return "WEAPON_FLASHLIGHT";
		
		case joaat("weapon_golfclub"):
			return "WEAPON_GOLFCLUB";
		
		case joaat("weapon_gusenberg"):
			return "WEAPON_GUSENBERG";
		
		case joaat("weapon_hammer"):
			return "WEAPON_HAMMER";
		
		case joaat("weapon_hatchet"):
			return "WEAPON_HATCHET";
		
		case joaat("weapon_grenadelauncher"):
			return "WEAPON_HEAVY_GRENADE_LAUNCHER";
		
		case joaat("weapon_minigun"):
			return "WEAPON_HEAVY_MINIGUN";
		
		case joaat("weapon_heavyrifle"):
			return "WEAPON_HEAVY_RIFLE";
		
		case joaat("weapon_rpg"):
			return "WEAPON_HEAVY_RPG";
		
		case joaat("weapon_heavypistol"):
			return "WEAPON_HEAVYPISTOL";
		
		case joaat("weapon_heavyshotgun"):
			return "WEAPON_HEAVYSHOTGUN";
		
		case joaat("weapon_hominglauncher"):
			return "WEAPON_HOMINGLAUNCHER";
		
		case joaat("weapon_petrolcan"):
			return "WEAPON_JERRY_CAN";
		
		case joaat("weapon_knife"):
			return "WEAPON_KNIFE";
		
		case joaat("weapon_knuckle"):
			return "WEAPON_KNUCKLE";
		
		case joaat("weapon_mg"):
			return "WEAPON_LMG";
		
		case joaat("weapon_combatmg"):
			return "WEAPON_LMG_COMBAT";
		
		case joaat("weapon_machete"):
			return "WEAPON_MACHETE";
		
		case joaat("weapon_machinepistol"):
			return "WEAPON_MACHINEPISTOL";
		
		case joaat("weapon_marksmanpistol"):
			return "WEAPON_MARKSMANPISTOL";
		
		case joaat("weapon_marksmanrifle"):
			return "WEAPON_MARKSMANRIFLE";
		
		case joaat("weapon_molotov"):
			return "WEAPON_MOLOTOV";
		
		case joaat("weapon_musket"):
			return "WEAPON_MUSKET";
		
		case joaat("weapon_nightstick"):
			return "WEAPON_NIGHTSTICK";
		
		case joaat("weapon_pistol"):
			return "WEAPON_PISTOL";
		
		case joaat("weapon_pistol50"):
			return "WEAPON_PISTOL_50";
		
		case joaat("weapon_appistol"):
			return "WEAPON_PISTOL_AP";
		
		case joaat("weapon_combatpistol"):
			return "WEAPON_PISTOL_COMBAT";
		
		case -1887867191:
			return "WEAPON_PROGRAMMABLE_AR";
		
		case joaat("weapon_proxmine"):
			return "WEAPON_PROXIMINE";
		
		case joaat("weapon_railgun"):
			return "WEAPON_RAILGUN";
		
		case joaat("weapon_revolver"):
			return "WEAPON_REVOLVER";
		
		case joaat("weapon_advancedrifle"):
			return "WEAPON_RIFLE_ADVANCED";
		
		case joaat("weapon_assaultrifle"):
			return "WEAPON_RIFLE_ASSAULT";
		
		case joaat("weapon_carbinerifle"):
			return "WEAPON_RIFLE_CARBINE";
		
		case joaat("weapon_assaultshotgun"):
			return "WEAPON_SHOTGUN_ASSAULT";
		
		case joaat("weapon_bullpupshotgun"):
			return "WEAPON_SHOTGUN_BULLPUP";
		
		case joaat("weapon_pumpshotgun"):
			return "WEAPON_SHOTGUN_PUMP";
		
		case joaat("weapon_sawnoffshotgun"):
			return "WEAPON_SHOTGUN_SAWNOFF";
		
		case joaat("weapon_smg"):
			return "WEAPON_SMG";
		
		case joaat("weapon_assaultsmg"):
			return "WEAPON_SMG_ASSAULT";
		
		case joaat("weapon_microsmg"):
			return "WEAPON_SMG_MICRO";
		
		case joaat("weapon_sniperrifle"):
			return "WEAPON_SNIPER";
		
		case 392730790:
			return "WEAPON_SNIPER_ASSAULT";
		
		case joaat("weapon_heavysniper"):
			return "WEAPON_SNIPER_HEAVY";
		
		case joaat("weapon_snowball"):
			return "WEAPON_SNOWBALL";
		
		case joaat("weapon_snspistol"):
			return "WEAPON_SNSPISTOL";
		
		case joaat("weapon_specialcarbine"):
			return "WEAPON_SPECIALCARBINE";
		
		case joaat("weapon_stungun"):
			return "WEAPON_STUNGUN";
		
		case joaat("weapon_switchblade"):
			return "WEAPON_SWITCHBLADE";
		
		case joaat("weapon_bzgas"):
			return "WEAPON_THROWN_BZ_GAS";
		
		case joaat("weapon_grenade"):
			return "WEAPON_THROWN_GRENADE";
		
		case joaat("weapon_stickybomb"):
			return "WEAPON_THROWN_STICKY";
		
		case joaat("weapon_unarmed"):
			return "WEAPON_UNARMED";
		
		case joaat("weapon_vintagepistol"):
			return "WEAPON_VINTAGEPISTOL";
		
		case joaat("weapon_autoshotgun"):
			return "WEAPON_AUTOMATIC_SHOTGUN";
		
		case joaat("weapon_battleaxe"):
			return "WEAPON_BATTLE_AXE";
		
		case joaat("weapon_compactlauncher"):
			return "WEAPON_COMPACT_GRENADE_LAUNCHER";
		
		case joaat("weapon_minismg"):
			return "WEAPON_MINI_SMG";
		
		case joaat("weapon_pipebomb"):
			return "WEAPON_PIPEBOMB";
		
		case joaat("weapon_poolcue"):
			return "WEAPON_POOL_CUE";
		
		case joaat("weapon_wrench"):
			return "WEAPON_WRENCH";
		
		default:
	}
	return "";
}

void func_112(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 + *uParam1);
	uParam0->f_1 = (uParam0->f_1 + uParam1->f_1);
	uParam0->f_2 = (uParam0->f_2 + uParam1->f_2);
	uParam0->f_3 = (uParam0->f_3 + uParam1->f_3);
	uParam0->f_4 = (uParam0->f_4 + uParam1->f_4);
	uParam0->f_5 = (uParam0->f_5 + uParam1->f_5);
	uParam0->f_6 = (uParam0->f_6 + uParam1->f_6);
	uParam0->f_7 = (uParam0->f_7 + uParam1->f_7);
}

void func_113(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5)
{
	struct<9> Var0[2];
	float fVar19;
	
	Var0[0 /*9*/] = 0.003f;
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.011f;
	Var0[0 /*9*/].f_3 = 0.059f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.011f;
	Var0[1 /*9*/].f_3 = 0.059f;
	unk_0x59B2F61C9D01132B("TimerBars", 0);
	if (unk_0xB56F0E1C89B9E069("TimerBars"))
	{
		func_112(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_112(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_84(uParam2[1 /*9*/], iParam3);
		func_84(uParam2[3 /*9*/], iParam3);
		fVar19 = ((unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1)) * 100f);
		unk_0x38C75B31337B3454(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_65("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_84(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_65("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_114(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4);
		unk_0x38C75B31337B3454(iParam5);
		func_65("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		unk_0x38C75B31337B3454(iParam5);
	}
}

void func_114(struct<9> Param0, float fParam9, var uParam10, int iParam11, int iParam12, var uParam13)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = Param0.f_2;
	fVar1 = 0f;
	fVar2 = func_116(Param0);
	fVar3 = fParam9;
	if (fParam9 < 0f)
	{
		fVar3 = 0f;
	}
	if (fParam9 > 100f)
	{
		fVar3 = 100f;
	}
	if (fParam9 > 95f && fParam9 < 100f)
	{
		fVar3 = 96f;
	}
	if (iParam12 == 0)
	{
		fVar4 = ((fVar1 - fVar0) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar0;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		fVar2 = Param0.f_0;
		fVar8 = func_115(Param0);
		fVar9 = (fVar8 - (fVar7 / 2f));
	}
	else
	{
		fVar4 = ((fVar0 - fVar1) / 100f);
		fVar5 = fVar3;
		fVar6 = 0f;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		if (fParam9 >= 100f)
		{
			fVar7 = Param0.f_2;
		}
		fVar8 = Param0.f_0;
		fVar4 = ((fVar8 - fVar2) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar2;
		fVar9 = ((fVar4 * fVar5) + fVar6);
	}
	*uParam10 = fVar9;
	uParam10->f_1 = Param0.f_1;
	uParam10->f_2 = fVar7;
	if (iParam11 == 1)
	{
		uParam10->f_3 = Param0.f_3;
	}
	uParam10->f_8 = Param0.f_8;
}

float func_115(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (Param0.f_2 / 2f);
	fVar1 = Param0.f_0;
	fVar1 = (fVar1 + fVar0);
	fVar1 = (fVar1 - 0.002f);
	return fVar1;
}

float func_116(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (Param0.f_2 / 2f);
	fVar1 = Param0.f_0;
	fVar1 = (fVar1 - fVar0);
	return fVar1;
}

void func_117(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_55(sVar0))
	{
		if (func_47())
		{
			func_64(uParam1, 0);
			unk_0x9AC742C2470DD649(iParam4);
			unk_0xAC1B647E90E8412A(iParam3);
			func_118(func_46(*uParam0), func_45(uParam0->f_1), sVar0, 0);
		}
	}
}

void func_118(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x7E43DE6F9866B44B(uParam0, uParam1, iParam3);
}

void func_119(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB922891BFD232C45(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_120(var uParam0, int iParam1)
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_0 = 0.951f;
	Var0.f_1 = uParam0->f_1;
	Var0.f_2 = 0.002f;
	Var0.f_3 = uParam0->f_3;
	unk_0xB922891BFD232C45(iParam1, &uVar8, &uVar9, &uVar10, &uVar11);
	Var0.f_4 = uVar8;
	Var0.f_5 = uVar9;
	Var0.f_6 = uVar10;
	Var0.f_7 = uVar11;
	func_121(Var0, 0, 0);
}

void func_121(struct<8> Param0, int iParam8, int iParam9)
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam8)
	{
		case 2:
			func_125(&Var0);
			break;
		
		case 1:
			func_124(&Var0);
			break;
		
		case 3:
			func_123(&Var0);
			break;
		
		case 4:
			func_122(&Var0);
			break;
	}
	if (func_47())
	{
		if (iParam9 == 1)
		{
			unk_0x45A34FA87FBE9599(func_46(Var0.f_0), func_45(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			unk_0x45A34FA87FBE9599(func_46(Var0.f_0), func_45(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_122(var uParam0)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_123(var uParam0)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_124(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_125(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_126(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x27CA09C6DFAB1E79() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x898811EA80D35DE2();
		}
		else
		{
			*uParam0 = unk_0x51A193745FDE917D();
		}
	}
	else
	{
		*uParam0 = unk_0x31CD6E9F83C10233();
	}
	uParam0->f_1 = 1;
}

int func_127(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x27CA09C6DFAB1E79() && !bParam3)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0)
{
	func_15(&(Global_1356070.f_758[iParam0 /*2*/]));
	func_15(&(Global_1356070.f_779[iParam0 /*2*/]));
}

void func_129(int iParam0)
{
	func_15(&(Global_1356070.f_296[iParam0 /*2*/]));
	func_15(&(Global_1356070.f_317[iParam0 /*2*/]));
	Global_1356070.f_1093.f_205[iParam0] = -1;
}

float func_130()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	fVar0 = unk_0x5E61619C36D9095B(0);
	unk_0xD9151D5BCEE2689C(&iVar1, &iVar2);
	fVar3 = (unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(iVar2));
	fVar0 = func_131(fVar0, fVar3);
	if (fVar3 > 3.5f && fVar0 > 1.7f)
	{
		return 1.4f;
	}
	if (fVar0 > 1.7f)
	{
		return 1f;
	}
	else if (fVar0 > 1.5f)
	{
		return 1.2f;
	}
	else if (fVar0 > 1.3f)
	{
		return 1.3f;
	}
	return 1.4f;
}

float func_131(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_132(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	float fVar0;
	
	fVar0 = func_137(0, 1);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_91(iParam3);
	uParam0->f_1 = (uParam0->f_1 + func_90(uParam4));
	func_133(uParam1, iParam3, -1f, -1f);
	func_88(iParam3, -fVar0);
	func_102(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_133(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_136(fParam2, fParam3))
	{
		fVar0 = (func_135() + func_91(iParam1));
		fVar1 = func_134();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.062f;
	(uParam0[0 /*9*/])->f_3 = 0.016f;
	(uParam0[0 /*9*/])->f_4 = 255;
	(uParam0[0 /*9*/])->f_5 = 255;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.069f;
	(uParam0[1 /*9*/])->f_3 = 0.011f;
	(uParam0[1 /*9*/])->f_4 = 255;
	(uParam0[1 /*9*/])->f_5 = 255;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.069f;
	(uParam0[2 /*9*/])->f_3 = 0.009f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 120;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.069f;
	(uParam0[3 /*9*/])->f_3 = 0.008f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 90;
}

float func_134()
{
	float fVar0;
	
	fVar0 = (((((0.919f - 0.081f) + 0.028f) + 0.05f) - 0.001f) - 0.002f);
	return fVar0;
}

float func_135()
{
	float fVar0;
	
	fVar0 = ((((0.013f - 0.002f) + 0.001f) + 0.001f) - 0.001f);
	return fVar0;
}

int func_136(float fParam0, float fParam1)
{
	if (fParam0 == -1f && fParam1 == -1f)
	{
		return 0;
	}
	return 1;
}

float func_137(int iParam0, bool bParam1)
{
	float fVar0;
	
	fVar0 = ((0.025f + 0.006f) + 0.0009f);
	if (iParam0 == 1)
	{
		fVar0 = (fVar0 + 0.008f);
	}
	if (bParam1)
	{
		fVar0 = (fVar0 + 0.008f);
	}
	return fVar0;
}

void func_138(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.355f + 0.092f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 6;
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.508f - 0.03f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

void func_140(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar11;
	
	if (func_27(9, iParam0))
	{
		func_141(iParam0, &uVar0, &uVar11, 1, iParam1, iParam2);
	}
}

void func_141(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	var uVar5;
	
	Global_1356070++;
	if (func_103())
	{
		func_145();
		unk_0xB922891BFD232C45(iParam5, &uVar0, &uVar1, &uVar2, &uVar3);
		func_144(uParam1, 3, uVar0, uVar1, uVar2);
		if (func_85())
		{
			uParam1->f_1 = 2f;
			uParam1->f_2 = 2.7f;
		}
		if (Global_1356070 == 1)
		{
			func_93(iParam3);
		}
		fVar4 = 0.131f;
		if (unk_0x2DA8A432EC3C3D33() == 8)
		{
			fVar4 = 0.0872f;
		}
		else if (unk_0x2DA8A432EC3C3D33() == 10)
		{
			fVar4 = 0.095f;
		}
		*uParam2 = 0.795f;
		uParam2->f_1 = ((func_91(iParam3) + func_89(uParam1)) - fVar4);
		func_95(uParam1);
		func_64(uParam1, 0);
		func_94(9, iParam0);
		func_143(&uVar5, iParam4);
		func_117(uParam2, uParam1, func_142(&uVar5), 0, 1);
		func_43();
	}
}

var func_142(var uParam0)
{
	return uParam0;
}

void func_143(var uParam0, int iParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "RACE_POS_", 16);
	StringIntConCat(&Var0, iParam1, 16);
	*uParam0 = { Var0 };
}

void func_144(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam0 = 6;
	uParam0->f_1 = 3f;
	uParam0->f_2 = 3.7f;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	uParam0->f_5 = uParam4;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 11;
}

void func_145()
{
	unk_0xBD1C47D856010F09(7);
	unk_0xBD1C47D856010F09(6);
	unk_0xBD1C47D856010F09(8);
	unk_0xBD1C47D856010F09(9);
}

void func_146(int iParam0, char* sParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;
	var uVar11;
	var uVar13;
	
	if (func_27(8, iParam0))
	{
		uVar13 = 2;
		func_147(iParam0, &uVar0, &uVar11, &uVar13, 1, sParam1, iParam3, uParam2, uParam4, uParam5, uParam6);
	}
}

void func_147(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	struct<9> Var0;
	struct<8> Var9;
	
	Global_1356070++;
	if (func_103())
	{
		func_102(&Var9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_101(uParam1, 0);
		func_96(uParam1);
		func_94(8, iParam0);
		if (Global_1356070 == 1)
		{
			func_93(iParam4);
		}
		func_148(uParam2, iParam4, uParam1, &Var0);
		unk_0x59B2F61C9D01132B("TimerBars", 0);
		unk_0x59B2F61C9D01132B("Hunting", 0);
		if (unk_0xB56F0E1C89B9E069("TimerBars") && unk_0xB56F0E1C89B9E069("Hunting"))
		{
			Var9.f_0 = *uParam2;
			Var9.f_1 = uParam2->f_1;
			Var9.f_0 = (Var9.f_0 + 0.079f);
			Var9.f_1 = (Var9.f_1 + 0.008f);
			Var9.f_2 = (Var9.f_2 + 0.157f);
			Var9.f_3 = (Var9.f_3 + 0.036f);
			Var9.f_4 += 255;
			Var9.f_5 += 255;
			Var9.f_6 += 255;
			Var9.f_7 = 140;
			if (func_85())
			{
				Var9.f_0 = (Var9.f_0 + -0.025f);
				Var9.f_2 = (Var9.f_2 + 0.05f);
			}
			Global_1356070.f_5998 = (Global_1356070.f_5998 + Var9.f_3);
			func_65("TimerBars", "ALL_BLACK_bg", &Var9, 1, 0, 4, 0);
			Var0.f_4 = uParam8;
			Var0.f_5 = uParam9;
			Var0.f_6 = uParam10;
			Var0.f_7 = 255;
			Var0.f_8 = uParam7;
			func_65("Hunting", "HuntingWindArrow_32", &Var0, 1, 0, 4, 0);
			uParam1->f_3 = uParam8;
			uParam1->f_4 = uParam9;
			uParam1->f_5 = uParam10;
			uParam1->f_6 = 255;
			func_64(uParam1, 0);
			uParam7 = uParam7;
			(*uParam3)[0 /*9*/] = (*uParam3)[0 /*9*/];
			func_53(uParam2, uParam1, sParam5, iParam6, 2);
			func_43();
		}
	}
}

void func_148(var uParam0, int iParam1, var uParam2, var uParam3)
{
	float fVar0;
	
	fVar0 = func_137(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_91(iParam1);
	uParam0->f_1 = (uParam0->f_1 + func_90(uParam2));
	func_88(iParam1, -fVar0);
	uParam0->f_1 = (uParam0->f_1 + func_90(uParam2));
	*uParam3 = 0.9375f;
	uParam3->f_1 = (uParam0->f_1 + 0.009f);
	uParam3->f_2 = 0.02f;
	uParam3->f_3 = 0.02f;
}

void func_149(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, float fParam17, float fParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, bool bParam46, int iParam47, int iParam48, int iParam49, int iParam50, int iParam51, int iParam52, int iParam53, int iParam54, int iParam55)
{
	var uVar0;
	var uVar11;
	var uVar13;
	var uVar95;
	
	if (func_27(2, iParam0))
	{
		uVar13 = 9;
		if (iParam1 < 9)
		{
			func_150(iParam0, &uVar0, &uVar11, &uVar13, &uVar95, iParam1, 1, iParam3, iParam4, sParam2, iParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, iParam14, iParam15, bParam16, fParam17, fParam18, uParam19, uParam20, uParam21, uParam22, uParam23, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, iParam35, iParam36, iParam37, iParam38, iParam39, iParam40, iParam41, iParam42, iParam43, iParam44, iParam45, bParam46, iParam47, iParam48, iParam49, iParam50, iParam51, iParam52, iParam53, iParam54, iParam55);
		}
	}
}

void func_150(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, int iParam20, bool bParam21, float fParam22, float fParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48, int iParam49, int iParam50, bool bParam51, int iParam52, int iParam53, int iParam54, int iParam55, int iParam56, int iParam57, int iParam58, int iParam59, int iParam60)
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;
	
	Global_1356070++;
	if (func_103())
	{
		if (iParam40 == 2)
		{
		}
		func_94(2, iParam0);
		if (Global_1356070 == 1)
		{
			func_93(iParam6);
		}
		func_157(uParam2, uParam3, &Var0, uParam4, iParam6, fParam22, fParam23, uParam1);
		if (func_85())
		{
			func_139(uParam1, 0);
		}
		else if (bParam51)
		{
			func_101(uParam1, 0);
		}
		else if (bParam21)
		{
			func_138(uParam1, 3);
		}
		else
		{
			func_101(uParam1, 0);
		}
		func_96(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_130())));
		if (iParam19 == 0)
		{
			func_156(iParam0);
		}
		if (iParam41 == 0)
		{
			func_155(iParam0);
		}
		iVar10 = func_73();
		unk_0x38C75B31337B3454(iVar10);
		unk_0x59B2F61C9D01132B("TimerBars", 0);
		if (unk_0xB56F0E1C89B9E069("TimerBars"))
		{
			if (func_62(iParam19, &(Global_1356070.f_212[iParam0 /*2*/]), &(Global_1356070.f_233[iParam0 /*2*/])))
			{
				bVar9 = true;
			}
			else
			{
				bVar9 = false;
			}
			if (!func_136(fParam22, fParam23))
			{
				Var0.f_0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				Var0.f_0 = (Var0.f_0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.012f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.028f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
				if (func_85())
				{
					Var0.f_0 = (Var0.f_0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1356070.f_5998 = (Global_1356070.f_5998 + Var0.f_3);
				if (iParam41 > 0)
				{
					Var11 = { Var0 };
					if (func_234(&(Global_1356070.f_981[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_127(Global_1356070.f_981[iParam0 /*2*/], 1250, 0))
						{
							Global_1356070.f_1002[iParam0] = (Global_1356070.f_1002[iParam0] - 17);
						}
						Var11.f_7 = Global_1356070.f_1002[iParam0];
						func_84(&Var11, iParam7);
						func_65("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
					}
				}
				else
				{
					Global_1356070.f_1002[iParam0] = 255;
					func_126(&(Global_1356070.f_981[iParam0 /*2*/]), 0, 0);
				}
				func_65("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			}
			func_120(&Var0, iParam52);
			iVar10 = func_73();
			unk_0x38C75B31337B3454(iVar10);
			func_119(uParam1, iParam42);
			if (unk_0x2DA8A432EC3C3D33() == 9)
			{
				uParam2->f_1 = (uParam2->f_1 + -0.009f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + -0.003f);
			}
			if (func_85())
			{
				if (unk_0x2DA8A432EC3C3D33() == 9)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.007f);
				}
			}
			if (func_85() == 0)
			{
				if (bParam51)
				{
					uParam2->f_1 = (uParam2->f_1 + 0.003f);
				}
				else if (bParam21)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.002f);
				}
			}
			else if (bParam21)
			{
				uParam2->f_1 = (uParam2->f_1 + 0.007f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + 0.007f);
			}
			if (!func_136(fParam22, fParam23))
			{
				func_64(uParam1, 0);
				if (bParam51)
				{
					func_56(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (bParam21 == 1)
				{
					func_56(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (iParam20 == -1)
				{
					func_117(uParam2, uParam1, sParam9, 0, 1);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 - -0.003f);
					func_53(uParam2, uParam1, sParam9, iParam20, 2);
				}
			}
			if (bVar9)
			{
				func_151(iParam5, uParam3, iParam7, iParam8, iParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16, uParam17, uParam18, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, uParam35, uParam36, uParam37, uParam38, uParam39, iVar10, iParam43, iParam44, iParam45, iParam46, iParam47, iParam48, iParam49, iParam50, iParam53, iParam54, iParam55, iParam56, iParam57, iParam58, iParam59, iParam60);
			}
			func_43();
		}
	}
}

void func_151(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<9> Var5;
	bool bVar14;
	
	unk_0x59B2F61C9D01132B("TimerBars", 0);
	unk_0x59B2F61C9D01132B("Cross", 0);
	if (unk_0xB56F0E1C89B9E069("TimerBars") && unk_0xB56F0E1C89B9E069("Cross"))
	{
		fVar3 = -0.0094f;
		iVar4 = 0;
		while (iVar4 <= (iParam0 - 1))
		{
			(*uParam1)[iVar4 /*9*/] = ((*uParam1)[iVar4 /*9*/] + (fVar3 * IntToFloat(iVar4)));
			if (func_154(iVar4, iParam4))
			{
				switch (iVar4)
				{
					case 0:
						bVar0 = uParam5;
						iVar1 = uParam13;
						iVar2 = uParam21;
						break;
					
					case 1:
						bVar0 = uParam6;
						iVar1 = uParam14;
						iVar2 = uParam22;
						break;
					
					case 2:
						bVar0 = uParam7;
						iVar1 = uParam15;
						iVar2 = uParam23;
						break;
					
					case 3:
						bVar0 = uParam8;
						iVar1 = uParam16;
						iVar2 = uParam24;
						break;
					
					case 4:
						bVar0 = uParam9;
						iVar1 = uParam17;
						iVar2 = uParam25;
						break;
					
					case 5:
						bVar0 = uParam10;
						iVar1 = uParam18;
						iVar2 = uParam26;
						break;
					
					case 6:
						bVar0 = uParam11;
						iVar1 = uParam19;
						iVar2 = uParam27;
						break;
					
					case 7:
						bVar0 = uParam12;
						iVar1 = uParam20;
						iVar2 = uParam28;
						break;
				}
				bVar14 = false;
				if (iVar2 == 2)
				{
					bVar14 = true;
					iVar2 = 1;
				}
				Var5 = { func_153(*(uParam1[iVar4 /*9*/]), bVar0, iParam2, iParam3, iVar1, iVar2) };
				if (bVar14)
				{
					Var5.f_7 = 51;
				}
				func_65("TimerBars", "Circle_checkpoints", &Var5, 0, 0, iParam29, 0);
				if (func_152(iVar4, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37))
				{
					switch (iVar4)
					{
						case 0:
							func_84(uParam1[iVar4 /*9*/], iParam38);
							break;
						
						case 1:
							func_84(uParam1[iVar4 /*9*/], iParam39);
							break;
						
						case 2:
							func_84(uParam1[iVar4 /*9*/], iParam40);
							break;
						
						case 3:
							func_84(uParam1[iVar4 /*9*/], iParam41);
							break;
						
						case 4:
							func_84(uParam1[iVar4 /*9*/], iParam42);
							break;
						
						case 5:
							func_84(uParam1[iVar4 /*9*/], iParam43);
							break;
						
						case 6:
							func_84(uParam1[iVar4 /*9*/], iParam44);
							break;
						
						case 7:
							func_84(uParam1[iVar4 /*9*/], iParam45);
							break;
					}
					func_65("Cross", "Circle_checkpoints_Cross", uParam1[iVar4 /*9*/], 0, 0, iParam29, 0);
				}
			}
			iVar4++;
		}
	}
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (iParam0 == 0 && iParam1 == 1)
	{
		return 1;
	}
	if (iParam0 == 1 && iParam2 == 1)
	{
		return 1;
	}
	if (iParam0 == 2 && iParam3 == 1)
	{
		return 1;
	}
	if (iParam0 == 3 && iParam4 == 1)
	{
		return 1;
	}
	if (iParam0 == 4 && iParam5 == 1)
	{
		return 1;
	}
	if (iParam0 == 5 && iParam6 == 1)
	{
		return 1;
	}
	if (iParam0 == 6 && iParam7 == 1)
	{
		return 1;
	}
	if (iParam0 == 7 && iParam8 == 1)
	{
		return 1;
	}
	return 0;
}

struct<9> func_153(struct<9> Param0, bool bParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<9> Var0;
	
	Var0 = { Param0 };
	if (iParam12 == 0)
	{
		if (bParam9)
		{
			func_84(&Var0, iParam10);
		}
		else
		{
			func_84(&Var0, iParam11);
		}
	}
	else if (bParam9)
	{
		func_84(&Var0, iParam12);
	}
	else
	{
		func_84(&Var0, iParam13);
	}
	if (bParam9 == 0)
	{
	}
	return Var0;
}

int func_154(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	if (iParam0 > iParam1)
	{
		return 0;
	}
	return 1;
}

void func_155(int iParam0)
{
	func_15(&(Global_1356070.f_674[iParam0 /*2*/]));
	func_15(&(Global_1356070.f_695[iParam0 /*2*/]));
}

void func_156(int iParam0)
{
	func_15(&(Global_1356070.f_212[iParam0 /*2*/]));
	func_15(&(Global_1356070.f_233[iParam0 /*2*/]));
}

void func_157(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	
	fVar0 = func_137(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_91(iParam4);
	uParam0->f_1 = (uParam0->f_1 + func_90(uParam7));
	func_159(uParam1, iParam4, fParam5, fParam6);
	func_158(uParam3);
	if (!func_136(fParam5, fParam6))
	{
		func_88(iParam4, -fVar0);
	}
	func_102(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_158(var uParam0)
{
	*uParam0 = 0.851f;
	uParam0->f_1 = 0.075f;
	uParam0->f_2 = 0.001f;
	uParam0->f_3 = 0.009f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 250;
}

void func_159(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_136(fParam2, fParam3))
	{
		fVar0 = (func_135() + func_91(iParam1));
		fVar1 = func_160();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
}

float func_160()
{
	float fVar0;
	
	fVar0 = ((((((((0.919f - 0.081f) + 0.004f) - 0.006f) + 0.05f) - 0.001f) - 0.005f) + 0.065f) - 0.0005f);
	return fVar0;
}

void func_161(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17, bool bParam18, int iParam19, int iParam20, bool bParam21, int iParam22, bool bParam23)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_27(6, iParam0))
	{
		func_162(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, iParam8, fParam9, iParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, bParam18, iParam19, iParam20, bParam21, iParam22, bParam23);
	}
}

void func_162(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, bool bParam11, char* sParam12, int iParam13, float fParam14, int iParam15, int iParam16, int iParam17, bool bParam18, int iParam19, bool bParam20, int iParam21, int iParam22, bool bParam23, int iParam24, int iParam25, bool bParam26, int iParam27, bool bParam28)
{
	struct<8> Var0;
	struct<9> Var9;
	struct<9> Var18;
	struct<9> Var27;
	bool bVar36;
	int iVar37;
	struct<9> Var38;
	bool bVar47;
	float fVar48;
	float fVar49;
	float fVar50;
	float fVar51;
	struct<8> Var52;
	struct<8> Var61;
	int iVar70;
	char* sVar71;
	char* sVar72;
	int iVar73;
	char* sVar74;
	char* sVar75;
	int iVar76;
	
	Global_1356070++;
	if (func_103())
	{
		func_102(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_102(&Var9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_102(&Var18, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_102(&Var27, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (func_85())
		{
			if (bParam23)
			{
				func_167(uParam1, 0);
			}
			else if (bParam11)
			{
				func_138(uParam1, 3);
			}
			else
			{
				func_167(uParam1, 0);
			}
		}
		else if (bParam23)
		{
			func_101(uParam1, 0);
		}
		else if (bParam11)
		{
			func_138(uParam1, 3);
		}
		else
		{
			func_101(uParam1, 0);
		}
		if (Global_2455128 && bParam11)
		{
			if (func_85())
			{
				func_167(uParam1, 0);
			}
			else
			{
				func_101(uParam1, 0);
			}
		}
		if (iParam5 < 1000000)
		{
			if ((unk_0x2DA8A432EC3C3D33() == 8 && fParam14 >= 100f) && unk_0xB3404E397FF56B3B("AMCH_KMHN", sParam12))
			{
				func_100(uParam2, 0, 0);
			}
			else if ((unk_0x2DA8A432EC3C3D33() == 8 || unk_0x2DA8A432EC3C3D33() == 9) && ((iParam5 > 999 || iParam19 > 999) || fParam14 > 1000f))
			{
				func_100(uParam2, 0, 0);
			}
			else if (iParam19 > 99)
			{
				func_99(uParam2, 0, 0);
			}
			else
			{
				func_98(uParam2, 0, 0);
			}
		}
		else if (unk_0x2DA8A432EC3C3D33() == 8 && (unk_0xB3404E397FF56B3B("HUD_CASH", sParam12) || unk_0xB3404E397FF56B3B("HUD_CASH_NEG", sParam12)))
		{
			func_100(uParam2, 0, 0);
		}
		else
		{
			func_99(uParam2, 0, 0);
		}
		func_96(uParam1);
		func_95(uParam2);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_130())));
		func_94(6, iParam0);
		if (Global_1356070 == 1)
		{
			func_93(iParam6);
		}
		func_87(uParam2, uParam3, uParam4, iParam6, uParam1);
		if (iParam22 == 1)
		{
			iParam17 = 2;
			iParam8 = 2;
		}
		func_86(uParam2, iParam8);
		if (iParam9 == 0)
		{
			func_166(iParam0);
		}
		if (iParam16 == 0)
		{
			func_165(iParam0);
		}
		unk_0x59B2F61C9D01132B("TimerBars", 0);
		if (unk_0xB56F0E1C89B9E069("TimerBars"))
		{
			iVar37 = func_73();
			unk_0x38C75B31337B3454(iVar37);
			if (func_62(iParam9, &(Global_1356070.f_86[iParam0 /*2*/]), &(Global_1356070.f_107[iParam0 /*2*/])))
			{
				bVar36 = true;
			}
			else
			{
				bVar36 = false;
			}
			Var27.f_0 = *uParam3;
			Var27.f_1 = uParam3->f_1;
			Var0.f_0 = *uParam3;
			Var0.f_1 = (uParam3->f_1 + 0.001f);
			if (iParam22 == 1)
			{
				Var27.f_0 = (Var27.f_0 + 0.079f);
				Var27.f_1 = (Var27.f_1 + 0.002f);
				Var27.f_2 = (Var27.f_2 + 0.157f);
				Var27.f_3 = (Var27.f_3 + 0.049f);
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			else if (iParam5 < 1000000)
			{
				Var27.f_0 = (Var27.f_0 + 0.079f);
				Var27.f_1 = (Var27.f_1 + 0.008f);
				Var27.f_2 = (Var27.f_2 + 0.157f);
				Var27.f_3 = (Var27.f_3 + 0.036f);
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			else
			{
				Var27.f_0 = (Var27.f_0 + 0.079f);
				Var27.f_1 = (Var27.f_1 + 0.01f);
				Var27.f_2 = (Var27.f_2 + 0.157f);
				Var27.f_3 = (Var27.f_3 + 0.033f);
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			if (func_85())
			{
				Var27.f_0 = (Var27.f_0 + -0.025f);
				Var27.f_2 = (Var27.f_2 + 0.05f);
			}
			Global_1356070.f_5998 = (Global_1356070.f_5998 + Var27.f_3);
			if (iParam16 > 0)
			{
				Var38 = { Var27 };
				if (func_234(&(Global_1356070.f_1045[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_127(Global_1356070.f_1045[iParam0 /*2*/], 1250, 0))
					{
						Global_1356070.f_1066[iParam0] = (Global_1356070.f_1066[iParam0] - 17);
					}
					Var38.f_7 = Global_1356070.f_1066[iParam0];
					if (iParam15 == 2)
					{
						func_84(&Var38, 6);
					}
					else if (iParam15 == 3)
					{
						func_84(&Var38, 18);
					}
					else
					{
						func_84(&Var38, iParam8);
					}
					func_65("TimerBars", "ALL_WHITE_bg", &Var38, 1, 0, iVar37, 0);
				}
			}
			else
			{
				Global_1356070.f_1066[iParam0] = 255;
				func_126(&(Global_1356070.f_1045[iParam0 /*2*/]), 0, 0);
			}
			if (iParam22 == 1)
			{
				func_65("TimerBars", "ALL_WHITE_bg", &Var27, 1, 0, iVar37, 0);
			}
			else
			{
				func_65("TimerBars", "ALL_BLACK_bg", &Var27, 1, 0, iVar37, 0);
			}
			func_120(&Var27, iParam24);
			iVar37 = func_73();
			unk_0x38C75B31337B3454(iVar37);
			func_119(uParam1, iParam17);
			bVar47 = true;
			if (Global_2455128)
			{
				bVar47 = false;
			}
			if (Global_2455129 == 1)
			{
				bVar47 = true;
			}
			func_64(uParam1, 0);
			if (func_85())
			{
				if (bParam11)
				{
					if (unk_0x2DA8A432EC3C3D33() == 9)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.004f);
					}
				}
				else if (func_85())
				{
					if (unk_0x2DA8A432EC3C3D33() == 9)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.008f);
					}
				}
			}
			else if (bParam23)
			{
				uParam3->f_1 = (uParam3->f_1 + 0f);
			}
			else if (bParam11 && Global_2455128 == 0)
			{
				uParam3->f_1 = (uParam3->f_1 + (-0.002f - 0.004f));
			}
			if (iParam22 == 1)
			{
				uParam3->f_1 = (uParam3->f_1 - 0.007f);
				uParam4->f_1 = (uParam4->f_1 - 0.007f);
			}
			if (iParam21 == 2 && unk_0x0BD3CCFB6C6CFA91(sParam7))
			{
				sParam7 = "HUD_ROCKET";
			}
			else if (iParam21 == 4)
			{
				sParam7 = "HUD_BOOST";
			}
			else if (iParam21 == 1)
			{
				sParam7 = "HUD_SPIKES";
			}
			uParam1->f_6 = iParam25;
			uParam2->f_6 = iParam25;
			if (bParam26)
			{
				uParam2->f_6 = 0;
			}
			if (bParam28)
			{
				if (bVar36)
				{
					func_164(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, bVar47);
				}
			}
			else
			{
				func_164(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, bVar47);
			}
			if (iParam22 == 1)
			{
				Var9.f_0 = uParam2->f_9;
				Var9.f_1 = (uParam4->f_1 - 0.0175f);
				Var18.f_0 = uParam2->f_9;
				Var18.f_1 = (uParam4->f_1 + 0.0175f);
				unk_0x59B2F61C9D01132B("MPArrow", 0);
				if (unk_0xB56F0E1C89B9E069("MPArrow"))
				{
					Var9.f_0 = (Var9.f_0 + 0.0095f);
					Var9.f_0 = (Var9.f_0 - 0.015f);
					Var9.f_1 = (Var9.f_1 + 0.019f);
					Var9.f_2 = (Var9.f_2 + 0.01f);
					Var9.f_3 = (Var9.f_3 + 0.01f);
					Var9.f_4 = Var9.f_4;
					Var9.f_5 = Var9.f_5;
					Var9.f_6 = Var9.f_6;
					Var9.f_7 = (Var9.f_7 - 50);
					Var9.f_8 = -90f;
					func_65("MPArrow", "MP_ArrowXLarge", &Var9, 1, 0, iVar37, 0);
					Var18.f_0 = (Var18.f_0 + 0.0095f);
					Var18.f_0 = (Var18.f_0 - 0.015f);
					Var18.f_1 = (Var18.f_1 + 0.019f);
					Var18.f_2 = (Var18.f_2 + 0.01f);
					Var18.f_3 = (Var18.f_3 + 0.01f);
					Var18.f_4 = Var18.f_4;
					Var18.f_5 = Var18.f_5;
					Var18.f_6 = Var18.f_6;
					Var18.f_7 = (Var18.f_7 - 50);
					Var18.f_8 = 90f;
					func_65("MPArrow", "MP_ArrowXLarge", &Var18, 1, 0, iVar37, 0);
				}
			}
			if (bParam18)
			{
				unk_0x59B2F61C9D01132B("CommonMenu", 0);
				if (unk_0xB56F0E1C89B9E069("CommonMenu"))
				{
					fVar48 = 0f;
					if (bParam11 == 1)
					{
						unk_0x54412EEBDB162F5C("STRING");
						unk_0x50B3C23D0902259F(sParam7);
						fVar49 = unk_0x51C2CBAC9E5D95A4(1);
					}
					else
					{
						unk_0x54412EEBDB162F5C(sParam7);
						fVar49 = unk_0x51C2CBAC9E5D95A4(1);
					}
					if (unk_0x2DA8A432EC3C3D33() == 8 && bParam11 == 0)
					{
						fVar50 = (0.153f - 0.072f);
						fVar51 = -0.457f;
					}
					else if (unk_0x2DA8A432EC3C3D33() == 10 && bParam11 == 0)
					{
						fVar50 = ((0.153f - 0.01f) - 0.06f);
						fVar51 = -0.457f;
					}
					else if (unk_0x2DA8A432EC3C3D33() == 9 && bParam11 == 0)
					{
						fVar50 = ((0.153f - 0.012f) - 0.06f);
						fVar51 = -0.457f;
					}
					else
					{
						fVar50 = ((0.153f - 0.037f) - 0.036f);
						fVar51 = (-0.457f + 0.194f);
					}
					fVar50 = (fVar50 + 0.03f);
					if (Global_1356070.f_1088)
					{
						fVar50 = (fVar50 + -0.03f);
					}
					if (unk_0x20551D6D924ED04B() && !unk_0x3CCF948E5BFC63FE())
					{
						fVar50 = (fVar50 + -0.015f);
					}
					if (Global_1356070.f_1089 && Global_1356070.f_1088 == 0)
					{
						fVar50 = (fVar50 + (-0.015f - 0.003f));
					}
					fVar48 = ((fVar51 * fVar49) + fVar50);
					Var0.f_0 = (Var0.f_0 + fVar48);
					Var0.f_0 = (Var0.f_0 - 0.015f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.022f);
					Var0.f_3 = (Var0.f_3 + 0.04f);
					Var0.f_4 += 194;
					Var0.f_5 += 80;
					Var0.f_6 += 80;
					Var0.f_7 = (Var0.f_7 - 50);
					func_65("CommonMenu", "MP_AlertTriangle", &Var0, 1, 0, iVar37, 0);
				}
			}
			if (bVar36)
			{
				if (iParam21 != 0)
				{
					func_163(uParam2);
					Var52.f_0 = ((*uParam4 + 0.145f) + 0.001f);
					if (func_85())
					{
						Var52.f_1 = ((uParam4->f_1 + 0.016f) - 0.006f);
					}
					else
					{
						Var52.f_1 = (uParam4->f_1 + 0.016f);
					}
					Var52.f_2 = (0.016f + 0.003f);
					Var52.f_3 = (0.032f + 0.004f);
					Var52.f_7 = iParam25;
					func_84(&Var52, 1);
					Var61.f_0 = ((*uParam4 + 0.145f) + 0.001f);
					if (func_85())
					{
						Var61.f_1 = ((uParam4->f_1 + 0.016f) - 0.006f);
					}
					else
					{
						Var61.f_1 = (uParam4->f_1 + 0.016f);
					}
					Var61.f_2 = (0.016f + 0.003f);
					Var61.f_3 = (0.032f + 0.004f);
					Var61.f_7 = 255;
					func_84(&Var61, 1);
					if (bParam26)
					{
						Var52.f_7 = 0;
					}
					sVar71 = "";
					iVar73 = 1;
					sVar74 = "";
					iVar76 = 1;
					switch (iParam21)
					{
						case 5:
							Var52.f_3 = (Var52.f_3 + -0.009f);
							Var52.f_2 = (Var52.f_2 + -0.002f);
							if (func_85())
							{
								Var52.f_1 = (Var52.f_1 + 0.0055f);
							}
							else
							{
								Var52.f_1 = (Var52.f_1 + 0.0025f);
							}
							sVar74 = "MPRPSymbol";
							sVar75 = "RP";
							break;
						
						case 2:
							sVar74 = "TimerBars";
							sVar75 = "Rockets";
							break;
						
						case 3:
							sVar74 = "MpSpecialRace";
							sVar75 = "HOMING_ROCKET";
							break;
						
						case 1:
							sVar74 = "TimerBars";
							sVar75 = "Spikes";
							break;
						
						case 4:
							sVar74 = "TimerBars";
							sVar75 = "Boost";
							break;
						
						case 6:
							sVar74 = "CrossTheLine";
							sVar75 = "Timer_LargeTick_32";
							iVar76 = 18;
							break;
						
						case 7:
							sVar74 = "CrossTheLine";
							sVar75 = "Timer_LargeCross_32";
							iVar76 = 6;
							break;
						
						case 8:
							sVar74 = "TimerBar_Icons";
							sVar75 = "Pickup_Beast";
							iVar76 = 118;
							break;
						
						case 9:
							sVar74 = "MPSpecialRace";
							sVar75 = "MACHINE_GUN";
							break;
						
						case 10:
							sVar74 = "TimerBar_Icons";
							sVar75 = "Pickup_Random";
							iVar76 = 118;
							break;
						
						case 11:
							sVar74 = "TimerBar_Icons";
							sVar75 = "Pickup_Slow_Time";
							break;
						
						case 12:
							sVar74 = "TimerBar_Icons";
							sVar75 = "Pickup_Swap";
							iVar76 = 118;
							break;
						
						case 13:
							sVar74 = "TimerBar_Icons";
							sVar75 = "Pickup_Testosterone";
							iVar76 = 118;
							break;
						
						case 14:
							sVar74 = "TimerBar_Icons";
							sVar75 = "Pickup_Thermal";
							iVar76 = 118;
							break;
						
						case 15:
							sVar74 = "TimerBar_Icons";
							sVar75 = "Pickup_Weed";
							iVar76 = 118;
							break;
						
						case 16:
							sVar74 = "TimerBar_Icons";
							sVar75 = "Pickup_Hidden";
							iVar76 = 118;
							break;
						
						case 17:
						case 18:
							if (iParam27 != func_59())
							{
								iVar70 = func_77(iParam27);
								if (iVar70 != 0)
								{
									sVar74 = unk_0x7EBBB7725601519D(iVar70);
									sVar75 = unk_0x7EBBB7725601519D(iVar70);
								}
							}
							if (func_85())
							{
								Var52.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
							}
							else
							{
								Var52.f_1 = (uParam4->f_1 + 0.0185f);
							}
							Var52.f_2 = (0.016f + 0.004f);
							Var52.f_3 = (0.032f + 0.002f);
							if (iParam21 == 18)
							{
								if (func_85())
								{
									Var61.f_1 = (uParam4->f_1 + 0.016f);
								}
								else
								{
									Var61.f_1 = (uParam4->f_1 + 0.019f);
								}
								Var61.f_2 = (0.016f + 0.004f);
								Var61.f_3 = (0.032f + 0.002f);
								sVar71 = "timerbar_sr";
								sVar72 = "timer_cross";
								iVar73 = iParam17;
								Var52.f_7 = 127;
							}
							break;
					}
					if (!unk_0x0BD3CCFB6C6CFA91(sVar74))
					{
						unk_0x59B2F61C9D01132B(sVar74, 0);
						if (unk_0xB56F0E1C89B9E069(sVar74))
						{
							func_84(&Var52, iVar76);
							func_65(sVar74, sVar75, &Var52, 1, 0, 4, 0);
						}
					}
					if (iParam21 == 18)
					{
						if (!unk_0x0BD3CCFB6C6CFA91(sVar71))
						{
							unk_0x59B2F61C9D01132B(sVar71, 0);
							if (unk_0xB56F0E1C89B9E069(sVar71))
							{
								func_84(&Var61, iVar73);
								func_65(sVar71, sVar72, &Var61, 1, 0, 4, 0);
							}
						}
					}
				}
				func_64(uParam2, 0);
				iVar37 = func_73();
				unk_0x38C75B31337B3454(iVar37);
				if ((iParam21 == 0 || iParam21 == 5) || iParam21 == 9)
				{
					if (bParam20)
					{
						func_56(uParam4, uParam2, "???", "", 1, 2);
					}
					else if (iParam21 == 5)
					{
						if (iParam13 == 0)
						{
							func_53(uParam4, uParam2, "HUD_KSMULTI", iParam5, 2);
						}
						else
						{
							func_51(uParam4, uParam2, "HUD_KSMULTI", fParam14, Global_2456617, 2);
						}
					}
					else if (func_55(sParam12))
					{
						if (iParam19 == 0)
						{
							if (iParam13 == 0)
							{
								func_53(uParam4, uParam2, "NUMBER", iParam5, 2);
							}
							else
							{
								func_51(uParam4, uParam2, "NUMBER", fParam14, Global_2456617, 2);
							}
						}
						else
						{
							func_49(uParam4, uParam2, "TIMER_DASHES", iParam5, iParam19, 2, 0);
						}
					}
					else if (unk_0xB3404E397FF56B3B("HUD_CASH", sParam12) || unk_0xB3404E397FF56B3B("HUD_CASH_S", sParam12))
					{
						sParam12 = "HUD_CASH_S";
						*uParam2 = 5;
						func_64(uParam2, 0);
						func_44(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (unk_0xB3404E397FF56B3B("HUD_CASH_NEG", sParam12) || unk_0xB3404E397FF56B3B("HUD_CASH_NEG_S", sParam12))
					{
						*uParam2 = 5;
						func_64(uParam2, 0);
						sParam12 = "HUD_CASH_NEG_S";
						func_44(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (iParam13 == 0)
					{
						func_53(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else
					{
						func_51(uParam4, uParam2, sParam12, fParam14, Global_2456617, 2);
					}
				}
			}
			func_43();
		}
	}
}

void func_163(var uParam0)
{
	uParam0->f_9 = (((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) - 0.002f) - 0.001f);
}

void func_164(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 == 1)
	{
		if (bParam7)
		{
			func_56(uParam1, uParam0, sParam2, "", iParam3, 2);
		}
		else
		{
			func_56(uParam1, uParam0, sParam2, "", iParam4, 2);
		}
	}
	else if (iParam5 == -1)
	{
		func_117(uParam1, uParam0, sParam2, 0, 1);
	}
	else
	{
		uParam1->f_1 = (uParam1->f_1 + (-0.003f - 0.001f));
		func_53(uParam1, uParam0, sParam2, iParam5, 2);
	}
}

void func_165(int iParam0)
{
	func_15(&(Global_1356070.f_548[iParam0 /*2*/]));
	func_15(&(Global_1356070.f_569[iParam0 /*2*/]));
}

void func_166(int iParam0)
{
	func_15(&(Global_1356070.f_86[iParam0 /*2*/]));
	func_15(&(Global_1356070.f_107[iParam0 /*2*/]));
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.416f + 0.089f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_168(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, var uParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21, int iParam22, int iParam23, int iParam24)
{
	var uVar0;
	var uVar11;
	var uVar13;
	
	if (func_27(0, iParam0))
	{
		uVar13 = 4;
		func_169(iParam0, &uVar0, &uVar11, &uVar13, iParam1, iParam2, 1, sParam3, iParam4, iParam9, bParam8, iParam5, fParam6, fParam7, uParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, iParam18, bParam19, iParam20, bParam21, iParam22, iParam23, iParam24);
	}
}

void func_169(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, float fParam12, float fParam13, var uParam14, int iParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, int iParam20, int iParam21, int iParam22, bool bParam23, int iParam24, bool bParam25, int iParam26, int iParam27, int iParam28)
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;
	float fVar20;
	float fVar21;
	struct<8> Var22;
	
	Global_1356070++;
	if (func_103())
	{
		if (iParam15 == 2)
		{
		}
		func_94(0, iParam0);
		if (func_85())
		{
			if (bParam17)
			{
				func_179(uParam1, 0);
			}
			else
			{
				func_139(uParam1, 0);
			}
		}
		else if (bParam19)
		{
			func_101(uParam1, 0);
		}
		else if (bParam10)
		{
			func_138(uParam1, 3);
		}
		else if (bParam17)
		{
			func_178(uParam1, 0);
		}
		else
		{
			func_101(uParam1, 0);
		}
		if (Global_1356070 == 1)
		{
			func_93(iParam6);
		}
		func_177(uParam2, uParam3, &Var0, iParam6, fParam12, fParam13, uParam1, bParam17);
		func_96(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_130())));
		if (iParam11 == 0)
		{
			func_129(iParam0);
		}
		if (iParam16 == 0)
		{
			func_128(iParam0);
		}
		if (func_62(iParam11, &(Global_1356070.f_296[iParam0 /*2*/]), &(Global_1356070.f_317[iParam0 /*2*/])))
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		unk_0x59B2F61C9D01132B("TimerBars", 0);
		if (unk_0xB56F0E1C89B9E069("TimerBars"))
		{
			iVar10 = func_73();
			unk_0x38C75B31337B3454(iVar10);
			if (!func_136(fParam12, fParam13))
			{
				Var0.f_0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (bParam17)
				{
					Var0.f_0 = (Var0.f_0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0.f_0 = (Var0.f_0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_85())
				{
					Var0.f_0 = (Var0.f_0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1356070.f_5998 = (Global_1356070.f_5998 + Var0.f_3);
				if (iParam16 > 0)
				{
					Var11 = { Var0 };
					if (func_234(&(Global_1356070.f_821[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_127(Global_1356070.f_821[iParam0 /*2*/], 1250, 0))
						{
							Global_1356070.f_842[iParam0] = (Global_1356070.f_842[iParam0] - 17);
						}
						Var11.f_7 = Global_1356070.f_842[iParam0];
						func_84(&Var11, iParam8);
						func_65("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
					}
				}
				else
				{
					Global_1356070.f_842[iParam0] = 255;
					func_126(&(Global_1356070.f_821[iParam0 /*2*/]), 0, 0);
				}
				func_65("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			}
			func_120(&Var0, iParam21);
			if (func_85())
			{
				if (bParam17)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.01f);
				}
				else if (bParam10)
				{
					if (unk_0x2DA8A432EC3C3D33() == 9)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (bParam17 == 0)
				{
					if (unk_0x2DA8A432EC3C3D33() == 9)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (unk_0x2DA8A432EC3C3D33() == 9)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.012f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.008f);
				}
			}
			else if (bParam17)
			{
				uParam2->f_1 = (uParam2->f_1 + ((-0.01f + 0.0022f) + 0.001f));
			}
			else if (bParam10)
			{
				uParam2->f_1 = (uParam2->f_1 + (-0.005f + 0.001f));
				uParam2->f_1 = (uParam2->f_1 + -0.002f);
			}
			iVar10 = func_73();
			unk_0x38C75B31337B3454(iVar10);
			if (!func_136(fParam12, fParam13))
			{
				if (bParam19)
				{
					func_119(uParam1, iParam8);
					func_64(uParam1, 0);
					func_56(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else if (bParam10 == 1)
				{
					func_119(uParam1, iParam8);
					func_64(uParam1, 0);
					func_56(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else
				{
					func_64(uParam1, 0);
					if (iParam9 == -1)
					{
						func_117(uParam2, uParam1, sParam7, 0, 1);
					}
					else
					{
						func_53(uParam2, uParam1, sParam7, iParam9, 2);
					}
				}
			}
			if (bParam23)
			{
				if (!func_136(fParam12, fParam13))
				{
					fVar20 = (func_135() + func_91(iParam6));
					fVar21 = func_134();
				}
				else
				{
					fVar20 = fParam13;
					fVar21 = fParam12;
				}
				Var22.f_1 = (fVar20 + 0.0486f);
				Var22.f_0 = (fVar21 - 0.0505f);
				Var22.f_2 = 0.18f;
				Var22.f_3 = 0.01f;
				Var22.f_4 = 255;
				Var22.f_5 = 255;
				Var22.f_6 = 255;
				Var22.f_7 = 255;
				func_84(&Var22, iParam24);
				func_65("TimerBars", "TPBar", &Var22, 0, 0, iVar10, 0);
			}
			iVar10 = func_73();
			unk_0x38C75B31337B3454(iVar10);
			if (bVar9)
			{
				if (bParam17)
				{
					func_176(iParam4, iParam5, uParam3, iParam8, uParam14, iVar10, iParam20);
				}
				else
				{
					func_170(iParam4, iParam5, uParam3, iParam8, uParam14, iVar10, &(Global_1356070.f_800[iParam0 /*2*/]), iParam18, iParam20, bParam25, iParam26, iParam27, iParam28);
				}
			}
			func_43();
		}
	}
}

void func_170(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12)
{
	struct<9> Var0[2];
	float fVar19;
	char* sVar20;
	
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.004f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.004f;
	unk_0x59B2F61C9D01132B("TimerBars", 0);
	if (iParam8 != 0)
	{
		unk_0x59B2F61C9D01132B("timerbar_lines", 0);
	}
	if (unk_0xB56F0E1C89B9E069("TimerBars"))
	{
		func_112(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_112(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_84(uParam2[1 /*9*/], iParam3);
		if (bParam9)
		{
			func_84(uParam2[3 /*9*/], 3);
		}
		else
		{
			func_84(uParam2[3 /*9*/], iParam3);
		}
		if (iParam10 != 0 && iParam0 < iParam10)
		{
			func_84(uParam2[1 /*9*/], 6);
		}
		if (iParam12 > 0)
		{
			if (!func_175(uParam6))
			{
				func_174(uParam6, 0, 0);
			}
			else if (func_234(uParam6, iParam12, 0))
			{
				func_126(uParam6, 0, 0);
			}
			func_171(uParam2[1 /*9*/], iParam3, iParam11, iParam12, *uParam6);
		}
		fVar19 = ((unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1)) * 100f);
		unk_0x38C75B31337B3454(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_65("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		if (bParam9)
		{
			func_84(uParam2[3 /*9*/], 3);
		}
		else
		{
			func_84(uParam2[3 /*9*/], iParam3);
		}
		(uParam2[3 /*9*/])->f_7 = 51;
		func_65("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_114(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4);
		unk_0x38C75B31337B3454(iParam5);
		func_65("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (iParam8 != 0)
		{
			unk_0x59B2F61C9D01132B("timerbar_lines", 0);
			if (unk_0xB56F0E1C89B9E069("timerbar_lines"))
			{
				if (iParam8 != 10)
				{
					sVar20 = "LineMarker90_128";
					switch (iParam8)
					{
						case 1:
							sVar20 = "LineMarker10_128";
							break;
						
						case 2:
							sVar20 = "LineMarker20_128";
							break;
						
						case 3:
							sVar20 = "LineMarker30_128";
							break;
						
						case 4:
							sVar20 = "LineMarker40_128";
							break;
						
						case 5:
							sVar20 = "LineMarker50_128";
							break;
						
						case 6:
							sVar20 = "LineMarker60_128";
							break;
						
						case 7:
							sVar20 = "LineMarker70_128";
							break;
						
						case 8:
							sVar20 = "LineMarker80_128";
							break;
						
						case 9:
							sVar20 = "LineMarker90_128";
							break;
					}
					(uParam2[3 /*9*/])->f_7 = 255;
					func_84(uParam2[3 /*9*/], 2);
					func_65("timerbar_lines", sVar20, uParam2[3 /*9*/], 0, 0, iParam5, 0);
				}
				else
				{
					(uParam2[3 /*9*/])->f_7 = 255;
					func_84(uParam2[3 /*9*/], 2);
					func_65("timerbar_lines", "LineMarker20_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_65("timerbar_lines", "LineMarker40_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_65("timerbar_lines", "LineMarker60_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_65("timerbar_lines", "LineMarker80_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
				}
			}
		}
		unk_0x38C75B31337B3454(iParam5);
		if (iParam7 > 0 && fVar19 >= IntToFloat(iParam7))
		{
			func_84(uParam2[1 /*9*/], 6);
			func_114(*(uParam2[0 /*9*/]), unk_0xBBDA792448DB5A89(iParam7), uParam2[1 /*9*/], 1, 1, uParam4);
			unk_0x38C75B31337B3454(iParam5);
			func_65("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
			unk_0x38C75B31337B3454(iParam5);
		}
		unk_0x38C75B31337B3454(iParam5);
	}
}

void func_171(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
	float fVar9;
	
	iVar8 = func_173(&uParam4, 0, 0);
	if ((iParam3 / 2) > iVar8)
	{
		fVar9 = (unk_0xBBDA792448DB5A89((iVar8 / 2)) / unk_0xBBDA792448DB5A89((iParam3 / 2)));
		unk_0xB922891BFD232C45(iParam1, &iVar0, &iVar1, &iVar2, &iVar3);
		unk_0xB922891BFD232C45(iParam2, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	else
	{
		fVar9 = (unk_0xBBDA792448DB5A89(iVar8) / unk_0xBBDA792448DB5A89(iParam3));
		unk_0xB922891BFD232C45(iParam2, &iVar0, &iVar1, &iVar2, &iVar3);
		unk_0xB922891BFD232C45(iParam1, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	uParam0->f_4 = unk_0xF34EE736CF047844(func_172(unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(iVar4), fVar9));
	uParam0->f_5 = unk_0xF34EE736CF047844(func_172(unk_0xBBDA792448DB5A89(iVar1), unk_0xBBDA792448DB5A89(iVar5), fVar9));
	uParam0->f_6 = unk_0xF34EE736CF047844(func_172(unk_0xBBDA792448DB5A89(iVar2), unk_0xBBDA792448DB5A89(iVar6), fVar9));
	uParam0->f_7 = unk_0xF34EE736CF047844(func_172(unk_0xBBDA792448DB5A89(iVar3), unk_0xBBDA792448DB5A89(iVar7), fVar9));
}

float func_172(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

var func_173(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x27CA09C6DFAB1E79() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0);
		}
		else
		{
			return unk_0xBC0BAC39A2995602(unk_0x51A193745FDE917D(), *uParam0);
		}
	}
	return unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0);
}

void func_174(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x27CA09C6DFAB1E79() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x898811EA80D35DE2();
			}
			else
			{
				*uParam0 = unk_0x51A193745FDE917D();
			}
		}
		else
		{
			*uParam0 = unk_0x31CD6E9F83C10233();
		}
		uParam0->f_1 = 1;
	}
}

bool func_175(var uParam0)
{
	return uParam0->f_1;
}

void func_176(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6)
{
	struct<9> Var0[2];
	float fVar19;
	char* sVar20;
	
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.016f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.016f;
	unk_0x59B2F61C9D01132B("TimerBars", 0);
	if (iParam6 != 0)
	{
		unk_0x59B2F61C9D01132B("timerbar_lines", 0);
	}
	if (unk_0xB56F0E1C89B9E069("TimerBars"))
	{
		func_112(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_112(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_84(uParam2[1 /*9*/], iParam3);
		func_84(uParam2[3 /*9*/], iParam3);
		fVar19 = ((unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1)) * 100f);
		unk_0x38C75B31337B3454(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_65("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_84(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_65("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_114(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4);
		unk_0x38C75B31337B3454(iParam5);
		func_65("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (iParam6 != 0)
		{
			unk_0x59B2F61C9D01132B("timerbar_lines", 0);
			if (unk_0xB56F0E1C89B9E069("timerbar_lines"))
			{
				sVar20 = "LineMarker90_128";
				switch (iParam6)
				{
					case 1:
						sVar20 = "LineMarker10_128";
						break;
					
					case 2:
						sVar20 = "LineMarker20_128";
						break;
					
					case 3:
						sVar20 = "LineMarker30_128";
						break;
					
					case 4:
						sVar20 = "LineMarker40_128";
						break;
					
					case 5:
						sVar20 = "LineMarker50_128";
						break;
					
					case 6:
						sVar20 = "LineMarker60_128";
						break;
					
					case 7:
						sVar20 = "LineMarker70_128";
						break;
					
					case 8:
						sVar20 = "LineMarker80_128";
						break;
					
					case 9:
						sVar20 = "LineMarker90_128";
						break;
				}
				(uParam2[1 /*9*/])->f_7 = 255;
				func_84(uParam2[1 /*9*/], 2);
				func_65("timerbar_lines", sVar20, uParam2[1 /*9*/], 0, 0, iParam5, 0);
			}
		}
		unk_0x38C75B31337B3454(iParam5);
		unk_0x38C75B31337B3454(iParam5);
	}
}

void func_177(var uParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7)
{
	float fVar0;
	
	fVar0 = func_137(bParam7, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_91(iParam3);
	uParam0->f_1 = (uParam0->f_1 + func_90(uParam6));
	func_133(uParam1, iParam3, fParam4, fParam5);
	if (!func_136(fParam4, fParam5))
	{
		func_88(iParam3, -fVar0);
	}
	func_102(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_178(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) - 0.106f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 21;
}

void func_179(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) + 0.086f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

void func_180(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21)
{
	var uVar0;
	var uVar11;
	var uVar13;
	var uVar113;
	var uVar124;
	var uVar126;
	
	if (func_27(1, iParam0))
	{
		uVar13 = 11;
		func_181(iParam0, &uVar0, &uVar11, &uVar13, &uVar126, &uVar113, &uVar124, iParam1, iParam2, 1, sParam3, iParam4, iParam5, bParam6, iParam7, fParam8, fParam9, iParam10, iParam11, 1, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam19, iParam20, iParam21);
	}
}

void func_181(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, bool bParam13, int iParam14, float fParam15, float fParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29)
{
	struct<9> Var0;
	struct<2> Var9;
	struct<3> Var11;
	bool bVar22;
	int iVar23;
	int iVar24;
	struct<9> Var25;
	
	Global_1356070++;
	if (func_103())
	{
		if (iParam17 == 2)
		{
		}
		func_94(1, iParam0);
		if (func_85())
		{
			func_139(uParam1, 0);
		}
		else if (bParam13)
		{
			func_138(uParam1, 3);
		}
		else
		{
			func_101(uParam1, 0);
		}
		func_101(&Var11, 0);
		Var11.f_2 = (Var11.f_2 + (0.166f + 0.095f));
		if (Global_1356070 == 1)
		{
			func_93(iParam9);
		}
		func_189(uParam5, 0, 0);
		func_95(uParam5);
		func_64(uParam5, 0);
		iVar23 = 0;
		if (iParam20 > 0)
		{
			iVar23 = 1;
		}
		func_187(iParam8, uParam2, uParam3, &Var0, uParam6, uParam5, uParam4, iParam9, fParam15, fParam16, uParam1, iVar23);
		Var9.f_0 = *uParam2;
		Var9.f_1 = uParam2->f_1;
		Var9.f_1 = (Var9.f_1 + (-0.006f - 0.007f));
		func_96(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_130())));
		func_186(&Var11);
		if (iParam14 == 0)
		{
			func_185(iParam0);
		}
		if (iParam18 == 0)
		{
			func_184(iParam0);
		}
		unk_0x59B2F61C9D01132B("TimerBars", 0);
		if (unk_0xB56F0E1C89B9E069("TimerBars"))
		{
			iVar24 = func_73();
			unk_0x38C75B31337B3454(iVar24);
			if (func_62(iParam14, &(Global_1356070.f_254[iParam0 /*2*/]), &(Global_1356070.f_275[iParam0 /*2*/])))
			{
				bVar22 = true;
			}
			else
			{
				bVar22 = false;
			}
			if (!func_136(fParam15, fParam16))
			{
				Var0.f_0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (iParam8 < 9 && iParam20 == 0)
				{
					Var0.f_0 = (Var0.f_0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0.f_0 = (Var0.f_0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_85())
				{
					Var0.f_0 = (Var0.f_0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1356070.f_5998 = (Global_1356070.f_5998 + Var0.f_3);
				if ((iParam7 == iParam8 && iParam7 > 0) || iParam18 > 0)
				{
					Var25 = { Var0 };
					if (func_234(&(Global_1356070.f_1013[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_127(Global_1356070.f_1013[iParam0 /*2*/], 1250, 0))
						{
							Global_1356070.f_1034[iParam0] = (Global_1356070.f_1034[iParam0] - 17);
						}
						Var25.f_7 = Global_1356070.f_1034[iParam0];
						func_84(&Var25, iParam11);
						func_65("TimerBars", "ALL_WHITE_bg", &Var25, 1, 0, iVar24, 0);
					}
				}
				else
				{
					Global_1356070.f_1034[iParam0] = 255;
					func_126(&(Global_1356070.f_1013[iParam0 /*2*/]), 0, 0);
				}
				func_65("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar24, 0);
			}
			func_120(&Var0, iParam29);
			if (bParam13)
			{
				if (unk_0x2DA8A432EC3C3D33() == 9)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
					if (func_85() == 0)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.002f);
					}
				}
			}
			else if (func_85())
			{
				if (unk_0x2DA8A432EC3C3D33() == 9)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
				}
			}
			iVar24 = func_73();
			unk_0x38C75B31337B3454(iVar24);
			if (!func_136(fParam15, fParam16))
			{
				func_64(uParam1, 0);
				if (bParam13 == 1)
				{
					func_56(uParam2, uParam1, sParam10, "", 1, 2);
				}
				else if (iParam12 == -1)
				{
					func_117(uParam2, uParam1, sParam10, 0, 1);
				}
				else
				{
					func_53(uParam2, uParam1, sParam10, iParam12, 2);
				}
			}
			if (iParam20 > 0)
			{
				func_53(&Var9, &Var11, "HUD_MULTSMAL", iParam20, 2);
			}
			if (bVar22)
			{
				func_182(iParam7, iParam8, uParam3, uParam5, uParam6, iParam11, iVar24, bParam19, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28);
			}
			func_43();
		}
	}
}

void func_182(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	float fVar0;
	int iVar1;
	char* sVar2;
	
	if (iParam1 < 9)
	{
		fVar0 = -0.0094f;
		unk_0x59B2F61C9D01132B("TimerBars", 0);
		if (unk_0xB56F0E1C89B9E069("TimerBars"))
		{
			iVar1 = 0;
			while (iVar1 <= (iParam1 - 1))
			{
				(*uParam2)[iVar1 /*9*/] = ((*uParam2)[iVar1 /*9*/] + (fVar0 * IntToFloat(iVar1)));
				if ((iParam1 - iVar1) > iParam0)
				{
					func_84(uParam2[iVar1 /*9*/], iParam5);
					(uParam2[iVar1 /*9*/])->f_7 = 51;
					func_65("TimerBars", "Circle_checkpoints_Outline", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
				}
				else
				{
					func_84(uParam2[iVar1 /*9*/], iParam5);
					func_65("TimerBars", "Circle_checkpoints", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					if (func_152(iVar1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15))
					{
						func_84(uParam2[iVar1 /*9*/], 2);
						func_65("Cross", "Circle_checkpoints_Cross", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					}
				}
				iVar1++;
			}
		}
	}
	else if (iParam5 == 1)
	{
		func_49(uParam4, uParam3, "TIMER_DASHES", iParam0, iParam1, 2, 0);
	}
	else
	{
		func_183(uParam3);
		if (bParam7)
		{
			unk_0x59B2F61C9D01132B("TimerBars", 0);
			if (unk_0xB56F0E1C89B9E069("TimerBars"))
			{
				(*uParam2)[0 /*9*/] = ((*uParam2)[0 /*9*/] + (0.058f - 0.06f));
				(uParam2[0 /*9*/])->f_1 = ((uParam2[0 /*9*/])->f_1 + -0.005f);
				(uParam2[0 /*9*/])->f_2 = ((uParam2[0 /*9*/])->f_2 + ((0.003f - 0.005f) + 0.002f));
				(uParam2[0 /*9*/])->f_3 = ((uParam2[0 /*9*/])->f_3 + (0.009f - 0.01f));
				func_84(uParam2[0 /*9*/], iParam5);
				func_65("TimerBars", "Circle_checkpoints_Big", uParam2[0 /*9*/], 0, 0, iParam6, 0);
			}
		}
		sVar2 = "TIMER_DASHES";
		if ((bParam7 == 1 && iParam0 > 99) && iParam1 > 99)
		{
			sVar2 = "TIMER_DASHES";
		}
		func_49(uParam4, uParam3, sVar2, iParam0, iParam1, 2, 0);
	}
}

void func_183(var uParam0)
{
	uParam0->f_9 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f);
}

void func_184(int iParam0)
{
	func_15(&(Global_1356070.f_716[iParam0 /*2*/]));
	func_15(&(Global_1356070.f_737[iParam0 /*2*/]));
}

void func_185(int iParam0)
{
	func_15(&(Global_1356070.f_254[iParam0 /*2*/]));
	func_15(&(Global_1356070.f_275[iParam0 /*2*/]));
	Global_1356070.f_1559.f_205[iParam0] = -1;
}

void func_186(var uParam0)
{
	float fVar0;
	
	fVar0 = (((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.037f) + 0.003f);
	uParam0->f_9 = fVar0;
}

void func_187(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, float fParam8, float fParam9, var uParam10, int iParam11)
{
	float fVar0;
	
	fVar0 = func_92(uParam5);
	if (iParam0 < 9)
	{
		fVar0 = func_137(iParam11, 0);
	}
	*uParam1 = 0.795f;
	uParam1->f_1 = func_91(iParam7);
	uParam1->f_1 = (uParam1->f_1 + func_90(uParam10));
	*uParam4 = 0.795f;
	uParam4->f_1 = (uParam1->f_1 + func_89(uParam5));
	func_188(uParam2, iParam7, fParam8, fParam9);
	func_158(uParam6);
	if (!func_136(fParam8, fParam9))
	{
		func_88(iParam7, -fVar0);
	}
	func_102(uParam3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_188(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_136(fParam2, fParam3))
	{
		fVar0 = (func_135() + func_91(iParam1));
		fVar1 = func_160();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
	(*uParam0)[8 /*9*/] = fVar1;
	(uParam0[8 /*9*/])->f_1 = fVar0;
	(uParam0[8 /*9*/])->f_2 = 0.012f;
	(uParam0[8 /*9*/])->f_3 = 0.023f;
	(uParam0[8 /*9*/])->f_4 = 0;
	(uParam0[8 /*9*/])->f_5 = 0;
	(uParam0[8 /*9*/])->f_6 = 0;
	(uParam0[8 /*9*/])->f_7 = 250;
	(*uParam0)[9 /*9*/] = fVar1;
	(uParam0[9 /*9*/])->f_1 = fVar0;
	(uParam0[9 /*9*/])->f_2 = 0.012f;
	(uParam0[9 /*9*/])->f_3 = 0.023f;
	(uParam0[9 /*9*/])->f_4 = 0;
	(uParam0[9 /*9*/])->f_5 = 0;
	(uParam0[9 /*9*/])->f_6 = 0;
	(uParam0[9 /*9*/])->f_7 = 250;
}

void func_189(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_190(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_27(5, iParam0))
	{
		func_162(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam10, 0, iParam2, 0, 0, 0, 0, iParam11, 255, 0, 0, 0);
	}
}

void func_191(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_27(4, iParam0))
	{
		func_162(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam12, bParam10, iParam2, 0, 0, 0, bParam11, iParam13, iParam14, 0, 0, bParam15);
	}
}

void func_192(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_27(3, iParam0))
	{
		func_162(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, 0, 0f, iParam10, iParam11, iParam8, 0, 0, bParam9, 0, 0, 0, iParam12, 255, 0, 0, 0);
	}
}

void func_193(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, var uParam13, bool bParam14, int iParam15, int iParam16, bool bParam17)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar33;
	var uVar35;
	var uVar37;
	
	if (func_27(7, iParam0))
	{
		func_194(iParam0, &uVar0, &uVar11, &uVar22, &uVar33, &uVar35, &uVar37, iParam1, 1, iParam3, iParam4, uParam2, iParam6, iParam5, iParam7, iParam8, bParam9, iParam10, iParam11, bParam12, uParam13, bParam14, iParam15, iParam16, bParam17);
	}
}

void func_194(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, var uParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18, bool bParam19, var uParam20, bool bParam21, int iParam22, int iParam23, bool bParam24)
{
	var uVar0;
	var uVar11;
	struct<9> Var13;
	bool bVar22;
	int iVar23;
	struct<8> Var24;
	struct<9> Var33;
	
	Global_1356070++;
	if (iParam17 == 2)
	{
	}
	func_102(&Var13, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	func_94(7, iParam0);
	if (bParam21)
	{
		func_101(uParam1, 0);
	}
	else if (bParam16)
	{
		func_138(uParam1, 3);
	}
	else if (func_85())
	{
		func_167(uParam1, 0);
	}
	else
	{
		func_101(uParam1, 0);
	}
	func_208(&uVar0, 0);
	switch (iParam13)
	{
		case 1:
		case 0:
		case 5:
			if (bParam19)
			{
				func_207(uParam3, 0);
				func_189(uParam2, 0, 0);
			}
			else
			{
				func_207(uParam3, 0);
				func_189(uParam2, 0, 5);
			}
			func_95(uParam2);
			func_95(uParam3);
			break;
		
		case 2:
			func_189(uParam2, 0, 0);
			func_95(&uVar0);
			func_95(uParam3);
			func_206(uParam2);
			break;
		
		case 3:
			func_189(uParam2, 0, 0);
			func_95(&uVar0);
			func_95(uParam3);
			func_206(uParam2);
			break;
		
		case 4:
			func_189(uParam3, 0, 0);
			if (bParam19)
			{
				func_189(uParam2, 0, 0);
			}
			else
			{
				func_189(uParam2, 0, 5);
			}
			func_95(uParam2);
			func_95(uParam3);
			break;
	}
	func_96(uParam1);
	if (Global_1356070.f_1088 == 0 && Global_1356070.f_1089 == 0)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = (uParam1->f_9 + -0.016f);
			if (func_85())
			{
				uParam1->f_9 = (uParam1->f_9 + -0.008f);
			}
		}
	}
	else if (Global_1356070.f_1088 == 0 && Global_1356070.f_1089 == 1)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = (uParam1->f_9 + 0f);
			if (func_85())
			{
				uParam1->f_9 = (uParam1->f_9 + -0.009f);
			}
		}
	}
	if (Global_1356070 == 1)
	{
		func_93(iParam8);
	}
	func_205(uParam2, uParam4, uParam5, uParam6, iParam8, uParam1, &uVar0, &uVar11);
	uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_130())));
	func_86(uParam2, iParam12);
	if (iParam14 == 0)
	{
		func_204(iParam0);
	}
	if (iParam18 == 0)
	{
		func_203(iParam0);
	}
	unk_0x59B2F61C9D01132B("TimerBars", 0);
	if (unk_0xB56F0E1C89B9E069("TimerBars"))
	{
		iVar23 = func_73();
		unk_0x38C75B31337B3454(iVar23);
		if (func_62(iParam14, &(Global_1356070.f_170[iParam0 /*2*/]), &(Global_1356070.f_191[iParam0 /*2*/])))
		{
			bVar22 = true;
		}
		else
		{
			bVar22 = false;
		}
		Var13.f_0 = *uParam4;
		Var13.f_1 = uParam4->f_1;
		if (Global_1356070.f_1081 == 1)
		{
			Var13.f_0 = (Var13.f_0 + -0.113f);
		}
		switch (iParam13)
		{
			case 1:
			case 0:
			case 5:
				Var13.f_0 = (Var13.f_0 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 2:
				Var13.f_0 = (Var13.f_0 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 3:
				Var13.f_0 = (Var13.f_0 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 4:
				Var13.f_0 = (Var13.f_0 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
		}
		Var24.f_0 = ((*uParam5 + 0.145f) + 0.001f);
		if (func_85())
		{
			Var24.f_1 = ((uParam5->f_1 + 0.019f) - 0.006f);
		}
		else
		{
			Var24.f_1 = (uParam5->f_1 + 0.019f);
		}
		Var24.f_2 = (0.016f + 0.003f);
		Var24.f_3 = (0.032f + 0.004f);
		Var24.f_7 = 255;
		func_84(&Var24, 1);
		Var24.f_0 = (uParam1->f_9 - ((uParam2->f_9 - uParam1->f_9) / 8f));
		if (func_85())
		{
			Var24.f_0 = (Var24.f_0 - 0.003f);
		}
		switch (iParam23)
		{
			case 5:
				Var24.f_3 = (Var24.f_3 + -0.009f);
				Var24.f_2 = (Var24.f_2 + -0.002f);
				if (func_85())
				{
					Var24.f_1 = (Var24.f_1 + 0.0055f);
				}
				else
				{
					Var24.f_1 = (Var24.f_1 + 0.0025f);
				}
				unk_0x59B2F61C9D01132B("MPRPSymbol", 0);
				if (unk_0xB56F0E1C89B9E069("MPRPSymbol"))
				{
					func_65("MPRPSymbol", "RP", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 2:
				unk_0x59B2F61C9D01132B("TimerBars", 0);
				if (unk_0xB56F0E1C89B9E069("TimerBars"))
				{
					func_65("TimerBars", "Rockets", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 1:
				unk_0x59B2F61C9D01132B("TimerBars", 0);
				if (unk_0xB56F0E1C89B9E069("TimerBars"))
				{
					func_65("TimerBars", "Spikes", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 4:
				unk_0x59B2F61C9D01132B("TimerBars", 0);
				if (unk_0xB56F0E1C89B9E069("TimerBars"))
				{
					func_65("TimerBars", "Boost", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 6:
				unk_0x59B2F61C9D01132B("CrossTheLine", 0);
				if (unk_0xB56F0E1C89B9E069("CrossTheLine"))
				{
					func_84(&Var24, 18);
					func_65("CrossTheLine", "Timer_LargeTick_32", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 7:
				unk_0x59B2F61C9D01132B("CrossTheLine", 0);
				if (unk_0xB56F0E1C89B9E069("CrossTheLine"))
				{
					func_84(&Var24, 6);
					func_65("CrossTheLine", "Timer_LargeCross_32", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 8:
				unk_0x59B2F61C9D01132B("TimerBar_Icons", 0);
				if (unk_0xB56F0E1C89B9E069("TimerBar_Icons"))
				{
					func_84(&Var24, 118);
					func_65("TimerBar_Icons", "Pickup_Beast", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 9:
				unk_0x59B2F61C9D01132B("TimerBar_Icons", 0);
				if (unk_0xB56F0E1C89B9E069("TimerBar_Icons"))
				{
					func_84(&Var24, 118);
					func_65("TimerBar_Icons", "Pickup_B_Time", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 10:
				unk_0x59B2F61C9D01132B("TimerBar_Icons", 0);
				if (unk_0xB56F0E1C89B9E069("TimerBar_Icons"))
				{
					func_84(&Var24, 118);
					func_65("TimerBar_Icons", "Pickup_Random", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 11:
				unk_0x59B2F61C9D01132B("TimerBar_Icons", 0);
				if (unk_0xB56F0E1C89B9E069("TimerBar_Icons"))
				{
					func_84(&Var24, 118);
					func_65("TimerBar_Icons", "Pickup_Slow_Time", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 12:
				unk_0x59B2F61C9D01132B("TimerBar_Icons", 0);
				if (unk_0xB56F0E1C89B9E069("TimerBar_Icons"))
				{
					func_84(&Var24, 118);
					func_65("TimerBar_Icons", "Pickup_Swap", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 13:
				unk_0x59B2F61C9D01132B("TimerBar_Icons", 0);
				if (unk_0xB56F0E1C89B9E069("TimerBar_Icons"))
				{
					func_84(&Var24, 118);
					func_65("TimerBar_Icons", "Pickup_Testosterone", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 14:
				unk_0x59B2F61C9D01132B("TimerBar_Icons", 0);
				if (unk_0xB56F0E1C89B9E069("TimerBar_Icons"))
				{
					func_84(&Var24, 118);
					func_65("TimerBar_Icons", "Pickup_Thermal", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 15:
				unk_0x59B2F61C9D01132B("TimerBar_Icons", 0);
				if (unk_0xB56F0E1C89B9E069("TimerBar_Icons"))
				{
					func_84(&Var24, 118);
					func_65("TimerBar_Icons", "Pickup_Weed", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 16:
				unk_0x59B2F61C9D01132B("TimerBar_Icons", 0);
				if (unk_0xB56F0E1C89B9E069("TimerBar_Icons"))
				{
					func_84(&Var24, 118);
					func_65("TimerBar_Icons", "Pickup_Hidden", &Var24, 1, 0, 4, 0);
				}
				break;
		}
		if (func_85())
		{
			Var13.f_0 = (Var13.f_0 + -0.025f);
			Var13.f_2 = (Var13.f_2 + 0.05f);
		}
		Global_1356070.f_5998 = (Global_1356070.f_5998 + Var13.f_3);
		if (Global_1356070.f_1081 == 0)
		{
			if (iParam18 > 0)
			{
				Var33 = { Var13 };
				if (func_234(&(Global_1356070.f_949[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_127(Global_1356070.f_949[iParam0 /*2*/], 1250, 0))
					{
						Global_1356070.f_970[iParam0] = (Global_1356070.f_970[iParam0] - 17);
					}
					Var33.f_7 = Global_1356070.f_970[iParam0];
					if (iParam17 == 2)
					{
						func_84(&Var33, 6);
					}
					else if (iParam17 == 3)
					{
						func_84(&Var33, 18);
					}
					else
					{
						func_84(&Var33, iParam12);
					}
					func_65("TimerBars", "ALL_WHITE_bg", &Var33, 1, 0, iVar23, 0);
				}
			}
			else
			{
				Global_1356070.f_970[iParam0] = 255;
				func_126(&(Global_1356070.f_949[iParam0 /*2*/]), 0, 0);
			}
			func_65("TimerBars", "ALL_BLACK_bg", &Var13, 1, 0, iVar23, 0);
		}
		func_120(&Var13, iParam22);
		if (bParam16)
		{
			if (unk_0x2DA8A432EC3C3D33() == 9)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.004f);
			}
		}
		else if (func_85())
		{
			if (unk_0x2DA8A432EC3C3D33() == 9)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.008f);
			}
		}
		iVar23 = func_73();
		unk_0x38C75B31337B3454(iVar23);
		func_86(uParam1, uParam20);
		if (Global_1356070.f_1081 == 0)
		{
			func_64(uParam1, 0);
			if (func_55(uParam11) == 0)
			{
				if (bParam21 == 1)
				{
					func_56(uParam4, uParam1, uParam11, "", uParam20, 2);
				}
				else if (bParam16 == 1)
				{
					*uParam1 = 4;
					func_56(uParam4, uParam1, uParam11, "", uParam20, 2);
				}
				else if (iParam15 == -1)
				{
					func_117(uParam4, uParam1, uParam11, 0, 1);
				}
				else
				{
					func_53(uParam4, uParam1, uParam11, iParam15, 2);
				}
			}
		}
		if (bVar22)
		{
			if (iParam9 == 0)
			{
				func_202(iParam0);
			}
			if (iParam9 != 0 && func_234(&(Global_1356070.f_4366.f_336[iParam0 /*2*/]), 4000, 0) == 0)
			{
				if (iParam13 != 4)
				{
					if (iParam9 > 0)
					{
						func_201(uParam3);
						func_200(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
						func_199(uParam3);
					}
					else
					{
						func_198(uParam3);
						func_200(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
						func_199(uParam3);
					}
				}
				else if (iParam9 > 0)
				{
					func_198(uParam3);
					func_200(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
					func_199(uParam3);
				}
				else
				{
					func_201(uParam3);
					func_200(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
					func_199(uParam3);
				}
			}
			else
			{
				if (iParam10 != 0)
				{
					if (iParam10 == 1)
					{
						func_197(uParam2);
					}
					else if (iParam10 == 2)
					{
						func_196(uParam2);
					}
					else if (iParam10 == 3)
					{
						func_195(uParam2);
					}
				}
				if (Global_1356070.f_1081 == 1)
				{
					uParam2->f_7 = 0;
					unk_0x38C75B31337B3454(7);
				}
				func_64(uParam2, 0);
				switch (iParam13)
				{
					case 1:
						if (bParam19)
						{
							func_56(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							if (bParam24)
							{
								func_200(uParam5, uParam2, iParam7, 2627, "", 0, 1);
							}
							else
							{
								func_200(uParam5, uParam2, iParam7, 2567, "", 0, 1);
							}
						}
						break;
					
					case 0:
						if (bParam19)
						{
							func_56(uParam5, uParam2, "--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							func_200(uParam5, uParam2, iParam7, 6, "", 0, 1);
						}
						break;
					
					case 2:
						*uParam5 = (*uParam5 + 0.12f);
						func_200(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_117(&uVar11, &uVar0, "TIMER_AM_O", 0, 1);
						break;
					
					case 3:
						*uParam5 = (*uParam5 + 0.12f);
						func_200(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_117(&uVar11, &uVar0, "TIMER_PM_O", 0, 1);
						break;
					
					case 4:
						*uParam5 = (*uParam5 + 0.12f);
						if (bParam19)
						{
							func_56(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							func_200(uParam5, uParam2, iParam7, 2567, "", 0, 1);
						}
						break;
					
					case 5:
						*uParam5 = (*uParam5 + 0.117f);
						func_200(uParam5, uParam2, iParam7, 2, "", 0, 1);
						break;
					}
				}
		}
		func_43();
	}
}

void func_195(var uParam0)
{
	func_119(uParam0, 109);
}

void func_196(var uParam0)
{
	func_119(uParam0, 108);
}

void func_197(var uParam0)
{
	func_119(uParam0, 107);
}

void func_198(var uParam0)
{
	func_119(uParam0, 6);
}

void func_199(var uParam0)
{
	func_119(uParam0, 1);
}

void func_200(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	if (func_47())
	{
		func_64(uParam1, 0);
		unk_0x9AC742C2470DD649(iParam6);
		unk_0xAC1B647E90E8412A(iParam5);
		if (func_55(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		unk_0x0B8B91F21AE25854(sVar0);
		unk_0xC2D818A5754306C0(iParam2, iParam3);
		unk_0x7E43DE6F9866B44B(func_46(*uParam0), func_45(uParam0->f_1), 0);
	}
}

void func_201(var uParam0)
{
	func_119(uParam0, 18);
}

void func_202(int iParam0)
{
	func_15(&(Global_1356070.f_4366.f_336[iParam0 /*2*/]));
}

void func_203(int iParam0)
{
	func_15(&(Global_1356070.f_632[iParam0 /*2*/]));
	func_15(&(Global_1356070.f_653[iParam0 /*2*/]));
}

void func_204(int iParam0)
{
	func_15(&(Global_1356070.f_170[iParam0 /*2*/]));
	func_15(&(Global_1356070.f_191[iParam0 /*2*/]));
}

void func_205(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	float fVar0;
	
	fVar0 = func_92(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_91(iParam4);
	uParam1->f_1 = (uParam1->f_1 + func_90(uParam5));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_89(uParam0));
	*uParam7 = 0.795f;
	uParam7->f_1 = (uParam1->f_1 + func_89(uParam6));
	*uParam3 = *uParam2;
	uParam3->f_1 = uParam2->f_1;
	func_88(iParam4, -fVar0);
}

void func_206(var uParam0)
{
	uParam0->f_9 = ((((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) + 0.014f) - 0.024f) + 0.005f);
}

void func_207(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_208(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.5f + 0.004f) - 0.01f) - 0.11f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 19;
}

void func_209(bool bParam0)
{
	if (func_210())
	{
		if (bParam0)
		{
			unk_0xED9541AF8190B3D1(1);
		}
		else
		{
			unk_0xED9541AF8190B3D1(0);
		}
	}
}

int func_210()
{
	if (func_211(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	switch (func_212(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 38:
		case 33:
		case 36:
		case 39:
			return 0;
		
		default:
	}
	return 1;
}

int func_212(int iParam0)
{
	return Global_1593076[iParam0 /*647*/].f_189;
}

int func_213(int iParam0)
{
	if (Global_2456642 == 1)
	{
		return 0;
	}
	if (func_216() == 0)
	{
		if (unk_0x957E53BB191CB24D())
		{
			return 0;
		}
	}
	if ((iParam0 != 1 && Global_1356070.f_1082 == 0) && Global_1356070.f_1083 == 0)
	{
		if (func_214())
		{
			return 0;
		}
	}
	return 1;
}

int func_214()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_215())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x4EBACDA5E9A0E784(&Var0);
		if (Global_14388 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_215()
{
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_216()
{
	return Global_25222;
}

int func_217()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1356070.f_5955[iVar0] != Global_1356070.f_5941[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	if (Global_1356070.f_5997)
	{
		Global_1356070.f_5997 = 0;
		return 1;
	}
	return 0;
}

void func_218()
{
	Global_1356070.f_5997 = 1;
}

int func_219(int iParam0)
{
	if (func_221(iParam0, 0))
	{
		return 1;
	}
	if (func_220())
	{
		if (iParam0 == unk_0x3D35F9864E4640B1())
		{
			return 1;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_220()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

bool func_221(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_222(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_222(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_223();
	}
	if (Global_1312833[iVar1] == 1)
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

int func_223()
{
	return Global_1312735;
}

int func_224()
{
	if (Global_1312367)
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (unk_0x330B3535C81641CE())
	{
		return 0;
	}
	if (Global_1775874.f_4)
	{
		return 0;
	}
	if (Global_1356070.f_1085 || Global_1356070.f_1086)
	{
		if (Global_1356070.f_1087 == 0)
		{
			if (func_228(unk_0x0031992CA618A445()))
			{
				func_227();
			}
		}
		return 1;
	}
	if (func_48())
	{
		if (Global_1356070.f_1087 == 0)
		{
			if (func_228(unk_0x0031992CA618A445()))
			{
				func_227();
			}
		}
		return 1;
	}
	if (Global_2457336)
	{
		return 0;
	}
	if (Global_1315665)
	{
		return 0;
	}
	if (func_226())
	{
		if (Global_1356070.f_1087 == 0)
		{
			if (func_228(unk_0x0031992CA618A445()))
			{
				func_227();
			}
		}
		return 1;
	}
	if (Global_17151.f_4 && func_211(unk_0x3D35F9864E4640B1()) == 0)
	{
		return 0;
	}
	if (unk_0x003E46CBEF6CE07A())
	{
		return 0;
	}
	if (Global_1356070.f_1087 == 0)
	{
		if (func_228(unk_0x0031992CA618A445()))
		{
			func_227();
		}
	}
	if (func_225(8, -1))
	{
		return 0;
	}
	if (unk_0xF3509D371DD93D71() == 0)
	{
		return 0;
	}
	if (func_216() == 0)
	{
		if (Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_231 != 99)
		{
			if (((unk_0x625830A3B7014A89() == 0 && Global_1574288 == 0) && !unk_0x2A3398C6222EB190(Global_2434915.f_1670.f_743, 11)) && Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] != 0)
			{
				return 0;
			}
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2359302, 11))
	{
		return 0;
	}
	return 1;
}

bool func_225(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

int func_226()
{
	if (Global_1757696)
	{
		return 1;
	}
	return 0;
}

void func_227()
{
	Global_1356070.f_1087 = 1;
}

int func_228(var uParam0)
{
	int iVar0;
	
	if (unk_0x7C3C875B4842517A())
	{
		if (!unk_0x8682D8A6269E52C9(uParam0))
		{
			unk_0x1306828A757A10AC(uParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_229()
{
	int iVar0;
	
	if (func_232(2))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(2, iVar0) && func_27(2, iVar0))
			{
				func_15(&(Global_1356070.f_1904.f_555[iVar0 /*2*/]));
			}
			else if (func_234(&(Global_1356070.f_1904.f_555[iVar0 /*2*/]), Global_1356070.f_1904.f_576[iVar0], 0) == 0)
			{
				Global_1356070.f_1 = 1;
				func_231(2, iVar0);
			}
			else
			{
				func_230(2, iVar0);
			}
			iVar0++;
		}
	}
}

void func_230(int iParam0, int iParam1)
{
	unk_0xD804ACF2A7171150(&(Global_1356070.f_5983[iParam0]), iParam1);
}

void func_231(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1356070.f_5941[iParam0]), iParam1);
}

int func_232(int iParam0)
{
	if (Global_1356070.f_5983[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

void func_233(int iParam0)
{
	Global_1356070.f_1079 = iParam0;
}

int func_234(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_174(uParam0, bParam2, 0);
	if (unk_0x27CA09C6DFAB1E79() && !bParam2)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

