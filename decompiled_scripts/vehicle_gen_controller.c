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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_116[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_185[68];
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	var uLocal_392[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	struct<114> Local_401 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_515 = { 0, 0, 0, 0, 0 } ;
	struct<74> Local_520 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 2;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620[4] = { 0, 0, 0, 0 };
	int iLocal_625 = 0;
	int iLocal_626[1] = { 0 };
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638[2] = { 0, 0 };
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	bool bLocal_647 = 0;
	struct<13> Local_648 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	struct<81> Local_669 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_750 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_910[3] = { 0, 0, 0 };
	int iLocal_914 = 0;
	var uLocal_915[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	int iLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	bool bLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	bool bLocal_992 = 0;
	char cLocal_993[16] = "";
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	char cLocal_997[16] = "";
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	int iLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
	int iLocal_1007 = 0;
	int iLocal_1008 = 0;
	char* sLocal_1009 = NULL;
	int iLocal_1010 = 0;
	int iLocal_1011 = 0;
	float fLocal_1012 = 0f;
	int iLocal_1013 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_629 = -1;
	iLocal_630 = -1;
	iLocal_635 = -1;
	iLocal_642 = -1;
	iLocal_914 = -1;
	unk_0xE6E19E3BBABCBC24(0);
	Local_401.f_5 = -1;
	Local_401.f_0 = -1;
	Local_401.f_1 = 99999.99f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_88521[iVar0 /*3*/][0] = -1;
		Global_88521[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_98931.f_18731.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_98931.f_18731.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_98931.f_18731.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_98931.f_18731.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_98931.f_18731.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_98931.f_18731.f_4801 = -15;
		Global_98931.f_18731.f_4802 = 1;
	}
	if (((!func_328() && !func_327()) && !func_326()) && !func_325())
	{
		func_324(60, 0);
		func_324(61, 0);
	}
	func_323();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_322(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_400)
		{
			iLocal_400 = 1;
			if (unk_0x8D841F1DD3FA555F(98))
			{
				if (unk_0x7918CAF69196C22D() == 64)
				{
					if (!Global_68878)
					{
						iLocal_400 = 0;
					}
					else
					{
						func_321();
						func_320();
					}
					Global_68878 = 0;
				}
				else
				{
					func_321();
					func_320();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7D8BA2483AA7FFED() != 5)
		{
			iLocal_646 = func_318();
			func_279();
			func_277();
			func_256();
			func_11();
			func_3();
			func_1(&uLocal_984);
		}
	}
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1320754.f_21)
	{
		iVar1 = func_2(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1320754.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = unk_0x5EBAAA68E63A79C9(iVar0);
			if (Global_1320754[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1320754[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = unk_0xBF60DC8B452E1A63(iVar0);
			if (Global_1320754[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1320754[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = unk_0xB70CD19AEB10C940(iVar0);
			}
			else
			{
				fVar2 = unk_0x0ACA698FA52EE23E(iVar0);
			}
			if (Global_1320754[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1320754[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = unk_0x7008EEB41BC9E5A3(iVar0);
			if (Global_1320754[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1320754[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

int func_2(int iParam0, int iParam1)
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

void func_3()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xFBACB273AA628CC5(Global_67889.f_583))
	{
		bVar0 = false;
		if (iLocal_646 != Global_67889.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_10(0) || func_10(3)) || func_10(2)) || func_10(4)) || func_10(13)) || func_10(14))
		{
			bVar0 = true;
		}
		else if (Global_67889.f_590)
		{
			if (!func_9(Global_67889.f_584, unk_0x3BB744083EDD3FF5(Global_67889.f_583), 1056964608, 0) || func_5(Global_67889.f_582, func_6(Global_67889.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_67889.f_591)
		{
			if (!func_9(Global_67889.f_587, unk_0x3BB744083EDD3FF5(Global_67889.f_583), 1056964608, 0) || func_5(Global_67889.f_582, func_6(Global_67889.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!unk_0x86CCCD2FAE9D5E65(Global_67889.f_581) || !unk_0x7404950238A154C2(Global_67889.f_581, 0)) || (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Global_67889.f_581, 0)))
		{
			if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_581) && !unk_0x7404950238A154C2(Global_67889.f_581, 0))
			{
				Global_67889.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_581))
		{
			if (unk_0x7404950238A154C2(Global_67889.f_581, 0))
			{
				Global_67889.f_587 = { unk_0xB6AE0DAE06D56288(Global_67889.f_581, 1) };
			}
			else
			{
				Global_67889.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			unk_0x0A8175F24237A3D4(&(Global_67889.f_583));
			Global_67889.f_590 = 0;
			Global_67889.f_591 = 0;
			Global_67889.f_581 = 0;
		}
	}
	else
	{
		Global_67889.f_590 = 0;
		Global_67889.f_591 = 0;
		Global_67889.f_581 = 0;
	}
	if ((((((!unk_0xFBACB273AA628CC5(Global_67889.f_583) && !func_10(0)) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(13)) && !func_10(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_88483[iVar2] != 145 && Global_88493[iVar2] != 0) && unk_0x86CCCD2FAE9D5E65(Global_88473[iVar2])) && unk_0x7404950238A154C2(Global_88473[iVar2], 0)) && !unk_0xFBACB273AA628CC5(unk_0x4770B4BC52820FF1(Global_88473[iVar2]))) && Global_88483[iVar2] == iLocal_646) && unk_0x61A26017817C6AED(unk_0x14B7103DBD149FFE(Global_88473[iVar2])))
			{
				if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Global_88473[iVar2], 0))
				{
					Global_67889.f_581 = Global_88473[iVar2];
					Global_67889.f_582 = iLocal_646;
					Global_67889.f_590 = 0;
					Global_67889.f_583 = unk_0xE122DDAE9E94767B(Global_67889.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!unk_0xFBACB273AA628CC5(Global_67889.f_583) && !func_4(Global_67889.f_584, 0f, 0f, 0f, 0))
			{
				Global_67889.f_581 = 0;
				Global_67889.f_582 = iLocal_646;
				Global_67889.f_590 = 1;
				Global_67889.f_583 = unk_0xA949BE56543040D2(Global_67889.f_584);
			}
			if (!unk_0xFBACB273AA628CC5(Global_67889.f_583) && !func_4(Global_67889.f_587, 0f, 0f, 0f, 0))
			{
				Global_67889.f_581 = 0;
				Global_67889.f_582 = iLocal_646;
				Global_67889.f_591 = 1;
				Global_67889.f_583 = unk_0xA949BE56543040D2(Global_67889.f_587);
			}
		}
		else
		{
			Global_67889.f_590 = 0;
			Global_67889.f_591 = 0;
		}
		if (unk_0xFBACB273AA628CC5(Global_67889.f_583))
		{
			unk_0x8F827BB0F6ED7AA8(Global_67889.f_583, 225);
			unk_0x2AB7C42FF2AF476D(Global_67889.f_583, "PVEHICLE");
			unk_0x6FA15F9609E21DA5(Global_67889.f_583, false);
			unk_0xCB015C3E2E01CA1C(Global_67889.f_583, 3);
			if (iLocal_646 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_646 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_646 == 2)
			{
				iVar3 = 44;
			}
			unk_0x1B86E7A8766EA6B4(Global_67889.f_583, iVar3);
		}
	}
}

bool func_4(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_5(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar1]) && unk_0x7404950238A154C2(Global_88473[iVar1], 0))
		{
			if (Global_88483[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == unk_0x14B7103DBD149FFE(Global_88473[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_6(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_8(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_7(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_7(int iParam0, var uParam1, int iParam2)
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
			if (Global_98931.f_7699.f_99.f_58[128] && !Global_98931.f_7699.f_99.f_58[131])
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
					if (Global_98931.f_7699.f_99.f_58[119])
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
			else if (Global_98931.f_7699.f_99.f_58[118])
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

bool func_8(int iParam0)
{
	return iParam0 < 3;
}

int func_9(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xB9AA84B14E04BC20((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_10(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_11()
{
	func_199();
	func_140();
	func_47();
	func_12();
}

void func_12()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (((((Local_401.f_29.f_80 && !Local_401.f_29.f_69) && Local_401.f_0 != -1) && func_46(Local_401.f_0, 0)) && func_46(Local_401.f_0, 5)) && unk_0x968BF1C2C695B61A(joaat("michael1")) == 0)
		{
			if (!unk_0x86CCCD2FAE9D5E65(Local_401.f_113))
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0x86CCCD2FAE9D5E65(iVar0) && unk_0x7404950238A154C2(iVar0, 0))
					{
						iVar1 = unk_0x14B7103DBD149FFE(iVar0);
						if (func_43(iVar1))
						{
							Local_401.f_113 = iVar0;
						}
					}
				}
			}
			else if (unk_0x7404950238A154C2(Local_401.f_113, 0) && func_43(unk_0x14B7103DBD149FFE(Local_401.f_113)))
			{
				if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Local_401.f_113, 0))
				{
					if (unk_0xD1FFD959917D4ED8(Local_401.f_113, Local_401.f_29.f_48, Local_401.f_29.f_51, Local_401.f_29.f_54, 0, 1, 0))
					{
						if ((!func_42(Local_401.f_113) && !func_41(Local_401.f_113)) && Local_401.f_113 != Global_67889.f_484[Local_401.f_0])
						{
							func_13(Local_401.f_0, Local_401.f_113, 1);
						}
						Local_401.f_113 = 0;
					}
				}
			}
			else
			{
				Local_401.f_113 = 0;
			}
		}
		else
		{
			Local_401.f_113 = 0;
		}
	}
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_40(&(Global_67889.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 12) && !unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67889.f_555[0 /*21*/].f_4 != unk_0x14B7103DBD149FFE(iParam1))
		{
			return;
		}
	}
	if (Global_68796 != -1 && Global_68796 != iParam0)
	{
		return;
	}
	if (unk_0x86CCCD2FAE9D5E65(iParam1))
	{
		if (unk_0x7404950238A154C2(iParam1, 0))
		{
			if (!unk_0xE86442941AE40E75(iParam1))
			{
				unk_0xD768713E73165208(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_98931.f_18731.f_4801 = func_29();
			}
			if (iParam1 != Global_67889.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_28(iParam0);
					if ((unk_0x86CCCD2FAE9D5E65(iVar0) && unk_0x7404950238A154C2(iVar0, 0)) && iParam1 != iVar0)
					{
						func_14(iVar0, 145);
					}
				}
				Global_68795 = iParam1;
				Global_68796 = iParam0;
				Global_68797 = iParam2;
			}
		}
	}
}

void func_14(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_19(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xB0B9E53CEFDB16AA(iParam0, -1);
		if (!unk_0x86CCCD2FAE9D5E65(iVar0))
		{
			iVar0 = unk_0x24E1D5759BFC6ECE(iParam0, -1);
		}
		if (unk_0x86CCCD2FAE9D5E65(iVar0) && !unk_0x5FEB513A4402FD59(iVar0))
		{
			if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_98931.f_1750.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x14B7103DBD149FFE(iParam0) == Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xB318FDA0D1ABDB20(&(Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xD994929E13CC1ED5(unk_0xE0DCE5625B61B0CC(iParam0), &(Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_98931.f_18731.f_5592[iVar1] = iVar2;
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
		if (unk_0x14B7103DBD149FFE(iParam0) == Global_98931.f_18731.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xB318FDA0D1ABDB20(&(Global_98931.f_18731.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xD994929E13CC1ED5(unk_0xE0DCE5625B61B0CC(iParam0), &(Global_98931.f_18731.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_98931.f_18731.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_98931.f_18731.f_5590 = iParam1;
	Global_68794 = iParam0;
	Global_98931.f_18731.f_5588 = 1;
	func_15(iParam0, &(Global_98931.f_18731.f_5510));
}

void func_15(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		func_18(uParam1);
		uParam1->f_66 = unk_0x14B7103DBD149FFE(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE0DCE5625B61B0CC(iParam0), 16);
		*uParam1 = unk_0xBF74E89FC6941108(iParam0);
		unk_0x1D3AAB0507DD3600(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x6942D519F6FE2C32(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB931B48FB3E13CF0(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x48F64101B58EB7F7(iParam0);
		uParam1->f_67 = unk_0xA3EFB2F9FFCDC48D(iParam0);
		uParam1->f_69 = unk_0xBB644BAE860F67B7(iParam0);
		uParam1->f_70 = unk_0x4AC847D90EBAFAEE(iParam0);
		unk_0x332D9608C3A4D1BE(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3182B161F39E40BC(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x1CD308F8479FBE52(iParam0, 2))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 28);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 3))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 29);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 30);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 1))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xD31A4E6B116BE250(iParam0, 0))
		{
			uParam1->f_68 = unk_0x48D44DDE1A5A9BD7(iParam0);
		}
		if (unk_0x1699D7B95446F15C(uParam1->f_66))
		{
			if (unk_0x923087289F6BA752(iParam0))
			{
				switch (unk_0x3D09A88E72AB7687(iParam0))
				{
					case 2:
					case 0:
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 23);
						unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 23);
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x263B56EFBC6AC36C(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 9);
		}
		if (unk_0x1E729885E653D827(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 10);
		}
		if (unk_0x6E728693163D9496(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 13);
			unk_0x4B850687F46D6E15(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9EBDB9930E2E0600(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 12);
		}
		func_17(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), func_16(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x45AFEFCDD35076F2(iParam0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 11);
		}
		if (unk_0xCEC9D74C9FF51C8C(iParam0, "IgnoredByQuickSave") && unk_0x53ABC9BE848EA65A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 27);
		}
	}
}

int func_16(int iParam0)
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

int func_17(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7404950238A154C2(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xBE23E5C609DF6E79(*iParam0) == 0)
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
			if (unk_0x91B47E3FC237F24A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x64D946BA23568D30(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB0BC5473B799F536(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB0BC5473B799F536(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_18(var uParam0)
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

int func_19(int iParam0)
{
	if ((((((((((!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0)) || func_26(iParam0, 0, 0)) || func_26(iParam0, 1, 0)) || func_26(iParam0, 2, 0)) || func_25(iParam0) != 145) || func_24(iParam0)) || func_42(iParam0)) || func_41(iParam0)) || func_23(iParam0)) || !func_20(unk_0x14B7103DBD149FFE(iParam0)))
	{
		if (func_42(iParam0))
		{
		}
		if (func_42(iParam0))
		{
		}
		if (func_26(iParam0, 0, 0))
		{
		}
		if (func_26(iParam0, 1, 0))
		{
		}
		if (func_26(iParam0, 2, 0))
		{
		}
		if (func_25(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_20(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_21(iParam0))
	{
		return 0;
	}
	if (((unk_0x9F59BCFFFEAAD4B1(iParam0) || unk_0x1699D7B95446F15C(iParam0)) || unk_0xE083914AB72DD7CE(iParam0)) || unk_0xE4CD4B212196D2C5(iParam0))
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

int func_21(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xA84E120D1B16B142(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1C6DF6AD69BE853E())) || (iParam0 == joaat("buffalo3") && !unk_0x1C6DF6AD69BE853E())) || (iParam0 == joaat("gauntlet2") && !unk_0x1C6DF6AD69BE853E())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1C6DF6AD69BE853E())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_22())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xCDB51B918CEDF9B8())
		{
			if (unk_0x292BAD2AB4F88E45(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xA10BCE9255970BC8(Var1.f_0))
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
		if ((((!func_328() && !func_327()) && !func_326()) && !func_325()) && !func_22())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x3F0C224D3CC05EF2() || unk_0x913B1C01C1BA6C6F()) || unk_0xEC209B562C5EFDB2())
		{
		}
		else if (!func_326())
		{
			return 0;
		}
	}
	return 1;
}

int func_22()
{
	var uVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF3148AAF69AF9CBC(&uVar0, 2);
				unk_0xF3148AAF69AF9CBC(&uVar0, 4);
				unk_0xF3148AAF69AF9CBC(&uVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					iVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&iVar0, 0);
					unk_0x0A726855B16BE29A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_135975 == 2)
	{
		return 1;
	}
	else if (Global_135975 == 3)
	{
		return 0;
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		if (unk_0x236D8AD7EE179F46(unk_0xE19FDB171CBF814A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	uVar1 = unk_0xE0DCE5625B61B0CC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xD994929E13CC1ED5(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_21(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[24]))
	{
		if (iParam0 == Global_67889.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67889.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 145;
	}
	if (!unk_0x7404950238A154C2(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]))
		{
			if (Global_88473[iVar0] == iParam0)
			{
				return Global_88483[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_26(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_27(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x236D8AD7EE179F46(Global_98931.f_5843[iVar9], 0))
		{
			if (unk_0x9ED6CC42898E5346(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_27(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_28(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_67889.f_139[iParam0];
}

int func_29()
{
	var uVar0;
	
	func_39(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_38(&uVar0, unk_0x25B31B877207A3A9());
	func_37(&uVar0, unk_0x0C937048CF6952B5());
	func_32(&uVar0, unk_0x8B6B3DD84CE74978());
	func_31(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_30(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

void func_30(var uParam0, int iParam1)
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

void func_31(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_32(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_36(*uParam0);
	iVar1 = func_34(*uParam0);
	if (iParam1 < 1 || iParam1 > func_33(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_33(int iParam0, int iParam1)
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

var func_34(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_35(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
}

int func_35(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_36(int iParam0)
{
	return iParam0 & 15;
}

void func_37(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_38(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_39(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_40(var uParam0, int iParam1)
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
			uParam0->f_4 = func_6(0, 1);
			uParam0->f_12 = 0;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_6(0, 1);
			uParam0->f_12 = 0;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_6(1, 1);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_6(1, 2);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 19);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_6(1, 1);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_6(1, 2);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 19);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_6(2, 1);
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_6(2, 1);
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_6(2, 1);
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 22);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 22);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 22);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
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
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 27);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
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
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 27);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
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
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 27);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 11);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 11);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 9);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 9);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
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
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 2);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 30);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 2);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 22);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
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
			if (func_22())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 2);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_22())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 2);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 30);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 30);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x236D8AD7EE179F46(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_98931.f_18731.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_4(Global_98931.f_18731.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_98931.f_18731.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_98931.f_18731.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_98931.f_18731.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x236D8AD7EE179F46(uParam0->f_9, 19))
	{
		if (!func_4(Global_98931.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_98931.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_98931.f_1750.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x236D8AD7EE179F46(uParam0->f_9, 20))
	{
		if (!func_4(Global_98931.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_98931.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_98931.f_1750.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_88503[iVar0]))
		{
			if (Global_88503[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_42(int iParam0)
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]) && unk_0x7404950238A154C2(Global_88473[iVar0], 0))
			{
				if (Global_88473[iVar0] == iParam0 && unk_0x14B7103DBD149FFE(Global_88473[iVar0]) == unk_0x14B7103DBD149FFE(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_43(int iParam0)
{
	switch (Local_401.f_6)
	{
		case 0:
			return func_45(iParam0);
			break;
		
		case 1:
			if (((unk_0x9F59BCFFFEAAD4B1(iParam0) || unk_0xE10D8610CC6BB347(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_44(iParam0);
			break;
		
		case 2:
			return (unk_0xE083914AB72DD7CE(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_44(int iParam0)
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0;
	}
	if (((!unk_0x61A26017817C6AED(iParam0) && !unk_0xC5ABD699DDC9D5A0(iParam0)) && !unk_0xD382045D1EFD12D3(iParam0)) && !unk_0x8923BC9F314B991D(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	if (iParam0 == joaat("jet"))
	{
		return 0;
	}
	if ((((!unk_0x1699D7B95446F15C(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

bool func_46(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x236D8AD7EE179F46(Global_98931.f_18731[iParam0], iParam1);
}

void func_47()
{
	struct<78> Var0;
	struct<78> Var78;
	bool bVar156;
	int iVar157;
	int iVar158;
	int iVar159;
	int iVar160;
	int iVar161;
	struct<4> Var162;
	int iVar166;
	int iVar167;
	int iVar168;
	int iVar169;
	int iVar170;
	int iVar171;
	int iVar172;
	bool bVar173;
	int iVar174;
	bool bVar175;
	bool bVar176;
	int iVar177;
	int iVar178;
	int iVar179;
	int iVar180;
	struct<2> Var181;
	int iVar185;
	bool bVar186;
	int iVar187;
	bool bVar188;
	var uVar189;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var78.f_9 = 49;
	Var78.f_59 = 2;
	bVar156 = false;
	iVar157 = 0;
	if (iLocal_628 > 0 && iLocal_628 != 99)
	{
		if (((((((((((((((Local_401.f_0 == -1 || unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_401.f_29.f_7, Local_401.f_29.f_10, Local_401.f_29.f_13, 0, 1, 0)) || ((unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[Local_401.f_0]) && unk_0x7404950238A154C2(Global_67889.f_484[Local_401.f_0], 0)) && (unk_0xF2B8FCF27DF5227E(unk_0x81873881071CD9FE(), Global_67889.f_484[Local_401.f_0]) || unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Global_67889.f_484[Local_401.f_0], 1)))) || ((unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[Local_401.f_0]) && unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE())) && ((unk_0x2C7FEB2538D88E8C(unk_0x81873881071CD9FE()) - 1f) > 0.15f && unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), Global_67889.f_484[Local_401.f_0])))) || ((unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[Local_401.f_0]) && unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE())) && unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Global_67889.f_484[Local_401.f_0], 1))) || (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()) && unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE()))) || func_10(0)) || func_10(3)) || func_10(2)) || func_10(4)) || func_10(14)) || func_139(0) != bLocal_992) || bLocal_828) || func_138(-1082130432))
		{
			iLocal_628 = 99;
		}
	}
	switch (iLocal_628)
	{
		case 0:
			if ((((!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) && !Global_67710) && !bLocal_828) && !unk_0x29AFA2493D7C23D0())
			{
				if ((((((((((Local_401.f_29.f_80 && Local_401.f_2 == 0) && (Global_67889.f_592[0] != -1 || func_137() != 0)) && Local_401.f_0 != -1) && !iLocal_990) && !func_10(0)) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(14)) && !func_138(-1082130432))
				{
					if (iLocal_630 != -1)
					{
					}
					else if (func_46(Local_401.f_0, 0) && func_46(Local_401.f_0, 5))
					{
						if ((unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_401.f_29.f_7, Local_401.f_29.f_10, Local_401.f_29.f_13, 0, 1, 0) && !unk_0x9CE1E63C565B0EFC(unk_0x81873881071CD9FE())) && !unk_0xCB8B9E751036ECB2(unk_0x81873881071CD9FE()))
						{
							if ((!unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[Local_401.f_0]) || !unk_0x7404950238A154C2(Global_67889.f_484[Local_401.f_0], 0)) || (!unk_0xF2B8FCF27DF5227E(unk_0x81873881071CD9FE(), Global_67889.f_484[Local_401.f_0]) && !unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Global_67889.f_484[Local_401.f_0], 1)))
							{
								iVar160 = func_137();
								iVar161 = 0;
								while (iVar161 < iVar160)
								{
									if (func_43(func_133(iVar161)))
									{
										iVar159++;
									}
									iVar161++;
								}
								iVar158 = 0;
								while (iVar158 < Global_67889.f_592)
								{
									if (Global_67889.f_592[iVar158] != -1)
									{
										if ((func_132(Global_67889.f_592[iVar158], iLocal_646) && Global_98931.f_18731.f_1982[iLocal_646 /*939*/].f_626[Global_67889.f_592[iVar158]] == -15) && (Global_67889.f_592[iVar158] != 200 || !Global_98931.f_29522.f_7))
										{
											iVar159++;
										}
									}
									iVar158++;
								}
								if (iVar159 > 0)
								{
									if (!unk_0xA83A609D74168B30())
									{
										iLocal_830 = 1;
										if (Local_401.f_6 == 3)
										{
											func_131(&iLocal_629, 3, "WEB_VEH_TRIG2", 0, 0, 0);
										}
										else
										{
											func_131(&iLocal_629, 3, "WEB_VEH_TRIG", 0, 0, 0);
										}
										bLocal_992 = func_139(0);
										iLocal_628++;
									}
								}
								else if (!iLocal_830)
								{
									if (Local_401.f_6 == 0)
									{
										if (!unk_0xA83A609D74168B30() || func_130("HANGAR_NO"))
										{
											func_129("HANGAR_NO", -1);
											StringCopy(&cLocal_993, "HANGAR_NO", 16);
										}
										bVar156 = true;
									}
									else if (Local_401.f_6 == 1)
									{
										if (!unk_0xA83A609D74168B30() || func_130("MARINA_NO"))
										{
											func_129("MARINA_NO", -1);
											StringCopy(&cLocal_993, "MARINA_NO", 16);
										}
										bVar156 = true;
									}
									else if (Local_401.f_6 == 2)
									{
										if (!unk_0xA83A609D74168B30() || func_130("HELIPAD_NO"))
										{
											func_129("HELIPAD_NO", -1);
											StringCopy(&cLocal_993, "HELIPAD_NO", 16);
										}
										bVar156 = true;
									}
									else if (Local_401.f_6 == 3)
									{
										StringCopy(&Var162, "CAR_GAR_NO", 16);
										if (unk_0x211AF631627DE2C5() || unk_0xEC209B562C5EFDB2())
										{
											StringConCat(&Var162, "_1", 16);
										}
										else if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
										{
											StringConCat(&Var162, "_2", 16);
										}
										if (!unk_0xA83A609D74168B30() || func_130(&Var162))
										{
											func_129(&Var162, -1);
											cLocal_993 = { Var162 };
										}
										bVar156 = true;
									}
								}
							}
						}
						else
						{
							iLocal_830 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && func_127(0, -1))
			{
				if (iLocal_630 != -1)
				{
					iLocal_628 = 0;
					return;
				}
				if (func_126(iLocal_629, 1))
				{
					unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
					if (unk_0x7FCE6803A3D23268(unk_0x60FC347BF9CAD1BD()) == 4)
					{
						unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
					}
					else
					{
						unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 256);
					}
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if (unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
						{
							unk_0x89540DDA99D7346F(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0);
						}
					}
					func_125();
					iLocal_631 = 0;
					iLocal_632 = 0;
					iLocal_633 = 0;
					iLocal_619 = -1;
					iLocal_628++;
					return;
				}
			}
			break;
		
		case 2:
			if (!iLocal_631 || iLocal_632)
			{
				func_124(0);
				func_123(1, 4, 0, 0, 0);
				func_122(1, 2, 1, 1, 1);
				func_121("WEB_VEH_TITLE");
				iVar166 = 0;
				while (iVar166 < iLocal_620)
				{
					iLocal_620[iVar166] = 0;
					iVar166++;
				}
				iVar167 = -1;
				iVar168 = 0;
				func_40(&(Local_401.f_8), Local_401.f_0);
				iVar170 = 0;
				iVar171 = func_137();
				iVar169 = 0;
				while (iVar169 < iVar171)
				{
					if (func_43(func_133(iVar169)))
					{
						if (iVar167 == -1)
						{
							iVar167 = iVar170;
						}
						if (Local_401.f_8.f_4 == func_133(iVar169))
						{
							iLocal_619 = iVar170;
							iVar168 = 1;
						}
						iVar170++;
					}
					iVar169++;
				}
				iVar169 = 0;
				while (iVar169 < Global_67889.f_592)
				{
					if (Global_67889.f_592[iVar169] != -1)
					{
						if ((func_132(Global_67889.f_592[iVar169], iLocal_646) && Global_98931.f_18731.f_1982[iLocal_646 /*939*/].f_626[Global_67889.f_592[iVar169]] == -15) && (Global_67889.f_592[iVar169] != 200 || !Global_98931.f_29522.f_7))
						{
							func_112(Global_67889.f_592[iVar169], &Var0, 0, iLocal_646);
							if (iVar167 == -1)
							{
								iVar167 = iVar170;
							}
							if (Local_401.f_8.f_4 == Var0.f_66)
							{
								iLocal_619 = iVar170;
								iVar168 = 1;
							}
							iVar170++;
						}
					}
					iVar169++;
				}
				if (iLocal_619 == -1)
				{
					iLocal_619 = iVar167;
				}
				iVar170 = 0;
				iVar171 = func_137();
				iVar169 = 0;
				while (iVar169 < iVar171)
				{
					if (func_43(func_133(iVar169)))
					{
						unk_0xF3148AAF69AF9CBC(&(iLocal_620[(iVar170 / 32)]), (iVar170 % 32));
						func_109(iVar170, unk_0x60793BDBCF1CD039(func_133(iVar169)), 0, 1, 0, 0);
						if ((iLocal_619 == iVar170 && iVar168) && Local_401.f_6 != 3)
						{
							func_108(iVar170, 4, 0);
						}
						else
						{
							func_108(iVar170, 0, 0);
						}
						iVar170++;
					}
					iVar169++;
				}
				iVar169 = 0;
				while (iVar169 < Global_67889.f_592)
				{
					if (Global_67889.f_592[iVar169] != -1)
					{
						if ((func_132(Global_67889.f_592[iVar169], iLocal_646) && Global_98931.f_18731.f_1982[iLocal_646 /*939*/].f_626[Global_67889.f_592[iVar169]] == -15) && (Global_67889.f_592[iVar169] != 200 || !Global_98931.f_29522.f_7))
						{
							unk_0xF3148AAF69AF9CBC(&(iLocal_620[(iVar170 / 32)]), (iVar170 % 32));
							func_112(Global_67889.f_592[iVar169], &Var0, 0, iLocal_646);
							if (Global_67889.f_592[iVar169] != 164)
							{
								func_109(iVar170, func_106(Global_67889.f_592[iVar169]), 0, 1, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_109(iVar170, "TWOSTRINGS", 2, 1, 0, 0);
								func_103(func_106(Global_67889.f_592[iVar169]), 0);
								func_103("VNX_SWFTC", 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_109(iVar170, "TWOSTRINGS", 2, 1, 0, 0);
								func_103(func_106(Global_67889.f_592[iVar169]), 0);
								func_103("VNX_SWFTB", 0);
							}
							else
							{
								func_109(iVar170, func_106(Global_67889.f_592[iVar169]), 0, 1, 0, 0);
							}
							if (iLocal_619 == iVar170 && iVar168)
							{
								func_108(iVar170, 4, 0);
							}
							else
							{
								func_108(iVar170, 0, 0);
							}
							iVar170++;
						}
					}
					iVar169++;
				}
				func_102(iLocal_619, 1, 1);
				iLocal_634 = 1;
				iLocal_632 = 0;
				iLocal_631 = 1;
			}
			else
			{
				iVar157 = 0;
				if (unk_0x913B1C01C1BA6C6F())
				{
					if (unk_0x2705BD3DB0D294CB(2))
					{
						unk_0xDE1125A413AF241C(0, 1, 1);
						unk_0xDE1125A413AF241C(0, 2, 1);
						unk_0xDE1125A413AF241C(2, 200, 1);
						unk_0xF333CEFDC2923B24(0, 237, 1);
						unk_0xF333CEFDC2923B24(0, 238, 1);
						unk_0xF333CEFDC2923B24(0, 241, 1);
						unk_0xF333CEFDC2923B24(0, 242, 1);
						func_99(0, 0, 0, 1);
						func_98(0, -1);
						if (func_97())
						{
							if (Global_2549109 != iLocal_619)
							{
								unk_0x35D7948F61AA3FEC(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_619 = Global_2549109;
								func_102(iLocal_619, 1, 1);
								iLocal_634 = 1;
							}
							else
							{
								iVar157 = 1;
							}
						}
					}
				}
				if (unk_0x093DEAE9A023FAA0(2, 188) || unk_0x093DEAE9A023FAA0(2, 241))
				{
					iLocal_634 = 1;
					unk_0x35D7948F61AA3FEC(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar172 = (iLocal_619 - 1);
					while (iVar172 >= 0)
					{
						if (unk_0x236D8AD7EE179F46(iLocal_620[(iVar172 / 32)], (iVar172 % 32)))
						{
							iLocal_619 = iVar172;
							bVar173 = true;
							iVar172 = 0;
						}
						iVar172 = (iVar172 + -1);
					}
					if (!bVar173)
					{
						iVar172 = (iLocal_620 * 32 - 1);
						while (iVar172 >= iLocal_619 + 1)
						{
							if (unk_0x236D8AD7EE179F46(iLocal_620[(iVar172 / 32)], (iVar172 % 32)))
							{
								iLocal_619 = iVar172;
								bVar173 = true;
								iVar172 = 0;
							}
							iVar172 = (iVar172 + -1);
						}
					}
					if (bVar173)
					{
						func_102(iLocal_619, 1, 1);
					}
				}
				else if (unk_0x093DEAE9A023FAA0(2, 187) || unk_0x093DEAE9A023FAA0(2, 242))
				{
					iLocal_634 = 1;
					unk_0x35D7948F61AA3FEC(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar174 = iLocal_619 + 1;
					while (iVar174 <= (iLocal_620 * 32 - 1))
					{
						if (unk_0x236D8AD7EE179F46(iLocal_620[(iVar174 / 32)], (iVar174 % 32)))
						{
							iLocal_619 = iVar174;
							bVar175 = true;
							iVar174 = iLocal_620 * 32 + 1;
						}
						iVar174++;
					}
					if (!bVar175)
					{
						iVar174 = 0;
						while (iVar174 <= (iLocal_619 - 1))
						{
							if (unk_0x236D8AD7EE179F46(iLocal_620[(iVar174 / 32)], (iVar174 % 32)))
							{
								iLocal_619 = iVar174;
								bVar175 = true;
								iVar174 = iLocal_620 * 32 + 1;
							}
							iVar174++;
						}
					}
					if (bVar175)
					{
						func_102(iLocal_619, 1, 1);
					}
				}
				else if (unk_0xB93E207B3C65F1B1(2, 201) || iVar157 == 1)
				{
					bVar176 = false;
					iVar157 = 0;
					unk_0x35D7948F61AA3FEC(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar178 = 0;
					iVar179 = func_137();
					iVar177 = 0;
					while (iVar177 < iVar179)
					{
						if (func_43(func_133(iVar177)))
						{
							if (iLocal_619 == iVar178 && (((((Local_401.f_8.f_4 != func_133(iVar177) || !unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[Local_401.f_0])) || !unk_0x7404950238A154C2(Global_67889.f_484[Local_401.f_0], 0)) || Local_401.f_0 == 21) || Local_401.f_0 == 22) || Local_401.f_0 == 23))
							{
								bVar176 = true;
								if ((((!iLocal_633 && Local_401.f_8.f_4 != func_133(iVar177)) || (!iLocal_633 && Local_401.f_0 == 21)) || (!iLocal_633 && Local_401.f_0 == 22)) || (!iLocal_633 && Local_401.f_0 == 23))
								{
									func_96("VEH_SELECT_CNFA", 0, 0);
									func_95(-1);
									func_94(201, "ITEM_YES", -1);
									func_94(202, "ITEM_NO", -1);
									iLocal_633 = 1;
									iVar177 = func_137() + 1;
								}
								else if (Local_401.f_6 == 3)
								{
									if (func_93(func_133(iVar177)))
									{
										iLocal_991 = func_133(iVar177);
										iLocal_631 = 0;
										iLocal_632 = 0;
										iLocal_625 = 0;
										iLocal_628++;
									}
									else
									{
										iLocal_990 = 1;
										iLocal_991 = func_133(iVar177);
										iLocal_628 = 99;
									}
								}
								else if (Local_401.f_6 == 0 && func_93(func_133(iVar177)))
								{
									iLocal_991 = func_133(iVar177);
									iLocal_631 = 0;
									iLocal_632 = 0;
									iLocal_625 = 0;
									iLocal_628++;
								}
								else
								{
									if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[Local_401.f_0]))
									{
										unk_0xD768713E73165208(Global_67889.f_484[Local_401.f_0], 0, 1);
										unk_0x5D00E836B6BE8693(&(Global_67889.f_484[Local_401.f_0]));
									}
									Var78.f_66 = func_133(iVar177);
									unk_0xF3148AAF69AF9CBC(&(Var78.f_77), 14);
									func_90(Local_401.f_0, &Var78, 0f, 0f, 0f, -1f, 145);
									func_89(Local_401.f_0);
									func_40(&(Local_401.f_8), Local_401.f_0);
									iVar177 = func_137() + 1;
									iLocal_632 = 1;
								}
							}
							iVar178++;
						}
						iVar177++;
					}
					if (!bVar176)
					{
						iVar177 = 0;
						while (iVar177 < Global_67889.f_592)
						{
							if (Global_67889.f_592[iVar177] != -1)
							{
								if ((func_132(Global_67889.f_592[iVar177], iLocal_646) && Global_98931.f_18731.f_1982[iLocal_646 /*939*/].f_626[Global_67889.f_592[iVar177]] == -15) && (Global_67889.f_592[iVar177] != 200 || !Global_98931.f_29522.f_7))
								{
									func_112(Global_67889.f_592[iVar177], &Var0, 0, iLocal_646);
									if (iLocal_619 == iVar178 && ((Local_401.f_8.f_4 != Var0.f_66 || !unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[Local_401.f_0])) || !unk_0x7404950238A154C2(Global_67889.f_484[Local_401.f_0], 0)))
									{
										bVar176 = true;
										if (!iLocal_633)
										{
											if (Local_401.f_6 == 3)
											{
												func_96("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_96("VEH_SELECT_CNFA", 0, 0);
											}
											func_95(-1);
											func_94(201, "ITEM_YES", -1);
											func_94(202, "ITEM_NO", -1);
											iLocal_633 = 1;
											iVar177 = Global_67889.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_628 = 3;
											iLocal_632 = 1;
											iVar177 = Global_67889.f_592 + 1;
										}
										else
										{
											if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[Local_401.f_0]))
											{
												unk_0xD768713E73165208(Global_67889.f_484[Local_401.f_0], 0, 1);
												unk_0x5D00E836B6BE8693(&(Global_67889.f_484[Local_401.f_0]));
											}
											func_112(Global_67889.f_592[iVar177], &Var0, 0, iLocal_646);
											unk_0xF3148AAF69AF9CBC(&(Var0.f_77), 14);
											if (unk_0x1699D7B95446F15C(Var0.f_66))
											{
												unk_0xF3148AAF69AF9CBC(&(Var0.f_77), 22);
											}
											func_90(Local_401.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
											func_89(Local_401.f_0);
											func_40(&(Local_401.f_8), Local_401.f_0);
											iVar177 = Global_67889.f_592 + 1;
											iLocal_632 = 1;
										}
									}
									iVar178++;
								}
							}
							iVar177++;
						}
					}
				}
				else if (unk_0xB93E207B3C65F1B1(2, 202) || unk_0xB93E207B3C65F1B1(2, 238))
				{
					unk_0x35D7948F61AA3FEC(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (iLocal_633)
					{
						iLocal_634 = 1;
						iLocal_633 = 0;
					}
					else
					{
						iLocal_628 = 99;
					}
				}
			}
			unk_0xD61D5795530D0627();
			if (iLocal_634)
			{
				func_96("", 0, 0);
				func_95(-1);
				func_94(201, "ITEM_SELECT", -1);
				func_94(202, "ITEM_EXIT", -1);
				iLocal_633 = 0;
				iLocal_634 = 0;
			}
			func_53(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 3:
			if (!iLocal_631 || iLocal_632)
			{
				func_124(0);
				func_123(1, 0, 0, 0, 0);
				func_122(1, 1, 1, 1, 1);
				iVar180 = 0;
				while (iVar180 < iLocal_626)
				{
					iLocal_626[iVar180] = 0;
					iVar180++;
				}
				func_121("WEB_VEH_TITLE2");
				iVar180 = 0;
				while (iVar180 < 25)
				{
					StringCopy(&Var181, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var181, iVar180, 16);
					func_109(iVar180, &Var181, 0, 1, 0, 0);
					unk_0xF3148AAF69AF9CBC(&(iLocal_626[(iVar180 / 32)]), (iVar180 % 32));
					iVar180++;
				}
				if (Local_648.f_12 == 0)
				{
					iLocal_625 = Global_98931.f_29631.f_313[200];
				}
				else if (Local_648.f_12 == 1)
				{
					iLocal_625 = Global_98931.f_29631.f_626[200];
				}
				else
				{
					iLocal_625 = Global_98931.f_29631.f_939[200];
				}
				func_102(iLocal_625, 1, 1);
				iLocal_634 = 1;
				iLocal_632 = 0;
				iLocal_631 = 1;
			}
			else
			{
				iVar157 = 0;
				if (unk_0x913B1C01C1BA6C6F())
				{
					if (unk_0x2705BD3DB0D294CB(2))
					{
						unk_0xDE1125A413AF241C(0, 1, 1);
						unk_0xDE1125A413AF241C(0, 2, 1);
						unk_0xF333CEFDC2923B24(0, 237, 1);
						unk_0xF333CEFDC2923B24(0, 238, 1);
						unk_0xF333CEFDC2923B24(0, 241, 1);
						unk_0xF333CEFDC2923B24(0, 242, 1);
						func_99(0, 0, 0, 1);
						func_98(0, -1);
						if (func_97())
						{
							if (Global_2549109 != iLocal_625)
							{
								unk_0x35D7948F61AA3FEC(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_625 = Global_2549109;
								func_102(iLocal_625, 1, 1);
								iLocal_634 = 1;
							}
							else
							{
								iVar157 = 1;
							}
						}
					}
				}
				if (unk_0x093DEAE9A023FAA0(2, 188) || unk_0x093DEAE9A023FAA0(2, 241))
				{
					iLocal_634 = 1;
					unk_0x35D7948F61AA3FEC(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar185 = (iLocal_625 - 1);
					while (iVar185 >= 0)
					{
						if (unk_0x236D8AD7EE179F46(iLocal_626[(iVar185 / 32)], (iVar185 % 32)))
						{
							iLocal_625 = iVar185;
							bVar186 = true;
							iVar185 = 0;
						}
						iVar185 = (iVar185 + -1);
					}
					if (!bVar186)
					{
						iVar185 = 31;
						while (iVar185 >= iLocal_625 + 1)
						{
							if (unk_0x236D8AD7EE179F46(iLocal_626[(iVar185 / 32)], (iVar185 % 32)))
							{
								iLocal_625 = iVar185;
								bVar186 = true;
								iVar185 = iLocal_625;
							}
							iVar185 = (iVar185 + -1);
						}
					}
					if (bVar186)
					{
						func_102(iLocal_625, 1, 1);
					}
				}
				else if (unk_0x093DEAE9A023FAA0(2, 187) || unk_0x093DEAE9A023FAA0(2, 242))
				{
					iLocal_634 = 1;
					unk_0x35D7948F61AA3FEC(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar187 = iLocal_625 + 1;
					while (iVar187 <= 31)
					{
						if (unk_0x236D8AD7EE179F46(iLocal_626[(iVar187 / 32)], (iVar187 % 32)))
						{
							iLocal_625 = iVar187;
							bVar188 = true;
							iVar187 = 31;
						}
						iVar187++;
					}
					if (!bVar188)
					{
						iVar187 = 0;
						while (iVar187 <= (iLocal_625 - 1))
						{
							if (unk_0x236D8AD7EE179F46(iLocal_626[(iVar187 / 32)], (iVar187 % 32)))
							{
								iLocal_625 = iVar187;
								bVar188 = true;
								iVar187 = iLocal_625;
							}
							iVar187++;
						}
					}
					if (bVar188)
					{
						func_102(iLocal_625, 1, 1);
					}
				}
				else if (unk_0xB93E207B3C65F1B1(2, 201) || iVar157 == 1)
				{
					iVar157 = 0;
					unk_0x35D7948F61AA3FEC(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[Local_401.f_0]))
					{
						unk_0xD768713E73165208(Global_67889.f_484[Local_401.f_0], 0, 1);
						unk_0x5D00E836B6BE8693(&(Global_67889.f_484[Local_401.f_0]));
					}
					uVar189 = iLocal_625 + 1;
					if (iLocal_646 == 0)
					{
						Global_98931.f_29631.f_313[200] = uVar189;
					}
					else if (iLocal_646 == 1)
					{
						Global_98931.f_29631.f_626[200] = uVar189;
					}
					else if (iLocal_646 == 2)
					{
						Global_98931.f_29631.f_939[200] = uVar189;
					}
					func_112(200, &Var0, 0, iLocal_646);
					unk_0xF3148AAF69AF9CBC(&(Var0.f_77), 14);
					if (unk_0x1699D7B95446F15C(Var0.f_66))
					{
						unk_0xF3148AAF69AF9CBC(&(Var0.f_77), 22);
					}
					func_90(Local_401.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
					func_89(Local_401.f_0);
					func_40(&(Local_401.f_8), Local_401.f_0);
					iLocal_632 = 1;
					iLocal_628 = 2;
				}
				else if (unk_0xB93E207B3C65F1B1(2, 202) || unk_0xB93E207B3C65F1B1(2, 238))
				{
					unk_0x35D7948F61AA3FEC(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iLocal_631 = 0;
					iLocal_632 = 0;
					iLocal_628 = (iLocal_628 - 1);
				}
			}
			unk_0xD61D5795530D0627();
			if (iLocal_634)
			{
				func_96("", 0, 0);
				func_95(-1);
				func_94(201, "ITEM_SELECT", -1);
				func_94(202, "ITEM_EXIT", -1);
				iLocal_633 = 0;
				iLocal_634 = 0;
			}
			func_53(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
			}
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				if (unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
				{
					if (!unk_0x7103553C0CEF1170())
					{
						unk_0x89540DDA99D7346F(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 1);
					}
				}
			}
			func_50(1, -1);
			iLocal_628 = 0;
			func_48(&iLocal_629);
			iLocal_629 = -1;
			break;
	}
	if (!bVar156 && unk_0xA83A609D74168B30())
	{
		if (!unk_0xB318FDA0D1ABDB20(&cLocal_993))
		{
			if ((((func_130("HANGAR_NO") || func_130("MARINA_NO")) || func_130("HELIPAD_NO")) || func_130("CAR_GAR_NO_1")) || func_130("CAR_GAR_NO_2"))
			{
				unk_0xB8BB626315D394F5(1);
			}
			StringCopy(&cLocal_993, "", 16);
		}
	}
}

void func_48(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_49(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36143[iVar0 /*19*/])
		{
			Global_36143[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_49(int iParam0)
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
		if (Global_36143[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_50(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_52(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17238.f_7707)
	{
		unk_0x5547446287DE314B(15);
		Global_17238.f_7707 = 0;
	}
	unk_0x97925E0DE42EFC5C(0f);
	if (Global_17238.f_5386[iVar0])
	{
		unk_0xBEE99C97A1B87F95(9, 0);
		Global_17238.f_5386[iVar0] = 0;
	}
	if (Global_17238.f_5379[iVar0])
	{
		unk_0x9B331DCFDFC55491("CommonMenu");
		Global_17238.f_5379[iVar0] = 0;
	}
	if (bParam0)
	{
		func_51(&(Global_17238.f_5418[iVar0 /*10*/]));
		Global_17238.f_5479[iVar0] = 0;
	}
	else
	{
		Global_17238.f_5479[iVar0] = 0;
	}
}

void func_51(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xCC8E3BAC62A29F42(*uParam0))
		{
			unk_0x4B6F01DE8CCE643E(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_52(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x1C6DF6AD69BE853E() && unk_0xA360A5024482E898())
		{
			iParam2 = unk_0xC74204D062B48807();
		}
	}
	StringCopy(&cVar0, unk_0x11CA2334E341B424(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x8DAF7A748E41AD46(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17238.f_5479[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17238.f_5479[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17238.f_5479[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_53(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	float fVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_52(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_86(0, bParam6))
	{
		return;
	}
	unk_0x700CD125EC59941D(76, 84);
	unk_0x931DC442937495CF(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17238)
	{
		if (func_84(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17238 = 0;
		}
	}
	if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_1)) == unk_0x8DAF7A748E41AD46("HIDE"))
	{
		fVar56 = Global_17236;
	}
	else
	{
		fVar56 = (((Global_17236 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17237;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		unk_0x510185F6AA2AE89F(&iVar57, &iVar58);
		fVar60 = unk_0xA32FB34BA4B9C4AA(0);
		if (func_83())
		{
			iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) * fVar60));
		}
		fVar61 = (unk_0xBBDA792448DB5A89(iVar57) / unk_0xBBDA792448DB5A89(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_83())
		{
			fVar59 = 1f;
		}
		iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar57) / fVar59));
		iVar58 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) / fVar59));
	}
	else
	{
		unk_0xF8BA71207732310A(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17238.f_5486)
		{
			if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_1)) == unk_0x8DAF7A748E41AD46("HIDE"))
			{
				fVar49 = Global_17236;
			}
			else
			{
				if (Global_17238)
				{
					unk_0xE31E1C3DC82BAC87(func_82(29), func_80(29, 1), (Global_17235 + (fParam5 * 0.5f)), (Global_17236 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17238.f_7677)
				{
					iVar1 = Global_17238.f_7673;
					iVar2 = Global_17238.f_7674;
					iVar3 = Global_17238.f_7675;
					iVar4 = Global_17238.f_7676;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_79(Global_17235, (Global_17236 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17236 + fVar55) + 0.034722f) + 0f);
				if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_1)) != 0)
				{
					func_78();
					unk_0xA004CFE21CA812EA(&(Global_17238.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17238.f_68)
					{
						if (Global_17238.f_5[iVar14] == 2)
						{
							unk_0x6D55FF05D62B91BC(Global_17238.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17238.f_5[iVar14] == 3)
						{
							unk_0xB6F6A8755E3C6180(Global_17238.f_14[iVar16], Global_17238.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17238.f_5[iVar14] == 1)
						{
							unk_0x072D7B028D6C7A05(&(Global_17238.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17238.f_5[iVar14] == 8)
						{
							unk_0x072D7B028D6C7A05(&(Global_17238.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17238.f_5[iVar14] == 5)
						{
							unk_0x6222A57F463E8EE7(&(Global_17238.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17238.f_5[iVar14] == 6)
						{
							unk_0x072D7B028D6C7A05(&(Global_17238.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17238.f_5[iVar14] == 7)
						{
							unk_0x6222A57F463E8EE7(&(Global_17238.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x834054753F171911((Global_17235 + 0.00390625f), ((Global_17236 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17238.f_5489 > Global_17238.f_4999)
				{
					if (Global_17238.f_5492 != 0)
					{
						func_78();
						func_76((((Global_17235 + fParam5) - 0.00390625f) - func_77("CM_ITEM_COUNT", Global_17238.f_5492, Global_17238.f_5491)), ((Global_17236 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17238.f_5492, Global_17238.f_5491);
					}
				}
			}
			iVar6 = Global_17238.f_5493;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17238.f_7687)
			{
				iVar1 = Global_17238.f_7683;
				iVar2 = Global_17238.f_7684;
				iVar3 = Global_17238.f_7685;
				iVar4 = Global_17238.f_7686;
			}
			else
			{
				unk_0xDFC297A2CE47E495(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17238.f_4999 && iVar6 <= Global_17238.f_4992)
			{
				if (iVar6 >= 0)
				{
					if (Global_17238.f_5253[iVar6])
					{
						if (Global_17238.f_5127[iVar6] && iVar6 != Global_17238.f_5493)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17238.f_5500[iVar6] != 0f)
						{
							fVar54 = Global_17238.f_5500[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17238.f_4992 <= 1)
					{
						Global_17238.f_4992++;
					}
					iVar52 = 1;
				}
			}
			unk_0xE31E1C3DC82BAC87("CommonMenu", "Gradient_Bgd", (Global_17235 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17238.f_5489 > Global_17238.f_4999)
			{
				if (Global_17238.f_7692)
				{
					iVar1 = Global_17238.f_7688;
					iVar2 = Global_17238.f_7689;
					iVar3 = Global_17238.f_7690;
					iVar4 = Global_17238.f_7691;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_79(Global_17235, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x71E755E29C4DCADF("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17238.f_7705)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xDFC297A2CE47E495(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE31E1C3DC82BAC87("CommonMenu", "shop_arrows_upANDdown", (Global_17235 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar59), ((Var37.f_1 / 720f) * fVar59), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_4469)) != 0 && Global_17238.f_4543 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17235 + 0.0046875f);
				if (Global_17238.f_4545 != 0)
				{
					func_84(Global_17238.f_4545, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17235 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_75(fVar41);
				unk_0x1F1C628562B7BD8A(&(Global_17238.f_4469));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17238.f_4539)
				{
					if (Global_17238.f_4473[iVar14] == 2)
					{
						unk_0x6D55FF05D62B91BC(Global_17238.f_4478[iVar15]);
						iVar15++;
					}
					else if (Global_17238.f_4473[iVar14] == 3)
					{
						unk_0xB6F6A8755E3C6180(Global_17238.f_4482[iVar16], Global_17238.f_4486[iVar16]);
						iVar16++;
					}
					else if (Global_17238.f_4473[iVar14] == 1)
					{
						unk_0x072D7B028D6C7A05(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 5)
					{
						unk_0x6222A57F463E8EE7(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 6)
					{
						unk_0x072D7B028D6C7A05(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 7)
					{
						unk_0x6222A57F463E8EE7(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x78C28B5B2055F149(fVar41, (fVar49 + 0.00277776f));
				unk_0xDFC297A2CE47E495(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_79(Global_17235, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17238.f_7697)
				{
					iVar1 = Global_17238.f_7693;
					iVar2 = Global_17238.f_7694;
					iVar3 = Global_17238.f_7695;
					iVar4 = Global_17238.f_7696;
				}
				else
				{
					unk_0xDFC297A2CE47E495(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE31E1C3DC82BAC87("CommonMenu", "Gradient_Bgd", (Global_17235 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9885727BF51C57B4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9885727BF51C57B4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_75(fVar41);
				unk_0xA004CFE21CA812EA(&(Global_17238.f_4469));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17238.f_4539)
				{
					if (Global_17238.f_4473[iVar14] == 2)
					{
						unk_0x6D55FF05D62B91BC(Global_17238.f_4478[iVar15]);
						iVar15++;
					}
					else if (Global_17238.f_4473[iVar14] == 3)
					{
						unk_0xB6F6A8755E3C6180(Global_17238.f_4482[iVar16], Global_17238.f_4486[iVar16]);
						iVar16++;
					}
					else if (Global_17238.f_4473[iVar14] == 1)
					{
						unk_0x072D7B028D6C7A05(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 5)
					{
						unk_0x6222A57F463E8EE7(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 6)
					{
						unk_0x072D7B028D6C7A05(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 7)
					{
						unk_0x6222A57F463E8EE7(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 8)
					{
						unk_0x072D7B028D6C7A05(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x834054753F171911(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17238.f_4545 != 0)
				{
					func_84(Global_17238.f_4545, 1, 1, &fVar35, &fVar36, bParam7);
					func_74(Global_17238.f_4545, 1, &iVar46, &iVar47, &iVar48);
					unk_0xE31E1C3DC82BAC87(func_82(Global_17238.f_4545), func_80(Global_17238.f_4545, 1), ((Global_17235 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9885727BF51C57B4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17238.f_4543 > 0)
				{
					if ((unk_0x48E480685981C7D4() - Global_17238.f_4544) > Global_17238.f_4543)
					{
						StringCopy(&(Global_17238.f_4469), "", 16);
						Global_17238.f_4543 = -1;
					}
				}
			}
			if (unk_0x8DAF7A748E41AD46(&(Global_2549033.f_21)) != 0 && Global_2549033.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17235 + 0.0046875f);
				if (Global_2549033.f_67 != 0)
				{
					func_84(Global_2549033.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17235 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_75(fVar41);
				unk_0x1F1C628562B7BD8A(&(Global_2549033.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2549033.f_61)
				{
					if (Global_2549033.f_25[iVar14] == 2)
					{
						unk_0x6D55FF05D62B91BC(Global_2549033.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2549033.f_25[iVar14] == 3)
					{
						unk_0xB6F6A8755E3C6180(Global_2549033.f_34[iVar16], Global_2549033.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2549033.f_25[iVar14] == 1)
					{
						unk_0x072D7B028D6C7A05(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 5)
					{
						unk_0x6222A57F463E8EE7(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 6)
					{
						unk_0x072D7B028D6C7A05(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 7)
					{
						unk_0x6222A57F463E8EE7(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 8)
					{
						unk_0x072D7B028D6C7A05(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x78C28B5B2055F149(fVar41, (fVar49 + 0.00277776f));
				unk_0xDFC297A2CE47E495(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_79(Global_17235, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17238.f_7697)
				{
					iVar1 = Global_17238.f_7693;
					iVar2 = Global_17238.f_7694;
					iVar3 = Global_17238.f_7695;
					iVar4 = Global_17238.f_7696;
				}
				else
				{
					unk_0xDFC297A2CE47E495(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE31E1C3DC82BAC87("CommonMenu", "Gradient_Bgd", (Global_17235 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9885727BF51C57B4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9885727BF51C57B4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_75(fVar41);
				unk_0xA004CFE21CA812EA(&(Global_2549033.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2549033.f_61)
				{
					if (Global_2549033.f_25[iVar14] == 2)
					{
						unk_0x6D55FF05D62B91BC(Global_2549033.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2549033.f_25[iVar14] == 3)
					{
						unk_0xB6F6A8755E3C6180(Global_2549033.f_34[iVar16], Global_2549033.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2549033.f_25[iVar14] == 1)
					{
						unk_0x072D7B028D6C7A05(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 8)
					{
						unk_0x072D7B028D6C7A05(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 5)
					{
						unk_0x6222A57F463E8EE7(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 6)
					{
						unk_0x072D7B028D6C7A05(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 7)
					{
						unk_0x6222A57F463E8EE7(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x834054753F171911(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2549033.f_67 != 0)
				{
					func_84(Global_2549033.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_74(Global_2549033.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xE31E1C3DC82BAC87(func_82(Global_2549033.f_67), func_80(Global_2549033.f_67, 1), ((Global_17235 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9885727BF51C57B4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2549033.f_65 > 0)
				{
					if ((unk_0x48E480685981C7D4() - Global_2549033.f_66) > Global_2549033.f_65)
					{
						StringCopy(&(Global_2549033.f_21), "", 16);
						Global_2549033.f_65 = -1;
					}
				}
			}
			func_66(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x700CD125EC59941D(76, 84);
			unk_0x931DC442937495CF(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17238.f_5486)
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
			iVar63 = Global_17238.f_4992;
			if (Global_17238.f_5487)
			{
				iVar63 = (Global_17238.f_5490 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17238.f_5500[iVar6] != 0f)
				{
					fVar54 = Global_17238.f_5500[iVar6];
				}
				if (Global_17238.f_5487)
				{
					iVar6 = Global_17238.f_7333[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17238.f_5493 && iVar9 < Global_17238.f_4999)
				{
					bVar32 = true;
					if (Global_17238.f_5494 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17238.f_5127[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17238.f_5631[iVar6] = fVar34;
				fVar33 = (Global_17235 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17238.f_5494 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17238.f_7699)
					{
						unk_0xDFC297A2CE47E495(Global_17238.f_7698, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0xDFC297A2CE47E495(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0xE31E1C3DC82BAC87("CommonMenu", "Gradient_Nav", (Global_17235 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17238.f_5629 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_64(bVar31, 1, 0, 0, 0, 0);
					unk_0xA004CFE21CA812EA("DFLT_MNU_OPT");
					unk_0x834054753F171911(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17238.f_5000)
					{
						if (unk_0x236D8AD7EE179F46(Global_17238.f_4866[iVar6], iVar8) || Global_17238.f_4833[iVar8] == 5)
						{
							if (Global_17238.f_5487)
							{
								iVar19 = Global_17238.f_7344[((iVar9 * Global_17238.f_5000) + iVar8)];
								iVar20 = Global_17238.f_7385[((iVar9 * Global_17238.f_5000) + iVar8)];
								iVar21 = Global_17238.f_7426[((iVar9 * Global_17238.f_5000) + iVar8)];
								iVar22 = Global_17238.f_7467[((iVar9 * Global_17238.f_5000) + iVar8)];
								iVar23 = Global_17238.f_7508[((iVar9 * Global_17238.f_5000) + iVar8)];
							}
							else
							{
								Global_17238.f_7344[((iVar9 * Global_17238.f_5000) + iVar8)] = iVar19;
								Global_17238.f_7385[((iVar9 * Global_17238.f_5000) + iVar8)] = iVar20;
								Global_17238.f_7426[((iVar9 * Global_17238.f_5000) + iVar8)] = iVar21;
								Global_17238.f_7467[((iVar9 * Global_17238.f_5000) + iVar8)] = iVar22;
								Global_17238.f_7508[((iVar9 * Global_17238.f_5000) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17238.f_5760[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17238.f_5757[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17238.f_5760[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17238.f_5757[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17238.f_4839[iVar8] != -1f)
							{
								fVar33 = ((Global_17235 + 0.0046875f) + Global_17238.f_4839[iVar8]);
							}
							if ((iVar8 < 4 && Global_17238.f_4839[iVar8 + 1] != -1f) && fVar33 < Global_17238.f_4839[iVar8 + 1])
							{
								fVar45 = (Global_17238.f_4839[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17235 + Global_17237) - 0.0046875f) - fVar33);
							}
							if ((Global_17238.f_4852[iVar8] && Global_17238.f_5626) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17238.f_4833[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17238.f_5487)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 5 || Global_17238.f_2076[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_64(bVar31, Global_17238.f_1574[iVar24], Global_17238.f_1825[iVar24], bVar53, iVar70, bVar50);
												unk_0xB865D57D92832050(&(Global_17238.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x072D7B028D6C7A05(&(Global_17238.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x072D7B028D6C7A05(&(Global_17238.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x6222A57F463E8EE7(&(Global_2437099[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x072D7B028D6C7A05(&(Global_2437099[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x6222A57F463E8EE7(&(Global_2437099[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x6D55FF05D62B91BC(Global_17238.f_3840[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB6F6A8755E3C6180(Global_17238.f_4091[(iVar21 + iVar27)], Global_17238.f_4217[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0x0239B891C698A437(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_84(Global_17238.f_4343[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17238.f_4343[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17238.f_4860[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17238.f_4860[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar41;
											Global_17238.f_7590[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar42;
											Global_17238.f_7631[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)];
											fVar42 = Global_17238.f_7590[((iVar9 * Global_17238.f_5000) + iVar8)];
											fVar43 = Global_17238.f_7631[((iVar9 * Global_17238.f_5000) + iVar8)];
										}
										if (bVar51)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17238.f_4860[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE31E1C3DC82BAC87(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE31E1C3DC82BAC87(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 5 || Global_17238.f_2076[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_64(bVar31, Global_17238.f_1574[iVar24], Global_17238.f_1825[iVar24], bVar53, 0, bVar50);
											if (Global_17238.f_7703 && Global_17238.f_7704 == iVar6)
											{
												func_63(bVar31);
											}
											unk_0xA004CFE21CA812EA(&(Global_17238.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x072D7B028D6C7A05(&(Global_17238.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x072D7B028D6C7A05(&(Global_17238.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6222A57F463E8EE7(&(Global_2437099[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x072D7B028D6C7A05(&(Global_2437099[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6222A57F463E8EE7(&(Global_2437099[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6D55FF05D62B91BC(Global_17238.f_3840[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB6F6A8755E3C6180(Global_17238.f_4091[(iVar21 + iVar27)], Global_17238.f_4217[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17238.f_4343[(iVar22 + iVar28)] == 2)
												{
													if (func_84(Global_17238.f_4343[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_84(Global_17238.f_4343[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_74(Global_17238.f_4343[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17238.f_4860[iVar8] == 2)
															{
																unk_0xE31E1C3DC82BAC87(func_82(Global_17238.f_4343[(iVar22 + iVar28)]), func_80(Global_17238.f_4343[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xE31E1C3DC82BAC87(func_82(Global_17238.f_4343[(iVar22 + iVar28)]), func_80(Global_17238.f_4343[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17238.f_4860[iVar8] == 2)
											{
												unk_0x834054753F171911(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x834054753F171911((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17238.f_4343[(iVar22 + iVar14)] != 2)
												{
													if (func_84(Global_17238.f_4343[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_84(Global_17238.f_4343[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_74(Global_17238.f_4343[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17238.f_4343[(iVar22 + iVar14)] == 30)
															{
																unk_0xE31E1C3DC82BAC87(func_82(Global_17238.f_4343[(iVar22 + iVar14)]), func_80(Global_17238.f_4343[(iVar22 + iVar14)], bVar31), (Global_17235 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17238.f_4860[iVar8] == 2)
															{
																unk_0xE31E1C3DC82BAC87(func_82(Global_17238.f_4343[(iVar22 + iVar14)]), func_80(Global_17238.f_4343[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xE31E1C3DC82BAC87(func_82(Global_17238.f_4343[(iVar22 + iVar14)]), func_80(Global_17238.f_4343[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17238.f_5487)
										{
											func_64(bVar31, Global_17238.f_1574[iVar24], Global_17238.f_1825[iVar24], bVar53, 0, 0);
											if (Global_17238.f_7703 && Global_17238.f_7704 == iVar6)
											{
												func_63(bVar31);
											}
											unk_0xB865D57D92832050("NUMBER");
											unk_0x6D55FF05D62B91BC(Global_17238.f_3840[iVar20]);
											fVar42 = unk_0x0239B891C698A437(1);
											fVar41 = 0f;
											if (Global_17238.f_4860[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17238.f_4860[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar41;
											Global_17238.f_7590[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)];
											fVar42 = Global_17238.f_7590[((iVar9 * Global_17238.f_5000) + iVar8)];
										}
										if (bVar51)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17238.f_4860[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE31E1C3DC82BAC87(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE31E1C3DC82BAC87(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_64(bVar31, Global_17238.f_1574[iVar24], Global_17238.f_1825[iVar24], bVar53, 0, 0);
										func_62((fVar33 + fVar41), fVar34, "NUMBER", Global_17238.f_3840[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17238.f_5487)
										{
											func_64(bVar31, Global_17238.f_1574[iVar24], Global_17238.f_1825[iVar24], bVar53, 0, 0);
											if (Global_17238.f_7703 && Global_17238.f_7704 == iVar6)
											{
												func_63(bVar31);
											}
											unk_0xB865D57D92832050("NUMBER");
											unk_0xB6F6A8755E3C6180(Global_17238.f_4091[iVar21], Global_17238.f_4217[iVar21]);
											fVar42 = unk_0x0239B891C698A437(1);
											fVar41 = 0f;
											if (Global_17238.f_4860[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17238.f_4860[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar41;
											Global_17238.f_7590[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)];
											fVar42 = Global_17238.f_7590[((iVar9 * Global_17238.f_5000) + iVar8)];
										}
										if (bVar51)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17238.f_4860[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE31E1C3DC82BAC87(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE31E1C3DC82BAC87(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_64(bVar31, Global_17238.f_1574[iVar24], Global_17238.f_1825[iVar24], bVar53, 0, 0);
										func_61((fVar33 + fVar41), fVar34, "NUMBER", Global_17238.f_4091[iVar21], Global_17238.f_4217[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_84(Global_17238.f_4343[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17238.f_5487)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17238.f_4860[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17238.f_4860[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar41;
												Global_17238.f_7631[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)];
												fVar43 = Global_17238.f_7631[((iVar9 * Global_17238.f_5000) + iVar8)];
											}
											if (bVar51)
											{
												if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17238.f_4860[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_74(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xE31E1C3DC82BAC87(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_74(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xE31E1C3DC82BAC87(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_84(Global_17238.f_4343[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_74(Global_17238.f_4343[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xE31E1C3DC82BAC87(func_82(Global_17238.f_4343[iVar22]), func_80(Global_17238.f_4343[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_60(Global_17238.f_4343[iVar22])), (fVar36 * func_60(Global_17238.f_4343[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
							if (Global_17238.f_4833[iVar8] == 5)
							{
								if (Global_17238.f_4845[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17238.f_4845[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17238.f_4845[iVar8]);
								if (Global_17238.f_4852[iVar8])
								{
									if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17238.f_4845[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17238.f_7333[iVar9] = iVar6;
						Global_17238.f_5495 = iVar6;
						iVar9++;
						if (Global_17238.f_5127[iVar6])
						{
							iVar13++;
						}
						if (Global_17238.f_5500[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17238.f_5500[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17238.f_5486)
					{
						Global_17238.f_5253[iVar6] = 1;
						if (Global_17238.f_5001[iVar6])
						{
							if (bVar31)
							{
								Global_17238.f_5492 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17238.f_5492 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17238.f_5486)
			{
				Global_17238.f_5488 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17238.f_5491 = iVar11;
				Global_17238.f_5489 = iVar10;
				Global_17238.f_5486 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17238.f_5487)
	{
		Global_17238.f_5490 = iVar9;
		Global_17238.f_5487 = 1;
	}
	Global_17238.f_5628 = fVar49;
	Global_17238.f_5630 = unk_0x48E480685981C7D4();
	unk_0x97925E0DE42EFC5C(Global_17238.f_5628);
	if (!Global_17238.f_7672)
	{
		func_55();
	}
	Global_17238.f_7672 = 0;
	if (bParam2)
	{
		unk_0xC9A352663D97EFC3(10);
	}
	unk_0xC9A352663D97EFC3(6);
	unk_0xC9A352663D97EFC3(7);
	unk_0xC9A352663D97EFC3(9);
	unk_0xC9A352663D97EFC3(8);
	if (bParam0)
	{
		func_54(1);
	}
	unk_0x94CD3CDE7BD3510B();
}

void func_54(int iParam0)
{
	Global_1336084.f_932 = iParam0;
}

void func_55()
{
	if (!Global_14394.f_1 == 1)
	{
		if (func_59(0))
		{
			func_56(0);
		}
		unk_0xF3148AAF69AF9CBC(&Global_2265, 2);
	}
}

void func_56(int iParam0)
{
	if (Global_14552)
	{
		func_58(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_57())
	{
		Global_14394.f_1 = 3;
	}
}

int func_57()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_59(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_59(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

float func_60(int iParam0)
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
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_61(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xA004CFE21CA812EA(sParam2);
	unk_0xB6F6A8755E3C6180(uParam3, uParam4);
	unk_0x834054753F171911(fParam0, fParam1, 0);
}

void func_62(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xA004CFE21CA812EA(sParam2);
	unk_0x6D55FF05D62B91BC(iParam3);
	unk_0x834054753F171911(fParam0, fParam1, iParam4);
}

void func_63(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xDFC297A2CE47E495(Global_17238.f_7700[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xDFC297A2CE47E495(Global_17238.f_7700[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, 255);
}

void func_64(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_65(Global_17238.f_5760[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xDFC297A2CE47E495(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xDFC297A2CE47E495(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xDFC297A2CE47E495(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x00793A77639A3BAC(155, 155, 155, 255);
		}
		else
		{
			unk_0x00793A77639A3BAC(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x00793A77639A3BAC(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xDFC297A2CE47E495(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x00793A77639A3BAC(155, 155, 155, 255);
	}
	else
	{
		unk_0x00793A77639A3BAC(155, 155, 155, 255);
	}
	unk_0x73984E9D23C977BA(0f, 0.35f);
	unk_0x52B16DD1F847B2B9(1);
	if (bParam5)
	{
		unk_0x73984E9D23C977BA(0f, 0.425f);
		unk_0x992C39DBBED35AE3(4);
	}
	else
	{
		unk_0x992C39DBBED35AE3(0);
	}
	unk_0xD90CB3CB1328F03F(0f, 1f);
	unk_0x2BE2394F62FC653A(0);
	unk_0xE927678D0258C5A3(0, 0, 0, 0, 0);
	unk_0x9218408BEDC82866(0, 0, 0, 0, 0);
}

void func_65(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_52(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_86(bParam4, bParam8))
	{
		return;
	}
	if (func_72())
	{
		return;
	}
	if (unk_0x18138B3C6FD07449())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_69(unk_0x1329891157A54C63(), 0))
		{
			return;
		}
	}
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x87E58291A874D55F() == 0 || unk_0x18138B3C6FD07449())
		{
			return;
		}
	}
	if (Global_17238.f_4546 != 0)
	{
		if (unk_0x34C16363C251572E(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17238.f_4546)
			{
				if (Global_17238.f_4803[iVar1] != 344)
				{
					StringCopy(&(Global_17238.f_4548[iVar1 /*16*/]), unk_0x2576ED87DB06844F(2, Global_17238.f_4803[iVar1], 1), 64);
				}
				else if (Global_17238.f_4816[iVar1] != 32)
				{
					StringCopy(&(Global_17238.f_4548[iVar1 /*16*/]), unk_0x2ABE9D86108310D2(2, Global_17238.f_4816[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17238.f_4547 = 0;
		}
		if (!Global_17238.f_4547)
		{
			unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x518198639630AE08((1f - (Global_17238.f_4858 / 100f)));
			unk_0xBA9BA6181F2B6111();
			if (unk_0x913B1C01C1BA6C6F())
			{
				unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x75A2A42ADE12FD0E(1);
				unk_0xBA9BA6181F2B6111();
			}
			iVar1 = 0;
			while (iVar1 < Global_17238.f_4546)
			{
				if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_4741[iVar1 /*4*/])) != unk_0x8DAF7A748E41AD46("PREV"))
				{
					unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xBD0C54D89298454E(iVar1);
					func_68(&(Global_17238.f_4548[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x8DAF7A748E41AD46(&(Global_17238.f_4741[iVar2 /*4*/])) == unk_0x8DAF7A748E41AD46("PREV"))
					{
						func_68(&(Global_17238.f_4548[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17238.f_4790[iVar1] == -1)
					{
						func_67(&(Global_17238.f_4741[iVar1 /*4*/]));
					}
					else
					{
						unk_0x6CE839BF5D87A428(&(Global_17238.f_4741[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x628846883063947B(iParam2, 70);
						}
						else
						{
							unk_0x6D55FF05D62B91BC(iParam2);
						}
						unk_0xC3822F70D0E7940B();
					}
					if (unk_0x913B1C01C1BA6C6F())
					{
						if (Global_17238.f_4803[iVar1] != 344 && unk_0x236D8AD7EE179F46(Global_17238.f_4829, iVar1))
						{
							unk_0x75A2A42ADE12FD0E(1);
							unk_0xBD0C54D89298454E(Global_17238.f_4803[iVar1]);
						}
						else
						{
							unk_0x75A2A42ADE12FD0E(0);
							unk_0xBD0C54D89298454E(344);
						}
					}
					unk_0xBA9BA6181F2B6111();
				}
				iVar1++;
			}
			if (unk_0x8DAF7A748E41AD46(&(Global_2549033.f_16)) != unk_0x8DAF7A748E41AD46(""))
			{
				unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xBD0C54D89298454E(Global_17238.f_4546);
				func_68(&Global_2549033);
				if (Global_2549033.f_20 == -1)
				{
					func_67(&(Global_2549033.f_16));
				}
				else
				{
					unk_0x6CE839BF5D87A428(&(Global_2549033.f_16));
					if (bParam5)
					{
						unk_0x628846883063947B(iParam2, 70);
					}
					else
					{
						unk_0x6D55FF05D62B91BC(iParam2);
					}
					unk_0xC3822F70D0E7940B();
				}
				unk_0xBA9BA6181F2B6111();
			}
			unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(80);
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17238.f_4859)
			{
				unk_0xBD0C54D89298454E(1);
			}
			else
			{
				unk_0xBD0C54D89298454E(0);
			}
			unk_0xBA9BA6181F2B6111();
			Global_17238.f_4547 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17238.f_4546)
		{
			if (Global_17238.f_4790[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xBD0C54D89298454E(iVar1);
					unk_0x6CE839BF5D87A428(&(Global_17238.f_4741[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x628846883063947B(iParam2, 70);
					}
					else
					{
						unk_0x6D55FF05D62B91BC(iParam2);
					}
					unk_0xC3822F70D0E7940B();
					unk_0xBA9BA6181F2B6111();
				}
			}
			iVar1++;
		}
		if (Global_2549033.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xBD0C54D89298454E(iVar1);
				unk_0x6CE839BF5D87A428(&(Global_2549033.f_16));
				if (bParam5)
				{
					unk_0x628846883063947B(iParam2, 70);
				}
				else
				{
					unk_0x6D55FF05D62B91BC(iParam2);
				}
				unk_0xC3822F70D0E7940B();
				unk_0xBA9BA6181F2B6111();
			}
		}
		unk_0x700CD125EC59941D(76, 66);
		unk_0x931DC442937495CF(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17238.f_7707)
			{
				unk_0xD43E234447A65E08(15, 0f, -0.0375f);
				Global_17238.f_7707 = 1;
			}
		}
		else if (Global_17238.f_7707)
		{
			unk_0x5547446287DE314B(15);
			Global_17238.f_7707 = 0;
		}
		unk_0x94CD3CDE7BD3510B();
		if (Global_17238.f_4832)
		{
			unk_0x700CD125EC59941D(82, 66);
			unk_0x931DC442937495CF(0f, 0f, 0f, 0f);
			unk_0xD45896EF84BD41C8(Global_17238.f_5418[iVar0 /*10*/], Global_17238.f_4830, Global_17238.f_4831, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x94CD3CDE7BD3510B();
		}
		else
		{
			unk_0x88188CE25DF2572C(Global_17238.f_5418[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_67(char[4] cParam0)
{
	unk_0x6CE839BF5D87A428(cParam0);
	unk_0xC3822F70D0E7940B();
}

void func_68(var uParam0)
{
	unk_0x1F704997074F9C16(uParam0);
}

bool func_69(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_70(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_70(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_71();
	}
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_71()
{
	return Global_1312729;
}

int func_72()
{
	struct<3> Var0;
	
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	if (func_73())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x2B4380FBF49E1B71(&Var0);
		if (Global_14339 == 0)
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

int func_73()
{
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_74(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0xDFC297A2CE47E495(1, iParam2, iParam3, iParam4, &uVar0);
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
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_75(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xDFC297A2CE47E495(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x992C39DBBED35AE3(0);
	unk_0x73984E9D23C977BA(0f, 0.35f);
	unk_0xDA5E01AA73A367E0(2);
	unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, iVar3);
	unk_0xD90CB3CB1328F03F(fParam0, ((Global_17235 + Global_17237) - 0.0046875f));
	unk_0x2BE2394F62FC653A(0);
	unk_0xE927678D0258C5A3(0, 0, 0, 0, 0);
	unk_0x9218408BEDC82866(0, 0, 0, 0, 0);
}

void func_76(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xA004CFE21CA812EA(sParam2);
	unk_0x6D55FF05D62B91BC(uParam3);
	unk_0x6D55FF05D62B91BC(uParam4);
	unk_0x834054753F171911(fParam0, fParam1, 0);
}

float func_77(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x4357449749A521B1(sParam0))
	{
		if (unk_0x8DAF7A748E41AD46(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_78();
	unk_0xB865D57D92832050(sParam0);
	unk_0x6D55FF05D62B91BC(uParam1);
	unk_0x6D55FF05D62B91BC(uParam2);
	return unk_0x0239B891C698A437(1);
}

void func_78()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xDFC297A2CE47E495(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17238.f_7682)
	{
		iVar0 = Global_17238.f_7678;
		iVar1 = Global_17238.f_7679;
		iVar2 = Global_17238.f_7680;
		iVar3 = Global_17238.f_7681;
	}
	unk_0x992C39DBBED35AE3(0);
	unk_0x73984E9D23C977BA(0f, 0.35f);
	unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, iVar3);
	unk_0xD90CB3CB1328F03F((Global_17235 + 0.0046875f), ((Global_17235 + Global_17237) - 0.0046875f));
	unk_0x2BE2394F62FC653A(0);
	unk_0xE927678D0258C5A3(0, 0, 0, 0, 0);
	unk_0x9218408BEDC82866(0, 0, 0, 0, 0);
}

void func_79(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x0AD1CA312687609D((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_80(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0xB318FDA0D1ABDB20(&(Global_17238.f_6548[iParam0 /*16*/])))
	{
		return func_81(&(Global_17238.f_6548[iParam0 /*16*/]));
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
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
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

var func_81(var uParam0)
{
	return uParam0;
}

char* func_82(int iParam0)
{
	if (!unk_0xB318FDA0D1ABDB20(&(Global_17238.f_5763[iParam0 /*16*/])))
	{
		return func_81(&(Global_17238.f_5763[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_83()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x510185F6AA2AE89F(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_82(iParam0);
	sVar1 = func_80(iParam0, bParam1);
	if (unk_0x8DAF7A748E41AD46(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x510185F6AA2AE89F(&iVar2, &iVar3);
			fVar5 = unk_0xA32FB34BA4B9C4AA(0);
			if (func_83())
			{
				iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar5));
			}
			fVar6 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_83())
			{
				fVar4 = 1f;
			}
			if (unk_0x968BF1C2C695B61A(joaat("director_mode")) > 0)
			{
				unk_0xF8BA71207732310A(&iVar2, &iVar3);
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0xF8BA71207732310A(&iVar2, &iVar3);
		}
		Var7 = { unk_0x71E755E29C4DCADF(uVar0, sVar1) };
		Var7.f_0 = (Var7.f_0 * (func_85(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_85(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.f_0 = (Var7.f_0 - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.f_0 = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xA8D3C47114E32A16() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17237)
			{
				*fParam4 = (*fParam4 * (Global_17237 / *fParam3));
				*fParam3 = Global_17237;
			}
		}
		return 1;
	}
	return 0;
}

float func_85(int iParam0)
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
			return 0.5f;
			break;
	}
	return 1f;
}

int func_86(bool bParam0, bool bParam1)
{
	if (Global_2422670.f_1324.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xECDEA377354CBDA4() || (func_88(8, -1) && func_87() != 64)) || (unk_0x37F19465A7165331() != 0 && !bParam1)) || (unk_0xF33755A765033580() && !bParam0)) || unk_0x110C7CC4965F4074()) || Global_69280) || Global_17238.f_7706) || unk_0x30D46D6512711A3E()) || Global_90861.f_1331)
	{
		return 0;
	}
	return 1;
}

int func_87()
{
	return Global_1315825;
}

bool func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_89(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_67889[iParam0] = 0;
	Global_67889.f_69[iParam0] = 0;
}

void func_90(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_40(&(Global_67889.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 10))
		{
			func_92(iParam0);
			func_91(uParam1, &(Global_98931.f_18731.f_69[Global_67889.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 11))
			{
				Global_98931.f_18731.f_1864[Global_67889.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_98931.f_18731.f_1934[Global_67889.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_98931.f_18731.f_1864[Global_67889.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_98931.f_18731.f_1934[Global_67889.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_98931.f_18731.f_1958[Global_67889.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_324(iParam0, 1);
		}
	}
}

void func_91(var uParam0, var uParam1)
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

void func_92(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_40(&(Global_67889.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_139[iParam0]))
		{
			unk_0xD768713E73165208(Global_67889.f_139[iParam0], 1, 1);
			unk_0xE0913C01F5C0CC3D(&(Global_67889.f_139[iParam0]));
			Global_67889.f_139[iParam0] = 0;
		}
		if (unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 13))
		{
			func_324(iParam0, 0);
		}
	}
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

void func_94(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x2576ED87DB06844F(2, iParam0, 1);
	if (Global_17238.f_4546 >= 12)
	{
		StringCopy(&Global_2549033, sVar0, 64);
		StringCopy(&(Global_2549033.f_16), sParam1, 16);
		Global_2549033.f_20 = iParam2;
		return;
		return;
	}
	unk_0xC69E84EBBD7166E6(&(Global_17238.f_4829), Global_17238.f_4546);
	StringCopy(&(Global_17238.f_4548[Global_17238.f_4546 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17238.f_4741[Global_17238.f_4546 /*4*/]), sParam1, 16);
	Global_17238.f_4790[Global_17238.f_4546] = iParam2;
	Global_17238.f_4803[Global_17238.f_4546] = iParam0;
	Global_17238.f_4816[Global_17238.f_4546] = 32;
	Global_17238.f_4546++;
}

void func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17238.f_4546 = 0;
	Global_17238.f_4547 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17238.f_4741[iVar0 /*4*/]), "", 16);
		Global_17238.f_4790[iVar0] = -1;
		Global_17238.f_4803[iVar0] = 344;
		Global_17238.f_4816[iVar0] = 32;
		iVar0++;
	}
	Global_17238.f_4829 = 0;
	StringCopy(&(Global_2549033.f_16), "", 16);
	Global_2549033.f_20 = -1;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (!func_52(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x75A2A42ADE12FD0E(0);
		unk_0xBA9BA6181F2B6111();
	}
}

void func_96(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17238.f_4469), sParam0, 16);
	Global_17238.f_4539 = 0;
	Global_17238.f_4540 = 0;
	Global_17238.f_4541 = 0;
	Global_17238.f_4542 = 0;
	Global_17238.f_4543 = iParam1;
	Global_17238.f_4544 = unk_0x48E480685981C7D4();
	Global_17238.f_4545 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17238.f_4473[iVar0] = 0;
		iVar0++;
	}
}

int func_97()
{
	if (unk_0x3D6272A8E1C449E9(2))
	{
		if (Global_2549109 > -1)
		{
			if (unk_0xB93E207B3C65F1B1(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_98(int iParam0, int iParam1)
{
	if (!unk_0x3D6272A8E1C449E9(2))
	{
		return 0;
	}
	if (unk_0xDB10DED5ABC4AA20() || unk_0x30D46D6512711A3E())
	{
		return 0;
	}
	unk_0xA5E37DF3441A38D9();
	if (Global_2549109 == -6)
	{
		unk_0xE2A7B0F0438F34BF(4);
		if (iParam0 && unk_0xCAD9951C953F5B2D(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2549109 = -1;
			return 0;
		}
	}
	if (((Global_2549109 > -1 || Global_2549109 == -3) || Global_2549109 == -2) || unk_0x6124DE9C08C85589())
	{
		unk_0xE2A7B0F0438F34BF(1);
		return 0;
	}
	if (Global_2549109 == -1 && iParam0)
	{
		if (unk_0xCAD9951C953F5B2D(2, 237))
		{
			unk_0xE2A7B0F0438F34BF(4);
			Global_2549109 = -6;
			return 1;
		}
		else
		{
			unk_0xE2A7B0F0438F34BF(3);
			return 0;
		}
	}
	unk_0xE2A7B0F0438F34BF(1);
	return 0;
}

void func_99(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0x3D6272A8E1C449E9(2))
	{
		Global_2549109 = -1;
		return;
	}
	unk_0x9F36937B9DA3321F(1);
	fVar0 = Global_17235;
	fVar2 = (fVar0 + Global_17237);
	fVar3 = Global_17238.f_5488;
	fVar1 = (Global_17238.f_5488 - (IntToFloat(Global_17238.f_5490) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17238.f_5490 < 1)
	{
		fVar1 = (Global_17238.f_5488 - 0.034722f);
	}
	unk_0x700CD125EC59941D(76, 84);
	unk_0x931DC442937495CF(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x2B04133D9C0E9617(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x2B04133D9C0E9617(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x94CD3CDE7BD3510B();
	func_101();
	if (Global_2549109 == -6)
	{
		return;
	}
	Global_2549109 = -1;
	fVar7 = Global_2549103;
	fVar8 = Global_2549104;
	if (Global_17238.f_5491 > Global_17238.f_5490)
	{
		if (((Global_2549103 >= fVar0 && Global_2549103 <= fVar2) && Global_2549104 >= fVar3) && Global_2549104 < (fVar3 + fVar6))
		{
			Global_2549109 = -2;
			if (bParam3)
			{
				func_100(0);
			}
			return;
		}
		if (((Global_2549103 >= fVar0 && Global_2549103 <= fVar2) && Global_2549104 >= (fVar3 + fVar6)) && Global_2549104 < (fVar3 + 0.034722f))
		{
			Global_2549109 = -3;
			if (bParam3)
			{
				func_100(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17238.f_5491 == -1)
		{
			Global_2549109 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17238.f_5490);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x700CD125EC59941D(76, 84);
				unk_0x931DC442937495CF(-0.05f, -0.05f, 0f, 0f);
				func_79(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17237, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x94CD3CDE7BD3510B();
			}
		}
		Global_2549109 = Global_17238.f_7333[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2549109 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2549109 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2549109 = -4;
		return;
	}
	Global_2549109 = -1;
}

void func_100(bool bParam0)
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
	fVar0 = Global_17235;
	fVar1 = Global_17238.f_5488;
	unk_0x700CD125EC59941D(76, 84);
	unk_0x931DC442937495CF(-0.05f, -0.05f, 0f, 0f);
	if (Global_2549109 == -2)
	{
		func_79(fVar0, fVar1, Global_17237, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2549109 == -3)
	{
		func_79(fVar0, (fVar1 + fVar2), Global_17237, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x94CD3CDE7BD3510B();
}

void func_101()
{
	Global_2549105 = Global_2549103;
	Global_2549106 = Global_2549104;
	Global_2549103 = unk_0xD7CD731653154101(2, 239);
	Global_2549104 = unk_0xD7CD731653154101(2, 240);
	Global_2549107 = (Global_2549103 - Global_2549105);
	Global_2549108 = (Global_2549104 - Global_2549106);
}

void func_102(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17238.f_5494 = iParam0;
	Global_17238.f_5626 = iParam2;
	if (Global_17238.f_5494 < Global_17238.f_5493)
	{
		Global_17238.f_5493 = Global_17238.f_5494;
	}
	else if ((Global_17238.f_5487 && Global_17238.f_5494 > Global_17238.f_5495) || (!Global_17238.f_5487 && Global_17238.f_5494 >= (Global_17238.f_5493 + Global_17238.f_4999)))
	{
		iVar0 = Global_17238.f_5493;
		while (iVar0 <= Global_17238.f_5494)
		{
			if (iVar0 >= 0 && iVar0 < 124)
			{
				if (Global_17238.f_4866[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17238.f_4999 && Global_17238.f_5493 < 125)
		{
			Global_17238.f_5493++;
			iVar1 = 0;
			iVar0 = Global_17238.f_5493;
			while (iVar0 <= Global_17238.f_5494)
			{
				if (iVar0 >= 0 && iVar0 < 124)
				{
					if (Global_17238.f_4866[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17238.f_5486 = 0;
	Global_17238.f_5487 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17238.f_4469), "", 16);
		StringCopy(&(Global_2549033.f_21), "", 16);
	}
}

void func_103(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17238.f_4994 >= 250)
	{
		return;
	}
	if (Global_17238.f_5498 >= 4)
	{
		return;
	}
	if (Global_17238.f_5499 != 1)
	{
		return;
	}
	if (Global_17238.f_5498 >= Global_17238.f_5496)
	{
		return;
	}
	StringCopy(&(Global_17238.f_73[Global_17238.f_4994 /*6*/]), sParam0, 24);
	Global_17238.f_4994++;
	Global_17238.f_2076[Global_17238.f_5497 /*5*/][Global_17238.f_5498] = 1;
	Global_17238.f_5498++;
	if (Global_17238.f_5498 >= Global_17238.f_5496)
	{
		fVar0 = func_105();
		if (Global_17238.f_4852[Global_17238.f_4993] && Global_17238.f_5498 == Global_17238.f_5496)
		{
			func_84(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17238.f_4845[(Global_17238.f_4993 - 1)])
		{
			Global_17238.f_4845[(Global_17238.f_4993 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17238.f_5498 >= Global_17238.f_5496)
		{
			fVar3 = func_104();
			if (fVar3 > Global_17238.f_5500[Global_17238.f_4992])
			{
				Global_17238.f_5500[Global_17238.f_4992] = fVar3;
			}
		}
	}
}

float func_104()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17238.f_5498)
	{
		if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17238.f_4343[((Global_17238.f_4998 - iVar1) + iVar0)] != 0)
		{
			if (func_84(Global_17238.f_4343[((Global_17238.f_4998 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x9885727BF51C57B4(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x9885727BF51C57B4(0.35f, 0);
}

float func_105()
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
	while (iVar7 < Global_17238.f_5498)
	{
		if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_64(0, 1, 0, 0, 0, iVar6 > 0);
	if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[Global_17238.f_5497 /*6*/])) != 0)
	{
		unk_0xB865D57D92832050(&(Global_17238.f_73[Global_17238.f_5497 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17238.f_5498)
	{
		if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[Global_17238.f_5497 /*6*/])) != 0)
			{
				unk_0x072D7B028D6C7A05(&(Global_17238.f_73[(Global_17238.f_5497 + iVar8) /*6*/]));
			}
		}
		else if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[Global_17238.f_5497 /*6*/])) != 0)
			{
				unk_0x072D7B028D6C7A05(&(Global_17238.f_73[(Global_17238.f_5497 + iVar8) /*6*/]));
			}
		}
		else if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 2)
		{
			if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[Global_17238.f_5497 /*6*/])) != 0)
			{
				unk_0x6D55FF05D62B91BC(Global_17238.f_3840[((Global_17238.f_4996 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 3)
		{
			if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[Global_17238.f_5497 /*6*/])) != 0)
			{
				unk_0xB6F6A8755E3C6180(Global_17238.f_4091[((Global_17238.f_4997 - iVar4) + iVar10)], Global_17238.f_4217[((Global_17238.f_4997 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 5)
		{
			if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[Global_17238.f_5497 /*6*/])) != 0)
			{
				unk_0x6222A57F463E8EE7(&(Global_2437099[((Global_17238.f_4995 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 6)
		{
			if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[Global_17238.f_5497 /*6*/])) != 0)
			{
				unk_0x072D7B028D6C7A05(&(Global_2437099[((Global_17238.f_4995 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17238.f_2076[Global_17238.f_5497 /*5*/][iVar7] == 7)
		{
			if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[Global_17238.f_5497 /*6*/])) != 0)
			{
				unk_0x6222A57F463E8EE7(&(Global_2437099[((Global_17238.f_4995 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[Global_17238.f_5497 /*6*/])) != 0)
	{
		fVar0 = unk_0x0239B891C698A437(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17238.f_4343[((Global_17238.f_4998 - iVar5) + iVar7)] != 0)
		{
			func_84(Global_17238.f_4343[((Global_17238.f_4998 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_106(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	if (func_107(iParam0) == 0)
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
		
		default:
	}
	return "";
}

int func_107(int iParam0)
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
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		default:
	}
	return 0;
}

void func_108(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_17238.f_4992 > iParam0)
	{
		return;
	}
	if (Global_17238.f_4992 >= 125)
	{
		return;
	}
	if (Global_17238.f_4998 >= 125)
	{
		return;
	}
	if (Global_17238.f_5498 < Global_17238.f_5496)
	{
		return;
	}
	if (Global_17238.f_4992 != iParam0)
	{
		Global_17238.f_4992 = iParam0;
		Global_17238.f_4993 = 0;
	}
	iVar0 = Global_17238.f_4833[Global_17238.f_4993];
	if (iVar0 != 4)
	{
		while (Global_17238.f_4993 < 4 && iVar0 != 4)
		{
			Global_17238.f_4993++;
			iVar0 = Global_17238.f_4833[Global_17238.f_4993];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_17238.f_4343[Global_17238.f_4998] = iParam1;
	Global_17238.f_4998++;
	if (iParam1 != 0)
	{
		func_84(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17238.f_4852[Global_17238.f_4993])
		{
			func_84(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_17238.f_4845[Global_17238.f_4993])
		{
			Global_17238.f_4845[Global_17238.f_4993] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_17238.f_5500[iParam0])
			{
				Global_17238.f_5500[iParam0] = fVar2;
			}
		}
	}
	unk_0xF3148AAF69AF9CBC(&(Global_17238.f_4866[iParam0]), Global_17238.f_4993);
	Global_17238.f_4993++;
	Global_17238.f_5499 = 4;
}

void func_109(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17238.f_4992 > iParam0)
	{
		return;
	}
	if (Global_17238.f_4992 >= 125)
	{
		return;
	}
	if (Global_17238.f_4994 >= 250)
	{
		return;
	}
	if (Global_17238.f_5498 < Global_17238.f_5496)
	{
		return;
	}
	if (Global_17238.f_4992 != iParam0)
	{
		Global_17238.f_4992 = iParam0;
		Global_17238.f_4993 = 0;
	}
	iVar0 = Global_17238.f_4833[Global_17238.f_4993];
	if (iVar0 != 1)
	{
		while (Global_17238.f_4993 < 4 && iVar0 != 1)
		{
			Global_17238.f_4993++;
			iVar0 = Global_17238.f_4833[Global_17238.f_4993];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17238.f_73[Global_17238.f_4994 /*6*/]), sParam1, 24);
	if (!unk_0xB318FDA0D1ABDB20(sParam1) && !unk_0x7281387C8D4EC316(sParam1))
	{
	}
	Global_17238.f_1574[Global_17238.f_4994] = iParam3;
	Global_17238.f_1825[Global_17238.f_4994] = iParam4;
	Global_17238.f_4994++;
	if (iParam2 == 0)
	{
		fVar1 = func_111(&(Global_17238.f_73[Global_17238.f_4994 /*6*/]));
		if (Global_17238.f_4852[Global_17238.f_4993])
		{
			func_84(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17238.f_4845[Global_17238.f_4993])
		{
			Global_17238.f_4845[Global_17238.f_4993] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_110(&(Global_17238.f_73[Global_17238.f_4994 /*6*/]));
			if (fVar4 > Global_17238.f_5500[iParam0])
			{
				Global_17238.f_5500[iParam0] = fVar4;
			}
		}
	}
	unk_0xF3148AAF69AF9CBC(&(Global_17238.f_4866[iParam0]), Global_17238.f_4993);
	Global_17238.f_4993++;
	Global_17238.f_5499 = 1;
	Global_17238.f_5497 = (Global_17238.f_4994 - 1);
	Global_17238.f_5498 = 0;
	Global_17238.f_5496 = iParam2;
}

float func_110(char* sParam0)
{
	if (!unk_0x7281387C8D4EC316(sParam0))
	{
	}
	return unk_0x9885727BF51C57B4(0.35f, 0);
}

float func_111(char* sParam0)
{
	if (!unk_0x4357449749A521B1(sParam0))
	{
		if (unk_0x8DAF7A748E41AD46(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_64(0, 1, 0, 0, 0, 0);
	unk_0xB865D57D92832050(sParam0);
	return unk_0x0239B891C698A437(1);
}

void func_112(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	uParam1->f_66 = func_107(iParam0);
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
	func_120(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	uParam1->f_9[48] = 0;
	if (bParam2)
	{
		iVar0 = Global_67886;
	}
	else if (iParam3 == 0)
	{
		iVar0 = Global_98931.f_29631.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar0 = Global_98931.f_29631.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar0 = Global_98931.f_29631.f_939[iParam0];
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
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 2:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 3:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 4:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 5:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 6:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 7:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 8:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 9:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 10:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 11:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 12:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 13:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 14:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 15:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 16:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 17:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 18:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 19:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 20:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 21:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 22:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 23:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 24:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
				break;
			
			case 25:
				func_116(func_117(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_115(func_117(iParam0, iVar0));
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
				if (func_114(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_113(iParam0, iVar0, &uVar1))
						{
							uParam1->f_9[48] = uVar1;
						}
						else
						{
							uParam1->f_67 = 0;
						}
					}
					else
					{
						uParam1->f_67 = func_115(func_117(iParam0, iVar0));
					}
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				break;
			
			case 2:
				if (func_114(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_113(iParam0, iVar0, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
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
						uParam1->f_67 = func_115(func_117(iParam0, iVar0));
					}
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				break;
			
			case 3:
				if (func_114(iParam0))
				{
					if (func_113(iParam0, iVar0, &uVar3))
					{
						uParam1->f_9[48] = uVar3;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				break;
			
			case 4:
				if (func_114(iParam0))
				{
					if (func_113(iParam0, iVar0, &uVar4))
					{
						uParam1->f_9[48] = uVar4;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				break;
			
			case 5:
				if (uParam1->f_66 == joaat("bifta") || uParam1->f_66 == joaat("kalahari"))
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				else if (((((((uParam1->f_66 == joaat("jester") || uParam1->f_66 == joaat("massacro")) || uParam1->f_66 == joaat("turismor")) || uParam1->f_66 == joaat("zentorno")) || uParam1->f_66 == joaat("huntley")) || uParam1->f_66 == joaat("alpha")) || uParam1->f_66 == joaat("t20")) || uParam1->f_66 == joaat("issi2"))
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				else if (uParam1->f_66 == joaat("ratloader"))
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				else if (uParam1->f_66 == joaat("panto"))
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				else if (uParam1->f_66 == joaat("insurgent") || uParam1->f_66 == joaat("insurgent2"))
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				break;
			
			case 6:
				uParam1->f_5 = 64;
				uParam1->f_6 = 68;
				uParam1->f_67 = -1;
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
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_67 = -1;
				}
				break;
			
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 0;
				uParam1->f_67 = -1;
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
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

int func_113(int iParam0, int iParam1, var uParam2)
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
	*uParam2 = -1;
	return 0;
}

int func_114(int iParam0)
{
	if (((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232)
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0)
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
		
		default:
	}
	return -1;
}

int func_116(int iParam0, var uParam1, var uParam2)
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
			break;
	}
	return 0;
}

int func_117(int iParam0, int iParam1)
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
			if (func_118(iParam0, 11, iParam1))
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
		
		default:
	}
	return -1;
}

int func_118(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (unk_0x9F80443939366966())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_22() && func_119())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 118 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_119()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x236D8AD7EE179F46(Global_25, 5))
	{
		if (unk_0x236D8AD7EE179F46(Global_25, 1) || unk_0x236D8AD7EE179F46(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (unk_0x236D8AD7EE179F46(iVar0, 5))
		{
			if (unk_0x236D8AD7EE179F46(iVar0, 1) || unk_0x236D8AD7EE179F46(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x45494DB407D6943C(0))
	{
		if (Global_135976.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x85C45034BA638694(iVar2, &iVar1, -1))
			{
				if (unk_0x236D8AD7EE179F46(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		iVar3 = unk_0xE19FDB171CBF814A(866);
		if (unk_0x236D8AD7EE179F46(iVar3, 1) || unk_0x236D8AD7EE179F46(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0xDA5A433E003F7BCF())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				unk_0xF3148AAF69AF9CBC(&iVar4, 1);
				unk_0xF3148AAF69AF9CBC(&iVar4, 3);
				unk_0xF3148AAF69AF9CBC(&iVar4, 5);
				unk_0xF3148AAF69AF9CBC(&Global_25, 1);
				unk_0xF3148AAF69AF9CBC(&Global_25, 3);
				unk_0xF3148AAF69AF9CBC(&Global_25, 5);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					iVar4 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&iVar4, 1);
					unk_0xF3148AAF69AF9CBC(&iVar4, 3);
					unk_0x0A726855B16BE29A(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_120(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 64:
			unk_0xF3148AAF69AF9CBC(uParam1, 4);
			break;
		
		case 67:
			unk_0xF3148AAF69AF9CBC(uParam1, 4);
			break;
		
		case 72:
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			break;
		
		case 117:
			unk_0xC69E84EBBD7166E6(uParam1, 1);
			break;
		
		case 49:
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			break;
		
		case 118:
			unk_0xC69E84EBBD7166E6(uParam1, 1);
			break;
		
		case 1:
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			break;
		
		case 119:
			unk_0xC69E84EBBD7166E6(uParam1, 1);
			break;
		
		case 77:
			unk_0xF3148AAF69AF9CBC(uParam1, 0);
			unk_0xC69E84EBBD7166E6(uParam1, 1);
			unk_0xC69E84EBBD7166E6(uParam1, 2);
			break;
		
		case 120:
			unk_0xC69E84EBBD7166E6(uParam1, 0);
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			unk_0xC69E84EBBD7166E6(uParam1, 2);
			break;
		
		case 130:
			unk_0xF3148AAF69AF9CBC(uParam1, 0);
			break;
		
		case 132:
			unk_0xF3148AAF69AF9CBC(uParam1, 0);
			break;
		
		case 135:
			unk_0xC69E84EBBD7166E6(uParam1, 0);
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			break;
		
		case 137:
			unk_0xF3148AAF69AF9CBC(uParam1, 0);
			break;
		
		case 141:
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			unk_0xC69E84EBBD7166E6(uParam1, 6);
			break;
		
		case 147:
			unk_0xF3148AAF69AF9CBC(uParam1, 0);
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			unk_0xF3148AAF69AF9CBC(uParam1, 2);
			unk_0xF3148AAF69AF9CBC(uParam1, 3);
			unk_0xF3148AAF69AF9CBC(uParam1, 4);
			unk_0xF3148AAF69AF9CBC(uParam1, 5);
			unk_0xF3148AAF69AF9CBC(uParam1, 6);
			unk_0xF3148AAF69AF9CBC(uParam1, 7);
			unk_0xF3148AAF69AF9CBC(uParam1, 8);
			break;
		
		case 203:
			unk_0xF3148AAF69AF9CBC(uParam1, 0);
			unk_0xC69E84EBBD7166E6(uParam1, 1);
			unk_0xC69E84EBBD7166E6(uParam1, 2);
			break;
		
		case 100:
			unk_0xF3148AAF69AF9CBC(uParam1, 0);
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			unk_0xF3148AAF69AF9CBC(uParam1, 2);
			break;
		
		case 170:
			unk_0xC69E84EBBD7166E6(uParam1, 0);
			unk_0xC69E84EBBD7166E6(uParam1, 1);
			unk_0xC69E84EBBD7166E6(uParam1, 2);
			break;
		
		case 160:
			unk_0xF3148AAF69AF9CBC(uParam1, 15);
			break;
		
		case 161:
			unk_0xF3148AAF69AF9CBC(uParam1, 15);
			break;
		
		case 192:
			unk_0xF3148AAF69AF9CBC(uParam1, 0);
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			unk_0xC69E84EBBD7166E6(uParam1, 2);
			break;
		
		case 221:
			unk_0xC69E84EBBD7166E6(uParam1, 0);
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			unk_0xC69E84EBBD7166E6(uParam1, 2);
			break;
		
		case 222:
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			break;
		
		case 172:
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			break;
		
		case 165:
			unk_0xC69E84EBBD7166E6(uParam1, 0);
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			break;
		
		case 166:
			unk_0xF3148AAF69AF9CBC(uParam1, 0);
			unk_0xC69E84EBBD7166E6(uParam1, 1);
			break;
		
		case 139:
			unk_0xF3148AAF69AF9CBC(uParam1, 0);
			break;
		
		case 104:
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			break;
		
		case 109:
			unk_0xF3148AAF69AF9CBC(uParam1, 0);
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			unk_0xF3148AAF69AF9CBC(uParam1, 2);
			break;
		
		case 227:
			unk_0xF3148AAF69AF9CBC(uParam1, 1);
			unk_0xC69E84EBBD7166E6(uParam1, 2);
			unk_0xC69E84EBBD7166E6(uParam1, 4);
			break;
		
		default:
			return;
			break;
	}
}

void func_121(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17238.f_1), sParam0, 16);
	Global_17238.f_68 = 0;
	Global_17238.f_69 = 0;
	Global_17238.f_70 = 0;
	Global_17238.f_71 = 0;
	Global_17238.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17238.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17238.f_4860[0] = iParam0;
	Global_17238.f_4860[1] = iParam1;
	Global_17238.f_4860[2] = iParam2;
	Global_17238.f_4860[3] = iParam3;
	Global_17238.f_4860[4] = iParam4;
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17238.f_4833[0] = iParam0;
	Global_17238.f_4833[1] = iParam1;
	Global_17238.f_4833[2] = iParam2;
	Global_17238.f_4833[3] = iParam3;
	Global_17238.f_4833[4] = iParam4;
	Global_17238.f_5000 = 0;
	if (iParam0 != 0)
	{
		Global_17238.f_5000++;
	}
	if (iParam1 != 0)
	{
		Global_17238.f_5000++;
	}
	if (iParam2 != 0)
	{
		Global_17238.f_5000++;
	}
	if (iParam3 != 0)
	{
		Global_17238.f_5000++;
	}
	if (iParam4 != 0)
	{
		Global_17238.f_5000++;
	}
}

void func_124(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 250)
	{
		StringCopy(&(Global_17238.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17238.f_2076[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2437099[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 250)
	{
		Global_17238.f_3840[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17238.f_4091[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17238.f_4343[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17238.f_4866[iVar0] = 0;
		Global_17238.f_5001[iVar0] = 0;
		Global_17238.f_5127[iVar0] = 0;
		Global_17238.f_5631[iVar0] = 0f;
		Global_17238.f_5253[iVar0] = 0;
		Global_17238.f_5500[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17238.f_4833[iVar0] = 0;
		Global_17238.f_4845[iVar0] = 0f;
		Global_17238.f_4839[iVar0] = -1f;
		Global_17238.f_4852[iVar0] = 0;
		Global_17238.f_4860[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17238.f_4741[iVar0 /*4*/]), "", 16);
		Global_17238.f_4790[iVar0] = -1;
		Global_17238.f_4803[iVar0] = 344;
		Global_17238.f_4816[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&(Global_17238.f_5763[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17238.f_6548[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2549033.f_16), "", 16);
	Global_2549033.f_20 = -1;
	Global_17238 = 0;
	Global_17238.f_4992 = 0;
	Global_17238.f_4993 = 0;
	Global_17238.f_4994 = 0;
	Global_17238.f_4996 = 0;
	Global_17238.f_4997 = 0;
	Global_17238.f_4998 = 0;
	Global_17238.f_4995 = 0;
	Global_17238.f_5626 = 0;
	Global_17238.f_5494 = 0;
	Global_17238.f_5493 = 0;
	Global_17238.f_5495 = 0;
	StringCopy(&(Global_17238.f_4469), "", 16);
	Global_17238.f_4539 = 0;
	Global_17238.f_4540 = 0;
	Global_17238.f_4541 = 0;
	Global_17238.f_4542 = 0;
	Global_17238.f_4543 = 0;
	Global_17238.f_4544 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17238.f_4473[iVar0] = 0;
		iVar0++;
	}
	Global_17238.f_4545 = 0;
	StringCopy(&(Global_2549033.f_21), "", 16);
	Global_2549033.f_61 = 0;
	Global_2549033.f_62 = 0;
	Global_2549033.f_63 = 0;
	Global_2549033.f_64 = 0;
	Global_2549033.f_65 = 0;
	Global_2549033.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2549033.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2549033.f_67 = 0;
	StringCopy(&(Global_17238.f_1), "", 16);
	Global_17238.f_4851 = 0f;
	Global_17238.f_68 = 0;
	Global_17238.f_69 = 0;
	Global_17238.f_70 = 0;
	Global_17238.f_71 = 0;
	Global_17238.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17238.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17238.f_5499 = 0;
	Global_17238.f_5498 = 0;
	Global_17238.f_5496 = 0;
	Global_17238.f_5497 = 0;
	Global_17238.f_4546 = 0;
	Global_17238.f_4547 = 0;
	Global_17238.f_4999 = 10;
	Global_17238.f_5000 = 0;
	Global_17238.f_5628 = 0f;
	Global_17238.f_5629 = 0f;
	Global_17238.f_5486 = 0;
	Global_17238.f_5487 = 0;
	Global_17238.f_5488 = 0f;
	Global_17238.f_5489 = 0;
	Global_17238.f_5491 = 0;
	Global_17238.f_5490 = 0;
	Global_17238.f_5492 = 0;
	Global_17238.f_7703 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17238.f_5757[iVar0] = -1;
		Global_17238.f_5760[iVar0] = -1;
		iVar0++;
	}
	Global_17238.f_4858 = 0f;
	Global_17238.f_4829 = 0;
	Global_17238.f_4859 = 0;
	Global_17238.f_7682 = 0;
	Global_17238.f_7677 = 0;
	Global_17238.f_7687 = 0;
	Global_17238.f_7692 = 0;
	Global_17238.f_7697 = 0;
	Global_17238.f_7699 = 0;
	Global_17238.f_7705 = 0;
	Global_17235 = 0.05f;
	Global_17236 = 0.05f;
	Global_17237 = 0.225f;
	fVar2 = unk_0xA32FB34BA4B9C4AA(0);
	if (bParam0)
	{
		Global_17237 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17237 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17237 = 0.225f;
	}
}

void func_125()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		unk_0x73EAA277E9F9A068(0.325f, 0.3f);
	}
}

int func_126(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_49(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x7DF7DE8C76D7F346(unk_0xEC537F0C0E8265EE()))
	{
		return 0;
	}
	if (func_59(0))
	{
		return 0;
	}
	if (unk_0x521385D8214D27C4())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36143[iVar0 /*19*/] == 1 && Global_36143[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36143[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36143[iVar0 /*19*/].f_5 = 1;
			Global_36143[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36143[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36143[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_127(char* sParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_52(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17238.f_5393[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xB318FDA0D1ABDB20(&(Global_17238.f_5393[iVar0 /*4*/])))
	{
		unk_0x86B83C54AF71BD12(&(Global_17238.f_5393[iVar0 /*4*/]), 9);
		Global_17238.f_5386[iVar0] = 1;
		if (!unk_0x138E88466113A6BE(&(Global_17238.f_5393[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xB711FC19ADBD3C70("CommonMenu", 0);
	Global_17238.f_5379[iVar0] = 1;
	if (!unk_0x682001A921A80123("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17238.f_5418[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_128(&(Global_17238.f_5418[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_128(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xCC8E3BAC62A29F42(*uParam0))
			{
				*uParam0 = unk_0x95EF972E3A07B525(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xCC8E3BAC62A29F42(*uParam0))
					{
						uParam0->f_8 = unk_0x48E480685981C7D4();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x48E480685981C7D4();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xCC8E3BAC62A29F42(*uParam0))
			{
				uParam0->f_8 = unk_0x48E480685981C7D4();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xCC8E3BAC62A29F42(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_129(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

var func_130(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_131(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0x968BF1C2C695B61A(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xF33755A765033580())
	{
		if (!*iParam0 == -1)
		{
			func_48(iParam0);
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
		if (!Global_36143[iVar0 /*19*/])
		{
			Global_36143[iVar0 /*19*/] = 1;
			Global_36143[iVar0 /*19*/].f_1 = Global_36266;
			Global_36266++;
			Global_36143[iVar0 /*19*/].f_4 = 0;
			Global_36143[iVar0 /*19*/].f_17 = 0;
			Global_36143[iVar0 /*19*/].f_5 = 0;
			Global_36143[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36143[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36143[iVar0 /*19*/].f_6 = iParam3;
			Global_36143[iVar0 /*19*/].f_18 = unk_0x8F56512BDA9F6921();
			Global_36143[iVar0 /*19*/].f_7 = 0;
			Global_36143[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xB318FDA0D1ABDB20(sParam4))
			{
				Global_36143[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36143[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36143[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_36143[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return unk_0x236D8AD7EE179F46(Global_98931.f_29631[iParam0], iVar0);
}

int func_133(int iParam0)
{
	int iVar0;
	int iVar1[128];
	
	if (func_136(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_98931.f_17188[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_22() && !unk_0x1C6DF6AD69BE853E())
	{
		if (func_135(33, 0) && !func_134(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_98931.f_29522.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_98931.f_29522.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_98931.f_29522.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_98931.f_29522.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_98931.f_29522.f_7)
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

int func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_98931.f_6302.f_764)
	{
		if (Global_98931.f_6302.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_136(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_668.f_704, 2))
		{
			return 1;
		}
	}
	if (unk_0x9F80443939366966())
	{
		if (!bParam1 || unk_0x1F2C82EFDAD19C5D())
		{
			if (!unk_0x211AF631627DE2C5() && !unk_0xEC209B562C5EFDB2())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0x145838334F50DC33())
		{
			return 0;
		}
	}
	if (unk_0x9F80443939366966())
	{
		return 1;
	}
	return 0;
}

int func_137()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_136(1, 1))
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			iVar0++;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_98931.f_17188[45 /*6*/], 3))
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			iVar0++;
		}
	}
	if (func_22() && !unk_0x1C6DF6AD69BE853E())
	{
		if (func_135(33, 0) && !func_134(1751306471))
		{
			iVar0++;
		}
		if (Global_98931.f_29522.f_3)
		{
			iVar0++;
		}
		if (Global_98931.f_29522.f_4)
		{
			iVar0++;
		}
		if (Global_98931.f_29522.f_5)
		{
			iVar0++;
		}
		if (Global_98931.f_29522.f_6)
		{
			iVar0++;
		}
		if (Global_98931.f_29522.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_138(float fParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()) && !unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x5CA8EDD2A37D9E8A(unk_0x81873881071CD9FE()) > 0;
		}
		else
		{
			return unk_0x4F6F0D77CAC94601(unk_0x81873881071CD9FE(), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), fParam0) > 0;
		}
	}
	return 0;
}

bool func_139(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

void func_140()
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
	if ((((((((((((((((Local_401.f_29.f_80 && Local_401.f_29.f_69) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) && Local_401.f_2 == 0) && Local_401.f_0 != -1) && func_46(Local_401.f_0, 0)) && func_46(Local_401.f_0, 5)) && !func_10(0)) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(5)) && !func_10(14)) && !Global_67710) && !func_139(1)) && !func_198()) || (((Local_401.f_3 > 1 && !func_139(0)) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) && !func_198()))
	{
		func_197(Local_401.f_0, &Local_520);
		fVar13 = 0f;
		sVar14 = "ANIM@APT_TRANS@GARAGE";
		Var15 = { 198.3659f, -1020.273f, -100f };
		Var18 = { Var15 };
		Var21 = { 198.9538f, -1026.13f, -100f };
		iVar24 = func_196(Local_401.f_0);
		switch (Local_401.f_3)
		{
			case 0:
				if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && !unk_0xF33755A765033580())
				{
					Local_401.f_3 = 10;
					return;
				}
				if ((((((unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0) && (func_195(unk_0x3306AAAFE3B25098(unk_0x81873881071CD9FE()), Local_401.f_29.f_68, 90f) || unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))) && unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) && !unk_0x70847137E3B37A59(unk_0x81873881071CD9FE())) && !unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) && !unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2)) && (iVar24 == iLocal_646 || iVar24 == 145))
				{
					if (func_194())
					{
						bVar25 = true;
						if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
						{
							iVar12 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1);
							if (unk_0x86CCCD2FAE9D5E65(iVar12))
							{
								if (unk_0x7404950238A154C2(iVar12, 0))
								{
									iVar26 = unk_0x14B7103DBD149FFE(iVar12);
									if (((((((((!func_43(iVar26) || func_42(iVar12)) || func_41(iVar12)) || !func_21(iVar26)) || unk_0x8807D8929DF94A13(iVar12)) || ((!unk_0x61A26017817C6AED(iVar26) && !unk_0xC5ABD699DDC9D5A0(iVar26)) && !unk_0x8923BC9F314B991D(iVar26))) || iVar26 == joaat("monster")) || unk_0x2D2289DC6C760F31(iVar12)) || unk_0x052AF3754A22A08B(iVar12)) || (unk_0x2ADC2166A28358CB(unk_0x81873881071CD9FE()) && unk_0x968BF1C2C695B61A(joaat("taxi_procedural")) > 0))
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
						else if (unk_0x44F6694620DE85E2(sVar14))
						{
							unk_0x295DC04FC13E025B(sVar14);
							if (!unk_0x8E8B546E1A81D27F(sVar14))
							{
								bVar25 = false;
							}
						}
						if (bVar25)
						{
							func_131(&iLocal_630, 3, "WEB_VEH_ENTER", 0, 0, 0);
							iLocal_1008 = 0;
							Local_401.f_3 = 1;
						}
						else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
						{
							if (!unk_0xA83A609D74168B30() || func_130("WEB_VEH_INV"))
							{
								func_129("WEB_VEH_INV", -1);
								StringCopy(&cLocal_997, "WEB_VEH_INV", 16);
								bVar11 = true;
							}
						}
					}
					else if (!unk_0xA83A609D74168B30() || func_130("WEB_VEH_FULL"))
					{
						func_129("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_997, "WEB_VEH_FULL", 16);
						bVar11 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_1006)
				{
					if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
					{
						iLocal_1006 = 0;
						unk_0x295DC04FC13E025B(sVar14);
						if (unk_0x8E8B546E1A81D27F(sVar14))
						{
							iLocal_1006 = 1;
						}
					}
					else
					{
						unk_0xD8323B49BAE93D80(sVar14);
						iLocal_1006 = 1;
					}
				}
				iVar27 = 1;
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					iVar12 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1);
					if (unk_0x86CCCD2FAE9D5E65(iVar12))
					{
						if (unk_0x7404950238A154C2(iVar12, 0))
						{
							iVar28 = unk_0x14B7103DBD149FFE(iVar12);
							if ((((((((!func_43(iVar28) || func_42(iVar12)) || func_41(iVar12)) || unk_0x8807D8929DF94A13(iVar12)) || ((!unk_0x61A26017817C6AED(iVar28) && !unk_0xC5ABD699DDC9D5A0(iVar28)) && !unk_0x8923BC9F314B991D(iVar28))) || iVar28 == joaat("monster")) || unk_0x2D2289DC6C760F31(iVar12)) || unk_0x052AF3754A22A08B(iVar12)) || (unk_0x2ADC2166A28358CB(unk_0x81873881071CD9FE()) && unk_0x968BF1C2C695B61A(joaat("taxi_procedural")) > 0))
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
				if (((((((((unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0) && (func_195(unk_0x3306AAAFE3B25098(unk_0x81873881071CD9FE()), Local_401.f_29.f_68, 90f) || unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))) && unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) && func_194()) && !unk_0x70847137E3B37A59(unk_0x81873881071CD9FE())) && !unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) && !unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2)) && !func_198()) && (iVar24 == iLocal_646 || iVar24 == 145)) && iVar27)
				{
					if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()) || (unk_0x8E8B546E1A81D27F(sVar14) || !unk_0x44F6694620DE85E2(sVar14)))
					{
						if (func_126(iLocal_630, 1))
						{
							func_48(&iLocal_630);
							iLocal_1006 = 0;
							Local_401.f_3 = 2;
						}
						func_192(49, 0);
						func_187(49, 0);
						Local_401.f_112 = unk_0xA17AB437A96481B6(Var15, "v_garagem_sp");
						if (unk_0x59F36F53A82C2E72(Local_401.f_112))
						{
							if (!unk_0x9B710BA2688DD221(Local_401.f_112))
							{
								if ((unk_0x5CE96B2C9C8B727F() % 10) == 0)
								{
									unk_0xC9C56731782E64CD(Local_401.f_112);
								}
							}
							StringCopy(&Global_32247, "v_garagem_sp", 32);
						}
						if (!iLocal_1005 && !unk_0x2CB3B76C90F08111())
						{
							if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
							{
								iVar29 = func_185(Local_401.f_0);
								func_40(&Var30, iVar29);
								Var18 = { Var30 };
								unk_0x3DEBEEC5B1D7D4C5(Var18, 20f, 0);
							}
							else
							{
								unk_0x3DEBEEC5B1D7D4C5(Var21 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_1005 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1005 && unk_0x2CB3B76C90F08111())
					{
						unk_0x5AD73EF670D05F7D();
						iLocal_1005 = 0;
					}
					iLocal_1006 = 0;
					func_48(&iLocal_630);
					unk_0xD8323B49BAE93D80(sVar14);
					Local_401.f_3 = 0;
				}
				break;
			
			case 2:
				func_192(49, 0);
				func_187(49, 0);
				unk_0xEC4E76F112E5A727(8);
				Global_67889.f_577 = 1;
				Global_67889.f_578 = { Local_401.f_29.f_55 };
				iLocal_986 = unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63());
				unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
				unk_0x90F3625CF1678F30(unk_0x81873881071CD9FE(), 0, 0);
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
				unk_0xF1BC58601CA4A5C7(0);
				unk_0x3BF4F473786B0150(0);
				unk_0x5DFA9D9EFD236763(unk_0x1329891157A54C63());
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					iVar12 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0x86CCCD2FAE9D5E65(iVar12) && unk_0x7404950238A154C2(iVar12, 0))
					{
						if (func_195(unk_0x3306AAAFE3B25098(iVar12), Local_401.f_29.f_68, 90f))
						{
							iLocal_1008 = 0;
						}
						else
						{
							iLocal_1008 = 1;
						}
						unk_0xCEDA5B7DDF6C8846(iVar12, 1, 1, 1, 1, 1, 1, 0, 0);
						unk_0x82119F022C669D9E(Local_520.f_86[0 /*6*/], 20f, 0);
						unk_0x82695E55A5428216(Local_520.f_86[0 /*6*/], 20f, 0);
						unk_0x9FDA5C65BF0EE91F(Local_520.f_86[0 /*6*/], 7f);
						unk_0xB067093BBAF0A747(iVar12, Local_520.f_86[0 /*6*/], 1, 0, 0, 1);
						if (iLocal_1008 && !unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
						{
							unk_0xC24172029826A66F(iVar12, (Local_520.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							unk_0xC24172029826A66F(iVar12, Local_520.f_86[0 /*6*/].f_3.f_2);
						}
						if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
						{
							unk_0x0EA489DE9D8C3BBC(unk_0x81873881071CD9FE(), 0, 0, -1);
							unk_0x06618C182FDAA45F(unk_0x81873881071CD9FE(), 1);
						}
						unk_0x5CC9D6711FE01F0D(iVar12);
					}
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
					func_180(1, 1, 1, 0);
					func_179(&(Local_520[1 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
					Local_401.f_3 = 3;
				}
				else
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_1001) && !unk_0x930F8FBB8E9537CC(iLocal_1001))
					{
						if (unk_0xE86442941AE40E75(iLocal_1001) && unk_0x46AE53A47E5D03D5(iLocal_1001, 1))
						{
							unk_0xE0913C01F5C0CC3D(&iLocal_1001);
						}
					}
					iLocal_1001 = unk_0x2ADE2CEED2637E95();
					if ((((unk_0x86CCCD2FAE9D5E65(iLocal_1001) && unk_0x7404950238A154C2(iLocal_1001, 0)) && !unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(iLocal_1001))) && !unk_0x1699D7B95446F15C(unk_0x14B7103DBD149FFE(iLocal_1001))) && !unk_0x9F59BCFFFEAAD4B1(unk_0x14B7103DBD149FFE(iLocal_1001)))
					{
						if (!unk_0xE86442941AE40E75(iLocal_1001))
						{
							unk_0xD768713E73165208(iLocal_1001, 0, 0);
						}
						if (unk_0x86CCCD2FAE9D5E65(iLocal_1001) && unk_0x7404950238A154C2(iLocal_1001, 0))
						{
							if (!bVar51)
							{
								if (unk_0xD1FFD959917D4ED8(iLocal_1001, Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0))
								{
									bVar51 = true;
								}
							}
							if (!bVar51)
							{
								fVar52 = unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_1001, 1), Local_520[0 /*15*/]);
								if (fVar52 < (5f * 5f))
								{
									bVar51 = true;
								}
							}
							if (bVar51)
							{
								iVar53 = func_28(24);
								if (func_178(&Local_750, 24))
								{
									func_173(&Local_750, func_318());
									if (unk_0x86CCCD2FAE9D5E65(iVar53))
									{
										unk_0x5D00E836B6BE8693(&iVar53);
									}
								}
								if (Local_401.f_0 == 21)
								{
									unk_0x7C6BF0CD5D7454C9(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
									func_171(iLocal_1001, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_401.f_0 == 22)
								{
									unk_0x7C6BF0CD5D7454C9(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
									func_171(iLocal_1001, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_401.f_0 == 23)
								{
									unk_0x7C6BF0CD5D7454C9(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
									func_171(iLocal_1001, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								unk_0x5CC9D6711FE01F0D(iLocal_1001);
							}
						}
					}
					else
					{
						iLocal_1001 = 0;
					}
					Var54 = { Local_401.f_29 * Vector(2f, 2f, 2f) + Local_401.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					Var57 = { Local_401.f_29 * Vector(1f, 1f, 1f) + Local_401.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_401.f_29, Var54.f_0, Var54.f_1, Local_401.f_29.f_3.f_2, Local_401.f_29.f_6, 0, 1, 0))
					{
						sLocal_1009 = "";
						switch (unk_0x2E0A9E3291F398E3(0, 2))
						{
							case 0:
								sLocal_1009 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1009 = "gar_open_2_left";
								break;
						}
					}
					else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Var54.f_0, Var54.f_1, Local_401.f_29.f_2, Var57.f_0, Var57.f_1, Local_401.f_29.f_3.f_2, Local_401.f_29.f_6, 0, 1, 0))
					{
						sLocal_1009 = "";
						switch (unk_0x2E0A9E3291F398E3(0, 2))
						{
							case 0:
								sLocal_1009 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1009 = "gar_open_1_right";
								break;
						}
					}
					else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Var57.f_0, Var57.f_1, Local_401.f_29.f_2, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0))
					{
						sLocal_1009 = "";
						switch (unk_0x2E0A9E3291F398E3(0, 2))
						{
							case 0:
								sLocal_1009 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_1009 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_1009 = "";
						switch (unk_0x2E0A9E3291F398E3(0, 6))
						{
							case 0:
								sLocal_1009 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1009 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_1009 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_1009 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_1009 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_1009 = "gar_open_3_right";
								break;
							}
					}
					unk_0x82119F022C669D9E(Local_520.f_73[0 /*4*/], 20f, 0);
					unk_0x82695E55A5428216(Local_520.f_86[0 /*6*/], 20f, 0);
					unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Local_520.f_73[0 /*4*/], 1, 0, 0, 1);
					unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), Local_520.f_73[0 /*4*/].f_3);
					iLocal_635 = unk_0x59C061A719024602(Local_520.f_73[0 /*4*/], 0f, 0f, Local_520.f_73[0 /*4*/].f_3, 2);
					unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), iLocal_635, sVar14, sLocal_1009, 8f, -8f, 0, 0, 1148846080, 0);
					func_180(1, 1, 1, 0);
					func_179(&(Local_520[0 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
					Local_401.f_3 = 4;
				}
				Local_401.f_112 = unk_0xA17AB437A96481B6(Var15, "v_garagem_sp");
				if (unk_0x59F36F53A82C2E72(Local_401.f_112))
				{
					if (!unk_0x9B710BA2688DD221(Local_401.f_112))
					{
						unk_0xC9C56731782E64CD(Local_401.f_112);
					}
					StringCopy(&Global_32247, "v_garagem_sp", 32);
				}
				if (!iLocal_1005)
				{
					if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
					{
						iVar60 = func_185(Local_401.f_0);
						func_40(&Var61, iVar60);
						Var18 = { Var61 };
						unk_0x3DEBEEC5B1D7D4C5(Var18, 20f, 0);
					}
					else
					{
						unk_0x3DEBEEC5B1D7D4C5(Var21, 20f, 0);
					}
				}
				unk_0xF3148AAF69AF9CBC(&(Local_648.f_9), 25);
				func_167(198.0043f, -999.7775f, -100f, 50f, 0);
				func_89(Local_401.f_0);
				func_89(26);
				func_89(29);
				func_89(32);
				func_89(28);
				func_89(31);
				func_89(34);
				func_89(27);
				func_89(30);
				func_89(33);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1007 = 0;
				break;
			
			case 4:
				bVar82 = true;
				if (!unk_0x2CB3B76C90F08111())
				{
				}
				else if (unk_0xA5C3CFD413D647EA())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0x59F36F53A82C2E72(Local_401.f_112))
				{
					if (!unk_0x9B710BA2688DD221(Local_401.f_112))
					{
						unk_0xC9C56731782E64CD(Local_401.f_112);
					}
					StringCopy(&Global_32247, "v_garagem_sp", 32);
				}
				else
				{
					Local_401.f_112 = unk_0xA17AB437A96481B6(Var15, "v_garagem_sp");
				}
				if (func_166())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0x42E36F2D658EB2FF(Local_401.f_110) && unk_0x0AE0AF4D15B6ED2F(Local_401.f_110))
				{
					if (unk_0xEBA04D3308C6781F(Local_401.f_110))
					{
						bVar82 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else if (unk_0x42E36F2D658EB2FF(Local_401.f_111) && unk_0x0AE0AF4D15B6ED2F(Local_401.f_111))
				{
					if (unk_0xEBA04D3308C6781F(Local_401.f_111))
					{
						bVar82 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0xDD7720E17AF5FE17(iLocal_635))
				{
					fVar83 = unk_0xF855C83E3A17514B(iLocal_635);
					if (fVar83 < 0.4f)
					{
						bVar82 = false;
					}
				}
				if (bVar82)
				{
					unk_0x3B283FEBA87FFBEB(800);
					Local_401.f_3 = 5;
				}
				break;
			
			case 5:
				if (unk_0x29AFA2493D7C23D0())
				{
					iVar84 = unk_0xEDDCCC3D357A50F8();
					unk_0x35D7948F61AA3FEC(iVar84, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0xBAF887AF0EAEA412(iVar84, "hold", (2250f / 1000f));
					func_180(0, 1, 1, 0);
					unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
					if (unk_0x42E36F2D658EB2FF(Local_401.f_110))
					{
						unk_0xDD0B0D77CB8995B1(Local_401.f_110, 0);
						unk_0x35B958B469415A23(Local_401.f_110, 0);
					}
					if (unk_0x42E36F2D658EB2FF(Local_401.f_111))
					{
						unk_0xDD0B0D77CB8995B1(Local_401.f_111, 0);
						unk_0x35B958B469415A23(Local_401.f_111, 0);
					}
					if (unk_0x86CCCD2FAE9D5E65(iLocal_1011))
					{
						unk_0x5CEA5F12775261F2(iLocal_1011, 1, 0);
						unk_0xA8F22633ACC22189(iLocal_1011, 0);
						iLocal_1011 = 0;
					}
					unk_0x49F00D2F32CBC5B5(unk_0x1329891157A54C63());
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
					unk_0xEC4E76F112E5A727(8);
					if (unk_0xDD7720E17AF5FE17(iLocal_635))
					{
						unk_0x9F87D6789156F966(iLocal_635);
					}
					iLocal_635 = -1;
					unk_0x1E2B48EE3EC55DCF(unk_0x81873881071CD9FE());
					unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), 194.5394f, -1026.32f, -100f, 1, 0, 0, 1);
					unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), 334.1665f);
					unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), 1);
					unk_0x270066FDBAF3A458(0f);
					unk_0xEAB527164AD92BF3(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_401.f_3 = 6;
				}
				break;
			
			case 6:
				func_165(Local_401.f_0);
				if (unk_0x29AFA2493D7C23D0() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					unk_0xD8323B49BAE93D80(sVar14);
					func_164();
					if (unk_0x2CB3B76C90F08111())
					{
						unk_0x5AD73EF670D05F7D();
					}
					unk_0xAE2B1C30F8A0B67C(800);
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
					unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), 0);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_987 = 0;
					iLocal_1005 = 0;
					Local_401.f_3 = 10;
				}
				break;
			
			case 3:
				func_165(Local_401.f_0);
				bVar85 = true;
				if (!unk_0x2CB3B76C90F08111())
				{
				}
				else if (unk_0xA5C3CFD413D647EA())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0x59F36F53A82C2E72(Local_401.f_112))
				{
					if (!unk_0x9B710BA2688DD221(Local_401.f_112))
					{
						unk_0xC9C56731782E64CD(Local_401.f_112);
					}
					StringCopy(&Global_32247, "v_garagem_sp", 32);
				}
				else
				{
					Local_401.f_112 = unk_0xA17AB437A96481B6(Var15, "v_garagem_sp");
				}
				if (func_166())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0x42E36F2D658EB2FF(Local_401.f_110) && unk_0x0AE0AF4D15B6ED2F(Local_401.f_110))
				{
					if (unk_0xEBA04D3308C6781F(Local_401.f_110))
					{
						bVar85 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else if (unk_0x42E36F2D658EB2FF(Local_401.f_111) && unk_0x0AE0AF4D15B6ED2F(Local_401.f_111))
				{
					if (unk_0xEBA04D3308C6781F(Local_401.f_111))
					{
						bVar85 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					Var86 = { 0f, 0f, 0f };
					Var86.f_3 = 0f;
					func_156(unk_0x81873881071CD9FE(), Local_520.f_86[0 /*6*/], Local_520.f_66[0 /*3*/], ((Local_520[1 /*15*/].f_14 * 1000f) - 500f), Var86, 2, &fVar13);
				}
				if (bVar85)
				{
					func_164();
					unk_0xC1B1E9A034A63A62(0);
					unk_0x3B283FEBA87FFBEB(800);
					Local_401.f_3 = 35;
				}
				break;
			
			case 35:
				bVar90 = true;
				func_165(Local_401.f_0);
				if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520.f_61[1] * 1000f))
				{
					bVar90 = false;
				}
				if (bVar90)
				{
					func_164();
					func_180(0, 1, 1, 0);
					unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
					if (unk_0x42E36F2D658EB2FF(Local_401.f_110))
					{
						unk_0xDD0B0D77CB8995B1(Local_401.f_110, 0);
						unk_0x35B958B469415A23(Local_401.f_110, 0);
					}
					if (unk_0x42E36F2D658EB2FF(Local_401.f_111))
					{
						unk_0xDD0B0D77CB8995B1(Local_401.f_111, 0);
						unk_0x35B958B469415A23(Local_401.f_111, 0);
					}
					if (unk_0x86CCCD2FAE9D5E65(iLocal_1011))
					{
						unk_0x5CEA5F12775261F2(iLocal_1011, 1, 0);
						unk_0xA8F22633ACC22189(iLocal_1011, 0);
						iLocal_1011 = 0;
					}
					unk_0x49F00D2F32CBC5B5(unk_0x1329891157A54C63());
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
					unk_0xEC4E76F112E5A727(8);
					if (unk_0x2CB3B76C90F08111())
					{
						unk_0x5AD73EF670D05F7D();
					}
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						iVar12 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
						if (unk_0x86CCCD2FAE9D5E65(iVar12) && unk_0x7404950238A154C2(iVar12, 0))
						{
							iVar91 = func_185(Local_401.f_0);
							func_40(&Var92, iVar91);
							unk_0xB067093BBAF0A747(iVar12, Var92, 1, 0, 0, 1);
							unk_0xC24172029826A66F(iVar12, Var92.f_3);
							unk_0xE6116B2B5D358CE9(iVar12, 1);
							unk_0x686D6CDC14C4BA6C(iVar12, 0, 1);
							unk_0x69AA788B6BA4CB68(iVar12, 4);
							unk_0x270A692BBE168A81(iVar12, 1, 0);
							unk_0x270A692BBE168A81(iVar12, 0, 0);
							unk_0x89540DDA99D7346F(iVar12, 0);
							unk_0xCEDA5B7DDF6C8846(iVar12, 0, 0, 0, 0, 0, 0, 0, 0);
							unk_0x3535A48C04BEA949(unk_0x81873881071CD9FE(), iVar12, 0);
							unk_0xA8F22633ACC22189(iVar12, 0);
							Var113.f_9 = 49;
							Var113.f_59 = 2;
							func_15(iVar12, &Var113);
							func_90(iVar91, &Var113, 0f, 0f, 0f, -1f, 145);
							func_13(iVar91, iVar12, 1);
							func_155(iVar12);
						}
						unk_0x270066FDBAF3A458(0f);
						unk_0xEAB527164AD92BF3(0f, 1065353216);
					}
					iVar191 = unk_0x382F30F9319DA363(unk_0x81873881071CD9FE(), &uVar0, -1);
					iVar192 = 0;
					while (iVar192 < iVar191)
					{
						if ((unk_0x86CCCD2FAE9D5E65(uVar0[iVar192]) && !unk_0x5FEB513A4402FD59(uVar0[iVar192])) && unk_0x6914EFE7823C0640(uVar0[iVar192], unk_0xC80D3C64CC2CE6A3(unk_0x1329891157A54C63())))
						{
							unk_0xB901CB880393ADF7(uVar0[iVar192], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar192++;
					}
					unk_0xC1B1E9A034A63A62(0);
					iLocal_987 = 0;
					iLocal_1005 = 0;
					unk_0xAE2B1C30F8A0B67C(800);
					Local_401.f_3 = 10;
				}
				break;
			
			case 10:
				if (unk_0x83666F9FB8FEBD4B() < 7000 || !Global_98931.f_18731.f_4800)
				{
					if (!Global_98931.f_18731.f_4800)
					{
						if (iLocal_987 == 0)
						{
							func_129("CAR_GAR_05", -1);
							StringCopy(&cLocal_997, "CAR_GAR_05", 16);
							bVar11 = true;
							if (unk_0x83666F9FB8FEBD4B() >= 7000)
							{
								unk_0xC1B1E9A034A63A62(0);
								iLocal_987++;
							}
						}
						else if (iLocal_987 == 1)
						{
							func_129("CAR_GAR_06", -1);
							StringCopy(&cLocal_997, "CAR_GAR_06", 16);
							bVar11 = true;
							if (unk_0x83666F9FB8FEBD4B() >= 7000)
							{
								unk_0xC1B1E9A034A63A62(0);
								Global_98931.f_18731.f_4800 = 1;
							}
						}
					}
					else
					{
						func_129("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_997, "CAR_GAR_EXIT", 16);
						bVar11 = true;
					}
				}
				else
				{
					Global_98931.f_18731.f_4800 = 1;
				}
				iVar193 = 0;
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					if (iLocal_630 != -1)
					{
						func_48(&iLocal_630);
					}
					iVar12 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0x86CCCD2FAE9D5E65(iVar12) && unk_0x7404950238A154C2(iVar12, 0))
					{
						if (unk_0x5B7A5D69AB3A14D6(iVar12) || unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
						{
							if (!(unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE())))
							{
								if ((((unk_0xE52CA3DD00C4F1F4(0, 71) != 0f || unk_0x093DEAE9A023FAA0(0, 71)) || unk_0xCAD9951C953F5B2D(0, 71)) || unk_0x5BD35B90C0693406(0, 71)) || unk_0x70A79CA636F98FA5(0, 71))
								{
									iVar193 = 1;
								}
								if ((((unk_0xE52CA3DD00C4F1F4(0, 72) != 0f || unk_0x093DEAE9A023FAA0(0, 72)) || unk_0xCAD9951C953F5B2D(0, 72)) || unk_0x5BD35B90C0693406(0, 72)) || unk_0x70A79CA636F98FA5(0, 72))
								{
									iVar193 = 1;
								}
							}
						}
					}
				}
				else
				{
					unk_0x295DC04FC13E025B(sVar14);
					if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, 1, 0) && func_195(unk_0x3306AAAFE3B25098(unk_0x81873881071CD9FE()), 180f, 90f))
					{
						if (iLocal_629 != -1)
						{
							func_48(&iLocal_629);
						}
						if (iLocal_630 == -1)
						{
							func_131(&iLocal_630, 3, "WEB_VEH_EXIT", 0, 0, 0);
						}
						if (!iLocal_629 != -1 && !iLocal_630 == -1)
						{
							if (func_126(iLocal_630, 1))
							{
								func_48(&iLocal_630);
								iVar193 = 1;
							}
						}
					}
					else if (iLocal_630 != -1)
					{
						func_48(&iLocal_630);
					}
				}
				if (iLocal_990)
				{
					iVar193 = 1;
				}
				if (iVar193 && !func_154())
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || iLocal_990)
					{
						unk_0xC1B1E9A034A63A62(0);
						unk_0x3DEBEEC5B1D7D4C5(Local_520.f_73[2 /*4*/], 20f, 0);
						if (iLocal_630 != -1)
						{
							func_48(&iLocal_630);
						}
						Local_401.f_3 = 12;
					}
					else if (unk_0x8E8B546E1A81D27F(sVar14))
					{
						sLocal_1009 = "";
						switch (unk_0x2E0A9E3291F398E3(0, 6))
						{
							case 0:
								sLocal_1009 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1009 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_1009 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_1009 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_1009 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_1009 = "gar_open_3_right";
								break;
						}
						iLocal_635 = unk_0x59C061A719024602(Local_520.f_73[1 /*4*/], 0f, 0f, Local_520.f_73[1 /*4*/].f_3, 2);
						unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), iLocal_635, sVar14, sLocal_1009, 8f, -8f, 0, 0, 1148846080, 0);
						func_180(1, 1, 1, 0);
						func_179(&(Local_520[2 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
						unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
						unk_0x3DEBEEC5B1D7D4C5(Local_520.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_630 != -1)
						{
							func_48(&iLocal_630);
						}
						Local_401.f_3 = 11;
					}
					else if (!unk_0x44F6694620DE85E2(sVar14))
					{
						unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Local_520.f_73[1 /*4*/], 1, 0, 0, 1);
						unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), Local_520.f_73[1 /*4*/].f_3);
						func_180(1, 1, 1, 0);
						func_179(&(Local_520[2 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
						unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
						unk_0x3DEBEEC5B1D7D4C5(Local_520.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_630 != -1)
						{
							func_48(&iLocal_630);
						}
						Local_401.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar194 = true;
				if (!unk_0x2CB3B76C90F08111())
				{
				}
				else if (unk_0xA5C3CFD413D647EA())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (func_166())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (unk_0x42E36F2D658EB2FF(Local_401.f_110) && unk_0x0AE0AF4D15B6ED2F(Local_401.f_110))
				{
					if (unk_0xEBA04D3308C6781F(Local_401.f_110))
					{
						bVar194 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else if (unk_0x42E36F2D658EB2FF(Local_401.f_111) && unk_0x0AE0AF4D15B6ED2F(Local_401.f_111))
				{
					if (unk_0xEBA04D3308C6781F(Local_401.f_111))
					{
						bVar194 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else
				{
					bVar194 = false;
				}
				if (unk_0xDD7720E17AF5FE17(iLocal_635))
				{
					fVar195 = unk_0xF855C83E3A17514B(iLocal_635);
					if (fVar195 < 0.4f)
					{
						bVar194 = false;
					}
				}
				if (bVar194)
				{
					iLocal_987 = 0;
					iLocal_1005 = 0;
					unk_0x3B283FEBA87FFBEB(800);
					unk_0xC1B1E9A034A63A62(0);
					Local_401.f_3 = 13;
				}
				break;
			
			case 12:
				unk_0xDE1125A413AF241C(0, 75, 1);
				if (unk_0x83666F9FB8FEBD4B() > 500)
				{
					iVar196 = func_153();
					if ((iVar196 == 21 || iVar196 == 22) || iVar196 == 23)
					{
						Var197.f_9 = 49;
						Var197.f_59 = 2;
						func_90(iVar196, &Var197, 0f, 0f, 0f, -1f, 145);
						func_92(iVar196);
					}
					else if (iVar196 != -1)
					{
						if (!iLocal_990)
						{
							func_324(iVar196, 0);
							func_92(iVar196);
						}
					}
					unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
					unk_0x90F3625CF1678F30(unk_0x81873881071CD9FE(), 0, 0);
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
					unk_0xD8323B49BAE93D80(sVar14);
					unk_0x3B283FEBA87FFBEB(800);
					Local_401.f_3 = 13;
				}
				break;
			
			case 13:
				if (unk_0x29AFA2493D7C23D0())
				{
					iVar275 = unk_0xEDDCCC3D357A50F8();
					unk_0x35D7948F61AA3FEC(iVar275, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0xBAF887AF0EAEA412(iVar275, "hold", (2250f / 1000f));
					unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
					if (unk_0x42E36F2D658EB2FF(Local_401.f_110))
					{
						unk_0xDD0B0D77CB8995B1(Local_401.f_110, 0);
						unk_0x35B958B469415A23(Local_401.f_110, 0);
					}
					if (unk_0x42E36F2D658EB2FF(Local_401.f_111))
					{
						unk_0xDD0B0D77CB8995B1(Local_401.f_111, 0);
						unk_0x35B958B469415A23(Local_401.f_111, 0);
					}
					if (unk_0x86CCCD2FAE9D5E65(iLocal_1011))
					{
						unk_0x5CEA5F12775261F2(iLocal_1011, 1, 0);
						unk_0xA8F22633ACC22189(iLocal_1011, 0);
						iLocal_1011 = 0;
					}
					unk_0x49F00D2F32CBC5B5(unk_0x1329891157A54C63());
					unk_0xEC4E76F112E5A727(8);
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if (!iLocal_990)
						{
							iVar12 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
							if (unk_0x86CCCD2FAE9D5E65(iVar12) && unk_0x7404950238A154C2(iVar12, 0))
							{
								unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
								unk_0xB067093BBAF0A747(iVar12, Local_401.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
								unk_0xC24172029826A66F(iVar12, Local_401.f_29.f_77[1]);
								unk_0x5CC9D6711FE01F0D(iVar12);
							}
						}
					}
					else
					{
						if (unk_0xDD7720E17AF5FE17(iLocal_635))
						{
							unk_0x9F87D6789156F966(iLocal_635);
						}
						iLocal_635 = -1;
						unk_0x1E2B48EE3EC55DCF(unk_0x81873881071CD9FE());
						unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Local_401.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
						unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), Local_401.f_29.f_77[1]);
					}
					unk_0x270066FDBAF3A458(0f);
					unk_0xEAB527164AD92BF3(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_401.f_3 = 14;
				}
				break;
			
			case 14:
				if (unk_0x29AFA2493D7C23D0() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					bVar276 = true;
					if (iLocal_990)
					{
						unk_0x32A12757CBF48A33(iLocal_991);
						if (unk_0x33ACB874CECA2D4B(iLocal_991))
						{
							iVar277 = unk_0xE00F8DEA9778FC87(iLocal_991, Local_401.f_29.f_70[0 /*3*/], Local_401.f_29.f_77[0], 1, 1);
							if (iLocal_991 == joaat("windsor"))
							{
								unk_0x24F85A008ECA63FB(iVar277, 0);
							}
							if (unk_0x86CCCD2FAE9D5E65(iVar277) && unk_0x7404950238A154C2(iVar277, 0))
							{
								unk_0xDC81A805934C85CD(unk_0x81873881071CD9FE(), iVar277, -1);
								unk_0xA0E7470F98EF901A(iVar277, 0f);
								unk_0x887F4488DA99FD21(iLocal_991);
								if (func_93(iLocal_991))
								{
									switch (iLocal_991)
									{
										case joaat("marshall"):
											unk_0x24F85A008ECA63FB(iVar277, iLocal_625);
											break;
										}
								}
								unk_0xE0913C01F5C0CC3D(&iVar277);
							}
							iLocal_990 = 0;
						}
						else
						{
							bVar276 = false;
						}
					}
					if (!unk_0x2CB3B76C90F08111())
					{
					}
					else if (unk_0xA5C3CFD413D647EA())
					{
					}
					else
					{
						bVar276 = false;
					}
					if (bVar276)
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_1001) && unk_0x7404950238A154C2(iLocal_1001, 0))
						{
							iVar278 = func_28(24);
							if (func_178(&Local_750, 24))
							{
								func_173(&Local_750, func_318());
								if (unk_0x86CCCD2FAE9D5E65(iVar278))
								{
									unk_0x5D00E836B6BE8693(&iVar278);
								}
							}
							if (Local_401.f_0 == 21)
							{
								unk_0x7C6BF0CD5D7454C9(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
								unk_0xB067093BBAF0A747(iLocal_1001, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
								unk_0xC24172029826A66F(iLocal_1001, 154.4846f);
								func_171(iLocal_1001, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_401.f_0 == 22)
							{
								unk_0x7C6BF0CD5D7454C9(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
								unk_0xB067093BBAF0A747(iLocal_1001, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
								unk_0xC24172029826A66F(iLocal_1001, 319.6985f);
								func_171(iLocal_1001, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_401.f_0 == 23)
							{
								unk_0x7C6BF0CD5D7454C9(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
								unk_0xB067093BBAF0A747(iLocal_1001, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
								unk_0xC24172029826A66F(iLocal_1001, 270.8741f);
								func_171(iLocal_1001, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							unk_0x5CC9D6711FE01F0D(iLocal_1001);
						}
						if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
						{
							iVar12 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
							if (unk_0x86CCCD2FAE9D5E65(iVar12) && unk_0x7404950238A154C2(iVar12, 0))
							{
								unk_0xB067093BBAF0A747(iVar12, Local_520.f_66[1 /*3*/], 1, 0, 0, 1);
								unk_0xC24172029826A66F(iVar12, Local_401.f_29.f_77[0]);
								unk_0x5CC9D6711FE01F0D(iVar12);
								if ((iLocal_991 == joaat("monster") || iLocal_991 == joaat("marshall")) || iLocal_991 == joaat("rhino"))
								{
									unk_0x40F51ABAD34CAD94(iVar12, false);
								}
								else
								{
									unk_0x40F51ABAD34CAD94(iVar12, true);
								}
								if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
								{
									unk_0x0EA489DE9D8C3BBC(unk_0x81873881071CD9FE(), 0, 0, -1);
									unk_0x06618C182FDAA45F(unk_0x81873881071CD9FE(), 1);
								}
								unk_0x89540DDA99D7346F(iVar12, 1);
								func_146(func_318(), &iVar12, 3, 1);
							}
							unk_0xAE2B1C30F8A0B67C(800);
							func_180(1, 1, 1, 0);
							func_179(&(Local_520[3 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
							iLocal_1008 = 0;
							iLocal_1010 = -1;
							Local_401.f_3 = 15;
						}
						else
						{
							unk_0xD8323B49BAE93D80(sVar14);
							func_164();
							unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
							if (unk_0x42E36F2D658EB2FF(Local_401.f_110))
							{
								unk_0xDD0B0D77CB8995B1(Local_401.f_110, 0);
								unk_0x35B958B469415A23(Local_401.f_110, 0);
							}
							if (unk_0x42E36F2D658EB2FF(Local_401.f_111))
							{
								unk_0xDD0B0D77CB8995B1(Local_401.f_111, 0);
								unk_0x35B958B469415A23(Local_401.f_111, 0);
							}
							if (unk_0x86CCCD2FAE9D5E65(iLocal_1011))
							{
								unk_0x5CEA5F12775261F2(iLocal_1011, 1, 0);
								unk_0xA8F22633ACC22189(iLocal_1011, 0);
								iLocal_1011 = 0;
							}
							unk_0x49F00D2F32CBC5B5(unk_0x1329891157A54C63());
							unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
							unk_0xEC4E76F112E5A727(8);
							unk_0x1E2B48EE3EC55DCF(unk_0x81873881071CD9FE());
							unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Local_401.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
							unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), Local_401.f_29.f_77[1]);
							unk_0xAE2B1C30F8A0B67C(800);
							unk_0xC1B1E9A034A63A62(0);
							func_167(198.0043f, -999.7775f, -100f, 50f, 0);
							unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
							Local_401.f_3 = 16;
						}
						if (Local_401.f_3 != 16)
						{
							unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
						}
						unk_0xF1BC58601CA4A5C7(0);
						unk_0x3BF4F473786B0150(0);
						unk_0xC1B1E9A034A63A62(0);
						unk_0x270066FDBAF3A458(0f);
						unk_0xEAB527164AD92BF3(0f, 1065353216);
						iVar279 = unk_0x382F30F9319DA363(unk_0x81873881071CD9FE(), &uVar0, -1);
						iVar280 = 0;
						while (iVar280 < iVar279)
						{
							if ((unk_0x86CCCD2FAE9D5E65(uVar0[iVar280]) && !unk_0x5FEB513A4402FD59(uVar0[iVar280])) && unk_0x6914EFE7823C0640(uVar0[iVar280], unk_0xC80D3C64CC2CE6A3(unk_0x1329891157A54C63())))
							{
								if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
								{
									iVar12 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
									if ((unk_0x86CCCD2FAE9D5E65(iVar12) && unk_0x7404950238A154C2(iVar12, 0)) && unk_0x59D35AC211D17FAB(iVar12) > iVar280)
									{
										unk_0xDC81A805934C85CD(uVar0[iVar280], iVar12, iVar280);
									}
								}
								else
								{
									unk_0xB901CB880393ADF7(uVar0[iVar280], Local_401.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							iVar280++;
						}
						unk_0xEC4E76F112E5A727(8);
						iLocal_1007 = 0;
					}
				}
				break;
			
			case 15:
				bVar281 = true;
				if (!unk_0x2CB3B76C90F08111())
				{
				}
				else if (unk_0xA5C3CFD413D647EA())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (func_166())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (unk_0x42E36F2D658EB2FF(Local_401.f_110) && unk_0x0AE0AF4D15B6ED2F(Local_401.f_110))
				{
					if (unk_0xEBA04D3308C6781F(Local_401.f_110))
					{
						bVar281 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else if (unk_0x42E36F2D658EB2FF(Local_401.f_111) && unk_0x0AE0AF4D15B6ED2F(Local_401.f_111))
				{
					if (unk_0xEBA04D3308C6781F(Local_401.f_111))
					{
						bVar281 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else
				{
					bVar281 = false;
				}
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					func_156(unk_0x81873881071CD9FE(), Local_520.f_86[1 /*6*/], Local_520.f_66[1 /*3*/], ((Local_520[3 /*15*/].f_14 * 1000f) - 500f), Local_520.f_73[2 /*4*/], 3, &fVar13);
				}
				if (iLocal_1010 < 1 && func_145(unk_0x81873881071CD9FE(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_1010 == 0)
					{
						func_167(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_1010++;
				}
				if (bVar281)
				{
					unk_0xC1B1E9A034A63A62(0);
					Local_401.f_3 = 16;
				}
				else
				{
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
				}
				break;
			
			case 16:
				bVar282 = true;
				if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520.f_61[3] * 1000f))
				{
					bVar282 = false;
				}
				if (bVar282)
				{
					Local_401.f_3 = 17;
				}
				break;
			
			case 17:
				if (unk_0x59F36F53A82C2E72(Local_401.f_112))
				{
					unk_0x2912C2F5F69CF538(Local_401.f_112);
				}
				StringCopy(&Global_32247, "", 32);
				if (unk_0x2CB3B76C90F08111())
				{
					unk_0x5AD73EF670D05F7D();
				}
				func_144(49, 1);
				func_142(49, 1);
				Global_67889.f_577 = 0;
				if (unk_0x29AFA2493D7C23D0() || unk_0xC584A413BCB2AA39())
				{
					unk_0xAE2B1C30F8A0B67C(250);
				}
				unk_0xC1B1E9A034A63A62(0);
				unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
				if (unk_0x42E36F2D658EB2FF(Local_401.f_110))
				{
					unk_0xDD0B0D77CB8995B1(Local_401.f_110, 0);
					unk_0x35B958B469415A23(Local_401.f_110, 0);
				}
				if (unk_0x42E36F2D658EB2FF(Local_401.f_111))
				{
					unk_0xDD0B0D77CB8995B1(Local_401.f_111, 0);
					unk_0x35B958B469415A23(Local_401.f_111, 0);
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_1011))
				{
					unk_0x5CEA5F12775261F2(iLocal_1011, 1, 0);
					unk_0xA8F22633ACC22189(iLocal_1011, 0);
					iLocal_1011 = 0;
				}
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					iVar12 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0x86CCCD2FAE9D5E65(iVar12) && unk_0x7404950238A154C2(iVar12, 0))
					{
						unk_0xB067093BBAF0A747(iVar12, Local_520.f_73[2 /*4*/], 1, 0, 0, 1);
						unk_0xC24172029826A66F(iVar12, Local_520.f_73[2 /*4*/].f_3);
						unk_0x5CC9D6711FE01F0D(iVar12);
						unk_0x270066FDBAF3A458(0f);
						unk_0xEAB527164AD92BF3(0f, 1065353216);
					}
				}
				unk_0xF1BC58601CA4A5C7(1);
				unk_0x3BF4F473786B0150(1);
				func_180(0, 1, 1, 0);
				unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
				if (iLocal_986 > 0)
				{
					unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), iLocal_986, 0);
					unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
				}
				if (((unk_0x86CCCD2FAE9D5E65(iLocal_1001) && unk_0xE86442941AE40E75(iLocal_1001)) && unk_0x46AE53A47E5D03D5(iLocal_1001, 0)) && iLocal_1001 != func_28(24))
				{
					unk_0xE0913C01F5C0CC3D(&iLocal_1001);
				}
				unk_0xC69E84EBBD7166E6(&(Local_648.f_9), 25);
				iLocal_1005 = 0;
				Local_401.f_3 = 18;
				break;
			
			case 18:
				if (unk_0xECDEA377354CBDA4())
				{
					Local_401.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_67889.f_577)
		{
			func_144(49, 1);
			func_142(49, 1);
			Global_67889.f_577 = 0;
		}
		Local_401.f_3 = 0;
		if (iLocal_630 != -1)
		{
			func_48(&iLocal_630);
		}
	}
	if (Global_67889.f_577)
	{
		unk_0x11E88667179DE9C6();
		func_141();
		func_55();
		unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
		unk_0x89086B596828ACBE(2, 202);
		unk_0xDE1125A413AF241C(0, 37, 1);
		unk_0xDE1125A413AF241C(0, 157, 1);
		unk_0xDE1125A413AF241C(0, 158, 1);
		unk_0xDE1125A413AF241C(0, 159, 1);
		unk_0xDE1125A413AF241C(0, 160, 1);
		unk_0xDE1125A413AF241C(0, 161, 1);
		unk_0xDE1125A413AF241C(0, 162, 1);
		unk_0xDE1125A413AF241C(0, 163, 1);
		unk_0xDE1125A413AF241C(0, 164, 1);
		unk_0xDE1125A413AF241C(0, 165, 1);
		unk_0xDE1125A413AF241C(0, 14, 1);
		unk_0xDE1125A413AF241C(0, 15, 1);
		unk_0xDE1125A413AF241C(0, 53, 1);
		unk_0xDE1125A413AF241C(0, 54, 1);
		unk_0xDE1125A413AF241C(0, 140, 1);
		unk_0xDE1125A413AF241C(0, 141, 1);
		unk_0xDE1125A413AF241C(0, 142, 1);
		unk_0xDE1125A413AF241C(0, 143, 1);
		unk_0xDE1125A413AF241C(0, 143, 1);
		unk_0xDE1125A413AF241C(0, 47, 1);
		unk_0xDE1125A413AF241C(0, 38, 1);
		unk_0xDE1125A413AF241C(0, 22, 1);
		unk_0xDE1125A413AF241C(0, 102, 1);
		unk_0xDE1125A413AF241C(0, 69, 1);
		unk_0xDE1125A413AF241C(0, 70, 1);
		unk_0xDE1125A413AF241C(0, 68, 1);
		unk_0xDE1125A413AF241C(0, 92, 1);
		unk_0xDE1125A413AF241C(0, 99, 1);
		unk_0xDE1125A413AF241C(0, 115, 1);
		unk_0xDE1125A413AF241C(0, 46, 1);
		unk_0xDE1125A413AF241C(0, 25, 1);
	}
	if (!bVar11 && Local_401.f_2 == 0)
	{
		if (unk_0xA83A609D74168B30())
		{
			if (!unk_0xB318FDA0D1ABDB20(&cLocal_997))
			{
				if ((((func_130("WEB_VEH_INV") || func_130("WEB_VEH_FULL")) || func_130("CAR_GAR_05")) || func_130("CAR_GAR_06")) || func_130("CAR_GAR_EXIT"))
				{
					unk_0xB8BB626315D394F5(1);
				}
				StringCopy(&cLocal_997, "", 16);
			}
		}
	}
}

void func_141()
{
	Global_17099.f_6 = 1;
}

void func_142(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_143(iParam0) };
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_31307[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_31307[Var0.f_1]), Var0.f_0);
	}
}

struct<2> func_143(var uParam0)
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
	while (iVar1 < 2)
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

void func_144(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_143(iParam0) };
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_31304[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_31304[Var0.f_1]), Var0.f_0);
	}
}

float func_145(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Param1, iParam4);
}

void func_146(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_8(iParam0) && unk_0x86CCCD2FAE9D5E65(*iParam1)) && unk_0x7404950238A154C2(*iParam1, 0))
	{
		if (iParam2 > Global_98931.f_1750.f_539.f_1635)
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
			func_14(*iParam1, iParam0);
		}
		if (unk_0xBE23E5C609DF6E79(*iParam1) != 0)
		{
			unk_0xF196EBA065B17452(*iParam1, 0);
		}
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/] = unk_0x14B7103DBD149FFE(*iParam1);
		if (unk_0xDE56943EA8AE17DC(*iParam1, &iVar1))
		{
			Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x14B7103DBD149FFE(iVar1);
		}
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x531DDCEA74D8044A(*iParam1);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x4DC6EF945236C0F7(*iParam1);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x5CBBEE14743C3376(*iParam1, 1);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x5CBBEE14743C3376(*iParam1, 2);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x5CBBEE14743C3376(*iParam1, 3);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x5CBBEE14743C3376(*iParam1, 4);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x5CBBEE14743C3376(*iParam1, 5);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x5CBBEE14743C3376(*iParam1, 6);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x5CBBEE14743C3376(*iParam1, 7);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x5CBBEE14743C3376(*iParam1, 8);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x5CBBEE14743C3376(*iParam1, 9);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x5CBBEE14743C3376(*iParam1, 10);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x5CBBEE14743C3376(*iParam1, 11);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x5CBBEE14743C3376(*iParam1, 12);
		if (unk_0xD31A4E6B116BE250(*iParam1, 0))
		{
			iVar2 = unk_0x48D44DDE1A5A9BD7(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x2595B211F055F9FB();
		StringCopy(&(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0xE0DCE5625B61B0CC(*iParam1), 16);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0xBF74E89FC6941108(*iParam1);
		unk_0x1D3AAB0507DD3600(*iParam1, &(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x6942D519F6FE2C32(*iParam1, &(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xB931B48FB3E13CF0(*iParam1, &(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x263B56EFBC6AC36C(*iParam1);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x48F64101B58EB7F7(*iParam1);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0xA3EFB2F9FFCDC48D(*iParam1);
		Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0xBB644BAE860F67B7(*iParam1);
		unk_0x3182B161F39E40BC(*iParam1, &(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x1CD308F8479FBE52(*iParam1, 2))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x1CD308F8479FBE52(*iParam1, 3))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x1CD308F8479FBE52(*iParam1, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x1CD308F8479FBE52(*iParam1, 1))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_98931.f_1750.f_539.f_3545[iParam0] = 10;
		if ((unk_0x7EB3D63AEC4CEA95(*iParam1) >= 0 && unk_0x7EB3D63AEC4CEA95(*iParam1) < 255) && func_150(*iParam1, 0, &uVar0))
		{
			func_17(iParam1, &(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_98931.f_24567[iParam0 /*43*/].f_40 = 1;
				Global_98931.f_24567[iParam0 /*43*/] = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/];
				Global_98931.f_24567[iParam0 /*43*/].f_3 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_98931.f_24567[iParam0 /*43*/].f_4 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_98931.f_24567[iParam0 /*43*/].f_5 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_98931.f_24567[iParam0 /*43*/].f_6 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_98931.f_24567[iParam0 /*43*/].f_10 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_98931.f_24567[iParam0 /*43*/].f_16 = !Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_98931.f_24567[iParam0 /*43*/].f_19 = { Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_98931.f_24567[iParam0 /*43*/].f_23 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_98931.f_24567[iParam0 /*43*/].f_7 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_98931.f_24567[iParam0 /*43*/].f_8 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_98931.f_24567[iParam0 /*43*/].f_9 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_98931.f_24567[iParam0 /*43*/].f_11 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_98931.f_24567[iParam0 /*43*/].f_12 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_98931.f_24567[iParam0 /*43*/].f_13 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_98931.f_24567[iParam0 /*43*/].f_14 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_98931.f_24567[iParam0 /*43*/].f_15 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_98931.f_24567[iParam0 /*43*/].f_18 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_98931.f_24567[iParam0 /*43*/].f_17 = Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_98931.f_24567[iParam0 /*43*/].f_24 = unk_0x728464249800975B(*iParam1, 11) + 1;
				Global_98931.f_24567[iParam0 /*43*/].f_25 = unk_0x728464249800975B(*iParam1, 12) + 1;
				Global_98931.f_24567[iParam0 /*43*/].f_26 = unk_0x728464249800975B(*iParam1, 4) + 1;
				Global_98931.f_24567[iParam0 /*43*/].f_27 = unk_0x728464249800975B(*iParam1, 23) + 1;
				Global_98931.f_24567[iParam0 /*43*/].f_28 = unk_0x728464249800975B(*iParam1, 14) + 1;
				Global_98931.f_24567[iParam0 /*43*/].f_29 = unk_0x728464249800975B(*iParam1, 16) + 1;
				Global_98931.f_24567[iParam0 /*43*/].f_30 = unk_0x728464249800975B(*iParam1, 15) + 1;
				Global_98931.f_24567[iParam0 /*43*/].f_32 = unk_0x48B3C22DB36EA9A7(*iParam1);
				Global_98931.f_24567[iParam0 /*43*/].f_33[0] = unk_0x763094F8A1B6A0AF(*iParam1);
				Global_98931.f_24567[iParam0 /*43*/].f_33[1] = unk_0x08FF8DDE3FAB1AA5(*iParam1, 14, 0);
				Global_98931.f_24567[iParam0 /*43*/].f_33[2] = unk_0x08FF8DDE3FAB1AA5(*iParam1, 14, 1);
				Global_98931.f_24567[iParam0 /*43*/].f_33[3] = unk_0x08FF8DDE3FAB1AA5(*iParam1, 14, 2);
				Global_98931.f_24567[iParam0 /*43*/].f_33[4] = unk_0x08FF8DDE3FAB1AA5(*iParam1, 14, 3);
				Global_98931.f_24567[iParam0 /*43*/].f_39 = unk_0x754926D78E9BB370(*iParam1);
				Global_98931.f_24567[iParam0 /*43*/].f_31 = func_149(*iParam1);
				Global_98931.f_24567[iParam0 /*43*/].f_33[0] = unk_0x896C60E6639E0BE2(*iParam1);
				unk_0x6B94967A08A3EBDC(*iParam1, &iVar4, &uVar5, &uVar6);
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
				func_147(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_98931.f_24567[iParam0 /*43*/].f_1));
				unk_0x11F6A7CA94B19988(*iParam1, &iVar4, &uVar5);
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
				func_147(Global_98931.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_98931.f_24567[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_147(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_148(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
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

bool func_148(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
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

float func_149(int iParam0)
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
	if (((unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0)) && unk_0x7EB3D63AEC4CEA95(iParam0) >= 0) && unk_0x7EB3D63AEC4CEA95(iParam0) < 255)
	{
		if (unk_0x754926D78E9BB370(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x754926D78E9BB370(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x754926D78E9BB370(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x754926D78E9BB370(iParam0) == 0)
		{
			if (unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(iParam0)))
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

int func_150(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	if (!unk_0x7404950238A154C2(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xA84E120D1B16B142(unk_0x14B7103DBD149FFE(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	if (!func_151(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (unk_0x8807D8929DF94A13(iParam0))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x1C6DF6AD69BE853E())
	{
		if ((func_41(iParam0) && unk_0x14B7103DBD149FFE(iParam0) != joaat("sentinel2")) && unk_0x14B7103DBD149FFE(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_151(int iParam0, bool bParam1, var uParam2)
{
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
	if (((!unk_0x61A26017817C6AED(iParam0) && !unk_0xC5ABD699DDC9D5A0(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("insurgent") || iParam0 == joaat("technical"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_152(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x1C6DF6AD69BE853E())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_152(int iParam0)
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

int func_153()
{
	int iVar0;
	
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x86CCCD2FAE9D5E65(iVar0) && unk_0x7404950238A154C2(iVar0, 0))
		{
			if (iVar0 == Global_67889.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_67889.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_67889.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_67889.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_67889.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_67889.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_67889.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_67889.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_67889.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_67889.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_67889.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_67889.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_154()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

void func_155(int iParam0)
{
	if ((unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0)) && iParam0 == Global_68794)
	{
		Global_98931.f_18731.f_5588 = 0;
		Global_68794 = 0;
	}
}

int func_156(int iParam0, struct<4> Param1, var uParam5, var uParam6, struct<3> Param7, float fParam10, struct<4> Param11, int iParam15, float fParam16)
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
	if (iLocal_1007 == 0)
	{
		iVar12 = unk_0xE68E6B44DABA9C05(uParam0, 0);
		iLocal_1011 = iVar12;
		unk_0xE6116B2B5D358CE9(iLocal_1011, 1);
		unk_0xC390A6485FB80923(iLocal_1011, 1);
		unk_0x5CC9D6711FE01F0D(iLocal_1011);
		unk_0x686D6CDC14C4BA6C(iLocal_1011, 1, 1);
		if (unk_0xA5E670E54C660F1A(iParam0))
		{
			unk_0x0EA489DE9D8C3BBC(iParam0, 0, 0, -1);
			unk_0x06618C182FDAA45F(iParam0, 1);
		}
		Var13 = { unk_0xB6AE0DAE06D56288(iLocal_1011, 1) };
		fLocal_1012 = (Var13.f_2 - Var0.f_2);
		unk_0xB067093BBAF0A747(iLocal_1011, Var0 + Vector(-10f, 0f, 0f), 1, 0, 0, 1);
		if (unk_0x7404950238A154C2(iLocal_1011, 0))
		{
			unk_0x69AA788B6BA4CB68(iLocal_1011, 3);
		}
		iLocal_1013 = unk_0x48E480685981C7D4();
		iLocal_1007 = 1;
	}
	if (iLocal_1007 == 1)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_1011) && unk_0x7404950238A154C2(iLocal_1011, 0))
		{
			fVar16 = unk_0xBBDA792448DB5A89(iLocal_1013);
			fVar17 = (fVar16 + fParam10);
			fVar18 = func_163(unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()), fVar16, fVar17);
			fVar18 = (fVar18 - fVar16);
			fVar18 = (fVar18 / fParam10);
			if (iParam15 == 1)
			{
				fVar18 = func_162(fVar18);
			}
			else if (iParam15 == 2)
			{
				fVar18 = func_161(fVar18);
			}
			else if (iParam15 == 3)
			{
				fVar18 = func_159(fVar18);
			}
			fVar18 = (fVar18 * fParam10);
			fVar18 = (fVar18 + fVar16);
			unk_0xDE1125A413AF241C(0, 72, 1);
			unk_0xB901CB880393ADF7(iLocal_1011, func_157(Var0 + Vector(fLocal_1012, 0f, 0f), Var6 + Vector(fLocal_1012, 0f, 0f), fVar16, fVar17, fVar18), 0, 0, 1);
			if (iLocal_1008 && !unk_0xA5E670E54C660F1A(iParam0))
			{
				unk_0x3A45EB0810EBE71C(iLocal_1011, func_157((0f - Var3.f_0), (0f - Var3.f_1), (Var3.f_2 + 180f), (0f - Var9.f_0), (0f - Var9.f_1), (Var9.f_2 + 180f), fVar16, fVar17, fVar18), 2, 1);
			}
			else
			{
				if (!unk_0x5FEB513A4402FD59(iParam0))
				{
					if (unk_0xA5E670E54C660F1A(iParam0))
					{
						unk_0x0B895A812F665A52(iParam0, 236, 1);
						unk_0x0B895A812F665A52(iParam0, 309, 1);
					}
				}
				unk_0x3A45EB0810EBE71C(iLocal_1011, func_157(Var3, Var9, fVar16, fVar17, fVar18), 2, 1);
			}
			unk_0x5CEA5F12775261F2(iLocal_1011, 0, 0);
			unk_0xA8F22633ACC22189(iLocal_1011, 1);
		}
		else
		{
			iLocal_1007 = 2;
			return 0;
		}
		if (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) > (unk_0xBBDA792448DB5A89(iLocal_1013) + fParam10) && unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) > ((unk_0xBBDA792448DB5A89(iLocal_1013) + fParam10) + 2600f))
		{
			iLocal_1007 = 2;
			return 0;
		}
	}
	if (iLocal_1007 == 2)
	{
		unk_0x0B895A812F665A52(iParam0, 236, 0);
		unk_0x0B895A812F665A52(iParam0, 309, 0);
		if (unk_0x86CCCD2FAE9D5E65(iLocal_1011))
		{
			if (!func_4(Param11, 0f, 0f, 0f, 0))
			{
				unk_0xB067093BBAF0A747(iLocal_1011, Param11, 1, 0, 0, 1);
				unk_0xC24172029826A66F(iLocal_1011, Param11.f_3);
				unk_0x5CC9D6711FE01F0D(iLocal_1011);
			}
			unk_0x5CEA5F12775261F2(iLocal_1011, 1, 0);
			unk_0xA8F22633ACC22189(iLocal_1011, 0);
			iLocal_1011 = 0;
		}
		if (unk_0xA5E670E54C660F1A(iParam0))
		{
			unk_0x78693D09089780B5(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_157(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_158(Param0.f_0, Param3.f_0, fParam6, fParam7, fParam8), func_158(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_158(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_158(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_159(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = unk_0x0BADBFA3B172435F(func_160(((fParam0 * 3.141593f) * 0.5f)));
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

float func_160(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_161(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - unk_0xD0FFB162F40A139C(func_160(((fParam0 * 3.141593f) * 0.5f))));
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

float func_162(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - unk_0xD0FFB162F40A139C(func_160((fParam0 * 3.141593f)))));
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

float func_163(float fParam0, float fParam1, float fParam2)
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

void func_164()
{
	Global_67889.f_553 = 1;
	Global_67889.f_554 = 0;
}

void func_165(var uParam0)
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
		iLocal_116[iVar2] = Global_98931.f_18731.f_69[iVar1 /*78*/].f_66;
		if (iLocal_116[iVar2] != 0)
		{
			if (!unk_0x236D8AD7EE179F46(uLocal_47[iVar2], 2))
			{
				unk_0x32A12757CBF48A33(iLocal_116[iVar2]);
				unk_0xF3148AAF69AF9CBC(&(uLocal_47[iVar2]), 2);
				func_322(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_166()
{
	return !Global_67889.f_553;
}

void func_167(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_40(&(Global_67889.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x0D6E79537424BACE(Param0, Global_67889.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_168(iVar0);
			}
		}
		iVar0++;
	}
}

void func_168(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_40(&(Global_67889.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7404950238A154C2(Global_67889.f_139[iParam0], 0))
				{
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Global_67889.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xD768713E73165208(Global_67889.f_139[iParam0], 1, 1);
				unk_0x5D00E836B6BE8693(&(Global_67889.f_139[iParam0]));
			}
		}
		Global_67889[iParam0] = 1;
		if (unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_46(iParam0, 0)) && Global_68798.f_66 == 0) && Global_98931.f_18731.f_1958[Global_67889.f_555[0 /*21*/].f_14] != 0) && Global_98931.f_18731.f_1958[Global_67889.f_555[0 /*21*/].f_14] > 3) && (!func_169(0, Global_67889.f_555[0 /*21*/].f_12) || !func_169(1, Global_67889.f_555[0 /*21*/].f_12)))
			{
				func_91(&(Global_98931.f_18731.f_69[Global_67889.f_555[0 /*21*/].f_14 /*78*/]), &Global_68798);
				Global_68876 = Global_98931.f_18731.f_5591;
			}
			func_324(iParam0, 0);
		}
	}
}

int func_169(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_170(&(Global_98931.f_18731.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_21(Global_98931.f_18731.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66);
}

int func_170(var uParam0)
{
	return *uParam0;
}

void func_171(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[25]) && unk_0x7404950238A154C2(Global_67889.f_484[25], 0))
			{
				if (Global_67889.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x8807D8929DF94A13(iParam0) || unk_0x14B7103DBD149FFE(iParam0) == joaat("bus")) || unk_0x14B7103DBD149FFE(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_172(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_15(iParam0, &Var0);
		if (func_4(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
			fParam4 = unk_0x3306AAAFE3B25098(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) != joaat("vehicle_gen_controller"))
			{
				Global_68877 = unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424());
			}
		}
		func_90(iParam5, &Var0, Param1, fParam4, func_25(iParam0));
		func_13(iParam5, iParam0, 0);
	}
}

void func_172(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_92(iParam0);
	func_324(iParam0, 0);
}

int func_173(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_20(uParam0->f_66))
	{
		return 0;
	}
	if (unk_0x86CCCD2FAE9D5E65(Global_68795))
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
	if (!func_169(0, iParam1))
	{
		Global_98931.f_18731.f_5592[iVar0] = 0;
	}
	else if (!func_169(1, iParam1))
	{
		Global_98931.f_18731.f_5592[iVar0] = 1;
	}
	func_174(iParam1, unk_0x60793BDBCF1CD039(uParam0->f_66));
	func_91(uParam0, &(Global_98931.f_18731.f_5038[iVar0 /*157*/][Global_98931.f_18731.f_5592[iVar0] /*78*/]));
	Global_98931.f_18731.f_5592[iVar0]++;
	if (Global_98931.f_18731.f_5592[iVar0] >= func_170(&(Global_98931.f_18731.f_5038[iVar0 /*157*/])))
	{
		Global_98931.f_18731.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_90278[iVar0 /*98*/] == uParam0->f_66 && unk_0xD994929E13CC1ED5(&(Global_90278[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_90278[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_174(int iParam0, char* sParam1)
{
	if (!func_8(iParam0))
	{
		return;
	}
	if (!Global_98931.f_18731.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_175("IMPOUND_HELPM", sParam1, 2, unk_0x2E0A9E3291F398E3(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_175("IMPOUND_HELPF", sParam1, 2, unk_0x2E0A9E3291F398E3(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_175("IMPOUND_HELPT", sParam1, 2, unk_0x2E0A9E3291F398E3(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_98931.f_18731.f_5596[iParam0] = 1;
	}
}

void func_175(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_176(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_176(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD994929E13CC1ED5(sParam0, ""))
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
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_98931.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_8 = (unk_0x48E480685981C7D4() + iParam3);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = ((unk_0x48E480685981C7D4() + iParam3) + iParam4);
		}
		else
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_98931.f_24859.f_145++;
		func_177();
	}
}

void func_177()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_98931.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[0])
			{
				Global_98931.f_24859.f_146[0] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[1])
			{
				Global_98931.f_24859.f_146[1] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[2])
			{
				Global_98931.f_24859.f_146[2] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_178(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_40(&(Global_67889.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_91(&(Global_98931.f_18731.f_69[Global_67889.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

int func_179(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x42E36F2D658EB2FF(*uParam1))
	{
		unk_0x35B958B469415A23(*uParam1, 0);
	}
	if (unk_0x42E36F2D658EB2FF(*uParam2))
	{
		unk_0x35B958B469415A23(*uParam2, 0);
	}
	*uParam1 = unk_0xAAC4D4F273757469("DEFAULT_SCRIPTED_CAMERA", 0);
	*uParam2 = unk_0xAAC4D4F273757469("DEFAULT_SCRIPTED_CAMERA", 0);
	if (unk_0x42E36F2D658EB2FF(*uParam1) && unk_0x42E36F2D658EB2FF(*uParam2))
	{
		unk_0xD68C8B031E2BDFA7(*uParam1, *uParam0);
		unk_0x19F9FD4DDAD99CB2(*uParam1, uParam0->f_3, 2);
		unk_0xBF1C17EB7F681E53(*uParam1, uParam0->f_12);
		unk_0xD68C8B031E2BDFA7(*uParam2, uParam0->f_6);
		unk_0x19F9FD4DDAD99CB2(*uParam2, uParam0->f_6.f_3, 2);
		unk_0xBF1C17EB7F681E53(*uParam2, uParam0->f_12);
		unk_0x4BC806FF702341FC(*uParam1, "HAND_SHAKE", uParam0->f_13);
		unk_0x4BC806FF702341FC(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			unk_0x2CD388BEA8B3C5E8(*uParam2, *uParam1, unk_0xF2DB717A73826179((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			unk_0xDD0B0D77CB8995B1(*uParam1, 1);
		}
		unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_180(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_184(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_57())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_183(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_184(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_183(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_181(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
	}
}

int func_181(int iParam0)
{
	if (func_69(iParam0, 0))
	{
		return 1;
	}
	if (func_182())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_182()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

int func_183(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_184(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

int func_185(int iParam0)
{
	func_40(&(Global_67889.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_67889.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_186(26))
			{
				return 26;
			}
			if (!func_186(29))
			{
				return 29;
			}
			if (!func_186(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_67889.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_186(27))
			{
				return 27;
			}
			if (!func_186(30))
			{
				return 30;
			}
			if (!func_186(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_67889.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_186(28))
			{
				return 28;
			}
			if (!func_186(31))
			{
				return 31;
			}
			if (!func_186(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_186(int iParam0)
{
	return func_46(iParam0, 0);
}

void func_187(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_189(iParam0, &iVar1);
	if (!unk_0xD994929E13CC1ED5("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x722B1277ED8601B6(iVar1))
			{
				return;
			}
			if (unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == iVar1)
			{
				func_142(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x722B1277ED8601B6(iVar1))
			{
				return;
			}
			if (func_188(iParam0))
			{
				func_142(iParam0, 0);
			}
		}
		unk_0x1409374EEBBAEF54(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_188(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_143(iParam0) };
	if (unk_0x236D8AD7EE179F46(Global_31307[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

var func_189(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_190(iParam0) };
	*iParam1 = unk_0xA17AB437A96481B6(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_190(int iParam0)
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
			Var5 = { func_191(1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_191(2) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_191(3) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_191(4) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_191(5) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_191(6) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_191(7) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049033[34 /*1485*/].f_146.f_1101 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_191(35) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_191(36) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_191(37) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_191(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_191(39) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_191(40) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_191(41) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_191(42) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_191(43) };
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
		
		case 47:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 48:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 49:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 50:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_191(int iParam0)
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
	}
	return Var0;
}

void func_192(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_189(iParam0, &iVar1);
	if (!unk_0xD994929E13CC1ED5("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0x40586AF584867C8F(iVar1))
		{
			if (unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == iVar1)
			{
				func_144(iParam0, 1);
				return;
			}
			unk_0xF77A1EACBDA473DD(iVar1, 1);
		}
		else if (!bParam1 && unk_0x40586AF584867C8F(iVar1))
		{
			if (func_193(iParam0))
			{
				func_144(iParam0, 0);
			}
			unk_0xF77A1EACBDA473DD(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_193(iParam0))
			{
				func_144(iParam0, 0);
			}
		}
	}
}

int func_193(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_143(iParam0) };
	if (unk_0x236D8AD7EE179F46(Global_31304[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || func_185(Local_401.f_0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_195(float fParam0, float fParam1, float fParam2)
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

int func_196(int iParam0)
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

int func_197(int iParam0, var uParam1)
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

int func_198()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

void func_199()
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
	
	if ((((((unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) || func_10(0)) || func_10(3)) || func_10(2)) || func_10(4)) || func_10(14)) || !func_8(iLocal_646))
	{
		return;
	}
	if (!Global_67710)
	{
		if (Global_98931.f_18731.f_1982[iLocal_646 /*939*/].f_626[iLocal_829] != -15)
		{
			if (!Global_67889[Global_98931.f_18731.f_1982[iLocal_646 /*939*/].f_313[iLocal_829]])
			{
				if (func_250(func_29(), Global_98931.f_18731.f_1982[iLocal_646 /*939*/].f_626[iLocal_829]))
				{
					iVar0 = Global_98931.f_18731.f_1982[iLocal_646 /*939*/][iLocal_829];
					func_248(iVar0, iLocal_829, iLocal_646);
					func_40(&Var1, Global_98931.f_18731.f_1982[iLocal_646 /*939*/].f_313[iLocal_829]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_324(Global_98931.f_18731.f_1982[iLocal_646 /*939*/].f_313[iLocal_829], 1);
					}
					Global_98931.f_18731.f_1982[iLocal_646 /*939*/].f_626[iLocal_829] = -15;
				}
			}
		}
		iLocal_829++;
		if (iLocal_829 >= 312)
		{
			iLocal_829 = 0;
		}
	}
	if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) != Local_401.f_7 || Local_401.f_2 == 99)
	{
		if (Local_401.f_5 != -1)
		{
			func_48(&(Local_401.f_5));
		}
		if (Local_401.f_2 > 0)
		{
			unk_0xB8BB626315D394F5(1);
		}
		Local_401.f_7 = unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE());
		Local_401.f_5 = -1;
		Local_401.f_2 = 0;
		Local_401.f_4 = 0;
		if (bLocal_828)
		{
			if (unk_0xA83A609D74168B30())
			{
				unk_0xB8BB626315D394F5(1);
			}
			unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
			if (unk_0x42E36F2D658EB2FF(Local_401.f_110))
			{
				unk_0xDD0B0D77CB8995B1(Local_401.f_110, 0);
				unk_0x35B958B469415A23(Local_401.f_110, 0);
			}
			if (unk_0x42E36F2D658EB2FF(Local_401.f_111))
			{
				unk_0xDD0B0D77CB8995B1(Local_401.f_111, 0);
				unk_0x35B958B469415A23(Local_401.f_111, 0);
			}
			unk_0xABA9860C0161F3CD(unk_0x81873881071CD9FE(), 1);
			unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), 0);
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
				unk_0x0B8AC09F18292E35(unk_0x1329891157A54C63(), 0);
			}
			iVar22 = unk_0x2ADE2CEED2637E95();
			if (unk_0x86CCCD2FAE9D5E65(iVar22) && unk_0x7404950238A154C2(iVar22, 0))
			{
				unk_0xABA9860C0161F3CD(iVar22, 1);
				unk_0xA8F22633ACC22189(iVar22, 0);
				if (unk_0x46AE53A47E5D03D5(iVar22, 1))
				{
					unk_0xE0913C01F5C0CC3D(&iVar22);
				}
			}
			iVar23 = 5000;
			iVar24 = unk_0x48E480685981C7D4();
			while (!unk_0xC10A1C8C852AB41D() && (unk_0x48E480685981C7D4() - iVar24) < iVar23)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (unk_0x59F36F53A82C2E72(Local_401.f_112))
			{
				unk_0x2912C2F5F69CF538(Local_401.f_112);
			}
			StringCopy(&Global_32247, "", 32);
			if ((Local_401.f_0 == 21 || Local_401.f_0 == 22) || Local_401.f_0 == 23)
			{
				func_192(49, 1);
				func_187(49, 1);
			}
			unk_0x5AD73EF670D05F7D();
			unk_0x3E52122FBF3FC64C();
			unk_0xF1BC58601CA4A5C7(1);
			unk_0x3BF4F473786B0150(1);
			func_180(0, 1, 1, 0);
			bLocal_828 = false;
			Global_25199 = 0;
		}
	}
	bVar25 = false;
	if ((((((((((((!bLocal_828 && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0)) || (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) && !Local_401.f_29.f_69)) || (!unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()) && !unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))) || (!bLocal_828 && func_46(Local_401.f_0, 5))) || (!bLocal_828 && unk_0x093DEAE9A023FAA0(2, 199))) || (!bLocal_828 && unk_0xDB10DED5ABC4AA20())) || !func_246(0)) || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || unk_0x9CE1E63C565B0EFC(unk_0x81873881071CD9FE())) || unk_0x3ABE1D6542902581(unk_0x81873881071CD9FE())) || Global_25096) || (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0x70847137E3B37A59(unk_0x81873881071CD9FE())))
	{
		if (Local_401.f_2 > 0 && Local_401.f_2 != 90)
		{
			iLocal_988 = 1;
			Local_401.f_2 = 99;
		}
		bVar25 = true;
	}
	fVar30 = 20f;
	iVar31 = 3;
	switch (Local_401.f_2)
	{
		case 0:
			if ((((Local_401.f_0 != -1 && func_46(Local_401.f_0, 0)) && !func_46(Local_401.f_0, 5)) && !bLocal_989) && !bVar25)
			{
				if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0) && !unk_0xA83A609D74168B30())
				{
					cVar26 = { Local_401.f_29.f_63 };
					StringConCat(&cVar26, "_01", 16);
					func_131(&(Local_401.f_5), 3, &cVar26, 0, 0, 0);
					Local_401.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_126(Local_401.f_5, 1))
			{
				if (func_245(iLocal_646) < Local_401.f_29.f_67)
				{
					Local_401.f_4 = unk_0x48E480685981C7D4();
					func_48(&(Local_401.f_5));
					iLocal_643 = 0;
					Local_401.f_2 = 90;
				}
				else
				{
					iLocal_643 = 0;
					Local_401.f_4 = unk_0x48E480685981C7D4();
					func_48(&(Local_401.f_5));
					Local_401.f_2 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_643++;
			if (iLocal_643 >= 3)
			{
				cVar26 = { Local_401.f_29.f_63 };
				StringConCat(&cVar26, "_02", 16);
				func_131(&(Local_401.f_5), 3, &cVar26, 0, 0, 0);
				Local_401.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_126(Local_401.f_5, 1))
			{
				if (func_245(iLocal_646) < Local_401.f_29.f_67)
				{
					Local_401.f_4 = unk_0x48E480685981C7D4();
					Local_401.f_2 = 90;
				}
				else
				{
					unk_0x35D7948F61AA3FEC(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 1);
					bLocal_828 = false;
					if ((Local_401.f_0 == 15 || Local_401.f_0 == 17) || Local_401.f_0 == 16)
					{
						Local_515.f_4 = 113;
						bLocal_828 = true;
					}
					else if (Local_401.f_0 == 18 || Local_401.f_0 == 19)
					{
						Local_515.f_4 = 115;
						bLocal_828 = true;
					}
					else if (Local_401.f_0 == 12 || Local_401.f_0 == 13)
					{
						Local_515.f_4 = 114;
						bLocal_828 = true;
					}
					else if ((Local_401.f_0 == 21 || Local_401.f_0 == 22) || Local_401.f_0 == 23)
					{
						Local_515.f_4 = 116;
						bLocal_828 = true;
					}
					Local_515.f_0 = unk_0x95EF972E3A07B525("MIDSIZED_MESSAGE");
					Local_515.f_1 = 0;
					Local_515.f_3 = 0;
					Local_515.f_2 = 0;
					iLocal_830 = 1;
					Global_25199 = 1;
					if (bLocal_828)
					{
						if ((Local_401.f_0 == 21 || Local_401.f_0 == 22) || Local_401.f_0 == 23)
						{
							func_192(49, 0);
							func_187(49, 0);
							Local_401.f_112 = unk_0xA17AB437A96481B6(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (unk_0x59F36F53A82C2E72(Local_401.f_112))
							{
								if (!unk_0x9B710BA2688DD221(Local_401.f_112))
								{
									unk_0xC9C56731782E64CD(Local_401.f_112);
								}
								StringCopy(&Global_32247, "v_garagem_sp", 32);
							}
						}
						unk_0xE5BBA710593FB752(unk_0x1329891157A54C63(), 1);
						unk_0x5AD73EF670D05F7D();
						Local_401.f_4 = unk_0x48E480685981C7D4();
						Local_401.f_2 = 4;
					}
					else
					{
						Local_401.f_2 = 8;
					}
					func_48(&(Local_401.f_5));
				}
			}
			break;
		
		case 4:
			bVar35 = true;
			if ((Local_401.f_0 == 21 || Local_401.f_0 == 22) || Local_401.f_0 == 23)
			{
				Local_401.f_112 = unk_0xA17AB437A96481B6(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!unk_0x59F36F53A82C2E72(Local_401.f_112) || unk_0x40586AF584867C8F(Local_401.f_112)) || unk_0x722B1277ED8601B6(Local_401.f_112))
				{
					func_192(49, 0);
					func_187(49, 0);
					bVar35 = false;
				}
			}
			if (bVar35)
			{
				if (Local_401.f_0 == 12)
				{
					fVar30 = 95f;
					iVar31 = 2;
				}
				else if (Local_401.f_0 == 13)
				{
					fVar30 = 150f;
					iVar31 = 2;
				}
				else if ((Local_401.f_0 == 21 || Local_401.f_0 == 22) || Local_401.f_0 == 23)
				{
					fVar30 = 150f;
					iVar31 = 2;
				}
				Var32 = { unk_0xD0FFB162F40A139C((Local_401.f_29.f_14.f_3.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_401.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if ((Local_401.f_0 == 21 || Local_401.f_0 == 22) || Local_401.f_0 == 23)
				{
					if (unk_0x3DEBEEC5B1D7D4C5(200.4651f, -1020.631f, -100f, 50f, 0) || (unk_0x48E480685981C7D4() - Local_401.f_4) > 3500)
					{
						Local_401.f_4 = unk_0x48E480685981C7D4();
						Local_401.f_2 = 5;
					}
				}
				else if (unk_0x7E2FE21B0F846986(Local_401.f_29.f_14, Var32, fVar30, iVar31) || (unk_0x48E480685981C7D4() - Local_401.f_4) > 3500)
				{
					Local_401.f_4 = unk_0x48E480685981C7D4();
					Local_401.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((unk_0x2CB3B76C90F08111() && unk_0xA5C3CFD413D647EA()) && (!unk_0x59F36F53A82C2E72(Local_401.f_112) || unk_0x9B710BA2688DD221(Local_401.f_112))) || (unk_0x48E480685981C7D4() - Local_401.f_4) > 10000)
			{
				Local_401.f_4 = unk_0x48E480685981C7D4();
				Local_401.f_2 = 6;
			}
			break;
		
		case 6:
			if ((unk_0x48E480685981C7D4() - Local_401.f_4) > 1000)
			{
				if ((unk_0x86CCCD2FAE9D5E65(iLocal_1001) && unk_0xE86442941AE40E75(iLocal_1001)) && unk_0x46AE53A47E5D03D5(iLocal_1001, 1))
				{
					unk_0xE0913C01F5C0CC3D(&iLocal_1001);
				}
				iLocal_1001 = unk_0x2ADE2CEED2637E95();
				if ((((unk_0x86CCCD2FAE9D5E65(iLocal_1001) && unk_0x7404950238A154C2(iLocal_1001, 0)) && !unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(iLocal_1001))) && !unk_0x1699D7B95446F15C(unk_0x14B7103DBD149FFE(iLocal_1001))) && !unk_0x9F59BCFFFEAAD4B1(unk_0x14B7103DBD149FFE(iLocal_1001)))
				{
					if (!unk_0xE86442941AE40E75(iLocal_1001))
					{
						unk_0xD768713E73165208(iLocal_1001, 0, 0);
					}
				}
				else
				{
					iLocal_1001 = 0;
				}
				unk_0xABA9860C0161F3CD(unk_0x81873881071CD9FE(), 0);
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), 1);
				}
				if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
				{
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 16);
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 32);
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 128);
					unk_0x0B8AC09F18292E35(unk_0x1329891157A54C63(), 1);
				}
				func_180(1, 1, 1, 0);
				unk_0xD1C83BD797927DD5();
				unk_0xB8BB626315D394F5(1);
				Var32 = { unk_0xD0FFB162F40A139C((Local_401.f_29.f_14.f_3.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_401.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_401.f_29.f_69)
				{
					unk_0x367C758C1C7849EF(Local_401.f_29.f_14, Var32);
				}
				if (!unk_0x42E36F2D658EB2FF(Local_401.f_110))
				{
					Local_401.f_110 = unk_0xAAC4D4F273757469("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				if (unk_0x42E36F2D658EB2FF(Local_401.f_110))
				{
					if (Local_401.f_29.f_69)
					{
						unk_0x9A7465274D411DCE("GtaMloRoom001");
					}
					func_180(1, 1, 1, 0);
					func_179(&(Local_401.f_29.f_14), &(Local_401.f_110), &(Local_401.f_111));
				}
				unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
				unk_0xF1BC58601CA4A5C7(0);
				unk_0x3BF4F473786B0150(0);
				unk_0x5AD73EF670D05F7D();
				Local_401.f_2 = 7;
				Local_401.f_4 = unk_0x48E480685981C7D4();
				func_48(&(Local_401.f_5));
			}
			break;
		
		case 7:
			if ((unk_0x48E480685981C7D4() - Local_401.f_4) < 7000 && !func_243(1000))
			{
				cVar26 = { Local_401.f_29.f_63 };
				StringConCat(&cVar26, "_05", 16);
				func_129(&cVar26, -1);
				if (!unk_0x2CB3B76C90F08111())
				{
					if (Local_401.f_0 == 12 || Local_401.f_0 == 13)
					{
						fVar30 = 85f;
						iVar31 = 2;
					}
					Var32 = { unk_0xD0FFB162F40A139C((Local_401.f_29.f_29.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_401.f_29.f_29.f_2 + 90f)), 0f };
					unk_0x7E2FE21B0F846986(Local_401.f_29.f_29, Var32, fVar30, iVar31);
				}
			}
			else
			{
				if (unk_0x42E36F2D658EB2FF(Local_401.f_110))
				{
					if (Local_401.f_29.f_69)
					{
						unk_0x9A7465274D411DCE("GtaMloRoom001");
					}
					func_180(1, 1, 1, 0);
					func_179(&(Local_401.f_29.f_29), &(Local_401.f_110), &(Local_401.f_111));
				}
				unk_0x3E52122FBF3FC64C();
				unk_0xB8BB626315D394F5(1);
				Local_401.f_4 = unk_0x48E480685981C7D4();
				Local_401.f_2 = 8;
			}
			break;
		
		case 8:
			if ((unk_0x48E480685981C7D4() - Local_401.f_4) < 7000 && !func_243(1000))
			{
				cVar26 = { Local_401.f_29.f_63 };
				StringConCat(&cVar26, "_06", 16);
				if (!unk_0xA83A609D74168B30())
				{
					func_129(&cVar26, 7000);
				}
			}
			else
			{
				unk_0xB8BB626315D394F5(1);
				Local_401.f_4 = unk_0x48E480685981C7D4();
				Local_401.f_2 = 9;
			}
			break;
		
		case 9:
			if ((unk_0x48E480685981C7D4() - Local_401.f_4) < 3500 && !func_243(1000))
			{
				cVar26 = { Local_401.f_29.f_63 };
				StringConCat(&cVar26, "_03", 16);
				if (unk_0xCC8E3BAC62A29F42(Local_515.f_0))
				{
					if (Local_515.f_1)
					{
						if (!Local_515.f_3)
						{
							unk_0x35D7948F61AA3FEC(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
							Local_515.f_3 = 1;
						}
						unk_0x88188CE25DF2572C(Local_515.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x21ED0FC9B5CC748B(Local_515.f_0, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_67(&cVar26);
						unk_0x723E3684EF582590();
						Local_515.f_1 = 1;
					}
				}
			}
			else if ((unk_0x48E480685981C7D4() - Local_401.f_4) < 4000 && !func_243(1000))
			{
				if (unk_0xCC8E3BAC62A29F42(Local_515.f_0))
				{
					if (Local_515.f_2)
					{
						unk_0x88188CE25DF2572C(Local_515.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x21ED0FC9B5CC748B(Local_515.f_0, "SHARD_ANIM_OUT");
						unk_0xBD0C54D89298454E(1);
						unk_0x518198639630AE08(0.33f);
						unk_0xBA9BA6181F2B6111();
						Local_515.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_828)
				{
					unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
					if (unk_0x42E36F2D658EB2FF(Local_401.f_110))
					{
						unk_0xDD0B0D77CB8995B1(Local_401.f_110, 0);
						unk_0x35B958B469415A23(Local_401.f_110, 0);
					}
					if (unk_0x42E36F2D658EB2FF(Local_401.f_111))
					{
						unk_0xDD0B0D77CB8995B1(Local_401.f_111, 0);
						unk_0x35B958B469415A23(Local_401.f_111, 0);
					}
					unk_0x270066FDBAF3A458(0f);
					unk_0xEAB527164AD92BF3(0f, 1065353216);
					unk_0xABA9860C0161F3CD(unk_0x81873881071CD9FE(), 1);
					unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), 0);
					iVar36 = unk_0x2ADE2CEED2637E95();
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
						unk_0x0B8AC09F18292E35(unk_0x1329891157A54C63(), 0);
						if ((unk_0x86CCCD2FAE9D5E65(iVar36) && unk_0x7404950238A154C2(iVar36, 0)) && unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iVar36, 0))
						{
							unk_0xB067093BBAF0A747(iVar36, Local_401.f_29.f_44, 1, 1, 0, 1);
							unk_0xC24172029826A66F(iVar36, Local_401.f_29.f_47);
							unk_0x5CC9D6711FE01F0D(iVar36);
						}
						else
						{
							unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Local_401.f_29.f_44, 1, 1, 0, 1);
							unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), Local_401.f_29.f_47);
						}
					}
					if (unk_0x86CCCD2FAE9D5E65(iLocal_1001) && unk_0x7404950238A154C2(iLocal_1001, 0))
					{
						iVar37 = func_28(24);
						if (func_178(&Local_750, 24))
						{
							func_173(&Local_750, func_318());
							if (unk_0x86CCCD2FAE9D5E65(iVar37))
							{
								unk_0x5D00E836B6BE8693(&iVar37);
							}
						}
						if (Local_401.f_0 == 21)
						{
							unk_0x7C6BF0CD5D7454C9(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
							unk_0xB067093BBAF0A747(iLocal_1001, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
							unk_0xC24172029826A66F(iLocal_1001, 154.4846f);
							func_171(iLocal_1001, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_401.f_0 == 22)
						{
							unk_0x7C6BF0CD5D7454C9(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
							unk_0xB067093BBAF0A747(iLocal_1001, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
							unk_0xC24172029826A66F(iLocal_1001, 319.6985f);
							func_171(iLocal_1001, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_401.f_0 == 23)
						{
							unk_0x7C6BF0CD5D7454C9(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
							unk_0xB067093BBAF0A747(iLocal_1001, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
							unk_0xC24172029826A66F(iLocal_1001, 270.8741f);
							func_171(iLocal_1001, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						unk_0x5CC9D6711FE01F0D(iLocal_1001);
					}
					if (unk_0x86CCCD2FAE9D5E65(iVar36) && unk_0x7404950238A154C2(iVar36, 0))
					{
						unk_0xABA9860C0161F3CD(iVar36, 1);
						unk_0xA8F22633ACC22189(iVar36, 0);
						if (unk_0x46AE53A47E5D03D5(iVar36, 1))
						{
							unk_0xE0913C01F5C0CC3D(&iVar36);
						}
					}
					iVar38 = 5000;
					iVar39 = unk_0x48E480685981C7D4();
					while (!unk_0xC10A1C8C852AB41D() && (unk_0x48E480685981C7D4() - iVar39) < iVar38)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (unk_0x59F36F53A82C2E72(Local_401.f_112))
					{
						unk_0x2912C2F5F69CF538(Local_401.f_112);
					}
					StringCopy(&Global_32247, "", 32);
					if ((Local_401.f_0 == 21 || Local_401.f_0 == 22) || Local_401.f_0 == 23)
					{
						func_192(49, 1);
						func_187(49, 1);
						Global_98931.f_18731.f_4800 = 1;
					}
					unk_0x5AD73EF670D05F7D();
					unk_0x3E52122FBF3FC64C();
					unk_0xF1BC58601CA4A5C7(1);
					unk_0x3BF4F473786B0150(1);
					func_180(0, 1, 1, 0);
					bLocal_828 = false;
					Global_25199 = 0;
				}
				if (unk_0xCC8E3BAC62A29F42(Local_515.f_0))
				{
					unk_0x4B6F01DE8CCE643E(&Local_515);
				}
				func_216(iLocal_646, Local_515.f_4, Local_401.f_29.f_67);
				func_215(Local_401.f_0, 5, 1);
				func_202(Local_401.f_0);
				if (unk_0xFBACB273AA628CC5(Global_67889.f_208[Local_401.f_0]))
				{
					unk_0x0A8175F24237A3D4(&(Global_67889.f_208[Local_401.f_0]));
				}
				iLocal_914 = Local_401.f_0;
				func_201();
				Local_401.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_643++;
			if (iLocal_643 >= 3)
			{
				if ((unk_0x48E480685981C7D4() - Local_401.f_4) < 4000)
				{
					cVar26 = { Local_401.f_29.f_63 };
					StringConCat(&cVar26, "_04", 16);
					func_200(&cVar26);
				}
				else
				{
					Local_401.f_2 = 99;
				}
			}
			break;
	}
}

void func_200(char[4] cParam0)
{
	unk_0x522099B37CAE9E12(cParam0);
	unk_0xC592EBAF1D879BDC(0, 1, 1, -1);
}

int func_201()
{
	if (func_139(0))
	{
		return 0;
	}
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

void func_202(int iParam0)
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
	func_214(iVar0, 0);
	iVar2 = func_213(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_212(iVar0);
		if (func_210(iVar0, iVar1, 1))
		{
			func_203(iVar0);
			func_212(iVar0);
		}
	}
}

void func_203(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_209(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45806[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_45806[iVar0 /*203*/].f_10[(Global_45806[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_45806[iVar0 /*203*/].f_9 - 1);
	if (!Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_208(Global_36506[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
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
		func_204(1, Global_36506[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_36506[iVar1 /*12*/].f_3)
		{
			case 0:
				func_204(0, Global_36506[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_204(1, Global_36506[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_204(2, Global_36506[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45806[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_204(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x521385D8214D27C4())
	{
		return;
	}
	iVar0 = func_318();
	bVar1 = false;
	StringCopy(&cVar2, func_207(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x02A6B267064771B1("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x02A6B267064771B1("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x02A6B267064771B1("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x02A6B267064771B1(sParam3);
				if (!unk_0xB318FDA0D1ABDB20(sParam4))
				{
					unk_0x072D7B028D6C7A05(sParam4);
				}
				if (!unk_0xB318FDA0D1ABDB20(sParam5))
				{
					unk_0x072D7B028D6C7A05(sParam5);
				}
				if (!unk_0xB318FDA0D1ABDB20(sParam6))
				{
					unk_0x072D7B028D6C7A05(sParam6);
				}
				if (!unk_0xB318FDA0D1ABDB20(sParam7))
				{
					unk_0x072D7B028D6C7A05(sParam7);
				}
				if (!unk_0xB318FDA0D1ABDB20(sParam8))
				{
					unk_0x072D7B028D6C7A05(sParam8);
				}
				if (!unk_0xB318FDA0D1ABDB20(sParam9))
				{
					unk_0x072D7B028D6C7A05(sParam9);
				}
				if (!unk_0xB318FDA0D1ABDB20(sParam10))
				{
					unk_0x072D7B028D6C7A05(sParam10);
				}
				if (!unk_0xB318FDA0D1ABDB20(sParam11))
				{
					unk_0x072D7B028D6C7A05(sParam11);
				}
				if (!unk_0xB318FDA0D1ABDB20(sParam12))
				{
					unk_0x072D7B028D6C7A05(sParam12);
				}
				if (!unk_0xB318FDA0D1ABDB20(sParam13))
				{
					unk_0x072D7B028D6C7A05(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_205(unk_0xDFBE4FFEF7FC22F3(&cVar2, &cVar2, 0, 2, unk_0x46E7F5908F815DDC(func_206(iParam1)), 0));
		}
		else
		{
			func_205(unk_0xDFBE4FFEF7FC22F3("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0x46E7F5908F815DDC(func_206(iParam1)), 0));
		}
		switch (Global_14394)
		{
			case 0:
				StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
				Global_36498++;
				if (Global_36498 > 16)
				{
					Global_36498 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
				Global_36500++;
				if (Global_36500 > 16)
				{
					Global_36500 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
				Global_36499++;
				if (Global_36499 > 16)
				{
					Global_36499 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x35D7948F61AA3FEC(-1, "Notification", &Global_14383, 1);
	}
}

void func_205(var uParam0)
{
	Global_36501[Global_36505] = uParam0;
	Global_16751 = 1;
	Global_16750 = uParam0;
	Global_36505++;
	if (Global_36505 == 3)
	{
		Global_36505 = 0;
	}
}

char* func_206(int iParam0)
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

char* func_207(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[0 /*29*/].f_7));
		
		case 1:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[1 /*29*/].f_7));
		
		case 2:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[2 /*29*/].f_7));
		
		case 7:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[12 /*29*/].f_7));
		
		case 4:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[60 /*29*/].f_7));
		
		case 6:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[62 /*29*/].f_7));
		
		case 3:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[14 /*29*/].f_7));
		
		case 16:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[97 /*29*/].f_7));
		
		case 19:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[99 /*29*/].f_7));
		
		case 15:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[96 /*29*/].f_7));
		
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
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[15 /*29*/].f_7));
		
		case 26:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[30 /*29*/].f_7));
		
		case 27:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[17 /*29*/].f_7));
		
		case 29:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[20 /*29*/].f_7));
		
		case 30:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[43 /*29*/].f_7));
		
		case 31:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[44 /*29*/].f_7));
		
		case 32:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[19 /*29*/].f_7));
		
		case 34:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[40 /*29*/].f_7));
		
		case 36:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[22 /*29*/].f_7));
		
		case 38:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[64 /*29*/].f_7));
		
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
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[122 /*29*/].f_7));
		
		case 40:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[125 /*29*/].f_7));
		
		case 41:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[113 /*29*/].f_7));
		
		case 42:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[126 /*29*/].f_7));
		
		case 43:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[127 /*29*/].f_7));
		
		case 44:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[124 /*29*/].f_7));
		
		case 45:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[114 /*29*/].f_7));
		
		case 46:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[115 /*29*/].f_7));
		
		case 47:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[116 /*29*/].f_7));
		
		case 48:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[123 /*29*/].f_7));
		
		case 49:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[117 /*29*/].f_7));
		
		case 50:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[118 /*29*/].f_7));
		
		case 51:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[119 /*29*/].f_7));
		
		case 52:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[120 /*29*/].f_7));
		
		case 53:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_208(int iParam0)
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

int func_209(int iParam0)
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
		if (Global_45806[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_45806[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_45806[iVar0 /*203*/].f_1;
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

int func_210(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_214(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_45806[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_45806[iVar0 /*203*/].f_2 = iParam0;
	Global_45806[iVar0 /*203*/].f_10[Global_45806[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_45806[iVar0 /*203*/].f_10[Global_45806[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_45806[iVar0 /*203*/].f_10[Global_45806[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_45806[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45806[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45806[iVar0 /*203*/].f_4[iVar1] == Global_36506[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45806[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45806[iVar0 /*203*/].f_4[Global_45806[iVar0 /*203*/].f_3] = Global_36506[iParam1 /*12*/].f_3;
			Global_45806[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45806[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45806[iVar0 /*203*/].f_4[iVar1] == Global_36506[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45806[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45806[iVar0 /*203*/].f_4[Global_45806[iVar0 /*203*/].f_3] = Global_36506[iParam1 /*12*/].f_2;
			Global_45806[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_45806[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_45806[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_211(Global_45806[iVar0 /*203*/].f_4[iVar1], Global_45806[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_211(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iVar19 = (Global_39831[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_39831[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_208(Global_36506[iVar20 /*12*/].f_1) };
		if (Global_36506[iVar20 /*12*/].f_2 == iParam0 && !Global_36506[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_36506[iVar20 /*12*/].f_2;
		iVar0 = Global_45444[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_45444[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36498 = (Global_36498 - 1);
						if (Global_36498 < 0)
						{
							Global_36498 = 0;
						}
						break;
					
					case 1:
						Global_36499 = (Global_36499 - 1);
						if (Global_36499 < 0)
						{
							Global_36499 = 0;
						}
						break;
					
					case 2:
						Global_36500 = (Global_36500 - 1);
						if (Global_36500 < 0)
						{
							Global_36500 = 0;
						}
						break;
					}
				}
		}
		Global_45444[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45444[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45444[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45444[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45444[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45444[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45444[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_45444[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36498 = (Global_36498 - 1);
						if (Global_36498 < 0)
						{
							Global_36498 = 0;
						}
						break;
					
					case 1:
						Global_36499 = (Global_36499 - 1);
						if (Global_36499 < 0)
						{
							Global_36499 = 0;
						}
						break;
					
					case 2:
						Global_36500 = (Global_36500 - 1);
						if (Global_36500 < 0)
						{
							Global_36500 = 0;
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
			if (Global_45806[iVar24 /*203*/].f_1 == iParam1 && Global_45806[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45444[iParam0 /*120*/].f_18[iVar0] = Global_45806[iVar23 /*203*/].f_1;
		Global_45444[iParam0 /*120*/].f_1[iVar0] = (Global_45806[iVar23 /*203*/].f_9 - 1);
		Global_45444[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45444[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45444[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45444[iParam0 /*120*/]++;
		iVar25 = Global_45444[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_45806[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_36506[iVar26 /*12*/].f_2;
		if (Global_45806[iVar23 /*203*/].f_10[(Global_45806[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_45806[iVar23 /*203*/].f_10[(Global_45806[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_208(Global_36506[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_45444[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_204(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_204(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_204(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_204(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_212(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0x236D8AD7EE179F46(Global_98931.f_29435, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_209(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_45806[iVar0 /*203*/] = 0;
}

int func_213(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_47228 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45806[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_45806[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_45806[iVar1 /*203*/].f_1;
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
		if (Global_47229[iVar1 /*53*/].f_52 == 0)
		{
			Global_47229[iVar1 /*53*/].f_52 = iVar0;
			Global_47229[iVar1 /*53*/] = iParam0;
			Global_47229[iVar1 /*53*/].f_1 = iParam1;
			Global_47229[iVar1 /*53*/].f_2 = iParam2;
			Global_98931.f_25486.f_310++;
			if (Global_98931.f_25486.f_310 == 0)
			{
				Global_98931.f_25486.f_310 = 1;
			}
			Global_47229[iVar1 /*53*/].f_10 = 0;
			Global_47229[iVar1 /*53*/].f_3 = Global_98931.f_25486.f_310;
			Global_47229[iVar1 /*53*/].f_4 = 1;
			Global_47228++;
			return Global_47229[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_214(int iParam0, bool bParam1)
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
	
	iVar0 = func_209(iParam0);
	if (iVar0 > -1)
	{
		if (Global_45806[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45806[iVar1 /*203*/] == 0)
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
		if (Global_45806[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_45806[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_45806[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_45806[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_45806[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_45806[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45444[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45444[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45444[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45444[iVar6 /*120*/].f_18[iVar8] == Global_45806[iVar4 /*203*/].f_1)
							{
								if (Global_45444[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36498 = (Global_36498 - 1);
											break;
										
										case 1:
											Global_36499 = (Global_36499 - 1);
											break;
										
										case 2:
											Global_36500 = (Global_36500 - 1);
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
	Global_45806[iVar4 /*203*/].f_2 = iParam0;
	Global_45806[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_45806[iVar4 /*203*/] = 1;
	}
	Global_98931.f_25486.f_310++;
	if (Global_98931.f_25486.f_310 == 0)
	{
		Global_98931.f_25486.f_310 = 1;
	}
	Global_45806[iVar4 /*203*/].f_1 = Global_98931.f_25486.f_310;
	Global_45806[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_215(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_18731[iParam0]), iParam1);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_18731[iParam0]), iParam1);
	}
}

int func_216(int iParam0, int iParam1, int iParam2)
{
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_217(Global_98931.f_32499[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_217(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_242();
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
					func_241(99, 1);
					func_240(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_240(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_240(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_225(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_224(5))
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
							func_240(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_240(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_240(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_224(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_240(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_240(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_240(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_240(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_240(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_240(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_240(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_240(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_240(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA60A6B4935A3E9A7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_240(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_240(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_240(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_240(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_240(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_240(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_224(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_240(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_240(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_240(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_240(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_240(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_240(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_223(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_241(95, iParam3);
					break;
				
				case 1:
					func_241(97, iParam3);
					break;
				
				case 2:
					func_241(96, iParam3);
					break;
			}
			func_241(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_220(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_220(iVar1);
	}
	iVar5 = (Global_52577[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52577[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52577[iVar2] = 2147483647;
				}
				else
				{
					Global_52577[iVar2] = (Global_52577[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_240(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_240(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_240(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52577[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52577[iVar2];
			Global_52577[iVar2] = (Global_52577[iVar2] - iParam3);
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
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_98931.f_25013.f_233[iVar2 /*69*/]++;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_219(iParam0);
	if (Global_35443 == 15)
	{
		func_218(0);
	}
	return 1;
}

void func_218(bool bParam0)
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
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52585[iVar0 /*3*/][0] = Global_98931.f_25013[iVar0];
		Global_52585.f_31[iVar0 /*3*/][0] = Global_98931.f_25013.f_11[iVar0];
		Global_52585.f_62[iVar0 /*3*/][0] = Global_98931.f_25013.f_22[iVar0];
		Global_52585.f_93[iVar0 /*3*/][0] = Global_98931.f_25013.f_33[iVar0];
		Global_52585.f_124[iVar0 /*3*/][0] = Global_98931.f_25013.f_44[iVar0];
		Global_52585.f_155[iVar0 /*3*/][0] = Global_98931.f_25013.f_55[iVar0];
		Global_52585.f_186[iVar0 /*3*/][0] = Global_98931.f_25013.f_66[iVar0];
		Global_52585.f_217[iVar0 /*3*/][0] = Global_98931.f_25013.f_77[iVar0];
		Global_52585.f_248[iVar0 /*3*/][0] = Global_98931.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52585[iVar0 /*3*/][1] = Global_98931.f_25013[iVar0];
			Global_52585.f_31[iVar0 /*3*/][1] = Global_98931.f_25013.f_11[iVar0];
			Global_52585.f_62[iVar0 /*3*/][1] = Global_98931.f_25013.f_22[iVar0];
			Global_52585.f_93[iVar0 /*3*/][1] = Global_98931.f_25013.f_33[iVar0];
			Global_52585.f_124[iVar0 /*3*/][1] = Global_98931.f_25013.f_44[iVar0];
			Global_52585.f_155[iVar0 /*3*/][1] = Global_98931.f_25013.f_55[iVar0];
			Global_52585.f_186[iVar0 /*3*/][1] = Global_98931.f_25013.f_66[iVar0];
			Global_52585.f_217[iVar0 /*3*/][1] = Global_98931.f_25013.f_77[iVar0];
			Global_52585.f_248[iVar0 /*3*/][1] = Global_98931.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_219(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52577[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x123B783056E76C4E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x123B783056E76C4E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x123B783056E76C4E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_220(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0) || unk_0x236D8AD7EE179F46(Global_2097152[func_222() /*9662*/].f_7252.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		unk_0xC69E84EBBD7166E6(&(Global_2097152[func_222() /*9662*/].f_7252.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x02A6B267064771B1("COUP_RED");
		unk_0x072D7B028D6C7A05(func_221(iParam0));
		unk_0xDFBE4FFEF7FC22F3(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_221(int iParam0)
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

int func_222()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_223(int iParam0)
{
	func_241(93, iParam0);
	func_241(29, iParam0);
	func_241(30, iParam0);
}

bool func_224(int iParam0)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0);
	}
	return unk_0x236D8AD7EE179F46(Global_2097152[func_222() /*9662*/].f_7252.f_10, iParam0);
}

int func_225(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x8A933F79CD45968A(27))
	{
		return 0;
	}
	if (unk_0x85C45034BA638694(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x85C45034BA638694(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x123B783056E76C4E(joaat("num_cash_spent"), iVar1, 1);
		func_239(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_226(27, 1);
	return 1;
}

int func_226(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_227(iParam0, iParam1);
}

int func_227(int iParam0, int iParam1)
{
	if (func_10(14) && !func_238(iParam0))
	{
		return 0;
	}
	if (unk_0x8A933F79CD45968A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25192 != 0 && !Global_69020)
	{
		return 0;
	}
	if (func_237(&Global_2550589))
	{
		if (func_235(&Global_2550589, iParam0))
		{
			return 0;
		}
		if (func_228(&Global_2550589, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xCE7DBCA2772D9659(iParam0))
		{
			return 0;
		}
		if (unk_0x8A933F79CD45968A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_228(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_10(14) && !func_238(iParam1))
	{
		return 0;
	}
	if (func_235(uParam0, iParam1))
	{
		return 0;
	}
	if (func_234(uParam0) < 0f)
	{
		func_233(uParam0, 0);
	}
	func_231(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_229(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_229(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_10(14) && !func_238(iParam1))
	{
		return 0;
	}
	if (func_235(uParam0, iParam1))
	{
		return 0;
	}
	if (func_234(uParam0) < 0f)
	{
		func_233(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_230(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_230(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_231(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_232(uParam0, iVar0);
		iVar0++;
	}
	func_233(uParam0, (Global_2550588 - 0.5f));
}

void func_232(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_233(var uParam0, float fParam1)
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

float func_234(var uParam0)
{
	return uParam0->f_72;
}

bool func_235(var uParam0, int iParam1)
{
	return func_236(uParam0, iParam1) != -1;
}

int func_236(var uParam0, int iParam1)
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

bool func_237(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_238(int iParam0)
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

int func_239(int iParam0, int iParam1)
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
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
	}
	return 0;
}

void func_240(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x85C45034BA638694(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x123B783056E76C4E(iParam0, iVar0, 1);
}

void func_241(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/])
	{
		unk_0x85C45034BA638694(Global_51145[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x123B783056E76C4E(Global_51145[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_242()
{
	int iVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		unk_0x85C45034BA638694(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52577[0] == iVar0)
		{
			Global_52577[0] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52577[1] == iVar0)
		{
			Global_52577[1] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52577[2] == iVar0)
		{
			Global_52577[2] = iVar0;
		}
	}
}

int func_243(int iParam0)
{
	if (unk_0xECDEA377354CBDA4())
	{
		if ((unk_0x48E480685981C7D4() - Global_28) > iParam0)
		{
			Global_27 = unk_0x48E480685981C7D4();
		}
		Global_28 = unk_0x48E480685981C7D4();
		if ((unk_0x48E480685981C7D4() - Global_27) > iParam0)
		{
			if (func_244())
			{
				Global_27 = unk_0x48E480685981C7D4();
				return 1;
			}
		}
	}
	return 0;
}

int func_244()
{
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (unk_0x093DEAE9A023FAA0(0, 18) || unk_0x093DEAE9A023FAA0(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_245(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x85C45034BA638694(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x85C45034BA638694(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x85C45034BA638694(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_246(int iParam0)
{
	return func_247(iParam0, Global_35443);
}

int func_247(int iParam0, int iParam1)
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

void func_248(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_318();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_106(iParam1);
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
	if (func_210(iVar0, iVar1, 1))
	{
		func_249(iVar0, sVar3);
		func_203(iVar0);
		func_212(iVar0);
	}
}

void func_249(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_209(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45806[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_45806[iVar0 /*203*/].f_10[(Global_45806[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_45806[iVar0 /*203*/].f_10[(Global_45806[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_45806[iVar0 /*203*/].f_10[(Global_45806[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_45806[iVar0 /*203*/].f_10[(Global_45806[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_250(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_255(iParam1) || !func_255(iParam0))
	{
		return 1;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_34(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_36(iParam0);
	iVar1 = func_36(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_254(iParam0);
	iVar1 = func_254(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_253(iParam0);
	iVar1 = func_253(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_252(iParam0);
	iVar1 = func_252(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_251(iParam0);
	iVar1 = func_251(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_252(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_253(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_254(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_255(int iParam0)
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
	iVar0 = func_251(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_252(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_253(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_34(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_36(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_254(iParam0);
	if (iVar5 < 1 || iVar5 > func_33(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_256()
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
	if (unk_0x968BF1C2C695B61A(joaat("startup_positioning")) == 0)
	{
		if (Global_98931.f_18731.f_5588)
		{
			if (!unk_0x86CCCD2FAE9D5E65(Global_68794))
			{
				func_173(&(Global_98931.f_18731.f_5510), Global_98931.f_18731.f_5590);
				Global_98931.f_18731.f_5588 = 0;
			}
			else if (!unk_0x7404950238A154C2(Global_68794, 0) || func_26(Global_68794, Global_98931.f_18731.f_5590, 1))
			{
				Global_98931.f_18731.f_5588 = 0;
			}
			else
			{
				if ((unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0) == Global_68794) && func_275(unk_0x81873881071CD9FE()) != Global_98931.f_18731.f_5590)
				{
					Global_98931.f_18731.f_5590 = func_275(unk_0x81873881071CD9FE());
				}
				if (Global_68794 != iLocal_645)
				{
					sVar2 = unk_0x9DE804DB82E9D0FC(Global_68794, &uVar1);
					if (!unk_0xB318FDA0D1ABDB20(sVar2))
					{
						if (unk_0x8DAF7A748E41AD46(sVar2) == unk_0x8DAF7A748E41AD46("vehicle_gen_controller"))
						{
							Global_98931.f_18731.f_5588 = 0;
							iLocal_1002 = Global_68794;
							if (Global_67889.f_139[24] == Global_68794 || (Global_68795 == Global_68794 && Global_68796 == 24))
							{
								func_274(458, 24, -1, 1);
							}
							else
							{
								func_274(458, 0, -1, 1);
							}
							Global_68794 = 0;
						}
					}
				}
				if (((Global_98931.f_18731.f_5590 != func_318() && Global_90278[Global_98931.f_18731.f_5590 /*98*/] == Global_98931.f_18731.f_5510.f_66) && unk_0xD994929E13CC1ED5(&(Global_90278[Global_98931.f_18731.f_5590 /*98*/].f_27), &(Global_98931.f_18731.f_5510.f_1))) && !unk_0xF33755A765033580())
				{
					func_91(&(Global_98931.f_18731.f_5510), &(Global_98931.f_18731.f_5600[Global_98931.f_18731.f_5590 /*78*/]));
					Global_98931.f_18731.f_5588 = 0;
					iLocal_1002 = 0;
					func_274(458, 0, -1, 1);
					Global_68794 = 0;
				}
			}
		}
		else if ((unk_0x86CCCD2FAE9D5E65(Global_68794) && unk_0x7404950238A154C2(Global_68794, 0)) && !func_26(Global_68794, Global_98931.f_18731.f_5590, 1))
		{
			Global_98931.f_18731.f_5588 = 1;
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_1002) && unk_0x7404950238A154C2(iLocal_1002, 0))
		{
			if (((!Global_98931.f_18731.f_5588 && iLocal_1002 != Global_68794) && iLocal_1002 != iLocal_1003) && !unk_0x46AE53A47E5D03D5(iLocal_1002, 1))
			{
				func_14(iLocal_1002, 145);
				iLocal_1002 = 0;
				func_274(458, 0, -1, 1);
			}
		}
		else if (iLocal_1002 != 0)
		{
			iLocal_1002 = 0;
			func_274(458, 0, -1, 1);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_1003) && unk_0x7404950238A154C2(iLocal_1003, 0))
		{
		}
		else if (iLocal_1003 != 0)
		{
			iLocal_1003 = 0;
		}
	}
	if (Global_68798.f_66 != 0 && Global_68795 == 0)
	{
		func_173(&Global_68798, Global_68876);
		Global_68798.f_66 = 0;
	}
	Var3 = { 433.6721f, -1006.538f, 25.96351f };
	Var6 = { 433.6578f, -1017.5f, 32.09895f };
	fVar9 = 11.25f;
	if (iLocal_641 > 0 && iLocal_641 < 99)
	{
		if (iLocal_641 != 3)
		{
			if (((((unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) || !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Var3, Var6, fVar9, 0, 1, 0)) || func_10(0)) || func_10(3)) || func_10(2)) || func_10(14))
			{
				iLocal_641 = 99;
			}
		}
	}
	if (func_273(iLocal_646))
	{
		if (!unk_0xFBACB273AA628CC5(uLocal_831))
		{
			if (((func_10(15) || func_10(12)) && iLocal_641 != 3) && !unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
			{
				uLocal_831 = func_271(428.37f, -1013.5f, 27.93f, 0);
				unk_0x8F827BB0F6ED7AA8(uLocal_831, 225);
				unk_0x2AB7C42FF2AF476D(uLocal_831, "IMPOUND_BLIPNAME");
				unk_0x6FA15F9609E21DA5(uLocal_831, true);
			}
		}
		else if ((!(func_10(15) || func_10(12)) || iLocal_641 == 3) || unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
		{
			unk_0x0A8175F24237A3D4(&uLocal_831);
		}
	}
	else if (unk_0xFBACB273AA628CC5(uLocal_831))
	{
		unk_0x0A8175F24237A3D4(&uLocal_831);
	}
	switch (iLocal_641)
	{
		case 0:
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if ((Local_401.f_2 == 0 && (func_10(15) || func_10(12))) && !unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
				{
					if (func_273(iLocal_646))
					{
						if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Var3, Var6, fVar9, 0, 1, 0))
						{
							if (func_245(iLocal_646) >= 250)
							{
								iVar10 = 0;
								iVar11 = 0;
								while (iVar11 < 2)
								{
									if (func_169(iVar11, iLocal_646))
									{
										iVar10++;
									}
									iVar11++;
								}
								if (iVar10 > 1)
								{
									func_131(&iLocal_642, 3, "IMPOUND_TRIG2", 0, 0, 0);
								}
								else
								{
									func_131(&iLocal_642, 3, "IMPOUND_TRIG1", 0, 0, 0);
								}
								iLocal_641 = 1;
							}
							else
							{
								func_129("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && func_127(0, -1))
			{
				if (func_126(iLocal_642, 1))
				{
					func_48(&iLocal_642);
					unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
					func_270();
					iVar12 = 0;
					iVar13 = 0;
					while (iVar13 < 2)
					{
						if (func_169(iVar13, iLocal_646))
						{
							iVar12++;
						}
						iVar13++;
					}
					if (iVar12 > 1)
					{
						iLocal_631 = 0;
						iLocal_632 = 0;
						iLocal_633 = 0;
						iLocal_636 = -1;
						iLocal_641++;
					}
					else
					{
						iVar14 = 0;
						while (iVar14 < 2)
						{
							if (func_169(iVar14, iLocal_646))
							{
								if (iVar14 == 0)
								{
									Var15 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									Var15 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_262(&iLocal_645, iVar14, Var15, 179.24f, 1))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								if (unk_0x86CCCD2FAE9D5E65(iLocal_645))
								{
									if (iVar14 == 0)
									{
										func_261(18, 1, 0);
									}
									else
									{
										func_261(19, 1, 0);
									}
									if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
									{
										unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
									}
									func_216(iLocal_646, 118, 250);
									func_260(iVar14);
									func_14(iLocal_645, func_318());
									func_50(1, -1);
									iLocal_641 = 3;
									func_48(&iLocal_642);
									iLocal_642 = -1;
									iLocal_633 = 0;
								}
							}
							iVar14++;
						}
					}
				}
			}
			break;
		
		case 2:
			switch (func_318())
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
			func_270();
			if (!iLocal_631 || iLocal_632)
			{
				func_124(0);
				func_123(1, 1, 0, 0, 0);
				func_122(1, 2, 1, 1, 1);
				func_121("IMPOUND_TITLE");
				iLocal_637 = 0;
				iVar19 = -1;
				iVar21 = 0;
				iVar20 = 0;
				while (iVar20 < 2)
				{
					if (func_169(iVar20, iLocal_646))
					{
						func_109(iVar21, unk_0x60793BDBCF1CD039(Global_98931.f_18731.f_5038[iVar18 /*157*/][iVar20 /*78*/].f_66), 0, 1, 0, 0);
						if (iVar19 == -1)
						{
							iVar19 = iVar21;
							iLocal_636 = iVar21;
						}
						unk_0xF3148AAF69AF9CBC(&iLocal_637, iVar21);
						iLocal_638[iVar21] = iVar20;
						func_109(iVar21, "IMPOUND_COST", 1, 1, 0, 0);
						func_259(250, 0);
						iVar21++;
					}
					iVar20++;
				}
				iVar21 = 0;
				func_102(iLocal_636, 1, 1);
				iLocal_634 = 1;
				iLocal_632 = 0;
				iLocal_631 = 1;
			}
			else
			{
				iVar0 = 0;
				if (unk_0x913B1C01C1BA6C6F())
				{
					if (unk_0x2705BD3DB0D294CB(2))
					{
						unk_0xDE1125A413AF241C(0, 1, 1);
						unk_0xDE1125A413AF241C(0, 2, 1);
						unk_0xF333CEFDC2923B24(0, 237, 1);
						unk_0xF333CEFDC2923B24(0, 238, 1);
						unk_0xF333CEFDC2923B24(0, 241, 1);
						unk_0xF333CEFDC2923B24(0, 242, 1);
						func_99(0, 0, 0, 1);
						func_98(0, -1);
						if (func_97())
						{
							if (Global_2549109 != iLocal_636)
							{
								unk_0x35D7948F61AA3FEC(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_636 = Global_2549109;
								func_102(iLocal_636, 1, 1);
								iLocal_634 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (unk_0x093DEAE9A023FAA0(2, 188) || unk_0x093DEAE9A023FAA0(2, 241))
				{
					if (!iLocal_633)
					{
						iLocal_634 = 1;
						unk_0x35D7948F61AA3FEC(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar22 = (iLocal_636 - 1);
						while (iVar22 >= 0)
						{
							if (unk_0x236D8AD7EE179F46(iLocal_637, iVar22))
							{
								iLocal_636 = iVar22;
								bVar23 = true;
								iVar22 = 0;
							}
							iVar22 = (iVar22 + -1);
						}
						if (!bVar23)
						{
							iVar22 = 31;
							while (iVar22 >= iLocal_636 + 1)
							{
								if (unk_0x236D8AD7EE179F46(iLocal_637, iVar22))
								{
									iLocal_636 = iVar22;
									bVar23 = true;
									iVar22 = iLocal_636;
								}
								iVar22 = (iVar22 + -1);
							}
						}
						if (bVar23)
						{
							func_102(iLocal_636, 1, 1);
						}
					}
				}
				else if (unk_0x093DEAE9A023FAA0(2, 187) || unk_0x093DEAE9A023FAA0(2, 242))
				{
					if (!iLocal_633)
					{
						iLocal_634 = 1;
						unk_0x35D7948F61AA3FEC(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar24 = iLocal_636 + 1;
						while (iVar24 <= 31)
						{
							if (unk_0x236D8AD7EE179F46(iLocal_637, iVar24))
							{
								iLocal_636 = iVar24;
								bVar25 = true;
								iVar24 = 31;
							}
							iVar24++;
						}
						if (!bVar25)
						{
							iVar24 = 0;
							while (iVar24 <= (iLocal_636 - 1))
							{
								if (unk_0x236D8AD7EE179F46(iLocal_637, iVar24))
								{
									iLocal_636 = iVar24;
									bVar25 = true;
									iVar24 = iLocal_636;
								}
								iVar24++;
							}
						}
						if (bVar25)
						{
							func_102(iLocal_636, 1, 1);
						}
					}
				}
				else if (unk_0xB93E207B3C65F1B1(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					unk_0x35D7948F61AA3FEC(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!iLocal_633)
					{
						func_96("IMPOUND_CNF", 0, 0);
						func_95(-1);
						func_94(201, "ITEM_YES", -1);
						func_94(202, "ITEM_NO", -1);
						iLocal_633 = 1;
					}
					else
					{
						if (iLocal_636 == 0)
						{
							Var26 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							Var26 = { 436.39f, -997.25f, 24.76f };
						}
						if (func_169(iLocal_638[iLocal_636], iLocal_646))
						{
							while (!func_262(&iLocal_645, iLocal_638[iLocal_636], Var26, 179.24f, 1))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							if (unk_0x86CCCD2FAE9D5E65(iLocal_645))
							{
								if (iLocal_636 == 0)
								{
									func_261(18, 1, 0);
								}
								else
								{
									func_261(19, 1, 0);
								}
								if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
								{
									unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
								}
								func_216(iLocal_646, 118, 250);
								func_260(iLocal_638[iLocal_636]);
								func_14(iLocal_645, func_318());
								func_50(1, -1);
								iLocal_641++;
								func_48(&iLocal_642);
								iLocal_642 = -1;
								iLocal_633 = 0;
							}
						}
						iLocal_632 = 1;
					}
				}
				else if (unk_0xB93E207B3C65F1B1(2, 202) || unk_0xB93E207B3C65F1B1(2, 238))
				{
					unk_0x35D7948F61AA3FEC(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (iLocal_633)
					{
						iLocal_634 = 1;
						iLocal_633 = 0;
					}
					else
					{
						iLocal_641 = 99;
					}
				}
			}
			unk_0xD61D5795530D0627();
			if (iLocal_634)
			{
				func_96("", 0, 0);
				func_95(-1);
				func_94(201, "ITEM_SELECT", -1);
				func_94(202, "ITEM_EXIT", -1);
				iLocal_633 = 0;
				iLocal_634 = 0;
			}
			if (func_127(0, -1))
			{
				func_53(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			break;
		
		case 3:
			if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), 431.4f, -997.33f, 24.76f, 1) > 20f && !func_258())
			{
				func_14(iLocal_645, func_318());
				iLocal_641 = 99;
			}
			else if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), 431.4f, -997.33f, 24.76f, 1) > 100f)
			{
				if (unk_0x86CCCD2FAE9D5E65(iLocal_645))
				{
					if (!unk_0x930F8FBB8E9537CC(iLocal_645))
					{
						if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_645, 0) && unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iLocal_645, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), 1) > 100f)
						{
							if (!unk_0x331E7ACCFD0869AD(iLocal_645))
							{
								func_257(iLocal_645, 1, 145);
								unk_0x5D00E836B6BE8693(&iLocal_645);
								unk_0xA450601E968044DB(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
								iLocal_641 = 99;
							}
						}
						else if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_645, 0))
						{
							unk_0xA450601E968044DB(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
							func_14(iLocal_645, func_318());
							iLocal_641 = 99;
						}
					}
					else
					{
						unk_0xA450601E968044DB(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
						iLocal_641 = 99;
					}
				}
				else
				{
					unk_0xA450601E968044DB(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
					iLocal_641 = 99;
				}
			}
			break;
		
		case 99:
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
			}
			func_48(&iLocal_642);
			iVar29 = 0;
			while (iVar29 < 2)
			{
				iLocal_638[iVar29] = -1;
				iVar29++;
			}
			func_261(18, 0, 0);
			func_261(19, 0, 0);
			if (unk_0x86CCCD2FAE9D5E65(iLocal_645))
			{
				unk_0xE0913C01F5C0CC3D(&iLocal_645);
			}
			iLocal_641 = 0;
			break;
	}
	if (iLocal_641 == 0)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, 1, 0))
		{
			if (!iLocal_644)
			{
				func_261(18, 1, 0);
				iLocal_644 = 1;
			}
		}
		else if (iLocal_644 && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, 1, 0))
		{
			func_261(18, 0, 0);
			iLocal_644 = 0;
		}
	}
}

int func_257(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x9DE804DB82E9D0FC(iParam0, &uVar0);
		if (!unk_0xB318FDA0D1ABDB20(sVar1))
		{
			if (unk_0x8DAF7A748E41AD46(sVar1) == unk_0x8DAF7A748E41AD46("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_14(iParam0, iParam2);
	return 1;
}

int func_258()
{
	if (unk_0xBB0ABC3F9A6F2564(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xBB0ABC3F9A6F2564(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xBB0ABC3F9A6F2564(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xBB0ABC3F9A6F2564(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_259(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17238.f_4996 >= 250)
	{
		return;
	}
	if (Global_17238.f_5498 >= 4)
	{
		return;
	}
	if (Global_17238.f_5499 != 1)
	{
		return;
	}
	if (Global_17238.f_5498 >= Global_17238.f_5496)
	{
		return;
	}
	Global_17238.f_3840[Global_17238.f_4996] = iParam0;
	Global_17238.f_4996++;
	Global_17238.f_2076[Global_17238.f_5497 /*5*/][Global_17238.f_5498] = 2;
	Global_17238.f_5498++;
	if (Global_17238.f_5498 >= Global_17238.f_5496)
	{
		fVar0 = func_105();
		if (Global_17238.f_4852[Global_17238.f_4993] && Global_17238.f_5498 == Global_17238.f_5496)
		{
			func_84(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17238.f_4845[(Global_17238.f_4993 - 1)])
		{
			Global_17238.f_4845[(Global_17238.f_4993 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17238.f_5498 >= Global_17238.f_5496)
		{
			fVar3 = func_104();
			if (fVar3 > Global_17238.f_5500[Global_17238.f_4992])
			{
				Global_17238.f_5500[Global_17238.f_4992] = fVar3;
			}
		}
	}
}

void func_260(int iParam0)
{
	int iVar0;
	
	switch (func_318())
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
	if (iParam0 < 0 || iParam0 >= func_170(&(Global_98931.f_18731.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_98931.f_18731.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_261(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_34566[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (unk_0x236D8AD7EE179F46(Global_34566[iParam0 /*31*/].f_1, 1))
			{
				Global_34566[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_34566[iParam0 /*31*/].f_22 = 1f;
			}
			unk_0xD11D7C58F752B552(Global_34566[iParam0 /*31*/], Global_34566[iParam0 /*31*/].f_22, 0, 0);
			unk_0xFF3E86C4D581F64B(Global_34566[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_34566[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_34566[iParam0 /*31*/].f_22 = 0f;
			unk_0xD11D7C58F752B552(Global_34566[iParam0 /*31*/], Global_34566[iParam0 /*31*/].f_22, 0, 0);
			unk_0xFF3E86C4D581F64B(Global_34566[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

int func_262(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_169(iParam1, func_318()) || unk_0x86CCCD2FAE9D5E65(*iParam0))
	{
		return 0;
	}
	switch (func_318())
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
	unk_0x32A12757CBF48A33(Global_98931.f_18731.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (unk_0x33ACB874CECA2D4B(Global_98931.f_18731.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = unk_0xE00F8DEA9778FC87(Global_98931.f_18731.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, Param2, fParam5, 0, 0);
		func_263(*iParam0, &(Global_98931.f_18731.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		unk_0x5CC9D6711FE01F0D(*iParam0);
		unk_0x726A9B2010B2B4D6(*iParam0, 0);
		unk_0x50C9C2E3327FDF31(*iParam0, 1);
		if (bParam6)
		{
			unk_0x887F4488DA99FD21(Global_98931.f_18731.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

void func_263(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		if (unk_0x8DAF7A748E41AD46(&(uParam1->f_1)) != 0)
		{
			unk_0xA9FDEEBC09186222(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x5393C767E0A1742B())
		{
			unk_0x1E6C0DB293E78345(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (unk_0x236D8AD7EE179F46(uParam1->f_77, 13))
		{
			unk_0x80D60E160186B2B6(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xF72A7A302D6CE95C(iParam0);
		}
		if (unk_0x236D8AD7EE179F46(uParam1->f_77, 12))
		{
			unk_0x5D9A3C8DE55806B3(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xC6F2A508D9D94662(iParam0);
		}
		unk_0xFD021BAF9614D437(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x3CA38E5C9A060AAD(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x236D8AD7EE179F46(uParam1->f_77, 15) || func_269(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_268())
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
		unk_0xCAFB5A22098B8EA4(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0xBA0A17020F825714(iParam0, 0);
		}
		else
		{
			unk_0xBA0A17020F825714(iParam0, 0);
			unk_0xBA0A17020F825714(iParam0, uParam1->f_65);
		}
		unk_0xDD213338390D43E1(iParam0, !unk_0x236D8AD7EE179F46(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xC390A6485FB80923(iParam0, uParam1->f_70);
		}
		unk_0x34318363F8442B01(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x797EA5FDEC3CF253(iParam0, 2, unk_0x236D8AD7EE179F46(uParam1->f_77, 28));
		unk_0x797EA5FDEC3CF253(iParam0, 3, unk_0x236D8AD7EE179F46(uParam1->f_77, 29));
		unk_0x797EA5FDEC3CF253(iParam0, 0, unk_0x236D8AD7EE179F46(uParam1->f_77, 30));
		unk_0x797EA5FDEC3CF253(iParam0, 1, unk_0x236D8AD7EE179F46(uParam1->f_77, 31));
		unk_0xF239D177F4EB07F9(iParam0, unk_0x236D8AD7EE179F46(uParam1->f_77, 10));
		if (unk_0x9DCB5D9F2125C30D(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x24F85A008ECA63FB(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(iParam0)))
			{
				if (unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_267(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_267(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xD31A4E6B116BE250(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x1AFB2E2B0F799DD7(iParam0, 1);
			}
			else
			{
				unk_0xC9340C45BD8F401B(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_264(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xE083914AB72DD7CE(uParam1->f_66) && !unk_0x9F59BCFFFEAAD4B1(uParam1->f_66))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (unk_0x236D8AD7EE179F46(uParam1->f_77, func_16(iVar0 + 1)))
				{
					if (!unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
					{
						unk_0x90B59F54B0DB5FF7(iParam0, iVar0 + 1, false);
					}
				}
				else if (unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
				{
					unk_0x90B59F54B0DB5FF7(iParam0, iVar0 + 1, true);
				}
				iVar0++;
			}
		}
		if (unk_0x1699D7B95446F15C(uParam1->f_66))
		{
			if (!unk_0x236D8AD7EE179F46(uParam1->f_77, 23))
			{
				if (unk_0x236D8AD7EE179F46(uParam1->f_77, 22))
				{
					unk_0xDE113FA802D77FA6(iParam0, 2);
				}
				else
				{
					unk_0xDE113FA802D77FA6(iParam0, 3);
				}
			}
			else
			{
				unk_0xDE113FA802D77FA6(iParam0, 4);
			}
		}
		if (unk_0x236D8AD7EE179F46(uParam1->f_77, 27))
		{
			unk_0xDD6B145BC3BFD188(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xDD6B145BC3BFD188(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_264(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7404950238A154C2(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xBE23E5C609DF6E79(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xF196EBA065B17452(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xC163DC4217AA2669(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x64D946BA23568D30(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x5039214D6DAE5ECC(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x323720FEE81B53C0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x323720FEE81B53C0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x323720FEE81B53C0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if ((unk_0x728464249800975B(*iParam0, 38) != 0 && unk_0x728464249800975B(*iParam0, 24) != 0) && unk_0x64D946BA23568D30(*iParam0, 24) != func_266(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x323720FEE81B53C0(*iParam0, 24, func_266(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_265(*iParam0))
	{
		unk_0xDEE6369ABB2B517A(*iParam0, 1);
		unk_0x50C9C2E3327FDF31(*iParam0, 1);
	}
	return 1;
}

int func_265(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x86CCCD2FAE9D5E65(uParam0) && unk_0x7404950238A154C2(iParam0, 0)) && unk_0xBE23E5C609DF6E79(iParam0) > 0)
	{
		unk_0xF196EBA065B17452(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x64D946BA23568D30(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xFAEBBFA35E2022F2(iParam0, iVar1, unk_0x64D946BA23568D30(iParam0, iVar1)), 16);
				iVar2 = unk_0x8DAF7A748E41AD46(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x8DAF7A748E41AD46("MNU_CAGE") || iVar2 == unk_0x8DAF7A748E41AD46("SABRE_CAG"))
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

int func_266(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		iVar0 = unk_0x728464249800975B(iParam0, 38);
		iVar1 = unk_0x728464249800975B(iParam0, 24);
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

void func_267(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBE23E5C609DF6E79(iParam0) > 0)
	{
		unk_0xF196EBA065B17452(iParam0, 0);
		iVar0 = unk_0x64D946BA23568D30(iParam0, 24);
		iVar1 = unk_0xB0BC5473B799F536(iParam0, 24);
		unk_0xE82FEE20AC58682A(iParam0, iParam1);
		if (iVar0 == -1)
		{
			unk_0x5039214D6DAE5ECC(iParam0, 24);
		}
		else
		{
			unk_0x323720FEE81B53C0(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_268()
{
	return unk_0x2D6859674806FDCE(joaat("mpindependence"));
}

int func_269(int iParam0)
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (unk_0x9C1418C53B05D47B("MPBitset", 3))
			{
				if (unk_0xCEC9D74C9FF51C8C(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x8B4662A1D2DF932C(iParam0, "MPBitset");
				}
				return unk_0x236D8AD7EE179F46(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_270()
{
	unk_0xCCA97479FF65110F(0);
	unk_0xF333CEFDC2923B24(0, 188, 1);
	unk_0xF333CEFDC2923B24(0, 187, 1);
	unk_0xF333CEFDC2923B24(0, 201, 1);
	unk_0xF333CEFDC2923B24(0, 202, 1);
	unk_0xF333CEFDC2923B24(0, 1, 1);
	unk_0xF333CEFDC2923B24(0, 2, 1);
	unk_0xF333CEFDC2923B24(0, 239, 1);
	unk_0xF333CEFDC2923B24(0, 240, 1);
}

var func_271(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_272(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
	unk_0x116FDB7E27590C7F(uVar0, iParam3);
	return uVar0;
}

float func_272(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_273(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_169(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_274(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_71();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x10C4199683D22346((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xA51E0F05C28DE3B1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x10C4199683D22346((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xA51E0F05C28DE3B1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x10C4199683D22346((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xA51E0F05C28DE3B1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x10C4199683D22346((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xA51E0F05C28DE3B1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xEC4FE64D825D44B7((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xA51E0F05C28DE3B1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xEC4FE64D825D44B7((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xA51E0F05C28DE3B1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x91F6790AA622BE90((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xA51E0F05C28DE3B1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x91F6790AA622BE90((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xA51E0F05C28DE3B1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x91F6790AA622BE90((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xA51E0F05C28DE3B1((iParam0 - 4399)) * 8) * 8;
	}
	uVar2 = unk_0x2E7BF80EA81DC2FC(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_276(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_276(int iParam0)
{
	if (func_8(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_277()
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_391)
			{
				unk_0x32A12757CBF48A33(joaat("v_ilev_uvline"));
				iLocal_390 = 1;
				if (unk_0x33ACB874CECA2D4B(joaat("v_ilev_uvline")))
				{
					if (func_278(8))
					{
						uLocal_392[4] = unk_0xF364195A57BB7AE3(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 1, 1, 0);
						unk_0xB067093BBAF0A747(uLocal_392[4], 471.48f, fVar0, 30.33f, 1, 0, 0, 1);
						unk_0x3A45EB0810EBE71C(uLocal_392[4], 0f, 0f, 116.9f, 2, 1);
						uLocal_392[1] = unk_0xF364195A57BB7AE3(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 1, 1, 0);
						unk_0xB067093BBAF0A747(uLocal_392[1], 471.48f, fVar0, 30.15f, 1, 0, 0, 1);
						unk_0x3A45EB0810EBE71C(uLocal_392[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_278(9))
					{
						uLocal_392[5] = unk_0xF364195A57BB7AE3(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 1, 1, 0);
						unk_0xB067093BBAF0A747(uLocal_392[5], 471.48f, fVar0, 29.98f, 1, 0, 0, 1);
						unk_0x3A45EB0810EBE71C(uLocal_392[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_278(10))
					{
						uLocal_392[3] = unk_0xF364195A57BB7AE3(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, 1, 1, 0);
						unk_0xB067093BBAF0A747(uLocal_392[3], 471.48f, fVar0, 29.82f, 1, 0, 0, 1);
						unk_0x3A45EB0810EBE71C(uLocal_392[3], 0f, 0f, 116.9f, 2, 1);
					}
					uVar1 = unk_0xA17AB437A96481B6(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (unk_0x86CCCD2FAE9D5E65(uLocal_392[iVar2]))
						{
							unk_0xABA9860C0161F3CD(uLocal_392[iVar2], 1);
							unk_0xC050334007FDA968(uLocal_392[iVar2], 1);
							unk_0x99FFB9E4A17EAF90(uLocal_392[iVar2], uVar1);
						}
						iVar2++;
					}
					unk_0x887F4488DA99FD21(joaat("v_ilev_uvline"));
					iLocal_391 = 1;
				}
			}
		}
		else
		{
			if (iLocal_390)
			{
				unk_0x887F4488DA99FD21(joaat("v_ilev_uvline"));
				iLocal_390 = 0;
			}
			if (iLocal_391)
			{
				func_321();
				iLocal_391 = 0;
			}
		}
	}
}

int func_278(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_98931.f_7699.f_330[iParam0 /*6*/];
}

void func_279()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_67889.f_553)
	{
		if (!iLocal_399)
		{
			Global_67889.f_554 = 0;
			iLocal_399 = 1;
		}
		else if (Global_67889.f_554 >= 68)
		{
			Global_67889.f_553 = 0;
			iLocal_399 = 0;
		}
	}
	else
	{
		iLocal_399 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_840)
	{
		iVar1 = iLocal_841[iVar0];
		if (func_40(&Local_648, iVar1))
		{
			func_317(&Local_669, iVar1);
			if ((Local_669.f_69 && Local_401.f_3 == 0) || iVar1 == 14)
			{
				uLocal_915[iVar1] = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Local_669.f_55, 0);
			}
			else
			{
				uLocal_915[iVar1] = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Local_648, 0);
			}
			if (func_316())
			{
				func_315(iVar1);
				func_313(iVar1);
				func_312(iVar1);
				func_311(iVar1);
				func_309(iVar1);
				func_308(iVar1);
				func_307(iVar1);
				func_281(iVar1);
				if (unk_0x236D8AD7EE179F46(uLocal_47[iVar1], 2))
				{
					if (Global_67889.f_553)
					{
						iLocal_399 = 0;
					}
					func_322(iVar1);
				}
			}
			else
			{
				func_280(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_840;
	iLocal_840 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_910)
	{
		iLocal_910[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0x236D8AD7EE179F46(uLocal_47[iLocal_841[iVar0]], 2))
		{
			func_322(iLocal_841[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_914 != -1)
	{
		func_322(iLocal_914);
		iLocal_914 = -1;
	}
	iLocal_46++;
	if (iLocal_46 >= 68)
	{
		iLocal_46 = 0;
	}
	func_322(iLocal_46);
	if (iLocal_988)
	{
		func_322(21);
		func_322(22);
		func_322(23);
		iLocal_988 = 0;
		bLocal_989 = true;
	}
	else if (bLocal_989)
	{
		bLocal_989 = false;
	}
	if (Global_67889.f_553)
	{
		Global_67889.f_554++;
	}
}

void func_280(int iParam0)
{
	if (iLocal_116[iParam0] != 0)
	{
		unk_0x887F4488DA99FD21(iLocal_116[iParam0]);
		iLocal_116[iParam0] = 0;
	}
}

void func_281(int iParam0)
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
	if (!unk_0x236D8AD7EE179F46(uLocal_47[iParam0], 2))
	{
		func_280(iParam0);
	}
	unk_0xC69E84EBBD7166E6(&(uLocal_47[iParam0]), 2);
	if (unk_0x236D8AD7EE179F46(uLocal_47[iParam0], 1))
	{
		fVar2 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Local_185[iParam0 /*3*/], 1);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (unk_0x236D8AD7EE179F46(Local_648.f_9, 23))
	{
		if (Local_648.f_4 == joaat("blimp"))
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
	else if (unk_0x236D8AD7EE179F46(Local_648.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((unk_0x236D8AD7EE179F46(Local_648.f_9, 19) || unk_0x236D8AD7EE179F46(Local_648.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (unk_0x236D8AD7EE179F46(Local_648.f_9, 25) && (((iLocal_646 == 0 && Local_401.f_0 == 21) || (iLocal_646 == 0 && Local_401.f_0 == 22)) || (iLocal_646 == 0 && Local_401.f_0 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_139[iParam0]))
	{
		if (unk_0x7404950238A154C2(Global_67889.f_139[iParam0], 0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (iParam0 == 24)
				{
					uVar3 = unk_0xB0B9E53CEFDB16AA(Global_67889.f_139[iParam0], -1);
					if (!unk_0x86CCCD2FAE9D5E65(uVar3))
					{
						iVar3 = unk_0x24E1D5759BFC6ECE(Global_67889.f_139[iParam0], -1);
					}
					iVar4 = func_275(iVar3);
					if (iVar4 != Global_98931.f_18731.f_5591)
					{
						if (func_8(iVar4))
						{
							func_306("Updating last character to use vehicle gen", iVar4);
							Global_98931.f_18731.f_5591 = iVar4;
						}
					}
				}
				if (!unk_0x46AE53A47E5D03D5(Global_67889.f_139[iParam0], 1))
				{
					func_305("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_42(Global_67889.f_139[iParam0])) && !func_41(Global_67889.f_139[iParam0])) && unk_0x14B7103DBD149FFE(Global_67889.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x40F51ABAD34CAD94(Global_67889.f_139[iParam0], true);
					}
					Global_67889.f_139[iParam0] = 0;
					Global_67889[iParam0] = 1;
					func_304(iParam0);
					return;
				}
				if (((unk_0x236D8AD7EE179F46(uLocal_47[iParam0], 0) && !unk_0x236D8AD7EE179F46(Local_648.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_305("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_42(Global_67889.f_139[iParam0])) && !func_41(Global_67889.f_139[iParam0])) && unk_0x14B7103DBD149FFE(Global_67889.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x40F51ABAD34CAD94(Global_67889.f_139[iParam0], true);
					}
					unk_0xE0913C01F5C0CC3D(&(Global_67889.f_139[iParam0]));
					Global_67889.f_139[iParam0] = 0;
					Global_67889[iParam0] = 1;
					func_304(iParam0);
					return;
				}
				if ((!unk_0x236D8AD7EE179F46(uLocal_47[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (unk_0xBBEF8270CE27C0EE(Global_67889.f_139[iParam0], unk_0x81873881071CD9FE(), 1))
					{
						func_305("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_42(Global_67889.f_139[iParam0])) && !func_41(Global_67889.f_139[iParam0])) && unk_0x14B7103DBD149FFE(Global_67889.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x40F51ABAD34CAD94(Global_67889.f_139[iParam0], true);
						}
						unk_0xE0913C01F5C0CC3D(&(Global_67889.f_139[iParam0]));
						Global_67889.f_139[iParam0] = 0;
						Global_67889[iParam0] = 1;
						func_304(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((unk_0x236D8AD7EE179F46(uLocal_47[iParam0], 1) && unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(Global_67889.f_139[iParam0], 1), Local_185[iParam0 /*3*/], 1) > fVar5) || (!unk_0x236D8AD7EE179F46(uLocal_47[iParam0], 1) && unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(Global_67889.f_139[iParam0], 1), Local_648, 1) > fVar5))
				{
					func_305("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_42(Global_67889.f_139[iParam0])) && !func_41(Global_67889.f_139[iParam0])) && unk_0x14B7103DBD149FFE(Global_67889.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x40F51ABAD34CAD94(Global_67889.f_139[iParam0], true);
					}
					unk_0xE0913C01F5C0CC3D(&(Global_67889.f_139[iParam0]));
					Global_67889.f_139[iParam0] = 0;
					Global_67889[iParam0] = 1;
					func_304(iParam0);
					return;
				}
				if (!func_46(iParam0, 0))
				{
					func_305("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_42(Global_67889.f_139[iParam0])) && !func_41(Global_67889.f_139[iParam0])) && unk_0x14B7103DBD149FFE(Global_67889.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x40F51ABAD34CAD94(Global_67889.f_139[iParam0], true);
					}
					unk_0xE0913C01F5C0CC3D(&(Global_67889.f_139[iParam0]));
					Global_67889.f_139[iParam0] = 0;
					Global_67889[iParam0] = 1;
					func_304(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_26(Global_67889.f_139[iParam0], iLocal_646, 1) && !func_42(Global_67889.f_139[iParam0])) && !func_41(Global_67889.f_139[iParam0]))
					{
						func_305("No longer needed: Mission vehicle gen moved to players garage");
						if (unk_0x14B7103DBD149FFE(Global_67889.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x40F51ABAD34CAD94(Global_67889.f_139[iParam0], true);
						}
						Global_67889.f_139[iParam0] = 0;
						Global_67889[iParam0] = 1;
						func_304(iParam0);
						return;
					}
				}
				if (uLocal_915[iParam0] > fVar0 && (!unk_0x236D8AD7EE179F46(uLocal_47[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_29();
						iVar7 = Global_98931.f_18731.f_4801;
						func_302(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_250(iVar6, iVar7))
						{
							if ((!func_42(Global_67889.f_139[iParam0]) && !func_41(Global_67889.f_139[iParam0])) && unk_0x14B7103DBD149FFE(Global_67889.f_139[iParam0]) != joaat("monster"))
							{
								unk_0x40F51ABAD34CAD94(Global_67889.f_139[iParam0], true);
							}
							func_14(Global_67889.f_139[iParam0], Global_98931.f_18731.f_5591);
							Global_67889[iParam0] = 1;
							func_304(iParam0);
						}
						else if (func_19(Global_67889.f_139[iParam0]))
						{
							func_15(Global_67889.f_139[iParam0], &Global_2437929);
							Global_2437928 = Global_98931.f_18731.f_5591;
							iLocal_1003 = Global_67889.f_139[iParam0];
						}
					}
					func_305("No longer needed: Player out for range");
					unk_0xE0913C01F5C0CC3D(&(Global_67889.f_139[iParam0]));
					unk_0x7C6BF0CD5D7454C9(Local_648, 3f, 0, 0, 0, 0);
					unk_0xA450601E968044DB(Local_648, 3f, 0, 0, 0, 0, 0);
					Global_67889.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
					{
						Global_67889.f_584 = { Local_648 };
						Global_67889.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (unk_0x236D8AD7EE179F46(Local_648.f_9, 30))
				{
					if (!unk_0x236D8AD7EE179F46(Local_648.f_9, 31))
					{
						if (!unk_0x03CF5B18BF9EC613(Global_67889.f_139[iParam0]) && !unk_0xCB8B9E751036ECB2(Global_67889.f_139[iParam0]))
						{
							Var8 = { unk_0xB6AE0DAE06D56288(Global_67889.f_139[iParam0], 1) };
							if (Var8.f_2 >= func_301(iParam0))
							{
								unk_0xC3D55C17F4AFE6C8(Global_67889.f_139[iParam0], 1);
								unk_0xF3148AAF69AF9CBC(&(Local_648.f_9), 31);
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
		Global_67889.f_139[iParam0] = 0;
	}
	if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_139[iParam0]))
	{
		func_305("No longer needed: Vehicle not driveable");
		unk_0xE0913C01F5C0CC3D(&(Global_67889.f_139[iParam0]));
		Global_67889.f_139[iParam0] = 0;
		Global_67889[iParam0] = 1;
		func_304(iParam0);
		return;
	}
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		return;
	}
	if (Global_68796 == iParam0)
	{
		func_305("Processing a vehgen vehicle handover request.");
		if (unk_0x86CCCD2FAE9D5E65(Global_68795) && unk_0x7404950238A154C2(Global_68795, 0))
		{
			if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_139[iParam0]) && unk_0x7404950238A154C2(Global_67889.f_139[iParam0], 0))
			{
				if (Global_67889.f_139[iParam0] == Global_68795)
				{
					func_305("Vehicle to be handed over is the same vehicle.");
					Global_68796 = -1;
					Global_68795 = 0;
					return;
				}
				else
				{
					func_305("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_42(Global_67889.f_139[iParam0])) && !func_41(Global_67889.f_139[iParam0])) && unk_0x14B7103DBD149FFE(Global_67889.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x40F51ABAD34CAD94(Global_67889.f_139[iParam0], true);
					}
					unk_0xE0913C01F5C0CC3D(&(Global_67889.f_139[iParam0]));
					Global_67889.f_139[iParam0] = 0;
				}
			}
			Global_67889.f_139[iParam0] = Global_68795;
			Global_67889[iParam0] = 1;
			unk_0xC69E84EBBD7166E6(&(uLocal_47[iParam0]), 0);
			unk_0xF3148AAF69AF9CBC(&(uLocal_47[iParam0]), 1);
			unk_0xC69E84EBBD7166E6(&(uLocal_47[iParam0]), 3);
			Local_185[iParam0 /*3*/] = { unk_0xB6AE0DAE06D56288(Global_68795, 1) };
			Global_68796 = -1;
			if (unk_0x236D8AD7EE179F46(Local_648.f_9, 10))
			{
				Var11.f_9 = 49;
				Var11.f_59 = 2;
				func_15(Global_68795, &Var11);
				if (Global_68797)
				{
					func_90(iParam0, &Var11, unk_0xB6AE0DAE06D56288(Global_68795, 1), unk_0x3306AAAFE3B25098(Global_68795), func_25(Global_68795));
				}
				else
				{
					func_90(iParam0, &Var11, Global_98931.f_18731.f_1864[Local_648.f_14 /*3*/], Global_98931.f_18731.f_1934[Local_648.f_14], func_25(Global_68795));
				}
				Global_67889.f_139[iParam0] = Global_68795;
				Global_67889.f_484[iParam0] = Global_67889.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar89 = func_318();
				if (func_8(iVar89))
				{
					func_305("Players stored switch vehicle cleared for prep getaway.");
					Global_90577[iVar89] = 0;
				}
			}
			unk_0xD768713E73165208(Global_67889.f_139[iParam0], 1, 1);
			if (iParam0 == 24)
			{
				unk_0x40F51ABAD34CAD94(Global_67889.f_139[iParam0], false);
			}
			Global_68795 = 0;
			if (Global_2437929.f_66 != 0)
			{
				func_173(&Global_2437929, Global_2437928);
				Global_2437929.f_66 = 0;
			}
			return;
		}
		if (Global_2437929.f_66 != 0)
		{
			func_173(&Global_2437929, Global_2437928);
			Global_2437929.f_66 = 0;
		}
		func_305("Vehicle to be handed over doesn't exist.");
		Global_68796 = -1;
		Global_68795 = 0;
	}
	if (Global_67889[iParam0])
	{
		if (uLocal_915[iParam0] >= fVar0)
		{
			Global_67889[iParam0] = 0;
			func_305("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
		{
			Global_67889.f_584 = { 0f, 0f, 0f };
			Global_67889.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar90 = false;
	if (uLocal_915[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_98931.f_18731.f_1958[Local_648.f_14] != 0) && Global_98931.f_18731.f_1958[Local_648.f_14] > 3) && Local_648.f_4 != 0) && func_46(iParam0, 0)) && func_21(Local_648.f_4))
		{
			iVar91 = func_29();
			iVar92 = Global_98931.f_18731.f_4801;
			func_302(&iVar92, 0, 0, 17, 0, 0, 0);
			if (func_250(iVar91, iVar92))
			{
				func_173(&(Global_98931.f_18731.f_69[Local_648.f_14 /*78*/]), Global_98931.f_18731.f_5591);
				func_304(iParam0);
				Global_67889[iParam0] = 1;
				func_305("Cannot be created: Vehicle ready for impound");
				Global_2437929.f_66 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
		{
			bVar90 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
	{
		Global_67889.f_584 = { 0f, 0f, 0f };
		Global_67889.f_587 = { 0f, 0f, 0f };
	}
	if (Local_648.f_4 == 0)
	{
		Global_67889[iParam0] = 1;
		func_305("Cannot be created: Dummy model");
		return;
	}
	if (!func_21(Local_648.f_4))
	{
		Global_67889[iParam0] = 1;
		func_305("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_46(iParam0, 0))
	{
		Global_67889[iParam0] = 1;
		func_305("Cannot be created: Vehicle gen not available");
		return;
	}
	if (unk_0x236D8AD7EE179F46(Local_648.f_9, 14) && !func_46(iParam0, 5))
	{
		Global_67889[iParam0] = 1;
		func_305("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_300() && func_299(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_67889[iParam0] = 1;
		func_305("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_647)
	{
		Global_67889[iParam0] = 1;
		func_305("Cannot be created: Player character not valid");
		return;
	}
	if (unk_0x236D8AD7EE179F46(Local_648.f_9, 10))
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[iParam0]))
		{
			Global_67889[iParam0] = 1;
			func_305("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_67889.f_484[iParam0] = 0;
		}
	}
	if (unk_0x236D8AD7EE179F46(Local_648.f_9, 6))
	{
		if (func_298(Local_648.f_4, -1))
		{
			Global_67889[iParam0] = 1;
			func_305("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_297(Local_648.f_4, -1))
		{
			Global_67889[iParam0] = 1;
			func_305("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (unk_0x236D8AD7EE179F46(Local_648.f_9, 29))
	{
		if (Local_401.f_3 == 0)
		{
			return;
		}
	}
	if (func_296(iParam0))
	{
		Global_67889[iParam0] = 1;
		func_305("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (unk_0xF33755A765033580() && unk_0xCC3731E2C2E07187() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_67889[iParam0] = 1;
			func_305("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar93 = 0;
	if (unk_0x236D8AD7EE179F46(Local_648.f_9, 19))
	{
		iVar93 = 2;
	}
	else if (unk_0x236D8AD7EE179F46(Local_648.f_9, 20))
	{
		iVar93 = 1;
	}
	if ((iParam0 == 24 && Global_98931.f_18731.f_1958[Local_648.f_14] > 0) && Global_98931.f_18731.f_1958[Local_648.f_14] <= 3)
	{
		if (unk_0xC5ABD699DDC9D5A0(Local_648.f_4))
		{
			iVar93 = 2;
			Local_648.f_12 = (Global_98931.f_18731.f_1958[Local_648.f_14] - 1);
		}
		else if (unk_0x61A26017817C6AED(Local_648.f_4))
		{
			iVar93 = 1;
			Local_648.f_12 = (Global_98931.f_18731.f_1958[Local_648.f_14] - 1);
		}
	}
	if (iVar93 != 0)
	{
		if (func_295(Local_648.f_12, iVar93, Local_648, -1f))
		{
			Global_67889[iParam0] = 1;
			func_305("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_324(iParam0, 0);
			}
			return;
		}
		if (unk_0x236D8AD7EE179F46(Local_648.f_9, 19) || unk_0x236D8AD7EE179F46(Local_648.f_9, 20))
		{
			if (iVar93 == 2)
			{
				if (Global_88521[Local_648.f_12 /*3*/][1] != -1 && (unk_0x48E480685981C7D4() - Global_88521[Local_648.f_12 /*3*/][1]) < unk_0x44D418A3EEF5DA87() * 180)
				{
					Global_67889[iParam0] = 1;
					func_305("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var94, "...", 24);
					StringIntConCat(&Var94, ((unk_0x44D418A3EEF5DA87() * 180 - (unk_0x48E480685981C7D4() - Global_88521[Local_648.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var94, " seconds", 24);
					func_305(&Var94);
					return;
				}
			}
			else if (iVar93 == 1)
			{
				if (Global_88521[Local_648.f_12 /*3*/][0] != -1 && (unk_0x48E480685981C7D4() - Global_88521[Local_648.f_12 /*3*/][0]) < unk_0x44D418A3EEF5DA87() * 180)
				{
					Global_67889[iParam0] = 1;
					func_305("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var100, "...", 24);
					StringIntConCat(&Var100, ((unk_0x44D418A3EEF5DA87() * 180 - (unk_0x48E480685981C7D4() - Global_88521[Local_648.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var100, " seconds", 24);
					func_305(&Var100);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
	{
		Global_67889.f_584 = { Local_648 };
	}
	if (bVar90)
	{
		return;
	}
	if (iVar93 != 0)
	{
		iLocal_116[iParam0] = func_6(Local_648.f_12, iVar93);
		unk_0x32A12757CBF48A33(iLocal_116[iParam0]);
		unk_0xF3148AAF69AF9CBC(&(uLocal_47[iParam0]), 2);
		if (!unk_0x33ACB874CECA2D4B(iLocal_116[iParam0]))
		{
			func_305("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_294(iLocal_116[iParam0], Local_648, 1))
		{
			func_305("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		unk_0x7C6BF0CD5D7454C9(Local_648, 3f, 0, 0, 0, 0);
		unk_0xA450601E968044DB(Local_648, 3f, 0, 0, 0, 0, 0);
		if (iVar93 == 2)
		{
			func_289(&(Global_67889.f_139[iParam0]), Local_648.f_12, Local_648, Local_648.f_3, 0, 2);
		}
		else if (iVar93 == 1)
		{
			func_289(&(Global_67889.f_139[iParam0]), Local_648.f_12, Local_648, Local_648.f_3, 0, 1);
		}
		else
		{
			Global_67889[iParam0] = 1;
			func_305("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		unk_0x32A12757CBF48A33(Local_648.f_4);
		iLocal_116[iParam0] = Local_648.f_4;
		unk_0xF3148AAF69AF9CBC(&(uLocal_47[iParam0]), 2);
		if (!unk_0x33ACB874CECA2D4B(Local_648.f_4))
		{
			func_305("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_294(Local_648.f_4, Local_648, 1))
		{
			func_305("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		unk_0x7C6BF0CD5D7454C9(Local_648, 3f, 0, 0, 0, 0);
		unk_0xA450601E968044DB(Local_648, 3f, 0, 0, 0, 0, 0);
		if (unk_0x236D8AD7EE179F46(Local_648.f_9, 23))
		{
			unk_0x77428ED9B41A3CAF(Local_648);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_648.f_4 == joaat("submersible2"))
			{
				Local_648.f_2 = -3f;
			}
		}
		Global_67889.f_139[iParam0] = unk_0xE00F8DEA9778FC87(Local_648.f_4, Local_648, Local_648.f_3, 1, 1);
		if (unk_0x236D8AD7EE179F46(Local_648.f_9, 10))
		{
			if (unk_0x1699D7B95446F15C(Local_648.f_4))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_18731.f_69[Local_648.f_14 /*78*/].f_77), 22);
			}
			if (unk_0x236D8AD7EE179F46(Global_98931.f_18731.f_69[Local_648.f_14 /*78*/].f_77, 14))
			{
				func_15(Global_67889.f_139[iParam0], &Local_750);
				func_288(Local_750.f_77, &(Global_98931.f_18731.f_69[Local_648.f_14 /*78*/].f_77), Local_648.f_4);
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_18731.f_69[Local_648.f_14 /*78*/].f_77), 14);
			}
			func_263(Global_67889.f_139[iParam0], &(Global_98931.f_18731.f_69[Local_648.f_14 /*78*/]), 0, 1);
			Global_67889.f_484[iParam0] = Global_67889.f_139[iParam0];
		}
		else
		{
			if (unk_0x236D8AD7EE179F46(Local_648.f_9, 9))
			{
				unk_0xFD021BAF9614D437(Global_67889.f_139[iParam0], Local_648.f_10, Local_648.f_11);
			}
			if (unk_0x236D8AD7EE179F46(Local_648.f_9, 8))
			{
				unk_0xC390A6485FB80923(Global_67889.f_139[iParam0], 2);
				unk_0x1A6319AD50F7E848(Global_67889.f_139[iParam0], 0);
				unk_0x9A4D3F7FEB5EE4C5(Global_67889.f_139[iParam0], 0);
				unk_0x50A8082D054BFD08(Global_67889.f_139[iParam0], 0);
				unk_0xC81A8F418917F5CD(Global_67889.f_139[iParam0], 0);
				unk_0x832B978B0A9D2169(Global_67889.f_139[iParam0], 0);
				unk_0xDD213338390D43E1(Global_67889.f_139[iParam0], false);
				unk_0x210A4A0B257F8433(Global_67889.f_139[iParam0], 1);
				unk_0xA8F22633ACC22189(Global_67889.f_139[iParam0], 1);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_139[iParam0]))
	{
		func_287("Created - Coords: ", Local_648);
		func_286("Created - Dist From Player:", uLocal_915[iParam0]);
		if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
		{
			Global_67889.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_648.f_4)
		{
			case joaat("miljet"):
				unk_0xFD021BAF9614D437(Global_67889.f_139[iParam0], 121, 21);
				unk_0x3CA38E5C9A060AAD(Global_67889.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				unk_0xFD021BAF9614D437(Global_67889.f_139[iParam0], 122, 89);
				unk_0x3CA38E5C9A060AAD(Global_67889.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				unk_0xFD021BAF9614D437(Global_67889.f_139[iParam0], 0, 0);
				unk_0x3CA38E5C9A060AAD(Global_67889.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				unk_0xFD021BAF9614D437(Global_67889.f_139[iParam0], 12, 12);
				unk_0x3CA38E5C9A060AAD(Global_67889.f_139[iParam0], 0, 12);
				break;
			
			case joaat("rhino"):
				unk_0xFD021BAF9614D437(Global_67889.f_139[iParam0], 131, 132);
				unk_0x3CA38E5C9A060AAD(Global_67889.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				unk_0xFD021BAF9614D437(Global_67889.f_139[iParam0], 159, 0);
				unk_0x3CA38E5C9A060AAD(Global_67889.f_139[iParam0], 160, 156);
				break;
		}
		if (unk_0x236D8AD7EE179F46(Local_648.f_9, 22))
		{
			unk_0xC3D55C17F4AFE6C8(Global_67889.f_139[iParam0], 1);
		}
		if (unk_0x236D8AD7EE179F46(Local_648.f_9, 30))
		{
			unk_0xC69E84EBBD7166E6(&(Local_648.f_9), 31);
		}
		if (unk_0x236D8AD7EE179F46(Local_648.f_9, 26))
		{
			unk_0xC390A6485FB80923(Global_67889.f_139[iParam0], 7);
			unk_0xE6FA34E8934FEB3C(Global_67889.f_139[iParam0], 1);
		}
		func_285(Global_67889.f_139[iParam0], iParam0);
		if (!unk_0x236D8AD7EE179F46(Local_648.f_9, 29) && !unk_0x236D8AD7EE179F46(Local_648.f_9, 30))
		{
			unk_0x5CC9D6711FE01F0D(Global_67889.f_139[iParam0]);
		}
		unk_0xA0E7470F98EF901A(Global_67889.f_139[iParam0], 0f);
		unk_0xEA89E72C99125D9C(Global_67889.f_139[iParam0], 1);
		unk_0x40F51ABAD34CAD94(Global_67889.f_139[iParam0], unk_0x236D8AD7EE179F46(Local_648.f_9, 5));
	}
	unk_0xC69E84EBBD7166E6(&(uLocal_47[iParam0]), 0);
	unk_0xC69E84EBBD7166E6(&(uLocal_47[iParam0]), 1);
	Global_67889[iParam0] = 1;
	if (iVar93 != 0)
	{
		Global_67889.f_69[iParam0] = 1;
	}
	iVar106 = func_282(458, -1, -1);
	if (iVar106 != 0 && iVar106 == iParam0)
	{
		iLocal_1002 = Global_67889.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2437929.f_66 = 0;
	}
}

int func_282(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_71();
	}
	iVar0 = 0;
	iVar1 = func_284(iParam0, iParam1);
	uVar2 = func_283(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x2D4C39631AE832EC(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_283(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xA51E0F05C28DE3B1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xA51E0F05C28DE3B1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xA51E0F05C28DE3B1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xA51E0F05C28DE3B1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xA51E0F05C28DE3B1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xA51E0F05C28DE3B1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xA51E0F05C28DE3B1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xA51E0F05C28DE3B1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xA51E0F05C28DE3B1((iParam0 - 4399)) * 8) * 8;
	}
	return iVar0;
}

int func_284(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_71();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x10C4199683D22346((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x10C4199683D22346((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x10C4199683D22346((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x10C4199683D22346((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xEC4FE64D825D44B7((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xEC4FE64D825D44B7((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x91F6790AA622BE90((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x91F6790AA622BE90((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x91F6790AA622BE90((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	return iVar0;
}

void func_285(int iParam0, int iParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				unk_0xFFD977134FEB8B80(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				unk_0xFFD977134FEB8B80(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				unk_0xFFD977134FEB8B80(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				unk_0x90B59F54B0DB5FF7(iParam0, 6, false);
				unk_0x90B59F54B0DB5FF7(iParam0, 1, true);
				break;
			}
	}
}

void func_286(char* sParam0, float fParam1)
{
	if (!unk_0xB318FDA0D1ABDB20(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_287(char* sParam0, float fParam1, var uParam2, var uParam3)
{
	if (!unk_0xB318FDA0D1ABDB20(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_288(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			unk_0xC69E84EBBD7166E6(&iVar0, 0);
			unk_0xC69E84EBBD7166E6(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			unk_0xC69E84EBBD7166E6(&iVar0, 0);
			unk_0xC69E84EBBD7166E6(&iVar0, 1);
			unk_0xC69E84EBBD7166E6(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			unk_0xC69E84EBBD7166E6(&iVar0, 0);
			unk_0xC69E84EBBD7166E6(&iVar0, 1);
			unk_0xC69E84EBBD7166E6(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			unk_0xC69E84EBBD7166E6(&iVar0, 0);
			break;
		
		case joaat("stalion"):
			unk_0xC69E84EBBD7166E6(&iVar0, 0);
			unk_0xC69E84EBBD7166E6(&iVar0, 1);
			unk_0xC69E84EBBD7166E6(&iVar0, 2);
			break;
		
		case joaat("chino"):
			unk_0xC69E84EBBD7166E6(&iVar0, 0);
			unk_0xC69E84EBBD7166E6(&iVar0, 1);
			unk_0xC69E84EBBD7166E6(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_289(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;
	
	if (func_8(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_7(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0x86CCCD2FAE9D5E65(*iParam0))
		{
			if (unk_0x14B7103DBD149FFE(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_98931.f_1750.f_539.f_3544) && Global_98931.f_7699.f_99.f_58[131])
		{
			Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x32A12757CBF48A33(Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x33ACB874CECA2D4B(Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xE00F8DEA9778FC87(Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/], Param2, uParam5, 0, 0);
				unk_0x5CC9D6711FE01F0D(*iParam0);
				unk_0x726A9B2010B2B4D6(*iParam0, 0);
				unk_0x40F51ABAD34CAD94(*iParam0, false);
				unk_0x50C9C2E3327FDF31(*iParam0, 1);
				unk_0x9765BF567DB87B5F(*iParam0, 1250);
				unk_0xE61FF1947C0507EB(*iParam0, 1250f);
				unk_0xB43C660E422A4C75(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xFD021BAF9614D437(*iParam0, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_5, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0x3CA38E5C9A060AAD(*iParam0, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_7, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0xA0E7470F98EF901A(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0x90B59F54B0DB5FF7(*iParam0, iVar103 + 1, !Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x92DA0788D9C7D29A(*iParam0, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_293(&uVar1, &uVar0))
				{
					unk_0xA9FDEEBC09186222(*iParam0, &uVar1);
					unk_0x1E6C0DB293E78345(*iParam0, uVar0);
				}
				else
				{
					unk_0xA9FDEEBC09186222(*iParam0, &(Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 < unk_0x5393C767E0A1742B())
					{
						unk_0x1E6C0DB293E78345(*iParam0, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xCAFB5A22098B8EA4(*iParam0, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_84, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_85, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0xDD213338390D43E1(*iParam0, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0xBA0A17020F825714(*iParam0, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x34318363F8442B01(*iParam0, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_93, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_94, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x797EA5FDEC3CF253(*iParam0, 2, unk_0x236D8AD7EE179F46(Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x797EA5FDEC3CF253(*iParam0, 3, unk_0x236D8AD7EE179F46(Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x797EA5FDEC3CF253(*iParam0, 0, unk_0x236D8AD7EE179F46(Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x797EA5FDEC3CF253(*iParam0, 1, unk_0x236D8AD7EE179F46(Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x9DCB5D9F2125C30D(*iParam0) > 1 && Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x24F85A008ECA63FB(*iParam0, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(*iParam0)))
					{
						if (unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(*iParam0)))
						{
							if (Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xE82FEE20AC58682A(*iParam0, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE82FEE20AC58682A(*iParam0, Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_264(iParam0, &(Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_31), &(Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0xA88BB53EB1055D08(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x14B7103DBD149FFE(*iParam0) == joaat("bodhi2"))
					{
						func_291(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x887F4488DA99FD21(Global_98931.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
				}
				func_290(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x32A12757CBF48A33(Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x33ACB874CECA2D4B(Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xE00F8DEA9778FC87(Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0);
				unk_0x5CC9D6711FE01F0D(*iParam0);
				unk_0x726A9B2010B2B4D6(*iParam0, 0);
				unk_0x40F51ABAD34CAD94(*iParam0, false);
				unk_0x50C9C2E3327FDF31(*iParam0, 1);
				unk_0x9765BF567DB87B5F(*iParam0, 1250);
				unk_0xE61FF1947C0507EB(*iParam0, 1250f);
				unk_0xB43C660E422A4C75(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xFD021BAF9614D437(*iParam0, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_5, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0x3CA38E5C9A060AAD(*iParam0, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_7, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0xA0E7470F98EF901A(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0x90B59F54B0DB5FF7(*iParam0, iVar104 + 1, !Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x92DA0788D9C7D29A(*iParam0, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_293(&uVar1, &uVar0))
				{
					unk_0xA9FDEEBC09186222(*iParam0, &uVar1);
					unk_0x1E6C0DB293E78345(*iParam0, uVar0);
				}
				else
				{
					unk_0xA9FDEEBC09186222(*iParam0, &(Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 < unk_0x5393C767E0A1742B())
					{
						unk_0x1E6C0DB293E78345(*iParam0, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xCAFB5A22098B8EA4(*iParam0, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_84, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_85, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0xDD213338390D43E1(*iParam0, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0xBA0A17020F825714(*iParam0, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x34318363F8442B01(*iParam0, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_93, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_94, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x797EA5FDEC3CF253(*iParam0, 2, unk_0x236D8AD7EE179F46(Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x797EA5FDEC3CF253(*iParam0, 3, unk_0x236D8AD7EE179F46(Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x797EA5FDEC3CF253(*iParam0, 0, unk_0x236D8AD7EE179F46(Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x797EA5FDEC3CF253(*iParam0, 1, unk_0x236D8AD7EE179F46(Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x9DCB5D9F2125C30D(*iParam0) > 1 && Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x24F85A008ECA63FB(*iParam0, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(*iParam0)))
					{
						if (unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(*iParam0)))
						{
							if (Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xE82FEE20AC58682A(*iParam0, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE82FEE20AC58682A(*iParam0, Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_264(iParam0, &(Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_31), &(Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0xA88BB53EB1055D08(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x14B7103DBD149FFE(*iParam0) == joaat("bodhi2"))
					{
						func_291(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x887F4488DA99FD21(Global_98931.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
				}
				func_290(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x32A12757CBF48A33(Var5.f_0);
			if (unk_0x33ACB874CECA2D4B(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0xE00F8DEA9778FC87(Var5.f_0, Param2, fParam5, 1, 1);
				unk_0x5CC9D6711FE01F0D(*iParam0);
				unk_0x726A9B2010B2B4D6(*iParam0, 0);
				unk_0x40F51ABAD34CAD94(*iParam0, false);
				unk_0x50C9C2E3327FDF31(*iParam0, 1);
				StringCopy(&cVar106, unk_0xE0DCE5625B61B0CC(*iParam0), 16);
				unk_0x9765BF567DB87B5F(*iParam0, 1250);
				unk_0xE61FF1947C0507EB(*iParam0, 1250f);
				unk_0xB43C660E422A4C75(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xFD021BAF9614D437(*iParam0, Var5.f_5, Var5.f_6);
				unk_0x3CA38E5C9A060AAD(*iParam0, Var5.f_7, Var5.f_8);
				unk_0xA0E7470F98EF901A(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0x90B59F54B0DB5FF7(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0x92DA0788D9C7D29A(*iParam0, Var5.f_24);
				}
				if (func_293(&uVar1, &uVar0))
				{
					unk_0xA9FDEEBC09186222(*iParam0, &uVar1);
					unk_0x1E6C0DB293E78345(*iParam0, uVar0);
				}
				else
				{
					unk_0xA9FDEEBC09186222(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0x5393C767E0A1742B())
					{
						unk_0x1E6C0DB293E78345(*iParam0, Var5.f_26);
					}
				}
				unk_0xCAFB5A22098B8EA4(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0xDD213338390D43E1(*iParam0, Var5.f_88);
				unk_0xBA0A17020F825714(*iParam0, Var5.f_87);
				unk_0x34318363F8442B01(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0x797EA5FDEC3CF253(*iParam0, 2, unk_0x236D8AD7EE179F46(Var5.f_92, 28));
				unk_0x797EA5FDEC3CF253(*iParam0, 3, unk_0x236D8AD7EE179F46(Var5.f_92, 29));
				unk_0x797EA5FDEC3CF253(*iParam0, 0, unk_0x236D8AD7EE179F46(Var5.f_92, 30));
				unk_0x797EA5FDEC3CF253(*iParam0, 1, unk_0x236D8AD7EE179F46(Var5.f_92, 31));
				if (unk_0x9DCB5D9F2125C30D(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0x24F85A008ECA63FB(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(*iParam0)))
					{
						if (unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0xE82FEE20AC58682A(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0xE82FEE20AC58682A(*iParam0, Var5.f_90);
						}
					}
				}
				func_264(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0xA88BB53EB1055D08(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x14B7103DBD149FFE(*iParam0) == joaat("bagger") && !Global_98931.f_7699.f_99.f_58[118])
					{
						unk_0xA9FDEEBC09186222(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x14B7103DBD149FFE(*iParam0) == joaat("bodhi2"))
					{
						func_291(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_98931.f_1750.f_539.f_3544) && Global_98931.f_7699.f_99.f_58[131]) && unk_0x14B7103DBD149FFE(*iParam0) == joaat("tailgater"))
				{
					unk_0x323720FEE81B53C0(*iParam0, 6, 1, false);
					unk_0x323720FEE81B53C0(*iParam0, 14, 7, false);
					unk_0x323720FEE81B53C0(*iParam0, 11, 2, false);
					unk_0x323720FEE81B53C0(*iParam0, 2, 3, false);
					unk_0x323720FEE81B53C0(*iParam0, 7, 5, false);
					unk_0x323720FEE81B53C0(*iParam0, 0, 0, false);
					unk_0x323720FEE81B53C0(*iParam0, 3, 3, false);
					unk_0x323720FEE81B53C0(*iParam0, 13, 1, false);
					unk_0x323720FEE81B53C0(*iParam0, 4, 3, false);
					unk_0x323720FEE81B53C0(*iParam0, 12, 2, false);
					unk_0xC163DC4217AA2669(*iParam0, 22, true);
					unk_0xE82FEE20AC58682A(*iParam0, 2);
					unk_0x323720FEE81B53C0(*iParam0, 23, 11, false);
					unk_0xBA0A17020F825714(*iParam0, 2);
					Global_98931.f_1750.f_539.f_3544 = 1;
					func_146(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x887F4488DA99FD21(Var5.f_0);
				}
				if (bVar105)
				{
					func_290(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_290(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]))
		{
			Global_88473[iVar0] = iParam0;
			Global_88483[iVar0] = iParam1;
			Global_88493[iVar0] = unk_0x14B7103DBD149FFE(iParam0);
			if (unk_0x61A26017817C6AED(Global_88493[iVar0]))
			{
				Global_88521[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88521[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_291(var uParam0)
{
	if (!func_292(*uParam0))
	{
		unk_0x90B59F54B0DB5FF7(*uParam0, 5, !Global_98931.f_7699.f_99.f_58[119]);
	}
}

bool func_292(int iParam0)
{
	return unk_0x5CBBEE14743C3376(iParam0, 5);
}

int func_293(var uParam0, var uParam1)
{
	if (unk_0x1C6DF6AD69BE853E())
	{
	}
	else if (Global_98931.f_24567.f_261)
	{
		*uParam0 = { Global_98931.f_24567.f_267 };
		*uParam1 = Global_98931.f_24567.f_271;
		return 1;
	}
	return 0;
}

int func_294(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if ((iParam4 && unk_0x29AFA2493D7C23D0()) && unk_0x968BF1C2C695B61A(joaat("startup_positioning")) > 0)
	{
		func_305("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	unk_0x01C5E7A27762AF21(uParam0, &Var0, &Var3);
	fVar6 = unk_0x0D6E79537424BACE(Var3, Var0, 1);
	if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Param1, 1) < (fVar6 * 0.5f))
	{
		func_286("player is in vehicle bounds - fLength: ", fVar6);
		func_286("player is in vehicle bounds - fDistance: ", unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Param1, 1));
		return 1;
	}
	return 0;
}

int func_295(int iParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	struct<82> Var1;
	int iVar99;
	
	if (!func_8(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar99 = 0;
	func_7(iParam0, &Var1, iParam1);
	iVar99 = Var1.f_0;
	if (iVar99 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]) && unk_0x7404950238A154C2(Global_88473[iVar0], 0))
			{
				if (unk_0x14B7103DBD149FFE(Global_88473[iVar0]) == iVar99 && Global_88483[iVar0] == iParam0)
				{
					if (fParam5 == -1f || unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(Global_88473[iVar0], 0), Param2, 1) <= fParam5)
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

int func_296(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_648.f_4 == joaat("frogger2"))
		{
			if (((func_298(Local_648.f_4, -1) || func_297(Local_648.f_4, -1)) || unk_0x968BF1C2C695B61A(joaat("exile2")) > 0) || !func_278(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[20]) && !unk_0x930F8FBB8E9537CC(Global_67889.f_484[20])) && unk_0x7404950238A154C2(Global_67889.f_484[20], 0))
		{
			if (Local_648.f_4 == unk_0x14B7103DBD149FFE(Global_67889.f_484[20]))
			{
				unk_0x1D3AAB0507DD3600(Global_67889.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_648.f_10 && iVar1 == Local_648.f_11)
				{
					func_168(20);
				}
			}
		}
	}
	return 0;
}

int func_297(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = unk_0x19DFFDAF59F973CC(Local_648, 200f, iParam0, iVar0);
	if ((unk_0x86CCCD2FAE9D5E65(iVar1) && unk_0x7404950238A154C2(iVar1, 0)) && unk_0x14B7103DBD149FFE(iVar1) == iParam0)
	{
		if (iParam1 == -1 || unk_0xA3EFB2F9FFCDC48D(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_298(int iParam0, int iParam1)
{
	var uVar0[50];
	int iVar51;
	int iVar52;
	
	iVar52 = unk_0x4E560E0D96659196(unk_0x81873881071CD9FE(), &uVar0);
	iVar51 = 0;
	while (iVar51 < iVar52)
	{
		if ((unk_0x86CCCD2FAE9D5E65(uVar0[iVar51]) && unk_0x7404950238A154C2(uVar0[iVar51], 0)) && unk_0x14B7103DBD149FFE(uVar0[iVar51]) == iParam0)
		{
			if (iParam1 == -1 || unk_0xA3EFB2F9FFCDC48D(uVar0[iVar51]) == iParam1)
			{
				return 1;
			}
		}
		iVar51++;
	}
	return 0;
}

int func_299(int iParam0)
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	if (func_246(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_300()
{
	return Global_67889.f_138;
}

float func_301(int iParam0)
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

void func_302(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_34(*uParam0);
	iVar1 = func_36(*uParam0);
	iVar2 = func_254(*uParam0);
	iVar3 = func_253(*uParam0);
	iVar4 = func_252(*uParam0);
	iVar5 = func_251(*uParam0);
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
	iVar6 = func_33(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_33(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_303(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_303(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, iParam1);
	func_38(uParam0, iParam2);
	func_37(uParam0, iParam3);
	func_31(uParam0, iParam5);
	func_32(uParam0, iParam4);
	func_30(uParam0, iParam6);
}

void func_304(int iParam0)
{
	if (unk_0x236D8AD7EE179F46(Local_648.f_9, 13))
	{
		func_324(iParam0, 0);
	}
}

void func_305(char* sParam0)
{
	if (!unk_0xB318FDA0D1ABDB20(sParam0))
	{
	}
}

void func_306(char* sParam0, int iParam1)
{
	if (!unk_0xB318FDA0D1ABDB20(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_307(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
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
			bVar0 = !func_46(iParam0, 5);
			Var1 = { -961.42f, -2794.47f, 12.96f };
			fVar4 = -209.22f;
			iVar5 = 0;
			iVar6 = joaat("prop_airport_sale_sign");
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_46(iParam0, 5);
			Var1 = { -827.93f, -1368.14f, 3.9982f };
			fVar4 = -68.75f;
			iVar5 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_46(iParam0, 5);
			bVar0 = true;
			Var1 = { -710.07f, -1414.31f, 4f };
			fVar4 = -41.25f;
			iVar5 = 2;
			break;
		
		case 21:
			bVar0 = !func_46(iParam0, 5);
			Var1 = { -66.21f, 77.76f, 70.51f };
			fVar4 = -27f;
			iVar5 = 3;
			break;
		
		case 22:
			bVar0 = !func_46(iParam0, 5);
			Var1 = { -76.02f, -1825.61f, 25.88f };
			fVar4 = -129.67f;
			iVar5 = 4;
			break;
		
		case 23:
			bVar0 = !func_46(iParam0, 5);
			Var1 = { -218.68f, -1165.76f, 21.99f };
			fVar4 = 89.95f;
			iVar5 = 5;
			break;
	}
	if (bVar0 && unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Var1, 1) < 250f)
	{
		if (!unk_0x86CCCD2FAE9D5E65(uLocal_832[iVar5]))
		{
			unk_0x32A12757CBF48A33(iVar6);
			iLocal_839 = 1;
			if (unk_0x33ACB874CECA2D4B(iVar6))
			{
				if (iLocal_839)
				{
					uLocal_832[iVar5] = unk_0x530605DB2F32365F(iVar6, Var1, 0, 1, 0);
					unk_0x3A45EB0810EBE71C(uLocal_832[iVar5], 0f, 0f, fVar4, 2, 1);
					unk_0x57B73553960790B6(uLocal_832[iVar5], 0);
					unk_0xA8F22633ACC22189(uLocal_832[iVar5], 1);
					unk_0x887F4488DA99FD21(iVar6);
					iLocal_839 = 0;
				}
			}
		}
	}
	else if (iVar5 != -1)
	{
		if ((unk_0x86CCCD2FAE9D5E65(uLocal_832[iVar5]) && !unk_0x331E7ACCFD0869AD(uLocal_832[iVar5])) && unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Var1, 1) > 255f)
		{
			unk_0xAB6AFD52AD641D70(&(uLocal_832[iVar5]));
			if (iLocal_839)
			{
				unk_0x887F4488DA99FD21(iVar6);
				iLocal_839 = 0;
			}
		}
	}
}

void func_308(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (func_46(iParam0, 0) && (!unk_0x236D8AD7EE179F46(Local_648.f_9, 14) || func_46(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_67889.f_346[iParam0] != bVar0)
	{
		if (!func_4(Local_648.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_67889.f_346[iParam0])
				{
					unk_0xE91F714E010C7127(Global_67889.f_415[iParam0], 0);
				}
			}
			else if (!Global_67889.f_346[iParam0])
			{
				Global_67889.f_415[iParam0] = unk_0x13705C66F125D98D(Local_648.f_15, Local_648.f_18, 0, 1, 1, 1);
			}
		}
		Global_67889.f_346[iParam0] = bVar0;
	}
}

void func_309(int iParam0)
{
	int iVar0;
	
	if (unk_0x236D8AD7EE179F46(Local_648.f_9, 15))
	{
		if (func_46(iParam0, 0) && !func_46(iParam0, 5))
		{
			iVar0 = 145;
			if (unk_0x236D8AD7EE179F46(Local_648.f_9, 16))
			{
				iVar0 = func_310(9);
			}
			else if (unk_0x236D8AD7EE179F46(Local_648.f_9, 18))
			{
				iVar0 = func_310(4);
			}
			if (iVar0 == Local_648.f_12)
			{
				func_215(iParam0, 5, 1);
			}
		}
	}
}

int func_310(int iParam0)
{
	return Global_98931.f_29353[iParam0 /*4*/];
}

void func_311(int iParam0)
{
	if (func_46(iParam0, 0) && !func_46(iParam0, 3))
	{
		if (unk_0x236D8AD7EE179F46(Local_648.f_9, 4))
		{
			func_215(iParam0, 3, 1);
		}
		else
		{
			func_215(iParam0, 3, 1);
		}
	}
}

void func_312(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_46(iParam0, 0) && bLocal_647)
	{
		if (unk_0x236D8AD7EE179F46(Local_648.f_9, 0) || (unk_0x236D8AD7EE179F46(Local_648.f_9, 2) && !func_46(iParam0, 2)))
		{
			if ((!unk_0x236D8AD7EE179F46(Local_648.f_9, 21) || (((((((!func_10(0) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(9)) && !func_10(10)) && !func_10(13)) && !func_10(14))) && ((unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0 || func_46(iParam0, 5)) || !unk_0x236D8AD7EE179F46(Local_648.f_9, 28)))
			{
				bVar0 = false;
				if (!unk_0xFBACB273AA628CC5(Global_67889.f_208[iParam0]))
				{
					if (func_278(0))
					{
						if (unk_0x236D8AD7EE179F46(Local_648.f_9, 14) && !func_46(iParam0, 5))
						{
							Global_67889.f_208[iParam0] = unk_0xA949BE56543040D2(Local_669.f_55);
							if (Local_669.f_58 != -1)
							{
								unk_0x8F827BB0F6ED7AA8(Global_67889.f_208[iParam0], Local_669.f_58);
								if (!unk_0xB318FDA0D1ABDB20(&(Local_669.f_59)))
								{
									unk_0x2AB7C42FF2AF476D(Global_67889.f_208[iParam0], &(Local_669.f_59));
								}
							}
						}
						else if (func_46(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_67889.f_208[iParam0] = unk_0xA949BE56543040D2(Local_669.f_55);
							if (Local_648.f_13 != -1)
							{
								unk_0x8F827BB0F6ED7AA8(Global_67889.f_208[iParam0], Local_648.f_13);
								if (!unk_0xB318FDA0D1ABDB20(&(Local_669.f_59)))
								{
									unk_0x2AB7C42FF2AF476D(Global_67889.f_208[iParam0], &(Local_669.f_59));
								}
								if (Local_648.f_12 == 0)
								{
									iVar1 = 42;
								}
								else if (Local_648.f_12 == 1)
								{
									iVar1 = 43;
								}
								else if (Local_648.f_12 == 2)
								{
									iVar1 = 44;
								}
								unk_0x1B86E7A8766EA6B4(Global_67889.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_67889.f_208[iParam0] = unk_0xA949BE56543040D2(Local_648);
							if (Local_648.f_13 != -1)
							{
								unk_0x8F827BB0F6ED7AA8(Global_67889.f_208[iParam0], Local_648.f_13);
								if (!unk_0xB318FDA0D1ABDB20(&(Local_669.f_59)))
								{
									unk_0x2AB7C42FF2AF476D(Global_67889.f_208[iParam0], &(Local_669.f_59));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_648.f_12 == 0)
									{
										iVar2 = 42;
									}
									else if (Local_648.f_12 == 1)
									{
										iVar2 = 43;
									}
									else if (Local_648.f_12 == 2)
									{
										iVar2 = 44;
									}
									unk_0x1B86E7A8766EA6B4(Global_67889.f_208[iParam0], iVar2);
								}
							}
						}
						unk_0x6FA15F9609E21DA5(Global_67889.f_208[iParam0], !unk_0x236D8AD7EE179F46(Local_648.f_9, 1));
						unk_0x20F5C387A2DC0C80(Global_67889.f_208[iParam0], 0);
						unk_0xCB015C3E2E01CA1C(Global_67889.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (unk_0xFBACB273AA628CC5(Global_67889.f_208[iParam0]))
		{
			unk_0x0A8175F24237A3D4(&(Global_67889.f_208[iParam0]));
		}
	}
}

void func_313(int iParam0)
{
	if (func_46(iParam0, 0) && !func_46(iParam0, 1))
	{
		if (func_46(iParam0, 4))
		{
			if (unk_0x236D8AD7EE179F46(Local_648.f_9, 3))
			{
				func_314(&(Local_648.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_215(iParam0, 1, 1);
			}
			else
			{
				func_215(iParam0, 1, 1);
			}
		}
	}
}

void func_314(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_176(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_315(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x236D8AD7EE179F46(Local_648.f_9, 7) || Local_648.f_12 == iLocal_646)
	{
		bLocal_647 = true;
	}
	else
	{
		bLocal_647 = false;
	}
	if (func_10(14))
	{
		bLocal_647 = false;
	}
	if ((bLocal_647 && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) && unk_0x236D8AD7EE179F46(Local_648.f_9, 14))
	{
		if (Local_401.f_2 == 0 && Local_401.f_3 == 0)
		{
			if (uLocal_915[iParam0] < Local_401.f_1 || Local_401.f_0 == iParam0)
			{
				if (Local_401.f_0 != iParam0)
				{
					Local_401.f_8 = { Local_648 };
					Local_401.f_29 = { Local_669 };
					Local_401.f_0 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_67889.f_592)
					{
						Global_67889.f_592[iVar0] = -1;
						iVar0++;
					}
					Local_401.f_6 = -1;
					if ((Local_401.f_0 == 12 || Local_401.f_0 == 13) || Local_401.f_0 == 14)
					{
						Local_401.f_6 = 0;
					}
					else if ((Local_401.f_0 == 15 || Local_401.f_0 == 16) || Local_401.f_0 == 17)
					{
						Local_401.f_6 = 1;
					}
					else if ((Local_401.f_0 == 18 || Local_401.f_0 == 19) || Local_401.f_0 == 20)
					{
						Local_401.f_6 = 2;
					}
					else if ((Local_401.f_0 == 21 || Local_401.f_0 == 22) || Local_401.f_0 == 23)
					{
						Local_401.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						iVar2 = func_107(iVar0);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_67889.f_592)
							{
								switch (Local_401.f_6)
								{
									case 3:
										if (func_44(iVar2))
										{
											Global_67889.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (unk_0xE083914AB72DD7CE(iVar2))
										{
											Global_67889.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((unk_0x9F59BCFFFEAAD4B1(iVar2) || unk_0xE10D8610CC6BB347(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_67889.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_45(iVar2))
										{
											Global_67889.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_401.f_1 = uLocal_915[iParam0];
			}
		}
	}
	else if (Local_401.f_0 == iParam0)
	{
		Local_401.f_0 = -1;
		Local_401.f_1 = 99999.99f;
	}
	if (!unk_0x236D8AD7EE179F46(uLocal_47[iParam0], 0))
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_139[iParam0]))
		{
			if (unk_0x7404950238A154C2(Global_67889.f_139[iParam0], 0))
			{
				if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
				{
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Global_67889.f_139[iParam0], 0))
					{
						if (!unk_0x236D8AD7EE179F46(uLocal_47[iParam0], 1) || unk_0x236D8AD7EE179F46(uLocal_47[iParam0], 3))
						{
							unk_0xF3148AAF69AF9CBC(&(uLocal_47[iParam0]), 0);
							func_215(iParam0, 4, 1);
							func_215(iParam0, 2, 1);
						}
					}
					else
					{
						unk_0xF3148AAF69AF9CBC(&(uLocal_47[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[iParam0]) && unk_0x7404950238A154C2(Global_67889.f_484[iParam0], 0)) && unk_0x14B7103DBD149FFE(Global_67889.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_1004)
			{
				if (unk_0xD1FFD959917D4ED8(Global_67889.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
				{
					unk_0xD7D1BDC553F25A50(Global_67889.f_484[iParam0], 0f);
					iLocal_1004 = 1;
				}
			}
			else if (!unk_0xD1FFD959917D4ED8(Global_67889.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
			{
				unk_0xD7D1BDC553F25A50(Global_67889.f_484[iParam0], 1f);
				iLocal_1004 = 0;
			}
		}
		else
		{
			iLocal_1004 = 0;
		}
	}
}

int func_316()
{
	return 1;
}

var func_317(var uParam0, int iParam1)
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

int func_318()
{
	func_319();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_319()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_276(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_275(unk_0x81873881071CD9FE());
			if (func_8(iVar0) && (!func_10(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_8(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

void func_320()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFBACB273AA628CC5(Global_67889.f_208[iVar0]))
		{
			unk_0x0A8175F24237A3D4(&(Global_67889.f_208[iVar0]));
		}
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_139[iVar0]))
		{
			if (unk_0x7404950238A154C2(Global_67889.f_139[iVar0], 0))
			{
				unk_0xE0913C01F5C0CC3D(&(Global_67889.f_139[iVar0]));
				Global_67889.f_139[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (unk_0x42E36F2D658EB2FF(Local_401.f_110))
	{
		unk_0xDD0B0D77CB8995B1(Local_401.f_110, 0);
		unk_0x35B958B469415A23(Local_401.f_110, 0);
	}
	if (unk_0x42E36F2D658EB2FF(Local_401.f_111))
	{
		unk_0xDD0B0D77CB8995B1(Local_401.f_111, 0);
		unk_0x35B958B469415A23(Local_401.f_111, 0);
	}
	if (Local_401.f_3 != 0)
	{
		func_164();
		unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), 0);
	}
	if (unk_0xFBACB273AA628CC5(Global_67889.f_583))
	{
		unk_0x0A8175F24237A3D4(&(Global_67889.f_583));
	}
	if (iLocal_630 != -1)
	{
		func_48(&iLocal_630);
	}
	if (iLocal_629 != -1)
	{
		func_48(&iLocal_629);
	}
	if (Local_401.f_5 != -1)
	{
		func_48(&(Local_401.f_5));
	}
	if (iLocal_642 != -1)
	{
		func_48(&iLocal_642);
	}
	if (Local_401.f_3 > 0)
	{
		if (Global_67889.f_577)
		{
			func_144(49, 1);
			func_142(49, 1);
			Global_67889.f_577 = 0;
			Local_401.f_3 = 0;
		}
	}
	Global_67889.f_553 = 0;
	unk_0xC23A229F78DAD92A();
}

void func_321()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0x86CCCD2FAE9D5E65(uLocal_392[iVar0]))
		{
			unk_0xAB6AFD52AD641D70(&(uLocal_392[iVar0]));
		}
		iVar0++;
	}
}

void func_322(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0x236D8AD7EE179F46(iLocal_910[iVar0], iVar1))
	{
		unk_0xF3148AAF69AF9CBC(&(iLocal_910[iVar0]), iVar1);
		iLocal_841[iLocal_840] = iParam0;
		iLocal_840++;
	}
}

void func_323()
{
	int iVar0;
	
	if (func_186(25))
	{
		if (Global_98931.f_18731.f_69[22 /*78*/].f_66 != 0 && !func_21(Global_98931.f_18731.f_69[22 /*78*/].f_66))
		{
			Global_98931.f_18731.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_98931.f_18731.f_69[22 /*78*/].f_77 = 0;
			Global_98931.f_18731.f_69[22 /*78*/].f_65 = 0;
			Global_98931.f_18731.f_69[22 /*78*/].f_62 = 255;
			Global_98931.f_18731.f_69[22 /*78*/].f_63 = 255;
			Global_98931.f_18731.f_69[22 /*78*/].f_64 = 255;
			Global_98931.f_18731.f_69[22 /*78*/].f_5 = 0;
			Global_98931.f_18731.f_69[22 /*78*/].f_6 = 0;
			Global_98931.f_18731.f_69[22 /*78*/].f_7 = 0;
			Global_98931.f_18731.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_98931.f_18731.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_98931.f_18731.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_186(21) && Global_98931.f_18731.f_69[9 /*78*/].f_66 != 0) && !func_21(Global_98931.f_18731.f_69[9 /*78*/].f_66))
	{
		Global_98931.f_18731.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_186(22) && Global_98931.f_18731.f_69[10 /*78*/].f_66 != 0) && !func_21(Global_98931.f_18731.f_69[10 /*78*/].f_66))
	{
		Global_98931.f_18731.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_186(23) && Global_98931.f_18731.f_69[11 /*78*/].f_66 != 0) && !func_21(Global_98931.f_18731.f_69[11 /*78*/].f_66))
	{
		Global_98931.f_18731.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_186(26) && !func_21(Global_98931.f_18731.f_69[12 /*78*/].f_66))
	{
		func_324(26, 0);
	}
	if (func_186(27) && !func_21(Global_98931.f_18731.f_69[13 /*78*/].f_66))
	{
		func_324(27, 0);
	}
	if (func_186(28) && !func_21(Global_98931.f_18731.f_69[14 /*78*/].f_66))
	{
		func_324(28, 0);
	}
	if (func_186(29) && !func_21(Global_98931.f_18731.f_69[15 /*78*/].f_66))
	{
		func_324(29, 0);
	}
	if (func_186(30) && !func_21(Global_98931.f_18731.f_69[16 /*78*/].f_66))
	{
		func_324(30, 0);
	}
	if (func_186(31) && !func_21(Global_98931.f_18731.f_69[17 /*78*/].f_66))
	{
		func_324(31, 0);
	}
	if (func_186(32) && !func_21(Global_98931.f_18731.f_69[18 /*78*/].f_66))
	{
		func_324(32, 0);
	}
	if (func_186(33) && !func_21(Global_98931.f_18731.f_69[19 /*78*/].f_66))
	{
		func_324(33, 0);
	}
	if (func_186(34) && !func_21(Global_98931.f_18731.f_69[20 /*78*/].f_66))
	{
		func_324(34, 0);
	}
}

void func_324(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_46(iParam0, 0))
		{
			func_215(iParam0, 1, 0);
			func_215(iParam0, 2, 0);
			func_215(iParam0, 3, 0);
			func_215(iParam0, 4, 0);
			func_215(iParam0, 0, 1);
			Global_67889[iParam0] = 1;
		}
	}
	else
	{
		func_215(iParam0, 0, 0);
	}
}

int func_325()
{
	return 0;
}

int func_326()
{
	return 1;
}

int func_327()
{
	return 1;
}

int func_328()
{
	if (unk_0x2D6859674806FDCE(-1226939934))
	{
		return 1;
	}
	return 0;
}

