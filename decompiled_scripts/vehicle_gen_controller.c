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
	int iLocal_28 = 0;
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
	int iLocal_47 = 0;
	var uLocal_48[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_117[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_186[68];
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	struct<114> Local_402 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_516 = { 0, 0, 0, 0, 0 } ;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	struct<74> Local_546 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 2;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646[4] = { 0, 0, 0, 0 };
	int iLocal_651 = 0;
	int iLocal_652[1] = { 0 };
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664[2] = { 0, 0 };
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	bool bLocal_673 = 0;
	struct<13> Local_674 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	struct<81> Local_695 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_776 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_936[3] = { 0, 0, 0 };
	int iLocal_940 = 0;
	var uLocal_941[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	int iLocal_1014 = 0;
	bool bLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	bool bLocal_1018 = 0;
	char cLocal_1019[16] = "";
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	char cLocal_1023[16] = "";
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033 = 0;
	int iLocal_1034 = 0;
	char* sLocal_1035 = NULL;
	int iLocal_1036 = 0;
	int iLocal_1037 = 0;
	float fLocal_1038 = 0f;
	int iLocal_1039 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_655 = -1;
	iLocal_656 = -1;
	iLocal_661 = -1;
	iLocal_668 = -1;
	iLocal_940 = -1;
	unk_0x0BDEAF4CD9510F40(0);
	Local_402.f_5 = -1;
	Local_402.f_0 = -1;
	Local_402.f_1 = 99999.99f;
	func_416(&uLocal_521);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_90286[iVar0 /*3*/][0] = -1;
		Global_90286[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_104439.f_32291.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_104439.f_32291.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_104439.f_32291.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_104439.f_32291.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_104439.f_32291.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_104439.f_32291.f_4801 = -15;
		Global_104439.f_32291.f_4802 = 1;
	}
	if (((!func_415() && !func_414()) && !func_413()) && !func_412())
	{
		func_411(60, 0);
		func_411(61, 0);
	}
	func_410();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_409(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_401)
		{
			iLocal_401 = 1;
			if (unk_0xB9B05E900D325C36(98))
			{
				if (unk_0x6BD2A9ED76EC68DF() == 64)
				{
					if (!Global_70596)
					{
						iLocal_401 = 0;
					}
					else
					{
						func_408();
						func_407();
					}
					Global_70596 = 0;
				}
				else
				{
					func_408();
					func_407();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xB94EF4C319F80CEE() != 5)
		{
			iLocal_672 = func_405();
			func_366();
			func_364();
			func_332(&uLocal_521);
			func_309();
			func_28();
			func_20();
			func_17(&uLocal_1010);
		}
		func_1(&uLocal_521);
	}
}

void func_1(var uParam0)
{
	bool bVar0;
	float fVar1;
	
	if (!unk_0x2A3398C6222EB190(Global_104439.f_9877.f_25, 7))
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0) && func_14(func_16()))
		{
			bVar0 = false;
			if (unk_0x2A3398C6222EB190(*uParam0, 6) && unk_0x2A3398C6222EB190(*uParam0, 12))
			{
				fVar1 = unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), uParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = true;
					if (uParam0->f_2 == -1)
					{
						uParam0->f_2 = (unk_0x31CD6E9F83C10233() + unk_0x3AF262D7332EEDF5(10000, 15000));
					}
					else
					{
						if (func_13())
						{
							uParam0->f_2 = func_12(uParam0->f_2, (unk_0x31CD6E9F83C10233() + unk_0x3AF262D7332EEDF5(2000, 4000)));
						}
						if (!unk_0x2A3398C6222EB190(*uParam0, 23))
						{
							func_11(uParam0, &(uParam0->f_9));
						}
						else if (!unk_0x2A3398C6222EB190(*uParam0, 30))
						{
							if (unk_0x1F1D255CB6501243(&(uParam0->f_9), 0, -1))
							{
								if (unk_0x31CD6E9F83C10233() > uParam0->f_2)
								{
									if (func_9() != 7 && func_8(0, 0))
									{
										func_4(uParam0, func_6(uParam0));
										func_3(0);
										unk_0xCD7E92DE2BFA0B0D(uParam0, 30);
									}
								}
							}
						}
						else if (unk_0x917B2B29AECD0509(uParam0->f_1))
						{
							unk_0xD804ACF2A7171150(uParam0, 30);
							unk_0xF2565A150D1CA964(uParam0->f_1);
							uParam0->f_1 = -1;
							uParam0->f_2 = -1;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (unk_0x2A3398C6222EB190(*uParam0, 23))
				{
					func_2(uParam0);
				}
				unk_0xD804ACF2A7171150(uParam0, 30);
				uParam0->f_2 = -1;
			}
		}
	}
}

void func_2(var uParam0)
{
	unk_0x616FBCC20E22C43A();
	unk_0xD804ACF2A7171150(uParam0, 23);
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_9877.f_25), 22);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_104439.f_9877.f_25), 22);
	}
}

void func_4(var uParam0, struct<3> Param1)
{
	struct<16> Var0;
	struct<16> Var16;
	
	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var16 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	uParam0->f_1 = unk_0x6307C3D1D866114A();
	unk_0x4DF52B0CF393442F(uParam0->f_1, &Var0, Param1, &Var16, 0, 0, 0);
}

struct<16> func_5(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<16> Var0;
	
	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

Vector3 func_6(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		Var3 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
		Var6 = { func_7(uParam0->f_6 - Var3) * Vector(52.5f, 52.5f, 52.5f) };
		Var0 = { Var3 + Var6 };
	}
	return Var0;
}

Vector3 func_7(struct<3> Param0)
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

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0x42F812C5F1AA300A(0, 36))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_9877.f_25), 22);
	}
	bVar0 = unk_0x2A3398C6222EB190(Global_104439.f_9877.f_25, 22);
	if (iParam0 && bVar0)
	{
		unk_0xD804ACF2A7171150(&(Global_104439.f_9877.f_25), 22);
	}
	iParam1 = iParam1;
	return bVar0;
}

int func_9()
{
	var uVar0;
	
	uVar0 = func_10(Global_104439.f_9877.f_25, 14336, 11);
	return uVar0;
}

int func_10(var uParam0, int iParam1, int iParam2)
{
	return unk_0x97EF1E5BCE9DC075((uParam0 && iParam1), iParam2);
}

void func_11(var uParam0, var uParam1)
{
	unk_0x1F1D255CB6501243(uParam1, 0, -1);
	unk_0xCD7E92DE2BFA0B0D(uParam0, 23);
}

int func_12(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_13()
{
	bool bVar0;
	
	bVar0 = unk_0x2A3398C6222EB190(Global_104439.f_9877.f_25, 22);
	return (func_8(0, 0) && !bVar0);
}

bool func_14(int iParam0)
{
	return iParam0 == func_15();
}

int func_15()
{
	return joaat("ig_orleans");
}

int func_16()
{
	return unk_0xE9559A12052415BE(unk_0x0031992CA618A445());
}

void func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1318571.f_21)
	{
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1318571.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_1318571[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1318571[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = unk_0xCFA232B43A4F9AA4(iVar0);
			if (Global_1318571[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1318571[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = unk_0x1585299864B2FBFD(iVar0);
			}
			else
			{
				fVar2 = unk_0xECE2C9AAADFC25DF(iVar0);
			}
			if (Global_1318571[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1318571[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = unk_0x56965652D2FD65F8(iVar0);
			if (Global_1318571[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1318571[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

float func_18(int iParam0)
{
	if (iParam0 == 7)
	{
		return 51.77096f;
	}
	return unk_0xD4531BFB489FD5B1(iParam0);
}

int func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
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
					return 17;
				
				case 15:
					return 18;
				
				case 16:
					return 19;
				
				case 17:
					return 20;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 14;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 15;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 16;
				
				default:
			}
			break;
	}
	return -1;
}

void func_20()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xA761A0B6072010C8(Global_69607.f_583))
	{
		bVar0 = false;
		if (iLocal_672 != Global_69607.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_27(0) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(13)) || func_27(14))
		{
			bVar0 = true;
		}
		else if (Global_69607.f_590)
		{
			if (!func_26(Global_69607.f_584, unk_0x453EDE9648F86D8C(Global_69607.f_583), 1056964608, 0) || func_22(Global_69607.f_582, func_23(Global_69607.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_69607.f_591)
		{
			if (!func_26(Global_69607.f_587, unk_0x453EDE9648F86D8C(Global_69607.f_583), 1056964608, 0) || func_22(Global_69607.f_582, func_23(Global_69607.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!unk_0x76B3C79DE564AFC6(Global_69607.f_581) || !unk_0x432757A9E7AAFA96(Global_69607.f_581, 0)) || (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Global_69607.f_581, 0)))
		{
			if (unk_0x76B3C79DE564AFC6(Global_69607.f_581) && !unk_0x432757A9E7AAFA96(Global_69607.f_581, 0))
			{
				Global_69607.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (unk_0x76B3C79DE564AFC6(Global_69607.f_581))
		{
			if (unk_0x432757A9E7AAFA96(Global_69607.f_581, 0))
			{
				Global_69607.f_587 = { unk_0xF177E0DA126D71C8(Global_69607.f_581, 1) };
			}
			else
			{
				Global_69607.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			unk_0x0C4BDC77192798AE(&(Global_69607.f_583));
			Global_69607.f_590 = 0;
			Global_69607.f_591 = 0;
			Global_69607.f_581 = 0;
		}
	}
	else
	{
		Global_69607.f_590 = 0;
		Global_69607.f_591 = 0;
		Global_69607.f_581 = 0;
	}
	if ((((((!unk_0xA761A0B6072010C8(Global_69607.f_583) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(13)) && !func_27(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_90248[iVar2] != 145 && Global_90258[iVar2] != 0) && unk_0x76B3C79DE564AFC6(Global_90238[iVar2])) && unk_0x432757A9E7AAFA96(Global_90238[iVar2], 0)) && !unk_0xA761A0B6072010C8(unk_0xAEC869A983C4C0C6(Global_90238[iVar2]))) && Global_90248[iVar2] == iLocal_672) && unk_0x2076012573940835(unk_0xE9559A12052415BE(Global_90238[iVar2])))
			{
				if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Global_90238[iVar2], 0))
				{
					Global_69607.f_581 = Global_90238[iVar2];
					Global_69607.f_582 = iLocal_672;
					Global_69607.f_590 = 0;
					Global_69607.f_583 = unk_0xE80C2D6BF636C6C4(Global_69607.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!unk_0xA761A0B6072010C8(Global_69607.f_583) && !func_21(Global_69607.f_584, 0f, 0f, 0f, 0))
			{
				Global_69607.f_581 = 0;
				Global_69607.f_582 = iLocal_672;
				Global_69607.f_590 = 1;
				Global_69607.f_583 = unk_0x97AC4FC1EEAC7A8B(Global_69607.f_584);
			}
			if (!unk_0xA761A0B6072010C8(Global_69607.f_583) && !func_21(Global_69607.f_587, 0f, 0f, 0f, 0))
			{
				Global_69607.f_581 = 0;
				Global_69607.f_582 = iLocal_672;
				Global_69607.f_591 = 1;
				Global_69607.f_583 = unk_0x97AC4FC1EEAC7A8B(Global_69607.f_587);
			}
		}
		else
		{
			Global_69607.f_590 = 0;
			Global_69607.f_591 = 0;
		}
		if (unk_0xA761A0B6072010C8(Global_69607.f_583))
		{
			unk_0x3B815A6E8530D3A5(Global_69607.f_583, 225);
			unk_0x50B5259DFC71B8EC(Global_69607.f_583, "PVEHICLE");
			unk_0xC2001CECF808BD21(Global_69607.f_583, false);
			unk_0xC5B4383DA70A2C1A(Global_69607.f_583, 3);
			if (iLocal_672 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_672 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_672 == 2)
			{
				iVar3 = 44;
			}
			unk_0xEB934A06DDA5027D(Global_69607.f_583, iVar3);
		}
	}
}

bool func_21(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (unk_0x76B3C79DE564AFC6(Global_90238[iVar1]) && unk_0x432757A9E7AAFA96(Global_90238[iVar1], 0))
		{
			if (Global_90248[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == unk_0xE9559A12052415BE(Global_90238[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_23(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_25(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_24(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_24(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_104439.f_8946.f_99.f_58[128] && !Global_104439.f_8946.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_104439.f_8946.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_104439.f_8946.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x229F35E7CDDBF757((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_28()
{
	func_252();
	func_189();
	func_67();
	func_29();
}

void func_29()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (((((Local_402.f_29.f_80 && !Local_402.f_29.f_69) && Local_402.f_0 != -1) && func_66(Local_402.f_0, 0)) && func_66(Local_402.f_0, 5)) && unk_0x7832F791572D5809(joaat("michael1")) == 0)
		{
			if (!unk_0x76B3C79DE564AFC6(Local_402.f_113))
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
					if (unk_0x76B3C79DE564AFC6(iVar0) && unk_0x432757A9E7AAFA96(iVar0, 0))
					{
						iVar1 = unk_0xE9559A12052415BE(iVar0);
						if (func_63(iVar1))
						{
							Local_402.f_113 = iVar0;
						}
					}
				}
			}
			else if (unk_0x432757A9E7AAFA96(Local_402.f_113, 0) && func_63(unk_0xE9559A12052415BE(Local_402.f_113)))
			{
				if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Local_402.f_113, 0))
				{
					if (unk_0x417F21FB3F950AEE(Local_402.f_113, Local_402.f_29.f_48, Local_402.f_29.f_51, Local_402.f_29.f_54, 0, 1, 0))
					{
						if ((!func_62(Local_402.f_113) && !func_61(Local_402.f_113)) && Local_402.f_113 != Global_69607.f_484[Local_402.f_0])
						{
							func_30(Local_402.f_0, Local_402.f_113, 1);
						}
						Local_402.f_113 = 0;
					}
				}
			}
			else
			{
				Local_402.f_113 = 0;
			}
		}
		else
		{
			Local_402.f_113 = 0;
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_60(&(Global_69607.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(Global_69607.f_555[0 /*21*/].f_9, 12) && !unk_0x2A3398C6222EB190(Global_69607.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69607.f_555[0 /*21*/].f_4 != unk_0xE9559A12052415BE(iParam1))
		{
			return;
		}
	}
	if (Global_70514 != -1 && Global_70514 != iParam0)
	{
		return;
	}
	if (unk_0x76B3C79DE564AFC6(iParam1))
	{
		if (unk_0x432757A9E7AAFA96(iParam1, 0))
		{
			if (!unk_0xCC234795142FC2D2(iParam1))
			{
				unk_0x1581691D748490F3(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_104439.f_32291.f_4801 = func_49();
			}
			if (iParam1 != Global_69607.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_48(iParam0);
					if ((unk_0x76B3C79DE564AFC6(iVar0) && unk_0x432757A9E7AAFA96(iVar0, 0)) && iParam1 != iVar0)
					{
						func_31(iVar0, 145);
					}
				}
				Global_70513 = iParam1;
				Global_70514 = iParam0;
				Global_70515 = iParam2;
			}
		}
	}
}

void func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_36(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x3251C2B06497863C(iParam0, -1, 0);
		if (!unk_0x76B3C79DE564AFC6(iVar0))
		{
			iVar0 = unk_0xB4ED2AD9365A5F9E(iParam0, -1);
		}
		if (unk_0x76B3C79DE564AFC6(iVar0) && !unk_0x8682D8A6269E52C9(iVar0))
		{
			if (unk_0xE9559A12052415BE(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xE9559A12052415BE(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xE9559A12052415BE(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_104439.f_2244.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xE9559A12052415BE(iParam0) == Global_104439.f_32291.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x0BD3CCFB6C6CFA91(&(Global_104439.f_32291.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xB3404E397FF56B3B(unk_0xCF9C6545E179C4AD(iParam0), &(Global_104439.f_32291.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_104439.f_32291.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_104439.f_32291.f_5592[iVar1] = iVar2;
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
		if (unk_0xE9559A12052415BE(iParam0) == Global_104439.f_32291.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x0BD3CCFB6C6CFA91(&(Global_104439.f_32291.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xB3404E397FF56B3B(unk_0xCF9C6545E179C4AD(iParam0), &(Global_104439.f_32291.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_104439.f_32291.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_104439.f_32291.f_5590 = iParam1;
	Global_70512 = iParam0;
	Global_104439.f_32291.f_5588 = 1;
	func_32(iParam0, &(Global_104439.f_32291.f_5510));
}

void func_32(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		func_35(uParam1);
		uParam1->f_66 = unk_0xE9559A12052415BE(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xCF9C6545E179C4AD(iParam0), 16);
		*uParam1 = unk_0x3863090BB0402D29(iParam0);
		unk_0xB3EEFAD2583A0B39(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCC1E6825E8AEFA91(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB6CD70E75256F4B4(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x92D3D399848DA022(iParam0);
		uParam1->f_67 = unk_0x27F913045BB0E0C6(iParam0);
		uParam1->f_69 = unk_0x0B56976C59C0773F(iParam0);
		uParam1->f_70 = unk_0xB026720421512310(iParam0);
		unk_0x807574B316B857A4(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x6B1D7C9564AA9095(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x429138BE60703CCA(iParam0, 2))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 28);
		}
		if (unk_0x429138BE60703CCA(iParam0, 3))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 29);
		}
		if (unk_0x429138BE60703CCA(iParam0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 30);
		}
		if (unk_0x429138BE60703CCA(iParam0, 1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x949DE8C96217A79B(iParam0, 0))
		{
			uParam1->f_68 = unk_0x727C05A2BF43A1DA(iParam0);
		}
		if (unk_0xF9CDF5CA6A1D6756(uParam1->f_66))
		{
			if (unk_0xB24748D4EDC0E921(iParam0))
			{
				switch (unk_0x04A9D89D1A4A6CCC(iParam0))
				{
					case 2:
					case 0:
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 23);
						unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 23);
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x95C125C85B156194(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 9);
		}
		if (unk_0x09F06C3C37B36D10(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 10);
		}
		if (unk_0x973A322D4D80E2D1(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 13);
			unk_0xE22FB988FAA3CC86(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xD19B16472550A083(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 12);
		}
		func_34(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3BE354A1A1BD6623(iParam0, iVar0 + 1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_33(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x66FE8ED1424CB0E3(iParam0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_77), 11);
		}
		if (unk_0x8B0523D9EF9595C2(iParam0, "IgnoredByQuickSave") && unk_0x0E340E113E76A82F(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_77), 27);
		}
	}
}

int func_33(int iParam0)
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

int func_34(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x432757A9E7AAFA96(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x5583DCB5A49F0E53(*iParam0) == 0)
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
			if (unk_0xEB185A7D2320BECE(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xBE7294CB9B3BEC34(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xE69CED5522DA627F(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xE69CED5522DA627F(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_35(var uParam0)
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

int func_36(int iParam0)
{
	if ((((((((((!unk_0x76B3C79DE564AFC6(iParam0) || !unk_0x432757A9E7AAFA96(iParam0, 0)) || func_46(iParam0, 0, 0)) || func_46(iParam0, 1, 0)) || func_46(iParam0, 2, 0)) || func_45(iParam0) != 145) || func_44(iParam0)) || func_62(iParam0)) || func_61(iParam0)) || func_43(iParam0)) || !func_37(unk_0xE9559A12052415BE(iParam0)))
	{
		if (func_62(iParam0))
		{
		}
		if (func_62(iParam0))
		{
		}
		if (func_46(iParam0, 0, 0))
		{
		}
		if (func_46(iParam0, 1, 0))
		{
		}
		if (func_46(iParam0, 2, 0))
		{
		}
		if (func_45(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_37(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x9C4740BA7F0AF553(iParam0) || unk_0xF9CDF5CA6A1D6756(iParam0)) || unk_0x1DBFCF939B3B47D0(iParam0)) || unk_0x22237535B3A68DF9(iParam0))
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

int func_38(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6DFDB26E7DC403AF(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x27CA09C6DFAB1E79()) || (iParam0 == joaat("buffalo3") && !unk_0x27CA09C6DFAB1E79())) || (iParam0 == joaat("gauntlet2") && !unk_0x27CA09C6DFAB1E79())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x27CA09C6DFAB1E79())) || iParam0 == joaat("blista3"))
	{
		if (!func_42())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x9F1747E93F8C8B1E())
		{
			if (unk_0xF87BC0F22BCEB035(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x03CF889BDA5553A9(Var1.f_0))
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
		if ((((!func_415() && !func_414()) && !func_413()) && !func_412()) && !func_42())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x9D3EA2635512FD6B() || unk_0x20551D6D924ED04B()) || unk_0x43F4A6D2081CC5ED())
		{
		}
		else if (!func_413())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_41(iParam0))
		{
			return 0;
		}
	}
	if (!func_39(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_39(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_40())
	{
		return 1;
	}
	unk_0xE2A314A6903DD12E(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x09E7CE4C231F1F83(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_40()
{
	if (unk_0x20551D6D924ED04B())
	{
		return 1;
	}
	return 0;
}

int func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2488615)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x6239D1A379D387A4();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5994 && !Global_262145.f_12099) && iVar1 < Global_262145.f_12100)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13342 && iVar1 < Global_262145.f_13354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13338 && iVar1 < Global_262145.f_13350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13339 && iVar1 < Global_262145.f_13351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13340 && iVar1 < Global_262145.f_13352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13341 && iVar1 < Global_262145.f_13353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13343 && iVar1 < Global_262145.f_13355)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13344 && iVar1 < Global_262145.f_13347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13345 && iVar1 < Global_262145.f_13348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13346 && iVar1 < Global_262145.f_13349)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15973 && iVar1 < Global_262145.f_15938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15968 && iVar1 < Global_262145.f_15933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15972 && iVar1 < Global_262145.f_15937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15971 && iVar1 < Global_262145.f_15936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15965 && iVar1 < Global_262145.f_15930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15966 && iVar1 < Global_262145.f_15931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15969 && iVar1 < Global_262145.f_15934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15970 && iVar1 < Global_262145.f_15935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15967 && iVar1 < Global_262145.f_15932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_15975 && iVar1 < Global_262145.f_15940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_15976 && iVar1 < Global_262145.f_15941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15964 && iVar1 < Global_262145.f_15929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15963 && iVar1 < Global_262145.f_15928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15962 && iVar1 < Global_262145.f_15927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15974 && iVar1 < Global_262145.f_15939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_15977 && iVar1 < Global_262145.f_15942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_15978 && iVar1 < Global_262145.f_15943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_15979 && iVar1 < Global_262145.f_15944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_15980 && iVar1 < Global_262145.f_15945)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16125 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16126 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16127 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16128 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16129 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16130 && iVar1 < Global_262145.f_16152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16132 && iVar1 < Global_262145.f_16153)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16133 && iVar1 < Global_262145.f_16154)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16134 && iVar1 < Global_262145.f_16155)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16135 && iVar1 < Global_262145.f_16156)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16136 && iVar1 < Global_262145.f_16157)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16137 && iVar1 < Global_262145.f_16158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16138 && iVar1 < Global_262145.f_16159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16144 && iVar1 < Global_262145.f_16166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16141 && iVar1 < Global_262145.f_16162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16142 && iVar1 < Global_262145.f_16163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16143 && iVar1 < Global_262145.f_16164)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16131 && iVar1 < Global_262145.f_16165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16145 && iVar1 < Global_262145.f_16167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16139 && iVar1 < Global_262145.f_16160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16140 && iVar1 < Global_262145.f_16161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16146 && iVar1 < Global_262145.f_16168)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17774 && iVar1 < Global_262145.f_17815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17775 && iVar1 < Global_262145.f_17816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17776 && iVar1 < Global_262145.f_17817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17777 && iVar1 < Global_262145.f_17818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17778 && iVar1 < Global_262145.f_17819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17779 && iVar1 < Global_262145.f_17820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17780 && iVar1 < Global_262145.f_17821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17781 && iVar1 < Global_262145.f_17822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17782 && iVar1 < Global_262145.f_17823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17783 && iVar1 < Global_262145.f_17824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17784 && iVar1 < Global_262145.f_17825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17785 && iVar1 < Global_262145.f_17826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17786 && iVar1 < Global_262145.f_17827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17787 && iVar1 < Global_262145.f_17828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17788 && iVar1 < Global_262145.f_17829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17789 && iVar1 < Global_262145.f_17830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17790 && iVar1 < Global_262145.f_17831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17791 && iVar1 < Global_262145.f_17832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17792 && iVar1 < Global_262145.f_17833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17793 && iVar1 < Global_262145.f_17834)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17794 && iVar1 < Global_262145.f_17835)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17795 && iVar1 < Global_262145.f_17836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17796 && iVar1 < Global_262145.f_17837)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17839)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18801 && iVar1 < Global_262145.f_18797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18802 && iVar1 < Global_262145.f_18798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18803 && iVar1 < Global_262145.f_18799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18804 && iVar1 < Global_262145.f_18800)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19643 && iVar1 < Global_262145.f_19651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19644 && iVar1 < Global_262145.f_19652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19645 && iVar1 < Global_262145.f_19653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19646 && iVar1 < Global_262145.f_19654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19647 && iVar1 < Global_262145.f_19655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19648 && iVar1 < Global_262145.f_19656)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20411 && iVar1 < Global_262145.f_20431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20423 && iVar1 < Global_262145.f_20443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20414 && iVar1 < Global_262145.f_20434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20424 && iVar1 < Global_262145.f_20444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20412 && iVar1 < Global_262145.f_20432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20428 && iVar1 < Global_262145.f_20448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20426 && iVar1 < Global_262145.f_20446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20427 && iVar1 < Global_262145.f_20447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20422 && iVar1 < Global_262145.f_20442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20429 && iVar1 < Global_262145.f_20449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20425 && iVar1 < Global_262145.f_20445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20421 && iVar1 < Global_262145.f_20441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20413 && iVar1 < Global_262145.f_20433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20415 && iVar1 < Global_262145.f_20435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20416 && iVar1 < Global_262145.f_20436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20417 && iVar1 < Global_262145.f_20437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20418 && iVar1 < Global_262145.f_20438)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20419 && iVar1 < Global_262145.f_20439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20420 && iVar1 < Global_262145.f_20440)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_42()
{
	var uVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		if (unk_0xD69069794497409F())
		{
			if (unk_0x9F3509E90B1EE108())
			{
				unk_0x2553A7EB99AABF55(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 2);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 4);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 6);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 2);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 4);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 6);
				unk_0xE931A869061F7BD2(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6008D10CE7FC9AA8())
				{
					iVar0 = unk_0x03CCEFDDDC599303(866);
					unk_0xCD7E92DE2BFA0B0D(&iVar0, 0);
					unk_0x5149EEBBCD305987(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_142820 == 2)
	{
		return 1;
	}
	else if (Global_142820 == 3)
	{
		return 0;
	}
	if (unk_0x6008D10CE7FC9AA8())
	{
		if (unk_0x2A3398C6222EB190(unk_0x03CCEFDDDC599303(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xE9559A12052415BE(iParam0);
	uVar1 = unk_0xCF9C6545E179C4AD(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xB3404E397FF56B3B(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_38(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(Global_69607.f_484[24]))
	{
		if (iParam0 == Global_69607.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x76B3C79DE564AFC6(Global_69607.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69607.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (!unk_0x76B3C79DE564AFC6(iParam0))
	{
		return 145;
	}
	if (!unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x76B3C79DE564AFC6(Global_90238[iVar0]))
		{
			if (Global_90238[iVar0] == iParam0)
			{
				return Global_90248[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_46(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x76B3C79DE564AFC6(iParam0) || !unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_47(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x2A3398C6222EB190(Global_104439.f_7090[iVar9], 0))
		{
			if (unk_0xF71DD5142F86A1BE(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_47(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_48(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69607.f_139[iParam0];
}

int func_49()
{
	var uVar0;
	
	func_59(&uVar0, unk_0x6676AD594A1E113E());
	func_58(&uVar0, unk_0xE647A8424B4399CE());
	func_57(&uVar0, unk_0x41413FABD538FC3A());
	func_52(&uVar0, unk_0xEC3E0DDCEEBF8A00());
	func_51(&uVar0, unk_0x1A7BD52C0A88E679());
	func_50(&uVar0, unk_0x760D3328FB0F48C5());
	return uVar0;
}

void func_50(var uParam0, int iParam1)
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

void func_51(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_52(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_56(*uParam0);
	iVar1 = func_54(*uParam0);
	if (iParam1 < 1 || iParam1 > func_53(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_53(int iParam0, int iParam1)
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

var func_54(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_55(unk_0x2A3398C6222EB190(iParam0, 31), -1, 1)) + 2011;
}

int func_55(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_56(int iParam0)
{
	return iParam0 & 15;
}

void func_57(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_58(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_60(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 19);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 19);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 22);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 22);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 22);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 27);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 27);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 27);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 11);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 13);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 11);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 13);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 9);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 9);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 2);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 30);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 2);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 22);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_42())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 13);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 2);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 1);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_42())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 13);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 2);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 1);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 30);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 30);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x2A3398C6222EB190(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_104439.f_32291.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_21(Global_104439.f_32291.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104439.f_32291.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_104439.f_32291.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_104439.f_32291.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x2A3398C6222EB190(uParam0->f_9, 19))
	{
		if (!func_21(Global_104439.f_2244.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104439.f_2244.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104439.f_2244.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x2A3398C6222EB190(uParam0->f_9, 20))
	{
		if (!func_21(Global_104439.f_2244.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104439.f_2244.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104439.f_2244.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x76B3C79DE564AFC6(Global_90268[iVar0]))
		{
			if (Global_90268[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x76B3C79DE564AFC6(Global_90238[iVar0]) && unk_0x432757A9E7AAFA96(Global_90238[iVar0], 0))
			{
				if (Global_90238[iVar0] == iParam0 && unk_0xE9559A12052415BE(Global_90238[iVar0]) == unk_0xE9559A12052415BE(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	switch (Local_402.f_6)
	{
		case 0:
			return func_65(iParam0);
			break;
		
		case 1:
			if (((unk_0x9C4740BA7F0AF553(iParam0) || unk_0xA31F3B8AEDBCEB1E(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_64(iParam0);
			break;
		
		case 2:
			return (unk_0x1DBFCF939B3B47D0(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_64(int iParam0)
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0;
	}
	if (((!unk_0x2076012573940835(iParam0) && !unk_0x34C854420D02F57B(iParam0)) && !unk_0x1B9B48622A4D3FC0(iParam0)) && !unk_0x01301B632ADFA6CA(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_65(int iParam0)
{
	if (iParam0 == joaat("jet"))
	{
		return 0;
	}
	if ((((!unk_0xF9CDF5CA6A1D6756(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

bool func_66(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_104439.f_32291[iParam0], iParam1);
}

void func_67()
{
	struct<100> Var0;
	struct<78> Var101;
	bool bVar179;
	int iVar180;
	int iVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	struct<4> Var185;
	int iVar189;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	int iVar194;
	int iVar195;
	bool bVar196;
	int iVar197;
	bool bVar198;
	bool bVar199;
	int iVar200;
	int iVar201;
	int iVar202;
	int iVar203;
	struct<2> Var204;
	int iVar208;
	bool bVar209;
	int iVar210;
	bool bVar211;
	var uVar212;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_95 = -1;
	Var0.f_96 = 1;
	Var0.f_98 = 132;
	Var0.f_99 = -1;
	Var101.f_9 = 49;
	Var101.f_59 = 2;
	bVar179 = false;
	iVar180 = 0;
	if (iLocal_654 > 0 && iLocal_654 != 99)
	{
		if (((((((((((((((Local_402.f_0 == -1 || unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || !unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, 1, 0)) || ((unk_0x76B3C79DE564AFC6(Global_69607.f_484[Local_402.f_0]) && unk_0x432757A9E7AAFA96(Global_69607.f_484[Local_402.f_0], 0)) && (unk_0x723F14FB94D6F22C(unk_0x0031992CA618A445(), Global_69607.f_484[Local_402.f_0]) || unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Global_69607.f_484[Local_402.f_0], 1)))) || ((unk_0x76B3C79DE564AFC6(Global_69607.f_484[Local_402.f_0]) && unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445())) && ((unk_0x1F445308DE0FA3E1(unk_0x0031992CA618A445()) - 1f) > 0.15f && unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), Global_69607.f_484[Local_402.f_0])))) || ((unk_0x76B3C79DE564AFC6(Global_69607.f_484[Local_402.f_0]) && unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445())) && unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Global_69607.f_484[Local_402.f_0], 1))) || (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()) && unk_0x292D1BF190062D1C(unk_0x0031992CA618A445()))) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || func_188(0) != bLocal_1018) || bLocal_854) || func_187(-1082130432))
		{
			iLocal_654 = 99;
		}
	}
	switch (iLocal_654)
	{
		case 0:
			if ((((!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1())) && !Global_68165) && !bLocal_854) && !unk_0x5114FCEE2A997B95())
			{
				if ((((((((((Local_402.f_29.f_80 && Local_402.f_2 == 0) && (Global_69607.f_592[0] != -1 || func_186() != 0)) && Local_402.f_0 != -1) && !iLocal_1016) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(14)) && !func_187(-1082130432))
				{
					if (iLocal_656 != -1)
					{
					}
					else if (func_66(Local_402.f_0, 0) && func_66(Local_402.f_0, 5))
					{
						if ((unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, 1, 0) && !unk_0x131923625B9C806C(unk_0x0031992CA618A445())) && !unk_0x6781178AD73D2128(unk_0x0031992CA618A445()))
						{
							if ((!unk_0x76B3C79DE564AFC6(Global_69607.f_484[Local_402.f_0]) || !unk_0x432757A9E7AAFA96(Global_69607.f_484[Local_402.f_0], 0)) || (!unk_0x723F14FB94D6F22C(unk_0x0031992CA618A445(), Global_69607.f_484[Local_402.f_0]) && !unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Global_69607.f_484[Local_402.f_0], 1)))
							{
								iVar183 = func_186();
								iVar184 = 0;
								while (iVar184 < iVar183)
								{
									if (func_63(func_182(iVar184)))
									{
										iVar182++;
									}
									iVar184++;
								}
								iVar181 = 0;
								while (iVar181 < Global_69607.f_592)
								{
									if (Global_69607.f_592[iVar181] != -1)
									{
										if ((func_181(Global_69607.f_592[iVar181], iLocal_672) && Global_104439.f_32291.f_1982[iLocal_672 /*939*/].f_626[Global_69607.f_592[iVar181]] == -15) && (Global_69607.f_592[iVar181] != 200 || !Global_104439.f_24934.f_7))
										{
											iVar182++;
										}
									}
									iVar181++;
								}
								if (iVar182 > 0)
								{
									if (!unk_0x068C69D0643C4B95())
									{
										iLocal_856 = 1;
										if (Local_402.f_6 == 3)
										{
											func_180(&iLocal_655, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
										}
										else
										{
											func_180(&iLocal_655, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
										}
										bLocal_1018 = func_188(0);
										iLocal_654++;
									}
								}
								else if (!iLocal_856)
								{
									if (Local_402.f_6 == 0)
									{
										if (!unk_0x068C69D0643C4B95() || func_179("HANGAR_NO"))
										{
											func_178("HANGAR_NO", -1);
											StringCopy(&cLocal_1019, "HANGAR_NO", 16);
										}
										bVar179 = true;
									}
									else if (Local_402.f_6 == 1)
									{
										if (!unk_0x068C69D0643C4B95() || func_179("MARINA_NO"))
										{
											func_178("MARINA_NO", -1);
											StringCopy(&cLocal_1019, "MARINA_NO", 16);
										}
										bVar179 = true;
									}
									else if (Local_402.f_6 == 2)
									{
										if (!unk_0x068C69D0643C4B95() || func_179("HELIPAD_NO"))
										{
											func_178("HELIPAD_NO", -1);
											StringCopy(&cLocal_1019, "HELIPAD_NO", 16);
										}
										bVar179 = true;
									}
									else if (Local_402.f_6 == 3)
									{
										StringCopy(&Var185, "CAR_GAR_NO", 16);
										if (unk_0x6EC0C21CF01F429C() || unk_0x43F4A6D2081CC5ED())
										{
											StringConCat(&Var185, "_1", 16);
										}
										else if (unk_0x8BCF3CDD10AB0F3C() || unk_0x9D3EA2635512FD6B())
										{
											StringConCat(&Var185, "_2", 16);
										}
										if (!unk_0x068C69D0643C4B95() || func_179(&Var185))
										{
											func_178(&Var185, -1);
											cLocal_1019 = { Var185 };
										}
										bVar179 = true;
									}
								}
							}
						}
						else
						{
							iLocal_856 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && func_176(0, -1, 0))
			{
				if (iLocal_656 != -1)
				{
					iLocal_654 = 0;
					return;
				}
				if (func_175(iLocal_655, 1))
				{
					unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
					if (unk_0xE2378BA63E191ED9(unk_0x72A1F054E4BCA1A8()) == 4)
					{
						unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
					}
					else
					{
						unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 256);
					}
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						if (unk_0x432757A9E7AAFA96(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 0))
						{
							unk_0xF73BCDB7C058F04E(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 0);
						}
					}
					func_174();
					iLocal_657 = 0;
					iLocal_658 = 0;
					iLocal_659 = 0;
					iLocal_645 = -1;
					iLocal_654++;
					return;
				}
			}
			break;
		
		case 2:
			if (!iLocal_657 || iLocal_658)
			{
				func_173(0);
				func_172(1, 4, 0, 0, 0);
				func_171(1, 2, 1, 1, 1);
				func_170("WEB_VEH_TITLE");
				iVar189 = 0;
				while (iVar189 < iLocal_646)
				{
					iLocal_646[iVar189] = 0;
					iVar189++;
				}
				iVar190 = -1;
				iVar191 = 0;
				func_60(&(Local_402.f_8), Local_402.f_0);
				iVar193 = 0;
				iVar194 = func_186();
				iVar192 = 0;
				while (iVar192 < iVar194)
				{
					if (func_63(func_182(iVar192)))
					{
						if (iVar190 == -1)
						{
							iVar190 = iVar193;
						}
						if (Local_402.f_8.f_4 == func_182(iVar192))
						{
							iLocal_645 = iVar193;
							iVar191 = 1;
						}
						iVar193++;
					}
					iVar192++;
				}
				iVar192 = 0;
				while (iVar192 < Global_69607.f_592)
				{
					if (Global_69607.f_592[iVar192] != -1)
					{
						if ((func_181(Global_69607.f_592[iVar192], iLocal_672) && Global_104439.f_32291.f_1982[iLocal_672 /*939*/].f_626[Global_69607.f_592[iVar192]] == -15) && (Global_69607.f_592[iVar192] != 200 || !Global_104439.f_24934.f_7))
						{
							func_134(Global_69607.f_592[iVar192], &Var0, 0, iLocal_672, -1);
							if (iVar190 == -1)
							{
								iVar190 = iVar193;
							}
							if (Local_402.f_8.f_4 == Var0.f_66)
							{
								iLocal_645 = iVar193;
								iVar191 = 1;
							}
							iVar193++;
						}
					}
					iVar192++;
				}
				if (iLocal_645 == -1)
				{
					iLocal_645 = iVar190;
				}
				iVar193 = 0;
				iVar194 = func_186();
				iVar192 = 0;
				while (iVar192 < iVar194)
				{
					if (func_63(func_182(iVar192)))
					{
						unk_0xCD7E92DE2BFA0B0D(&(iLocal_646[(iVar193 / 32)]), (iVar193 % 32));
						func_130(iVar193, unk_0x0C9AAE7EC92AB471(func_182(iVar192)), 0, 1, 0, 0);
						if ((iLocal_645 == iVar193 && iVar191) && Local_402.f_6 != 3)
						{
							func_129(iVar193, 4, 0);
						}
						else
						{
							func_129(iVar193, 0, 0);
						}
						iVar193++;
					}
					iVar192++;
				}
				iVar192 = 0;
				while (iVar192 < Global_69607.f_592)
				{
					if (Global_69607.f_592[iVar192] != -1)
					{
						if ((func_181(Global_69607.f_592[iVar192], iLocal_672) && Global_104439.f_32291.f_1982[iLocal_672 /*939*/].f_626[Global_69607.f_592[iVar192]] == -15) && (Global_69607.f_592[iVar192] != 200 || !Global_104439.f_24934.f_7))
						{
							unk_0xCD7E92DE2BFA0B0D(&(iLocal_646[(iVar193 / 32)]), (iVar193 % 32));
							func_134(Global_69607.f_592[iVar192], &Var0, 0, iLocal_672, -1);
							if (Global_69607.f_592[iVar192] != 164)
							{
								func_130(iVar193, func_127(Global_69607.f_592[iVar192]), 0, 1, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_130(iVar193, "TWOSTRINGS", 2, 1, 0, 0);
								func_124(func_127(Global_69607.f_592[iVar192]), 0);
								func_124("VNX_SWFTC", 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_130(iVar193, "TWOSTRINGS", 2, 1, 0, 0);
								func_124(func_127(Global_69607.f_592[iVar192]), 0);
								func_124("VNX_SWFTB", 0);
							}
							else
							{
								func_130(iVar193, func_127(Global_69607.f_592[iVar192]), 0, 1, 0, 0);
							}
							if (iLocal_645 == iVar193 && iVar191)
							{
								func_129(iVar193, 4, 0);
							}
							else
							{
								func_129(iVar193, 0, 0);
							}
							iVar193++;
						}
					}
					iVar192++;
				}
				func_123(iLocal_645, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar180 = 0;
				if (unk_0x20551D6D924ED04B())
				{
					if (unk_0x8A984DAE7D3362C5(2))
					{
						unk_0xC9621A9AD282CC14(0, 1, 1);
						unk_0xC9621A9AD282CC14(0, 2, 1);
						unk_0xC9621A9AD282CC14(2, 200, 1);
						unk_0x14C5CBCF9E6EB7B5(0, 237, 1);
						unk_0x14C5CBCF9E6EB7B5(0, 238, 1);
						unk_0x14C5CBCF9E6EB7B5(0, 241, 1);
						unk_0x14C5CBCF9E6EB7B5(0, 242, 1);
						func_120(0, 0, 0, 1);
						func_119(0, -1, 1);
						if (func_118())
						{
							if (Global_2606874 != iLocal_645)
							{
								unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_645 = Global_2606874;
								func_123(iLocal_645, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar180 = 1;
							}
						}
					}
				}
				if (unk_0xD887E21676314450(2, 188) || unk_0xD887E21676314450(2, 241))
				{
					iLocal_660 = 1;
					unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar195 = (iLocal_645 - 1);
					while (iVar195 >= 0)
					{
						if (unk_0x2A3398C6222EB190(iLocal_646[(iVar195 / 32)], (iVar195 % 32)))
						{
							iLocal_645 = iVar195;
							bVar196 = true;
							iVar195 = 0;
						}
						iVar195 = (iVar195 + -1);
					}
					if (!bVar196)
					{
						iVar195 = (iLocal_646 * 32 - 1);
						while (iVar195 >= iLocal_645 + 1)
						{
							if (unk_0x2A3398C6222EB190(iLocal_646[(iVar195 / 32)], (iVar195 % 32)))
							{
								iLocal_645 = iVar195;
								bVar196 = true;
								iVar195 = 0;
							}
							iVar195 = (iVar195 + -1);
						}
					}
					if (bVar196)
					{
						func_123(iLocal_645, 1, 1);
					}
				}
				else if (unk_0xD887E21676314450(2, 187) || unk_0xD887E21676314450(2, 242))
				{
					iLocal_660 = 1;
					unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar197 = iLocal_645 + 1;
					while (iVar197 <= (iLocal_646 * 32 - 1))
					{
						if (unk_0x2A3398C6222EB190(iLocal_646[(iVar197 / 32)], (iVar197 % 32)))
						{
							iLocal_645 = iVar197;
							bVar198 = true;
							iVar197 = iLocal_646 * 32 + 1;
						}
						iVar197++;
					}
					if (!bVar198)
					{
						iVar197 = 0;
						while (iVar197 <= (iLocal_645 - 1))
						{
							if (unk_0x2A3398C6222EB190(iLocal_646[(iVar197 / 32)], (iVar197 % 32)))
							{
								iLocal_645 = iVar197;
								bVar198 = true;
								iVar197 = iLocal_646 * 32 + 1;
							}
							iVar197++;
						}
					}
					if (bVar198)
					{
						func_123(iLocal_645, 1, 1);
					}
				}
				else if (unk_0xBF946CEEECD8C935(2, 201) || iVar180 == 1)
				{
					bVar199 = false;
					iVar180 = 0;
					unk_0x18F1BFAF88AC511B(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar201 = 0;
					iVar202 = func_186();
					iVar200 = 0;
					while (iVar200 < iVar202)
					{
						if (func_63(func_182(iVar200)))
						{
							if (iLocal_645 == iVar201 && (((((Local_402.f_8.f_4 != func_182(iVar200) || !unk_0x76B3C79DE564AFC6(Global_69607.f_484[Local_402.f_0])) || !unk_0x432757A9E7AAFA96(Global_69607.f_484[Local_402.f_0], 0)) || Local_402.f_0 == 21) || Local_402.f_0 == 22) || Local_402.f_0 == 23))
							{
								bVar199 = true;
								if ((((!iLocal_659 && Local_402.f_8.f_4 != func_182(iVar200)) || (!iLocal_659 && Local_402.f_0 == 21)) || (!iLocal_659 && Local_402.f_0 == 22)) || (!iLocal_659 && Local_402.f_0 == 23))
								{
									func_117("VEH_SELECT_CNFA", 0, 0);
									func_116(-1);
									func_115(201, "ITEM_YES", -1);
									func_115(202, "ITEM_NO", -1);
									iLocal_659 = 1;
									iVar200 = func_186() + 1;
								}
								else if (Local_402.f_6 == 3)
								{
									if (func_114(func_182(iVar200)))
									{
										iLocal_1017 = func_182(iVar200);
										iLocal_657 = 0;
										iLocal_658 = 0;
										iLocal_651 = 0;
										iLocal_654++;
									}
									else
									{
										iLocal_1016 = 1;
										iLocal_1017 = func_182(iVar200);
										iLocal_654 = 99;
									}
								}
								else if (Local_402.f_6 == 0 && func_114(func_182(iVar200)))
								{
									iLocal_1017 = func_182(iVar200);
									iLocal_657 = 0;
									iLocal_658 = 0;
									iLocal_651 = 0;
									iLocal_654++;
								}
								else
								{
									if (unk_0x76B3C79DE564AFC6(Global_69607.f_484[Local_402.f_0]))
									{
										unk_0x1581691D748490F3(Global_69607.f_484[Local_402.f_0], 0, 1);
										unk_0xE9F8539D5AF6B052(&(Global_69607.f_484[Local_402.f_0]));
									}
									Var101.f_66 = func_182(iVar200);
									unk_0xCD7E92DE2BFA0B0D(&(Var101.f_77), 14);
									func_111(Local_402.f_0, &Var101, 0f, 0f, 0f, -1f, 145);
									func_110(Local_402.f_0);
									func_60(&(Local_402.f_8), Local_402.f_0);
									iVar200 = func_186() + 1;
									iLocal_658 = 1;
								}
							}
							iVar201++;
						}
						iVar200++;
					}
					if (!bVar199)
					{
						iVar200 = 0;
						while (iVar200 < Global_69607.f_592)
						{
							if (Global_69607.f_592[iVar200] != -1)
							{
								if ((func_181(Global_69607.f_592[iVar200], iLocal_672) && Global_104439.f_32291.f_1982[iLocal_672 /*939*/].f_626[Global_69607.f_592[iVar200]] == -15) && (Global_69607.f_592[iVar200] != 200 || !Global_104439.f_24934.f_7))
								{
									func_134(Global_69607.f_592[iVar200], &Var0, 0, iLocal_672, -1);
									if (iLocal_645 == iVar201 && ((Local_402.f_8.f_4 != Var0.f_66 || !unk_0x76B3C79DE564AFC6(Global_69607.f_484[Local_402.f_0])) || !unk_0x432757A9E7AAFA96(Global_69607.f_484[Local_402.f_0], 0)))
									{
										bVar199 = true;
										if (!iLocal_659)
										{
											if (Local_402.f_6 == 3)
											{
												func_117("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_117("VEH_SELECT_CNFA", 0, 0);
											}
											func_116(-1);
											func_115(201, "ITEM_YES", -1);
											func_115(202, "ITEM_NO", -1);
											iLocal_659 = 1;
											iVar200 = Global_69607.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_654 = 3;
											iLocal_658 = 1;
											iVar200 = Global_69607.f_592 + 1;
										}
										else
										{
											if (unk_0x76B3C79DE564AFC6(Global_69607.f_484[Local_402.f_0]))
											{
												unk_0x1581691D748490F3(Global_69607.f_484[Local_402.f_0], 0, 1);
												unk_0xE9F8539D5AF6B052(&(Global_69607.f_484[Local_402.f_0]));
											}
											func_134(Global_69607.f_592[iVar200], &Var0, 0, iLocal_672, -1);
											unk_0xCD7E92DE2BFA0B0D(&(Var0.f_77), 14);
											if (unk_0xF9CDF5CA6A1D6756(Var0.f_66))
											{
												unk_0xCD7E92DE2BFA0B0D(&(Var0.f_77), 22);
											}
											func_111(Local_402.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
											func_110(Local_402.f_0);
											func_60(&(Local_402.f_8), Local_402.f_0);
											iVar200 = Global_69607.f_592 + 1;
											iLocal_658 = 1;
										}
									}
									iVar201++;
								}
							}
							iVar200++;
						}
					}
				}
				else if (unk_0xBF946CEEECD8C935(2, 202) || unk_0xBF946CEEECD8C935(2, 238))
				{
					unk_0x18F1BFAF88AC511B(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (iLocal_659)
					{
						iLocal_660 = 1;
						iLocal_659 = 0;
					}
					else
					{
						iLocal_654 = 99;
					}
				}
			}
			unk_0x7CDDB154852DA508();
			if (iLocal_660)
			{
				func_117("", 0, 0);
				func_116(-1);
				func_115(201, "ITEM_SELECT", -1);
				func_115(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			func_73(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 3:
			if (!iLocal_657 || iLocal_658)
			{
				func_173(0);
				func_172(1, 0, 0, 0, 0);
				func_171(1, 1, 1, 1, 1);
				iVar203 = 0;
				while (iVar203 < iLocal_652)
				{
					iLocal_652[iVar203] = 0;
					iVar203++;
				}
				func_170("WEB_VEH_TITLE2");
				iVar203 = 0;
				while (iVar203 < 25)
				{
					StringCopy(&Var204, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var204, iVar203, 16);
					func_130(iVar203, &Var204, 0, 1, 0, 0);
					unk_0xCD7E92DE2BFA0B0D(&(iLocal_652[(iVar203 / 32)]), (iVar203 % 32));
					iVar203++;
				}
				if (Local_674.f_12 == 0)
				{
					iLocal_651 = Global_104439.f_25043.f_313[200];
				}
				else if (Local_674.f_12 == 1)
				{
					iLocal_651 = Global_104439.f_25043.f_626[200];
				}
				else
				{
					iLocal_651 = Global_104439.f_25043.f_939[200];
				}
				func_123(iLocal_651, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar180 = 0;
				if (unk_0x20551D6D924ED04B())
				{
					if (unk_0x8A984DAE7D3362C5(2))
					{
						unk_0xC9621A9AD282CC14(0, 1, 1);
						unk_0xC9621A9AD282CC14(0, 2, 1);
						unk_0x14C5CBCF9E6EB7B5(0, 237, 1);
						unk_0x14C5CBCF9E6EB7B5(0, 238, 1);
						unk_0x14C5CBCF9E6EB7B5(0, 241, 1);
						unk_0x14C5CBCF9E6EB7B5(0, 242, 1);
						func_120(0, 0, 0, 1);
						func_119(0, -1, 1);
						if (func_118())
						{
							if (Global_2606874 != iLocal_651)
							{
								unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_651 = Global_2606874;
								func_123(iLocal_651, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar180 = 1;
							}
						}
					}
				}
				if (unk_0xD887E21676314450(2, 188) || unk_0xD887E21676314450(2, 241))
				{
					iLocal_660 = 1;
					unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar208 = (iLocal_651 - 1);
					while (iVar208 >= 0)
					{
						if (unk_0x2A3398C6222EB190(iLocal_652[(iVar208 / 32)], (iVar208 % 32)))
						{
							iLocal_651 = iVar208;
							bVar209 = true;
							iVar208 = 0;
						}
						iVar208 = (iVar208 + -1);
					}
					if (!bVar209)
					{
						iVar208 = 31;
						while (iVar208 >= iLocal_651 + 1)
						{
							if (unk_0x2A3398C6222EB190(iLocal_652[(iVar208 / 32)], (iVar208 % 32)))
							{
								iLocal_651 = iVar208;
								bVar209 = true;
								iVar208 = iLocal_651;
							}
							iVar208 = (iVar208 + -1);
						}
					}
					if (bVar209)
					{
						func_123(iLocal_651, 1, 1);
					}
				}
				else if (unk_0xD887E21676314450(2, 187) || unk_0xD887E21676314450(2, 242))
				{
					iLocal_660 = 1;
					unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar210 = iLocal_651 + 1;
					while (iVar210 <= 31)
					{
						if (unk_0x2A3398C6222EB190(iLocal_652[(iVar210 / 32)], (iVar210 % 32)))
						{
							iLocal_651 = iVar210;
							bVar211 = true;
							iVar210 = 31;
						}
						iVar210++;
					}
					if (!bVar211)
					{
						iVar210 = 0;
						while (iVar210 <= (iLocal_651 - 1))
						{
							if (unk_0x2A3398C6222EB190(iLocal_652[(iVar210 / 32)], (iVar210 % 32)))
							{
								iLocal_651 = iVar210;
								bVar211 = true;
								iVar210 = iLocal_651;
							}
							iVar210++;
						}
					}
					if (bVar211)
					{
						func_123(iLocal_651, 1, 1);
					}
				}
				else if (unk_0xBF946CEEECD8C935(2, 201) || iVar180 == 1)
				{
					iVar180 = 0;
					unk_0x18F1BFAF88AC511B(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (unk_0x76B3C79DE564AFC6(Global_69607.f_484[Local_402.f_0]))
					{
						unk_0x1581691D748490F3(Global_69607.f_484[Local_402.f_0], 0, 1);
						unk_0xE9F8539D5AF6B052(&(Global_69607.f_484[Local_402.f_0]));
					}
					uVar212 = iLocal_651 + 1;
					if (iLocal_672 == 0)
					{
						Global_104439.f_25043.f_313[200] = uVar212;
					}
					else if (iLocal_672 == 1)
					{
						Global_104439.f_25043.f_626[200] = uVar212;
					}
					else if (iLocal_672 == 2)
					{
						Global_104439.f_25043.f_939[200] = uVar212;
					}
					func_134(200, &Var0, 0, iLocal_672, -1);
					unk_0xCD7E92DE2BFA0B0D(&(Var0.f_77), 14);
					if (unk_0xF9CDF5CA6A1D6756(Var0.f_66))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Var0.f_77), 22);
					}
					func_111(Local_402.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
					func_110(Local_402.f_0);
					func_60(&(Local_402.f_8), Local_402.f_0);
					iLocal_658 = 1;
					iLocal_654 = 2;
				}
				else if (unk_0xBF946CEEECD8C935(2, 202) || unk_0xBF946CEEECD8C935(2, 238))
				{
					unk_0x18F1BFAF88AC511B(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iLocal_657 = 0;
					iLocal_658 = 0;
					iLocal_654 = (iLocal_654 - 1);
				}
			}
			unk_0x7CDDB154852DA508();
			if (iLocal_660)
			{
				func_117("", 0, 0);
				func_116(-1);
				func_115(201, "ITEM_SELECT", -1);
				func_115(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			func_73(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
			}
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				if (unk_0x432757A9E7AAFA96(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 0))
				{
					if (!unk_0x918C71A227AB80A9())
					{
						unk_0xF73BCDB7C058F04E(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1);
					}
				}
			}
			func_70(1, -1);
			iLocal_654 = 0;
			func_68(&iLocal_655);
			iLocal_655 = -1;
			break;
	}
	if (!bVar179 && unk_0x068C69D0643C4B95())
	{
		if (!unk_0x0BD3CCFB6C6CFA91(&cLocal_1019))
		{
			if ((((func_179("HANGAR_NO") || func_179("MARINA_NO")) || func_179("HELIPAD_NO")) || func_179("CAR_GAR_NO_1")) || func_179("CAR_GAR_NO_2"))
			{
				unk_0x8C361F37C04084F4(1);
			}
			StringCopy(&cLocal_1019, "", 16);
		}
	}
}

void func_68(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_69(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36516[iVar0 /*32*/])
		{
			Global_36516[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_69(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36516[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_70(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_72(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7931)
	{
		unk_0xC030DF4B187326D7(15);
		Global_17290.f_7931 = 0;
	}
	unk_0x4288569892059474(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x84D19A34E1A97ABC(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0x40C8D24AE8508DEC("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0x40C8D24AE8508DEC("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_71(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_71(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x77FA56883245AD26(*uParam0))
		{
			unk_0x7F165E259CFAC8B8(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_72(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x27CA09C6DFAB1E79() && unk_0x93BDC21B9F2C5E43())
		{
			iParam2 = unk_0xFBECB0811993DE21();
		}
	}
	StringCopy(&cVar0, unk_0x49CAADAD1ABAB70A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x50B7853132D8438E(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17290.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17290.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_73(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	float fVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	int iVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	float fVar64;
	char cVar65[64];
	char cVar81[64];
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (!func_72(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_107(0, bParam6))
	{
		return;
	}
	unk_0x661705F074A804D1(76, 84);
	unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_17290)
	{
		if (func_105(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar57 = fVar36;
			fVar58 = fVar35;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_17290 = 0;
		}
	}
	if (unk_0x50B7853132D8438E(&(Global_17290.f_1)) == unk_0x50B7853132D8438E("HIDE"))
	{
		fVar59 = Global_17288;
	}
	else
	{
		fVar59 = (((Global_17288 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17289;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		unk_0xD9151D5BCEE2689C(&iVar60, &iVar61);
		fVar63 = unk_0x5E61619C36D9095B(0);
		if (func_104())
		{
			iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) * fVar63));
		}
		fVar64 = (unk_0xBBDA792448DB5A89(iVar60) / unk_0xBBDA792448DB5A89(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_104())
		{
			fVar62 = 1f;
		}
		iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) / fVar62));
		iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) / fVar62));
	}
	else
	{
		unk_0x68824FF629FFAE6D(&iVar60, &iVar61);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17290.f_5598)
		{
			if (unk_0x50B7853132D8438E(&(Global_17290.f_1)) == unk_0x50B7853132D8438E("HIDE"))
			{
				fVar50 = Global_17288;
			}
			else
			{
				if (Global_17290)
				{
					StringCopy(&cVar65, func_103(29), 64);
					StringCopy(&cVar81, func_100(29, 1), 64);
					if (unk_0x50B7853132D8438E(&(Global_17290.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_99(Global_17287, Global_17288, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						unk_0x1638116285563DAD(&cVar65, &cVar81, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x1638116285563DAD(&cVar65, &cVar81, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17290.f_7901)
				{
					iVar1 = Global_17290.f_7897;
					iVar2 = Global_17290.f_7898;
					iVar3 = Global_17290.f_7899;
					iVar4 = Global_17290.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_99(Global_17287, (Global_17288 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar50 = (((Global_17288 + fVar57) + 0.034722f) + 0f);
				if (unk_0x50B7853132D8438E(&(Global_17290.f_1)) != 0)
				{
					func_98();
					unk_0x0B8B91F21AE25854(&(Global_17290.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68)
					{
						if (Global_17290.f_5[iVar14] == 2)
						{
							unk_0x96577CAA1D1E72DB(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3)
						{
							unk_0x5E66471E79E6D3ED(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1)
						{
							unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8)
						{
							unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5)
						{
							unk_0x50B3C23D0902259F(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6)
						{
							unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7)
						{
							unk_0x50B3C23D0902259F(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9)
						{
							unk_0x50B3C23D0902259F(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x7E43DE6F9866B44B((Global_17287 + 0.00390625f), ((Global_17288 + fVar57) + 0.00416664f), 0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095)
				{
					if (Global_17290.f_5604 != 0)
					{
						func_98();
						func_96((((Global_17287 + fParam5) - 0.00390625f) - func_97("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603)), ((Global_17288 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar97 = fVar50;
			if (Global_17290.f_7911)
			{
				iVar1 = Global_17290.f_7907;
				iVar2 = Global_17290.f_7908;
				iVar3 = Global_17290.f_7909;
				iVar4 = Global_17290.f_7910;
			}
			else
			{
				unk_0xB922891BFD232C45(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17290.f_5355[iVar6])
					{
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605)
						{
							fVar50 = (fVar50 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar56 = Global_17290.f_5612[iVar6];
						}
						fVar50 = (fVar50 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar56 = 0.034722f;
					fVar50 = (fVar50 + fVar56);
					iVar9++;
					if (Global_17290.f_5088 <= 1)
					{
						Global_17290.f_5088++;
					}
					iVar54 = 1;
				}
			}
			unk_0x1638116285563DAD("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar97 + ((fVar50 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar50 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095)
			{
				if (Global_17290.f_7916)
				{
					iVar1 = Global_17290.f_7912;
					iVar2 = Global_17290.f_7913;
					iVar3 = Global_17290.f_7914;
					iVar4 = Global_17290.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_99(Global_17287, (fVar50 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0xB9E4A5FCB2BE22B7("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar62));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar62));
				if (Global_17290.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xB922891BFD232C45(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x1638116285563DAD("CommonMenu", "shop_arrows_upANDdown", (Global_17287 + (fParam5 * 0.5f)), ((fVar50 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar62), ((Var37.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar50 = (fVar50 + (0f + 0.034722f));
			}
			if (unk_0x50B7853132D8438E(&(Global_17290.f_4562)) != 0 && Global_17290.f_4636 != -1)
			{
				fVar50 = (fVar50 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_17290.f_4638 != 0)
				{
					func_105(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_95(fVar41);
				unk_0x1099CBF49396B795(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x96577CAA1D1E72DB(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x5E66471E79E6D3ED(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDCC26C786B8D41DB(fVar41, (fVar50 + 0.00277776f));
				unk_0xB922891BFD232C45(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_99(Global_17287, (fVar50 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7921)
				{
					iVar1 = Global_17290.f_7917;
					iVar2 = Global_17290.f_7918;
					iVar3 = Global_17290.f_7919;
					iVar4 = Global_17290.f_7920;
				}
				else
				{
					unk_0xB922891BFD232C45(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x1638116285563DAD("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar50 + ((((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_95(fVar41);
				unk_0x0B8B91F21AE25854(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x96577CAA1D1E72DB(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x5E66471E79E6D3ED(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x7E43DE6F9866B44B(fVar41, (fVar50 + 0.00277776f), 0);
				if (Global_17290.f_4638 != 0)
				{
					func_105(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_94(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48, &iVar49);
					unk_0x1638116285563DAD(func_103(Global_17290.f_4638), func_100(Global_17290.f_4638, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar50 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
				}
				fVar50 = (fVar50 + (((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17290.f_4636 > 0)
				{
					if ((unk_0x31CD6E9F83C10233() - Global_17290.f_4637) > Global_17290.f_4636)
					{
						StringCopy(&(Global_17290.f_4562), "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (unk_0x50B7853132D8438E(&(Global_2606798.f_21)) != 0 && Global_2606798.f_65 != -1)
			{
				fVar50 = (fVar50 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_2606798.f_67 != 0)
				{
					func_105(Global_2606798.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_95(fVar41);
				unk_0x1099CBF49396B795(&(Global_2606798.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2606798.f_61)
				{
					if (Global_2606798.f_25[iVar14] == 2)
					{
						unk_0x96577CAA1D1E72DB(Global_2606798.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2606798.f_25[iVar14] == 3)
					{
						unk_0x5E66471E79E6D3ED(Global_2606798.f_34[iVar16], Global_2606798.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2606798.f_25[iVar14] == 1)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 5)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 6)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 7)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 9)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 8)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDCC26C786B8D41DB(fVar41, (fVar50 + 0.00277776f));
				unk_0xB922891BFD232C45(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_99(Global_17287, (fVar50 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7921)
				{
					iVar1 = Global_17290.f_7917;
					iVar2 = Global_17290.f_7918;
					iVar3 = Global_17290.f_7919;
					iVar4 = Global_17290.f_7920;
				}
				else
				{
					unk_0xB922891BFD232C45(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x1638116285563DAD("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar50 + ((((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_95(fVar41);
				unk_0x0B8B91F21AE25854(&(Global_2606798.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2606798.f_61)
				{
					if (Global_2606798.f_25[iVar14] == 2)
					{
						unk_0x96577CAA1D1E72DB(Global_2606798.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2606798.f_25[iVar14] == 3)
					{
						unk_0x5E66471E79E6D3ED(Global_2606798.f_34[iVar16], Global_2606798.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2606798.f_25[iVar14] == 1)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 8)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 5)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 6)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 7)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 9)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x7E43DE6F9866B44B(fVar41, (fVar50 + 0.00277776f), 0);
				if (Global_2606798.f_67 != 0)
				{
					func_105(Global_2606798.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_94(Global_2606798.f_67, 1, &iVar46, &iVar47, &iVar48, &iVar49);
					unk_0x1638116285563DAD(func_103(Global_2606798.f_67), func_100(Global_2606798.f_67, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar50 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
				}
				fVar50 = (fVar50 + (((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2606798.f_65 > 0)
				{
					if ((unk_0x31CD6E9F83C10233() - Global_2606798.f_66) > Global_2606798.f_65)
					{
						StringCopy(&(Global_2606798.f_21), "", 16);
						Global_2606798.f_65 = -1;
					}
				}
			}
			func_86(iVar60, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x661705F074A804D1(76, 84);
			unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17290.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_17290.f_5088;
			if (Global_17290.f_5599)
			{
				iVar98 = (Global_17290.f_5602 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f)
				{
					fVar56 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599)
				{
					iVar6 = Global_17290.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17290.f_5605 && iVar9 < Global_17290.f_5095)
				{
					bVar32 = true;
					if (Global_17290.f_5606 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_17290.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17287 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					if (Global_17290.f_7923)
					{
						unk_0xB922891BFD232C45(Global_17290.f_7922, &iVar101, &iVar102, &iVar103, &iVar104);
					}
					else
					{
						unk_0xB922891BFD232C45(1, &iVar101, &iVar102, &iVar103, &iVar104);
					}
					unk_0x1638116285563DAD("CommonMenu", "Gradient_Nav", (Global_17287 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar101, iVar102, iVar103, iVar104, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar54 && iVar7 == iVar98)
				{
					func_84(bVar31, 1, 0, 0, 0, 0, 0);
					unk_0x0B8B91F21AE25854("DFLT_MNU_OPT");
					unk_0x7E43DE6F9866B44B(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096)
					{
						if (unk_0x2A3398C6222EB190(Global_17290.f_4959[iVar6], iVar8) || Global_17290.f_4926[iVar8] == 5)
						{
							if (Global_17290.f_5599)
							{
								iVar19 = Global_17290.f_7568[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar20 = Global_17290.f_7609[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar21 = Global_17290.f_7650[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar22 = Global_17290.f_7691[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar23 = Global_17290.f_7732[((iVar9 * Global_17290.f_5096) + iVar8)];
							}
							else
							{
								Global_17290.f_7568[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar19;
								Global_17290.f_7609[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar20;
								Global_17290.f_7650[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar21;
								Global_17290.f_7691[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar22;
								Global_17290.f_7732[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar23;
							}
							iVar105 = 0;
							bVar55 = false;
							if (Global_17290.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[0])
								{
									bVar55 = true;
									iVar105 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[1])
								{
									bVar55 = true;
									iVar105 = 1;
								}
							}
							if (Global_17290.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17287 + 0.0046875f) + Global_17290.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17290.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17290.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17290.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17287 + Global_17289) - 0.0046875f) - fVar33);
							}
							if ((Global_17290.f_4945[iVar8] && Global_17290.f_5741) && bVar31)
							{
								bVar53 = true;
							}
							else
							{
								bVar53 = false;
							}
							switch (Global_17290.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												bVar51 = false;
												bVar52 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar52 = true;
													}
													else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar51 = true;
													}
													iVar14++;
												}
												func_84(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, iVar105, bVar52, bVar51);
												unk_0x54412EEBDB162F5C(&(Global_17290.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x7C8A7ECFBAD2C8C4(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x96577CAA1D1E72DB(Global_17290.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x5E66471E79E6D3ED(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0x51C2CBAC9E5D95A4(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_105(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17290.f_4433[(iVar22 + iVar14)] == 2 || Global_17290.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
											Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar43 = Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar53)
										{
											if (func_105(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_105(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_94(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_103(26), func_100(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
											if (func_105(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_105(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_94(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_103(27), func_100(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											bVar51 = false;
											bVar52 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar52 = true;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar51 = true;
												}
												iVar14++;
											}
											func_84(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, bVar52, bVar51);
											if (Global_17290.f_7927 && Global_17290.f_7928 == iVar6)
											{
												func_83(bVar31);
											}
											unk_0x0B8B91F21AE25854(&(Global_17290.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x7C8A7ECFBAD2C8C4(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 7;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 9;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x96577CAA1D1E72DB(Global_17290.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x5E66471E79E6D3ED(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17290.f_4433[(iVar22 + iVar28)] == 2 || Global_17290.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_105(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_105(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_94(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48, &iVar49);
															if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0x1638116285563DAD(func_103(Global_17290.f_4433[(iVar22 + iVar28)]), func_100(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															else
															{
																unk_0x1638116285563DAD(func_103(Global_17290.f_4433[(iVar22 + iVar28)]), func_100(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2)
											{
												unk_0x7E43DE6F9866B44B(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x7E43DE6F9866B44B((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17290.f_4433[(iVar22 + iVar14)] != 2 && Global_17290.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_105(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_105(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_94(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48, &iVar49);
															if (Global_17290.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x1638116285563DAD(func_103(Global_17290.f_4433[(iVar22 + iVar14)]), func_100(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (Global_17287 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															else if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0x1638116285563DAD(func_103(Global_17290.f_4433[(iVar22 + iVar14)]), func_100(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															else
															{
																unk_0x1638116285563DAD(func_103(Global_17290.f_4433[(iVar22 + iVar14)]), func_100(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_84(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
											if (Global_17290.f_7927 && Global_17290.f_7928 == iVar6)
											{
												func_83(bVar31);
											}
											unk_0x54412EEBDB162F5C("NUMBER");
											unk_0x96577CAA1D1E72DB(Global_17290.f_3918[iVar20]);
											fVar42 = unk_0x51C2CBAC9E5D95A4(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar53)
										{
											if (func_105(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_105(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_94(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_103(26), func_100(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
											if (func_105(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_105(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_94(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_103(27), func_100(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
										}
										func_84(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
										func_82((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_84(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
											if (Global_17290.f_7927 && Global_17290.f_7928 == iVar6)
											{
												func_83(bVar31);
											}
											unk_0x54412EEBDB162F5C("NUMBER");
											unk_0x5E66471E79E6D3ED(Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
											fVar42 = unk_0x51C2CBAC9E5D95A4(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar53)
										{
											if (func_105(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_105(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_94(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_103(26), func_100(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
											if (func_105(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_105(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_94(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_103(27), func_100(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
										}
										func_84(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
										func_81((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_105(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17290.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17290.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
												Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
												fVar43 = Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)];
											}
											if (bVar53)
											{
												if (func_105(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17290.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_105(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_94(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
														unk_0x1638116285563DAD(func_103(26), func_100(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
													}
												}
												if (func_105(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_105(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_94(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
														unk_0x1638116285563DAD(func_103(27), func_100(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
													}
												}
											}
											if (func_105(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_94(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48, &iVar49);
												unk_0x1638116285563DAD(func_103(Global_17290.f_4433[iVar22]), func_100(Global_17290.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), (fVar35 * func_80(Global_17290.f_4433[iVar22])), (fVar36 * func_80(Global_17290.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, iVar49, 0);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17290.f_4926[iVar8] == 5)
							{
								if (Global_17290.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								if (Global_17290.f_4945[iVar8])
								{
									if (func_105(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17290.f_7552[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_17290.f_5612[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_17290.f_5598)
					{
						Global_17290.f_5355[iVar6] = 1;
						if (Global_17290.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17290.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17290.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17290.f_5598)
			{
				Global_17290.f_5600 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_17290.f_5603 = iVar11;
				Global_17290.f_5601 = iVar10;
				Global_17290.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17290.f_5599)
	{
		Global_17290.f_5602 = iVar9;
		Global_17290.f_5599 = 1;
	}
	Global_17290.f_5743 = fVar50;
	Global_17290.f_5745 = unk_0x31CD6E9F83C10233();
	unk_0x4288569892059474(Global_17290.f_5743);
	if (!Global_17290.f_7896)
	{
		func_75(0);
	}
	Global_17290.f_7896 = 0;
	if (bParam2)
	{
		unk_0xBD1C47D856010F09(10);
	}
	unk_0xBD1C47D856010F09(6);
	unk_0xBD1C47D856010F09(7);
	unk_0xBD1C47D856010F09(9);
	unk_0xBD1C47D856010F09(8);
	if (bParam0)
	{
		func_74(1);
	}
	unk_0x26742F01C78031C2();
}

void func_74(int iParam0)
{
	Global_1356070.f_1079 = iParam0;
}

void func_75(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_79(0))
		{
			func_76(iParam0);
		}
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 2);
	}
}

void func_76(int iParam0)
{
	if (Global_14604)
	{
		func_78(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
	}
	if (unk_0xCAD6D8C85D0F329B())
	{
		unk_0x683F0CB6CA4C99D0(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 30);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 30);
	}
	if (!func_77())
	{
		Global_14443.f_1 = 3;
	}
}

int func_77()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_78(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_79(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EBACDA5E9A0E784(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x99C19CAA37B6F6D3(Global_14380);
		}
		else
		{
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
}

int func_79(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
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
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

float func_80(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_81(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x5E66471E79E6D3ED(uParam3, uParam4);
	unk_0x7E43DE6F9866B44B(fParam0, fParam1, 0);
}

void func_82(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x96577CAA1D1E72DB(iParam3);
	unk_0x7E43DE6F9866B44B(fParam0, fParam1, iParam4);
}

void func_83(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xB922891BFD232C45(Global_17290.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xB922891BFD232C45(Global_17290.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, 255);
}

void func_84(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_85(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xB922891BFD232C45(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xB922891BFD232C45(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x52D4D0409C49DF8C(155, 155, 155, 255);
		}
		else
		{
			unk_0x52D4D0409C49DF8C(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x52D4D0409C49DF8C(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x52D4D0409C49DF8C(155, 155, 155, 255);
	}
	else
	{
		unk_0x52D4D0409C49DF8C(155, 155, 155, 255);
	}
	unk_0xD1F2C9FF58856AEC(0f, 0.35f);
	unk_0x41D772AFFBD36843(1);
	if (bParam5)
	{
		unk_0xD1F2C9FF58856AEC(0f, 0.425f);
		unk_0x4E250FE9E4D8720F(4);
	}
	else if (bParam6)
	{
		unk_0xD1F2C9FF58856AEC(0f, 0.425f);
		unk_0x4E250FE9E4D8720F(6);
	}
	else
	{
		unk_0x4E250FE9E4D8720F(0);
	}
	unk_0x7A1F4BBECE23C9E3(0f, 1f);
	unk_0xAC1B647E90E8412A(0);
	unk_0xDB70E58A218CFD6A(0, 0, 0, 0, 0);
	unk_0x1EA8206824200C12(0, 0, 0, 0, 0);
}

void func_85(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_72(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_107(bParam4, bParam8))
	{
		return;
	}
	if (func_92())
	{
		return;
	}
	if (unk_0xFCFC2645B6CF6425())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_89(unk_0x3D35F9864E4640B1(), 0))
		{
			return;
		}
	}
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xB74983234B4F06A7() == 0 || unk_0xFCFC2645B6CF6425())
		{
			return;
		}
	}
	if (Global_17290.f_4639 != 0)
	{
		if (unk_0xDE25F26B6B16CF7A(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (Global_17290.f_4896[iVar1] != 355)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0xE344F89A3A395F9C(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x295E4023D39A7295(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640)
		{
			unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x90495002CD46BD88((1f - (Global_17290.f_4951 / 100f)));
			unk_0x1C703A54AB4B12F6();
			if (unk_0x20551D6D924ED04B())
			{
				unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xE8240315678FDE8E(1);
				unk_0x1C703A54AB4B12F6();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (unk_0x50B7853132D8438E(&(Global_17290.f_4834[iVar1 /*4*/])) != unk_0x50B7853132D8438E("PREV"))
				{
					unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x32F9127910F63DFA(iVar1);
					func_88(&(Global_17290.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x50B7853132D8438E(&(Global_17290.f_4834[iVar2 /*4*/])) == unk_0x50B7853132D8438E("PREV"))
					{
						func_88(&(Global_17290.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1)
					{
						func_87(&(Global_17290.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x9BC6C9E77AAC792E(&(Global_17290.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xC2D818A5754306C0(iParam2, 70);
						}
						else
						{
							unk_0x96577CAA1D1E72DB(iParam2);
						}
						unk_0xCC5EB3A492FB7D4B();
					}
					if (unk_0x20551D6D924ED04B())
					{
						if (Global_17290.f_4896[iVar1] != 355 && unk_0x2A3398C6222EB190(Global_17290.f_4922, iVar1))
						{
							unk_0xE8240315678FDE8E(1);
							unk_0x32F9127910F63DFA(Global_17290.f_4896[iVar1]);
						}
						else
						{
							unk_0xE8240315678FDE8E(0);
							unk_0x32F9127910F63DFA(355);
						}
					}
					unk_0x1C703A54AB4B12F6();
				}
				iVar1++;
			}
			if (unk_0x50B7853132D8438E(&(Global_2606798.f_16)) != unk_0x50B7853132D8438E(""))
			{
				unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x32F9127910F63DFA(Global_17290.f_4639);
				func_88(&Global_2606798);
				if (Global_2606798.f_20 == -1)
				{
					func_87(&(Global_2606798.f_16));
				}
				else
				{
					unk_0x9BC6C9E77AAC792E(&(Global_2606798.f_16));
					if (bParam5)
					{
						unk_0xC2D818A5754306C0(iParam2, 70);
					}
					else
					{
						unk_0x96577CAA1D1E72DB(iParam2);
					}
					unk_0xCC5EB3A492FB7D4B();
				}
				unk_0x1C703A54AB4B12F6();
			}
			unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(80);
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952)
			{
				unk_0x32F9127910F63DFA(1);
			}
			else
			{
				unk_0x32F9127910F63DFA(0);
			}
			unk_0x1C703A54AB4B12F6();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639)
		{
			if (Global_17290.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x32F9127910F63DFA(iVar1);
					unk_0x9BC6C9E77AAC792E(&(Global_17290.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xC2D818A5754306C0(iParam2, 70);
					}
					else
					{
						unk_0x96577CAA1D1E72DB(iParam2);
					}
					unk_0xCC5EB3A492FB7D4B();
					unk_0x1C703A54AB4B12F6();
				}
			}
			iVar1++;
		}
		if (Global_2606798.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x32F9127910F63DFA(iVar1);
				unk_0x9BC6C9E77AAC792E(&(Global_2606798.f_16));
				if (bParam5)
				{
					unk_0xC2D818A5754306C0(iParam2, 70);
				}
				else
				{
					unk_0x96577CAA1D1E72DB(iParam2);
				}
				unk_0xCC5EB3A492FB7D4B();
				unk_0x1C703A54AB4B12F6();
			}
		}
		unk_0x661705F074A804D1(76, 66);
		unk_0x399D1A0AE11E61E3(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17290.f_7931)
			{
				unk_0xB8281495D778DB56(15, 0f, -0.0375f);
				Global_17290.f_7931 = 1;
			}
		}
		else if (Global_17290.f_7931)
		{
			unk_0xC030DF4B187326D7(15);
			Global_17290.f_7931 = 0;
		}
		unk_0x26742F01C78031C2();
		if (Global_17290.f_4925)
		{
			unk_0x661705F074A804D1(82, 66);
			unk_0x399D1A0AE11E61E3(0f, 0f, 0f, 0f);
			unk_0x45822700F324A838(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x26742F01C78031C2();
		}
		else
		{
			unk_0x4237E72FB80FD332(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_87(char[4] cParam0)
{
	unk_0x9BC6C9E77AAC792E(cParam0);
	unk_0xCC5EB3A492FB7D4B();
}

void func_88(var uParam0)
{
	unk_0x8E394933209D820A(uParam0);
}

bool func_89(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_90(-1, 0) == 8;
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

int func_90(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_91();
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

int func_91()
{
	return Global_1312735;
}

int func_92()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_93())
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

int func_93()
{
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_94(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xB922891BFD232C45(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_95(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x4E250FE9E4D8720F(0);
	unk_0xD1F2C9FF58856AEC(0f, 0.35f);
	unk_0x77F7F57845720991(2);
	unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, iVar3);
	unk_0x7A1F4BBECE23C9E3(fParam0, ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0xAC1B647E90E8412A(0);
	unk_0xDB70E58A218CFD6A(0, 0, 0, 0, 0);
	unk_0x1EA8206824200C12(0, 0, 0, 0, 0);
}

void func_96(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x96577CAA1D1E72DB(uParam3);
	unk_0x96577CAA1D1E72DB(uParam4);
	unk_0x7E43DE6F9866B44B(fParam0, fParam1, 0);
}

float func_97(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x996B09F758C57FBE(sParam0))
	{
		if (unk_0x50B7853132D8438E(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_98();
	unk_0x54412EEBDB162F5C(sParam0);
	unk_0x96577CAA1D1E72DB(uParam1);
	unk_0x96577CAA1D1E72DB(uParam2);
	return unk_0x51C2CBAC9E5D95A4(1);
}

void func_98()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7906)
	{
		iVar0 = Global_17290.f_7902;
		iVar1 = Global_17290.f_7903;
		iVar2 = Global_17290.f_7904;
		iVar3 = Global_17290.f_7905;
	}
	unk_0x4E250FE9E4D8720F(0);
	unk_0xD1F2C9FF58856AEC(0f, 0.35f);
	unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, iVar3);
	unk_0x7A1F4BBECE23C9E3((Global_17287 + 0.0046875f), ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0xAC1B647E90E8412A(0);
	unk_0xDB70E58A218CFD6A(0, 0, 0, 0, 0);
	unk_0x1EA8206824200C12(0, 0, 0, 0, 0);
}

void func_99(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x45A34FA87FBE9599((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_100(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x50B7853132D8438E(&(Global_17290.f_6719[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_102(unk_0x3D35F9864E4640B1()) };
			if (unk_0xFCA40B20F5AC75B0(&Var19, &uVar3))
			{
				return func_101(&uVar3);
			}
		}
		else
		{
			return func_101(&(Global_17290.f_6719[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_101(var uParam0)
{
	return uParam0;
}

struct<13> func_102(int iParam0)
{
	struct<13> Var0;
	
	unk_0xA82433D60351864D(iParam0, &Var0, 13);
	return Var0;
}

char* func_103(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x50B7853132D8438E(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_102(unk_0x3D35F9864E4640B1()) };
			unk_0xFCA40B20F5AC75B0(&Var16, &uVar0);
			return func_101(&uVar0);
		}
		else
		{
			return func_101(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_104()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xD9151D5BCEE2689C(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_103(iParam0), 64);
	StringCopy(&cVar16, func_100(iParam0, bParam1), 64);
	if (unk_0x50B7853132D8438E(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xD9151D5BCEE2689C(&iVar32, &iVar33);
			fVar35 = unk_0x5E61619C36D9095B(0);
			if (func_104())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_104())
			{
				fVar34 = 1f;
			}
			if (unk_0x7832F791572D5809(joaat("director_mode")) > 0)
			{
				unk_0x68824FF629FFAE6D(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x68824FF629FFAE6D(&iVar32, &iVar33);
		}
		Var37 = { unk_0xB9E4A5FCB2BE22B7(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_106(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_106(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.f_0 = (Var37.f_0 - 2f);
			Var37.f_1 = (Var37.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.f_0 = 288f;
			Var37.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x50B7853132D8438E(&(Global_17290.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x3CCF948E5BFC63FE() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17289)
			{
				*fParam4 = (*fParam4 * (Global_17289 / *fParam3));
				*fParam3 = Global_17289;
			}
		}
		return 1;
	}
	return 0;
}

float func_106(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_107(bool bParam0, bool bParam1)
{
	if (Global_2434915.f_1670.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xF9FC07CC13402AEF() || (func_109(8, -1) && func_108() != 64)) || (unk_0xA095EFC51C188A82() != 0 && !bParam1)) || (unk_0x003E46CBEF6CE07A() && !bParam0)) || unk_0x744CE10646868EAC()) || Global_71045) || Global_17290.f_7930) || unk_0x0CF4609684193305()) || Global_92814.f_1369)
	{
		return 0;
	}
	return 1;
}

int func_108()
{
	return Global_1312788;
}

bool func_109(int iParam0, int iParam1)
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

void func_110(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_69607[iParam0] = 0;
	Global_69607.f_69[iParam0] = 0;
}

void func_111(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_60(&(Global_69607.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x2A3398C6222EB190(Global_69607.f_555[0 /*21*/].f_9, 10))
		{
			func_113(iParam0);
			func_112(uParam1, &(Global_104439.f_32291.f_69[Global_69607.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x2A3398C6222EB190(Global_69607.f_555[0 /*21*/].f_9, 11))
			{
				Global_104439.f_32291.f_1864[Global_69607.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_104439.f_32291.f_1934[Global_69607.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_104439.f_32291.f_1864[Global_69607.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_104439.f_32291.f_1934[Global_69607.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_104439.f_32291.f_1958[Global_69607.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_411(iParam0, 1);
		}
	}
}

void func_112(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_113(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_60(&(Global_69607.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x76B3C79DE564AFC6(Global_69607.f_139[iParam0]))
		{
			unk_0x1581691D748490F3(Global_69607.f_139[iParam0], 1, 1);
			unk_0x28BB69BE14577487(&(Global_69607.f_139[iParam0]));
			Global_69607.f_139[iParam0] = 0;
		}
		if (unk_0x2A3398C6222EB190(Global_69607.f_555[0 /*21*/].f_9, 13))
		{
			func_411(iParam0, 0);
		}
	}
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

void func_115(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xE344F89A3A395F9C(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2606798, sVar0, 64);
		StringCopy(&(Global_2606798.f_16), sParam1, 16);
		Global_2606798.f_20 = iParam2;
		return;
		return;
	}
	unk_0xD804ACF2A7171150(&(Global_17290.f_4922), Global_17290.f_4639);
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

void func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17290.f_4834[iVar0 /*4*/]), "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 355;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	Global_17290.f_4922 = 0;
	StringCopy(&(Global_2606798.f_16), "", 16);
	Global_2606798.f_20 = -1;
	if (unk_0x20551D6D924ED04B())
	{
		if (!func_72(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0xE8240315678FDE8E(0);
		unk_0x1C703A54AB4B12F6();
	}
}

void func_117(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_4562), sParam0, 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = iParam1;
	Global_17290.f_4637 = unk_0x31CD6E9F83C10233();
	Global_17290.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
}

int func_118()
{
	if (unk_0xFF512A008EA368FF(2))
	{
		if (Global_2606874 > -1)
		{
			if (unk_0xBF946CEEECD8C935(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_119(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xFF512A008EA368FF(2))
	{
		return 0;
	}
	if (unk_0x957E53BB191CB24D() || unk_0x0CF4609684193305())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xB540BA8B3C93460F();
	}
	if (Global_2606874 == -6)
	{
		unk_0x9658C2750CEDC927(4);
		if (iParam0 && unk_0x9148803485DEDF45(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2606874 = -1;
			return 0;
		}
	}
	if (((Global_2606874 > -1 || Global_2606874 == -3) || Global_2606874 == -2) || unk_0x6D21C4D608240FA2())
	{
		unk_0x9658C2750CEDC927(1);
		return 0;
	}
	if (Global_2606874 == -1 && iParam0)
	{
		if (unk_0x9148803485DEDF45(2, 237))
		{
			unk_0x9658C2750CEDC927(4);
			Global_2606874 = -6;
			return 1;
		}
		else
		{
			unk_0x9658C2750CEDC927(3);
			return 0;
		}
	}
	unk_0x9658C2750CEDC927(1);
	return 0;
}

void func_120(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0xFF512A008EA368FF(2))
	{
		Global_2606874 = -1;
		return;
	}
	unk_0x77006C00CA8600FB(1);
	fVar0 = Global_17287;
	fVar2 = (fVar0 + Global_17289);
	fVar3 = Global_17290.f_5600;
	fVar1 = (Global_17290.f_5600 - (IntToFloat(Global_17290.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17290.f_5602 < 1)
	{
		fVar1 = (Global_17290.f_5600 - 0.034722f);
	}
	unk_0x661705F074A804D1(76, 84);
	unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x1CACB3334011FEAC(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x1CACB3334011FEAC(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x26742F01C78031C2();
	func_122();
	if (Global_2606874 == -6)
	{
		return;
	}
	Global_2606874 = -1;
	fVar7 = Global_2606868;
	fVar8 = Global_2606869;
	if (Global_17290.f_5603 > Global_17290.f_5602)
	{
		if (((Global_2606868 >= fVar0 && Global_2606868 <= fVar2) && Global_2606869 >= fVar3) && Global_2606869 < (fVar3 + fVar6))
		{
			Global_2606874 = -2;
			if (bParam3)
			{
				func_121(0);
			}
			return;
		}
		if (((Global_2606868 >= fVar0 && Global_2606868 <= fVar2) && Global_2606869 >= (fVar3 + fVar6)) && Global_2606869 < (fVar3 + 0.034722f))
		{
			Global_2606874 = -3;
			if (bParam3)
			{
				func_121(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17290.f_5603 == -1)
		{
			Global_2606874 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17290.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x661705F074A804D1(76, 84);
				unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
				func_99(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17289, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x26742F01C78031C2();
			}
		}
		Global_2606874 = Global_17290.f_7552[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2606874 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2606874 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2606874 = -4;
		return;
	}
	Global_2606874 = -1;
}

void func_121(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17287;
	fVar1 = Global_17290.f_5600;
	unk_0x661705F074A804D1(76, 84);
	unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
	if (Global_2606874 == -2)
	{
		func_99(fVar0, fVar1, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2606874 == -3)
	{
		func_99(fVar0, (fVar1 + fVar2), Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x26742F01C78031C2();
}

void func_122()
{
	Global_2606870 = Global_2606868;
	Global_2606871 = Global_2606869;
	Global_2606868 = unk_0xF227625A36477D1C(2, 239);
	Global_2606869 = unk_0xF227625A36477D1C(2, 240);
	Global_2606872 = (Global_2606868 - Global_2606870);
	Global_2606873 = (Global_2606869 - Global_2606871);
}

void func_123(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17290.f_5606 = iParam0;
	Global_17290.f_5741 = iParam2;
	if (Global_17290.f_5606 < Global_17290.f_5605)
	{
		Global_17290.f_5605 = Global_17290.f_5606;
	}
	else if ((Global_17290.f_5599 && Global_17290.f_5606 > Global_17290.f_5607) || (!Global_17290.f_5599 && Global_17290.f_5606 >= (Global_17290.f_5605 + Global_17290.f_5095)))
	{
		iVar0 = Global_17290.f_5605;
		while (iVar0 <= Global_17290.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17290.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17290.f_5095 && Global_17290.f_5605 < 128)
		{
			Global_17290.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17290.f_5605;
			while (iVar0 <= Global_17290.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17290.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17290.f_4562), "", 16);
		StringCopy(&(Global_2606798.f_21), "", 16);
	}
}

void func_124(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17290.f_5090 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 >= 4)
	{
		return;
	}
	if (Global_17290.f_5611 != 1)
	{
		return;
	}
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		return;
	}
	StringCopy(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]), sParam0, 24);
	Global_17290.f_5090++;
	Global_17290.f_2124[Global_17290.f_5609 /*5*/][Global_17290.f_5610] = 1;
	Global_17290.f_5610++;
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		fVar0 = func_126();
		if (Global_17290.f_4945[Global_17290.f_5089] && Global_17290.f_5610 == Global_17290.f_5608)
		{
			func_105(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17290.f_4938[(Global_17290.f_5089 - 1)])
		{
			Global_17290.f_4938[(Global_17290.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17290.f_5610 >= Global_17290.f_5608)
		{
			fVar3 = func_125();
			if (fVar3 > Global_17290.f_5612[Global_17290.f_5088])
			{
				Global_17290.f_5612[Global_17290.f_5088] = fVar3;
			}
		}
	}
}

float func_125()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5610)
	{
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17290.f_4433[((Global_17290.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_105(Global_17290.f_4433[((Global_17290.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x4A373026C2688C78(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x4A373026C2688C78(0.35f, 0);
}

float func_126()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17290.f_5610)
	{
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_84(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x50B7853132D8438E(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
	{
		unk_0x54412EEBDB162F5C(&(Global_17290.f_73[Global_17290.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17290.f_5610)
	{
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x50B7853132D8438E(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(Global_17290.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x50B7853132D8438E(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(Global_17290.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x50B7853132D8438E(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x96577CAA1D1E72DB(Global_17290.f_3918[((Global_17290.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x50B7853132D8438E(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x5E66471E79E6D3ED(Global_17290.f_4175[((Global_17290.f_5093 - iVar4) + iVar10)], Global_17290.f_4304[((Global_17290.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x50B7853132D8438E(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x50B3C23D0902259F(&(Global_2455648[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x50B7853132D8438E(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x7C8A7ECFBAD2C8C4(&(Global_2455648[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x50B7853132D8438E(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x50B3C23D0902259F(&(Global_2455648[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 9)
		{
			if (unk_0x50B7853132D8438E(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x50B3C23D0902259F(&(Global_2455648[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x50B7853132D8438E(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0x51C2CBAC9E5D95A4(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17290.f_4433[((Global_17290.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_105(Global_17290.f_4433[((Global_17290.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_127(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	if (func_128(iParam0, -1) == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "ZTYPE";
		
		case 1:
			return "STINGER";
		
		case 2:
			return "JB700";
		
		case 3:
			return "CHEETAH";
		
		case 4:
			return "ENTITYXF";
		
		case 5:
			return "ADDER";
		
		case 6:
			return "MONROE";
		
		case 7:
			return "COGCABRI";
		
		case 9:
			return "DODO";
		
		case 12:
			return "CUBAN800";
		
		case 13:
			return "DUSTER";
		
		case 14:
			return "LUXOR";
		
		case 10:
			return "SHAMAL";
		
		case 11:
			return "STUNT";
		
		case 113:
			return "VESTRA";
		
		case 15:
			return "FROGGER";
		
		case 16:
			return "MAVERICK";
		
		case 17:
			return "RHINO";
		
		case 18:
			return "TITAN";
		
		case 19:
			return "CARGOBOB";
		
		case 20:
			return "BUZZARD";
		
		case 21:
			return "CRUSADER";
		
		case 22:
			return "BARRACKS";
		
		case 23:
			return "MARINA";
		
		case 24:
			return "MARQUIS";
		
		case 25:
			return "JETMAX";
		
		case 26:
			return "SPEEDER";
		
		case 27:
			return "SQUALO";
		
		case 28:
			return "SUNTRAP";
		
		case 29:
			return "TROPIC";
		
		case 30:
			return "SEASHARK";
		
		case 32:
			return "SUNTRAP";
		
		case 31:
			return "SUBMERSIBLE";
		
		case 258:
			return "TUG";
		
		case 33:
			return "BMX";
		
		case 34:
			return "SCORCHER";
		
		case 35:
			return "TRIBIKE";
		
		case 36:
			return "TRIBIKE2";
		
		case 37:
			return "TRIBIKE3";
		
		case 38:
			return "CRUISER";
		
		case 39:
			return "SCHWARZE";
		
		case 40:
			return "ZION";
		
		case 41:
			return "GAUNTLET";
		
		case 42:
			return "VIGERO";
		
		case 43:
			return "ISSI2";
		
		case 44:
			return "INFERNUS";
		
		case 45:
			return "SURANO";
		
		case 46:
			return "VACCA";
		
		case 47:
			return "NINEF";
		
		case 48:
			return "COMET2";
		
		case 49:
			return "BANSHEE";
		
		case 50:
			return "FELTZER";
		
		case 51:
			return "BFINJECT";
		
		case 52:
			return "SANDKING";
		
		case 53:
			return "FUGITIVE";
		
		case 54:
			return "DILETTAN";
		
		case 55:
			return "SUPERD";
		
		case 56:
			return "EXEMPLAR";
		
		case 57:
			return "BALLER2";
		
		case 58:
			return "CAVCADE";
		
		case 59:
			return "ROCOTO";
		
		case 60:
			return "FELON";
		
		case 61:
			return "ORACLE";
		
		case 62:
			return "BATI";
		
		case 63:
			return "AKUMA";
		
		case 64:
			return "RUFFIAN";
		
		case 65:
			return "VADER";
		
		case 66:
			return "BLAZER";
		
		case 67:
			return "PCJ";
		
		case 68:
			return "SANCHEZ";
		
		case 69:
			return "FAGGIO";
		
		default:
	}
	switch (iParam0)
	{
		case 70:
			return "BULLET";
		
		case 71:
			return "CARBONIZ";
		
		case 72:
			return "COQUETTE";
		
		case 73:
			return "NINEF2";
		
		case 74:
			return "RAPIDGT";
		
		case 75:
			return "RAPIDGT";
		
		case 76:
			return "STINGERG";
		
		case 77:
			return "VOLTIC";
		
		case 78:
			return "ANNIHL";
		
		case joaat("mpsv_lp0_31"):
			return "MAMMATUS";
		
		case 80:
			return "VELUM";
		
		case 81:
			return "DUMP";
		
		case 82:
			return "AIRBUS";
		
		case 83:
			return "BUS";
		
		case 84:
			return "COACH";
		
		case 85:
			return "JOURNEY";
		
		case 86:
			return "MULE";
		
		case 87:
			return "RENTBUS";
		
		case 88:
			return "STRETCH";
		
		case 89:
			return "BISON";
		
		case 90:
			return "DOUBLE";
		
		case 91:
			return "FELON2";
		
		case 92:
			return "HEXER";
		
		case 93:
			return "ZION2";
		
		case 94:
			return "BATI2";
		
		case 95:
			return "ELEGY2";
		
		case 96:
			return "KHAMEL";
		
		case 97:
			return "HOTKNIFE";
		
		case 98:
			return "CARBON";
		
		case 99:
			return "BIFTA";
		
		case 100:
			return "KALAHARI";
		
		case 101:
			return "PARADISE";
		
		case 102:
			return "SPEEDER";
		
		case 103:
			return "BODHI2";
		
		case 104:
			return "DUNE";
		
		case 105:
			return "REBEL";
		
		case 106:
			return "SADLER";
		
		case 107:
			return "SANCHEZ2";
		
		case 108:
			return "SANDKIN2";
		
		case 109:
			return "ROOSEVELT";
		
		case 111:
			return "JESTER";
		
		case 114:
			return "MASSACRO";
		
		case 112:
			return "TURISMOR";
		
		case 115:
			return "ZENTORNO";
		
		case 116:
			return "HUNTLEY";
		
		case 110:
			return "ALPHA";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 121:
			return "THRUST";
		
		case 128:
			return "ASEA";
		
		case 129:
			return "ASTROPE";
		
		case 130:
			return "BOBCATXL";
		
		case 131:
			return "CAVCADE";
		
		case 132:
			return "GRANGER";
		
		case 133:
			return "INGOT";
		
		case 134:
			return "INTRUDER";
		
		case 135:
			return "MINIVAN";
		
		case 136:
			return "PREMIER";
		
		case 137:
			return "RADI";
		
		case 138:
			return "RANCHERX";
		
		case 139:
			return "RLOADER";
		
		case 140:
			return "STANIER";
		
		case 141:
			return "STRATUM";
		
		case 142:
			return "WASHINGT";
		
		case 122:
			return "DOMINATO";
		
		case 123:
			return "F620";
		
		case 124:
			return "FUSILADE";
		
		case 125:
			return "PENUMBRA";
		
		case 126:
			return "SENTINEL";
		
		case 127:
			return "SENTINEL2";
		
		case 143:
			return "BLADE";
		
		case 144:
			return "WARRENER";
		
		case 145:
			return "GLENDALE";
		
		case 146:
			return "RHAPSODY";
		
		case 147:
			return "PANTO";
		
		case 148:
			return "DUBSTA3";
		
		case 149:
			return "PIGALLE";
		
		case 150:
			return "PICADOR";
		
		case 151:
			return "REGINA";
		
		case 152:
			return "SURFER";
		
		case 153:
			return "YOUGA";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 156:
			return "PRIMO";
		
		case 157:
			return "BUFFALO";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 161:
			return "SOVEREIGN";
		
		case 160:
			return "MONSTER";
		
		case 162:
			return "MILJET";
		
		case 163:
			return "BESRA";
		
		case 164:
			return "SWIFT";
		
		case 165:
			return "COQUETTE2";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 167:
			return "INNOVATION";
		
		case 168:
			return "HAKUCHOU";
		
		case 169:
			return "FURORE";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 187:
			return "VALKYRIE";
		
		case 177:
			return "HYDRA";
		
		case 185:
			return "SAVAGE";
		
		case 174:
			return "ENDURO";
		
		case 171:
			return "BOXVILLE4";
		
		case 172:
			return "CASCO";
		
		case 173:
			return "DINGHY3";
		
		case 175:
			return "GBURRITO2";
		
		case 176:
			return "GUARDIAN";
		
		case 178:
			return "INSURGENT";
		
		case 179:
			return "INSURGENT2";
		
		case 180:
			return "KURUMA";
		
		case 181:
			return "KURUMA2";
		
		case 182:
			return "LECTRO";
		
		case 183:
			return "MULE3";
		
		case 184:
			return "PBUS";
		
		case 186:
			return "TECHNICAL";
		
		case 188:
			return "VELUM2";
		
		case 189:
			return "GRESLEY";
		
		case 190:
			return "JACKAL";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 193:
			return "NEMESIS";
		
		case 194:
			return "ORACLE1";
		
		case 195:
			return "RUMPO";
		
		case 196:
			return "SCHAFTER2";
		
		case 197:
			return "SEMINOLE";
		
		case 198:
			return "SURGE";
		
		case 199:
			return "DODO";
		
		case 200:
			return "MARSHALL";
		
		case 201:
			return "SUBMERS2";
		
		case 202:
			return "BLISTA2";
		
		case 203:
			return "STALION";
		
		case 204:
			return "DUKES";
		
		case 205:
			return "DUKES2";
		
		case 206:
			return "STALION2";
		
		case 207:
			return "DOMINATOR2";
		
		case 208:
			return "GAUNTLET2";
		
		case 209:
			return "BUFFALO3";
		
		case 210:
			return "SLAMVAN";
		
		case 211:
			return "RLOADER2";
		
		case 212:
			return "JESTER2";
		
		case 213:
			return "MASSACRO2";
		
		case 214:
			return "FELTZER3";
		
		case 215:
			return "LUXOR2";
		
		case 216:
			return "OSIRIS";
		
		case 217:
			return "SWIFT2";
		
		case 218:
			return "VIRGO";
		
		case 219:
			return "WINDSOR";
		
		case 220:
			return "BRAWLER";
		
		case 221:
			return "CHINO";
		
		case 222:
			return "COQUETTE3";
		
		case 223:
			return "T20";
		
		case 224:
			return "TORO";
		
		case 225:
			return "VINDICATOR";
		
		case 229:
			return "PRIMO";
		
		case 228:
			return "MOONBEAM";
		
		case 227:
			return "FACTION";
		
		case 226:
			return "BUCCANEE";
		
		case 230:
			return "VOODOO";
		
		case 231:
			return "BTYPE2";
		
		case 232:
			return "LURCHER";
		
		case 251:
			return "VIRGO3";
		
		case 250:
			return "TORNADO";
		
		case 249:
			return "SABREGT";
		
		case 252:
			return "FACTION";
		
		case 233:
			return "BALLER3";
		
		case 234:
			return "BALLER4";
		
		case 235:
			return "COG55";
		
		case 236:
			return "COGNOSC";
		
		case 237:
			return "LIMO2";
		
		case 238:
			return "MAMBA";
		
		case 239:
			return "NITESHAD";
		
		case 240:
			return "SCHAFTER3";
		
		case 241:
			return "SCHAFTER4";
		
		case 242:
			return "VERLIER";
		
		case 243:
			return "SVOLITO";
		
		case 244:
			return "SVOLITO2";
		
		case 245:
			return "BIG_YACHT";
		
		case 246:
			return "TAMPA";
		
		case 247:
			return "SULTAN";
		
		case 49:
			return "BANSHEE";
		
		case 248:
			return "ROOSEVELT2";
		
		default:
	}
	switch (iParam0)
	{
		case 253:
			return "VOLATUS";
		
		case 254:
			return "CARGOBOB2";
		
		case 255:
			return "RUMPO3";
		
		case 256:
			return "BRICKADE";
		
		case 257:
			return "NIMBUS";
		
		case 259:
			return "WINDSOR2";
		
		case 260:
			return "PROTOTIPO";
		
		case 261:
			return "FMJ";
		
		case 262:
			return "BESTIAGTS";
		
		case 263:
			return "XLS";
		
		case 264:
			return "SEVEN70";
		
		case 265:
			return "PFISTER811";
		
		case 266:
			return "REAPER";
		
		case 267:
			return "LE7B";
		
		case 268:
			return "OMNIS";
		
		case 269:
			return "TROPOS";
		
		case 270:
			return "BRIOSO";
		
		case 271:
			return "TROPHY";
		
		case 272:
			return "TROPHY2";
		
		case 273:
			return "CONTENDER";
		
		case 274:
			return "CLIFFHANGER";
		
		case 275:
			return "BF400";
		
		case 279:
			return "TYRUS";
		
		case 280:
			return "LYNX";
		
		case 281:
			return "SHEAVA";
		
		case 276:
			return "RALLYTRUCK";
		
		case 277:
			return "TAMPA2";
		
		case 278:
			return "GARGOYLE";
		
		case 282:
			return "BAGGER";
		
		case 283:
			return "ESSKEY";
		
		case 284:
			return "NIGHTBLADE";
		
		case 285:
			return "DEFILER";
		
		case 286:
			return "AVARUS";
		
		case 287:
			return "ZOMBIEA";
		
		case 288:
			return "ZOMBIEB";
		
		case 289:
			return "CHIMERA";
		
		case 290:
			return "DAEMON2";
		
		case 291:
			return "RATBIKE";
		
		case 292:
			return "SHOTARO";
		
		case 293:
			return "RAPTOR";
		
		case 294:
			return "HAKUCHOU2";
		
		case 296:
			return "BLAZER4";
		
		case 297:
			return "SANCTUS";
		
		case 295:
			return "VORTEX";
		
		case 298:
			return "MANCHEZ";
		
		case 299:
			return "TORNADO6";
		
		case 300:
			return "YOUGA2";
		
		case 301:
			return "WOLFSBANE";
		
		case 302:
			return "FAGGIO3";
		
		case 303:
			return "FAGGION";
		
		case 304:
			return "DUNE5";
		
		case 305:
			return "PHANTOM2";
		
		case 306:
			return "TECHNICAL2";
		
		case 307:
			return "BLAZER5";
		
		case 308:
			return "BOXVILLE5";
		
		case 309:
			return "WASTLNDR";
		
		case 310:
			return "RUINER2";
		
		case 311:
			return "VOLTIC2";
		
		case 312:
			return "PENETRATOR";
		
		case 313:
			return "TEMPESTA";
		
		case 314:
			return "ITALIGTB";
		
		case 315:
			return "NERO";
		
		case 316:
			return "DIABLOUS";
		
		case 317:
			return "FCR";
		
		case 318:
			return "SPECTER";
		
		case 319:
			return "GP1";
		
		case 320:
			return "INFERNUS2";
		
		case 321:
			return "RUSTON";
		
		case 322:
			return "TURISMO2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 325:
			return "CHEETAH2";
		
		case 326:
			return "TORERO";
		
		case 327:
			return "VAGNER";
		
		case 328:
			return "XA21";
		
		case 329:
			return "APC";
		
		case 330:
			return "DUNE3";
		
		case 331:
			return "HALFTRACK";
		
		case 332:
			return "OPPRESSOR";
		
		case 333:
			return "TAMPA3";
		
		case 334:
			return "TRSMALL2";
		
		case 335:
			return "ARDENT";
		
		case 336:
			return "NIGHTSHARK";
		
		case 337:
			return "LAZER";
		
		case 338:
			return "MICROLIGHT";
		
		case 339:
			return "MOGUL";
		
		case 340:
			return "ROGUE";
		
		case 341:
			return "STARLING";
		
		case 342:
			return "SEABREEZE";
		
		case 343:
			return "TULA";
		
		case 344:
			return "PYRO";
		
		case 345:
			return "MOLOTOK";
		
		case 346:
			return "NOKOTA";
		
		case 347:
			return "BOMBUSHKA";
		
		case 348:
			return "HUNTER";
		
		case 349:
			return "HAVOK";
		
		case 350:
			return "HOWARD";
		
		case 351:
			return "ALPHAZ1";
		
		case 352:
			return "CYCLONE";
		
		case 353:
			return "VISIONE";
		
		case 354:
			return "RETINUE";
		
		case 355:
			return "RAPIDGT3";
		
		case 356:
			return "VIGILANTE";
		
		default:
	}
	return "";
}

int func_128(int iParam0, int iParam1)
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
			return Global_68146;
		
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
			return Global_68147;
		
		case 324:
			return Global_68148;
		
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
		
		default:
	}
	return 0;
}

void func_129(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_17290.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17290.f_5088 >= 128)
	{
		return;
	}
	if (Global_17290.f_5094 >= 128)
	{
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608)
	{
		return;
	}
	if (Global_17290.f_5088 != iParam0)
	{
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 4)
	{
		while (Global_17290.f_5089 < 4 && iVar0 != 4)
		{
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_17290.f_4433[Global_17290.f_5094] = iParam1;
	Global_17290.f_5094++;
	if (iParam1 != 0)
	{
		func_105(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17290.f_4945[Global_17290.f_5089])
		{
			func_105(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089])
		{
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar2;
			}
		}
	}
	unk_0xCD7E92DE2BFA0B0D(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 4;
}

void func_130(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17290.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17290.f_5088 >= 128)
	{
		return;
	}
	if (Global_17290.f_5090 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608)
	{
		return;
	}
	if (Global_17290.f_5088 != iParam0)
	{
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17290.f_5089 < 4 && iVar0 != 1)
		{
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0x0BD3CCFB6C6CFA91(sParam1) && !unk_0xA56C5821F50C3275(sParam1))
	{
	}
	Global_17290.f_1610[Global_17290.f_5090] = bParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!bParam3)
	{
		func_133(Global_17290.f_5088, 1);
	}
	else
	{
		func_133(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_132(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
		if (Global_17290.f_4945[Global_17290.f_5089])
		{
			func_105(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089])
		{
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_131(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
			if (fVar4 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xCD7E92DE2BFA0B0D(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = (Global_17290.f_5090 - 1);
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

float func_131(char* sParam0)
{
	if (!unk_0xA56C5821F50C3275(sParam0))
	{
	}
	return unk_0x4A373026C2688C78(0.35f, 0);
}

float func_132(char* sParam0)
{
	if (!unk_0x996B09F758C57FBE(sParam0))
	{
		if (unk_0x50B7853132D8438E(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_84(0, 1, 0, 0, 0, 0, 0);
	unk_0x54412EEBDB162F5C(sParam0);
	return unk_0x51C2CBAC9E5D95A4(1);
}

void func_133(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_134(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	char* sVar14;
	int iVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	char* sVar22;
	int iVar26;
	var uVar27;
	var uVar28;
	
	uParam1->f_66 = func_128(iParam0, iParam4);
	if (uParam1->f_66 == 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_66 == joaat("frogger"))
	{
		uParam1->f_66 = joaat("frogger2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_67 = 1;
		return;
	}
	uParam1->f_77 = 0;
	func_169(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_168(iParam0))
	{
		if (Global_69586)
		{
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	uParam1->f_9[48] = 0;
	uParam1->f_98 = 0;
	if (iParam0 == 251)
	{
		uParam1->f_98 = 4;
	}
	uParam1->f_65 = 0;
	if (iParam0 == 263)
	{
		if (Global_69586)
		{
			uParam1->f_65 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if (((iParam0 == 320 || iParam0 == 321) || iParam0 == 322) || iParam0 == 327)
	{
		uParam1->f_9[0] = 1;
	}
	if (((((iParam0 == 329 || iParam0 == 330) || iParam0 == 331) || iParam0 == 334) || iParam0 == 332) || iParam0 == 333)
	{
		uParam1->f_9[10] = 0;
	}
	if (bParam2)
	{
		iVar0 = Global_69585;
	}
	else if (iParam3 == 0)
	{
		iVar0 = Global_104439.f_25043.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar0 = Global_104439.f_25043.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar0 = Global_104439.f_25043.f_939[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_67 = -1;
	if (iParam0 == 200)
	{
		switch (iVar0)
		{
			case 1:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 2:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 3:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 4:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 5:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 6:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 7:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 8:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 9:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 10:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 11:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 12:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 13:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 14:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 15:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 16:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 17:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 18:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 19:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 20:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 21:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 22:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 23:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 24:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			case 25:
				func_142(func_143(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_141(func_143(iParam0, iVar0));
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar0)
		{
			case 1:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 1;
				break;
			
			case 2:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 2;
				break;
			
			case 3:
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 3;
				break;
			
			case 4:
				uParam1->f_5 = 59;
				uParam1->f_6 = 59;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 8;
				break;
			
			case 5:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 4;
				break;
			
			case 6:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 5;
				break;
			
			case 7:
				uParam1->f_5 = 42;
				uParam1->f_6 = 42;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 7;
				break;
			
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 6;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 1:
				if (func_140(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_139(iParam0, iVar0, &uVar1))
						{
							uParam1->f_9[48] = uVar1;
						}
						else if (func_138(iParam0, iVar0, &uVar2, &uVar3, &uVar1))
						{
							uParam1->f_5 = uVar2;
							uParam1->f_6 = uVar3;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_96 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_98 = 134;
							}
							else
							{
								uParam1->f_98 = 0;
							}
							uParam1->f_9[48] = uVar1;
						}
						else
						{
							uParam1->f_67 = 0;
						}
					}
					else
					{
						uParam1->f_67 = func_141(func_143(iParam0, iVar0));
					}
				}
				else if (func_168(iParam0))
				{
					if (!Global_69586)
					{
						uParam1->f_5 = 143;
						uParam1->f_6 = 34;
						uParam1->f_7 = 31;
						uParam1->f_96 = 99;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 40;
						uParam1->f_6 = 40;
						uParam1->f_96 = 93;
						uParam1->f_67 = -1;
					}
				}
				else if (func_137(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 89;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				break;
			
			case 2:
				if (func_140(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_139(iParam0, iVar0, &uVar4))
						{
							uParam1->f_9[48] = uVar4;
						}
						else if (func_138(iParam0, iVar0, &uVar5, &uVar6, &uVar4))
						{
							uParam1->f_5 = uVar5;
							uParam1->f_6 = uVar6;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_96 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_98 = 134;
							}
							else
							{
								uParam1->f_98 = 0;
							}
							uParam1->f_9[48] = uVar4;
						}
						else
						{
							uParam1->f_67 = 1;
						}
					}
					else
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 10;
						uParam1->f_7 = 4;
						uParam1->f_8 = 156;
						uParam1->f_67 = func_141(func_143(iParam0, iVar0));
					}
				}
				else if (func_168(iParam0))
				{
					if (!Global_69586)
					{
						uParam1->f_5 = 8;
						uParam1->f_6 = 8;
						uParam1->f_7 = 5;
						uParam1->f_96 = 106;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 14;
						uParam1->f_6 = 14;
						uParam1->f_96 = 108;
						uParam1->f_67 = -1;
					}
				}
				else if (func_137(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 67;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				break;
			
			case 3:
				if (func_140(iParam0))
				{
					if (func_139(iParam0, iVar0, &uVar7))
					{
						uParam1->f_9[48] = uVar7;
					}
					else if (func_138(iParam0, iVar0, &uVar8, &uVar9, &uVar7))
					{
						uParam1->f_5 = uVar8;
						uParam1->f_6 = uVar9;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_96 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_98 = 134;
						}
						else
						{
							uParam1->f_98 = 0;
						}
						uParam1->f_9[48] = uVar7;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else if (func_168(iParam0))
				{
					if (!Global_69586)
					{
						uParam1->f_5 = 100;
						uParam1->f_6 = 100;
						uParam1->f_7 = 100;
						uParam1->f_96 = 22;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 152;
						uParam1->f_6 = 152;
						uParam1->f_96 = 22;
						uParam1->f_67 = -1;
					}
				}
				else if (func_137(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 28;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				break;
			
			case 4:
				if (func_140(iParam0))
				{
					if (func_139(iParam0, iVar0, &uVar10))
					{
						uParam1->f_9[48] = uVar10;
					}
					else if (func_138(iParam0, iVar0, &uVar11, &uVar12, &uVar10))
					{
						uParam1->f_5 = uVar11;
						uParam1->f_6 = uVar12;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_96 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_98 = 134;
						}
						else
						{
							uParam1->f_98 = 0;
						}
						uParam1->f_9[48] = uVar10;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else if (func_168(iParam0))
				{
					if (!Global_69586)
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_7 = 106;
						uParam1->f_96 = 101;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_96 = 48;
						uParam1->f_67 = -1;
					}
				}
				else if (func_137(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_136(iVar13, &sVar14, &iVar18, &uVar19, &uVar20))
					{
						if (unk_0xB3404E397FF56B3B(&sVar14, "ORANGE") && iVar18 == 1)
						{
							uParam1->f_5 = uVar19;
							uParam1->f_6 = uVar20;
							iVar13 = -99;
						}
						iVar13++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 5:
				if (func_168(iParam0))
				{
					if (!Global_69586)
					{
						uParam1->f_5 = 49;
						uParam1->f_6 = 49;
						uParam1->f_7 = 52;
						uParam1->f_96 = 98;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 128;
						uParam1->f_6 = 128;
						uParam1->f_96 = 99;
						uParam1->f_67 = -1;
					}
				}
				else if ((iParam0 == 178 || iParam0 == 179) || iParam0 == 192)
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
				}
				else if (func_137(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 41;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 55;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_136(iVar21, &sVar22, &iVar26, &uVar27, &uVar28))
					{
						if (unk_0xB3404E397FF56B3B(&sVar22, "LIME_GREEN") && iVar26 == 1)
						{
							uParam1->f_5 = uVar27;
							uParam1->f_6 = uVar28;
							iVar21 = -99;
						}
						iVar21++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 6:
				if (func_168(iParam0))
				{
					if (!Global_69586)
					{
						uParam1->f_5 = 141;
						uParam1->f_6 = 141;
						uParam1->f_7 = 73;
						uParam1->f_96 = 5;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 84;
						uParam1->f_6 = 84;
						uParam1->f_96 = 24;
						uParam1->f_67 = -1;
					}
				}
				else if (func_137(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 63;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 68;
					uParam1->f_67 = -1;
				}
				break;
			
			case 7:
				if (uParam1->f_66 == joaat("kuruma2"))
				{
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_7 = 13;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else if (func_168(iParam0))
				{
					if (!Global_69586)
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 0;
						uParam1->f_7 = 10;
						uParam1->f_96 = 1;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 12;
						uParam1->f_6 = 12;
						uParam1->f_96 = 0;
						uParam1->f_67 = -1;
					}
				}
				else if (func_137(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 5;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 333)
				{
					uParam1->f_5 = 154;
					uParam1->f_6 = 3;
					uParam1->f_96 = 0;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_67 = -1;
				}
				break;
			
			case 8:
				if (func_168(iParam0))
				{
					if (!Global_69586)
					{
						uParam1->f_5 = 112;
						uParam1->f_6 = 112;
						uParam1->f_7 = 0;
						uParam1->f_96 = 7;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 131;
						uParam1->f_6 = 131;
						uParam1->f_96 = 78;
						uParam1->f_67 = -1;
					}
				}
				else if (func_137(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 27;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				break;
			
			default:
				break;
			}
	}
	if (iVar0 == 0)
	{
		switch (iParam0)
		{
			case 32:
				uParam1->f_5 = 111;
				uParam1->f_6 = 65;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 13:
				uParam1->f_5 = 46;
				uParam1->f_6 = 24;
				uParam1->f_7 = 46;
				uParam1->f_8 = 24;
				uParam1->f_67 = -1;
				break;
			
			case 33:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 34:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 35:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 36:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 37:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 38:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 206:
				uParam1->f_5 = 2;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			
			case 207:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 126;
				uParam1->f_67 = -1;
				break;
			
			case 208:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			
			case 209:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 139;
				uParam1->f_67 = -1;
				break;
			
			case 210:
				uParam1->f_5 = 28;
				uParam1->f_6 = 0;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 213:
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_7 = 42;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 212:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 27;
				uParam1->f_67 = -1;
				break;
			
			case 17:
				uParam1->f_5 = 30;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 215:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 217:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 205:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 12;
				uParam1->f_67 = -1;
				break;
			
			case 227:
				uParam1->f_5 = 0;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 226:
				uParam1->f_5 = 36;
				uParam1->f_6 = 36;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 230:
				uParam1->f_5 = 41;
				uParam1->f_6 = 41;
				uParam1->f_7 = 156;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 338:
				uParam1->f_5 = 64;
				uParam1->f_6 = 5;
				uParam1->f_7 = 111;
				uParam1->f_8 = 5;
				uParam1->f_96 = 0;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 339:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 340:
				uParam1->f_5 = 24;
				uParam1->f_6 = 29;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 341:
				uParam1->f_5 = 3;
				uParam1->f_6 = 4;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 342:
				uParam1->f_5 = 111;
				uParam1->f_6 = 89;
				uParam1->f_7 = 111;
				uParam1->f_8 = 111;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 343:
				uParam1->f_5 = 14;
				uParam1->f_6 = 121;
				uParam1->f_7 = 121;
				uParam1->f_8 = 111;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 344:
				uParam1->f_5 = 50;
				uParam1->f_6 = 91;
				uParam1->f_7 = 0;
				uParam1->f_8 = 111;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 345:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 346:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 347:
				uParam1->f_5 = 14;
				uParam1->f_6 = 5;
				uParam1->f_67 = -1;
				break;
			
			case 348:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 349:
				uParam1->f_5 = 27;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 350:
				uParam1->f_5 = 119;
				uParam1->f_6 = 73;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 351:
				uParam1->f_5 = 67;
				uParam1->f_6 = 1;
				uParam1->f_7 = 5;
				uParam1->f_8 = 111;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 356:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			default:
				break;
			}
	}
	if (iParam0 == 161)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 231)
	{
		uParam1->f_5 = 142;
		uParam1->f_6 = 0;
		uParam1->f_7 = 145;
		uParam1->f_8 = 90;
	}
	if (iParam0 == 290)
	{
		uParam1->f_6 = 0;
	}
	if (iParam0 == 291)
	{
		uParam1->f_5 = 131;
		uParam1->f_6 = 131;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 304)
	{
		uParam1->f_5 = 22;
		uParam1->f_6 = 12;
		uParam1->f_7 = 134;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
		uParam1->f_79 = 1f;
	}
	if (iParam0 == 305)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 306)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 307)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 308)
	{
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
		uParam1->f_79 = 1f;
	}
	if (iParam0 == 309)
	{
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
		uParam1->f_79 = 1f;
	}
	if (iParam0 == 310)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 311)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 329)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 330)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 331)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 0;
		uParam1->f_8 = 154;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 332)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 120;
		uParam1->f_7 = 35;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 334)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 323)
	{
		if (iParam4 == 0)
		{
			uParam1->f_66 = joaat("phantom3");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_96 = 0;
			uParam1->f_98 = 0;
			uParam1->f_67 = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_66 = joaat("hauler2");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_96 = 0;
			uParam1->f_98 = 0;
			uParam1->f_67 = -1;
		}
	}
	if (func_135(uParam1->f_66))
	{
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_136(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_137(int iParam0)
{
	if (((((iParam0 == 286 || iParam0 == 289) || iParam0 == 290) || iParam0 == 301) || iParam0 == 287) || iParam0 == 288)
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	if (iParam0 == 275)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 270)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 274)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 278)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 267)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 280)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 268)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				func_142(func_143(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				func_142(func_143(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 281)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 277)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 271)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 272)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 38;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 88;
				*uParam3 = 88;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 269)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 279)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	return 0;
}

int func_139(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 == 231)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 4;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
			
			case 3:
				*uParam2 = 2;
				return 1;
				break;
			
			case 4:
				*uParam2 = 3;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	else if (iParam0 == 232)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 2;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 2;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	*uParam2 = -1;
	return 0;
}

int func_140(int iParam0)
{
	if (((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279)
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		case 90:
			return 0;
		
		case 91:
			return 1;
		
		default:
	}
	return -1;
}

int func_142(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_143(int iParam0, int iParam1)
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
			if (func_144(iParam0, 11, iParam1))
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
			if (func_144(iParam0, 16, iParam1))
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
		
		default:
	}
	return -1;
}

int func_144(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_128(iParam0, -1);
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
		if (unk_0x4FB79719141588E9())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_42() && func_167())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && unk_0x27CA09C6DFAB1E79()) || (iParam0 == 207 && unk_0x27CA09C6DFAB1E79())) || (iParam0 == 208 && unk_0x27CA09C6DFAB1E79())) || (iParam0 == 209 && unk_0x27CA09C6DFAB1E79()))
	{
		if (func_42())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if ((iParam0 == 221 || iParam0 == 135) || iParam0 == 210)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_168(iParam0))
	{
		if (Global_69586)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_166(iVar0);
	if (iVar1 != -1)
	{
		if (func_164(func_165(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_163(iParam0))
	{
		if (func_42())
		{
			if ((iParam0 == 205 && Global_262145.f_18812) || (iParam0 != 205 && Global_262145.f_18811))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_162(iParam0))
	{
		if (func_153(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_152(iVar0);
	if (iVar2 != -1)
	{
		if (func_150(func_151(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_149(iVar0);
	if (iVar3 > 0)
	{
		if (func_145(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_70785)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_146();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_146()
{
	return func_147(6092, -1, 0);
}

int func_147(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_148(iParam1)];
	if (unk_0x2553A7EB99AABF55(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_148(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_91();
		if (iVar1 > -1)
		{
			Global_2511680 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2511680 = 1;
		}
	}
	return iVar0;
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
			return Global_262145.f_21224;
		
		case joaat("rogue"):
			return Global_262145.f_21225;
		
		case joaat("alphaz1"):
			return Global_262145.f_21226;
		
		case joaat("havok"):
			return Global_262145.f_21227;
		
		case joaat("starling"):
			return Global_262145.f_21228;
		
		case joaat("molotok"):
			return Global_262145.f_21229;
		
		case joaat("tula"):
			return Global_262145.f_21230;
		
		case joaat("bombushka"):
			return Global_262145.f_21231;
		
		case joaat("howard"):
			return Global_262145.f_21232;
		
		case joaat("mogul"):
			return Global_262145.f_21233;
		
		case joaat("pyro"):
			return Global_262145.f_21234;
		
		case joaat("seabreeze"):
			return Global_262145.f_21235;
		
		case joaat("nokota"):
			return Global_262145.f_21236;
		
		case joaat("hunter"):
			return Global_262145.f_21237;
		
		default:
	}
	return 0;
}

bool func_150(int iParam0)
{
	if (!Global_70785)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(func_147(5442, -1, 0), iParam0);
}

int func_151(int iParam0)
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

int func_152(int iParam0)
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

int func_153(int iParam0)
{
	int iVar0;
	
	if (!Global_70785)
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
	return func_154(iVar0);
}

bool func_154(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_161())
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
	iVar1 = iParam0;
	return unk_0x2A3398C6222EB190(iVar0, func_155(iVar1));
}

int func_155(int iParam0)
{
	return (iParam0 % 32);
}

var func_156(var uParam0)
{
	var uVar0;
	
	uVar0 = func_147(func_157(uParam0), -1, 0);
	return uVar0;
}

int func_157(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_160(iVar0);
	if ((func_159() == 0 || func_158() == 0) || (func_159() == 999 && func_158() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 735;
				break;
			
			case 1:
				return 736;
				break;
			}
	}
	return 7237;
}

int func_158()
{
	return Global_25223;
}

int func_159()
{
	return Global_25222;
}

int func_160(int iParam0)
{
	return (iParam0 / 32);
}

bool func_161()
{
	return Global_1312832;
}

int func_162(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_163(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

bool func_164(int iParam0)
{
	if (!Global_70785)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(func_147(5305, -1, 0), iParam0);
}

int func_165(int iParam0)
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

int func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
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

int func_167()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x2A3398C6222EB190(Global_25, 5))
	{
		if (unk_0x2A3398C6222EB190(Global_25, 1) || unk_0x2A3398C6222EB190(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (unk_0x2A3398C6222EB190(iVar0, 5))
		{
			if (unk_0x2A3398C6222EB190(iVar0, 1) || unk_0x2A3398C6222EB190(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x6A55A2CF360D0E3E(0))
	{
		if (Global_142821.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x2553A7EB99AABF55(iVar2, &iVar1, -1))
			{
				if (unk_0x2A3398C6222EB190(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x6008D10CE7FC9AA8())
	{
		iVar3 = unk_0x03CCEFDDDC599303(866);
		if (unk_0x2A3398C6222EB190(iVar3, 1) || unk_0x2A3398C6222EB190(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x5D07CD56579C6131())
	{
		if (unk_0xD69069794497409F())
		{
			if (unk_0xA301C33E42584F88())
			{
				unk_0x2553A7EB99AABF55(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				unk_0xCD7E92DE2BFA0B0D(&iVar4, 1);
				unk_0xCD7E92DE2BFA0B0D(&iVar4, 3);
				unk_0xCD7E92DE2BFA0B0D(&iVar4, 5);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 1);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 3);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 5);
				unk_0xE931A869061F7BD2(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (unk_0x6008D10CE7FC9AA8())
				{
					iVar4 = unk_0x03CCEFDDDC599303(866);
					unk_0xCD7E92DE2BFA0B0D(&iVar4, 1);
					unk_0xCD7E92DE2BFA0B0D(&iVar4, 3);
					unk_0x5149EEBBCD305987(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_168(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 64:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 4);
			break;
		
		case 67:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 4);
			break;
		
		case 72:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 117:
			unk_0xD804ACF2A7171150(uParam1, 1);
			break;
		
		case 49:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 118:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xD804ACF2A7171150(uParam1, 1);
			break;
		
		case 1:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 119:
			unk_0xD804ACF2A7171150(uParam1, 1);
			break;
		
		case 77:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xD804ACF2A7171150(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			break;
		
		case 120:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			break;
		
		case 130:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 132:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 135:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 137:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 141:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 6);
			break;
		
		case 147:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 2);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 3);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 4);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 5);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 6);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 7);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 8);
			break;
		
		case 203:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xD804ACF2A7171150(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			break;
		
		case 100:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 2);
			break;
		
		case 170:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xD804ACF2A7171150(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			break;
		
		case 160:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 15);
			break;
		
		case 161:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 15);
			break;
		
		case 192:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			break;
		
		case 221:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			break;
		
		case 222:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 172:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 165:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 166:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xD804ACF2A7171150(uParam1, 1);
			break;
		
		case 139:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 104:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 109:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 2);
			break;
		
		case 227:
		case 252:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			unk_0xD804ACF2A7171150(uParam1, 4);
			break;
		
		case 97:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 52:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 108:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 237:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 9);
			break;
		
		case 238:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_69586)
			{
				unk_0xCD7E92DE2BFA0B0D(uParam1, 9);
			}
			break;
		
		case 271:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 2);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 3);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 4);
			break;
		
		case 272:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 3);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 4);
			break;
		
		case 273:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 281:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 267:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 268:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 292:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 9);
			break;
		
		case 309:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 9);
			break;
		
		case 329:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 9);
			break;
		
		default:
			return;
			break;
	}
}

void func_170(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_1), sParam0, 16);
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_171(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4926[0] = iParam0;
	Global_17290.f_4926[1] = iParam1;
	Global_17290.f_4926[2] = iParam2;
	Global_17290.f_4926[3] = iParam3;
	Global_17290.f_4926[4] = iParam4;
	Global_17290.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17290.f_5096++;
	}
}

void func_173(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17290.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17290.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2455648[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17290.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4959[iVar0] = 0;
		Global_17290.f_5097[iVar0] = 0;
		Global_17290.f_5226[iVar0] = 0;
		Global_17290.f_5746[iVar0] = 0f;
		Global_17290.f_5355[iVar0] = 0;
		Global_17290.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17290.f_4926[iVar0] = 0;
		Global_17290.f_4938[iVar0] = 0f;
		Global_17290.f_4932[iVar0] = -1f;
		Global_17290.f_4945[iVar0] = 0;
		Global_17290.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17290.f_4834[iVar0 /*4*/]), "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 355;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17290.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17290.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2606798.f_16), "", 16);
	Global_2606798.f_20 = -1;
	Global_17290 = 0;
	Global_17290.f_5088 = 0;
	Global_17290.f_5089 = 0;
	Global_17290.f_5090 = 0;
	Global_17290.f_5092 = 0;
	Global_17290.f_5093 = 0;
	Global_17290.f_5094 = 0;
	Global_17290.f_5091 = 0;
	Global_17290.f_5741 = 0;
	Global_17290.f_5606 = 0;
	Global_17290.f_5605 = 0;
	Global_17290.f_5607 = 0;
	StringCopy(&(Global_17290.f_4562), "", 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = 0;
	Global_17290.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_4638 = 0;
	StringCopy(&(Global_2606798.f_21), "", 16);
	Global_2606798.f_61 = 0;
	Global_2606798.f_62 = 0;
	Global_2606798.f_63 = 0;
	Global_2606798.f_64 = 0;
	Global_2606798.f_65 = 0;
	Global_2606798.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2606798.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2606798.f_67 = 0;
	StringCopy(&(Global_17290.f_1), "", 16);
	Global_17290.f_4944 = 0f;
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_5611 = 0;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = 0;
	Global_17290.f_5609 = 0;
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	Global_17290.f_5095 = 10;
	Global_17290.f_5096 = 0;
	Global_17290.f_5743 = 0f;
	Global_17290.f_5744 = 0f;
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	Global_17290.f_5600 = 0f;
	Global_17290.f_5601 = 0;
	Global_17290.f_5603 = 0;
	Global_17290.f_5602 = 0;
	Global_17290.f_5604 = 0;
	Global_17290.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17290.f_5875[iVar0] = -1;
		Global_17290.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17290.f_4951 = 0f;
	Global_17290.f_4922 = 0;
	Global_17290.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5881)
	{
		Global_17290.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_7906 = 0;
	Global_17290.f_7901 = 0;
	Global_17290.f_7911 = 0;
	Global_17290.f_7916 = 0;
	Global_17290.f_7921 = 0;
	Global_17290.f_7923 = 0;
	Global_17290.f_7929 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = unk_0x5E61619C36D9095B(0);
	if (bParam0)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17289 = 0.225f;
	}
}

void func_174()
{
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xFA70B2A43E5DD8ED(0.325f, 0.3f);
	}
}

int func_175(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_69(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x4B0365EB2D59E6FA(unk_0xED1168B8D2D313FA()))
	{
		return 0;
	}
	if (func_79(0))
	{
		return 0;
	}
	if (unk_0x136B42AA35650CB6())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36516[iVar0 /*32*/] == 1 && Global_36516[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36516[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36516[iVar0 /*32*/].f_5 = 1;
			Global_36516[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36516[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36516[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_176(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_72(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0x1D69C39ECF71C85C(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0x880B947519D91525(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x59B2F61C9D01132B("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xB56F0E1C89B9E069("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x59B2F61C9D01132B("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xB56F0E1C89B9E069("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_177(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_177(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x77FA56883245AD26(*uParam0))
			{
				*uParam0 = unk_0xB1E69EFAB6CB45A3(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x77FA56883245AD26(*uParam0))
					{
						uParam0->f_8 = unk_0x31CD6E9F83C10233();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x31CD6E9F83C10233();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x77FA56883245AD26(*uParam0))
			{
				uParam0->f_8 = unk_0x31CD6E9F83C10233();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x77FA56883245AD26(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_178(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

var func_179(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

void func_180(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x7832F791572D5809(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x003E46CBEF6CE07A())
	{
		if (!*iParam0 == -1)
		{
			func_68(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36516[iVar0 /*32*/])
		{
			Global_36516[iVar0 /*32*/] = 1;
			Global_36516[iVar0 /*32*/].f_1 = Global_36717;
			Global_36717++;
			Global_36516[iVar0 /*32*/].f_4 = 0;
			Global_36516[iVar0 /*32*/].f_29 = 0;
			Global_36516[iVar0 /*32*/].f_5 = 0;
			Global_36516[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36516[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36516[iVar0 /*32*/].f_6 = iParam3;
			Global_36516[iVar0 /*32*/].f_31 = unk_0xFFDE6A3A0108B7CB();
			Global_36516[iVar0 /*32*/].f_7 = 0;
			Global_36516[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x0BD3CCFB6C6CFA91(sParam4))
			{
				Global_36516[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36516[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36516[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36516[iVar0 /*32*/].f_12 = 0;
				Global_36516[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36516[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_181(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 312)
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_104439.f_25043[iParam0], iVar0);
}

int func_182(int iParam0)
{
	int iVar0;
	int iVar1[128];
	
	if (func_185(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_104439.f_18435[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_42() && !unk_0x27CA09C6DFAB1E79())
	{
		if (func_184(33, 0) && !func_183(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_104439.f_24934.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_104439.f_24934.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_104439.f_24934.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_104439.f_24934.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_104439.f_24934.f_7)
		{
			iVar1[iVar0] = joaat("marshall");
			iVar0++;
		}
	}
	if (iParam0 >= 0 && iParam0 < iVar0)
	{
		return iVar1[iParam0];
	}
	return 0;
}

int func_183(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_104439.f_7549.f_764)
	{
		if (Global_104439.f_7549.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_184(int iParam0, int iParam1)
{
	if (unk_0x2A3398C6222EB190(Global_104439.f_24856.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_185(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_668.f_1198, 2))
		{
			return 1;
		}
	}
	if (unk_0x4FB79719141588E9())
	{
		if (!bParam1 || unk_0xE096BC82D913B3DB())
		{
			if (!unk_0x6EC0C21CF01F429C() && !unk_0x43F4A6D2081CC5ED())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0xFEF369FFF9545F0F())
		{
			return 0;
		}
	}
	if (unk_0x4FB79719141588E9())
	{
		return 1;
	}
	return 0;
}

int func_186()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_185(1, 1))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			iVar0++;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_104439.f_18435[45 /*6*/], 3))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			iVar0++;
		}
	}
	if (func_42() && !unk_0x27CA09C6DFAB1E79())
	{
		if (func_184(33, 0) && !func_183(1751306471))
		{
			iVar0++;
		}
		if (Global_104439.f_24934.f_3)
		{
			iVar0++;
		}
		if (Global_104439.f_24934.f_4)
		{
			iVar0++;
		}
		if (Global_104439.f_24934.f_5)
		{
			iVar0++;
		}
		if (Global_104439.f_24934.f_6)
		{
			iVar0++;
		}
		if (Global_104439.f_24934.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_187(float fParam0)
{
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0xABF91A39BDA9BF00(unk_0x0031992CA618A445()) > 0;
		}
		else
		{
			return unk_0x9614E1752251EAA8(unk_0x0031992CA618A445(), unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), fParam0) > 0;
		}
	}
	return 0;
}

bool func_188(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

void func_189()
{
	var uVar0[10];
	bool bVar11;
	int iVar12;
	float fVar13;
	char* sVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	int iVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	struct<3> Var30;
	bool bVar51;
	float fVar52;
	int iVar53;
	struct<3> Var54;
	struct<3> Var57;
	int iVar60;
	struct<3> Var61;
	bool bVar82;
	float fVar83;
	int iVar84;
	bool bVar85;
	struct<4> Var86;
	bool bVar90;
	int iVar91;
	struct<4> Var92;
	struct<60> Var113;
	int iVar191;
	int iVar192;
	int iVar193;
	bool bVar194;
	float fVar195;
	int iVar196;
	struct<60> Var197;
	int iVar275;
	bool bVar276;
	int iVar277;
	int iVar278;
	int iVar279;
	int iVar280;
	bool bVar281;
	bool bVar282;
	
	bVar11 = false;
	if ((((((((((((((((Local_402.f_29.f_80 && Local_402.f_29.f_69) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445())) && Local_402.f_2 == 0) && Local_402.f_0 != -1) && func_66(Local_402.f_0, 0)) && func_66(Local_402.f_0, 5)) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(5)) && !func_27(14)) && !Global_68165) && !func_188(1)) && !func_251()) || (((Local_402.f_3 > 1 && !func_188(0)) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445())) && !func_251()))
	{
		func_250(Local_402.f_0, &Local_546);
		fVar13 = 0f;
		sVar14 = "ANIM@APT_TRANS@GARAGE";
		Var15 = { 198.3659f, -1020.273f, -100f };
		Var18 = { Var15 };
		Var21 = { 198.9538f, -1026.13f, -100f };
		iVar24 = func_249(Local_402.f_0);
		switch (Local_402.f_3)
		{
			case 0:
				if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && !unk_0x003E46CBEF6CE07A())
				{
					Local_402.f_3 = 10;
					return;
				}
				if ((((((unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && (func_248(unk_0x69F9721375CE60CF(unk_0x0031992CA618A445()), Local_402.f_29.f_68, 90f) || unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))) && unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1())) && !unk_0x20BE8D7B7834CA2D(unk_0x0031992CA618A445())) && !unk_0x292D1BF190062D1C(unk_0x0031992CA618A445())) && !unk_0xB37AB4AC3AD45AD8(unk_0x0031992CA618A445(), 2)) && (iVar24 == iLocal_672 || iVar24 == 145))
				{
					if (func_247())
					{
						bVar25 = true;
						if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
						{
							iVar12 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 1);
							if (unk_0x76B3C79DE564AFC6(iVar12))
							{
								if (unk_0x432757A9E7AAFA96(iVar12, 0))
								{
									iVar26 = unk_0xE9559A12052415BE(iVar12);
									if (((((((((!func_63(iVar26) || func_62(iVar12)) || func_61(iVar12)) || !func_38(iVar26, 0)) || unk_0xC4DF0B3808F615ED(iVar12)) || ((!unk_0x2076012573940835(iVar26) && !unk_0x34C854420D02F57B(iVar26)) && !unk_0x01301B632ADFA6CA(iVar26))) || iVar26 == joaat("monster")) || unk_0xB3D4A3F00B489CC7(iVar12)) || unk_0xFD5643D04AF8A14E(iVar12)) || (unk_0x735DF363967D2CEC(unk_0x0031992CA618A445()) && unk_0x7832F791572D5809(joaat("taxi_procedural")) > 0))
									{
										bVar25 = false;
									}
								}
								else
								{
									bVar25 = false;
								}
							}
						}
						else if (unk_0x543759FBE5B48C3A(sVar14))
						{
							unk_0x9F62787D280BF2EC(sVar14);
							if (!unk_0xB3379AC2E71D1E7E(sVar14))
							{
								bVar25 = false;
							}
						}
						if (bVar25)
						{
							func_180(&iLocal_656, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
							iLocal_1034 = 0;
							Local_402.f_3 = 1;
						}
						else if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
						{
							if (!unk_0x068C69D0643C4B95() || func_179("WEB_VEH_INV"))
							{
								func_178("WEB_VEH_INV", -1);
								StringCopy(&cLocal_1023, "WEB_VEH_INV", 16);
								bVar11 = true;
							}
						}
					}
					else if (!unk_0x068C69D0643C4B95() || func_179("WEB_VEH_FULL"))
					{
						func_178("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_1023, "WEB_VEH_FULL", 16);
						bVar11 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_1032)
				{
					if (!unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
					{
						iLocal_1032 = 0;
						unk_0x9F62787D280BF2EC(sVar14);
						if (unk_0xB3379AC2E71D1E7E(sVar14))
						{
							iLocal_1032 = 1;
						}
					}
					else
					{
						unk_0xBE238DB7614E8074(sVar14);
						iLocal_1032 = 1;
					}
				}
				iVar27 = 1;
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					iVar12 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 1);
					if (unk_0x76B3C79DE564AFC6(iVar12))
					{
						if (unk_0x432757A9E7AAFA96(iVar12, 0))
						{
							iVar28 = unk_0xE9559A12052415BE(iVar12);
							if ((((((((!func_63(iVar28) || func_62(iVar12)) || func_61(iVar12)) || unk_0xC4DF0B3808F615ED(iVar12)) || ((!unk_0x2076012573940835(iVar28) && !unk_0x34C854420D02F57B(iVar28)) && !unk_0x01301B632ADFA6CA(iVar28))) || iVar28 == joaat("monster")) || unk_0xB3D4A3F00B489CC7(iVar12)) || unk_0xFD5643D04AF8A14E(iVar12)) || (unk_0x735DF363967D2CEC(unk_0x0031992CA618A445()) && unk_0x7832F791572D5809(joaat("taxi_procedural")) > 0))
							{
								iVar27 = 0;
							}
						}
						else
						{
							iVar27 = 0;
						}
					}
				}
				if (((((((((unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && (func_248(unk_0x69F9721375CE60CF(unk_0x0031992CA618A445()), Local_402.f_29.f_68, 90f) || unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))) && unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1())) && func_247()) && !unk_0x20BE8D7B7834CA2D(unk_0x0031992CA618A445())) && !unk_0x292D1BF190062D1C(unk_0x0031992CA618A445())) && !unk_0xB37AB4AC3AD45AD8(unk_0x0031992CA618A445(), 2)) && !func_251()) && (iVar24 == iLocal_672 || iVar24 == 145)) && iVar27)
				{
					if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()) || (unk_0xB3379AC2E71D1E7E(sVar14) || !unk_0x543759FBE5B48C3A(sVar14)))
					{
						if (func_175(iLocal_656, 1))
						{
							func_68(&iLocal_656);
							iLocal_1032 = 0;
							Local_402.f_3 = 2;
						}
						func_245(47, 0);
						func_240(47, 0);
						Local_402.f_112 = unk_0x50C0AC4AD9CD152D(Var15, "v_garagem_sp");
						if (unk_0x68BBDCBE8B7849EB(Local_402.f_112))
						{
							if (!unk_0xC2902CEA00DDC12E(Local_402.f_112))
							{
								if ((unk_0xA83FFA3FA7711E6D() % 10) == 0)
								{
									unk_0x23B2455CBC51BE80(Local_402.f_112);
								}
							}
							StringCopy(&Global_32536, "v_garagem_sp", 32);
						}
						if (!iLocal_1031 && !unk_0x391103C96DB7B6E4())
						{
							if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
							{
								iVar29 = func_238(Local_402.f_0);
								func_60(&Var30, iVar29);
								Var18 = { Var30 };
								unk_0x4A7134889007D5B3(Var18, 20f, 0);
							}
							else
							{
								unk_0x4A7134889007D5B3(Var21 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_1031 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1031 && unk_0x391103C96DB7B6E4())
					{
						unk_0xA05EC9D85FA401E6();
						iLocal_1031 = 0;
					}
					iLocal_1032 = 0;
					func_68(&iLocal_656);
					unk_0xBE238DB7614E8074(sVar14);
					Local_402.f_3 = 0;
				}
				break;
			
			case 2:
				func_245(47, 0);
				func_240(47, 0);
				unk_0x7EF668988342648C(8);
				Global_69607.f_577 = 1;
				Global_69607.f_578 = { Local_402.f_29.f_55 };
				iLocal_1012 = unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1());
				unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
				unk_0x492D173FBA5C0419(unk_0x0031992CA618A445(), 0, 0);
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
				unk_0x56A844FA6FE745C3(0);
				unk_0x4C4F62CD43971CED(0);
				unk_0x7EBF60D0132BF685(unk_0x3D35F9864E4640B1());
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					iVar12 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
					if (unk_0x76B3C79DE564AFC6(iVar12) && unk_0x432757A9E7AAFA96(iVar12, 0))
					{
						if (func_248(unk_0x69F9721375CE60CF(iVar12), Local_402.f_29.f_68, 90f))
						{
							iLocal_1034 = 0;
						}
						else
						{
							iLocal_1034 = 1;
						}
						unk_0x31EFA4297B872C86(iVar12, 1, 1, 1, 1, 1, 1, 0, 0);
						unk_0xB15893BD298F03CA(Local_546.f_86[0 /*6*/], 20f, 0);
						unk_0xEC025B0914244C52(Local_546.f_86[0 /*6*/], 20f, 0);
						unk_0x00678F4436F79F19(Local_546.f_86[0 /*6*/], 7f);
						unk_0x0A69FBBF51E1A08F(iVar12, Local_546.f_86[0 /*6*/], 1, 0, 0, 1);
						if (iLocal_1034 && !unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
						{
							unk_0x5082D1A6D078DB20(iVar12, (Local_546.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							unk_0x5082D1A6D078DB20(iVar12, Local_546.f_86[0 /*6*/].f_3.f_2);
						}
						if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
						{
							unk_0x197677294AB2AF1C(unk_0x0031992CA618A445(), 0, 0, -1);
							unk_0x49C384CAABA72CC6(unk_0x0031992CA618A445(), 1);
						}
						unk_0x24B72A49849215AE(iVar12, 1084227584);
					}
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
					func_232(1, 1, 1, 0);
					func_231(&(Local_546[1 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 3;
				}
				else
				{
					if (unk_0x76B3C79DE564AFC6(iLocal_1027) && !unk_0x7A6C051038031EFA(iLocal_1027, 0))
					{
						if (unk_0xCC234795142FC2D2(iLocal_1027) && unk_0xC9FBF92709010AC3(iLocal_1027, 1))
						{
							unk_0x28BB69BE14577487(&iLocal_1027);
						}
					}
					iLocal_1027 = unk_0x7899A2987EB03783();
					if ((((unk_0x76B3C79DE564AFC6(iLocal_1027) && unk_0x432757A9E7AAFA96(iLocal_1027, 0)) && !unk_0x1DBFCF939B3B47D0(unk_0xE9559A12052415BE(iLocal_1027))) && !unk_0xF9CDF5CA6A1D6756(unk_0xE9559A12052415BE(iLocal_1027))) && !unk_0x9C4740BA7F0AF553(unk_0xE9559A12052415BE(iLocal_1027)))
					{
						if (!unk_0xCC234795142FC2D2(iLocal_1027))
						{
							unk_0x1581691D748490F3(iLocal_1027, 0, 0);
						}
						if (unk_0x76B3C79DE564AFC6(iLocal_1027) && unk_0x432757A9E7AAFA96(iLocal_1027, 0))
						{
							if (!bVar51)
							{
								if (unk_0x417F21FB3F950AEE(iLocal_1027, Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0))
								{
									bVar51 = true;
								}
							}
							if (!bVar51)
							{
								fVar52 = unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(iLocal_1027, 1), Local_546[0 /*15*/]);
								if (fVar52 < (5f * 5f))
								{
									bVar51 = true;
								}
							}
							if (bVar51)
							{
								iVar53 = func_48(24);
								if (func_230(&Local_776, 24))
								{
									func_225(&Local_776, func_405());
									if (unk_0x76B3C79DE564AFC6(iVar53))
									{
										unk_0xE9F8539D5AF6B052(&iVar53);
									}
								}
								if (Local_402.f_0 == 21)
								{
									unk_0x963AAB0E6FFD7E02(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
									func_223(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_402.f_0 == 22)
								{
									unk_0x963AAB0E6FFD7E02(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
									func_223(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_402.f_0 == 23)
								{
									unk_0x963AAB0E6FFD7E02(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
									func_223(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								unk_0x24B72A49849215AE(iLocal_1027, 1084227584);
							}
						}
					}
					else
					{
						iLocal_1027 = 0;
					}
					Var54 = { Local_402.f_29 * Vector(2f, 2f, 2f) + Local_402.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					Var57 = { Local_402.f_29 * Vector(1f, 1f, 1f) + Local_402.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Local_402.f_29, Var54.f_0, Var54.f_1, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0x3AF262D7332EEDF5(0, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_2_left";
								break;
						}
					}
					else if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Var54.f_0, Var54.f_1, Local_402.f_29.f_2, Var57.f_0, Var57.f_1, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0x3AF262D7332EEDF5(0, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_1_right";
								break;
						}
					}
					else if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Var57.f_0, Var57.f_1, Local_402.f_29.f_2, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0x3AF262D7332EEDF5(0, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_1035 = "";
						switch (unk_0x3AF262D7332EEDF5(0, 6))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_1035 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_1035 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_1035 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_1035 = "gar_open_3_right";
								break;
							}
					}
					unk_0xB15893BD298F03CA(Local_546.f_73[0 /*4*/], 20f, 0);
					unk_0xEC025B0914244C52(Local_546.f_86[0 /*6*/], 20f, 0);
					unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), Local_546.f_73[0 /*4*/], 1, 0, 0, 1);
					unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), Local_546.f_73[0 /*4*/].f_3);
					iLocal_661 = unk_0x87070FAB863D4019(Local_546.f_73[0 /*4*/], 0f, 0f, Local_546.f_73[0 /*4*/].f_3, 2);
					unk_0x5C774A8BEBE5BD26(unk_0x0031992CA618A445(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0, 1148846080, 0);
					func_232(1, 1, 1, 0);
					func_231(&(Local_546[0 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 4;
				}
				Local_402.f_112 = unk_0x50C0AC4AD9CD152D(Var15, "v_garagem_sp");
				if (unk_0x68BBDCBE8B7849EB(Local_402.f_112))
				{
					if (!unk_0xC2902CEA00DDC12E(Local_402.f_112))
					{
						unk_0x23B2455CBC51BE80(Local_402.f_112);
					}
					StringCopy(&Global_32536, "v_garagem_sp", 32);
				}
				if (!iLocal_1031)
				{
					if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
					{
						iVar60 = func_238(Local_402.f_0);
						func_60(&Var61, iVar60);
						Var18 = { Var61 };
						unk_0x4A7134889007D5B3(Var18, 20f, 0);
					}
					else
					{
						unk_0x4A7134889007D5B3(Var21, 20f, 0);
					}
				}
				unk_0xCD7E92DE2BFA0B0D(&(Local_674.f_9), 25);
				func_219(198.0043f, -999.7775f, -100f, 50f, 0);
				func_110(Local_402.f_0);
				func_110(26);
				func_110(29);
				func_110(32);
				func_110(28);
				func_110(31);
				func_110(34);
				func_110(27);
				func_110(30);
				func_110(33);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1033 = 0;
				break;
			
			case 4:
				bVar82 = true;
				if (!unk_0x391103C96DB7B6E4())
				{
				}
				else if (unk_0x9177A5D78560369F())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0x68BBDCBE8B7849EB(Local_402.f_112))
				{
					if (!unk_0xC2902CEA00DDC12E(Local_402.f_112))
					{
						unk_0x23B2455CBC51BE80(Local_402.f_112);
					}
					StringCopy(&Global_32536, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = unk_0x50C0AC4AD9CD152D(Var15, "v_garagem_sp");
				}
				if (func_218())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110) && unk_0x00E0F13A223ED180(Local_402.f_110))
				{
					if (unk_0x0B7CA263460475D0(Local_402.f_110))
					{
						bVar82 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else if (unk_0x2A3EA4C0BCED85F2(Local_402.f_111) && unk_0x00E0F13A223ED180(Local_402.f_111))
				{
					if (unk_0x0B7CA263460475D0(Local_402.f_111))
					{
						bVar82 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0x00BF23259C14645D(iLocal_661))
				{
					fVar83 = unk_0xB69F54D50B0A81C6(iLocal_661);
					if (fVar83 < 0.4f)
					{
						bVar82 = false;
					}
				}
				if (bVar82)
				{
					unk_0x8351F65655759E0C(800);
					Local_402.f_3 = 5;
				}
				break;
			
			case 5:
				if (unk_0x5114FCEE2A997B95())
				{
					iVar84 = unk_0x6307C3D1D866114A();
					unk_0x18F1BFAF88AC511B(iVar84, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0x52FE0F2031364132(iVar84, "hold", (2250f / 1000f));
					func_232(0, 1, 1, 0);
					unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
					if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110))
					{
						unk_0x55CC07D5416539C8(Local_402.f_110, 0);
						unk_0x46B35AD2F641A4A3(Local_402.f_110, 0);
					}
					if (unk_0x2A3EA4C0BCED85F2(Local_402.f_111))
					{
						unk_0x55CC07D5416539C8(Local_402.f_111, 0);
						unk_0x46B35AD2F641A4A3(Local_402.f_111, 0);
					}
					if (unk_0x76B3C79DE564AFC6(iLocal_1037))
					{
						unk_0x33808CAFB62A256D(iLocal_1037, 1, 0);
						unk_0x1F18D3C78C8C1A11(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
					unk_0x7EF668988342648C(8);
					if (unk_0x00BF23259C14645D(iLocal_661))
					{
						unk_0xFB07298202643C99(iLocal_661);
					}
					iLocal_661 = -1;
					unk_0x3000ECF14A659126(unk_0x0031992CA618A445());
					unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), 194.5394f, -1026.32f, -100f, 1, 0, 0, 1);
					unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), 334.1665f);
					unk_0x1F18D3C78C8C1A11(unk_0x0031992CA618A445(), 1);
					unk_0x31F42B23A853582E(0f);
					unk_0xADE985F6BA90AED5(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 6;
				}
				break;
			
			case 6:
				func_217(Local_402.f_0);
				if (unk_0x5114FCEE2A997B95() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					unk_0xBE238DB7614E8074(sVar14);
					func_216();
					if (unk_0x391103C96DB7B6E4())
					{
						unk_0xA05EC9D85FA401E6();
					}
					unk_0x18D7C8000EDEAAB4(800);
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
					unk_0x1F18D3C78C8C1A11(unk_0x0031992CA618A445(), 0);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					Local_402.f_3 = 10;
				}
				break;
			
			case 3:
				func_217(Local_402.f_0);
				bVar85 = true;
				if (!unk_0x391103C96DB7B6E4())
				{
				}
				else if (unk_0x9177A5D78560369F())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0x68BBDCBE8B7849EB(Local_402.f_112))
				{
					if (!unk_0xC2902CEA00DDC12E(Local_402.f_112))
					{
						unk_0x23B2455CBC51BE80(Local_402.f_112);
					}
					StringCopy(&Global_32536, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = unk_0x50C0AC4AD9CD152D(Var15, "v_garagem_sp");
				}
				if (func_218())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110) && unk_0x00E0F13A223ED180(Local_402.f_110))
				{
					if (unk_0x0B7CA263460475D0(Local_402.f_110))
					{
						bVar85 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else if (unk_0x2A3EA4C0BCED85F2(Local_402.f_111) && unk_0x00E0F13A223ED180(Local_402.f_111))
				{
					if (unk_0x0B7CA263460475D0(Local_402.f_111))
					{
						bVar85 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					Var86 = { 0f, 0f, 0f };
					Var86.f_3 = 0f;
					func_208(unk_0x0031992CA618A445(), Local_546.f_86[0 /*6*/], Local_546.f_66[0 /*3*/], ((Local_546[1 /*15*/].f_14 * 1000f) - 500f), Var86, 2, &fVar13);
				}
				if (bVar85)
				{
					func_216();
					unk_0xC1B1E9A034A63A62(0);
					unk_0x8351F65655759E0C(800);
					Local_402.f_3 = 35;
				}
				break;
			
			case 35:
				bVar90 = true;
				func_217(Local_402.f_0);
				if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546.f_61[1] * 1000f))
				{
					bVar90 = false;
				}
				if (bVar90)
				{
					func_216();
					func_232(0, 1, 1, 0);
					unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
					if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110))
					{
						unk_0x55CC07D5416539C8(Local_402.f_110, 0);
						unk_0x46B35AD2F641A4A3(Local_402.f_110, 0);
					}
					if (unk_0x2A3EA4C0BCED85F2(Local_402.f_111))
					{
						unk_0x55CC07D5416539C8(Local_402.f_111, 0);
						unk_0x46B35AD2F641A4A3(Local_402.f_111, 0);
					}
					if (unk_0x76B3C79DE564AFC6(iLocal_1037))
					{
						unk_0x33808CAFB62A256D(iLocal_1037, 1, 0);
						unk_0x1F18D3C78C8C1A11(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
					unk_0x7EF668988342648C(8);
					if (unk_0x391103C96DB7B6E4())
					{
						unk_0xA05EC9D85FA401E6();
					}
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						iVar12 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
						if (unk_0x76B3C79DE564AFC6(iVar12) && unk_0x432757A9E7AAFA96(iVar12, 0))
						{
							iVar91 = func_238(Local_402.f_0);
							func_60(&Var92, iVar91);
							unk_0x0A69FBBF51E1A08F(iVar12, Var92, 1, 0, 0, 1);
							unk_0x5082D1A6D078DB20(iVar12, Var92.f_3);
							unk_0xC6DC608BBC52BB6A(iVar12, 1);
							unk_0x56B418F469976565(iVar12, 0, 1, 0);
							unk_0x409E2EAB607A494A(iVar12, 4);
							unk_0xC8A7CAC2BD3532F6(iVar12, 1, 0);
							unk_0xC8A7CAC2BD3532F6(iVar12, 0, 0);
							unk_0xF73BCDB7C058F04E(iVar12, 0);
							unk_0x31EFA4297B872C86(iVar12, 0, 0, 0, 0, 0, 0, 0, 0);
							unk_0x89E71378750944C1(unk_0x0031992CA618A445(), iVar12, 0);
							unk_0x1F18D3C78C8C1A11(iVar12, 0);
							Var113.f_9 = 49;
							Var113.f_59 = 2;
							func_32(iVar12, &Var113);
							func_111(iVar91, &Var113, 0f, 0f, 0f, -1f, 145);
							func_30(iVar91, iVar12, 1);
							func_207(iVar12);
						}
						unk_0x31F42B23A853582E(0f);
						unk_0xADE985F6BA90AED5(0f, 1065353216);
					}
					iVar191 = unk_0xCCB8FB63FA4C6CAB(unk_0x0031992CA618A445(), &uVar0, -1);
					iVar192 = 0;
					while (iVar192 < iVar191)
					{
						if ((unk_0x76B3C79DE564AFC6(uVar0[iVar192]) && !unk_0x8682D8A6269E52C9(uVar0[iVar192])) && unk_0x03F0ADE460FD95F9(uVar0[iVar192], unk_0xC95BCBF0579C6F1A(unk_0x3D35F9864E4640B1())))
						{
							unk_0x0AF5FA388AAEFF13(uVar0[iVar192], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar192++;
					}
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					unk_0x18D7C8000EDEAAB4(800);
					Local_402.f_3 = 10;
				}
				break;
			
			case 10:
				if (unk_0x83666F9FB8FEBD4B() < 7000 || !Global_104439.f_32291.f_4800)
				{
					if (!Global_104439.f_32291.f_4800)
					{
						if (iLocal_1013 == 0)
						{
							func_178("CAR_GAR_05", -1);
							StringCopy(&cLocal_1023, "CAR_GAR_05", 16);
							bVar11 = true;
							if (unk_0x83666F9FB8FEBD4B() >= 7000)
							{
								unk_0xC1B1E9A034A63A62(0);
								iLocal_1013++;
							}
						}
						else if (iLocal_1013 == 1)
						{
							func_178("CAR_GAR_06", -1);
							StringCopy(&cLocal_1023, "CAR_GAR_06", 16);
							bVar11 = true;
							if (unk_0x83666F9FB8FEBD4B() >= 7000)
							{
								unk_0xC1B1E9A034A63A62(0);
								Global_104439.f_32291.f_4800 = 1;
							}
						}
					}
					else
					{
						func_178("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_1023, "CAR_GAR_EXIT", 16);
						bVar11 = true;
					}
				}
				else
				{
					Global_104439.f_32291.f_4800 = 1;
				}
				iVar193 = 0;
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					if (iLocal_656 != -1)
					{
						func_68(&iLocal_656);
					}
					iVar12 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
					if (unk_0x76B3C79DE564AFC6(iVar12) && unk_0x432757A9E7AAFA96(iVar12, 0))
					{
						if (unk_0xEA9A1C2927FFD16C(iVar12) || unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
						{
							if (!(unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && !unk_0x84432DB7C4069064(unk_0x0031992CA618A445())))
							{
								if ((((unk_0x55B774FEC27F431A(0, 71) != 0f || unk_0xD887E21676314450(0, 71)) || unk_0x9148803485DEDF45(0, 71)) || unk_0x42F812C5F1AA300A(0, 71)) || unk_0x59ABF4F2C485FC38(0, 71))
								{
									iVar193 = 1;
								}
								if ((((unk_0x55B774FEC27F431A(0, 72) != 0f || unk_0xD887E21676314450(0, 72)) || unk_0x9148803485DEDF45(0, 72)) || unk_0x42F812C5F1AA300A(0, 72)) || unk_0x59ABF4F2C485FC38(0, 72))
								{
									iVar193 = 1;
								}
							}
						}
					}
				}
				else
				{
					unk_0x9F62787D280BF2EC(sVar14);
					if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, 1, 0) && func_248(unk_0x69F9721375CE60CF(unk_0x0031992CA618A445()), 180f, 90f))
					{
						if (iLocal_655 != -1)
						{
							func_68(&iLocal_655);
						}
						if (iLocal_656 == -1)
						{
							func_180(&iLocal_656, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
						}
						if (!iLocal_655 != -1 && !iLocal_656 == -1)
						{
							if (func_175(iLocal_656, 1))
							{
								func_68(&iLocal_656);
								iVar193 = 1;
							}
						}
					}
					else if (iLocal_656 != -1)
					{
						func_68(&iLocal_656);
					}
				}
				if (iLocal_1016)
				{
					iVar193 = 1;
				}
				if (iVar193 && !func_206())
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) || iLocal_1016)
					{
						unk_0xC1B1E9A034A63A62(0);
						unk_0x4A7134889007D5B3(Local_546.f_73[2 /*4*/], 20f, 0);
						if (iLocal_656 != -1)
						{
							func_68(&iLocal_656);
						}
						Local_402.f_3 = 12;
					}
					else if (unk_0xB3379AC2E71D1E7E(sVar14))
					{
						sLocal_1035 = "";
						switch (unk_0x3AF262D7332EEDF5(0, 6))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_1035 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_1035 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_1035 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_1035 = "gar_open_3_right";
								break;
						}
						iLocal_661 = unk_0x87070FAB863D4019(Local_546.f_73[1 /*4*/], 0f, 0f, Local_546.f_73[1 /*4*/].f_3, 2);
						unk_0x5C774A8BEBE5BD26(unk_0x0031992CA618A445(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0, 1148846080, 0);
						func_232(1, 1, 1, 0);
						func_231(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
						unk_0x4A7134889007D5B3(Local_546.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_656 != -1)
						{
							func_68(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
					else if (!unk_0x543759FBE5B48C3A(sVar14))
					{
						unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), Local_546.f_73[1 /*4*/], 1, 0, 0, 1);
						unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), Local_546.f_73[1 /*4*/].f_3);
						func_232(1, 1, 1, 0);
						func_231(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
						unk_0x4A7134889007D5B3(Local_546.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_656 != -1)
						{
							func_68(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar194 = true;
				if (!unk_0x391103C96DB7B6E4())
				{
				}
				else if (unk_0x9177A5D78560369F())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (func_218())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110) && unk_0x00E0F13A223ED180(Local_402.f_110))
				{
					if (unk_0x0B7CA263460475D0(Local_402.f_110))
					{
						bVar194 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else if (unk_0x2A3EA4C0BCED85F2(Local_402.f_111) && unk_0x00E0F13A223ED180(Local_402.f_111))
				{
					if (unk_0x0B7CA263460475D0(Local_402.f_111))
					{
						bVar194 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else
				{
					bVar194 = false;
				}
				if (unk_0x00BF23259C14645D(iLocal_661))
				{
					fVar195 = unk_0xB69F54D50B0A81C6(iLocal_661);
					if (fVar195 < 0.4f)
					{
						bVar194 = false;
					}
				}
				if (bVar194)
				{
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					unk_0x8351F65655759E0C(800);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 13;
				}
				break;
			
			case 12:
				unk_0xC9621A9AD282CC14(0, 75, 1);
				if (unk_0x83666F9FB8FEBD4B() > 500)
				{
					iVar196 = func_205();
					if ((iVar196 == 21 || iVar196 == 22) || iVar196 == 23)
					{
						Var197.f_9 = 49;
						Var197.f_59 = 2;
						func_111(iVar196, &Var197, 0f, 0f, 0f, -1f, 145);
						func_113(iVar196);
					}
					else if (iVar196 != -1)
					{
						if (!iLocal_1016)
						{
							func_411(iVar196, 0);
							func_113(iVar196);
						}
					}
					unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
					unk_0x492D173FBA5C0419(unk_0x0031992CA618A445(), 0, 0);
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
					unk_0xBE238DB7614E8074(sVar14);
					unk_0x8351F65655759E0C(800);
					Local_402.f_3 = 13;
				}
				break;
			
			case 13:
				if (unk_0x5114FCEE2A997B95())
				{
					iVar275 = unk_0x6307C3D1D866114A();
					unk_0x18F1BFAF88AC511B(iVar275, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0x52FE0F2031364132(iVar275, "hold", (2250f / 1000f));
					unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
					if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110))
					{
						unk_0x55CC07D5416539C8(Local_402.f_110, 0);
						unk_0x46B35AD2F641A4A3(Local_402.f_110, 0);
					}
					if (unk_0x2A3EA4C0BCED85F2(Local_402.f_111))
					{
						unk_0x55CC07D5416539C8(Local_402.f_111, 0);
						unk_0x46B35AD2F641A4A3(Local_402.f_111, 0);
					}
					if (unk_0x76B3C79DE564AFC6(iLocal_1037))
					{
						unk_0x33808CAFB62A256D(iLocal_1037, 1, 0);
						unk_0x1F18D3C78C8C1A11(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
					unk_0x7EF668988342648C(8);
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						if (!iLocal_1016)
						{
							iVar12 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
							if (unk_0x76B3C79DE564AFC6(iVar12) && unk_0x432757A9E7AAFA96(iVar12, 0))
							{
								unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
								unk_0x0A69FBBF51E1A08F(iVar12, Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
								unk_0x5082D1A6D078DB20(iVar12, Local_402.f_29.f_77[1]);
								unk_0x24B72A49849215AE(iVar12, 1084227584);
							}
						}
					}
					else
					{
						if (unk_0x00BF23259C14645D(iLocal_661))
						{
							unk_0xFB07298202643C99(iLocal_661);
						}
						iLocal_661 = -1;
						unk_0x3000ECF14A659126(unk_0x0031992CA618A445());
						unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
						unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), Local_402.f_29.f_77[1]);
					}
					unk_0x31F42B23A853582E(0f);
					unk_0xADE985F6BA90AED5(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 14;
				}
				break;
			
			case 14:
				if (unk_0x5114FCEE2A997B95() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					bVar276 = true;
					if (iLocal_1016)
					{
						unk_0xBE91026C1FC72180(iLocal_1017);
						if (unk_0x772F801619C83779(iLocal_1017))
						{
							iVar277 = unk_0x5129A9193468FF77(iLocal_1017, Local_402.f_29.f_70[0 /*3*/], Local_402.f_29.f_77[0], 1, 1, 0);
							if (iLocal_1017 == joaat("windsor"))
							{
								unk_0xE4707C143B24BAB3(iVar277, 0);
							}
							if (unk_0x76B3C79DE564AFC6(iVar277) && unk_0x432757A9E7AAFA96(iVar277, 0))
							{
								unk_0x7E3C622EB2D4D2E2(unk_0x0031992CA618A445(), iVar277, -1);
								unk_0x114815B023ED3916(iVar277, 0f);
								unk_0x9793B48C4C8275F8(iLocal_1017);
								if (func_114(iLocal_1017))
								{
									switch (iLocal_1017)
									{
										case joaat("marshall"):
											unk_0xE4707C143B24BAB3(iVar277, iLocal_651);
											break;
										}
								}
								unk_0x28BB69BE14577487(&iVar277);
							}
							iLocal_1016 = 0;
						}
						else
						{
							bVar276 = false;
						}
					}
					if (!unk_0x391103C96DB7B6E4())
					{
					}
					else if (unk_0x9177A5D78560369F())
					{
					}
					else
					{
						bVar276 = false;
					}
					if (bVar276)
					{
						if (unk_0x76B3C79DE564AFC6(iLocal_1027) && unk_0x432757A9E7AAFA96(iLocal_1027, 0))
						{
							iVar278 = func_48(24);
							if (func_230(&Local_776, 24))
							{
								func_225(&Local_776, func_405());
								if (unk_0x76B3C79DE564AFC6(iVar278))
								{
									unk_0xE9F8539D5AF6B052(&iVar278);
								}
							}
							if (Local_402.f_0 == 21)
							{
								unk_0x963AAB0E6FFD7E02(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
								unk_0x0A69FBBF51E1A08F(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
								unk_0x5082D1A6D078DB20(iLocal_1027, 154.4846f);
								func_223(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_402.f_0 == 22)
							{
								unk_0x963AAB0E6FFD7E02(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
								unk_0x0A69FBBF51E1A08F(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
								unk_0x5082D1A6D078DB20(iLocal_1027, 319.6985f);
								func_223(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_402.f_0 == 23)
							{
								unk_0x963AAB0E6FFD7E02(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
								unk_0x0A69FBBF51E1A08F(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
								unk_0x5082D1A6D078DB20(iLocal_1027, 270.8741f);
								func_223(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							unk_0x24B72A49849215AE(iLocal_1027, 1084227584);
						}
						if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
						{
							iVar12 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
							if (unk_0x76B3C79DE564AFC6(iVar12) && unk_0x432757A9E7AAFA96(iVar12, 0))
							{
								unk_0x0A69FBBF51E1A08F(iVar12, Local_546.f_66[1 /*3*/], 1, 0, 0, 1);
								unk_0x5082D1A6D078DB20(iVar12, Local_402.f_29.f_77[0]);
								unk_0x24B72A49849215AE(iVar12, 1084227584);
								if ((iLocal_1017 == joaat("monster") || iLocal_1017 == joaat("marshall")) || iLocal_1017 == joaat("rhino"))
								{
									unk_0x30EFA94609D08404(iVar12, false);
								}
								else
								{
									unk_0x30EFA94609D08404(iVar12, true);
								}
								if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
								{
									unk_0x197677294AB2AF1C(unk_0x0031992CA618A445(), 0, 0, -1);
									unk_0x49C384CAABA72CC6(unk_0x0031992CA618A445(), 1);
								}
								unk_0xF73BCDB7C058F04E(iVar12, 1);
								func_195(func_405(), &iVar12, 3, 1);
							}
							unk_0x18D7C8000EDEAAB4(800);
							func_232(1, 1, 1, 0);
							func_231(&(Local_546[3 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
							iLocal_1034 = 0;
							iLocal_1036 = -1;
							Local_402.f_3 = 15;
						}
						else
						{
							unk_0xBE238DB7614E8074(sVar14);
							func_216();
							unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
							if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110))
							{
								unk_0x55CC07D5416539C8(Local_402.f_110, 0);
								unk_0x46B35AD2F641A4A3(Local_402.f_110, 0);
							}
							if (unk_0x2A3EA4C0BCED85F2(Local_402.f_111))
							{
								unk_0x55CC07D5416539C8(Local_402.f_111, 0);
								unk_0x46B35AD2F641A4A3(Local_402.f_111, 0);
							}
							if (unk_0x76B3C79DE564AFC6(iLocal_1037))
							{
								unk_0x33808CAFB62A256D(iLocal_1037, 1, 0);
								unk_0x1F18D3C78C8C1A11(iLocal_1037, 0);
								iLocal_1037 = 0;
							}
							unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
							unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
							unk_0x7EF668988342648C(8);
							unk_0x3000ECF14A659126(unk_0x0031992CA618A445());
							unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
							unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), Local_402.f_29.f_77[1]);
							unk_0x18D7C8000EDEAAB4(800);
							unk_0xC1B1E9A034A63A62(0);
							func_219(198.0043f, -999.7775f, -100f, 50f, 0);
							unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
							Local_402.f_3 = 16;
						}
						if (Local_402.f_3 != 16)
						{
							unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
						}
						unk_0x56A844FA6FE745C3(0);
						unk_0x4C4F62CD43971CED(0);
						unk_0xC1B1E9A034A63A62(0);
						unk_0x31F42B23A853582E(0f);
						unk_0xADE985F6BA90AED5(0f, 1065353216);
						iVar279 = unk_0xCCB8FB63FA4C6CAB(unk_0x0031992CA618A445(), &uVar0, -1);
						iVar280 = 0;
						while (iVar280 < iVar279)
						{
							if ((unk_0x76B3C79DE564AFC6(uVar0[iVar280]) && !unk_0x8682D8A6269E52C9(uVar0[iVar280])) && unk_0x03F0ADE460FD95F9(uVar0[iVar280], unk_0xC95BCBF0579C6F1A(unk_0x3D35F9864E4640B1())))
							{
								if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
								{
									iVar12 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
									if ((unk_0x76B3C79DE564AFC6(iVar12) && unk_0x432757A9E7AAFA96(iVar12, 0)) && unk_0xB8B31FD7EF092667(iVar12) > iVar280)
									{
										unk_0x7E3C622EB2D4D2E2(uVar0[iVar280], iVar12, iVar280);
									}
								}
								else
								{
									unk_0x0AF5FA388AAEFF13(uVar0[iVar280], Local_402.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							iVar280++;
						}
						unk_0x7EF668988342648C(8);
						iLocal_1033 = 0;
					}
				}
				break;
			
			case 15:
				bVar281 = true;
				if (!unk_0x391103C96DB7B6E4())
				{
				}
				else if (unk_0x9177A5D78560369F())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (func_218())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110) && unk_0x00E0F13A223ED180(Local_402.f_110))
				{
					if (unk_0x0B7CA263460475D0(Local_402.f_110))
					{
						bVar281 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else if (unk_0x2A3EA4C0BCED85F2(Local_402.f_111) && unk_0x00E0F13A223ED180(Local_402.f_111))
				{
					if (unk_0x0B7CA263460475D0(Local_402.f_111))
					{
						bVar281 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else
				{
					bVar281 = false;
				}
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					func_208(unk_0x0031992CA618A445(), Local_546.f_86[1 /*6*/], Local_546.f_66[1 /*3*/], ((Local_546[3 /*15*/].f_14 * 1000f) - 500f), Local_546.f_73[2 /*4*/], 3, &fVar13);
				}
				if (iLocal_1036 < 1 && func_194(unk_0x0031992CA618A445(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_1036 == 0)
					{
						func_219(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_1036++;
				}
				if (bVar281)
				{
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 16;
				}
				else
				{
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
				}
				break;
			
			case 16:
				bVar282 = true;
				if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546.f_61[3] * 1000f))
				{
					bVar282 = false;
				}
				if (bVar282)
				{
					Local_402.f_3 = 17;
				}
				break;
			
			case 17:
				if (unk_0x68BBDCBE8B7849EB(Local_402.f_112))
				{
					unk_0x29F8C56DC8DA4943(Local_402.f_112);
				}
				StringCopy(&Global_32536, "", 32);
				if (unk_0x391103C96DB7B6E4())
				{
					unk_0xA05EC9D85FA401E6();
				}
				func_193(47, 1);
				func_191(47, 1);
				Global_69607.f_577 = 0;
				if (unk_0x5114FCEE2A997B95() || unk_0x229840854A80E0D9())
				{
					unk_0x18D7C8000EDEAAB4(250);
				}
				unk_0xC1B1E9A034A63A62(0);
				unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
				if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110))
				{
					unk_0x55CC07D5416539C8(Local_402.f_110, 0);
					unk_0x46B35AD2F641A4A3(Local_402.f_110, 0);
				}
				if (unk_0x2A3EA4C0BCED85F2(Local_402.f_111))
				{
					unk_0x55CC07D5416539C8(Local_402.f_111, 0);
					unk_0x46B35AD2F641A4A3(Local_402.f_111, 0);
				}
				if (unk_0x76B3C79DE564AFC6(iLocal_1037))
				{
					unk_0x33808CAFB62A256D(iLocal_1037, 1, 0);
					unk_0x1F18D3C78C8C1A11(iLocal_1037, 0);
					iLocal_1037 = 0;
				}
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					iVar12 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
					if (unk_0x76B3C79DE564AFC6(iVar12) && unk_0x432757A9E7AAFA96(iVar12, 0))
					{
						unk_0x0A69FBBF51E1A08F(iVar12, Local_546.f_73[2 /*4*/], 1, 0, 0, 1);
						unk_0x5082D1A6D078DB20(iVar12, Local_546.f_73[2 /*4*/].f_3);
						unk_0x24B72A49849215AE(iVar12, 1084227584);
						unk_0x31F42B23A853582E(0f);
						unk_0xADE985F6BA90AED5(0f, 1065353216);
					}
				}
				unk_0x56A844FA6FE745C3(1);
				unk_0x4C4F62CD43971CED(1);
				func_232(0, 1, 1, 0);
				unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
				if (iLocal_1012 > 0)
				{
					unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), iLocal_1012, 0);
					unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
				}
				if (((unk_0x76B3C79DE564AFC6(iLocal_1027) && unk_0xCC234795142FC2D2(iLocal_1027)) && unk_0xC9FBF92709010AC3(iLocal_1027, 0)) && iLocal_1027 != func_48(24))
				{
					unk_0x28BB69BE14577487(&iLocal_1027);
				}
				unk_0xD804ACF2A7171150(&(Local_674.f_9), 25);
				iLocal_1031 = 0;
				Local_402.f_3 = 18;
				break;
			
			case 18:
				if (unk_0xF9FC07CC13402AEF())
				{
					Local_402.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_69607.f_577)
		{
			func_193(47, 1);
			func_191(47, 1);
			Global_69607.f_577 = 0;
		}
		Local_402.f_3 = 0;
		if (iLocal_656 != -1)
		{
			func_68(&iLocal_656);
		}
	}
	if (Global_69607.f_577)
	{
		unk_0x9A23C99B063DA31B();
		func_190();
		func_75(0);
		unk_0x64517F908482FA52(unk_0x0031992CA618A445(), joaat("weapon_unarmed"), 1);
		unk_0x8662FAB20C4C3CFB(2, 202);
		unk_0xC9621A9AD282CC14(0, 37, 1);
		unk_0xC9621A9AD282CC14(0, 157, 1);
		unk_0xC9621A9AD282CC14(0, 158, 1);
		unk_0xC9621A9AD282CC14(0, 159, 1);
		unk_0xC9621A9AD282CC14(0, 160, 1);
		unk_0xC9621A9AD282CC14(0, 161, 1);
		unk_0xC9621A9AD282CC14(0, 162, 1);
		unk_0xC9621A9AD282CC14(0, 163, 1);
		unk_0xC9621A9AD282CC14(0, 164, 1);
		unk_0xC9621A9AD282CC14(0, 165, 1);
		unk_0xC9621A9AD282CC14(0, 14, 1);
		unk_0xC9621A9AD282CC14(0, 15, 1);
		unk_0xC9621A9AD282CC14(0, 53, 1);
		unk_0xC9621A9AD282CC14(0, 54, 1);
		unk_0xC9621A9AD282CC14(0, 140, 1);
		unk_0xC9621A9AD282CC14(0, 141, 1);
		unk_0xC9621A9AD282CC14(0, 142, 1);
		unk_0xC9621A9AD282CC14(0, 143, 1);
		unk_0xC9621A9AD282CC14(0, 143, 1);
		unk_0xC9621A9AD282CC14(0, 47, 1);
		unk_0xC9621A9AD282CC14(0, 38, 1);
		unk_0xC9621A9AD282CC14(0, 22, 1);
		unk_0xC9621A9AD282CC14(0, 102, 1);
		unk_0xC9621A9AD282CC14(0, 69, 1);
		unk_0xC9621A9AD282CC14(0, 70, 1);
		unk_0xC9621A9AD282CC14(0, 68, 1);
		unk_0xC9621A9AD282CC14(0, 92, 1);
		unk_0xC9621A9AD282CC14(0, 99, 1);
		unk_0xC9621A9AD282CC14(0, 115, 1);
		unk_0xC9621A9AD282CC14(0, 46, 1);
		unk_0xC9621A9AD282CC14(0, 25, 1);
	}
	if (!bVar11 && Local_402.f_2 == 0)
	{
		if (unk_0x068C69D0643C4B95())
		{
			if (!unk_0x0BD3CCFB6C6CFA91(&cLocal_1023))
			{
				if ((((func_179("WEB_VEH_INV") || func_179("WEB_VEH_FULL")) || func_179("CAR_GAR_05")) || func_179("CAR_GAR_06")) || func_179("CAR_GAR_EXIT"))
				{
					unk_0x8C361F37C04084F4(1);
				}
				StringCopy(&cLocal_1023, "", 16);
			}
		}
	}
}

void func_190()
{
	Global_17151.f_6 = 1;
}

void func_191(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_192(iParam0) };
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_31593[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_31593[Var0.f_1]), Var0.f_0);
	}
}

struct<2> func_192(var uParam0)
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
	while (iVar1 < 5)
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

void func_193(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_192(iParam0) };
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_31587[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_31587[Var0.f_1]), Var0.f_0);
	}
}

float func_194(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	return unk_0x1410333E912D4EC6(Var0, Param1, iParam4);
}

void func_195(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_25(iParam0) && unk_0x76B3C79DE564AFC6(*iParam1)) && unk_0x432757A9E7AAFA96(*iParam1, 0))
	{
		if (iParam2 > Global_104439.f_2244.f_539.f_2387)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_31(*iParam1, iParam0);
		}
		if (unk_0x5583DCB5A49F0E53(*iParam1) != 0)
		{
			unk_0x9B0BD13ABD4E15D1(*iParam1, 0);
		}
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/] = unk_0xE9559A12052415BE(*iParam1);
		if (unk_0x0A61DF43ACF6A45B(*iParam1, &iVar1))
		{
			Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0xE9559A12052415BE(iVar1);
		}
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x30E6E9AC0D98065A(*iParam1);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x8DB158934E64B062(*iParam1);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x3BE354A1A1BD6623(*iParam1, 1);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x3BE354A1A1BD6623(*iParam1, 2);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x3BE354A1A1BD6623(*iParam1, 3);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x3BE354A1A1BD6623(*iParam1, 4);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x3BE354A1A1BD6623(*iParam1, 5);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x3BE354A1A1BD6623(*iParam1, 6);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x3BE354A1A1BD6623(*iParam1, 7);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x3BE354A1A1BD6623(*iParam1, 8);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x3BE354A1A1BD6623(*iParam1, 9);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x3BE354A1A1BD6623(*iParam1, 10);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x3BE354A1A1BD6623(*iParam1, 11);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x3BE354A1A1BD6623(*iParam1, 12);
		if (unk_0x949DE8C96217A79B(*iParam1, 0))
		{
			iVar2 = unk_0x727C05A2BF43A1DA(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x885DE9EE2AE89A2A();
		StringCopy(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0xCF9C6545E179C4AD(*iParam1), 16);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x3863090BB0402D29(*iParam1);
		unk_0xB3EEFAD2583A0B39(*iParam1, &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0xCC1E6825E8AEFA91(*iParam1, &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xB6CD70E75256F4B4(*iParam1, &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x95C125C85B156194(*iParam1);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x92D3D399848DA022(*iParam1);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x27F913045BB0E0C6(*iParam1);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x0B56976C59C0773F(*iParam1);
		unk_0x6B1D7C9564AA9095(*iParam1, &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x429138BE60703CCA(*iParam1, 2))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x429138BE60703CCA(*iParam1, 3))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x429138BE60703CCA(*iParam1, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x429138BE60703CCA(*iParam1, 1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_104439.f_2244.f_539.f_4297[iParam0] = 10;
		if ((unk_0x0A264F4746D9A02B(*iParam1) >= 0 && unk_0x0A264F4746D9A02B(*iParam1) < 255) && func_198(*iParam1, 0, &uVar0))
		{
			func_34(iParam1, &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_104439.f_19979[iParam0 /*43*/].f_40 = 1;
				Global_104439.f_19979[iParam0 /*43*/] = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/];
				Global_104439.f_19979[iParam0 /*43*/].f_3 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_104439.f_19979[iParam0 /*43*/].f_4 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_104439.f_19979[iParam0 /*43*/].f_5 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_104439.f_19979[iParam0 /*43*/].f_6 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_104439.f_19979[iParam0 /*43*/].f_10 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_104439.f_19979[iParam0 /*43*/].f_16 = !Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_104439.f_19979[iParam0 /*43*/].f_19 = { Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_104439.f_19979[iParam0 /*43*/].f_23 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_104439.f_19979[iParam0 /*43*/].f_7 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_104439.f_19979[iParam0 /*43*/].f_8 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_104439.f_19979[iParam0 /*43*/].f_9 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_104439.f_19979[iParam0 /*43*/].f_11 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_104439.f_19979[iParam0 /*43*/].f_12 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_104439.f_19979[iParam0 /*43*/].f_13 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_104439.f_19979[iParam0 /*43*/].f_14 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_104439.f_19979[iParam0 /*43*/].f_15 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_104439.f_19979[iParam0 /*43*/].f_18 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_104439.f_19979[iParam0 /*43*/].f_17 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_104439.f_19979[iParam0 /*43*/].f_24 = unk_0x43CF7C22C63E44EA(*iParam1, 11) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_25 = unk_0x43CF7C22C63E44EA(*iParam1, 12) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_26 = unk_0x43CF7C22C63E44EA(*iParam1, 4) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_27 = unk_0x43CF7C22C63E44EA(*iParam1, 23) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_28 = unk_0x43CF7C22C63E44EA(*iParam1, 14) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_29 = unk_0x43CF7C22C63E44EA(*iParam1, 16) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_30 = unk_0x43CF7C22C63E44EA(*iParam1, 15) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_32 = unk_0xC70F2BB57FE317CD(*iParam1);
				Global_104439.f_19979[iParam0 /*43*/].f_33[0] = unk_0x050FBB69DDC43293(*iParam1);
				Global_104439.f_19979[iParam0 /*43*/].f_33[1] = unk_0x39BA0DF99894DAE5(*iParam1, 14, 0);
				Global_104439.f_19979[iParam0 /*43*/].f_33[2] = unk_0x39BA0DF99894DAE5(*iParam1, 14, 1);
				Global_104439.f_19979[iParam0 /*43*/].f_33[3] = unk_0x39BA0DF99894DAE5(*iParam1, 14, 2);
				Global_104439.f_19979[iParam0 /*43*/].f_33[4] = unk_0x39BA0DF99894DAE5(*iParam1, 14, 3);
				Global_104439.f_19979[iParam0 /*43*/].f_39 = unk_0xDF012B24B1C790FF(*iParam1);
				Global_104439.f_19979[iParam0 /*43*/].f_31 = func_197(*iParam1);
				Global_104439.f_19979[iParam0 /*43*/].f_33[0] = unk_0x75581E55A902E534(*iParam1);
				unk_0xF3D0E2AC695543E9(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_196(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_104439.f_19979[iParam0 /*43*/].f_1));
				unk_0x9591372C6496BFA3(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_196(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_104439.f_19979[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_196(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_136(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

float func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0)) && unk_0x0A264F4746D9A02B(iParam0) >= 0) && unk_0x0A264F4746D9A02B(iParam0) < 255)
	{
		if (unk_0xDF012B24B1C790FF(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xDF012B24B1C790FF(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xDF012B24B1C790FF(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xDF012B24B1C790FF(iParam0) == 0)
		{
			if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
	return fVar6;
}

int func_198(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x76B3C79DE564AFC6(iParam0))
	{
		return 0;
	}
	if (!unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x6DFDB26E7DC403AF(unk_0xE9559A12052415BE(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0xE9559A12052415BE(iParam0);
	if (!func_203(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	bVar1 = false;
	if (func_199(unk_0x3D35F9864E4640B1()) && (unk_0x1DBFCF939B3B47D0(iVar0) || unk_0xF9CDF5CA6A1D6756(iVar0)))
	{
		bVar1 = true;
	}
	if ((((((unk_0xC4DF0B3808F615ED(iParam0) && unk_0xE9559A12052415BE(iParam0) != joaat("halftrack")) && unk_0xE9559A12052415BE(iParam0) != joaat("phantom3")) && unk_0xE9559A12052415BE(iParam0) != joaat("hauler2")) && unk_0xE9559A12052415BE(iParam0) != joaat("trailerlarge")) && unk_0xE9559A12052415BE(iParam0) != joaat("trailersmall2")) && !bVar1)
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if ((func_61(iParam0) && unk_0xE9559A12052415BE(iParam0) != joaat("sentinel2")) && unk_0xE9559A12052415BE(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_199(int iParam0)
{
	if (iParam0 != func_202())
	{
		if (func_201(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_200(Global_2422142[iParam0 /*399*/].f_318.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_200(int iParam0)
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
	}
	return -1;
}

int func_201(int iParam0, bool bParam1, bool bParam2)
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

int func_202()
{
	return -1;
}

int func_203(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_199(unk_0x3D35F9864E4640B1()) && (unk_0x1DBFCF939B3B47D0(iParam0) || unk_0xF9CDF5CA6A1D6756(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!unk_0x2076012573940835(iParam0) && !unk_0x34C854420D02F57B(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_204(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

int func_205()
{
	int iVar0;
	
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
		if (unk_0x76B3C79DE564AFC6(iVar0) && unk_0x432757A9E7AAFA96(iVar0, 0))
		{
			if (iVar0 == Global_69607.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_69607.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_69607.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_69607.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_69607.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_69607.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_69607.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_69607.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_69607.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_69607.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_69607.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_69607.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_206()
{
	return unk_0x31CD6E9F83C10233() <= Global_17290.f_5745 + 100;
}

void func_207(int iParam0)
{
	if ((unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0)) && iParam0 == Global_70512)
	{
		Global_104439.f_32291.f_5588 = 0;
		Global_70512 = 0;
	}
}

int func_208(int iParam0, struct<4> Param1, var uParam5, var uParam6, struct<3> Param7, float fParam10, struct<4> Param11, int iParam15, float fParam16)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	int iVar12;
	struct<3> Var13;
	float fVar16;
	float fVar17;
	float fVar18;
	
	Var0 = { Param1 };
	Var3 = { Param1.f_3 };
	Var6 = { Param7 };
	Var9 = { Param1.f_3 };
	if (iLocal_1033 == 0)
	{
		iVar12 = unk_0xCFA31F1E461A6BB5(uParam0, 0);
		iLocal_1037 = iVar12;
		unk_0xC6DC608BBC52BB6A(iLocal_1037, 1);
		unk_0xFABEFEE17018AE2A(iLocal_1037, 1);
		unk_0x24B72A49849215AE(iLocal_1037, 1084227584);
		unk_0x56B418F469976565(iLocal_1037, 1, 1, 0);
		if (unk_0x140FF1DD7B3CB531(iParam0))
		{
			unk_0x197677294AB2AF1C(iParam0, 0, 0, -1);
			unk_0x49C384CAABA72CC6(iParam0, 1);
		}
		Var13 = { unk_0xF177E0DA126D71C8(iLocal_1037, 1) };
		fLocal_1038 = (Var13.f_2 - Var0.f_2);
		unk_0x0A69FBBF51E1A08F(iLocal_1037, Var0 + Vector(-10f, 0f, 0f), 1, 0, 0, 1);
		if (unk_0x432757A9E7AAFA96(iLocal_1037, 0))
		{
			unk_0x409E2EAB607A494A(iLocal_1037, 3);
		}
		iLocal_1039 = unk_0x31CD6E9F83C10233();
		iLocal_1033 = 1;
	}
	if (iLocal_1033 == 1)
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_1037) && unk_0x432757A9E7AAFA96(iLocal_1037, 0))
		{
			fVar16 = unk_0xBBDA792448DB5A89(iLocal_1039);
			fVar17 = (fVar16 + fParam10);
			fVar18 = func_215(unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233()), fVar16, fVar17);
			fVar18 = (fVar18 - fVar16);
			fVar18 = (fVar18 / fParam10);
			if (iParam15 == 1)
			{
				fVar18 = func_214(fVar18);
			}
			else if (iParam15 == 2)
			{
				fVar18 = func_213(fVar18);
			}
			else if (iParam15 == 3)
			{
				fVar18 = func_211(fVar18);
			}
			fVar18 = (fVar18 * fParam10);
			fVar18 = (fVar18 + fVar16);
			unk_0xC9621A9AD282CC14(0, 72, 1);
			unk_0x0AF5FA388AAEFF13(iLocal_1037, func_209(Var0 + Vector(fLocal_1038, 0f, 0f), Var6 + Vector(fLocal_1038, 0f, 0f), fVar16, fVar17, fVar18), 0, 0, 1);
			if (iLocal_1034 && !unk_0x140FF1DD7B3CB531(iParam0))
			{
				unk_0xB7E3C36A3BE003B5(iLocal_1037, func_209((0f - Var3.f_0), (0f - Var3.f_1), (Var3.f_2 + 180f), (0f - Var9.f_0), (0f - Var9.f_1), (Var9.f_2 + 180f), fVar16, fVar17, fVar18), 2, 1);
			}
			else
			{
				if (!unk_0x8682D8A6269E52C9(iParam0))
				{
					if (unk_0x140FF1DD7B3CB531(iParam0))
					{
						unk_0x49544FB997F0AADE(iParam0, 236, 1);
						unk_0x49544FB997F0AADE(iParam0, 309, 1);
					}
				}
				unk_0xB7E3C36A3BE003B5(iLocal_1037, func_209(Var3, Var9, fVar16, fVar17, fVar18), 2, 1);
			}
			unk_0x33808CAFB62A256D(iLocal_1037, 0, 0);
			unk_0x1F18D3C78C8C1A11(iLocal_1037, 1);
		}
		else
		{
			iLocal_1033 = 2;
			return 0;
		}
		if (unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233()) > (unk_0xBBDA792448DB5A89(iLocal_1039) + fParam10) && unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233()) > ((unk_0xBBDA792448DB5A89(iLocal_1039) + fParam10) + 2600f))
		{
			iLocal_1033 = 2;
			return 0;
		}
	}
	if (iLocal_1033 == 2)
	{
		unk_0x49544FB997F0AADE(iParam0, 236, 0);
		unk_0x49544FB997F0AADE(iParam0, 309, 0);
		if (unk_0x76B3C79DE564AFC6(iLocal_1037))
		{
			if (!func_21(Param11, 0f, 0f, 0f, 0))
			{
				unk_0x0A69FBBF51E1A08F(iLocal_1037, Param11, 1, 0, 0, 1);
				unk_0x5082D1A6D078DB20(iLocal_1037, Param11.f_3);
				unk_0x24B72A49849215AE(iLocal_1037, 1084227584);
			}
			unk_0x33808CAFB62A256D(iLocal_1037, 1, 0);
			unk_0x1F18D3C78C8C1A11(iLocal_1037, 0);
			iLocal_1037 = 0;
		}
		if (unk_0x140FF1DD7B3CB531(iParam0))
		{
			unk_0x12F59E8B2B6BD7F7(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_209(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_210(Param0.f_0, Param3.f_0, fParam6, fParam7, fParam8), func_210(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_210(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_210(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_211(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = unk_0x0BADBFA3B172435F(func_212(((fParam0 * 3.141593f) * 0.5f)));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_212(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_213(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - unk_0xD0FFB162F40A139C(func_212(((fParam0 * 3.141593f) * 0.5f))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_214(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - unk_0xD0FFB162F40A139C(func_212((fParam0 * 3.141593f)))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_215(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_216()
{
	Global_69607.f_553 = 1;
	Global_69607.f_554 = 0;
}

void func_217(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = uParam0;
		iVar1 = (9 + (iVar2 - 21));
		if (iVar0 > 0)
		{
			iVar2 = (iVar2 + 2 + iVar0 * 3);
			iVar1 = ((9 + (iVar2 - 21)) - 2);
		}
		iLocal_117[iVar2] = Global_104439.f_32291.f_69[iVar1 /*78*/].f_66;
		if (iLocal_117[iVar2] != 0)
		{
			if (!unk_0x2A3398C6222EB190(uLocal_48[iVar2], 2))
			{
				unk_0xBE91026C1FC72180(iLocal_117[iVar2]);
				unk_0xCD7E92DE2BFA0B0D(&(uLocal_48[iVar2]), 2);
				func_409(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_218()
{
	return !Global_69607.f_553;
}

void func_219(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_60(&(Global_69607.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x1410333E912D4EC6(Param0, Global_69607.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_220(iVar0);
			}
		}
		iVar0++;
	}
}

void func_220(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_60(&(Global_69607.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x76B3C79DE564AFC6(Global_69607.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				if (unk_0x432757A9E7AAFA96(Global_69607.f_139[iParam0], 0))
				{
					if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Global_69607.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x1581691D748490F3(Global_69607.f_139[iParam0], 1, 1);
				unk_0xE9F8539D5AF6B052(&(Global_69607.f_139[iParam0]));
			}
		}
		Global_69607[iParam0] = 1;
		if (unk_0x2A3398C6222EB190(Global_69607.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_66(iParam0, 0)) && Global_70516.f_66 == 0) && Global_104439.f_32291.f_1958[Global_69607.f_555[0 /*21*/].f_14] != 0) && Global_104439.f_32291.f_1958[Global_69607.f_555[0 /*21*/].f_14] > 3) && (!func_221(0, Global_69607.f_555[0 /*21*/].f_12) || !func_221(1, Global_69607.f_555[0 /*21*/].f_12)))
			{
				func_112(&(Global_104439.f_32291.f_69[Global_69607.f_555[0 /*21*/].f_14 /*78*/]), &Global_70516);
				Global_70594 = Global_104439.f_32291.f_5591;
			}
			func_411(iParam0, 0);
		}
	}
}

int func_221(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_222(&(Global_104439.f_32291.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_38(Global_104439.f_32291.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_222(var uParam0)
{
	return *uParam0;
}

void func_223(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x76B3C79DE564AFC6(Global_69607.f_484[25]) && unk_0x432757A9E7AAFA96(Global_69607.f_484[25], 0))
			{
				if (Global_69607.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xC4DF0B3808F615ED(iParam0) || unk_0xE9559A12052415BE(iParam0) == joaat("bus")) || unk_0xE9559A12052415BE(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_224(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_32(iParam0, &Var0);
		if (func_21(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
			fParam4 = unk_0x69F9721375CE60CF(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) != joaat("vehicle_gen_controller"))
			{
				Global_70595 = unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A());
			}
		}
		func_111(iParam5, &Var0, Param1, fParam4, func_45(iParam0));
		func_30(iParam5, iParam0, 0);
	}
}

void func_224(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_113(iParam0);
	func_411(iParam0, 0);
}

int func_225(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_37(uParam0->f_66))
	{
		return 0;
	}
	if (unk_0x76B3C79DE564AFC6(Global_70513))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	if (!func_221(0, iParam1))
	{
		Global_104439.f_32291.f_5592[iVar0] = 0;
	}
	else if (!func_221(1, iParam1))
	{
		Global_104439.f_32291.f_5592[iVar0] = 1;
	}
	func_226(iParam1, unk_0x0C9AAE7EC92AB471(uParam0->f_66));
	func_112(uParam0, &(Global_104439.f_32291.f_5038[iVar0 /*157*/][Global_104439.f_32291.f_5592[iVar0] /*78*/]));
	Global_104439.f_32291.f_5592[iVar0]++;
	if (Global_104439.f_32291.f_5592[iVar0] >= func_222(&(Global_104439.f_32291.f_5038[iVar0 /*157*/])))
	{
		Global_104439.f_32291.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_92231[iVar0 /*98*/] == uParam0->f_66 && unk_0xB3404E397FF56B3B(&(Global_92231[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_92231[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_226(int iParam0, char* sParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (!Global_104439.f_32291.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_227("IMPOUND_HELPM", sParam1, 2, unk_0x3AF262D7332EEDF5(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_227("IMPOUND_HELPF", sParam1, 2, unk_0x3AF262D7332EEDF5(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_227("IMPOUND_HELPT", sParam1, 2, unk_0x3AF262D7332EEDF5(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_104439.f_32291.f_5596[iParam0] = 1;
	}
}

void func_227(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_228(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_228(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xB3404E397FF56B3B(sParam0, ""))
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
	while (iVar0 < Global_104439.f_20271.f_145)
	{
		if (unk_0xB3404E397FF56B3B(&(Global_104439.f_20271[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104439.f_20271.f_145 < 9)
	{
		StringCopy(&(Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_4), sParam1, 16);
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_8 = (unk_0x31CD6E9F83C10233() + iParam3);
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_9 = iParam5;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_11 = iParam6;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_12 = uParam2;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_13 = iParam7;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_14 = iParam8;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_10 = ((unk_0x31CD6E9F83C10233() + iParam3) + iParam4);
		}
		else
		{
			Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_10 = -1;
		}
		Global_104439.f_20271.f_145++;
		func_229();
	}
}

void func_229()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104439.f_20271.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104439.f_20271.f_145)
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[0])
			{
				Global_104439.f_20271.f_146[0] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[1])
			{
				Global_104439.f_20271.f_146[1] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[2])
			{
				Global_104439.f_20271.f_146[2] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_230(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_60(&(Global_69607.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_112(&(Global_104439.f_32291.f_69[Global_69607.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

int func_231(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x2A3EA4C0BCED85F2(*uParam1))
	{
		unk_0x46B35AD2F641A4A3(*uParam1, 0);
	}
	if (unk_0x2A3EA4C0BCED85F2(*uParam2))
	{
		unk_0x46B35AD2F641A4A3(*uParam2, 0);
	}
	*uParam1 = unk_0xAC08B32D1D8EFE97("DEFAULT_SCRIPTED_CAMERA", 0);
	*uParam2 = unk_0xAC08B32D1D8EFE97("DEFAULT_SCRIPTED_CAMERA", 0);
	if (unk_0x2A3EA4C0BCED85F2(*uParam1) && unk_0x2A3EA4C0BCED85F2(*uParam2))
	{
		unk_0x9DCCF01CC7010892(*uParam1, *uParam0);
		unk_0x2E8AC89F9A70DEC3(*uParam1, uParam0->f_3, 2);
		unk_0x990E6357D338A9C8(*uParam1, uParam0->f_12);
		unk_0x9DCCF01CC7010892(*uParam2, uParam0->f_6);
		unk_0x2E8AC89F9A70DEC3(*uParam2, uParam0->f_6.f_3, 2);
		unk_0x990E6357D338A9C8(*uParam2, uParam0->f_12);
		unk_0xE983D49A61E9F0FF(*uParam1, "HAND_SHAKE", uParam0->f_13);
		unk_0xE983D49A61E9F0FF(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			unk_0xD0E2527DD961F86C(*uParam2, *uParam1, unk_0xF2DB717A73826179((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			unk_0x55CC07D5416539C8(*uParam1, 1);
		}
		unk_0x087893C6FCE21842(1, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_232(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x19118E4FD77F8B01(unk_0x3D35F9864E4640B1());
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 1);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 1);
		func_237(1);
		unk_0x94C26352258B001C();
		unk_0x7E403E6B20B0F65E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xCAD6D8C85D0F329B())
			{
				unk_0x683F0CB6CA4C99D0(0);
			}
			if (!func_77())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_236(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_70783 = 1;
	}
	else
	{
		func_237(0);
		unk_0xA82338775E53641E();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x074C8061E9FD0B90();
		}
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 0);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 0);
		func_236(0, iParam3, iParam2, 0);
		if (unk_0x27CA09C6DFAB1E79())
		{
			if (((!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_234(unk_0x3D35F9864E4640B1())) && !func_89(unk_0x3D35F9864E4640B1(), 0)) && !func_233())
			{
				unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
			}
		}
		else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_234(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
		}
		Global_70783 = 0;
	}
}

bool func_233()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

int func_234(int iParam0)
{
	if (func_89(iParam0, 0))
	{
		return 1;
	}
	if (func_235())
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

bool func_235()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

int func_236(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xF1246FB9A9397227() != iParam0 && uParam2)
		{
			unk_0xC17B06EB7D180D8E(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_237(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 13);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 13);
	}
}

int func_238(int iParam0)
{
	func_60(&(Global_69607.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_69607.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_239(26))
			{
				return 26;
			}
			if (!func_239(29))
			{
				return 29;
			}
			if (!func_239(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_69607.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_239(27))
			{
				return 27;
			}
			if (!func_239(30))
			{
				return 30;
			}
			if (!func_239(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_69607.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_239(28))
			{
				return 28;
			}
			if (!func_239(31))
			{
				return 31;
			}
			if (!func_239(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_239(int iParam0)
{
	return func_66(iParam0, 0);
}

void func_240(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_242(iParam0, &iVar1);
	if (!unk_0xB3404E397FF56B3B("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xA8B283BF4E7CDE17(iVar1))
			{
				return;
			}
			if (unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) == iVar1)
			{
				func_191(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xA8B283BF4E7CDE17(iVar1))
			{
				return;
			}
			if (func_241(iParam0))
			{
				func_191(iParam0, 0);
			}
		}
		unk_0x488649A10C5AC1D5(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_241(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_192(iParam0) };
	if (unk_0x2A3398C6222EB190(Global_31593[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

var func_242(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_243(iParam0) };
	*iParam1 = unk_0x50C0AC4AD9CD152D(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_243(int iParam0)
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_244(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_244(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_244(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_244(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_244(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_244(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_244(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049495[34 /*1943*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_244(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_244(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_244(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_244(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_244(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_244(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_244(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_244(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_244(43, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var5 = { func_244(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_244(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_244(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_244(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_244(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_244(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_244(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_244(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_244(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_244(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_244(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_244(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_244(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_244(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_244(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_244(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_244(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_244(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_244(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_244(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_244(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_244(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_244(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_244(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_244(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_244(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_244(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_244(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_244(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_244(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_244(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_244(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_244(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_244(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_244(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_244(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_244(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_244(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_244(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_244(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_244(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_244(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_244(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_244(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_244(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_244(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_244(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_244(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_244(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_244(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_244(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_244(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_244(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_244(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_244(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
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
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_245(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_242(iParam0, &iVar1);
	if (!unk_0xB3404E397FF56B3B("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0x44E9E6AB357E39B0(iVar1))
		{
			if (unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) == iVar1)
			{
				func_193(iParam0, 1);
				return;
			}
			unk_0x0D619C728B2C6DA4(iVar1, 1);
		}
		else if (!bParam1 && unk_0x44E9E6AB357E39B0(iVar1))
		{
			if (func_246(iParam0))
			{
				func_193(iParam0, 0);
			}
			unk_0x0D619C728B2C6DA4(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_246(iParam0))
			{
				func_193(iParam0, 0);
			}
		}
	}
}

int func_246(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_192(iParam0) };
	if (Var0.f_1 != -1 && unk_0x2A3398C6222EB190(Global_31587[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

int func_247()
{
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) || func_238(Local_402.f_0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_248(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 26:
		case 29:
		case 32:
			return 0;
			break;
		
		case 23:
		case 28:
		case 31:
		case 34:
			return 2;
			break;
		
		case 22:
		case 27:
		case 30:
		case 33:
			return 1;
			break;
	}
	return 145;
}

int func_250(int iParam0, var uParam1)
{
	uParam1->f_73[1 /*4*/] = { 194.674f, -1026.984f, -100f };
	uParam1->f_73[1 /*4*/].f_3 = 285f;
	*(uParam1[2 /*15*/]) = { 198.9908f, -1025.956f, -98.8981f };
	(uParam1[2 /*15*/])->f_3 = { -4.5679f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_6 = { 198.6016f, -1026.103f, -98.9313f };
	(uParam1[2 /*15*/])->f_6.f_3 = { -5.3499f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_12 = 25.2218f;
	(uParam1[2 /*15*/])->f_13 = 0.2f;
	(uParam1[2 /*15*/])->f_14 = 3.5f;
	uParam1->f_61[2] = 0f;
	switch (iParam0)
	{
		case 21:
			*(uParam1[0 /*15*/]) = { -84.4891f, 95.2463f, 72.7397f };
			(uParam1[0 /*15*/])->f_3 = { -1.0236f, 0.0007f, -126.7439f };
			(uParam1[0 /*15*/])->f_6 = { -84.1568f, 94.9229f, 72.7318f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.0236f, 0.0007f, -127.1499f };
			(uParam1[0 /*15*/])->f_12 = 25.1687f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -62.5434f, 80.2917f, 70.5644f };
			uParam1->f_73[0 /*4*/].f_3 = 345f;
			*(uParam1[1 /*15*/]) = { -61.075f, 81.2555f, 84.5867f };
			(uParam1[1 /*15*/])->f_3 = { -69.9271f, 0f, 103.892f };
			(uParam1[1 /*15*/])->f_6 = { -60.6284f, 81.2036f, 84.5867f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -73.4239f, 0f, 108.7693f };
			(uParam1[1 /*15*/])->f_12 = 29.9579f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -60.3859f, 78.4352f, 70.5249f };
			uParam1->f_86[0 /*6*/] = { -67.0129f, 81.9471f, 70.5249f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -117.9206f };
			*(uParam1[3 /*15*/]) = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_3 = { -57.747f, 0f, 34.1968f };
			(uParam1[3 /*15*/])->f_6 = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -48.0008f, 0f, 49.6137f };
			(uParam1[3 /*15*/])->f_12 = 30.0324f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -62.6272f, 79.7534f, 70.6161f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 65f };
			uParam1->f_66[1 /*3*/] = { -79.1059f, 87.1091f, 70.5157f };
			uParam1->f_73[2 /*4*/] = { -88.4f, 70.8f, 72f };
			uParam1->f_73[2 /*4*/].f_3 = 150f;
			return 1;
			break;
		
		case 22:
			*(uParam1[0 /*15*/]) = { -66.6121f, -1842.122f, 26.6941f };
			(uParam1[0 /*15*/])->f_3 = { 3.4131f, -0.0009f, 17.9566f };
			(uParam1[0 /*15*/])->f_6 = { -66.5137f, -1841.616f, 26.7211f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.1669f, -0.0009f, 18.0384f };
			(uParam1[0 /*15*/])->f_12 = 25.1856f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -72.5431f, -1820.447f, 25.9424f };
			uParam1->f_73[0 /*4*/].f_3 = 140f;
			*(uParam1[1 /*15*/]) = { -72.7256f, -1823.283f, 41.0951f };
			(uParam1[1 /*15*/])->f_3 = { -81.9335f, 0f, -58.1415f };
			(uParam1[1 /*15*/])->f_6 = { -72.9027f, -1822.998f, 41.0951f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.6657f, 0f, -29.6554f };
			(uParam1[1 /*15*/])->f_12 = 29.9864f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -76.7939f, -1816.77f, 26.6473f };
			uParam1->f_86[0 /*6*/] = { -69.2183f, -1823.258f, 25.9421f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, 49.4214f };
			*(uParam1[3 /*15*/]) = { -70.9492f, -1820.936f, 45.3628f };
			(uParam1[3 /*15*/])->f_3 = { -85.5171f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_6 = { -70.9836f, -1821.023f, 45.3628f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -89.4995f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_12 = 28.4803f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 4f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -75.3386f, -1818.249f, 26.0241f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, -132.7699f };
			uParam1->f_66[1 /*3*/] = { -63.988f, -1829.39f, 26.423f };
			uParam1->f_73[2 /*4*/] = { -49.738f, -1830.147f, 25.5591f };
			uParam1->f_73[2 /*4*/].f_3 = 317.3589f;
			return 1;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = { -237.074f, -1170.391f, 23.479f };
			(uParam1[0 /*15*/])->f_3 = { 7.619f, 0f, -69.7398f };
			(uParam1[0 /*15*/])->f_6 = { -237.2166f, -1169.672f, 23.4931f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 7.619f, 0f, -71.3391f };
			(uParam1[0 /*15*/])->f_12 = 40.0015f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -218.0289f, -1162.392f, 22.0242f };
			uParam1->f_73[0 /*4*/].f_3 = 15f;
			*(uParam1[1 /*15*/]) = { -219.5507f, -1159.951f, 36.8399f };
			(uParam1[1 /*15*/])->f_3 = { -81.7188f, 0f, 170.4291f };
			(uParam1[1 /*15*/])->f_6 = { -219.1442f, -1160.019f, 36.8399f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.5726f, 0f, -168.992f };
			(uParam1[1 /*15*/])->f_12 = 30.0319f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 4f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -211.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/] = { -221.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -90f };
			*(uParam1[3 /*15*/]) = { -218.5983f, -1159.061f, 31.4452f };
			(uParam1[3 /*15*/])->f_3 = { -62.4689f, 0f, -142.2907f };
			(uParam1[3 /*15*/])->f_6 = { -218.6533f, -1159.067f, 31.4471f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -62.4689f, 0f, -172.3491f };
			(uParam1[3 /*15*/])->f_12 = 30f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -214.5676f, -1162.658f, 21.9591f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 90f };
			uParam1->f_66[1 /*3*/] = { -227.7619f, -1162.848f, 22.0085f };
			uParam1->f_73[2 /*4*/] = { -221.6f, -1156.3f, 22.6f };
			uParam1->f_73[2 /*4*/].f_3 = 0f;
			return 1;
			break;
	}
	return 0;
}

int func_251()
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return Global_90385.f_44 == 1;
	}
	return 0;
}

void func_252()
{
	int iVar0;
	struct<5> Var1;
	int iVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	char cVar26[16];
	float fVar30;
	int iVar31;
	struct<3> Var32;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if ((((((unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || !func_25(iLocal_672))
	{
		return;
	}
	if (!Global_68165)
	{
		if (Global_104439.f_32291.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] != -15)
		{
			if (!Global_69607[Global_104439.f_32291.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]])
			{
				if (func_303(func_49(), Global_104439.f_32291.f_1982[iLocal_672 /*939*/].f_626[iLocal_855]))
				{
					iVar0 = Global_104439.f_32291.f_1982[iLocal_672 /*939*/][iLocal_855];
					func_301(iVar0, iLocal_855, iLocal_672);
					func_60(&Var1, Global_104439.f_32291.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_411(Global_104439.f_32291.f_1982[iLocal_672 /*939*/].f_313[iLocal_855], 1);
					}
					Global_104439.f_32291.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] = -15;
				}
			}
		}
		iLocal_855++;
		if (iLocal_855 >= 312)
		{
			iLocal_855 = 0;
		}
	}
	if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) != Local_402.f_7 || Local_402.f_2 == 99)
	{
		if (Local_402.f_5 != -1)
		{
			func_68(&(Local_402.f_5));
		}
		if (Local_402.f_2 > 0)
		{
			unk_0x8C361F37C04084F4(1);
		}
		Local_402.f_7 = unk_0xE9559A12052415BE(unk_0x0031992CA618A445());
		Local_402.f_5 = -1;
		Local_402.f_2 = 0;
		Local_402.f_4 = 0;
		if (bLocal_854)
		{
			if (unk_0x068C69D0643C4B95())
			{
				unk_0x8C361F37C04084F4(1);
			}
			unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
			if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110))
			{
				unk_0x55CC07D5416539C8(Local_402.f_110, 0);
				unk_0x46B35AD2F641A4A3(Local_402.f_110, 0);
			}
			if (unk_0x2A3EA4C0BCED85F2(Local_402.f_111))
			{
				unk_0x55CC07D5416539C8(Local_402.f_111, 0);
				unk_0x46B35AD2F641A4A3(Local_402.f_111, 0);
			}
			unk_0x477513BFF4F0CEC1(unk_0x0031992CA618A445(), 1, 0);
			unk_0x1F18D3C78C8C1A11(unk_0x0031992CA618A445(), 0);
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
				unk_0x6650FC093AC9B178(unk_0x3D35F9864E4640B1(), 0);
			}
			iVar22 = unk_0x7899A2987EB03783();
			if (unk_0x76B3C79DE564AFC6(iVar22) && unk_0x432757A9E7AAFA96(iVar22, 0))
			{
				unk_0x477513BFF4F0CEC1(iVar22, 1, 0);
				unk_0x1F18D3C78C8C1A11(iVar22, 0);
				if (unk_0xC9FBF92709010AC3(iVar22, 1))
				{
					unk_0x28BB69BE14577487(&iVar22);
				}
			}
			iVar23 = 5000;
			iVar24 = unk_0x31CD6E9F83C10233();
			while (!unk_0x5B7BE6094290038A() && (unk_0x31CD6E9F83C10233() - iVar24) < iVar23)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (unk_0x68BBDCBE8B7849EB(Local_402.f_112))
			{
				unk_0x29F8C56DC8DA4943(Local_402.f_112);
			}
			StringCopy(&Global_32536, "", 32);
			if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
			{
				func_245(47, 1);
				func_240(47, 1);
			}
			unk_0xA05EC9D85FA401E6();
			unk_0xEB3E8FA824A0DE93();
			unk_0x56A844FA6FE745C3(1);
			unk_0x4C4F62CD43971CED(1);
			func_232(0, 1, 1, 0);
			bLocal_854 = false;
			Global_25475 = 0;
		}
	}
	bVar25 = false;
	if ((((((((((((!bLocal_854 && !unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0)) || (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) && !Local_402.f_29.f_69)) || (!unk_0x52559DAD5F31039D(unk_0x0031992CA618A445()) && !unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))) || (!bLocal_854 && func_66(Local_402.f_0, 5))) || (!bLocal_854 && unk_0xD887E21676314450(2, 199))) || (!bLocal_854 && unk_0x957E53BB191CB24D())) || !func_299(0)) || unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0) || unk_0x131923625B9C806C(unk_0x0031992CA618A445())) || unk_0x7E3D7E3AEE54F839(unk_0x0031992CA618A445())) || Global_25372) || (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && unk_0x20BE8D7B7834CA2D(unk_0x0031992CA618A445())))
	{
		if (Local_402.f_2 > 0 && Local_402.f_2 != 90)
		{
			iLocal_1014 = 1;
			Local_402.f_2 = 99;
		}
		bVar25 = true;
	}
	fVar30 = 20f;
	iVar31 = 3;
	switch (Local_402.f_2)
	{
		case 0:
			if ((((Local_402.f_0 != -1 && func_66(Local_402.f_0, 0)) && !func_66(Local_402.f_0, 5)) && !bLocal_1015) && !bVar25)
			{
				if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && !unk_0x068C69D0643C4B95())
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_01", 16);
					func_180(&(Local_402.f_5), 3, &cVar26, 0, 0, 0, 0);
					Local_402.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_175(Local_402.f_5, 1))
			{
				if (func_298(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = unk_0x31CD6E9F83C10233();
					func_68(&(Local_402.f_5));
					iLocal_669 = 0;
					Local_402.f_2 = 90;
				}
				else
				{
					iLocal_669 = 0;
					Local_402.f_4 = unk_0x31CD6E9F83C10233();
					func_68(&(Local_402.f_5));
					Local_402.f_2 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_669++;
			if (iLocal_669 >= 3)
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_02", 16);
				func_180(&(Local_402.f_5), 3, &cVar26, 0, 0, 0, 0);
				Local_402.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_175(Local_402.f_5, 1))
			{
				if (func_298(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = unk_0x31CD6E9F83C10233();
					Local_402.f_2 = 90;
				}
				else
				{
					unk_0x18F1BFAF88AC511B(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 1);
					bLocal_854 = false;
					if ((Local_402.f_0 == 15 || Local_402.f_0 == 17) || Local_402.f_0 == 16)
					{
						Local_516.f_4 = 113;
						bLocal_854 = true;
					}
					else if (Local_402.f_0 == 18 || Local_402.f_0 == 19)
					{
						Local_516.f_4 = 115;
						bLocal_854 = true;
					}
					else if (Local_402.f_0 == 12 || Local_402.f_0 == 13)
					{
						Local_516.f_4 = 114;
						bLocal_854 = true;
					}
					else if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
					{
						Local_516.f_4 = 116;
						bLocal_854 = true;
					}
					Local_516.f_0 = unk_0xB1E69EFAB6CB45A3("MIDSIZED_MESSAGE");
					Local_516.f_1 = 0;
					Local_516.f_3 = 0;
					Local_516.f_2 = 0;
					iLocal_856 = 1;
					Global_25475 = 1;
					if (bLocal_854)
					{
						if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
						{
							func_245(47, 0);
							func_240(47, 0);
							Local_402.f_112 = unk_0x50C0AC4AD9CD152D(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (unk_0x68BBDCBE8B7849EB(Local_402.f_112))
							{
								if (!unk_0xC2902CEA00DDC12E(Local_402.f_112))
								{
									unk_0x23B2455CBC51BE80(Local_402.f_112);
								}
								StringCopy(&Global_32536, "v_garagem_sp", 32);
							}
						}
						unk_0x94EB0EFC2C10DAF6(unk_0x3D35F9864E4640B1(), 1);
						unk_0xA05EC9D85FA401E6();
						Local_402.f_4 = unk_0x31CD6E9F83C10233();
						Local_402.f_2 = 4;
					}
					else
					{
						Local_402.f_2 = 8;
					}
					func_68(&(Local_402.f_5));
				}
			}
			break;
		
		case 4:
			bVar35 = true;
			if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
			{
				Local_402.f_112 = unk_0x50C0AC4AD9CD152D(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!unk_0x68BBDCBE8B7849EB(Local_402.f_112) || unk_0x44E9E6AB357E39B0(Local_402.f_112)) || unk_0xA8B283BF4E7CDE17(Local_402.f_112))
				{
					func_245(47, 0);
					func_240(47, 0);
					bVar35 = false;
				}
			}
			if (bVar35)
			{
				if (Local_402.f_0 == 12)
				{
					fVar30 = 95f;
					iVar31 = 2;
				}
				else if (Local_402.f_0 == 13)
				{
					fVar30 = 150f;
					iVar31 = 2;
				}
				else if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
				{
					fVar30 = 150f;
					iVar31 = 2;
				}
				Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_14.f_3.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
				{
					if (unk_0x4A7134889007D5B3(200.4651f, -1020.631f, -100f, 50f, 0) || (unk_0x31CD6E9F83C10233() - Local_402.f_4) > 3500)
					{
						Local_402.f_4 = unk_0x31CD6E9F83C10233();
						Local_402.f_2 = 5;
					}
				}
				else if (unk_0xFA7F74898E78698C(Local_402.f_29.f_14, Var32, fVar30, iVar31) || (unk_0x31CD6E9F83C10233() - Local_402.f_4) > 3500)
				{
					Local_402.f_4 = unk_0x31CD6E9F83C10233();
					Local_402.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((unk_0x391103C96DB7B6E4() && unk_0x9177A5D78560369F()) && (!unk_0x68BBDCBE8B7849EB(Local_402.f_112) || unk_0xC2902CEA00DDC12E(Local_402.f_112))) || (unk_0x31CD6E9F83C10233() - Local_402.f_4) > 10000)
			{
				Local_402.f_4 = unk_0x31CD6E9F83C10233();
				Local_402.f_2 = 6;
			}
			break;
		
		case 6:
			if ((unk_0x31CD6E9F83C10233() - Local_402.f_4) > 1000)
			{
				if ((unk_0x76B3C79DE564AFC6(iLocal_1027) && unk_0xCC234795142FC2D2(iLocal_1027)) && unk_0xC9FBF92709010AC3(iLocal_1027, 1))
				{
					unk_0x28BB69BE14577487(&iLocal_1027);
				}
				iLocal_1027 = unk_0x7899A2987EB03783();
				if ((((unk_0x76B3C79DE564AFC6(iLocal_1027) && unk_0x432757A9E7AAFA96(iLocal_1027, 0)) && !unk_0x1DBFCF939B3B47D0(unk_0xE9559A12052415BE(iLocal_1027))) && !unk_0xF9CDF5CA6A1D6756(unk_0xE9559A12052415BE(iLocal_1027))) && !unk_0x9C4740BA7F0AF553(unk_0xE9559A12052415BE(iLocal_1027)))
				{
					if (!unk_0xCC234795142FC2D2(iLocal_1027))
					{
						unk_0x1581691D748490F3(iLocal_1027, 0, 0);
					}
				}
				else
				{
					iLocal_1027 = 0;
				}
				unk_0x477513BFF4F0CEC1(unk_0x0031992CA618A445(), 0, 0);
				if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					unk_0x1F18D3C78C8C1A11(unk_0x0031992CA618A445(), 1);
				}
				if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
				{
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 16);
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 32);
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 128);
					unk_0x6650FC093AC9B178(unk_0x3D35F9864E4640B1(), 1);
				}
				func_232(1, 1, 1, 0);
				unk_0x27FC4121D73AF604();
				unk_0x8C361F37C04084F4(1);
				Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_14.f_3.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_402.f_29.f_69)
				{
					unk_0x65CD3C302DFDB7D7(Local_402.f_29.f_14, Var32);
				}
				if (!unk_0x2A3EA4C0BCED85F2(Local_402.f_110))
				{
					Local_402.f_110 = unk_0xAC08B32D1D8EFE97("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						unk_0x0744B03A528D97E3("GtaMloRoom001");
					}
					func_232(1, 1, 1, 0);
					func_231(&(Local_402.f_29.f_14), &(Local_402.f_110), &(Local_402.f_111));
				}
				unk_0x087893C6FCE21842(1, 0, 3000, 1, 0, 0);
				unk_0x56A844FA6FE745C3(0);
				unk_0x4C4F62CD43971CED(0);
				unk_0xA05EC9D85FA401E6();
				Local_402.f_2 = 7;
				Local_402.f_4 = unk_0x31CD6E9F83C10233();
				func_68(&(Local_402.f_5));
			}
			break;
		
		case 7:
			if ((unk_0x31CD6E9F83C10233() - Local_402.f_4) < 7000 && !func_296(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_05", 16);
				func_178(&cVar26, -1);
				if (!unk_0x391103C96DB7B6E4())
				{
					if (Local_402.f_0 == 12 || Local_402.f_0 == 13)
					{
						fVar30 = 85f;
						iVar31 = 2;
					}
					Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_29.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_29.f_2 + 90f)), 0f };
					unk_0xFA7F74898E78698C(Local_402.f_29.f_29, Var32, fVar30, iVar31);
				}
			}
			else
			{
				if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						unk_0x0744B03A528D97E3("GtaMloRoom001");
					}
					func_232(1, 1, 1, 0);
					func_231(&(Local_402.f_29.f_29), &(Local_402.f_110), &(Local_402.f_111));
				}
				unk_0xEB3E8FA824A0DE93();
				unk_0x8C361F37C04084F4(1);
				Local_402.f_4 = unk_0x31CD6E9F83C10233();
				Local_402.f_2 = 8;
			}
			break;
		
		case 8:
			if ((unk_0x31CD6E9F83C10233() - Local_402.f_4) < 7000 && !func_296(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_06", 16);
				if (!unk_0x068C69D0643C4B95())
				{
					func_178(&cVar26, 7000);
				}
			}
			else
			{
				unk_0x8C361F37C04084F4(1);
				Local_402.f_4 = unk_0x31CD6E9F83C10233();
				Local_402.f_2 = 9;
			}
			break;
		
		case 9:
			if ((unk_0x31CD6E9F83C10233() - Local_402.f_4) < 3500 && !func_296(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_03", 16);
				if (unk_0x77FA56883245AD26(Local_516.f_0))
				{
					if (Local_516.f_1)
					{
						if (!Local_516.f_3)
						{
							unk_0x18F1BFAF88AC511B(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
							Local_516.f_3 = 1;
						}
						unk_0x4237E72FB80FD332(Local_516.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xEBD23F68B1A617FC(Local_516.f_0, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_87(&cVar26);
						unk_0xF55F467DF47A6BB8();
						Local_516.f_1 = 1;
					}
				}
			}
			else if ((unk_0x31CD6E9F83C10233() - Local_402.f_4) < 4000 && !func_296(1000))
			{
				if (unk_0x77FA56883245AD26(Local_516.f_0))
				{
					if (Local_516.f_2)
					{
						unk_0x4237E72FB80FD332(Local_516.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xEBD23F68B1A617FC(Local_516.f_0, "SHARD_ANIM_OUT");
						unk_0x32F9127910F63DFA(1);
						unk_0x90495002CD46BD88(0.33f);
						unk_0x1C703A54AB4B12F6();
						Local_516.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_854)
				{
					unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
					if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110))
					{
						unk_0x55CC07D5416539C8(Local_402.f_110, 0);
						unk_0x46B35AD2F641A4A3(Local_402.f_110, 0);
					}
					if (unk_0x2A3EA4C0BCED85F2(Local_402.f_111))
					{
						unk_0x55CC07D5416539C8(Local_402.f_111, 0);
						unk_0x46B35AD2F641A4A3(Local_402.f_111, 0);
					}
					unk_0x31F42B23A853582E(0f);
					unk_0xADE985F6BA90AED5(0f, 1065353216);
					unk_0x477513BFF4F0CEC1(unk_0x0031992CA618A445(), 1, 0);
					unk_0x1F18D3C78C8C1A11(unk_0x0031992CA618A445(), 0);
					iVar36 = unk_0x7899A2987EB03783();
					if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
					{
						unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
						unk_0x6650FC093AC9B178(unk_0x3D35F9864E4640B1(), 0);
						if ((unk_0x76B3C79DE564AFC6(iVar36) && unk_0x432757A9E7AAFA96(iVar36, 0)) && unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iVar36, 0))
						{
							unk_0x0A69FBBF51E1A08F(iVar36, Local_402.f_29.f_44, 1, 1, 0, 1);
							unk_0x5082D1A6D078DB20(iVar36, Local_402.f_29.f_47);
							unk_0x24B72A49849215AE(iVar36, 1084227584);
						}
						else
						{
							unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), Local_402.f_29.f_44, 1, 1, 0, 1);
							unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), Local_402.f_29.f_47);
						}
					}
					if (unk_0x76B3C79DE564AFC6(iLocal_1027) && unk_0x432757A9E7AAFA96(iLocal_1027, 0))
					{
						iVar37 = func_48(24);
						if (func_230(&Local_776, 24))
						{
							func_225(&Local_776, func_405());
							if (unk_0x76B3C79DE564AFC6(iVar37))
							{
								unk_0xE9F8539D5AF6B052(&iVar37);
							}
						}
						if (Local_402.f_0 == 21)
						{
							unk_0x963AAB0E6FFD7E02(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
							unk_0x0A69FBBF51E1A08F(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
							unk_0x5082D1A6D078DB20(iLocal_1027, 154.4846f);
							func_223(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_402.f_0 == 22)
						{
							unk_0x963AAB0E6FFD7E02(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
							unk_0x0A69FBBF51E1A08F(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
							unk_0x5082D1A6D078DB20(iLocal_1027, 319.6985f);
							func_223(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_402.f_0 == 23)
						{
							unk_0x963AAB0E6FFD7E02(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
							unk_0x0A69FBBF51E1A08F(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
							unk_0x5082D1A6D078DB20(iLocal_1027, 270.8741f);
							func_223(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						unk_0x24B72A49849215AE(iLocal_1027, 1084227584);
					}
					if (unk_0x76B3C79DE564AFC6(iVar36) && unk_0x432757A9E7AAFA96(iVar36, 0))
					{
						unk_0x477513BFF4F0CEC1(iVar36, 1, 0);
						unk_0x1F18D3C78C8C1A11(iVar36, 0);
						if (unk_0xC9FBF92709010AC3(iVar36, 1))
						{
							unk_0x28BB69BE14577487(&iVar36);
						}
					}
					iVar38 = 5000;
					iVar39 = unk_0x31CD6E9F83C10233();
					while (!unk_0x5B7BE6094290038A() && (unk_0x31CD6E9F83C10233() - iVar39) < iVar38)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (unk_0x68BBDCBE8B7849EB(Local_402.f_112))
					{
						unk_0x29F8C56DC8DA4943(Local_402.f_112);
					}
					StringCopy(&Global_32536, "", 32);
					if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
					{
						func_245(47, 1);
						func_240(47, 1);
						Global_104439.f_32291.f_4800 = 1;
					}
					unk_0xA05EC9D85FA401E6();
					unk_0xEB3E8FA824A0DE93();
					unk_0x56A844FA6FE745C3(1);
					unk_0x4C4F62CD43971CED(1);
					func_232(0, 1, 1, 0);
					bLocal_854 = false;
					Global_25475 = 0;
				}
				if (unk_0x77FA56883245AD26(Local_516.f_0))
				{
					unk_0x7F165E259CFAC8B8(&Local_516);
				}
				func_269(iLocal_672, Local_516.f_4, Local_402.f_29.f_67);
				func_268(Local_402.f_0, 5, 1);
				func_255(Local_402.f_0);
				if (unk_0xA761A0B6072010C8(Global_69607.f_208[Local_402.f_0]))
				{
					unk_0x0C4BDC77192798AE(&(Global_69607.f_208[Local_402.f_0]));
				}
				iLocal_940 = Local_402.f_0;
				func_254();
				Local_402.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_669++;
			if (iLocal_669 >= 3)
			{
				if ((unk_0x31CD6E9F83C10233() - Local_402.f_4) < 4000)
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_04", 16);
					func_253(&cVar26);
				}
				else
				{
					Local_402.f_2 = 99;
				}
			}
			break;
	}
}

void func_253(char[4] cParam0)
{
	unk_0x5FFD0DFFE53FB210(cParam0);
	unk_0xF3AF8AF4E207A0FD(0, 1, 1, -1);
}

int func_254()
{
	if (func_188(0))
	{
		return 0;
	}
	if (Global_92801.f_8)
	{
		if (Global_92801.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92801.f_10 > 1)
	{
		return 0;
	}
	Global_92801.f_10++;
	return 1;
}

void func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 21:
			iVar0 = 20;
			iVar1 = 155;
			break;
		
		case 22:
			iVar0 = 21;
			iVar1 = 156;
			break;
		
		case 23:
			iVar0 = 22;
			iVar1 = 157;
			break;
		
		case 12:
			iVar0 = 13;
			iVar1 = 57;
			break;
		
		case 13:
			iVar0 = 16;
			iVar1 = 62;
			break;
		
		case 14:
			iVar0 = 19;
			iVar1 = 63;
			break;
		
		case 15:
			iVar0 = 12;
			iVar1 = 56;
			break;
		
		case 16:
			iVar0 = 15;
			iVar1 = 60;
			break;
		
		case 17:
			iVar0 = 18;
			iVar1 = 61;
			break;
		
		case 18:
			iVar0 = 11;
			iVar1 = 55;
			break;
		
		case 19:
			iVar0 = 14;
			iVar1 = 58;
			break;
	}
	func_267(iVar0, 0);
	iVar2 = func_266(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_265(iVar0);
		if (func_263(iVar0, iVar1, 1))
		{
			func_256(iVar0);
			func_265(iVar0);
		}
	}
}

void func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_262(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46257[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_46257[iVar0 /*203*/].f_10[(Global_46257[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_46257[iVar0 /*203*/].f_9 - 1);
	if (!Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_261(Global_36957[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_257(1, Global_36957[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_36957[iVar1 /*12*/].f_3)
		{
			case 0:
				func_257(0, Global_36957[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_257(1, Global_36957[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_257(2, Global_36957[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46257[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_257(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x136B42AA35650CB6())
	{
		return;
	}
	iVar0 = func_405();
	bVar1 = false;
	StringCopy(&cVar2, func_260(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0xC8EBA5D7FC75C1C0("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0xC8EBA5D7FC75C1C0("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0xC8EBA5D7FC75C1C0("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0xC8EBA5D7FC75C1C0(sParam3);
				if (!unk_0x0BD3CCFB6C6CFA91(sParam4))
				{
					unk_0x7C8A7ECFBAD2C8C4(sParam4);
				}
				if (!unk_0x0BD3CCFB6C6CFA91(sParam5))
				{
					unk_0x7C8A7ECFBAD2C8C4(sParam5);
				}
				if (!unk_0x0BD3CCFB6C6CFA91(sParam6))
				{
					unk_0x7C8A7ECFBAD2C8C4(sParam6);
				}
				if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
				{
					unk_0x7C8A7ECFBAD2C8C4(sParam7);
				}
				if (!unk_0x0BD3CCFB6C6CFA91(sParam8))
				{
					unk_0x7C8A7ECFBAD2C8C4(sParam8);
				}
				if (!unk_0x0BD3CCFB6C6CFA91(sParam9))
				{
					unk_0x7C8A7ECFBAD2C8C4(sParam9);
				}
				if (!unk_0x0BD3CCFB6C6CFA91(sParam10))
				{
					unk_0x7C8A7ECFBAD2C8C4(sParam10);
				}
				if (!unk_0x0BD3CCFB6C6CFA91(sParam11))
				{
					unk_0x7C8A7ECFBAD2C8C4(sParam11);
				}
				if (!unk_0x0BD3CCFB6C6CFA91(sParam12))
				{
					unk_0x7C8A7ECFBAD2C8C4(sParam12);
				}
				if (!unk_0x0BD3CCFB6C6CFA91(sParam13))
				{
					unk_0x7C8A7ECFBAD2C8C4(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_258(unk_0x10DFDE006F19F20F(&cVar2, &cVar2, 0, 2, unk_0xC0D54565FC1032F4(func_259(iParam1)), 0));
		}
		else
		{
			func_258(unk_0x10DFDE006F19F20F("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xC0D54565FC1032F4(func_259(iParam1)), 0));
		}
		switch (Global_14443)
		{
			case 0:
				StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
				Global_36949++;
				if (Global_36949 > 16)
				{
					Global_36949 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
				Global_36951++;
				if (Global_36951 > 16)
				{
					Global_36951 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
				Global_36950++;
				if (Global_36950 > 16)
				{
					Global_36950 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x18F1BFAF88AC511B(-1, "Notification", &Global_14432, 1);
	}
}

void func_258(var uParam0)
{
	Global_36952[Global_36956] = uParam0;
	Global_16803 = 1;
	Global_16802 = uParam0;
	Global_36956++;
	if (Global_36956 == 3)
	{
		Global_36956 = 0;
	}
}

char* func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_260(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[0 /*29*/].f_7));
		
		case 1:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[1 /*29*/].f_7));
		
		case 2:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[2 /*29*/].f_7));
		
		case 7:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[12 /*29*/].f_7));
		
		case 4:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[60 /*29*/].f_7));
		
		case 6:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[62 /*29*/].f_7));
		
		case 3:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[14 /*29*/].f_7));
		
		case 16:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[97 /*29*/].f_7));
		
		case 19:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[99 /*29*/].f_7));
		
		case 15:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[15 /*29*/].f_7));
		
		case 26:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[30 /*29*/].f_7));
		
		case 27:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[17 /*29*/].f_7));
		
		case 29:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[20 /*29*/].f_7));
		
		case 30:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[43 /*29*/].f_7));
		
		case 31:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[44 /*29*/].f_7));
		
		case 32:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[19 /*29*/].f_7));
		
		case 34:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[40 /*29*/].f_7));
		
		case 36:
			return unk_0xC0D54565FC1032F4("CELL_E_381");
		
		case 38:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[122 /*29*/].f_7));
		
		case 40:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[125 /*29*/].f_7));
		
		case 41:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[113 /*29*/].f_7));
		
		case 42:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[126 /*29*/].f_7));
		
		case 43:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[127 /*29*/].f_7));
		
		case 44:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[124 /*29*/].f_7));
		
		case 45:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[114 /*29*/].f_7));
		
		case 46:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[115 /*29*/].f_7));
		
		case 47:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[116 /*29*/].f_7));
		
		case 48:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[123 /*29*/].f_7));
		
		case 49:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[117 /*29*/].f_7));
		
		case 50:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[118 /*29*/].f_7));
		
		case 51:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[119 /*29*/].f_7));
		
		case 52:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[120 /*29*/].f_7));
		
		case 53:
			return unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_261(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_262(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_46257[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46257[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46257[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_263(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_267(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_46257[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_46257[iVar0 /*203*/].f_2 = iParam0;
	Global_46257[iVar0 /*203*/].f_10[Global_46257[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46257[iVar0 /*203*/].f_10[Global_46257[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46257[iVar0 /*203*/].f_10[Global_46257[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46257[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46257[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46257[iVar0 /*203*/].f_4[iVar1] == Global_36957[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46257[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46257[iVar0 /*203*/].f_4[Global_46257[iVar0 /*203*/].f_3] = Global_36957[iParam1 /*12*/].f_3;
			Global_46257[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46257[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46257[iVar0 /*203*/].f_4[iVar1] == Global_36957[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46257[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46257[iVar0 /*203*/].f_4[Global_46257[iVar0 /*203*/].f_3] = Global_36957[iParam1 /*12*/].f_2;
			Global_46257[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46257[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_46257[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_264(Global_46257[iVar0 /*203*/].f_4[iVar1], Global_46257[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_264(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_40282[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_40282[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_261(Global_36957[iVar20 /*12*/].f_1) };
		if (Global_36957[iVar20 /*12*/].f_2 == iParam0 && !Global_36957[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_36957[iVar20 /*12*/].f_2;
		iVar0 = Global_45895[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_45895[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36949 = (Global_36949 - 1);
						if (Global_36949 < 0)
						{
							Global_36949 = 0;
						}
						break;
					
					case 1:
						Global_36950 = (Global_36950 - 1);
						if (Global_36950 < 0)
						{
							Global_36950 = 0;
						}
						break;
					
					case 2:
						Global_36951 = (Global_36951 - 1);
						if (Global_36951 < 0)
						{
							Global_36951 = 0;
						}
						break;
					}
				}
		}
		Global_45895[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45895[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45895[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45895[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45895[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45895[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45895[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_45895[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36949 = (Global_36949 - 1);
						if (Global_36949 < 0)
						{
							Global_36949 = 0;
						}
						break;
					
					case 1:
						Global_36950 = (Global_36950 - 1);
						if (Global_36950 < 0)
						{
							Global_36950 = 0;
						}
						break;
					
					case 2:
						Global_36951 = (Global_36951 - 1);
						if (Global_36951 < 0)
						{
							Global_36951 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_46257[iVar24 /*203*/].f_1 == iParam1 && Global_46257[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45895[iParam0 /*120*/].f_18[iVar0] = Global_46257[iVar23 /*203*/].f_1;
		Global_45895[iParam0 /*120*/].f_1[iVar0] = (Global_46257[iVar23 /*203*/].f_9 - 1);
		Global_45895[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45895[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45895[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45895[iParam0 /*120*/]++;
		iVar25 = Global_45895[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_46257[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_36957[iVar26 /*12*/].f_2;
		if (Global_46257[iVar23 /*203*/].f_10[(Global_46257[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46257[iVar23 /*203*/].f_10[(Global_46257[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_261(Global_36957[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_45895[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_257(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_257(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_257(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_257(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_265(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0x2A3398C6222EB190(Global_104439.f_24847, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_262(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_46257[iVar0 /*203*/] = 0;
}

int func_266(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_47679 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46257[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_46257[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_46257[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_47680[iVar1 /*53*/].f_52 == 0)
		{
			Global_47680[iVar1 /*53*/].f_52 = iVar0;
			Global_47680[iVar1 /*53*/] = iParam0;
			Global_47680[iVar1 /*53*/].f_1 = iParam1;
			Global_47680[iVar1 /*53*/].f_2 = iParam2;
			Global_104439.f_20898.f_310++;
			if (Global_104439.f_20898.f_310 == 0)
			{
				Global_104439.f_20898.f_310 = 1;
			}
			Global_47680[iVar1 /*53*/].f_10 = 0;
			Global_47680[iVar1 /*53*/].f_3 = Global_104439.f_20898.f_310;
			Global_47680[iVar1 /*53*/].f_4 = 1;
			Global_47679++;
			return Global_47680[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_267(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_262(iParam0);
	if (iVar0 > -1)
	{
		if (Global_46257[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46257[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46257[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_46257[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_46257[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_46257[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46257[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46257[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45895[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45895[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45895[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45895[iVar6 /*120*/].f_18[iVar8] == Global_46257[iVar4 /*203*/].f_1)
							{
								if (Global_45895[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36949 = (Global_36949 - 1);
											break;
										
										case 1:
											Global_36950 = (Global_36950 - 1);
											break;
										
										case 2:
											Global_36951 = (Global_36951 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_46257[iVar4 /*203*/].f_2 = iParam0;
	Global_46257[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_46257[iVar4 /*203*/] = 1;
	}
	Global_104439.f_20898.f_310++;
	if (Global_104439.f_20898.f_310 == 0)
	{
		Global_104439.f_20898.f_310 = 1;
	}
	Global_46257[iVar4 /*203*/].f_1 = Global_104439.f_20898.f_310;
	Global_46257[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_268(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_32291[iParam0]), iParam1);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_104439.f_32291[iParam0]), iParam1);
	}
}

int func_269(int iParam0, int iParam1, int iParam2)
{
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_270(Global_104439.f_27911[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_270(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_295();
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
					func_294(99, 1);
					func_293(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_293(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_293(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_278(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_277(5))
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
							func_293(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_293(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_293(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_277(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_293(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_293(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_293(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_293(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_293(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_293(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_293(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_293(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_293(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA1719FD655B44EB2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_293(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_293(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_293(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_293(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_293(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_293(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_277(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_293(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_293(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_293(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_293(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_293(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_293(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_276(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_294(95, iParam3);
					break;
				
				case 1:
					func_294(97, iParam3);
					break;
				
				case 2:
					func_294(96, iParam3);
					break;
			}
			func_294(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_273(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_273(iVar1);
	}
	iVar5 = (Global_53028[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53028[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53028[iVar2] = 2147483647;
				}
				else
				{
					Global_53028[iVar2] = (Global_53028[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_293(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_293(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_293(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53028[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53028[iVar2];
			Global_53028[iVar2] = (Global_53028[iVar2] - iParam3);
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
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104439.f_20425.f_233[iVar2 /*69*/]++;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_1++;
		if (Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_272(iParam0);
	if (Global_35813 == 15)
	{
		func_271(0);
	}
	return 1;
}

void func_271(bool bParam0)
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
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53036[iVar0 /*3*/][0] = Global_104439.f_20425[iVar0];
		Global_53036.f_31[iVar0 /*3*/][0] = Global_104439.f_20425.f_11[iVar0];
		Global_53036.f_62[iVar0 /*3*/][0] = Global_104439.f_20425.f_22[iVar0];
		Global_53036.f_93[iVar0 /*3*/][0] = Global_104439.f_20425.f_33[iVar0];
		Global_53036.f_124[iVar0 /*3*/][0] = Global_104439.f_20425.f_44[iVar0];
		Global_53036.f_155[iVar0 /*3*/][0] = Global_104439.f_20425.f_55[iVar0];
		Global_53036.f_186[iVar0 /*3*/][0] = Global_104439.f_20425.f_66[iVar0];
		Global_53036.f_217[iVar0 /*3*/][0] = Global_104439.f_20425.f_77[iVar0];
		Global_53036.f_248[iVar0 /*3*/][0] = Global_104439.f_20425.f_88[iVar0];
		if (!bParam0)
		{
			Global_53036[iVar0 /*3*/][1] = Global_104439.f_20425[iVar0];
			Global_53036.f_31[iVar0 /*3*/][1] = Global_104439.f_20425.f_11[iVar0];
			Global_53036.f_62[iVar0 /*3*/][1] = Global_104439.f_20425.f_22[iVar0];
			Global_53036.f_93[iVar0 /*3*/][1] = Global_104439.f_20425.f_33[iVar0];
			Global_53036.f_124[iVar0 /*3*/][1] = Global_104439.f_20425.f_44[iVar0];
			Global_53036.f_155[iVar0 /*3*/][1] = Global_104439.f_20425.f_55[iVar0];
			Global_53036.f_186[iVar0 /*3*/][1] = Global_104439.f_20425.f_66[iVar0];
			Global_53036.f_217[iVar0 /*3*/][1] = Global_104439.f_20425.f_77[iVar0];
			Global_53036.f_248[iVar0 /*3*/][1] = Global_104439.f_20425.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_272(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53028[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xE931A869061F7BD2(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xE931A869061F7BD2(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xE931A869061F7BD2(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_273(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0) || unk_0x2A3398C6222EB190(Global_2097152[func_275() /*11035*/].f_7550.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		unk_0xD804ACF2A7171150(&(Global_2097152[func_275() /*11035*/].f_7550.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xC8EBA5D7FC75C1C0("COUP_RED");
		unk_0x7C8A7ECFBAD2C8C4(func_274(iParam0));
		unk_0x10DFDE006F19F20F(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_274(int iParam0)
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

int func_275()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_276(int iParam0)
{
	func_294(93, iParam0);
	func_294(29, iParam0);
	func_294(30, iParam0);
}

bool func_277(int iParam0)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0);
	}
	return unk_0x2A3398C6222EB190(Global_2097152[func_275() /*11035*/].f_7550.f_10, iParam0);
}

int func_278(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x38260021B4E87C3F(27))
	{
		return 0;
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x2553A7EB99AABF55(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xE931A869061F7BD2(joaat("num_cash_spent"), iVar1, 1);
		func_292(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_279(27, 1);
	return 1;
}

int func_279(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_280(iParam0, iParam1);
}

int func_280(int iParam0, int iParam1)
{
	if (func_27(14) && !func_291(iParam0))
	{
		return 0;
	}
	if (unk_0x38260021B4E87C3F(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25468 != 0 && !Global_70785)
	{
		return 0;
	}
	if (func_290(&Global_2608378))
	{
		if (func_288(&Global_2608378, iParam0))
		{
			return 0;
		}
		if (func_281(&Global_2608378, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x16E13F8FE3B91C92(iParam0))
		{
			return 0;
		}
		if (unk_0x38260021B4E87C3F(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_281(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_291(iParam1))
	{
		return 0;
	}
	if (func_288(uParam0, iParam1))
	{
		return 0;
	}
	if (func_287(uParam0) < 0f)
	{
		func_286(uParam0, 0);
	}
	func_284(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_282(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_282(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_291(iParam1))
	{
		return 0;
	}
	if (func_288(uParam0, iParam1))
	{
		return 0;
	}
	if (func_287(uParam0) < 0f)
	{
		func_286(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_283(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_283(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_284(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_285(uParam0, iVar0);
		iVar0++;
	}
	func_286(uParam0, (Global_2608377 - 0.5f));
}

void func_285(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_286(var uParam0, float fParam1)
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

float func_287(var uParam0)
{
	return uParam0->f_72;
}

bool func_288(var uParam0, int iParam1)
{
	return func_289(uParam0, iParam1) != -1;
}

int func_289(var uParam0, int iParam1)
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

bool func_290(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_291(int iParam0)
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

int func_292(int iParam0, int iParam1)
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
	iVar0 = unk_0x354C8180327FFAF0(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1A7D8193599FBBC(iParam0, iParam1);
	}
	return 0;
}

void func_293(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2553A7EB99AABF55(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xE931A869061F7BD2(iParam0, iVar0, 1);
}

void func_294(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/])
	{
		unk_0x2553A7EB99AABF55(Global_51596[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE931A869061F7BD2(Global_51596[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_295()
{
	int iVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		unk_0x2553A7EB99AABF55(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53028[0] == iVar0)
		{
			Global_53028[0] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53028[1] == iVar0)
		{
			Global_53028[1] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53028[2] == iVar0)
		{
			Global_53028[2] = iVar0;
		}
	}
}

int func_296(int iParam0)
{
	if (unk_0xF9FC07CC13402AEF())
	{
		if ((unk_0x31CD6E9F83C10233() - Global_28) > iParam0)
		{
			Global_27 = unk_0x31CD6E9F83C10233();
		}
		Global_28 = unk_0x31CD6E9F83C10233();
		if ((unk_0x31CD6E9F83C10233() - Global_27) > iParam0)
		{
			if (func_297())
			{
				Global_27 = unk_0x31CD6E9F83C10233();
				return 1;
			}
		}
	}
	return 0;
}

int func_297()
{
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (unk_0xD887E21676314450(0, 18) || unk_0xD887E21676314450(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_298(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x2553A7EB99AABF55(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x2553A7EB99AABF55(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x2553A7EB99AABF55(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_299(int iParam0)
{
	return func_300(iParam0, Global_35813);
}

int func_300(int iParam0, int iParam1)
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

void func_301(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_405();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_127(iParam1);
	switch (iParam0)
	{
		case 10:
			iVar0 = 5;
			switch (iVar2)
			{
				case 0:
					iVar1 = 32;
					break;
				
				case 2:
					iVar1 = 33;
					break;
				
				case 1:
					iVar1 = 31;
					break;
			}
			break;
		
		case 11:
			iVar0 = 7;
			if (((iParam1 == 15 || iParam1 == 16) || iParam1 == 164) || iParam1 == 217)
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 191;
						break;
					
					case 2:
						iVar1 = 193;
						break;
					
					case 1:
						iVar1 = 192;
						break;
				}
			}
			else
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 40;
						break;
					
					case 2:
						iVar1 = 42;
						break;
					
					case 1:
						iVar1 = 41;
						break;
					}
			}
			break;
		
		case 12:
			iVar0 = 6;
			switch (iVar2)
			{
				case 0:
					iVar1 = 34;
					break;
				
				case 2:
					iVar1 = 36;
					break;
				
				case 1:
					iVar1 = 35;
					break;
			}
			break;
		
		case 13:
			iVar0 = 8;
			switch (iVar2)
			{
				case 0:
					iVar1 = 37;
					break;
				
				case 2:
					iVar1 = 39;
					break;
				
				case 1:
					iVar1 = 38;
					break;
			}
			break;
		
		case 15:
			iVar0 = 9;
			switch (iVar2)
			{
				case 0:
					iVar1 = 186;
					break;
				
				case 2:
					iVar1 = 188;
					break;
				
				case 1:
					iVar1 = 185;
					break;
			}
			break;
		
		case 16:
			iVar0 = 10;
			switch (iVar2)
			{
				case 0:
					iVar1 = 189;
					break;
				
				case 2:
					iVar1 = 190;
					break;
				
				case 1:
					iVar1 = 187;
					break;
			}
			break;
		
		default:
			return;
			break;
	}
	if (func_263(iVar0, iVar1, 1))
	{
		func_302(iVar0, sVar3);
		func_256(iVar0);
		func_265(iVar0);
	}
}

void func_302(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_262(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46257[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_46257[iVar0 /*203*/].f_10[(Global_46257[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_46257[iVar0 /*203*/].f_10[(Global_46257[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_46257[iVar0 /*203*/].f_10[(Global_46257[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_46257[iVar0 /*203*/].f_10[(Global_46257[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_303(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_308(iParam1) || !func_308(iParam0))
	{
		return 1;
	}
	iVar0 = func_54(iParam0);
	iVar1 = func_54(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_56(iParam0);
	iVar1 = func_56(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_307(iParam0);
	iVar1 = func_307(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_306(iParam0);
	iVar1 = func_306(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_305(iParam0);
	iVar1 = func_305(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_304(iParam0);
	iVar1 = func_304(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_304(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_305(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_306(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_307(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_308(int iParam0)
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
	iVar0 = func_304(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_305(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_306(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_54(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_56(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_307(iParam0);
	if (iVar5 < 1 || iVar5 > func_53(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_309()
{
	int iVar0;
	var uVar1;
	char* sVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	int iVar24;
	bool bVar25;
	struct<3> Var26;
	int iVar29;
	
	iVar0 = 0;
	if (unk_0x7832F791572D5809(joaat("startup_positioning")) == 0)
	{
		if (Global_104439.f_32291.f_5588)
		{
			if (!unk_0x76B3C79DE564AFC6(Global_70512))
			{
				func_225(&(Global_104439.f_32291.f_5510), Global_104439.f_32291.f_5590);
				Global_104439.f_32291.f_5588 = 0;
			}
			else if (!unk_0x432757A9E7AAFA96(Global_70512, 0) || func_46(Global_70512, Global_104439.f_32291.f_5590, 1))
			{
				Global_104439.f_32291.f_5588 = 0;
			}
			else
			{
				if ((unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0) == Global_70512) && func_330(unk_0x0031992CA618A445()) != Global_104439.f_32291.f_5590)
				{
					Global_104439.f_32291.f_5590 = func_330(unk_0x0031992CA618A445());
				}
				if (Global_70512 != iLocal_671)
				{
					sVar2 = unk_0x82C5E5956536E83D(Global_70512, &uVar1);
					if (!unk_0x0BD3CCFB6C6CFA91(sVar2))
					{
						if (unk_0x50B7853132D8438E(sVar2) == unk_0x50B7853132D8438E("vehicle_gen_controller"))
						{
							Global_104439.f_32291.f_5588 = 0;
							iLocal_1028 = Global_70512;
							if (Global_69607.f_139[24] == Global_70512 || (Global_70513 == Global_70512 && Global_70514 == 24))
							{
								func_329(458, 24, -1, 1);
							}
							else
							{
								func_329(458, 0, -1, 1);
							}
							Global_70512 = 0;
						}
					}
				}
				if (((Global_104439.f_32291.f_5590 != func_405() && Global_92231[Global_104439.f_32291.f_5590 /*98*/] == Global_104439.f_32291.f_5510.f_66) && unk_0xB3404E397FF56B3B(&(Global_92231[Global_104439.f_32291.f_5590 /*98*/].f_27), &(Global_104439.f_32291.f_5510.f_1))) && !unk_0x003E46CBEF6CE07A())
				{
					func_112(&(Global_104439.f_32291.f_5510), &(Global_104439.f_32291.f_5600[Global_104439.f_32291.f_5590 /*78*/]));
					Global_104439.f_32291.f_5588 = 0;
					iLocal_1028 = 0;
					func_329(458, 0, -1, 1);
					Global_70512 = 0;
				}
			}
		}
		else if ((unk_0x76B3C79DE564AFC6(Global_70512) && unk_0x432757A9E7AAFA96(Global_70512, 0)) && !func_46(Global_70512, Global_104439.f_32291.f_5590, 1))
		{
			Global_104439.f_32291.f_5588 = 1;
		}
		if (unk_0x76B3C79DE564AFC6(iLocal_1028) && unk_0x432757A9E7AAFA96(iLocal_1028, 0))
		{
			if (((!Global_104439.f_32291.f_5588 && iLocal_1028 != Global_70512) && iLocal_1028 != iLocal_1029) && !unk_0xC9FBF92709010AC3(iLocal_1028, 1))
			{
				func_31(iLocal_1028, 145);
				iLocal_1028 = 0;
				func_329(458, 0, -1, 1);
			}
		}
		else if (iLocal_1028 != 0)
		{
			iLocal_1028 = 0;
			func_329(458, 0, -1, 1);
		}
		if (unk_0x76B3C79DE564AFC6(iLocal_1029) && unk_0x432757A9E7AAFA96(iLocal_1029, 0))
		{
		}
		else if (iLocal_1029 != 0)
		{
			iLocal_1029 = 0;
		}
	}
	if (Global_70516.f_66 != 0 && Global_70513 == 0)
	{
		func_225(&Global_70516, Global_70594);
		Global_70516.f_66 = 0;
	}
	Var3 = { 433.6721f, -1006.538f, 25.96351f };
	Var6 = { 433.6578f, -1017.5f, 32.09895f };
	fVar9 = 11.25f;
	if (iLocal_667 > 0 && iLocal_667 < 99)
	{
		if (iLocal_667 != 3)
		{
			if (((((unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) || !unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Var3, Var6, fVar9, 0, 1, 0)) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(14))
			{
				iLocal_667 = 99;
			}
		}
	}
	if (func_328(iLocal_672))
	{
		if (!unk_0xA761A0B6072010C8(uLocal_857))
		{
			if (((func_27(15) || func_27(12)) && iLocal_667 != 3) && !unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
			{
				uLocal_857 = func_326(428.37f, -1013.5f, 27.93f, 0);
				unk_0x3B815A6E8530D3A5(uLocal_857, 225);
				unk_0x50B5259DFC71B8EC(uLocal_857, "IMPOUND_BLIPNAME");
				unk_0xC2001CECF808BD21(uLocal_857, true);
			}
		}
		else if ((!(func_27(15) || func_27(12)) || iLocal_667 == 3) || unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
		{
			unk_0x0C4BDC77192798AE(&uLocal_857);
		}
	}
	else if (unk_0xA761A0B6072010C8(uLocal_857))
	{
		unk_0x0C4BDC77192798AE(&uLocal_857);
	}
	switch (iLocal_667)
	{
		case 0:
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				if ((Local_402.f_2 == 0 && (func_27(15) || func_27(12))) && !unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
				{
					if (func_328(iLocal_672))
					{
						if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Var3, Var6, fVar9, 0, 1, 0))
						{
							if (func_298(iLocal_672) >= 250)
							{
								iVar10 = 0;
								iVar11 = 0;
								while (iVar11 < 2)
								{
									if (func_221(iVar11, iLocal_672))
									{
										iVar10++;
									}
									iVar11++;
								}
								if (iVar10 > 1)
								{
									func_180(&iLocal_668, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
								}
								else
								{
									func_180(&iLocal_668, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
								}
								iLocal_667 = 1;
							}
							else
							{
								func_178("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && func_176(0, -1, 0))
			{
				if (func_175(iLocal_668, 1))
				{
					func_68(&iLocal_668);
					unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
					func_325();
					iVar12 = 0;
					iVar13 = 0;
					while (iVar13 < 2)
					{
						if (func_221(iVar13, iLocal_672))
						{
							iVar12++;
						}
						iVar13++;
					}
					if (iVar12 > 1)
					{
						iLocal_657 = 0;
						iLocal_658 = 0;
						iLocal_659 = 0;
						iLocal_662 = -1;
						iLocal_667++;
					}
					else
					{
						iVar14 = 0;
						while (iVar14 < 2)
						{
							if (func_221(iVar14, iLocal_672))
							{
								if (iVar14 == 0)
								{
									Var15 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									Var15 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_315(&iLocal_671, iVar14, Var15, 179.24f, 1))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								if (unk_0x76B3C79DE564AFC6(iLocal_671))
								{
									if (iVar14 == 0)
									{
										func_314(18, 1, 0);
									}
									else
									{
										func_314(19, 1, 0);
									}
									if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
									{
										unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
									}
									func_269(iLocal_672, 118, 250);
									func_313(iVar14);
									func_31(iLocal_671, func_405());
									func_70(1, -1);
									iLocal_667 = 3;
									func_68(&iLocal_668);
									iLocal_668 = -1;
									iLocal_659 = 0;
								}
							}
							iVar14++;
						}
					}
				}
			}
			break;
		
		case 2:
			switch (func_405())
			{
				case 0:
					iVar18 = 0;
					break;
				
				case 1:
					iVar18 = 1;
					break;
				
				case 2:
					iVar18 = 2;
					break;
			}
			func_325();
			if (!iLocal_657 || iLocal_658)
			{
				func_173(0);
				func_172(1, 1, 0, 0, 0);
				func_171(1, 2, 1, 1, 1);
				func_170("IMPOUND_TITLE");
				iLocal_663 = 0;
				iVar19 = -1;
				iVar21 = 0;
				iVar20 = 0;
				while (iVar20 < 2)
				{
					if (func_221(iVar20, iLocal_672))
					{
						func_130(iVar21, unk_0x0C9AAE7EC92AB471(Global_104439.f_32291.f_5038[iVar18 /*157*/][iVar20 /*78*/].f_66), 0, 1, 0, 0);
						if (iVar19 == -1)
						{
							iVar19 = iVar21;
							iLocal_662 = iVar21;
						}
						unk_0xCD7E92DE2BFA0B0D(&iLocal_663, iVar21);
						iLocal_664[iVar21] = iVar20;
						func_130(iVar21, "IMPOUND_COST", 1, 1, 0, 0);
						func_312(250, 0);
						iVar21++;
					}
					iVar20++;
				}
				iVar21 = 0;
				func_123(iLocal_662, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar0 = 0;
				if (unk_0x20551D6D924ED04B())
				{
					if (unk_0x8A984DAE7D3362C5(2))
					{
						unk_0xC9621A9AD282CC14(0, 1, 1);
						unk_0xC9621A9AD282CC14(0, 2, 1);
						unk_0x14C5CBCF9E6EB7B5(0, 237, 1);
						unk_0x14C5CBCF9E6EB7B5(0, 238, 1);
						unk_0x14C5CBCF9E6EB7B5(0, 241, 1);
						unk_0x14C5CBCF9E6EB7B5(0, 242, 1);
						func_120(0, 0, 0, 1);
						func_119(0, -1, 1);
						if (func_118())
						{
							if (Global_2606874 != iLocal_662)
							{
								unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_662 = Global_2606874;
								func_123(iLocal_662, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (unk_0xD887E21676314450(2, 188) || unk_0xD887E21676314450(2, 241))
				{
					if (!iLocal_659)
					{
						iLocal_660 = 1;
						unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar22 = (iLocal_662 - 1);
						while (iVar22 >= 0)
						{
							if (unk_0x2A3398C6222EB190(iLocal_663, iVar22))
							{
								iLocal_662 = iVar22;
								bVar23 = true;
								iVar22 = 0;
							}
							iVar22 = (iVar22 + -1);
						}
						if (!bVar23)
						{
							iVar22 = 31;
							while (iVar22 >= iLocal_662 + 1)
							{
								if (unk_0x2A3398C6222EB190(iLocal_663, iVar22))
								{
									iLocal_662 = iVar22;
									bVar23 = true;
									iVar22 = iLocal_662;
								}
								iVar22 = (iVar22 + -1);
							}
						}
						if (bVar23)
						{
							func_123(iLocal_662, 1, 1);
						}
					}
				}
				else if (unk_0xD887E21676314450(2, 187) || unk_0xD887E21676314450(2, 242))
				{
					if (!iLocal_659)
					{
						iLocal_660 = 1;
						unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar24 = iLocal_662 + 1;
						while (iVar24 <= 31)
						{
							if (unk_0x2A3398C6222EB190(iLocal_663, iVar24))
							{
								iLocal_662 = iVar24;
								bVar25 = true;
								iVar24 = 31;
							}
							iVar24++;
						}
						if (!bVar25)
						{
							iVar24 = 0;
							while (iVar24 <= (iLocal_662 - 1))
							{
								if (unk_0x2A3398C6222EB190(iLocal_663, iVar24))
								{
									iLocal_662 = iVar24;
									bVar25 = true;
									iVar24 = iLocal_662;
								}
								iVar24++;
							}
						}
						if (bVar25)
						{
							func_123(iLocal_662, 1, 1);
						}
					}
				}
				else if (unk_0xBF946CEEECD8C935(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					unk_0x18F1BFAF88AC511B(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!iLocal_659)
					{
						func_117("IMPOUND_CNF", 0, 0);
						func_116(-1);
						func_115(201, "ITEM_YES", -1);
						func_115(202, "ITEM_NO", -1);
						iLocal_659 = 1;
					}
					else
					{
						if (iLocal_662 == 0)
						{
							Var26 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							Var26 = { 436.39f, -997.25f, 24.76f };
						}
						if (func_221(iLocal_664[iLocal_662], iLocal_672))
						{
							while (!func_315(&iLocal_671, iLocal_664[iLocal_662], Var26, 179.24f, 1))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							if (unk_0x76B3C79DE564AFC6(iLocal_671))
							{
								if (iLocal_662 == 0)
								{
									func_314(18, 1, 0);
								}
								else
								{
									func_314(19, 1, 0);
								}
								if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
								{
									unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
								}
								func_269(iLocal_672, 118, 250);
								func_313(iLocal_664[iLocal_662]);
								func_31(iLocal_671, func_405());
								func_70(1, -1);
								iLocal_667++;
								func_68(&iLocal_668);
								iLocal_668 = -1;
								iLocal_659 = 0;
							}
						}
						iLocal_658 = 1;
					}
				}
				else if (unk_0xBF946CEEECD8C935(2, 202) || unk_0xBF946CEEECD8C935(2, 238))
				{
					unk_0x18F1BFAF88AC511B(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (iLocal_659)
					{
						iLocal_660 = 1;
						iLocal_659 = 0;
					}
					else
					{
						iLocal_667 = 99;
					}
				}
			}
			unk_0x7CDDB154852DA508();
			if (iLocal_660)
			{
				func_117("", 0, 0);
				func_116(-1);
				func_115(201, "ITEM_SELECT", -1);
				func_115(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			if (func_176(0, -1, 0))
			{
				func_73(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			break;
		
		case 3:
			if (unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 431.4f, -997.33f, 24.76f, 1) > 20f && !func_311())
			{
				func_31(iLocal_671, func_405());
				iLocal_667 = 99;
			}
			else if (unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 431.4f, -997.33f, 24.76f, 1) > 100f)
			{
				if (unk_0x76B3C79DE564AFC6(iLocal_671))
				{
					if (!unk_0x7A6C051038031EFA(iLocal_671, 0))
					{
						if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_671, 0) && unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(iLocal_671, 1), unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 1) > 100f)
						{
							if (!unk_0x4096DB4B0B8A982B(iLocal_671))
							{
								func_310(iLocal_671, 1, 145);
								unk_0xE9F8539D5AF6B052(&iLocal_671);
								unk_0xE882E0C18562237F(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0);
								iLocal_667 = 99;
							}
						}
						else if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_671, 0))
						{
							unk_0xE882E0C18562237F(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0);
							func_31(iLocal_671, func_405());
							iLocal_667 = 99;
						}
					}
					else
					{
						unk_0xE882E0C18562237F(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0);
						iLocal_667 = 99;
					}
				}
				else
				{
					unk_0xE882E0C18562237F(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0);
					iLocal_667 = 99;
				}
			}
			break;
		
		case 99:
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
			}
			func_68(&iLocal_668);
			iVar29 = 0;
			while (iVar29 < 2)
			{
				iLocal_664[iVar29] = -1;
				iVar29++;
			}
			func_314(18, 0, 0);
			func_314(19, 0, 0);
			if (unk_0x76B3C79DE564AFC6(iLocal_671))
			{
				unk_0x28BB69BE14577487(&iLocal_671);
			}
			iLocal_667 = 0;
			break;
	}
	if (iLocal_667 == 0)
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, 1, 0))
		{
			if (!iLocal_670)
			{
				func_314(18, 1, 0);
				iLocal_670 = 1;
			}
		}
		else if (iLocal_670 && !unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, 1, 0))
		{
			func_314(18, 0, 0);
			iLocal_670 = 0;
		}
	}
}

int func_310(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x82C5E5956536E83D(iParam0, &uVar0);
		if (!unk_0x0BD3CCFB6C6CFA91(sVar1))
		{
			if (unk_0x50B7853132D8438E(sVar1) == unk_0x50B7853132D8438E("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_31(iParam0, iParam2);
	return 1;
}

int func_311()
{
	if (unk_0x08CB54BDC5F79AED(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x08CB54BDC5F79AED(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x08CB54BDC5F79AED(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x08CB54BDC5F79AED(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_312(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17290.f_5092 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 >= 4)
	{
		return;
	}
	if (Global_17290.f_5611 != 1)
	{
		return;
	}
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		return;
	}
	Global_17290.f_3918[Global_17290.f_5092] = iParam0;
	Global_17290.f_5092++;
	Global_17290.f_2124[Global_17290.f_5609 /*5*/][Global_17290.f_5610] = 2;
	Global_17290.f_5610++;
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		fVar0 = func_126();
		if (Global_17290.f_4945[Global_17290.f_5089] && Global_17290.f_5610 == Global_17290.f_5608)
		{
			func_105(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17290.f_4938[(Global_17290.f_5089 - 1)])
		{
			Global_17290.f_4938[(Global_17290.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17290.f_5610 >= Global_17290.f_5608)
		{
			fVar3 = func_125();
			if (fVar3 > Global_17290.f_5612[Global_17290.f_5088])
			{
				Global_17290.f_5612[Global_17290.f_5088] = fVar3;
			}
		}
	}
}

void func_313(int iParam0)
{
	int iVar0;
	
	switch (func_405())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_222(&(Global_104439.f_32291.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_104439.f_32291.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_314(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_34936[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (unk_0x2A3398C6222EB190(Global_34936[iParam0 /*31*/].f_1, 1))
			{
				Global_34936[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_34936[iParam0 /*31*/].f_22 = 1f;
			}
			unk_0x43F60FB4C819ED4A(Global_34936[iParam0 /*31*/], Global_34936[iParam0 /*31*/].f_22, 0, 0);
			unk_0x84436CFB65E8F6EA(Global_34936[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_34936[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_34936[iParam0 /*31*/].f_22 = 0f;
			unk_0x43F60FB4C819ED4A(Global_34936[iParam0 /*31*/], Global_34936[iParam0 /*31*/].f_22, 0, 0);
			unk_0x84436CFB65E8F6EA(Global_34936[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

int func_315(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_221(iParam1, func_405()) || unk_0x76B3C79DE564AFC6(*iParam0))
	{
		return 0;
	}
	switch (func_405())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	unk_0xBE91026C1FC72180(Global_104439.f_32291.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (unk_0x772F801619C83779(Global_104439.f_32291.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = unk_0x5129A9193468FF77(Global_104439.f_32291.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, Param2, fParam5, 0, 0, 0);
		func_316(*iParam0, &(Global_104439.f_32291.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		unk_0x24B72A49849215AE(*iParam0, 1084227584);
		unk_0xDEE5A73213F56CF3(*iParam0, 0);
		unk_0x014C5648BA70BF8B(*iParam0, 1);
		if (bParam6)
		{
			unk_0x9793B48C4C8275F8(Global_104439.f_32291.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

void func_316(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		if (unk_0x50B7853132D8438E(&(uParam1->f_1)) != 0)
		{
			unk_0x3F8A1297DC6573A7(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0xE10B4E7E4009175A())
		{
			unk_0xD84C2B9A469EBB35(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0x2A3398C6222EB190(uParam1->f_77, func_33(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_33(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x2A3398C6222EB190(uParam1->f_77, func_33(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_33(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xDDCE14D69DD34587(iParam0, 0);
			if (unk_0xBE7294CB9B3BEC34(iParam0, 5) != -1)
			{
				unk_0xDDCE14D69DD34587(iParam0, 1);
			}
		}
		if (unk_0x2A3398C6222EB190(uParam1->f_77, 13))
		{
			unk_0xB42601D692EB8047(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xC459B9A3E3C57829(iParam0);
		}
		if (unk_0x2A3398C6222EB190(uParam1->f_77, 12))
		{
			unk_0xFE4330842941D50F(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x4E06F09BF15B5520(iParam0);
		}
		unk_0xBF9154ADAF4F11E1(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xD6B0D4015CC61FF4(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x2A3398C6222EB190(uParam1->f_77, 15) || func_324(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_323())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xDBEB3DBC65F0B19E(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x79C5F51FA95DC57C(iParam0, 0);
		}
		else
		{
			unk_0x79C5F51FA95DC57C(iParam0, 0);
			unk_0x79C5F51FA95DC57C(iParam0, uParam1->f_65);
		}
		unk_0xC587296050B2CA93(iParam0, !unk_0x2A3398C6222EB190(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xFABEFEE17018AE2A(iParam0, uParam1->f_70);
		}
		unk_0x368756789FF0788C(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xA199088C3081D928(iParam0, 2, unk_0x2A3398C6222EB190(uParam1->f_77, 28));
		unk_0xA199088C3081D928(iParam0, 3, unk_0x2A3398C6222EB190(uParam1->f_77, 29));
		unk_0xA199088C3081D928(iParam0, 0, unk_0x2A3398C6222EB190(uParam1->f_77, 30));
		unk_0xA199088C3081D928(iParam0, 1, unk_0x2A3398C6222EB190(uParam1->f_77, 31));
		unk_0x5028E664ECBD1407(iParam0, unk_0x2A3398C6222EB190(uParam1->f_77, 10));
		if (unk_0xD546CB3F87365B85(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xE4707C143B24BAB3(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x1B9B48622A4D3FC0(unk_0xE9559A12052415BE(iParam0)))
			{
				if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_322(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_322(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x949DE8C96217A79B(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x2808AF25A6A6B7CE(iParam0, 1);
			}
			else
			{
				unk_0x1C22AE46A9DC4530(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_317(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x1DBFCF939B3B47D0(uParam1->f_66) && !unk_0x9C4740BA7F0AF553(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x2A3398C6222EB190(uParam1->f_77, func_33(iVar2 + 1)))
				{
					if (!unk_0x3BE354A1A1BD6623(iParam0, iVar2 + 1))
					{
						unk_0x9B48A5E9A884175D(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x3BE354A1A1BD6623(iParam0, iVar2 + 1))
				{
					unk_0x9B48A5E9A884175D(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0xE9559A12052415BE(iParam0) == joaat("sheava") || unk_0xE9559A12052415BE(iParam0) == joaat("omnis")) || unk_0xE9559A12052415BE(iParam0) == joaat("le7b"))
		{
			if (unk_0xBE7294CB9B3BEC34(iParam0, 0) == -1)
			{
				unk_0x9B48A5E9A884175D(iParam0, 1, false);
			}
		}
		if (unk_0xF9CDF5CA6A1D6756(uParam1->f_66) && unk_0xE43701C36CAFF1A4(iParam0))
		{
			if (!unk_0x2A3398C6222EB190(uParam1->f_77, 23))
			{
				if (unk_0x2A3398C6222EB190(uParam1->f_77, 22))
				{
					unk_0xC82776FBB5D72B5A(iParam0, 2);
				}
				else
				{
					unk_0xC82776FBB5D72B5A(iParam0, 3);
				}
			}
			else
			{
				unk_0xC82776FBB5D72B5A(iParam0, 4);
			}
		}
		if (unk_0x2A3398C6222EB190(uParam1->f_77, 27))
		{
			unk_0xEE33BB634B0CC618(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xEE33BB634B0CC618(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_317(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x432757A9E7AAFA96(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x5583DCB5A49F0E53(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x9B0BD13ABD4E15D1(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xF4E4907109CEF0EC(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xBE7294CB9B3BEC34(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xFB84A01F8B3E62E6(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x5A814851114E34FB(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x5A814851114E34FB(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x5A814851114E34FB(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_321(unk_0xE9559A12052415BE(*iParam0), 1) && unk_0xBE7294CB9B3BEC34(*iParam0, 24) != func_320(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5A814851114E34FB(*iParam0, 24, func_320(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_319(iParam0);
	if (func_318(*iParam0))
	{
		unk_0x9DFCC19370F919F3(*iParam0, 1);
		unk_0x014C5648BA70BF8B(*iParam0, 1);
	}
	return 1;
}

int func_318(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x76B3C79DE564AFC6(uParam0) && unk_0x432757A9E7AAFA96(iParam0, 0)) && unk_0x5583DCB5A49F0E53(iParam0) > 0)
	{
		unk_0x9B0BD13ABD4E15D1(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xBE7294CB9B3BEC34(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x961891FDFDEF0C10(iParam0, iVar1, unk_0xBE7294CB9B3BEC34(iParam0, iVar1)), 16);
				iVar2 = unk_0x50B7853132D8438E(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x50B7853132D8438E("MNU_CAGE") || iVar2 == unk_0x50B7853132D8438E("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_319(var uParam0)
{
	switch (unk_0xE9559A12052415BE(*uParam0))
	{
		case joaat("starling"):
			if (unk_0xBE7294CB9B3BEC34(*uParam0, 4) == 0)
			{
				unk_0x5A814851114E34FB(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xFB84A01F8B3E62E6(*uParam0, 13);
			}
			break;
	}
}

int func_320(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		switch (unk_0xE9559A12052415BE(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
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
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x43CF7C22C63E44EA(iParam0, 38);
		iVar1 = unk_0x43CF7C22C63E44EA(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_321(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_13339)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13340)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13338)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13341)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13343)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13342)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_17784)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_17786)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_17790)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_17787)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_17794)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_17792)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_17797)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_19649)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_19650)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_322(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5583DCB5A49F0E53(iParam0) > 0)
	{
		unk_0x9B0BD13ABD4E15D1(iParam0, 0);
		iVar0 = unk_0xBE7294CB9B3BEC34(iParam0, 24);
		iVar1 = unk_0xE69CED5522DA627F(iParam0, 24);
		unk_0x61038A1B29CB9EEB(iParam0, iParam1);
		if (unk_0xE9559A12052415BE(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xFB84A01F8B3E62E6(iParam0, 24);
		}
		else
		{
			unk_0x5A814851114E34FB(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_323()
{
	return unk_0x43456EBBDC27D696(joaat("mpindependence"));
}

int func_324(int iParam0)
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (unk_0x496D18970B708258("MPBitset", 3))
			{
				if (unk_0x8B0523D9EF9595C2(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "MPBitset");
				}
				return unk_0x2A3398C6222EB190(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_325()
{
	unk_0xC0E1B08F53665F80(0);
	unk_0x14C5CBCF9E6EB7B5(0, 188, 1);
	unk_0x14C5CBCF9E6EB7B5(0, 187, 1);
	unk_0x14C5CBCF9E6EB7B5(0, 201, 1);
	unk_0x14C5CBCF9E6EB7B5(0, 202, 1);
	unk_0x14C5CBCF9E6EB7B5(0, 1, 1);
	unk_0x14C5CBCF9E6EB7B5(0, 2, 1);
	unk_0x14C5CBCF9E6EB7B5(0, 239, 1);
	unk_0x14C5CBCF9E6EB7B5(0, 240, 1);
}

var func_326(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x97AC4FC1EEAC7A8B(Param0);
	unk_0x067D86058370B7EB(uVar0, func_327(unk_0x27CA09C6DFAB1E79(), 1f, 1f));
	unk_0xE4E08EF8CF4469E9(uVar0, iParam3);
	return uVar0;
}

float func_327(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_328(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_221(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_329(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_91();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x6E96BEFC52A9E22E(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_330(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_331(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_331(int iParam0)
{
	if (func_25(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_332(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	
	if (!unk_0x2A3398C6222EB190(Global_104439.f_9877.f_25, 7))
	{
		if (!unk_0x2A3398C6222EB190(*uParam0, 6))
		{
			if (func_27(13) && func_14(func_16()))
			{
				unk_0xCD7E92DE2BFA0B0D(uParam0, 6);
				iVar0 = func_9();
				uParam0->f_6 = { func_363(iVar0) };
				if (Global_25493 == iVar0 || Global_25493 == 0)
				{
					func_3(1);
					Var1 = { func_362("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					unk_0xFD69BDF108B32E5B(&Var1);
					iVar0 = (Global_25493 + 1 % 8);
					func_360(uParam0, iVar0);
					uParam0->f_2 = (unk_0x31CD6E9F83C10233() + unk_0x3AF262D7332EEDF5(8000, 12000));
					unk_0xCD7E92DE2BFA0B0D(uParam0, 12);
					if (iVar0 == 7)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_9877.f_25), 7);
						func_359(255, 0);
					}
				}
				else
				{
					func_360(uParam0, 0);
					unk_0xD804ACF2A7171150(&(Global_104439.f_9877.f_25), 12);
				}
			}
		}
		else
		{
			func_358();
			if (!unk_0x2A3398C6222EB190(*uParam0, 31))
			{
				if (!unk_0x2A3398C6222EB190(*uParam0, 25))
				{
					func_357(uParam0);
				}
				else if (func_356())
				{
					func_340(uParam0);
					uParam0->f_3 = unk_0x31CD6E9F83C10233() + 2000;
				}
				if (!func_339(0))
				{
					func_359(255, 0);
				}
			}
			else if (func_339(0))
			{
				if (unk_0x31CD6E9F83C10233() > uParam0->f_3)
				{
					func_359(0, 800);
				}
			}
			if (!func_27(13) || !func_14(func_16()))
			{
				func_333(uParam0);
			}
		}
	}
}

void func_333(var uParam0)
{
	struct<8> Var0;
	
	if (unk_0x2A3398C6222EB190(*uParam0, 31))
	{
		func_338(uParam0);
	}
	if (unk_0x2A3398C6222EB190(*uParam0, 25))
	{
		func_334(uParam0);
	}
	Var0 = { func_362("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (unk_0x3A7B47D96E536F61(&Var0))
	{
		unk_0xB3E27A9E412BBDF8(&Var0);
	}
	unk_0xD804ACF2A7171150(uParam0, 6);
	unk_0xD804ACF2A7171150(uParam0, 30);
	unk_0xD804ACF2A7171150(uParam0, 8);
}

void func_334(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_337(iVar0);
	iVar2 = func_336(iVar1);
	iVar3 = func_335(iVar1);
	if (iVar2 != 0)
	{
		unk_0x9793B48C4C8275F8(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x9793B48C4C8275F8(iVar3);
	}
	unk_0xD804ACF2A7171150(uParam0, 25);
}

int func_335(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return joaat("u_m_y_cyclist_01");
		
		case 49:
			return joaat("dune");
		
		default:
	}
	return 0;
}

int func_336(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return joaat("a_c_rabbit_01");
		
		case 109:
			return joaat("a_c_boar");
		
		case 43:
			return joaat("a_c_deer");
		
		case 35:
			return joaat("emperor2");
		
		case 17:
			return joaat("scorcher");
		
		case 28:
			return joaat("a_c_mtlion");
		
		case 49:
			return joaat("cs_hunter");
		
		case 25:
			return joaat("a_m_y_hiker_01");
		
		case 14:
			return joaat("a_f_y_hippie_01");
		
		case 86:
			return joaat("a_m_m_hillbilly_01");
		
		default:
	}
	return 0;
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 12;
		
		case 2:
			return 43;
		
		case 3:
			return 35;
		
		case 4:
			return 109;
		
		case 5:
			return 28;
		
		case 6:
			return 17;
		
		default:
	}
	return -1;
}

void func_338(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0->f_4))
	{
		unk_0xEB9DD91752055E6B(unk_0xF177E0DA126D71C8(uParam0->f_4, 0), 10f);
		unk_0xE9F8539D5AF6B052(&(uParam0->f_4));
	}
	if (unk_0x76B3C79DE564AFC6(uParam0->f_5))
	{
		unk_0xEB9DD91752055E6B(unk_0xF177E0DA126D71C8(uParam0->f_5, 0), 10f);
		unk_0xA50DE967C5813F23(&(uParam0->f_5));
	}
	unk_0xD804ACF2A7171150(uParam0, 31);
}

bool func_339(bool bParam0)
{
	if (bParam0)
	{
		return Global_101187.f_2 > 0.5f;
	}
	return Global_101187.f_2 >= 255f;
}

void func_340(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_337(iVar0);
	func_341(iVar1, &(uParam0->f_5), &(uParam0->f_4), func_355(iVar0), func_354(iVar0), 1);
	unk_0xCD7E92DE2BFA0B0D(uParam0, 31);
}

void func_341(int iParam0, var uParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 12:
			func_353(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 109:
			func_352(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 43:
			func_351(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 35:
			func_350(uParam2, Param3, uParam6, bParam7);
			break;
		
		case 28:
			func_349(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 17:
			func_348(uParam1, uParam2, Param3, uParam6, bParam7);
			break;
		
		case 49:
			func_346(uParam1, uParam2, Param3, uParam6);
			break;
		
		case 25:
			func_345(uParam1, Param3, uParam6);
			break;
		
		case 14:
			func_344(uParam1, Param3, uParam6);
			break;
		
		case 86:
			func_342(uParam1, Param3, uParam6);
			break;
	}
}

void func_342(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_336(86);
	if (unk_0x772F801619C83779(iVar0))
	{
		*uParam0 = unk_0x5618B819E5B9C053(5, iVar0, Param1, uParam4, 1, 1);
		unk_0x7B12279DA5C1F03D(*uParam0, 1);
		unk_0xD6A092D1F1B9A9F1(*uParam0, 227, 1);
		unk_0x9793B48C4C8275F8(iVar0);
		unk_0x990879ED64ED4138(*uParam0, 0);
		unk_0xA516DB03BDB6B4EB(*uParam0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_343(*uParam0);
		return;
	}
}

void func_343(var uParam0)
{
	unk_0x50660034C16697DC(uParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	unk_0x50660034C16697DC(uParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	unk_0x50660034C16697DC(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	unk_0x50660034C16697DC(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	unk_0x50660034C16697DC(uParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	unk_0x50660034C16697DC(uParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	unk_0x50660034C16697DC(uParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	unk_0x50660034C16697DC(uParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	unk_0x50660034C16697DC(uParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	unk_0x50660034C16697DC(uParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	unk_0x50660034C16697DC(uParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	unk_0x50660034C16697DC(uParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x50660034C16697DC(uParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_344(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_336(14);
	if (unk_0x772F801619C83779(iVar0))
	{
		*uParam0 = unk_0x5618B819E5B9C053(5, iVar0, Param1, uParam4, 1, 1);
		unk_0x7B12279DA5C1F03D(*uParam0, 1);
		unk_0xD6A092D1F1B9A9F1(*uParam0, 227, 1);
		unk_0x9793B48C4C8275F8(iVar0);
		unk_0x990879ED64ED4138(*uParam0, 0);
		unk_0xA516DB03BDB6B4EB(*uParam0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_343(*uParam0);
		return;
	}
}

void func_345(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_336(25);
	if (unk_0x772F801619C83779(iVar0))
	{
		*uParam0 = unk_0x5618B819E5B9C053(4, iVar0, Param1, uParam4, 1, 1);
		unk_0x7B12279DA5C1F03D(*uParam0, 1);
		unk_0xD6A092D1F1B9A9F1(*uParam0, 227, 1);
		unk_0x9793B48C4C8275F8(iVar0);
		unk_0x990879ED64ED4138(*uParam0, 0);
		unk_0xA516DB03BDB6B4EB(*uParam0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 + 0.02f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 - 0.23f), (Param1.f_1 + 0.04f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.11f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, (Param1.f_0 + 0.09f), (Param1.f_1 - 0.06f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_343(*uParam0);
		return;
	}
}

void func_346(var uParam0, var uParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_336(49);
	iVar1 = func_335(49);
	if (unk_0x772F801619C83779(iVar0) && unk_0x772F801619C83779(iVar1))
	{
		*uParam0 = unk_0x5618B819E5B9C053(4, iVar0, Param2, uParam5, 1, 1);
		unk_0x7B12279DA5C1F03D(*uParam0, 1);
		unk_0xD6A092D1F1B9A9F1(*uParam0, 227, 1);
		unk_0x9793B48C4C8275F8(iVar0);
		unk_0x990879ED64ED4138(*uParam0, 0);
		unk_0xA516DB03BDB6B4EB(*uParam0);
		unk_0x315D9A4E71D18A2E(1110, ((Param2.f_0 + 0.12f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, ((Param2.f_0 - 0.03f) - 0.3f), ((Param2.f_1 + 0.04f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, ((Param2.f_0 - 0.2f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, ((Param2.f_0 - 0.05f) - 0.3f), ((Param2.f_1 - 0.15f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x315D9A4E71D18A2E(1110, ((Param2.f_0 + 0.01f) - 0.3f), ((Param2.f_1 - 0.06f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_343(*uParam0);
		Var2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = unk_0x5129A9193468FF77(iVar1, Param2 + Var2, uParam5, 1, 1, 0);
		unk_0x9793B48C4C8275F8(iVar1);
		unk_0xCB78392CBBC0CB2F(*uParam1, 2f);
		unk_0x24B72A49849215AE(*uParam1, 1084227584);
		unk_0xEB9008A3848B31D2(*uParam1, 2f);
		unk_0xB5A45CB168A104E3(*uParam1, 1f);
		unk_0xDDEB630BCFC4398A(*uParam1, 0, func_347());
		unk_0xDDEB630BCFC4398A(*uParam1, 1, func_347());
		unk_0xDDEB630BCFC4398A(*uParam1, 2, func_347());
		unk_0xDDEB630BCFC4398A(*uParam1, 3, func_347());
		unk_0xDDEB630BCFC4398A(*uParam1, 4, func_347());
		unk_0xDDEB630BCFC4398A(*uParam1, 5, func_347());
		unk_0x114815B023ED3916(*uParam1, 15f);
		unk_0x64D8C8C6AAF5E84F(*uParam1, 3);
		unk_0x409E2EAB607A494A(*uParam1, 2);
		unk_0x2AF3B47FB350AB51(*uParam1, 1);
		unk_0xA516DB03BDB6B4EB(*uParam1);
		return;
	}
}

int func_347()
{
	if (unk_0x2A3398C6222EB190(unk_0x3AF262D7332EEDF5(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_348(var uParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_336(17);
	iVar1 = func_335(17);
	if (unk_0x772F801619C83779(iVar0) && unk_0x772F801619C83779(iVar1))
	{
		*uParam0 = unk_0x5618B819E5B9C053(4, iVar1, Param2, uParam5, 1, 1);
		unk_0x7B12279DA5C1F03D(*uParam0, 1);
		unk_0xD6A092D1F1B9A9F1(*uParam0, 227, 1);
		unk_0x9793B48C4C8275F8(iVar1);
		unk_0x990879ED64ED4138(*uParam0, 0);
		unk_0xA516DB03BDB6B4EB(*uParam0);
		Var2 = { 0.02f, -0.01f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.23f, 0.04f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.01f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.11f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.09f, -0.06f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam6)
		{
			Var2 = { 0.5783f, 0.1357f, -0.0683f };
			unk_0x315D9A4E71D18A2E(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.0477f, 0.1103f, -0.1388f };
			unk_0x315D9A4E71D18A2E(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.5048f, 0.4595f, -0.1953f };
			unk_0x315D9A4E71D18A2E(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
		}
		func_343(*uParam0);
		*uParam1 = unk_0x5129A9193468FF77(iVar0, (Param2.f_0 - 0.4f), (Param2.f_1 - 0.5f), Param2.f_2, uParam5, 1, 1, 0);
		unk_0x9793B48C4C8275F8(iVar0);
		unk_0xB7E3C36A3BE003B5(*uParam1, 0f, 85f, 0f, 2, 1);
		unk_0xEB9008A3848B31D2(*uParam1, 20.5f);
		unk_0x114815B023ED3916(*uParam1, 15f);
		unk_0xA516DB03BDB6B4EB(*uParam1);
		return;
	}
}

void func_349(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_336(28);
	if (unk_0x772F801619C83779(iVar0))
	{
		*uParam0 = unk_0x5618B819E5B9C053(28, iVar0, Param1, uParam4, 1, 1);
		unk_0x7B12279DA5C1F03D(*uParam0, 1);
		unk_0xD6A092D1F1B9A9F1(*uParam0, 227, 1);
		unk_0x9793B48C4C8275F8(iVar0);
		unk_0x990879ED64ED4138(*uParam0, 0);
		unk_0xA516DB03BDB6B4EB(*uParam0);
		Var1 = { 0.02f, -0.01f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.01f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.5206f, 0f, 0.003f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.1258f, 0.0362f, -0.0837f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6107f, 0.4678f, -0.0815f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_350(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_336(35);
	if (unk_0x772F801619C83779(iVar0))
	{
		*uParam0 = unk_0x5129A9193468FF77(iVar0, Param1, uParam4, 1, 1, 0);
		unk_0x9793B48C4C8275F8(iVar0);
		unk_0xB7E3C36A3BE003B5(*uParam0, 0f, 170f, 0f, 2, 1);
		unk_0xCB78392CBBC0CB2F(*uParam0, 1f);
		unk_0xEB9008A3848B31D2(*uParam0, 1f);
		unk_0x114815B023ED3916(*uParam0, 15f);
		unk_0xDDEB630BCFC4398A(*uParam0, 0, func_347());
		unk_0xDDEB630BCFC4398A(*uParam0, 1, func_347());
		unk_0xDDEB630BCFC4398A(*uParam0, 2, func_347());
		unk_0xDDEB630BCFC4398A(*uParam0, 3, func_347());
		unk_0xDDEB630BCFC4398A(*uParam0, 4, func_347());
		unk_0xDDEB630BCFC4398A(*uParam0, 5, func_347());
		unk_0x64D8C8C6AAF5E84F(*uParam0, 3);
		unk_0x409E2EAB607A494A(*uParam0, 2);
		unk_0x2AF3B47FB350AB51(*uParam0, 1);
		unk_0xA516DB03BDB6B4EB(*uParam0);
		if (bParam5)
		{
			Var1 = { 0.4947f, 2.3632f, 0.1294f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 1, 0, 0);
			Var1 = { 0.9243f, 2.6606f, 0.1951f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 1, 0, 0);
			Var1 = { 1.5467f, 2.5044f, 0.2418f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 1, 0, 0);
			Var1 = { 1.357f, 3.8779f, 0.3259f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_351(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_336(43);
	if (unk_0x772F801619C83779(iVar0))
	{
		*uParam0 = unk_0x5618B819E5B9C053(28, iVar0, Param1, uParam4, 1, 1);
		unk_0x7B12279DA5C1F03D(*uParam0, 1);
		unk_0xD6A092D1F1B9A9F1(*uParam0, 227, 1);
		unk_0x9793B48C4C8275F8(iVar0);
		unk_0x990879ED64ED4138(*uParam0, 0);
		unk_0xA516DB03BDB6B4EB(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.4125f, -0.5815f, -0.2056f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 1, 0, 0);
			Var1 = { 0.6332f, -1.1758f, -0.7106f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_352(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_336(109);
	if (unk_0x772F801619C83779(iVar0))
	{
		*uParam0 = unk_0x5618B819E5B9C053(28, iVar0, Param1, uParam4, 1, 1);
		unk_0x7B12279DA5C1F03D(*uParam0, 1);
		unk_0x9793B48C4C8275F8(iVar0);
		unk_0x990879ED64ED4138(*uParam0, 0);
		unk_0xA516DB03BDB6B4EB(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.4936f, -0.1763f, -0.0522f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.0645f, 0.0483f, -0.0698f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6011f, -0.1704f, -0.1473f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 1, 0, 0);
		}
		func_343(*uParam0);
		return;
	}
}

void func_353(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_336(12);
	if (unk_0x772F801619C83779(iVar0))
	{
		*uParam0 = unk_0x5618B819E5B9C053(28, iVar0, Param1, uParam4, 1, 1);
		unk_0x7B12279DA5C1F03D(*uParam0, 1);
		unk_0x9793B48C4C8275F8(iVar0);
		unk_0x990879ED64ED4138(*uParam0, 0);
		unk_0xA516DB03BDB6B4EB(*uParam0);
		Var1 = { 0.04f, 0.02f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.01f, 0.05f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, -0.01f, 0f };
		unk_0x315D9A4E71D18A2E(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.2417f, -0.3975f, -0.2282f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.0747f, -0.8188f, -0.2576f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.4322f, -1.1548f, -0.4902f };
			unk_0x315D9A4E71D18A2E(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 1, 0, 0);
		}
		func_343(*uParam0);
		return;
	}
}

float func_354(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 190.1056f;
		
		case 2:
			return 132.9326f;
		
		case 3:
			return 355.7119f;
		
		case 4:
			return 209.0264f;
		
		case 5:
			return 122.6722f;
		
		case 6:
			return 174.841f;
		
		default:
	}
	return 0f;
}

Vector3 func_355(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_101164[0 /*3*/];
		
		case 2:
			return Global_101164[1 /*3*/];
		
		case 3:
			return Global_101164[2 /*3*/];
		
		case 4:
			return Global_101164[3 /*3*/];
		
		case 5:
			return Global_101164[4 /*3*/];
		
		case 6:
			return Global_101164[5 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_356()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_337(iVar0);
	iVar2 = func_336(iVar1);
	iVar3 = func_335(iVar1);
	if (iVar2 != 0)
	{
		if (!unk_0x772F801619C83779(iVar2))
		{
			return 0;
		}
	}
	if (iVar3 != 0)
	{
		if (!unk_0x772F801619C83779(iVar3))
		{
			return 0;
		}
	}
	return 1;
}

void func_357(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_337(iVar0);
	iVar2 = func_336(iVar1);
	iVar3 = func_335(iVar1);
	if (iVar2 != 0)
	{
		unk_0xBE91026C1FC72180(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0xBE91026C1FC72180(iVar3);
	}
	unk_0xCD7E92DE2BFA0B0D(uParam0, 25);
}

void func_358()
{
	if (Global_101187.f_3 == unk_0xA83FFA3FA7711E6D())
	{
		return;
	}
	Global_101187.f_3 = unk_0xA83FFA3FA7711E6D();
	if (Global_101187.f_2 == 0f && Global_101187.f_1 == 0f)
	{
		return;
	}
	if (Global_101187.f_2 != Global_101187.f_1)
	{
		Global_101187.f_2 = (Global_101187.f_2 + Global_101187);
		if (Global_101187 <= 0f)
		{
			if (Global_101187.f_2 < Global_101187.f_1)
			{
				Global_101187.f_2 = Global_101187.f_1;
			}
		}
		else if (Global_101187.f_2 > Global_101187.f_1)
		{
			Global_101187.f_2 = Global_101187.f_1;
		}
	}
	unk_0x45A34FA87FBE9599(0.5f, 0.5f, 1f, 1f, 255, 255, 255, unk_0xF2DB717A73826179(Global_101187.f_2), 0);
}

void func_359(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	if (iParam1 <= 0)
	{
		Global_101187 = 0f;
		Global_101187.f_1 = fVar0;
		Global_101187.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_101187.f_2);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1) / (unk_0xCD70DA50CCD55658() * 1000f));
		Global_101187 = (fVar1 / fVar2);
		Global_101187.f_1 = fVar0;
	}
}

void func_360(var uParam0, int iParam1)
{
	func_361(&(Global_104439.f_9877.f_25), iParam1, 14336, 11);
}

void func_361(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, iParam3));
}

struct<8> func_362(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_363(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_101142[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_364()
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_392)
			{
				unk_0xBE91026C1FC72180(joaat("v_ilev_uvline"));
				iLocal_391 = 1;
				if (unk_0x772F801619C83779(joaat("v_ilev_uvline")))
				{
					if (func_365(8))
					{
						uLocal_393[4] = unk_0x766969A7CEBA91AE(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 1, 1, 0);
						unk_0x0A69FBBF51E1A08F(uLocal_393[4], 471.48f, fVar0, 30.33f, 1, 0, 0, 1);
						unk_0xB7E3C36A3BE003B5(uLocal_393[4], 0f, 0f, 116.9f, 2, 1);
						uLocal_393[1] = unk_0x766969A7CEBA91AE(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 1, 1, 0);
						unk_0x0A69FBBF51E1A08F(uLocal_393[1], 471.48f, fVar0, 30.15f, 1, 0, 0, 1);
						unk_0xB7E3C36A3BE003B5(uLocal_393[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_365(9))
					{
						uLocal_393[5] = unk_0x766969A7CEBA91AE(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 1, 1, 0);
						unk_0x0A69FBBF51E1A08F(uLocal_393[5], 471.48f, fVar0, 29.98f, 1, 0, 0, 1);
						unk_0xB7E3C36A3BE003B5(uLocal_393[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_365(10))
					{
						uLocal_393[3] = unk_0x766969A7CEBA91AE(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, 1, 1, 0);
						unk_0x0A69FBBF51E1A08F(uLocal_393[3], 471.48f, fVar0, 29.82f, 1, 0, 0, 1);
						unk_0xB7E3C36A3BE003B5(uLocal_393[3], 0f, 0f, 116.9f, 2, 1);
					}
					uVar1 = unk_0x50C0AC4AD9CD152D(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (unk_0x76B3C79DE564AFC6(uLocal_393[iVar2]))
						{
							unk_0x477513BFF4F0CEC1(uLocal_393[iVar2], 1, 0);
							unk_0x89277EB37FA93C7F(uLocal_393[iVar2], 1);
							unk_0xA5F04407A80CC523(uLocal_393[iVar2], uVar1);
						}
						iVar2++;
					}
					unk_0x9793B48C4C8275F8(joaat("v_ilev_uvline"));
					iLocal_392 = 1;
				}
			}
		}
		else
		{
			if (iLocal_391)
			{
				unk_0x9793B48C4C8275F8(joaat("v_ilev_uvline"));
				iLocal_391 = 0;
			}
			if (iLocal_392)
			{
				func_408();
				iLocal_392 = 0;
			}
		}
	}
}

int func_365(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104439.f_8946.f_330[iParam0 /*6*/];
}

void func_366()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69607.f_553)
	{
		if (!iLocal_400)
		{
			Global_69607.f_554 = 0;
			iLocal_400 = 1;
		}
		else if (Global_69607.f_554 >= 68)
		{
			Global_69607.f_553 = 0;
			iLocal_400 = 0;
		}
	}
	else
	{
		iLocal_400 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_866)
	{
		iVar1 = iLocal_867[iVar0];
		if (func_60(&Local_674, iVar1))
		{
			func_404(&Local_695, iVar1);
			if ((Local_695.f_69 && Local_402.f_3 == 0) || iVar1 == 14)
			{
				uLocal_941[iVar1] = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Local_695.f_55, 0);
			}
			else
			{
				uLocal_941[iVar1] = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Local_674, 0);
			}
			if (func_403())
			{
				func_402(iVar1);
				func_400(iVar1);
				func_399(iVar1);
				func_398(iVar1);
				func_396(iVar1);
				func_395(iVar1);
				func_394(iVar1);
				func_368(iVar1);
				if (unk_0x2A3398C6222EB190(uLocal_48[iVar1], 2))
				{
					if (Global_69607.f_553)
					{
						iLocal_400 = 0;
					}
					func_409(iVar1);
				}
			}
			else
			{
				func_367(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_866;
	iLocal_866 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_936)
	{
		iLocal_936[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0x2A3398C6222EB190(uLocal_48[iLocal_867[iVar0]], 2))
		{
			func_409(iLocal_867[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_940 != -1)
	{
		func_409(iLocal_940);
		iLocal_940 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_409(iLocal_47);
	if (iLocal_1014)
	{
		func_409(21);
		func_409(22);
		func_409(23);
		iLocal_1014 = 0;
		bLocal_1015 = true;
	}
	else if (bLocal_1015)
	{
		bLocal_1015 = false;
	}
	if (Global_69607.f_553)
	{
		Global_69607.f_554++;
	}
}

void func_367(int iParam0)
{
	if (iLocal_117[iParam0] != 0)
	{
		unk_0x9793B48C4C8275F8(iLocal_117[iParam0]);
		iLocal_117[iParam0] = 0;
	}
}

void func_368(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	struct<60> Var11;
	int iVar89;
	bool bVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	struct<3> Var94;
	struct<3> Var100;
	int iVar106;
	
	fVar0 = 210f;
	fVar1 = 200f;
	if (!unk_0x2A3398C6222EB190(uLocal_48[iParam0], 2))
	{
		func_367(iParam0);
	}
	unk_0xD804ACF2A7171150(&(uLocal_48[iParam0]), 2);
	if (unk_0x2A3398C6222EB190(uLocal_48[iParam0], 1))
	{
		fVar2 = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Local_186[iParam0 /*3*/], 1);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (unk_0x2A3398C6222EB190(Local_674.f_9, 23))
	{
		if (Local_674.f_4 == joaat("blimp"))
		{
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else
		{
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (unk_0x2A3398C6222EB190(Local_674.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((unk_0x2A3398C6222EB190(Local_674.f_9, 19) || unk_0x2A3398C6222EB190(Local_674.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (unk_0x2A3398C6222EB190(Local_674.f_9, 25) && (((iLocal_672 == 0 && Local_402.f_0 == 21) || (iLocal_672 == 0 && Local_402.f_0 == 22)) || (iLocal_672 == 0 && Local_402.f_0 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (unk_0x76B3C79DE564AFC6(Global_69607.f_139[iParam0]))
	{
		if (unk_0x432757A9E7AAFA96(Global_69607.f_139[iParam0], 0))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				if (iParam0 == 24)
				{
					uVar3 = unk_0x3251C2B06497863C(Global_69607.f_139[iParam0], -1, 0);
					if (!unk_0x76B3C79DE564AFC6(uVar3))
					{
						iVar3 = unk_0xB4ED2AD9365A5F9E(Global_69607.f_139[iParam0], -1);
					}
					iVar4 = func_330(iVar3);
					if (iVar4 != Global_104439.f_32291.f_5591)
					{
						if (func_25(iVar4))
						{
							func_393("Updating last character to use vehicle gen", iVar4);
							Global_104439.f_32291.f_5591 = iVar4;
						}
					}
				}
				if (!unk_0xC9FBF92709010AC3(Global_69607.f_139[iParam0], 1))
				{
					func_392("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_62(Global_69607.f_139[iParam0])) && !func_61(Global_69607.f_139[iParam0])) && unk_0xE9559A12052415BE(Global_69607.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x30EFA94609D08404(Global_69607.f_139[iParam0], true);
					}
					Global_69607.f_139[iParam0] = 0;
					Global_69607[iParam0] = 1;
					func_391(iParam0);
					return;
				}
				if (((unk_0x2A3398C6222EB190(uLocal_48[iParam0], 0) && !unk_0x2A3398C6222EB190(Local_674.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_392("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_62(Global_69607.f_139[iParam0])) && !func_61(Global_69607.f_139[iParam0])) && unk_0xE9559A12052415BE(Global_69607.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x30EFA94609D08404(Global_69607.f_139[iParam0], true);
					}
					unk_0x28BB69BE14577487(&(Global_69607.f_139[iParam0]));
					Global_69607.f_139[iParam0] = 0;
					Global_69607[iParam0] = 1;
					func_391(iParam0);
					return;
				}
				if ((!unk_0x2A3398C6222EB190(uLocal_48[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (unk_0x7CA73A79B30385F3(Global_69607.f_139[iParam0], unk_0x0031992CA618A445(), 1))
					{
						func_392("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_62(Global_69607.f_139[iParam0])) && !func_61(Global_69607.f_139[iParam0])) && unk_0xE9559A12052415BE(Global_69607.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x30EFA94609D08404(Global_69607.f_139[iParam0], true);
						}
						unk_0x28BB69BE14577487(&(Global_69607.f_139[iParam0]));
						Global_69607.f_139[iParam0] = 0;
						Global_69607[iParam0] = 1;
						func_391(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((unk_0x2A3398C6222EB190(uLocal_48[iParam0], 1) && unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(Global_69607.f_139[iParam0], 1), Local_186[iParam0 /*3*/], 1) > fVar5) || (!unk_0x2A3398C6222EB190(uLocal_48[iParam0], 1) && unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(Global_69607.f_139[iParam0], 1), Local_674, 1) > fVar5))
				{
					func_392("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_62(Global_69607.f_139[iParam0])) && !func_61(Global_69607.f_139[iParam0])) && unk_0xE9559A12052415BE(Global_69607.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x30EFA94609D08404(Global_69607.f_139[iParam0], true);
					}
					unk_0x28BB69BE14577487(&(Global_69607.f_139[iParam0]));
					Global_69607.f_139[iParam0] = 0;
					Global_69607[iParam0] = 1;
					func_391(iParam0);
					return;
				}
				if (!func_66(iParam0, 0))
				{
					func_392("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_62(Global_69607.f_139[iParam0])) && !func_61(Global_69607.f_139[iParam0])) && unk_0xE9559A12052415BE(Global_69607.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x30EFA94609D08404(Global_69607.f_139[iParam0], true);
					}
					unk_0x28BB69BE14577487(&(Global_69607.f_139[iParam0]));
					Global_69607.f_139[iParam0] = 0;
					Global_69607[iParam0] = 1;
					func_391(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_46(Global_69607.f_139[iParam0], iLocal_672, 1) && !func_62(Global_69607.f_139[iParam0])) && !func_61(Global_69607.f_139[iParam0]))
					{
						func_392("No longer needed: Mission vehicle gen moved to players garage");
						if (unk_0xE9559A12052415BE(Global_69607.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x30EFA94609D08404(Global_69607.f_139[iParam0], true);
						}
						Global_69607.f_139[iParam0] = 0;
						Global_69607[iParam0] = 1;
						func_391(iParam0);
						return;
					}
				}
				if (uLocal_941[iParam0] > fVar0 && (!unk_0x2A3398C6222EB190(uLocal_48[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_49();
						iVar7 = Global_104439.f_32291.f_4801;
						func_389(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_303(iVar6, iVar7))
						{
							if ((!func_62(Global_69607.f_139[iParam0]) && !func_61(Global_69607.f_139[iParam0])) && unk_0xE9559A12052415BE(Global_69607.f_139[iParam0]) != joaat("monster"))
							{
								unk_0x30EFA94609D08404(Global_69607.f_139[iParam0], true);
							}
							func_31(Global_69607.f_139[iParam0], Global_104439.f_32291.f_5591);
							Global_69607[iParam0] = 1;
							func_391(iParam0);
						}
						else if (func_36(Global_69607.f_139[iParam0]))
						{
							func_32(Global_69607.f_139[iParam0], &Global_2456539);
							Global_2456538 = Global_104439.f_32291.f_5591;
							iLocal_1029 = Global_69607.f_139[iParam0];
						}
					}
					func_392("No longer needed: Player out for range");
					unk_0x28BB69BE14577487(&(Global_69607.f_139[iParam0]));
					unk_0x963AAB0E6FFD7E02(Local_674, 3f, 0, 0, 0, 0);
					unk_0xE882E0C18562237F(Local_674, 3f, 0, 0, 0, 0, 0, 0);
					Global_69607.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
					{
						Global_69607.f_584 = { Local_674 };
						Global_69607.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (unk_0x2A3398C6222EB190(Local_674.f_9, 30))
				{
					if (!unk_0x2A3398C6222EB190(Local_674.f_9, 31))
					{
						if (!unk_0x79B378EDDA36AA08(Global_69607.f_139[iParam0]) && !unk_0x6781178AD73D2128(Global_69607.f_139[iParam0]))
						{
							Var8 = { unk_0xF177E0DA126D71C8(Global_69607.f_139[iParam0], 1) };
							if (Var8.f_2 >= func_388(iParam0))
							{
								unk_0xCFB9AB2B03B3D7C9(Global_69607.f_139[iParam0], 1);
								unk_0xCD7E92DE2BFA0B0D(&(Local_674.f_9), 31);
							}
						}
					}
				}
			}
			return;
		}
	}
	else
	{
		Global_69607.f_139[iParam0] = 0;
	}
	if (unk_0x76B3C79DE564AFC6(Global_69607.f_139[iParam0]))
	{
		func_392("No longer needed: Vehicle not driveable");
		unk_0x28BB69BE14577487(&(Global_69607.f_139[iParam0]));
		Global_69607.f_139[iParam0] = 0;
		Global_69607[iParam0] = 1;
		func_391(iParam0);
		return;
	}
	if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		return;
	}
	if (Global_70514 == iParam0)
	{
		func_392("Processing a vehgen vehicle handover request.");
		if (unk_0x76B3C79DE564AFC6(Global_70513) && unk_0x432757A9E7AAFA96(Global_70513, 0))
		{
			if (unk_0x76B3C79DE564AFC6(Global_69607.f_139[iParam0]) && unk_0x432757A9E7AAFA96(Global_69607.f_139[iParam0], 0))
			{
				if (Global_69607.f_139[iParam0] == Global_70513)
				{
					func_392("Vehicle to be handed over is the same vehicle.");
					Global_70514 = -1;
					Global_70513 = 0;
					return;
				}
				else
				{
					func_392("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_62(Global_69607.f_139[iParam0])) && !func_61(Global_69607.f_139[iParam0])) && unk_0xE9559A12052415BE(Global_69607.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x30EFA94609D08404(Global_69607.f_139[iParam0], true);
					}
					unk_0x28BB69BE14577487(&(Global_69607.f_139[iParam0]));
					Global_69607.f_139[iParam0] = 0;
				}
			}
			Global_69607.f_139[iParam0] = Global_70513;
			Global_69607[iParam0] = 1;
			unk_0xD804ACF2A7171150(&(uLocal_48[iParam0]), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uLocal_48[iParam0]), 1);
			unk_0xD804ACF2A7171150(&(uLocal_48[iParam0]), 3);
			Local_186[iParam0 /*3*/] = { unk_0xF177E0DA126D71C8(Global_70513, 1) };
			Global_70514 = -1;
			if (unk_0x2A3398C6222EB190(Local_674.f_9, 10))
			{
				Var11.f_9 = 49;
				Var11.f_59 = 2;
				func_32(Global_70513, &Var11);
				if (Global_70515)
				{
					func_111(iParam0, &Var11, unk_0xF177E0DA126D71C8(Global_70513, 1), unk_0x69F9721375CE60CF(Global_70513), func_45(Global_70513));
				}
				else
				{
					func_111(iParam0, &Var11, Global_104439.f_32291.f_1864[Local_674.f_14 /*3*/], Global_104439.f_32291.f_1934[Local_674.f_14], func_45(Global_70513));
				}
				Global_69607.f_139[iParam0] = Global_70513;
				Global_69607.f_484[iParam0] = Global_69607.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar89 = func_405();
				if (func_25(iVar89))
				{
					func_392("Players stored switch vehicle cleared for prep getaway.");
					Global_92530[iVar89] = 0;
				}
			}
			unk_0x1581691D748490F3(Global_69607.f_139[iParam0], 1, 1);
			if (iParam0 == 24)
			{
				unk_0x30EFA94609D08404(Global_69607.f_139[iParam0], false);
			}
			Global_70513 = 0;
			if (Global_2456539.f_66 != 0)
			{
				func_225(&Global_2456539, Global_2456538);
				Global_2456539.f_66 = 0;
			}
			return;
		}
		if (Global_2456539.f_66 != 0)
		{
			func_225(&Global_2456539, Global_2456538);
			Global_2456539.f_66 = 0;
		}
		func_392("Vehicle to be handed over doesn't exist.");
		Global_70514 = -1;
		Global_70513 = 0;
	}
	if (Global_69607[iParam0])
	{
		if (uLocal_941[iParam0] >= fVar0)
		{
			Global_69607[iParam0] = 0;
			func_392("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_69607.f_584 = { 0f, 0f, 0f };
			Global_69607.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar90 = false;
	if (uLocal_941[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_104439.f_32291.f_1958[Local_674.f_14] != 0) && Global_104439.f_32291.f_1958[Local_674.f_14] > 3) && Local_674.f_4 != 0) && func_66(iParam0, 0)) && func_38(Local_674.f_4, 0))
		{
			iVar91 = func_49();
			iVar92 = Global_104439.f_32291.f_4801;
			func_389(&iVar92, 0, 0, 17, 0, 0, 0);
			if (func_303(iVar91, iVar92))
			{
				func_225(&(Global_104439.f_32291.f_69[Local_674.f_14 /*78*/]), Global_104439.f_32291.f_5591);
				func_391(iParam0);
				Global_69607[iParam0] = 1;
				func_392("Cannot be created: Vehicle ready for impound");
				Global_2456539.f_66 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			bVar90 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
	{
		Global_69607.f_584 = { 0f, 0f, 0f };
		Global_69607.f_587 = { 0f, 0f, 0f };
	}
	if (Local_674.f_4 == 0)
	{
		Global_69607[iParam0] = 1;
		func_392("Cannot be created: Dummy model");
		return;
	}
	if (!func_38(Local_674.f_4, 0))
	{
		Global_69607[iParam0] = 1;
		func_392("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_66(iParam0, 0))
	{
		Global_69607[iParam0] = 1;
		func_392("Cannot be created: Vehicle gen not available");
		return;
	}
	if (unk_0x2A3398C6222EB190(Local_674.f_9, 14) && !func_66(iParam0, 5))
	{
		Global_69607[iParam0] = 1;
		func_392("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_387() && func_386(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_69607[iParam0] = 1;
		func_392("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_673)
	{
		Global_69607[iParam0] = 1;
		func_392("Cannot be created: Player character not valid");
		return;
	}
	if (unk_0x2A3398C6222EB190(Local_674.f_9, 10))
	{
		if (unk_0x76B3C79DE564AFC6(Global_69607.f_484[iParam0]))
		{
			Global_69607[iParam0] = 1;
			func_392("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_69607.f_484[iParam0] = 0;
		}
	}
	if (unk_0x2A3398C6222EB190(Local_674.f_9, 6))
	{
		if (func_385(Local_674.f_4, -1))
		{
			Global_69607[iParam0] = 1;
			func_392("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_384(Local_674.f_4, -1))
		{
			Global_69607[iParam0] = 1;
			func_392("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (unk_0x2A3398C6222EB190(Local_674.f_9, 29))
	{
		if (Local_402.f_3 == 0)
		{
			return;
		}
	}
	if (func_383(iParam0))
	{
		Global_69607[iParam0] = 1;
		func_392("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (unk_0x003E46CBEF6CE07A() && unk_0xEBDBC787B1778ACF() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_69607[iParam0] = 1;
			func_392("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar93 = 0;
	if (unk_0x2A3398C6222EB190(Local_674.f_9, 19))
	{
		iVar93 = 2;
	}
	else if (unk_0x2A3398C6222EB190(Local_674.f_9, 20))
	{
		iVar93 = 1;
	}
	if ((iParam0 == 24 && Global_104439.f_32291.f_1958[Local_674.f_14] > 0) && Global_104439.f_32291.f_1958[Local_674.f_14] <= 3)
	{
		if (unk_0x34C854420D02F57B(Local_674.f_4))
		{
			iVar93 = 2;
			Local_674.f_12 = (Global_104439.f_32291.f_1958[Local_674.f_14] - 1);
		}
		else if (unk_0x2076012573940835(Local_674.f_4))
		{
			iVar93 = 1;
			Local_674.f_12 = (Global_104439.f_32291.f_1958[Local_674.f_14] - 1);
		}
	}
	if (iVar93 != 0)
	{
		if (func_382(Local_674.f_12, iVar93, Local_674, -1f))
		{
			Global_69607[iParam0] = 1;
			func_392("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_411(iParam0, 0);
			}
			return;
		}
		if (unk_0x2A3398C6222EB190(Local_674.f_9, 19) || unk_0x2A3398C6222EB190(Local_674.f_9, 20))
		{
			if (iVar93 == 2)
			{
				if (Global_90286[Local_674.f_12 /*3*/][1] != -1 && (unk_0x31CD6E9F83C10233() - Global_90286[Local_674.f_12 /*3*/][1]) < unk_0x36BBEEB0A9B9FA57() * 180)
				{
					Global_69607[iParam0] = 1;
					func_392("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var94, "...", 24);
					StringIntConCat(&Var94, ((unk_0x36BBEEB0A9B9FA57() * 180 - (unk_0x31CD6E9F83C10233() - Global_90286[Local_674.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var94, " seconds", 24);
					func_392(&Var94);
					return;
				}
			}
			else if (iVar93 == 1)
			{
				if (Global_90286[Local_674.f_12 /*3*/][0] != -1 && (unk_0x31CD6E9F83C10233() - Global_90286[Local_674.f_12 /*3*/][0]) < unk_0x36BBEEB0A9B9FA57() * 180)
				{
					Global_69607[iParam0] = 1;
					func_392("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var100, "...", 24);
					StringIntConCat(&Var100, ((unk_0x36BBEEB0A9B9FA57() * 180 - (unk_0x31CD6E9F83C10233() - Global_90286[Local_674.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var100, " seconds", 24);
					func_392(&Var100);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
	{
		Global_69607.f_584 = { Local_674 };
	}
	if (bVar90)
	{
		return;
	}
	if (iVar93 != 0)
	{
		iLocal_117[iParam0] = func_23(Local_674.f_12, iVar93);
		unk_0xBE91026C1FC72180(iLocal_117[iParam0]);
		unk_0xCD7E92DE2BFA0B0D(&(uLocal_48[iParam0]), 2);
		if (!unk_0x772F801619C83779(iLocal_117[iParam0]))
		{
			func_392("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_381(iLocal_117[iParam0], Local_674, 1))
		{
			func_392("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		unk_0x963AAB0E6FFD7E02(Local_674, 3f, 0, 0, 0, 0);
		unk_0xE882E0C18562237F(Local_674, 3f, 0, 0, 0, 0, 0, 0);
		if (iVar93 == 2)
		{
			func_376(&(Global_69607.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 2);
		}
		else if (iVar93 == 1)
		{
			func_376(&(Global_69607.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 1);
		}
		else
		{
			Global_69607[iParam0] = 1;
			func_392("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		unk_0xBE91026C1FC72180(Local_674.f_4);
		iLocal_117[iParam0] = Local_674.f_4;
		unk_0xCD7E92DE2BFA0B0D(&(uLocal_48[iParam0]), 2);
		if (!unk_0x772F801619C83779(Local_674.f_4))
		{
			func_392("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_381(Local_674.f_4, Local_674, 1))
		{
			func_392("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		unk_0x963AAB0E6FFD7E02(Local_674, 3f, 0, 0, 0, 0);
		unk_0xE882E0C18562237F(Local_674, 3f, 0, 0, 0, 0, 0, 0);
		if (unk_0x2A3398C6222EB190(Local_674.f_9, 23))
		{
			unk_0xE99C878AD7B8CED6(Local_674);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_674.f_4 == joaat("submersible2"))
			{
				Local_674.f_2 = -3f;
			}
		}
		Global_69607.f_139[iParam0] = unk_0x5129A9193468FF77(Local_674.f_4, Local_674, Local_674.f_3, 1, 1, 0);
		if (unk_0x2A3398C6222EB190(Local_674.f_9, 10))
		{
			if (unk_0xF9CDF5CA6A1D6756(Local_674.f_4))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_32291.f_69[Local_674.f_14 /*78*/].f_77), 22);
			}
			if (unk_0x2A3398C6222EB190(Global_104439.f_32291.f_69[Local_674.f_14 /*78*/].f_77, 14))
			{
				func_32(Global_69607.f_139[iParam0], &Local_776);
				func_375(Local_776.f_77, &(Global_104439.f_32291.f_69[Local_674.f_14 /*78*/].f_77), Local_674.f_4);
				unk_0xD804ACF2A7171150(&(Global_104439.f_32291.f_69[Local_674.f_14 /*78*/].f_77), 14);
			}
			func_316(Global_69607.f_139[iParam0], &(Global_104439.f_32291.f_69[Local_674.f_14 /*78*/]), 0, 1);
			Global_69607.f_484[iParam0] = Global_69607.f_139[iParam0];
		}
		else
		{
			if (unk_0x2A3398C6222EB190(Local_674.f_9, 9))
			{
				unk_0xBF9154ADAF4F11E1(Global_69607.f_139[iParam0], Local_674.f_10, Local_674.f_11);
			}
			if (unk_0x2A3398C6222EB190(Local_674.f_9, 8))
			{
				unk_0xFABEFEE17018AE2A(Global_69607.f_139[iParam0], 2);
				unk_0x644BF74611C3769E(Global_69607.f_139[iParam0], 0);
				unk_0xC0024AB730429D63(Global_69607.f_139[iParam0], 0);
				unk_0xE1227340F197A7D0(Global_69607.f_139[iParam0], 0);
				unk_0xD9DA45971EB9F430(Global_69607.f_139[iParam0], 0);
				unk_0xA3ADAFA85106743C(Global_69607.f_139[iParam0], 0);
				unk_0xC587296050B2CA93(Global_69607.f_139[iParam0], false);
				unk_0xC20B73867395D06D(Global_69607.f_139[iParam0], 1);
				unk_0x1F18D3C78C8C1A11(Global_69607.f_139[iParam0], 1);
			}
		}
	}
	if (unk_0x76B3C79DE564AFC6(Global_69607.f_139[iParam0]))
	{
		func_374("Created - Coords: ", Local_674);
		func_373("Created - Dist From Player:", uLocal_941[iParam0]);
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_69607.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_674.f_4)
		{
			case joaat("miljet"):
				unk_0xBF9154ADAF4F11E1(Global_69607.f_139[iParam0], 121, 21);
				unk_0xD6B0D4015CC61FF4(Global_69607.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				unk_0xBF9154ADAF4F11E1(Global_69607.f_139[iParam0], 122, 89);
				unk_0xD6B0D4015CC61FF4(Global_69607.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				unk_0xBF9154ADAF4F11E1(Global_69607.f_139[iParam0], 0, 0);
				unk_0xD6B0D4015CC61FF4(Global_69607.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				unk_0xBF9154ADAF4F11E1(Global_69607.f_139[iParam0], 131, 132);
				unk_0xD6B0D4015CC61FF4(Global_69607.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				unk_0xBF9154ADAF4F11E1(Global_69607.f_139[iParam0], 159, 0);
				unk_0xD6B0D4015CC61FF4(Global_69607.f_139[iParam0], 160, 156);
				break;
		}
		if (unk_0x2A3398C6222EB190(Local_674.f_9, 22))
		{
			unk_0xCFB9AB2B03B3D7C9(Global_69607.f_139[iParam0], 1);
		}
		if (unk_0x2A3398C6222EB190(Local_674.f_9, 30))
		{
			unk_0xD804ACF2A7171150(&(Local_674.f_9), 31);
		}
		if (unk_0x2A3398C6222EB190(Local_674.f_9, 26))
		{
			unk_0xFABEFEE17018AE2A(Global_69607.f_139[iParam0], 7);
			unk_0x090B4963A42812BC(Global_69607.f_139[iParam0], 1);
		}
		func_372(Global_69607.f_139[iParam0], iParam0);
		if (!unk_0x2A3398C6222EB190(Local_674.f_9, 29) && !unk_0x2A3398C6222EB190(Local_674.f_9, 30))
		{
			unk_0x24B72A49849215AE(Global_69607.f_139[iParam0], 1084227584);
		}
		unk_0x114815B023ED3916(Global_69607.f_139[iParam0], 0f);
		unk_0x583AB626B1CF33F0(Global_69607.f_139[iParam0], 1);
		unk_0x30EFA94609D08404(Global_69607.f_139[iParam0], unk_0x2A3398C6222EB190(Local_674.f_9, 5));
	}
	unk_0xD804ACF2A7171150(&(uLocal_48[iParam0]), 0);
	unk_0xD804ACF2A7171150(&(uLocal_48[iParam0]), 1);
	Global_69607[iParam0] = 1;
	if (iVar93 != 0)
	{
		Global_69607.f_69[iParam0] = 1;
	}
	iVar106 = func_369(458, -1, -1);
	if (iVar106 != 0 && iVar106 == iParam0)
	{
		iLocal_1028 = Global_69607.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2456539.f_66 = 0;
	}
}

int func_369(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_91();
	}
	iVar0 = 0;
	iVar1 = func_371(iParam0, iParam1);
	uVar2 = func_370(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8105A63E77701FA4(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_370(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	return iVar0;
}

int func_371(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_91();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	return iVar0;
}

void func_372(int iParam0, int iParam1)
{
	if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				unk_0x6811A3CE4E90E105(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				unk_0x6811A3CE4E90E105(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				unk_0x6811A3CE4E90E105(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				unk_0x9B48A5E9A884175D(iParam0, 6, false);
				unk_0x9B48A5E9A884175D(iParam0, 1, true);
				break;
			}
	}
}

void func_373(char* sParam0, float fParam1)
{
	if (!unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_374(char* sParam0, float fParam1, var uParam2, var uParam3)
{
	if (!unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_375(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			unk_0xD804ACF2A7171150(&iVar0, 0);
			unk_0xD804ACF2A7171150(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			unk_0xD804ACF2A7171150(&iVar0, 0);
			unk_0xD804ACF2A7171150(&iVar0, 1);
			unk_0xD804ACF2A7171150(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			unk_0xD804ACF2A7171150(&iVar0, 0);
			unk_0xD804ACF2A7171150(&iVar0, 1);
			unk_0xD804ACF2A7171150(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			unk_0xD804ACF2A7171150(&iVar0, 0);
			break;
		
		case joaat("stalion"):
			unk_0xD804ACF2A7171150(&iVar0, 0);
			unk_0xD804ACF2A7171150(&iVar0, 1);
			unk_0xD804ACF2A7171150(&iVar0, 2);
			break;
		
		case joaat("chino"):
			unk_0xD804ACF2A7171150(&iVar0, 0);
			unk_0xD804ACF2A7171150(&iVar0, 1);
			unk_0xD804ACF2A7171150(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_376(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;
	
	if (func_25(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_24(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0x76B3C79DE564AFC6(*iParam0))
		{
			if (unk_0xE9559A12052415BE(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_104439.f_2244.f_539.f_4296) && Global_104439.f_8946.f_99.f_58[131])
		{
			Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0xBE91026C1FC72180(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x772F801619C83779(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x5129A9193468FF77(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/], Param2, uParam5, 0, 0, 0);
				unk_0x24B72A49849215AE(*iParam0, 1084227584);
				unk_0xDEE5A73213F56CF3(*iParam0, 0);
				unk_0x30EFA94609D08404(*iParam0, false);
				unk_0x014C5648BA70BF8B(*iParam0, 1);
				unk_0x990879ED64ED4138(*iParam0, 1250);
				unk_0xCB78392CBBC0CB2F(*iParam0, 1250f);
				unk_0xAB7E0AE68E18BEED(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xBF9154ADAF4F11E1(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_5, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0xD6B0D4015CC61FF4(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_7, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x114815B023ED3916(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0x9B48A5E9A884175D(*iParam0, iVar103 + 1, !Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x7E67EF5B78953AF6(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_380(&uVar1, &uVar0))
				{
					unk_0x3F8A1297DC6573A7(*iParam0, &uVar1);
					unk_0xD84C2B9A469EBB35(*iParam0, uVar0);
				}
				else
				{
					unk_0x3F8A1297DC6573A7(*iParam0, &(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 < unk_0xE10B4E7E4009175A())
					{
						unk_0xD84C2B9A469EBB35(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xDBEB3DBC65F0B19E(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_84, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_85, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0xC587296050B2CA93(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x79C5F51FA95DC57C(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x368756789FF0788C(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_93, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_94, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0xA199088C3081D928(*iParam0, 2, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xA199088C3081D928(*iParam0, 3, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xA199088C3081D928(*iParam0, 0, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xA199088C3081D928(*iParam0, 1, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xD546CB3F87365B85(*iParam0) > 1 && Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xE4707C143B24BAB3(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x1B9B48622A4D3FC0(unk_0xE9559A12052415BE(*iParam0)))
					{
						if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(*iParam0)))
						{
							if (Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x61038A1B29CB9EEB(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x61038A1B29CB9EEB(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_317(iParam0, &(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_31), &(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x18804D60D4766EA6(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0xE9559A12052415BE(*iParam0) == joaat("bodhi2"))
					{
						func_378(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x9793B48C4C8275F8(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
				}
				func_377(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0xBE91026C1FC72180(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x772F801619C83779(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x5129A9193468FF77(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0, 0);
				unk_0x24B72A49849215AE(*iParam0, 1084227584);
				unk_0xDEE5A73213F56CF3(*iParam0, 0);
				unk_0x30EFA94609D08404(*iParam0, false);
				unk_0x014C5648BA70BF8B(*iParam0, 1);
				unk_0x990879ED64ED4138(*iParam0, 1250);
				unk_0xCB78392CBBC0CB2F(*iParam0, 1250f);
				unk_0xAB7E0AE68E18BEED(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xBF9154ADAF4F11E1(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_5, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0xD6B0D4015CC61FF4(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_7, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x114815B023ED3916(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0x9B48A5E9A884175D(*iParam0, iVar104 + 1, !Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x7E67EF5B78953AF6(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_380(&uVar1, &uVar0))
				{
					unk_0x3F8A1297DC6573A7(*iParam0, &uVar1);
					unk_0xD84C2B9A469EBB35(*iParam0, uVar0);
				}
				else
				{
					unk_0x3F8A1297DC6573A7(*iParam0, &(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 < unk_0xE10B4E7E4009175A())
					{
						unk_0xD84C2B9A469EBB35(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xDBEB3DBC65F0B19E(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_84, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_85, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0xC587296050B2CA93(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x79C5F51FA95DC57C(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x368756789FF0788C(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_93, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_94, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0xA199088C3081D928(*iParam0, 2, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xA199088C3081D928(*iParam0, 3, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xA199088C3081D928(*iParam0, 0, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xA199088C3081D928(*iParam0, 1, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xD546CB3F87365B85(*iParam0) > 1 && Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xE4707C143B24BAB3(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x1B9B48622A4D3FC0(unk_0xE9559A12052415BE(*iParam0)))
					{
						if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(*iParam0)))
						{
							if (Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x61038A1B29CB9EEB(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x61038A1B29CB9EEB(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_317(iParam0, &(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_31), &(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x18804D60D4766EA6(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0xE9559A12052415BE(*iParam0) == joaat("bodhi2"))
					{
						func_378(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x9793B48C4C8275F8(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
				}
				func_377(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0xBE91026C1FC72180(Var5.f_0);
			if (unk_0x772F801619C83779(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0x5129A9193468FF77(Var5.f_0, Param2, fParam5, 1, 1, 0);
				unk_0x24B72A49849215AE(*iParam0, 1084227584);
				unk_0xDEE5A73213F56CF3(*iParam0, 0);
				unk_0x30EFA94609D08404(*iParam0, false);
				unk_0x014C5648BA70BF8B(*iParam0, 1);
				StringCopy(&cVar106, unk_0xCF9C6545E179C4AD(*iParam0), 16);
				unk_0x990879ED64ED4138(*iParam0, 1250);
				unk_0xCB78392CBBC0CB2F(*iParam0, 1250f);
				unk_0xAB7E0AE68E18BEED(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xBF9154ADAF4F11E1(*iParam0, Var5.f_5, Var5.f_6);
				unk_0xD6B0D4015CC61FF4(*iParam0, Var5.f_7, Var5.f_8);
				unk_0x114815B023ED3916(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0x9B48A5E9A884175D(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0x7E67EF5B78953AF6(*iParam0, Var5.f_24);
				}
				if (func_380(&uVar1, &uVar0))
				{
					unk_0x3F8A1297DC6573A7(*iParam0, &uVar1);
					unk_0xD84C2B9A469EBB35(*iParam0, uVar0);
				}
				else
				{
					unk_0x3F8A1297DC6573A7(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0xE10B4E7E4009175A())
					{
						unk_0xD84C2B9A469EBB35(*iParam0, Var5.f_26);
					}
				}
				unk_0xDBEB3DBC65F0B19E(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0xC587296050B2CA93(*iParam0, Var5.f_88);
				unk_0x79C5F51FA95DC57C(*iParam0, Var5.f_87);
				unk_0x368756789FF0788C(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0xA199088C3081D928(*iParam0, 2, unk_0x2A3398C6222EB190(Var5.f_92, 28));
				unk_0xA199088C3081D928(*iParam0, 3, unk_0x2A3398C6222EB190(Var5.f_92, 29));
				unk_0xA199088C3081D928(*iParam0, 0, unk_0x2A3398C6222EB190(Var5.f_92, 30));
				unk_0xA199088C3081D928(*iParam0, 1, unk_0x2A3398C6222EB190(Var5.f_92, 31));
				if (unk_0xD546CB3F87365B85(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0xE4707C143B24BAB3(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0x1B9B48622A4D3FC0(unk_0xE9559A12052415BE(*iParam0)))
					{
						if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0x61038A1B29CB9EEB(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0x61038A1B29CB9EEB(*iParam0, Var5.f_90);
						}
					}
				}
				func_317(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0x18804D60D4766EA6(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0xE9559A12052415BE(*iParam0) == joaat("bagger") && !Global_104439.f_8946.f_99.f_58[118])
					{
						unk_0x3F8A1297DC6573A7(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0xE9559A12052415BE(*iParam0) == joaat("bodhi2"))
					{
						func_378(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_104439.f_2244.f_539.f_4296) && Global_104439.f_8946.f_99.f_58[131]) && unk_0xE9559A12052415BE(*iParam0) == joaat("tailgater"))
				{
					unk_0x5A814851114E34FB(*iParam0, 6, 1, false);
					unk_0x5A814851114E34FB(*iParam0, 14, 7, false);
					unk_0x5A814851114E34FB(*iParam0, 11, 2, false);
					unk_0x5A814851114E34FB(*iParam0, 2, 3, false);
					unk_0x5A814851114E34FB(*iParam0, 7, 5, false);
					unk_0x5A814851114E34FB(*iParam0, 0, 0, false);
					unk_0x5A814851114E34FB(*iParam0, 3, 3, false);
					unk_0x5A814851114E34FB(*iParam0, 13, 1, false);
					unk_0x5A814851114E34FB(*iParam0, 4, 3, false);
					unk_0x5A814851114E34FB(*iParam0, 12, 2, false);
					unk_0xF4E4907109CEF0EC(*iParam0, 22, true);
					unk_0x61038A1B29CB9EEB(*iParam0, 2);
					unk_0x5A814851114E34FB(*iParam0, 23, 11, false);
					unk_0x79C5F51FA95DC57C(*iParam0, 2);
					Global_104439.f_2244.f_539.f_4296 = 1;
					func_195(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x9793B48C4C8275F8(Var5.f_0);
				}
				if (bVar105)
				{
					func_377(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_377(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x76B3C79DE564AFC6(Global_90238[iVar0]))
		{
			Global_90238[iVar0] = iParam0;
			Global_90248[iVar0] = iParam1;
			Global_90258[iVar0] = unk_0xE9559A12052415BE(iParam0);
			if (unk_0x2076012573940835(Global_90258[iVar0]))
			{
				Global_90286[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90286[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_378(var uParam0)
{
	if (!func_379(*uParam0))
	{
		unk_0x9B48A5E9A884175D(*uParam0, 5, !Global_104439.f_8946.f_99.f_58[119]);
	}
}

bool func_379(int iParam0)
{
	return unk_0x3BE354A1A1BD6623(iParam0, 5);
}

int func_380(var uParam0, var uParam1)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
	}
	else if (Global_104439.f_19979.f_261)
	{
		*uParam0 = { Global_104439.f_19979.f_267 };
		*uParam1 = Global_104439.f_19979.f_271;
		return 1;
	}
	return 0;
}

int func_381(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if ((iParam4 && unk_0x5114FCEE2A997B95()) && unk_0x7832F791572D5809(joaat("startup_positioning")) > 0)
	{
		func_392("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	unk_0x9E360FFC6FB1DDFD(uParam0, &Var0, &Var3);
	fVar6 = unk_0x1410333E912D4EC6(Var3, Var0, 1);
	if (unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Param1, 1) < (fVar6 * 0.5f))
	{
		func_373("player is in vehicle bounds - fLength: ", fVar6);
		func_373("player is in vehicle bounds - fDistance: ", unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Param1, 1));
		return 1;
	}
	return 0;
}

int func_382(int iParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	struct<82> Var1;
	int iVar99;
	
	if (!func_25(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar99 = 0;
	func_24(iParam0, &Var1, iParam1);
	iVar99 = Var1.f_0;
	if (iVar99 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x76B3C79DE564AFC6(Global_90238[iVar0]) && unk_0x432757A9E7AAFA96(Global_90238[iVar0], 0))
			{
				if (unk_0xE9559A12052415BE(Global_90238[iVar0]) == iVar99 && Global_90248[iVar0] == iParam0)
				{
					if (fParam5 == -1f || unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(Global_90238[iVar0], 0), Param2, 1) <= fParam5)
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_383(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_674.f_4 == joaat("frogger2"))
		{
			if (((func_385(Local_674.f_4, -1) || func_384(Local_674.f_4, -1)) || unk_0x7832F791572D5809(joaat("exile2")) > 0) || !func_365(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((unk_0x76B3C79DE564AFC6(Global_69607.f_484[20]) && !unk_0x7A6C051038031EFA(Global_69607.f_484[20], 0)) && unk_0x432757A9E7AAFA96(Global_69607.f_484[20], 0))
		{
			if (Local_674.f_4 == unk_0xE9559A12052415BE(Global_69607.f_484[20]))
			{
				unk_0xB3EEFAD2583A0B39(Global_69607.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_674.f_10 && iVar1 == Local_674.f_11)
				{
					func_220(20);
				}
			}
		}
	}
	return 0;
}

int func_384(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = unk_0x2A1786470CB06BC9(Local_674, 200f, iParam0, iVar0);
	if ((unk_0x76B3C79DE564AFC6(iVar1) && unk_0x432757A9E7AAFA96(iVar1, 0)) && unk_0xE9559A12052415BE(iVar1) == iParam0)
	{
		if (iParam1 == -1 || unk_0x27F913045BB0E0C6(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_385(int iParam0, int iParam1)
{
	var uVar0[50];
	int iVar51;
	int iVar52;
	
	iVar52 = unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &uVar0);
	iVar51 = 0;
	while (iVar51 < iVar52)
	{
		if ((unk_0x76B3C79DE564AFC6(uVar0[iVar51]) && unk_0x432757A9E7AAFA96(uVar0[iVar51], 0)) && unk_0xE9559A12052415BE(uVar0[iVar51]) == iParam0)
		{
			if (iParam1 == -1 || unk_0x27F913045BB0E0C6(uVar0[iVar51]) == iParam1)
			{
				return 1;
			}
		}
		iVar51++;
	}
	return 0;
}

int func_386(int iParam0)
{
	if (Global_35813 == 15)
	{
		return 0;
	}
	if (func_299(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_387()
{
	return Global_69607.f_138;
}

float func_388(int iParam0)
{
	switch (iParam0)
	{
		case 57:
			return -0.7f;
			break;
		
		case 63:
			return -0.8f;
			break;
	}
	return 0f;
}

void func_389(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_54(*uParam0);
	iVar1 = func_56(*uParam0);
	iVar2 = func_307(*uParam0);
	iVar3 = func_306(*uParam0);
	iVar4 = func_305(*uParam0);
	iVar5 = func_304(*uParam0);
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
	iVar6 = func_53(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_53(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_390(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_390(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_59(uParam0, iParam1);
	func_58(uParam0, iParam2);
	func_57(uParam0, iParam3);
	func_51(uParam0, iParam5);
	func_52(uParam0, iParam4);
	func_50(uParam0, iParam6);
}

void func_391(int iParam0)
{
	if (unk_0x2A3398C6222EB190(Local_674.f_9, 13))
	{
		func_411(iParam0, 0);
	}
}

void func_392(char* sParam0)
{
	if (!unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
	}
}

void func_393(char* sParam0, int iParam1)
{
	if (!unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_394(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		return;
	}
	bVar0 = false;
	iVar5 = -1;
	iVar6 = joaat("prop_forsale_dyn_01");
	switch (iParam0)
	{
		case 12:
		case 13:
			bVar0 = !func_66(iParam0, 5);
			Var1 = { -961.42f, -2794.47f, 12.96f };
			fVar4 = -209.22f;
			iVar5 = 0;
			iVar6 = joaat("prop_airport_sale_sign");
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_66(iParam0, 5);
			Var1 = { -827.93f, -1368.14f, 3.9982f };
			fVar4 = -68.75f;
			iVar5 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_66(iParam0, 5);
			bVar0 = true;
			Var1 = { -710.07f, -1414.31f, 4f };
			fVar4 = -41.25f;
			iVar5 = 2;
			break;
		
		case 21:
			bVar0 = !func_66(iParam0, 5);
			Var1 = { -66.21f, 77.76f, 70.51f };
			fVar4 = -27f;
			iVar5 = 3;
			break;
		
		case 22:
			bVar0 = !func_66(iParam0, 5);
			Var1 = { -76.02f, -1825.61f, 25.88f };
			fVar4 = -129.67f;
			iVar5 = 4;
			break;
		
		case 23:
			bVar0 = !func_66(iParam0, 5);
			Var1 = { -218.68f, -1165.76f, 21.99f };
			fVar4 = 89.95f;
			iVar5 = 5;
			break;
	}
	if (bVar0 && unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Var1, 1) < 250f)
	{
		if (!unk_0x76B3C79DE564AFC6(uLocal_858[iVar5]))
		{
			unk_0xBE91026C1FC72180(iVar6);
			iLocal_865 = 1;
			if (unk_0x772F801619C83779(iVar6))
			{
				if (iLocal_865)
				{
					uLocal_858[iVar5] = unk_0x814AF6966D681312(iVar6, Var1, 0, 1, 0);
					unk_0xB7E3C36A3BE003B5(uLocal_858[iVar5], 0f, 0f, fVar4, 2, 1);
					unk_0x8903B4129E141B11(uLocal_858[iVar5], 0);
					unk_0x1F18D3C78C8C1A11(uLocal_858[iVar5], 1);
					unk_0x9793B48C4C8275F8(iVar6);
					iLocal_865 = 0;
				}
			}
		}
	}
	else if (iVar5 != -1)
	{
		if ((unk_0x76B3C79DE564AFC6(uLocal_858[iVar5]) && !unk_0x4096DB4B0B8A982B(uLocal_858[iVar5])) && unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Var1, 1) > 255f)
		{
			unk_0xF2EFF31F204F4A7D(&(uLocal_858[iVar5]));
			if (iLocal_865)
			{
				unk_0x9793B48C4C8275F8(iVar6);
				iLocal_865 = 0;
			}
		}
	}
}

void func_395(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (func_66(iParam0, 0) && (!unk_0x2A3398C6222EB190(Local_674.f_9, 14) || func_66(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_69607.f_346[iParam0] != bVar0)
	{
		if (!func_21(Local_674.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_69607.f_346[iParam0])
				{
					unk_0x04021FF677078694(Global_69607.f_415[iParam0], 0);
				}
			}
			else if (!Global_69607.f_346[iParam0])
			{
				Global_69607.f_415[iParam0] = unk_0x765BE154A2FACB3E(Local_674.f_15, Local_674.f_18, 0, 1, 1, 1);
			}
		}
		Global_69607.f_346[iParam0] = bVar0;
	}
}

void func_396(int iParam0)
{
	int iVar0;
	
	if (unk_0x2A3398C6222EB190(Local_674.f_9, 15))
	{
		if (func_66(iParam0, 0) && !func_66(iParam0, 5))
		{
			iVar0 = 145;
			if (unk_0x2A3398C6222EB190(Local_674.f_9, 16))
			{
				iVar0 = func_397(9);
			}
			else if (unk_0x2A3398C6222EB190(Local_674.f_9, 18))
			{
				iVar0 = func_397(4);
			}
			if (iVar0 == Local_674.f_12)
			{
				func_268(iParam0, 5, 1);
			}
		}
	}
}

int func_397(int iParam0)
{
	return Global_104439.f_24765[iParam0 /*4*/];
}

void func_398(int iParam0)
{
	if (func_66(iParam0, 0) && !func_66(iParam0, 3))
	{
		if (unk_0x2A3398C6222EB190(Local_674.f_9, 4))
		{
			func_268(iParam0, 3, 1);
		}
		else
		{
			func_268(iParam0, 3, 1);
		}
	}
}

void func_399(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_66(iParam0, 0) && bLocal_673)
	{
		if (unk_0x2A3398C6222EB190(Local_674.f_9, 0) || (unk_0x2A3398C6222EB190(Local_674.f_9, 2) && !func_66(iParam0, 2)))
		{
			if ((!unk_0x2A3398C6222EB190(Local_674.f_9, 21) || (((((((!func_27(0) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(9)) && !func_27(10)) && !func_27(13)) && !func_27(14))) && ((unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) == 0 || func_66(iParam0, 5)) || !unk_0x2A3398C6222EB190(Local_674.f_9, 28)))
			{
				bVar0 = false;
				if (!unk_0xA761A0B6072010C8(Global_69607.f_208[iParam0]))
				{
					if (func_365(0))
					{
						if (unk_0x2A3398C6222EB190(Local_674.f_9, 14) && !func_66(iParam0, 5))
						{
							Global_69607.f_208[iParam0] = unk_0x97AC4FC1EEAC7A8B(Local_695.f_55);
							if (Local_695.f_58 != -1)
							{
								unk_0x3B815A6E8530D3A5(Global_69607.f_208[iParam0], Local_695.f_58);
								if (!unk_0x0BD3CCFB6C6CFA91(&(Local_695.f_59)))
								{
									unk_0x50B5259DFC71B8EC(Global_69607.f_208[iParam0], &(Local_695.f_59));
								}
							}
						}
						else if (func_66(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_69607.f_208[iParam0] = unk_0x97AC4FC1EEAC7A8B(Local_695.f_55);
							if (Local_674.f_13 != -1)
							{
								unk_0x3B815A6E8530D3A5(Global_69607.f_208[iParam0], Local_674.f_13);
								if (!unk_0x0BD3CCFB6C6CFA91(&(Local_695.f_59)))
								{
									unk_0x50B5259DFC71B8EC(Global_69607.f_208[iParam0], &(Local_695.f_59));
								}
								if (Local_674.f_12 == 0)
								{
									iVar1 = 42;
								}
								else if (Local_674.f_12 == 1)
								{
									iVar1 = 43;
								}
								else if (Local_674.f_12 == 2)
								{
									iVar1 = 44;
								}
								unk_0xEB934A06DDA5027D(Global_69607.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_69607.f_208[iParam0] = unk_0x97AC4FC1EEAC7A8B(Local_674);
							if (Local_674.f_13 != -1)
							{
								unk_0x3B815A6E8530D3A5(Global_69607.f_208[iParam0], Local_674.f_13);
								if (!unk_0x0BD3CCFB6C6CFA91(&(Local_695.f_59)))
								{
									unk_0x50B5259DFC71B8EC(Global_69607.f_208[iParam0], &(Local_695.f_59));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_674.f_12 == 0)
									{
										iVar2 = 42;
									}
									else if (Local_674.f_12 == 1)
									{
										iVar2 = 43;
									}
									else if (Local_674.f_12 == 2)
									{
										iVar2 = 44;
									}
									unk_0xEB934A06DDA5027D(Global_69607.f_208[iParam0], iVar2);
								}
							}
						}
						unk_0xC2001CECF808BD21(Global_69607.f_208[iParam0], !unk_0x2A3398C6222EB190(Local_674.f_9, 1));
						unk_0xB989C497205DF6E8(Global_69607.f_208[iParam0], 0);
						unk_0xC5B4383DA70A2C1A(Global_69607.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (unk_0xA761A0B6072010C8(Global_69607.f_208[iParam0]))
		{
			unk_0x0C4BDC77192798AE(&(Global_69607.f_208[iParam0]));
		}
	}
}

void func_400(int iParam0)
{
	if (func_66(iParam0, 0) && !func_66(iParam0, 1))
	{
		if (func_66(iParam0, 4))
		{
			if (unk_0x2A3398C6222EB190(Local_674.f_9, 3))
			{
				func_401(&(Local_674.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_268(iParam0, 1, 1);
			}
			else
			{
				func_268(iParam0, 1, 1);
			}
		}
	}
}

void func_401(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_228(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_402(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x2A3398C6222EB190(Local_674.f_9, 7) || Local_674.f_12 == iLocal_672)
	{
		bLocal_673 = true;
	}
	else
	{
		bLocal_673 = false;
	}
	if (func_27(14))
	{
		bLocal_673 = false;
	}
	if ((bLocal_673 && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445())) && unk_0x2A3398C6222EB190(Local_674.f_9, 14))
	{
		if (Local_402.f_2 == 0 && Local_402.f_3 == 0)
		{
			if (uLocal_941[iParam0] < Local_402.f_1 || Local_402.f_0 == iParam0)
			{
				if (Local_402.f_0 != iParam0)
				{
					Local_402.f_8 = { Local_674 };
					Local_402.f_29 = { Local_695 };
					Local_402.f_0 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_69607.f_592)
					{
						Global_69607.f_592[iVar0] = -1;
						iVar0++;
					}
					Local_402.f_6 = -1;
					if ((Local_402.f_0 == 12 || Local_402.f_0 == 13) || Local_402.f_0 == 14)
					{
						Local_402.f_6 = 0;
					}
					else if ((Local_402.f_0 == 15 || Local_402.f_0 == 16) || Local_402.f_0 == 17)
					{
						Local_402.f_6 = 1;
					}
					else if ((Local_402.f_0 == 18 || Local_402.f_0 == 19) || Local_402.f_0 == 20)
					{
						Local_402.f_6 = 2;
					}
					else if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
					{
						Local_402.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						iVar2 = func_128(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_69607.f_592)
							{
								switch (Local_402.f_6)
								{
									case 3:
										if (func_64(iVar2))
										{
											Global_69607.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (unk_0x1DBFCF939B3B47D0(iVar2))
										{
											Global_69607.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((unk_0x9C4740BA7F0AF553(iVar2) || unk_0xA31F3B8AEDBCEB1E(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_69607.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_65(iVar2))
										{
											Global_69607.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_402.f_1 = uLocal_941[iParam0];
			}
		}
	}
	else if (Local_402.f_0 == iParam0)
	{
		Local_402.f_0 = -1;
		Local_402.f_1 = 99999.99f;
	}
	if (!unk_0x2A3398C6222EB190(uLocal_48[iParam0], 0))
	{
		if (unk_0x76B3C79DE564AFC6(Global_69607.f_139[iParam0]))
		{
			if (unk_0x432757A9E7AAFA96(Global_69607.f_139[iParam0], 0))
			{
				if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
				{
					if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Global_69607.f_139[iParam0], 0))
					{
						if (!unk_0x2A3398C6222EB190(uLocal_48[iParam0], 1) || unk_0x2A3398C6222EB190(uLocal_48[iParam0], 3))
						{
							unk_0xCD7E92DE2BFA0B0D(&(uLocal_48[iParam0]), 0);
							func_268(iParam0, 4, 1);
							func_268(iParam0, 2, 1);
						}
					}
					else
					{
						unk_0xCD7E92DE2BFA0B0D(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((unk_0x76B3C79DE564AFC6(Global_69607.f_484[iParam0]) && unk_0x432757A9E7AAFA96(Global_69607.f_484[iParam0], 0)) && unk_0xE9559A12052415BE(Global_69607.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_1030)
			{
				if (unk_0x417F21FB3F950AEE(Global_69607.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
				{
					unk_0xE49C2F3D6FD1A456(Global_69607.f_484[iParam0], 0f);
					iLocal_1030 = 1;
				}
			}
			else if (!unk_0x417F21FB3F950AEE(Global_69607.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
			{
				unk_0xE49C2F3D6FD1A456(Global_69607.f_484[iParam0], 1f);
				iLocal_1030 = 0;
			}
		}
		else
		{
			iLocal_1030 = 0;
		}
	}
}

int func_403()
{
	return 1;
}

var func_404(var uParam0, int iParam1)
{
	uParam0->f_80 = 0;
	uParam0->f_69 = 0;
	StringCopy(&(uParam0->f_59), "", 16);
	switch (iParam1)
	{
		case 12:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1652.454f, -3059.149f, 24.932f };
			uParam0->f_14.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_12 = 38.2303f;
			uParam0->f_14.f_6 = { -1651.547f, -3060.478f, 23.8077f };
			uParam0->f_14.f_6.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1650.431f, -3177.229f, 16.9898f };
			uParam0->f_29.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_12 = 38.2303f;
			uParam0->f_29.f_6 = { -1647.495f, -3173.728f, 16.6439f };
			uParam0->f_29.f_6.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_10 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_13 = 60.1875f;
			uParam0->f_48 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_51 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_54 = 60.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 13:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1184.2f, -3345f, 17.5f };
			uParam0->f_14.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_12 = 30.3f;
			uParam0->f_14.f_6 = { -1184.3f, -3345f, 16.6f };
			uParam0->f_14.f_6.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1272.6f, -3414.7f, 15.6f };
			uParam0->f_29.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_12 = 37.8f;
			uParam0->f_29.f_6 = { -1274f, -3414.4f, 15.6f };
			uParam0->f_29.f_6.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_10 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_13 = 66.1875f;
			uParam0->f_48 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_51 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_54 = 66.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 14:
			*uParam0 = { 1727.302f, 3291.453f, 39.61911f };
			uParam0->f_3 = { 1744.108f, 3296.215f, 44.17199f };
			uParam0->f_6 = 4.6875f;
			uParam0->f_44 = { 1737.53f, 3289.239f, 40.1448f };
			uParam0->f_47 = 14.8763f;
			uParam0->f_14 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_12 = 50f;
			uParam0->f_14.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_12 = 50f;
			uParam0->f_29.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_10 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_13 = 28.125f;
			uParam0->f_48 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_51 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME2", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 18:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -739.1531f, -1439.509f, 3.188024f };
			uParam0->f_10 = { -753.7792f, -1426.756f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -738f, -1440f, 6.3f };
			uParam0->f_14.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -738f, -1440f, 6f };
			uParam0->f_14.f_6.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -749.3f, -1425.7f, 5.9f };
			uParam0->f_29.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -749.9f, -1426f, 5.9f };
			uParam0->f_29.f_6.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -738.7791f, -1439.377f, 9.125515f };
			uParam0->f_51 = { -755.9111f, -1425.006f, 1.688014f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 19:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -755.6812f, -1459.234f, 3.188023f };
			uParam0->f_10 = { -770.7671f, -1446.867f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -754.6f, -1460.5f, 6.4f };
			uParam0->f_14.f_3 = { -4.8f, 0f, 48.5f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -754.6f, -1460.6f, 6.1f };
			uParam0->f_14.f_6.f_3 = { -2.2f, 0f, 48.5f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -771.8f, -1452.6f, 5.7f };
			uParam0->f_29.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -771.8f, -1452.1f, 5.7f };
			uParam0->f_29.f_6.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -755.5715f, -1459.453f, 9.125514f };
			uParam0->f_51 = { -771.4204f, -1446.235f, 1.688017f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 20:
			*uParam0 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_3 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_6 = 17.75f;
			uParam0->f_7 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_10 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_13 = 17.75f;
			uParam0->f_44 = { 1761.122f, 3250.125f, 40.733f };
			uParam0->f_47 = 236.5858f;
			uParam0->f_14 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_12 = 40f;
			uParam0->f_14.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { 1802.327f, 3245.165f, 46.95544f };
			uParam0->f_51 = { 1755.04f, 3237.17f, 38.6937f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME2", 16);
			uParam0->f_67 = 0;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 15:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -845.2216f, -1356.04f, -0.212093f };
			uParam0->f_10 = { -841.6451f, -1365.777f, 3.787907f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -835.86f, -1358.347f, 0.6102f };
			uParam0->f_47 = 112.3787f;
			uParam0->f_14 = { -859.6f, -1374f, 4.3f };
			uParam0->f_14.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_12 = 32.9f;
			uParam0->f_14.f_6 = { -859.7f, -1374f, 3f };
			uParam0->f_14.f_6.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -837.2f, -1350.3f, 2.4f };
			uParam0->f_29.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -837.4f, -1350.8f, 2.3f };
			uParam0->f_29.f_6.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 16:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -848.8177f, -1347.786f, -0.212093f };
			uParam0->f_10 = { -845.2482f, -1357.936f, 3.787908f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -839.2461f, -1349.525f, 0.6102f };
			uParam0->f_47 = 110.6762f;
			uParam0->f_14 = { -866.1f, -1365.6f, 4.3f };
			uParam0->f_14.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_12 = 30f;
			uParam0->f_14.f_6 = { -866.1f, -1365.6f, 3f };
			uParam0->f_14.f_6.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -838.7f, -1343.3f, 2.9f };
			uParam0->f_29.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -838.8f, -1343.2f, 2.9f };
			uParam0->f_29.f_6.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 17:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -851.6987f, -1339.128f, -0.212129f };
			uParam0->f_10 = { -848.128f, -1349.168f, 3.787905f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -842.0763f, -1341.401f, 0.6102f };
			uParam0->f_47 = 109.8916f;
			uParam0->f_14 = { -866.3f, -1357.9f, 4.3f };
			uParam0->f_14.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_12 = 31.2f;
			uParam0->f_14.f_6 = { -866.3f, -1357.9f, 3f };
			uParam0->f_14.f_6.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -841.6f, -1336.3f, 2.5f };
			uParam0->f_29.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -841.8f, -1336.1f, 2.5f };
			uParam0->f_29.f_6.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 21:
			*uParam0 = { -63.38147f, 84.0594f, 70.52139f };
			uParam0->f_3 = { -66.17774f, 77.95913f, 74.05372f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -65.2041f, 81.0524f, 70.5666f };
			uParam0->f_47 = 243.8699f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -62.62f, 80.03f, 70.62f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME1", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 243.8699f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -67.9068f, 82.2664f, 70.5153f };
			uParam0->f_77[0] = 66.202f;
			uParam0->f_70[1 /*3*/] = { -65.1234f, 81.2517f, 70.5644f };
			uParam0->f_77[1] = 71.6237f;
			uParam0->f_80 = 1;
			break;
		
		case 22:
			*uParam0 = { -72.41166f, -1824.142f, 25.81704f };
			uParam0->f_3 = { -68.70254f, -1819.642f, 29.37954f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -70.1992f, -1823.225f, 25.942f };
			uParam0->f_47 = 46.1535f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -71.29f, -1821.68f, 25.94f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME2", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 53.0985f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -64.2268f, -1832.598f, 25.8666f };
			uParam0->f_77[0] = 274.6339f;
			uParam0->f_70[1 /*3*/] = { -68.5531f, -1824.377f, 25.9424f };
			uParam0->f_77[1] = 215.8295f;
			uParam0->f_80 = 1;
			break;
		
		case 23:
			*uParam0 = { -220.7794f, -1159.28f, 21.90302f };
			uParam0->f_3 = { -220.7273f, -1165.265f, 25.45053f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -220.7592f, -1162.277f, 22.0242f };
			uParam0->f_47 = 271.2097f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -218.35f, -1162.18f, 22.02f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME3", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 271.2097f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -222.1935f, -1162.113f, 22.0204f };
			uParam0->f_77[0] = 358.5703f;
			uParam0->f_70[1 /*3*/] = { -220.8189f, -1162.302f, 22.0242f };
			uParam0->f_77[1] = 70.2711f;
			uParam0->f_80 = 1;
			break;
	}
	return uParam0->f_80;
}

int func_405()
{
	func_406();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_406()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_331(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_330(unk_0x0031992CA618A445());
			if (func_25(iVar0) && (!func_27(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_25(Global_104439.f_2244.f_539.f_4301))
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

void func_407()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xA761A0B6072010C8(Global_69607.f_208[iVar0]))
		{
			unk_0x0C4BDC77192798AE(&(Global_69607.f_208[iVar0]));
		}
		if (unk_0x76B3C79DE564AFC6(Global_69607.f_139[iVar0]))
		{
			if (unk_0x432757A9E7AAFA96(Global_69607.f_139[iVar0], 0))
			{
				unk_0x28BB69BE14577487(&(Global_69607.f_139[iVar0]));
				Global_69607.f_139[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (unk_0x2A3EA4C0BCED85F2(Local_402.f_110))
	{
		unk_0x55CC07D5416539C8(Local_402.f_110, 0);
		unk_0x46B35AD2F641A4A3(Local_402.f_110, 0);
	}
	if (unk_0x2A3EA4C0BCED85F2(Local_402.f_111))
	{
		unk_0x55CC07D5416539C8(Local_402.f_111, 0);
		unk_0x46B35AD2F641A4A3(Local_402.f_111, 0);
	}
	if (Local_402.f_3 != 0)
	{
		func_216();
		unk_0x1F18D3C78C8C1A11(unk_0x0031992CA618A445(), 0);
	}
	if (unk_0xA761A0B6072010C8(Global_69607.f_583))
	{
		unk_0x0C4BDC77192798AE(&(Global_69607.f_583));
	}
	if (iLocal_656 != -1)
	{
		func_68(&iLocal_656);
	}
	if (iLocal_655 != -1)
	{
		func_68(&iLocal_655);
	}
	if (Local_402.f_5 != -1)
	{
		func_68(&(Local_402.f_5));
	}
	if (iLocal_668 != -1)
	{
		func_68(&iLocal_668);
	}
	if (Local_402.f_3 > 0)
	{
		if (Global_69607.f_577)
		{
			func_193(47, 1);
			func_191(47, 1);
			Global_69607.f_577 = 0;
			Local_402.f_3 = 0;
		}
	}
	Global_69607.f_553 = 0;
	unk_0xBEE2834559A8897A();
}

void func_408()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0x76B3C79DE564AFC6(uLocal_393[iVar0]))
		{
			unk_0xF2EFF31F204F4A7D(&(uLocal_393[iVar0]));
		}
		iVar0++;
	}
}

void func_409(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0x2A3398C6222EB190(iLocal_936[iVar0], iVar1))
	{
		unk_0xCD7E92DE2BFA0B0D(&(iLocal_936[iVar0]), iVar1);
		iLocal_867[iLocal_866] = iParam0;
		iLocal_866++;
	}
}

void func_410()
{
	int iVar0;
	
	if (func_239(25))
	{
		if (Global_104439.f_32291.f_69[22 /*78*/].f_66 != 0 && !func_38(Global_104439.f_32291.f_69[22 /*78*/].f_66, 0))
		{
			Global_104439.f_32291.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_104439.f_32291.f_69[22 /*78*/].f_77 = 0;
			Global_104439.f_32291.f_69[22 /*78*/].f_65 = 0;
			Global_104439.f_32291.f_69[22 /*78*/].f_62 = 255;
			Global_104439.f_32291.f_69[22 /*78*/].f_63 = 255;
			Global_104439.f_32291.f_69[22 /*78*/].f_64 = 255;
			Global_104439.f_32291.f_69[22 /*78*/].f_5 = 0;
			Global_104439.f_32291.f_69[22 /*78*/].f_6 = 0;
			Global_104439.f_32291.f_69[22 /*78*/].f_7 = 0;
			Global_104439.f_32291.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_104439.f_32291.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_104439.f_32291.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_239(21) && Global_104439.f_32291.f_69[9 /*78*/].f_66 != 0) && !func_38(Global_104439.f_32291.f_69[9 /*78*/].f_66, 0))
	{
		Global_104439.f_32291.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_239(22) && Global_104439.f_32291.f_69[10 /*78*/].f_66 != 0) && !func_38(Global_104439.f_32291.f_69[10 /*78*/].f_66, 0))
	{
		Global_104439.f_32291.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_239(23) && Global_104439.f_32291.f_69[11 /*78*/].f_66 != 0) && !func_38(Global_104439.f_32291.f_69[11 /*78*/].f_66, 0))
	{
		Global_104439.f_32291.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_239(26) && !func_38(Global_104439.f_32291.f_69[12 /*78*/].f_66, 0))
	{
		func_411(26, 0);
	}
	if (func_239(27) && !func_38(Global_104439.f_32291.f_69[13 /*78*/].f_66, 0))
	{
		func_411(27, 0);
	}
	if (func_239(28) && !func_38(Global_104439.f_32291.f_69[14 /*78*/].f_66, 0))
	{
		func_411(28, 0);
	}
	if (func_239(29) && !func_38(Global_104439.f_32291.f_69[15 /*78*/].f_66, 0))
	{
		func_411(29, 0);
	}
	if (func_239(30) && !func_38(Global_104439.f_32291.f_69[16 /*78*/].f_66, 0))
	{
		func_411(30, 0);
	}
	if (func_239(31) && !func_38(Global_104439.f_32291.f_69[17 /*78*/].f_66, 0))
	{
		func_411(31, 0);
	}
	if (func_239(32) && !func_38(Global_104439.f_32291.f_69[18 /*78*/].f_66, 0))
	{
		func_411(32, 0);
	}
	if (func_239(33) && !func_38(Global_104439.f_32291.f_69[19 /*78*/].f_66, 0))
	{
		func_411(33, 0);
	}
	if (func_239(34) && !func_38(Global_104439.f_32291.f_69[20 /*78*/].f_66, 0))
	{
		func_411(34, 0);
	}
}

void func_411(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_66(iParam0, 0))
		{
			func_268(iParam0, 1, 0);
			func_268(iParam0, 2, 0);
			func_268(iParam0, 3, 0);
			func_268(iParam0, 4, 0);
			func_268(iParam0, 0, 1);
			Global_69607[iParam0] = 1;
		}
	}
	else
	{
		func_268(iParam0, 0, 0);
	}
}

int func_412()
{
	return 0;
}

int func_413()
{
	return 1;
}

int func_414()
{
	return 1;
}

int func_415()
{
	if (unk_0x43456EBBDC27D696(-1226939934))
	{
		return 1;
	}
	return 0;
}

void func_416(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_420();
	func_419();
	func_417();
}

void func_417()
{
	Global_102817 = 2405.849f;
	Global_102820 = 2408.22f;
	Global_102823 = 2386.096f;
	Global_102826 = 69.1875f;
	Global_102829[0 /*3*/] = 2417.105f;
	Global_102829[1 /*3*/] = 2407.058f;
	Global_102829[2 /*3*/] = 2371.92f;
	Global_102829[3 /*3*/] = 2399.583f;
	Global_102829[4 /*3*/] = 2416.519f;
	Global_102829[5 /*3*/] = 2430.345f;
	Global_102829[6 /*3*/] = 2385.819f;
	Global_102851[0] = 157.8636f;
	Global_102851[1] = 174.7226f;
	Global_102851[2] = 270.7562f;
	Global_102851[3] = 190.7495f;
	Global_102851[4] = 27.6506f;
	Global_102851[5] = 358.1218f;
	Global_102851[6] = 339.4363f;
	Global_102859 = 2399.82f;
	Global_102862 = 2414.7f;
	func_418(&Global_101186, 64);
}

void func_418(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_419()
{
	Global_101191[0 /*3*/].f_1 = 5141.01f;
	Global_101191[1 /*3*/].f_1 = 6048.71f;
	Global_101191[2 /*3*/].f_1 = 6185.32f;
	Global_101191[3 /*3*/].f_1 = 5180.99f;
	Global_101191[4 /*3*/].f_1 = 4582.72f;
	Global_101191[5 /*3*/].f_1 = 4831.82f;
	Global_101191[6 /*3*/].f_1 = 4322.66f;
	Global_101191[7 /*3*/].f_1 = 3503.92f;
	Global_101191[8 /*3*/].f_1 = 3777.54f;
	Global_101191[9 /*3*/].f_1 = 3810.8f;
	Global_101191[10 /*3*/].f_1 = 3095.88f;
	Global_101225[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_101225[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_101225[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_101225[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_101225[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_101225[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_101225[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_101225[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_101225[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_101225[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_101225[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_101225[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_101225[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_101225[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_101225[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_101225[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_101225[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_101225[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_101225[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_101225[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_101225[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_101225[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_101225[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_101225[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_101225[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_101225[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_101225[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_101225[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_101225[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_101225[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_101225[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_101225[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_101225[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_101225[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_101225[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_101225[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_101225[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_101225[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_101225[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_101225[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_101225[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_101225[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_101225[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_101225[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_101225[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_101225[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_101225[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_101225[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_101225[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_101225[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_101225[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_101225[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_101225[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_101225[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_101225[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_101225[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_101225[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_101225[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_101225[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_101225[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_101225[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_101225[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_101225[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	func_418(&Global_101186, 16);
}

void func_420()
{
	Global_101142[0 /*3*/] = -1567.382f;
	Global_101142[1 /*3*/] = -1436.305f;
	Global_101142[2 /*3*/] = 31.2408f;
	Global_101142[3 /*3*/] = 278.1924f;
	Global_101142[4 /*3*/] = 1116.002f;
	Global_101142[5 /*3*/] = 1676.193f;
	Global_101164[0 /*3*/] = -1592.642f;
	Global_101164[1 /*3*/] = -1573.501f;
	Global_101164[2 /*3*/] = -1459.359f;
	Global_101164[3 /*3*/] = 21.1005f;
	Global_101164[4 /*3*/] = 262.9409f;
	Global_101164[5 /*3*/] = 1091.07f;
	func_418(&Global_101186, 1);
}

