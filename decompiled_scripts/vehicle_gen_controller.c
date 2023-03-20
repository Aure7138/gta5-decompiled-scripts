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
	struct<74> Local_521 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
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
	var uLocal_606 = 0;
	var uLocal_607 = 2;
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
	var uLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621[4] = { 0, 0, 0, 0 };
	int iLocal_626 = 0;
	int iLocal_627[1] = { 0 };
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639[2] = { 0, 0 };
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	bool bLocal_648 = 0;
	struct<13> Local_649 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	struct<81> Local_670 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_751 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_911[3] = { 0, 0, 0 };
	int iLocal_915 = 0;
	var uLocal_916[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	bool bLocal_990 = 0;
	int iLocal_991 = 0;
	int iLocal_992 = 0;
	bool bLocal_993 = 0;
	char cLocal_994[16] = "";
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	char cLocal_998[16] = "";
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	int iLocal_1002 = 0;
	int iLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
	int iLocal_1007 = 0;
	int iLocal_1008 = 0;
	int iLocal_1009 = 0;
	char* sLocal_1010 = NULL;
	int iLocal_1011 = 0;
	int iLocal_1012 = 0;
	float fLocal_1013 = 0f;
	int iLocal_1014 = 0;
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
	iLocal_630 = -1;
	iLocal_631 = -1;
	iLocal_636 = -1;
	iLocal_643 = -1;
	iLocal_915 = -1;
	unk_0x8A10FCF639EC0104(0);
	Local_402.f_5 = -1;
	Local_402.f_0 = -1;
	Local_402.f_1 = 99999.99f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_88737[iVar0 /*3*/][0] = -1;
		Global_88737[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_99155.f_18731.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_99155.f_18731.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_99155.f_18731.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_99155.f_18731.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_99155.f_18731.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_99155.f_18731.f_4801 = -15;
		Global_99155.f_18731.f_4802 = 1;
	}
	if (((!func_329() && !func_328()) && !func_327()) && !func_326())
	{
		func_325(60, 0);
		func_325(61, 0);
	}
	func_324();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_323(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_401)
		{
			iLocal_401 = 1;
			if (unk_0x89522B8E487D4EF9(98))
			{
				if (unk_0x185181C1F960F2BD() == 64)
				{
					if (!Global_69094)
					{
						iLocal_401 = 0;
					}
					else
					{
						func_322();
						func_321();
					}
					Global_69094 = 0;
				}
				else
				{
					func_322();
					func_321();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xA1343A2A909307D0() != 5)
		{
			iLocal_647 = func_319();
			func_280();
			func_278();
			func_257();
			func_11();
			func_3();
			func_1(&uLocal_985);
		}
	}
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1320771.f_21)
	{
		iVar1 = func_2(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1320771.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = unk_0x6EA9D66F5EB7E9B4(iVar0);
			if (Global_1320771[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1320771[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = unk_0xE31F703E8AD684CE(iVar0);
			if (Global_1320771[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1320771[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = unk_0xEB999CAD7B0B929A(iVar0);
			}
			else
			{
				fVar2 = unk_0xC49947DEF69C0B52(iVar0);
			}
			if (Global_1320771[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1320771[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = unk_0xFC7AFFE641C095A6(iVar0);
			if (Global_1320771[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1320771[*uParam0 /*5*/][2] = fVar2;
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
	
	if (unk_0xD11595488376CB53(Global_68105.f_583))
	{
		bVar0 = false;
		if (iLocal_647 != Global_68105.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_10(0) || func_10(3)) || func_10(2)) || func_10(4)) || func_10(13)) || func_10(14))
		{
			bVar0 = true;
		}
		else if (Global_68105.f_590)
		{
			if (!func_9(Global_68105.f_584, unk_0x35EF1BE316B17AE9(Global_68105.f_583), 1056964608, 0) || func_5(Global_68105.f_582, func_6(Global_68105.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_68105.f_591)
		{
			if (!func_9(Global_68105.f_587, unk_0x35EF1BE316B17AE9(Global_68105.f_583), 1056964608, 0) || func_5(Global_68105.f_582, func_6(Global_68105.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!unk_0xD51CFE69539DB6D8(Global_68105.f_581) || !unk_0xC45A34912542C4EB(Global_68105.f_581, 0)) || (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Global_68105.f_581, 0)))
		{
			if (unk_0xD51CFE69539DB6D8(Global_68105.f_581) && !unk_0xC45A34912542C4EB(Global_68105.f_581, 0))
			{
				Global_68105.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (unk_0xD51CFE69539DB6D8(Global_68105.f_581))
		{
			if (unk_0xC45A34912542C4EB(Global_68105.f_581, 0))
			{
				Global_68105.f_587 = { unk_0x1141852D07400777(Global_68105.f_581, 1) };
			}
			else
			{
				Global_68105.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			unk_0x5B62CAB9B0D6ABF1(&(Global_68105.f_583));
			Global_68105.f_590 = 0;
			Global_68105.f_591 = 0;
			Global_68105.f_581 = 0;
		}
	}
	else
	{
		Global_68105.f_590 = 0;
		Global_68105.f_591 = 0;
		Global_68105.f_581 = 0;
	}
	if ((((((!unk_0xD11595488376CB53(Global_68105.f_583) && !func_10(0)) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(13)) && !func_10(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_88699[iVar2] != 145 && Global_88709[iVar2] != 0) && unk_0xD51CFE69539DB6D8(Global_88689[iVar2])) && unk_0xC45A34912542C4EB(Global_88689[iVar2], 0)) && !unk_0xD11595488376CB53(unk_0x612EFDB1D15630E7(Global_88689[iVar2]))) && Global_88699[iVar2] == iLocal_647) && unk_0x3937C84F74FAABA4(unk_0x1B2DC87EFB36DF80(Global_88689[iVar2])))
			{
				if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Global_88689[iVar2], 0))
				{
					Global_68105.f_581 = Global_88689[iVar2];
					Global_68105.f_582 = iLocal_647;
					Global_68105.f_590 = 0;
					Global_68105.f_583 = unk_0xF800CF9298ABC708(Global_68105.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!unk_0xD11595488376CB53(Global_68105.f_583) && !func_4(Global_68105.f_584, 0f, 0f, 0f, 0))
			{
				Global_68105.f_581 = 0;
				Global_68105.f_582 = iLocal_647;
				Global_68105.f_590 = 1;
				Global_68105.f_583 = unk_0x3779A616B93955A6(Global_68105.f_584);
			}
			if (!unk_0xD11595488376CB53(Global_68105.f_583) && !func_4(Global_68105.f_587, 0f, 0f, 0f, 0))
			{
				Global_68105.f_581 = 0;
				Global_68105.f_582 = iLocal_647;
				Global_68105.f_591 = 1;
				Global_68105.f_583 = unk_0x3779A616B93955A6(Global_68105.f_587);
			}
		}
		else
		{
			Global_68105.f_590 = 0;
			Global_68105.f_591 = 0;
		}
		if (unk_0xD11595488376CB53(Global_68105.f_583))
		{
			unk_0xD65A9304AF8AC06F(Global_68105.f_583, 225);
			unk_0x227FC39A4871C64F(Global_68105.f_583, "PVEHICLE");
			unk_0x62D401A5D1298E20(Global_68105.f_583, false);
			unk_0xA09285173B92875E(Global_68105.f_583, 3);
			if (iLocal_647 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_647 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_647 == 2)
			{
				iVar3 = 44;
			}
			unk_0xA887303978A245B8(Global_68105.f_583, iVar3);
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
		if (unk_0xD51CFE69539DB6D8(Global_88689[iVar1]) && unk_0xC45A34912542C4EB(Global_88689[iVar1], 0))
		{
			if (Global_88699[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == unk_0x1B2DC87EFB36DF80(Global_88689[iVar1]))
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
			if (Global_99155.f_7699.f_99.f_58[128] && !Global_99155.f_7699.f_99.f_58[131])
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
					if (Global_99155.f_7699.f_99.f_58[119])
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
			else if (Global_99155.f_7699.f_99.f_58[118])
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
		if (unk_0x7F38A542899D217A((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x7F38A542899D217A((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x7F38A542899D217A((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7F38A542899D217A((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x7F38A542899D217A((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_10(int iParam0)
{
	return Global_35619 == iParam0;
}

void func_11()
{
	func_200();
	func_142();
	func_47();
	func_12();
}

void func_12()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (((((Local_402.f_29.f_80 && !Local_402.f_29.f_69) && Local_402.f_0 != -1) && func_46(Local_402.f_0, 0)) && func_46(Local_402.f_0, 5)) && unk_0xFF6891E21E7FC193(joaat("michael1")) == 0)
		{
			if (!unk_0xD51CFE69539DB6D8(Local_402.f_113))
			{
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
					if (unk_0xD51CFE69539DB6D8(iVar0) && unk_0xC45A34912542C4EB(iVar0, 0))
					{
						iVar1 = unk_0x1B2DC87EFB36DF80(iVar0);
						if (func_43(iVar1))
						{
							Local_402.f_113 = iVar0;
						}
					}
				}
			}
			else if (unk_0xC45A34912542C4EB(Local_402.f_113, 0) && func_43(unk_0x1B2DC87EFB36DF80(Local_402.f_113)))
			{
				if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Local_402.f_113, 0))
				{
					if (unk_0x22E902D6AF27E232(Local_402.f_113, Local_402.f_29.f_48, Local_402.f_29.f_51, Local_402.f_29.f_54, 0, 1, 0))
					{
						if ((!func_42(Local_402.f_113) && !func_41(Local_402.f_113)) && Local_402.f_113 != Global_68105.f_484[Local_402.f_0])
						{
							func_13(Local_402.f_0, Local_402.f_113, 1);
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

void func_13(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_40(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 12) && !unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68105.f_555[0 /*21*/].f_4 != unk_0x1B2DC87EFB36DF80(iParam1))
		{
			return;
		}
	}
	if (Global_69012 != -1 && Global_69012 != iParam0)
	{
		return;
	}
	if (unk_0xD51CFE69539DB6D8(iParam1))
	{
		if (unk_0xC45A34912542C4EB(iParam1, 0))
		{
			if (!unk_0x28D33422BA6C479D(iParam1))
			{
				unk_0x20BB4B94CC6DDC9A(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_99155.f_18731.f_4801 = func_29();
			}
			if (iParam1 != Global_68105.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_28(iParam0);
					if ((unk_0xD51CFE69539DB6D8(iVar0) && unk_0xC45A34912542C4EB(iVar0, 0)) && iParam1 != iVar0)
					{
						func_14(iVar0, 145);
					}
				}
				Global_69011 = iParam1;
				Global_69012 = iParam0;
				Global_69013 = iParam2;
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
		iVar0 = unk_0xBD6B21D725712BDE(iParam0, -1);
		if (!unk_0xD51CFE69539DB6D8(iVar0))
		{
			iVar0 = unk_0xFC6351163F828F49(iParam0, -1);
		}
		if (unk_0xD51CFE69539DB6D8(iVar0) && !unk_0xAF437D7C802AB246(iVar0))
		{
			if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_99155.f_1750.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x1B2DC87EFB36DF80(iParam0) == Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xF6917DE0E003509D(&(Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x04E7E853E31F41A3(unk_0xC2421167AF5744AC(iParam0), &(Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_99155.f_18731.f_5592[iVar1] = iVar2;
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
		if (unk_0x1B2DC87EFB36DF80(iParam0) == Global_99155.f_18731.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xF6917DE0E003509D(&(Global_99155.f_18731.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x04E7E853E31F41A3(unk_0xC2421167AF5744AC(iParam0), &(Global_99155.f_18731.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_99155.f_18731.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_99155.f_18731.f_5590 = iParam1;
	Global_69010 = iParam0;
	Global_99155.f_18731.f_5588 = 1;
	func_15(iParam0, &(Global_99155.f_18731.f_5510));
}

void func_15(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		func_18(uParam1);
		uParam1->f_66 = unk_0x1B2DC87EFB36DF80(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC2421167AF5744AC(iParam0), 16);
		*uParam1 = unk_0x0FD17058EC3E1147(iParam0);
		unk_0x95C00B12C5FCA494(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCFEF2B49C7ED1A18(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x8062A8ED0C7F4651(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x71D4F790860F6A5A(iParam0);
		uParam1->f_67 = unk_0x90DC8CCD4852ECAA(iParam0);
		uParam1->f_69 = unk_0x31211750BC54126F(iParam0);
		uParam1->f_70 = unk_0xF222368EEA38E69D(iParam0);
		unk_0xCCD9F17DFC40BAE7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x7C2F17D7A0663F15(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x2C876F34337848DC(iParam0, 2))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 28);
		}
		if (unk_0x2C876F34337848DC(iParam0, 3))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 29);
		}
		if (unk_0x2C876F34337848DC(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 30);
		}
		if (unk_0x2C876F34337848DC(iParam0, 1))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x657F8DC28088EB36(iParam0, 0))
		{
			uParam1->f_68 = unk_0x96616C6B22C7747D(iParam0);
		}
		if (unk_0xD1C57B32C6DE7BB6(uParam1->f_66))
		{
			if (unk_0x852BA91F4F2922FF(iParam0))
			{
				switch (unk_0x97AE2442D106D426(iParam0))
				{
					case 2:
					case 0:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x73817D396768E4C6(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x54AAF075A06F73AA(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 9);
		}
		if (unk_0xB1748D5D7F598D5E(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 10);
		}
		if (unk_0x22929DCF418D8AAF(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 13);
			unk_0x6A5331108E27160A(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x3781B3A8FED51121(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 12);
		}
		func_17(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDF705551345526F6(iParam0, iVar0 + 1))
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_16(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x43CA43F21BD77772(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 11);
		}
		if (unk_0xB7AFC499DA70400A(iParam0, "IgnoredByQuickSave") && unk_0x4A36D1C22F217975(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 27);
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
	
	if (!unk_0xC45A34912542C4EB(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA9D3956F42AEC644(*iParam0) == 0)
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
			if (unk_0x44EF52A7698B3306(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x1C8AF615CFEF2FE5(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
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
	if ((((((((((!unk_0xD51CFE69539DB6D8(iParam0) || !unk_0xC45A34912542C4EB(iParam0, 0)) || func_26(iParam0, 0, 0)) || func_26(iParam0, 1, 0)) || func_26(iParam0, 2, 0)) || func_25(iParam0) != 145) || func_24(iParam0)) || func_42(iParam0)) || func_41(iParam0)) || func_23(iParam0)) || !func_20(unk_0x1B2DC87EFB36DF80(iParam0)))
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
	if (((unk_0xAA65D1F2BF4AAFFB(iParam0) || unk_0xD1C57B32C6DE7BB6(iParam0)) || unk_0xFFD2CE10E8C7E77F(iParam0)) || unk_0x437C3632DA4A7584(iParam0))
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
	if (!unk_0x6A3E3EA4770CE80A(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x00AAD79B42B3E036())) || (iParam0 == joaat("buffalo3") && !unk_0x00AAD79B42B3E036())) || (iParam0 == joaat("gauntlet2") && !unk_0x00AAD79B42B3E036())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x00AAD79B42B3E036())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_22())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x49371C7B668CA46F())
		{
			if (unk_0x373784C902F4F74E(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xCA0E36ABF4510784(Var1.f_0))
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
		if ((((!func_329() && !func_328()) && !func_327()) && !func_326()) && !func_22())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xFD563D1BF81A2CB8() || unk_0xA78EA29AC2FFBADE()) || unk_0x7ECD3D8283875DD1())
		{
		}
		else if (!func_327())
		{
			return 0;
		}
	}
	return 1;
}

int func_22()
{
	var uVar0;
	
	if (unk_0x6E2954F2B1919678())
	{
		if (unk_0x6935836F937B7980())
		{
			if (unk_0xACCC319A72FE75AB())
			{
				unk_0x56DCF5665F92F9BD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x9956FB0E4B50ECB8(&uVar0, 2);
				unk_0x9956FB0E4B50ECB8(&uVar0, 4);
				unk_0x9956FB0E4B50ECB8(&uVar0, 6);
				unk_0x9956FB0E4B50ECB8(&Global_25, 2);
				unk_0x9956FB0E4B50ECB8(&Global_25, 4);
				unk_0x9956FB0E4B50ECB8(&Global_25, 6);
				unk_0x39DEDCCD70293F58(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6FBD7D781A378269())
				{
					iVar0 = unk_0x623F98022BC99367(866);
					unk_0x9956FB0E4B50ECB8(&iVar0, 0);
					unk_0x305E571F148D27EA(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_136199 == 2)
	{
		return 1;
	}
	else if (Global_136199 == 3)
	{
		return 0;
	}
	if (unk_0x6FBD7D781A378269())
	{
		if (unk_0xB519E5386FBF69E5(unk_0x623F98022BC99367(866), 0))
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
	
	iVar0 = unk_0x1B2DC87EFB36DF80(iParam0);
	uVar1 = unk_0xC2421167AF5744AC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x04E7E853E31F41A3(uVar1, "LAMAR G "))
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
	
	if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[24]))
	{
		if (iParam0 == Global_68105.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68105.f_484[iVar0])
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
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 145;
	}
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			if (Global_88689[iVar0] == iParam0)
			{
				return Global_88699[iVar0];
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
	
	if (!unk_0xD51CFE69539DB6D8(iParam0) || !unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_27(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB519E5386FBF69E5(Global_99155.f_5843[iVar9], 0))
		{
			if (unk_0x56C8E476471194F1(&sVar1, iParam0))
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
	return Global_68105.f_139[iParam0];
}

int func_29()
{
	var uVar0;
	
	func_39(&uVar0, unk_0x0CE219089BDB83C5());
	func_38(&uVar0, unk_0x1B24A2CA27443F7B());
	func_37(&uVar0, unk_0x7C833E3C6EEE41E0());
	func_32(&uVar0, unk_0x2DA3502053F9E535());
	func_31(&uVar0, unk_0xEB4EA596232DA76E());
	func_30(&uVar0, unk_0xB99227ECC84A576C());
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_35(unk_0xB519E5386FBF69E5(iParam0, 31), -1, 1)) + 2011;
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_6(0, 1);
			uParam0->f_12 = 0;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_6(1, 1);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_6(1, 2);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 19);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_6(1, 1);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_6(1, 2);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 19);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_6(2, 1);
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_6(2, 1);
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_6(2, 1);
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 27);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 27);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 27);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 11);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 11);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 9);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 9);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 1);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 1);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xB519E5386FBF69E5(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_99155.f_18731.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_4(Global_99155.f_18731.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99155.f_18731.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_99155.f_18731.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_99155.f_18731.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xB519E5386FBF69E5(uParam0->f_9, 19))
	{
		if (!func_4(Global_99155.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99155.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_99155.f_1750.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xB519E5386FBF69E5(uParam0->f_9, 20))
	{
		if (!func_4(Global_99155.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99155.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_99155.f_1750.f_539.f_2837[0 /*4*/][uParam0->f_12];
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
		if (unk_0xD51CFE69539DB6D8(Global_88719[iVar0]))
		{
			if (Global_88719[iVar0] == iParam0)
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
	
	if (unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]) && unk_0xC45A34912542C4EB(Global_88689[iVar0], 0))
			{
				if (Global_88689[iVar0] == iParam0 && unk_0x1B2DC87EFB36DF80(Global_88689[iVar0]) == unk_0x1B2DC87EFB36DF80(iParam0))
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
	switch (Local_402.f_6)
	{
		case 0:
			return func_45(iParam0);
			break;
		
		case 1:
			if (((unk_0xAA65D1F2BF4AAFFB(iParam0) || unk_0xD4023077B0753359(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_44(iParam0);
			break;
		
		case 2:
			return (unk_0xFFD2CE10E8C7E77F(iParam0) && iParam0 != joaat("skylift"));
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
	if (((!unk_0x3937C84F74FAABA4(iParam0) && !unk_0x07C6F7E084F6A97E(iParam0)) && !unk_0x48E903ADD98A5FDD(iParam0)) && !unk_0x7BB0AC45FF0A3A28(iParam0))
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
	if ((((!unk_0xD1C57B32C6DE7BB6(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
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
	return unk_0xB519E5386FBF69E5(Global_99155.f_18731[iParam0], iParam1);
}

void func_47()
{
	struct<99> Var0;
	struct<78> Var99;
	bool bVar177;
	int iVar178;
	int iVar179;
	int iVar180;
	int iVar181;
	int iVar182;
	struct<4> Var183;
	int iVar187;
	int iVar188;
	int iVar189;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	bool bVar194;
	int iVar195;
	bool bVar196;
	bool bVar197;
	int iVar198;
	int iVar199;
	int iVar200;
	int iVar201;
	struct<2> Var202;
	int iVar206;
	bool bVar207;
	int iVar208;
	bool bVar209;
	var uVar210;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_95 = -1;
	Var0.f_96 = 1;
	Var0.f_98 = 132;
	Var99.f_9 = 49;
	Var99.f_59 = 2;
	bVar177 = false;
	iVar178 = 0;
	if (iLocal_629 > 0 && iLocal_629 != 99)
	{
		if (((((((((((((((Local_402.f_0 == -1 || unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || !unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, 1, 0)) || ((unk_0xD51CFE69539DB6D8(Global_68105.f_484[Local_402.f_0]) && unk_0xC45A34912542C4EB(Global_68105.f_484[Local_402.f_0], 0)) && (unk_0x7216F2326CC6B06A(unk_0xE7869D5D7816A9B6(), Global_68105.f_484[Local_402.f_0]) || unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Global_68105.f_484[Local_402.f_0], 1)))) || ((unk_0xD51CFE69539DB6D8(Global_68105.f_484[Local_402.f_0]) && unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6())) && ((unk_0xB3E64F13C3B580C3(unk_0xE7869D5D7816A9B6()) - 1f) > 0.15f && unk_0x3C1B1C07A878AE1D(unk_0xE7869D5D7816A9B6(), Global_68105.f_484[Local_402.f_0])))) || ((unk_0xD51CFE69539DB6D8(Global_68105.f_484[Local_402.f_0]) && unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6())) && unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Global_68105.f_484[Local_402.f_0], 1))) || (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()) && unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6()))) || func_10(0)) || func_10(3)) || func_10(2)) || func_10(4)) || func_10(14)) || func_141(0) != bLocal_993) || bLocal_829) || func_140(-1082130432))
		{
			iLocal_629 = 99;
		}
	}
	switch (iLocal_629)
	{
		case 0:
			if ((((!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) && !Global_67887) && !bLocal_829) && !unk_0xAEF17BDE274A1247())
			{
				if ((((((((((Local_402.f_29.f_80 && Local_402.f_2 == 0) && (Global_68105.f_592[0] != -1 || func_139() != 0)) && Local_402.f_0 != -1) && !iLocal_991) && !func_10(0)) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(14)) && !func_140(-1082130432))
				{
					if (iLocal_631 != -1)
					{
					}
					else if (func_46(Local_402.f_0, 0) && func_46(Local_402.f_0, 5))
					{
						if ((unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, 1, 0) && !unk_0x2198CC96FD98B484(unk_0xE7869D5D7816A9B6())) && !unk_0xD55D878601C46BA9(unk_0xE7869D5D7816A9B6()))
						{
							if ((!unk_0xD51CFE69539DB6D8(Global_68105.f_484[Local_402.f_0]) || !unk_0xC45A34912542C4EB(Global_68105.f_484[Local_402.f_0], 0)) || (!unk_0x7216F2326CC6B06A(unk_0xE7869D5D7816A9B6(), Global_68105.f_484[Local_402.f_0]) && !unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Global_68105.f_484[Local_402.f_0], 1)))
							{
								iVar181 = func_139();
								iVar182 = 0;
								while (iVar182 < iVar181)
								{
									if (func_43(func_135(iVar182)))
									{
										iVar180++;
									}
									iVar182++;
								}
								iVar179 = 0;
								while (iVar179 < Global_68105.f_592)
								{
									if (Global_68105.f_592[iVar179] != -1)
									{
										if ((func_134(Global_68105.f_592[iVar179], iLocal_647) && Global_99155.f_18731.f_1982[iLocal_647 /*939*/].f_626[Global_68105.f_592[iVar179]] == -15) && (Global_68105.f_592[iVar179] != 200 || !Global_99155.f_29522.f_7))
										{
											iVar180++;
										}
									}
									iVar179++;
								}
								if (iVar180 > 0)
								{
									if (!unk_0x23741E39BEA32E66())
									{
										iLocal_831 = 1;
										if (Local_402.f_6 == 3)
										{
											func_133(&iLocal_630, 3, "WEB_VEH_TRIG2", 0, 0, 0);
										}
										else
										{
											func_133(&iLocal_630, 3, "WEB_VEH_TRIG", 0, 0, 0);
										}
										bLocal_993 = func_141(0);
										iLocal_629++;
									}
								}
								else if (!iLocal_831)
								{
									if (Local_402.f_6 == 0)
									{
										if (!unk_0x23741E39BEA32E66() || func_132("HANGAR_NO"))
										{
											func_131("HANGAR_NO", -1);
											StringCopy(&cLocal_994, "HANGAR_NO", 16);
										}
										bVar177 = true;
									}
									else if (Local_402.f_6 == 1)
									{
										if (!unk_0x23741E39BEA32E66() || func_132("MARINA_NO"))
										{
											func_131("MARINA_NO", -1);
											StringCopy(&cLocal_994, "MARINA_NO", 16);
										}
										bVar177 = true;
									}
									else if (Local_402.f_6 == 2)
									{
										if (!unk_0x23741E39BEA32E66() || func_132("HELIPAD_NO"))
										{
											func_131("HELIPAD_NO", -1);
											StringCopy(&cLocal_994, "HELIPAD_NO", 16);
										}
										bVar177 = true;
									}
									else if (Local_402.f_6 == 3)
									{
										StringCopy(&Var183, "CAR_GAR_NO", 16);
										if (unk_0x26A43F8C0E764E33() || unk_0x7ECD3D8283875DD1())
										{
											StringConCat(&Var183, "_1", 16);
										}
										else if (unk_0xA4844394CE04D85D() || unk_0xFD563D1BF81A2CB8())
										{
											StringConCat(&Var183, "_2", 16);
										}
										if (!unk_0x23741E39BEA32E66() || func_132(&Var183))
										{
											func_131(&Var183, -1);
											cLocal_994 = { Var183 };
										}
										bVar177 = true;
									}
								}
							}
						}
						else
						{
							iLocal_831 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && func_129(0, -1))
			{
				if (iLocal_631 != -1)
				{
					iLocal_629 = 0;
					return;
				}
				if (func_128(iLocal_630, 1))
				{
					unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
					if (unk_0x08EE17D4722097C7(unk_0x5B93518F6779B7F5()) == 4)
					{
						unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
					}
					else
					{
						unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 256);
					}
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
					{
						if (unk_0xC45A34912542C4EB(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0))
						{
							unk_0x955267F95DE8B488(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0);
						}
					}
					func_127();
					iLocal_632 = 0;
					iLocal_633 = 0;
					iLocal_634 = 0;
					iLocal_620 = -1;
					iLocal_629++;
					return;
				}
			}
			break;
		
		case 2:
			if (!iLocal_632 || iLocal_633)
			{
				func_126(0);
				func_125(1, 4, 0, 0, 0);
				func_124(1, 2, 1, 1, 1);
				func_123("WEB_VEH_TITLE");
				iVar187 = 0;
				while (iVar187 < iLocal_621)
				{
					iLocal_621[iVar187] = 0;
					iVar187++;
				}
				iVar188 = -1;
				iVar189 = 0;
				func_40(&(Local_402.f_8), Local_402.f_0);
				iVar191 = 0;
				iVar192 = func_139();
				iVar190 = 0;
				while (iVar190 < iVar192)
				{
					if (func_43(func_135(iVar190)))
					{
						if (iVar188 == -1)
						{
							iVar188 = iVar191;
						}
						if (Local_402.f_8.f_4 == func_135(iVar190))
						{
							iLocal_620 = iVar191;
							iVar189 = 1;
						}
						iVar191++;
					}
					iVar190++;
				}
				iVar190 = 0;
				while (iVar190 < Global_68105.f_592)
				{
					if (Global_68105.f_592[iVar190] != -1)
					{
						if ((func_134(Global_68105.f_592[iVar190], iLocal_647) && Global_99155.f_18731.f_1982[iLocal_647 /*939*/].f_626[Global_68105.f_592[iVar190]] == -15) && (Global_68105.f_592[iVar190] != 200 || !Global_99155.f_29522.f_7))
						{
							func_112(Global_68105.f_592[iVar190], &Var0, 0, iLocal_647, -1);
							if (iVar188 == -1)
							{
								iVar188 = iVar191;
							}
							if (Local_402.f_8.f_4 == Var0.f_66)
							{
								iLocal_620 = iVar191;
								iVar189 = 1;
							}
							iVar191++;
						}
					}
					iVar190++;
				}
				if (iLocal_620 == -1)
				{
					iLocal_620 = iVar188;
				}
				iVar191 = 0;
				iVar192 = func_139();
				iVar190 = 0;
				while (iVar190 < iVar192)
				{
					if (func_43(func_135(iVar190)))
					{
						unk_0x9956FB0E4B50ECB8(&(iLocal_621[(iVar191 / 32)]), (iVar191 % 32));
						func_109(iVar191, unk_0x06724AA1519336EF(func_135(iVar190)), 0, 1, 0, 0);
						if ((iLocal_620 == iVar191 && iVar189) && Local_402.f_6 != 3)
						{
							func_108(iVar191, 4, 0);
						}
						else
						{
							func_108(iVar191, 0, 0);
						}
						iVar191++;
					}
					iVar190++;
				}
				iVar190 = 0;
				while (iVar190 < Global_68105.f_592)
				{
					if (Global_68105.f_592[iVar190] != -1)
					{
						if ((func_134(Global_68105.f_592[iVar190], iLocal_647) && Global_99155.f_18731.f_1982[iLocal_647 /*939*/].f_626[Global_68105.f_592[iVar190]] == -15) && (Global_68105.f_592[iVar190] != 200 || !Global_99155.f_29522.f_7))
						{
							unk_0x9956FB0E4B50ECB8(&(iLocal_621[(iVar191 / 32)]), (iVar191 % 32));
							func_112(Global_68105.f_592[iVar190], &Var0, 0, iLocal_647, -1);
							if (Global_68105.f_592[iVar190] != 164)
							{
								func_109(iVar191, func_106(Global_68105.f_592[iVar190]), 0, 1, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_109(iVar191, "TWOSTRINGS", 2, 1, 0, 0);
								func_103(func_106(Global_68105.f_592[iVar190]), 0);
								func_103("VNX_SWFTC", 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_109(iVar191, "TWOSTRINGS", 2, 1, 0, 0);
								func_103(func_106(Global_68105.f_592[iVar190]), 0);
								func_103("VNX_SWFTB", 0);
							}
							else
							{
								func_109(iVar191, func_106(Global_68105.f_592[iVar190]), 0, 1, 0, 0);
							}
							if (iLocal_620 == iVar191 && iVar189)
							{
								func_108(iVar191, 4, 0);
							}
							else
							{
								func_108(iVar191, 0, 0);
							}
							iVar191++;
						}
					}
					iVar190++;
				}
				func_102(iLocal_620, 1, 1);
				iLocal_635 = 1;
				iLocal_633 = 0;
				iLocal_632 = 1;
			}
			else
			{
				iVar178 = 0;
				if (unk_0xA78EA29AC2FFBADE())
				{
					if (unk_0x122DCA017A140FA8(2))
					{
						unk_0x8CCCC48313B0F20F(0, 1, 1);
						unk_0x8CCCC48313B0F20F(0, 2, 1);
						unk_0x8CCCC48313B0F20F(2, 200, 1);
						unk_0x5D1D27F205B40569(0, 237, 1);
						unk_0x5D1D27F205B40569(0, 238, 1);
						unk_0x5D1D27F205B40569(0, 241, 1);
						unk_0x5D1D27F205B40569(0, 242, 1);
						func_99(0, 0, 0, 1);
						func_98(0, -1, 1);
						if (func_97())
						{
							if (Global_2557322 != iLocal_620)
							{
								unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_620 = Global_2557322;
								func_102(iLocal_620, 1, 1);
								iLocal_635 = 1;
							}
							else
							{
								iVar178 = 1;
							}
						}
					}
				}
				if (unk_0x958B4351DD28B142(2, 188) || unk_0x958B4351DD28B142(2, 241))
				{
					iLocal_635 = 1;
					unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar193 = (iLocal_620 - 1);
					while (iVar193 >= 0)
					{
						if (unk_0xB519E5386FBF69E5(iLocal_621[(iVar193 / 32)], (iVar193 % 32)))
						{
							iLocal_620 = iVar193;
							bVar194 = true;
							iVar193 = 0;
						}
						iVar193 = (iVar193 + -1);
					}
					if (!bVar194)
					{
						iVar193 = (iLocal_621 * 32 - 1);
						while (iVar193 >= iLocal_620 + 1)
						{
							if (unk_0xB519E5386FBF69E5(iLocal_621[(iVar193 / 32)], (iVar193 % 32)))
							{
								iLocal_620 = iVar193;
								bVar194 = true;
								iVar193 = 0;
							}
							iVar193 = (iVar193 + -1);
						}
					}
					if (bVar194)
					{
						func_102(iLocal_620, 1, 1);
					}
				}
				else if (unk_0x958B4351DD28B142(2, 187) || unk_0x958B4351DD28B142(2, 242))
				{
					iLocal_635 = 1;
					unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar195 = iLocal_620 + 1;
					while (iVar195 <= (iLocal_621 * 32 - 1))
					{
						if (unk_0xB519E5386FBF69E5(iLocal_621[(iVar195 / 32)], (iVar195 % 32)))
						{
							iLocal_620 = iVar195;
							bVar196 = true;
							iVar195 = iLocal_621 * 32 + 1;
						}
						iVar195++;
					}
					if (!bVar196)
					{
						iVar195 = 0;
						while (iVar195 <= (iLocal_620 - 1))
						{
							if (unk_0xB519E5386FBF69E5(iLocal_621[(iVar195 / 32)], (iVar195 % 32)))
							{
								iLocal_620 = iVar195;
								bVar196 = true;
								iVar195 = iLocal_621 * 32 + 1;
							}
							iVar195++;
						}
					}
					if (bVar196)
					{
						func_102(iLocal_620, 1, 1);
					}
				}
				else if (unk_0xEA7F1ED415FFE2E8(2, 201) || iVar178 == 1)
				{
					bVar197 = false;
					iVar178 = 0;
					unk_0xCC18B241D266EF14(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar199 = 0;
					iVar200 = func_139();
					iVar198 = 0;
					while (iVar198 < iVar200)
					{
						if (func_43(func_135(iVar198)))
						{
							if (iLocal_620 == iVar199 && (((((Local_402.f_8.f_4 != func_135(iVar198) || !unk_0xD51CFE69539DB6D8(Global_68105.f_484[Local_402.f_0])) || !unk_0xC45A34912542C4EB(Global_68105.f_484[Local_402.f_0], 0)) || Local_402.f_0 == 21) || Local_402.f_0 == 22) || Local_402.f_0 == 23))
							{
								bVar197 = true;
								if ((((!iLocal_634 && Local_402.f_8.f_4 != func_135(iVar198)) || (!iLocal_634 && Local_402.f_0 == 21)) || (!iLocal_634 && Local_402.f_0 == 22)) || (!iLocal_634 && Local_402.f_0 == 23))
								{
									func_96("VEH_SELECT_CNFA", 0, 0);
									func_95(-1);
									func_94(201, "ITEM_YES", -1);
									func_94(202, "ITEM_NO", -1);
									iLocal_634 = 1;
									iVar198 = func_139() + 1;
								}
								else if (Local_402.f_6 == 3)
								{
									if (func_93(func_135(iVar198)))
									{
										iLocal_992 = func_135(iVar198);
										iLocal_632 = 0;
										iLocal_633 = 0;
										iLocal_626 = 0;
										iLocal_629++;
									}
									else
									{
										iLocal_991 = 1;
										iLocal_992 = func_135(iVar198);
										iLocal_629 = 99;
									}
								}
								else if (Local_402.f_6 == 0 && func_93(func_135(iVar198)))
								{
									iLocal_992 = func_135(iVar198);
									iLocal_632 = 0;
									iLocal_633 = 0;
									iLocal_626 = 0;
									iLocal_629++;
								}
								else
								{
									if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[Local_402.f_0]))
									{
										unk_0x20BB4B94CC6DDC9A(Global_68105.f_484[Local_402.f_0], 0, 1);
										unk_0x9E55BD45B84E7BDC(&(Global_68105.f_484[Local_402.f_0]));
									}
									Var99.f_66 = func_135(iVar198);
									unk_0x9956FB0E4B50ECB8(&(Var99.f_77), 14);
									func_90(Local_402.f_0, &Var99, 0f, 0f, 0f, -1f, 145);
									func_89(Local_402.f_0);
									func_40(&(Local_402.f_8), Local_402.f_0);
									iVar198 = func_139() + 1;
									iLocal_633 = 1;
								}
							}
							iVar199++;
						}
						iVar198++;
					}
					if (!bVar197)
					{
						iVar198 = 0;
						while (iVar198 < Global_68105.f_592)
						{
							if (Global_68105.f_592[iVar198] != -1)
							{
								if ((func_134(Global_68105.f_592[iVar198], iLocal_647) && Global_99155.f_18731.f_1982[iLocal_647 /*939*/].f_626[Global_68105.f_592[iVar198]] == -15) && (Global_68105.f_592[iVar198] != 200 || !Global_99155.f_29522.f_7))
								{
									func_112(Global_68105.f_592[iVar198], &Var0, 0, iLocal_647, -1);
									if (iLocal_620 == iVar199 && ((Local_402.f_8.f_4 != Var0.f_66 || !unk_0xD51CFE69539DB6D8(Global_68105.f_484[Local_402.f_0])) || !unk_0xC45A34912542C4EB(Global_68105.f_484[Local_402.f_0], 0)))
									{
										bVar197 = true;
										if (!iLocal_634)
										{
											if (Local_402.f_6 == 3)
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
											iLocal_634 = 1;
											iVar198 = Global_68105.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_629 = 3;
											iLocal_633 = 1;
											iVar198 = Global_68105.f_592 + 1;
										}
										else
										{
											if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[Local_402.f_0]))
											{
												unk_0x20BB4B94CC6DDC9A(Global_68105.f_484[Local_402.f_0], 0, 1);
												unk_0x9E55BD45B84E7BDC(&(Global_68105.f_484[Local_402.f_0]));
											}
											func_112(Global_68105.f_592[iVar198], &Var0, 0, iLocal_647, -1);
											unk_0x9956FB0E4B50ECB8(&(Var0.f_77), 14);
											if (unk_0xD1C57B32C6DE7BB6(Var0.f_66))
											{
												unk_0x9956FB0E4B50ECB8(&(Var0.f_77), 22);
											}
											func_90(Local_402.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
											func_89(Local_402.f_0);
											func_40(&(Local_402.f_8), Local_402.f_0);
											iVar198 = Global_68105.f_592 + 1;
											iLocal_633 = 1;
										}
									}
									iVar199++;
								}
							}
							iVar198++;
						}
					}
				}
				else if (unk_0xEA7F1ED415FFE2E8(2, 202) || unk_0xEA7F1ED415FFE2E8(2, 238))
				{
					unk_0xCC18B241D266EF14(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (iLocal_634)
					{
						iLocal_635 = 1;
						iLocal_634 = 0;
					}
					else
					{
						iLocal_629 = 99;
					}
				}
			}
			unk_0x3BE81935DF4C438C();
			if (iLocal_635)
			{
				func_96("", 0, 0);
				func_95(-1);
				func_94(201, "ITEM_SELECT", -1);
				func_94(202, "ITEM_EXIT", -1);
				iLocal_634 = 0;
				iLocal_635 = 0;
			}
			func_53(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 3:
			if (!iLocal_632 || iLocal_633)
			{
				func_126(0);
				func_125(1, 0, 0, 0, 0);
				func_124(1, 1, 1, 1, 1);
				iVar201 = 0;
				while (iVar201 < iLocal_627)
				{
					iLocal_627[iVar201] = 0;
					iVar201++;
				}
				func_123("WEB_VEH_TITLE2");
				iVar201 = 0;
				while (iVar201 < 25)
				{
					StringCopy(&Var202, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var202, iVar201, 16);
					func_109(iVar201, &Var202, 0, 1, 0, 0);
					unk_0x9956FB0E4B50ECB8(&(iLocal_627[(iVar201 / 32)]), (iVar201 % 32));
					iVar201++;
				}
				if (Local_649.f_12 == 0)
				{
					iLocal_626 = Global_99155.f_29631.f_313[200];
				}
				else if (Local_649.f_12 == 1)
				{
					iLocal_626 = Global_99155.f_29631.f_626[200];
				}
				else
				{
					iLocal_626 = Global_99155.f_29631.f_939[200];
				}
				func_102(iLocal_626, 1, 1);
				iLocal_635 = 1;
				iLocal_633 = 0;
				iLocal_632 = 1;
			}
			else
			{
				iVar178 = 0;
				if (unk_0xA78EA29AC2FFBADE())
				{
					if (unk_0x122DCA017A140FA8(2))
					{
						unk_0x8CCCC48313B0F20F(0, 1, 1);
						unk_0x8CCCC48313B0F20F(0, 2, 1);
						unk_0x5D1D27F205B40569(0, 237, 1);
						unk_0x5D1D27F205B40569(0, 238, 1);
						unk_0x5D1D27F205B40569(0, 241, 1);
						unk_0x5D1D27F205B40569(0, 242, 1);
						func_99(0, 0, 0, 1);
						func_98(0, -1, 1);
						if (func_97())
						{
							if (Global_2557322 != iLocal_626)
							{
								unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_626 = Global_2557322;
								func_102(iLocal_626, 1, 1);
								iLocal_635 = 1;
							}
							else
							{
								iVar178 = 1;
							}
						}
					}
				}
				if (unk_0x958B4351DD28B142(2, 188) || unk_0x958B4351DD28B142(2, 241))
				{
					iLocal_635 = 1;
					unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar206 = (iLocal_626 - 1);
					while (iVar206 >= 0)
					{
						if (unk_0xB519E5386FBF69E5(iLocal_627[(iVar206 / 32)], (iVar206 % 32)))
						{
							iLocal_626 = iVar206;
							bVar207 = true;
							iVar206 = 0;
						}
						iVar206 = (iVar206 + -1);
					}
					if (!bVar207)
					{
						iVar206 = 31;
						while (iVar206 >= iLocal_626 + 1)
						{
							if (unk_0xB519E5386FBF69E5(iLocal_627[(iVar206 / 32)], (iVar206 % 32)))
							{
								iLocal_626 = iVar206;
								bVar207 = true;
								iVar206 = iLocal_626;
							}
							iVar206 = (iVar206 + -1);
						}
					}
					if (bVar207)
					{
						func_102(iLocal_626, 1, 1);
					}
				}
				else if (unk_0x958B4351DD28B142(2, 187) || unk_0x958B4351DD28B142(2, 242))
				{
					iLocal_635 = 1;
					unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar208 = iLocal_626 + 1;
					while (iVar208 <= 31)
					{
						if (unk_0xB519E5386FBF69E5(iLocal_627[(iVar208 / 32)], (iVar208 % 32)))
						{
							iLocal_626 = iVar208;
							bVar209 = true;
							iVar208 = 31;
						}
						iVar208++;
					}
					if (!bVar209)
					{
						iVar208 = 0;
						while (iVar208 <= (iLocal_626 - 1))
						{
							if (unk_0xB519E5386FBF69E5(iLocal_627[(iVar208 / 32)], (iVar208 % 32)))
							{
								iLocal_626 = iVar208;
								bVar209 = true;
								iVar208 = iLocal_626;
							}
							iVar208++;
						}
					}
					if (bVar209)
					{
						func_102(iLocal_626, 1, 1);
					}
				}
				else if (unk_0xEA7F1ED415FFE2E8(2, 201) || iVar178 == 1)
				{
					iVar178 = 0;
					unk_0xCC18B241D266EF14(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[Local_402.f_0]))
					{
						unk_0x20BB4B94CC6DDC9A(Global_68105.f_484[Local_402.f_0], 0, 1);
						unk_0x9E55BD45B84E7BDC(&(Global_68105.f_484[Local_402.f_0]));
					}
					uVar210 = iLocal_626 + 1;
					if (iLocal_647 == 0)
					{
						Global_99155.f_29631.f_313[200] = uVar210;
					}
					else if (iLocal_647 == 1)
					{
						Global_99155.f_29631.f_626[200] = uVar210;
					}
					else if (iLocal_647 == 2)
					{
						Global_99155.f_29631.f_939[200] = uVar210;
					}
					func_112(200, &Var0, 0, iLocal_647, -1);
					unk_0x9956FB0E4B50ECB8(&(Var0.f_77), 14);
					if (unk_0xD1C57B32C6DE7BB6(Var0.f_66))
					{
						unk_0x9956FB0E4B50ECB8(&(Var0.f_77), 22);
					}
					func_90(Local_402.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
					func_89(Local_402.f_0);
					func_40(&(Local_402.f_8), Local_402.f_0);
					iLocal_633 = 1;
					iLocal_629 = 2;
				}
				else if (unk_0xEA7F1ED415FFE2E8(2, 202) || unk_0xEA7F1ED415FFE2E8(2, 238))
				{
					unk_0xCC18B241D266EF14(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iLocal_632 = 0;
					iLocal_633 = 0;
					iLocal_629 = (iLocal_629 - 1);
				}
			}
			unk_0x3BE81935DF4C438C();
			if (iLocal_635)
			{
				func_96("", 0, 0);
				func_95(-1);
				func_94(201, "ITEM_SELECT", -1);
				func_94(202, "ITEM_EXIT", -1);
				iLocal_634 = 0;
				iLocal_635 = 0;
			}
			func_53(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
			}
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				if (unk_0xC45A34912542C4EB(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0))
				{
					if (!unk_0x3DFCEEF6C1816F96())
					{
						unk_0x955267F95DE8B488(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 1);
					}
				}
			}
			func_50(1, -1);
			iLocal_629 = 0;
			func_48(&iLocal_630);
			iLocal_630 = -1;
			break;
	}
	if (!bVar177 && unk_0x23741E39BEA32E66())
	{
		if (!unk_0xF6917DE0E003509D(&cLocal_994))
		{
			if ((((func_132("HANGAR_NO") || func_132("MARINA_NO")) || func_132("HELIPAD_NO")) || func_132("CAR_GAR_NO_1")) || func_132("CAR_GAR_NO_2"))
			{
				unk_0x1D208E4A4E1D4FFE(1);
			}
			StringCopy(&cLocal_994, "", 16);
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
		if (Global_36319[iVar0 /*19*/])
		{
			Global_36319[iVar0 /*19*/].f_7 = 1;
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
		if (Global_36319[iVar0 /*19*/].f_1 == iParam0)
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
	if (Global_17257.f_7776)
	{
		unk_0x4A819C86009EE6EC(15);
		Global_17257.f_7776 = 0;
	}
	unk_0x74C2382519DF9D92(0f);
	if (Global_17257.f_5421[iVar0])
	{
		unk_0x3A2938D665EA8A9E(9, 0);
		Global_17257.f_5421[iVar0] = 0;
	}
	if (Global_17257.f_5414[iVar0])
	{
		unk_0xA857A54226CCD303("CommonMenu");
		Global_17257.f_5414[iVar0] = 0;
	}
	if (bParam0)
	{
		func_51(&(Global_17257.f_5453[iVar0 /*10*/]));
		Global_17257.f_5514[iVar0] = 0;
	}
	else
	{
		Global_17257.f_5514[iVar0] = 0;
	}
}

void func_51(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x4A4851D44CDF03C0(*uParam0))
		{
			unk_0x8A86A209B0F0AF7D(uParam0);
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
		if (unk_0x00AAD79B42B3E036() && unk_0x0D47370227E1A847())
		{
			iParam2 = unk_0x0F263434E43646BA();
		}
	}
	StringCopy(&cVar0, unk_0x959E7FA37C0D0892(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xC7C6DDDE84A8E734(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5514[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17257.f_5514[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5514[iVar18] = iVar16;
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
	unk_0x56B79B8AD45389A5(76, 84);
	unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_84(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17257 = 0;
		}
	}
	if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_1)) == unk_0xC7C6DDDE84A8E734("HIDE"))
	{
		fVar56 = Global_17255;
	}
	else
	{
		fVar56 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17256;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		unk_0x177E5285E888D643(&iVar57, &iVar58);
		fVar60 = unk_0x56995B080AF5D7D0(0);
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
		unk_0xC2E26B11E2BC4A88(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5521)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_1)) == unk_0xC7C6DDDE84A8E734("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					unk_0xFE6A5236E50BDF64(func_82(29), func_80(29, 1), (Global_17254 + (fParam5 * 0.5f)), (Global_17255 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7746)
				{
					iVar1 = Global_17257.f_7742;
					iVar2 = Global_17257.f_7743;
					iVar3 = Global_17257.f_7744;
					iVar4 = Global_17257.f_7745;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_79(Global_17254, (Global_17255 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
				if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_1)) != 0)
				{
					func_78();
					unk_0x608B6701BEC4527A(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							unk_0x8D23CF083336DA9B(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							unk_0x9EA8AC61C9873436(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							unk_0x9359E7CC54335EB9(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							unk_0x9359E7CC54335EB9(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							unk_0x63E8D6007C32E426(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							unk_0x9359E7CC54335EB9(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							unk_0x63E8D6007C32E426(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x2ED77CF10395403E((Global_17254 + 0.00390625f), ((Global_17255 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17257.f_5524 > Global_17257.f_5031)
				{
					if (Global_17257.f_5527 != 0)
					{
						func_78();
						func_76((((Global_17254 + fParam5) - 0.00390625f) - func_77("CM_ITEM_COUNT", Global_17257.f_5527, Global_17257.f_5526)), ((Global_17255 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17257.f_5527, Global_17257.f_5526);
					}
				}
			}
			iVar6 = Global_17257.f_5528;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7756)
			{
				iVar1 = Global_17257.f_7752;
				iVar2 = Global_17257.f_7753;
				iVar3 = Global_17257.f_7754;
				iVar4 = Global_17257.f_7755;
			}
			else
			{
				unk_0xC8FBBC95190691A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5031 && iVar6 <= Global_17257.f_5024)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5287[iVar6])
					{
						if (Global_17257.f_5160[iVar6] && iVar6 != Global_17257.f_5528)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5535[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5535[iVar6];
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
					if (Global_17257.f_5024 <= 1)
					{
						Global_17257.f_5024++;
					}
					iVar52 = 1;
				}
			}
			unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5524 > Global_17257.f_5031)
			{
				if (Global_17257.f_7761)
				{
					iVar1 = Global_17257.f_7757;
					iVar2 = Global_17257.f_7758;
					iVar3 = Global_17257.f_7759;
					iVar4 = Global_17257.f_7760;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_79(Global_17254, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x8504C7FBA97E6D14("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17257.f_7774)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xC8FBBC95190691A8(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFE6A5236E50BDF64("CommonMenu", "shop_arrows_upANDdown", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar59), ((Var37.f_1 / 720f) * fVar59), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_4500)) != 0 && Global_17257.f_4574 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_17257.f_4576 != 0)
				{
					func_84(Global_17257.f_4576, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_75(fVar41);
				unk_0x4B846CECFAF9AF4D(&(Global_17257.f_4500));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4570)
				{
					if (Global_17257.f_4504[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_17257.f_4509[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4504[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_17257.f_4513[iVar16], Global_17257.f_4517[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4504[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBEEA466E167943A5(fVar41, (fVar49 + 0.00277776f));
				unk_0xC8FBBC95190691A8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_79(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7766)
				{
					iVar1 = Global_17257.f_7762;
					iVar2 = Global_17257.f_7763;
					iVar3 = Global_17257.f_7764;
					iVar4 = Global_17257.f_7765;
				}
				else
				{
					unk_0xC8FBBC95190691A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_75(fVar41);
				unk_0x608B6701BEC4527A(&(Global_17257.f_4500));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4570)
				{
					if (Global_17257.f_4504[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_17257.f_4509[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4504[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_17257.f_4513[iVar16], Global_17257.f_4517[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4504[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 8)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x2ED77CF10395403E(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17257.f_4576 != 0)
				{
					func_84(Global_17257.f_4576, 1, 1, &fVar35, &fVar36, bParam7);
					func_74(Global_17257.f_4576, 1, &iVar46, &iVar47, &iVar48);
					unk_0xFE6A5236E50BDF64(func_82(Global_17257.f_4576), func_80(Global_17257.f_4576, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17257.f_4574 > 0)
				{
					if ((unk_0x9D40BBF80D8F5E8A() - Global_17257.f_4575) > Global_17257.f_4574)
					{
						StringCopy(&(Global_17257.f_4500), "", 16);
						Global_17257.f_4574 = -1;
					}
				}
			}
			if (unk_0xC7C6DDDE84A8E734(&(Global_2557246.f_21)) != 0 && Global_2557246.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_2557246.f_67 != 0)
				{
					func_84(Global_2557246.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_75(fVar41);
				unk_0x4B846CECFAF9AF4D(&(Global_2557246.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2557246.f_61)
				{
					if (Global_2557246.f_25[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_2557246.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2557246.f_25[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_2557246.f_34[iVar16], Global_2557246.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2557246.f_25[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 8)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBEEA466E167943A5(fVar41, (fVar49 + 0.00277776f));
				unk_0xC8FBBC95190691A8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_79(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7766)
				{
					iVar1 = Global_17257.f_7762;
					iVar2 = Global_17257.f_7763;
					iVar3 = Global_17257.f_7764;
					iVar4 = Global_17257.f_7765;
				}
				else
				{
					unk_0xC8FBBC95190691A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_75(fVar41);
				unk_0x608B6701BEC4527A(&(Global_2557246.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2557246.f_61)
				{
					if (Global_2557246.f_25[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_2557246.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2557246.f_25[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_2557246.f_34[iVar16], Global_2557246.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2557246.f_25[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 8)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x2ED77CF10395403E(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2557246.f_67 != 0)
				{
					func_84(Global_2557246.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_74(Global_2557246.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xFE6A5236E50BDF64(func_82(Global_2557246.f_67), func_80(Global_2557246.f_67, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2557246.f_65 > 0)
				{
					if ((unk_0x9D40BBF80D8F5E8A() - Global_2557246.f_66) > Global_2557246.f_65)
					{
						StringCopy(&(Global_2557246.f_21), "", 16);
						Global_2557246.f_65 = -1;
					}
				}
			}
			func_66(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x56B79B8AD45389A5(76, 84);
			unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5521)
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
			iVar63 = Global_17257.f_5024;
			if (Global_17257.f_5522)
			{
				iVar63 = (Global_17257.f_5525 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5535[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5535[iVar6];
				}
				if (Global_17257.f_5522)
				{
					iVar6 = Global_17257.f_7402[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17257.f_5528 && iVar9 < Global_17257.f_5031)
				{
					bVar32 = true;
					if (Global_17257.f_5529 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5160[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17257.f_5667[iVar6] = fVar34;
				fVar33 = (Global_17254 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17257.f_5529 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7768)
					{
						unk_0xC8FBBC95190691A8(Global_17257.f_7767, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0xC8FBBC95190691A8(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Nav", (Global_17254 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5665 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_64(bVar31, 1, 0, 0, 0, 0);
					unk_0x608B6701BEC4527A("DFLT_MNU_OPT");
					unk_0x2ED77CF10395403E(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17257.f_5032)
					{
						if (unk_0xB519E5386FBF69E5(Global_17257.f_4897[iVar6], iVar8) || Global_17257.f_4864[iVar8] == 5)
						{
							if (Global_17257.f_5522)
							{
								iVar19 = Global_17257.f_7413[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar20 = Global_17257.f_7454[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar21 = Global_17257.f_7495[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar22 = Global_17257.f_7536[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar23 = Global_17257.f_7577[((iVar9 * Global_17257.f_5032) + iVar8)];
							}
							else
							{
								Global_17257.f_7413[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar19;
								Global_17257.f_7454[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar20;
								Global_17257.f_7495[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar21;
								Global_17257.f_7536[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar22;
								Global_17257.f_7577[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17257.f_5797[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5794[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5797[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5794[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4870[iVar8] != -1f)
							{
								fVar33 = ((Global_17254 + 0.0046875f) + Global_17257.f_4870[iVar8]);
							}
							if ((iVar8 < 4 && Global_17257.f_4870[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4870[iVar8 + 1])
							{
								fVar45 = (Global_17257.f_4870[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17254 + Global_17256) - 0.0046875f) - fVar33);
							}
							if ((Global_17257.f_4883[iVar8] && Global_17257.f_5662) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17257.f_4864[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5522)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_64(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, iVar70, bVar50);
												unk_0x2561F357565DEF13(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9359E7CC54335EB9(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x8D23CF083336DA9B(Global_17257.f_3866[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9EA8AC61C9873436(Global_17257.f_4119[(iVar21 + iVar27)], Global_17257.f_4246[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0x4E53FEE658D9705E(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_84(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17257.f_4373[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4891[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4891[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
											Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar42;
											Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar42 = Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar43 = Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)];
										}
										if (bVar51)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_64(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, bVar50);
											if (Global_17257.f_7772 && Global_17257.f_7773 == iVar6)
											{
												func_63(bVar31);
											}
											unk_0x608B6701BEC4527A(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9359E7CC54335EB9(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x8D23CF083336DA9B(Global_17257.f_3866[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EA8AC61C9873436(Global_17257.f_4119[(iVar21 + iVar27)], Global_17257.f_4246[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4373[(iVar22 + iVar28)] == 2)
												{
													if (func_84(Global_17257.f_4373[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_84(Global_17257.f_4373[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_74(Global_17257.f_4373[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4891[iVar8] == 2)
															{
																unk_0xFE6A5236E50BDF64(func_82(Global_17257.f_4373[(iVar22 + iVar28)]), func_80(Global_17257.f_4373[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xFE6A5236E50BDF64(func_82(Global_17257.f_4373[(iVar22 + iVar28)]), func_80(Global_17257.f_4373[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4891[iVar8] == 2)
											{
												unk_0x2ED77CF10395403E(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x2ED77CF10395403E((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4373[(iVar22 + iVar14)] != 2)
												{
													if (func_84(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_84(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_74(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4373[(iVar22 + iVar14)] == 30)
															{
																unk_0xFE6A5236E50BDF64(func_82(Global_17257.f_4373[(iVar22 + iVar14)]), func_80(Global_17257.f_4373[(iVar22 + iVar14)], bVar31), (Global_17254 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4891[iVar8] == 2)
															{
																unk_0xFE6A5236E50BDF64(func_82(Global_17257.f_4373[(iVar22 + iVar14)]), func_80(Global_17257.f_4373[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xFE6A5236E50BDF64(func_82(Global_17257.f_4373[(iVar22 + iVar14)]), func_80(Global_17257.f_4373[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5522)
										{
											func_64(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7772 && Global_17257.f_7773 == iVar6)
											{
												func_63(bVar31);
											}
											unk_0x2561F357565DEF13("NUMBER");
											unk_0x8D23CF083336DA9B(Global_17257.f_3866[iVar20]);
											fVar42 = unk_0x4E53FEE658D9705E(1);
											fVar41 = 0f;
											if (Global_17257.f_4891[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4891[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
											Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar42 = Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)];
										}
										if (bVar51)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_64(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
										func_62((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_3866[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5522)
										{
											func_64(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7772 && Global_17257.f_7773 == iVar6)
											{
												func_63(bVar31);
											}
											unk_0x2561F357565DEF13("NUMBER");
											unk_0x9EA8AC61C9873436(Global_17257.f_4119[iVar21], Global_17257.f_4246[iVar21]);
											fVar42 = unk_0x4E53FEE658D9705E(1);
											fVar41 = 0f;
											if (Global_17257.f_4891[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4891[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
											Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar42 = Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)];
										}
										if (bVar51)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_64(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
										func_61((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_4119[iVar21], Global_17257.f_4246[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_84(Global_17257.f_4373[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17257.f_5522)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17257.f_4891[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
												Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
												fVar43 = Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)];
											}
											if (bVar51)
											{
												if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17257.f_4891[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_74(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xFE6A5236E50BDF64(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_74(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xFE6A5236E50BDF64(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_84(Global_17257.f_4373[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_74(Global_17257.f_4373[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xFE6A5236E50BDF64(func_82(Global_17257.f_4373[iVar22]), func_80(Global_17257.f_4373[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_60(Global_17257.f_4373[iVar22])), (fVar36 * func_60(Global_17257.f_4373[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
							if (Global_17257.f_4864[iVar8] == 5)
							{
								if (Global_17257.f_4876[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17257.f_4876[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17257.f_4876[iVar8]);
								if (Global_17257.f_4883[iVar8])
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
							fVar33 = (fVar33 + Global_17257.f_4876[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17257.f_7402[iVar9] = iVar6;
						Global_17257.f_5530 = iVar6;
						iVar9++;
						if (Global_17257.f_5160[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5535[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17257.f_5535[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17257.f_5521)
					{
						Global_17257.f_5287[iVar6] = 1;
						if (Global_17257.f_5033[iVar6])
						{
							if (bVar31)
							{
								Global_17257.f_5527 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17257.f_5527 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5521)
			{
				Global_17257.f_5523 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17257.f_5526 = iVar11;
				Global_17257.f_5524 = iVar10;
				Global_17257.f_5521 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5522)
	{
		Global_17257.f_5525 = iVar9;
		Global_17257.f_5522 = 1;
	}
	Global_17257.f_5664 = fVar49;
	Global_17257.f_5666 = unk_0x9D40BBF80D8F5E8A();
	unk_0x74C2382519DF9D92(Global_17257.f_5664);
	if (!Global_17257.f_7741)
	{
		func_55();
	}
	Global_17257.f_7741 = 0;
	if (bParam2)
	{
		unk_0x1B7A773B18DF3DB0(10);
	}
	unk_0x1B7A773B18DF3DB0(6);
	unk_0x1B7A773B18DF3DB0(7);
	unk_0x1B7A773B18DF3DB0(9);
	unk_0x1B7A773B18DF3DB0(8);
	if (bParam0)
	{
		func_54(1);
	}
	unk_0x26FD470559B5674D();
}

void func_54(int iParam0)
{
	Global_1339895.f_932 = iParam0;
}

void func_55()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_59(0))
		{
			func_56(0);
		}
		unk_0x9956FB0E4B50ECB8(&Global_2284, 2);
	}
}

void func_56(int iParam0)
{
	if (Global_14571)
	{
		func_58(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
	}
	if (!func_57())
	{
		Global_14413.f_1 = 3;
	}
}

int func_57()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
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
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_59(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
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
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x9EA8AC61C9873436(uParam3, uParam4);
	unk_0x2ED77CF10395403E(fParam0, fParam1, 0);
}

void func_62(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x8D23CF083336DA9B(iParam3);
	unk_0x2ED77CF10395403E(fParam0, fParam1, iParam4);
}

void func_63(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xC8FBBC95190691A8(Global_17257.f_7769[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xC8FBBC95190691A8(Global_17257.f_7769[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
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
			func_65(Global_17257.f_5797[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xC8FBBC95190691A8(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xC8FBBC95190691A8(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
		}
		else
		{
			unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x63EBA277B22A4C2D(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
	}
	else
	{
		unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
	}
	unk_0x1C00A83A6321F5E9(0f, 0.35f);
	unk_0xD1AB173831A6CDE6(1);
	if (bParam5)
	{
		unk_0x1C00A83A6321F5E9(0f, 0.425f);
		unk_0x2626D8742682C5ED(4);
	}
	else
	{
		unk_0x2626D8742682C5ED(0);
	}
	unk_0xE2458E4F6B499A9C(0f, 1f);
	unk_0x9A4139952357487D(0);
	unk_0x9806DF8CF9239C35(0, 0, 0, 0, 0);
	unk_0x872BE36490E5119C(0, 0, 0, 0, 0);
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
	if (unk_0x29C4AA4F29B1E539())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_69(unk_0x3F80C6638E3A1A90(), 0))
		{
			return;
		}
	}
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0x4C0203C9C5CF4108() == 0 || unk_0x29C4AA4F29B1E539())
		{
			return;
		}
	}
	if (Global_17257.f_4577 != 0)
	{
		if (unk_0x2C46E805556A1F00(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4577)
			{
				if (Global_17257.f_4834[iVar1] != 344)
				{
					StringCopy(&(Global_17257.f_4579[iVar1 /*16*/]), unk_0xE77F6122F2596EB4(2, Global_17257.f_4834[iVar1], 1), 64);
				}
				else if (Global_17257.f_4847[iVar1] != 32)
				{
					StringCopy(&(Global_17257.f_4579[iVar1 /*16*/]), unk_0xA2A8F65D8724B71E(2, Global_17257.f_4847[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17257.f_4578 = 0;
		}
		if (!Global_17257.f_4578)
		{
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x73B039A1CD485226((1f - (Global_17257.f_4889 / 100f)));
			unk_0xFF141057ED7B4C73();
			if (unk_0xA78EA29AC2FFBADE())
			{
				unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x840DDAF1126AE0CC(1);
				unk_0xFF141057ED7B4C73();
			}
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4577)
			{
				if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_4772[iVar1 /*4*/])) != unk_0xC7C6DDDE84A8E734("PREV"))
				{
					unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x43C93E686A1E92C5(iVar1);
					func_68(&(Global_17257.f_4579[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xC7C6DDDE84A8E734(&(Global_17257.f_4772[iVar2 /*4*/])) == unk_0xC7C6DDDE84A8E734("PREV"))
					{
						func_68(&(Global_17257.f_4579[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4821[iVar1] == -1)
					{
						func_67(&(Global_17257.f_4772[iVar1 /*4*/]));
					}
					else
					{
						unk_0x33D37B75FC2BCC8C(&(Global_17257.f_4772[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x96629435C64EFDA2(iParam2, 70);
						}
						else
						{
							unk_0x8D23CF083336DA9B(iParam2);
						}
						unk_0x057886C01DDC535D();
					}
					if (unk_0xA78EA29AC2FFBADE())
					{
						if (Global_17257.f_4834[iVar1] != 344 && unk_0xB519E5386FBF69E5(Global_17257.f_4860, iVar1))
						{
							unk_0x840DDAF1126AE0CC(1);
							unk_0x43C93E686A1E92C5(Global_17257.f_4834[iVar1]);
						}
						else
						{
							unk_0x840DDAF1126AE0CC(0);
							unk_0x43C93E686A1E92C5(344);
						}
					}
					unk_0xFF141057ED7B4C73();
				}
				iVar1++;
			}
			if (unk_0xC7C6DDDE84A8E734(&(Global_2557246.f_16)) != unk_0xC7C6DDDE84A8E734(""))
			{
				unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x43C93E686A1E92C5(Global_17257.f_4577);
				func_68(&Global_2557246);
				if (Global_2557246.f_20 == -1)
				{
					func_67(&(Global_2557246.f_16));
				}
				else
				{
					unk_0x33D37B75FC2BCC8C(&(Global_2557246.f_16));
					if (bParam5)
					{
						unk_0x96629435C64EFDA2(iParam2, 70);
					}
					else
					{
						unk_0x8D23CF083336DA9B(iParam2);
					}
					unk_0x057886C01DDC535D();
				}
				unk_0xFF141057ED7B4C73();
			}
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x43C93E686A1E92C5(0);
			unk_0x43C93E686A1E92C5(0);
			unk_0x43C93E686A1E92C5(0);
			unk_0x43C93E686A1E92C5(80);
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4890)
			{
				unk_0x43C93E686A1E92C5(1);
			}
			else
			{
				unk_0x43C93E686A1E92C5(0);
			}
			unk_0xFF141057ED7B4C73();
			Global_17257.f_4578 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17257.f_4577)
		{
			if (Global_17257.f_4821[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x43C93E686A1E92C5(iVar1);
					unk_0x33D37B75FC2BCC8C(&(Global_17257.f_4772[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x96629435C64EFDA2(iParam2, 70);
					}
					else
					{
						unk_0x8D23CF083336DA9B(iParam2);
					}
					unk_0x057886C01DDC535D();
					unk_0xFF141057ED7B4C73();
				}
			}
			iVar1++;
		}
		if (Global_2557246.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x43C93E686A1E92C5(iVar1);
				unk_0x33D37B75FC2BCC8C(&(Global_2557246.f_16));
				if (bParam5)
				{
					unk_0x96629435C64EFDA2(iParam2, 70);
				}
				else
				{
					unk_0x8D23CF083336DA9B(iParam2);
				}
				unk_0x057886C01DDC535D();
				unk_0xFF141057ED7B4C73();
			}
		}
		unk_0x56B79B8AD45389A5(76, 66);
		unk_0xC49724172A0D506C(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17257.f_7776)
			{
				unk_0xA2DDC75885378542(15, 0f, -0.0375f);
				Global_17257.f_7776 = 1;
			}
		}
		else if (Global_17257.f_7776)
		{
			unk_0x4A819C86009EE6EC(15);
			Global_17257.f_7776 = 0;
		}
		unk_0x26FD470559B5674D();
		if (Global_17257.f_4863)
		{
			unk_0x56B79B8AD45389A5(82, 66);
			unk_0xC49724172A0D506C(0f, 0f, 0f, 0f);
			unk_0xAF5B7C9C0A5116E9(Global_17257.f_5453[iVar0 /*10*/], Global_17257.f_4861, Global_17257.f_4862, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x26FD470559B5674D();
		}
		else
		{
			unk_0xE2B331FD5EEF4684(Global_17257.f_5453[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_67(char[4] cParam0)
{
	unk_0x33D37B75FC2BCC8C(cParam0);
	unk_0x057886C01DDC535D();
}

void func_68(var uParam0)
{
	unk_0x492B9DC2AF02FDDF(uParam0);
}

bool func_69(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_70(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
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
	if (Global_1315887[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_71()
{
	return Global_1312746;
}

int func_72()
{
	struct<3> Var0;
	
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	if (func_73())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x2EA67F1118848733(&Var0);
		if (Global_14358 == 0)
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_74(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0xC8FBBC95190691A8(1, iParam2, iParam3, iParam4, &uVar0);
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
		case 49:
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
	
	unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x2626D8742682C5ED(0);
	unk_0x1C00A83A6321F5E9(0f, 0.35f);
	unk_0xBAD855016DFBE4C3(2);
	unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, iVar3);
	unk_0xE2458E4F6B499A9C(fParam0, ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x9A4139952357487D(0);
	unk_0x9806DF8CF9239C35(0, 0, 0, 0, 0);
	unk_0x872BE36490E5119C(0, 0, 0, 0, 0);
}

void func_76(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x8D23CF083336DA9B(uParam3);
	unk_0x8D23CF083336DA9B(uParam4);
	unk_0x2ED77CF10395403E(fParam0, fParam1, 0);
}

float func_77(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x356491C12DAD1A37(sParam0))
	{
		if (unk_0xC7C6DDDE84A8E734(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_78();
	unk_0x2561F357565DEF13(sParam0);
	unk_0x8D23CF083336DA9B(uParam1);
	unk_0x8D23CF083336DA9B(uParam2);
	return unk_0x4E53FEE658D9705E(1);
}

void func_78()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7751)
	{
		iVar0 = Global_17257.f_7747;
		iVar1 = Global_17257.f_7748;
		iVar2 = Global_17257.f_7749;
		iVar3 = Global_17257.f_7750;
	}
	unk_0x2626D8742682C5ED(0);
	unk_0x1C00A83A6321F5E9(0f, 0.35f);
	unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, iVar3);
	unk_0xE2458E4F6B499A9C((Global_17254 + 0.0046875f), ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x9A4139952357487D(0);
	unk_0x9806DF8CF9239C35(0, 0, 0, 0, 0);
	unk_0x872BE36490E5119C(0, 0, 0, 0, 0);
}

void func_79(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC3BB3CA17D24E700((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_80(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0xF6917DE0E003509D(&(Global_17257.f_6601[iParam0 /*16*/])))
	{
		return func_81(&(Global_17257.f_6601[iParam0 /*16*/]));
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
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
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
	if (!unk_0xF6917DE0E003509D(&(Global_17257.f_5800[iParam0 /*16*/])))
	{
		return func_81(&(Global_17257.f_5800[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_83()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x177E5285E888D643(&iVar0, &iVar1);
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
	if (unk_0xC7C6DDDE84A8E734(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x177E5285E888D643(&iVar2, &iVar3);
			fVar5 = unk_0x56995B080AF5D7D0(0);
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
			if (unk_0xFF6891E21E7FC193(joaat("director_mode")) > 0)
			{
				unk_0xC2E26B11E2BC4A88(&iVar2, &iVar3);
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0xC2E26B11E2BC4A88(&iVar2, &iVar3);
		}
		Var7 = { unk_0x8504C7FBA97E6D14(uVar0, sVar1) };
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
			if (!unk_0x51807A4D76E3D4F4() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17256)
			{
				*fParam4 = (*fParam4 * (Global_17256 / *fParam3));
				*fParam3 = Global_17256;
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
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_86(bool bParam0, bool bParam1)
{
	if (Global_2426494.f_1325.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xDE185266FE919B68() || (func_88(8, -1) && func_87() != 64)) || (unk_0x9449AC6115443388() != 0 && !bParam1)) || (unk_0xF478777FFCC96862() && !bParam0)) || unk_0x565848B3396785BC()) || Global_69496) || Global_17257.f_7775) || unk_0xA42A6C736BEA9778()) || Global_91077.f_1338)
	{
		return 0;
	}
	return 1;
}

int func_87()
{
	return Global_1315842;
}

bool func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
}

void func_89(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_68105[iParam0] = 0;
	Global_68105.f_69[iParam0] = 0;
}

void func_90(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_40(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 10))
		{
			func_92(iParam0);
			func_91(uParam1, &(Global_99155.f_18731.f_69[Global_68105.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 11))
			{
				Global_99155.f_18731.f_1864[Global_68105.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_99155.f_18731.f_1934[Global_68105.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_99155.f_18731.f_1864[Global_68105.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_99155.f_18731.f_1934[Global_68105.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_99155.f_18731.f_1958[Global_68105.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_325(iParam0, 1);
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
	if (func_40(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_139[iParam0]))
		{
			unk_0x20BB4B94CC6DDC9A(Global_68105.f_139[iParam0], 1, 1);
			unk_0xC1F2137782A816E9(&(Global_68105.f_139[iParam0]));
			Global_68105.f_139[iParam0] = 0;
		}
		if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 13))
		{
			func_325(iParam0, 0);
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
	
	sVar0 = unk_0xE77F6122F2596EB4(2, iParam0, 1);
	if (Global_17257.f_4577 >= 12)
	{
		StringCopy(&Global_2557246, sVar0, 64);
		StringCopy(&(Global_2557246.f_16), sParam1, 16);
		Global_2557246.f_20 = iParam2;
		return;
		return;
	}
	unk_0x73817D396768E4C6(&(Global_17257.f_4860), Global_17257.f_4577);
	StringCopy(&(Global_17257.f_4579[Global_17257.f_4577 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4772[Global_17257.f_4577 /*4*/]), sParam1, 16);
	Global_17257.f_4821[Global_17257.f_4577] = iParam2;
	Global_17257.f_4834[Global_17257.f_4577] = iParam0;
	Global_17257.f_4847[Global_17257.f_4577] = 32;
	Global_17257.f_4577++;
}

void func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_4577 = 0;
	Global_17257.f_4578 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4772[iVar0 /*4*/]), "", 16);
		Global_17257.f_4821[iVar0] = -1;
		Global_17257.f_4834[iVar0] = 344;
		Global_17257.f_4847[iVar0] = 32;
		iVar0++;
	}
	Global_17257.f_4860 = 0;
	StringCopy(&(Global_2557246.f_16), "", 16);
	Global_2557246.f_20 = -1;
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (!func_52(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x840DDAF1126AE0CC(0);
		unk_0xFF141057ED7B4C73();
	}
}

void func_96(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_4500), sParam0, 16);
	Global_17257.f_4570 = 0;
	Global_17257.f_4571 = 0;
	Global_17257.f_4572 = 0;
	Global_17257.f_4573 = 0;
	Global_17257.f_4574 = iParam1;
	Global_17257.f_4575 = unk_0x9D40BBF80D8F5E8A();
	Global_17257.f_4576 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4504[iVar0] = 0;
		iVar0++;
	}
}

int func_97()
{
	if (unk_0x7EDB1AFBE755EC7A(2))
	{
		if (Global_2557322 > -1)
		{
			if (unk_0xEA7F1ED415FFE2E8(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_98(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x7EDB1AFBE755EC7A(2))
	{
		return 0;
	}
	if (unk_0xA57007F9A665F322() || unk_0xA42A6C736BEA9778())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x422036F797F95CFC();
	}
	if (Global_2557322 == -6)
	{
		unk_0x2BDB7C3D77DB86C4(4);
		if (iParam0 && unk_0x6BBF308E0A0F9AD4(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2557322 = -1;
			return 0;
		}
	}
	if (((Global_2557322 > -1 || Global_2557322 == -3) || Global_2557322 == -2) || unk_0xD0B060C76BDF38BD())
	{
		unk_0x2BDB7C3D77DB86C4(1);
		return 0;
	}
	if (Global_2557322 == -1 && iParam0)
	{
		if (unk_0x6BBF308E0A0F9AD4(2, 237))
		{
			unk_0x2BDB7C3D77DB86C4(4);
			Global_2557322 = -6;
			return 1;
		}
		else
		{
			unk_0x2BDB7C3D77DB86C4(3);
			return 0;
		}
	}
	unk_0x2BDB7C3D77DB86C4(1);
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
	if (!unk_0x7EDB1AFBE755EC7A(2))
	{
		Global_2557322 = -1;
		return;
	}
	unk_0xA0644295A8C137BF(1);
	fVar0 = Global_17254;
	fVar2 = (fVar0 + Global_17256);
	fVar3 = Global_17257.f_5523;
	fVar1 = (Global_17257.f_5523 - (IntToFloat(Global_17257.f_5525) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17257.f_5525 < 1)
	{
		fVar1 = (Global_17257.f_5523 - 0.034722f);
	}
	unk_0x56B79B8AD45389A5(76, 84);
	unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x976D93A25CEA6E3A(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x976D93A25CEA6E3A(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x26FD470559B5674D();
	func_101();
	if (Global_2557322 == -6)
	{
		return;
	}
	Global_2557322 = -1;
	fVar7 = Global_2557316;
	fVar8 = Global_2557317;
	if (Global_17257.f_5526 > Global_17257.f_5525)
	{
		if (((Global_2557316 >= fVar0 && Global_2557316 <= fVar2) && Global_2557317 >= fVar3) && Global_2557317 < (fVar3 + fVar6))
		{
			Global_2557322 = -2;
			if (bParam3)
			{
				func_100(0);
			}
			return;
		}
		if (((Global_2557316 >= fVar0 && Global_2557316 <= fVar2) && Global_2557317 >= (fVar3 + fVar6)) && Global_2557317 < (fVar3 + 0.034722f))
		{
			Global_2557322 = -3;
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
		if (Global_17257.f_5526 == -1)
		{
			Global_2557322 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17257.f_5525);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x56B79B8AD45389A5(76, 84);
				unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
				func_79(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17256, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x26FD470559B5674D();
			}
		}
		Global_2557322 = Global_17257.f_7402[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2557322 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2557322 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2557322 = -4;
		return;
	}
	Global_2557322 = -1;
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
	fVar0 = Global_17254;
	fVar1 = Global_17257.f_5523;
	unk_0x56B79B8AD45389A5(76, 84);
	unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
	if (Global_2557322 == -2)
	{
		func_79(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2557322 == -3)
	{
		func_79(fVar0, (fVar1 + fVar2), Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x26FD470559B5674D();
}

void func_101()
{
	Global_2557318 = Global_2557316;
	Global_2557319 = Global_2557317;
	Global_2557316 = unk_0x9CF7E896E5D8A141(2, 239);
	Global_2557317 = unk_0x9CF7E896E5D8A141(2, 240);
	Global_2557320 = (Global_2557316 - Global_2557318);
	Global_2557321 = (Global_2557317 - Global_2557319);
}

void func_102(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_5529 = iParam0;
	Global_17257.f_5662 = iParam2;
	if (Global_17257.f_5529 < Global_17257.f_5528)
	{
		Global_17257.f_5528 = Global_17257.f_5529;
	}
	else if ((Global_17257.f_5522 && Global_17257.f_5529 > Global_17257.f_5530) || (!Global_17257.f_5522 && Global_17257.f_5529 >= (Global_17257.f_5528 + Global_17257.f_5031)))
	{
		iVar0 = Global_17257.f_5528;
		while (iVar0 <= Global_17257.f_5529)
		{
			if (iVar0 >= 0 && iVar0 < 125)
			{
				if (Global_17257.f_4897[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17257.f_5031 && Global_17257.f_5528 < 126)
		{
			Global_17257.f_5528++;
			iVar1 = 0;
			iVar0 = Global_17257.f_5528;
			while (iVar0 <= Global_17257.f_5529)
			{
				if (iVar0 >= 0 && iVar0 < 125)
				{
					if (Global_17257.f_4897[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17257.f_5521 = 0;
	Global_17257.f_5522 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17257.f_4500), "", 16);
		StringCopy(&(Global_2557246.f_21), "", 16);
	}
}

void func_103(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17257.f_5026 >= 252)
	{
		return;
	}
	if (Global_17257.f_5533 >= 4)
	{
		return;
	}
	if (Global_17257.f_5534 != 1)
	{
		return;
	}
	if (Global_17257.f_5533 >= Global_17257.f_5531)
	{
		return;
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5026 /*6*/]), sParam0, 24);
	Global_17257.f_5026++;
	Global_17257.f_2092[Global_17257.f_5532 /*5*/][Global_17257.f_5533] = 1;
	Global_17257.f_5533++;
	if (Global_17257.f_5533 >= Global_17257.f_5531)
	{
		fVar0 = func_105();
		if (Global_17257.f_4883[Global_17257.f_5025] && Global_17257.f_5533 == Global_17257.f_5531)
		{
			func_84(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17257.f_4876[(Global_17257.f_5025 - 1)])
		{
			Global_17257.f_4876[(Global_17257.f_5025 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17257.f_5533 >= Global_17257.f_5531)
		{
			fVar3 = func_104();
			if (fVar3 > Global_17257.f_5535[Global_17257.f_5024])
			{
				Global_17257.f_5535[Global_17257.f_5024] = fVar3;
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
	while (iVar0 < Global_17257.f_5533)
	{
		if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17257.f_4373[((Global_17257.f_5030 - iVar1) + iVar0)] != 0)
		{
			if (func_84(Global_17257.f_4373[((Global_17257.f_5030 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x75D27F83672CDCB0(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x75D27F83672CDCB0(0.35f, 0);
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
	while (iVar7 < Global_17257.f_5533)
	{
		if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_64(0, 1, 0, 0, 0, iVar6 > 0);
	if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
	{
		unk_0x2561F357565DEF13(&(Global_17257.f_73[Global_17257.f_5532 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5533)
	{
		if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(Global_17257.f_5532 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(Global_17257.f_5532 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 2)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x8D23CF083336DA9B(Global_17257.f_3866[((Global_17257.f_5028 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 3)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9EA8AC61C9873436(Global_17257.f_4119[((Global_17257.f_5029 - iVar4) + iVar10)], Global_17257.f_4246[((Global_17257.f_5029 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 5)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x63E8D6007C32E426(&(Global_2441085[((Global_17257.f_5027 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 6)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9359E7CC54335EB9(&(Global_2441085[((Global_17257.f_5027 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 7)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x63E8D6007C32E426(&(Global_2441085[((Global_17257.f_5027 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
	{
		fVar0 = unk_0x4E53FEE658D9705E(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17257.f_4373[((Global_17257.f_5030 - iVar5) + iVar7)] != 0)
		{
			func_84(Global_17257.f_4373[((Global_17257.f_5030 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
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
	if (func_107(iParam0, -1) == 0)
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
		
		default:
	}
	return "";
}

int func_107(int iParam0, int iParam1)
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
			return Global_67870;
		
		case 246:
			return joaat("tampa");
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
	
	if (Global_17257.f_5024 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5024 >= 126)
	{
		return;
	}
	if (Global_17257.f_5030 >= 126)
	{
		return;
	}
	if (Global_17257.f_5533 < Global_17257.f_5531)
	{
		return;
	}
	if (Global_17257.f_5024 != iParam0)
	{
		Global_17257.f_5024 = iParam0;
		Global_17257.f_5025 = 0;
	}
	iVar0 = Global_17257.f_4864[Global_17257.f_5025];
	if (iVar0 != 4)
	{
		while (Global_17257.f_5025 < 4 && iVar0 != 4)
		{
			Global_17257.f_5025++;
			iVar0 = Global_17257.f_4864[Global_17257.f_5025];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_17257.f_4373[Global_17257.f_5030] = iParam1;
	Global_17257.f_5030++;
	if (iParam1 != 0)
	{
		func_84(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17257.f_4883[Global_17257.f_5025])
		{
			func_84(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_17257.f_4876[Global_17257.f_5025])
		{
			Global_17257.f_4876[Global_17257.f_5025] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_17257.f_5535[iParam0])
			{
				Global_17257.f_5535[iParam0] = fVar2;
			}
		}
	}
	unk_0x9956FB0E4B50ECB8(&(Global_17257.f_4897[iParam0]), Global_17257.f_5025);
	Global_17257.f_5025++;
	Global_17257.f_5534 = 4;
}

void func_109(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17257.f_5024 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5024 >= 126)
	{
		return;
	}
	if (Global_17257.f_5026 >= 252)
	{
		return;
	}
	if (Global_17257.f_5533 < Global_17257.f_5531)
	{
		return;
	}
	if (Global_17257.f_5024 != iParam0)
	{
		Global_17257.f_5024 = iParam0;
		Global_17257.f_5025 = 0;
	}
	iVar0 = Global_17257.f_4864[Global_17257.f_5025];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5025 < 4 && iVar0 != 1)
		{
			Global_17257.f_5025++;
			iVar0 = Global_17257.f_4864[Global_17257.f_5025];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5026 /*6*/]), sParam1, 24);
	if (!unk_0xF6917DE0E003509D(sParam1) && !unk_0x33FD8E2E139F4FAC(sParam1))
	{
	}
	Global_17257.f_1586[Global_17257.f_5026] = iParam3;
	Global_17257.f_1839[Global_17257.f_5026] = iParam4;
	Global_17257.f_5026++;
	if (iParam2 == 0)
	{
		fVar1 = func_111(&(Global_17257.f_73[Global_17257.f_5026 /*6*/]));
		if (Global_17257.f_4883[Global_17257.f_5025])
		{
			func_84(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17257.f_4876[Global_17257.f_5025])
		{
			Global_17257.f_4876[Global_17257.f_5025] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_110(&(Global_17257.f_73[Global_17257.f_5026 /*6*/]));
			if (fVar4 > Global_17257.f_5535[iParam0])
			{
				Global_17257.f_5535[iParam0] = fVar4;
			}
		}
	}
	unk_0x9956FB0E4B50ECB8(&(Global_17257.f_4897[iParam0]), Global_17257.f_5025);
	Global_17257.f_5025++;
	Global_17257.f_5534 = 1;
	Global_17257.f_5532 = (Global_17257.f_5026 - 1);
	Global_17257.f_5533 = 0;
	Global_17257.f_5531 = iParam2;
}

float func_110(char* sParam0)
{
	if (!unk_0x33FD8E2E139F4FAC(sParam0))
	{
	}
	return unk_0x75D27F83672CDCB0(0.35f, 0);
}

float func_111(char* sParam0)
{
	if (!unk_0x356491C12DAD1A37(sParam0))
	{
		if (unk_0xC7C6DDDE84A8E734(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_64(0, 1, 0, 0, 0, 0);
	unk_0x2561F357565DEF13(sParam0);
	return unk_0x4E53FEE658D9705E(1);
}

void func_112(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	char* sVar6;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	char* sVar14;
	int iVar18;
	var uVar19;
	var uVar20;
	
	uParam1->f_66 = func_107(iParam0, iParam4);
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
	func_122(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_121(iParam0))
	{
		if (Global_68102)
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
	if (bParam2)
	{
		iVar0 = Global_68101;
	}
	else if (iParam3 == 0)
	{
		iVar0 = Global_99155.f_29631.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar0 = Global_99155.f_29631.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar0 = Global_99155.f_29631.f_939[iParam0];
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
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 2:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 3:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 4:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 5:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 6:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 7:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 8:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 9:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 10:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 11:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 12:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 13:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 14:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 15:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 16:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 17:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 18:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 19:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 20:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 21:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 22:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 23:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 24:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
				break;
			
			case 25:
				func_117(func_118(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_116(func_118(iParam0, iVar0));
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
				if (func_115(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_114(iParam0, iVar0, &uVar1))
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
						uParam1->f_67 = func_116(func_118(iParam0, iVar0));
					}
				}
				else if (func_121(iParam0))
				{
					if (!Global_68102)
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
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				break;
			
			case 2:
				if (func_115(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_114(iParam0, iVar0, &uVar2))
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
						uParam1->f_67 = func_116(func_118(iParam0, iVar0));
					}
				}
				else if (func_121(iParam0))
				{
					if (!Global_68102)
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
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				break;
			
			case 3:
				if (func_115(iParam0))
				{
					if (func_114(iParam0, iVar0, &uVar3))
					{
						uParam1->f_9[48] = uVar3;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else if (func_121(iParam0))
				{
					if (!Global_68102)
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
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				break;
			
			case 4:
				if (func_115(iParam0))
				{
					if (func_114(iParam0, iVar0, &uVar4))
					{
						uParam1->f_9[48] = uVar4;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else if (func_121(iParam0))
				{
					if (!Global_68102)
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
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_113(iVar5, &sVar6, &iVar10, &uVar11, &uVar12))
					{
						if (unk_0x04E7E853E31F41A3(&sVar6, "ORANGE") && iVar10 == 1)
						{
							uParam1->f_5 = uVar11;
							uParam1->f_6 = uVar12;
							iVar5 = -99;
						}
						iVar5++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 5:
				if (func_121(iParam0))
				{
					if (!Global_68102)
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
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_113(iVar13, &sVar14, &iVar18, &uVar19, &uVar20))
					{
						if (unk_0x04E7E853E31F41A3(&sVar14, "LIME_GREEN") && iVar18 == 1)
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
			
			case 6:
				if (func_121(iParam0))
				{
					if (!Global_68102)
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
				else if (func_121(iParam0))
				{
					if (!Global_68102)
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
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_67 = -1;
				}
				break;
			
			case 8:
				if (func_121(iParam0))
				{
					if (!Global_68102)
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

bool func_113(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
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

int func_114(int iParam0, int iParam1, var uParam2)
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

int func_115(int iParam0)
{
	if (((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232)
	{
		return 1;
	}
	return 0;
}

int func_116(int iParam0)
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
		
		default:
	}
	return -1;
}

int func_117(int iParam0, var uParam1, var uParam2)
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

int func_118(int iParam0, int iParam1)
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
			if (func_119(iParam0, 11, iParam1))
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
		
		default:
	}
	return -1;
}

int func_119(int iParam0, int iParam1, int iParam2)
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
		if (unk_0xB3A172A376757D19())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_22() && func_120())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
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
	if (func_121(iParam0))
	{
		if (Global_68102)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_120()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xB519E5386FBF69E5(Global_25, 5))
	{
		if (unk_0xB519E5386FBF69E5(Global_25, 1) || unk_0xB519E5386FBF69E5(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (unk_0xB519E5386FBF69E5(iVar0, 5))
		{
			if (unk_0xB519E5386FBF69E5(iVar0, 1) || unk_0xB519E5386FBF69E5(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x1ADD6AB65304522C(0))
	{
		if (Global_136200.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x56DCF5665F92F9BD(iVar2, &iVar1, -1))
			{
				if (unk_0xB519E5386FBF69E5(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x6FBD7D781A378269())
	{
		iVar3 = unk_0x623F98022BC99367(866);
		if (unk_0xB519E5386FBF69E5(iVar3, 1) || unk_0xB519E5386FBF69E5(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x6E2954F2B1919678())
	{
		if (unk_0x6935836F937B7980())
		{
			if (unk_0x3C110F92F2383E56())
			{
				unk_0x56DCF5665F92F9BD(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				unk_0x9956FB0E4B50ECB8(&iVar4, 1);
				unk_0x9956FB0E4B50ECB8(&iVar4, 3);
				unk_0x9956FB0E4B50ECB8(&iVar4, 5);
				unk_0x9956FB0E4B50ECB8(&Global_25, 1);
				unk_0x9956FB0E4B50ECB8(&Global_25, 3);
				unk_0x9956FB0E4B50ECB8(&Global_25, 5);
				unk_0x39DEDCCD70293F58(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (unk_0x6FBD7D781A378269())
				{
					iVar4 = unk_0x623F98022BC99367(866);
					unk_0x9956FB0E4B50ECB8(&iVar4, 1);
					unk_0x9956FB0E4B50ECB8(&iVar4, 3);
					unk_0x305E571F148D27EA(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	if (((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241)
	{
		return 1;
	}
	return 0;
}

void func_122(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 64:
			unk_0x9956FB0E4B50ECB8(uParam1, 4);
			break;
		
		case 67:
			unk_0x9956FB0E4B50ECB8(uParam1, 4);
			break;
		
		case 72:
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			break;
		
		case 117:
			unk_0x73817D396768E4C6(uParam1, 1);
			break;
		
		case 49:
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			break;
		
		case 118:
			unk_0x73817D396768E4C6(uParam1, 1);
			break;
		
		case 1:
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			break;
		
		case 119:
			unk_0x73817D396768E4C6(uParam1, 1);
			break;
		
		case 77:
			unk_0x9956FB0E4B50ECB8(uParam1, 0);
			unk_0x73817D396768E4C6(uParam1, 1);
			unk_0x73817D396768E4C6(uParam1, 2);
			break;
		
		case 120:
			unk_0x73817D396768E4C6(uParam1, 0);
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			unk_0x73817D396768E4C6(uParam1, 2);
			break;
		
		case 130:
			unk_0x9956FB0E4B50ECB8(uParam1, 0);
			break;
		
		case 132:
			unk_0x9956FB0E4B50ECB8(uParam1, 0);
			break;
		
		case 135:
			unk_0x73817D396768E4C6(uParam1, 0);
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			break;
		
		case 137:
			unk_0x9956FB0E4B50ECB8(uParam1, 0);
			break;
		
		case 141:
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			unk_0x73817D396768E4C6(uParam1, 6);
			break;
		
		case 147:
			unk_0x9956FB0E4B50ECB8(uParam1, 0);
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			unk_0x9956FB0E4B50ECB8(uParam1, 2);
			unk_0x9956FB0E4B50ECB8(uParam1, 3);
			unk_0x9956FB0E4B50ECB8(uParam1, 4);
			unk_0x9956FB0E4B50ECB8(uParam1, 5);
			unk_0x9956FB0E4B50ECB8(uParam1, 6);
			unk_0x9956FB0E4B50ECB8(uParam1, 7);
			unk_0x9956FB0E4B50ECB8(uParam1, 8);
			break;
		
		case 203:
			unk_0x9956FB0E4B50ECB8(uParam1, 0);
			unk_0x73817D396768E4C6(uParam1, 1);
			unk_0x73817D396768E4C6(uParam1, 2);
			break;
		
		case 100:
			unk_0x9956FB0E4B50ECB8(uParam1, 0);
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			unk_0x9956FB0E4B50ECB8(uParam1, 2);
			break;
		
		case 170:
			unk_0x73817D396768E4C6(uParam1, 0);
			unk_0x73817D396768E4C6(uParam1, 1);
			unk_0x73817D396768E4C6(uParam1, 2);
			break;
		
		case 160:
			unk_0x9956FB0E4B50ECB8(uParam1, 15);
			break;
		
		case 161:
			unk_0x9956FB0E4B50ECB8(uParam1, 15);
			break;
		
		case 192:
			unk_0x9956FB0E4B50ECB8(uParam1, 0);
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			unk_0x73817D396768E4C6(uParam1, 2);
			break;
		
		case 221:
			unk_0x73817D396768E4C6(uParam1, 0);
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			unk_0x73817D396768E4C6(uParam1, 2);
			break;
		
		case 222:
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			break;
		
		case 172:
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			break;
		
		case 165:
			unk_0x73817D396768E4C6(uParam1, 0);
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			break;
		
		case 166:
			unk_0x9956FB0E4B50ECB8(uParam1, 0);
			unk_0x73817D396768E4C6(uParam1, 1);
			break;
		
		case 139:
			unk_0x9956FB0E4B50ECB8(uParam1, 0);
			break;
		
		case 104:
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			break;
		
		case 109:
			unk_0x9956FB0E4B50ECB8(uParam1, 0);
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			unk_0x9956FB0E4B50ECB8(uParam1, 2);
			break;
		
		case 227:
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			unk_0x73817D396768E4C6(uParam1, 2);
			unk_0x73817D396768E4C6(uParam1, 4);
			break;
		
		case 52:
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			break;
		
		case 108:
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			break;
		
		case 237:
			unk_0x9956FB0E4B50ECB8(uParam1, 9);
			break;
		
		case 238:
			unk_0x73817D396768E4C6(uParam1, 0);
			unk_0x9956FB0E4B50ECB8(uParam1, 1);
			unk_0x9956FB0E4B50ECB8(uParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
			if (Global_68102)
			{
				unk_0x9956FB0E4B50ECB8(uParam1, 9);
			}
			break;
		
		default:
			return;
			break;
	}
}

void func_123(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_1), sParam0, 16);
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4891[0] = iParam0;
	Global_17257.f_4891[1] = iParam1;
	Global_17257.f_4891[2] = iParam2;
	Global_17257.f_4891[3] = iParam3;
	Global_17257.f_4891[4] = iParam4;
}

void func_125(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4864[0] = iParam0;
	Global_17257.f_4864[1] = iParam1;
	Global_17257.f_4864[2] = iParam2;
	Global_17257.f_4864[3] = iParam3;
	Global_17257.f_4864[4] = iParam4;
	Global_17257.f_5032 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5032++;
	}
}

void func_126(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 252)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2092[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2441085[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 252)
	{
		Global_17257.f_3866[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		Global_17257.f_4119[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		Global_17257.f_4373[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		Global_17257.f_4897[iVar0] = 0;
		Global_17257.f_5033[iVar0] = 0;
		Global_17257.f_5160[iVar0] = 0;
		Global_17257.f_5667[iVar0] = 0f;
		Global_17257.f_5287[iVar0] = 0;
		Global_17257.f_5535[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4864[iVar0] = 0;
		Global_17257.f_4876[iVar0] = 0f;
		Global_17257.f_4870[iVar0] = -1f;
		Global_17257.f_4883[iVar0] = 0;
		Global_17257.f_4891[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4772[iVar0 /*4*/]), "", 16);
		Global_17257.f_4821[iVar0] = -1;
		Global_17257.f_4834[iVar0] = 344;
		Global_17257.f_4847[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_17257.f_5800[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6601[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2557246.f_16), "", 16);
	Global_2557246.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5024 = 0;
	Global_17257.f_5025 = 0;
	Global_17257.f_5026 = 0;
	Global_17257.f_5028 = 0;
	Global_17257.f_5029 = 0;
	Global_17257.f_5030 = 0;
	Global_17257.f_5027 = 0;
	Global_17257.f_5662 = 0;
	Global_17257.f_5529 = 0;
	Global_17257.f_5528 = 0;
	Global_17257.f_5530 = 0;
	StringCopy(&(Global_17257.f_4500), "", 16);
	Global_17257.f_4570 = 0;
	Global_17257.f_4571 = 0;
	Global_17257.f_4572 = 0;
	Global_17257.f_4573 = 0;
	Global_17257.f_4574 = 0;
	Global_17257.f_4575 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4504[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4576 = 0;
	StringCopy(&(Global_2557246.f_21), "", 16);
	Global_2557246.f_61 = 0;
	Global_2557246.f_62 = 0;
	Global_2557246.f_63 = 0;
	Global_2557246.f_64 = 0;
	Global_2557246.f_65 = 0;
	Global_2557246.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2557246.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2557246.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4882 = 0f;
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_5534 = 0;
	Global_17257.f_5533 = 0;
	Global_17257.f_5531 = 0;
	Global_17257.f_5532 = 0;
	Global_17257.f_4577 = 0;
	Global_17257.f_4578 = 0;
	Global_17257.f_5031 = 10;
	Global_17257.f_5032 = 0;
	Global_17257.f_5664 = 0f;
	Global_17257.f_5665 = 0f;
	Global_17257.f_5521 = 0;
	Global_17257.f_5522 = 0;
	Global_17257.f_5523 = 0f;
	Global_17257.f_5524 = 0;
	Global_17257.f_5526 = 0;
	Global_17257.f_5525 = 0;
	Global_17257.f_5527 = 0;
	Global_17257.f_7772 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5794[iVar0] = -1;
		Global_17257.f_5797[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4889 = 0f;
	Global_17257.f_4860 = 0;
	Global_17257.f_4890 = 0;
	Global_17257.f_7751 = 0;
	Global_17257.f_7746 = 0;
	Global_17257.f_7756 = 0;
	Global_17257.f_7761 = 0;
	Global_17257.f_7766 = 0;
	Global_17257.f_7768 = 0;
	Global_17257.f_7774 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = unk_0x56995B080AF5D7D0(0);
	if (bParam0)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17256 = 0.225f;
	}
}

void func_127()
{
	if (unk_0xA78EA29AC2FFBADE())
	{
		unk_0x57DCE283775C55C6(0.325f, 0.3f);
	}
}

int func_128(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_49(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x2E6D4A0CE8AD9494(unk_0xBFAE5F9DEC53DAE2()))
	{
		return 0;
	}
	if (func_59(0))
	{
		return 0;
	}
	if (unk_0x2DFE588AA3727FE3())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36319[iVar0 /*19*/] == 1 && Global_36319[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36319[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36319[iVar0 /*19*/].f_5 = 1;
			Global_36319[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36319[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36319[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_129(char* sParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_52(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17257.f_5428[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xF6917DE0E003509D(&(Global_17257.f_5428[iVar0 /*4*/])))
	{
		unk_0x36A3D6FBED10EF81(&(Global_17257.f_5428[iVar0 /*4*/]), 9);
		Global_17257.f_5421[iVar0] = 1;
		if (!unk_0xA73545B11DECBFE2(&(Global_17257.f_5428[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xDF7D4AE1A984CEF7("CommonMenu", 0);
	Global_17257.f_5414[iVar0] = 1;
	if (!unk_0x0B4924B3F0DADDD1("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17257.f_5453[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_130(&(Global_17257.f_5453[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_130(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x4A4851D44CDF03C0(*uParam0))
			{
				*uParam0 = unk_0xE3C796DC28BC3254(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x4A4851D44CDF03C0(*uParam0))
					{
						uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x4A4851D44CDF03C0(*uParam0))
			{
				uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x4A4851D44CDF03C0(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_131(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

var func_132(char* sParam0)
{
	unk_0xAA8D087D7A86072A(sParam0);
	return unk_0x360D41DC76A83E6A(0);
}

void func_133(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0xFF6891E21E7FC193(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xF478777FFCC96862())
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
		if (!Global_36319[iVar0 /*19*/])
		{
			Global_36319[iVar0 /*19*/] = 1;
			Global_36319[iVar0 /*19*/].f_1 = Global_36442;
			Global_36442++;
			Global_36319[iVar0 /*19*/].f_4 = 0;
			Global_36319[iVar0 /*19*/].f_17 = 0;
			Global_36319[iVar0 /*19*/].f_5 = 0;
			Global_36319[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36319[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36319[iVar0 /*19*/].f_6 = iParam3;
			Global_36319[iVar0 /*19*/].f_18 = unk_0xE3E113B4DB09AAF8();
			Global_36319[iVar0 /*19*/].f_7 = 0;
			Global_36319[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xF6917DE0E003509D(sParam4))
			{
				Global_36319[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36319[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36319[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_36319[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_134(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return unk_0xB519E5386FBF69E5(Global_99155.f_29631[iParam0], iVar0);
}

int func_135(int iParam0)
{
	int iVar0;
	int iVar1[128];
	
	if (func_138(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_99155.f_17188[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_22() && !unk_0x00AAD79B42B3E036())
	{
		if (func_137(33, 0) && !func_136(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_99155.f_29522.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_99155.f_29522.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_99155.f_29522.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_99155.f_29522.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_99155.f_29522.f_7)
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

int func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_99155.f_6302.f_764)
	{
		if (Global_99155.f_6302.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_137(int iParam0, int iParam1)
{
	if (unk_0xB519E5386FBF69E5(Global_99155.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_138(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_668.f_704, 2))
		{
			return 1;
		}
	}
	if (unk_0xB3A172A376757D19())
	{
		if (!bParam1 || unk_0xC8FFCE1611C4F73B())
		{
			if (!unk_0x26A43F8C0E764E33() && !unk_0x7ECD3D8283875DD1())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0x1A8078D7630DABE2())
		{
			return 0;
		}
	}
	if (unk_0xB3A172A376757D19())
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_138(1, 1))
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			iVar0++;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_99155.f_17188[45 /*6*/], 3))
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			iVar0++;
		}
	}
	if (func_22() && !unk_0x00AAD79B42B3E036())
	{
		if (func_137(33, 0) && !func_136(1751306471))
		{
			iVar0++;
		}
		if (Global_99155.f_29522.f_3)
		{
			iVar0++;
		}
		if (Global_99155.f_29522.f_4)
		{
			iVar0++;
		}
		if (Global_99155.f_29522.f_5)
		{
			iVar0++;
		}
		if (Global_99155.f_29522.f_6)
		{
			iVar0++;
		}
		if (Global_99155.f_29522.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_140(float fParam0)
{
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()) && !unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x8F4395E832F66DDF(unk_0xE7869D5D7816A9B6()) > 0;
		}
		else
		{
			return unk_0x9A75BFB6043190AE(unk_0xE7869D5D7816A9B6(), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), fParam0) > 0;
		}
	}
	return 0;
}

bool func_141(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
}

void func_142()
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
	if ((((((((((((((((Local_402.f_29.f_80 && Local_402.f_29.f_69) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6())) && Local_402.f_2 == 0) && Local_402.f_0 != -1) && func_46(Local_402.f_0, 0)) && func_46(Local_402.f_0, 5)) && !func_10(0)) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(5)) && !func_10(14)) && !Global_67887) && !func_141(1)) && !func_199()) || (((Local_402.f_3 > 1 && !func_141(0)) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6())) && !func_199()))
	{
		func_198(Local_402.f_0, &Local_521);
		fVar13 = 0f;
		sVar14 = "ANIM@APT_TRANS@GARAGE";
		Var15 = { 198.3659f, -1020.273f, -100f };
		Var18 = { Var15 };
		Var21 = { 198.9538f, -1026.13f, -100f };
		iVar24 = func_197(Local_402.f_0);
		switch (Local_402.f_3)
		{
			case 0:
				if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && !unk_0xF478777FFCC96862())
				{
					Local_402.f_3 = 10;
					return;
				}
				if ((((((unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && (func_196(unk_0x2CAFFCD9F5E16D2F(unk_0xE7869D5D7816A9B6()), Local_402.f_29.f_68, 90f) || unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))) && unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) && !unk_0x4231F56FA5885AE9(unk_0xE7869D5D7816A9B6())) && !unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6())) && !unk_0xA93197082225A470(unk_0xE7869D5D7816A9B6(), 2)) && (iVar24 == iLocal_647 || iVar24 == 145))
				{
					if (func_195())
					{
						bVar25 = true;
						if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
						{
							iVar12 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 1);
							if (unk_0xD51CFE69539DB6D8(iVar12))
							{
								if (unk_0xC45A34912542C4EB(iVar12, 0))
								{
									iVar26 = unk_0x1B2DC87EFB36DF80(iVar12);
									if (((((((((!func_43(iVar26) || func_42(iVar12)) || func_41(iVar12)) || !func_21(iVar26)) || unk_0xF54ECC20AEF6A194(iVar12)) || ((!unk_0x3937C84F74FAABA4(iVar26) && !unk_0x07C6F7E084F6A97E(iVar26)) && !unk_0x7BB0AC45FF0A3A28(iVar26))) || iVar26 == joaat("monster")) || unk_0x9DD85FBDD5BC3BF1(iVar12)) || unk_0x62A80FFAACC757A8(iVar12)) || (unk_0xD7F7FE7C1017323D(unk_0xE7869D5D7816A9B6()) && unk_0xFF6891E21E7FC193(joaat("taxi_procedural")) > 0))
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
						else if (unk_0x3471286EFE4CBA57(sVar14))
						{
							unk_0x2B0BB514F9140141(sVar14);
							if (!unk_0x2917D5E1CB5CE43A(sVar14))
							{
								bVar25 = false;
							}
						}
						if (bVar25)
						{
							func_133(&iLocal_631, 3, "WEB_VEH_ENTER", 0, 0, 0);
							iLocal_1009 = 0;
							Local_402.f_3 = 1;
						}
						else if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
						{
							if (!unk_0x23741E39BEA32E66() || func_132("WEB_VEH_INV"))
							{
								func_131("WEB_VEH_INV", -1);
								StringCopy(&cLocal_998, "WEB_VEH_INV", 16);
								bVar11 = true;
							}
						}
					}
					else if (!unk_0x23741E39BEA32E66() || func_132("WEB_VEH_FULL"))
					{
						func_131("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_998, "WEB_VEH_FULL", 16);
						bVar11 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_1007)
				{
					if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
					{
						iLocal_1007 = 0;
						unk_0x2B0BB514F9140141(sVar14);
						if (unk_0x2917D5E1CB5CE43A(sVar14))
						{
							iLocal_1007 = 1;
						}
					}
					else
					{
						unk_0x8B10CC9832827D27(sVar14);
						iLocal_1007 = 1;
					}
				}
				iVar27 = 1;
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
				{
					iVar12 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 1);
					if (unk_0xD51CFE69539DB6D8(iVar12))
					{
						if (unk_0xC45A34912542C4EB(iVar12, 0))
						{
							iVar28 = unk_0x1B2DC87EFB36DF80(iVar12);
							if ((((((((!func_43(iVar28) || func_42(iVar12)) || func_41(iVar12)) || unk_0xF54ECC20AEF6A194(iVar12)) || ((!unk_0x3937C84F74FAABA4(iVar28) && !unk_0x07C6F7E084F6A97E(iVar28)) && !unk_0x7BB0AC45FF0A3A28(iVar28))) || iVar28 == joaat("monster")) || unk_0x9DD85FBDD5BC3BF1(iVar12)) || unk_0x62A80FFAACC757A8(iVar12)) || (unk_0xD7F7FE7C1017323D(unk_0xE7869D5D7816A9B6()) && unk_0xFF6891E21E7FC193(joaat("taxi_procedural")) > 0))
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
				if (((((((((unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && (func_196(unk_0x2CAFFCD9F5E16D2F(unk_0xE7869D5D7816A9B6()), Local_402.f_29.f_68, 90f) || unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))) && unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) && func_195()) && !unk_0x4231F56FA5885AE9(unk_0xE7869D5D7816A9B6())) && !unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6())) && !unk_0xA93197082225A470(unk_0xE7869D5D7816A9B6(), 2)) && !func_199()) && (iVar24 == iLocal_647 || iVar24 == 145)) && iVar27)
				{
					if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()) || (unk_0x2917D5E1CB5CE43A(sVar14) || !unk_0x3471286EFE4CBA57(sVar14)))
					{
						if (func_128(iLocal_631, 1))
						{
							func_48(&iLocal_631);
							iLocal_1007 = 0;
							Local_402.f_3 = 2;
						}
						func_193(47, 0);
						func_188(47, 0);
						Local_402.f_112 = unk_0x41D9D981197E60A2(Var15, "v_garagem_sp");
						if (unk_0x4443D8D533ACB547(Local_402.f_112))
						{
							if (!unk_0x97ED7BE642158AAF(Local_402.f_112))
							{
								if ((unk_0x9698C5C67A3BBE47() % 10) == 0)
								{
									unk_0x3B150C65C40BD16E(Local_402.f_112);
								}
							}
							StringCopy(&Global_32342, "v_garagem_sp", 32);
						}
						if (!iLocal_1006 && !unk_0xC5E5B5BBBE4693F6())
						{
							if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
							{
								iVar29 = func_186(Local_402.f_0);
								func_40(&Var30, iVar29);
								Var18 = { Var30 };
								unk_0x3D81DBD4F6A29824(Var18, 20f, 0);
							}
							else
							{
								unk_0x3D81DBD4F6A29824(Var21 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_1006 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1006 && unk_0xC5E5B5BBBE4693F6())
					{
						unk_0xEF1C0568E9BDCF78();
						iLocal_1006 = 0;
					}
					iLocal_1007 = 0;
					func_48(&iLocal_631);
					unk_0x8B10CC9832827D27(sVar14);
					Local_402.f_3 = 0;
				}
				break;
			
			case 2:
				func_193(47, 0);
				func_188(47, 0);
				unk_0x6581912D0AD8605D(8);
				Global_68105.f_577 = 1;
				Global_68105.f_578 = { Local_402.f_29.f_55 };
				iLocal_987 = unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90());
				unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
				unk_0xA3A83FA0784C86DE(unk_0xE7869D5D7816A9B6(), 0, 0);
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
				unk_0xE242D0D27B122FAC(0);
				unk_0xA8010B7497A9230B(0);
				unk_0x175B431FD44549F5(unk_0x3F80C6638E3A1A90());
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					iVar12 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
					if (unk_0xD51CFE69539DB6D8(iVar12) && unk_0xC45A34912542C4EB(iVar12, 0))
					{
						if (func_196(unk_0x2CAFFCD9F5E16D2F(iVar12), Local_402.f_29.f_68, 90f))
						{
							iLocal_1009 = 0;
						}
						else
						{
							iLocal_1009 = 1;
						}
						unk_0xD39141689169EF06(iVar12, 1, 1, 1, 1, 1, 1, 0, 0);
						unk_0xFF08C54E7EC23A77(Local_521.f_86[0 /*6*/], 20f, 0);
						unk_0x28705A5E63C175CC(Local_521.f_86[0 /*6*/], 20f, 0);
						unk_0x7F75333E7D3B15DD(Local_521.f_86[0 /*6*/], 7f);
						unk_0x88A973CE47FBEF95(iVar12, Local_521.f_86[0 /*6*/], 1, 0, 0, 1);
						if (iLocal_1009 && !unk_0x83A7252D14019A24(unk_0xE7869D5D7816A9B6()))
						{
							unk_0x151F32CB40BE730C(iVar12, (Local_521.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							unk_0x151F32CB40BE730C(iVar12, Local_521.f_86[0 /*6*/].f_3.f_2);
						}
						if (unk_0x83A7252D14019A24(unk_0xE7869D5D7816A9B6()))
						{
							unk_0xF9333020973682B9(unk_0xE7869D5D7816A9B6(), 0, 0, -1);
							unk_0xDEDF1A35D80AE74D(unk_0xE7869D5D7816A9B6(), 1);
						}
						unk_0xC9CEB5227A733CE6(iVar12);
					}
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
					func_181(1, 1, 1, 0);
					func_180(&(Local_521[1 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 3;
				}
				else
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_1002) && !unk_0x76B2D234F1895632(iLocal_1002))
					{
						if (unk_0x28D33422BA6C479D(iLocal_1002) && unk_0x4C5CA989AEF3A14C(iLocal_1002, 1))
						{
							unk_0xC1F2137782A816E9(&iLocal_1002);
						}
					}
					iLocal_1002 = unk_0xA0B1717D806F4901();
					if ((((unk_0xD51CFE69539DB6D8(iLocal_1002) && unk_0xC45A34912542C4EB(iLocal_1002, 0)) && !unk_0xFFD2CE10E8C7E77F(unk_0x1B2DC87EFB36DF80(iLocal_1002))) && !unk_0xD1C57B32C6DE7BB6(unk_0x1B2DC87EFB36DF80(iLocal_1002))) && !unk_0xAA65D1F2BF4AAFFB(unk_0x1B2DC87EFB36DF80(iLocal_1002)))
					{
						if (!unk_0x28D33422BA6C479D(iLocal_1002))
						{
							unk_0x20BB4B94CC6DDC9A(iLocal_1002, 0, 0);
						}
						if (unk_0xD51CFE69539DB6D8(iLocal_1002) && unk_0xC45A34912542C4EB(iLocal_1002, 0))
						{
							if (!bVar51)
							{
								if (unk_0x22E902D6AF27E232(iLocal_1002, Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0))
								{
									bVar51 = true;
								}
							}
							if (!bVar51)
							{
								fVar52 = unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(iLocal_1002, 1), Local_521[0 /*15*/]);
								if (fVar52 < (5f * 5f))
								{
									bVar51 = true;
								}
							}
							if (bVar51)
							{
								iVar53 = func_28(24);
								if (func_179(&Local_751, 24))
								{
									func_174(&Local_751, func_319());
									if (unk_0xD51CFE69539DB6D8(iVar53))
									{
										unk_0x9E55BD45B84E7BDC(&iVar53);
									}
								}
								if (Local_402.f_0 == 21)
								{
									unk_0xB86B1248EA9B87EA(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
									func_172(iLocal_1002, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_402.f_0 == 22)
								{
									unk_0xB86B1248EA9B87EA(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
									func_172(iLocal_1002, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_402.f_0 == 23)
								{
									unk_0xB86B1248EA9B87EA(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
									func_172(iLocal_1002, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								unk_0xC9CEB5227A733CE6(iLocal_1002);
							}
						}
					}
					else
					{
						iLocal_1002 = 0;
					}
					Var54 = { Local_402.f_29 * Vector(2f, 2f, 2f) + Local_402.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					Var57 = { Local_402.f_29 * Vector(1f, 1f, 1f) + Local_402.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Local_402.f_29, Var54.f_0, Var54.f_1, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1010 = "";
						switch (unk_0x0ADD324BC46177EF(0, 2))
						{
							case 0:
								sLocal_1010 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1010 = "gar_open_2_left";
								break;
						}
					}
					else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Var54.f_0, Var54.f_1, Local_402.f_29.f_2, Var57.f_0, Var57.f_1, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1010 = "";
						switch (unk_0x0ADD324BC46177EF(0, 2))
						{
							case 0:
								sLocal_1010 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1010 = "gar_open_1_right";
								break;
						}
					}
					else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Var57.f_0, Var57.f_1, Local_402.f_29.f_2, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1010 = "";
						switch (unk_0x0ADD324BC46177EF(0, 2))
						{
							case 0:
								sLocal_1010 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_1010 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_1010 = "";
						switch (unk_0x0ADD324BC46177EF(0, 6))
						{
							case 0:
								sLocal_1010 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1010 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_1010 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_1010 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_1010 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_1010 = "gar_open_3_right";
								break;
							}
					}
					unk_0xFF08C54E7EC23A77(Local_521.f_73[0 /*4*/], 20f, 0);
					unk_0x28705A5E63C175CC(Local_521.f_86[0 /*6*/], 20f, 0);
					unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), Local_521.f_73[0 /*4*/], 1, 0, 0, 1);
					unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), Local_521.f_73[0 /*4*/].f_3);
					iLocal_636 = unk_0xB839A1C489B63ACC(Local_521.f_73[0 /*4*/], 0f, 0f, Local_521.f_73[0 /*4*/].f_3, 2);
					unk_0x360F0D01112F8AD0(unk_0xE7869D5D7816A9B6(), iLocal_636, sVar14, sLocal_1010, 8f, -8f, 0, 0, 1148846080, 0);
					func_181(1, 1, 1, 0);
					func_180(&(Local_521[0 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 4;
				}
				Local_402.f_112 = unk_0x41D9D981197E60A2(Var15, "v_garagem_sp");
				if (unk_0x4443D8D533ACB547(Local_402.f_112))
				{
					if (!unk_0x97ED7BE642158AAF(Local_402.f_112))
					{
						unk_0x3B150C65C40BD16E(Local_402.f_112);
					}
					StringCopy(&Global_32342, "v_garagem_sp", 32);
				}
				if (!iLocal_1006)
				{
					if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
					{
						iVar60 = func_186(Local_402.f_0);
						func_40(&Var61, iVar60);
						Var18 = { Var61 };
						unk_0x3D81DBD4F6A29824(Var18, 20f, 0);
					}
					else
					{
						unk_0x3D81DBD4F6A29824(Var21, 20f, 0);
					}
				}
				unk_0x9956FB0E4B50ECB8(&(Local_649.f_9), 25);
				func_168(198.0043f, -999.7775f, -100f, 50f, 0);
				func_89(Local_402.f_0);
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
				iLocal_1008 = 0;
				break;
			
			case 4:
				bVar82 = true;
				if (!unk_0xC5E5B5BBBE4693F6())
				{
				}
				else if (unk_0xB1959BA5ECC2010F())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0x4443D8D533ACB547(Local_402.f_112))
				{
					if (!unk_0x97ED7BE642158AAF(Local_402.f_112))
					{
						unk_0x3B150C65C40BD16E(Local_402.f_112);
					}
					StringCopy(&Global_32342, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = unk_0x41D9D981197E60A2(Var15, "v_garagem_sp");
				}
				if (func_167())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0xCF686B56FD5328B5(Local_402.f_110) && unk_0x10F9FB82A0D63EA0(Local_402.f_110))
				{
					if (unk_0x10B8434FB64D5C3F(Local_402.f_110))
					{
						bVar82 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_521[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else if (unk_0xCF686B56FD5328B5(Local_402.f_111) && unk_0x10F9FB82A0D63EA0(Local_402.f_111))
				{
					if (unk_0x10B8434FB64D5C3F(Local_402.f_111))
					{
						bVar82 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_521[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0x47B2F09FC779F5CD(iLocal_636))
				{
					fVar83 = unk_0x4D221DFBB84DCF0B(iLocal_636);
					if (fVar83 < 0.4f)
					{
						bVar82 = false;
					}
				}
				if (bVar82)
				{
					unk_0x6A6E764D1DB633C7(800);
					Local_402.f_3 = 5;
				}
				break;
			
			case 5:
				if (unk_0xAEF17BDE274A1247())
				{
					iVar84 = unk_0x2AD909D8CB732A41();
					unk_0xCC18B241D266EF14(iVar84, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0x413B7EC5B1B85673(iVar84, "hold", (2250f / 1000f));
					func_181(0, 1, 1, 0);
					unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
					if (unk_0xCF686B56FD5328B5(Local_402.f_110))
					{
						unk_0x63498CF6CF35C6A2(Local_402.f_110, 0);
						unk_0x74FF6D08DE291367(Local_402.f_110, 0);
					}
					if (unk_0xCF686B56FD5328B5(Local_402.f_111))
					{
						unk_0x63498CF6CF35C6A2(Local_402.f_111, 0);
						unk_0x74FF6D08DE291367(Local_402.f_111, 0);
					}
					if (unk_0xD51CFE69539DB6D8(iLocal_1012))
					{
						unk_0x70EE8EFEE355AD29(iLocal_1012, 1, 0);
						unk_0x2878EC06B3F897A0(iLocal_1012, 0);
						iLocal_1012 = 0;
					}
					unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
					unk_0x6581912D0AD8605D(8);
					if (unk_0x47B2F09FC779F5CD(iLocal_636))
					{
						unk_0x57F365E25D632211(iLocal_636);
					}
					iLocal_636 = -1;
					unk_0xDE31B2587775EDAD(unk_0xE7869D5D7816A9B6());
					unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), 194.5394f, -1026.32f, -100f, 1, 0, 0, 1);
					unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), 334.1665f);
					unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 1);
					unk_0x7FB81B1DD14A3BE4(0f);
					unk_0x6EF372C057320AD4(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 6;
				}
				break;
			
			case 6:
				func_166(Local_402.f_0);
				if (unk_0xAEF17BDE274A1247() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					unk_0x8B10CC9832827D27(sVar14);
					func_165();
					if (unk_0xC5E5B5BBBE4693F6())
					{
						unk_0xEF1C0568E9BDCF78();
					}
					unk_0x2D3BB3EF936C4B76(800);
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
					unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 0);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_988 = 0;
					iLocal_1006 = 0;
					Local_402.f_3 = 10;
				}
				break;
			
			case 3:
				func_166(Local_402.f_0);
				bVar85 = true;
				if (!unk_0xC5E5B5BBBE4693F6())
				{
				}
				else if (unk_0xB1959BA5ECC2010F())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0x4443D8D533ACB547(Local_402.f_112))
				{
					if (!unk_0x97ED7BE642158AAF(Local_402.f_112))
					{
						unk_0x3B150C65C40BD16E(Local_402.f_112);
					}
					StringCopy(&Global_32342, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = unk_0x41D9D981197E60A2(Var15, "v_garagem_sp");
				}
				if (func_167())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0xCF686B56FD5328B5(Local_402.f_110) && unk_0x10F9FB82A0D63EA0(Local_402.f_110))
				{
					if (unk_0x10B8434FB64D5C3F(Local_402.f_110))
					{
						bVar85 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_521[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else if (unk_0xCF686B56FD5328B5(Local_402.f_111) && unk_0x10F9FB82A0D63EA0(Local_402.f_111))
				{
					if (unk_0x10B8434FB64D5C3F(Local_402.f_111))
					{
						bVar85 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_521[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					Var86 = { 0f, 0f, 0f };
					Var86.f_3 = 0f;
					func_157(unk_0xE7869D5D7816A9B6(), Local_521.f_86[0 /*6*/], Local_521.f_66[0 /*3*/], ((Local_521[1 /*15*/].f_14 * 1000f) - 500f), Var86, 2, &fVar13);
				}
				if (bVar85)
				{
					func_165();
					unk_0xC1B1E9A034A63A62(0);
					unk_0x6A6E764D1DB633C7(800);
					Local_402.f_3 = 35;
				}
				break;
			
			case 35:
				bVar90 = true;
				func_166(Local_402.f_0);
				if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_521.f_61[1] * 1000f))
				{
					bVar90 = false;
				}
				if (bVar90)
				{
					func_165();
					func_181(0, 1, 1, 0);
					unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
					if (unk_0xCF686B56FD5328B5(Local_402.f_110))
					{
						unk_0x63498CF6CF35C6A2(Local_402.f_110, 0);
						unk_0x74FF6D08DE291367(Local_402.f_110, 0);
					}
					if (unk_0xCF686B56FD5328B5(Local_402.f_111))
					{
						unk_0x63498CF6CF35C6A2(Local_402.f_111, 0);
						unk_0x74FF6D08DE291367(Local_402.f_111, 0);
					}
					if (unk_0xD51CFE69539DB6D8(iLocal_1012))
					{
						unk_0x70EE8EFEE355AD29(iLocal_1012, 1, 0);
						unk_0x2878EC06B3F897A0(iLocal_1012, 0);
						iLocal_1012 = 0;
					}
					unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
					unk_0x6581912D0AD8605D(8);
					if (unk_0xC5E5B5BBBE4693F6())
					{
						unk_0xEF1C0568E9BDCF78();
					}
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
					{
						iVar12 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
						if (unk_0xD51CFE69539DB6D8(iVar12) && unk_0xC45A34912542C4EB(iVar12, 0))
						{
							iVar91 = func_186(Local_402.f_0);
							func_40(&Var92, iVar91);
							unk_0x88A973CE47FBEF95(iVar12, Var92, 1, 0, 0, 1);
							unk_0x151F32CB40BE730C(iVar12, Var92.f_3);
							unk_0x32C67B8F6CBD9B6A(iVar12, 1);
							unk_0xE9A614E9191BFB4A(iVar12, 0, 1, 0);
							unk_0x01A5F35B4016EFD8(iVar12, 4);
							unk_0xAE1C23F7F7C0BEF3(iVar12, 1, 0);
							unk_0xAE1C23F7F7C0BEF3(iVar12, 0, 0);
							unk_0x955267F95DE8B488(iVar12, 0);
							unk_0xD39141689169EF06(iVar12, 0, 0, 0, 0, 0, 0, 0, 0);
							unk_0x663F1B23D2C4D20A(unk_0xE7869D5D7816A9B6(), iVar12, 0);
							unk_0x2878EC06B3F897A0(iVar12, 0);
							Var113.f_9 = 49;
							Var113.f_59 = 2;
							func_15(iVar12, &Var113);
							func_90(iVar91, &Var113, 0f, 0f, 0f, -1f, 145);
							func_13(iVar91, iVar12, 1);
							func_156(iVar12);
						}
						unk_0x7FB81B1DD14A3BE4(0f);
						unk_0x6EF372C057320AD4(0f, 1065353216);
					}
					iVar191 = unk_0x312FA2EB3948B47C(unk_0xE7869D5D7816A9B6(), &uVar0, -1);
					iVar192 = 0;
					while (iVar192 < iVar191)
					{
						if ((unk_0xD51CFE69539DB6D8(uVar0[iVar192]) && !unk_0xAF437D7C802AB246(uVar0[iVar192])) && unk_0xCA9354733F0AE57E(uVar0[iVar192], unk_0xF6138D85451616EC(unk_0x3F80C6638E3A1A90())))
						{
							unk_0x9CA89729A675E8FF(uVar0[iVar192], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar192++;
					}
					unk_0xC1B1E9A034A63A62(0);
					iLocal_988 = 0;
					iLocal_1006 = 0;
					unk_0x2D3BB3EF936C4B76(800);
					Local_402.f_3 = 10;
				}
				break;
			
			case 10:
				if (unk_0x83666F9FB8FEBD4B() < 7000 || !Global_99155.f_18731.f_4800)
				{
					if (!Global_99155.f_18731.f_4800)
					{
						if (iLocal_988 == 0)
						{
							func_131("CAR_GAR_05", -1);
							StringCopy(&cLocal_998, "CAR_GAR_05", 16);
							bVar11 = true;
							if (unk_0x83666F9FB8FEBD4B() >= 7000)
							{
								unk_0xC1B1E9A034A63A62(0);
								iLocal_988++;
							}
						}
						else if (iLocal_988 == 1)
						{
							func_131("CAR_GAR_06", -1);
							StringCopy(&cLocal_998, "CAR_GAR_06", 16);
							bVar11 = true;
							if (unk_0x83666F9FB8FEBD4B() >= 7000)
							{
								unk_0xC1B1E9A034A63A62(0);
								Global_99155.f_18731.f_4800 = 1;
							}
						}
					}
					else
					{
						func_131("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_998, "CAR_GAR_EXIT", 16);
						bVar11 = true;
					}
				}
				else
				{
					Global_99155.f_18731.f_4800 = 1;
				}
				iVar193 = 0;
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					if (iLocal_631 != -1)
					{
						func_48(&iLocal_631);
					}
					iVar12 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
					if (unk_0xD51CFE69539DB6D8(iVar12) && unk_0xC45A34912542C4EB(iVar12, 0))
					{
						if (unk_0x66697A81EB591EA3(iVar12) || unk_0x83A7252D14019A24(unk_0xE7869D5D7816A9B6()))
						{
							if (!(unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && !unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6())))
							{
								if ((((unk_0x7A016BE57B7A580F(0, 71) != 0f || unk_0x958B4351DD28B142(0, 71)) || unk_0x6BBF308E0A0F9AD4(0, 71)) || unk_0x28BB6250B86A5CA5(0, 71)) || unk_0x2E080842BD1CBD38(0, 71))
								{
									iVar193 = 1;
								}
								if ((((unk_0x7A016BE57B7A580F(0, 72) != 0f || unk_0x958B4351DD28B142(0, 72)) || unk_0x6BBF308E0A0F9AD4(0, 72)) || unk_0x28BB6250B86A5CA5(0, 72)) || unk_0x2E080842BD1CBD38(0, 72))
								{
									iVar193 = 1;
								}
							}
						}
					}
				}
				else
				{
					unk_0x2B0BB514F9140141(sVar14);
					if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, 1, 0) && func_196(unk_0x2CAFFCD9F5E16D2F(unk_0xE7869D5D7816A9B6()), 180f, 90f))
					{
						if (iLocal_630 != -1)
						{
							func_48(&iLocal_630);
						}
						if (iLocal_631 == -1)
						{
							func_133(&iLocal_631, 3, "WEB_VEH_EXIT", 0, 0, 0);
						}
						if (!iLocal_630 != -1 && !iLocal_631 == -1)
						{
							if (func_128(iLocal_631, 1))
							{
								func_48(&iLocal_631);
								iVar193 = 1;
							}
						}
					}
					else if (iLocal_631 != -1)
					{
						func_48(&iLocal_631);
					}
				}
				if (iLocal_991)
				{
					iVar193 = 1;
				}
				if (iVar193 && !func_155())
				{
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) || iLocal_991)
					{
						unk_0xC1B1E9A034A63A62(0);
						unk_0x3D81DBD4F6A29824(Local_521.f_73[2 /*4*/], 20f, 0);
						if (iLocal_631 != -1)
						{
							func_48(&iLocal_631);
						}
						Local_402.f_3 = 12;
					}
					else if (unk_0x2917D5E1CB5CE43A(sVar14))
					{
						sLocal_1010 = "";
						switch (unk_0x0ADD324BC46177EF(0, 6))
						{
							case 0:
								sLocal_1010 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1010 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_1010 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_1010 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_1010 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_1010 = "gar_open_3_right";
								break;
						}
						iLocal_636 = unk_0xB839A1C489B63ACC(Local_521.f_73[1 /*4*/], 0f, 0f, Local_521.f_73[1 /*4*/].f_3, 2);
						unk_0x360F0D01112F8AD0(unk_0xE7869D5D7816A9B6(), iLocal_636, sVar14, sLocal_1010, 8f, -8f, 0, 0, 1148846080, 0);
						func_181(1, 1, 1, 0);
						func_180(&(Local_521[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
						unk_0x3D81DBD4F6A29824(Local_521.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_631 != -1)
						{
							func_48(&iLocal_631);
						}
						Local_402.f_3 = 11;
					}
					else if (!unk_0x3471286EFE4CBA57(sVar14))
					{
						unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), Local_521.f_73[1 /*4*/], 1, 0, 0, 1);
						unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), Local_521.f_73[1 /*4*/].f_3);
						func_181(1, 1, 1, 0);
						func_180(&(Local_521[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
						unk_0x3D81DBD4F6A29824(Local_521.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_631 != -1)
						{
							func_48(&iLocal_631);
						}
						Local_402.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar194 = true;
				if (!unk_0xC5E5B5BBBE4693F6())
				{
				}
				else if (unk_0xB1959BA5ECC2010F())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (func_167())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (unk_0xCF686B56FD5328B5(Local_402.f_110) && unk_0x10F9FB82A0D63EA0(Local_402.f_110))
				{
					if (unk_0x10B8434FB64D5C3F(Local_402.f_110))
					{
						bVar194 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_521[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else if (unk_0xCF686B56FD5328B5(Local_402.f_111) && unk_0x10F9FB82A0D63EA0(Local_402.f_111))
				{
					if (unk_0x10B8434FB64D5C3F(Local_402.f_111))
					{
						bVar194 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_521[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else
				{
					bVar194 = false;
				}
				if (unk_0x47B2F09FC779F5CD(iLocal_636))
				{
					fVar195 = unk_0x4D221DFBB84DCF0B(iLocal_636);
					if (fVar195 < 0.4f)
					{
						bVar194 = false;
					}
				}
				if (bVar194)
				{
					iLocal_988 = 0;
					iLocal_1006 = 0;
					unk_0x6A6E764D1DB633C7(800);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 13;
				}
				break;
			
			case 12:
				unk_0x8CCCC48313B0F20F(0, 75, 1);
				if (unk_0x83666F9FB8FEBD4B() > 500)
				{
					iVar196 = func_154();
					if ((iVar196 == 21 || iVar196 == 22) || iVar196 == 23)
					{
						Var197.f_9 = 49;
						Var197.f_59 = 2;
						func_90(iVar196, &Var197, 0f, 0f, 0f, -1f, 145);
						func_92(iVar196);
					}
					else if (iVar196 != -1)
					{
						if (!iLocal_991)
						{
							func_325(iVar196, 0);
							func_92(iVar196);
						}
					}
					unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
					unk_0xA3A83FA0784C86DE(unk_0xE7869D5D7816A9B6(), 0, 0);
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
					unk_0x8B10CC9832827D27(sVar14);
					unk_0x6A6E764D1DB633C7(800);
					Local_402.f_3 = 13;
				}
				break;
			
			case 13:
				if (unk_0xAEF17BDE274A1247())
				{
					iVar275 = unk_0x2AD909D8CB732A41();
					unk_0xCC18B241D266EF14(iVar275, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0x413B7EC5B1B85673(iVar275, "hold", (2250f / 1000f));
					unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
					if (unk_0xCF686B56FD5328B5(Local_402.f_110))
					{
						unk_0x63498CF6CF35C6A2(Local_402.f_110, 0);
						unk_0x74FF6D08DE291367(Local_402.f_110, 0);
					}
					if (unk_0xCF686B56FD5328B5(Local_402.f_111))
					{
						unk_0x63498CF6CF35C6A2(Local_402.f_111, 0);
						unk_0x74FF6D08DE291367(Local_402.f_111, 0);
					}
					if (unk_0xD51CFE69539DB6D8(iLocal_1012))
					{
						unk_0x70EE8EFEE355AD29(iLocal_1012, 1, 0);
						unk_0x2878EC06B3F897A0(iLocal_1012, 0);
						iLocal_1012 = 0;
					}
					unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
					unk_0x6581912D0AD8605D(8);
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
					{
						if (!iLocal_991)
						{
							iVar12 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
							if (unk_0xD51CFE69539DB6D8(iVar12) && unk_0xC45A34912542C4EB(iVar12, 0))
							{
								unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
								unk_0x88A973CE47FBEF95(iVar12, Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
								unk_0x151F32CB40BE730C(iVar12, Local_402.f_29.f_77[1]);
								unk_0xC9CEB5227A733CE6(iVar12);
							}
						}
					}
					else
					{
						if (unk_0x47B2F09FC779F5CD(iLocal_636))
						{
							unk_0x57F365E25D632211(iLocal_636);
						}
						iLocal_636 = -1;
						unk_0xDE31B2587775EDAD(unk_0xE7869D5D7816A9B6());
						unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
						unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), Local_402.f_29.f_77[1]);
					}
					unk_0x7FB81B1DD14A3BE4(0f);
					unk_0x6EF372C057320AD4(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 14;
				}
				break;
			
			case 14:
				if (unk_0xAEF17BDE274A1247() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					bVar276 = true;
					if (iLocal_991)
					{
						unk_0x801429C020C467BA(iLocal_992);
						if (unk_0x5053BF6D5604065B(iLocal_992))
						{
							iVar277 = unk_0xD504D1FF5DD2FFD7(iLocal_992, Local_402.f_29.f_70[0 /*3*/], Local_402.f_29.f_77[0], 1, 1);
							if (iLocal_992 == joaat("windsor"))
							{
								unk_0xED6BC33BD669B45F(iVar277, 0);
							}
							if (unk_0xD51CFE69539DB6D8(iVar277) && unk_0xC45A34912542C4EB(iVar277, 0))
							{
								unk_0x0CC1C59D57D7212B(unk_0xE7869D5D7816A9B6(), iVar277, -1);
								unk_0xB4446F1B3498926D(iVar277, 0f);
								unk_0x839E9476E54502A2(iLocal_992);
								if (func_93(iLocal_992))
								{
									switch (iLocal_992)
									{
										case joaat("marshall"):
											unk_0xED6BC33BD669B45F(iVar277, iLocal_626);
											break;
										}
								}
								unk_0xC1F2137782A816E9(&iVar277);
							}
							iLocal_991 = 0;
						}
						else
						{
							bVar276 = false;
						}
					}
					if (!unk_0xC5E5B5BBBE4693F6())
					{
					}
					else if (unk_0xB1959BA5ECC2010F())
					{
					}
					else
					{
						bVar276 = false;
					}
					if (bVar276)
					{
						if (unk_0xD51CFE69539DB6D8(iLocal_1002) && unk_0xC45A34912542C4EB(iLocal_1002, 0))
						{
							iVar278 = func_28(24);
							if (func_179(&Local_751, 24))
							{
								func_174(&Local_751, func_319());
								if (unk_0xD51CFE69539DB6D8(iVar278))
								{
									unk_0x9E55BD45B84E7BDC(&iVar278);
								}
							}
							if (Local_402.f_0 == 21)
							{
								unk_0xB86B1248EA9B87EA(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
								unk_0x88A973CE47FBEF95(iLocal_1002, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
								unk_0x151F32CB40BE730C(iLocal_1002, 154.4846f);
								func_172(iLocal_1002, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_402.f_0 == 22)
							{
								unk_0xB86B1248EA9B87EA(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
								unk_0x88A973CE47FBEF95(iLocal_1002, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
								unk_0x151F32CB40BE730C(iLocal_1002, 319.6985f);
								func_172(iLocal_1002, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_402.f_0 == 23)
							{
								unk_0xB86B1248EA9B87EA(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
								unk_0x88A973CE47FBEF95(iLocal_1002, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
								unk_0x151F32CB40BE730C(iLocal_1002, 270.8741f);
								func_172(iLocal_1002, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							unk_0xC9CEB5227A733CE6(iLocal_1002);
						}
						if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
						{
							iVar12 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
							if (unk_0xD51CFE69539DB6D8(iVar12) && unk_0xC45A34912542C4EB(iVar12, 0))
							{
								unk_0x88A973CE47FBEF95(iVar12, Local_521.f_66[1 /*3*/], 1, 0, 0, 1);
								unk_0x151F32CB40BE730C(iVar12, Local_402.f_29.f_77[0]);
								unk_0xC9CEB5227A733CE6(iVar12);
								if ((iLocal_992 == joaat("monster") || iLocal_992 == joaat("marshall")) || iLocal_992 == joaat("rhino"))
								{
									unk_0xC0C7A9F655DB1456(iVar12, false);
								}
								else
								{
									unk_0xC0C7A9F655DB1456(iVar12, true);
								}
								if (unk_0x83A7252D14019A24(unk_0xE7869D5D7816A9B6()))
								{
									unk_0xF9333020973682B9(unk_0xE7869D5D7816A9B6(), 0, 0, -1);
									unk_0xDEDF1A35D80AE74D(unk_0xE7869D5D7816A9B6(), 1);
								}
								unk_0x955267F95DE8B488(iVar12, 1);
								func_148(func_319(), &iVar12, 3, 1);
							}
							unk_0x2D3BB3EF936C4B76(800);
							func_181(1, 1, 1, 0);
							func_180(&(Local_521[3 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
							iLocal_1009 = 0;
							iLocal_1011 = -1;
							Local_402.f_3 = 15;
						}
						else
						{
							unk_0x8B10CC9832827D27(sVar14);
							func_165();
							unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
							if (unk_0xCF686B56FD5328B5(Local_402.f_110))
							{
								unk_0x63498CF6CF35C6A2(Local_402.f_110, 0);
								unk_0x74FF6D08DE291367(Local_402.f_110, 0);
							}
							if (unk_0xCF686B56FD5328B5(Local_402.f_111))
							{
								unk_0x63498CF6CF35C6A2(Local_402.f_111, 0);
								unk_0x74FF6D08DE291367(Local_402.f_111, 0);
							}
							if (unk_0xD51CFE69539DB6D8(iLocal_1012))
							{
								unk_0x70EE8EFEE355AD29(iLocal_1012, 1, 0);
								unk_0x2878EC06B3F897A0(iLocal_1012, 0);
								iLocal_1012 = 0;
							}
							unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
							unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
							unk_0x6581912D0AD8605D(8);
							unk_0xDE31B2587775EDAD(unk_0xE7869D5D7816A9B6());
							unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
							unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), Local_402.f_29.f_77[1]);
							unk_0x2D3BB3EF936C4B76(800);
							unk_0xC1B1E9A034A63A62(0);
							func_168(198.0043f, -999.7775f, -100f, 50f, 0);
							unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
							Local_402.f_3 = 16;
						}
						if (Local_402.f_3 != 16)
						{
							unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
						}
						unk_0xE242D0D27B122FAC(0);
						unk_0xA8010B7497A9230B(0);
						unk_0xC1B1E9A034A63A62(0);
						unk_0x7FB81B1DD14A3BE4(0f);
						unk_0x6EF372C057320AD4(0f, 1065353216);
						iVar279 = unk_0x312FA2EB3948B47C(unk_0xE7869D5D7816A9B6(), &uVar0, -1);
						iVar280 = 0;
						while (iVar280 < iVar279)
						{
							if ((unk_0xD51CFE69539DB6D8(uVar0[iVar280]) && !unk_0xAF437D7C802AB246(uVar0[iVar280])) && unk_0xCA9354733F0AE57E(uVar0[iVar280], unk_0xF6138D85451616EC(unk_0x3F80C6638E3A1A90())))
							{
								if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
								{
									iVar12 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
									if ((unk_0xD51CFE69539DB6D8(iVar12) && unk_0xC45A34912542C4EB(iVar12, 0)) && unk_0x25ECA1DD55F6CB7F(iVar12) > iVar280)
									{
										unk_0x0CC1C59D57D7212B(uVar0[iVar280], iVar12, iVar280);
									}
								}
								else
								{
									unk_0x9CA89729A675E8FF(uVar0[iVar280], Local_402.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							iVar280++;
						}
						unk_0x6581912D0AD8605D(8);
						iLocal_1008 = 0;
					}
				}
				break;
			
			case 15:
				bVar281 = true;
				if (!unk_0xC5E5B5BBBE4693F6())
				{
				}
				else if (unk_0xB1959BA5ECC2010F())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (func_167())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (unk_0xCF686B56FD5328B5(Local_402.f_110) && unk_0x10F9FB82A0D63EA0(Local_402.f_110))
				{
					if (unk_0x10B8434FB64D5C3F(Local_402.f_110))
					{
						bVar281 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_521[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else if (unk_0xCF686B56FD5328B5(Local_402.f_111) && unk_0x10F9FB82A0D63EA0(Local_402.f_111))
				{
					if (unk_0x10B8434FB64D5C3F(Local_402.f_111))
					{
						bVar281 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_521[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else
				{
					bVar281 = false;
				}
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					func_157(unk_0xE7869D5D7816A9B6(), Local_521.f_86[1 /*6*/], Local_521.f_66[1 /*3*/], ((Local_521[3 /*15*/].f_14 * 1000f) - 500f), Local_521.f_73[2 /*4*/], 3, &fVar13);
				}
				if (iLocal_1011 < 1 && func_147(unk_0xE7869D5D7816A9B6(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_1011 == 0)
					{
						func_168(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_1011++;
				}
				if (bVar281)
				{
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 16;
				}
				else
				{
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
				}
				break;
			
			case 16:
				bVar282 = true;
				if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_521.f_61[3] * 1000f))
				{
					bVar282 = false;
				}
				if (bVar282)
				{
					Local_402.f_3 = 17;
				}
				break;
			
			case 17:
				if (unk_0x4443D8D533ACB547(Local_402.f_112))
				{
					unk_0xAA4BA243DE1874F4(Local_402.f_112);
				}
				StringCopy(&Global_32342, "", 32);
				if (unk_0xC5E5B5BBBE4693F6())
				{
					unk_0xEF1C0568E9BDCF78();
				}
				func_146(47, 1);
				func_144(47, 1);
				Global_68105.f_577 = 0;
				if (unk_0xAEF17BDE274A1247() || unk_0xA864A37DA392324A())
				{
					unk_0x2D3BB3EF936C4B76(250);
				}
				unk_0xC1B1E9A034A63A62(0);
				unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
				if (unk_0xCF686B56FD5328B5(Local_402.f_110))
				{
					unk_0x63498CF6CF35C6A2(Local_402.f_110, 0);
					unk_0x74FF6D08DE291367(Local_402.f_110, 0);
				}
				if (unk_0xCF686B56FD5328B5(Local_402.f_111))
				{
					unk_0x63498CF6CF35C6A2(Local_402.f_111, 0);
					unk_0x74FF6D08DE291367(Local_402.f_111, 0);
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_1012))
				{
					unk_0x70EE8EFEE355AD29(iLocal_1012, 1, 0);
					unk_0x2878EC06B3F897A0(iLocal_1012, 0);
					iLocal_1012 = 0;
				}
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					iVar12 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
					if (unk_0xD51CFE69539DB6D8(iVar12) && unk_0xC45A34912542C4EB(iVar12, 0))
					{
						unk_0x88A973CE47FBEF95(iVar12, Local_521.f_73[2 /*4*/], 1, 0, 0, 1);
						unk_0x151F32CB40BE730C(iVar12, Local_521.f_73[2 /*4*/].f_3);
						unk_0xC9CEB5227A733CE6(iVar12);
						unk_0x7FB81B1DD14A3BE4(0f);
						unk_0x6EF372C057320AD4(0f, 1065353216);
					}
				}
				unk_0xE242D0D27B122FAC(1);
				unk_0xA8010B7497A9230B(1);
				func_181(0, 1, 1, 0);
				unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
				if (iLocal_987 > 0)
				{
					unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), iLocal_987, 0);
					unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
				}
				if (((unk_0xD51CFE69539DB6D8(iLocal_1002) && unk_0x28D33422BA6C479D(iLocal_1002)) && unk_0x4C5CA989AEF3A14C(iLocal_1002, 0)) && iLocal_1002 != func_28(24))
				{
					unk_0xC1F2137782A816E9(&iLocal_1002);
				}
				unk_0x73817D396768E4C6(&(Local_649.f_9), 25);
				iLocal_1006 = 0;
				Local_402.f_3 = 18;
				break;
			
			case 18:
				if (unk_0xDE185266FE919B68())
				{
					Local_402.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_68105.f_577)
		{
			func_146(47, 1);
			func_144(47, 1);
			Global_68105.f_577 = 0;
		}
		Local_402.f_3 = 0;
		if (iLocal_631 != -1)
		{
			func_48(&iLocal_631);
		}
	}
	if (Global_68105.f_577)
	{
		unk_0x1EE35C3DA78BCD1B();
		func_143();
		func_55();
		unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), joaat("weapon_unarmed"), 1);
		unk_0x9F2D8D5B57CF6622(2, 202);
		unk_0x8CCCC48313B0F20F(0, 37, 1);
		unk_0x8CCCC48313B0F20F(0, 157, 1);
		unk_0x8CCCC48313B0F20F(0, 158, 1);
		unk_0x8CCCC48313B0F20F(0, 159, 1);
		unk_0x8CCCC48313B0F20F(0, 160, 1);
		unk_0x8CCCC48313B0F20F(0, 161, 1);
		unk_0x8CCCC48313B0F20F(0, 162, 1);
		unk_0x8CCCC48313B0F20F(0, 163, 1);
		unk_0x8CCCC48313B0F20F(0, 164, 1);
		unk_0x8CCCC48313B0F20F(0, 165, 1);
		unk_0x8CCCC48313B0F20F(0, 14, 1);
		unk_0x8CCCC48313B0F20F(0, 15, 1);
		unk_0x8CCCC48313B0F20F(0, 53, 1);
		unk_0x8CCCC48313B0F20F(0, 54, 1);
		unk_0x8CCCC48313B0F20F(0, 140, 1);
		unk_0x8CCCC48313B0F20F(0, 141, 1);
		unk_0x8CCCC48313B0F20F(0, 142, 1);
		unk_0x8CCCC48313B0F20F(0, 143, 1);
		unk_0x8CCCC48313B0F20F(0, 143, 1);
		unk_0x8CCCC48313B0F20F(0, 47, 1);
		unk_0x8CCCC48313B0F20F(0, 38, 1);
		unk_0x8CCCC48313B0F20F(0, 22, 1);
		unk_0x8CCCC48313B0F20F(0, 102, 1);
		unk_0x8CCCC48313B0F20F(0, 69, 1);
		unk_0x8CCCC48313B0F20F(0, 70, 1);
		unk_0x8CCCC48313B0F20F(0, 68, 1);
		unk_0x8CCCC48313B0F20F(0, 92, 1);
		unk_0x8CCCC48313B0F20F(0, 99, 1);
		unk_0x8CCCC48313B0F20F(0, 115, 1);
		unk_0x8CCCC48313B0F20F(0, 46, 1);
		unk_0x8CCCC48313B0F20F(0, 25, 1);
	}
	if (!bVar11 && Local_402.f_2 == 0)
	{
		if (unk_0x23741E39BEA32E66())
		{
			if (!unk_0xF6917DE0E003509D(&cLocal_998))
			{
				if ((((func_132("WEB_VEH_INV") || func_132("WEB_VEH_FULL")) || func_132("CAR_GAR_05")) || func_132("CAR_GAR_06")) || func_132("CAR_GAR_EXIT"))
				{
					unk_0x1D208E4A4E1D4FFE(1);
				}
				StringCopy(&cLocal_998, "", 16);
			}
		}
	}
}

void func_143()
{
	Global_17118.f_6 = 1;
}

void func_144(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_145(iParam0) };
	if (bParam1)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_31401[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_31401[Var0.f_1]), Var0.f_0);
	}
}

struct<2> func_145(var uParam0)
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
	while (iVar1 < 3)
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

void func_146(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_145(iParam0) };
	if (bParam1)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_31397[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_31397[Var0.f_1]), Var0.f_0);
	}
}

float func_147(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Param1, iParam4);
}

void func_148(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_8(iParam0) && unk_0xD51CFE69539DB6D8(*iParam1)) && unk_0xC45A34912542C4EB(*iParam1, 0))
	{
		if (iParam2 > Global_99155.f_1750.f_539.f_1635)
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
		if (unk_0xA9D3956F42AEC644(*iParam1) != 0)
		{
			unk_0x5DAB69BA0BF447FC(*iParam1, 0);
		}
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/] = unk_0x1B2DC87EFB36DF80(*iParam1);
		if (unk_0x3567DD6AFD1905FD(*iParam1, &iVar1))
		{
			Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x1B2DC87EFB36DF80(iVar1);
		}
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x883710067624C09C(*iParam1);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x8219941CC4732B36(*iParam1);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0xDF705551345526F6(*iParam1, 1);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0xDF705551345526F6(*iParam1, 2);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0xDF705551345526F6(*iParam1, 3);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0xDF705551345526F6(*iParam1, 4);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0xDF705551345526F6(*iParam1, 5);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0xDF705551345526F6(*iParam1, 6);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0xDF705551345526F6(*iParam1, 7);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0xDF705551345526F6(*iParam1, 8);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0xDF705551345526F6(*iParam1, 9);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0xDF705551345526F6(*iParam1, 10);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0xDF705551345526F6(*iParam1, 11);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0xDF705551345526F6(*iParam1, 12);
		if (unk_0x657F8DC28088EB36(*iParam1, 0))
		{
			iVar2 = unk_0x96616C6B22C7747D(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x7510FF7BD6BD3BAE();
		StringCopy(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0xC2421167AF5744AC(*iParam1), 16);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x0FD17058EC3E1147(*iParam1);
		unk_0x95C00B12C5FCA494(*iParam1, &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0xCFEF2B49C7ED1A18(*iParam1, &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x8062A8ED0C7F4651(*iParam1, &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x54AAF075A06F73AA(*iParam1);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x71D4F790860F6A5A(*iParam1);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x90DC8CCD4852ECAA(*iParam1);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x31211750BC54126F(*iParam1);
		unk_0x7C2F17D7A0663F15(*iParam1, &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x2C876F34337848DC(*iParam1, 2))
		{
			unk_0x9956FB0E4B50ECB8(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x2C876F34337848DC(*iParam1, 3))
		{
			unk_0x9956FB0E4B50ECB8(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x2C876F34337848DC(*iParam1, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x2C876F34337848DC(*iParam1, 1))
		{
			unk_0x9956FB0E4B50ECB8(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_99155.f_1750.f_539.f_3545[iParam0] = 10;
		if ((unk_0xEF4B592D4E2621FD(*iParam1) >= 0 && unk_0xEF4B592D4E2621FD(*iParam1) < 255) && func_151(*iParam1, 0, &uVar0))
		{
			func_17(iParam1, &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_99155.f_24567[iParam0 /*43*/].f_40 = 1;
				Global_99155.f_24567[iParam0 /*43*/] = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/];
				Global_99155.f_24567[iParam0 /*43*/].f_3 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_99155.f_24567[iParam0 /*43*/].f_4 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_99155.f_24567[iParam0 /*43*/].f_5 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_99155.f_24567[iParam0 /*43*/].f_6 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_99155.f_24567[iParam0 /*43*/].f_10 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_99155.f_24567[iParam0 /*43*/].f_16 = !Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_99155.f_24567[iParam0 /*43*/].f_19 = { Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_99155.f_24567[iParam0 /*43*/].f_23 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_99155.f_24567[iParam0 /*43*/].f_7 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_99155.f_24567[iParam0 /*43*/].f_8 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_99155.f_24567[iParam0 /*43*/].f_9 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_99155.f_24567[iParam0 /*43*/].f_11 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_99155.f_24567[iParam0 /*43*/].f_12 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_99155.f_24567[iParam0 /*43*/].f_13 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_99155.f_24567[iParam0 /*43*/].f_14 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_99155.f_24567[iParam0 /*43*/].f_15 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_99155.f_24567[iParam0 /*43*/].f_18 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_99155.f_24567[iParam0 /*43*/].f_17 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_99155.f_24567[iParam0 /*43*/].f_24 = unk_0xBAA70A4A1B1A59C8(*iParam1, 11) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_25 = unk_0xBAA70A4A1B1A59C8(*iParam1, 12) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_26 = unk_0xBAA70A4A1B1A59C8(*iParam1, 4) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_27 = unk_0xBAA70A4A1B1A59C8(*iParam1, 23) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_28 = unk_0xBAA70A4A1B1A59C8(*iParam1, 14) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_29 = unk_0xBAA70A4A1B1A59C8(*iParam1, 16) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_30 = unk_0xBAA70A4A1B1A59C8(*iParam1, 15) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_32 = unk_0x6B23426175DF351C(*iParam1);
				Global_99155.f_24567[iParam0 /*43*/].f_33[0] = unk_0x9B77521650BAC668(*iParam1);
				Global_99155.f_24567[iParam0 /*43*/].f_33[1] = unk_0x85D58F849AF83046(*iParam1, 14, 0);
				Global_99155.f_24567[iParam0 /*43*/].f_33[2] = unk_0x85D58F849AF83046(*iParam1, 14, 1);
				Global_99155.f_24567[iParam0 /*43*/].f_33[3] = unk_0x85D58F849AF83046(*iParam1, 14, 2);
				Global_99155.f_24567[iParam0 /*43*/].f_33[4] = unk_0x85D58F849AF83046(*iParam1, 14, 3);
				Global_99155.f_24567[iParam0 /*43*/].f_39 = unk_0xBD0E993059D2FD8E(*iParam1);
				Global_99155.f_24567[iParam0 /*43*/].f_31 = func_150(*iParam1);
				Global_99155.f_24567[iParam0 /*43*/].f_33[0] = unk_0xE8AAC222EFC3F41C(*iParam1);
				unk_0x18D188A2DF68996F(*iParam1, &iVar4, &uVar5, &uVar6);
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
				func_149(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_99155.f_24567[iParam0 /*43*/].f_1));
				unk_0xA60CA83C42E3C0B0(*iParam1, &iVar4, &uVar5);
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
				func_149(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_99155.f_24567[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_149(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_113(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
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

float func_150(int iParam0)
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
	if (((unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0)) && unk_0xEF4B592D4E2621FD(iParam0) >= 0) && unk_0xEF4B592D4E2621FD(iParam0) < 255)
	{
		if (unk_0xBD0E993059D2FD8E(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xBD0E993059D2FD8E(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xBD0E993059D2FD8E(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xBD0E993059D2FD8E(iParam0) == 0)
		{
			if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(iParam0)))
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

int func_151(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 0;
	}
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x6A3E3EA4770CE80A(unk_0x1B2DC87EFB36DF80(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x1B2DC87EFB36DF80(iParam0);
	if (!func_152(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (unk_0xF54ECC20AEF6A194(iParam0))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x00AAD79B42B3E036())
	{
		if ((func_41(iParam0) && unk_0x1B2DC87EFB36DF80(iParam0) != joaat("sentinel2")) && unk_0x1B2DC87EFB36DF80(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_152(int iParam0, bool bParam1, var uParam2)
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
	if (((!unk_0x3937C84F74FAABA4(iParam0) && !unk_0x07C6F7E084F6A97E(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3"))
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
	if (unk_0x00AAD79B42B3E036())
	{
		if (func_153(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x00AAD79B42B3E036())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_153(int iParam0)
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

int func_154()
{
	int iVar0;
	
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (unk_0xD51CFE69539DB6D8(iVar0) && unk_0xC45A34912542C4EB(iVar0, 0))
		{
			if (iVar0 == Global_68105.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_68105.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_68105.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_68105.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_68105.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_68105.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_68105.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_68105.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_68105.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_68105.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_68105.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_68105.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_155()
{
	return unk_0x9D40BBF80D8F5E8A() <= Global_17257.f_5666 + 100;
}

void func_156(int iParam0)
{
	if ((unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0)) && iParam0 == Global_69010)
	{
		Global_99155.f_18731.f_5588 = 0;
		Global_69010 = 0;
	}
}

int func_157(int iParam0, struct<4> Param1, var uParam5, var uParam6, struct<3> Param7, float fParam10, struct<4> Param11, int iParam15, float fParam16)
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
	if (iLocal_1008 == 0)
	{
		iVar12 = unk_0xF0295FF51F2D7803(uParam0, 0);
		iLocal_1012 = iVar12;
		unk_0x32C67B8F6CBD9B6A(iLocal_1012, 1);
		unk_0x18F90CF5D756C783(iLocal_1012, 1);
		unk_0xC9CEB5227A733CE6(iLocal_1012);
		unk_0xE9A614E9191BFB4A(iLocal_1012, 1, 1, 0);
		if (unk_0x83A7252D14019A24(iParam0))
		{
			unk_0xF9333020973682B9(iParam0, 0, 0, -1);
			unk_0xDEDF1A35D80AE74D(iParam0, 1);
		}
		Var13 = { unk_0x1141852D07400777(iLocal_1012, 1) };
		fLocal_1013 = (Var13.f_2 - Var0.f_2);
		unk_0x88A973CE47FBEF95(iLocal_1012, Var0 + Vector(-10f, 0f, 0f), 1, 0, 0, 1);
		if (unk_0xC45A34912542C4EB(iLocal_1012, 0))
		{
			unk_0x01A5F35B4016EFD8(iLocal_1012, 3);
		}
		iLocal_1014 = unk_0x9D40BBF80D8F5E8A();
		iLocal_1008 = 1;
	}
	if (iLocal_1008 == 1)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_1012) && unk_0xC45A34912542C4EB(iLocal_1012, 0))
		{
			fVar16 = unk_0xBBDA792448DB5A89(iLocal_1014);
			fVar17 = (fVar16 + fParam10);
			fVar18 = func_164(unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()), fVar16, fVar17);
			fVar18 = (fVar18 - fVar16);
			fVar18 = (fVar18 / fParam10);
			if (iParam15 == 1)
			{
				fVar18 = func_163(fVar18);
			}
			else if (iParam15 == 2)
			{
				fVar18 = func_162(fVar18);
			}
			else if (iParam15 == 3)
			{
				fVar18 = func_160(fVar18);
			}
			fVar18 = (fVar18 * fParam10);
			fVar18 = (fVar18 + fVar16);
			unk_0x8CCCC48313B0F20F(0, 72, 1);
			unk_0x9CA89729A675E8FF(iLocal_1012, func_158(Var0 + Vector(fLocal_1013, 0f, 0f), Var6 + Vector(fLocal_1013, 0f, 0f), fVar16, fVar17, fVar18), 0, 0, 1);
			if (iLocal_1009 && !unk_0x83A7252D14019A24(iParam0))
			{
				unk_0x11089405D5CD3FD2(iLocal_1012, func_158((0f - Var3.f_0), (0f - Var3.f_1), (Var3.f_2 + 180f), (0f - Var9.f_0), (0f - Var9.f_1), (Var9.f_2 + 180f), fVar16, fVar17, fVar18), 2, 1);
			}
			else
			{
				if (!unk_0xAF437D7C802AB246(iParam0))
				{
					if (unk_0x83A7252D14019A24(iParam0))
					{
						unk_0xC31A3F1982C7B12B(iParam0, 236, 1);
						unk_0xC31A3F1982C7B12B(iParam0, 309, 1);
					}
				}
				unk_0x11089405D5CD3FD2(iLocal_1012, func_158(Var3, Var9, fVar16, fVar17, fVar18), 2, 1);
			}
			unk_0x70EE8EFEE355AD29(iLocal_1012, 0, 0);
			unk_0x2878EC06B3F897A0(iLocal_1012, 1);
		}
		else
		{
			iLocal_1008 = 2;
			return 0;
		}
		if (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) > (unk_0xBBDA792448DB5A89(iLocal_1014) + fParam10) && unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) > ((unk_0xBBDA792448DB5A89(iLocal_1014) + fParam10) + 2600f))
		{
			iLocal_1008 = 2;
			return 0;
		}
	}
	if (iLocal_1008 == 2)
	{
		unk_0xC31A3F1982C7B12B(iParam0, 236, 0);
		unk_0xC31A3F1982C7B12B(iParam0, 309, 0);
		if (unk_0xD51CFE69539DB6D8(iLocal_1012))
		{
			if (!func_4(Param11, 0f, 0f, 0f, 0))
			{
				unk_0x88A973CE47FBEF95(iLocal_1012, Param11, 1, 0, 0, 1);
				unk_0x151F32CB40BE730C(iLocal_1012, Param11.f_3);
				unk_0xC9CEB5227A733CE6(iLocal_1012);
			}
			unk_0x70EE8EFEE355AD29(iLocal_1012, 1, 0);
			unk_0x2878EC06B3F897A0(iLocal_1012, 0);
			iLocal_1012 = 0;
		}
		if (unk_0x83A7252D14019A24(iParam0))
		{
			unk_0x60F73C5C71B102FE(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_158(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_159(Param0.f_0, Param3.f_0, fParam6, fParam7, fParam8), func_159(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_159(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_159(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_160(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = unk_0x0BADBFA3B172435F(func_161(((fParam0 * 3.141593f) * 0.5f)));
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

float func_161(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_162(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - unk_0xD0FFB162F40A139C(func_161(((fParam0 * 3.141593f) * 0.5f))));
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

float func_163(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - unk_0xD0FFB162F40A139C(func_161((fParam0 * 3.141593f)))));
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

float func_164(float fParam0, float fParam1, float fParam2)
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

void func_165()
{
	Global_68105.f_553 = 1;
	Global_68105.f_554 = 0;
}

void func_166(var uParam0)
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
		iLocal_117[iVar2] = Global_99155.f_18731.f_69[iVar1 /*78*/].f_66;
		if (iLocal_117[iVar2] != 0)
		{
			if (!unk_0xB519E5386FBF69E5(uLocal_48[iVar2], 2))
			{
				unk_0x801429C020C467BA(iLocal_117[iVar2]);
				unk_0x9956FB0E4B50ECB8(&(uLocal_48[iVar2]), 2);
				func_323(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_167()
{
	return !Global_68105.f_553;
}

void func_168(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_40(&(Global_68105.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xF18329472591CFE6(Param0, Global_68105.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_169(iVar0);
			}
		}
		iVar0++;
	}
}

void func_169(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_40(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0xC45A34912542C4EB(Global_68105.f_139[iParam0], 0))
				{
					if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Global_68105.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x20BB4B94CC6DDC9A(Global_68105.f_139[iParam0], 1, 1);
				unk_0x9E55BD45B84E7BDC(&(Global_68105.f_139[iParam0]));
			}
		}
		Global_68105[iParam0] = 1;
		if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_46(iParam0, 0)) && Global_69014.f_66 == 0) && Global_99155.f_18731.f_1958[Global_68105.f_555[0 /*21*/].f_14] != 0) && Global_99155.f_18731.f_1958[Global_68105.f_555[0 /*21*/].f_14] > 3) && (!func_170(0, Global_68105.f_555[0 /*21*/].f_12) || !func_170(1, Global_68105.f_555[0 /*21*/].f_12)))
			{
				func_91(&(Global_99155.f_18731.f_69[Global_68105.f_555[0 /*21*/].f_14 /*78*/]), &Global_69014);
				Global_69092 = Global_99155.f_18731.f_5591;
			}
			func_325(iParam0, 0);
		}
	}
}

int func_170(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_171(&(Global_99155.f_18731.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_21(Global_99155.f_18731.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66);
}

int func_171(var uParam0)
{
	return *uParam0;
}

void func_172(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[25]) && unk_0xC45A34912542C4EB(Global_68105.f_484[25], 0))
			{
				if (Global_68105.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xF54ECC20AEF6A194(iParam0) || unk_0x1B2DC87EFB36DF80(iParam0) == joaat("bus")) || unk_0x1B2DC87EFB36DF80(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_173(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_15(iParam0, &Var0);
		if (func_4(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x1141852D07400777(iParam0, 1) };
			fParam4 = unk_0x2CAFFCD9F5E16D2F(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892()) != joaat("vehicle_gen_controller"))
			{
				Global_69093 = unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892());
			}
		}
		func_90(iParam5, &Var0, Param1, fParam4, func_25(iParam0));
		func_13(iParam5, iParam0, 0);
	}
}

void func_173(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_92(iParam0);
	func_325(iParam0, 0);
}

int func_174(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_20(uParam0->f_66))
	{
		return 0;
	}
	if (unk_0xD51CFE69539DB6D8(Global_69011))
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
	if (!func_170(0, iParam1))
	{
		Global_99155.f_18731.f_5592[iVar0] = 0;
	}
	else if (!func_170(1, iParam1))
	{
		Global_99155.f_18731.f_5592[iVar0] = 1;
	}
	func_175(iParam1, unk_0x06724AA1519336EF(uParam0->f_66));
	func_91(uParam0, &(Global_99155.f_18731.f_5038[iVar0 /*157*/][Global_99155.f_18731.f_5592[iVar0] /*78*/]));
	Global_99155.f_18731.f_5592[iVar0]++;
	if (Global_99155.f_18731.f_5592[iVar0] >= func_171(&(Global_99155.f_18731.f_5038[iVar0 /*157*/])))
	{
		Global_99155.f_18731.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_90494[iVar0 /*98*/] == uParam0->f_66 && unk_0x04E7E853E31F41A3(&(Global_90494[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_90494[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_175(int iParam0, char* sParam1)
{
	if (!func_8(iParam0))
	{
		return;
	}
	if (!Global_99155.f_18731.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_176("IMPOUND_HELPM", sParam1, 2, unk_0x0ADD324BC46177EF(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_176("IMPOUND_HELPF", sParam1, 2, unk_0x0ADD324BC46177EF(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_176("IMPOUND_HELPT", sParam1, 2, unk_0x0ADD324BC46177EF(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_99155.f_18731.f_5596[iParam0] = 1;
	}
}

void func_176(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_177(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_177(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x04E7E853E31F41A3(sParam0, ""))
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
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0x04E7E853E31F41A3(&(Global_99155.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99155.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_8 = (unk_0x9D40BBF80D8F5E8A() + iParam3);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = ((unk_0x9D40BBF80D8F5E8A() + iParam3) + iParam4);
		}
		else
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_99155.f_24859.f_145++;
		func_178();
	}
}

void func_178()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_99155.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[0])
			{
				Global_99155.f_24859.f_146[0] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[1])
			{
				Global_99155.f_24859.f_146[1] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[2])
			{
				Global_99155.f_24859.f_146[2] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_179(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_40(&(Global_68105.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_91(&(Global_99155.f_18731.f_69[Global_68105.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

int func_180(var uParam0, var uParam1, var uParam2)
{
	if (unk_0xCF686B56FD5328B5(*uParam1))
	{
		unk_0x74FF6D08DE291367(*uParam1, 0);
	}
	if (unk_0xCF686B56FD5328B5(*uParam2))
	{
		unk_0x74FF6D08DE291367(*uParam2, 0);
	}
	*uParam1 = unk_0x01A00DEC76A48F14("DEFAULT_SCRIPTED_CAMERA", 0);
	*uParam2 = unk_0x01A00DEC76A48F14("DEFAULT_SCRIPTED_CAMERA", 0);
	if (unk_0xCF686B56FD5328B5(*uParam1) && unk_0xCF686B56FD5328B5(*uParam2))
	{
		unk_0x34F8B34A8E9D3B57(*uParam1, *uParam0);
		unk_0x3B330DB318EF2761(*uParam1, uParam0->f_3, 2);
		unk_0xD2E0A9EDD55F008D(*uParam1, uParam0->f_12);
		unk_0x34F8B34A8E9D3B57(*uParam2, uParam0->f_6);
		unk_0x3B330DB318EF2761(*uParam2, uParam0->f_6.f_3, 2);
		unk_0xD2E0A9EDD55F008D(*uParam2, uParam0->f_12);
		unk_0x657EEE601EEC4152(*uParam1, "HAND_SHAKE", uParam0->f_13);
		unk_0x657EEE601EEC4152(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			unk_0x7D333E815920766B(*uParam2, *uParam1, unk_0xF2DB717A73826179((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			unk_0x63498CF6CF35C6A2(*uParam1, 1);
		}
		unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_181(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xB14E3E3C57569BDB(unk_0x3F80C6638E3A1A90());
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 1);
		func_185(1);
		unk_0x86F04B1FEFFA59AF();
		unk_0x7D5D106C0BC41E4F();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xD6F17BA188A65E8F())
			{
				unk_0xDA09A6E60FE9645E(0);
			}
			if (!func_57())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_184(1, iParam3, iParam2, 0);
		Global_55584 = 1;
		Global_67890 = 1;
		Global_69234 = 1;
	}
	else
	{
		func_185(0);
		unk_0x77B6DFDC1F6D6D54();
		Global_55584 = 0;
		if (bParam1)
		{
			unk_0xDD8068D05776246D();
		}
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 0);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 0);
		func_184(0, iParam3, iParam2, 0);
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !func_182(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 0);
		}
		Global_69234 = 0;
	}
}

int func_182(int iParam0)
{
	if (func_69(iParam0, 0))
	{
		return 1;
	}
	if (func_183())
	{
		if (iParam0 == unk_0x3F80C6638E3A1A90())
		{
			return 1;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_183()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 3);
}

int func_184(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xE5021B3C1EC84FDE() != iParam0 && uParam2)
		{
			unk_0xA0DB703A9F74EAE8(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_185(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 13);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 13);
	}
}

int func_186(int iParam0)
{
	func_40(&(Global_68105.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_68105.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_187(26))
			{
				return 26;
			}
			if (!func_187(29))
			{
				return 29;
			}
			if (!func_187(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_68105.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_187(27))
			{
				return 27;
			}
			if (!func_187(30))
			{
				return 30;
			}
			if (!func_187(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_68105.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_187(28))
			{
				return 28;
			}
			if (!func_187(31))
			{
				return 31;
			}
			if (!func_187(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_187(int iParam0)
{
	return func_46(iParam0, 0);
}

void func_188(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_190(iParam0, &iVar1);
	if (!unk_0x04E7E853E31F41A3("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xA64060F94483AC55(iVar1))
			{
				return;
			}
			if (unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == iVar1)
			{
				func_144(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xA64060F94483AC55(iVar1))
			{
				return;
			}
			if (func_189(iParam0))
			{
				func_144(iParam0, 0);
			}
		}
		unk_0x908D2AD77DB8D584(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_189(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_145(iParam0) };
	if (unk_0xB519E5386FBF69E5(Global_31401[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

var func_190(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_191(iParam0) };
	*iParam1 = unk_0x41D9D981197E60A2(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_191(int iParam0)
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
			Var5 = { func_192(1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_192(2) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_192(3) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_192(4) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_192(5) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_192(6) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_192(7) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049108[34 /*1908*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_192(35) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_192(36) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_192(37) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_192(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_192(39) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_192(40) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_192(41) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_192(42) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_192(43) };
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
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_192(int iParam0)
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
	}
	return Var0;
}

void func_193(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_190(iParam0, &iVar1);
	if (!unk_0x04E7E853E31F41A3("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0x3333748CE8E25B18(iVar1))
		{
			if (unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == iVar1)
			{
				func_146(iParam0, 1);
				return;
			}
			unk_0xC6CDC44A5BF96314(iVar1, 1);
		}
		else if (!bParam1 && unk_0x3333748CE8E25B18(iVar1))
		{
			if (func_194(iParam0))
			{
				func_146(iParam0, 0);
			}
			unk_0xC6CDC44A5BF96314(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_194(iParam0))
			{
				func_146(iParam0, 0);
			}
		}
	}
}

int func_194(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_145(iParam0) };
	if (unk_0xB519E5386FBF69E5(Global_31397[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) || func_186(Local_402.f_0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_196(float fParam0, float fParam1, float fParam2)
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

int func_197(int iParam0)
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

int func_198(int iParam0, var uParam1)
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

int func_199()
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return Global_88836.f_44 == 1;
	}
	return 0;
}

void func_200()
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
	
	if ((((((unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) || func_10(0)) || func_10(3)) || func_10(2)) || func_10(4)) || func_10(14)) || !func_8(iLocal_647))
	{
		return;
	}
	if (!Global_67887)
	{
		if (Global_99155.f_18731.f_1982[iLocal_647 /*939*/].f_626[iLocal_830] != -15)
		{
			if (!Global_68105[Global_99155.f_18731.f_1982[iLocal_647 /*939*/].f_313[iLocal_830]])
			{
				if (func_251(func_29(), Global_99155.f_18731.f_1982[iLocal_647 /*939*/].f_626[iLocal_830]))
				{
					iVar0 = Global_99155.f_18731.f_1982[iLocal_647 /*939*/][iLocal_830];
					func_249(iVar0, iLocal_830, iLocal_647);
					func_40(&Var1, Global_99155.f_18731.f_1982[iLocal_647 /*939*/].f_313[iLocal_830]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_325(Global_99155.f_18731.f_1982[iLocal_647 /*939*/].f_313[iLocal_830], 1);
					}
					Global_99155.f_18731.f_1982[iLocal_647 /*939*/].f_626[iLocal_830] = -15;
				}
			}
		}
		iLocal_830++;
		if (iLocal_830 >= 312)
		{
			iLocal_830 = 0;
		}
	}
	if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) != Local_402.f_7 || Local_402.f_2 == 99)
	{
		if (Local_402.f_5 != -1)
		{
			func_48(&(Local_402.f_5));
		}
		if (Local_402.f_2 > 0)
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
		Local_402.f_7 = unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6());
		Local_402.f_5 = -1;
		Local_402.f_2 = 0;
		Local_402.f_4 = 0;
		if (bLocal_829)
		{
			if (unk_0x23741E39BEA32E66())
			{
				unk_0x1D208E4A4E1D4FFE(1);
			}
			unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
			if (unk_0xCF686B56FD5328B5(Local_402.f_110))
			{
				unk_0x63498CF6CF35C6A2(Local_402.f_110, 0);
				unk_0x74FF6D08DE291367(Local_402.f_110, 0);
			}
			if (unk_0xCF686B56FD5328B5(Local_402.f_111))
			{
				unk_0x63498CF6CF35C6A2(Local_402.f_111, 0);
				unk_0x74FF6D08DE291367(Local_402.f_111, 0);
			}
			unk_0x60365B5AF8BF1FFA(unk_0xE7869D5D7816A9B6(), 1, 0);
			unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 0);
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
				unk_0x4A4D78D8B7EB34C7(unk_0x3F80C6638E3A1A90(), 0);
			}
			iVar22 = unk_0xA0B1717D806F4901();
			if (unk_0xD51CFE69539DB6D8(iVar22) && unk_0xC45A34912542C4EB(iVar22, 0))
			{
				unk_0x60365B5AF8BF1FFA(iVar22, 1, 0);
				unk_0x2878EC06B3F897A0(iVar22, 0);
				if (unk_0x4C5CA989AEF3A14C(iVar22, 1))
				{
					unk_0xC1F2137782A816E9(&iVar22);
				}
			}
			iVar23 = 5000;
			iVar24 = unk_0x9D40BBF80D8F5E8A();
			while (!unk_0xBF8EC52DA32E9599() && (unk_0x9D40BBF80D8F5E8A() - iVar24) < iVar23)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (unk_0x4443D8D533ACB547(Local_402.f_112))
			{
				unk_0xAA4BA243DE1874F4(Local_402.f_112);
			}
			StringCopy(&Global_32342, "", 32);
			if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
			{
				func_193(47, 1);
				func_188(47, 1);
			}
			unk_0xEF1C0568E9BDCF78();
			unk_0x29697396B8AA6E4F();
			unk_0xE242D0D27B122FAC(1);
			unk_0xA8010B7497A9230B(1);
			func_181(0, 1, 1, 0);
			bLocal_829 = false;
			Global_25287 = 0;
		}
	}
	bVar25 = false;
	if ((((((((((((!bLocal_829 && !unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0)) || (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) && !Local_402.f_29.f_69)) || (!unk_0xD33337101FE7D2FE(unk_0xE7869D5D7816A9B6()) && !unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))) || (!bLocal_829 && func_46(Local_402.f_0, 5))) || (!bLocal_829 && unk_0x958B4351DD28B142(2, 199))) || (!bLocal_829 && unk_0xA57007F9A665F322())) || !func_247(0)) || unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0) || unk_0x2198CC96FD98B484(unk_0xE7869D5D7816A9B6())) || unk_0x69698327B40517CD(unk_0xE7869D5D7816A9B6())) || Global_25184) || (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && unk_0x4231F56FA5885AE9(unk_0xE7869D5D7816A9B6())))
	{
		if (Local_402.f_2 > 0 && Local_402.f_2 != 90)
		{
			iLocal_989 = 1;
			Local_402.f_2 = 99;
		}
		bVar25 = true;
	}
	fVar30 = 20f;
	iVar31 = 3;
	switch (Local_402.f_2)
	{
		case 0:
			if ((((Local_402.f_0 != -1 && func_46(Local_402.f_0, 0)) && !func_46(Local_402.f_0, 5)) && !bLocal_990) && !bVar25)
			{
				if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && !unk_0x23741E39BEA32E66())
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_01", 16);
					func_133(&(Local_402.f_5), 3, &cVar26, 0, 0, 0);
					Local_402.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_128(Local_402.f_5, 1))
			{
				if (func_246(iLocal_647) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = unk_0x9D40BBF80D8F5E8A();
					func_48(&(Local_402.f_5));
					iLocal_644 = 0;
					Local_402.f_2 = 90;
				}
				else
				{
					iLocal_644 = 0;
					Local_402.f_4 = unk_0x9D40BBF80D8F5E8A();
					func_48(&(Local_402.f_5));
					Local_402.f_2 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_644++;
			if (iLocal_644 >= 3)
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_02", 16);
				func_133(&(Local_402.f_5), 3, &cVar26, 0, 0, 0);
				Local_402.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_128(Local_402.f_5, 1))
			{
				if (func_246(iLocal_647) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = unk_0x9D40BBF80D8F5E8A();
					Local_402.f_2 = 90;
				}
				else
				{
					unk_0xCC18B241D266EF14(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 1);
					bLocal_829 = false;
					if ((Local_402.f_0 == 15 || Local_402.f_0 == 17) || Local_402.f_0 == 16)
					{
						Local_516.f_4 = 113;
						bLocal_829 = true;
					}
					else if (Local_402.f_0 == 18 || Local_402.f_0 == 19)
					{
						Local_516.f_4 = 115;
						bLocal_829 = true;
					}
					else if (Local_402.f_0 == 12 || Local_402.f_0 == 13)
					{
						Local_516.f_4 = 114;
						bLocal_829 = true;
					}
					else if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
					{
						Local_516.f_4 = 116;
						bLocal_829 = true;
					}
					Local_516.f_0 = unk_0xE3C796DC28BC3254("MIDSIZED_MESSAGE");
					Local_516.f_1 = 0;
					Local_516.f_3 = 0;
					Local_516.f_2 = 0;
					iLocal_831 = 1;
					Global_25287 = 1;
					if (bLocal_829)
					{
						if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
						{
							func_193(47, 0);
							func_188(47, 0);
							Local_402.f_112 = unk_0x41D9D981197E60A2(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (unk_0x4443D8D533ACB547(Local_402.f_112))
							{
								if (!unk_0x97ED7BE642158AAF(Local_402.f_112))
								{
									unk_0x3B150C65C40BD16E(Local_402.f_112);
								}
								StringCopy(&Global_32342, "v_garagem_sp", 32);
							}
						}
						unk_0xD30CBD7E69615F8C(unk_0x3F80C6638E3A1A90(), 1);
						unk_0xEF1C0568E9BDCF78();
						Local_402.f_4 = unk_0x9D40BBF80D8F5E8A();
						Local_402.f_2 = 4;
					}
					else
					{
						Local_402.f_2 = 8;
					}
					func_48(&(Local_402.f_5));
				}
			}
			break;
		
		case 4:
			bVar35 = true;
			if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
			{
				Local_402.f_112 = unk_0x41D9D981197E60A2(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!unk_0x4443D8D533ACB547(Local_402.f_112) || unk_0x3333748CE8E25B18(Local_402.f_112)) || unk_0xA64060F94483AC55(Local_402.f_112))
				{
					func_193(47, 0);
					func_188(47, 0);
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
					if (unk_0x3D81DBD4F6A29824(200.4651f, -1020.631f, -100f, 50f, 0) || (unk_0x9D40BBF80D8F5E8A() - Local_402.f_4) > 3500)
					{
						Local_402.f_4 = unk_0x9D40BBF80D8F5E8A();
						Local_402.f_2 = 5;
					}
				}
				else if (unk_0x858A5BA3FE354AC3(Local_402.f_29.f_14, Var32, fVar30, iVar31) || (unk_0x9D40BBF80D8F5E8A() - Local_402.f_4) > 3500)
				{
					Local_402.f_4 = unk_0x9D40BBF80D8F5E8A();
					Local_402.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((unk_0xC5E5B5BBBE4693F6() && unk_0xB1959BA5ECC2010F()) && (!unk_0x4443D8D533ACB547(Local_402.f_112) || unk_0x97ED7BE642158AAF(Local_402.f_112))) || (unk_0x9D40BBF80D8F5E8A() - Local_402.f_4) > 10000)
			{
				Local_402.f_4 = unk_0x9D40BBF80D8F5E8A();
				Local_402.f_2 = 6;
			}
			break;
		
		case 6:
			if ((unk_0x9D40BBF80D8F5E8A() - Local_402.f_4) > 1000)
			{
				if ((unk_0xD51CFE69539DB6D8(iLocal_1002) && unk_0x28D33422BA6C479D(iLocal_1002)) && unk_0x4C5CA989AEF3A14C(iLocal_1002, 1))
				{
					unk_0xC1F2137782A816E9(&iLocal_1002);
				}
				iLocal_1002 = unk_0xA0B1717D806F4901();
				if ((((unk_0xD51CFE69539DB6D8(iLocal_1002) && unk_0xC45A34912542C4EB(iLocal_1002, 0)) && !unk_0xFFD2CE10E8C7E77F(unk_0x1B2DC87EFB36DF80(iLocal_1002))) && !unk_0xD1C57B32C6DE7BB6(unk_0x1B2DC87EFB36DF80(iLocal_1002))) && !unk_0xAA65D1F2BF4AAFFB(unk_0x1B2DC87EFB36DF80(iLocal_1002)))
				{
					if (!unk_0x28D33422BA6C479D(iLocal_1002))
					{
						unk_0x20BB4B94CC6DDC9A(iLocal_1002, 0, 0);
					}
				}
				else
				{
					iLocal_1002 = 0;
				}
				unk_0x60365B5AF8BF1FFA(unk_0xE7869D5D7816A9B6(), 0, 0);
				if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 1);
				}
				if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
				{
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 16);
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 32);
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 128);
					unk_0x4A4D78D8B7EB34C7(unk_0x3F80C6638E3A1A90(), 1);
				}
				func_181(1, 1, 1, 0);
				unk_0x00400F14096FE01D();
				unk_0x1D208E4A4E1D4FFE(1);
				Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_14.f_3.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_402.f_29.f_69)
				{
					unk_0x239ABB365A174277(Local_402.f_29.f_14, Var32);
				}
				if (!unk_0xCF686B56FD5328B5(Local_402.f_110))
				{
					Local_402.f_110 = unk_0x01A00DEC76A48F14("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				if (unk_0xCF686B56FD5328B5(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						unk_0x40974B149DE65C3B("GtaMloRoom001");
					}
					func_181(1, 1, 1, 0);
					func_180(&(Local_402.f_29.f_14), &(Local_402.f_110), &(Local_402.f_111));
				}
				unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
				unk_0xE242D0D27B122FAC(0);
				unk_0xA8010B7497A9230B(0);
				unk_0xEF1C0568E9BDCF78();
				Local_402.f_2 = 7;
				Local_402.f_4 = unk_0x9D40BBF80D8F5E8A();
				func_48(&(Local_402.f_5));
			}
			break;
		
		case 7:
			if ((unk_0x9D40BBF80D8F5E8A() - Local_402.f_4) < 7000 && !func_244(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_05", 16);
				func_131(&cVar26, -1);
				if (!unk_0xC5E5B5BBBE4693F6())
				{
					if (Local_402.f_0 == 12 || Local_402.f_0 == 13)
					{
						fVar30 = 85f;
						iVar31 = 2;
					}
					Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_29.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_29.f_2 + 90f)), 0f };
					unk_0x858A5BA3FE354AC3(Local_402.f_29.f_29, Var32, fVar30, iVar31);
				}
			}
			else
			{
				if (unk_0xCF686B56FD5328B5(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						unk_0x40974B149DE65C3B("GtaMloRoom001");
					}
					func_181(1, 1, 1, 0);
					func_180(&(Local_402.f_29.f_29), &(Local_402.f_110), &(Local_402.f_111));
				}
				unk_0x29697396B8AA6E4F();
				unk_0x1D208E4A4E1D4FFE(1);
				Local_402.f_4 = unk_0x9D40BBF80D8F5E8A();
				Local_402.f_2 = 8;
			}
			break;
		
		case 8:
			if ((unk_0x9D40BBF80D8F5E8A() - Local_402.f_4) < 7000 && !func_244(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_06", 16);
				if (!unk_0x23741E39BEA32E66())
				{
					func_131(&cVar26, 7000);
				}
			}
			else
			{
				unk_0x1D208E4A4E1D4FFE(1);
				Local_402.f_4 = unk_0x9D40BBF80D8F5E8A();
				Local_402.f_2 = 9;
			}
			break;
		
		case 9:
			if ((unk_0x9D40BBF80D8F5E8A() - Local_402.f_4) < 3500 && !func_244(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_03", 16);
				if (unk_0x4A4851D44CDF03C0(Local_516.f_0))
				{
					if (Local_516.f_1)
					{
						if (!Local_516.f_3)
						{
							unk_0xCC18B241D266EF14(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
							Local_516.f_3 = 1;
						}
						unk_0xE2B331FD5EEF4684(Local_516.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xA4F3B84032D46C13(Local_516.f_0, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_67(&cVar26);
						unk_0x96E794F94B35432F();
						Local_516.f_1 = 1;
					}
				}
			}
			else if ((unk_0x9D40BBF80D8F5E8A() - Local_402.f_4) < 4000 && !func_244(1000))
			{
				if (unk_0x4A4851D44CDF03C0(Local_516.f_0))
				{
					if (Local_516.f_2)
					{
						unk_0xE2B331FD5EEF4684(Local_516.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xA4F3B84032D46C13(Local_516.f_0, "SHARD_ANIM_OUT");
						unk_0x43C93E686A1E92C5(1);
						unk_0x73B039A1CD485226(0.33f);
						unk_0xFF141057ED7B4C73();
						Local_516.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_829)
				{
					unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
					if (unk_0xCF686B56FD5328B5(Local_402.f_110))
					{
						unk_0x63498CF6CF35C6A2(Local_402.f_110, 0);
						unk_0x74FF6D08DE291367(Local_402.f_110, 0);
					}
					if (unk_0xCF686B56FD5328B5(Local_402.f_111))
					{
						unk_0x63498CF6CF35C6A2(Local_402.f_111, 0);
						unk_0x74FF6D08DE291367(Local_402.f_111, 0);
					}
					unk_0x7FB81B1DD14A3BE4(0f);
					unk_0x6EF372C057320AD4(0f, 1065353216);
					unk_0x60365B5AF8BF1FFA(unk_0xE7869D5D7816A9B6(), 1, 0);
					unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 0);
					iVar36 = unk_0xA0B1717D806F4901();
					if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
					{
						unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
						unk_0x4A4D78D8B7EB34C7(unk_0x3F80C6638E3A1A90(), 0);
						if ((unk_0xD51CFE69539DB6D8(iVar36) && unk_0xC45A34912542C4EB(iVar36, 0)) && unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iVar36, 0))
						{
							unk_0x88A973CE47FBEF95(iVar36, Local_402.f_29.f_44, 1, 1, 0, 1);
							unk_0x151F32CB40BE730C(iVar36, Local_402.f_29.f_47);
							unk_0xC9CEB5227A733CE6(iVar36);
						}
						else
						{
							unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), Local_402.f_29.f_44, 1, 1, 0, 1);
							unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), Local_402.f_29.f_47);
						}
					}
					if (unk_0xD51CFE69539DB6D8(iLocal_1002) && unk_0xC45A34912542C4EB(iLocal_1002, 0))
					{
						iVar37 = func_28(24);
						if (func_179(&Local_751, 24))
						{
							func_174(&Local_751, func_319());
							if (unk_0xD51CFE69539DB6D8(iVar37))
							{
								unk_0x9E55BD45B84E7BDC(&iVar37);
							}
						}
						if (Local_402.f_0 == 21)
						{
							unk_0xB86B1248EA9B87EA(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
							unk_0x88A973CE47FBEF95(iLocal_1002, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
							unk_0x151F32CB40BE730C(iLocal_1002, 154.4846f);
							func_172(iLocal_1002, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_402.f_0 == 22)
						{
							unk_0xB86B1248EA9B87EA(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
							unk_0x88A973CE47FBEF95(iLocal_1002, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
							unk_0x151F32CB40BE730C(iLocal_1002, 319.6985f);
							func_172(iLocal_1002, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_402.f_0 == 23)
						{
							unk_0xB86B1248EA9B87EA(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
							unk_0x88A973CE47FBEF95(iLocal_1002, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
							unk_0x151F32CB40BE730C(iLocal_1002, 270.8741f);
							func_172(iLocal_1002, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						unk_0xC9CEB5227A733CE6(iLocal_1002);
					}
					if (unk_0xD51CFE69539DB6D8(iVar36) && unk_0xC45A34912542C4EB(iVar36, 0))
					{
						unk_0x60365B5AF8BF1FFA(iVar36, 1, 0);
						unk_0x2878EC06B3F897A0(iVar36, 0);
						if (unk_0x4C5CA989AEF3A14C(iVar36, 1))
						{
							unk_0xC1F2137782A816E9(&iVar36);
						}
					}
					iVar38 = 5000;
					iVar39 = unk_0x9D40BBF80D8F5E8A();
					while (!unk_0xBF8EC52DA32E9599() && (unk_0x9D40BBF80D8F5E8A() - iVar39) < iVar38)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (unk_0x4443D8D533ACB547(Local_402.f_112))
					{
						unk_0xAA4BA243DE1874F4(Local_402.f_112);
					}
					StringCopy(&Global_32342, "", 32);
					if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
					{
						func_193(47, 1);
						func_188(47, 1);
						Global_99155.f_18731.f_4800 = 1;
					}
					unk_0xEF1C0568E9BDCF78();
					unk_0x29697396B8AA6E4F();
					unk_0xE242D0D27B122FAC(1);
					unk_0xA8010B7497A9230B(1);
					func_181(0, 1, 1, 0);
					bLocal_829 = false;
					Global_25287 = 0;
				}
				if (unk_0x4A4851D44CDF03C0(Local_516.f_0))
				{
					unk_0x8A86A209B0F0AF7D(&Local_516);
				}
				func_217(iLocal_647, Local_516.f_4, Local_402.f_29.f_67);
				func_216(Local_402.f_0, 5, 1);
				func_203(Local_402.f_0);
				if (unk_0xD11595488376CB53(Global_68105.f_208[Local_402.f_0]))
				{
					unk_0x5B62CAB9B0D6ABF1(&(Global_68105.f_208[Local_402.f_0]));
				}
				iLocal_915 = Local_402.f_0;
				func_202();
				Local_402.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_644++;
			if (iLocal_644 >= 3)
			{
				if ((unk_0x9D40BBF80D8F5E8A() - Local_402.f_4) < 4000)
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_04", 16);
					func_201(&cVar26);
				}
				else
				{
					Local_402.f_2 = 99;
				}
			}
			break;
	}
}

void func_201(char[4] cParam0)
{
	unk_0xCAFBB15049416379(cParam0);
	unk_0x7CBFB87C647743C3(0, 1, 1, -1);
}

int func_202()
{
	if (func_141(0))
	{
		return 0;
	}
	if (Global_91064.f_8)
	{
		if (Global_91064.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91064.f_10 > 1)
	{
		return 0;
	}
	Global_91064.f_10 = (Global_91064.f_10 + 1);
	return 1;
}

void func_203(int iParam0)
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
	func_215(iVar0, 0);
	iVar2 = func_214(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_213(iVar0);
		if (func_211(iVar0, iVar1, 1))
		{
			func_204(iVar0);
			func_213(iVar0);
		}
	}
}

void func_204(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_210(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45982[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_45982[iVar0 /*203*/].f_9 - 1);
	if (!Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_209(Global_36682[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
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
		func_205(1, Global_36682[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_36682[iVar1 /*12*/].f_3)
		{
			case 0:
				func_205(0, Global_36682[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_205(1, Global_36682[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_205(2, Global_36682[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_205(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x2DFE588AA3727FE3())
	{
		return;
	}
	iVar0 = func_319();
	bVar1 = false;
	StringCopy(&cVar2, func_208(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x4A4F36C4EFDE341F("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x4A4F36C4EFDE341F("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x4A4F36C4EFDE341F("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x4A4F36C4EFDE341F(sParam3);
				if (!unk_0xF6917DE0E003509D(sParam4))
				{
					unk_0x9359E7CC54335EB9(sParam4);
				}
				if (!unk_0xF6917DE0E003509D(sParam5))
				{
					unk_0x9359E7CC54335EB9(sParam5);
				}
				if (!unk_0xF6917DE0E003509D(sParam6))
				{
					unk_0x9359E7CC54335EB9(sParam6);
				}
				if (!unk_0xF6917DE0E003509D(sParam7))
				{
					unk_0x9359E7CC54335EB9(sParam7);
				}
				if (!unk_0xF6917DE0E003509D(sParam8))
				{
					unk_0x9359E7CC54335EB9(sParam8);
				}
				if (!unk_0xF6917DE0E003509D(sParam9))
				{
					unk_0x9359E7CC54335EB9(sParam9);
				}
				if (!unk_0xF6917DE0E003509D(sParam10))
				{
					unk_0x9359E7CC54335EB9(sParam10);
				}
				if (!unk_0xF6917DE0E003509D(sParam11))
				{
					unk_0x9359E7CC54335EB9(sParam11);
				}
				if (!unk_0xF6917DE0E003509D(sParam12))
				{
					unk_0x9359E7CC54335EB9(sParam12);
				}
				if (!unk_0xF6917DE0E003509D(sParam13))
				{
					unk_0x9359E7CC54335EB9(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_206(unk_0x77AD0392EB2D45CC(&cVar2, &cVar2, 0, 2, unk_0xC083A2D1EE1A4BFF(func_207(iParam1)), 0));
		}
		else
		{
			func_206(unk_0x77AD0392EB2D45CC("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xC083A2D1EE1A4BFF(func_207(iParam1)), 0));
		}
		switch (Global_14413)
		{
			case 0:
				StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
				Global_36674++;
				if (Global_36674 > 16)
				{
					Global_36674 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
				Global_36676++;
				if (Global_36676 > 16)
				{
					Global_36676 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
				Global_36675++;
				if (Global_36675 > 16)
				{
					Global_36675 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xCC18B241D266EF14(-1, "Notification", &Global_14402, 1);
	}
}

void func_206(var uParam0)
{
	Global_36677[Global_36681] = uParam0;
	Global_16770 = 1;
	Global_16769 = uParam0;
	Global_36681++;
	if (Global_36681 == 3)
	{
		Global_36681 = 0;
	}
}

char* func_207(int iParam0)
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

char* func_208(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[0 /*29*/].f_7));
		
		case 1:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[1 /*29*/].f_7));
		
		case 2:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[2 /*29*/].f_7));
		
		case 7:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[12 /*29*/].f_7));
		
		case 4:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[60 /*29*/].f_7));
		
		case 6:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[62 /*29*/].f_7));
		
		case 3:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[14 /*29*/].f_7));
		
		case 16:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[97 /*29*/].f_7));
		
		case 19:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[99 /*29*/].f_7));
		
		case 15:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[96 /*29*/].f_7));
		
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
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[15 /*29*/].f_7));
		
		case 26:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[30 /*29*/].f_7));
		
		case 27:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[17 /*29*/].f_7));
		
		case 29:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[20 /*29*/].f_7));
		
		case 30:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[43 /*29*/].f_7));
		
		case 31:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[44 /*29*/].f_7));
		
		case 32:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[19 /*29*/].f_7));
		
		case 34:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[40 /*29*/].f_7));
		
		case 36:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[22 /*29*/].f_7));
		
		case 38:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[64 /*29*/].f_7));
		
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
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[122 /*29*/].f_7));
		
		case 40:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[125 /*29*/].f_7));
		
		case 41:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[113 /*29*/].f_7));
		
		case 42:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[126 /*29*/].f_7));
		
		case 43:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[127 /*29*/].f_7));
		
		case 44:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[124 /*29*/].f_7));
		
		case 45:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[114 /*29*/].f_7));
		
		case 46:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[115 /*29*/].f_7));
		
		case 47:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[116 /*29*/].f_7));
		
		case 48:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[123 /*29*/].f_7));
		
		case 49:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[117 /*29*/].f_7));
		
		case 50:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[118 /*29*/].f_7));
		
		case 51:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[119 /*29*/].f_7));
		
		case 52:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[120 /*29*/].f_7));
		
		case 53:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_209(int iParam0)
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

int func_210(int iParam0)
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
		if (Global_45982[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_45982[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_45982[iVar0 /*203*/].f_1;
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

int func_211(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_215(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_45982[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_45982[iVar0 /*203*/].f_2 = iParam0;
	Global_45982[iVar0 /*203*/].f_10[Global_45982[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_45982[iVar0 /*203*/].f_10[Global_45982[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_45982[iVar0 /*203*/].f_10[Global_45982[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_45982[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45982[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45982[iVar0 /*203*/].f_4[iVar1] == Global_36682[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45982[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45982[iVar0 /*203*/].f_4[Global_45982[iVar0 /*203*/].f_3] = Global_36682[iParam1 /*12*/].f_3;
			Global_45982[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45982[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45982[iVar0 /*203*/].f_4[iVar1] == Global_36682[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45982[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45982[iVar0 /*203*/].f_4[Global_45982[iVar0 /*203*/].f_3] = Global_36682[iParam1 /*12*/].f_2;
			Global_45982[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_45982[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_45982[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_212(Global_45982[iVar0 /*203*/].f_4[iVar1], Global_45982[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_212(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iVar19 = (Global_40007[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_40007[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_209(Global_36682[iVar20 /*12*/].f_1) };
		if (Global_36682[iVar20 /*12*/].f_2 == iParam0 && !Global_36682[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_36682[iVar20 /*12*/].f_2;
		iVar0 = Global_45620[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_45620[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36674 = (Global_36674 - 1);
						if (Global_36674 < 0)
						{
							Global_36674 = 0;
						}
						break;
					
					case 1:
						Global_36675 = (Global_36675 - 1);
						if (Global_36675 < 0)
						{
							Global_36675 = 0;
						}
						break;
					
					case 2:
						Global_36676 = (Global_36676 - 1);
						if (Global_36676 < 0)
						{
							Global_36676 = 0;
						}
						break;
					}
				}
		}
		Global_45620[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45620[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45620[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45620[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45620[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45620[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45620[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_45620[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36674 = (Global_36674 - 1);
						if (Global_36674 < 0)
						{
							Global_36674 = 0;
						}
						break;
					
					case 1:
						Global_36675 = (Global_36675 - 1);
						if (Global_36675 < 0)
						{
							Global_36675 = 0;
						}
						break;
					
					case 2:
						Global_36676 = (Global_36676 - 1);
						if (Global_36676 < 0)
						{
							Global_36676 = 0;
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
			if (Global_45982[iVar24 /*203*/].f_1 == iParam1 && Global_45982[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45620[iParam0 /*120*/].f_18[iVar0] = Global_45982[iVar23 /*203*/].f_1;
		Global_45620[iParam0 /*120*/].f_1[iVar0] = (Global_45982[iVar23 /*203*/].f_9 - 1);
		Global_45620[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45620[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45620[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45620[iParam0 /*120*/]++;
		iVar25 = Global_45620[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_45982[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_36682[iVar26 /*12*/].f_2;
		if (Global_45982[iVar23 /*203*/].f_10[(Global_45982[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_45982[iVar23 /*203*/].f_10[(Global_45982[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_209(Global_36682[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_45620[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_205(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_205(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_205(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_205(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_213(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0xB519E5386FBF69E5(Global_99155.f_29435, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_210(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_45982[iVar0 /*203*/] = 0;
}

int func_214(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_47404 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45982[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_45982[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_45982[iVar1 /*203*/].f_1;
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
		if (Global_47405[iVar1 /*53*/].f_52 == 0)
		{
			Global_47405[iVar1 /*53*/].f_52 = iVar0;
			Global_47405[iVar1 /*53*/] = iParam0;
			Global_47405[iVar1 /*53*/].f_1 = iParam1;
			Global_47405[iVar1 /*53*/].f_2 = iParam2;
			Global_99155.f_25486.f_310++;
			if (Global_99155.f_25486.f_310 == 0)
			{
				Global_99155.f_25486.f_310 = 1;
			}
			Global_47405[iVar1 /*53*/].f_10 = 0;
			Global_47405[iVar1 /*53*/].f_3 = Global_99155.f_25486.f_310;
			Global_47405[iVar1 /*53*/].f_4 = 1;
			Global_47404++;
			return Global_47405[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_215(int iParam0, bool bParam1)
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
	
	iVar0 = func_210(iParam0);
	if (iVar0 > -1)
	{
		if (Global_45982[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45982[iVar1 /*203*/] == 0)
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
		if (Global_45982[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_45982[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_45982[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_45982[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_45982[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_45982[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45620[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45620[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45620[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45620[iVar6 /*120*/].f_18[iVar8] == Global_45982[iVar4 /*203*/].f_1)
							{
								if (Global_45620[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36674 = (Global_36674 - 1);
											break;
										
										case 1:
											Global_36675 = (Global_36675 - 1);
											break;
										
										case 2:
											Global_36676 = (Global_36676 - 1);
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
	Global_45982[iVar4 /*203*/].f_2 = iParam0;
	Global_45982[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_45982[iVar4 /*203*/] = 1;
	}
	Global_99155.f_25486.f_310++;
	if (Global_99155.f_25486.f_310 == 0)
	{
		Global_99155.f_25486.f_310 = 1;
	}
	Global_45982[iVar4 /*203*/].f_1 = Global_99155.f_25486.f_310;
	Global_45982[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_216(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_99155.f_18731[iParam0]), iParam1);
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_99155.f_18731[iParam0]), iParam1);
	}
}

int func_217(int iParam0, int iParam1, int iParam2)
{
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_218(Global_99155.f_32499[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_218(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_243();
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
					func_242(99, 1);
					func_241(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_241(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_241(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_226(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_225(5))
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
							func_241(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_241(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_241(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_225(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_241(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_241(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_241(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_241(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_241(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_241(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_241(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_241(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_241(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x87F8C006AA576A39())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_241(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_241(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_241(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_241(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_241(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_241(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_225(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_241(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_241(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_241(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_241(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_241(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_241(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_224(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_242(95, iParam3);
					break;
				
				case 1:
					func_242(97, iParam3);
					break;
				
				case 2:
					func_242(96, iParam3);
					break;
			}
			func_242(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_221(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_221(iVar1);
	}
	iVar5 = (Global_52753[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52753[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52753[iVar2] = 2147483647;
				}
				else
				{
					Global_52753[iVar2] = (Global_52753[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_241(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_241(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_241(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52753[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52753[iVar2];
			Global_52753[iVar2] = (Global_52753[iVar2] - iParam3);
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
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_99155.f_25013.f_233[iVar2 /*69*/]++;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_220(iParam0);
	if (Global_35619 == 15)
	{
		func_219(0);
	}
	return 1;
}

void func_219(bool bParam0)
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
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52761[iVar0 /*3*/][0] = Global_99155.f_25013[iVar0];
		Global_52761.f_31[iVar0 /*3*/][0] = Global_99155.f_25013.f_11[iVar0];
		Global_52761.f_62[iVar0 /*3*/][0] = Global_99155.f_25013.f_22[iVar0];
		Global_52761.f_93[iVar0 /*3*/][0] = Global_99155.f_25013.f_33[iVar0];
		Global_52761.f_124[iVar0 /*3*/][0] = Global_99155.f_25013.f_44[iVar0];
		Global_52761.f_155[iVar0 /*3*/][0] = Global_99155.f_25013.f_55[iVar0];
		Global_52761.f_186[iVar0 /*3*/][0] = Global_99155.f_25013.f_66[iVar0];
		Global_52761.f_217[iVar0 /*3*/][0] = Global_99155.f_25013.f_77[iVar0];
		Global_52761.f_248[iVar0 /*3*/][0] = Global_99155.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52761[iVar0 /*3*/][1] = Global_99155.f_25013[iVar0];
			Global_52761.f_31[iVar0 /*3*/][1] = Global_99155.f_25013.f_11[iVar0];
			Global_52761.f_62[iVar0 /*3*/][1] = Global_99155.f_25013.f_22[iVar0];
			Global_52761.f_93[iVar0 /*3*/][1] = Global_99155.f_25013.f_33[iVar0];
			Global_52761.f_124[iVar0 /*3*/][1] = Global_99155.f_25013.f_44[iVar0];
			Global_52761.f_155[iVar0 /*3*/][1] = Global_99155.f_25013.f_55[iVar0];
			Global_52761.f_186[iVar0 /*3*/][1] = Global_99155.f_25013.f_66[iVar0];
			Global_52761.f_217[iVar0 /*3*/][1] = Global_99155.f_25013.f_77[iVar0];
			Global_52761.f_248[iVar0 /*3*/][1] = Global_99155.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52753[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x39DEDCCD70293F58(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x39DEDCCD70293F58(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x39DEDCCD70293F58(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_221(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x00AAD79B42B3E036())
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x73817D396768E4C6(&(Global_99155.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0) || unk_0xB519E5386FBF69E5(Global_2097152[func_223() /*10169*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x73817D396768E4C6(&(Global_99155.f_25013.f_471), iParam0);
		unk_0x73817D396768E4C6(&(Global_2097152[func_223() /*10169*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x4A4F36C4EFDE341F("COUP_RED");
		unk_0x9359E7CC54335EB9(func_222(iParam0));
		unk_0x77AD0392EB2D45CC(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_222(int iParam0)
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

int func_223()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_224(int iParam0)
{
	func_242(93, iParam0);
	func_242(29, iParam0);
	func_242(30, iParam0);
}

bool func_225(int iParam0)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0);
	}
	return unk_0xB519E5386FBF69E5(Global_2097152[func_223() /*10169*/].f_7698.f_10, iParam0);
}

int func_226(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x1F0D90C2E3B3876D(27))
	{
		return 0;
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x56DCF5665F92F9BD(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x39DEDCCD70293F58(joaat("num_cash_spent"), iVar1, 1);
		func_240(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_227(27, 1);
	return 1;
}

int func_227(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_228(iParam0, iParam1);
}

int func_228(int iParam0, int iParam1)
{
	if (func_10(14) && !func_239(iParam0))
	{
		return 0;
	}
	if (unk_0x1F0D90C2E3B3876D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25280 != 0 && !Global_69236)
	{
		return 0;
	}
	if (func_238(&Global_2558814))
	{
		if (func_236(&Global_2558814, iParam0))
		{
			return 0;
		}
		if (func_229(&Global_2558814, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x870B558D3473ADCD(iParam0))
		{
			return 0;
		}
		if (unk_0x1F0D90C2E3B3876D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_229(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_10(14) && !func_239(iParam1))
	{
		return 0;
	}
	if (func_236(uParam0, iParam1))
	{
		return 0;
	}
	if (func_235(uParam0) < 0f)
	{
		func_234(uParam0, 0);
	}
	func_232(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_230(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_230(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_10(14) && !func_239(iParam1))
	{
		return 0;
	}
	if (func_236(uParam0, iParam1))
	{
		return 0;
	}
	if (func_235(uParam0) < 0f)
	{
		func_234(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_231(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_231(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_232(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_233(uParam0, iVar0);
		iVar0++;
	}
	func_234(uParam0, (Global_2558813 - 0.5f));
}

void func_233(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_234(var uParam0, float fParam1)
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

float func_235(var uParam0)
{
	return uParam0->f_72;
}

bool func_236(var uParam0, int iParam1)
{
	return func_237(uParam0, iParam1) != -1;
}

int func_237(var uParam0, int iParam1)
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

bool func_238(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_239(int iParam0)
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

int func_240(int iParam0, int iParam1)
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
	iVar0 = unk_0x674FE6A5C8163DA5(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x613BED2AD524D24F(iParam0, iParam1);
	}
	return 0;
}

void func_241(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x56DCF5665F92F9BD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x39DEDCCD70293F58(iParam0, iVar0, 1);
}

void func_242(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51321[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x00AAD79B42B3E036())
	{
		return;
	}
	if (Global_51321[iParam0 /*7*/])
	{
		unk_0x56DCF5665F92F9BD(Global_51321[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x39DEDCCD70293F58(Global_51321[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_243()
{
	int iVar0;
	
	if (unk_0x6E2954F2B1919678())
	{
		unk_0x56DCF5665F92F9BD(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52753[0] == iVar0)
		{
			Global_52753[0] = iVar0;
		}
		unk_0x56DCF5665F92F9BD(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52753[1] == iVar0)
		{
			Global_52753[1] = iVar0;
		}
		unk_0x56DCF5665F92F9BD(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52753[2] == iVar0)
		{
			Global_52753[2] = iVar0;
		}
	}
}

int func_244(int iParam0)
{
	if (unk_0xDE185266FE919B68())
	{
		if ((unk_0x9D40BBF80D8F5E8A() - Global_28) > iParam0)
		{
			Global_27 = unk_0x9D40BBF80D8F5E8A();
		}
		Global_28 = unk_0x9D40BBF80D8F5E8A();
		if ((unk_0x9D40BBF80D8F5E8A() - Global_27) > iParam0)
		{
			if (func_245())
			{
				Global_27 = unk_0x9D40BBF80D8F5E8A();
				return 1;
			}
		}
	}
	return 0;
}

int func_245()
{
	if (unk_0xA57007F9A665F322())
	{
		return 0;
	}
	if (unk_0x958B4351DD28B142(0, 18) || unk_0x958B4351DD28B142(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x56DCF5665F92F9BD(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x56DCF5665F92F9BD(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x56DCF5665F92F9BD(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_247(int iParam0)
{
	return func_248(iParam0, Global_35619);
}

int func_248(int iParam0, int iParam1)
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

void func_249(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_319();
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
	if (func_211(iVar0, iVar1, 1))
	{
		func_250(iVar0, sVar3);
		func_204(iVar0);
		func_213(iVar0);
	}
}

void func_250(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_210(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45982[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_251(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_256(iParam1) || !func_256(iParam0))
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
	iVar0 = func_255(iParam0);
	iVar1 = func_255(iParam1);
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
	return 0;
}

int func_252(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_253(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_254(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_255(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_256(int iParam0)
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
	iVar0 = func_252(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_253(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_254(iParam0);
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
	iVar5 = func_255(iParam0);
	if (iVar5 < 1 || iVar5 > func_33(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_257()
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
	if (unk_0xFF6891E21E7FC193(joaat("startup_positioning")) == 0)
	{
		if (Global_99155.f_18731.f_5588)
		{
			if (!unk_0xD51CFE69539DB6D8(Global_69010))
			{
				func_174(&(Global_99155.f_18731.f_5510), Global_99155.f_18731.f_5590);
				Global_99155.f_18731.f_5588 = 0;
			}
			else if (!unk_0xC45A34912542C4EB(Global_69010, 0) || func_26(Global_69010, Global_99155.f_18731.f_5590, 1))
			{
				Global_99155.f_18731.f_5588 = 0;
			}
			else
			{
				if ((unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0) == Global_69010) && func_276(unk_0xE7869D5D7816A9B6()) != Global_99155.f_18731.f_5590)
				{
					Global_99155.f_18731.f_5590 = func_276(unk_0xE7869D5D7816A9B6());
				}
				if (Global_69010 != iLocal_646)
				{
					sVar2 = unk_0x9C30887BC86FF747(Global_69010, &uVar1);
					if (!unk_0xF6917DE0E003509D(sVar2))
					{
						if (unk_0xC7C6DDDE84A8E734(sVar2) == unk_0xC7C6DDDE84A8E734("vehicle_gen_controller"))
						{
							Global_99155.f_18731.f_5588 = 0;
							iLocal_1003 = Global_69010;
							if (Global_68105.f_139[24] == Global_69010 || (Global_69011 == Global_69010 && Global_69012 == 24))
							{
								func_275(458, 24, -1, 1);
							}
							else
							{
								func_275(458, 0, -1, 1);
							}
							Global_69010 = 0;
						}
					}
				}
				if (((Global_99155.f_18731.f_5590 != func_319() && Global_90494[Global_99155.f_18731.f_5590 /*98*/] == Global_99155.f_18731.f_5510.f_66) && unk_0x04E7E853E31F41A3(&(Global_90494[Global_99155.f_18731.f_5590 /*98*/].f_27), &(Global_99155.f_18731.f_5510.f_1))) && !unk_0xF478777FFCC96862())
				{
					func_91(&(Global_99155.f_18731.f_5510), &(Global_99155.f_18731.f_5600[Global_99155.f_18731.f_5590 /*78*/]));
					Global_99155.f_18731.f_5588 = 0;
					iLocal_1003 = 0;
					func_275(458, 0, -1, 1);
					Global_69010 = 0;
				}
			}
		}
		else if ((unk_0xD51CFE69539DB6D8(Global_69010) && unk_0xC45A34912542C4EB(Global_69010, 0)) && !func_26(Global_69010, Global_99155.f_18731.f_5590, 1))
		{
			Global_99155.f_18731.f_5588 = 1;
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_1003) && unk_0xC45A34912542C4EB(iLocal_1003, 0))
		{
			if (((!Global_99155.f_18731.f_5588 && iLocal_1003 != Global_69010) && iLocal_1003 != iLocal_1004) && !unk_0x4C5CA989AEF3A14C(iLocal_1003, 1))
			{
				func_14(iLocal_1003, 145);
				iLocal_1003 = 0;
				func_275(458, 0, -1, 1);
			}
		}
		else if (iLocal_1003 != 0)
		{
			iLocal_1003 = 0;
			func_275(458, 0, -1, 1);
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_1004) && unk_0xC45A34912542C4EB(iLocal_1004, 0))
		{
		}
		else if (iLocal_1004 != 0)
		{
			iLocal_1004 = 0;
		}
	}
	if (Global_69014.f_66 != 0 && Global_69011 == 0)
	{
		func_174(&Global_69014, Global_69092);
		Global_69014.f_66 = 0;
	}
	Var3 = { 433.6721f, -1006.538f, 25.96351f };
	Var6 = { 433.6578f, -1017.5f, 32.09895f };
	fVar9 = 11.25f;
	if (iLocal_642 > 0 && iLocal_642 < 99)
	{
		if (iLocal_642 != 3)
		{
			if (((((unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) || !unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Var3, Var6, fVar9, 0, 1, 0)) || func_10(0)) || func_10(3)) || func_10(2)) || func_10(14))
			{
				iLocal_642 = 99;
			}
		}
	}
	if (func_274(iLocal_647))
	{
		if (!unk_0xD11595488376CB53(uLocal_832))
		{
			if (((func_10(15) || func_10(12)) && iLocal_642 != 3) && !unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
			{
				uLocal_832 = func_272(428.37f, -1013.5f, 27.93f, 0);
				unk_0xD65A9304AF8AC06F(uLocal_832, 225);
				unk_0x227FC39A4871C64F(uLocal_832, "IMPOUND_BLIPNAME");
				unk_0x62D401A5D1298E20(uLocal_832, true);
			}
		}
		else if ((!(func_10(15) || func_10(12)) || iLocal_642 == 3) || unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
		{
			unk_0x5B62CAB9B0D6ABF1(&uLocal_832);
		}
	}
	else if (unk_0xD11595488376CB53(uLocal_832))
	{
		unk_0x5B62CAB9B0D6ABF1(&uLocal_832);
	}
	switch (iLocal_642)
	{
		case 0:
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if ((Local_402.f_2 == 0 && (func_10(15) || func_10(12))) && !unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
				{
					if (func_274(iLocal_647))
					{
						if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Var3, Var6, fVar9, 0, 1, 0))
						{
							if (func_246(iLocal_647) >= 250)
							{
								iVar10 = 0;
								iVar11 = 0;
								while (iVar11 < 2)
								{
									if (func_170(iVar11, iLocal_647))
									{
										iVar10++;
									}
									iVar11++;
								}
								if (iVar10 > 1)
								{
									func_133(&iLocal_643, 3, "IMPOUND_TRIG2", 0, 0, 0);
								}
								else
								{
									func_133(&iLocal_643, 3, "IMPOUND_TRIG1", 0, 0, 0);
								}
								iLocal_642 = 1;
							}
							else
							{
								func_131("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && func_129(0, -1))
			{
				if (func_128(iLocal_643, 1))
				{
					func_48(&iLocal_643);
					unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
					func_271();
					iVar12 = 0;
					iVar13 = 0;
					while (iVar13 < 2)
					{
						if (func_170(iVar13, iLocal_647))
						{
							iVar12++;
						}
						iVar13++;
					}
					if (iVar12 > 1)
					{
						iLocal_632 = 0;
						iLocal_633 = 0;
						iLocal_634 = 0;
						iLocal_637 = -1;
						iLocal_642++;
					}
					else
					{
						iVar14 = 0;
						while (iVar14 < 2)
						{
							if (func_170(iVar14, iLocal_647))
							{
								if (iVar14 == 0)
								{
									Var15 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									Var15 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_263(&iLocal_646, iVar14, Var15, 179.24f, 1))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								if (unk_0xD51CFE69539DB6D8(iLocal_646))
								{
									if (iVar14 == 0)
									{
										func_262(18, 1, 0);
									}
									else
									{
										func_262(19, 1, 0);
									}
									if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
									{
										unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
									}
									func_217(iLocal_647, 118, 250);
									func_261(iVar14);
									func_14(iLocal_646, func_319());
									func_50(1, -1);
									iLocal_642 = 3;
									func_48(&iLocal_643);
									iLocal_643 = -1;
									iLocal_634 = 0;
								}
							}
							iVar14++;
						}
					}
				}
			}
			break;
		
		case 2:
			switch (func_319())
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
			func_271();
			if (!iLocal_632 || iLocal_633)
			{
				func_126(0);
				func_125(1, 1, 0, 0, 0);
				func_124(1, 2, 1, 1, 1);
				func_123("IMPOUND_TITLE");
				iLocal_638 = 0;
				iVar19 = -1;
				iVar21 = 0;
				iVar20 = 0;
				while (iVar20 < 2)
				{
					if (func_170(iVar20, iLocal_647))
					{
						func_109(iVar21, unk_0x06724AA1519336EF(Global_99155.f_18731.f_5038[iVar18 /*157*/][iVar20 /*78*/].f_66), 0, 1, 0, 0);
						if (iVar19 == -1)
						{
							iVar19 = iVar21;
							iLocal_637 = iVar21;
						}
						unk_0x9956FB0E4B50ECB8(&iLocal_638, iVar21);
						iLocal_639[iVar21] = iVar20;
						func_109(iVar21, "IMPOUND_COST", 1, 1, 0, 0);
						func_260(250, 0);
						iVar21++;
					}
					iVar20++;
				}
				iVar21 = 0;
				func_102(iLocal_637, 1, 1);
				iLocal_635 = 1;
				iLocal_633 = 0;
				iLocal_632 = 1;
			}
			else
			{
				iVar0 = 0;
				if (unk_0xA78EA29AC2FFBADE())
				{
					if (unk_0x122DCA017A140FA8(2))
					{
						unk_0x8CCCC48313B0F20F(0, 1, 1);
						unk_0x8CCCC48313B0F20F(0, 2, 1);
						unk_0x5D1D27F205B40569(0, 237, 1);
						unk_0x5D1D27F205B40569(0, 238, 1);
						unk_0x5D1D27F205B40569(0, 241, 1);
						unk_0x5D1D27F205B40569(0, 242, 1);
						func_99(0, 0, 0, 1);
						func_98(0, -1, 1);
						if (func_97())
						{
							if (Global_2557322 != iLocal_637)
							{
								unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_637 = Global_2557322;
								func_102(iLocal_637, 1, 1);
								iLocal_635 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (unk_0x958B4351DD28B142(2, 188) || unk_0x958B4351DD28B142(2, 241))
				{
					if (!iLocal_634)
					{
						iLocal_635 = 1;
						unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar22 = (iLocal_637 - 1);
						while (iVar22 >= 0)
						{
							if (unk_0xB519E5386FBF69E5(iLocal_638, iVar22))
							{
								iLocal_637 = iVar22;
								bVar23 = true;
								iVar22 = 0;
							}
							iVar22 = (iVar22 + -1);
						}
						if (!bVar23)
						{
							iVar22 = 31;
							while (iVar22 >= iLocal_637 + 1)
							{
								if (unk_0xB519E5386FBF69E5(iLocal_638, iVar22))
								{
									iLocal_637 = iVar22;
									bVar23 = true;
									iVar22 = iLocal_637;
								}
								iVar22 = (iVar22 + -1);
							}
						}
						if (bVar23)
						{
							func_102(iLocal_637, 1, 1);
						}
					}
				}
				else if (unk_0x958B4351DD28B142(2, 187) || unk_0x958B4351DD28B142(2, 242))
				{
					if (!iLocal_634)
					{
						iLocal_635 = 1;
						unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar24 = iLocal_637 + 1;
						while (iVar24 <= 31)
						{
							if (unk_0xB519E5386FBF69E5(iLocal_638, iVar24))
							{
								iLocal_637 = iVar24;
								bVar25 = true;
								iVar24 = 31;
							}
							iVar24++;
						}
						if (!bVar25)
						{
							iVar24 = 0;
							while (iVar24 <= (iLocal_637 - 1))
							{
								if (unk_0xB519E5386FBF69E5(iLocal_638, iVar24))
								{
									iLocal_637 = iVar24;
									bVar25 = true;
									iVar24 = iLocal_637;
								}
								iVar24++;
							}
						}
						if (bVar25)
						{
							func_102(iLocal_637, 1, 1);
						}
					}
				}
				else if (unk_0xEA7F1ED415FFE2E8(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					unk_0xCC18B241D266EF14(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!iLocal_634)
					{
						func_96("IMPOUND_CNF", 0, 0);
						func_95(-1);
						func_94(201, "ITEM_YES", -1);
						func_94(202, "ITEM_NO", -1);
						iLocal_634 = 1;
					}
					else
					{
						if (iLocal_637 == 0)
						{
							Var26 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							Var26 = { 436.39f, -997.25f, 24.76f };
						}
						if (func_170(iLocal_639[iLocal_637], iLocal_647))
						{
							while (!func_263(&iLocal_646, iLocal_639[iLocal_637], Var26, 179.24f, 1))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							if (unk_0xD51CFE69539DB6D8(iLocal_646))
							{
								if (iLocal_637 == 0)
								{
									func_262(18, 1, 0);
								}
								else
								{
									func_262(19, 1, 0);
								}
								if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
								{
									unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
								}
								func_217(iLocal_647, 118, 250);
								func_261(iLocal_639[iLocal_637]);
								func_14(iLocal_646, func_319());
								func_50(1, -1);
								iLocal_642++;
								func_48(&iLocal_643);
								iLocal_643 = -1;
								iLocal_634 = 0;
							}
						}
						iLocal_633 = 1;
					}
				}
				else if (unk_0xEA7F1ED415FFE2E8(2, 202) || unk_0xEA7F1ED415FFE2E8(2, 238))
				{
					unk_0xCC18B241D266EF14(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (iLocal_634)
					{
						iLocal_635 = 1;
						iLocal_634 = 0;
					}
					else
					{
						iLocal_642 = 99;
					}
				}
			}
			unk_0x3BE81935DF4C438C();
			if (iLocal_635)
			{
				func_96("", 0, 0);
				func_95(-1);
				func_94(201, "ITEM_SELECT", -1);
				func_94(202, "ITEM_EXIT", -1);
				iLocal_634 = 0;
				iLocal_635 = 0;
			}
			if (func_129(0, -1))
			{
				func_53(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			break;
		
		case 3:
			if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 431.4f, -997.33f, 24.76f, 1) > 20f && !func_259())
			{
				func_14(iLocal_646, func_319());
				iLocal_642 = 99;
			}
			else if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 431.4f, -997.33f, 24.76f, 1) > 100f)
			{
				if (unk_0xD51CFE69539DB6D8(iLocal_646))
				{
					if (!unk_0x76B2D234F1895632(iLocal_646))
					{
						if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_646, 0) && unk_0xF18329472591CFE6(unk_0x1141852D07400777(iLocal_646, 1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 1) > 100f)
						{
							if (!unk_0xD525F9D50CBB6A5D(iLocal_646))
							{
								func_258(iLocal_646, 1, 145);
								unk_0x9E55BD45B84E7BDC(&iLocal_646);
								unk_0xC797AB6C3A6482E1(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
								iLocal_642 = 99;
							}
						}
						else if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_646, 0))
						{
							unk_0xC797AB6C3A6482E1(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
							func_14(iLocal_646, func_319());
							iLocal_642 = 99;
						}
					}
					else
					{
						unk_0xC797AB6C3A6482E1(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
						iLocal_642 = 99;
					}
				}
				else
				{
					unk_0xC797AB6C3A6482E1(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
					iLocal_642 = 99;
				}
			}
			break;
		
		case 99:
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
			}
			func_48(&iLocal_643);
			iVar29 = 0;
			while (iVar29 < 2)
			{
				iLocal_639[iVar29] = -1;
				iVar29++;
			}
			func_262(18, 0, 0);
			func_262(19, 0, 0);
			if (unk_0xD51CFE69539DB6D8(iLocal_646))
			{
				unk_0xC1F2137782A816E9(&iLocal_646);
			}
			iLocal_642 = 0;
			break;
	}
	if (iLocal_642 == 0)
	{
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, 1, 0))
		{
			if (!iLocal_645)
			{
				func_262(18, 1, 0);
				iLocal_645 = 1;
			}
		}
		else if (iLocal_645 && !unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, 1, 0))
		{
			func_262(18, 0, 0);
			iLocal_645 = 0;
		}
	}
}

int func_258(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x9C30887BC86FF747(iParam0, &uVar0);
		if (!unk_0xF6917DE0E003509D(sVar1))
		{
			if (unk_0xC7C6DDDE84A8E734(sVar1) == unk_0xC7C6DDDE84A8E734("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_14(iParam0, iParam2);
	return 1;
}

int func_259()
{
	if (unk_0xED2B37E48AC9BA42(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xED2B37E48AC9BA42(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xED2B37E48AC9BA42(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xED2B37E48AC9BA42(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_260(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5028 >= 252)
	{
		return;
	}
	if (Global_17257.f_5533 >= 4)
	{
		return;
	}
	if (Global_17257.f_5534 != 1)
	{
		return;
	}
	if (Global_17257.f_5533 >= Global_17257.f_5531)
	{
		return;
	}
	Global_17257.f_3866[Global_17257.f_5028] = iParam0;
	Global_17257.f_5028++;
	Global_17257.f_2092[Global_17257.f_5532 /*5*/][Global_17257.f_5533] = 2;
	Global_17257.f_5533++;
	if (Global_17257.f_5533 >= Global_17257.f_5531)
	{
		fVar0 = func_105();
		if (Global_17257.f_4883[Global_17257.f_5025] && Global_17257.f_5533 == Global_17257.f_5531)
		{
			func_84(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17257.f_4876[(Global_17257.f_5025 - 1)])
		{
			Global_17257.f_4876[(Global_17257.f_5025 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17257.f_5533 >= Global_17257.f_5531)
		{
			fVar3 = func_104();
			if (fVar3 > Global_17257.f_5535[Global_17257.f_5024])
			{
				Global_17257.f_5535[Global_17257.f_5024] = fVar3;
			}
		}
	}
}

void func_261(int iParam0)
{
	int iVar0;
	
	switch (func_319())
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
	if (iParam0 < 0 || iParam0 >= func_171(&(Global_99155.f_18731.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_99155.f_18731.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_262(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_34742[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (unk_0xB519E5386FBF69E5(Global_34742[iParam0 /*31*/].f_1, 1))
			{
				Global_34742[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_34742[iParam0 /*31*/].f_22 = 1f;
			}
			unk_0xDDAACCFB9CA1B68D(Global_34742[iParam0 /*31*/], Global_34742[iParam0 /*31*/].f_22, 0, 0);
			unk_0x31DB7F67CAF7CCFA(Global_34742[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_34742[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_34742[iParam0 /*31*/].f_22 = 0f;
			unk_0xDDAACCFB9CA1B68D(Global_34742[iParam0 /*31*/], Global_34742[iParam0 /*31*/].f_22, 0, 0);
			unk_0x31DB7F67CAF7CCFA(Global_34742[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

int func_263(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_170(iParam1, func_319()) || unk_0xD51CFE69539DB6D8(*iParam0))
	{
		return 0;
	}
	switch (func_319())
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
	unk_0x801429C020C467BA(Global_99155.f_18731.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (unk_0x5053BF6D5604065B(Global_99155.f_18731.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = unk_0xD504D1FF5DD2FFD7(Global_99155.f_18731.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, Param2, fParam5, 0, 0);
		func_264(*iParam0, &(Global_99155.f_18731.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		unk_0xC9CEB5227A733CE6(*iParam0);
		unk_0xE07FEB47C3650425(*iParam0, 0);
		unk_0x8100F8AA27EE924B(*iParam0, 1);
		if (bParam6)
		{
			unk_0x839E9476E54502A2(Global_99155.f_18731.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

void func_264(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		if (unk_0xC7C6DDDE84A8E734(&(uParam1->f_1)) != 0)
		{
			unk_0xAA38ABB77E443507(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x93CF2A62AE3C8085())
		{
			unk_0x0E88E3FDED7F6766(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xB519E5386FBF69E5(uParam1->f_77, func_16(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_16(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xB519E5386FBF69E5(uParam1->f_77, func_16(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_16(iVar1 + 1));
			}
		}
		if (unk_0xB519E5386FBF69E5(uParam1->f_77, 13))
		{
			unk_0x145645B37AE71EFB(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xA2F299A29CED1AB0(iParam0);
		}
		if (unk_0xB519E5386FBF69E5(uParam1->f_77, 12))
		{
			unk_0x2CF4F678CED1EB9D(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x50BBB995D0E3481E(iParam0);
		}
		unk_0x408AD7E5AD0BB545(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xC5F406A695E19D8A(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xB519E5386FBF69E5(uParam1->f_77, 15) || func_270(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_269())
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
		unk_0x2AA0B1D3DB2C3E10(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x40B9990275E6AD59(iParam0, 0);
		}
		else
		{
			unk_0x40B9990275E6AD59(iParam0, 0);
			unk_0x40B9990275E6AD59(iParam0, uParam1->f_65);
		}
		unk_0x0C27C841171728F7(iParam0, !unk_0xB519E5386FBF69E5(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x18F90CF5D756C783(iParam0, uParam1->f_70);
		}
		unk_0x4FD36E73DE133D3F(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x2706D464EB8463E7(iParam0, 2, unk_0xB519E5386FBF69E5(uParam1->f_77, 28));
		unk_0x2706D464EB8463E7(iParam0, 3, unk_0xB519E5386FBF69E5(uParam1->f_77, 29));
		unk_0x2706D464EB8463E7(iParam0, 0, unk_0xB519E5386FBF69E5(uParam1->f_77, 30));
		unk_0x2706D464EB8463E7(iParam0, 1, unk_0xB519E5386FBF69E5(uParam1->f_77, 31));
		unk_0xB862D2A317F182C4(iParam0, unk_0xB519E5386FBF69E5(uParam1->f_77, 10));
		if (unk_0x5349DE586C4C8ACB(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xED6BC33BD669B45F(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(iParam0)))
			{
				if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_268(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_268(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x657F8DC28088EB36(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xD0005B9DEEF3CBA9(iParam0, 1);
			}
			else
			{
				unk_0x38FE2C5E44C306D8(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_265(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xFFD2CE10E8C7E77F(uParam1->f_66) && !unk_0xAA65D1F2BF4AAFFB(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xB519E5386FBF69E5(uParam1->f_77, func_16(iVar2 + 1)))
				{
					if (!unk_0xDF705551345526F6(iParam0, iVar2 + 1))
					{
						unk_0xC1DD29CFE93055E7(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0xDF705551345526F6(iParam0, iVar2 + 1))
				{
					unk_0xC1DD29CFE93055E7(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if (unk_0xD1C57B32C6DE7BB6(uParam1->f_66))
		{
			if (!unk_0xB519E5386FBF69E5(uParam1->f_77, 23))
			{
				if (unk_0xB519E5386FBF69E5(uParam1->f_77, 22))
				{
					unk_0xD390C3A4EAD66C38(iParam0, 2);
				}
				else
				{
					unk_0xD390C3A4EAD66C38(iParam0, 3);
				}
			}
			else
			{
				unk_0xD390C3A4EAD66C38(iParam0, 4);
			}
		}
		if (unk_0xB519E5386FBF69E5(uParam1->f_77, 27))
		{
			unk_0xFBDEFAD3C34AC9CF(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xFBDEFAD3C34AC9CF(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_265(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC45A34912542C4EB(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA9D3956F42AEC644(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x5DAB69BA0BF447FC(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xFB0870DB05D28CB1(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x1C8AF615CFEF2FE5(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x91C889C88C57B287(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x16580F6E093503C8(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x16580F6E093503C8(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x16580F6E093503C8(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if ((unk_0xBAA70A4A1B1A59C8(*iParam0, 38) != 0 && unk_0xBAA70A4A1B1A59C8(*iParam0, 24) != 0) && unk_0x1C8AF615CFEF2FE5(*iParam0, 24) != func_267(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x16580F6E093503C8(*iParam0, 24, func_267(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_266(*iParam0))
	{
		unk_0x9DB0432DBE539D98(*iParam0, 1);
		unk_0x8100F8AA27EE924B(*iParam0, 1);
	}
	return 1;
}

int func_266(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xD51CFE69539DB6D8(uParam0) && unk_0xC45A34912542C4EB(iParam0, 0)) && unk_0xA9D3956F42AEC644(iParam0) > 0)
	{
		unk_0x5DAB69BA0BF447FC(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x1C8AF615CFEF2FE5(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x84501D0C09CEA717(iParam0, iVar1, unk_0x1C8AF615CFEF2FE5(iParam0, iVar1)), 16);
				iVar2 = unk_0xC7C6DDDE84A8E734(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0xC7C6DDDE84A8E734("MNU_CAGE") || iVar2 == unk_0xC7C6DDDE84A8E734("SABRE_CAG"))
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

int func_267(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xD51CFE69539DB6D8(uParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar0 = unk_0xBAA70A4A1B1A59C8(iParam0, 38);
		iVar1 = unk_0xBAA70A4A1B1A59C8(iParam0, 24);
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

void func_268(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA9D3956F42AEC644(iParam0) > 0)
	{
		unk_0x5DAB69BA0BF447FC(iParam0, 0);
		iVar0 = unk_0x1C8AF615CFEF2FE5(iParam0, 24);
		iVar1 = unk_0xB4686A5F9149447D(iParam0, 24);
		unk_0xE9ECD7D720B42CB4(iParam0, iParam1);
		if (iVar0 == -1)
		{
			unk_0x91C889C88C57B287(iParam0, 24);
		}
		else
		{
			unk_0x16580F6E093503C8(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_269()
{
	return unk_0x3442D8DA379C5187(joaat("mpindependence"));
}

int func_270(int iParam0)
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (unk_0xC45A34912542C4EB(iParam0, 0))
		{
			if (unk_0x8FFABA46948DBAD8("MPBitset", 3))
			{
				if (unk_0xB7AFC499DA70400A(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x3947414BC68E5255(iParam0, "MPBitset");
				}
				return unk_0xB519E5386FBF69E5(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_271()
{
	unk_0x2DABA7299541939E(0);
	unk_0x5D1D27F205B40569(0, 188, 1);
	unk_0x5D1D27F205B40569(0, 187, 1);
	unk_0x5D1D27F205B40569(0, 201, 1);
	unk_0x5D1D27F205B40569(0, 202, 1);
	unk_0x5D1D27F205B40569(0, 1, 1);
	unk_0x5D1D27F205B40569(0, 2, 1);
	unk_0x5D1D27F205B40569(0, 239, 1);
	unk_0x5D1D27F205B40569(0, 240, 1);
}

var func_272(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x3779A616B93955A6(Param0);
	unk_0xFC630C7120A34CE4(uVar0, func_273(unk_0x00AAD79B42B3E036(), 1f, 1f));
	unk_0x1AD7485666C5160C(uVar0, iParam3);
	return uVar0;
}

float func_273(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_274(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_170(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_275(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0x9617EA50E5A72132((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x9617EA50E5A72132((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x9617EA50E5A72132((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x9617EA50E5A72132((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xD7C723573D869608((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xD7C723573D869608((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x37E0A48E5A0DA582((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x37E0A48E5A0DA582((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x37E0A48E5A0DA582((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x37E0A48E5A0DA582((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 6413)) * 8) * 8;
	}
	uVar2 = unk_0x0D4158A08956FED3(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_277(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_277(int iParam0)
{
	if (func_8(iParam0))
	{
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_278()
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_392)
			{
				unk_0x801429C020C467BA(joaat("v_ilev_uvline"));
				iLocal_391 = 1;
				if (unk_0x5053BF6D5604065B(joaat("v_ilev_uvline")))
				{
					if (func_279(8))
					{
						uLocal_393[4] = unk_0x8C15E6EC0BC9B4BE(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 1, 1, 0);
						unk_0x88A973CE47FBEF95(uLocal_393[4], 471.48f, fVar0, 30.33f, 1, 0, 0, 1);
						unk_0x11089405D5CD3FD2(uLocal_393[4], 0f, 0f, 116.9f, 2, 1);
						uLocal_393[1] = unk_0x8C15E6EC0BC9B4BE(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 1, 1, 0);
						unk_0x88A973CE47FBEF95(uLocal_393[1], 471.48f, fVar0, 30.15f, 1, 0, 0, 1);
						unk_0x11089405D5CD3FD2(uLocal_393[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_279(9))
					{
						uLocal_393[5] = unk_0x8C15E6EC0BC9B4BE(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 1, 1, 0);
						unk_0x88A973CE47FBEF95(uLocal_393[5], 471.48f, fVar0, 29.98f, 1, 0, 0, 1);
						unk_0x11089405D5CD3FD2(uLocal_393[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_279(10))
					{
						uLocal_393[3] = unk_0x8C15E6EC0BC9B4BE(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, 1, 1, 0);
						unk_0x88A973CE47FBEF95(uLocal_393[3], 471.48f, fVar0, 29.82f, 1, 0, 0, 1);
						unk_0x11089405D5CD3FD2(uLocal_393[3], 0f, 0f, 116.9f, 2, 1);
					}
					uVar1 = unk_0x41D9D981197E60A2(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (unk_0xD51CFE69539DB6D8(uLocal_393[iVar2]))
						{
							unk_0x60365B5AF8BF1FFA(uLocal_393[iVar2], 1, 0);
							unk_0x3405141D0F7FFCEB(uLocal_393[iVar2], 1);
							unk_0x6818FB8C56DEFA06(uLocal_393[iVar2], uVar1);
						}
						iVar2++;
					}
					unk_0x839E9476E54502A2(joaat("v_ilev_uvline"));
					iLocal_392 = 1;
				}
			}
		}
		else
		{
			if (iLocal_391)
			{
				unk_0x839E9476E54502A2(joaat("v_ilev_uvline"));
				iLocal_391 = 0;
			}
			if (iLocal_392)
			{
				func_322();
				iLocal_392 = 0;
			}
		}
	}
}

int func_279(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_99155.f_7699.f_330[iParam0 /*6*/];
}

void func_280()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68105.f_553)
	{
		if (!iLocal_400)
		{
			Global_68105.f_554 = 0;
			iLocal_400 = 1;
		}
		else if (Global_68105.f_554 >= 68)
		{
			Global_68105.f_553 = 0;
			iLocal_400 = 0;
		}
	}
	else
	{
		iLocal_400 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_841)
	{
		iVar1 = iLocal_842[iVar0];
		if (func_40(&Local_649, iVar1))
		{
			func_318(&Local_670, iVar1);
			if ((Local_670.f_69 && Local_402.f_3 == 0) || iVar1 == 14)
			{
				uLocal_916[iVar1] = unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Local_670.f_55, 0);
			}
			else
			{
				uLocal_916[iVar1] = unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Local_649, 0);
			}
			if (func_317())
			{
				func_316(iVar1);
				func_314(iVar1);
				func_313(iVar1);
				func_312(iVar1);
				func_310(iVar1);
				func_309(iVar1);
				func_308(iVar1);
				func_282(iVar1);
				if (unk_0xB519E5386FBF69E5(uLocal_48[iVar1], 2))
				{
					if (Global_68105.f_553)
					{
						iLocal_400 = 0;
					}
					func_323(iVar1);
				}
			}
			else
			{
				func_281(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_841;
	iLocal_841 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_911)
	{
		iLocal_911[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0xB519E5386FBF69E5(uLocal_48[iLocal_842[iVar0]], 2))
		{
			func_323(iLocal_842[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_915 != -1)
	{
		func_323(iLocal_915);
		iLocal_915 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_323(iLocal_47);
	if (iLocal_989)
	{
		func_323(21);
		func_323(22);
		func_323(23);
		iLocal_989 = 0;
		bLocal_990 = true;
	}
	else if (bLocal_990)
	{
		bLocal_990 = false;
	}
	if (Global_68105.f_553)
	{
		Global_68105.f_554++;
	}
}

void func_281(int iParam0)
{
	if (iLocal_117[iParam0] != 0)
	{
		unk_0x839E9476E54502A2(iLocal_117[iParam0]);
		iLocal_117[iParam0] = 0;
	}
}

void func_282(int iParam0)
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
	if (!unk_0xB519E5386FBF69E5(uLocal_48[iParam0], 2))
	{
		func_281(iParam0);
	}
	unk_0x73817D396768E4C6(&(uLocal_48[iParam0]), 2);
	if (unk_0xB519E5386FBF69E5(uLocal_48[iParam0], 1))
	{
		fVar2 = unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Local_186[iParam0 /*3*/], 1);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (unk_0xB519E5386FBF69E5(Local_649.f_9, 23))
	{
		if (Local_649.f_4 == joaat("blimp"))
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
	else if (unk_0xB519E5386FBF69E5(Local_649.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((unk_0xB519E5386FBF69E5(Local_649.f_9, 19) || unk_0xB519E5386FBF69E5(Local_649.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (unk_0xB519E5386FBF69E5(Local_649.f_9, 25) && (((iLocal_647 == 0 && Local_402.f_0 == 21) || (iLocal_647 == 0 && Local_402.f_0 == 22)) || (iLocal_647 == 0 && Local_402.f_0 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (unk_0xD51CFE69539DB6D8(Global_68105.f_139[iParam0]))
	{
		if (unk_0xC45A34912542C4EB(Global_68105.f_139[iParam0], 0))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if (iParam0 == 24)
				{
					uVar3 = unk_0xBD6B21D725712BDE(Global_68105.f_139[iParam0], -1);
					if (!unk_0xD51CFE69539DB6D8(uVar3))
					{
						iVar3 = unk_0xFC6351163F828F49(Global_68105.f_139[iParam0], -1);
					}
					iVar4 = func_276(iVar3);
					if (iVar4 != Global_99155.f_18731.f_5591)
					{
						if (func_8(iVar4))
						{
							func_307("Updating last character to use vehicle gen", iVar4);
							Global_99155.f_18731.f_5591 = iVar4;
						}
					}
				}
				if (!unk_0x4C5CA989AEF3A14C(Global_68105.f_139[iParam0], 1))
				{
					func_306("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_42(Global_68105.f_139[iParam0])) && !func_41(Global_68105.f_139[iParam0])) && unk_0x1B2DC87EFB36DF80(Global_68105.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xC0C7A9F655DB1456(Global_68105.f_139[iParam0], true);
					}
					Global_68105.f_139[iParam0] = 0;
					Global_68105[iParam0] = 1;
					func_305(iParam0);
					return;
				}
				if (((unk_0xB519E5386FBF69E5(uLocal_48[iParam0], 0) && !unk_0xB519E5386FBF69E5(Local_649.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_306("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_42(Global_68105.f_139[iParam0])) && !func_41(Global_68105.f_139[iParam0])) && unk_0x1B2DC87EFB36DF80(Global_68105.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xC0C7A9F655DB1456(Global_68105.f_139[iParam0], true);
					}
					unk_0xC1F2137782A816E9(&(Global_68105.f_139[iParam0]));
					Global_68105.f_139[iParam0] = 0;
					Global_68105[iParam0] = 1;
					func_305(iParam0);
					return;
				}
				if ((!unk_0xB519E5386FBF69E5(uLocal_48[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (unk_0x915685CA559C211B(Global_68105.f_139[iParam0], unk_0xE7869D5D7816A9B6(), 1))
					{
						func_306("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_42(Global_68105.f_139[iParam0])) && !func_41(Global_68105.f_139[iParam0])) && unk_0x1B2DC87EFB36DF80(Global_68105.f_139[iParam0]) != joaat("monster"))
						{
							unk_0xC0C7A9F655DB1456(Global_68105.f_139[iParam0], true);
						}
						unk_0xC1F2137782A816E9(&(Global_68105.f_139[iParam0]));
						Global_68105.f_139[iParam0] = 0;
						Global_68105[iParam0] = 1;
						func_305(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((unk_0xB519E5386FBF69E5(uLocal_48[iParam0], 1) && unk_0xF18329472591CFE6(unk_0x1141852D07400777(Global_68105.f_139[iParam0], 1), Local_186[iParam0 /*3*/], 1) > fVar5) || (!unk_0xB519E5386FBF69E5(uLocal_48[iParam0], 1) && unk_0xF18329472591CFE6(unk_0x1141852D07400777(Global_68105.f_139[iParam0], 1), Local_649, 1) > fVar5))
				{
					func_306("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_42(Global_68105.f_139[iParam0])) && !func_41(Global_68105.f_139[iParam0])) && unk_0x1B2DC87EFB36DF80(Global_68105.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xC0C7A9F655DB1456(Global_68105.f_139[iParam0], true);
					}
					unk_0xC1F2137782A816E9(&(Global_68105.f_139[iParam0]));
					Global_68105.f_139[iParam0] = 0;
					Global_68105[iParam0] = 1;
					func_305(iParam0);
					return;
				}
				if (!func_46(iParam0, 0))
				{
					func_306("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_42(Global_68105.f_139[iParam0])) && !func_41(Global_68105.f_139[iParam0])) && unk_0x1B2DC87EFB36DF80(Global_68105.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xC0C7A9F655DB1456(Global_68105.f_139[iParam0], true);
					}
					unk_0xC1F2137782A816E9(&(Global_68105.f_139[iParam0]));
					Global_68105.f_139[iParam0] = 0;
					Global_68105[iParam0] = 1;
					func_305(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_26(Global_68105.f_139[iParam0], iLocal_647, 1) && !func_42(Global_68105.f_139[iParam0])) && !func_41(Global_68105.f_139[iParam0]))
					{
						func_306("No longer needed: Mission vehicle gen moved to players garage");
						if (unk_0x1B2DC87EFB36DF80(Global_68105.f_139[iParam0]) != joaat("monster"))
						{
							unk_0xC0C7A9F655DB1456(Global_68105.f_139[iParam0], true);
						}
						Global_68105.f_139[iParam0] = 0;
						Global_68105[iParam0] = 1;
						func_305(iParam0);
						return;
					}
				}
				if (uLocal_916[iParam0] > fVar0 && (!unk_0xB519E5386FBF69E5(uLocal_48[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_29();
						iVar7 = Global_99155.f_18731.f_4801;
						func_303(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_251(iVar6, iVar7))
						{
							if ((!func_42(Global_68105.f_139[iParam0]) && !func_41(Global_68105.f_139[iParam0])) && unk_0x1B2DC87EFB36DF80(Global_68105.f_139[iParam0]) != joaat("monster"))
							{
								unk_0xC0C7A9F655DB1456(Global_68105.f_139[iParam0], true);
							}
							func_14(Global_68105.f_139[iParam0], Global_99155.f_18731.f_5591);
							Global_68105[iParam0] = 1;
							func_305(iParam0);
						}
						else if (func_19(Global_68105.f_139[iParam0]))
						{
							func_15(Global_68105.f_139[iParam0], &Global_2441916);
							Global_2441915 = Global_99155.f_18731.f_5591;
							iLocal_1004 = Global_68105.f_139[iParam0];
						}
					}
					func_306("No longer needed: Player out for range");
					unk_0xC1F2137782A816E9(&(Global_68105.f_139[iParam0]));
					unk_0xB86B1248EA9B87EA(Local_649, 3f, 0, 0, 0, 0);
					unk_0xC797AB6C3A6482E1(Local_649, 3f, 0, 0, 0, 0, 0);
					Global_68105.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_647 == 0) || (iParam0 == 6 && iLocal_647 == 2)) || (iParam0 == 2 && iLocal_647 == 1))
					{
						Global_68105.f_584 = { Local_649 };
						Global_68105.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (unk_0xB519E5386FBF69E5(Local_649.f_9, 30))
				{
					if (!unk_0xB519E5386FBF69E5(Local_649.f_9, 31))
					{
						if (!unk_0x641FE3AF0CF996E3(Global_68105.f_139[iParam0]) && !unk_0xD55D878601C46BA9(Global_68105.f_139[iParam0]))
						{
							Var8 = { unk_0x1141852D07400777(Global_68105.f_139[iParam0], 1) };
							if (Var8.f_2 >= func_302(iParam0))
							{
								unk_0x8404DB71FD2DB229(Global_68105.f_139[iParam0], 1);
								unk_0x9956FB0E4B50ECB8(&(Local_649.f_9), 31);
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
		Global_68105.f_139[iParam0] = 0;
	}
	if (unk_0xD51CFE69539DB6D8(Global_68105.f_139[iParam0]))
	{
		func_306("No longer needed: Vehicle not driveable");
		unk_0xC1F2137782A816E9(&(Global_68105.f_139[iParam0]));
		Global_68105.f_139[iParam0] = 0;
		Global_68105[iParam0] = 1;
		func_305(iParam0);
		return;
	}
	if (unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		return;
	}
	if (Global_69012 == iParam0)
	{
		func_306("Processing a vehgen vehicle handover request.");
		if (unk_0xD51CFE69539DB6D8(Global_69011) && unk_0xC45A34912542C4EB(Global_69011, 0))
		{
			if (unk_0xD51CFE69539DB6D8(Global_68105.f_139[iParam0]) && unk_0xC45A34912542C4EB(Global_68105.f_139[iParam0], 0))
			{
				if (Global_68105.f_139[iParam0] == Global_69011)
				{
					func_306("Vehicle to be handed over is the same vehicle.");
					Global_69012 = -1;
					Global_69011 = 0;
					return;
				}
				else
				{
					func_306("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_42(Global_68105.f_139[iParam0])) && !func_41(Global_68105.f_139[iParam0])) && unk_0x1B2DC87EFB36DF80(Global_68105.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xC0C7A9F655DB1456(Global_68105.f_139[iParam0], true);
					}
					unk_0xC1F2137782A816E9(&(Global_68105.f_139[iParam0]));
					Global_68105.f_139[iParam0] = 0;
				}
			}
			Global_68105.f_139[iParam0] = Global_69011;
			Global_68105[iParam0] = 1;
			unk_0x73817D396768E4C6(&(uLocal_48[iParam0]), 0);
			unk_0x9956FB0E4B50ECB8(&(uLocal_48[iParam0]), 1);
			unk_0x73817D396768E4C6(&(uLocal_48[iParam0]), 3);
			Local_186[iParam0 /*3*/] = { unk_0x1141852D07400777(Global_69011, 1) };
			Global_69012 = -1;
			if (unk_0xB519E5386FBF69E5(Local_649.f_9, 10))
			{
				Var11.f_9 = 49;
				Var11.f_59 = 2;
				func_15(Global_69011, &Var11);
				if (Global_69013)
				{
					func_90(iParam0, &Var11, unk_0x1141852D07400777(Global_69011, 1), unk_0x2CAFFCD9F5E16D2F(Global_69011), func_25(Global_69011));
				}
				else
				{
					func_90(iParam0, &Var11, Global_99155.f_18731.f_1864[Local_649.f_14 /*3*/], Global_99155.f_18731.f_1934[Local_649.f_14], func_25(Global_69011));
				}
				Global_68105.f_139[iParam0] = Global_69011;
				Global_68105.f_484[iParam0] = Global_68105.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar89 = func_319();
				if (func_8(iVar89))
				{
					func_306("Players stored switch vehicle cleared for prep getaway.");
					Global_90793[iVar89] = 0;
				}
			}
			unk_0x20BB4B94CC6DDC9A(Global_68105.f_139[iParam0], 1, 1);
			if (iParam0 == 24)
			{
				unk_0xC0C7A9F655DB1456(Global_68105.f_139[iParam0], false);
			}
			Global_69011 = 0;
			if (Global_2441916.f_66 != 0)
			{
				func_174(&Global_2441916, Global_2441915);
				Global_2441916.f_66 = 0;
			}
			return;
		}
		if (Global_2441916.f_66 != 0)
		{
			func_174(&Global_2441916, Global_2441915);
			Global_2441916.f_66 = 0;
		}
		func_306("Vehicle to be handed over doesn't exist.");
		Global_69012 = -1;
		Global_69011 = 0;
	}
	if (Global_68105[iParam0])
	{
		if (uLocal_916[iParam0] >= fVar0)
		{
			Global_68105[iParam0] = 0;
			func_306("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_647 == 0) || (iParam0 == 6 && iLocal_647 == 2)) || (iParam0 == 2 && iLocal_647 == 1))
		{
			Global_68105.f_584 = { 0f, 0f, 0f };
			Global_68105.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar90 = false;
	if (uLocal_916[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_99155.f_18731.f_1958[Local_649.f_14] != 0) && Global_99155.f_18731.f_1958[Local_649.f_14] > 3) && Local_649.f_4 != 0) && func_46(iParam0, 0)) && func_21(Local_649.f_4))
		{
			iVar91 = func_29();
			iVar92 = Global_99155.f_18731.f_4801;
			func_303(&iVar92, 0, 0, 17, 0, 0, 0);
			if (func_251(iVar91, iVar92))
			{
				func_174(&(Global_99155.f_18731.f_69[Local_649.f_14 /*78*/]), Global_99155.f_18731.f_5591);
				func_305(iParam0);
				Global_68105[iParam0] = 1;
				func_306("Cannot be created: Vehicle ready for impound");
				Global_2441916.f_66 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_647 == 0) || (iParam0 == 6 && iLocal_647 == 2)) || (iParam0 == 2 && iLocal_647 == 1))
		{
			bVar90 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_647 == 0) || (iParam0 == 6 && iLocal_647 == 2)) || (iParam0 == 2 && iLocal_647 == 1))
	{
		Global_68105.f_584 = { 0f, 0f, 0f };
		Global_68105.f_587 = { 0f, 0f, 0f };
	}
	if (Local_649.f_4 == 0)
	{
		Global_68105[iParam0] = 1;
		func_306("Cannot be created: Dummy model");
		return;
	}
	if (!func_21(Local_649.f_4))
	{
		Global_68105[iParam0] = 1;
		func_306("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_46(iParam0, 0))
	{
		Global_68105[iParam0] = 1;
		func_306("Cannot be created: Vehicle gen not available");
		return;
	}
	if (unk_0xB519E5386FBF69E5(Local_649.f_9, 14) && !func_46(iParam0, 5))
	{
		Global_68105[iParam0] = 1;
		func_306("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_301() && func_300(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_68105[iParam0] = 1;
		func_306("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_648)
	{
		Global_68105[iParam0] = 1;
		func_306("Cannot be created: Player character not valid");
		return;
	}
	if (unk_0xB519E5386FBF69E5(Local_649.f_9, 10))
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[iParam0]))
		{
			Global_68105[iParam0] = 1;
			func_306("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_68105.f_484[iParam0] = 0;
		}
	}
	if (unk_0xB519E5386FBF69E5(Local_649.f_9, 6))
	{
		if (func_299(Local_649.f_4, -1))
		{
			Global_68105[iParam0] = 1;
			func_306("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_298(Local_649.f_4, -1))
		{
			Global_68105[iParam0] = 1;
			func_306("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (unk_0xB519E5386FBF69E5(Local_649.f_9, 29))
	{
		if (Local_402.f_3 == 0)
		{
			return;
		}
	}
	if (func_297(iParam0))
	{
		Global_68105[iParam0] = 1;
		func_306("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (unk_0xF478777FFCC96862() && unk_0x5824E40B4C3C5757() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_68105[iParam0] = 1;
			func_306("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar93 = 0;
	if (unk_0xB519E5386FBF69E5(Local_649.f_9, 19))
	{
		iVar93 = 2;
	}
	else if (unk_0xB519E5386FBF69E5(Local_649.f_9, 20))
	{
		iVar93 = 1;
	}
	if ((iParam0 == 24 && Global_99155.f_18731.f_1958[Local_649.f_14] > 0) && Global_99155.f_18731.f_1958[Local_649.f_14] <= 3)
	{
		if (unk_0x07C6F7E084F6A97E(Local_649.f_4))
		{
			iVar93 = 2;
			Local_649.f_12 = (Global_99155.f_18731.f_1958[Local_649.f_14] - 1);
		}
		else if (unk_0x3937C84F74FAABA4(Local_649.f_4))
		{
			iVar93 = 1;
			Local_649.f_12 = (Global_99155.f_18731.f_1958[Local_649.f_14] - 1);
		}
	}
	if (iVar93 != 0)
	{
		if (func_296(Local_649.f_12, iVar93, Local_649, -1f))
		{
			Global_68105[iParam0] = 1;
			func_306("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_325(iParam0, 0);
			}
			return;
		}
		if (unk_0xB519E5386FBF69E5(Local_649.f_9, 19) || unk_0xB519E5386FBF69E5(Local_649.f_9, 20))
		{
			if (iVar93 == 2)
			{
				if (Global_88737[Local_649.f_12 /*3*/][1] != -1 && (unk_0x9D40BBF80D8F5E8A() - Global_88737[Local_649.f_12 /*3*/][1]) < unk_0xABF7FAFC2C7748E6() * 180)
				{
					Global_68105[iParam0] = 1;
					func_306("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var94, "...", 24);
					StringIntConCat(&Var94, ((unk_0xABF7FAFC2C7748E6() * 180 - (unk_0x9D40BBF80D8F5E8A() - Global_88737[Local_649.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var94, " seconds", 24);
					func_306(&Var94);
					return;
				}
			}
			else if (iVar93 == 1)
			{
				if (Global_88737[Local_649.f_12 /*3*/][0] != -1 && (unk_0x9D40BBF80D8F5E8A() - Global_88737[Local_649.f_12 /*3*/][0]) < unk_0xABF7FAFC2C7748E6() * 180)
				{
					Global_68105[iParam0] = 1;
					func_306("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var100, "...", 24);
					StringIntConCat(&Var100, ((unk_0xABF7FAFC2C7748E6() * 180 - (unk_0x9D40BBF80D8F5E8A() - Global_88737[Local_649.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var100, " seconds", 24);
					func_306(&Var100);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_647 == 0) || (iParam0 == 6 && iLocal_647 == 2)) || (iParam0 == 2 && iLocal_647 == 1))
	{
		Global_68105.f_584 = { Local_649 };
	}
	if (bVar90)
	{
		return;
	}
	if (iVar93 != 0)
	{
		iLocal_117[iParam0] = func_6(Local_649.f_12, iVar93);
		unk_0x801429C020C467BA(iLocal_117[iParam0]);
		unk_0x9956FB0E4B50ECB8(&(uLocal_48[iParam0]), 2);
		if (!unk_0x5053BF6D5604065B(iLocal_117[iParam0]))
		{
			func_306("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_295(iLocal_117[iParam0], Local_649, 1))
		{
			func_306("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		unk_0xB86B1248EA9B87EA(Local_649, 3f, 0, 0, 0, 0);
		unk_0xC797AB6C3A6482E1(Local_649, 3f, 0, 0, 0, 0, 0);
		if (iVar93 == 2)
		{
			func_290(&(Global_68105.f_139[iParam0]), Local_649.f_12, Local_649, Local_649.f_3, 0, 2);
		}
		else if (iVar93 == 1)
		{
			func_290(&(Global_68105.f_139[iParam0]), Local_649.f_12, Local_649, Local_649.f_3, 0, 1);
		}
		else
		{
			Global_68105[iParam0] = 1;
			func_306("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		unk_0x801429C020C467BA(Local_649.f_4);
		iLocal_117[iParam0] = Local_649.f_4;
		unk_0x9956FB0E4B50ECB8(&(uLocal_48[iParam0]), 2);
		if (!unk_0x5053BF6D5604065B(Local_649.f_4))
		{
			func_306("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_295(Local_649.f_4, Local_649, 1))
		{
			func_306("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		unk_0xB86B1248EA9B87EA(Local_649, 3f, 0, 0, 0, 0);
		unk_0xC797AB6C3A6482E1(Local_649, 3f, 0, 0, 0, 0, 0);
		if (unk_0xB519E5386FBF69E5(Local_649.f_9, 23))
		{
			unk_0x04C3884D197FF82E(Local_649);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_649.f_4 == joaat("submersible2"))
			{
				Local_649.f_2 = -3f;
			}
		}
		Global_68105.f_139[iParam0] = unk_0xD504D1FF5DD2FFD7(Local_649.f_4, Local_649, Local_649.f_3, 1, 1);
		if (unk_0xB519E5386FBF69E5(Local_649.f_9, 10))
		{
			if (unk_0xD1C57B32C6DE7BB6(Local_649.f_4))
			{
				unk_0x9956FB0E4B50ECB8(&(Global_99155.f_18731.f_69[Local_649.f_14 /*78*/].f_77), 22);
			}
			if (unk_0xB519E5386FBF69E5(Global_99155.f_18731.f_69[Local_649.f_14 /*78*/].f_77, 14))
			{
				func_15(Global_68105.f_139[iParam0], &Local_751);
				func_289(Local_751.f_77, &(Global_99155.f_18731.f_69[Local_649.f_14 /*78*/].f_77), Local_649.f_4);
				unk_0x73817D396768E4C6(&(Global_99155.f_18731.f_69[Local_649.f_14 /*78*/].f_77), 14);
			}
			func_264(Global_68105.f_139[iParam0], &(Global_99155.f_18731.f_69[Local_649.f_14 /*78*/]), 0, 1);
			Global_68105.f_484[iParam0] = Global_68105.f_139[iParam0];
		}
		else
		{
			if (unk_0xB519E5386FBF69E5(Local_649.f_9, 9))
			{
				unk_0x408AD7E5AD0BB545(Global_68105.f_139[iParam0], Local_649.f_10, Local_649.f_11);
			}
			if (unk_0xB519E5386FBF69E5(Local_649.f_9, 8))
			{
				unk_0x18F90CF5D756C783(Global_68105.f_139[iParam0], 2);
				unk_0x954AB0167F3D96AE(Global_68105.f_139[iParam0], 0);
				unk_0x82812F228B95D580(Global_68105.f_139[iParam0], 0);
				unk_0x2363D576670633B2(Global_68105.f_139[iParam0], 0);
				unk_0xDE0CF61779B63045(Global_68105.f_139[iParam0], 0);
				unk_0x79CA1891F45A343F(Global_68105.f_139[iParam0], 0);
				unk_0x0C27C841171728F7(Global_68105.f_139[iParam0], false);
				unk_0x2EF7A8CB89D363F6(Global_68105.f_139[iParam0], 1);
				unk_0x2878EC06B3F897A0(Global_68105.f_139[iParam0], 1);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(Global_68105.f_139[iParam0]))
	{
		func_288("Created - Coords: ", Local_649);
		func_287("Created - Dist From Player:", uLocal_916[iParam0]);
		if (((iParam0 == 0 && iLocal_647 == 0) || (iParam0 == 6 && iLocal_647 == 2)) || (iParam0 == 2 && iLocal_647 == 1))
		{
			Global_68105.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_649.f_4)
		{
			case joaat("miljet"):
				unk_0x408AD7E5AD0BB545(Global_68105.f_139[iParam0], 121, 21);
				unk_0xC5F406A695E19D8A(Global_68105.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				unk_0x408AD7E5AD0BB545(Global_68105.f_139[iParam0], 122, 89);
				unk_0xC5F406A695E19D8A(Global_68105.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				unk_0x408AD7E5AD0BB545(Global_68105.f_139[iParam0], 0, 0);
				unk_0xC5F406A695E19D8A(Global_68105.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				unk_0x408AD7E5AD0BB545(Global_68105.f_139[iParam0], 131, 132);
				unk_0xC5F406A695E19D8A(Global_68105.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				unk_0x408AD7E5AD0BB545(Global_68105.f_139[iParam0], 159, 0);
				unk_0xC5F406A695E19D8A(Global_68105.f_139[iParam0], 160, 156);
				break;
		}
		if (unk_0xB519E5386FBF69E5(Local_649.f_9, 22))
		{
			unk_0x8404DB71FD2DB229(Global_68105.f_139[iParam0], 1);
		}
		if (unk_0xB519E5386FBF69E5(Local_649.f_9, 30))
		{
			unk_0x73817D396768E4C6(&(Local_649.f_9), 31);
		}
		if (unk_0xB519E5386FBF69E5(Local_649.f_9, 26))
		{
			unk_0x18F90CF5D756C783(Global_68105.f_139[iParam0], 7);
			unk_0x174FED9630483D03(Global_68105.f_139[iParam0], 1);
		}
		func_286(Global_68105.f_139[iParam0], iParam0);
		if (!unk_0xB519E5386FBF69E5(Local_649.f_9, 29) && !unk_0xB519E5386FBF69E5(Local_649.f_9, 30))
		{
			unk_0xC9CEB5227A733CE6(Global_68105.f_139[iParam0]);
		}
		unk_0xB4446F1B3498926D(Global_68105.f_139[iParam0], 0f);
		unk_0xFD092FF761E54535(Global_68105.f_139[iParam0], 1);
		unk_0xC0C7A9F655DB1456(Global_68105.f_139[iParam0], unk_0xB519E5386FBF69E5(Local_649.f_9, 5));
	}
	unk_0x73817D396768E4C6(&(uLocal_48[iParam0]), 0);
	unk_0x73817D396768E4C6(&(uLocal_48[iParam0]), 1);
	Global_68105[iParam0] = 1;
	if (iVar93 != 0)
	{
		Global_68105.f_69[iParam0] = 1;
	}
	iVar106 = func_283(458, -1, -1);
	if (iVar106 != 0 && iVar106 == iParam0)
	{
		iLocal_1003 = Global_68105.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2441916.f_66 = 0;
	}
}

int func_283(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_71();
	}
	iVar0 = 0;
	iVar1 = func_285(iParam0, iParam1);
	uVar2 = func_284(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x7D30AFD5AF907144(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_284(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x8C1A0D59B3EFF3C9((iParam0 - 6413)) * 8) * 8;
	}
	return iVar0;
}

int func_285(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_71();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x9617EA50E5A72132((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x9617EA50E5A72132((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x9617EA50E5A72132((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x9617EA50E5A72132((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xD7C723573D869608((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xD7C723573D869608((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x37E0A48E5A0DA582((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x37E0A48E5A0DA582((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x37E0A48E5A0DA582((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x37E0A48E5A0DA582((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	return iVar0;
}

void func_286(int iParam0, int iParam1)
{
	if (unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				unk_0x77EF7A0E549D3126(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				unk_0x77EF7A0E549D3126(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				unk_0x77EF7A0E549D3126(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				unk_0xC1DD29CFE93055E7(iParam0, 6, false);
				unk_0xC1DD29CFE93055E7(iParam0, 1, true);
				break;
			}
	}
}

void func_287(char* sParam0, float fParam1)
{
	if (!unk_0xF6917DE0E003509D(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_288(char* sParam0, float fParam1, var uParam2, var uParam3)
{
	if (!unk_0xF6917DE0E003509D(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_289(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			unk_0x73817D396768E4C6(&iVar0, 0);
			unk_0x73817D396768E4C6(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			unk_0x73817D396768E4C6(&iVar0, 0);
			unk_0x73817D396768E4C6(&iVar0, 1);
			unk_0x73817D396768E4C6(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			unk_0x73817D396768E4C6(&iVar0, 0);
			unk_0x73817D396768E4C6(&iVar0, 1);
			unk_0x73817D396768E4C6(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			unk_0x73817D396768E4C6(&iVar0, 0);
			break;
		
		case joaat("stalion"):
			unk_0x73817D396768E4C6(&iVar0, 0);
			unk_0x73817D396768E4C6(&iVar0, 1);
			unk_0x73817D396768E4C6(&iVar0, 2);
			break;
		
		case joaat("chino"):
			unk_0x73817D396768E4C6(&iVar0, 0);
			unk_0x73817D396768E4C6(&iVar0, 1);
			unk_0x73817D396768E4C6(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_290(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
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
		if (unk_0xD51CFE69539DB6D8(*iParam0))
		{
			if (unk_0x1B2DC87EFB36DF80(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_99155.f_1750.f_539.f_3544) && Global_99155.f_7699.f_99.f_58[131])
		{
			Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x801429C020C467BA(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x5053BF6D5604065B(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xD504D1FF5DD2FFD7(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/], Param2, uParam5, 0, 0);
				unk_0xC9CEB5227A733CE6(*iParam0);
				unk_0xE07FEB47C3650425(*iParam0, 0);
				unk_0xC0C7A9F655DB1456(*iParam0, false);
				unk_0x8100F8AA27EE924B(*iParam0, 1);
				unk_0x09714949CF524B00(*iParam0, 1250);
				unk_0x07C7B5F986353F8B(*iParam0, 1250f);
				unk_0xD1869FA90CC61334(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x408AD7E5AD0BB545(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_5, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0xC5F406A695E19D8A(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_7, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0xB4446F1B3498926D(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0xC1DD29CFE93055E7(*iParam0, iVar103 + 1, !Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x6C26738F49379AC0(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_294(&uVar1, &uVar0))
				{
					unk_0xAA38ABB77E443507(*iParam0, &uVar1);
					unk_0x0E88E3FDED7F6766(*iParam0, uVar0);
				}
				else
				{
					unk_0xAA38ABB77E443507(*iParam0, &(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 < unk_0x93CF2A62AE3C8085())
					{
						unk_0x0E88E3FDED7F6766(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x2AA0B1D3DB2C3E10(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_84, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_85, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x0C27C841171728F7(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x40B9990275E6AD59(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x4FD36E73DE133D3F(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_93, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_94, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x2706D464EB8463E7(*iParam0, 2, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x2706D464EB8463E7(*iParam0, 3, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x2706D464EB8463E7(*iParam0, 0, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x2706D464EB8463E7(*iParam0, 1, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x5349DE586C4C8ACB(*iParam0) > 1 && Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xED6BC33BD669B45F(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(*iParam0)))
					{
						if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(*iParam0)))
						{
							if (Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xE9ECD7D720B42CB4(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE9ECD7D720B42CB4(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_265(iParam0, &(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_31), &(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x270D1E5D25C8646A(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x1B2DC87EFB36DF80(*iParam0) == joaat("bodhi2"))
					{
						func_292(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x839E9476E54502A2(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
				}
				func_291(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x801429C020C467BA(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x5053BF6D5604065B(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xD504D1FF5DD2FFD7(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0);
				unk_0xC9CEB5227A733CE6(*iParam0);
				unk_0xE07FEB47C3650425(*iParam0, 0);
				unk_0xC0C7A9F655DB1456(*iParam0, false);
				unk_0x8100F8AA27EE924B(*iParam0, 1);
				unk_0x09714949CF524B00(*iParam0, 1250);
				unk_0x07C7B5F986353F8B(*iParam0, 1250f);
				unk_0xD1869FA90CC61334(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x408AD7E5AD0BB545(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_5, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0xC5F406A695E19D8A(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_7, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0xB4446F1B3498926D(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0xC1DD29CFE93055E7(*iParam0, iVar104 + 1, !Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x6C26738F49379AC0(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_294(&uVar1, &uVar0))
				{
					unk_0xAA38ABB77E443507(*iParam0, &uVar1);
					unk_0x0E88E3FDED7F6766(*iParam0, uVar0);
				}
				else
				{
					unk_0xAA38ABB77E443507(*iParam0, &(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 < unk_0x93CF2A62AE3C8085())
					{
						unk_0x0E88E3FDED7F6766(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x2AA0B1D3DB2C3E10(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_84, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_85, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x0C27C841171728F7(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x40B9990275E6AD59(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x4FD36E73DE133D3F(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_93, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_94, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x2706D464EB8463E7(*iParam0, 2, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x2706D464EB8463E7(*iParam0, 3, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x2706D464EB8463E7(*iParam0, 0, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x2706D464EB8463E7(*iParam0, 1, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x5349DE586C4C8ACB(*iParam0) > 1 && Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xED6BC33BD669B45F(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(*iParam0)))
					{
						if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(*iParam0)))
						{
							if (Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xE9ECD7D720B42CB4(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE9ECD7D720B42CB4(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_265(iParam0, &(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_31), &(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x270D1E5D25C8646A(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x1B2DC87EFB36DF80(*iParam0) == joaat("bodhi2"))
					{
						func_292(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x839E9476E54502A2(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
				}
				func_291(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x801429C020C467BA(Var5.f_0);
			if (unk_0x5053BF6D5604065B(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0xD504D1FF5DD2FFD7(Var5.f_0, Param2, fParam5, 1, 1);
				unk_0xC9CEB5227A733CE6(*iParam0);
				unk_0xE07FEB47C3650425(*iParam0, 0);
				unk_0xC0C7A9F655DB1456(*iParam0, false);
				unk_0x8100F8AA27EE924B(*iParam0, 1);
				StringCopy(&cVar106, unk_0xC2421167AF5744AC(*iParam0), 16);
				unk_0x09714949CF524B00(*iParam0, 1250);
				unk_0x07C7B5F986353F8B(*iParam0, 1250f);
				unk_0xD1869FA90CC61334(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x408AD7E5AD0BB545(*iParam0, Var5.f_5, Var5.f_6);
				unk_0xC5F406A695E19D8A(*iParam0, Var5.f_7, Var5.f_8);
				unk_0xB4446F1B3498926D(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0xC1DD29CFE93055E7(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0x6C26738F49379AC0(*iParam0, Var5.f_24);
				}
				if (func_294(&uVar1, &uVar0))
				{
					unk_0xAA38ABB77E443507(*iParam0, &uVar1);
					unk_0x0E88E3FDED7F6766(*iParam0, uVar0);
				}
				else
				{
					unk_0xAA38ABB77E443507(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0x93CF2A62AE3C8085())
					{
						unk_0x0E88E3FDED7F6766(*iParam0, Var5.f_26);
					}
				}
				unk_0x2AA0B1D3DB2C3E10(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0x0C27C841171728F7(*iParam0, Var5.f_88);
				unk_0x40B9990275E6AD59(*iParam0, Var5.f_87);
				unk_0x4FD36E73DE133D3F(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0x2706D464EB8463E7(*iParam0, 2, unk_0xB519E5386FBF69E5(Var5.f_92, 28));
				unk_0x2706D464EB8463E7(*iParam0, 3, unk_0xB519E5386FBF69E5(Var5.f_92, 29));
				unk_0x2706D464EB8463E7(*iParam0, 0, unk_0xB519E5386FBF69E5(Var5.f_92, 30));
				unk_0x2706D464EB8463E7(*iParam0, 1, unk_0xB519E5386FBF69E5(Var5.f_92, 31));
				if (unk_0x5349DE586C4C8ACB(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0xED6BC33BD669B45F(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(*iParam0)))
					{
						if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0xE9ECD7D720B42CB4(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0xE9ECD7D720B42CB4(*iParam0, Var5.f_90);
						}
					}
				}
				func_265(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0x270D1E5D25C8646A(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x1B2DC87EFB36DF80(*iParam0) == joaat("bagger") && !Global_99155.f_7699.f_99.f_58[118])
					{
						unk_0xAA38ABB77E443507(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x1B2DC87EFB36DF80(*iParam0) == joaat("bodhi2"))
					{
						func_292(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_99155.f_1750.f_539.f_3544) && Global_99155.f_7699.f_99.f_58[131]) && unk_0x1B2DC87EFB36DF80(*iParam0) == joaat("tailgater"))
				{
					unk_0x16580F6E093503C8(*iParam0, 6, 1, false);
					unk_0x16580F6E093503C8(*iParam0, 14, 7, false);
					unk_0x16580F6E093503C8(*iParam0, 11, 2, false);
					unk_0x16580F6E093503C8(*iParam0, 2, 3, false);
					unk_0x16580F6E093503C8(*iParam0, 7, 5, false);
					unk_0x16580F6E093503C8(*iParam0, 0, 0, false);
					unk_0x16580F6E093503C8(*iParam0, 3, 3, false);
					unk_0x16580F6E093503C8(*iParam0, 13, 1, false);
					unk_0x16580F6E093503C8(*iParam0, 4, 3, false);
					unk_0x16580F6E093503C8(*iParam0, 12, 2, false);
					unk_0xFB0870DB05D28CB1(*iParam0, 22, true);
					unk_0xE9ECD7D720B42CB4(*iParam0, 2);
					unk_0x16580F6E093503C8(*iParam0, 23, 11, false);
					unk_0x40B9990275E6AD59(*iParam0, 2);
					Global_99155.f_1750.f_539.f_3544 = 1;
					func_148(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x839E9476E54502A2(Var5.f_0);
				}
				if (bVar105)
				{
					func_291(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_291(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			Global_88689[iVar0] = iParam0;
			Global_88699[iVar0] = iParam1;
			Global_88709[iVar0] = unk_0x1B2DC87EFB36DF80(iParam0);
			if (unk_0x3937C84F74FAABA4(Global_88709[iVar0]))
			{
				Global_88737[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88737[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_292(var uParam0)
{
	if (!func_293(*uParam0))
	{
		unk_0xC1DD29CFE93055E7(*uParam0, 5, !Global_99155.f_7699.f_99.f_58[119]);
	}
}

bool func_293(int iParam0)
{
	return unk_0xDF705551345526F6(iParam0, 5);
}

int func_294(var uParam0, var uParam1)
{
	if (unk_0x00AAD79B42B3E036())
	{
	}
	else if (Global_99155.f_24567.f_261)
	{
		*uParam0 = { Global_99155.f_24567.f_267 };
		*uParam1 = Global_99155.f_24567.f_271;
		return 1;
	}
	return 0;
}

int func_295(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if ((iParam4 && unk_0xAEF17BDE274A1247()) && unk_0xFF6891E21E7FC193(joaat("startup_positioning")) > 0)
	{
		func_306("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	unk_0x67060D73A7F90F25(uParam0, &Var0, &Var3);
	fVar6 = unk_0xF18329472591CFE6(Var3, Var0, 1);
	if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Param1, 1) < (fVar6 * 0.5f))
	{
		func_287("player is in vehicle bounds - fLength: ", fVar6);
		func_287("player is in vehicle bounds - fDistance: ", unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Param1, 1));
		return 1;
	}
	return 0;
}

int func_296(int iParam0, int iParam1, struct<3> Param2, float fParam5)
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
			if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]) && unk_0xC45A34912542C4EB(Global_88689[iVar0], 0))
			{
				if (unk_0x1B2DC87EFB36DF80(Global_88689[iVar0]) == iVar99 && Global_88699[iVar0] == iParam0)
				{
					if (fParam5 == -1f || unk_0xF18329472591CFE6(unk_0x1141852D07400777(Global_88689[iVar0], 0), Param2, 1) <= fParam5)
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

int func_297(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_649.f_4 == joaat("frogger2"))
		{
			if (((func_299(Local_649.f_4, -1) || func_298(Local_649.f_4, -1)) || unk_0xFF6891E21E7FC193(joaat("exile2")) > 0) || !func_279(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((unk_0xD51CFE69539DB6D8(Global_68105.f_484[20]) && !unk_0x76B2D234F1895632(Global_68105.f_484[20])) && unk_0xC45A34912542C4EB(Global_68105.f_484[20], 0))
		{
			if (Local_649.f_4 == unk_0x1B2DC87EFB36DF80(Global_68105.f_484[20]))
			{
				unk_0x95C00B12C5FCA494(Global_68105.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_649.f_10 && iVar1 == Local_649.f_11)
				{
					func_169(20);
				}
			}
		}
	}
	return 0;
}

int func_298(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = unk_0x46B0F3CB5DC1CDFC(Local_649, 200f, iParam0, iVar0);
	if ((unk_0xD51CFE69539DB6D8(iVar1) && unk_0xC45A34912542C4EB(iVar1, 0)) && unk_0x1B2DC87EFB36DF80(iVar1) == iParam0)
	{
		if (iParam1 == -1 || unk_0x90DC8CCD4852ECAA(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_299(int iParam0, int iParam1)
{
	var uVar0[50];
	int iVar51;
	int iVar52;
	
	iVar52 = unk_0x03FA0C4EFCD138FB(unk_0xE7869D5D7816A9B6(), &uVar0);
	iVar51 = 0;
	while (iVar51 < iVar52)
	{
		if ((unk_0xD51CFE69539DB6D8(uVar0[iVar51]) && unk_0xC45A34912542C4EB(uVar0[iVar51], 0)) && unk_0x1B2DC87EFB36DF80(uVar0[iVar51]) == iParam0)
		{
			if (iParam1 == -1 || unk_0x90DC8CCD4852ECAA(uVar0[iVar51]) == iParam1)
			{
				return 1;
			}
		}
		iVar51++;
	}
	return 0;
}

int func_300(int iParam0)
{
	if (Global_35619 == 15)
	{
		return 0;
	}
	if (func_247(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_301()
{
	return Global_68105.f_138;
}

float func_302(int iParam0)
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

void func_303(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	iVar2 = func_255(*uParam0);
	iVar3 = func_254(*uParam0);
	iVar4 = func_253(*uParam0);
	iVar5 = func_252(*uParam0);
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
	func_304(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_304(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, iParam1);
	func_38(uParam0, iParam2);
	func_37(uParam0, iParam3);
	func_31(uParam0, iParam5);
	func_32(uParam0, iParam4);
	func_30(uParam0, iParam6);
}

void func_305(int iParam0)
{
	if (unk_0xB519E5386FBF69E5(Local_649.f_9, 13))
	{
		func_325(iParam0, 0);
	}
}

void func_306(char* sParam0)
{
	if (!unk_0xF6917DE0E003509D(sParam0))
	{
	}
}

void func_307(char* sParam0, int iParam1)
{
	if (!unk_0xF6917DE0E003509D(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_308(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
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
	if (bVar0 && unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Var1, 1) < 250f)
	{
		if (!unk_0xD51CFE69539DB6D8(uLocal_833[iVar5]))
		{
			unk_0x801429C020C467BA(iVar6);
			iLocal_840 = 1;
			if (unk_0x5053BF6D5604065B(iVar6))
			{
				if (iLocal_840)
				{
					uLocal_833[iVar5] = unk_0x9F532DC7E7245BF9(iVar6, Var1, 0, 1, 0);
					unk_0x11089405D5CD3FD2(uLocal_833[iVar5], 0f, 0f, fVar4, 2, 1);
					unk_0xACCAB3093F327084(uLocal_833[iVar5], 0);
					unk_0x2878EC06B3F897A0(uLocal_833[iVar5], 1);
					unk_0x839E9476E54502A2(iVar6);
					iLocal_840 = 0;
				}
			}
		}
	}
	else if (iVar5 != -1)
	{
		if ((unk_0xD51CFE69539DB6D8(uLocal_833[iVar5]) && !unk_0xD525F9D50CBB6A5D(uLocal_833[iVar5])) && unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Var1, 1) > 255f)
		{
			unk_0xD4E454973E16D31B(&(uLocal_833[iVar5]));
			if (iLocal_840)
			{
				unk_0x839E9476E54502A2(iVar6);
				iLocal_840 = 0;
			}
		}
	}
}

void func_309(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (func_46(iParam0, 0) && (!unk_0xB519E5386FBF69E5(Local_649.f_9, 14) || func_46(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_68105.f_346[iParam0] != bVar0)
	{
		if (!func_4(Local_649.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_68105.f_346[iParam0])
				{
					unk_0x3AD14BFC20FCADDB(Global_68105.f_415[iParam0], 0);
				}
			}
			else if (!Global_68105.f_346[iParam0])
			{
				Global_68105.f_415[iParam0] = unk_0x8668A841B325FF16(Local_649.f_15, Local_649.f_18, 0, 1, 1, 1);
			}
		}
		Global_68105.f_346[iParam0] = bVar0;
	}
}

void func_310(int iParam0)
{
	int iVar0;
	
	if (unk_0xB519E5386FBF69E5(Local_649.f_9, 15))
	{
		if (func_46(iParam0, 0) && !func_46(iParam0, 5))
		{
			iVar0 = 145;
			if (unk_0xB519E5386FBF69E5(Local_649.f_9, 16))
			{
				iVar0 = func_311(9);
			}
			else if (unk_0xB519E5386FBF69E5(Local_649.f_9, 18))
			{
				iVar0 = func_311(4);
			}
			if (iVar0 == Local_649.f_12)
			{
				func_216(iParam0, 5, 1);
			}
		}
	}
}

int func_311(int iParam0)
{
	return Global_99155.f_29353[iParam0 /*4*/];
}

void func_312(int iParam0)
{
	if (func_46(iParam0, 0) && !func_46(iParam0, 3))
	{
		if (unk_0xB519E5386FBF69E5(Local_649.f_9, 4))
		{
			func_216(iParam0, 3, 1);
		}
		else
		{
			func_216(iParam0, 3, 1);
		}
	}
}

void func_313(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_46(iParam0, 0) && bLocal_648)
	{
		if (unk_0xB519E5386FBF69E5(Local_649.f_9, 0) || (unk_0xB519E5386FBF69E5(Local_649.f_9, 2) && !func_46(iParam0, 2)))
		{
			if ((!unk_0xB519E5386FBF69E5(Local_649.f_9, 21) || (((((((!func_10(0) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(9)) && !func_10(10)) && !func_10(13)) && !func_10(14))) && ((unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) == 0 || func_46(iParam0, 5)) || !unk_0xB519E5386FBF69E5(Local_649.f_9, 28)))
			{
				bVar0 = false;
				if (!unk_0xD11595488376CB53(Global_68105.f_208[iParam0]))
				{
					if (func_279(0))
					{
						if (unk_0xB519E5386FBF69E5(Local_649.f_9, 14) && !func_46(iParam0, 5))
						{
							Global_68105.f_208[iParam0] = unk_0x3779A616B93955A6(Local_670.f_55);
							if (Local_670.f_58 != -1)
							{
								unk_0xD65A9304AF8AC06F(Global_68105.f_208[iParam0], Local_670.f_58);
								if (!unk_0xF6917DE0E003509D(&(Local_670.f_59)))
								{
									unk_0x227FC39A4871C64F(Global_68105.f_208[iParam0], &(Local_670.f_59));
								}
							}
						}
						else if (func_46(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_68105.f_208[iParam0] = unk_0x3779A616B93955A6(Local_670.f_55);
							if (Local_649.f_13 != -1)
							{
								unk_0xD65A9304AF8AC06F(Global_68105.f_208[iParam0], Local_649.f_13);
								if (!unk_0xF6917DE0E003509D(&(Local_670.f_59)))
								{
									unk_0x227FC39A4871C64F(Global_68105.f_208[iParam0], &(Local_670.f_59));
								}
								if (Local_649.f_12 == 0)
								{
									iVar1 = 42;
								}
								else if (Local_649.f_12 == 1)
								{
									iVar1 = 43;
								}
								else if (Local_649.f_12 == 2)
								{
									iVar1 = 44;
								}
								unk_0xA887303978A245B8(Global_68105.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_68105.f_208[iParam0] = unk_0x3779A616B93955A6(Local_649);
							if (Local_649.f_13 != -1)
							{
								unk_0xD65A9304AF8AC06F(Global_68105.f_208[iParam0], Local_649.f_13);
								if (!unk_0xF6917DE0E003509D(&(Local_670.f_59)))
								{
									unk_0x227FC39A4871C64F(Global_68105.f_208[iParam0], &(Local_670.f_59));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_649.f_12 == 0)
									{
										iVar2 = 42;
									}
									else if (Local_649.f_12 == 1)
									{
										iVar2 = 43;
									}
									else if (Local_649.f_12 == 2)
									{
										iVar2 = 44;
									}
									unk_0xA887303978A245B8(Global_68105.f_208[iParam0], iVar2);
								}
							}
						}
						unk_0x62D401A5D1298E20(Global_68105.f_208[iParam0], !unk_0xB519E5386FBF69E5(Local_649.f_9, 1));
						unk_0xDBFA9591B1E30DFA(Global_68105.f_208[iParam0], 0);
						unk_0xA09285173B92875E(Global_68105.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (unk_0xD11595488376CB53(Global_68105.f_208[iParam0]))
		{
			unk_0x5B62CAB9B0D6ABF1(&(Global_68105.f_208[iParam0]));
		}
	}
}

void func_314(int iParam0)
{
	if (func_46(iParam0, 0) && !func_46(iParam0, 1))
	{
		if (func_46(iParam0, 4))
		{
			if (unk_0xB519E5386FBF69E5(Local_649.f_9, 3))
			{
				func_315(&(Local_649.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_216(iParam0, 1, 1);
			}
			else
			{
				func_216(iParam0, 1, 1);
			}
		}
	}
}

void func_315(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_177(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_316(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xB519E5386FBF69E5(Local_649.f_9, 7) || Local_649.f_12 == iLocal_647)
	{
		bLocal_648 = true;
	}
	else
	{
		bLocal_648 = false;
	}
	if (func_10(14))
	{
		bLocal_648 = false;
	}
	if ((bLocal_648 && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6())) && unk_0xB519E5386FBF69E5(Local_649.f_9, 14))
	{
		if (Local_402.f_2 == 0 && Local_402.f_3 == 0)
		{
			if (uLocal_916[iParam0] < Local_402.f_1 || Local_402.f_0 == iParam0)
			{
				if (Local_402.f_0 != iParam0)
				{
					Local_402.f_8 = { Local_649 };
					Local_402.f_29 = { Local_670 };
					Local_402.f_0 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_68105.f_592)
					{
						Global_68105.f_592[iVar0] = -1;
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
						iVar2 = func_107(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_68105.f_592)
							{
								switch (Local_402.f_6)
								{
									case 3:
										if (func_44(iVar2))
										{
											Global_68105.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (unk_0xFFD2CE10E8C7E77F(iVar2))
										{
											Global_68105.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((unk_0xAA65D1F2BF4AAFFB(iVar2) || unk_0xD4023077B0753359(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_68105.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_45(iVar2))
										{
											Global_68105.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_402.f_1 = uLocal_916[iParam0];
			}
		}
	}
	else if (Local_402.f_0 == iParam0)
	{
		Local_402.f_0 = -1;
		Local_402.f_1 = 99999.99f;
	}
	if (!unk_0xB519E5386FBF69E5(uLocal_48[iParam0], 0))
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_139[iParam0]))
		{
			if (unk_0xC45A34912542C4EB(Global_68105.f_139[iParam0], 0))
			{
				if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Global_68105.f_139[iParam0], 0))
					{
						if (!unk_0xB519E5386FBF69E5(uLocal_48[iParam0], 1) || unk_0xB519E5386FBF69E5(uLocal_48[iParam0], 3))
						{
							unk_0x9956FB0E4B50ECB8(&(uLocal_48[iParam0]), 0);
							func_216(iParam0, 4, 1);
							func_216(iParam0, 2, 1);
						}
					}
					else
					{
						unk_0x9956FB0E4B50ECB8(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((unk_0xD51CFE69539DB6D8(Global_68105.f_484[iParam0]) && unk_0xC45A34912542C4EB(Global_68105.f_484[iParam0], 0)) && unk_0x1B2DC87EFB36DF80(Global_68105.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_1005)
			{
				if (unk_0x22E902D6AF27E232(Global_68105.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
				{
					unk_0xCEAECA0EA263DF86(Global_68105.f_484[iParam0], 0f);
					iLocal_1005 = 1;
				}
			}
			else if (!unk_0x22E902D6AF27E232(Global_68105.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
			{
				unk_0xCEAECA0EA263DF86(Global_68105.f_484[iParam0], 1f);
				iLocal_1005 = 0;
			}
		}
		else
		{
			iLocal_1005 = 0;
		}
	}
}

int func_317()
{
	return 1;
}

var func_318(var uParam0, int iParam1)
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

int func_319()
{
	func_320();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_320()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_277(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_276(unk_0xE7869D5D7816A9B6());
			if (func_8(iVar0) && (!func_10(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_8(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

void func_321()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD11595488376CB53(Global_68105.f_208[iVar0]))
		{
			unk_0x5B62CAB9B0D6ABF1(&(Global_68105.f_208[iVar0]));
		}
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_139[iVar0]))
		{
			if (unk_0xC45A34912542C4EB(Global_68105.f_139[iVar0], 0))
			{
				unk_0xC1F2137782A816E9(&(Global_68105.f_139[iVar0]));
				Global_68105.f_139[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (unk_0xCF686B56FD5328B5(Local_402.f_110))
	{
		unk_0x63498CF6CF35C6A2(Local_402.f_110, 0);
		unk_0x74FF6D08DE291367(Local_402.f_110, 0);
	}
	if (unk_0xCF686B56FD5328B5(Local_402.f_111))
	{
		unk_0x63498CF6CF35C6A2(Local_402.f_111, 0);
		unk_0x74FF6D08DE291367(Local_402.f_111, 0);
	}
	if (Local_402.f_3 != 0)
	{
		func_165();
		unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 0);
	}
	if (unk_0xD11595488376CB53(Global_68105.f_583))
	{
		unk_0x5B62CAB9B0D6ABF1(&(Global_68105.f_583));
	}
	if (iLocal_631 != -1)
	{
		func_48(&iLocal_631);
	}
	if (iLocal_630 != -1)
	{
		func_48(&iLocal_630);
	}
	if (Local_402.f_5 != -1)
	{
		func_48(&(Local_402.f_5));
	}
	if (iLocal_643 != -1)
	{
		func_48(&iLocal_643);
	}
	if (Local_402.f_3 > 0)
	{
		if (Global_68105.f_577)
		{
			func_146(47, 1);
			func_144(47, 1);
			Global_68105.f_577 = 0;
			Local_402.f_3 = 0;
		}
	}
	Global_68105.f_553 = 0;
	unk_0x52F20802944F8DCE();
}

void func_322()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0xD51CFE69539DB6D8(uLocal_393[iVar0]))
		{
			unk_0xD4E454973E16D31B(&(uLocal_393[iVar0]));
		}
		iVar0++;
	}
}

void func_323(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0xB519E5386FBF69E5(iLocal_911[iVar0], iVar1))
	{
		unk_0x9956FB0E4B50ECB8(&(iLocal_911[iVar0]), iVar1);
		iLocal_842[iLocal_841] = iParam0;
		iLocal_841++;
	}
}

void func_324()
{
	int iVar0;
	
	if (func_187(25))
	{
		if (Global_99155.f_18731.f_69[22 /*78*/].f_66 != 0 && !func_21(Global_99155.f_18731.f_69[22 /*78*/].f_66))
		{
			Global_99155.f_18731.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_99155.f_18731.f_69[22 /*78*/].f_77 = 0;
			Global_99155.f_18731.f_69[22 /*78*/].f_65 = 0;
			Global_99155.f_18731.f_69[22 /*78*/].f_62 = 255;
			Global_99155.f_18731.f_69[22 /*78*/].f_63 = 255;
			Global_99155.f_18731.f_69[22 /*78*/].f_64 = 255;
			Global_99155.f_18731.f_69[22 /*78*/].f_5 = 0;
			Global_99155.f_18731.f_69[22 /*78*/].f_6 = 0;
			Global_99155.f_18731.f_69[22 /*78*/].f_7 = 0;
			Global_99155.f_18731.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_99155.f_18731.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_99155.f_18731.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_187(21) && Global_99155.f_18731.f_69[9 /*78*/].f_66 != 0) && !func_21(Global_99155.f_18731.f_69[9 /*78*/].f_66))
	{
		Global_99155.f_18731.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_187(22) && Global_99155.f_18731.f_69[10 /*78*/].f_66 != 0) && !func_21(Global_99155.f_18731.f_69[10 /*78*/].f_66))
	{
		Global_99155.f_18731.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_187(23) && Global_99155.f_18731.f_69[11 /*78*/].f_66 != 0) && !func_21(Global_99155.f_18731.f_69[11 /*78*/].f_66))
	{
		Global_99155.f_18731.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_187(26) && !func_21(Global_99155.f_18731.f_69[12 /*78*/].f_66))
	{
		func_325(26, 0);
	}
	if (func_187(27) && !func_21(Global_99155.f_18731.f_69[13 /*78*/].f_66))
	{
		func_325(27, 0);
	}
	if (func_187(28) && !func_21(Global_99155.f_18731.f_69[14 /*78*/].f_66))
	{
		func_325(28, 0);
	}
	if (func_187(29) && !func_21(Global_99155.f_18731.f_69[15 /*78*/].f_66))
	{
		func_325(29, 0);
	}
	if (func_187(30) && !func_21(Global_99155.f_18731.f_69[16 /*78*/].f_66))
	{
		func_325(30, 0);
	}
	if (func_187(31) && !func_21(Global_99155.f_18731.f_69[17 /*78*/].f_66))
	{
		func_325(31, 0);
	}
	if (func_187(32) && !func_21(Global_99155.f_18731.f_69[18 /*78*/].f_66))
	{
		func_325(32, 0);
	}
	if (func_187(33) && !func_21(Global_99155.f_18731.f_69[19 /*78*/].f_66))
	{
		func_325(33, 0);
	}
	if (func_187(34) && !func_21(Global_99155.f_18731.f_69[20 /*78*/].f_66))
	{
		func_325(34, 0);
	}
}

void func_325(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_46(iParam0, 0))
		{
			func_216(iParam0, 1, 0);
			func_216(iParam0, 2, 0);
			func_216(iParam0, 3, 0);
			func_216(iParam0, 4, 0);
			func_216(iParam0, 0, 1);
			Global_68105[iParam0] = 1;
		}
	}
	else
	{
		func_216(iParam0, 0, 0);
	}
}

int func_326()
{
	return 0;
}

int func_327()
{
	return 1;
}

int func_328()
{
	return 1;
}

int func_329()
{
	if (unk_0x3442D8DA379C5187(-1226939934))
	{
		return 1;
	}
	return 0;
}

