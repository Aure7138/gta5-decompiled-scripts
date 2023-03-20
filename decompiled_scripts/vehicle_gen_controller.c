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
	struct<54> Local_750 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_886[3] = { 0, 0, 0 };
	int iLocal_890 = 0;
	var uLocal_891[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	int iLocal_962 = 0;
	int iLocal_963 = 0;
	int iLocal_964 = 0;
	bool bLocal_965 = 0;
	int iLocal_966 = 0;
	int iLocal_967 = 0;
	bool bLocal_968 = 0;
	char cLocal_969[16] = "";
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	char cLocal_973[16] = "";
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	int iLocal_980 = 0;
	int iLocal_981 = 0;
	int iLocal_982 = 0;
	int iLocal_983 = 0;
	int iLocal_984 = 0;
	char* sLocal_985 = NULL;
	int iLocal_986 = 0;
	int iLocal_987 = 0;
	float fLocal_988 = 0f;
	int iLocal_989 = 0;
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
	iLocal_890 = -1;
	unk_0xFF9F94FD851C212A(0);
	Local_401.f_5 = -1;
	Local_401.f_0 = -1;
	Local_401.f_1 = 99999.99f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_87826[iVar0 /*3*/][0] = -1;
		Global_87826[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_97439.f_18371.f_4250)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_97439.f_18371.f_1430[0 /*939*/].f_626[iVar0] = -15;
			Global_97439.f_18371.f_1430[1 /*939*/].f_626[iVar0] = -15;
			Global_97439.f_18371.f_1430[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_97439.f_18371.f_1382[iVar0] = -1f;
			iVar0++;
		}
		Global_97439.f_18371.f_4249 = -15;
		Global_97439.f_18371.f_4250 = 1;
	}
	if (((!func_323() && !func_322()) && !func_321()) && !func_320())
	{
		func_319(60, 0);
		func_319(61, 0);
	}
	func_318();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_317(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_400)
		{
			iLocal_400 = 1;
			if (unk_0x2C897F101BA20806(98))
			{
				if (unk_0xFD54CAF11B66B874() == 64)
				{
					if (!Global_68183)
					{
						iLocal_400 = 0;
					}
					else
					{
						func_316();
						func_315();
					}
					Global_68183 = 0;
				}
				else
				{
					func_316();
					func_315();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x859611E75BD62D76() != 5)
		{
			iLocal_646 = func_313();
			func_274();
			func_272();
			func_253();
			func_11();
			func_3();
			func_1(&uLocal_960);
		}
	}
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1320752.f_21)
	{
		iVar1 = func_2(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1320752.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = unk_0x4FE1CB0AB49538B6(iVar0);
			if (Global_1320752[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1320752[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = unk_0x822088C98300808F(iVar0);
			if (Global_1320752[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1320752[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = unk_0x2FADF719E0C25113(iVar0);
			}
			else
			{
				fVar2 = unk_0x39A603EDBD44801F(iVar0);
			}
			if (Global_1320752[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1320752[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = unk_0x5FD13407142713BD(iVar0);
			if (Global_1320752[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1320752[*uParam0 /*5*/][2] = fVar2;
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
	
	if (unk_0x5660C8AFDD9C1721(Global_67218.f_583))
	{
		bVar0 = false;
		if (iLocal_646 != Global_67218.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_10(0) || func_10(3)) || func_10(2)) || func_10(4)) || func_10(13)) || func_10(14))
		{
			bVar0 = true;
		}
		else if (Global_67218.f_590)
		{
			if (!func_9(Global_67218.f_584, unk_0x19E074E292E9B9F6(Global_67218.f_583), 1056964608, 0) || func_5(Global_67218.f_582, func_6(Global_67218.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_67218.f_591)
		{
			if (!func_9(Global_67218.f_587, unk_0x19E074E292E9B9F6(Global_67218.f_583), 1056964608, 0) || func_5(Global_67218.f_582, func_6(Global_67218.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!unk_0x538DF9E5B1DF01EB(Global_67218.f_581) || !unk_0xECFECDAD51A6184F(Global_67218.f_581, 0)) || (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), Global_67218.f_581, 0)))
		{
			if (unk_0x538DF9E5B1DF01EB(Global_67218.f_581) && !unk_0xECFECDAD51A6184F(Global_67218.f_581, 0))
			{
				Global_67218.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (unk_0x538DF9E5B1DF01EB(Global_67218.f_581))
		{
			if (unk_0xECFECDAD51A6184F(Global_67218.f_581, 0))
			{
				Global_67218.f_587 = { unk_0xBF8499F46AD9093A(Global_67218.f_581, 1) };
			}
			else
			{
				Global_67218.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			unk_0xB6FB9702660D84F6(&(Global_67218.f_583));
			Global_67218.f_590 = 0;
			Global_67218.f_591 = 0;
			Global_67218.f_581 = 0;
		}
	}
	else
	{
		Global_67218.f_590 = 0;
		Global_67218.f_591 = 0;
		Global_67218.f_581 = 0;
	}
	if ((((((!unk_0x5660C8AFDD9C1721(Global_67218.f_583) && !func_10(0)) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(13)) && !func_10(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_87788[iVar2] != 145 && Global_87798[iVar2] != 0) && unk_0x538DF9E5B1DF01EB(Global_87778[iVar2])) && unk_0xECFECDAD51A6184F(Global_87778[iVar2], 0)) && !unk_0x5660C8AFDD9C1721(unk_0xCC3EDA2EA7E24302(Global_87778[iVar2]))) && Global_87788[iVar2] == iLocal_646) && unk_0xD548A98EDA33C15A(unk_0xA609E58449080951(Global_87778[iVar2])))
			{
				if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && !unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), Global_87778[iVar2], 0))
				{
					Global_67218.f_581 = Global_87778[iVar2];
					Global_67218.f_582 = iLocal_646;
					Global_67218.f_590 = 0;
					Global_67218.f_583 = unk_0xDF78B7F06503567E(Global_67218.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!unk_0x5660C8AFDD9C1721(Global_67218.f_583) && !func_4(Global_67218.f_584, 0f, 0f, 0f, 0))
			{
				Global_67218.f_581 = 0;
				Global_67218.f_582 = iLocal_646;
				Global_67218.f_590 = 1;
				Global_67218.f_583 = unk_0x64F646E6A974BF18(Global_67218.f_584);
			}
			if (!unk_0x5660C8AFDD9C1721(Global_67218.f_583) && !func_4(Global_67218.f_587, 0f, 0f, 0f, 0))
			{
				Global_67218.f_581 = 0;
				Global_67218.f_582 = iLocal_646;
				Global_67218.f_591 = 1;
				Global_67218.f_583 = unk_0x64F646E6A974BF18(Global_67218.f_587);
			}
		}
		else
		{
			Global_67218.f_590 = 0;
			Global_67218.f_591 = 0;
		}
		if (unk_0x5660C8AFDD9C1721(Global_67218.f_583))
		{
			unk_0x2025496D9184D312(Global_67218.f_583, 225);
			unk_0xFDA1FE98ECD75505(Global_67218.f_583, "PVEHICLE");
			unk_0xABBBFFE76352EBB5(Global_67218.f_583, false);
			unk_0x85C00B9AEF9CC0BE(Global_67218.f_583, 3);
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
			unk_0x1AD45E3CF020D50D(Global_67218.f_583, iVar3);
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
		if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar1]) && unk_0xECFECDAD51A6184F(Global_87778[iVar1], 0))
		{
			if (Global_87788[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == unk_0xA609E58449080951(Global_87778[iVar1]))
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
	struct<58> Var0;
	
	if (func_8(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
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
	
	uParam1->f_64 = 1;
	uParam1->f_60 = 255;
	uParam1->f_61 = 255;
	uParam1->f_62 = 255;
	uParam1->f_73 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_97439.f_7341.f_99.f_58[128] && !Global_97439.f_7341.f_99.f_58[131])
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
					if (Global_97439.f_7341.f_99.f_58[119])
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
			else if (Global_97439.f_7341.f_99.f_58[118])
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
		if (unk_0x3545D662A0A53653((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x3545D662A0A53653((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x3545D662A0A53653((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x3545D662A0A53653((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x3545D662A0A53653((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_10(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_11()
{
	func_196();
	func_139();
	func_47();
	func_12();
}

void func_12()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (((((Local_401.f_29.f_80 && !Local_401.f_29.f_69) && Local_401.f_0 != -1) && func_46(Local_401.f_0, 0)) && func_46(Local_401.f_0, 5)) && unk_0x16CDA1894CFE0781(joaat("michael1")) == 0)
		{
			if (!unk_0x538DF9E5B1DF01EB(Local_401.f_113))
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0x538DF9E5B1DF01EB(iVar0) && unk_0xECFECDAD51A6184F(iVar0, 0))
					{
						iVar1 = unk_0xA609E58449080951(iVar0);
						if (func_43(iVar1))
						{
							Local_401.f_113 = iVar0;
						}
					}
				}
			}
			else if (unk_0xECFECDAD51A6184F(Local_401.f_113, 0) && func_43(unk_0xA609E58449080951(Local_401.f_113)))
			{
				if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), Local_401.f_113, 0))
				{
					if (unk_0x0852C405AF94F670(Local_401.f_113, Local_401.f_29.f_48, Local_401.f_29.f_51, Local_401.f_29.f_54, 0, 1, 0))
					{
						if ((!func_42(Local_401.f_113) && !func_41(Local_401.f_113)) && Local_401.f_113 != Global_67218.f_484[Local_401.f_0])
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
	if (!func_40(&(Global_67218.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x889D01384B54BCE3(Global_67218.f_555[0 /*21*/].f_9, 12) && !unk_0x889D01384B54BCE3(Global_67218.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67218.f_555[0 /*21*/].f_4 != unk_0xA609E58449080951(iParam1))
		{
			return;
		}
	}
	if (Global_68125 != -1 && Global_68125 != iParam0)
	{
		return;
	}
	if (unk_0x538DF9E5B1DF01EB(iParam1))
	{
		if (unk_0xECFECDAD51A6184F(iParam1, 0))
		{
			if (!unk_0x22349EC06EA5B08B(iParam1))
			{
				unk_0x7B9576B4E099FB1F(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_97439.f_18371.f_4249 = func_29();
			}
			if (iParam1 != Global_67218.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_28(iParam0);
					if ((unk_0x538DF9E5B1DF01EB(iVar0) && unk_0xECFECDAD51A6184F(iVar0, 0)) && iParam1 != iVar0)
					{
						func_14(iVar0, 145);
					}
				}
				Global_68124 = iParam1;
				Global_68125 = iParam0;
				Global_68126 = iParam2;
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
		iVar0 = unk_0xD8A521688BDBE867(iParam0, -1);
		if (!unk_0x538DF9E5B1DF01EB(iVar0))
		{
			iVar0 = unk_0x728F548A96B6E588(iParam0, -1);
		}
		if (unk_0x538DF9E5B1DF01EB(iVar0) && !unk_0x2DE0B96E966FD817(iVar0))
		{
			if (unk_0xA609E58449080951(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xA609E58449080951(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xA609E58449080951(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97439.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xA609E58449080951(iParam0) == Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x06771AF7795B3ECF(&(Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x9BA82E09A986BA4B(unk_0xC2E0CBF2F000307B(iParam0), &(Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97439.f_18371.f_4800[iVar1] = iVar2;
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
		if (unk_0xA609E58449080951(iParam0) == Global_97439.f_18371.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x06771AF7795B3ECF(&(Global_97439.f_18371.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x9BA82E09A986BA4B(unk_0xC2E0CBF2F000307B(iParam0), &(Global_97439.f_18371.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97439.f_18371.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97439.f_18371.f_4798 = iParam1;
	Global_68123 = iParam0;
	Global_97439.f_18371.f_4796 = 1;
	func_15(iParam0, &(Global_97439.f_18371.f_4742));
}

void func_15(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		func_18(uParam1);
		uParam1->f_42 = unk_0xA609E58449080951(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC2E0CBF2F000307B(iParam0), 16);
		*uParam1 = unk_0x6E1ADA6FBEC091EA(iParam0);
		unk_0xABDA00D6C410A603(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xACCED888DA80AA1F(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x27BCAE1F10710BEC(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x4EC2A3086F931215(iParam0);
		uParam1->f_43 = unk_0x960D1BE7E376200B(iParam0);
		uParam1->f_45 = unk_0xD9197C47F38990D8(iParam0);
		uParam1->f_46 = unk_0x5812ABBDAA06BE4A(iParam0);
		unk_0x59A2942E7145EFA4(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xB49AB41D753BA09F(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0x5792E99920C570FD(iParam0, 2))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 28);
		}
		if (unk_0x5792E99920C570FD(iParam0, 3))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 29);
		}
		if (unk_0x5792E99920C570FD(iParam0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 30);
		}
		if (unk_0x5792E99920C570FD(iParam0, 1))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0xE19742BCB95B6E28(iParam0, 0))
		{
			uParam1->f_44 = unk_0xBE52DF6606B79B2D(iParam0);
		}
		if (unk_0xEE41D6C2DA208994(uParam1->f_42))
		{
			if (unk_0xC9F64E53159B529B(iParam0))
			{
				switch (unk_0xFA2BD89016FF31B2(iParam0))
				{
					case 2:
					case 0:
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 23);
						unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 23);
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x9610401E9E4D05A2(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 9);
		}
		if (unk_0xA83FD3D7530A5908(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 10);
		}
		if (unk_0x7CFBF44D83E4C08F(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 13);
			unk_0x37565B4952524D39(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x61BB59E7B67E3575(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 12);
		}
		func_17(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5624226E4F913C53(iParam0, iVar0 + 1))
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), func_16(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x8A627BCE7B3FB070(iParam0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(uParam1->f_53), 11);
		}
		if (unk_0x53D28141CF743B83(iParam0, "IgnoredByQuickSave") && unk_0x258D2FF40E1E3219(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(uParam1->f_53), 27);
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
	
	if (!unk_0xECFECDAD51A6184F(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x1496C675F4DE04ED(*iParam0) == 0)
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
			if (unk_0xA71DB4975987C018(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x9602B91EC545B1EA(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x362B5E7A7FB4996C(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x362B5E7A7FB4996C(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_18(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_19(int iParam0)
{
	if ((((((((((!unk_0x538DF9E5B1DF01EB(iParam0) || !unk_0xECFECDAD51A6184F(iParam0, 0)) || func_26(iParam0, 0, 0)) || func_26(iParam0, 1, 0)) || func_26(iParam0, 2, 0)) || func_25(iParam0) != 145) || func_24(iParam0)) || func_42(iParam0)) || func_41(iParam0)) || func_23(iParam0)) || !func_20(unk_0xA609E58449080951(iParam0)))
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
	if (((unk_0xD18BE100522E5F15(iParam0) || unk_0xEE41D6C2DA208994(iParam0)) || unk_0x38B61EB14C5FBA9E(iParam0)) || unk_0xEEE07492AE30B7BC(iParam0))
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
	if (!unk_0xD3B644BC9C4BCCE4(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1DAD7CE53BEE7710())) || (iParam0 == joaat("buffalo3") && !unk_0x1DAD7CE53BEE7710())) || (iParam0 == joaat("gauntlet2") && !unk_0x1DAD7CE53BEE7710())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1DAD7CE53BEE7710())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_22())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x1D6BD62DDF942BDF())
		{
			if (unk_0x12A9DA9E48BF64B0(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xA90142E282A42D80(Var1.f_0))
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
		if ((((!func_323() && !func_322()) && !func_321()) && !func_320()) && !func_22())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x9F979F481F18EB48() || unk_0xF6BAF9F0C2863FFE()) || unk_0x660675ADB09E441F())
		{
		}
		else if (!func_321())
		{
			return 0;
		}
	}
	return 1;
}

int func_22()
{
	var uVar0;
	
	if (unk_0xCEFAE6CD543A0383())
	{
		if (unk_0x889D01384B54BCE3(unk_0x7058289E8DD601D6(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131779 == 2)
	{
		return 1;
	}
	if (unk_0x6B7032CA494CCEE4())
	{
		if (unk_0x07ED3AB0A86F77AA())
		{
			if (unk_0xB7DEA1403E206005())
			{
				if (unk_0xCEFAE6CD543A0383())
				{
					uVar0 = unk_0x7058289E8DD601D6(866);
					unk_0xD0E2BFCE93AE3ABD(&uVar0, 0);
					unk_0xBE2CD6E2863337FA(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_23(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xA609E58449080951(iParam0);
	uVar1 = unk_0xC2E0CBF2F000307B(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x9BA82E09A986BA4B(uVar1, "LAMAR G "))
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
	
	if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[24]))
	{
		if (iParam0 == Global_67218.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67218.f_484[iVar0])
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
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 145;
	}
	if (!unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]))
		{
			if (Global_87778[iVar0] == iParam0)
			{
				return Global_87788[iVar0];
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
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0) || !unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_27(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x889D01384B54BCE3(Global_97439.f_5486[iVar9], 0))
		{
			if (unk_0x83A989DB79B98F45(&sVar1, iParam0))
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
	return Global_67218.f_139[iParam0];
}

int func_29()
{
	var uVar0;
	
	func_39(&uVar0, unk_0x4952CA33C6DB5AD4());
	func_38(&uVar0, unk_0x26ADBF0B08315387());
	func_37(&uVar0, unk_0xBE59E3811BD4FDD7());
	func_32(&uVar0, unk_0xA3730885141EEA96());
	func_31(&uVar0, unk_0x1EFE4ED658D22AF3());
	func_30(&uVar0, unk_0x4C29EAF01B84254C());
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_35(unk_0x889D01384B54BCE3(iParam0, 31), -1, 1)) + 2011;
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
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_6(0, 1);
			uParam0->f_12 = 0;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_6(1, 1);
			uParam0->f_12 = 1;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_6(1, 2);
			uParam0->f_12 = 1;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 19);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_6(1, 1);
			uParam0->f_12 = 1;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_6(1, 2);
			uParam0->f_12 = 1;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 19);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_6(2, 1);
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_6(2, 1);
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_6(2, 1);
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 22);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 22);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 22);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 24);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 24);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 24);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 29);
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
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 27);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 24);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 29);
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
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 27);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 24);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 29);
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
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 27);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 24);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 11);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 13);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 11);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 13);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 9);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 9);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 8);
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
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 2);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 30);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 2);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 22);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
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
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 13);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 2);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 1);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
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
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 13);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 2);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 1);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 30);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 30);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x889D01384B54BCE3(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_97439.f_18371.f_69[uParam0->f_14 /*54*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_4(Global_97439.f_18371.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_97439.f_18371.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_97439.f_18371.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_97439.f_18371.f_1382[uParam0->f_14];
		}
	}
	if (unk_0x889D01384B54BCE3(uParam0->f_9, 19))
	{
		if (!func_4(Global_97439.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_97439.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97439.f_1729.f_539.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x889D01384B54BCE3(uParam0->f_9, 20))
	{
		if (!func_4(Global_97439.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_97439.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97439.f_1729.f_539.f_2549[0 /*4*/][uParam0->f_12];
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
		if (unk_0x538DF9E5B1DF01EB(Global_87808[iVar0]))
		{
			if (Global_87808[iVar0] == iParam0)
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
	
	if (unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]) && unk_0xECFECDAD51A6184F(Global_87778[iVar0], 0))
			{
				if (Global_87778[iVar0] == iParam0 && unk_0xA609E58449080951(Global_87778[iVar0]) == unk_0xA609E58449080951(iParam0))
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
			if (((unk_0xD18BE100522E5F15(iParam0) || unk_0x9651110A188939C8(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_44(iParam0);
			break;
		
		case 2:
			return (unk_0x38B61EB14C5FBA9E(iParam0) && iParam0 != joaat("skylift"));
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
	if (((!unk_0xD548A98EDA33C15A(iParam0) && !unk_0x2FDD93A1F5E63663(iParam0)) && !unk_0x271F7EEEF6BC4943(iParam0)) && !unk_0x74FBEA30BE72F22B(iParam0))
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
	if ((((!unk_0xEE41D6C2DA208994(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
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
	return unk_0x889D01384B54BCE3(Global_97439.f_18371[iParam0], iParam1);
}

void func_47()
{
	struct<54> Var0;
	struct<54> Var54;
	bool bVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	struct<4> Var114;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	bool bVar125;
	int iVar126;
	bool bVar127;
	bool bVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	struct<2> Var133;
	int iVar137;
	bool bVar138;
	int iVar139;
	bool bVar140;
	var uVar141;
	
	Var0.f_9 = 25;
	Var0.f_35 = 2;
	Var54.f_9 = 25;
	Var54.f_35 = 2;
	bVar108 = false;
	iVar109 = 0;
	if (iLocal_628 > 0 && iLocal_628 != 99)
	{
		if (((((((((((((((Local_401.f_0 == -1 || unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_401.f_29.f_7, Local_401.f_29.f_10, Local_401.f_29.f_13, 0, 1, 0)) || ((unk_0x538DF9E5B1DF01EB(Global_67218.f_484[Local_401.f_0]) && unk_0xECFECDAD51A6184F(Global_67218.f_484[Local_401.f_0], 0)) && (unk_0xE9B50FBBCEA3C4A8(unk_0xA16EC202D9D35357(), Global_67218.f_484[Local_401.f_0]) || unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), Global_67218.f_484[Local_401.f_0], 1)))) || ((unk_0x538DF9E5B1DF01EB(Global_67218.f_484[Local_401.f_0]) && unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357())) && ((unk_0x0D34437FD461BDC5(unk_0xA16EC202D9D35357()) - 1f) > 0.15f && unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), Global_67218.f_484[Local_401.f_0])))) || ((unk_0x538DF9E5B1DF01EB(Global_67218.f_484[Local_401.f_0]) && unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357())) && unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), Global_67218.f_484[Local_401.f_0], 1))) || (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()) && unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357()))) || func_10(0)) || func_10(3)) || func_10(2)) || func_10(4)) || func_10(14)) || func_138(0) != bLocal_968) || bLocal_804) || func_137(-1082130432))
		{
			iLocal_628 = 99;
		}
	}
	switch (iLocal_628)
	{
		case 0:
			if ((((!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) && !Global_67066) && !bLocal_804) && !unk_0xF4C685E933068D23())
			{
				if ((((((((((Local_401.f_29.f_80 && Local_401.f_2 == 0) && (Global_67218.f_592[0] != -1 || func_136() != 0)) && Local_401.f_0 != -1) && !iLocal_966) && !func_10(0)) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(14)) && !func_137(-1082130432))
				{
					if (iLocal_630 != -1)
					{
					}
					else if (func_46(Local_401.f_0, 0) && func_46(Local_401.f_0, 5))
					{
						if ((unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_401.f_29.f_7, Local_401.f_29.f_10, Local_401.f_29.f_13, 0, 1, 0) && !unk_0x048742CFEDBEF960(unk_0xA16EC202D9D35357())) && !unk_0x5A6F774C8E17AA21(unk_0xA16EC202D9D35357()))
						{
							if ((!unk_0x538DF9E5B1DF01EB(Global_67218.f_484[Local_401.f_0]) || !unk_0xECFECDAD51A6184F(Global_67218.f_484[Local_401.f_0], 0)) || (!unk_0xE9B50FBBCEA3C4A8(unk_0xA16EC202D9D35357(), Global_67218.f_484[Local_401.f_0]) && !unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), Global_67218.f_484[Local_401.f_0], 1)))
							{
								iVar112 = func_136();
								iVar113 = 0;
								while (iVar113 < iVar112)
								{
									if (func_43(func_132(iVar113)))
									{
										iVar111++;
									}
									iVar113++;
								}
								iVar110 = 0;
								while (iVar110 < Global_67218.f_592)
								{
									if (Global_67218.f_592[iVar110] != -1)
									{
										if ((func_131(Global_67218.f_592[iVar110], iLocal_646) && Global_97439.f_18371.f_1430[iLocal_646 /*939*/].f_626[Global_67218.f_592[iVar110]] == -15) && (Global_67218.f_592[iVar110] != 200 || !Global_97439.f_28270.f_7))
										{
											iVar111++;
										}
									}
									iVar110++;
								}
								if (iVar111 > 0)
								{
									if (!unk_0x11A809BBE3889742())
									{
										iLocal_806 = 1;
										if (Local_401.f_6 == 3)
										{
											func_130(&iLocal_629, 3, "WEB_VEH_TRIG2", 0, 0, 0);
										}
										else
										{
											func_130(&iLocal_629, 3, "WEB_VEH_TRIG", 0, 0, 0);
										}
										bLocal_968 = func_138(0);
										iLocal_628++;
									}
								}
								else if (!iLocal_806)
								{
									if (Local_401.f_6 == 0)
									{
										if (!unk_0x11A809BBE3889742() || func_129("HANGAR_NO"))
										{
											func_128("HANGAR_NO", -1);
											StringCopy(&cLocal_969, "HANGAR_NO", 16);
										}
										bVar108 = true;
									}
									else if (Local_401.f_6 == 1)
									{
										if (!unk_0x11A809BBE3889742() || func_129("MARINA_NO"))
										{
											func_128("MARINA_NO", -1);
											StringCopy(&cLocal_969, "MARINA_NO", 16);
										}
										bVar108 = true;
									}
									else if (Local_401.f_6 == 2)
									{
										if (!unk_0x11A809BBE3889742() || func_129("HELIPAD_NO"))
										{
											func_128("HELIPAD_NO", -1);
											StringCopy(&cLocal_969, "HELIPAD_NO", 16);
										}
										bVar108 = true;
									}
									else if (Local_401.f_6 == 3)
									{
										StringCopy(&Var114, "CAR_GAR_NO", 16);
										if (unk_0x75C4BB2E54262038() || unk_0x660675ADB09E441F())
										{
											StringConCat(&Var114, "_1", 16);
										}
										else if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
										{
											StringConCat(&Var114, "_2", 16);
										}
										if (!unk_0x11A809BBE3889742() || func_129(&Var114))
										{
											func_128(&Var114, -1);
											cLocal_969 = { Var114 };
										}
										bVar108 = true;
									}
								}
							}
						}
						else
						{
							iLocal_806 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && func_126(0, -1))
			{
				if (iLocal_630 != -1)
				{
					iLocal_628 = 0;
					return;
				}
				if (func_125(iLocal_629, 1))
				{
					unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
					if (unk_0x95AD511976EEFC6B(unk_0x862704CFD32408F9()) == 4)
					{
						unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
					}
					else
					{
						unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 256);
					}
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
						{
							unk_0xBAE0E085DFB45D18(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0);
						}
					}
					func_124();
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
				func_123(0);
				func_122(1, 4, 0, 0, 0);
				func_121(1, 2, 1, 1, 1);
				func_120("WEB_VEH_TITLE");
				iVar118 = 0;
				while (iVar118 < iLocal_620)
				{
					iLocal_620[iVar118] = 0;
					iVar118++;
				}
				iVar119 = -1;
				iVar120 = 0;
				func_40(&(Local_401.f_8), Local_401.f_0);
				iVar122 = 0;
				iVar123 = func_136();
				iVar121 = 0;
				while (iVar121 < iVar123)
				{
					if (func_43(func_132(iVar121)))
					{
						if (iVar119 == -1)
						{
							iVar119 = iVar122;
						}
						if (Local_401.f_8.f_4 == func_132(iVar121))
						{
							iLocal_619 = iVar122;
							iVar120 = 1;
						}
						iVar122++;
					}
					iVar121++;
				}
				iVar121 = 0;
				while (iVar121 < Global_67218.f_592)
				{
					if (Global_67218.f_592[iVar121] != -1)
					{
						if ((func_131(Global_67218.f_592[iVar121], iLocal_646) && Global_97439.f_18371.f_1430[iLocal_646 /*939*/].f_626[Global_67218.f_592[iVar121]] == -15) && (Global_67218.f_592[iVar121] != 200 || !Global_97439.f_28270.f_7))
						{
							func_112(Global_67218.f_592[iVar121], &Var0, 0, iLocal_646);
							if (iVar119 == -1)
							{
								iVar119 = iVar122;
							}
							if (Local_401.f_8.f_4 == Var0.f_42)
							{
								iLocal_619 = iVar122;
								iVar120 = 1;
							}
							iVar122++;
						}
					}
					iVar121++;
				}
				if (iLocal_619 == -1)
				{
					iLocal_619 = iVar119;
				}
				iVar122 = 0;
				iVar123 = func_136();
				iVar121 = 0;
				while (iVar121 < iVar123)
				{
					if (func_43(func_132(iVar121)))
					{
						unk_0xD0E2BFCE93AE3ABD(&(iLocal_620[(iVar122 / 32)]), (iVar122 % 32));
						func_109(iVar122, unk_0x9BB52B0F42245310(func_132(iVar121)), 0, 1, 0, 0);
						if ((iLocal_619 == iVar122 && iVar120) && Local_401.f_6 != 3)
						{
							func_108(iVar122, 4, 0);
						}
						else
						{
							func_108(iVar122, 0, 0);
						}
						iVar122++;
					}
					iVar121++;
				}
				iVar121 = 0;
				while (iVar121 < Global_67218.f_592)
				{
					if (Global_67218.f_592[iVar121] != -1)
					{
						if ((func_131(Global_67218.f_592[iVar121], iLocal_646) && Global_97439.f_18371.f_1430[iLocal_646 /*939*/].f_626[Global_67218.f_592[iVar121]] == -15) && (Global_67218.f_592[iVar121] != 200 || !Global_97439.f_28270.f_7))
						{
							unk_0xD0E2BFCE93AE3ABD(&(iLocal_620[(iVar122 / 32)]), (iVar122 % 32));
							func_112(Global_67218.f_592[iVar121], &Var0, 0, iLocal_646);
							if (Global_67218.f_592[iVar121] != 164)
							{
								func_109(iVar122, func_106(Global_67218.f_592[iVar121]), 0, 1, 0, 0);
							}
							else if (Var0.f_43 == 0)
							{
								func_109(iVar122, "TWOSTRINGS", 2, 1, 0, 0);
								func_103(func_106(Global_67218.f_592[iVar121]), 0);
								func_103("VNX_SWFTC", 0);
							}
							else if (Var0.f_43 == 1)
							{
								func_109(iVar122, "TWOSTRINGS", 2, 1, 0, 0);
								func_103(func_106(Global_67218.f_592[iVar121]), 0);
								func_103("VNX_SWFTB", 0);
							}
							else
							{
								func_109(iVar122, func_106(Global_67218.f_592[iVar121]), 0, 1, 0, 0);
							}
							if (iLocal_619 == iVar122 && iVar120)
							{
								func_108(iVar122, 4, 0);
							}
							else
							{
								func_108(iVar122, 0, 0);
							}
							iVar122++;
						}
					}
					iVar121++;
				}
				func_102(iLocal_619, 1, 1);
				iLocal_634 = 1;
				iLocal_632 = 0;
				iLocal_631 = 1;
			}
			else
			{
				iVar109 = 0;
				if (unk_0xF6BAF9F0C2863FFE())
				{
					if (unk_0x7F7F8EB2E78C69E9(2))
					{
						unk_0x4B404C739A9AFC7A(0, 1, 1);
						unk_0x4B404C739A9AFC7A(0, 2, 1);
						unk_0x4B404C739A9AFC7A(2, 200, 1);
						unk_0x7D98754083C1D605(0, 237, 1);
						unk_0x7D98754083C1D605(0, 238, 1);
						unk_0x7D98754083C1D605(0, 241, 1);
						unk_0x7D98754083C1D605(0, 242, 1);
						func_99(0, 0, 0, 1);
						func_98(0, -1);
						if (func_97())
						{
							if (Global_2541359 != iLocal_619)
							{
								unk_0xC2E1777941B4536E(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_619 = Global_2541359;
								func_102(iLocal_619, 1, 1);
								iLocal_634 = 1;
							}
							else
							{
								iVar109 = 1;
							}
						}
					}
				}
				if (unk_0x1453F50088A91E4E(2, 188) || unk_0x1453F50088A91E4E(2, 241))
				{
					iLocal_634 = 1;
					unk_0xC2E1777941B4536E(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar124 = (iLocal_619 - 1);
					while (iVar124 >= 0)
					{
						if (unk_0x889D01384B54BCE3(iLocal_620[(iVar124 / 32)], (iVar124 % 32)))
						{
							iLocal_619 = iVar124;
							bVar125 = true;
							iVar124 = 0;
						}
						iVar124 = (iVar124 + -1);
					}
					if (!bVar125)
					{
						iVar124 = (iLocal_620 * 32 - 1);
						while (iVar124 >= iLocal_619 + 1)
						{
							if (unk_0x889D01384B54BCE3(iLocal_620[(iVar124 / 32)], (iVar124 % 32)))
							{
								iLocal_619 = iVar124;
								bVar125 = true;
								iVar124 = 0;
							}
							iVar124 = (iVar124 + -1);
						}
					}
					if (bVar125)
					{
						func_102(iLocal_619, 1, 1);
					}
				}
				else if (unk_0x1453F50088A91E4E(2, 187) || unk_0x1453F50088A91E4E(2, 242))
				{
					iLocal_634 = 1;
					unk_0xC2E1777941B4536E(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar126 = iLocal_619 + 1;
					while (iVar126 <= (iLocal_620 * 32 - 1))
					{
						if (unk_0x889D01384B54BCE3(iLocal_620[(iVar126 / 32)], (iVar126 % 32)))
						{
							iLocal_619 = iVar126;
							bVar127 = true;
							iVar126 = iLocal_620 * 32 + 1;
						}
						iVar126++;
					}
					if (!bVar127)
					{
						iVar126 = 0;
						while (iVar126 <= (iLocal_619 - 1))
						{
							if (unk_0x889D01384B54BCE3(iLocal_620[(iVar126 / 32)], (iVar126 % 32)))
							{
								iLocal_619 = iVar126;
								bVar127 = true;
								iVar126 = iLocal_620 * 32 + 1;
							}
							iVar126++;
						}
					}
					if (bVar127)
					{
						func_102(iLocal_619, 1, 1);
					}
				}
				else if (unk_0x51104159A21A8E40(2, 201) || iVar109 == 1)
				{
					bVar128 = false;
					iVar109 = 0;
					unk_0xC2E1777941B4536E(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar130 = 0;
					iVar131 = func_136();
					iVar129 = 0;
					while (iVar129 < iVar131)
					{
						if (func_43(func_132(iVar129)))
						{
							if (iLocal_619 == iVar130 && (((((Local_401.f_8.f_4 != func_132(iVar129) || !unk_0x538DF9E5B1DF01EB(Global_67218.f_484[Local_401.f_0])) || !unk_0xECFECDAD51A6184F(Global_67218.f_484[Local_401.f_0], 0)) || Local_401.f_0 == 21) || Local_401.f_0 == 22) || Local_401.f_0 == 23))
							{
								bVar128 = true;
								if ((((!iLocal_633 && Local_401.f_8.f_4 != func_132(iVar129)) || (!iLocal_633 && Local_401.f_0 == 21)) || (!iLocal_633 && Local_401.f_0 == 22)) || (!iLocal_633 && Local_401.f_0 == 23))
								{
									func_96("VEH_SELECT_CNFA", 0, 0);
									func_95(-1);
									func_94(201, "ITEM_YES", -1);
									func_94(202, "ITEM_NO", -1);
									iLocal_633 = 1;
									iVar129 = func_136() + 1;
								}
								else if (Local_401.f_6 == 3)
								{
									if (func_93(func_132(iVar129)))
									{
										iLocal_967 = func_132(iVar129);
										iLocal_631 = 0;
										iLocal_632 = 0;
										iLocal_625 = 0;
										iLocal_628++;
									}
									else
									{
										iLocal_966 = 1;
										iLocal_967 = func_132(iVar129);
										iLocal_628 = 99;
									}
								}
								else if (Local_401.f_6 == 0 && func_93(func_132(iVar129)))
								{
									iLocal_967 = func_132(iVar129);
									iLocal_631 = 0;
									iLocal_632 = 0;
									iLocal_625 = 0;
									iLocal_628++;
								}
								else
								{
									if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[Local_401.f_0]))
									{
										unk_0x7B9576B4E099FB1F(Global_67218.f_484[Local_401.f_0], 0, 1);
										unk_0x2F2948A2506AA404(&(Global_67218.f_484[Local_401.f_0]));
									}
									Var54.f_42 = func_132(iVar129);
									unk_0xD0E2BFCE93AE3ABD(&(Var54.f_53), 14);
									func_90(Local_401.f_0, &Var54, 0f, 0f, 0f, -1f, 145);
									func_89(Local_401.f_0);
									func_40(&(Local_401.f_8), Local_401.f_0);
									iVar129 = func_136() + 1;
									iLocal_632 = 1;
								}
							}
							iVar130++;
						}
						iVar129++;
					}
					if (!bVar128)
					{
						iVar129 = 0;
						while (iVar129 < Global_67218.f_592)
						{
							if (Global_67218.f_592[iVar129] != -1)
							{
								if ((func_131(Global_67218.f_592[iVar129], iLocal_646) && Global_97439.f_18371.f_1430[iLocal_646 /*939*/].f_626[Global_67218.f_592[iVar129]] == -15) && (Global_67218.f_592[iVar129] != 200 || !Global_97439.f_28270.f_7))
								{
									func_112(Global_67218.f_592[iVar129], &Var0, 0, iLocal_646);
									if (iLocal_619 == iVar130 && ((Local_401.f_8.f_4 != Var0.f_42 || !unk_0x538DF9E5B1DF01EB(Global_67218.f_484[Local_401.f_0])) || !unk_0xECFECDAD51A6184F(Global_67218.f_484[Local_401.f_0], 0)))
									{
										bVar128 = true;
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
											iVar129 = Global_67218.f_592 + 1;
										}
										else if (Var0.f_42 == joaat("marshall"))
										{
											iLocal_628 = 3;
											iLocal_632 = 1;
											iVar129 = Global_67218.f_592 + 1;
										}
										else
										{
											if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[Local_401.f_0]))
											{
												unk_0x7B9576B4E099FB1F(Global_67218.f_484[Local_401.f_0], 0, 1);
												unk_0x2F2948A2506AA404(&(Global_67218.f_484[Local_401.f_0]));
											}
											func_112(Global_67218.f_592[iVar129], &Var0, 0, iLocal_646);
											unk_0xD0E2BFCE93AE3ABD(&(Var0.f_53), 14);
											if (unk_0xEE41D6C2DA208994(Var0.f_42))
											{
												unk_0xD0E2BFCE93AE3ABD(&(Var0.f_53), 22);
											}
											func_90(Local_401.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
											func_89(Local_401.f_0);
											func_40(&(Local_401.f_8), Local_401.f_0);
											iVar129 = Global_67218.f_592 + 1;
											iLocal_632 = 1;
										}
									}
									iVar130++;
								}
							}
							iVar129++;
						}
					}
				}
				else if (unk_0x51104159A21A8E40(2, 202) || unk_0x51104159A21A8E40(2, 238))
				{
					unk_0xC2E1777941B4536E(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			unk_0x6C5CE54692FA7CB8();
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
				func_123(0);
				func_122(1, 0, 0, 0, 0);
				func_121(1, 1, 1, 1, 1);
				iVar132 = 0;
				while (iVar132 < iLocal_626)
				{
					iLocal_626[iVar132] = 0;
					iVar132++;
				}
				func_120("WEB_VEH_TITLE2");
				iVar132 = 0;
				while (iVar132 < 25)
				{
					StringCopy(&Var133, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var133, iVar132, 16);
					func_109(iVar132, &Var133, 0, 1, 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&(iLocal_626[(iVar132 / 32)]), (iVar132 % 32));
					iVar132++;
				}
				if (Local_648.f_12 == 0)
				{
					iLocal_625 = Global_97439.f_28355.f_313[200];
				}
				else if (Local_648.f_12 == 1)
				{
					iLocal_625 = Global_97439.f_28355.f_626[200];
				}
				else
				{
					iLocal_625 = Global_97439.f_28355.f_939[200];
				}
				func_102(iLocal_625, 1, 1);
				iLocal_634 = 1;
				iLocal_632 = 0;
				iLocal_631 = 1;
			}
			else
			{
				iVar109 = 0;
				if (unk_0xF6BAF9F0C2863FFE())
				{
					if (unk_0x7F7F8EB2E78C69E9(2))
					{
						unk_0x4B404C739A9AFC7A(0, 1, 1);
						unk_0x4B404C739A9AFC7A(0, 2, 1);
						unk_0x7D98754083C1D605(0, 237, 1);
						unk_0x7D98754083C1D605(0, 238, 1);
						unk_0x7D98754083C1D605(0, 241, 1);
						unk_0x7D98754083C1D605(0, 242, 1);
						func_99(0, 0, 0, 1);
						func_98(0, -1);
						if (func_97())
						{
							if (Global_2541359 != iLocal_625)
							{
								unk_0xC2E1777941B4536E(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_625 = Global_2541359;
								func_102(iLocal_625, 1, 1);
								iLocal_634 = 1;
							}
							else
							{
								iVar109 = 1;
							}
						}
					}
				}
				if (unk_0x1453F50088A91E4E(2, 188) || unk_0x1453F50088A91E4E(2, 241))
				{
					iLocal_634 = 1;
					unk_0xC2E1777941B4536E(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar137 = (iLocal_625 - 1);
					while (iVar137 >= 0)
					{
						if (unk_0x889D01384B54BCE3(iLocal_626[(iVar137 / 32)], (iVar137 % 32)))
						{
							iLocal_625 = iVar137;
							bVar138 = true;
							iVar137 = 0;
						}
						iVar137 = (iVar137 + -1);
					}
					if (!bVar138)
					{
						iVar137 = 31;
						while (iVar137 >= iLocal_625 + 1)
						{
							if (unk_0x889D01384B54BCE3(iLocal_626[(iVar137 / 32)], (iVar137 % 32)))
							{
								iLocal_625 = iVar137;
								bVar138 = true;
								iVar137 = iLocal_625;
							}
							iVar137 = (iVar137 + -1);
						}
					}
					if (bVar138)
					{
						func_102(iLocal_625, 1, 1);
					}
				}
				else if (unk_0x1453F50088A91E4E(2, 187) || unk_0x1453F50088A91E4E(2, 242))
				{
					iLocal_634 = 1;
					unk_0xC2E1777941B4536E(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar139 = iLocal_625 + 1;
					while (iVar139 <= 31)
					{
						if (unk_0x889D01384B54BCE3(iLocal_626[(iVar139 / 32)], (iVar139 % 32)))
						{
							iLocal_625 = iVar139;
							bVar140 = true;
							iVar139 = 31;
						}
						iVar139++;
					}
					if (!bVar140)
					{
						iVar139 = 0;
						while (iVar139 <= (iLocal_625 - 1))
						{
							if (unk_0x889D01384B54BCE3(iLocal_626[(iVar139 / 32)], (iVar139 % 32)))
							{
								iLocal_625 = iVar139;
								bVar140 = true;
								iVar139 = iLocal_625;
							}
							iVar139++;
						}
					}
					if (bVar140)
					{
						func_102(iLocal_625, 1, 1);
					}
				}
				else if (unk_0x51104159A21A8E40(2, 201) || iVar109 == 1)
				{
					iVar109 = 0;
					unk_0xC2E1777941B4536E(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[Local_401.f_0]))
					{
						unk_0x7B9576B4E099FB1F(Global_67218.f_484[Local_401.f_0], 0, 1);
						unk_0x2F2948A2506AA404(&(Global_67218.f_484[Local_401.f_0]));
					}
					uVar141 = iLocal_625 + 1;
					if (iLocal_646 == 0)
					{
						Global_97439.f_28355.f_313[200] = uVar141;
					}
					else if (iLocal_646 == 1)
					{
						Global_97439.f_28355.f_626[200] = uVar141;
					}
					else if (iLocal_646 == 2)
					{
						Global_97439.f_28355.f_939[200] = uVar141;
					}
					func_112(200, &Var0, 0, iLocal_646);
					unk_0xD0E2BFCE93AE3ABD(&(Var0.f_53), 14);
					if (unk_0xEE41D6C2DA208994(Var0.f_42))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Var0.f_53), 22);
					}
					func_90(Local_401.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
					func_89(Local_401.f_0);
					func_40(&(Local_401.f_8), Local_401.f_0);
					iLocal_632 = 1;
					iLocal_628 = 2;
				}
				else if (unk_0x51104159A21A8E40(2, 202) || unk_0x51104159A21A8E40(2, 238))
				{
					unk_0xC2E1777941B4536E(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iLocal_631 = 0;
					iLocal_632 = 0;
					iLocal_628 = (iLocal_628 - 1);
				}
			}
			unk_0x6C5CE54692FA7CB8();
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
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
			}
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
				{
					if (!unk_0xA9F8F9C4AF0AEED8())
					{
						unk_0xBAE0E085DFB45D18(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 1);
					}
				}
			}
			func_50(1, -1);
			iLocal_628 = 0;
			func_48(&iLocal_629);
			iLocal_629 = -1;
			break;
	}
	if (!bVar108 && unk_0x11A809BBE3889742())
	{
		if (!unk_0x06771AF7795B3ECF(&cLocal_969))
		{
			if ((((func_129("HANGAR_NO") || func_129("MARINA_NO")) || func_129("HELIPAD_NO")) || func_129("CAR_GAR_NO_1")) || func_129("CAR_GAR_NO_2"))
			{
				unk_0xFD1E0AEC770DAF2E(1);
			}
			StringCopy(&cLocal_969, "", 16);
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
		if (Global_35615[iVar0 /*19*/])
		{
			Global_35615[iVar0 /*19*/].f_7 = 1;
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
		if (Global_35615[iVar0 /*19*/].f_1 == iParam0)
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
	if (Global_17238.f_7207)
	{
		unk_0x2F2EE906A0CF46A3(15);
		Global_17238.f_7207 = 0;
	}
	unk_0x1F4FE6D0BB9E338B(0f);
	if (Global_17238.f_4886[iVar0])
	{
		unk_0x3D3D5DB8C3B816AF(9, 0);
		Global_17238.f_4886[iVar0] = 0;
	}
	if (Global_17238.f_4879[iVar0])
	{
		unk_0x4A79FCCDF915C20B("CommonMenu");
		Global_17238.f_4879[iVar0] = 0;
	}
	if (bParam0)
	{
		func_51(&(Global_17238.f_4918[iVar0 /*10*/]));
		Global_17238.f_4979[iVar0] = 0;
	}
	else
	{
		Global_17238.f_4979[iVar0] = 0;
	}
}

void func_51(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xC8378A96673BCC40(*uParam0))
		{
			unk_0x7559DFAB61B017F2(uParam0);
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
		if (unk_0x1DAD7CE53BEE7710() && unk_0x93C72DAC35C5D38C())
		{
			iParam2 = unk_0x2302EAFD9CA5D9DC();
		}
	}
	StringCopy(&cVar0, unk_0x7E5A426328F6E635(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xB793F1A0B6CC4AE1(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17238.f_4979[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17238.f_4979[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17238.f_4979[iVar18] = iVar16;
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
	unk_0xD56181B43A801B45(76, 84);
	unk_0x005186B9591984A5(-0.05f, -0.05f, 0f, 0f);
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
	if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_1)) == unk_0xB793F1A0B6CC4AE1("HIDE"))
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
		unk_0x8C31DEE1FBBA2653(&iVar57, &iVar58);
		fVar60 = unk_0x649F384939D0D134(0);
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
		unk_0xBD535F1B4794167F(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17238.f_4986)
		{
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_1)) == unk_0xB793F1A0B6CC4AE1("HIDE"))
			{
				fVar49 = Global_17236;
			}
			else
			{
				if (Global_17238)
				{
					unk_0xC4280B4C4EEB3807(func_82(29), func_80(29, 1), (Global_17235 + (fParam5 * 0.5f)), (Global_17236 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17238.f_7177)
				{
					iVar1 = Global_17238.f_7173;
					iVar2 = Global_17238.f_7174;
					iVar3 = Global_17238.f_7175;
					iVar4 = Global_17238.f_7176;
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
				if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_1)) != 0)
				{
					func_78();
					unk_0xC428E1247B8480C3(&(Global_17238.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17238.f_68)
					{
						if (Global_17238.f_5[iVar14] == 2)
						{
							unk_0x53B64327E3305DCB(Global_17238.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17238.f_5[iVar14] == 3)
						{
							unk_0xC8C41AD5B003B30B(Global_17238.f_14[iVar16], Global_17238.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17238.f_5[iVar14] == 1)
						{
							unk_0x4498E0CBD76B2D72(&(Global_17238.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17238.f_5[iVar14] == 8)
						{
							unk_0x4498E0CBD76B2D72(&(Global_17238.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17238.f_5[iVar14] == 5)
						{
							unk_0x94E086BCAE8856C1(&(Global_17238.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17238.f_5[iVar14] == 6)
						{
							unk_0x4498E0CBD76B2D72(&(Global_17238.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17238.f_5[iVar14] == 7)
						{
							unk_0x94E086BCAE8856C1(&(Global_17238.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x68E2B15AC7135C83((Global_17235 + 0.00390625f), ((Global_17236 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17238.f_4989 > Global_17238.f_4499)
				{
					if (Global_17238.f_4992 != 0)
					{
						func_78();
						func_76((((Global_17235 + fParam5) - 0.00390625f) - func_77("CM_ITEM_COUNT", Global_17238.f_4992, Global_17238.f_4991)), ((Global_17236 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17238.f_4992, Global_17238.f_4991);
					}
				}
			}
			iVar6 = Global_17238.f_4993;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17238.f_7187)
			{
				iVar1 = Global_17238.f_7183;
				iVar2 = Global_17238.f_7184;
				iVar3 = Global_17238.f_7185;
				iVar4 = Global_17238.f_7186;
			}
			else
			{
				unk_0x6C42276FEC08CCF9(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17238.f_4499 && iVar6 <= Global_17238.f_4492)
			{
				if (iVar6 >= 0)
				{
					if (Global_17238.f_4753[iVar6])
					{
						if (Global_17238.f_4627[iVar6] && iVar6 != Global_17238.f_4993)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17238.f_5000[iVar6] != 0f)
						{
							fVar54 = Global_17238.f_5000[iVar6];
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
					if (Global_17238.f_4492 <= 1)
					{
						Global_17238.f_4492++;
					}
					iVar52 = 1;
				}
			}
			unk_0xC4280B4C4EEB3807("CommonMenu", "Gradient_Bgd", (Global_17235 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17238.f_4989 > Global_17238.f_4499)
			{
				if (Global_17238.f_7192)
				{
					iVar1 = Global_17238.f_7188;
					iVar2 = Global_17238.f_7189;
					iVar3 = Global_17238.f_7190;
					iVar4 = Global_17238.f_7191;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_79(Global_17235, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x2BA2BECD21B523A8("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17238.f_7205)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x6C42276FEC08CCF9(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC4280B4C4EEB3807("CommonMenu", "shop_arrows_upANDdown", (Global_17235 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), (Var37.f_0 / IntToFloat(iVar57)), (Var37.f_1 / IntToFloat(iVar58)), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_3969)) != 0 && Global_17238.f_4043 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17235 + 0.0046875f);
				if (Global_17238.f_4045 != 0)
				{
					func_84(Global_17238.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17235 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_75(fVar41);
				unk_0x7037B434CD6C43C2(&(Global_17238.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17238.f_4039)
				{
					if (Global_17238.f_3973[iVar14] == 2)
					{
						unk_0x53B64327E3305DCB(Global_17238.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17238.f_3973[iVar14] == 3)
					{
						unk_0xC8C41AD5B003B30B(Global_17238.f_3982[iVar16], Global_17238.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17238.f_3973[iVar14] == 1)
					{
						unk_0x4498E0CBD76B2D72(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 5)
					{
						unk_0x94E086BCAE8856C1(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 6)
					{
						unk_0x4498E0CBD76B2D72(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 7)
					{
						unk_0x94E086BCAE8856C1(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x3BCFF5D2F376E6A4(fVar41, (fVar49 + 0.00277776f));
				unk_0x6C42276FEC08CCF9(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_79(Global_17235, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17238.f_7197)
				{
					iVar1 = Global_17238.f_7193;
					iVar2 = Global_17238.f_7194;
					iVar3 = Global_17238.f_7195;
					iVar4 = Global_17238.f_7196;
				}
				else
				{
					unk_0x6C42276FEC08CCF9(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC4280B4C4EEB3807("CommonMenu", "Gradient_Bgd", (Global_17235 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9A4D7A4AF1373FB1(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9A4D7A4AF1373FB1(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_75(fVar41);
				unk_0xC428E1247B8480C3(&(Global_17238.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17238.f_4039)
				{
					if (Global_17238.f_3973[iVar14] == 2)
					{
						unk_0x53B64327E3305DCB(Global_17238.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17238.f_3973[iVar14] == 3)
					{
						unk_0xC8C41AD5B003B30B(Global_17238.f_3982[iVar16], Global_17238.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17238.f_3973[iVar14] == 1)
					{
						unk_0x4498E0CBD76B2D72(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 5)
					{
						unk_0x94E086BCAE8856C1(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 6)
					{
						unk_0x4498E0CBD76B2D72(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 7)
					{
						unk_0x94E086BCAE8856C1(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 8)
					{
						unk_0x4498E0CBD76B2D72(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x68E2B15AC7135C83(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17238.f_4045 != 0)
				{
					func_84(Global_17238.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					func_74(Global_17238.f_4045, 1, &iVar46, &iVar47, &iVar48);
					unk_0xC4280B4C4EEB3807(func_82(Global_17238.f_4045), func_80(Global_17238.f_4045, 1), ((Global_17235 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9A4D7A4AF1373FB1(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17238.f_4043 > 0)
				{
					if ((unk_0x09560C7DE2A384BD() - Global_17238.f_4044) > Global_17238.f_4043)
					{
						StringCopy(&(Global_17238.f_3969), "", 16);
						Global_17238.f_4043 = -1;
					}
				}
			}
			if (unk_0xB793F1A0B6CC4AE1(&(Global_2541283.f_21)) != 0 && Global_2541283.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17235 + 0.0046875f);
				if (Global_2541283.f_67 != 0)
				{
					func_84(Global_2541283.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17235 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_75(fVar41);
				unk_0x7037B434CD6C43C2(&(Global_2541283.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2541283.f_61)
				{
					if (Global_2541283.f_25[iVar14] == 2)
					{
						unk_0x53B64327E3305DCB(Global_2541283.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2541283.f_25[iVar14] == 3)
					{
						unk_0xC8C41AD5B003B30B(Global_2541283.f_34[iVar16], Global_2541283.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2541283.f_25[iVar14] == 1)
					{
						unk_0x4498E0CBD76B2D72(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 5)
					{
						unk_0x94E086BCAE8856C1(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 6)
					{
						unk_0x4498E0CBD76B2D72(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 7)
					{
						unk_0x94E086BCAE8856C1(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 8)
					{
						unk_0x4498E0CBD76B2D72(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x3BCFF5D2F376E6A4(fVar41, (fVar49 + 0.00277776f));
				unk_0x6C42276FEC08CCF9(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_79(Global_17235, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17238.f_7197)
				{
					iVar1 = Global_17238.f_7193;
					iVar2 = Global_17238.f_7194;
					iVar3 = Global_17238.f_7195;
					iVar4 = Global_17238.f_7196;
				}
				else
				{
					unk_0x6C42276FEC08CCF9(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC4280B4C4EEB3807("CommonMenu", "Gradient_Bgd", (Global_17235 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9A4D7A4AF1373FB1(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9A4D7A4AF1373FB1(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_75(fVar41);
				unk_0xC428E1247B8480C3(&(Global_2541283.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2541283.f_61)
				{
					if (Global_2541283.f_25[iVar14] == 2)
					{
						unk_0x53B64327E3305DCB(Global_2541283.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2541283.f_25[iVar14] == 3)
					{
						unk_0xC8C41AD5B003B30B(Global_2541283.f_34[iVar16], Global_2541283.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2541283.f_25[iVar14] == 1)
					{
						unk_0x4498E0CBD76B2D72(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 8)
					{
						unk_0x4498E0CBD76B2D72(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 5)
					{
						unk_0x94E086BCAE8856C1(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 6)
					{
						unk_0x4498E0CBD76B2D72(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 7)
					{
						unk_0x94E086BCAE8856C1(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x68E2B15AC7135C83(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2541283.f_67 != 0)
				{
					func_84(Global_2541283.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_74(Global_2541283.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xC4280B4C4EEB3807(func_82(Global_2541283.f_67), func_80(Global_2541283.f_67, 1), ((Global_17235 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9A4D7A4AF1373FB1(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2541283.f_65 > 0)
				{
					if ((unk_0x09560C7DE2A384BD() - Global_2541283.f_66) > Global_2541283.f_65)
					{
						StringCopy(&(Global_2541283.f_21), "", 16);
						Global_2541283.f_65 = -1;
					}
				}
			}
			func_66(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xD56181B43A801B45(76, 84);
			unk_0x005186B9591984A5(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17238.f_4986)
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
			iVar63 = Global_17238.f_4492;
			if (Global_17238.f_4987)
			{
				iVar63 = (Global_17238.f_4990 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17238.f_5000[iVar6] != 0f)
				{
					fVar54 = Global_17238.f_5000[iVar6];
				}
				if (Global_17238.f_4987)
				{
					iVar6 = Global_17238.f_6833[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17238.f_4993 && iVar9 < Global_17238.f_4499)
				{
					bVar32 = true;
					if (Global_17238.f_4994 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17238.f_4627[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17238.f_5131[iVar6] = fVar34;
				fVar33 = (Global_17235 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17238.f_4994 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17238.f_7199)
					{
						unk_0x6C42276FEC08CCF9(Global_17238.f_7198, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0x6C42276FEC08CCF9(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0xC4280B4C4EEB3807("CommonMenu", "Gradient_Nav", (Global_17235 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17238.f_5129 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_64(bVar31, 1, 0, 0, 0, 0);
					unk_0xC428E1247B8480C3("DFLT_MNU_OPT");
					unk_0x68E2B15AC7135C83(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17238.f_4500)
					{
						if (unk_0x889D01384B54BCE3(Global_17238.f_4366[iVar6], iVar8) || Global_17238.f_4333[iVar8] == 5)
						{
							if (Global_17238.f_4987)
							{
								iVar19 = Global_17238.f_6844[((iVar9 * Global_17238.f_4500) + iVar8)];
								iVar20 = Global_17238.f_6885[((iVar9 * Global_17238.f_4500) + iVar8)];
								iVar21 = Global_17238.f_6926[((iVar9 * Global_17238.f_4500) + iVar8)];
								iVar22 = Global_17238.f_6967[((iVar9 * Global_17238.f_4500) + iVar8)];
								iVar23 = Global_17238.f_7008[((iVar9 * Global_17238.f_4500) + iVar8)];
							}
							else
							{
								Global_17238.f_6844[((iVar9 * Global_17238.f_4500) + iVar8)] = iVar19;
								Global_17238.f_6885[((iVar9 * Global_17238.f_4500) + iVar8)] = iVar20;
								Global_17238.f_6926[((iVar9 * Global_17238.f_4500) + iVar8)] = iVar21;
								Global_17238.f_6967[((iVar9 * Global_17238.f_4500) + iVar8)] = iVar22;
								Global_17238.f_7008[((iVar9 * Global_17238.f_4500) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17238.f_5260[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17238.f_5257[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17238.f_5260[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17238.f_5257[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17238.f_4339[iVar8] != -1f)
							{
								fVar33 = ((Global_17235 + 0.0046875f) + Global_17238.f_4339[iVar8]);
							}
							if ((iVar8 < 4 && Global_17238.f_4339[iVar8 + 1] != -1f) && fVar33 < Global_17238.f_4339[iVar8 + 1])
							{
								fVar45 = (Global_17238.f_4339[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17235 + Global_17237) - 0.0046875f) - fVar33);
							}
							if ((Global_17238.f_4352[iVar8] && Global_17238.f_5126) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17238.f_4333[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17238.f_4987)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17238.f_1576[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_64(bVar31, Global_17238.f_1074[iVar24], Global_17238.f_1325[iVar24], bVar53, iVar70, bVar50);
												unk_0x65CC688E5B978C02(&(Global_17238.f_73[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x4498E0CBD76B2D72(&(Global_17238.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x4498E0CBD76B2D72(&(Global_17238.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x94E086BCAE8856C1(&(Global_2435665[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x4498E0CBD76B2D72(&(Global_2435665[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x94E086BCAE8856C1(&(Global_2435665[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x53B64327E3305DCB(Global_17238.f_3340[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xC8C41AD5B003B30B(Global_17238.f_3591[(iVar21 + iVar27)], Global_17238.f_3717[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
											{
												fVar42 = unk_0xFBF0574D26E9F943(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_84(Global_17238.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17238.f_3843[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17238.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17238.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar41;
											Global_17238.f_7090[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar42;
											Global_17238.f_7131[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)];
											fVar42 = Global_17238.f_7090[((iVar9 * Global_17238.f_4500) + iVar8)];
											fVar43 = Global_17238.f_7131[((iVar9 * Global_17238.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17238.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC4280B4C4EEB3807(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC4280B4C4EEB3807(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17238.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_64(bVar31, Global_17238.f_1074[iVar24], Global_17238.f_1325[iVar24], bVar53, 0, bVar50);
											if (Global_17238.f_7203 && Global_17238.f_7204 == iVar6)
											{
												func_63(bVar31);
											}
											unk_0xC428E1247B8480C3(&(Global_17238.f_73[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x4498E0CBD76B2D72(&(Global_17238.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x4498E0CBD76B2D72(&(Global_17238.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x94E086BCAE8856C1(&(Global_2435665[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x4498E0CBD76B2D72(&(Global_2435665[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x94E086BCAE8856C1(&(Global_2435665[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x53B64327E3305DCB(Global_17238.f_3340[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xC8C41AD5B003B30B(Global_17238.f_3591[(iVar21 + iVar27)], Global_17238.f_3717[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17238.f_3843[(iVar22 + iVar28)] == 2)
												{
													if (func_84(Global_17238.f_3843[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_84(Global_17238.f_3843[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_74(Global_17238.f_3843[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17238.f_4360[iVar8] == 2)
															{
																unk_0xC4280B4C4EEB3807(func_82(Global_17238.f_3843[(iVar22 + iVar28)]), func_80(Global_17238.f_3843[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xC4280B4C4EEB3807(func_82(Global_17238.f_3843[(iVar22 + iVar28)]), func_80(Global_17238.f_3843[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_17238.f_4360[iVar8] == 2)
											{
												unk_0x68E2B15AC7135C83(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x68E2B15AC7135C83((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17238.f_3843[(iVar22 + iVar14)] != 2)
												{
													if (func_84(Global_17238.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_84(Global_17238.f_3843[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_74(Global_17238.f_3843[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17238.f_3843[(iVar22 + iVar14)] == 30)
															{
																unk_0xC4280B4C4EEB3807(func_82(Global_17238.f_3843[(iVar22 + iVar14)]), func_80(Global_17238.f_3843[(iVar22 + iVar14)], bVar31), (Global_17235 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17238.f_4360[iVar8] == 2)
															{
																unk_0xC4280B4C4EEB3807(func_82(Global_17238.f_3843[(iVar22 + iVar14)]), func_80(Global_17238.f_3843[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xC4280B4C4EEB3807(func_82(Global_17238.f_3843[(iVar22 + iVar14)]), func_80(Global_17238.f_3843[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17238.f_4987)
										{
											func_64(bVar31, Global_17238.f_1074[iVar24], Global_17238.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17238.f_7203 && Global_17238.f_7204 == iVar6)
											{
												func_63(bVar31);
											}
											unk_0x65CC688E5B978C02("NUMBER");
											unk_0x53B64327E3305DCB(Global_17238.f_3340[iVar20]);
											fVar42 = unk_0xFBF0574D26E9F943(1);
											fVar41 = 0f;
											if (Global_17238.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17238.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar41;
											Global_17238.f_7090[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)];
											fVar42 = Global_17238.f_7090[((iVar9 * Global_17238.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17238.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC4280B4C4EEB3807(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC4280B4C4EEB3807(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_64(bVar31, Global_17238.f_1074[iVar24], Global_17238.f_1325[iVar24], bVar53, 0, 0);
										func_62((fVar33 + fVar41), fVar34, "NUMBER", Global_17238.f_3340[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17238.f_4987)
										{
											func_64(bVar31, Global_17238.f_1074[iVar24], Global_17238.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17238.f_7203 && Global_17238.f_7204 == iVar6)
											{
												func_63(bVar31);
											}
											unk_0x65CC688E5B978C02("NUMBER");
											unk_0xC8C41AD5B003B30B(Global_17238.f_3591[iVar21], Global_17238.f_3717[iVar21]);
											fVar42 = unk_0xFBF0574D26E9F943(1);
											fVar41 = 0f;
											if (Global_17238.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17238.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar41;
											Global_17238.f_7090[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)];
											fVar42 = Global_17238.f_7090[((iVar9 * Global_17238.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17238.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC4280B4C4EEB3807(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC4280B4C4EEB3807(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_64(bVar31, Global_17238.f_1074[iVar24], Global_17238.f_1325[iVar24], bVar53, 0, 0);
										func_61((fVar33 + fVar41), fVar34, "NUMBER", Global_17238.f_3591[iVar21], Global_17238.f_3717[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_84(Global_17238.f_3843[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17238.f_4987)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17238.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17238.f_4360[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar41;
												Global_17238.f_7131[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)];
												fVar43 = Global_17238.f_7131[((iVar9 * Global_17238.f_4500) + iVar8)];
											}
											if (bVar51)
											{
												if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17238.f_4360[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_74(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xC4280B4C4EEB3807(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_74(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xC4280B4C4EEB3807(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_84(Global_17238.f_3843[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_74(Global_17238.f_3843[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xC4280B4C4EEB3807(func_82(Global_17238.f_3843[iVar22]), func_80(Global_17238.f_3843[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_60(Global_17238.f_3843[iVar22])), (fVar36 * func_60(Global_17238.f_3843[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
							if (Global_17238.f_4333[iVar8] == 5)
							{
								if (Global_17238.f_4345[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17238.f_4345[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17238.f_4345[iVar8]);
								if (Global_17238.f_4352[iVar8])
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
							fVar33 = (fVar33 + Global_17238.f_4345[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17238.f_6833[iVar9] = iVar6;
						Global_17238.f_4995 = iVar6;
						iVar9++;
						if (Global_17238.f_4627[iVar6])
						{
							iVar13++;
						}
						if (Global_17238.f_5000[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17238.f_5000[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17238.f_4986)
					{
						Global_17238.f_4753[iVar6] = 1;
						if (Global_17238.f_4501[iVar6])
						{
							if (bVar31)
							{
								Global_17238.f_4992 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17238.f_4992 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17238.f_4986)
			{
				Global_17238.f_4988 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17238.f_4991 = iVar11;
				Global_17238.f_4989 = iVar10;
				Global_17238.f_4986 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17238.f_4987)
	{
		Global_17238.f_4990 = iVar9;
		Global_17238.f_4987 = 1;
	}
	Global_17238.f_5128 = fVar49;
	Global_17238.f_5130 = unk_0x09560C7DE2A384BD();
	unk_0x1F4FE6D0BB9E338B(Global_17238.f_5128);
	if (!Global_17238.f_7172)
	{
		func_55();
	}
	Global_17238.f_7172 = 0;
	if (bParam2)
	{
		unk_0x8A5A9834DB717F2D(10);
	}
	unk_0x8A5A9834DB717F2D(6);
	unk_0x8A5A9834DB717F2D(7);
	unk_0x8A5A9834DB717F2D(9);
	unk_0x8A5A9834DB717F2D(8);
	if (bParam0)
	{
		func_54(1);
	}
	unk_0xD599E2B13BA25D7B();
}

void func_54(int iParam0)
{
	Global_1328903.f_932 = iParam0;
}

void func_55()
{
	if (!Global_14394.f_1 == 1)
	{
		if (func_59(0))
		{
			func_56(0);
		}
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 2);
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
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
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
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

int func_59(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
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
	unk_0xC428E1247B8480C3(sParam2);
	unk_0xC8C41AD5B003B30B(uParam3, uParam4);
	unk_0x68E2B15AC7135C83(fParam0, fParam1, 0);
}

void func_62(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xC428E1247B8480C3(sParam2);
	unk_0x53B64327E3305DCB(iParam3);
	unk_0x68E2B15AC7135C83(fParam0, fParam1, iParam4);
}

void func_63(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x6C42276FEC08CCF9(Global_17238.f_7200[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x6C42276FEC08CCF9(Global_17238.f_7200[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, 255);
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
			func_65(Global_17238.f_5260[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x6C42276FEC08CCF9(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x6C42276FEC08CCF9(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x6C42276FEC08CCF9(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xB8662CE6B21E98E9(155, 155, 155, 255);
		}
		else
		{
			unk_0xB8662CE6B21E98E9(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xB8662CE6B21E98E9(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x6C42276FEC08CCF9(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xB8662CE6B21E98E9(155, 155, 155, 255);
	}
	else
	{
		unk_0xB8662CE6B21E98E9(155, 155, 155, 255);
	}
	unk_0x892A8C0426DC3D40(0f, 0.35f);
	unk_0x608269ED9D57DF58(1);
	if (bParam5)
	{
		unk_0x892A8C0426DC3D40(0f, 0.425f);
		unk_0xDF9D373BEABBC157(4);
	}
	else
	{
		unk_0xDF9D373BEABBC157(0);
	}
	unk_0x8C9F4BAAC8A43A07(0f, 1f);
	unk_0x47D98CEF75CC51B3(0);
	unk_0x3547043C94E650B3(0, 0, 0, 0, 0);
	unk_0x5FC53677129F4597(0, 0, 0, 0, 0);
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
	if (unk_0x6E6ED37B068198D0())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_69(unk_0x1788E93557766241(), 0))
		{
			return;
		}
	}
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0xCB70128095B6956E() == 0 || unk_0x6E6ED37B068198D0())
		{
			return;
		}
	}
	if (Global_17238.f_4046 != 0)
	{
		if (unk_0xABDBD87CEACB4A79(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17238.f_4046)
			{
				if (Global_17238.f_4303[iVar1] != 335)
				{
					StringCopy(&(Global_17238.f_4048[iVar1 /*16*/]), unk_0xA71FB26FF9682F08(2, Global_17238.f_4303[iVar1], 1), 64);
				}
				else if (Global_17238.f_4316[iVar1] != 31)
				{
					StringCopy(&(Global_17238.f_4048[iVar1 /*16*/]), unk_0x8766516556CDFB2B(2, Global_17238.f_4316[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17238.f_4047 = 0;
		}
		if (!Global_17238.f_4047)
		{
			unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xD3DF251F2DF3B257();
			unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x50050D925C27B388((1f - (Global_17238.f_4358 / 100f)));
			unk_0xD3DF251F2DF3B257();
			if (unk_0xF6BAF9F0C2863FFE())
			{
				unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xF34EF2C628F5B47B(1);
				unk_0xD3DF251F2DF3B257();
			}
			iVar1 = 0;
			while (iVar1 < Global_17238.f_4046)
			{
				if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_4241[iVar1 /*4*/])) != unk_0xB793F1A0B6CC4AE1("PREV"))
				{
					unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x26221D1D76579618(iVar1);
					func_68(&(Global_17238.f_4048[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_4241[iVar2 /*4*/])) == unk_0xB793F1A0B6CC4AE1("PREV"))
					{
						func_68(&(Global_17238.f_4048[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17238.f_4290[iVar1] == -1)
					{
						func_67(&(Global_17238.f_4241[iVar1 /*4*/]));
					}
					else
					{
						unk_0xEBC0B3BDAD1250BE(&(Global_17238.f_4241[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xECACDB29F7B53568(iParam2, 70);
						}
						else
						{
							unk_0x53B64327E3305DCB(iParam2);
						}
						unk_0x9F94C7B5E8C04AB3();
					}
					if (unk_0xF6BAF9F0C2863FFE())
					{
						if (Global_17238.f_4303[iVar1] != 335 && unk_0x889D01384B54BCE3(Global_17238.f_4329, iVar1))
						{
							unk_0xF34EF2C628F5B47B(1);
							unk_0x26221D1D76579618(Global_17238.f_4303[iVar1]);
						}
						else
						{
							unk_0xF34EF2C628F5B47B(0);
							unk_0x26221D1D76579618(335);
						}
					}
					unk_0xD3DF251F2DF3B257();
				}
				iVar1++;
			}
			if (unk_0xB793F1A0B6CC4AE1(&(Global_2541283.f_16)) != unk_0xB793F1A0B6CC4AE1(""))
			{
				unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x26221D1D76579618(Global_17238.f_4046);
				func_68(&Global_2541283);
				if (Global_2541283.f_20 == -1)
				{
					func_67(&(Global_2541283.f_16));
				}
				else
				{
					unk_0xEBC0B3BDAD1250BE(&(Global_2541283.f_16));
					if (bParam5)
					{
						unk_0xECACDB29F7B53568(iParam2, 70);
					}
					else
					{
						unk_0x53B64327E3305DCB(iParam2);
					}
					unk_0x9F94C7B5E8C04AB3();
				}
				unk_0xD3DF251F2DF3B257();
			}
			unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x26221D1D76579618(0);
			unk_0x26221D1D76579618(0);
			unk_0x26221D1D76579618(0);
			unk_0x26221D1D76579618(80);
			unk_0xD3DF251F2DF3B257();
			unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17238.f_4359)
			{
				unk_0x26221D1D76579618(1);
			}
			else
			{
				unk_0x26221D1D76579618(0);
			}
			unk_0xD3DF251F2DF3B257();
			Global_17238.f_4047 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17238.f_4046)
		{
			if (Global_17238.f_4290[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x26221D1D76579618(iVar1);
					unk_0xEBC0B3BDAD1250BE(&(Global_17238.f_4241[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xECACDB29F7B53568(iParam2, 70);
					}
					else
					{
						unk_0x53B64327E3305DCB(iParam2);
					}
					unk_0x9F94C7B5E8C04AB3();
					unk_0xD3DF251F2DF3B257();
				}
			}
			iVar1++;
		}
		if (Global_2541283.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x26221D1D76579618(iVar1);
				unk_0xEBC0B3BDAD1250BE(&(Global_2541283.f_16));
				if (bParam5)
				{
					unk_0xECACDB29F7B53568(iParam2, 70);
				}
				else
				{
					unk_0x53B64327E3305DCB(iParam2);
				}
				unk_0x9F94C7B5E8C04AB3();
				unk_0xD3DF251F2DF3B257();
			}
		}
		unk_0xD56181B43A801B45(76, 66);
		unk_0x005186B9591984A5(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17238.f_7207)
			{
				unk_0xAD871E75FA8292BF(15, 0f, -0.0375f);
				Global_17238.f_7207 = 1;
			}
		}
		else if (Global_17238.f_7207)
		{
			unk_0x2F2EE906A0CF46A3(15);
			Global_17238.f_7207 = 0;
		}
		unk_0xD599E2B13BA25D7B();
		if (Global_17238.f_4332)
		{
			unk_0xD56181B43A801B45(82, 66);
			unk_0x005186B9591984A5(0f, 0f, 0f, 0f);
			unk_0x782CAB485999E384(Global_17238.f_4918[iVar0 /*10*/], Global_17238.f_4330, Global_17238.f_4331, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xD599E2B13BA25D7B();
		}
		else
		{
			unk_0x27BDF28219C810BA(Global_17238.f_4918[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_67(char[4] cParam0)
{
	unk_0xEBC0B3BDAD1250BE(cParam0);
	unk_0x9F94C7B5E8C04AB3();
}

void func_68(var uParam0)
{
	unk_0xB51F3A5C13620EE6(uParam0);
}

bool func_69(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_70(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
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
	if (Global_1315869[iVar1] == 1)
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
		unk_0x42F219BEF3DE3A7F(&Var0);
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_74(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x6C42276FEC08CCF9(1, iParam2, iParam3, iParam4, &uVar0);
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
	
	unk_0x6C42276FEC08CCF9(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xDF9D373BEABBC157(0);
	unk_0x892A8C0426DC3D40(0f, 0.35f);
	unk_0x6C98E2D18D37F459(2);
	unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, iVar3);
	unk_0x8C9F4BAAC8A43A07(fParam0, ((Global_17235 + Global_17237) - 0.0046875f));
	unk_0x47D98CEF75CC51B3(0);
	unk_0x3547043C94E650B3(0, 0, 0, 0, 0);
	unk_0x5FC53677129F4597(0, 0, 0, 0, 0);
}

void func_76(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xC428E1247B8480C3(sParam2);
	unk_0x53B64327E3305DCB(uParam3);
	unk_0x53B64327E3305DCB(uParam4);
	unk_0x68E2B15AC7135C83(fParam0, fParam1, 0);
}

float func_77(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x8CD18E96F1984EE6(sParam0))
	{
		if (unk_0xB793F1A0B6CC4AE1(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_78();
	unk_0x65CC688E5B978C02(sParam0);
	unk_0x53B64327E3305DCB(uParam1);
	unk_0x53B64327E3305DCB(uParam2);
	return unk_0xFBF0574D26E9F943(1);
}

void func_78()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x6C42276FEC08CCF9(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17238.f_7182)
	{
		iVar0 = Global_17238.f_7178;
		iVar1 = Global_17238.f_7179;
		iVar2 = Global_17238.f_7180;
		iVar3 = Global_17238.f_7181;
	}
	unk_0xDF9D373BEABBC157(0);
	unk_0x892A8C0426DC3D40(0f, 0.35f);
	unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, iVar3);
	unk_0x8C9F4BAAC8A43A07((Global_17235 + 0.0046875f), ((Global_17235 + Global_17237) - 0.0046875f));
	unk_0x47D98CEF75CC51B3(0);
	unk_0x3547043C94E650B3(0, 0, 0, 0, 0);
	unk_0x5FC53677129F4597(0, 0, 0, 0, 0);
}

void func_79(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x7EEA32490EAB9FA4((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_80(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0x06771AF7795B3ECF(&(Global_17238.f_6048[iParam0 /*16*/])))
	{
		return func_81(&(Global_17238.f_6048[iParam0 /*16*/]));
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
	if (!unk_0x06771AF7795B3ECF(&(Global_17238.f_5263[iParam0 /*16*/])))
	{
		return func_81(&(Global_17238.f_5263[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_83()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x8C31DEE1FBBA2653(&iVar0, &iVar1);
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
	if (unk_0xB793F1A0B6CC4AE1(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x8C31DEE1FBBA2653(&iVar2, &iVar3);
			fVar5 = unk_0x649F384939D0D134(0);
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
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0xBD535F1B4794167F(&iVar2, &iVar3);
		}
		Var7 = { unk_0x2BA2BECD21B523A8(uVar0, sVar1) };
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
			if (!unk_0x4766AC67087E1839() && iParam0 != 30)
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
	if (Global_2422491.f_1323.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x83B393DE31BAC8F0() || (func_88(8, -1) && func_87() != 64)) || (unk_0xB0E35FF1A90C8FAA() != 0 && !bParam1)) || (unk_0xB4B5BF5882A555F9() && !bParam0)) || unk_0xEEF4BA306EA3EC77()) || Global_68585) || Global_17238.f_7206) || unk_0x34CC8D9406FED489()) || Global_90094.f_1323)
	{
		return 0;
	}
	return 1;
}

int func_87()
{
	return Global_1315824;
}

bool func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_89(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_67218[iParam0] = 0;
	Global_67218.f_69[iParam0] = 0;
}

void func_90(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_40(&(Global_67218.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x889D01384B54BCE3(Global_67218.f_555[0 /*21*/].f_9, 10))
		{
			func_92(iParam0);
			func_91(uParam1, &(Global_97439.f_18371.f_69[Global_67218.f_555[0 /*21*/].f_14 /*54*/]));
			if (unk_0x889D01384B54BCE3(Global_67218.f_555[0 /*21*/].f_9, 11))
			{
				Global_97439.f_18371.f_1312[Global_67218.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_97439.f_18371.f_1382[Global_67218.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_97439.f_18371.f_1312[Global_67218.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_97439.f_18371.f_1382[Global_67218.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_97439.f_18371.f_1406[Global_67218.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_319(iParam0, 1);
		}
	}
}

void func_91(var uParam0, var uParam1)
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_35 = { uParam0->f_35 };
	uParam1->f_38 = uParam0->f_38;
	uParam1->f_39 = uParam0->f_39;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_53 = uParam0->f_53;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_50 = uParam0->f_50;
	uParam1->f_51 = uParam0->f_51;
	uParam1->f_52 = uParam0->f_52;
}

void func_92(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_40(&(Global_67218.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x538DF9E5B1DF01EB(Global_67218.f_139[iParam0]))
		{
			unk_0x7B9576B4E099FB1F(Global_67218.f_139[iParam0], 1, 1);
			unk_0x3A3C5A6572B3C611(&(Global_67218.f_139[iParam0]));
			Global_67218.f_139[iParam0] = 0;
		}
		if (unk_0x889D01384B54BCE3(Global_67218.f_555[0 /*21*/].f_9, 13))
		{
			func_319(iParam0, 0);
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
	
	sVar0 = unk_0xA71FB26FF9682F08(2, iParam0, 1);
	if (Global_17238.f_4046 >= 12)
	{
		StringCopy(&Global_2541283, sVar0, 64);
		StringCopy(&(Global_2541283.f_16), sParam1, 16);
		Global_2541283.f_20 = iParam2;
		return;
		return;
	}
	unk_0x29DB79DD4D939B38(&(Global_17238.f_4329), Global_17238.f_4046);
	StringCopy(&(Global_17238.f_4048[Global_17238.f_4046 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17238.f_4241[Global_17238.f_4046 /*4*/]), sParam1, 16);
	Global_17238.f_4290[Global_17238.f_4046] = iParam2;
	Global_17238.f_4303[Global_17238.f_4046] = iParam0;
	Global_17238.f_4316[Global_17238.f_4046] = 31;
	Global_17238.f_4046++;
}

void func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17238.f_4046 = 0;
	Global_17238.f_4047 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17238.f_4241[iVar0 /*4*/]), "", 16);
		Global_17238.f_4290[iVar0] = -1;
		Global_17238.f_4303[iVar0] = 335;
		Global_17238.f_4316[iVar0] = 31;
		iVar0++;
	}
	Global_17238.f_4329 = 0;
	StringCopy(&(Global_2541283.f_16), "", 16);
	Global_2541283.f_20 = -1;
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (!func_52(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0xB067107D878E9585(Global_17238.f_4918[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0xF34EF2C628F5B47B(0);
		unk_0xD3DF251F2DF3B257();
	}
}

void func_96(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17238.f_3969), sParam0, 16);
	Global_17238.f_4039 = 0;
	Global_17238.f_4040 = 0;
	Global_17238.f_4041 = 0;
	Global_17238.f_4042 = 0;
	Global_17238.f_4043 = iParam1;
	Global_17238.f_4044 = unk_0x09560C7DE2A384BD();
	Global_17238.f_4045 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17238.f_3973[iVar0] = 0;
		iVar0++;
	}
}

int func_97()
{
	if (unk_0x3E512F3AB14225D6(2))
	{
		if (Global_2541359 > -1)
		{
			if (unk_0x51104159A21A8E40(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_98(int iParam0, int iParam1)
{
	if (!unk_0x3E512F3AB14225D6(2))
	{
		return 0;
	}
	if (unk_0x2B0FFD431FD5A9FA() || unk_0x34CC8D9406FED489())
	{
		return 0;
	}
	unk_0x6FCAB92159B80585();
	if (Global_2541359 == -6)
	{
		unk_0xEA881E880194550C(4);
		if (iParam0 && unk_0xF49761626882E968(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2541359 = -1;
			return 0;
		}
	}
	if (((Global_2541359 > -1 || Global_2541359 == -3) || Global_2541359 == -2) || unk_0xE0449C72C968CF8D())
	{
		unk_0xEA881E880194550C(1);
		return 0;
	}
	if (Global_2541359 == -1 && iParam0)
	{
		if (unk_0xF49761626882E968(2, 237))
		{
			unk_0xEA881E880194550C(4);
			Global_2541359 = -6;
			return 1;
		}
		else
		{
			unk_0xEA881E880194550C(3);
			return 0;
		}
	}
	unk_0xEA881E880194550C(1);
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
	if (!unk_0x3E512F3AB14225D6(2))
	{
		Global_2541359 = -1;
		return;
	}
	unk_0xDFCDE7E4BB655DCA(1);
	fVar0 = Global_17235;
	fVar2 = (fVar0 + Global_17237);
	fVar3 = Global_17238.f_4988;
	fVar1 = (Global_17238.f_4988 - (IntToFloat(Global_17238.f_4990) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17238.f_4990 < 1)
	{
		fVar1 = (Global_17238.f_4988 - 0.034722f);
	}
	unk_0xD56181B43A801B45(76, 84);
	unk_0x005186B9591984A5(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xFB06D9C36A569046(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xFB06D9C36A569046(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xD599E2B13BA25D7B();
	func_101();
	if (Global_2541359 == -6)
	{
		return;
	}
	Global_2541359 = -1;
	fVar7 = Global_2541353;
	fVar8 = Global_2541354;
	if (Global_17238.f_4991 > Global_17238.f_4990)
	{
		if (((Global_2541353 >= fVar0 && Global_2541353 <= fVar2) && Global_2541354 >= fVar3) && Global_2541354 < (fVar3 + fVar6))
		{
			Global_2541359 = -2;
			if (bParam3)
			{
				func_100(0);
			}
			return;
		}
		if (((Global_2541353 >= fVar0 && Global_2541353 <= fVar2) && Global_2541354 >= (fVar3 + fVar6)) && Global_2541354 < (fVar3 + 0.034722f))
		{
			Global_2541359 = -3;
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
		if (Global_17238.f_4991 == -1)
		{
			Global_2541359 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17238.f_4990);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xD56181B43A801B45(76, 84);
				unk_0x005186B9591984A5(-0.05f, -0.05f, 0f, 0f);
				func_79(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17237, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xD599E2B13BA25D7B();
			}
		}
		Global_2541359 = Global_17238.f_6833[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2541359 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2541359 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2541359 = -4;
		return;
	}
	Global_2541359 = -1;
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
	fVar1 = Global_17238.f_4988;
	unk_0xD56181B43A801B45(76, 84);
	unk_0x005186B9591984A5(-0.05f, -0.05f, 0f, 0f);
	if (Global_2541359 == -2)
	{
		func_79(fVar0, fVar1, Global_17237, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2541359 == -3)
	{
		func_79(fVar0, (fVar1 + fVar2), Global_17237, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xD599E2B13BA25D7B();
}

void func_101()
{
	Global_2541355 = Global_2541353;
	Global_2541356 = Global_2541354;
	Global_2541353 = unk_0x4A8C8B3AD253A58F(2, 239);
	Global_2541354 = unk_0x4A8C8B3AD253A58F(2, 240);
	Global_2541357 = (Global_2541353 - Global_2541355);
	Global_2541358 = (Global_2541354 - Global_2541356);
}

void func_102(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17238.f_4994 = iParam0;
	Global_17238.f_5126 = iParam2;
	if (Global_17238.f_4994 < Global_17238.f_4993)
	{
		Global_17238.f_4993 = Global_17238.f_4994;
	}
	else if ((Global_17238.f_4987 && Global_17238.f_4994 > Global_17238.f_4995) || (!Global_17238.f_4987 && Global_17238.f_4994 >= (Global_17238.f_4993 + Global_17238.f_4499)))
	{
		iVar0 = Global_17238.f_4993;
		while (iVar0 <= Global_17238.f_4994)
		{
			if (iVar0 >= 0 && iVar0 < 124)
			{
				if (Global_17238.f_4366[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17238.f_4499 && Global_17238.f_4993 < 125)
		{
			Global_17238.f_4993++;
			iVar1 = 0;
			iVar0 = Global_17238.f_4993;
			while (iVar0 <= Global_17238.f_4994)
			{
				if (iVar0 >= 0 && iVar0 < 124)
				{
					if (Global_17238.f_4366[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17238.f_4986 = 0;
	Global_17238.f_4987 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17238.f_3969), "", 16);
		StringCopy(&(Global_2541283.f_21), "", 16);
	}
}

void func_103(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17238.f_4494 >= 250)
	{
		return;
	}
	if (Global_17238.f_4998 >= 4)
	{
		return;
	}
	if (Global_17238.f_4999 != 1)
	{
		return;
	}
	if (Global_17238.f_4998 >= Global_17238.f_4996)
	{
		return;
	}
	StringCopy(&(Global_17238.f_73[Global_17238.f_4494 /*4*/]), sParam0, 16);
	Global_17238.f_4494++;
	Global_17238.f_1576[Global_17238.f_4997 /*5*/][Global_17238.f_4998] = 1;
	Global_17238.f_4998++;
	if (Global_17238.f_4998 >= Global_17238.f_4996)
	{
		fVar0 = func_105();
		if (Global_17238.f_4352[Global_17238.f_4493] && Global_17238.f_4998 == Global_17238.f_4996)
		{
			func_84(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17238.f_4345[(Global_17238.f_4493 - 1)])
		{
			Global_17238.f_4345[(Global_17238.f_4493 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17238.f_4998 >= Global_17238.f_4996)
		{
			fVar3 = func_104();
			if (fVar3 > Global_17238.f_5000[Global_17238.f_4492])
			{
				Global_17238.f_5000[Global_17238.f_4492] = fVar3;
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
	while (iVar0 < Global_17238.f_4998)
	{
		if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17238.f_3843[((Global_17238.f_4498 - iVar1) + iVar0)] != 0)
		{
			if (func_84(Global_17238.f_3843[((Global_17238.f_4498 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x9A4D7A4AF1373FB1(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x9A4D7A4AF1373FB1(0.35f, 0);
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
	while (iVar7 < Global_17238.f_4998)
	{
		if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_64(0, 1, 0, 0, 0, iVar6 > 0);
	if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
	{
		unk_0x65CC688E5B978C02(&(Global_17238.f_73[Global_17238.f_4997 /*4*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17238.f_4998)
	{
		if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0x4498E0CBD76B2D72(&(Global_17238.f_73[(Global_17238.f_4997 + iVar8) /*4*/]));
			}
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0x4498E0CBD76B2D72(&(Global_17238.f_73[(Global_17238.f_4997 + iVar8) /*4*/]));
			}
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 2)
		{
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0x53B64327E3305DCB(Global_17238.f_3340[((Global_17238.f_4496 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 3)
		{
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0xC8C41AD5B003B30B(Global_17238.f_3591[((Global_17238.f_4497 - iVar4) + iVar10)], Global_17238.f_3717[((Global_17238.f_4497 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 5)
		{
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0x94E086BCAE8856C1(&(Global_2435665[((Global_17238.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 6)
		{
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0x4498E0CBD76B2D72(&(Global_2435665[((Global_17238.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 7)
		{
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0x94E086BCAE8856C1(&(Global_2435665[((Global_17238.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
	{
		fVar0 = unk_0xFBF0574D26E9F943(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17238.f_3843[((Global_17238.f_4498 - iVar5) + iVar7)] != 0)
		{
			func_84(Global_17238.f_3843[((Global_17238.f_4498 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
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
	
	if (Global_17238.f_4492 > iParam0)
	{
		return;
	}
	if (Global_17238.f_4492 >= 125)
	{
		return;
	}
	if (Global_17238.f_4498 >= 125)
	{
		return;
	}
	if (Global_17238.f_4998 < Global_17238.f_4996)
	{
		return;
	}
	if (Global_17238.f_4492 != iParam0)
	{
		Global_17238.f_4492 = iParam0;
		Global_17238.f_4493 = 0;
	}
	iVar0 = Global_17238.f_4333[Global_17238.f_4493];
	if (iVar0 != 4)
	{
		while (Global_17238.f_4493 < 4 && iVar0 != 4)
		{
			Global_17238.f_4493++;
			iVar0 = Global_17238.f_4333[Global_17238.f_4493];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_17238.f_3843[Global_17238.f_4498] = iParam1;
	Global_17238.f_4498++;
	if (iParam1 != 0)
	{
		func_84(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17238.f_4352[Global_17238.f_4493])
		{
			func_84(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_17238.f_4345[Global_17238.f_4493])
		{
			Global_17238.f_4345[Global_17238.f_4493] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_17238.f_5000[iParam0])
			{
				Global_17238.f_5000[iParam0] = fVar2;
			}
		}
	}
	unk_0xD0E2BFCE93AE3ABD(&(Global_17238.f_4366[iParam0]), Global_17238.f_4493);
	Global_17238.f_4493++;
	Global_17238.f_4999 = 4;
}

void func_109(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17238.f_4492 > iParam0)
	{
		return;
	}
	if (Global_17238.f_4492 >= 125)
	{
		return;
	}
	if (Global_17238.f_4494 >= 250)
	{
		return;
	}
	if (Global_17238.f_4998 < Global_17238.f_4996)
	{
		return;
	}
	if (Global_17238.f_4492 != iParam0)
	{
		Global_17238.f_4492 = iParam0;
		Global_17238.f_4493 = 0;
	}
	iVar0 = Global_17238.f_4333[Global_17238.f_4493];
	if (iVar0 != 1)
	{
		while (Global_17238.f_4493 < 4 && iVar0 != 1)
		{
			Global_17238.f_4493++;
			iVar0 = Global_17238.f_4333[Global_17238.f_4493];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17238.f_73[Global_17238.f_4494 /*4*/]), sParam1, 16);
	Global_17238.f_1074[Global_17238.f_4494] = iParam3;
	Global_17238.f_1325[Global_17238.f_4494] = iParam4;
	Global_17238.f_4494++;
	if (iParam2 == 0)
	{
		fVar1 = func_111(sParam1);
		if (Global_17238.f_4352[Global_17238.f_4493])
		{
			func_84(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17238.f_4345[Global_17238.f_4493])
		{
			Global_17238.f_4345[Global_17238.f_4493] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_110(sParam1);
			if (fVar4 > Global_17238.f_5000[iParam0])
			{
				Global_17238.f_5000[iParam0] = fVar4;
			}
		}
	}
	unk_0xD0E2BFCE93AE3ABD(&(Global_17238.f_4366[iParam0]), Global_17238.f_4493);
	Global_17238.f_4493++;
	Global_17238.f_4999 = 1;
	Global_17238.f_4997 = (Global_17238.f_4494 - 1);
	Global_17238.f_4998 = 0;
	Global_17238.f_4996 = iParam2;
}

float func_110(char* sParam0)
{
	if (!unk_0xC929DDA58687736B(sParam0))
	{
	}
	return unk_0x9A4D7A4AF1373FB1(0.35f, 0);
}

float func_111(char* sParam0)
{
	if (!unk_0x8CD18E96F1984EE6(sParam0))
	{
		if (unk_0xB793F1A0B6CC4AE1(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_64(0, 1, 0, 0, 0, 0);
	unk_0x65CC688E5B978C02(sParam0);
	return unk_0xFBF0574D26E9F943(1);
}

void func_112(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	uParam1->f_42 = func_107(iParam0);
	if (uParam1->f_42 == 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_42 == joaat("frogger"))
	{
		uParam1->f_42 = joaat("frogger2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_43 = 1;
		return;
	}
	uParam1->f_53 = 0;
	func_119(iParam0, &(uParam1->f_53));
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
	if (bParam2)
	{
		iVar0 = Global_67215;
	}
	else if (iParam3 == 0)
	{
		iVar0 = Global_97439.f_28355.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar0 = Global_97439.f_28355.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar0 = Global_97439.f_28355.f_939[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_43 = -1;
	if (iParam0 == 200)
	{
		switch (iVar0)
		{
			case 1:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 2:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 3:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 4:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 5:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 6:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 7:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 8:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 9:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 10:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 11:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 12:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 13:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 14:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 15:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 16:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 17:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 18:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 19:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 20:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 21:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 22:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 23:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 24:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
				break;
			
			case 25:
				func_115(func_116(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_114(func_116(iParam0, iVar0));
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
				uParam1->f_43 = 1;
				break;
			
			case 2:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 2;
				break;
			
			case 3:
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 3;
				break;
			
			case 4:
				uParam1->f_5 = 59;
				uParam1->f_6 = 59;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 8;
				break;
			
			case 5:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4;
				break;
			
			case 6:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 5;
				break;
			
			case 7:
				uParam1->f_5 = 42;
				uParam1->f_6 = 42;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 7;
				break;
			
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 6;
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
				if (func_113(iParam0))
				{
					if (iParam0 != 164)
					{
						uParam1->f_43 = 0;
					}
					else
					{
						uParam1->f_43 = func_114(func_116(iParam0, iVar0));
					}
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_43 = -1;
				}
				break;
			
			case 2:
				if (func_113(iParam0))
				{
					if (iParam0 != 164)
					{
						uParam1->f_43 = 1;
					}
					else
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 10;
						uParam1->f_7 = 4;
						uParam1->f_8 = 156;
						uParam1->f_43 = func_114(func_116(iParam0, iVar0));
					}
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_43 = -1;
				}
				break;
			
			case 3:
				if (func_113(iParam0))
				{
					uParam1->f_43 = 2;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_43 = -1;
				}
				break;
			
			case 4:
				if (func_113(iParam0))
				{
					uParam1->f_43 = 3;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					uParam1->f_43 = -1;
				}
				break;
			
			case 5:
				if (uParam1->f_42 == joaat("bifta") || uParam1->f_42 == joaat("kalahari"))
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 0;
					uParam1->f_43 = -1;
				}
				else if (((((uParam1->f_42 == joaat("jester") || uParam1->f_42 == joaat("massacro")) || uParam1->f_42 == joaat("turismor")) || uParam1->f_42 == joaat("zentorno")) || uParam1->f_42 == joaat("huntley")) || uParam1->f_42 == joaat("alpha"))
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 0;
					uParam1->f_43 = -1;
				}
				else if (uParam1->f_42 == joaat("ratloader"))
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 0;
					uParam1->f_43 = -1;
				}
				else if (uParam1->f_42 == joaat("panto"))
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 0;
					uParam1->f_43 = -1;
				}
				else if (uParam1->f_42 == joaat("insurgent") || uParam1->f_42 == joaat("insurgent2"))
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
					uParam1->f_43 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					uParam1->f_43 = -1;
				}
				break;
			
			case 6:
				uParam1->f_5 = 64;
				uParam1->f_6 = 68;
				uParam1->f_43 = -1;
				break;
			
			case 7:
				if (uParam1->f_42 == joaat("kuruma2"))
				{
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_7 = 13;
					uParam1->f_8 = 156;
					uParam1->f_43 = -1;
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_43 = -1;
				}
				break;
			
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 0;
				uParam1->f_43 = -1;
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
				uParam1->f_43 = -1;
				break;
			
			case 13:
				uParam1->f_5 = 46;
				uParam1->f_6 = 24;
				uParam1->f_7 = 46;
				uParam1->f_8 = 24;
				uParam1->f_43 = -1;
				break;
			
			case 33:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 34:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 35:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 36:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 37:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 38:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 206:
				uParam1->f_5 = 2;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_43 = -1;
				break;
			
			case 207:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 126;
				uParam1->f_43 = -1;
				break;
			
			case 208:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_43 = -1;
				break;
			
			case 209:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 139;
				uParam1->f_43 = -1;
				break;
			
			case 210:
				uParam1->f_5 = 28;
				uParam1->f_6 = 0;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 213:
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_7 = 42;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 212:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 27;
				uParam1->f_43 = -1;
				break;
			
			case 17:
				uParam1->f_5 = 30;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 215:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 217:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
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
		uParam1->f_43 = -1;
	}
	if (uParam1->f_43 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_43 = 1;
	}
}

int func_113(int iParam0)
{
	if (((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219)
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0)
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

int func_115(int iParam0, var uParam1, var uParam2)
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

int func_116(int iParam0, int iParam1)
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
			if (func_117(iParam0, iParam1))
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

int func_117(int iParam0, int iParam1)
{
	if (iParam0 == 164)
	{
		if (iParam1 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (unk_0x620D8FF311E738AE())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_22() && func_118())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 118 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (unk_0x889D01384B54BCE3(Global_25, 1) || unk_0x889D01384B54BCE3(Global_25, 3))
	{
		return 1;
	}
	if (unk_0xCEFAE6CD543A0383())
	{
		iVar0 = unk_0x7058289E8DD601D6(866);
		if (unk_0x889D01384B54BCE3(iVar0, 1) || unk_0x889D01384B54BCE3(iVar0, 3))
		{
			return 1;
		}
	}
	if (unk_0x1186FAABEB7498E8(0))
	{
		if (Global_131780.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x3ED04C9A60CBD249(iVar2, &iVar1, -1))
			{
				if (unk_0x889D01384B54BCE3(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x6B7032CA494CCEE4())
	{
		if (unk_0x07ED3AB0A86F77AA())
		{
			if (unk_0x59221A15604D3C5D())
			{
				if (unk_0xCEFAE6CD543A0383())
				{
					uVar3 = unk_0x7058289E8DD601D6(866);
					unk_0xD0E2BFCE93AE3ABD(&uVar3, 1);
					unk_0xD0E2BFCE93AE3ABD(&uVar3, 3);
					unk_0xBE2CD6E2863337FA(uVar3);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_119(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 64:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 4);
			break;
		
		case 67:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 4);
			break;
		
		case 72:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			break;
		
		case 117:
			unk_0x29DB79DD4D939B38(uParam1, 1);
			break;
		
		case 49:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			break;
		
		case 118:
			unk_0x29DB79DD4D939B38(uParam1, 1);
			break;
		
		case 1:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			break;
		
		case 119:
			unk_0x29DB79DD4D939B38(uParam1, 1);
			break;
		
		case 77:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 0);
			unk_0x29DB79DD4D939B38(uParam1, 1);
			unk_0x29DB79DD4D939B38(uParam1, 2);
			break;
		
		case 120:
			unk_0x29DB79DD4D939B38(uParam1, 0);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			unk_0x29DB79DD4D939B38(uParam1, 2);
			break;
		
		case 130:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 0);
			break;
		
		case 132:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 0);
			break;
		
		case 135:
			unk_0x29DB79DD4D939B38(uParam1, 0);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			break;
		
		case 137:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 0);
			break;
		
		case 141:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			unk_0x29DB79DD4D939B38(uParam1, 6);
			break;
		
		case 147:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 0);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 2);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 3);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 4);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 5);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 6);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 7);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 8);
			break;
		
		case 203:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 0);
			unk_0x29DB79DD4D939B38(uParam1, 1);
			unk_0x29DB79DD4D939B38(uParam1, 2);
			break;
		
		case 100:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 0);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 2);
			break;
		
		case 170:
			unk_0x29DB79DD4D939B38(uParam1, 0);
			unk_0x29DB79DD4D939B38(uParam1, 1);
			unk_0x29DB79DD4D939B38(uParam1, 2);
			break;
		
		case 160:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 15);
			break;
		
		case 161:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 15);
			break;
		
		case 192:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 0);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			unk_0x29DB79DD4D939B38(uParam1, 2);
			break;
		
		case 221:
			unk_0x29DB79DD4D939B38(uParam1, 0);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			unk_0x29DB79DD4D939B38(uParam1, 2);
			break;
		
		case 222:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			break;
		
		case 172:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			break;
		
		case 165:
			unk_0x29DB79DD4D939B38(uParam1, 0);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			break;
		
		case 166:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 0);
			unk_0x29DB79DD4D939B38(uParam1, 1);
			break;
		
		case 139:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 0);
			break;
		
		case 104:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			break;
		
		case 109:
			unk_0xD0E2BFCE93AE3ABD(uParam1, 0);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
			unk_0xD0E2BFCE93AE3ABD(uParam1, 2);
			break;
		
		default:
			return;
			break;
	}
}

void func_120(char* sParam0)
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

void func_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17238.f_4360[0] = iParam0;
	Global_17238.f_4360[1] = iParam1;
	Global_17238.f_4360[2] = iParam2;
	Global_17238.f_4360[3] = iParam3;
	Global_17238.f_4360[4] = iParam4;
}

void func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17238.f_4333[0] = iParam0;
	Global_17238.f_4333[1] = iParam1;
	Global_17238.f_4333[2] = iParam2;
	Global_17238.f_4333[3] = iParam3;
	Global_17238.f_4333[4] = iParam4;
	Global_17238.f_4500 = 0;
	if (iParam0 != 0)
	{
		Global_17238.f_4500++;
	}
	if (iParam1 != 0)
	{
		Global_17238.f_4500++;
	}
	if (iParam2 != 0)
	{
		Global_17238.f_4500++;
	}
	if (iParam3 != 0)
	{
		Global_17238.f_4500++;
	}
	if (iParam4 != 0)
	{
		Global_17238.f_4500++;
	}
}

void func_123(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 250)
	{
		StringCopy(&(Global_17238.f_73[iVar0 /*4*/]), "", 16);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17238.f_1576[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2435665[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 250)
	{
		Global_17238.f_3340[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17238.f_3591[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17238.f_3843[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17238.f_4366[iVar0] = 0;
		Global_17238.f_4501[iVar0] = 0;
		Global_17238.f_4627[iVar0] = 0;
		Global_17238.f_5131[iVar0] = 0f;
		Global_17238.f_4753[iVar0] = 0;
		Global_17238.f_5000[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17238.f_4333[iVar0] = 0;
		Global_17238.f_4345[iVar0] = 0f;
		Global_17238.f_4339[iVar0] = -1f;
		Global_17238.f_4352[iVar0] = 0;
		Global_17238.f_4360[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17238.f_4241[iVar0 /*4*/]), "", 16);
		Global_17238.f_4290[iVar0] = -1;
		Global_17238.f_4303[iVar0] = 335;
		Global_17238.f_4316[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&(Global_17238.f_5263[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17238.f_6048[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2541283.f_16), "", 16);
	Global_2541283.f_20 = -1;
	Global_17238 = 0;
	Global_17238.f_4492 = 0;
	Global_17238.f_4493 = 0;
	Global_17238.f_4494 = 0;
	Global_17238.f_4496 = 0;
	Global_17238.f_4497 = 0;
	Global_17238.f_4498 = 0;
	Global_17238.f_4495 = 0;
	Global_17238.f_5126 = 0;
	Global_17238.f_4994 = 0;
	Global_17238.f_4993 = 0;
	Global_17238.f_4995 = 0;
	StringCopy(&(Global_17238.f_3969), "", 16);
	Global_17238.f_4039 = 0;
	Global_17238.f_4040 = 0;
	Global_17238.f_4041 = 0;
	Global_17238.f_4042 = 0;
	Global_17238.f_4043 = 0;
	Global_17238.f_4044 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17238.f_3973[iVar0] = 0;
		iVar0++;
	}
	Global_17238.f_4045 = 0;
	StringCopy(&(Global_2541283.f_21), "", 16);
	Global_2541283.f_61 = 0;
	Global_2541283.f_62 = 0;
	Global_2541283.f_63 = 0;
	Global_2541283.f_64 = 0;
	Global_2541283.f_65 = 0;
	Global_2541283.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2541283.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2541283.f_67 = 0;
	StringCopy(&(Global_17238.f_1), "", 16);
	Global_17238.f_4351 = 0f;
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
	Global_17238.f_4999 = 0;
	Global_17238.f_4998 = 0;
	Global_17238.f_4996 = 0;
	Global_17238.f_4997 = 0;
	Global_17238.f_4046 = 0;
	Global_17238.f_4047 = 0;
	Global_17238.f_4499 = 10;
	Global_17238.f_4500 = 0;
	Global_17238.f_5128 = 0f;
	Global_17238.f_5129 = 0f;
	Global_17238.f_4986 = 0;
	Global_17238.f_4987 = 0;
	Global_17238.f_4988 = 0f;
	Global_17238.f_4989 = 0;
	Global_17238.f_4991 = 0;
	Global_17238.f_4990 = 0;
	Global_17238.f_4992 = 0;
	Global_17238.f_7203 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17238.f_5257[iVar0] = -1;
		Global_17238.f_5260[iVar0] = -1;
		iVar0++;
	}
	Global_17238.f_4358 = 0f;
	Global_17238.f_4329 = 0;
	Global_17238.f_4359 = 0;
	Global_17238.f_7182 = 0;
	Global_17238.f_7177 = 0;
	Global_17238.f_7187 = 0;
	Global_17238.f_7192 = 0;
	Global_17238.f_7197 = 0;
	Global_17238.f_7199 = 0;
	Global_17238.f_7205 = 0;
	Global_17235 = 0.05f;
	Global_17236 = 0.05f;
	Global_17237 = 0.225f;
	fVar2 = unk_0x649F384939D0D134(0);
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

void func_124()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		unk_0x81A67526504056C0(0.325f, 0.3f);
	}
}

int func_125(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_49(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x2AF80829930084FD(unk_0xA495B6AB6F2BF8C7()))
	{
		return 0;
	}
	if (func_59(0))
	{
		return 0;
	}
	if (unk_0xEC35DAD55FA4EEF2())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35615[iVar0 /*19*/] == 1 && Global_35615[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_35615[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_35615[iVar0 /*19*/].f_5 = 1;
			Global_35615[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_35615[iVar0 /*19*/] == 0)
			{
			}
			if (Global_35615[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_126(char* sParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_52(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17238.f_4893[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x06771AF7795B3ECF(&(Global_17238.f_4893[iVar0 /*4*/])))
	{
		unk_0x95AB598E6554985B(&(Global_17238.f_4893[iVar0 /*4*/]), 9);
		Global_17238.f_4886[iVar0] = 1;
		if (!unk_0xB1ED4163AEBBDE95(&(Global_17238.f_4893[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x52964052BC489DDD("CommonMenu", 0);
	Global_17238.f_4879[iVar0] = 1;
	if (!unk_0xDC8071F347A8DD3F("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17238.f_4918[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_127(&(Global_17238.f_4918[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_127(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xC8378A96673BCC40(*uParam0))
			{
				*uParam0 = unk_0x36ECDA4DD9A3F08D(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xC8378A96673BCC40(*uParam0))
					{
						uParam0->f_8 = unk_0x09560C7DE2A384BD();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x09560C7DE2A384BD();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xC8378A96673BCC40(*uParam0))
			{
				uParam0->f_8 = unk_0x09560C7DE2A384BD();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xC8378A96673BCC40(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_128(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

var func_129(char* sParam0)
{
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
}

void func_130(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0x16CDA1894CFE0781(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB4B5BF5882A555F9())
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
		if (!Global_35615[iVar0 /*19*/])
		{
			Global_35615[iVar0 /*19*/] = 1;
			Global_35615[iVar0 /*19*/].f_1 = Global_35738;
			Global_35738++;
			Global_35615[iVar0 /*19*/].f_4 = 0;
			Global_35615[iVar0 /*19*/].f_17 = 0;
			Global_35615[iVar0 /*19*/].f_5 = 0;
			Global_35615[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_35615[iVar0 /*19*/].f_8), sParam2, 16);
			Global_35615[iVar0 /*19*/].f_6 = iParam3;
			Global_35615[iVar0 /*19*/].f_18 = unk_0x60C807BBCBE66CC7();
			Global_35615[iVar0 /*19*/].f_7 = 0;
			Global_35615[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0x06771AF7795B3ECF(sParam4))
			{
				Global_35615[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_35615[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_35615[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_35615[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_131(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return unk_0x889D01384B54BCE3(Global_97439.f_28355[iParam0], iVar0);
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1[128];
	
	if (func_135(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_97439.f_16828[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_22() && !unk_0x1DAD7CE53BEE7710())
	{
		if (func_134(33, 0) && !func_133(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_97439.f_28270.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_97439.f_28270.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_97439.f_28270.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_97439.f_28270.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_97439.f_28270.f_7)
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

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_97439.f_5944.f_764)
	{
		if (Global_97439.f_5944.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_134(int iParam0, int iParam1)
{
	if (unk_0x889D01384B54BCE3(Global_97439.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_135(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_668.f_683, 2))
		{
			return 1;
		}
	}
	if (unk_0x620D8FF311E738AE())
	{
		if (!bParam1 || unk_0x54CE0989F263D8A3())
		{
			if (!unk_0x75C4BB2E54262038() && !unk_0x660675ADB09E441F())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0xC6F9DC8B9E6D41AE())
		{
			return 0;
		}
	}
	if (unk_0x620D8FF311E738AE())
	{
		return 1;
	}
	return 0;
}

int func_136()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_135(1, 1))
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			iVar0++;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_97439.f_16828[45 /*6*/], 3))
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			iVar0++;
		}
	}
	if (func_22() && !unk_0x1DAD7CE53BEE7710())
	{
		if (func_134(33, 0) && !func_133(1751306471))
		{
			iVar0++;
		}
		if (Global_97439.f_28270.f_3)
		{
			iVar0++;
		}
		if (Global_97439.f_28270.f_4)
		{
			iVar0++;
		}
		if (Global_97439.f_28270.f_5)
		{
			iVar0++;
		}
		if (Global_97439.f_28270.f_6)
		{
			iVar0++;
		}
		if (Global_97439.f_28270.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_137(float fParam0)
{
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()) && !unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (fParam0 <= 0f)
		{
			return unk_0xF5BB8F2901EE017C(unk_0xA16EC202D9D35357()) > 0;
		}
		else
		{
			return unk_0x81EF00133F312C5D(unk_0xA16EC202D9D35357(), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), fParam0) > 0;
		}
	}
	return 0;
}

bool func_138(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

void func_139()
{
	var uVar0[10];
	bool bVar11;
	int iVar12;
	float fVar13;
	char* sVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	bool bVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	struct<3> Var29;
	bool bVar50;
	float fVar51;
	int iVar52;
	struct<3> Var53;
	struct<3> Var56;
	int iVar59;
	struct<3> Var60;
	bool bVar81;
	float fVar82;
	int iVar83;
	bool bVar84;
	struct<4> Var85;
	bool bVar89;
	int iVar90;
	struct<4> Var91;
	struct<36> Var112;
	int iVar166;
	int iVar167;
	int iVar168;
	bool bVar169;
	float fVar170;
	int iVar171;
	struct<36> Var172;
	int iVar226;
	bool bVar227;
	int iVar228;
	int iVar229;
	int iVar230;
	int iVar231;
	bool bVar232;
	bool bVar233;
	
	bVar11 = false;
	if (((((((((((((((Local_401.f_29.f_80 && Local_401.f_29.f_69) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357())) && Local_401.f_2 == 0) && Local_401.f_0 != -1) && func_46(Local_401.f_0, 0)) && func_46(Local_401.f_0, 5)) && !func_10(0)) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(5)) && !func_10(14)) && !Global_67066) && !func_138(1)) || ((Local_401.f_3 > 1 && !func_138(0)) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357())))
	{
		func_195(Local_401.f_0, &Local_520);
		fVar13 = 0f;
		sVar14 = "ANIM@APT_TRANS@GARAGE";
		Var15 = { 198.3659f, -1020.273f, -100f };
		Var18 = { Var15 };
		Var21 = { 198.9538f, -1026.13f, -100f };
		switch (Local_401.f_3)
		{
			case 0:
				if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && !unk_0xB4B5BF5882A555F9())
				{
					Local_401.f_3 = 10;
					return;
				}
				if (((((unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0) && (func_194(unk_0xD1613577C809E98B(unk_0xA16EC202D9D35357()), Local_401.f_29.f_68, 90f) || unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))) && unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) && !unk_0xFE57C063743B552A(unk_0xA16EC202D9D35357())) && !unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) && !unk_0x662678D772BA810F(unk_0xA16EC202D9D35357(), 2))
				{
					if (func_193())
					{
						bVar24 = true;
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
						{
							iVar12 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 1);
							if (unk_0x538DF9E5B1DF01EB(iVar12))
							{
								if (unk_0xECFECDAD51A6184F(iVar12, 0))
								{
									iVar25 = unk_0xA609E58449080951(iVar12);
									if ((((((((!func_43(iVar25) || func_42(iVar12)) || func_41(iVar12)) || unk_0x541898DB7669BD41(iVar12)) || ((!unk_0xD548A98EDA33C15A(iVar25) && !unk_0x2FDD93A1F5E63663(iVar25)) && !unk_0x74FBEA30BE72F22B(iVar25))) || iVar25 == joaat("monster")) || unk_0x042EE007A41C88D4(iVar12)) || unk_0x16AAB2FABA8773E7(iVar12)) || (unk_0xF710D4C60EF5425F(unk_0xA16EC202D9D35357()) && unk_0x16CDA1894CFE0781(joaat("taxi_procedural")) > 0))
									{
										bVar24 = false;
									}
								}
								else
								{
									bVar24 = false;
								}
							}
						}
						else if (unk_0xF1F4F8BE6C335BF8(sVar14))
						{
							unk_0x3D28909AF30D70F4(sVar14);
							if (!unk_0x6C47E32491756A1A(sVar14))
							{
								bVar24 = false;
							}
						}
						if (bVar24)
						{
							func_130(&iLocal_630, 3, "WEB_VEH_ENTER", 0, 0, 0);
							iLocal_984 = 0;
							Local_401.f_3 = 1;
						}
						else if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
						{
							if (!unk_0x11A809BBE3889742() || func_129("WEB_VEH_INV"))
							{
								func_128("WEB_VEH_INV", -1);
								StringCopy(&cLocal_973, "WEB_VEH_INV", 16);
								bVar11 = true;
							}
						}
					}
					else if (!unk_0x11A809BBE3889742() || func_129("WEB_VEH_FULL"))
					{
						func_128("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_973, "WEB_VEH_FULL", 16);
						bVar11 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_982)
				{
					if (!unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
					{
						iLocal_982 = 0;
						unk_0x3D28909AF30D70F4(sVar14);
						if (unk_0x6C47E32491756A1A(sVar14))
						{
							iLocal_982 = 1;
						}
					}
					else
					{
						unk_0xB845ECB6BD2996BD(sVar14);
						iLocal_982 = 1;
					}
				}
				iVar26 = 1;
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
				{
					iVar12 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 1);
					if (unk_0x538DF9E5B1DF01EB(iVar12))
					{
						if (unk_0xECFECDAD51A6184F(iVar12, 0))
						{
							iVar27 = unk_0xA609E58449080951(iVar12);
							if ((((((((!func_43(iVar27) || func_42(iVar12)) || func_41(iVar12)) || unk_0x541898DB7669BD41(iVar12)) || ((!unk_0xD548A98EDA33C15A(iVar27) && !unk_0x2FDD93A1F5E63663(iVar27)) && !unk_0x74FBEA30BE72F22B(iVar27))) || iVar27 == joaat("monster")) || unk_0x042EE007A41C88D4(iVar12)) || unk_0x16AAB2FABA8773E7(iVar12)) || (unk_0xF710D4C60EF5425F(unk_0xA16EC202D9D35357()) && unk_0x16CDA1894CFE0781(joaat("taxi_procedural")) > 0))
							{
								iVar26 = 0;
							}
						}
						else
						{
							iVar26 = 0;
						}
					}
				}
				if (((((((unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0) && (func_194(unk_0xD1613577C809E98B(unk_0xA16EC202D9D35357()), Local_401.f_29.f_68, 90f) || unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))) && unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) && func_193()) && !unk_0xFE57C063743B552A(unk_0xA16EC202D9D35357())) && !unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) && !unk_0x662678D772BA810F(unk_0xA16EC202D9D35357(), 2)) && iVar26)
				{
					if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()) || (unk_0x6C47E32491756A1A(sVar14) || !unk_0xF1F4F8BE6C335BF8(sVar14)))
					{
						if (func_125(iLocal_630, 1))
						{
							func_48(&iLocal_630);
							iLocal_982 = 0;
							Local_401.f_3 = 2;
						}
						func_191(47, 0);
						func_186(47, 0);
						Local_401.f_112 = unk_0x7B6124E1230469E9(Var15, "v_garagem_sp");
						if (unk_0xF7037F2CC07D58B0(Local_401.f_112))
						{
							if (!unk_0x02E23868217F22CC(Local_401.f_112))
							{
								if ((unk_0xA152BE858C442B26() % 10) == 0)
								{
									unk_0xA17109B5C97ADD34(Local_401.f_112);
								}
							}
							StringCopy(&Global_31720, "v_garagem_sp", 32);
						}
						if (!iLocal_981 && !unk_0xA84F80DD9F675CED())
						{
							if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
							{
								iVar28 = func_184(Local_401.f_0);
								func_40(&Var29, iVar28);
								Var18 = { Var29 };
								unk_0xD3723C36F0F699D6(Var18, 20f, 0);
							}
							else
							{
								unk_0xD3723C36F0F699D6(Var21 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_981 = 1;
						}
					}
				}
				else
				{
					if (iLocal_981 && unk_0xA84F80DD9F675CED())
					{
						unk_0x099E9F2D6F93D420();
						iLocal_981 = 0;
					}
					iLocal_982 = 0;
					func_48(&iLocal_630);
					unk_0xB845ECB6BD2996BD(sVar14);
					Local_401.f_3 = 0;
				}
				break;
			
			case 2:
				func_191(47, 0);
				func_186(47, 0);
				unk_0x847CD74208BB719C(8);
				Global_67218.f_577 = 1;
				Global_67218.f_578 = { Local_401.f_29.f_55 };
				iLocal_962 = unk_0xD25129559B94E910(unk_0x1788E93557766241());
				unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
				unk_0xAE5253EA258993E7(unk_0xA16EC202D9D35357(), 0, 0);
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
				unk_0x6853F2DD1CFD3CA2(0);
				unk_0xA0ED52A12ED3E5E5(0);
				unk_0x53F4483D5741E8F9(unk_0x1788E93557766241());
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					iVar12 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0x538DF9E5B1DF01EB(iVar12) && unk_0xECFECDAD51A6184F(iVar12, 0))
					{
						if (func_194(unk_0xD1613577C809E98B(iVar12), Local_401.f_29.f_68, 90f))
						{
							iLocal_984 = 0;
						}
						else
						{
							iLocal_984 = 1;
						}
						unk_0x67565210B706E956(iVar12, 1, 1, 1, 1, 1, 1, 0, 0);
						unk_0x035F3FE2F394644A(Local_520.f_86[0 /*6*/], 20f, 0);
						unk_0x6ACCA46B5F60314D(Local_520.f_86[0 /*6*/], 20f, 0);
						unk_0xF831E40D76C85CCF(Local_520.f_86[0 /*6*/], 7f);
						unk_0x6C43BF7625967266(iVar12, Local_520.f_86[0 /*6*/], 1, 0, 0, 1);
						if (iLocal_984 && !unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
						{
							unk_0x34639238667C4381(iVar12, (Local_520.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							unk_0x34639238667C4381(iVar12, Local_520.f_86[0 /*6*/].f_3.f_2);
						}
						if (unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
						{
							unk_0x575C51FE953F1EA4(unk_0xA16EC202D9D35357(), 0, 0, -1);
							unk_0x49D26ECEB56A3095(unk_0xA16EC202D9D35357(), 1);
						}
						unk_0xAC894C93914464C2(iVar12);
					}
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
					func_179(1, 1, 1, 0);
					func_178(&(Local_520[1 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
					Local_401.f_3 = 3;
				}
				else
				{
					if (unk_0x538DF9E5B1DF01EB(iLocal_977) && !unk_0xE44A580B551C3645(iLocal_977))
					{
						if (unk_0x22349EC06EA5B08B(iLocal_977) && unk_0xD8233CB95CB48A7C(iLocal_977, 1))
						{
							unk_0x3A3C5A6572B3C611(&iLocal_977);
						}
					}
					iLocal_977 = unk_0xB49BA83A5C224F40();
					if ((((unk_0x538DF9E5B1DF01EB(iLocal_977) && unk_0xECFECDAD51A6184F(iLocal_977, 0)) && !unk_0x38B61EB14C5FBA9E(unk_0xA609E58449080951(iLocal_977))) && !unk_0xEE41D6C2DA208994(unk_0xA609E58449080951(iLocal_977))) && !unk_0xD18BE100522E5F15(unk_0xA609E58449080951(iLocal_977)))
					{
						if (!unk_0x22349EC06EA5B08B(iLocal_977))
						{
							unk_0x7B9576B4E099FB1F(iLocal_977, 0, 0);
						}
						if (unk_0x538DF9E5B1DF01EB(iLocal_977) && unk_0xECFECDAD51A6184F(iLocal_977, 0))
						{
							if (!bVar50)
							{
								if (unk_0x0852C405AF94F670(iLocal_977, Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0))
								{
									bVar50 = true;
								}
							}
							if (!bVar50)
							{
								fVar51 = unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(iLocal_977, 1), Local_520[0 /*15*/]);
								if (fVar51 < (5f * 5f))
								{
									bVar50 = true;
								}
							}
							if (bVar50)
							{
								iVar52 = func_28(24);
								if (func_177(&Local_750, 24))
								{
									func_172(&Local_750, func_313());
									if (unk_0x538DF9E5B1DF01EB(iVar52))
									{
										unk_0x2F2948A2506AA404(&iVar52);
									}
								}
								if (Local_401.f_0 == 21)
								{
									unk_0x84710FE7666EBF7B(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
									func_170(iLocal_977, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_401.f_0 == 22)
								{
									unk_0x84710FE7666EBF7B(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
									func_170(iLocal_977, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_401.f_0 == 23)
								{
									unk_0x84710FE7666EBF7B(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
									func_170(iLocal_977, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								unk_0xAC894C93914464C2(iLocal_977);
							}
						}
					}
					else
					{
						iLocal_977 = 0;
					}
					Var53 = { Local_401.f_29 * Vector(2f, 2f, 2f) + Local_401.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					Var56 = { Local_401.f_29 * Vector(1f, 1f, 1f) + Local_401.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_401.f_29, Var53.f_0, Var53.f_1, Local_401.f_29.f_3.f_2, Local_401.f_29.f_6, 0, 1, 0))
					{
						sLocal_985 = "";
						switch (unk_0x444ECD635D5FD45F(0, 2))
						{
							case 0:
								sLocal_985 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_985 = "gar_open_2_left";
								break;
						}
					}
					else if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Var53.f_0, Var53.f_1, Local_401.f_29.f_2, Var56.f_0, Var56.f_1, Local_401.f_29.f_3.f_2, Local_401.f_29.f_6, 0, 1, 0))
					{
						sLocal_985 = "";
						switch (unk_0x444ECD635D5FD45F(0, 2))
						{
							case 0:
								sLocal_985 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_985 = "gar_open_1_right";
								break;
						}
					}
					else if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Var56.f_0, Var56.f_1, Local_401.f_29.f_2, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0))
					{
						sLocal_985 = "";
						switch (unk_0x444ECD635D5FD45F(0, 2))
						{
							case 0:
								sLocal_985 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_985 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_985 = "";
						switch (unk_0x444ECD635D5FD45F(0, 6))
						{
							case 0:
								sLocal_985 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_985 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_985 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_985 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_985 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_985 = "gar_open_3_right";
								break;
							}
					}
					unk_0x035F3FE2F394644A(Local_520.f_73[0 /*4*/], 20f, 0);
					unk_0x6ACCA46B5F60314D(Local_520.f_86[0 /*6*/], 20f, 0);
					unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), Local_520.f_73[0 /*4*/], 1, 0, 0, 1);
					unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), Local_520.f_73[0 /*4*/].f_3);
					iLocal_635 = unk_0x7D9AB6E493591276(Local_520.f_73[0 /*4*/], 0f, 0f, Local_520.f_73[0 /*4*/].f_3, 2);
					unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), iLocal_635, sVar14, sLocal_985, 8f, -8f, 0, 0, 1148846080, 0);
					func_179(1, 1, 1, 0);
					func_178(&(Local_520[0 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
					Local_401.f_3 = 4;
				}
				Local_401.f_112 = unk_0x7B6124E1230469E9(Var15, "v_garagem_sp");
				if (unk_0xF7037F2CC07D58B0(Local_401.f_112))
				{
					if (!unk_0x02E23868217F22CC(Local_401.f_112))
					{
						unk_0xA17109B5C97ADD34(Local_401.f_112);
					}
					StringCopy(&Global_31720, "v_garagem_sp", 32);
				}
				if (!iLocal_981)
				{
					if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
					{
						iVar59 = func_184(Local_401.f_0);
						func_40(&Var60, iVar59);
						Var18 = { Var60 };
						unk_0xD3723C36F0F699D6(Var18, 20f, 0);
					}
					else
					{
						unk_0xD3723C36F0F699D6(Var21, 20f, 0);
					}
				}
				unk_0xD0E2BFCE93AE3ABD(&(Local_648.f_9), 25);
				func_166(198.0043f, -999.7775f, -100f, 50f, 0);
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
				iLocal_983 = 0;
				break;
			
			case 4:
				bVar81 = true;
				if (!unk_0xA84F80DD9F675CED())
				{
				}
				else if (unk_0xDC7784B8DE7B58D5())
				{
				}
				else
				{
					bVar81 = false;
				}
				if (unk_0xF7037F2CC07D58B0(Local_401.f_112))
				{
					if (!unk_0x02E23868217F22CC(Local_401.f_112))
					{
						unk_0xA17109B5C97ADD34(Local_401.f_112);
					}
					StringCopy(&Global_31720, "v_garagem_sp", 32);
				}
				else
				{
					Local_401.f_112 = unk_0x7B6124E1230469E9(Var15, "v_garagem_sp");
				}
				if (func_165())
				{
				}
				else
				{
					bVar81 = false;
				}
				if (unk_0xBAB691F99A2A7346(Local_401.f_110) && unk_0x7AFB776BA9F391FA(Local_401.f_110))
				{
					if (unk_0x544E3534E1E68C44(Local_401.f_110))
					{
						bVar81 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[0 /*15*/].f_14 * 1000f))
					{
						bVar81 = false;
					}
				}
				else if (unk_0xBAB691F99A2A7346(Local_401.f_111) && unk_0x7AFB776BA9F391FA(Local_401.f_111))
				{
					if (unk_0x544E3534E1E68C44(Local_401.f_111))
					{
						bVar81 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[0 /*15*/].f_14 * 1000f))
					{
						bVar81 = false;
					}
				}
				else
				{
					bVar81 = false;
				}
				if (unk_0xCFC5CE3AD496DA0B(iLocal_635))
				{
					fVar82 = unk_0x0DF89B3B1CF0FDC1(iLocal_635);
					if (fVar82 < 0.4f)
					{
						bVar81 = false;
					}
				}
				if (bVar81)
				{
					unk_0x271524E4281048DC(800);
					Local_401.f_3 = 5;
				}
				break;
			
			case 5:
				if (unk_0xF4C685E933068D23())
				{
					iVar83 = unk_0x74F076F396F8C361();
					unk_0xC2E1777941B4536E(iVar83, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0x4AE2DA60B696489F(iVar83, "hold", (2250f / 1000f));
					func_179(0, 1, 1, 0);
					unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
					if (unk_0xBAB691F99A2A7346(Local_401.f_110))
					{
						unk_0xC8CEF95C63B283EC(Local_401.f_110, 0);
						unk_0x27A62B1C26941E13(Local_401.f_110, 0);
					}
					if (unk_0xBAB691F99A2A7346(Local_401.f_111))
					{
						unk_0xC8CEF95C63B283EC(Local_401.f_111, 0);
						unk_0x27A62B1C26941E13(Local_401.f_111, 0);
					}
					if (unk_0x538DF9E5B1DF01EB(iLocal_987))
					{
						unk_0x6A23C3306A8CF21B(iLocal_987, 1, 0);
						unk_0x3CC3106305C40A28(iLocal_987, 0);
						iLocal_987 = 0;
					}
					unk_0xB81B20C00BEE80D3(unk_0x1788E93557766241());
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
					unk_0x847CD74208BB719C(8);
					if (unk_0xCFC5CE3AD496DA0B(iLocal_635))
					{
						unk_0xE642CEBE4E7C3BF2(iLocal_635);
					}
					iLocal_635 = -1;
					unk_0x9AB8F163FA160890(unk_0xA16EC202D9D35357());
					unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), 194.5394f, -1026.32f, -100f, 1, 0, 0, 1);
					unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), 334.1665f);
					unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), 1);
					unk_0x20D6E0EA145DF751(0f);
					unk_0x60365B850FB7354F(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_401.f_3 = 6;
				}
				break;
			
			case 6:
				func_164(Local_401.f_0);
				if (unk_0xF4C685E933068D23() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					unk_0xB845ECB6BD2996BD(sVar14);
					func_163();
					if (unk_0xA84F80DD9F675CED())
					{
						unk_0x099E9F2D6F93D420();
					}
					unk_0x5FE2A83120E8127F(800);
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
					unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), 0);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_963 = 0;
					iLocal_981 = 0;
					Local_401.f_3 = 10;
				}
				break;
			
			case 3:
				func_164(Local_401.f_0);
				bVar84 = true;
				if (!unk_0xA84F80DD9F675CED())
				{
				}
				else if (unk_0xDC7784B8DE7B58D5())
				{
				}
				else
				{
					bVar84 = false;
				}
				if (unk_0xF7037F2CC07D58B0(Local_401.f_112))
				{
					if (!unk_0x02E23868217F22CC(Local_401.f_112))
					{
						unk_0xA17109B5C97ADD34(Local_401.f_112);
					}
					StringCopy(&Global_31720, "v_garagem_sp", 32);
				}
				else
				{
					Local_401.f_112 = unk_0x7B6124E1230469E9(Var15, "v_garagem_sp");
				}
				if (func_165())
				{
				}
				else
				{
					bVar84 = false;
				}
				if (unk_0xBAB691F99A2A7346(Local_401.f_110) && unk_0x7AFB776BA9F391FA(Local_401.f_110))
				{
					if (unk_0x544E3534E1E68C44(Local_401.f_110))
					{
						bVar84 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[1 /*15*/].f_14 * 1000f))
					{
						bVar84 = false;
					}
				}
				else if (unk_0xBAB691F99A2A7346(Local_401.f_111) && unk_0x7AFB776BA9F391FA(Local_401.f_111))
				{
					if (unk_0x544E3534E1E68C44(Local_401.f_111))
					{
						bVar84 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[1 /*15*/].f_14 * 1000f))
					{
						bVar84 = false;
					}
				}
				else
				{
					bVar84 = false;
				}
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					Var85 = { 0f, 0f, 0f };
					Var85.f_3 = 0f;
					func_155(unk_0xA16EC202D9D35357(), Local_520.f_86[0 /*6*/], Local_520.f_66[0 /*3*/], ((Local_520[1 /*15*/].f_14 * 1000f) - 500f), Var85, 2, &fVar13);
				}
				if (bVar84)
				{
					func_163();
					unk_0xC1B1E9A034A63A62(0);
					unk_0x271524E4281048DC(800);
					Local_401.f_3 = 35;
				}
				break;
			
			case 35:
				bVar89 = true;
				func_164(Local_401.f_0);
				if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520.f_61[1] * 1000f))
				{
					bVar89 = false;
				}
				if (bVar89)
				{
					func_163();
					func_179(0, 1, 1, 0);
					unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
					if (unk_0xBAB691F99A2A7346(Local_401.f_110))
					{
						unk_0xC8CEF95C63B283EC(Local_401.f_110, 0);
						unk_0x27A62B1C26941E13(Local_401.f_110, 0);
					}
					if (unk_0xBAB691F99A2A7346(Local_401.f_111))
					{
						unk_0xC8CEF95C63B283EC(Local_401.f_111, 0);
						unk_0x27A62B1C26941E13(Local_401.f_111, 0);
					}
					if (unk_0x538DF9E5B1DF01EB(iLocal_987))
					{
						unk_0x6A23C3306A8CF21B(iLocal_987, 1, 0);
						unk_0x3CC3106305C40A28(iLocal_987, 0);
						iLocal_987 = 0;
					}
					unk_0xB81B20C00BEE80D3(unk_0x1788E93557766241());
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
					unk_0x847CD74208BB719C(8);
					if (unk_0xA84F80DD9F675CED())
					{
						unk_0x099E9F2D6F93D420();
					}
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						iVar12 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
						if (unk_0x538DF9E5B1DF01EB(iVar12) && unk_0xECFECDAD51A6184F(iVar12, 0))
						{
							iVar90 = func_184(Local_401.f_0);
							func_40(&Var91, iVar90);
							unk_0x6C43BF7625967266(iVar12, Var91, 1, 0, 0, 1);
							unk_0x34639238667C4381(iVar12, Var91.f_3);
							unk_0xA5CC79C83111E834(iVar12, 1);
							unk_0x6EBB9B0E214CCF0F(iVar12, 0, 1);
							unk_0x1143B1E42EAAE947(iVar12, 4);
							unk_0x1B0A7B8E5F82E255(iVar12, 1, 0);
							unk_0x1B0A7B8E5F82E255(iVar12, 0, 0);
							unk_0xBAE0E085DFB45D18(iVar12, 0);
							unk_0x67565210B706E956(iVar12, 0, 0, 0, 0, 0, 0, 0, 0);
							unk_0x3CB6843C8C4A8A21(unk_0xA16EC202D9D35357(), iVar12, 0);
							unk_0x3CC3106305C40A28(iVar12, 0);
							Var112.f_9 = 25;
							Var112.f_35 = 2;
							func_15(iVar12, &Var112);
							func_90(iVar90, &Var112, 0f, 0f, 0f, -1f, 145);
							func_13(iVar90, iVar12, 1);
							func_154(iVar12);
						}
						unk_0x20D6E0EA145DF751(0f);
						unk_0x60365B850FB7354F(0f, 1065353216);
					}
					iVar166 = unk_0x8645B73431E623E0(unk_0xA16EC202D9D35357(), &uVar0, -1);
					iVar167 = 0;
					while (iVar167 < iVar166)
					{
						if ((unk_0x538DF9E5B1DF01EB(uVar0[iVar167]) && !unk_0x2DE0B96E966FD817(uVar0[iVar167])) && unk_0xDF17BE550B9FEC7A(uVar0[iVar167], unk_0xF8BF19C18CE5C2B2(unk_0x1788E93557766241())))
						{
							unk_0xFE2DEA78E1B4FDB9(uVar0[iVar167], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar167++;
					}
					unk_0xC1B1E9A034A63A62(0);
					iLocal_963 = 0;
					iLocal_981 = 0;
					unk_0x5FE2A83120E8127F(800);
					Local_401.f_3 = 10;
				}
				break;
			
			case 10:
				if (unk_0x83666F9FB8FEBD4B() < 7000 || !Global_97439.f_18371.f_4248)
				{
					if (!Global_97439.f_18371.f_4248)
					{
						if (iLocal_963 == 0)
						{
							func_128("CAR_GAR_05", -1);
							StringCopy(&cLocal_973, "CAR_GAR_05", 16);
							bVar11 = true;
							if (unk_0x83666F9FB8FEBD4B() >= 7000)
							{
								unk_0xC1B1E9A034A63A62(0);
								iLocal_963++;
							}
						}
						else if (iLocal_963 == 1)
						{
							func_128("CAR_GAR_06", -1);
							StringCopy(&cLocal_973, "CAR_GAR_06", 16);
							bVar11 = true;
							if (unk_0x83666F9FB8FEBD4B() >= 7000)
							{
								unk_0xC1B1E9A034A63A62(0);
								Global_97439.f_18371.f_4248 = 1;
							}
						}
					}
					else
					{
						func_128("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_973, "CAR_GAR_EXIT", 16);
						bVar11 = true;
					}
				}
				else
				{
					Global_97439.f_18371.f_4248 = 1;
				}
				iVar168 = 0;
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					if (iLocal_630 != -1)
					{
						func_48(&iLocal_630);
					}
					iVar12 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0x538DF9E5B1DF01EB(iVar12) && unk_0xECFECDAD51A6184F(iVar12, 0))
					{
						if (unk_0xEFAC96B0B2B7E69B(iVar12) || unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
						{
							if (!(unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357())))
							{
								if ((((unk_0x1B4C2FFB891F18F5(0, 71) != 0f || unk_0x1453F50088A91E4E(0, 71)) || unk_0xF49761626882E968(0, 71)) || unk_0x63D2949B11643BBA(0, 71)) || unk_0x4E151C54AB29940C(0, 71))
								{
									iVar168 = 1;
								}
								if ((((unk_0x1B4C2FFB891F18F5(0, 72) != 0f || unk_0x1453F50088A91E4E(0, 72)) || unk_0xF49761626882E968(0, 72)) || unk_0x63D2949B11643BBA(0, 72)) || unk_0x4E151C54AB29940C(0, 72))
								{
									iVar168 = 1;
								}
							}
						}
					}
				}
				else
				{
					unk_0x3D28909AF30D70F4(sVar14);
					if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, 1, 0) && func_194(unk_0xD1613577C809E98B(unk_0xA16EC202D9D35357()), 180f, 90f))
					{
						if (iLocal_629 != -1)
						{
							func_48(&iLocal_629);
						}
						if (iLocal_630 == -1)
						{
							func_130(&iLocal_630, 3, "WEB_VEH_EXIT", 0, 0, 0);
						}
						if (!iLocal_629 != -1 && !iLocal_630 == -1)
						{
							if (func_125(iLocal_630, 1))
							{
								func_48(&iLocal_630);
								iVar168 = 1;
							}
						}
					}
					else if (iLocal_630 != -1)
					{
						func_48(&iLocal_630);
					}
				}
				if (iLocal_966)
				{
					iVar168 = 1;
				}
				if (iVar168 && !func_153())
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) || iLocal_966)
					{
						unk_0xC1B1E9A034A63A62(0);
						unk_0xD3723C36F0F699D6(Local_520.f_73[2 /*4*/], 20f, 0);
						if (iLocal_630 != -1)
						{
							func_48(&iLocal_630);
						}
						Local_401.f_3 = 12;
					}
					else if (unk_0x6C47E32491756A1A(sVar14))
					{
						sLocal_985 = "";
						switch (unk_0x444ECD635D5FD45F(0, 6))
						{
							case 0:
								sLocal_985 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_985 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_985 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_985 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_985 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_985 = "gar_open_3_right";
								break;
						}
						iLocal_635 = unk_0x7D9AB6E493591276(Local_520.f_73[1 /*4*/], 0f, 0f, Local_520.f_73[1 /*4*/].f_3, 2);
						unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), iLocal_635, sVar14, sLocal_985, 8f, -8f, 0, 0, 1148846080, 0);
						func_179(1, 1, 1, 0);
						func_178(&(Local_520[2 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
						unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
						unk_0xD3723C36F0F699D6(Local_520.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_630 != -1)
						{
							func_48(&iLocal_630);
						}
						Local_401.f_3 = 11;
					}
					else if (!unk_0xF1F4F8BE6C335BF8(sVar14))
					{
						unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), Local_520.f_73[1 /*4*/], 1, 0, 0, 1);
						unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), Local_520.f_73[1 /*4*/].f_3);
						func_179(1, 1, 1, 0);
						func_178(&(Local_520[2 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
						unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
						unk_0xD3723C36F0F699D6(Local_520.f_73[2 /*4*/], 20f, 0);
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
				bVar169 = true;
				if (!unk_0xA84F80DD9F675CED())
				{
				}
				else if (unk_0xDC7784B8DE7B58D5())
				{
				}
				else
				{
					bVar169 = false;
				}
				if (func_165())
				{
				}
				else
				{
					bVar169 = false;
				}
				if (unk_0xBAB691F99A2A7346(Local_401.f_110) && unk_0x7AFB776BA9F391FA(Local_401.f_110))
				{
					if (unk_0x544E3534E1E68C44(Local_401.f_110))
					{
						bVar169 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[2 /*15*/].f_14 * 1000f))
					{
						bVar169 = false;
					}
				}
				else if (unk_0xBAB691F99A2A7346(Local_401.f_111) && unk_0x7AFB776BA9F391FA(Local_401.f_111))
				{
					if (unk_0x544E3534E1E68C44(Local_401.f_111))
					{
						bVar169 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[2 /*15*/].f_14 * 1000f))
					{
						bVar169 = false;
					}
				}
				else
				{
					bVar169 = false;
				}
				if (unk_0xCFC5CE3AD496DA0B(iLocal_635))
				{
					fVar170 = unk_0x0DF89B3B1CF0FDC1(iLocal_635);
					if (fVar170 < 0.4f)
					{
						bVar169 = false;
					}
				}
				if (bVar169)
				{
					iLocal_963 = 0;
					iLocal_981 = 0;
					unk_0x271524E4281048DC(800);
					unk_0xC1B1E9A034A63A62(0);
					Local_401.f_3 = 13;
				}
				break;
			
			case 12:
				unk_0x4B404C739A9AFC7A(0, 75, 1);
				if (unk_0x83666F9FB8FEBD4B() > 500)
				{
					iVar171 = func_152();
					if ((iVar171 == 21 || iVar171 == 22) || iVar171 == 23)
					{
						Var172.f_9 = 25;
						Var172.f_35 = 2;
						func_90(iVar171, &Var172, 0f, 0f, 0f, -1f, 145);
						func_92(iVar171);
					}
					else if (iVar171 != -1)
					{
						if (!iLocal_966)
						{
							func_319(iVar171, 0);
							func_92(iVar171);
						}
					}
					unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
					unk_0xAE5253EA258993E7(unk_0xA16EC202D9D35357(), 0, 0);
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
					unk_0xB845ECB6BD2996BD(sVar14);
					unk_0x271524E4281048DC(800);
					Local_401.f_3 = 13;
				}
				break;
			
			case 13:
				if (unk_0xF4C685E933068D23())
				{
					iVar226 = unk_0x74F076F396F8C361();
					unk_0xC2E1777941B4536E(iVar226, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0x4AE2DA60B696489F(iVar226, "hold", (2250f / 1000f));
					unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
					if (unk_0xBAB691F99A2A7346(Local_401.f_110))
					{
						unk_0xC8CEF95C63B283EC(Local_401.f_110, 0);
						unk_0x27A62B1C26941E13(Local_401.f_110, 0);
					}
					if (unk_0xBAB691F99A2A7346(Local_401.f_111))
					{
						unk_0xC8CEF95C63B283EC(Local_401.f_111, 0);
						unk_0x27A62B1C26941E13(Local_401.f_111, 0);
					}
					if (unk_0x538DF9E5B1DF01EB(iLocal_987))
					{
						unk_0x6A23C3306A8CF21B(iLocal_987, 1, 0);
						unk_0x3CC3106305C40A28(iLocal_987, 0);
						iLocal_987 = 0;
					}
					unk_0xB81B20C00BEE80D3(unk_0x1788E93557766241());
					unk_0x847CD74208BB719C(8);
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if (!iLocal_966)
						{
							iVar12 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
							if (unk_0x538DF9E5B1DF01EB(iVar12) && unk_0xECFECDAD51A6184F(iVar12, 0))
							{
								unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
								unk_0x6C43BF7625967266(iVar12, Local_401.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
								unk_0x34639238667C4381(iVar12, Local_401.f_29.f_77[1]);
								unk_0xAC894C93914464C2(iVar12);
							}
						}
					}
					else
					{
						if (unk_0xCFC5CE3AD496DA0B(iLocal_635))
						{
							unk_0xE642CEBE4E7C3BF2(iLocal_635);
						}
						iLocal_635 = -1;
						unk_0x9AB8F163FA160890(unk_0xA16EC202D9D35357());
						unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), Local_401.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
						unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), Local_401.f_29.f_77[1]);
					}
					unk_0x20D6E0EA145DF751(0f);
					unk_0x60365B850FB7354F(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_401.f_3 = 14;
				}
				break;
			
			case 14:
				if (unk_0xF4C685E933068D23() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					bVar227 = true;
					if (iLocal_966)
					{
						unk_0x939DA7EBCC6588FF(iLocal_967);
						if (unk_0x5494F37F35C1D7D7(iLocal_967))
						{
							iVar228 = unk_0x9BB6F54E415071A1(iLocal_967, Local_401.f_29.f_70[0 /*3*/], Local_401.f_29.f_77[0], 1, 1);
							if (iLocal_967 == joaat("windsor"))
							{
								unk_0x4DD872D780AF5EF7(iVar228, 0);
							}
							if (unk_0x538DF9E5B1DF01EB(iVar228) && unk_0xECFECDAD51A6184F(iVar228, 0))
							{
								unk_0x3195B1192FB0EA3D(unk_0xA16EC202D9D35357(), iVar228, -1);
								unk_0xD826AAC32D2F161D(iVar228, 0f);
								unk_0xEA054561294AEC10(iLocal_967);
								if (func_93(iLocal_967))
								{
									switch (iLocal_967)
									{
										case joaat("marshall"):
											unk_0x4DD872D780AF5EF7(iVar228, iLocal_625);
											break;
										}
								}
								unk_0x3A3C5A6572B3C611(&iVar228);
							}
							iLocal_966 = 0;
						}
						else
						{
							bVar227 = false;
						}
					}
					if (!unk_0xA84F80DD9F675CED())
					{
					}
					else if (unk_0xDC7784B8DE7B58D5())
					{
					}
					else
					{
						bVar227 = false;
					}
					if (bVar227)
					{
						if (unk_0x538DF9E5B1DF01EB(iLocal_977) && unk_0xECFECDAD51A6184F(iLocal_977, 0))
						{
							iVar229 = func_28(24);
							if (func_177(&Local_750, 24))
							{
								func_172(&Local_750, func_313());
								if (unk_0x538DF9E5B1DF01EB(iVar229))
								{
									unk_0x2F2948A2506AA404(&iVar229);
								}
							}
							if (Local_401.f_0 == 21)
							{
								unk_0x84710FE7666EBF7B(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
								unk_0x6C43BF7625967266(iLocal_977, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
								unk_0x34639238667C4381(iLocal_977, 154.4846f);
								func_170(iLocal_977, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_401.f_0 == 22)
							{
								unk_0x84710FE7666EBF7B(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
								unk_0x6C43BF7625967266(iLocal_977, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
								unk_0x34639238667C4381(iLocal_977, 319.6985f);
								func_170(iLocal_977, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_401.f_0 == 23)
							{
								unk_0x84710FE7666EBF7B(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
								unk_0x6C43BF7625967266(iLocal_977, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
								unk_0x34639238667C4381(iLocal_977, 270.8741f);
								func_170(iLocal_977, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							unk_0xAC894C93914464C2(iLocal_977);
						}
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
						{
							iVar12 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
							if (unk_0x538DF9E5B1DF01EB(iVar12) && unk_0xECFECDAD51A6184F(iVar12, 0))
							{
								unk_0x6C43BF7625967266(iVar12, Local_520.f_66[1 /*3*/], 1, 0, 0, 1);
								unk_0x34639238667C4381(iVar12, Local_401.f_29.f_77[0]);
								unk_0xAC894C93914464C2(iVar12);
								if ((iLocal_967 == joaat("monster") || iLocal_967 == joaat("marshall")) || iLocal_967 == joaat("rhino"))
								{
									unk_0xBE2BFEEF84137DF0(iVar12, false);
								}
								else
								{
									unk_0xBE2BFEEF84137DF0(iVar12, true);
								}
								if (unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
								{
									unk_0x575C51FE953F1EA4(unk_0xA16EC202D9D35357(), 0, 0, -1);
									unk_0x49D26ECEB56A3095(unk_0xA16EC202D9D35357(), 1);
								}
								unk_0xBAE0E085DFB45D18(iVar12, 1);
								func_145(func_313(), &iVar12, 3, 1);
							}
							unk_0x5FE2A83120E8127F(800);
							func_179(1, 1, 1, 0);
							func_178(&(Local_520[3 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
							iLocal_984 = 0;
							iLocal_986 = -1;
							Local_401.f_3 = 15;
						}
						else
						{
							unk_0xB845ECB6BD2996BD(sVar14);
							func_163();
							unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
							if (unk_0xBAB691F99A2A7346(Local_401.f_110))
							{
								unk_0xC8CEF95C63B283EC(Local_401.f_110, 0);
								unk_0x27A62B1C26941E13(Local_401.f_110, 0);
							}
							if (unk_0xBAB691F99A2A7346(Local_401.f_111))
							{
								unk_0xC8CEF95C63B283EC(Local_401.f_111, 0);
								unk_0x27A62B1C26941E13(Local_401.f_111, 0);
							}
							if (unk_0x538DF9E5B1DF01EB(iLocal_987))
							{
								unk_0x6A23C3306A8CF21B(iLocal_987, 1, 0);
								unk_0x3CC3106305C40A28(iLocal_987, 0);
								iLocal_987 = 0;
							}
							unk_0xB81B20C00BEE80D3(unk_0x1788E93557766241());
							unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
							unk_0x847CD74208BB719C(8);
							unk_0x9AB8F163FA160890(unk_0xA16EC202D9D35357());
							unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), Local_401.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
							unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), Local_401.f_29.f_77[1]);
							unk_0x5FE2A83120E8127F(800);
							unk_0xC1B1E9A034A63A62(0);
							func_166(198.0043f, -999.7775f, -100f, 50f, 0);
							unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
							Local_401.f_3 = 16;
						}
						if (Local_401.f_3 != 16)
						{
							unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
						}
						unk_0x6853F2DD1CFD3CA2(0);
						unk_0xA0ED52A12ED3E5E5(0);
						unk_0xC1B1E9A034A63A62(0);
						unk_0x20D6E0EA145DF751(0f);
						unk_0x60365B850FB7354F(0f, 1065353216);
						iVar230 = unk_0x8645B73431E623E0(unk_0xA16EC202D9D35357(), &uVar0, -1);
						iVar231 = 0;
						while (iVar231 < iVar230)
						{
							if ((unk_0x538DF9E5B1DF01EB(uVar0[iVar231]) && !unk_0x2DE0B96E966FD817(uVar0[iVar231])) && unk_0xDF17BE550B9FEC7A(uVar0[iVar231], unk_0xF8BF19C18CE5C2B2(unk_0x1788E93557766241())))
							{
								if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
								{
									iVar12 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
									if ((unk_0x538DF9E5B1DF01EB(iVar12) && unk_0xECFECDAD51A6184F(iVar12, 0)) && unk_0xE3C88401E17BFBB2(iVar12) > iVar231)
									{
										unk_0x3195B1192FB0EA3D(uVar0[iVar231], iVar12, iVar231);
									}
								}
								else
								{
									unk_0xFE2DEA78E1B4FDB9(uVar0[iVar231], Local_401.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							iVar231++;
						}
						unk_0x847CD74208BB719C(8);
						iLocal_983 = 0;
					}
				}
				break;
			
			case 15:
				bVar232 = true;
				if (!unk_0xA84F80DD9F675CED())
				{
				}
				else if (unk_0xDC7784B8DE7B58D5())
				{
				}
				else
				{
					bVar232 = false;
				}
				if (func_165())
				{
				}
				else
				{
					bVar232 = false;
				}
				if (unk_0xBAB691F99A2A7346(Local_401.f_110) && unk_0x7AFB776BA9F391FA(Local_401.f_110))
				{
					if (unk_0x544E3534E1E68C44(Local_401.f_110))
					{
						bVar232 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[3 /*15*/].f_14 * 1000f))
					{
						bVar232 = false;
					}
				}
				else if (unk_0xBAB691F99A2A7346(Local_401.f_111) && unk_0x7AFB776BA9F391FA(Local_401.f_111))
				{
					if (unk_0x544E3534E1E68C44(Local_401.f_111))
					{
						bVar232 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520[3 /*15*/].f_14 * 1000f))
					{
						bVar232 = false;
					}
				}
				else
				{
					bVar232 = false;
				}
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					func_155(unk_0xA16EC202D9D35357(), Local_520.f_86[1 /*6*/], Local_520.f_66[1 /*3*/], ((Local_520[3 /*15*/].f_14 * 1000f) - 500f), Local_520.f_73[2 /*4*/], 3, &fVar13);
				}
				if (iLocal_986 < 1 && func_144(unk_0xA16EC202D9D35357(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_986 == 0)
					{
						func_166(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_986++;
				}
				if (bVar232)
				{
					unk_0xC1B1E9A034A63A62(0);
					Local_401.f_3 = 16;
				}
				else
				{
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
				}
				break;
			
			case 16:
				bVar233 = true;
				if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_520.f_61[3] * 1000f))
				{
					bVar233 = false;
				}
				if (bVar233)
				{
					Local_401.f_3 = 17;
				}
				break;
			
			case 17:
				if (unk_0xF7037F2CC07D58B0(Local_401.f_112))
				{
					unk_0xDB1DF8A68B9A5A9D(Local_401.f_112);
				}
				StringCopy(&Global_31720, "", 32);
				if (unk_0xA84F80DD9F675CED())
				{
					unk_0x099E9F2D6F93D420();
				}
				func_143(47, 1);
				func_141(47, 1);
				Global_67218.f_577 = 0;
				if (unk_0xF4C685E933068D23() || unk_0xE9A5FF67266655B2())
				{
					unk_0x5FE2A83120E8127F(250);
				}
				unk_0xC1B1E9A034A63A62(0);
				unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
				if (unk_0xBAB691F99A2A7346(Local_401.f_110))
				{
					unk_0xC8CEF95C63B283EC(Local_401.f_110, 0);
					unk_0x27A62B1C26941E13(Local_401.f_110, 0);
				}
				if (unk_0xBAB691F99A2A7346(Local_401.f_111))
				{
					unk_0xC8CEF95C63B283EC(Local_401.f_111, 0);
					unk_0x27A62B1C26941E13(Local_401.f_111, 0);
				}
				if (unk_0x538DF9E5B1DF01EB(iLocal_987))
				{
					unk_0x6A23C3306A8CF21B(iLocal_987, 1, 0);
					unk_0x3CC3106305C40A28(iLocal_987, 0);
					iLocal_987 = 0;
				}
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					iVar12 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0x538DF9E5B1DF01EB(iVar12) && unk_0xECFECDAD51A6184F(iVar12, 0))
					{
						unk_0x6C43BF7625967266(iVar12, Local_520.f_73[2 /*4*/], 1, 0, 0, 1);
						unk_0x34639238667C4381(iVar12, Local_520.f_73[2 /*4*/].f_3);
						unk_0xAC894C93914464C2(iVar12);
						unk_0x20D6E0EA145DF751(0f);
						unk_0x60365B850FB7354F(0f, 1065353216);
					}
				}
				unk_0x6853F2DD1CFD3CA2(1);
				unk_0xA0ED52A12ED3E5E5(1);
				func_179(0, 1, 1, 0);
				unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
				if (iLocal_962 > 0)
				{
					unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), iLocal_962, 0);
					unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
				}
				if (((unk_0x538DF9E5B1DF01EB(iLocal_977) && unk_0x22349EC06EA5B08B(iLocal_977)) && unk_0xD8233CB95CB48A7C(iLocal_977, 0)) && iLocal_977 != func_28(24))
				{
					unk_0x3A3C5A6572B3C611(&iLocal_977);
				}
				unk_0x29DB79DD4D939B38(&(Local_648.f_9), 25);
				iLocal_981 = 0;
				Local_401.f_3 = 18;
				break;
			
			case 18:
				if (unk_0x83B393DE31BAC8F0())
				{
					Local_401.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_67218.f_577)
		{
			func_143(47, 1);
			func_141(47, 1);
			Global_67218.f_577 = 0;
		}
		Local_401.f_3 = 0;
		if (iLocal_630 != -1)
		{
			func_48(&iLocal_630);
		}
	}
	if (Global_67218.f_577)
	{
		unk_0xB371C7A3E1A07041();
		func_140();
		func_55();
		unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), joaat("weapon_unarmed"), 1);
		unk_0xA6ED15B28077401E(2, 202);
		unk_0x4B404C739A9AFC7A(0, 37, 1);
		unk_0x4B404C739A9AFC7A(0, 157, 1);
		unk_0x4B404C739A9AFC7A(0, 158, 1);
		unk_0x4B404C739A9AFC7A(0, 159, 1);
		unk_0x4B404C739A9AFC7A(0, 160, 1);
		unk_0x4B404C739A9AFC7A(0, 161, 1);
		unk_0x4B404C739A9AFC7A(0, 162, 1);
		unk_0x4B404C739A9AFC7A(0, 163, 1);
		unk_0x4B404C739A9AFC7A(0, 164, 1);
		unk_0x4B404C739A9AFC7A(0, 165, 1);
		unk_0x4B404C739A9AFC7A(0, 14, 1);
		unk_0x4B404C739A9AFC7A(0, 15, 1);
		unk_0x4B404C739A9AFC7A(0, 53, 1);
		unk_0x4B404C739A9AFC7A(0, 54, 1);
		unk_0x4B404C739A9AFC7A(0, 140, 1);
		unk_0x4B404C739A9AFC7A(0, 141, 1);
		unk_0x4B404C739A9AFC7A(0, 142, 1);
		unk_0x4B404C739A9AFC7A(0, 143, 1);
		unk_0x4B404C739A9AFC7A(0, 143, 1);
		unk_0x4B404C739A9AFC7A(0, 47, 1);
		unk_0x4B404C739A9AFC7A(0, 38, 1);
		unk_0x4B404C739A9AFC7A(0, 22, 1);
		unk_0x4B404C739A9AFC7A(0, 102, 1);
		unk_0x4B404C739A9AFC7A(0, 69, 1);
		unk_0x4B404C739A9AFC7A(0, 70, 1);
		unk_0x4B404C739A9AFC7A(0, 68, 1);
		unk_0x4B404C739A9AFC7A(0, 92, 1);
		unk_0x4B404C739A9AFC7A(0, 99, 1);
		unk_0x4B404C739A9AFC7A(0, 115, 1);
		unk_0x4B404C739A9AFC7A(0, 46, 1);
		unk_0x4B404C739A9AFC7A(0, 25, 1);
	}
	if (!bVar11 && Local_401.f_2 == 0)
	{
		if (unk_0x11A809BBE3889742())
		{
			if (!unk_0x06771AF7795B3ECF(&cLocal_973))
			{
				if ((((func_129("WEB_VEH_INV") || func_129("WEB_VEH_FULL")) || func_129("CAR_GAR_05")) || func_129("CAR_GAR_06")) || func_129("CAR_GAR_EXIT"))
				{
					unk_0xFD1E0AEC770DAF2E(1);
				}
				StringCopy(&cLocal_973, "", 16);
			}
		}
	}
}

void func_140()
{
	Global_17099.f_6 = 1;
}

void func_141(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_142(iParam0) };
	if (bParam1)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_30784[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_30784[Var0.f_1]), Var0.f_0);
	}
}

struct<2> func_142(var uParam0)
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

void func_143(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_142(iParam0) };
	if (bParam1)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_30781[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_30781[Var0.f_1]), Var0.f_0);
	}
}

float func_144(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Param1, iParam4);
}

void func_145(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_8(iParam0) && unk_0x538DF9E5B1DF01EB(*iParam1)) && unk_0xECFECDAD51A6184F(*iParam1, 0))
	{
		if (iParam2 > Global_97439.f_1729.f_539.f_1635)
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
		if (unk_0x1496C675F4DE04ED(*iParam1) != 0)
		{
			unk_0x975833792D47DC73(*iParam1, 0);
		}
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/] = unk_0xA609E58449080951(*iParam1);
		if (unk_0x9ACB322395496917(*iParam1, &iVar1))
		{
			Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_1 = unk_0xA609E58449080951(iVar1);
		}
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_2 = unk_0x18315AE43ED8C760(*iParam1);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_3 = unk_0x6360D2FA3AD62AD1(*iParam1);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[0] = unk_0x5624226E4F913C53(*iParam1, 1);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[1] = unk_0x5624226E4F913C53(*iParam1, 2);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[2] = unk_0x5624226E4F913C53(*iParam1, 3);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[3] = unk_0x5624226E4F913C53(*iParam1, 4);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[4] = unk_0x5624226E4F913C53(*iParam1, 5);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[5] = unk_0x5624226E4F913C53(*iParam1, 6);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[6] = unk_0x5624226E4F913C53(*iParam1, 7);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[7] = unk_0x5624226E4F913C53(*iParam1, 8);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[8] = unk_0x5624226E4F913C53(*iParam1, 9);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[9] = unk_0x5624226E4F913C53(*iParam1, 10);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[10] = unk_0x5624226E4F913C53(*iParam1, 11);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[11] = unk_0x5624226E4F913C53(*iParam1, 12);
		if (unk_0xE19742BCB95B6E28(*iParam1, 0))
		{
			iVar2 = unk_0xBE52DF6606B79B2D(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 1;
			}
			else
			{
				Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
			}
		}
		else
		{
			Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
		}
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_25 = unk_0xD114A40C0BC7A580();
		StringCopy(&(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27), unk_0xC2E0CBF2F000307B(*iParam1), 16);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26 = unk_0x6E1ADA6FBEC091EA(*iParam1);
		unk_0xABDA00D6C410A603(*iParam1, &(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5), &(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6));
		unk_0xACCED888DA80AA1F(*iParam1, &(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7), &(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_8));
		unk_0x27BCAE1F10710BEC(*iParam1, &(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60), &(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61), &(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62));
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64 = unk_0x9610401E9E4D05A2(*iParam1);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63 = unk_0x4EC2A3086F931215(*iParam1);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_65 = unk_0x960D1BE7E376200B(*iParam1);
		Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66 = unk_0xD9197C47F38990D8(*iParam1);
		unk_0xB49AB41D753BA09F(*iParam1, &(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_69), &(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_70), &(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_71));
		if (unk_0x5792E99920C570FD(*iParam1, 2))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		if (unk_0x5792E99920C570FD(*iParam1, 3))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		if (unk_0x5792E99920C570FD(*iParam1, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		if (unk_0x5792E99920C570FD(*iParam1, 1))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		Global_97439.f_1729.f_539.f_3209[iParam0] = 10;
		if ((unk_0x6CE2319DEB6C4463(*iParam1) >= 0 && unk_0x6CE2319DEB6C4463(*iParam1) < 255) && func_149(*iParam1, 0, &uVar0))
		{
			func_17(iParam1, &(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31), &(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_57));
			if (bParam3)
			{
				Global_97439.f_23343[iParam0 /*43*/].f_40 = 1;
				Global_97439.f_23343[iParam0 /*43*/] = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/];
				Global_97439.f_23343[iParam0 /*43*/].f_3 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63;
				Global_97439.f_23343[iParam0 /*43*/].f_4 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60;
				Global_97439.f_23343[iParam0 /*43*/].f_5 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61;
				Global_97439.f_23343[iParam0 /*43*/].f_6 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62;
				Global_97439.f_23343[iParam0 /*43*/].f_10 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66;
				Global_97439.f_23343[iParam0 /*43*/].f_16 = !Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64;
				Global_97439.f_23343[iParam0 /*43*/].f_19 = { Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27 };
				Global_97439.f_23343[iParam0 /*43*/].f_23 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26;
				Global_97439.f_23343[iParam0 /*43*/].f_7 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[11];
				Global_97439.f_23343[iParam0 /*43*/].f_8 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[12];
				Global_97439.f_23343[iParam0 /*43*/].f_9 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[23];
				Global_97439.f_23343[iParam0 /*43*/].f_11 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[4];
				Global_97439.f_23343[iParam0 /*43*/].f_12 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[15];
				Global_97439.f_23343[iParam0 /*43*/].f_13 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[16];
				Global_97439.f_23343[iParam0 /*43*/].f_14 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[14];
				Global_97439.f_23343[iParam0 /*43*/].f_15 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[22];
				Global_97439.f_23343[iParam0 /*43*/].f_18 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[20];
				Global_97439.f_23343[iParam0 /*43*/].f_17 = Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[18];
				Global_97439.f_23343[iParam0 /*43*/].f_24 = unk_0xF429FFD1250F5D2A(*iParam1, 11) + 1;
				Global_97439.f_23343[iParam0 /*43*/].f_25 = unk_0xF429FFD1250F5D2A(*iParam1, 12) + 1;
				Global_97439.f_23343[iParam0 /*43*/].f_26 = unk_0xF429FFD1250F5D2A(*iParam1, 4) + 1;
				Global_97439.f_23343[iParam0 /*43*/].f_27 = unk_0xF429FFD1250F5D2A(*iParam1, 23) + 1;
				Global_97439.f_23343[iParam0 /*43*/].f_28 = unk_0xF429FFD1250F5D2A(*iParam1, 14) + 1;
				Global_97439.f_23343[iParam0 /*43*/].f_29 = unk_0xF429FFD1250F5D2A(*iParam1, 16) + 1;
				Global_97439.f_23343[iParam0 /*43*/].f_30 = unk_0xF429FFD1250F5D2A(*iParam1, 15) + 1;
				Global_97439.f_23343[iParam0 /*43*/].f_32 = unk_0xCAFA1DCB398913AE(*iParam1);
				Global_97439.f_23343[iParam0 /*43*/].f_33[0] = unk_0x2ACE61D336060E09(*iParam1);
				Global_97439.f_23343[iParam0 /*43*/].f_33[1] = unk_0x3CCB3825CC0AB369(*iParam1, 14, 0);
				Global_97439.f_23343[iParam0 /*43*/].f_33[2] = unk_0x3CCB3825CC0AB369(*iParam1, 14, 1);
				Global_97439.f_23343[iParam0 /*43*/].f_33[3] = unk_0x3CCB3825CC0AB369(*iParam1, 14, 2);
				Global_97439.f_23343[iParam0 /*43*/].f_33[4] = unk_0x3CCB3825CC0AB369(*iParam1, 14, 3);
				Global_97439.f_23343[iParam0 /*43*/].f_39 = unk_0xD7379F2E576EBF10(*iParam1);
				Global_97439.f_23343[iParam0 /*43*/].f_31 = func_148(*iParam1);
				Global_97439.f_23343[iParam0 /*43*/].f_33[0] = unk_0x1C0E19AF77938EDB(*iParam1);
				unk_0xAB226A1CC09E5393(*iParam1, &iVar4, &uVar5, &uVar6);
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
				func_146(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5, Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7, iVar3, 1, &(Global_97439.f_23343[iParam0 /*43*/].f_1));
				unk_0xC2943D968B9C64A2(*iParam1, &iVar4, &uVar5);
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
				func_146(Global_97439.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6, -1, iVar3, 0, &(Global_97439.f_23343[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_146(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_147(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
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

bool func_147(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
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

float func_148(int iParam0)
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
	if (((unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0)) && unk_0x6CE2319DEB6C4463(iParam0) >= 0) && unk_0x6CE2319DEB6C4463(iParam0) < 255)
	{
		if (unk_0xD7379F2E576EBF10(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xD7379F2E576EBF10(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xD7379F2E576EBF10(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xD7379F2E576EBF10(iParam0) == 0)
		{
			if (unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(iParam0)))
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

int func_149(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 0;
	}
	if (!unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xD3B644BC9C4BCCE4(unk_0xA609E58449080951(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0xA609E58449080951(iParam0);
	if (!func_150(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (unk_0x541898DB7669BD41(iParam0))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if ((func_41(iParam0) && unk_0xA609E58449080951(iParam0) != joaat("sentinel2")) && unk_0xA609E58449080951(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_150(int iParam0, bool bParam1, var uParam2)
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
	if (((!unk_0xD548A98EDA33C15A(iParam0) && !unk_0x2FDD93A1F5E63663(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3"))
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
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_151(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_151(int iParam0)
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

int func_152()
{
	int iVar0;
	
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (unk_0x538DF9E5B1DF01EB(iVar0) && unk_0xECFECDAD51A6184F(iVar0, 0))
		{
			if (iVar0 == Global_67218.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_67218.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_67218.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_67218.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_67218.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_67218.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_67218.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_67218.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_67218.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_67218.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_67218.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_67218.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_153()
{
	return unk_0x09560C7DE2A384BD() <= Global_17238.f_5130 + 100;
}

void func_154(int iParam0)
{
	if ((unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0)) && iParam0 == Global_68123)
	{
		Global_97439.f_18371.f_4796 = 0;
		Global_68123 = 0;
	}
}

int func_155(int iParam0, struct<4> Param1, var uParam5, var uParam6, struct<3> Param7, float fParam10, struct<4> Param11, int iParam15, float fParam16)
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
	if (iLocal_983 == 0)
	{
		iVar12 = unk_0x6ADAC08D70C79DE5(uParam0, 0);
		iLocal_987 = iVar12;
		unk_0xA5CC79C83111E834(iLocal_987, 1);
		unk_0x542B8BF5C21F2470(iLocal_987, 1);
		unk_0xAC894C93914464C2(iLocal_987);
		unk_0x6EBB9B0E214CCF0F(iLocal_987, 1, 1);
		if (unk_0x414274D1CFE88167(iParam0))
		{
			unk_0x575C51FE953F1EA4(iParam0, 0, 0, -1);
			unk_0x49D26ECEB56A3095(iParam0, 1);
		}
		Var13 = { unk_0xBF8499F46AD9093A(iLocal_987, 1) };
		fLocal_988 = (Var13.f_2 - Var0.f_2);
		unk_0x6C43BF7625967266(iLocal_987, Var0 + Vector(-10f, 0f, 0f), 1, 0, 0, 1);
		if (unk_0xECFECDAD51A6184F(iLocal_987, 0))
		{
			unk_0x1143B1E42EAAE947(iLocal_987, 3);
		}
		iLocal_989 = unk_0x09560C7DE2A384BD();
		iLocal_983 = 1;
	}
	if (iLocal_983 == 1)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_987) && unk_0xECFECDAD51A6184F(iLocal_987, 0))
		{
			fVar16 = unk_0xBBDA792448DB5A89(iLocal_989);
			fVar17 = (fVar16 + fParam10);
			fVar18 = func_162(unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()), fVar16, fVar17);
			fVar18 = (fVar18 - fVar16);
			fVar18 = (fVar18 / fParam10);
			if (iParam15 == 1)
			{
				fVar18 = func_161(fVar18);
			}
			else if (iParam15 == 2)
			{
				fVar18 = func_160(fVar18);
			}
			else if (iParam15 == 3)
			{
				fVar18 = func_158(fVar18);
			}
			fVar18 = (fVar18 * fParam10);
			fVar18 = (fVar18 + fVar16);
			unk_0x4B404C739A9AFC7A(0, 72, 1);
			unk_0xFE2DEA78E1B4FDB9(iLocal_987, func_156(Var0 + Vector(fLocal_988, 0f, 0f), Var6 + Vector(fLocal_988, 0f, 0f), fVar16, fVar17, fVar18), 0, 0, 1);
			if (iLocal_984 && !unk_0x414274D1CFE88167(iParam0))
			{
				unk_0x0BBAD8A322CB595E(iLocal_987, func_156((0f - Var3.f_0), (0f - Var3.f_1), (Var3.f_2 + 180f), (0f - Var9.f_0), (0f - Var9.f_1), (Var9.f_2 + 180f), fVar16, fVar17, fVar18), 2, 1);
			}
			else
			{
				if (!unk_0x2DE0B96E966FD817(iParam0))
				{
					if (unk_0x414274D1CFE88167(iParam0))
					{
						unk_0x117411595F7E531A(iParam0, 236, 1);
						unk_0x117411595F7E531A(iParam0, 309, 1);
					}
				}
				unk_0x0BBAD8A322CB595E(iLocal_987, func_156(Var3, Var9, fVar16, fVar17, fVar18), 2, 1);
			}
			unk_0x6A23C3306A8CF21B(iLocal_987, 0, 0);
			unk_0x3CC3106305C40A28(iLocal_987, 1);
		}
		else
		{
			iLocal_983 = 2;
			return 0;
		}
		if (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) > (unk_0xBBDA792448DB5A89(iLocal_989) + fParam10) && unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) > ((unk_0xBBDA792448DB5A89(iLocal_989) + fParam10) + 2600f))
		{
			iLocal_983 = 2;
			return 0;
		}
	}
	if (iLocal_983 == 2)
	{
		unk_0x117411595F7E531A(iParam0, 236, 0);
		unk_0x117411595F7E531A(iParam0, 309, 0);
		if (unk_0x538DF9E5B1DF01EB(iLocal_987))
		{
			if (!func_4(Param11, 0f, 0f, 0f, 0))
			{
				unk_0x6C43BF7625967266(iLocal_987, Param11, 1, 0, 0, 1);
				unk_0x34639238667C4381(iLocal_987, Param11.f_3);
				unk_0xAC894C93914464C2(iLocal_987);
			}
			unk_0x6A23C3306A8CF21B(iLocal_987, 1, 0);
			unk_0x3CC3106305C40A28(iLocal_987, 0);
			iLocal_987 = 0;
		}
		if (unk_0x414274D1CFE88167(iParam0))
		{
			unk_0xE1E9BC2552E721F9(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_156(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_157(Param0.f_0, Param3.f_0, fParam6, fParam7, fParam8), func_157(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_157(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_157(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_158(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = unk_0x0BADBFA3B172435F(func_159(((fParam0 * 3.141593f) * 0.5f)));
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

float func_159(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_160(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - unk_0xD0FFB162F40A139C(func_159(((fParam0 * 3.141593f) * 0.5f))));
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
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - unk_0xD0FFB162F40A139C(func_159((fParam0 * 3.141593f)))));
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

float func_162(float fParam0, float fParam1, float fParam2)
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

void func_163()
{
	Global_67218.f_553 = 1;
	Global_67218.f_554 = 0;
}

void func_164(var uParam0)
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
		iLocal_116[iVar2] = Global_97439.f_18371.f_69[iVar1 /*54*/].f_42;
		if (iLocal_116[iVar2] != 0)
		{
			if (!unk_0x889D01384B54BCE3(uLocal_47[iVar2], 2))
			{
				unk_0x939DA7EBCC6588FF(iLocal_116[iVar2]);
				unk_0xD0E2BFCE93AE3ABD(&(uLocal_47[iVar2]), 2);
				func_317(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_165()
{
	return !Global_67218.f_553;
}

void func_166(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_40(&(Global_67218.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x4970185D4CC64616(Param0, Global_67218.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_167(iVar0);
			}
		}
		iVar0++;
	}
}

void func_167(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_40(&(Global_67218.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x538DF9E5B1DF01EB(Global_67218.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0xECFECDAD51A6184F(Global_67218.f_139[iParam0], 0))
				{
					if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), Global_67218.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x7B9576B4E099FB1F(Global_67218.f_139[iParam0], 1, 1);
				unk_0x2F2948A2506AA404(&(Global_67218.f_139[iParam0]));
			}
		}
		Global_67218[iParam0] = 1;
		if (unk_0x889D01384B54BCE3(Global_67218.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_46(iParam0, 0)) && Global_68127.f_42 == 0) && Global_97439.f_18371.f_1406[Global_67218.f_555[0 /*21*/].f_14] != 0) && Global_97439.f_18371.f_1406[Global_67218.f_555[0 /*21*/].f_14] > 3) && (!func_168(0, Global_67218.f_555[0 /*21*/].f_12) || !func_168(1, Global_67218.f_555[0 /*21*/].f_12)))
			{
				func_91(&(Global_97439.f_18371.f_69[Global_67218.f_555[0 /*21*/].f_14 /*54*/]), &Global_68127);
				Global_68181 = Global_97439.f_18371.f_4799;
			}
			func_319(iParam0, 0);
		}
	}
}

int func_168(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_169(&(Global_97439.f_18371.f_4414[iVar0 /*109*/])))
	{
		return 0;
	}
	return func_21(Global_97439.f_18371.f_4414[iVar0 /*109*/][iParam0 /*54*/].f_42);
}

int func_169(var uParam0)
{
	return *uParam0;
}

void func_170(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<36> Var0;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[25]) && unk_0xECFECDAD51A6184F(Global_67218.f_484[25], 0))
			{
				if (Global_67218.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x541898DB7669BD41(iParam0) || unk_0xA609E58449080951(iParam0) == joaat("bus")) || unk_0xA609E58449080951(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_171(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		func_15(iParam0, &Var0);
		if (func_4(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
			fParam4 = unk_0xD1613577C809E98B(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635()) != joaat("vehicle_gen_controller"))
			{
				Global_68182 = unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635());
			}
		}
		func_90(iParam5, &Var0, Param1, fParam4, func_25(iParam0));
		func_13(iParam5, iParam0, 0);
	}
}

void func_171(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_92(iParam0);
	func_319(iParam0, 0);
}

int func_172(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_20(uParam0->f_42))
	{
		return 0;
	}
	if (unk_0x538DF9E5B1DF01EB(Global_68124))
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
	if (!func_168(0, iParam1))
	{
		Global_97439.f_18371.f_4800[iVar0] = 0;
	}
	else if (!func_168(1, iParam1))
	{
		Global_97439.f_18371.f_4800[iVar0] = 1;
	}
	func_173(iParam1, unk_0x9BB52B0F42245310(uParam0->f_42));
	func_91(uParam0, &(Global_97439.f_18371.f_4414[iVar0 /*109*/][Global_97439.f_18371.f_4800[iVar0] /*54*/]));
	Global_97439.f_18371.f_4800[iVar0]++;
	if (Global_97439.f_18371.f_4800[iVar0] >= func_169(&(Global_97439.f_18371.f_4414[iVar0 /*109*/])))
	{
		Global_97439.f_18371.f_4800[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_89583[iVar0 /*74*/] == uParam0->f_42 && unk_0x9BA82E09A986BA4B(&(Global_89583[iVar0 /*74*/].f_27), &(uParam0->f_1)))
		{
			Global_89583[iVar0 /*74*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_173(int iParam0, char* sParam1)
{
	if (!func_8(iParam0))
	{
		return;
	}
	if (!Global_97439.f_18371.f_4804[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_174("IMPOUND_HELPM", sParam1, 2, unk_0x444ECD635D5FD45F(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_174("IMPOUND_HELPF", sParam1, 2, unk_0x444ECD635D5FD45F(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_174("IMPOUND_HELPT", sParam1, 2, unk_0x444ECD635D5FD45F(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_97439.f_18371.f_4804[iParam0] = 1;
	}
}

void func_174(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_175(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_175(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9BA82E09A986BA4B(sParam0, ""))
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
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97439.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_8 = (unk_0x09560C7DE2A384BD() + iParam3);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = ((unk_0x09560C7DE2A384BD() + iParam3) + iParam4);
		}
		else
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97439.f_23635.f_145++;
		func_176();
	}
}

void func_176()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97439.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[0])
			{
				Global_97439.f_23635.f_146[0] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[1])
			{
				Global_97439.f_23635.f_146[1] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[2])
			{
				Global_97439.f_23635.f_146[2] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_177(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_40(&(Global_67218.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_91(&(Global_97439.f_18371.f_69[Global_67218.f_555[0 /*21*/].f_14 /*54*/]), uParam0);
	}
	return 1;
}

int func_178(var uParam0, var uParam1, var uParam2)
{
	if (unk_0xBAB691F99A2A7346(*uParam1))
	{
		unk_0x27A62B1C26941E13(*uParam1, 0);
	}
	if (unk_0xBAB691F99A2A7346(*uParam2))
	{
		unk_0x27A62B1C26941E13(*uParam2, 0);
	}
	*uParam1 = unk_0xC45922BBDAA0638F("DEFAULT_SCRIPTED_CAMERA", 0);
	*uParam2 = unk_0xC45922BBDAA0638F("DEFAULT_SCRIPTED_CAMERA", 0);
	if (unk_0xBAB691F99A2A7346(*uParam1) && unk_0xBAB691F99A2A7346(*uParam2))
	{
		unk_0x7A77F1D5EE07F7AD(*uParam1, *uParam0);
		unk_0x2F60BEC0103AB8D0(*uParam1, uParam0->f_3, 2);
		unk_0xFDD170140EFC9F4C(*uParam1, uParam0->f_12);
		unk_0x7A77F1D5EE07F7AD(*uParam2, uParam0->f_6);
		unk_0x2F60BEC0103AB8D0(*uParam2, uParam0->f_6.f_3, 2);
		unk_0xFDD170140EFC9F4C(*uParam2, uParam0->f_12);
		unk_0x47FDCDDCBDC99BBB(*uParam1, "HAND_SHAKE", uParam0->f_13);
		unk_0x47FDCDDCBDC99BBB(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			unk_0x0069D19E3A367524(*uParam2, *uParam1, unk_0xF2DB717A73826179((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			unk_0xC8CEF95C63B283EC(*uParam1, 1);
		}
		unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_179(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x31F1896E6453B935(unk_0x1788E93557766241());
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 1);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 1);
		func_183(1);
		unk_0xB0F2C1CA020DA7DA();
		unk_0xADD1FEC2646B4ECF();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xBE029393332523D7())
			{
				unk_0x0D68C13151B68364(0);
			}
			if (!func_57())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_182(1, iParam3, iParam2);
		Global_54764 = 1;
		Global_67069 = 1;
		Global_68323 = 1;
	}
	else
	{
		func_183(0);
		unk_0x5C6ECA43D8ACED5D();
		Global_54764 = 0;
		if (bParam1)
		{
			unk_0xAB5770BCC9EDAC2C();
		}
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 0);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 0);
		func_182(0, iParam3, iParam2);
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && !func_180(unk_0x1788E93557766241()))
		{
			unk_0xE31C4C317516E7A7(unk_0xA16EC202D9D35357(), 0);
		}
		Global_68323 = 0;
	}
}

int func_180(int iParam0)
{
	if (func_69(iParam0, 0))
	{
		return 1;
	}
	if (func_181())
	{
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_181()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
}

int func_182(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x24547C720F3E6709() != iParam0 && uParam2)
		{
			unk_0x3EA9937AF099576F(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_183(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 13);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 13);
	}
}

int func_184(int iParam0)
{
	func_40(&(Global_67218.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_67218.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_185(26))
			{
				return 26;
			}
			if (!func_185(29))
			{
				return 29;
			}
			if (!func_185(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_67218.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_185(27))
			{
				return 27;
			}
			if (!func_185(30))
			{
				return 30;
			}
			if (!func_185(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_67218.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_185(28))
			{
				return 28;
			}
			if (!func_185(31))
			{
				return 31;
			}
			if (!func_185(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_185(int iParam0)
{
	return func_46(iParam0, 0);
}

void func_186(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_188(iParam0, &iVar1);
	if (!unk_0x9BA82E09A986BA4B("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x94ECD62AF4ECC7DC(iVar1))
			{
				return;
			}
			if (unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == iVar1)
			{
				func_141(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x94ECD62AF4ECC7DC(iVar1))
			{
				return;
			}
			if (func_187(iParam0))
			{
				func_141(iParam0, 0);
			}
		}
		unk_0x36CF615FADBA1CB4(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_187(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_142(iParam0) };
	if (unk_0x889D01384B54BCE3(Global_30784[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

var func_188(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_189(iParam0) };
	*iParam1 = unk_0x7B6124E1230469E9(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_189(int iParam0)
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
			Var5 = { func_190(1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_190(2) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_190(3) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_190(4) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_190(5) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_190(6) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_190(7) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1048995[34 /*1425*/].f_146.f_1041 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_190(35) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_190(36) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_190(37) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_190(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_190(39) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_190(40) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_190(41) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_190(42) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_190(43) };
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
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_190(int iParam0)
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

void func_191(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_188(iParam0, &iVar1);
	if (!unk_0x9BA82E09A986BA4B("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0x855BB5FBE5A9BE36(iVar1))
		{
			if (unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == iVar1)
			{
				func_143(iParam0, 1);
				return;
			}
			unk_0x28A95E6EE87EDB36(iVar1, 1);
		}
		else if (!bParam1 && unk_0x855BB5FBE5A9BE36(iVar1))
		{
			if (func_192(iParam0))
			{
				func_143(iParam0, 0);
			}
			unk_0x28A95E6EE87EDB36(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_192(iParam0))
			{
				func_143(iParam0, 0);
			}
		}
	}
}

int func_192(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_142(iParam0) };
	if (unk_0x889D01384B54BCE3(Global_30781[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) || func_184(Local_401.f_0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_194(float fParam0, float fParam1, float fParam2)
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

int func_195(int iParam0, var uParam1)
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

void func_196()
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
	
	if ((((((unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) || func_10(0)) || func_10(3)) || func_10(2)) || func_10(4)) || func_10(14)) || !func_8(iLocal_646))
	{
		return;
	}
	if (!Global_67066)
	{
		if (Global_97439.f_18371.f_1430[iLocal_646 /*939*/].f_626[iLocal_805] != -15)
		{
			if (!Global_67218[Global_97439.f_18371.f_1430[iLocal_646 /*939*/].f_313[iLocal_805]])
			{
				if (func_247(func_29(), Global_97439.f_18371.f_1430[iLocal_646 /*939*/].f_626[iLocal_805]))
				{
					iVar0 = Global_97439.f_18371.f_1430[iLocal_646 /*939*/][iLocal_805];
					func_245(iVar0, iLocal_805, iLocal_646);
					func_40(&Var1, Global_97439.f_18371.f_1430[iLocal_646 /*939*/].f_313[iLocal_805]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_319(Global_97439.f_18371.f_1430[iLocal_646 /*939*/].f_313[iLocal_805], 1);
					}
					Global_97439.f_18371.f_1430[iLocal_646 /*939*/].f_626[iLocal_805] = -15;
				}
			}
		}
		iLocal_805++;
		if (iLocal_805 >= 312)
		{
			iLocal_805 = 0;
		}
	}
	if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) != Local_401.f_7 || Local_401.f_2 == 99)
	{
		if (Local_401.f_5 != -1)
		{
			func_48(&(Local_401.f_5));
		}
		if (Local_401.f_2 > 0)
		{
			unk_0xFD1E0AEC770DAF2E(1);
		}
		Local_401.f_7 = unk_0xA609E58449080951(unk_0xA16EC202D9D35357());
		Local_401.f_5 = -1;
		Local_401.f_2 = 0;
		Local_401.f_4 = 0;
		if (bLocal_804)
		{
			if (unk_0x11A809BBE3889742())
			{
				unk_0xFD1E0AEC770DAF2E(1);
			}
			unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
			if (unk_0xBAB691F99A2A7346(Local_401.f_110))
			{
				unk_0xC8CEF95C63B283EC(Local_401.f_110, 0);
				unk_0x27A62B1C26941E13(Local_401.f_110, 0);
			}
			if (unk_0xBAB691F99A2A7346(Local_401.f_111))
			{
				unk_0xC8CEF95C63B283EC(Local_401.f_111, 0);
				unk_0x27A62B1C26941E13(Local_401.f_111, 0);
			}
			unk_0x423D1EBE54B18555(unk_0xA16EC202D9D35357(), 1);
			unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), 0);
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
				unk_0x1823BFEDB37C7F59(unk_0x1788E93557766241(), 0);
			}
			iVar22 = unk_0xB49BA83A5C224F40();
			if (unk_0x538DF9E5B1DF01EB(iVar22) && unk_0xECFECDAD51A6184F(iVar22, 0))
			{
				unk_0x423D1EBE54B18555(iVar22, 1);
				unk_0x3CC3106305C40A28(iVar22, 0);
				if (unk_0xD8233CB95CB48A7C(iVar22, 1))
				{
					unk_0x3A3C5A6572B3C611(&iVar22);
				}
			}
			iVar23 = 5000;
			iVar24 = unk_0x09560C7DE2A384BD();
			while (!unk_0xE0032FA93E122BA3() && (unk_0x09560C7DE2A384BD() - iVar24) < iVar23)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (unk_0xF7037F2CC07D58B0(Local_401.f_112))
			{
				unk_0xDB1DF8A68B9A5A9D(Local_401.f_112);
			}
			StringCopy(&Global_31720, "", 32);
			if ((Local_401.f_0 == 21 || Local_401.f_0 == 22) || Local_401.f_0 == 23)
			{
				func_191(47, 1);
				func_186(47, 1);
			}
			unk_0x099E9F2D6F93D420();
			unk_0x2D78CBCC9150BF79();
			unk_0x6853F2DD1CFD3CA2(1);
			unk_0xA0ED52A12ED3E5E5(1);
			func_179(0, 1, 1, 0);
			bLocal_804 = false;
			Global_24699 = 0;
		}
	}
	bVar25 = false;
	if ((((((((((((!bLocal_804 && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0)) || (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1) && !Local_401.f_29.f_69)) || (!unk_0xB4AD7D9D08986FF5(unk_0xA16EC202D9D35357()) && !unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))) || (!bLocal_804 && func_46(Local_401.f_0, 5))) || (!bLocal_804 && unk_0x1453F50088A91E4E(2, 199))) || (!bLocal_804 && unk_0x2B0FFD431FD5A9FA())) || !func_243(0)) || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || unk_0x048742CFEDBEF960(unk_0xA16EC202D9D35357())) || unk_0x1DA9513D9D54F420(unk_0xA16EC202D9D35357())) || Global_24596) || (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && unk_0xFE57C063743B552A(unk_0xA16EC202D9D35357())))
	{
		if (Local_401.f_2 > 0 && Local_401.f_2 != 90)
		{
			iLocal_964 = 1;
			Local_401.f_2 = 99;
		}
		bVar25 = true;
	}
	fVar30 = 20f;
	iVar31 = 3;
	switch (Local_401.f_2)
	{
		case 0:
			if ((((Local_401.f_0 != -1 && func_46(Local_401.f_0, 0)) && !func_46(Local_401.f_0, 5)) && !bLocal_965) && !bVar25)
			{
				if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0) && !unk_0x11A809BBE3889742())
				{
					cVar26 = { Local_401.f_29.f_63 };
					StringConCat(&cVar26, "_01", 16);
					func_130(&(Local_401.f_5), 3, &cVar26, 0, 0, 0);
					Local_401.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_125(Local_401.f_5, 1))
			{
				if (func_242(iLocal_646) < Local_401.f_29.f_67)
				{
					Local_401.f_4 = unk_0x09560C7DE2A384BD();
					func_48(&(Local_401.f_5));
					iLocal_643 = 0;
					Local_401.f_2 = 90;
				}
				else
				{
					iLocal_643 = 0;
					Local_401.f_4 = unk_0x09560C7DE2A384BD();
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
				func_130(&(Local_401.f_5), 3, &cVar26, 0, 0, 0);
				Local_401.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_125(Local_401.f_5, 1))
			{
				if (func_242(iLocal_646) < Local_401.f_29.f_67)
				{
					Local_401.f_4 = unk_0x09560C7DE2A384BD();
					Local_401.f_2 = 90;
				}
				else
				{
					unk_0xC2E1777941B4536E(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 1);
					bLocal_804 = false;
					if ((Local_401.f_0 == 15 || Local_401.f_0 == 17) || Local_401.f_0 == 16)
					{
						Local_515.f_4 = 112;
						bLocal_804 = true;
					}
					else if (Local_401.f_0 == 18 || Local_401.f_0 == 19)
					{
						Local_515.f_4 = 114;
						bLocal_804 = true;
					}
					else if (Local_401.f_0 == 12 || Local_401.f_0 == 13)
					{
						Local_515.f_4 = 113;
						bLocal_804 = true;
					}
					else if ((Local_401.f_0 == 21 || Local_401.f_0 == 22) || Local_401.f_0 == 23)
					{
						Local_515.f_4 = 115;
						bLocal_804 = true;
					}
					Local_515.f_0 = unk_0x36ECDA4DD9A3F08D("MIDSIZED_MESSAGE");
					Local_515.f_1 = 0;
					Local_515.f_3 = 0;
					Local_515.f_2 = 0;
					iLocal_806 = 1;
					Global_24699 = 1;
					if (bLocal_804)
					{
						if ((Local_401.f_0 == 21 || Local_401.f_0 == 22) || Local_401.f_0 == 23)
						{
							func_191(47, 0);
							func_186(47, 0);
							Local_401.f_112 = unk_0x7B6124E1230469E9(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (unk_0xF7037F2CC07D58B0(Local_401.f_112))
							{
								if (!unk_0x02E23868217F22CC(Local_401.f_112))
								{
									unk_0xA17109B5C97ADD34(Local_401.f_112);
								}
								StringCopy(&Global_31720, "v_garagem_sp", 32);
							}
						}
						unk_0x68068FC275E8AC83(unk_0x1788E93557766241(), 1);
						unk_0x099E9F2D6F93D420();
						Local_401.f_4 = unk_0x09560C7DE2A384BD();
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
				Local_401.f_112 = unk_0x7B6124E1230469E9(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!unk_0xF7037F2CC07D58B0(Local_401.f_112) || unk_0x855BB5FBE5A9BE36(Local_401.f_112)) || unk_0x94ECD62AF4ECC7DC(Local_401.f_112))
				{
					func_191(47, 0);
					func_186(47, 0);
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
					if (unk_0xD3723C36F0F699D6(200.4651f, -1020.631f, -100f, 50f, 0) || (unk_0x09560C7DE2A384BD() - Local_401.f_4) > 3500)
					{
						Local_401.f_4 = unk_0x09560C7DE2A384BD();
						Local_401.f_2 = 5;
					}
				}
				else if (unk_0x1232944746AEB20F(Local_401.f_29.f_14, Var32, fVar30, iVar31) || (unk_0x09560C7DE2A384BD() - Local_401.f_4) > 3500)
				{
					Local_401.f_4 = unk_0x09560C7DE2A384BD();
					Local_401.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((unk_0xA84F80DD9F675CED() && unk_0xDC7784B8DE7B58D5()) && (!unk_0xF7037F2CC07D58B0(Local_401.f_112) || unk_0x02E23868217F22CC(Local_401.f_112))) || (unk_0x09560C7DE2A384BD() - Local_401.f_4) > 10000)
			{
				Local_401.f_4 = unk_0x09560C7DE2A384BD();
				Local_401.f_2 = 6;
			}
			break;
		
		case 6:
			if ((unk_0x09560C7DE2A384BD() - Local_401.f_4) > 1000)
			{
				if ((unk_0x538DF9E5B1DF01EB(iLocal_977) && unk_0x22349EC06EA5B08B(iLocal_977)) && unk_0xD8233CB95CB48A7C(iLocal_977, 1))
				{
					unk_0x3A3C5A6572B3C611(&iLocal_977);
				}
				iLocal_977 = unk_0xB49BA83A5C224F40();
				if ((((unk_0x538DF9E5B1DF01EB(iLocal_977) && unk_0xECFECDAD51A6184F(iLocal_977, 0)) && !unk_0x38B61EB14C5FBA9E(unk_0xA609E58449080951(iLocal_977))) && !unk_0xEE41D6C2DA208994(unk_0xA609E58449080951(iLocal_977))) && !unk_0xD18BE100522E5F15(unk_0xA609E58449080951(iLocal_977)))
				{
					if (!unk_0x22349EC06EA5B08B(iLocal_977))
					{
						unk_0x7B9576B4E099FB1F(iLocal_977, 0, 0);
					}
				}
				else
				{
					iLocal_977 = 0;
				}
				unk_0x423D1EBE54B18555(unk_0xA16EC202D9D35357(), 0);
				if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), 1);
				}
				if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
				{
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 16);
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 32);
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 128);
					unk_0x1823BFEDB37C7F59(unk_0x1788E93557766241(), 1);
				}
				func_179(1, 1, 1, 0);
				unk_0xEDC11454B9658FE1();
				unk_0xFD1E0AEC770DAF2E(1);
				Var32 = { unk_0xD0FFB162F40A139C((Local_401.f_29.f_14.f_3.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_401.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_401.f_29.f_69)
				{
					unk_0x114CD354F838F63E(Local_401.f_29.f_14, Var32);
				}
				if (!unk_0xBAB691F99A2A7346(Local_401.f_110))
				{
					Local_401.f_110 = unk_0xC45922BBDAA0638F("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				if (unk_0xBAB691F99A2A7346(Local_401.f_110))
				{
					if (Local_401.f_29.f_69)
					{
						unk_0xACE4F15B3E7FBB6D("GtaMloRoom001");
					}
					func_179(1, 1, 1, 0);
					func_178(&(Local_401.f_29.f_14), &(Local_401.f_110), &(Local_401.f_111));
				}
				unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 0, 0);
				unk_0x6853F2DD1CFD3CA2(0);
				unk_0xA0ED52A12ED3E5E5(0);
				unk_0x099E9F2D6F93D420();
				Local_401.f_2 = 7;
				Local_401.f_4 = unk_0x09560C7DE2A384BD();
				func_48(&(Local_401.f_5));
			}
			break;
		
		case 7:
			if ((unk_0x09560C7DE2A384BD() - Local_401.f_4) < 7000 && !func_240(1000))
			{
				cVar26 = { Local_401.f_29.f_63 };
				StringConCat(&cVar26, "_05", 16);
				func_128(&cVar26, -1);
				if (!unk_0xA84F80DD9F675CED())
				{
					if (Local_401.f_0 == 12 || Local_401.f_0 == 13)
					{
						fVar30 = 85f;
						iVar31 = 2;
					}
					Var32 = { unk_0xD0FFB162F40A139C((Local_401.f_29.f_29.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_401.f_29.f_29.f_2 + 90f)), 0f };
					unk_0x1232944746AEB20F(Local_401.f_29.f_29, Var32, fVar30, iVar31);
				}
			}
			else
			{
				if (unk_0xBAB691F99A2A7346(Local_401.f_110))
				{
					if (Local_401.f_29.f_69)
					{
						unk_0xACE4F15B3E7FBB6D("GtaMloRoom001");
					}
					func_179(1, 1, 1, 0);
					func_178(&(Local_401.f_29.f_29), &(Local_401.f_110), &(Local_401.f_111));
				}
				unk_0x2D78CBCC9150BF79();
				unk_0xFD1E0AEC770DAF2E(1);
				Local_401.f_4 = unk_0x09560C7DE2A384BD();
				Local_401.f_2 = 8;
			}
			break;
		
		case 8:
			if ((unk_0x09560C7DE2A384BD() - Local_401.f_4) < 7000 && !func_240(1000))
			{
				cVar26 = { Local_401.f_29.f_63 };
				StringConCat(&cVar26, "_06", 16);
				if (!unk_0x11A809BBE3889742())
				{
					func_128(&cVar26, 7000);
				}
			}
			else
			{
				unk_0xFD1E0AEC770DAF2E(1);
				Local_401.f_4 = unk_0x09560C7DE2A384BD();
				Local_401.f_2 = 9;
			}
			break;
		
		case 9:
			if ((unk_0x09560C7DE2A384BD() - Local_401.f_4) < 3500 && !func_240(1000))
			{
				cVar26 = { Local_401.f_29.f_63 };
				StringConCat(&cVar26, "_03", 16);
				if (unk_0xC8378A96673BCC40(Local_515.f_0))
				{
					if (Local_515.f_1)
					{
						if (!Local_515.f_3)
						{
							unk_0xC2E1777941B4536E(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
							Local_515.f_3 = 1;
						}
						unk_0x27BDF28219C810BA(Local_515.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xB067107D878E9585(Local_515.f_0, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_67(&cVar26);
						unk_0x8CB1A9AD2F4E2E1D();
						Local_515.f_1 = 1;
					}
				}
			}
			else if ((unk_0x09560C7DE2A384BD() - Local_401.f_4) < 4000 && !func_240(1000))
			{
				if (unk_0xC8378A96673BCC40(Local_515.f_0))
				{
					if (Local_515.f_2)
					{
						unk_0x27BDF28219C810BA(Local_515.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xB067107D878E9585(Local_515.f_0, "SHARD_ANIM_OUT");
						unk_0x26221D1D76579618(1);
						unk_0x50050D925C27B388(0.33f);
						unk_0xD3DF251F2DF3B257();
						Local_515.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_804)
				{
					unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
					if (unk_0xBAB691F99A2A7346(Local_401.f_110))
					{
						unk_0xC8CEF95C63B283EC(Local_401.f_110, 0);
						unk_0x27A62B1C26941E13(Local_401.f_110, 0);
					}
					if (unk_0xBAB691F99A2A7346(Local_401.f_111))
					{
						unk_0xC8CEF95C63B283EC(Local_401.f_111, 0);
						unk_0x27A62B1C26941E13(Local_401.f_111, 0);
					}
					unk_0x20D6E0EA145DF751(0f);
					unk_0x60365B850FB7354F(0f, 1065353216);
					unk_0x423D1EBE54B18555(unk_0xA16EC202D9D35357(), 1);
					unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), 0);
					iVar36 = unk_0xB49BA83A5C224F40();
					if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
					{
						unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
						unk_0x1823BFEDB37C7F59(unk_0x1788E93557766241(), 0);
						if ((unk_0x538DF9E5B1DF01EB(iVar36) && unk_0xECFECDAD51A6184F(iVar36, 0)) && unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iVar36, 0))
						{
							unk_0x6C43BF7625967266(iVar36, Local_401.f_29.f_44, 1, 1, 0, 1);
							unk_0x34639238667C4381(iVar36, Local_401.f_29.f_47);
							unk_0xAC894C93914464C2(iVar36);
						}
						else
						{
							unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), Local_401.f_29.f_44, 1, 1, 0, 1);
							unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), Local_401.f_29.f_47);
						}
					}
					if (unk_0x538DF9E5B1DF01EB(iLocal_977) && unk_0xECFECDAD51A6184F(iLocal_977, 0))
					{
						iVar37 = func_28(24);
						if (func_177(&Local_750, 24))
						{
							func_172(&Local_750, func_313());
							if (unk_0x538DF9E5B1DF01EB(iVar37))
							{
								unk_0x2F2948A2506AA404(&iVar37);
							}
						}
						if (Local_401.f_0 == 21)
						{
							unk_0x84710FE7666EBF7B(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
							unk_0x6C43BF7625967266(iLocal_977, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
							unk_0x34639238667C4381(iLocal_977, 154.4846f);
							func_170(iLocal_977, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_401.f_0 == 22)
						{
							unk_0x84710FE7666EBF7B(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
							unk_0x6C43BF7625967266(iLocal_977, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
							unk_0x34639238667C4381(iLocal_977, 319.6985f);
							func_170(iLocal_977, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_401.f_0 == 23)
						{
							unk_0x84710FE7666EBF7B(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
							unk_0x6C43BF7625967266(iLocal_977, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
							unk_0x34639238667C4381(iLocal_977, 270.8741f);
							func_170(iLocal_977, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						unk_0xAC894C93914464C2(iLocal_977);
					}
					if (unk_0x538DF9E5B1DF01EB(iVar36) && unk_0xECFECDAD51A6184F(iVar36, 0))
					{
						unk_0x423D1EBE54B18555(iVar36, 1);
						unk_0x3CC3106305C40A28(iVar36, 0);
						if (unk_0xD8233CB95CB48A7C(iVar36, 1))
						{
							unk_0x3A3C5A6572B3C611(&iVar36);
						}
					}
					iVar38 = 5000;
					iVar39 = unk_0x09560C7DE2A384BD();
					while (!unk_0xE0032FA93E122BA3() && (unk_0x09560C7DE2A384BD() - iVar39) < iVar38)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (unk_0xF7037F2CC07D58B0(Local_401.f_112))
					{
						unk_0xDB1DF8A68B9A5A9D(Local_401.f_112);
					}
					StringCopy(&Global_31720, "", 32);
					if ((Local_401.f_0 == 21 || Local_401.f_0 == 22) || Local_401.f_0 == 23)
					{
						func_191(47, 1);
						func_186(47, 1);
						Global_97439.f_18371.f_4248 = 1;
					}
					unk_0x099E9F2D6F93D420();
					unk_0x2D78CBCC9150BF79();
					unk_0x6853F2DD1CFD3CA2(1);
					unk_0xA0ED52A12ED3E5E5(1);
					func_179(0, 1, 1, 0);
					bLocal_804 = false;
					Global_24699 = 0;
				}
				if (unk_0xC8378A96673BCC40(Local_515.f_0))
				{
					unk_0x7559DFAB61B017F2(&Local_515);
				}
				func_213(iLocal_646, Local_515.f_4, Local_401.f_29.f_67);
				func_212(Local_401.f_0, 5, 1);
				func_199(Local_401.f_0);
				if (unk_0x5660C8AFDD9C1721(Global_67218.f_208[Local_401.f_0]))
				{
					unk_0xB6FB9702660D84F6(&(Global_67218.f_208[Local_401.f_0]));
				}
				iLocal_890 = Local_401.f_0;
				func_198();
				Local_401.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_643++;
			if (iLocal_643 >= 3)
			{
				if ((unk_0x09560C7DE2A384BD() - Local_401.f_4) < 4000)
				{
					cVar26 = { Local_401.f_29.f_63 };
					StringConCat(&cVar26, "_04", 16);
					func_197(&cVar26);
				}
				else
				{
					Local_401.f_2 = 99;
				}
			}
			break;
	}
}

void func_197(char[4] cParam0)
{
	unk_0x5B4A49EA799C667F(cParam0);
	unk_0x644558F3AB755120(0, 1, 1, -1);
}

int func_198()
{
	if (func_138(0))
	{
		return 0;
	}
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

void func_199(int iParam0)
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
	func_211(iVar0, 0);
	iVar2 = func_210(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_209(iVar0);
		if (func_207(iVar0, iVar1, 1))
		{
			func_200(iVar0);
			func_209(iVar0);
		}
	}
}

void func_200(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_206(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45162[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_45162[iVar0 /*203*/].f_10[(Global_45162[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_45162[iVar0 /*203*/].f_9 - 1);
	if (!Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_205(Global_35978[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
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
		func_201(1, Global_35978[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_35978[iVar1 /*12*/].f_3)
		{
			case 0:
				func_201(0, Global_35978[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_201(1, Global_35978[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_201(2, Global_35978[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45162[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_201(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0xEC35DAD55FA4EEF2())
	{
		return;
	}
	iVar0 = func_313();
	bVar1 = false;
	StringCopy(&cVar2, func_204(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0xA6CE1BB0BF7AE715("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0xA6CE1BB0BF7AE715("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0xA6CE1BB0BF7AE715("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0xA6CE1BB0BF7AE715(sParam3);
				if (!unk_0x06771AF7795B3ECF(iParam4))
				{
					unk_0x4498E0CBD76B2D72(iParam4);
				}
				if (!unk_0x06771AF7795B3ECF(iParam5))
				{
					unk_0x4498E0CBD76B2D72(iParam5);
				}
				if (!unk_0x06771AF7795B3ECF(iParam6))
				{
					unk_0x4498E0CBD76B2D72(iParam6);
				}
				if (!unk_0x06771AF7795B3ECF(iParam7))
				{
					unk_0x4498E0CBD76B2D72(iParam7);
				}
				if (!unk_0x06771AF7795B3ECF(iParam8))
				{
					unk_0x4498E0CBD76B2D72(iParam8);
				}
				if (!unk_0x06771AF7795B3ECF(iParam9))
				{
					unk_0x4498E0CBD76B2D72(iParam9);
				}
				if (!unk_0x06771AF7795B3ECF(iParam10))
				{
					unk_0x4498E0CBD76B2D72(iParam10);
				}
				if (!unk_0x06771AF7795B3ECF(iParam11))
				{
					unk_0x4498E0CBD76B2D72(iParam11);
				}
				if (!unk_0x06771AF7795B3ECF(iParam12))
				{
					unk_0x4498E0CBD76B2D72(iParam12);
				}
				if (!unk_0x06771AF7795B3ECF(iParam13))
				{
					unk_0x4498E0CBD76B2D72(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_202(unk_0xB2BB3F163B7B2B4C(&cVar2, &cVar2, 0, 2, unk_0x69C910B9EE514763(func_203(iParam1)), 0));
		}
		else
		{
			func_202(unk_0xB2BB3F163B7B2B4C("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0x69C910B9EE514763(func_203(iParam1)), 0));
		}
		switch (Global_14394)
		{
			case 0:
				StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
				Global_35970++;
				if (Global_35970 > 16)
				{
					Global_35970 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
				Global_35972++;
				if (Global_35972 > 16)
				{
					Global_35972 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
				Global_35971++;
				if (Global_35971 > 16)
				{
					Global_35971 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xC2E1777941B4536E(-1, "Notification", &Global_14383, 1);
	}
}

void func_202(var uParam0)
{
	Global_35973[Global_35977] = uParam0;
	Global_16751 = 1;
	Global_16750 = uParam0;
	Global_35977++;
	if (Global_35977 == 3)
	{
		Global_35977 = 0;
	}
}

char* func_203(int iParam0)
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

char* func_204(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[0 /*29*/].f_7));
		
		case 1:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[1 /*29*/].f_7));
		
		case 2:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[2 /*29*/].f_7));
		
		case 7:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[12 /*29*/].f_7));
		
		case 4:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[60 /*29*/].f_7));
		
		case 6:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[62 /*29*/].f_7));
		
		case 3:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[14 /*29*/].f_7));
		
		case 16:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[97 /*29*/].f_7));
		
		case 19:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[99 /*29*/].f_7));
		
		case 15:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[96 /*29*/].f_7));
		
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
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[15 /*29*/].f_7));
		
		case 26:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[30 /*29*/].f_7));
		
		case 27:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[17 /*29*/].f_7));
		
		case 29:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[20 /*29*/].f_7));
		
		case 30:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[43 /*29*/].f_7));
		
		case 31:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[44 /*29*/].f_7));
		
		case 32:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[19 /*29*/].f_7));
		
		case 34:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[40 /*29*/].f_7));
		
		case 36:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[22 /*29*/].f_7));
		
		case 38:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[64 /*29*/].f_7));
		
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
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[122 /*29*/].f_7));
		
		case 40:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[125 /*29*/].f_7));
		
		case 41:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[113 /*29*/].f_7));
		
		case 42:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[126 /*29*/].f_7));
		
		case 43:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[127 /*29*/].f_7));
		
		case 44:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[124 /*29*/].f_7));
		
		case 45:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[114 /*29*/].f_7));
		
		case 46:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[115 /*29*/].f_7));
		
		case 47:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[116 /*29*/].f_7));
		
		case 48:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[123 /*29*/].f_7));
		
		case 49:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[117 /*29*/].f_7));
		
		case 50:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[118 /*29*/].f_7));
		
		case 51:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[119 /*29*/].f_7));
		
		case 52:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[120 /*29*/].f_7));
		
		case 53:
			return unk_0x69C910B9EE514763(&(Global_97439.f_29795[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_205(int iParam0)
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

int func_206(int iParam0)
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
		if (Global_45162[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_45162[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_45162[iVar0 /*203*/].f_1;
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

int func_207(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_211(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_45162[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_45162[iVar0 /*203*/].f_2 = iParam0;
	Global_45162[iVar0 /*203*/].f_10[Global_45162[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_45162[iVar0 /*203*/].f_10[Global_45162[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_45162[iVar0 /*203*/].f_10[Global_45162[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_45162[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45162[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45162[iVar0 /*203*/].f_4[iVar1] == Global_35978[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45162[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45162[iVar0 /*203*/].f_4[Global_45162[iVar0 /*203*/].f_3] = Global_35978[iParam1 /*12*/].f_3;
			Global_45162[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45162[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45162[iVar0 /*203*/].f_4[iVar1] == Global_35978[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45162[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45162[iVar0 /*203*/].f_4[Global_45162[iVar0 /*203*/].f_3] = Global_35978[iParam1 /*12*/].f_2;
			Global_45162[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_45162[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_45162[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_208(Global_45162[iVar0 /*203*/].f_4[iVar1], Global_45162[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_208(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iVar19 = (Global_39279[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_39279[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_205(Global_35978[iVar20 /*12*/].f_1) };
		if (Global_35978[iVar20 /*12*/].f_2 == iParam0 && !Global_35978[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_35978[iVar20 /*12*/].f_2;
		iVar0 = Global_44800[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_44800[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35970 = (Global_35970 - 1);
						if (Global_35970 < 0)
						{
							Global_35970 = 0;
						}
						break;
					
					case 1:
						Global_35971 = (Global_35971 - 1);
						if (Global_35971 < 0)
						{
							Global_35971 = 0;
						}
						break;
					
					case 2:
						Global_35972 = (Global_35972 - 1);
						if (Global_35972 < 0)
						{
							Global_35972 = 0;
						}
						break;
					}
				}
		}
		Global_44800[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_44800[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_44800[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44800[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_44800[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44800[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_44800[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_44800[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35970 = (Global_35970 - 1);
						if (Global_35970 < 0)
						{
							Global_35970 = 0;
						}
						break;
					
					case 1:
						Global_35971 = (Global_35971 - 1);
						if (Global_35971 < 0)
						{
							Global_35971 = 0;
						}
						break;
					
					case 2:
						Global_35972 = (Global_35972 - 1);
						if (Global_35972 < 0)
						{
							Global_35972 = 0;
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
			if (Global_45162[iVar24 /*203*/].f_1 == iParam1 && Global_45162[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_44800[iParam0 /*120*/].f_18[iVar0] = Global_45162[iVar23 /*203*/].f_1;
		Global_44800[iParam0 /*120*/].f_1[iVar0] = (Global_45162[iVar23 /*203*/].f_9 - 1);
		Global_44800[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44800[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_44800[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44800[iParam0 /*120*/]++;
		iVar25 = Global_44800[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_45162[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_35978[iVar26 /*12*/].f_2;
		if (Global_45162[iVar23 /*203*/].f_10[(Global_45162[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_45162[iVar23 /*203*/].f_10[(Global_45162[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_205(Global_35978[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_44800[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_201(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_201(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_201(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_201(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_209(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0x889D01384B54BCE3(Global_97439.f_28183, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_206(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_45162[iVar0 /*203*/] = 0;
}

int func_210(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_46584 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45162[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_45162[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_45162[iVar1 /*203*/].f_1;
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
		if (Global_46585[iVar1 /*53*/].f_52 == 0)
		{
			Global_46585[iVar1 /*53*/].f_52 = iVar0;
			Global_46585[iVar1 /*53*/] = iParam0;
			Global_46585[iVar1 /*53*/].f_1 = iParam1;
			Global_46585[iVar1 /*53*/].f_2 = iParam2;
			Global_97439.f_24262.f_310++;
			if (Global_97439.f_24262.f_310 == 0)
			{
				Global_97439.f_24262.f_310 = 1;
			}
			Global_46585[iVar1 /*53*/].f_10 = 0;
			Global_46585[iVar1 /*53*/].f_3 = Global_97439.f_24262.f_310;
			Global_46585[iVar1 /*53*/].f_4 = 1;
			Global_46584++;
			return Global_46585[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_211(int iParam0, bool bParam1)
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
	
	iVar0 = func_206(iParam0);
	if (iVar0 > -1)
	{
		if (Global_45162[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45162[iVar1 /*203*/] == 0)
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
		if (Global_45162[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_45162[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_45162[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_45162[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_45162[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_45162[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_44800[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_44800[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_44800[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_44800[iVar6 /*120*/].f_18[iVar8] == Global_45162[iVar4 /*203*/].f_1)
							{
								if (Global_44800[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_35970 = (Global_35970 - 1);
											break;
										
										case 1:
											Global_35971 = (Global_35971 - 1);
											break;
										
										case 2:
											Global_35972 = (Global_35972 - 1);
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
	Global_45162[iVar4 /*203*/].f_2 = iParam0;
	Global_45162[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_45162[iVar4 /*203*/] = 1;
	}
	Global_97439.f_24262.f_310++;
	if (Global_97439.f_24262.f_310 == 0)
	{
		Global_97439.f_24262.f_310 = 1;
	}
	Global_45162[iVar4 /*203*/].f_1 = Global_97439.f_24262.f_310;
	Global_45162[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_212(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_18371[iParam0]), iParam1);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_18371[iParam0]), iParam1);
	}
}

int func_213(int iParam0, int iParam1, int iParam2)
{
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_214(Global_97439.f_29795[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_214(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_239();
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
					func_238(99, 1);
					func_237(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_237(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_237(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_222(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_221(5))
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
							func_237(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_237(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_237(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_221(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_237(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_237(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_237(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_237(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_237(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_237(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
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
					switch (iParam0)
					{
						case 0:
							func_237(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_237(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_237(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x9C2B33434756C8A2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_237(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_237(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_237(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_237(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_237(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_237(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_221(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_237(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_237(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_237(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_237(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_237(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_237(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_220(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_238(95, iParam3);
					break;
				
				case 1:
					func_238(97, iParam3);
					break;
				
				case 2:
					func_238(96, iParam3);
					break;
			}
			func_238(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_217(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_217(iVar1);
	}
	iVar5 = (Global_51933[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51933[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51933[iVar2] = 2147483647;
				}
				else
				{
					Global_51933[iVar2] = (Global_51933[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_237(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_237(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_237(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51933[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51933[iVar2];
			Global_51933[iVar2] = (Global_51933[iVar2] - iParam3);
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
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97439.f_23789.f_233[iVar2 /*69*/]++;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_216(iParam0);
	if (Global_34915 == 15)
	{
		func_215(0);
	}
	return 1;
}

void func_215(bool bParam0)
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
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51941[iVar0 /*3*/][0] = Global_97439.f_23789[iVar0];
		Global_51941.f_31[iVar0 /*3*/][0] = Global_97439.f_23789.f_11[iVar0];
		Global_51941.f_62[iVar0 /*3*/][0] = Global_97439.f_23789.f_22[iVar0];
		Global_51941.f_93[iVar0 /*3*/][0] = Global_97439.f_23789.f_33[iVar0];
		Global_51941.f_124[iVar0 /*3*/][0] = Global_97439.f_23789.f_44[iVar0];
		Global_51941.f_155[iVar0 /*3*/][0] = Global_97439.f_23789.f_55[iVar0];
		Global_51941.f_186[iVar0 /*3*/][0] = Global_97439.f_23789.f_66[iVar0];
		Global_51941.f_217[iVar0 /*3*/][0] = Global_97439.f_23789.f_77[iVar0];
		Global_51941.f_248[iVar0 /*3*/][0] = Global_97439.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51941[iVar0 /*3*/][1] = Global_97439.f_23789[iVar0];
			Global_51941.f_31[iVar0 /*3*/][1] = Global_97439.f_23789.f_11[iVar0];
			Global_51941.f_62[iVar0 /*3*/][1] = Global_97439.f_23789.f_22[iVar0];
			Global_51941.f_93[iVar0 /*3*/][1] = Global_97439.f_23789.f_33[iVar0];
			Global_51941.f_124[iVar0 /*3*/][1] = Global_97439.f_23789.f_44[iVar0];
			Global_51941.f_155[iVar0 /*3*/][1] = Global_97439.f_23789.f_55[iVar0];
			Global_51941.f_186[iVar0 /*3*/][1] = Global_97439.f_23789.f_66[iVar0];
			Global_51941.f_217[iVar0 /*3*/][1] = Global_97439.f_23789.f_77[iVar0];
			Global_51941.f_248[iVar0 /*3*/][1] = Global_97439.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_216(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51933[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x680350124CC21957(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x680350124CC21957(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x680350124CC21957(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_217(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0) || unk_0x889D01384B54BCE3(Global_2097152[func_219() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		unk_0x29DB79DD4D939B38(&(Global_2097152[func_219() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xA6CE1BB0BF7AE715("COUP_RED");
		unk_0x4498E0CBD76B2D72(func_218(iParam0));
		unk_0xB2BB3F163B7B2B4C(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_218(int iParam0)
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

int func_219()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_220(int iParam0)
{
	func_238(93, iParam0);
	func_238(29, iParam0);
	func_238(30, iParam0);
}

bool func_221(int iParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0);
	}
	return unk_0x889D01384B54BCE3(Global_2097152[func_219() /*8064*/].f_5756.f_10, iParam0);
}

int func_222(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xA7311613D452D616(27))
	{
		return 0;
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x3ED04C9A60CBD249(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x680350124CC21957(joaat("num_cash_spent"), iVar1, 1);
		func_236(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_223(27, 1);
	return 1;
}

int func_223(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_224(iParam0, iParam1);
}

int func_224(int iParam0, int iParam1)
{
	if (func_10(14) && !func_235(iParam0))
	{
		return 0;
	}
	if (unk_0xA7311613D452D616(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24692 != 0 && !Global_68325)
	{
		return 0;
	}
	if (func_234(&Global_2542838))
	{
		if (func_232(&Global_2542838, iParam0))
		{
			return 0;
		}
		if (func_225(&Global_2542838, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6100B0637DF2BBCA(iParam0))
		{
			return 0;
		}
		if (unk_0xA7311613D452D616(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_225(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_10(14) && !func_235(iParam1))
	{
		return 0;
	}
	if (func_232(uParam0, iParam1))
	{
		return 0;
	}
	if (func_231(uParam0) < 0f)
	{
		func_230(uParam0, 0);
	}
	func_228(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_226(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_226(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_10(14) && !func_235(iParam1))
	{
		return 0;
	}
	if (func_232(uParam0, iParam1))
	{
		return 0;
	}
	if (func_231(uParam0) < 0f)
	{
		func_230(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_227(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_227(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_228(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_229(uParam0, iVar0);
		iVar0++;
	}
	func_230(uParam0, (Global_2542837 - 0.5f));
}

void func_229(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_230(var uParam0, float fParam1)
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

float func_231(var uParam0)
{
	return uParam0->f_72;
}

bool func_232(var uParam0, int iParam1)
{
	return func_233(uParam0, iParam1) != -1;
}

int func_233(var uParam0, int iParam1)
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

bool func_234(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_235(int iParam0)
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

int func_236(int iParam0, int iParam1)
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
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
	}
	return 0;
}

void func_237(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3ED04C9A60CBD249(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(iParam0, iVar0, 1);
}

void func_238(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/])
	{
		unk_0x3ED04C9A60CBD249(Global_50501[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x680350124CC21957(Global_50501[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_239()
{
	int iVar0;
	
	if (unk_0x6B7032CA494CCEE4())
	{
		unk_0x3ED04C9A60CBD249(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51933[0] == iVar0)
		{
			Global_51933[0] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51933[1] == iVar0)
		{
			Global_51933[1] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51933[2] == iVar0)
		{
			Global_51933[2] = iVar0;
		}
	}
}

int func_240(int iParam0)
{
	if (unk_0x83B393DE31BAC8F0())
	{
		if ((unk_0x09560C7DE2A384BD() - Global_28) > iParam0)
		{
			Global_27 = unk_0x09560C7DE2A384BD();
		}
		Global_28 = unk_0x09560C7DE2A384BD();
		if ((unk_0x09560C7DE2A384BD() - Global_27) > iParam0)
		{
			if (func_241())
			{
				Global_27 = unk_0x09560C7DE2A384BD();
				return 1;
			}
		}
	}
	return 0;
}

int func_241()
{
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return 0;
	}
	if (unk_0x1453F50088A91E4E(0, 18) || unk_0x1453F50088A91E4E(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_242(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x3ED04C9A60CBD249(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x3ED04C9A60CBD249(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x3ED04C9A60CBD249(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_243(int iParam0)
{
	return func_244(iParam0, Global_34915);
}

int func_244(int iParam0, int iParam1)
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

void func_245(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_313();
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
	if (func_207(iVar0, iVar1, 1))
	{
		func_246(iVar0, sVar3);
		func_200(iVar0);
		func_209(iVar0);
	}
}

void func_246(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_206(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45162[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_45162[iVar0 /*203*/].f_10[(Global_45162[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_45162[iVar0 /*203*/].f_10[(Global_45162[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_45162[iVar0 /*203*/].f_10[(Global_45162[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_45162[iVar0 /*203*/].f_10[(Global_45162[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_252(iParam1) || !func_252(iParam0))
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
	iVar0 = func_251(iParam0);
	iVar1 = func_251(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_250(iParam0);
	iVar1 = func_250(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_249(iParam0);
	iVar1 = func_249(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_248(iParam0);
	iVar1 = func_248(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_249(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_250(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_251(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_252(int iParam0)
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
	iVar0 = func_248(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_249(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_250(iParam0);
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
	iVar5 = func_251(iParam0);
	if (iVar5 < 1 || iVar5 > func_33(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_253()
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
	if (unk_0x16CDA1894CFE0781(joaat("startup_positioning")) == 0)
	{
		if (Global_97439.f_18371.f_4796)
		{
			if (!unk_0x538DF9E5B1DF01EB(Global_68123))
			{
				func_172(&(Global_97439.f_18371.f_4742), Global_97439.f_18371.f_4798);
				Global_97439.f_18371.f_4796 = 0;
			}
			else if (!unk_0xECFECDAD51A6184F(Global_68123, 0) || func_26(Global_68123, Global_97439.f_18371.f_4798, 1))
			{
				Global_97439.f_18371.f_4796 = 0;
			}
			else
			{
				if ((unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0) == Global_68123) && func_270(unk_0xA16EC202D9D35357()) != Global_97439.f_18371.f_4798)
				{
					Global_97439.f_18371.f_4798 = func_270(unk_0xA16EC202D9D35357());
				}
				if (Global_68123 != iLocal_645)
				{
					sVar2 = unk_0xFD03B2968C4DD469(Global_68123, &uVar1);
					if (!unk_0x06771AF7795B3ECF(sVar2))
					{
						if (unk_0xB793F1A0B6CC4AE1(sVar2) == unk_0xB793F1A0B6CC4AE1("vehicle_gen_controller"))
						{
							Global_97439.f_18371.f_4796 = 0;
							iLocal_978 = Global_68123;
							if (Global_67218.f_139[24] == Global_68123 || (Global_68124 == Global_68123 && Global_68125 == 24))
							{
								func_269(458, 24, -1, 1);
							}
							else
							{
								func_269(458, 0, -1, 1);
							}
							Global_68123 = 0;
						}
					}
				}
				if (((Global_97439.f_18371.f_4798 != func_313() && Global_89583[Global_97439.f_18371.f_4798 /*74*/] == Global_97439.f_18371.f_4742.f_42) && unk_0x9BA82E09A986BA4B(&(Global_89583[Global_97439.f_18371.f_4798 /*74*/].f_27), &(Global_97439.f_18371.f_4742.f_1))) && !unk_0xB4B5BF5882A555F9())
				{
					func_91(&(Global_97439.f_18371.f_4742), &(Global_97439.f_18371.f_4808[Global_97439.f_18371.f_4798 /*54*/]));
					Global_97439.f_18371.f_4796 = 0;
					iLocal_978 = 0;
					func_269(458, 0, -1, 1);
					Global_68123 = 0;
				}
			}
		}
		else if ((unk_0x538DF9E5B1DF01EB(Global_68123) && unk_0xECFECDAD51A6184F(Global_68123, 0)) && !func_26(Global_68123, Global_97439.f_18371.f_4798, 1))
		{
			Global_97439.f_18371.f_4796 = 1;
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_978) && unk_0xECFECDAD51A6184F(iLocal_978, 0))
		{
			if (((!Global_97439.f_18371.f_4796 && iLocal_978 != Global_68123) && iLocal_978 != iLocal_979) && !unk_0xD8233CB95CB48A7C(iLocal_978, 1))
			{
				func_14(iLocal_978, 145);
				iLocal_978 = 0;
				func_269(458, 0, -1, 1);
			}
		}
		else if (iLocal_978 != 0)
		{
			iLocal_978 = 0;
			func_269(458, 0, -1, 1);
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_979) && unk_0xECFECDAD51A6184F(iLocal_979, 0))
		{
		}
		else if (iLocal_979 != 0)
		{
			iLocal_979 = 0;
		}
	}
	if (Global_68127.f_42 != 0 && Global_68124 == 0)
	{
		func_172(&Global_68127, Global_68181);
		Global_68127.f_42 = 0;
	}
	Var3 = { 433.6721f, -1006.538f, 25.96351f };
	Var6 = { 433.6578f, -1017.5f, 32.09895f };
	fVar9 = 11.25f;
	if (iLocal_641 > 0 && iLocal_641 < 99)
	{
		if (iLocal_641 != 3)
		{
			if (((((unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) || !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Var3, Var6, fVar9, 0, 1, 0)) || func_10(0)) || func_10(3)) || func_10(2)) || func_10(14))
			{
				iLocal_641 = 99;
			}
		}
	}
	if (func_268(iLocal_646))
	{
		if (!unk_0x5660C8AFDD9C1721(uLocal_807))
		{
			if (((func_10(15) || func_10(12)) && iLocal_641 != 3) && !unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
			{
				uLocal_807 = func_266(428.37f, -1013.5f, 27.93f, 0);
				unk_0x2025496D9184D312(uLocal_807, 225);
				unk_0xFDA1FE98ECD75505(uLocal_807, "IMPOUND_BLIPNAME");
				unk_0xABBBFFE76352EBB5(uLocal_807, true);
			}
		}
		else if ((!(func_10(15) || func_10(12)) || iLocal_641 == 3) || unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
		{
			unk_0xB6FB9702660D84F6(&uLocal_807);
		}
	}
	else if (unk_0x5660C8AFDD9C1721(uLocal_807))
	{
		unk_0xB6FB9702660D84F6(&uLocal_807);
	}
	switch (iLocal_641)
	{
		case 0:
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if ((Local_401.f_2 == 0 && (func_10(15) || func_10(12))) && !unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
				{
					if (func_268(iLocal_646))
					{
						if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Var3, Var6, fVar9, 0, 1, 0))
						{
							if (func_242(iLocal_646) >= 250)
							{
								iVar10 = 0;
								iVar11 = 0;
								while (iVar11 < 2)
								{
									if (func_168(iVar11, iLocal_646))
									{
										iVar10++;
									}
									iVar11++;
								}
								if (iVar10 > 1)
								{
									func_130(&iLocal_642, 3, "IMPOUND_TRIG2", 0, 0, 0);
								}
								else
								{
									func_130(&iLocal_642, 3, "IMPOUND_TRIG1", 0, 0, 0);
								}
								iLocal_641 = 1;
							}
							else
							{
								func_128("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && func_126(0, -1))
			{
				if (func_125(iLocal_642, 1))
				{
					func_48(&iLocal_642);
					unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
					func_265();
					iVar12 = 0;
					iVar13 = 0;
					while (iVar13 < 2)
					{
						if (func_168(iVar13, iLocal_646))
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
							if (func_168(iVar14, iLocal_646))
							{
								if (iVar14 == 0)
								{
									Var15 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									Var15 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_259(&iLocal_645, iVar14, Var15, 179.24f, 1))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								if (unk_0x538DF9E5B1DF01EB(iLocal_645))
								{
									if (iVar14 == 0)
									{
										func_258(18, 1, 0);
									}
									else
									{
										func_258(19, 1, 0);
									}
									if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
									{
										unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
									}
									func_213(iLocal_646, 117, 250);
									func_257(iVar14);
									func_14(iLocal_645, func_313());
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
			switch (func_313())
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
			func_265();
			if (!iLocal_631 || iLocal_632)
			{
				func_123(0);
				func_122(1, 1, 0, 0, 0);
				func_121(1, 2, 1, 1, 1);
				func_120("IMPOUND_TITLE");
				iLocal_637 = 0;
				iVar19 = -1;
				iVar21 = 0;
				iVar20 = 0;
				while (iVar20 < 2)
				{
					if (func_168(iVar20, iLocal_646))
					{
						func_109(iVar21, unk_0x9BB52B0F42245310(Global_97439.f_18371.f_4414[iVar18 /*109*/][iVar20 /*54*/].f_42), 0, 1, 0, 0);
						if (iVar19 == -1)
						{
							iVar19 = iVar21;
							iLocal_636 = iVar21;
						}
						unk_0xD0E2BFCE93AE3ABD(&iLocal_637, iVar21);
						iLocal_638[iVar21] = iVar20;
						func_109(iVar21, "IMPOUND_COST", 1, 1, 0, 0);
						func_256(250, 0);
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
				if (unk_0xF6BAF9F0C2863FFE())
				{
					if (unk_0x7F7F8EB2E78C69E9(2))
					{
						unk_0x4B404C739A9AFC7A(0, 1, 1);
						unk_0x4B404C739A9AFC7A(0, 2, 1);
						unk_0x7D98754083C1D605(0, 237, 1);
						unk_0x7D98754083C1D605(0, 238, 1);
						unk_0x7D98754083C1D605(0, 241, 1);
						unk_0x7D98754083C1D605(0, 242, 1);
						func_99(0, 0, 0, 1);
						func_98(0, -1);
						if (func_97())
						{
							if (Global_2541359 != iLocal_636)
							{
								unk_0xC2E1777941B4536E(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_636 = Global_2541359;
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
				if (unk_0x1453F50088A91E4E(2, 188) || unk_0x1453F50088A91E4E(2, 241))
				{
					if (!iLocal_633)
					{
						iLocal_634 = 1;
						unk_0xC2E1777941B4536E(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar22 = (iLocal_636 - 1);
						while (iVar22 >= 0)
						{
							if (unk_0x889D01384B54BCE3(iLocal_637, iVar22))
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
								if (unk_0x889D01384B54BCE3(iLocal_637, iVar22))
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
				else if (unk_0x1453F50088A91E4E(2, 187) || unk_0x1453F50088A91E4E(2, 242))
				{
					if (!iLocal_633)
					{
						iLocal_634 = 1;
						unk_0xC2E1777941B4536E(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar24 = iLocal_636 + 1;
						while (iVar24 <= 31)
						{
							if (unk_0x889D01384B54BCE3(iLocal_637, iVar24))
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
								if (unk_0x889D01384B54BCE3(iLocal_637, iVar24))
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
				else if (unk_0x51104159A21A8E40(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					unk_0xC2E1777941B4536E(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
						if (func_168(iLocal_638[iLocal_636], iLocal_646))
						{
							while (!func_259(&iLocal_645, iLocal_638[iLocal_636], Var26, 179.24f, 1))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							if (unk_0x538DF9E5B1DF01EB(iLocal_645))
							{
								if (iLocal_636 == 0)
								{
									func_258(18, 1, 0);
								}
								else
								{
									func_258(19, 1, 0);
								}
								if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
								{
									unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
								}
								func_213(iLocal_646, 117, 250);
								func_257(iLocal_638[iLocal_636]);
								func_14(iLocal_645, func_313());
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
				else if (unk_0x51104159A21A8E40(2, 202) || unk_0x51104159A21A8E40(2, 238))
				{
					unk_0xC2E1777941B4536E(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			unk_0x6C5CE54692FA7CB8();
			if (iLocal_634)
			{
				func_96("", 0, 0);
				func_95(-1);
				func_94(201, "ITEM_SELECT", -1);
				func_94(202, "ITEM_EXIT", -1);
				iLocal_633 = 0;
				iLocal_634 = 0;
			}
			if (func_126(0, -1))
			{
				func_53(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			break;
		
		case 3:
			if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), 431.4f, -997.33f, 24.76f, 1) > 20f && !func_255())
			{
				func_14(iLocal_645, func_313());
				iLocal_641 = 99;
			}
			else if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), 431.4f, -997.33f, 24.76f, 1) > 100f)
			{
				if (unk_0x538DF9E5B1DF01EB(iLocal_645))
				{
					if (!unk_0xE44A580B551C3645(iLocal_645))
					{
						if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_645, 0) && unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iLocal_645, 1), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), 1) > 100f)
						{
							if (!unk_0x98666858610065B8(iLocal_645))
							{
								func_254(iLocal_645, 1, 145);
								unk_0x2F2948A2506AA404(&iLocal_645);
								unk_0x597CB55BA0825820(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
								iLocal_641 = 99;
							}
						}
						else if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_645, 0))
						{
							unk_0x597CB55BA0825820(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
							func_14(iLocal_645, func_313());
							iLocal_641 = 99;
						}
					}
					else
					{
						unk_0x597CB55BA0825820(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
						iLocal_641 = 99;
					}
				}
				else
				{
					unk_0x597CB55BA0825820(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
					iLocal_641 = 99;
				}
			}
			break;
		
		case 99:
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
			}
			func_48(&iLocal_642);
			iVar29 = 0;
			while (iVar29 < 2)
			{
				iLocal_638[iVar29] = -1;
				iVar29++;
			}
			func_258(18, 0, 0);
			func_258(19, 0, 0);
			if (unk_0x538DF9E5B1DF01EB(iLocal_645))
			{
				unk_0x3A3C5A6572B3C611(&iLocal_645);
			}
			iLocal_641 = 0;
			break;
	}
	if (iLocal_641 == 0)
	{
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, 1, 0))
		{
			if (!iLocal_644)
			{
				func_258(18, 1, 0);
				iLocal_644 = 1;
			}
		}
		else if (iLocal_644 && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, 1, 0))
		{
			func_258(18, 0, 0);
			iLocal_644 = 0;
		}
	}
}

int func_254(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0xFD03B2968C4DD469(iParam0, &uVar0);
		if (!unk_0x06771AF7795B3ECF(sVar1))
		{
			if (unk_0xB793F1A0B6CC4AE1(sVar1) == unk_0xB793F1A0B6CC4AE1("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_14(iParam0, iParam2);
	return 1;
}

int func_255()
{
	if (unk_0x781A4BEC4DC07C26(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x781A4BEC4DC07C26(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x781A4BEC4DC07C26(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x781A4BEC4DC07C26(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_256(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17238.f_4496 >= 250)
	{
		return;
	}
	if (Global_17238.f_4998 >= 4)
	{
		return;
	}
	if (Global_17238.f_4999 != 1)
	{
		return;
	}
	if (Global_17238.f_4998 >= Global_17238.f_4996)
	{
		return;
	}
	Global_17238.f_3340[Global_17238.f_4496] = iParam0;
	Global_17238.f_4496++;
	Global_17238.f_1576[Global_17238.f_4997 /*5*/][Global_17238.f_4998] = 2;
	Global_17238.f_4998++;
	if (Global_17238.f_4998 >= Global_17238.f_4996)
	{
		fVar0 = func_105();
		if (Global_17238.f_4352[Global_17238.f_4493] && Global_17238.f_4998 == Global_17238.f_4996)
		{
			func_84(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17238.f_4345[(Global_17238.f_4493 - 1)])
		{
			Global_17238.f_4345[(Global_17238.f_4493 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17238.f_4998 >= Global_17238.f_4996)
		{
			fVar3 = func_104();
			if (fVar3 > Global_17238.f_5000[Global_17238.f_4492])
			{
				Global_17238.f_5000[Global_17238.f_4492] = fVar3;
			}
		}
	}
}

void func_257(int iParam0)
{
	int iVar0;
	
	switch (func_313())
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
	if (iParam0 < 0 || iParam0 >= func_169(&(Global_97439.f_18371.f_4414[iVar0 /*109*/])))
	{
		return;
	}
	Global_97439.f_18371.f_4414[iVar0 /*109*/][iParam0 /*54*/].f_42 = 0;
}

void func_258(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_34038[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (unk_0x889D01384B54BCE3(Global_34038[iParam0 /*31*/].f_1, 1))
			{
				Global_34038[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_34038[iParam0 /*31*/].f_22 = 1f;
			}
			unk_0x595321A6DD15AAA1(Global_34038[iParam0 /*31*/], Global_34038[iParam0 /*31*/].f_22, 0, 0);
			unk_0x3A73A1FCDAD1D6BE(Global_34038[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_34038[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_34038[iParam0 /*31*/].f_22 = 0f;
			unk_0x595321A6DD15AAA1(Global_34038[iParam0 /*31*/], Global_34038[iParam0 /*31*/].f_22, 0, 0);
			unk_0x3A73A1FCDAD1D6BE(Global_34038[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

int func_259(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_168(iParam1, func_313()) || unk_0x538DF9E5B1DF01EB(*iParam0))
	{
		return 0;
	}
	switch (func_313())
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
	unk_0x939DA7EBCC6588FF(Global_97439.f_18371.f_4414[iVar0 /*109*/][iParam1 /*54*/].f_42);
	if (unk_0x5494F37F35C1D7D7(Global_97439.f_18371.f_4414[iVar0 /*109*/][iParam1 /*54*/].f_42))
	{
		*iParam0 = unk_0x9BB6F54E415071A1(Global_97439.f_18371.f_4414[iVar0 /*109*/][iParam1 /*54*/].f_42, Param2, fParam5, 0, 0);
		func_260(*iParam0, &(Global_97439.f_18371.f_4414[iVar0 /*109*/][iParam1 /*54*/]), 0, 1);
		unk_0xAC894C93914464C2(*iParam0);
		unk_0x3984DED2762CADC3(*iParam0, 0);
		unk_0xE6E4CD7E9A3DA71E(*iParam0, 1);
		if (bParam6)
		{
			unk_0xEA054561294AEC10(Global_97439.f_18371.f_4414[iVar0 /*109*/][iParam1 /*54*/].f_42);
		}
		return 1;
	}
	return 0;
}

void func_260(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		if (unk_0xB793F1A0B6CC4AE1(&(uParam1->f_1)) != 0)
		{
			unk_0x3F5ED6FBAE13F4E5(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x858A61D4AC50886E())
		{
			unk_0x7B4ABEFECFB41BF0(iParam0, *uParam1);
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (unk_0x889D01384B54BCE3(uParam1->f_53, 13))
		{
			unk_0xA9A63A0DDA4F893E(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0x9134A07DDBC346FD(iParam0);
		}
		if (unk_0x889D01384B54BCE3(uParam1->f_53, 12))
		{
			unk_0xDE0AAE7D4266A94C(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0x04E74BD3A65CA82D(iParam0);
		}
		unk_0xEEE37CF92B9966DA(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x780A5DADA769490D(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x889D01384B54BCE3(uParam1->f_53, 15) || func_264(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_263())
		{
			uParam1->f_38 = 0;
			uParam1->f_39 = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_38 = 255;
			uParam1->f_39 = 255;
			uParam1->f_40 = 255;
		}
		unk_0xF041FAE99959B5AB(iParam0, uParam1->f_38, uParam1->f_39, uParam1->f_40);
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			unk_0xA9AE442E508E12E3(iParam0, 0);
		}
		else
		{
			unk_0xA9AE442E508E12E3(iParam0, 0);
			unk_0xA9AE442E508E12E3(iParam0, uParam1->f_41);
		}
		unk_0xB4226393A1696ACE(iParam0, !unk_0x889D01384B54BCE3(uParam1->f_53, 9));
		if (bParam2)
		{
			unk_0x542B8BF5C21F2470(iParam0, uParam1->f_46);
		}
		unk_0x5AE459C3CC1CC113(iParam0, uParam1->f_50, uParam1->f_51, uParam1->f_52);
		unk_0xC1E623D5EDF6EECE(iParam0, 2, unk_0x889D01384B54BCE3(uParam1->f_53, 28));
		unk_0xC1E623D5EDF6EECE(iParam0, 3, unk_0x889D01384B54BCE3(uParam1->f_53, 29));
		unk_0xC1E623D5EDF6EECE(iParam0, 0, unk_0x889D01384B54BCE3(uParam1->f_53, 30));
		unk_0xC1E623D5EDF6EECE(iParam0, 1, unk_0x889D01384B54BCE3(uParam1->f_53, 31));
		unk_0x4852ECC2C24A1A6C(iParam0, unk_0x889D01384B54BCE3(uParam1->f_53, 10));
		if (unk_0x02733F26A0867544(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			unk_0x4DD872D780AF5EF7(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!unk_0x271F7EEEF6BC4943(unk_0xA609E58449080951(iParam0)))
			{
				if (unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						unk_0x3C2E3554D673CD03(iParam0, uParam1->f_45);
					}
				}
				else
				{
					unk_0x3C2E3554D673CD03(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0xE19742BCB95B6E28(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				unk_0x8868EF5119692D77(iParam0, 1);
			}
			else
			{
				unk_0xE9E2E2606CB0F65A(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_261(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!unk_0x38B61EB14C5FBA9E(uParam1->f_42) && !unk_0xD18BE100522E5F15(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (unk_0x889D01384B54BCE3(uParam1->f_53, func_16(iVar0 + 1)))
				{
					if (!unk_0x5624226E4F913C53(iParam0, iVar0 + 1))
					{
						unk_0xA4FABA09D10C713D(iParam0, iVar0 + 1, false);
					}
				}
				else if (unk_0x5624226E4F913C53(iParam0, iVar0 + 1))
				{
					unk_0xA4FABA09D10C713D(iParam0, iVar0 + 1, true);
				}
				iVar0++;
			}
		}
		if (unk_0xEE41D6C2DA208994(uParam1->f_42))
		{
			if (!unk_0x889D01384B54BCE3(uParam1->f_53, 23))
			{
				if (unk_0x889D01384B54BCE3(uParam1->f_53, 22))
				{
					unk_0x4083C1A376E65B51(iParam0, 2);
				}
				else
				{
					unk_0x4083C1A376E65B51(iParam0, 3);
				}
			}
			else
			{
				unk_0x4083C1A376E65B51(iParam0, 4);
			}
		}
		if (unk_0x889D01384B54BCE3(uParam1->f_53, 27))
		{
			unk_0x4F007328F719079F(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x4F007328F719079F(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_261(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xECFECDAD51A6184F(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x1496C675F4DE04ED(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x975833792D47DC73(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xE78BBCD9C6B5C963(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x9602B91EC545B1EA(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xE4E979C6DBF3CBEB(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x85AB5576B5457AED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x85AB5576B5457AED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x85AB5576B5457AED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_262(*iParam0))
	{
		unk_0xF6F04B5324C9DA32(*iParam0, 1);
		unk_0xE6E4CD7E9A3DA71E(*iParam0, 1);
	}
	return 1;
}

int func_262(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x538DF9E5B1DF01EB(uParam0) && unk_0xECFECDAD51A6184F(iParam0, 0)) && unk_0x1496C675F4DE04ED(iParam0) > 0)
	{
		unk_0x975833792D47DC73(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x9602B91EC545B1EA(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x258875C41DB339AB(iParam0, iVar1, unk_0x9602B91EC545B1EA(iParam0, iVar1)), 16);
				iVar2 = unk_0xB793F1A0B6CC4AE1(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0xB793F1A0B6CC4AE1("MNU_CAGE") || iVar2 == unk_0xB793F1A0B6CC4AE1("SABRE_CAG"))
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

bool func_263()
{
	return unk_0xD5883629B43B6F20(joaat("mpindependence"));
}

int func_264(int iParam0)
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (unk_0xECFECDAD51A6184F(iParam0, 0))
		{
			if (unk_0x67BE6A47B59A2390("MPBitset", 3))
			{
				if (unk_0x53D28141CF743B83(iParam0, "MPBitset"))
				{
					iVar0 = unk_0xD0997DAAAB203234(iParam0, "MPBitset");
				}
				return unk_0x889D01384B54BCE3(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_265()
{
	unk_0x227ACB0C6A599C94(0);
	unk_0x7D98754083C1D605(0, 188, 1);
	unk_0x7D98754083C1D605(0, 187, 1);
	unk_0x7D98754083C1D605(0, 201, 1);
	unk_0x7D98754083C1D605(0, 202, 1);
	unk_0x7D98754083C1D605(0, 1, 1);
	unk_0x7D98754083C1D605(0, 2, 1);
	unk_0x7D98754083C1D605(0, 239, 1);
	unk_0x7D98754083C1D605(0, 240, 1);
}

var func_266(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x64F646E6A974BF18(Param0);
	unk_0xBE97A5A41C1F5C4C(uVar0, func_267(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
	unk_0xF1D09F0F8B016765(uVar0, iParam3);
	return uVar0;
}

float func_267(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_268(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_168(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_269(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0xB703F03BEB83FB19((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xE532D20CD2CCA6FE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB703F03BEB83FB19((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xE532D20CD2CCA6FE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB703F03BEB83FB19((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xE532D20CD2CCA6FE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB703F03BEB83FB19((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xE532D20CD2CCA6FE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x0BF58F02EFE757CE((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xE532D20CD2CCA6FE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x0BF58F02EFE757CE((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xE532D20CD2CCA6FE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x397AC815D1FA7574((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xE532D20CD2CCA6FE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x397AC815D1FA7574((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xE532D20CD2CCA6FE((iParam0 - 4143)) * 8) * 8;
	}
	uVar2 = unk_0x969302BB0EC68591(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_270(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_271(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_271(int iParam0)
{
	if (func_8(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_272()
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_391)
			{
				unk_0x939DA7EBCC6588FF(joaat("v_ilev_uvline"));
				iLocal_390 = 1;
				if (unk_0x5494F37F35C1D7D7(joaat("v_ilev_uvline")))
				{
					if (func_273(8))
					{
						uLocal_392[4] = unk_0x8AC4394F3C9173EE(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 1, 1, 0);
						unk_0x6C43BF7625967266(uLocal_392[4], 471.48f, fVar0, 30.33f, 1, 0, 0, 1);
						unk_0x0BBAD8A322CB595E(uLocal_392[4], 0f, 0f, 116.9f, 2, 1);
						uLocal_392[1] = unk_0x8AC4394F3C9173EE(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 1, 1, 0);
						unk_0x6C43BF7625967266(uLocal_392[1], 471.48f, fVar0, 30.15f, 1, 0, 0, 1);
						unk_0x0BBAD8A322CB595E(uLocal_392[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_273(9))
					{
						uLocal_392[5] = unk_0x8AC4394F3C9173EE(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 1, 1, 0);
						unk_0x6C43BF7625967266(uLocal_392[5], 471.48f, fVar0, 29.98f, 1, 0, 0, 1);
						unk_0x0BBAD8A322CB595E(uLocal_392[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_273(10))
					{
						uLocal_392[3] = unk_0x8AC4394F3C9173EE(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, 1, 1, 0);
						unk_0x6C43BF7625967266(uLocal_392[3], 471.48f, fVar0, 29.82f, 1, 0, 0, 1);
						unk_0x0BBAD8A322CB595E(uLocal_392[3], 0f, 0f, 116.9f, 2, 1);
					}
					uVar1 = unk_0x7B6124E1230469E9(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (unk_0x538DF9E5B1DF01EB(uLocal_392[iVar2]))
						{
							unk_0x423D1EBE54B18555(uLocal_392[iVar2], 1);
							unk_0x37A3926529CA6459(uLocal_392[iVar2], 1);
							unk_0xDB49D536A87723F7(uLocal_392[iVar2], uVar1);
						}
						iVar2++;
					}
					unk_0xEA054561294AEC10(joaat("v_ilev_uvline"));
					iLocal_391 = 1;
				}
			}
		}
		else
		{
			if (iLocal_390)
			{
				unk_0xEA054561294AEC10(joaat("v_ilev_uvline"));
				iLocal_390 = 0;
			}
			if (iLocal_391)
			{
				func_316();
				iLocal_391 = 0;
			}
		}
	}
}

int func_273(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97439.f_7341.f_328[iParam0 /*6*/];
}

void func_274()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_67218.f_553)
	{
		if (!iLocal_399)
		{
			Global_67218.f_554 = 0;
			iLocal_399 = 1;
		}
		else if (Global_67218.f_554 >= 68)
		{
			Global_67218.f_553 = 0;
			iLocal_399 = 0;
		}
	}
	else
	{
		iLocal_399 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_816)
	{
		iVar1 = iLocal_817[iVar0];
		if (func_40(&Local_648, iVar1))
		{
			func_312(&Local_669, iVar1);
			if ((Local_669.f_69 && Local_401.f_3 == 0) || iVar1 == 14)
			{
				uLocal_891[iVar1] = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Local_669.f_55, 0);
			}
			else
			{
				uLocal_891[iVar1] = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Local_648, 0);
			}
			if (func_311())
			{
				func_310(iVar1);
				func_308(iVar1);
				func_307(iVar1);
				func_306(iVar1);
				func_304(iVar1);
				func_303(iVar1);
				func_302(iVar1);
				func_276(iVar1);
				if (unk_0x889D01384B54BCE3(uLocal_47[iVar1], 2))
				{
					if (Global_67218.f_553)
					{
						iLocal_399 = 0;
					}
					func_317(iVar1);
				}
			}
			else
			{
				func_275(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_816;
	iLocal_816 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_886)
	{
		iLocal_886[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0x889D01384B54BCE3(uLocal_47[iLocal_817[iVar0]], 2))
		{
			func_317(iLocal_817[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_890 != -1)
	{
		func_317(iLocal_890);
		iLocal_890 = -1;
	}
	iLocal_46++;
	if (iLocal_46 >= 68)
	{
		iLocal_46 = 0;
	}
	func_317(iLocal_46);
	if (iLocal_964)
	{
		func_317(21);
		func_317(22);
		func_317(23);
		iLocal_964 = 0;
		bLocal_965 = true;
	}
	else if (bLocal_965)
	{
		bLocal_965 = false;
	}
	if (Global_67218.f_553)
	{
		Global_67218.f_554++;
	}
}

void func_275(int iParam0)
{
	if (iLocal_116[iParam0] != 0)
	{
		unk_0xEA054561294AEC10(iLocal_116[iParam0]);
		iLocal_116[iParam0] = 0;
	}
}

void func_276(int iParam0)
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
	struct<36> Var11;
	int iVar65;
	bool bVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	struct<3> Var70;
	struct<3> Var76;
	int iVar82;
	
	fVar0 = 210f;
	fVar1 = 200f;
	if (!unk_0x889D01384B54BCE3(uLocal_47[iParam0], 2))
	{
		func_275(iParam0);
	}
	unk_0x29DB79DD4D939B38(&(uLocal_47[iParam0]), 2);
	if (unk_0x889D01384B54BCE3(uLocal_47[iParam0], 1))
	{
		fVar2 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Local_185[iParam0 /*3*/], 1);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (unk_0x889D01384B54BCE3(Local_648.f_9, 23))
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
	else if (unk_0x889D01384B54BCE3(Local_648.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((unk_0x889D01384B54BCE3(Local_648.f_9, 19) || unk_0x889D01384B54BCE3(Local_648.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (unk_0x889D01384B54BCE3(Local_648.f_9, 25) && (((iLocal_646 == 0 && Local_401.f_0 == 21) || (iLocal_646 == 0 && Local_401.f_0 == 22)) || (iLocal_646 == 0 && Local_401.f_0 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (unk_0x538DF9E5B1DF01EB(Global_67218.f_139[iParam0]))
	{
		if (unk_0xECFECDAD51A6184F(Global_67218.f_139[iParam0], 0))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (iParam0 == 24)
				{
					uVar3 = unk_0xD8A521688BDBE867(Global_67218.f_139[iParam0], -1);
					if (!unk_0x538DF9E5B1DF01EB(uVar3))
					{
						iVar3 = unk_0x728F548A96B6E588(Global_67218.f_139[iParam0], -1);
					}
					iVar4 = func_270(iVar3);
					if (iVar4 != Global_97439.f_18371.f_4799)
					{
						if (func_8(iVar4))
						{
							func_301("Updating last character to use vehicle gen", iVar4);
							Global_97439.f_18371.f_4799 = iVar4;
						}
					}
				}
				if (!unk_0xD8233CB95CB48A7C(Global_67218.f_139[iParam0], 1))
				{
					func_300("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_42(Global_67218.f_139[iParam0])) && !func_41(Global_67218.f_139[iParam0])) && unk_0xA609E58449080951(Global_67218.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xBE2BFEEF84137DF0(Global_67218.f_139[iParam0], true);
					}
					Global_67218.f_139[iParam0] = 0;
					Global_67218[iParam0] = 1;
					func_299(iParam0);
					return;
				}
				if (((unk_0x889D01384B54BCE3(uLocal_47[iParam0], 0) && !unk_0x889D01384B54BCE3(Local_648.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_300("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_42(Global_67218.f_139[iParam0])) && !func_41(Global_67218.f_139[iParam0])) && unk_0xA609E58449080951(Global_67218.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xBE2BFEEF84137DF0(Global_67218.f_139[iParam0], true);
					}
					unk_0x3A3C5A6572B3C611(&(Global_67218.f_139[iParam0]));
					Global_67218.f_139[iParam0] = 0;
					Global_67218[iParam0] = 1;
					func_299(iParam0);
					return;
				}
				if ((!unk_0x889D01384B54BCE3(uLocal_47[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (unk_0xBF8ADDCADFC4691E(Global_67218.f_139[iParam0], unk_0xA16EC202D9D35357(), 1))
					{
						func_300("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_42(Global_67218.f_139[iParam0])) && !func_41(Global_67218.f_139[iParam0])) && unk_0xA609E58449080951(Global_67218.f_139[iParam0]) != joaat("monster"))
						{
							unk_0xBE2BFEEF84137DF0(Global_67218.f_139[iParam0], true);
						}
						unk_0x3A3C5A6572B3C611(&(Global_67218.f_139[iParam0]));
						Global_67218.f_139[iParam0] = 0;
						Global_67218[iParam0] = 1;
						func_299(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((unk_0x889D01384B54BCE3(uLocal_47[iParam0], 1) && unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(Global_67218.f_139[iParam0], 1), Local_185[iParam0 /*3*/], 1) > fVar5) || (!unk_0x889D01384B54BCE3(uLocal_47[iParam0], 1) && unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(Global_67218.f_139[iParam0], 1), Local_648, 1) > fVar5))
				{
					func_300("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_42(Global_67218.f_139[iParam0])) && !func_41(Global_67218.f_139[iParam0])) && unk_0xA609E58449080951(Global_67218.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xBE2BFEEF84137DF0(Global_67218.f_139[iParam0], true);
					}
					unk_0x3A3C5A6572B3C611(&(Global_67218.f_139[iParam0]));
					Global_67218.f_139[iParam0] = 0;
					Global_67218[iParam0] = 1;
					func_299(iParam0);
					return;
				}
				if (!func_46(iParam0, 0))
				{
					func_300("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_42(Global_67218.f_139[iParam0])) && !func_41(Global_67218.f_139[iParam0])) && unk_0xA609E58449080951(Global_67218.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xBE2BFEEF84137DF0(Global_67218.f_139[iParam0], true);
					}
					unk_0x3A3C5A6572B3C611(&(Global_67218.f_139[iParam0]));
					Global_67218.f_139[iParam0] = 0;
					Global_67218[iParam0] = 1;
					func_299(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_26(Global_67218.f_139[iParam0], iLocal_646, 1) && !func_42(Global_67218.f_139[iParam0])) && !func_41(Global_67218.f_139[iParam0]))
					{
						func_300("No longer needed: Mission vehicle gen moved to players garage");
						if (unk_0xA609E58449080951(Global_67218.f_139[iParam0]) != joaat("monster"))
						{
							unk_0xBE2BFEEF84137DF0(Global_67218.f_139[iParam0], true);
						}
						Global_67218.f_139[iParam0] = 0;
						Global_67218[iParam0] = 1;
						func_299(iParam0);
						return;
					}
				}
				if (uLocal_891[iParam0] > fVar0 && (!unk_0x889D01384B54BCE3(uLocal_47[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_29();
						iVar7 = Global_97439.f_18371.f_4249;
						func_297(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_247(iVar6, iVar7))
						{
							if ((!func_42(Global_67218.f_139[iParam0]) && !func_41(Global_67218.f_139[iParam0])) && unk_0xA609E58449080951(Global_67218.f_139[iParam0]) != joaat("monster"))
							{
								unk_0xBE2BFEEF84137DF0(Global_67218.f_139[iParam0], true);
							}
							func_14(Global_67218.f_139[iParam0], Global_97439.f_18371.f_4799);
							Global_67218[iParam0] = 1;
							func_299(iParam0);
						}
						else if (func_19(Global_67218.f_139[iParam0]))
						{
							func_15(Global_67218.f_139[iParam0], &Global_2436442);
							Global_2436441 = Global_97439.f_18371.f_4799;
							iLocal_979 = Global_67218.f_139[iParam0];
						}
					}
					func_300("No longer needed: Player out for range");
					unk_0x3A3C5A6572B3C611(&(Global_67218.f_139[iParam0]));
					unk_0x84710FE7666EBF7B(Local_648, 3f, 0, 0, 0, 0);
					unk_0x597CB55BA0825820(Local_648, 3f, 0, 0, 0, 0, 0);
					Global_67218.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
					{
						Global_67218.f_584 = { Local_648 };
						Global_67218.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (unk_0x889D01384B54BCE3(Local_648.f_9, 30))
				{
					if (!unk_0x889D01384B54BCE3(Local_648.f_9, 31))
					{
						if (!unk_0xC406F7EDB827A6CF(Global_67218.f_139[iParam0]) && !unk_0x5A6F774C8E17AA21(Global_67218.f_139[iParam0]))
						{
							Var8 = { unk_0xBF8499F46AD9093A(Global_67218.f_139[iParam0], 1) };
							if (Var8.f_2 >= func_296(iParam0))
							{
								unk_0xD26ED8EED273D81D(Global_67218.f_139[iParam0], 1);
								unk_0xD0E2BFCE93AE3ABD(&(Local_648.f_9), 31);
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
		Global_67218.f_139[iParam0] = 0;
	}
	if (unk_0x538DF9E5B1DF01EB(Global_67218.f_139[iParam0]))
	{
		func_300("No longer needed: Vehicle not driveable");
		unk_0x3A3C5A6572B3C611(&(Global_67218.f_139[iParam0]));
		Global_67218.f_139[iParam0] = 0;
		Global_67218[iParam0] = 1;
		func_299(iParam0);
		return;
	}
	if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		return;
	}
	if (Global_68125 == iParam0)
	{
		func_300("Processing a vehgen vehicle handover request.");
		if (unk_0x538DF9E5B1DF01EB(Global_68124) && unk_0xECFECDAD51A6184F(Global_68124, 0))
		{
			if (unk_0x538DF9E5B1DF01EB(Global_67218.f_139[iParam0]) && unk_0xECFECDAD51A6184F(Global_67218.f_139[iParam0], 0))
			{
				if (Global_67218.f_139[iParam0] == Global_68124)
				{
					func_300("Vehicle to be handed over is the same vehicle.");
					Global_68125 = -1;
					Global_68124 = 0;
					return;
				}
				else
				{
					func_300("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_42(Global_67218.f_139[iParam0])) && !func_41(Global_67218.f_139[iParam0])) && unk_0xA609E58449080951(Global_67218.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xBE2BFEEF84137DF0(Global_67218.f_139[iParam0], true);
					}
					unk_0x3A3C5A6572B3C611(&(Global_67218.f_139[iParam0]));
					Global_67218.f_139[iParam0] = 0;
				}
			}
			Global_67218.f_139[iParam0] = Global_68124;
			Global_67218[iParam0] = 1;
			unk_0x29DB79DD4D939B38(&(uLocal_47[iParam0]), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uLocal_47[iParam0]), 1);
			unk_0x29DB79DD4D939B38(&(uLocal_47[iParam0]), 3);
			Local_185[iParam0 /*3*/] = { unk_0xBF8499F46AD9093A(Global_68124, 1) };
			Global_68125 = -1;
			if (unk_0x889D01384B54BCE3(Local_648.f_9, 10))
			{
				Var11.f_9 = 25;
				Var11.f_35 = 2;
				func_15(Global_68124, &Var11);
				if (Global_68126)
				{
					func_90(iParam0, &Var11, unk_0xBF8499F46AD9093A(Global_68124, 1), unk_0xD1613577C809E98B(Global_68124), func_25(Global_68124));
				}
				else
				{
					func_90(iParam0, &Var11, Global_97439.f_18371.f_1312[Local_648.f_14 /*3*/], Global_97439.f_18371.f_1382[Local_648.f_14], func_25(Global_68124));
				}
				Global_67218.f_139[iParam0] = Global_68124;
				Global_67218.f_484[iParam0] = Global_67218.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar65 = func_313();
				if (func_8(iVar65))
				{
					func_300("Players stored switch vehicle cleared for prep getaway.");
					Global_89810[iVar65] = 0;
				}
			}
			unk_0x7B9576B4E099FB1F(Global_67218.f_139[iParam0], 1, 1);
			if (iParam0 == 24)
			{
				unk_0xBE2BFEEF84137DF0(Global_67218.f_139[iParam0], false);
			}
			Global_68124 = 0;
			if (Global_2436442.f_42 != 0)
			{
				func_172(&Global_2436442, Global_2436441);
				Global_2436442.f_42 = 0;
			}
			return;
		}
		if (Global_2436442.f_42 != 0)
		{
			func_172(&Global_2436442, Global_2436441);
			Global_2436442.f_42 = 0;
		}
		func_300("Vehicle to be handed over doesn't exist.");
		Global_68125 = -1;
		Global_68124 = 0;
	}
	if (Global_67218[iParam0])
	{
		if (uLocal_891[iParam0] >= fVar0)
		{
			Global_67218[iParam0] = 0;
			func_300("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
		{
			Global_67218.f_584 = { 0f, 0f, 0f };
			Global_67218.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar66 = false;
	if (uLocal_891[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_97439.f_18371.f_1406[Local_648.f_14] != 0) && Global_97439.f_18371.f_1406[Local_648.f_14] > 3) && Local_648.f_4 != 0) && func_46(iParam0, 0)) && func_21(Local_648.f_4))
		{
			iVar67 = func_29();
			iVar68 = Global_97439.f_18371.f_4249;
			func_297(&iVar68, 0, 0, 17, 0, 0, 0);
			if (func_247(iVar67, iVar68))
			{
				func_172(&(Global_97439.f_18371.f_69[Local_648.f_14 /*54*/]), Global_97439.f_18371.f_4799);
				func_299(iParam0);
				Global_67218[iParam0] = 1;
				func_300("Cannot be created: Vehicle ready for impound");
				Global_2436442.f_42 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
		{
			bVar66 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
	{
		Global_67218.f_584 = { 0f, 0f, 0f };
		Global_67218.f_587 = { 0f, 0f, 0f };
	}
	if (Local_648.f_4 == 0)
	{
		Global_67218[iParam0] = 1;
		func_300("Cannot be created: Dummy model");
		return;
	}
	if (!func_21(Local_648.f_4))
	{
		Global_67218[iParam0] = 1;
		func_300("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_46(iParam0, 0))
	{
		Global_67218[iParam0] = 1;
		func_300("Cannot be created: Vehicle gen not available");
		return;
	}
	if (unk_0x889D01384B54BCE3(Local_648.f_9, 14) && !func_46(iParam0, 5))
	{
		Global_67218[iParam0] = 1;
		func_300("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_295() && func_294(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_67218[iParam0] = 1;
		func_300("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_647)
	{
		Global_67218[iParam0] = 1;
		func_300("Cannot be created: Player character not valid");
		return;
	}
	if (unk_0x889D01384B54BCE3(Local_648.f_9, 10))
	{
		if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[iParam0]))
		{
			Global_67218[iParam0] = 1;
			func_300("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_67218.f_484[iParam0] = 0;
		}
	}
	if (unk_0x889D01384B54BCE3(Local_648.f_9, 6))
	{
		if (func_293(Local_648.f_4, -1))
		{
			Global_67218[iParam0] = 1;
			func_300("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_292(Local_648.f_4, -1))
		{
			Global_67218[iParam0] = 1;
			func_300("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (unk_0x889D01384B54BCE3(Local_648.f_9, 29))
	{
		if (Local_401.f_3 == 0)
		{
			return;
		}
	}
	if (func_291(iParam0))
	{
		Global_67218[iParam0] = 1;
		func_300("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (unk_0xB4B5BF5882A555F9() && unk_0xCC285AB3AF3E0AB4() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_67218[iParam0] = 1;
			func_300("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar69 = 0;
	if (unk_0x889D01384B54BCE3(Local_648.f_9, 19))
	{
		iVar69 = 2;
	}
	else if (unk_0x889D01384B54BCE3(Local_648.f_9, 20))
	{
		iVar69 = 1;
	}
	if ((iParam0 == 24 && Global_97439.f_18371.f_1406[Local_648.f_14] > 0) && Global_97439.f_18371.f_1406[Local_648.f_14] <= 3)
	{
		if (unk_0x2FDD93A1F5E63663(Local_648.f_4))
		{
			iVar69 = 2;
			Local_648.f_12 = (Global_97439.f_18371.f_1406[Local_648.f_14] - 1);
		}
		else if (unk_0xD548A98EDA33C15A(Local_648.f_4))
		{
			iVar69 = 1;
			Local_648.f_12 = (Global_97439.f_18371.f_1406[Local_648.f_14] - 1);
		}
	}
	if (iVar69 != 0)
	{
		if (func_290(Local_648.f_12, iVar69, Local_648, -1f))
		{
			Global_67218[iParam0] = 1;
			func_300("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_319(iParam0, 0);
			}
			return;
		}
		if (unk_0x889D01384B54BCE3(Local_648.f_9, 19) || unk_0x889D01384B54BCE3(Local_648.f_9, 20))
		{
			if (iVar69 == 2)
			{
				if (Global_87826[Local_648.f_12 /*3*/][1] != -1 && (unk_0x09560C7DE2A384BD() - Global_87826[Local_648.f_12 /*3*/][1]) < unk_0xE6DB12B28C67A491() * 180)
				{
					Global_67218[iParam0] = 1;
					func_300("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var70, "...", 24);
					StringIntConCat(&Var70, ((unk_0xE6DB12B28C67A491() * 180 - (unk_0x09560C7DE2A384BD() - Global_87826[Local_648.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var70, " seconds", 24);
					func_300(&Var70);
					return;
				}
			}
			else if (iVar69 == 1)
			{
				if (Global_87826[Local_648.f_12 /*3*/][0] != -1 && (unk_0x09560C7DE2A384BD() - Global_87826[Local_648.f_12 /*3*/][0]) < unk_0xE6DB12B28C67A491() * 180)
				{
					Global_67218[iParam0] = 1;
					func_300("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var76, "...", 24);
					StringIntConCat(&Var76, ((unk_0xE6DB12B28C67A491() * 180 - (unk_0x09560C7DE2A384BD() - Global_87826[Local_648.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var76, " seconds", 24);
					func_300(&Var76);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
	{
		Global_67218.f_584 = { Local_648 };
	}
	if (bVar66)
	{
		return;
	}
	if (iVar69 != 0)
	{
		iLocal_116[iParam0] = func_6(Local_648.f_12, iVar69);
		unk_0x939DA7EBCC6588FF(iLocal_116[iParam0]);
		unk_0xD0E2BFCE93AE3ABD(&(uLocal_47[iParam0]), 2);
		if (!unk_0x5494F37F35C1D7D7(iLocal_116[iParam0]))
		{
			func_300("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_289(iLocal_116[iParam0], Local_648, 1))
		{
			func_300("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		unk_0x84710FE7666EBF7B(Local_648, 3f, 0, 0, 0, 0);
		unk_0x597CB55BA0825820(Local_648, 3f, 0, 0, 0, 0, 0);
		if (iVar69 == 2)
		{
			func_284(&(Global_67218.f_139[iParam0]), Local_648.f_12, Local_648, Local_648.f_3, 0, 2);
		}
		else if (iVar69 == 1)
		{
			func_284(&(Global_67218.f_139[iParam0]), Local_648.f_12, Local_648, Local_648.f_3, 0, 1);
		}
		else
		{
			Global_67218[iParam0] = 1;
			func_300("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		unk_0x939DA7EBCC6588FF(Local_648.f_4);
		iLocal_116[iParam0] = Local_648.f_4;
		unk_0xD0E2BFCE93AE3ABD(&(uLocal_47[iParam0]), 2);
		if (!unk_0x5494F37F35C1D7D7(Local_648.f_4))
		{
			func_300("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_289(Local_648.f_4, Local_648, 1))
		{
			func_300("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		unk_0x84710FE7666EBF7B(Local_648, 3f, 0, 0, 0, 0);
		unk_0x597CB55BA0825820(Local_648, 3f, 0, 0, 0, 0, 0);
		if (unk_0x889D01384B54BCE3(Local_648.f_9, 23))
		{
			unk_0xC69E366FB703AC8E(Local_648);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_648.f_4 == joaat("submersible2"))
			{
				Local_648.f_2 = -3f;
			}
		}
		Global_67218.f_139[iParam0] = unk_0x9BB6F54E415071A1(Local_648.f_4, Local_648, Local_648.f_3, 1, 1);
		if (unk_0x889D01384B54BCE3(Local_648.f_9, 10))
		{
			if (unk_0xEE41D6C2DA208994(Local_648.f_4))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_18371.f_69[Local_648.f_14 /*54*/].f_53), 22);
			}
			if (unk_0x889D01384B54BCE3(Global_97439.f_18371.f_69[Local_648.f_14 /*54*/].f_53, 14))
			{
				func_15(Global_67218.f_139[iParam0], &Local_750);
				func_283(Local_750.f_53, &(Global_97439.f_18371.f_69[Local_648.f_14 /*54*/].f_53), Local_648.f_4);
				unk_0x29DB79DD4D939B38(&(Global_97439.f_18371.f_69[Local_648.f_14 /*54*/].f_53), 14);
			}
			func_260(Global_67218.f_139[iParam0], &(Global_97439.f_18371.f_69[Local_648.f_14 /*54*/]), 0, 1);
			Global_67218.f_484[iParam0] = Global_67218.f_139[iParam0];
		}
		else
		{
			if (unk_0x889D01384B54BCE3(Local_648.f_9, 9))
			{
				unk_0xEEE37CF92B9966DA(Global_67218.f_139[iParam0], Local_648.f_10, Local_648.f_11);
			}
			if (unk_0x889D01384B54BCE3(Local_648.f_9, 8))
			{
				unk_0x542B8BF5C21F2470(Global_67218.f_139[iParam0], 2);
				unk_0x8FB85B4741246DAA(Global_67218.f_139[iParam0], 0);
				unk_0xBEEA9BAE37C263AF(Global_67218.f_139[iParam0], 0);
				unk_0x6213E7CEEB53EC02(Global_67218.f_139[iParam0], 0);
				unk_0x7B63B09988FDF6E7(Global_67218.f_139[iParam0], 0);
				unk_0x52BDA8F138779817(Global_67218.f_139[iParam0], 0);
				unk_0xB4226393A1696ACE(Global_67218.f_139[iParam0], false);
				unk_0xE31C4C317516E7A7(Global_67218.f_139[iParam0], 1);
				unk_0x3CC3106305C40A28(Global_67218.f_139[iParam0], 1);
			}
		}
	}
	if (unk_0x538DF9E5B1DF01EB(Global_67218.f_139[iParam0]))
	{
		func_282("Created - Coords: ", Local_648);
		func_281("Created - Dist From Player:", uLocal_891[iParam0]);
		if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
		{
			Global_67218.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_648.f_4)
		{
			case joaat("miljet"):
				unk_0xEEE37CF92B9966DA(Global_67218.f_139[iParam0], 121, 21);
				unk_0x780A5DADA769490D(Global_67218.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				unk_0xEEE37CF92B9966DA(Global_67218.f_139[iParam0], 122, 89);
				unk_0x780A5DADA769490D(Global_67218.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				unk_0xEEE37CF92B9966DA(Global_67218.f_139[iParam0], 0, 0);
				unk_0x780A5DADA769490D(Global_67218.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				unk_0xEEE37CF92B9966DA(Global_67218.f_139[iParam0], 12, 12);
				unk_0x780A5DADA769490D(Global_67218.f_139[iParam0], 0, 12);
				break;
			
			case joaat("rhino"):
				unk_0xEEE37CF92B9966DA(Global_67218.f_139[iParam0], 131, 132);
				unk_0x780A5DADA769490D(Global_67218.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				unk_0xEEE37CF92B9966DA(Global_67218.f_139[iParam0], 159, 0);
				unk_0x780A5DADA769490D(Global_67218.f_139[iParam0], 160, 156);
				break;
		}
		if (unk_0x889D01384B54BCE3(Local_648.f_9, 22))
		{
			unk_0xD26ED8EED273D81D(Global_67218.f_139[iParam0], 1);
		}
		if (unk_0x889D01384B54BCE3(Local_648.f_9, 30))
		{
			unk_0x29DB79DD4D939B38(&(Local_648.f_9), 31);
		}
		if (unk_0x889D01384B54BCE3(Local_648.f_9, 26))
		{
			unk_0x542B8BF5C21F2470(Global_67218.f_139[iParam0], 7);
			unk_0x9B50549E01094E48(Global_67218.f_139[iParam0], 1);
		}
		func_280(Global_67218.f_139[iParam0], iParam0);
		if (!unk_0x889D01384B54BCE3(Local_648.f_9, 29) && !unk_0x889D01384B54BCE3(Local_648.f_9, 30))
		{
			unk_0xAC894C93914464C2(Global_67218.f_139[iParam0]);
		}
		unk_0xD826AAC32D2F161D(Global_67218.f_139[iParam0], 0f);
		unk_0x940C6B8BF42B190B(Global_67218.f_139[iParam0], 1);
		unk_0xBE2BFEEF84137DF0(Global_67218.f_139[iParam0], unk_0x889D01384B54BCE3(Local_648.f_9, 5));
	}
	unk_0x29DB79DD4D939B38(&(uLocal_47[iParam0]), 0);
	unk_0x29DB79DD4D939B38(&(uLocal_47[iParam0]), 1);
	Global_67218[iParam0] = 1;
	if (iVar69 != 0)
	{
		Global_67218.f_69[iParam0] = 1;
	}
	iVar82 = func_277(458, -1, -1);
	if (iVar82 != 0 && iVar82 == iParam0)
	{
		iLocal_978 = Global_67218.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2436442.f_42 = 0;
	}
}

int func_277(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_71();
	}
	iVar0 = 0;
	iVar1 = func_279(iParam0, iParam1);
	uVar2 = func_278(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8EB982965B3D3B51(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_278(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xE532D20CD2CCA6FE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xE532D20CD2CCA6FE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xE532D20CD2CCA6FE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xE532D20CD2CCA6FE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xE532D20CD2CCA6FE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xE532D20CD2CCA6FE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xE532D20CD2CCA6FE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xE532D20CD2CCA6FE((iParam0 - 3879)) * 8) * 8;
	}
	return iVar0;
}

int func_279(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_71();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB703F03BEB83FB19((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB703F03BEB83FB19((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB703F03BEB83FB19((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB703F03BEB83FB19((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x0BF58F02EFE757CE((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x0BF58F02EFE757CE((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x397AC815D1FA7574((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x397AC815D1FA7574((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	return iVar0;
}

void func_280(int iParam0, int iParam1)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				unk_0x69542DE06E708D80(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				unk_0x69542DE06E708D80(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				unk_0x69542DE06E708D80(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				unk_0xA4FABA09D10C713D(iParam0, 6, false);
				unk_0xA4FABA09D10C713D(iParam0, 1, true);
				break;
			}
	}
}

void func_281(char* sParam0, float fParam1)
{
	if (!unk_0x06771AF7795B3ECF(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_282(char* sParam0, float fParam1, var uParam2, var uParam3)
{
	if (!unk_0x06771AF7795B3ECF(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_283(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			unk_0x29DB79DD4D939B38(&iVar0, 0);
			unk_0x29DB79DD4D939B38(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			unk_0x29DB79DD4D939B38(&iVar0, 0);
			unk_0x29DB79DD4D939B38(&iVar0, 1);
			unk_0x29DB79DD4D939B38(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			unk_0x29DB79DD4D939B38(&iVar0, 0);
			unk_0x29DB79DD4D939B38(&iVar0, 1);
			unk_0x29DB79DD4D939B38(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			unk_0x29DB79DD4D939B38(&iVar0, 0);
			break;
		
		case joaat("stalion"):
			unk_0x29DB79DD4D939B38(&iVar0, 0);
			unk_0x29DB79DD4D939B38(&iVar0, 1);
			unk_0x29DB79DD4D939B38(&iVar0, 2);
			break;
		
		case joaat("chino"):
			unk_0x29DB79DD4D939B38(&iVar0, 0);
			unk_0x29DB79DD4D939B38(&iVar0, 1);
			unk_0x29DB79DD4D939B38(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_284(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (func_8(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		func_7(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0x538DF9E5B1DF01EB(*iParam0))
		{
			if (unk_0xA609E58449080951(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_97439.f_1729.f_539.f_3208) && Global_97439.f_7341.f_99.f_58[131])
		{
			Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/] == Var5.f_0)
		{
			unk_0x939DA7EBCC6588FF(Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (unk_0x5494F37F35C1D7D7(Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = unk_0x9BB6F54E415071A1(Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
				unk_0xAC894C93914464C2(*iParam0);
				unk_0x3984DED2762CADC3(*iParam0, 0);
				unk_0xBE2BFEEF84137DF0(*iParam0, false);
				unk_0xE6E4CD7E9A3DA71E(*iParam0, 1);
				unk_0x4C31C3561F937348(*iParam0, 1250);
				unk_0xBCA53A1278653F4C(*iParam0, 1250f);
				unk_0x300688EA0EDEE519(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xEEE37CF92B9966DA(*iParam0, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				unk_0x780A5DADA769490D(*iParam0, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				unk_0xD826AAC32D2F161D(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					unk_0xA4FABA09D10C713D(*iParam0, iVar79 + 1, !Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					unk_0xEF968F877962384A(*iParam0, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (func_288(&uVar1, &uVar0))
				{
					unk_0x3F5ED6FBAE13F4E5(*iParam0, &uVar1);
					unk_0x7B4ABEFECFB41BF0(*iParam0, uVar0);
				}
				else
				{
					unk_0x3F5ED6FBAE13F4E5(*iParam0, &(Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < unk_0x858A61D4AC50886E())
					{
						unk_0x7B4ABEFECFB41BF0(*iParam0, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				unk_0xF041FAE99959B5AB(*iParam0, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				unk_0xB4226393A1696ACE(*iParam0, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				unk_0xA9AE442E508E12E3(*iParam0, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				unk_0x5AE459C3CC1CC113(*iParam0, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				unk_0xC1E623D5EDF6EECE(*iParam0, 2, unk_0x889D01384B54BCE3(Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				unk_0xC1E623D5EDF6EECE(*iParam0, 3, unk_0x889D01384B54BCE3(Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				unk_0xC1E623D5EDF6EECE(*iParam0, 0, unk_0x889D01384B54BCE3(Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				unk_0xC1E623D5EDF6EECE(*iParam0, 1, unk_0x889D01384B54BCE3(Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (unk_0x02733F26A0867544(*iParam0) > 1 && Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					unk_0x4DD872D780AF5EF7(*iParam0, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!unk_0x271F7EEEF6BC4943(unk_0xA609E58449080951(*iParam0)))
					{
						if (unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(*iParam0)))
						{
							if (Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								unk_0x3C2E3554D673CD03(*iParam0, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							unk_0x3C2E3554D673CD03(*iParam0, Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				func_261(iParam0, &(Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				unk_0xE21043B53AC7217A(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (unk_0xA609E58449080951(*iParam0) == joaat("bodhi2"))
					{
						func_286(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0xEA054561294AEC10(Global_97439.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				func_285(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/] == Var5.f_0)
		{
			unk_0x939DA7EBCC6588FF(Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (unk_0x5494F37F35C1D7D7(Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = unk_0x9BB6F54E415071A1(Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				unk_0xAC894C93914464C2(*iParam0);
				unk_0x3984DED2762CADC3(*iParam0, 0);
				unk_0xBE2BFEEF84137DF0(*iParam0, false);
				unk_0xE6E4CD7E9A3DA71E(*iParam0, 1);
				unk_0x4C31C3561F937348(*iParam0, 1250);
				unk_0xBCA53A1278653F4C(*iParam0, 1250f);
				unk_0x300688EA0EDEE519(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xEEE37CF92B9966DA(*iParam0, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				unk_0x780A5DADA769490D(*iParam0, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				unk_0xD826AAC32D2F161D(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					unk_0xA4FABA09D10C713D(*iParam0, iVar80 + 1, !Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					unk_0xEF968F877962384A(*iParam0, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (func_288(&uVar1, &uVar0))
				{
					unk_0x3F5ED6FBAE13F4E5(*iParam0, &uVar1);
					unk_0x7B4ABEFECFB41BF0(*iParam0, uVar0);
				}
				else
				{
					unk_0x3F5ED6FBAE13F4E5(*iParam0, &(Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < unk_0x858A61D4AC50886E())
					{
						unk_0x7B4ABEFECFB41BF0(*iParam0, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				unk_0xF041FAE99959B5AB(*iParam0, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				unk_0xB4226393A1696ACE(*iParam0, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				unk_0xA9AE442E508E12E3(*iParam0, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				unk_0x5AE459C3CC1CC113(*iParam0, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				unk_0xC1E623D5EDF6EECE(*iParam0, 2, unk_0x889D01384B54BCE3(Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				unk_0xC1E623D5EDF6EECE(*iParam0, 3, unk_0x889D01384B54BCE3(Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				unk_0xC1E623D5EDF6EECE(*iParam0, 0, unk_0x889D01384B54BCE3(Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				unk_0xC1E623D5EDF6EECE(*iParam0, 1, unk_0x889D01384B54BCE3(Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (unk_0x02733F26A0867544(*iParam0) > 1 && Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					unk_0x4DD872D780AF5EF7(*iParam0, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!unk_0x271F7EEEF6BC4943(unk_0xA609E58449080951(*iParam0)))
					{
						if (unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(*iParam0)))
						{
							if (Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								unk_0x3C2E3554D673CD03(*iParam0, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							unk_0x3C2E3554D673CD03(*iParam0, Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				func_261(iParam0, &(Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				unk_0xE21043B53AC7217A(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (unk_0xA609E58449080951(*iParam0) == joaat("bodhi2"))
					{
						func_286(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0xEA054561294AEC10(Global_97439.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				func_285(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x939DA7EBCC6588FF(Var5.f_0);
			if (unk_0x5494F37F35C1D7D7(Var5.f_0))
			{
				bVar81 = true;
				*iParam0 = unk_0x9BB6F54E415071A1(Var5.f_0, Param2, fParam5, 1, 1);
				unk_0xAC894C93914464C2(*iParam0);
				unk_0x3984DED2762CADC3(*iParam0, 0);
				unk_0xBE2BFEEF84137DF0(*iParam0, false);
				unk_0xE6E4CD7E9A3DA71E(*iParam0, 1);
				StringCopy(&cVar82, unk_0xC2E0CBF2F000307B(*iParam0), 16);
				unk_0x4C31C3561F937348(*iParam0, 1250);
				unk_0xBCA53A1278653F4C(*iParam0, 1250f);
				unk_0x300688EA0EDEE519(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xEEE37CF92B9966DA(*iParam0, Var5.f_5, Var5.f_6);
				unk_0x780A5DADA769490D(*iParam0, Var5.f_7, Var5.f_8);
				unk_0xD826AAC32D2F161D(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					unk_0xA4FABA09D10C713D(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					unk_0xEF968F877962384A(*iParam0, Var5.f_24);
				}
				if (func_288(&uVar1, &uVar0))
				{
					unk_0x3F5ED6FBAE13F4E5(*iParam0, &uVar1);
					unk_0x7B4ABEFECFB41BF0(*iParam0, uVar0);
				}
				else
				{
					unk_0x3F5ED6FBAE13F4E5(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0x858A61D4AC50886E())
					{
						unk_0x7B4ABEFECFB41BF0(*iParam0, Var5.f_26);
					}
				}
				unk_0xF041FAE99959B5AB(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				unk_0xB4226393A1696ACE(*iParam0, Var5.f_64);
				unk_0xA9AE442E508E12E3(*iParam0, Var5.f_63);
				unk_0x5AE459C3CC1CC113(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				unk_0xC1E623D5EDF6EECE(*iParam0, 2, unk_0x889D01384B54BCE3(Var5.f_68, 28));
				unk_0xC1E623D5EDF6EECE(*iParam0, 3, unk_0x889D01384B54BCE3(Var5.f_68, 29));
				unk_0xC1E623D5EDF6EECE(*iParam0, 0, unk_0x889D01384B54BCE3(Var5.f_68, 30));
				unk_0xC1E623D5EDF6EECE(*iParam0, 1, unk_0x889D01384B54BCE3(Var5.f_68, 31));
				if (unk_0x02733F26A0867544(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					unk_0x4DD872D780AF5EF7(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!unk_0x271F7EEEF6BC4943(unk_0xA609E58449080951(*iParam0)))
					{
						if (unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								unk_0x3C2E3554D673CD03(*iParam0, Var5.f_66);
							}
						}
						else
						{
							unk_0x3C2E3554D673CD03(*iParam0, Var5.f_66);
						}
					}
				}
				func_261(iParam0, &(Var5.f_31), &(Var5.f_57));
				unk_0xE21043B53AC7217A(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (unk_0xA609E58449080951(*iParam0) == joaat("bagger") && !Global_97439.f_7341.f_99.f_58[118])
					{
						unk_0x3F5ED6FBAE13F4E5(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0xA609E58449080951(*iParam0) == joaat("bodhi2"))
					{
						func_286(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_97439.f_1729.f_539.f_3208) && Global_97439.f_7341.f_99.f_58[131]) && unk_0xA609E58449080951(*iParam0) == joaat("tailgater"))
				{
					unk_0x85AB5576B5457AED(*iParam0, 6, 1, false);
					unk_0x85AB5576B5457AED(*iParam0, 14, 7, false);
					unk_0x85AB5576B5457AED(*iParam0, 11, 2, false);
					unk_0x85AB5576B5457AED(*iParam0, 2, 3, false);
					unk_0x85AB5576B5457AED(*iParam0, 7, 5, false);
					unk_0x85AB5576B5457AED(*iParam0, 0, 0, false);
					unk_0x85AB5576B5457AED(*iParam0, 3, 3, false);
					unk_0x85AB5576B5457AED(*iParam0, 13, 1, false);
					unk_0x85AB5576B5457AED(*iParam0, 4, 3, false);
					unk_0x85AB5576B5457AED(*iParam0, 12, 2, false);
					unk_0xE78BBCD9C6B5C963(*iParam0, 22, true);
					unk_0x3C2E3554D673CD03(*iParam0, 2);
					unk_0x85AB5576B5457AED(*iParam0, 23, 11, false);
					unk_0xA9AE442E508E12E3(*iParam0, 2);
					Global_97439.f_1729.f_539.f_3208 = 1;
					func_145(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0xEA054561294AEC10(Var5.f_0);
				}
				if (bVar81)
				{
					func_285(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_285(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]))
		{
			Global_87778[iVar0] = iParam0;
			Global_87788[iVar0] = iParam1;
			Global_87798[iVar0] = unk_0xA609E58449080951(iParam0);
			if (unk_0xD548A98EDA33C15A(Global_87798[iVar0]))
			{
				Global_87826[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_87826[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_286(var uParam0)
{
	if (!func_287(*uParam0))
	{
		unk_0xA4FABA09D10C713D(*uParam0, 5, !Global_97439.f_7341.f_99.f_58[119]);
	}
}

bool func_287(int iParam0)
{
	return unk_0x5624226E4F913C53(iParam0, 5);
}

int func_288(var uParam0, var uParam1)
{
	if (unk_0x1DAD7CE53BEE7710())
	{
	}
	else if (Global_97439.f_23343.f_261)
	{
		*uParam0 = { Global_97439.f_23343.f_267 };
		*uParam1 = Global_97439.f_23343.f_271;
		return 1;
	}
	return 0;
}

int func_289(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if ((iParam4 && unk_0xF4C685E933068D23()) && unk_0x16CDA1894CFE0781(joaat("startup_positioning")) > 0)
	{
		func_300("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	unk_0xD7CB63D07AABC54F(uParam0, &Var0, &Var3);
	fVar6 = unk_0x4970185D4CC64616(Var3, Var0, 1);
	if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Param1, 1) < (fVar6 * 0.5f))
	{
		func_281("player is in vehicle bounds - fLength: ", fVar6);
		func_281("player is in vehicle bounds - fDistance: ", unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Param1, 1));
		return 1;
	}
	return 0;
}

int func_290(int iParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	struct<58> Var1;
	int iVar75;
	
	if (!func_8(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	iVar75 = 0;
	func_7(iParam0, &Var1, iParam1);
	iVar75 = Var1.f_0;
	if (iVar75 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]) && unk_0xECFECDAD51A6184F(Global_87778[iVar0], 0))
			{
				if (unk_0xA609E58449080951(Global_87778[iVar0]) == iVar75 && Global_87788[iVar0] == iParam0)
				{
					if (fParam5 == -1f || unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(Global_87778[iVar0], 0), Param2, 1) <= fParam5)
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

int func_291(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_648.f_4 == joaat("frogger2"))
		{
			if (((func_293(Local_648.f_4, -1) || func_292(Local_648.f_4, -1)) || unk_0x16CDA1894CFE0781(joaat("exile2")) > 0) || !func_273(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((unk_0x538DF9E5B1DF01EB(Global_67218.f_484[20]) && !unk_0xE44A580B551C3645(Global_67218.f_484[20])) && unk_0xECFECDAD51A6184F(Global_67218.f_484[20], 0))
		{
			if (Local_648.f_4 == unk_0xA609E58449080951(Global_67218.f_484[20]))
			{
				unk_0xABDA00D6C410A603(Global_67218.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_648.f_10 && iVar1 == Local_648.f_11)
				{
					func_167(20);
				}
			}
		}
	}
	return 0;
}

int func_292(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = unk_0xEA638C4417ABC6D0(Local_648, 200f, iParam0, iVar0);
	if ((unk_0x538DF9E5B1DF01EB(iVar1) && unk_0xECFECDAD51A6184F(iVar1, 0)) && unk_0xA609E58449080951(iVar1) == iParam0)
	{
		if (iParam1 == -1 || unk_0x960D1BE7E376200B(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_293(int iParam0, int iParam1)
{
	var uVar0[50];
	int iVar51;
	int iVar52;
	
	iVar52 = unk_0x0CEAB87805B17F2E(unk_0xA16EC202D9D35357(), &uVar0);
	iVar51 = 0;
	while (iVar51 < iVar52)
	{
		if ((unk_0x538DF9E5B1DF01EB(uVar0[iVar51]) && unk_0xECFECDAD51A6184F(uVar0[iVar51], 0)) && unk_0xA609E58449080951(uVar0[iVar51]) == iParam0)
		{
			if (iParam1 == -1 || unk_0x960D1BE7E376200B(uVar0[iVar51]) == iParam1)
			{
				return 1;
			}
		}
		iVar51++;
	}
	return 0;
}

int func_294(int iParam0)
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	if (func_243(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_295()
{
	return Global_67218.f_138;
}

float func_296(int iParam0)
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

void func_297(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	iVar2 = func_251(*uParam0);
	iVar3 = func_250(*uParam0);
	iVar4 = func_249(*uParam0);
	iVar5 = func_248(*uParam0);
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
	func_298(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_298(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, iParam1);
	func_38(uParam0, iParam2);
	func_37(uParam0, iParam3);
	func_32(uParam0, iParam4);
	func_31(uParam0, iParam5);
	func_30(uParam0, iParam6);
}

void func_299(int iParam0)
{
	if (unk_0x889D01384B54BCE3(Local_648.f_9, 13))
	{
		func_319(iParam0, 0);
	}
}

void func_300(char* sParam0)
{
	if (!unk_0x06771AF7795B3ECF(sParam0))
	{
	}
}

void func_301(char* sParam0, int iParam1)
{
	if (!unk_0x06771AF7795B3ECF(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_302(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
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
	if (bVar0 && unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Var1, 1) < 250f)
	{
		if (!unk_0x538DF9E5B1DF01EB(uLocal_808[iVar5]))
		{
			unk_0x939DA7EBCC6588FF(iVar6);
			iLocal_815 = 1;
			if (unk_0x5494F37F35C1D7D7(iVar6))
			{
				if (iLocal_815)
				{
					uLocal_808[iVar5] = unk_0xCBF2B33114D43CAA(iVar6, Var1, 0, 1, 0);
					unk_0x0BBAD8A322CB595E(uLocal_808[iVar5], 0f, 0f, fVar4, 2, 1);
					unk_0x75447E2E94CE161A(uLocal_808[iVar5], 0);
					unk_0x3CC3106305C40A28(uLocal_808[iVar5], 1);
					unk_0xEA054561294AEC10(iVar6);
					iLocal_815 = 0;
				}
			}
		}
	}
	else if (iVar5 != -1)
	{
		if ((unk_0x538DF9E5B1DF01EB(uLocal_808[iVar5]) && !unk_0x98666858610065B8(uLocal_808[iVar5])) && unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Var1, 1) > 255f)
		{
			unk_0xD4C90F16EBBFE620(&(uLocal_808[iVar5]));
			if (iLocal_815)
			{
				unk_0xEA054561294AEC10(iVar6);
				iLocal_815 = 0;
			}
		}
	}
}

void func_303(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (func_46(iParam0, 0) && (!unk_0x889D01384B54BCE3(Local_648.f_9, 14) || func_46(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_67218.f_346[iParam0] != bVar0)
	{
		if (!func_4(Local_648.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_67218.f_346[iParam0])
				{
					unk_0xA2D4DD3AE5BD39B4(Global_67218.f_415[iParam0], 0);
				}
			}
			else if (!Global_67218.f_346[iParam0])
			{
				Global_67218.f_415[iParam0] = unk_0x4210B2DCFC2838AC(Local_648.f_15, Local_648.f_18, 0, 1, 1, 1);
			}
		}
		Global_67218.f_346[iParam0] = bVar0;
	}
}

void func_304(int iParam0)
{
	int iVar0;
	
	if (unk_0x889D01384B54BCE3(Local_648.f_9, 15))
	{
		if (func_46(iParam0, 0) && !func_46(iParam0, 5))
		{
			iVar0 = 145;
			if (unk_0x889D01384B54BCE3(Local_648.f_9, 16))
			{
				iVar0 = func_305(9);
			}
			else if (unk_0x889D01384B54BCE3(Local_648.f_9, 18))
			{
				iVar0 = func_305(4);
			}
			if (iVar0 == Local_648.f_12)
			{
				func_212(iParam0, 5, 1);
			}
		}
	}
}

int func_305(int iParam0)
{
	return Global_97439.f_28101[iParam0 /*4*/];
}

void func_306(int iParam0)
{
	if (func_46(iParam0, 0) && !func_46(iParam0, 3))
	{
		if (unk_0x889D01384B54BCE3(Local_648.f_9, 4))
		{
			func_212(iParam0, 3, 1);
		}
		else
		{
			func_212(iParam0, 3, 1);
		}
	}
}

void func_307(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_46(iParam0, 0) && bLocal_647)
	{
		if (unk_0x889D01384B54BCE3(Local_648.f_9, 0) || (unk_0x889D01384B54BCE3(Local_648.f_9, 2) && !func_46(iParam0, 2)))
		{
			if ((!unk_0x889D01384B54BCE3(Local_648.f_9, 21) || (((((((!func_10(0) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(9)) && !func_10(10)) && !func_10(13)) && !func_10(14))) && ((unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0 || func_46(iParam0, 5)) || !unk_0x889D01384B54BCE3(Local_648.f_9, 28)))
			{
				bVar0 = false;
				if (!unk_0x5660C8AFDD9C1721(Global_67218.f_208[iParam0]))
				{
					if (func_273(0))
					{
						if (unk_0x889D01384B54BCE3(Local_648.f_9, 14) && !func_46(iParam0, 5))
						{
							Global_67218.f_208[iParam0] = unk_0x64F646E6A974BF18(Local_669.f_55);
							if (Local_669.f_58 != -1)
							{
								unk_0x2025496D9184D312(Global_67218.f_208[iParam0], Local_669.f_58);
								if (!unk_0x06771AF7795B3ECF(&(Local_669.f_59)))
								{
									unk_0xFDA1FE98ECD75505(Global_67218.f_208[iParam0], &(Local_669.f_59));
								}
							}
						}
						else if (func_46(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_67218.f_208[iParam0] = unk_0x64F646E6A974BF18(Local_669.f_55);
							if (Local_648.f_13 != -1)
							{
								unk_0x2025496D9184D312(Global_67218.f_208[iParam0], Local_648.f_13);
								if (!unk_0x06771AF7795B3ECF(&(Local_669.f_59)))
								{
									unk_0xFDA1FE98ECD75505(Global_67218.f_208[iParam0], &(Local_669.f_59));
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
								unk_0x1AD45E3CF020D50D(Global_67218.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_67218.f_208[iParam0] = unk_0x64F646E6A974BF18(Local_648);
							if (Local_648.f_13 != -1)
							{
								unk_0x2025496D9184D312(Global_67218.f_208[iParam0], Local_648.f_13);
								if (!unk_0x06771AF7795B3ECF(&(Local_669.f_59)))
								{
									unk_0xFDA1FE98ECD75505(Global_67218.f_208[iParam0], &(Local_669.f_59));
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
									unk_0x1AD45E3CF020D50D(Global_67218.f_208[iParam0], iVar2);
								}
							}
						}
						unk_0xABBBFFE76352EBB5(Global_67218.f_208[iParam0], !unk_0x889D01384B54BCE3(Local_648.f_9, 1));
						unk_0x864CE7B9AD07DDDE(Global_67218.f_208[iParam0], 0);
						unk_0x85C00B9AEF9CC0BE(Global_67218.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (unk_0x5660C8AFDD9C1721(Global_67218.f_208[iParam0]))
		{
			unk_0xB6FB9702660D84F6(&(Global_67218.f_208[iParam0]));
		}
	}
}

void func_308(int iParam0)
{
	if (func_46(iParam0, 0) && !func_46(iParam0, 1))
	{
		if (func_46(iParam0, 4))
		{
			if (unk_0x889D01384B54BCE3(Local_648.f_9, 3))
			{
				func_309(&(Local_648.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_212(iParam0, 1, 1);
			}
			else
			{
				func_212(iParam0, 1, 1);
			}
		}
	}
}

void func_309(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_175(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_310(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x889D01384B54BCE3(Local_648.f_9, 7) || Local_648.f_12 == iLocal_646)
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
	if ((bLocal_647 && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357())) && unk_0x889D01384B54BCE3(Local_648.f_9, 14))
	{
		if (Local_401.f_2 == 0 && Local_401.f_3 == 0)
		{
			if (uLocal_891[iParam0] < Local_401.f_1 || Local_401.f_0 == iParam0)
			{
				if (Local_401.f_0 != iParam0)
				{
					Local_401.f_8 = { Local_648 };
					Local_401.f_29 = { Local_669 };
					Local_401.f_0 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_67218.f_592)
					{
						Global_67218.f_592[iVar0] = -1;
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
							if (iVar1 < Global_67218.f_592)
							{
								switch (Local_401.f_6)
								{
									case 3:
										if (func_44(iVar2))
										{
											Global_67218.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (unk_0x38B61EB14C5FBA9E(iVar2))
										{
											Global_67218.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((unk_0xD18BE100522E5F15(iVar2) || unk_0x9651110A188939C8(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_67218.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_45(iVar2))
										{
											Global_67218.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_401.f_1 = uLocal_891[iParam0];
			}
		}
	}
	else if (Local_401.f_0 == iParam0)
	{
		Local_401.f_0 = -1;
		Local_401.f_1 = 99999.99f;
	}
	if (!unk_0x889D01384B54BCE3(uLocal_47[iParam0], 0))
	{
		if (unk_0x538DF9E5B1DF01EB(Global_67218.f_139[iParam0]))
		{
			if (unk_0xECFECDAD51A6184F(Global_67218.f_139[iParam0], 0))
			{
				if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
				{
					if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), Global_67218.f_139[iParam0], 0))
					{
						if (!unk_0x889D01384B54BCE3(uLocal_47[iParam0], 1) || unk_0x889D01384B54BCE3(uLocal_47[iParam0], 3))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uLocal_47[iParam0]), 0);
							func_212(iParam0, 4, 1);
							func_212(iParam0, 2, 1);
						}
					}
					else
					{
						unk_0xD0E2BFCE93AE3ABD(&(uLocal_47[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((unk_0x538DF9E5B1DF01EB(Global_67218.f_484[iParam0]) && unk_0xECFECDAD51A6184F(Global_67218.f_484[iParam0], 0)) && unk_0xA609E58449080951(Global_67218.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_980)
			{
				if (unk_0x0852C405AF94F670(Global_67218.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
				{
					unk_0x544C36366CA9684D(Global_67218.f_484[iParam0], 0f);
					iLocal_980 = 1;
				}
			}
			else if (!unk_0x0852C405AF94F670(Global_67218.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
			{
				unk_0x544C36366CA9684D(Global_67218.f_484[iParam0], 1f);
				iLocal_980 = 0;
			}
		}
		else
		{
			iLocal_980 = 0;
		}
	}
}

int func_311()
{
	return 1;
}

var func_312(var uParam0, int iParam1)
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

int func_313()
{
	func_314();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_314()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_271(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_270(unk_0xA16EC202D9D35357());
			if (func_8(iVar0) && (!func_10(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_8(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

void func_315()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x5660C8AFDD9C1721(Global_67218.f_208[iVar0]))
		{
			unk_0xB6FB9702660D84F6(&(Global_67218.f_208[iVar0]));
		}
		if (unk_0x538DF9E5B1DF01EB(Global_67218.f_139[iVar0]))
		{
			if (unk_0xECFECDAD51A6184F(Global_67218.f_139[iVar0], 0))
			{
				unk_0x3A3C5A6572B3C611(&(Global_67218.f_139[iVar0]));
				Global_67218.f_139[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (unk_0xBAB691F99A2A7346(Local_401.f_110))
	{
		unk_0xC8CEF95C63B283EC(Local_401.f_110, 0);
		unk_0x27A62B1C26941E13(Local_401.f_110, 0);
	}
	if (unk_0xBAB691F99A2A7346(Local_401.f_111))
	{
		unk_0xC8CEF95C63B283EC(Local_401.f_111, 0);
		unk_0x27A62B1C26941E13(Local_401.f_111, 0);
	}
	if (Local_401.f_3 != 0)
	{
		func_163();
		unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), 0);
	}
	if (unk_0x5660C8AFDD9C1721(Global_67218.f_583))
	{
		unk_0xB6FB9702660D84F6(&(Global_67218.f_583));
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
		if (Global_67218.f_577)
		{
			func_143(47, 1);
			func_141(47, 1);
			Global_67218.f_577 = 0;
			Local_401.f_3 = 0;
		}
	}
	Global_67218.f_553 = 0;
	unk_0x82706E6C897B0FA1();
}

void func_316()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0x538DF9E5B1DF01EB(uLocal_392[iVar0]))
		{
			unk_0xD4C90F16EBBFE620(&(uLocal_392[iVar0]));
		}
		iVar0++;
	}
}

void func_317(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0x889D01384B54BCE3(iLocal_886[iVar0], iVar1))
	{
		unk_0xD0E2BFCE93AE3ABD(&(iLocal_886[iVar0]), iVar1);
		iLocal_817[iLocal_816] = iParam0;
		iLocal_816++;
	}
}

void func_318()
{
	int iVar0;
	
	if (func_185(25))
	{
		if (Global_97439.f_18371.f_69[22 /*54*/].f_42 != 0 && !func_21(Global_97439.f_18371.f_69[22 /*54*/].f_42))
		{
			Global_97439.f_18371.f_69[22 /*54*/].f_42 = joaat("fugitive");
			Global_97439.f_18371.f_69[22 /*54*/].f_53 = 0;
			Global_97439.f_18371.f_69[22 /*54*/].f_41 = 0;
			Global_97439.f_18371.f_69[22 /*54*/].f_38 = 255;
			Global_97439.f_18371.f_69[22 /*54*/].f_39 = 255;
			Global_97439.f_18371.f_69[22 /*54*/].f_40 = 255;
			Global_97439.f_18371.f_69[22 /*54*/].f_5 = 0;
			Global_97439.f_18371.f_69[22 /*54*/].f_6 = 0;
			Global_97439.f_18371.f_69[22 /*54*/].f_7 = 0;
			Global_97439.f_18371.f_69[22 /*54*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 25)
			{
				Global_97439.f_18371.f_69[22 /*54*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_97439.f_18371.f_69[22 /*54*/].f_35[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_185(21) && Global_97439.f_18371.f_69[9 /*54*/].f_42 != 0) && !func_21(Global_97439.f_18371.f_69[9 /*54*/].f_42))
	{
		Global_97439.f_18371.f_69[9 /*54*/].f_42 = 0;
	}
	if ((func_185(22) && Global_97439.f_18371.f_69[10 /*54*/].f_42 != 0) && !func_21(Global_97439.f_18371.f_69[10 /*54*/].f_42))
	{
		Global_97439.f_18371.f_69[10 /*54*/].f_42 = 0;
	}
	if ((func_185(23) && Global_97439.f_18371.f_69[11 /*54*/].f_42 != 0) && !func_21(Global_97439.f_18371.f_69[11 /*54*/].f_42))
	{
		Global_97439.f_18371.f_69[11 /*54*/].f_42 = 0;
	}
	if (func_185(26) && !func_21(Global_97439.f_18371.f_69[12 /*54*/].f_42))
	{
		func_319(26, 0);
	}
	if (func_185(27) && !func_21(Global_97439.f_18371.f_69[13 /*54*/].f_42))
	{
		func_319(27, 0);
	}
	if (func_185(28) && !func_21(Global_97439.f_18371.f_69[14 /*54*/].f_42))
	{
		func_319(28, 0);
	}
	if (func_185(29) && !func_21(Global_97439.f_18371.f_69[15 /*54*/].f_42))
	{
		func_319(29, 0);
	}
	if (func_185(30) && !func_21(Global_97439.f_18371.f_69[16 /*54*/].f_42))
	{
		func_319(30, 0);
	}
	if (func_185(31) && !func_21(Global_97439.f_18371.f_69[17 /*54*/].f_42))
	{
		func_319(31, 0);
	}
	if (func_185(32) && !func_21(Global_97439.f_18371.f_69[18 /*54*/].f_42))
	{
		func_319(32, 0);
	}
	if (func_185(33) && !func_21(Global_97439.f_18371.f_69[19 /*54*/].f_42))
	{
		func_319(33, 0);
	}
	if (func_185(34) && !func_21(Global_97439.f_18371.f_69[20 /*54*/].f_42))
	{
		func_319(34, 0);
	}
}

void func_319(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_46(iParam0, 0))
		{
			func_212(iParam0, 1, 0);
			func_212(iParam0, 2, 0);
			func_212(iParam0, 3, 0);
			func_212(iParam0, 4, 0);
			func_212(iParam0, 0, 1);
			Global_67218[iParam0] = 1;
		}
	}
	else
	{
		func_212(iParam0, 0, 0);
	}
}

int func_320()
{
	return 0;
}

int func_321()
{
	return 1;
}

int func_322()
{
	return 1;
}

int func_323()
{
	if (unk_0xD5883629B43B6F20(-1226939934))
	{
		return 1;
	}
	return 0;
}

