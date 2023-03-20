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
	struct<563> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	float fLocal_629 = 0f;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	bool bLocal_632 = 0;
	int iLocal_633 = 0;
	bool bLocal_634 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
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
	iLocal_623 = iLocal_622;
	iLocal_624 = iLocal_623;
	fLocal_629 = 100f;
	if (unk_0xB1A77D5C890711F9(joaat("mission_stat_watcher")) > 1)
	{
		unk_0x2F798BA2098FDADE();
	}
	Global_55653 = 0;
	Global_55660 = 0;
	iVar0 = 1;
	if (unk_0x4B4BD87E3D30C50D(18))
	{
		func_108();
		Global_67754 = 0;
		Global_55654 = 0;
		Global_55680 = 0;
		unk_0x2F798BA2098FDADE();
	}
	iVar1 = 0;
	unk_0x4EDE34FBADD967A6(0);
	func_106();
	while (!Global_55652)
	{
		unk_0x4EDE34FBADD967A6(200);
		if (Global_55660)
		{
			func_108();
			unk_0x2F798BA2098FDADE();
		}
	}
	Global_55667 = 0;
	Global_55654 = 1;
	while (!Global_55653)
	{
		if (Global_67754 > 0)
		{
			func_100();
			if (Global_55687 == -1)
			{
				Global_55687 = unk_0x3EAC9995EC220C5A();
			}
			else if ((unk_0x3EAC9995EC220C5A() - Global_55687) > 1000)
			{
				func_99();
			}
		}
		if (Global_55660)
		{
			func_108();
			Global_55654 = 0;
			unk_0x2F798BA2098FDADE();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_55654 = 0;
	if (func_98())
	{
		while (func_98())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	bVar2 = false;
	while (!bVar2)
	{
		if (!Global_55655 == iLocal_631)
		{
			if (Global_55655)
			{
				unk_0x5AE11BC36633DE4E(0);
				iLocal_621 = 0;
				Global_55670 = 0;
			}
			iLocal_631 = Global_55655;
		}
		while (Global_55659)
		{
			unk_0x4EDE34FBADD967A6(1000);
		}
		if (Global_55653 && !Global_55660)
		{
			if (Global_55652 || iLocal_633)
			{
				Global_55657 = 0;
				if (bLocal_632)
				{
				}
				if (Global_55653)
				{
				}
				if (!bLocal_632 == Global_55653)
				{
					func_97(&Local_45);
					Local_45.f_562 = 1;
					func_96();
					func_95();
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < Global_67754)
					{
						if (Global_67755[iVar3 /*9*/] > 0)
						{
							if (Global_55884[Global_67755[iVar3 /*9*/] /*13*/] == 4)
							{
								if (!Global_55884[Global_67755[iVar3 /*9*/] /*13*/].f_7)
								{
									if (Global_55884[Global_67755[iVar3 /*9*/] /*13*/].f_3)
									{
										if (Global_67755[iVar3 /*9*/].f_1 == 0)
										{
											Global_67755[iVar3 /*9*/].f_3 = 5;
										}
									}
								}
							}
						}
						iVar3++;
					}
					bVar4 = false;
					if ((Global_69577 && !Global_55649) || Global_55661)
					{
						bVar4 = true;
					}
					bVar5 = false;
					if (unk_0x398F615441F52A47() || unk_0x329E4482E654B910())
					{
						bVar5 = true;
					}
					else
					{
						if (Global_91145.f_8)
						{
							bVar5 = true;
						}
						if (Global_55679)
						{
							bVar5 = true;
						}
					}
					if (func_94(0))
					{
						bVar5 = true;
						Global_55679 = 1;
					}
					iVar6 = Global_67905;
					if (Global_55662)
					{
						func_91(Global_55663);
						iVar0 = 2;
						func_90(&Local_45, "HISHPA", &Global_55674, 0);
						if (iVar6 == 69 || iVar6 == 70)
						{
							func_89(&Local_45, 3, "ACTATAKE_AG", "", Global_99250.f_1.f_126[Global_55663 /*23*/], 0, 0, 0);
						}
						else
						{
							func_89(&Local_45, 3, "POTATAKE", "", Global_99250.f_1.f_126[Global_55663 /*23*/], 0, 0, 0);
						}
						iVar7 = 0;
						iVar7 = 0;
						while (iVar7 < Global_87669[Global_55663 /*38*/].f_37)
						{
							if (Global_87669[Global_55663 /*38*/].f_31[iVar7] > 0)
							{
								func_89(&Local_45, 3, func_88(Global_87669[Global_55663 /*38*/].f_25[iVar7]), "", (-1 * Global_87669[Global_55663 /*38*/].f_31[iVar7]), 0, 0, 0);
							}
							iVar7++;
						}
						if ((((Global_99250.f_1.f_126[Global_55663 /*23*/].f_2[0] > 0 || iVar6 == 74) || iVar6 == 75) || iVar6 == 69) || iVar6 == 70)
						{
							func_89(&Local_45, 3, "ACTATAKE_M", "", Global_99250.f_1.f_126[Global_55663 /*23*/].f_2[0], 0, 0, 0);
						}
						if ((Global_99250.f_1.f_126[Global_55663 /*23*/].f_2[1] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_89(&Local_45, 3, "ACTATAKE_F", "", Global_99250.f_1.f_126[Global_55663 /*23*/].f_2[1], 0, 0, 0);
						}
						if ((Global_99250.f_1.f_126[Global_55663 /*23*/].f_2[2] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_89(&Local_45, 3, "ACTATAKE_T", "", Global_99250.f_1.f_126[Global_55663 /*23*/].f_2[2], 0, 0, 0);
						}
						if (Global_87659.f_7 > 0)
						{
							func_89(&Local_45, 3, "ACTATAKE_L", "", Global_87659.f_7, 0, 0, 0);
						}
						iVar8 = func_86(func_87(Global_55663));
						iVar9 = 0;
						iVar10 = 0;
						iVar7 = 0;
						while (iVar7 < Global_87468[iVar8 /*19*/])
						{
							if (!func_85(Global_99250.f_1.f_12[iVar8 /*6*/][iVar7]))
							{
								iVar9 = (iVar9 + Global_99250.f_1.f_126[Global_55663 /*23*/].f_17[iVar7]);
							}
							else
							{
								iVar10 = (iVar10 + Global_99250.f_1.f_126[Global_55663 /*23*/].f_17[iVar7]);
							}
							iVar7++;
						}
						if (iVar6 == 74 || iVar6 == 75)
						{
							func_89(&Local_45, 3, "LACKTAKE", "", iVar9, 0, 0, 0);
						}
						else
						{
							func_89(&Local_45, 3, "CREWTAKE", "", iVar9, 0, 0, 0);
						}
						if (iVar10 > 0)
						{
							if (!func_94(0))
							{
								switch (iVar6)
								{
									case 90:
										unk_0x5716C8F12991E399(joaat("hcs_penalty_jewel_funeral"), iVar10, 1);
										break;
									
									case 93:
										unk_0x5716C8F12991E399(joaat("hcs_penalty_paleto_funeral"), iVar10, 1);
										break;
									
									case 69:
									case 70:
										unk_0x5716C8F12991E399(joaat("hcs_penalty_bureau_funeral"), iVar10, 1);
										break;
									
									case 84:
									case 85:
										unk_0x5716C8F12991E399(joaat("hcs_penalty_bigs_funeral"), iVar10, 1);
										break;
									}
							}
							func_89(&Local_45, 3, "HSTENDPFUN", "", iVar10, 0, 0, 0);
						}
					}
					else
					{
						func_90(&Local_45, "MISHPA", &Global_55674, 0);
					}
					if (Global_67754 > 0)
					{
						func_70(&Local_45);
					}
					if (!Global_55649)
					{
						func_63();
					}
					while (!bVar5)
					{
						if (unk_0x398F615441F52A47() || unk_0x329E4482E654B910())
						{
							bVar5 = true;
						}
						unk_0x4EDE34FBADD967A6(0);
					}
					if ((bVar5 || Global_55679) && !bVar4)
					{
						if (!Global_55661)
						{
							func_59(&Local_45, 0, 0);
						}
						bVar11 = false;
						if (!Global_67904)
						{
							switch (Global_67905)
							{
								case 50:
								case 51:
								case 52:
									unk_0x6BFEA4147919A51C("HoldMissionCompleteWhenPrepared", 1);
									func_55(1);
									bVar11 = true;
									break;
								
								default:
									unk_0x6BFEA4147919A51C("HoldMissionCompleteWhenPrepared", 1);
									func_55(0);
									bVar11 = true;
									break;
							}
						}
						else
						{
							unk_0x6BFEA4147919A51C("HoldMissionCompleteWhenPrepared", 1);
							func_55(1);
							bVar11 = true;
						}
						iVar1 = func_54();
						unk_0xC8C54AFEF8609CEF("MISHSTA", 3);
						while (!unk_0x77E40DD6F32BC674(3))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						bLocal_634 = true;
						while (unk_0x7B8549A4F94FA4C8())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						while (unk_0x28D605B18777DE18(unk_0x7F3E348C0892D8D2()))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						func_59(&Local_45, 1, 0);
						unk_0x6BFEA4147919A51C("HoldMissionCompleteWhenPrepared", 0);
						if (bVar11)
						{
							while (!unk_0xCBBD42E3F7E1A51B())
							{
								unk_0x4EDE34FBADD967A6(0);
							}
						}
						unk_0xB1E56B14F84FC087();
					}
					if (Global_55652)
					{
						iLocal_633 = 1;
						Global_55652 = 0;
					}
					unk_0xC1B1E9A034A63A62(0);
				}
				if (bLocal_634 && !Global_55660)
				{
					if (unk_0xB1A77D5C890711F9(joaat("appcamera")) > 0)
					{
						func_51(0);
					}
					if (Global_67754 > 0 || Global_55649)
					{
						if (Global_55679)
						{
							unk_0x227C85DAD96E2942(7);
						}
						if (iVar1 && !Global_55649)
						{
							Global_36522 = 1;
						}
						if (!Global_55661)
						{
							if (func_21(&Local_45, 0, unk_0xBBDA792448DB5A89(iVar0), 0, 0, 0))
							{
								Global_55660 = 1;
							}
							func_20();
						}
						if (Global_55679)
						{
							unk_0x227C85DAD96E2942(7);
						}
					}
					func_19(1);
					if (!unk_0x398F615441F52A47())
					{
						func_17();
					}
					if (!func_16(0))
					{
						switch (func_14("AM_H_PASS"))
						{
							case 2:
								func_11("AM_H_PASS", 3, 2000, 2500, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_10(0);
								break;
							}
						}
				}
				bLocal_632 = Global_55653;
				if (Global_55650)
				{
				}
				else
				{
					unk_0x28D605B18777DE18(unk_0x7F3E348C0892D8D2());
					if (unk_0x070BBD7287E8E744(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2())) < 1)
					{
						Global_55661 = 1;
					}
					if (((((func_98() || func_9()) || Global_55660) || Global_69586) || Global_55661) || !bLocal_634)
					{
						Global_55649 = 0;
						Global_55653 = 0;
						iLocal_633 = 0;
						Global_55656 = 0;
						Global_55657 = 0;
						Global_55667 = 0;
						Global_55670 = 0;
						func_19(0);
						func_2();
						Global_55660 = 0;
						bVar2 = true;
					}
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1(&Local_45);
	Global_25364 = 0;
	Global_55664 = 0;
	unk_0x2F798BA2098FDADE();
}

void func_1(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xD2E03CEA477E4E3D(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x2C063B4379F0C076())
		{
			unk_0x758017413321C628(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x360FCC9A8FE84159(0);
			unk_0x098CA28C04E62E55();
		}
		unk_0xD2E03CEA477E4E3D(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xBE2F8BFF037AA9F4(0);
		uParam0->f_564 = 0;
	}
	if (!Global_69585)
	{
		if (!unk_0x28D605B18777DE18(unk_0x7F3E348C0892D8D2()))
		{
			if (!Global_69586)
			{
				if (unk_0x2CC731F9E664299E() && !func_94(0))
				{
					unk_0xCA6D671341405469(800);
				}
			}
		}
	}
	func_19(0);
}

void func_2()
{
	if (Global_55659)
	{
		return;
	}
	Global_55668 = 0;
	Global_67754 = 0;
	Global_55670 = 0;
	if (Global_55667)
	{
	}
	Global_55667 = 0;
	func_19(0);
	func_8();
	Global_67906 = 0;
	Global_55658 = 1;
	func_6();
	func_5();
	func_4();
	func_3();
	Global_55649 = 0;
	Global_55679 = 0;
	Global_55687 = -1;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_67941[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_67950 = 0;
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_67907[iVar0 /*2*/] = 0;
		Global_67907[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_67940 = 0;
}

void func_5()
{
	Global_55818 = 0;
}

void func_6()
{
	Global_55678 = 0;
	Global_55682 = func_7(joaat("sp0_shots"));
	Global_55681 = func_7(joaat("sp0_hits"));
	Global_55684 = func_7(joaat("sp1_shots"));
	Global_55683 = func_7(joaat("sp1_hits"));
	Global_55686 = func_7(joaat("sp2_shots"));
	Global_55685 = func_7(joaat("sp2_hits"));
}

int func_7(int iParam0)
{
	var uVar0;
	
	unk_0xBA16CA557222A92B(iParam0, &uVar0, -1);
	return uVar0;
}

void func_8()
{
	int iVar0;
	
	Global_55688 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55689[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

var func_9()
{
	return Global_1315910;
}

void func_10(int iParam0)
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
		unk_0x573691DB812DC8AA(&(Global_99250.f_24863.f_150[iVar1]), iVar0);
	}
}

void func_11(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_12(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_12(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35D1CAD6ADAB6491(sParam0, ""))
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
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0x35D1CAD6ADAB6491(&(Global_99250.f_24863[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99250.f_24863.f_145 < 9)
	{
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_4), sParam1, 16);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_8 = (unk_0x3EAC9995EC220C5A() + iParam3);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_9 = iParam5;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_11 = iParam6;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_12 = uParam2;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_13 = iParam7;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_14 = iParam8;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = ((unk_0x3EAC9995EC220C5A() + iParam3) + iParam4);
		}
		else
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = -1;
		}
		Global_99250.f_24863.f_145++;
		func_13();
	}
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_99250.f_24863.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[0])
			{
				Global_99250.f_24863.f_146[0] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[1])
			{
				Global_99250.f_24863.f_146[1] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[2])
			{
				Global_99250.f_24863.f_146[2] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_14(char* sParam0)
{
	if (unk_0x35D1CAD6ADAB6491(sParam0, &Global_97895))
	{
		return 1;
	}
	if (func_15(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_15(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0x35D1CAD6ADAB6491(uParam0, &(Global_99250.f_24863[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)
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
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_24863.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_17()
{
	unk_0xC08831A338A1D76E();
	func_18();
}

void func_18()
{
	Global_17118.f_134 = 1;
}

void func_19(int iParam0)
{
	Global_69577 = iParam0;
	Global_69578 = iParam0;
}

void func_20()
{
	Global_17118.f_6 = 1;
}

int func_21(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0x27A15A339F2F298B() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0x27A15A339F2F298B();
	if (!unk_0x4C779B19E6DDCDA2())
	{
		if (unk_0xA989E7AFA45B368A(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0xE030B3865A559522(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x2CC731F9E664299E() || unk_0x8DD09BB8ACF9E623())
		{
			unk_0xBE2F8BFF037AA9F4(1);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (!unk_0x4C779B19E6DDCDA2())
		{
			if (unk_0xB32A2CF30C462699(unk_0x8ACD527A7E574590()))
			{
				unk_0x6B5B946261CEF74B(unk_0x8ACD527A7E574590());
			}
		}
	}
	unk_0xCA3D1FCD234B8E0B(7);
	unk_0xCA3D1FCD234B8E0B(8);
	unk_0xCA3D1FCD234B8E0B(9);
	unk_0xCA3D1FCD234B8E0B(6);
	unk_0xCA3D1FCD234B8E0B(19);
	unk_0x6E20845D23D3DFD4(2, 19, 1);
	unk_0x6E20845D23D3DFD4(0, 37, 1);
	unk_0x6E20845D23D3DFD4(0, 21, 1);
	unk_0x6E20845D23D3DFD4(0, 28, 1);
	unk_0x6E20845D23D3DFD4(0, 29, 1);
	unk_0x6E20845D23D3DFD4(0, 171, 1);
	func_49();
	if (unk_0x417D84639C1F982B(2))
	{
		if (unk_0xAE27B9DCC9579B36() || (unk_0x2CC731F9E664299E() && !unk_0x329E4482E654B910()))
		{
			unk_0xFD55C4B9BC2A66F5();
		}
	}
	Global_36250 = 1;
	if (!uParam0->f_563)
	{
		switch (func_46(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2())))
		{
			case 1:
				unk_0x23D87B2CECB53E05("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x23D87B2CECB53E05("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x23D87B2CECB53E05("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + unk_0xF34EE736CF047844((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_45(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_45(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_45((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_45(30f) - func_45(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_19(1);
		uParam0->f_572 = (uParam0->f_572 + unk_0xF2DB717A73826179((0f + (1000f * unk_0x0000000050597EE2()))));
		func_26(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_30 = func_25(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					unk_0x758017413321C628(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x098CA28C04E62E55();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_25(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x758017413321C628(uParam0->f_1, "TRANSITION_OUT");
			unk_0x098CA28C04E62E55();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * unk_0x0000000050597EE2())));
				}
			}
		}
		uParam0->f_548 = func_25(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x18670847D587698A(2))
			{
				if (unk_0xEDE19C6ED6E2F478(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_22(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0x618071F6827C232E(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0xEDE19C6ED6E2F478(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0x758017413321C628(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x098CA28C04E62E55();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x758017413321C628(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x098CA28C04E62E55();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_22(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					unk_0x758017413321C628(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x098CA28C04E62E55();
				}
				uParam0->f_559 = func_25((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * unk_0x0000000050597EE2())), 0f, 1f);
				uParam0->f_573 = func_25((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_25((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * unk_0x0000000050597EE2())), 0f, 1f);
			uParam0->f_573 = func_25((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0x618071F6827C232E(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		else
		{
			if (!bVar0)
			{
				func_19(0);
			}
			return !bVar0;
		}
	}
	func_19(0);
	return 1;
}

void func_22(var uParam0, bool bParam1)
{
	unk_0x758017413321C628(uParam0->f_4, "CLEAR_ALL");
	unk_0x098CA28C04E62E55();
	if (unk_0x2C063B4379F0C076())
	{
		unk_0x758017413321C628(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x360FCC9A8FE84159(1);
		unk_0x098CA28C04E62E55();
	}
	unk_0x758017413321C628(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4D57F6B69CCB6D95(0);
	func_24(unk_0x7DD16933DB23299D(2, 215, 1));
	func_23("ES_HELP");
	if (unk_0x2C063B4379F0C076())
	{
		unk_0x360FCC9A8FE84159(1);
		unk_0x4D57F6B69CCB6D95(215);
	}
	unk_0x098CA28C04E62E55();
	if (bParam1)
	{
		unk_0x758017413321C628(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x4D57F6B69CCB6D95(1);
		func_24(unk_0x7DD16933DB23299D(2, 216, 1));
		func_23("ES_XPAND");
		if (unk_0x2C063B4379F0C076())
		{
			unk_0x360FCC9A8FE84159(1);
			unk_0x4D57F6B69CCB6D95(216);
		}
		unk_0x098CA28C04E62E55();
	}
	unk_0x758017413321C628(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x098CA28C04E62E55();
}

void func_23(char* sParam0)
{
	unk_0xC976485333F81CE8(sParam0);
	unk_0xC8C5D5B9E15EB2E2();
}

void func_24(var uParam0)
{
	unk_0x2747B3A98BE1082E(uParam0);
}

float func_25(float fParam0, float fParam1, float fParam2)
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

void func_26(var uParam0, float fParam1, int iParam2)
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = unk_0xF2DB717A73826179((uParam0->f_547 * 255f));
	fVar1 = (func_44() * 0.25f);
	if (unk_0xEDE19C6ED6E2F478(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x758017413321C628(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_23(&(uParam0->f_5));
				func_23(&(uParam0->f_13));
				unk_0x4D57F6B69CCB6D95(100);
				unk_0x360FCC9A8FE84159(1);
				unk_0x4D57F6B69CCB6D95(uParam0->f_56);
				unk_0x360FCC9A8FE84159(iParam2);
				unk_0x4D57F6B69CCB6D95(69);
				unk_0x098CA28C04E62E55();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0x758017413321C628(uParam0->f_1, "TRANSITION_UP");
				unk_0xBA93E45C163C745D(0.15f);
				unk_0x360FCC9A8FE84159(1);
				unk_0x098CA28C04E62E55();
				uParam0->f_3 = 1;
			}
		}
		func_43();
		unk_0xE636AA747867BC3D(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_45((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_44());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	fVar7 = func_42(&(uParam0->f_13));
	if (fVar6 < fVar7)
	{
		fVar6 = (fVar7 + (3f * 0.006f));
	}
	if (unk_0x52846F7B892BD059(0) < 1.4f)
	{
		fVar6 = (fVar6 * 1.3f);
	}
	fVar7 = func_42(&(uParam0->f_550));
	fVar8 = (((0.119f + 0.05f) / func_44()) / 2.5f);
	if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
	{
		if (fVar6 < (fVar7 + (2.6f * fVar8)))
		{
			fVar6 = (fVar7 + (2.6f * fVar8));
		}
	}
	else if (fVar6 < (fVar7 + (1.9f * fVar8)))
	{
		fVar6 = (fVar7 + (2f * fVar8));
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0xE494527A450B8456(2, 215);
	unk_0xE494527A450B8456(2, 216);
	unk_0xE494527A450B8456(2, 200);
	unk_0x6E20845D23D3DFD4(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_39((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * unk_0x0000000050597EE2())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0x2CC731F9E664299E())
			{
				unk_0x46A5D995D57103EA();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0xCA3D1FCD234B8E0B(7);
				unk_0xCA3D1FCD234B8E0B(8);
				unk_0xCA3D1FCD234B8E0B(9);
				unk_0xCA3D1FCD234B8E0B(6);
				unk_0xE636AA747867BC3D(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x6E20845D23D3DFD4(0, 140, 1);
				unk_0x6E20845D23D3DFD4(0, 141, 1);
				unk_0x6E20845D23D3DFD4(0, 142, 1);
				unk_0x6E20845D23D3DFD4(2, 188, 1);
				if (unk_0x09097C4EB51A520B(2, 188))
				{
					unk_0xBBEB613A917D7EE8(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0xBBEB613A917D7EE8(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x6E20845D23D3DFD4(2, 187, 1);
				if (unk_0x09097C4EB51A520B(2, 187))
				{
					unk_0xBBEB613A917D7EE8(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0xBBEB613A917D7EE8(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x6E20845D23D3DFD4(2, 202, 1);
				if (unk_0x09097C4EB51A520B(2, 202))
				{
					unk_0xBBEB613A917D7EE8(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0xBBEB613A917D7EE8(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0xCA3D1FCD234B8E0B(7);
				unk_0xCA3D1FCD234B8E0B(8);
				unk_0xCA3D1FCD234B8E0B(9);
				unk_0xCA3D1FCD234B8E0B(6);
				unk_0x6E20845D23D3DFD4(0, 140, 1);
				unk_0x6E20845D23D3DFD4(0, 141, 1);
				unk_0x6E20845D23D3DFD4(0, 142, 1);
				if (unk_0x618071F6827C232E(2, 215) || unk_0x09097C4EB51A520B(2, 200))
				{
					unk_0xBBEB613A917D7EE8(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0xBBEB613A917D7EE8(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0xF63BA5AC6A181C40(1, &uVar13, &uVar14, &uVar15, &iVar16);
	unk_0x3F570C434DAE03B3(uVar13, uVar14, uVar15, iVar0);
	unk_0x1A1C41FB33FB4759(fVar9, fVar10);
	unk_0xB81FA419A7DF8808(0);
	unk_0x812DA59718C7CF24(1f, 0.4f);
	fVar1 = (fVar1 - func_45(6f));
	fVar1 = (fVar1 + (func_45(30f) - func_45((2f * 2f))));
	fVar11 = (fVar2 - func_45((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_25((fVar11 / (0.6f * func_45(25f))), 0f, 1f);
		func_43();
		unk_0x6F9FB0053F328D49(0.5f, (fVar1 - (func_45((2f - 0.5f)) - 0.001388889f)), fVar6, func_38(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_45((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_45((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_44())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_45(25f))), 0f, 1f);
			func_35(uParam0, iVar17, (fVar1 + func_45(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_45(25f));
		iVar17++;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_45((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_44())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_45(2f));
			fVar12 = func_25((fVar11 / (0.6f * func_45(25f))), 0f, 1f);
			func_43();
			unk_0x6F9FB0053F328D49(0.5f, (fVar1 + func_45((2f * 0.5f))), fVar6, func_38(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_45((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_44())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_45(25f))), 0f, 1f);
			unk_0x3F570C434DAE03B3(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_29(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x7B22015BCC2AAAAE() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_44()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_44()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_44()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_44()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			unk_0x1A1C41FB33FB4759(fVar20, fVar21);
			unk_0xB81FA419A7DF8808(1);
			unk_0x812DA59718C7CF24(1f, 0.4f);
			func_28(&(uParam0->f_550), fVar20, (fVar1 + func_45((2f * 2f))), 0, 0, 0);
			unk_0x1A1C41FB33FB4759(fVar20, fVar21);
			unk_0xB81FA419A7DF8808(2);
			unk_0x812DA59718C7CF24(1f, 0.4f);
			unk_0x9DEC218A753E0E4D(0);
			func_43();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x1A1C41FB33FB4759(fVar20, fVar22);
			unk_0x3F570C434DAE03B3(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x978803CE12B5FCBA("PERCENTAGE");
					unk_0xA50C1D6E503AA51E(uParam0->f_554);
					unk_0x1AC4FC30A9B7577A(fVar20, (fVar1 + func_45((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x978803CE12B5FCBA("FO_TWO_NUM");
					unk_0xA50C1D6E503AA51E(uParam0->f_554);
					unk_0xA50C1D6E503AA51E(uParam0->f_555);
					unk_0x1AC4FC30A9B7577A(fVar20, (fVar1 + func_45((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x978803CE12B5FCBA("MTPHPER_XPNO");
					unk_0xA50C1D6E503AA51E(uParam0->f_554);
					unk_0x1AC4FC30A9B7577A(fVar20, (fVar1 + func_45((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0xF63BA5AC6A181C40(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0xF63BA5AC6A181C40(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0xF63BA5AC6A181C40(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_27(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_45(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				unk_0xD66F6109A26F109D(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_45(30f) - 2f));
		}
	}
}

float func_27(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_28(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x9DEC218A753E0E4D(iParam3);
	unk_0x7C2084C68CEC316C(iParam5);
	func_43();
	if (bParam4)
	{
		unk_0x978803CE12B5FCBA("STRING");
		unk_0x82E0649BF28E05D3(sParam0);
	}
	else
	{
		unk_0x978803CE12B5FCBA(sParam0);
	}
	unk_0x1AC4FC30A9B7577A(fParam1, fParam2, 0);
}

int func_29(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_34(iParam0);
	uVar1 = func_32(iParam0, bParam1);
	if (unk_0x39BD4614CF899227(uVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x87B14B27D777B56E(&iVar2, &iVar3);
			fVar5 = unk_0x52846F7B892BD059(0);
			if (func_31())
			{
				iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar5));
			}
			fVar6 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_31())
			{
				fVar4 = 1f;
			}
			if (unk_0xB1A77D5C890711F9(joaat("director_mode")) > 0)
			{
				unk_0x0E0B4DFAC438518B(&iVar2, &iVar3);
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0x0E0B4DFAC438518B(&iVar2, &iVar3);
		}
		Var7 = { unk_0x59A3C08D6C3850F4(uVar0, uVar1) };
		Var7.f_0 = (Var7.f_0 * (func_30(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_30(iParam0) / fVar4));
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
			if (!unk_0xD151440E25EB1559() && iParam0 != 30)
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

float func_30(int iParam0)
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

int func_31()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x87B14B27D777B56E(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_32(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0x0AAC2160036975D9(&(Global_17257.f_6682[iParam0 /*16*/])))
	{
		return func_33(&(Global_17257.f_6682[iParam0 /*16*/]));
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

var func_33(var uParam0)
{
	return uParam0;
}

char* func_34(int iParam0)
{
	if (!unk_0x0AAC2160036975D9(&(Global_17257.f_5881[iParam0 /*16*/])))
	{
		return func_33(&(Global_17257.f_5881[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_35(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xF63BA5AC6A181C40(1, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0x3F570C434DAE03B3(uVar0, uVar1, uVar2, iParam5);
	unk_0x1A1C41FB33FB4759(fParam3, fParam4);
	unk_0xB81FA419A7DF8808(1);
	unk_0x812DA59718C7CF24(1f, func_37(14f));
	unk_0x9DEC218A753E0E4D(0);
	unk_0x7C2084C68CEC316C(0);
	func_43();
	if (uParam0->f_531[iParam1])
	{
		unk_0x978803CE12B5FCBA("STRING");
		unk_0x82E0649BF28E05D3(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x978803CE12B5FCBA(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0xA50C1D6E503AA51E(uParam0->f_489[iParam1]);
		}
	}
	unk_0x1AC4FC30A9B7577A(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_29(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xD66F6109A26F109D("CommonMenu", func_32(7, 0), (fParam4 - 0.006f), ((fParam2 + func_45(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_29(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xD66F6109A26F109D("CommonMenu", func_32(5, 0), (fParam4 - 0.006f), ((fParam2 + func_45(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_29(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xD66F6109A26F109D("CommonMenu", func_32(6, 0), (fParam4 - 0.006f), ((fParam2 + func_45(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0xB81FA419A7DF8808(1);
	}
	else
	{
		unk_0xB81FA419A7DF8808(2);
	}
	unk_0x812DA59718C7CF24(1f, func_37(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x1A1C41FB33FB4759(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x1A1C41FB33FB4759(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x3F570C434DAE03B3(uVar0, uVar1, uVar2, iParam5);
	func_36(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_36(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x9DEC218A753E0E4D(0);
	unk_0x7C2084C68CEC316C(0);
	func_43();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0x812DA59718C7CF24(1f, func_37(18f));
			unk_0x7C2084C68CEC316C(4);
			if (iParam0 < 0)
			{
				unk_0x970219AE613F6E2B("ESMINDOLLA");
				unk_0x9214E63FEF74EFBC((-1 * iParam0), 1);
				fVar1 = unk_0xE02D086D4AE06321(0);
			}
			else
			{
				unk_0x970219AE613F6E2B("ESDOLLA");
				unk_0x9214E63FEF74EFBC(iParam0, 1);
				fVar1 = unk_0xE02D086D4AE06321(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0xD66F6109A26F109D("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xD66F6109A26F109D("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xD66F6109A26F109D("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x812DA59718C7CF24(1f, func_37(14f));
			break;
	}
	unk_0xFC059569EB1C537B(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x978803CE12B5FCBA("PERCENTAGE");
			unk_0xA50C1D6E503AA51E(iParam0);
			break;
		
		case 1:
			unk_0x7C2084C68CEC316C(5);
			unk_0x978803CE12B5FCBA("FO_NUM");
			unk_0xA50C1D6E503AA51E(iParam0);
			break;
		
		case 2:
			unk_0x7C2084C68CEC316C(5);
			unk_0x978803CE12B5FCBA("FO_TWO_NUM");
			unk_0xA50C1D6E503AA51E(iParam0);
			unk_0xA50C1D6E503AA51E(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x812DA59718C7CF24(1f, func_37(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x978803CE12B5FCBA("ESMINDOLLA");
				unk_0x9214E63FEF74EFBC((-1 * iParam0), 1);
			}
			else
			{
				unk_0x978803CE12B5FCBA("ESDOLLA");
				unk_0x9214E63FEF74EFBC(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x978803CE12B5FCBA(sParam4);
			break;
		
		case 7:
			unk_0x978803CE12B5FCBA("STRING");
			unk_0x82E0649BF28E05D3(sParam4);
			break;
		
		case 8:
			unk_0x7C2084C68CEC316C(5);
			unk_0x978803CE12B5FCBA("STRING");
			unk_0x31E2823F336CCAD6(iParam0, 14);
			break;
		
		case 9:
			unk_0x7C2084C68CEC316C(5);
			unk_0x978803CE12B5FCBA("STRING");
			unk_0x31E2823F336CCAD6(iParam0, 6);
			break;
		
		case 10:
			unk_0x7C2084C68CEC316C(5);
			unk_0x978803CE12B5FCBA("STRING");
			unk_0x31E2823F336CCAD6(iParam0, 2055);
			break;
		
		case 18:
			unk_0x7C2084C68CEC316C(5);
			unk_0x978803CE12B5FCBA("STRING");
			unk_0x31E2823F336CCAD6(iParam0, 2055);
			break;
		
		case 12:
			unk_0x978803CE12B5FCBA("AHD_DIST");
			unk_0xA50C1D6E503AA51E(iParam0);
			break;
		
		case 13:
			unk_0x978803CE12B5FCBA(sParam4);
			unk_0xA50C1D6E503AA51E(iParam0);
			unk_0xA50C1D6E503AA51E(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x978803CE12B5FCBA(sParam4);
			unk_0xA50C1D6E503AA51E(iParam0);
			unk_0xA50C1D6E503AA51E(iParam1);
			break;
		
		case 16:
			unk_0x978803CE12B5FCBA(sParam4);
			unk_0xA50C1D6E503AA51E(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x1AC4FC30A9B7577A((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x812DA59718C7CF24(1f, func_37(14f));
		}
		else
		{
			unk_0x1AC4FC30A9B7577A(fParam2, fParam3, 0);
		}
	}
}

float func_37(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_38(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_39(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_41(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339928.f_1 = 1;
		func_40(7, iVar0);
		Global_1339928.f_3988[iVar0] = iParam0;
		StringCopy(&(Global_1339928.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339928.f_3988.f_172[iVar0] = iParam2;
		Global_1339928.f_3988.f_216[iVar0] = iParam3;
		Global_1339928.f_3988.f_183[iVar0] = iParam4;
		Global_1339928.f_3988.f_194[iVar0] = iParam5;
		Global_1339928.f_3988.f_249[iVar0] = iParam6;
		Global_1339928.f_3988.f_260[iVar0] = iParam7;
		Global_1339928.f_3988.f_205[iVar0] = iParam8;
		Global_1339928.f_3988.f_314[iVar0] = iParam9;
		Global_1339928.f_3988.f_325[iVar0] = iParam10;
		Global_1339928.f_3988.f_357[iVar0] = iParam11;
		Global_1339928.f_3988.f_238[iVar0] = iParam12;
		Global_1339928.f_3988.f_271[iVar0] = iParam13;
		Global_1339928.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_40(int iParam0, int iParam1)
{
	unk_0x573691DB812DC8AA(&(Global_1339928.f_4594[iParam0]), iParam1);
}

bool func_41(int iParam0, int iParam1)
{
	return unk_0xB56FEBC510E7E9DE(Global_1339928.f_4594[iParam0], iParam1);
}

float func_42(char* sParam0)
{
	unk_0x970219AE613F6E2B(sParam0);
	return (unk_0xE02D086D4AE06321(1) / 2f);
}

void func_43()
{
	unk_0x227C85DAD96E2942(1);
	if (unk_0x8DD09BB8ACF9E623() || unk_0x2CC731F9E664299E())
	{
		unk_0x227C85DAD96E2942(7);
	}
	unk_0xD32EBB6D651CD3D6(0);
}

float func_44()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x2C063B4379F0C076())
	{
	}
	return fVar0;
}

float func_45(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_48(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_48(int iParam0)
{
	return iParam0 < 3;
}

void func_49()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_50(0))
		{
			func_51(0);
		}
		unk_0x573691DB812DC8AA(&Global_2284, 2);
	}
}

int func_50(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
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
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0)
{
	if (Global_14571)
	{
		func_53(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x573691DB812DC8AA(&Global_2284, 16);
	}
	if (unk_0xEA9C2A206A86B744())
	{
		unk_0xC9AB825AA4821BDA(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 30);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 30);
	}
	if (!func_52())
	{
		Global_14413.f_1 = 3;
	}
}

int func_52()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_53(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_50(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3E337B53281459DC(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x4317F0DBC6457B31(Global_14350);
		}
		else
		{
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
}

int func_54()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		if (Global_67755[iVar0 /*9*/] > 0)
		{
			if (Global_55884[Global_67755[iVar0 /*9*/] /*13*/].f_7 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_55(bool bParam0)
{
	char* sVar0;
	
	unk_0x50DCB4FEA511F430(0);
	switch (func_56())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0x4F37E08F624169DA(sVar0);
}

int func_56()
{
	func_57();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_57()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_47(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_46(unk_0x77F050A399DB77ED());
			if (func_48(iVar0) && (!func_58(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_48(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_58(int iParam0)
{
	return Global_35700 == iParam0;
}

int func_59(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_62(uParam0);
	func_61(uParam0);
	if (unk_0x35D1CAD6ADAB6491(&(uParam0->f_550), "SPR_RESULT") || (unk_0x35D1CAD6ADAB6491(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x011CAFBB4767F059("CommonMenu", 0);
		unk_0x011CAFBB4767F059("MPLeaderboard", 0);
		unk_0x011CAFBB4767F059("MPHud", 0);
		uParam0->f_1 = unk_0x2F14983962462691("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x5292D71961990F27("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0xEDE19C6ED6E2F478(uParam0->f_1) || !unk_0x234DE5FAACE83930("CommonMenu")) || !unk_0x234DE5FAACE83930("MPLeaderboard")) || !unk_0x234DE5FAACE83930("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0xEDE19C6ED6E2F478(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0xEDE19C6ED6E2F478(uParam0->f_1) || !unk_0x234DE5FAACE83930("CommonMenu")) || !unk_0x234DE5FAACE83930("MPLeaderboard")) || !unk_0x234DE5FAACE83930("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0xEDE19C6ED6E2F478(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_60(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_22(uParam0, 1);
		}
		else
		{
			func_22(uParam0, 0);
		}
	}
	Global_69578 = 1;
	return 1;
}

void func_60(var uParam0)
{
	unk_0x758017413321C628(uParam0->f_4, "CLEAR_ALL");
	unk_0x098CA28C04E62E55();
	if (unk_0x2C063B4379F0C076())
	{
		unk_0x758017413321C628(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x360FCC9A8FE84159(1);
		unk_0x098CA28C04E62E55();
	}
	unk_0x758017413321C628(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4D57F6B69CCB6D95(2);
	func_24(unk_0x7DD16933DB23299D(2, 188, 1));
	func_23("ES_HELP_TU");
	unk_0x098CA28C04E62E55();
	unk_0x758017413321C628(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4D57F6B69CCB6D95(1);
	func_24(unk_0x7DD16933DB23299D(2, 187, 1));
	func_23("ES_HELP_TD");
	unk_0x098CA28C04E62E55();
	unk_0x758017413321C628(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4D57F6B69CCB6D95(0);
	func_24(unk_0x7DD16933DB23299D(2, 202, 1));
	func_23("ES_HELP_AB");
	unk_0x098CA28C04E62E55();
	unk_0x758017413321C628(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x098CA28C04E62E55();
}

void func_61(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xB81FA419A7DF8808(0);
	unk_0x812DA59718C7CF24(1f, func_37(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x970219AE613F6E2B("STRING");
			unk_0x82E0649BF28E05D3(&(uParam0->f_13));
			fVar0 = unk_0xE02D086D4AE06321(1);
		}
		else
		{
			unk_0x970219AE613F6E2B(&(uParam0->f_13));
			fVar0 = unk_0xE02D086D4AE06321(1);
		}
	}
	else
	{
		unk_0x970219AE613F6E2B("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0xA50C1D6E503AA51E(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x703D2B4B1C7E10B6(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x82E0649BF28E05D3(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0xE02D086D4AE06321(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_62(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_63()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	struct<3> Var80;
	
	if (Global_67754 == 0)
	{
		return;
	}
	if (Global_67905 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		if (Global_67755[iVar0 /*9*/].f_3 != 0)
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		iVar3 = Global_67755[iVar0 /*9*/];
		bVar4 = !Global_55884[iVar3 /*13*/].f_7;
		bVar5 = Global_55884[iVar3 /*13*/].f_8;
		uVar6 = Global_55884[iVar3 /*13*/].f_12;
		fVar7 = Global_55884[iVar3 /*13*/].f_9;
		bVar8 = false;
		bVar8 = false;
		if (func_69(iVar3, Global_67755[iVar0 /*9*/].f_1))
		{
			bVar8 = true;
		}
		if (bVar4)
		{
			if (bVar8)
			{
				iVar1 = (iVar1 + 100000000);
			}
		}
		if (bVar5)
		{
			iVar9 = Global_67755[iVar0 /*9*/].f_1;
			iVar10 = unk_0xF34EE736CF047844((IntToFloat(iVar9) * fVar7));
			iVar2 = (iVar2 + iVar10);
			iVar1 = (iVar1 + iVar10);
		}
		iVar0++;
	}
	Global_67900 = iVar1;
	Global_67901 = iVar2;
	if (unk_0x3A691B47D5DE2593())
	{
		if (Global_67904 == 0)
		{
			iVar11 = Global_67905;
			if (iVar11 == 90)
			{
				if (Global_99250.f_7703.f_99.f_205[func_68(0)] == 2)
				{
					Var12.f_2.f_1 = 4;
					Var12.f_0 = 716;
					unk_0x2A5EB7435F92FF1F(&Var12);
					unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
					unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
					unk_0xB33C6DC28CD900CB(126, 1, 0f);
					unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
					unk_0xB33C6DC28CD900CB(135, func_67(810), 0f);
					unk_0xB33C6DC28CD900CB(136, func_67(811), 0f);
					unk_0xB33C6DC28CD900CB(132, func_67(812), 0f);
					unk_0xB33C6DC28CD900CB(2, func_67(813), 0f);
					unk_0xB33C6DC28CD900CB(141, func_67(814), 0f);
					unk_0xB33C6DC28CD900CB(127, func_67(815), 0f);
					unk_0xB33C6DC28CD900CB(137, func_67(816), 0f);
					unk_0xB33C6DC28CD900CB(7, func_67(817), 0f);
					unk_0xB33C6DC28CD900CB(133, func_67(818), 0f);
					unk_0xB33C6DC28CD900CB(90, func_67(819), 0f);
					Var12.f_0 = 717;
					unk_0x2A5EB7435F92FF1F(&Var12);
					unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
					unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
					unk_0xB33C6DC28CD900CB(126, 1, 0f);
					unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
					unk_0xB33C6DC28CD900CB(135, func_67(810), 0f);
					unk_0xB33C6DC28CD900CB(136, func_67(811), 0f);
					unk_0xB33C6DC28CD900CB(132, func_67(812), 0f);
					unk_0xB33C6DC28CD900CB(2, func_67(813), 0f);
					unk_0xB33C6DC28CD900CB(141, func_67(814), 0f);
					unk_0xB33C6DC28CD900CB(127, func_67(815), 0f);
					unk_0xB33C6DC28CD900CB(137, func_67(816), 0f);
					unk_0xB33C6DC28CD900CB(7, func_67(817), 0f);
					unk_0xB33C6DC28CD900CB(133, func_67(818), 0f);
					unk_0xB33C6DC28CD900CB(90, func_67(819), 0f);
				}
				else
				{
					func_65(iVar11);
				}
			}
			else if (iVar11 == 47)
			{
				Var80.f_2.f_1 = 4;
				Var80.f_0 = 673;
				unk_0x2A5EB7435F92FF1F(&Var80);
				unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
				unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
				unk_0xB33C6DC28CD900CB(126, 1, 0f);
				unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
				unk_0xB33C6DC28CD900CB(142, func_67(413), 0f);
				unk_0xB33C6DC28CD900CB(1, func_67(414), 0f);
				unk_0xB33C6DC28CD900CB(87, func_67(415), 0f);
				unk_0xB33C6DC28CD900CB(138, func_67(416), 0f);
				unk_0xB33C6DC28CD900CB(133, func_67(417), 0f);
				unk_0xB33C6DC28CD900CB(7, func_67(418), 0f);
				unk_0xB33C6DC28CD900CB(90, func_67(419), 0f);
				unk_0xB33C6DC28CD900CB(92, func_67(420), 0f);
				unk_0xB33C6DC28CD900CB(5, func_67(421), 0f);
				unk_0xB33C6DC28CD900CB(127, func_67(422), 0f);
				unk_0xB33C6DC28CD900CB(139, func_67(423), 0f);
				unk_0xB33C6DC28CD900CB(134, func_67(424), 0f);
				unk_0xB33C6DC28CD900CB(141, func_67(425), 0f);
				unk_0xB33C6DC28CD900CB(137, func_67(426), 0f);
				unk_0xB33C6DC28CD900CB(132, func_67(427), 0f);
				unk_0xB33C6DC28CD900CB(2, func_67(428), 0f);
				unk_0xB33C6DC28CD900CB(140, 0, 0f);
				Var80.f_0 = 672;
				unk_0x2A5EB7435F92FF1F(&Var80);
				unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
				unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
				unk_0xB33C6DC28CD900CB(126, 1, 0f);
				unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
				unk_0xB33C6DC28CD900CB(142, func_67(413), 0f);
				unk_0xB33C6DC28CD900CB(1, func_67(414), 0f);
				unk_0xB33C6DC28CD900CB(87, func_67(415), 0f);
				unk_0xB33C6DC28CD900CB(138, func_67(416), 0f);
				unk_0xB33C6DC28CD900CB(133, func_67(417), 0f);
				unk_0xB33C6DC28CD900CB(7, func_67(418), 0f);
				unk_0xB33C6DC28CD900CB(90, func_67(419), 0f);
				unk_0xB33C6DC28CD900CB(92, func_67(420), 0f);
				unk_0xB33C6DC28CD900CB(5, func_67(421), 0f);
				unk_0xB33C6DC28CD900CB(127, func_67(422), 0f);
				unk_0xB33C6DC28CD900CB(139, func_67(423), 0f);
				unk_0xB33C6DC28CD900CB(134, func_67(424), 0f);
				unk_0xB33C6DC28CD900CB(141, func_67(425), 0f);
				unk_0xB33C6DC28CD900CB(135, func_67(426), 0f);
				unk_0xB33C6DC28CD900CB(132, func_67(427), 0f);
				unk_0xB33C6DC28CD900CB(2, func_67(428), 0f);
				unk_0xB33C6DC28CD900CB(140, 0, 0f);
			}
			else
			{
				func_65(iVar11);
			}
			Global_99250.f_7703.f_330[iVar11 /*6*/].f_4 = Global_67900;
		}
		else
		{
			func_64(Global_67905);
		}
	}
}

void func_64(var uParam0)
{
	var uVar0;
	
	uVar0 = uParam0;
	uVar0 = uVar0;
}

void func_65(int iParam0)
{
	struct<3> Var0;
	struct<13> Var68;
	var uVar81;
	
	Var0.f_2.f_1 = 4;
	if (!unk_0x3A691B47D5DE2593())
	{
		return;
	}
	if (unk_0x99BD29C80FF8FFC7())
	{
		Var68 = { func_66(unk_0x8ACD527A7E574590()) };
		if (unk_0x149478BD8C953602(&Var68))
		{
			if (unk_0x9B8FA4DF999D2A3A(&uVar81, 35, &Var68))
			{
				Var0.f_1 = uVar81;
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			Var0.f_0 = 577;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(0), 0f);
			unk_0xB33C6DC28CD900CB(148, func_67(1), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(2), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(3), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(4), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(5), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(6), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(7), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(8), 0f);
			Var0.f_0 = 913;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(0), 0f);
			unk_0xB33C6DC28CD900CB(148, func_67(1), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(2), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(3), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(4), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(5), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(6), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(7), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(8), 0f);
			return;
		
		case 1:
			Var0.f_0 = 576;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(9), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(10), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(11), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(12), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(13), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(14), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(15), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(16), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(17), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(18), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(19), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(20), 0f);
			Var0.f_0 = 575;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(9), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(10), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(11), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(12), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(13), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(14), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(15), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(16), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(17), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(18), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(19), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(20), 0f);
			return;
		
		case 2:
			Var0.f_0 = 579;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(21), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(22), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(23), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(24), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(25), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(26), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(27), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(28), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(29), 0f);
			Var0.f_0 = 578;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(21), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(22), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(23), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(24), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(25), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(26), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(27), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(28), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(29), 0f);
			return;
		
		case 3:
			Var0.f_0 = 797;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(30), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(31), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(32), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(33), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(34), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(35), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(36), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(37), 0f);
			Var0.f_0 = 796;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(30), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(31), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(32), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(33), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(34), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(35), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(36), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(37), 0f);
			return;
		
		case 4:
			Var0.f_0 = 799;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(43), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(44), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(45), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(46), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(47), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(48), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(49), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(50), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(51), 0f);
			Var0.f_0 = 798;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(43), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(44), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(45), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(46), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(47), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(48), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(49), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(50), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(51), 0f);
			return;
		
		case 5:
			Var0.f_0 = 801;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(57), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(58), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(59), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(60), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(61), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(62), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(63), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(64), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(65), 0f);
			Var0.f_0 = 800;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(57), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(58), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(59), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(60), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(61), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(62), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(63), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(64), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(65), 0f);
			return;
		
		case 6:
			Var0.f_0 = 803;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(71), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(72), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(73), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(74), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(75), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(76), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(77), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(78), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(79), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(80), 0f);
			Var0.f_0 = 802;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(71), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(72), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(73), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(74), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(75), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(76), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(77), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(78), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(79), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(80), 0f);
			return;
		
		case 7:
			Var0.f_0 = 805;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(86), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(87), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(88), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(89), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(90), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(91), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(92), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(93), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(94), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(95), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(96), 0f);
			Var0.f_0 = 804;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(86), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(87), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(88), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(89), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(90), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(91), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(92), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(93), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(94), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(95), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(96), 0f);
			return;
		
		case 9:
			Var0.f_0 = 639;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(102), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(103), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(104), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(105), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(106), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(107), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(108), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(109), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(110), 0f);
			Var0.f_0 = 638;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(102), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(103), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(104), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(105), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(106), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(107), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(108), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(109), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(110), 0f);
			return;
		
		case 8:
			Var0.f_0 = 641;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(111), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(112), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(113), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(114), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(115), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(116), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(117), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(118), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(119), 0f);
			Var0.f_0 = 640;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(111), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(112), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(113), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(114), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(115), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(116), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(117), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(118), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(119), 0f);
			return;
		
		case 10:
			Var0.f_0 = 646;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(120), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(121), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(122), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(123), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(124), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(125), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(126), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(127), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(128), 0f);
			Var0.f_0 = 645;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(120), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(121), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(122), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(123), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(124), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(125), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(126), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(127), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(128), 0f);
			return;
		
		case 11:
			Var0.f_0 = 671;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(129), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(130), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(131), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(132), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(133), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(134), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(135), 0f);
			Var0.f_0 = 670;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(129), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(130), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(131), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(132), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(133), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(134), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(135), 0f);
			return;
		
		case 12:
			Var0.f_0 = 603;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(136), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(137), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(138), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(139), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(140), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(141), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(142), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(143), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(144), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(145), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(146), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(147), 0f);
			Var0.f_0 = 602;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(136), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(137), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(138), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(139), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(140), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(141), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(142), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(143), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(144), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(145), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(146), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(147), 0f);
			return;
		
		case 13:
			Var0.f_0 = 605;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(148), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(149), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(150), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(151), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(152), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(153), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(154), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(155), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(156), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(157), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(158), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(159), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(160), 0f);
			Var0.f_0 = 604;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(148), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(149), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(150), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(151), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(152), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(153), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(154), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(155), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(156), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(157), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(158), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(159), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(160), 0f);
			return;
		
		case 14:
			Var0.f_0 = 648;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(161), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(162), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(163), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(164), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(165), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(166), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(167), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(168), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(169), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(170), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(171), 0f);
			Var0.f_0 = 647;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(161), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(162), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(163), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(164), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(165), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(166), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(167), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(168), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(169), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(170), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(171), 0f);
			return;
		
		case 15:
			Var0.f_0 = 650;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(172), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(173), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(174), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(175), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(176), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(177), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(178), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(179), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(180), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(181), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(182), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(183), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(184), 0f);
			Var0.f_0 = 649;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(172), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(173), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(174), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(175), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(176), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(177), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(178), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(179), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(180), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(181), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(182), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(183), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(184), 0f);
			return;
		
		case 16:
			Var0.f_0 = 656;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(185), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(186), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(187), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(188), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(189), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(190), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(191), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(192), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(193), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(194), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(195), 0f);
			Var0.f_0 = 655;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(185), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(186), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(187), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(188), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(189), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(190), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(191), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(192), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(193), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(194), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(195), 0f);
			return;
		
		case 17:
			Var0.f_0 = 583;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(196), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(197), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(198), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(199), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(200), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(201), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(202), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(203), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(204), 0f);
			Var0.f_0 = 582;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(196), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(197), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(198), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(199), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(200), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(201), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(202), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(203), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(204), 0f);
			return;
		
		case 18:
			Var0.f_0 = 585;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(205), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(206), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(207), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(208), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(209), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(210), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(211), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(212), 0f);
			unk_0xB33C6DC28CD900CB(140, func_67(213), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(214), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(215), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(216), 0f);
			Var0.f_0 = 584;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(205), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(206), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(207), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(208), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(209), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(210), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(211), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(212), 0f);
			unk_0xB33C6DC28CD900CB(140, func_67(213), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(214), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(215), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(216), 0f);
			return;
		
		case 19:
			Var0.f_0 = 587;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(217), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(218), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(219), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(220), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(221), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(222), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(223), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(224), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(225), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(226), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(227), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(228), 0f);
			Var0.f_0 = 586;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(217), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(218), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(219), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(220), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(221), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(222), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(223), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(224), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(225), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(226), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(227), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(228), 0f);
			return;
		
		case 20:
			Var0.f_0 = 609;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(229), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(230), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(231), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(232), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(233), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(234), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(235), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(236), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(237), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(238), 0f);
			Var0.f_0 = 608;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(229), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(230), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(231), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(232), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(233), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(234), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(235), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(236), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(237), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(238), 0f);
			return;
		
		case 21:
			Var0.f_0 = 621;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(239), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(240), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(241), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(242), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(243), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(244), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(245), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(246), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(247), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(248), 0f);
			Var0.f_0 = 620;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(239), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(240), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(241), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(242), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(243), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(244), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(245), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(246), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(247), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(248), 0f);
			return;
		
		case 22:
			Var0.f_0 = 675;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(249), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(250), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(251), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(252), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(253), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(254), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(255), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(256), 0f);
			Var0.f_0 = 674;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(249), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(250), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(251), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(252), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(253), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(254), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(255), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(256), 0f);
			return;
		
		case 26:
			Var0.f_0 = 712;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(257), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(258), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(259), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(260), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(261), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(262), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(263), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(264), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(265), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(266), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(267), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(268), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(269), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(270), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(271), 0f);
			unk_0xB33C6DC28CD900CB(103, func_67(272), 0f);
			Var0.f_0 = 711;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(257), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(258), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(259), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(260), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(261), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(262), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(263), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(264), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(265), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(266), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(267), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(268), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(269), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(270), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(271), 0f);
			unk_0xB33C6DC28CD900CB(103, func_67(272), 0f);
			return;
		
		case 29:
			Var0.f_0 = 611;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(273), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(274), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(275), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(276), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(277), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(278), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(279), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(280), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(281), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(282), 0f);
			Var0.f_0 = 610;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(273), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(274), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(275), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(276), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(277), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(278), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(279), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(280), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(281), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(282), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 30:
			Var0.f_0 = 615;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(283), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(284), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(285), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(286), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(287), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(288), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(289), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(290), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(291), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(292), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(293), 0f);
			Var0.f_0 = 614;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(283), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(284), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(285), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(286), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(287), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(288), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(289), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(290), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(291), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(292), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(293), 0f);
			return;
		
		case 31:
			Var0.f_0 = 623;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(294), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(295), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(296), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(297), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(298), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(299), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(300), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(301), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(302), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(303), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(304), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(305), 0f);
			Var0.f_0 = 622;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(294), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(295), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(296), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(297), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(298), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(299), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(300), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(301), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(302), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(303), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(304), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(305), 0f);
			return;
		
		case 38:
			Var0.f_0 = 627;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(306), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(307), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(308), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(309), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(310), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(311), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(312), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(313), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(314), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(315), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(316), 0f);
			Var0.f_0 = 626;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(306), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(307), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(308), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(309), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(310), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(311), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(312), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(313), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(314), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(315), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(316), 0f);
			return;
		
		case 33:
			Var0.f_0 = 741;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(317), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(318), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(319), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(320), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(321), 0f);
			Var0.f_0 = 740;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(317), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(318), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(319), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(320), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(321), 0f);
			return;
		
		case 34:
			Var0.f_0 = 745;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(322), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(323), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(324), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(325), 0f);
			Var0.f_0 = 742;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(322), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(323), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(324), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(325), 0f);
			return;
		
		case 39:
			Var0.f_0 = 658;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(326), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(327), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(328), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(329), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(330), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(331), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(332), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(333), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(334), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(335), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(336), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(337), 0f);
			Var0.f_0 = 657;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(326), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(327), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(328), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(329), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(330), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(331), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(332), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(333), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(334), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(335), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(336), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(337), 0f);
			return;
		
		case 40:
			Var0.f_0 = 581;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(338), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(339), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(340), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(341), 0f);
			unk_0xB33C6DC28CD900CB(140, func_67(342), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(343), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(344), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(345), 0f);
			Var0.f_0 = 580;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(338), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(339), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(340), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(341), 0f);
			unk_0xB33C6DC28CD900CB(140, func_67(342), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(343), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(344), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(345), 0f);
			return;
		
		case 41:
			Var0.f_0 = 619;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(346), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(347), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(348), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(349), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(350), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(351), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(352), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(353), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(354), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(355), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(356), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(357), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(358), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(359), 0f);
			Var0.f_0 = 618;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(346), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(347), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(348), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(349), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(350), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(351), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(352), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(353), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(354), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(355), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(356), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(357), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(358), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(359), 0f);
			return;
		
		case 42:
			Var0.f_0 = 704;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(360), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(361), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(362), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(363), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(364), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(365), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(366), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(367), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(368), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(369), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(370), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(371), 0f);
			Var0.f_0 = 703;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(360), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(361), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(362), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(363), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(364), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(365), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(366), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(367), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(368), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(369), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(370), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(371), 0f);
			return;
		
		case 43:
			Var0.f_0 = 593;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(372), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(373), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(374), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(375), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(376), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(377), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(378), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(379), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(380), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(381), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(382), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(383), 0f);
			Var0.f_0 = 592;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(372), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(373), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(374), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(375), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(376), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(377), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(378), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(379), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(380), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(381), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(382), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(383), 0f);
			return;
		
		case 44:
			Var0.f_0 = 589;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(384), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(385), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(386), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(387), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(388), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(389), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(390), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(391), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(392), 0f);
			Var0.f_0 = 588;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(384), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(385), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(386), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(387), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(388), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(389), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(390), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(391), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(392), 0f);
			return;
		
		case 45:
			Var0.f_0 = 635;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(393), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(394), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(395), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(396), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(397), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(398), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(399), 0f);
			Var0.f_0 = 634;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(393), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(394), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(395), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(396), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(397), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(398), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(399), 0f);
			return;
		
		case 46:
			Var0.f_0 = 669;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(400), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(401), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(402), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(403), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(404), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(405), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(406), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(407), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(408), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(409), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(410), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(411), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(412), 0f);
			Var0.f_0 = 668;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(400), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(401), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(402), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(403), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(404), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(405), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(406), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(407), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(408), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(409), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(410), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(411), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(412), 0f);
			return;
		
		case 47:
			Var0.f_0 = 673;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(413), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(414), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(415), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(416), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(417), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(418), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(419), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(420), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(421), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(422), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(423), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(424), 0f);
			unk_0xB33C6DC28CD900CB(141, func_67(425), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(426), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(427), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(428), 0f);
			Var0.f_0 = 672;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(413), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(414), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(415), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(416), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(417), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(418), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(419), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(420), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(421), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(422), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(423), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(424), 0f);
			unk_0xB33C6DC28CD900CB(141, func_67(425), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(426), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(427), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(428), 0f);
			return;
		
		case 48:
			Var0.f_0 = 694;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(429), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(430), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(431), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(432), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(433), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(434), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(435), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(436), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(437), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(438), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(439), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(440), 0f);
			Var0.f_0 = 693;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(429), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(430), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(431), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(432), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(433), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(434), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(435), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(436), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(437), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(438), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(439), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(440), 0f);
			return;
		
		case 49:
			Var0.f_0 = 702;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(441), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(442), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(443), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(444), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(445), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(446), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(447), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(448), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(449), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(450), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(451), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(452), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(453), 0f);
			Var0.f_0 = 701;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(441), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(442), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(443), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(444), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(445), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(446), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(447), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(448), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(449), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(450), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(451), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(452), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(453), 0f);
			return;
		
		case 53:
			Var0.f_0 = 714;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(454), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(455), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(456), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(457), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(458), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(459), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(460), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(461), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(462), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(463), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(464), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(465), 0f);
			Var0.f_0 = 713;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(454), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(455), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(456), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(457), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(458), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(459), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(460), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(461), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(462), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(463), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(464), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(465), 0f);
			return;
		
		case 60:
			Var0.f_0 = 809;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(466), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(467), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(468), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(469), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(470), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(471), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(472), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(473), 0f);
			Var0.f_0 = 808;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(466), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(467), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(468), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(469), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(470), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(471), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(472), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(473), 0f);
			return;
		
		case 61:
			Var0.f_0 = 637;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(474), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(475), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(476), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(477), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(478), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(479), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(480), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(481), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(482), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(483), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(484), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(485), 0f);
			Var0.f_0 = 636;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(474), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(475), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(476), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(477), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(478), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(479), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(480), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(481), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(482), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(483), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(484), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(485), 0f);
			return;
		
		case 62:
			Var0.f_0 = 599;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(486), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(487), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(488), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(489), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(490), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(491), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(492), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(493), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(494), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(495), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(496), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(497), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(498), 0f);
			Var0.f_0 = 598;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(486), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(487), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(488), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(489), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(490), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(491), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(492), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(493), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(494), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(495), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(496), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(497), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(498), 0f);
			return;
		
		case 63:
			Var0.f_0 = 601;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(499), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(500), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(501), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(502), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(503), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(504), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(505), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(506), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(507), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(508), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(509), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(510), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(511), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(512), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(513), 0f);
			unk_0xB33C6DC28CD900CB(9, func_67(514), 0f);
			Var0.f_0 = 600;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(499), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(500), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(501), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(502), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(503), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(504), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(505), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(506), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(507), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(508), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(509), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(510), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(511), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(512), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(513), 0f);
			unk_0xB33C6DC28CD900CB(9, func_67(514), 0f);
			return;
		
		case 64:
			Var0.f_0 = 607;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(515), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(516), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(517), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(518), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(519), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(520), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(521), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(522), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(523), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(524), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(525), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(526), 0f);
			Var0.f_0 = 606;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(515), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(516), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(517), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(518), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(519), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(520), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(521), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(522), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(523), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(524), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(525), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(526), 0f);
			return;
		
		case 66:
			Var0.f_0 = 680;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(527), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(528), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(529), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(530), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(531), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(532), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(533), 0f);
			Var0.f_0 = 676;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(527), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(528), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(529), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(530), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(531), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(532), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(533), 0f);
			return;
		
		case 67:
			Var0.f_0 = 679;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(534), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(535), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(536), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(537), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(538), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(539), 0f);
			Var0.f_0 = 678;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(534), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(535), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(536), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(537), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(538), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(539), 0f);
			return;
		
		case 68:
			Var0.f_0 = 725;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(540), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(541), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(542), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(543), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(544), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(545), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(546), 0f);
			Var0.f_0 = 724;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(540), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(541), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(542), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(543), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(544), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(545), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(546), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 69:
			Var0.f_0 = 686;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(547), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(548), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(549), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(550), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(551), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(552), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(553), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(554), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(555), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(556), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(557), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(558), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(559), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(560), 0f);
			Var0.f_0 = 681;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(547), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(548), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(549), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(550), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(551), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(552), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(553), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(554), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(555), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(556), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(557), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(558), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(559), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(560), 0f);
			return;
		
		case 70:
			Var0.f_0 = 721;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(561), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(562), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(563), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(564), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(565), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(566), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(567), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(568), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(569), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(570), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(571), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(572), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(573), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(574), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(575), 0f);
			Var0.f_0 = 720;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(561), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(562), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(563), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(564), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(565), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(566), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(567), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(568), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(569), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(570), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(571), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(572), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(573), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(574), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(575), 0f);
			return;
		
		case 71:
			Var0.f_0 = 617;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(576), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(577), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(578), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(579), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(580), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(581), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(582), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(583), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(584), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(585), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(586), 0f);
			Var0.f_0 = 616;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(576), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(577), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(578), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(579), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(580), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(581), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(582), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(583), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(584), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(585), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(586), 0f);
			return;
		
		case 72:
			Var0.f_0 = 727;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(587), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(588), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(589), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(590), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(591), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(592), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(593), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(594), 0f);
			Var0.f_0 = 726;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(587), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(588), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(589), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(590), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(591), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(592), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(593), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(594), 0f);
			return;
		
		case 73:
			Var0.f_0 = 729;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(595), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(596), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(597), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(598), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(599), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(600), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(601), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(602), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(603), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(604), 0f);
			Var0.f_0 = 728;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(595), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(596), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(597), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(598), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(599), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(600), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(601), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(602), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(603), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(604), 0f);
			return;
		
		case 74:
			Var0.f_0 = 625;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(605), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(606), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(607), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(608), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(609), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(610), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(611), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(612), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(613), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(614), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(615), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(616), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(617), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(618), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(619), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(620), 0f);
			Var0.f_0 = 624;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(605), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(606), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(607), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(608), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(609), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(610), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(611), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(612), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(613), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(614), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(615), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(616), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(617), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(618), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(619), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(620), 0f);
			return;
		
		case 75:
			Var0.f_0 = 719;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(621), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(622), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(623), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(624), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(625), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(626), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(627), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(628), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(629), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(630), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(631), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(632), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(633), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(634), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(635), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(636), 0f);
			Var0.f_0 = 718;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(621), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(622), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(623), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(624), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(625), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(626), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(627), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(628), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(629), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(630), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(631), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(632), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(633), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(634), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(635), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(636), 0f);
			return;
		
		case 76:
			Var0.f_0 = 667;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(637), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(638), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(639), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(640), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(641), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(642), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(643), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(644), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(645), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(646), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(647), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(648), 0f);
			Var0.f_0 = 666;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(637), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(638), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(639), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(640), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(641), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(642), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(643), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(644), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(645), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(646), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(647), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(648), 0f);
			return;
		
		case 78:
			Var0.f_0 = 735;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(649), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(650), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(651), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(652), 0f);
			Var0.f_0 = 734;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(649), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(650), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(651), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(652), 0f);
			return;
		
		case joaat("mpsv_lp0_31"):
			Var0.f_0 = 737;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(653), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(654), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(655), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(656), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(657), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(658), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(659), 0f);
			Var0.f_0 = 736;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(653), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(654), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(655), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(656), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(657), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(658), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(659), 0f);
			return;
		
		case 84:
			Var0.f_0 = 706;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(660), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(661), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(662), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(663), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(664), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(665), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(666), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(667), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(668), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(669), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(670), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(671), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(672), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(673), 0f);
			Var0.f_0 = 705;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(660), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(661), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(662), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(663), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(664), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(665), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(666), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(667), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(668), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(669), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(670), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(671), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(672), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(673), 0f);
			return;
		
		case 85:
			Var0.f_0 = 723;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(674), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(675), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(676), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(677), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(678), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(679), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(680), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(681), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(682), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(683), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(684), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(685), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(686), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(687), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(688), 0f);
			Var0.f_0 = 722;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(674), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(675), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(676), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(677), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(678), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(679), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(680), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(681), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(682), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(683), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(684), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(685), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(686), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(687), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(688), 0f);
			return;
		
		case 86:
			Var0.f_0 = 595;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(689), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(690), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(691), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(692), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(693), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(694), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(695), 0f);
			Var0.f_0 = 594;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(689), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(690), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(691), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(692), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(693), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(694), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(695), 0f);
			return;
		
		case 87:
			Var0.f_0 = 731;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(696), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(697), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(698), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(699), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(700), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(701), 0f);
			Var0.f_0 = 730;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(696), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(697), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(698), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(699), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(700), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(701), 0f);
			return;
		
		case 88:
			Var0.f_0 = 733;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(702), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(703), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(704), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(705), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(706), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(707), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(708), 0f);
			Var0.f_0 = 732;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(702), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(703), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(704), 0f);
			unk_0xB33C6DC28CD900CB(139, func_67(705), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(706), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(707), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(708), 0f);
			return;
		
		case 91:
			Var0.f_0 = 652;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(709), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(710), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(711), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(712), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(713), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(714), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(715), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(716), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(717), 0f);
			Var0.f_0 = 651;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(709), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(710), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(711), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(712), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(713), 0f);
			unk_0xB33C6DC28CD900CB(142, func_67(714), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(715), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(716), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(717), 0f);
			return;
		
		case 92:
			Var0.f_0 = 739;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(718), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(719), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(720), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(721), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(722), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(723), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(724), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(725), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(726), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(727), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(728), 0f);
			Var0.f_0 = 738;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(718), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(719), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(720), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(721), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(722), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(723), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(724), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(725), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(726), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(727), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(728), 0f);
			return;
		
		case 93:
			Var0.f_0 = 654;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(729), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(730), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(731), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(732), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(733), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(734), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(735), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(736), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(737), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(738), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(739), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(740), 0f);
			Var0.f_0 = 653;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(729), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(730), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(731), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(732), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(733), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(734), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(735), 0f);
			unk_0xB33C6DC28CD900CB(87, func_67(736), 0f);
			unk_0xB33C6DC28CD900CB(1, func_67(737), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(738), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(739), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(740), 0f);
			return;
		
		case 90:
			Var0.f_0 = 597;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(810), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(811), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(812), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(813), 0f);
			unk_0xB33C6DC28CD900CB(141, func_67(814), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(815), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(816), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(817), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(818), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(819), 0f);
			Var0.f_0 = 596;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(810), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(811), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(812), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(813), 0f);
			unk_0xB33C6DC28CD900CB(141, func_67(814), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(815), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(816), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(817), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(818), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(819), 0f);
			return;
		
		case 36:
			Var0.f_0 = 831;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(820), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(821), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(822), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(823), 0f);
			Var0.f_0 = 832;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(820), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(821), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(822), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(823), 0f);
			return;
		
		case 37:
			Var0.f_0 = 833;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(824), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(825), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(826), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(827), 0f);
			Var0.f_0 = 834;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(824), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(825), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(826), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(827), 0f);
			return;
		
		case 24:
			Var0.f_0 = 848;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(846), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(847), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(848), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(849), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(850), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(851), 0f);
			Var0.f_0 = 847;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(846), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(847), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(848), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(849), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(850), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(851), 0f);
			return;
		
		case 25:
			Var0.f_0 = 846;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(852), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(853), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(854), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(855), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(856), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(857), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(858), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(859), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(860), 0f);
			Var0.f_0 = 845;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(852), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(853), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(854), 0f);
			unk_0xB33C6DC28CD900CB(5, func_67(855), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(856), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(857), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(858), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(859), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(860), 0f);
			return;
		
		case 59:
			Var0.f_0 = 807;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(861), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(862), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(863), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(864), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(865), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(866), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(867), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(868), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(869), 0f);
			Var0.f_0 = 806;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(861), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(862), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(863), 0f);
			unk_0xB33C6DC28CD900CB(135, func_67(864), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(865), 0f);
			unk_0xB33C6DC28CD900CB(136, func_67(866), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(867), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(868), 0f);
			unk_0xB33C6DC28CD900CB(137, func_67(869), 0f);
			return;
		
		case 65:
			Var0.f_0 = 838;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(870), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(871), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(872), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(873), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(874), 0f);
			Var0.f_0 = 837;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(870), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(871), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(872), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(873), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(874), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 80:
			Var0.f_0 = 917;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(875), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(876), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(877), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(878), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(879), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(880), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(881), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(882), 0f);
			Var0.f_0 = 916;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(875), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(876), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(877), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(878), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(879), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(880), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(881), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(882), 0f);
			return;
		
		case 81:
			Var0.f_0 = 919;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(883), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(884), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(885), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(886), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(887), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(888), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(889), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(890), 0f);
			Var0.f_0 = 918;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(883), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(884), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(885), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(886), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(887), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(888), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(889), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(890), 0f);
			return;
		
		case 82:
			Var0.f_0 = 921;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(891), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(892), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(893), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(894), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(895), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(896), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(897), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(898), 0f);
			Var0.f_0 = 920;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(891), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(892), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(893), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(894), 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(895), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(896), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(897), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(898), 0f);
			return;
		
		case 83:
			Var0.f_0 = 923;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(899), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(900), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(901), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(902), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(903), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(904), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(905), 0f);
			Var0.f_0 = 922;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(899), 0f);
			unk_0xB33C6DC28CD900CB(134, func_67(900), 0f);
			unk_0xB33C6DC28CD900CB(92, func_67(901), 0f);
			unk_0xB33C6DC28CD900CB(133, func_67(902), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(903), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(904), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(905), 0f);
			return;
		
		case 89:
			Var0.f_0 = 925;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(906), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(907), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(908), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(909), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(910), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(911), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(912), 0f);
			Var0.f_0 = 924;
			unk_0x2A5EB7435F92FF1F(&Var0);
			unk_0xB33C6DC28CD900CB(131, Global_67900, 0f);
			unk_0xB33C6DC28CD900CB(162, Global_67901, 0f);
			unk_0xB33C6DC28CD900CB(126, 1, 0f);
			unk_0xB33C6DC28CD900CB(161, Global_67903, 0f);
			unk_0xB33C6DC28CD900CB(138, func_67(906), 0f);
			unk_0xB33C6DC28CD900CB(2, func_67(907), 0f);
			unk_0xB33C6DC28CD900CB(7, func_67(908), 0f);
			unk_0xB33C6DC28CD900CB(127, func_67(909), 0f);
			unk_0xB33C6DC28CD900CB(95, func_67(910), 0f);
			unk_0xB33C6DC28CD900CB(90, func_67(911), 0f);
			unk_0xB33C6DC28CD900CB(132, func_67(912), 0f);
			return;
		
		default:
	}
}

struct<13> func_66(var uParam0)
{
	struct<13> Var0;
	
	unk_0xAEFA54BD5AE42A15(uParam0, &Var0, 13);
	return Var0;
}

int func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0)
	{
		case 665:
		case 676:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Global_99250.f_1.f_126[Global_55663 /*23*/].f_11[iVar0] == 1)
				{
					iVar1 = (iVar1 + Global_99250.f_1.f_126[Global_55663 /*23*/].f_17[iVar0]);
				}
				iVar0++;
			}
			return iVar1;
		
		default:
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		if (Global_67755[iVar0 /*9*/] == iParam0)
		{
			return Global_67755[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_69(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_55884[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_99250.f_29357[4 /*4*/] == func_56())
	{
		Global_55884[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_55884[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_55884[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_55884[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

void func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	if (Global_55649)
	{
		Global_55664 = 0;
		return;
	}
	iLocal_622 = 0;
	iLocal_623 = 0;
	iVar0 = 0;
	if (func_94(0))
	{
		unk_0xDA82A250556943E1();
		Global_55651 = 1;
		unk_0xD94490138F5F2120(33, 33);
	}
	iVar1 = -1;
	iLocal_627 = 0;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		switch (Global_67755[iVar0 /*9*/])
		{
			case 852:
			case 846:
				Global_67755[iVar0 /*9*/].f_1 = 1;
				break;
		}
		if (func_81(uParam0, iVar0))
		{
		}
		if (Global_67755[iVar0 /*9*/] >= 0)
		{
			if (!Global_55884[Global_67755[iVar0 /*9*/] /*13*/].f_7)
			{
				iLocal_623++;
				if (Global_67755[iVar0 /*9*/].f_3 == 2)
				{
					bVar2 = true;
				}
			}
		}
		switch (Global_67755[iVar0 /*9*/])
		{
			case 84:
			case 100:
			case 69:
			case 41:
			case 54:
				iVar1 = Global_67755[iVar0 /*9*/].f_1;
				break;
		}
		iVar0++;
	}
	Global_67903 = iLocal_622;
	fVar3 = func_76(uParam0, iLocal_622, iLocal_623, bVar2);
	if (func_94(0))
	{
		unk_0x6353FFB938A64075(Global_67905);
		unk_0x6353FFB938A64075(unk_0xF2DB717A73826179(fVar3));
		if (bVar2)
		{
			unk_0x6353FFB938A64075(1);
		}
		else
		{
			unk_0x6353FFB938A64075(0);
		}
		if (Global_67904)
		{
			unk_0x6353FFB938A64075(1);
		}
		else
		{
			unk_0x6353FFB938A64075(0);
		}
		unk_0xAEA92C881F5D61CA();
		Global_55651 = 0;
	}
	Global_55664 = 0;
	if (iVar1 > -1)
	{
		fVar3 = unk_0xBBDA792448DB5A89(iVar1);
	}
	func_71(fVar3, bVar2);
}

void func_71(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Global_67904)
	{
		iVar1 = Global_67905;
		fVar0 = func_75(iVar1);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_99250.f_8634.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_74(iVar1, fParam0, bParam1);
		}
	}
	else if (Global_67905 == -1)
	{
	}
	else
	{
		iVar2 = Global_67905;
		fVar0 = func_73(iVar2);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_99250.f_8634.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_72(iVar2, fParam0, bParam1);
		}
	}
}

void func_72(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_99250.f_7703.f_330[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_99250.f_7703.f_330[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_25124 = 1;
}

float func_73(int iParam0)
{
	return Global_99250.f_7703.f_330[iParam0 /*6*/].f_5;
}

void func_74(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_99250.f_17192[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_99250.f_17192[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_25124 = 1;
}

var func_75(int iParam0)
{
	return Global_99250.f_17192[iParam0 /*6*/].f_5;
}

float func_76(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = func_80(iParam1, iParam2, 0);
	iVar1 = func_79(fVar0);
	if (bParam3)
	{
		fVar0 = 50f;
		iVar1 = 1;
	}
	if (fVar0 == 0f)
	{
		func_78(uParam0, 1, "MTPHPER", 0, 0, 0, 0);
		return fVar0;
	}
	iVar2 = 0;
	switch (func_77(iVar1))
	{
		case 109:
			iVar2 = 3;
			break;
		
		case 108:
			iVar2 = 2;
			break;
		
		case 107:
			iVar2 = 1;
			break;
	}
	switch (func_77(iVar1))
	{
		case 109:
			func_78(uParam0, 1, "MTPHPER", unk_0xF2DB717A73826179(fVar0), 0, 0, iVar2);
			break;
		
		case 108:
			func_78(uParam0, 1, "MTPHPER", unk_0xF2DB717A73826179(fVar0), 0, 0, iVar2);
			break;
		
		case 107:
			func_78(uParam0, 1, "MTPHPER", unk_0xF2DB717A73826179(fVar0), 0, 0, iVar2);
			break;
	}
	return fVar0;
}

int func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = 107;
	switch (iParam0)
	{
		case 3:
			iVar0 = 109;
			break;
		
		case 2:
			iVar0 = 108;
			break;
		
		case 1:
			iVar0 = 107;
			break;
	}
	return iVar0;
}

void func_78(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
}

int func_79(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_80(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = unk_0xBBDA792448DB5A89(unk_0x11E019C8F43ACC8A(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_81(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	char* sVar19;
	char* sVar20;
	int iVar21;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (Global_67755[iParam1 /*9*/] >= 0)
	{
	}
	else
	{
		return 0;
	}
	Var2 = { Global_55884[Global_67755[iParam1 /*9*/] /*13*/] };
	if (Var2.f_0 == 15)
	{
		Global_67755[iParam1 /*9*/].f_1 = iLocal_630;
	}
	if (Var2.f_0 == 9)
	{
		Global_67755[iParam1 /*9*/].f_2 = fLocal_629;
	}
	if (Var2.f_0 == 14)
	{
		Global_67755[iParam1 /*9*/].f_1 = unk_0xF34EE736CF047844(Global_67755[iParam1 /*9*/].f_2);
	}
	if (func_69(Global_67755[iParam1 /*9*/], Global_67755[iParam1 /*9*/].f_1))
	{
		fVar0 = 1f;
	}
	if (Global_67755[iParam1 /*9*/].f_3 != 0)
	{
		fVar0 = 0f;
	}
	if (!Var2.f_2 == 0)
	{
		fVar1 = unk_0xBBDA792448DB5A89(unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89(Global_67755[iParam1 /*9*/].f_1) / unk_0xBBDA792448DB5A89(Var2.f_2)) * 100f)));
		if (fVar1 > 100f)
		{
			fVar1 = 100f;
		}
	}
	iVar15 = func_84(Var2.f_4);
	iVar16 = 0;
	switch (Global_67755[iParam1 /*9*/])
	{
		case 42:
		case 55:
		case 85:
		case 70:
		case 101:
			iVar16 = 1;
			break;
		
		case 84:
		case 100:
		case 69:
		case 41:
		case 54:
			iVar16 = 1;
			break;
	}
	if (Global_67755[iParam1 /*9*/].f_3 == 0 || iVar16)
	{
		if (Var2.f_3)
		{
			if ((iVar15 > Global_67755[iParam1 /*9*/].f_1 || iVar15 < 0) || iVar15 == -1)
			{
				func_83(Global_67755[iParam1 /*9*/].f_1, Global_67755[iParam1 /*9*/]);
			}
		}
		else if ((Global_67755[iParam1 /*9*/].f_1 > iVar15 || iVar15 < 0) || iVar15 == -1)
		{
			func_83(Global_67755[iParam1 /*9*/].f_1, Global_67755[iParam1 /*9*/]);
		}
	}
	iVar17 = Global_67755[iParam1 /*9*/].f_1;
	if (Var2.f_7)
	{
		return 1;
	}
	iVar18 = 1;
	if (fVar0 == 1f)
	{
		iLocal_622++;
		iVar18 = 2;
	}
	sVar19 = func_82(Global_67755[iParam1 /*9*/]);
	if (Global_67755[iParam1 /*9*/].f_3 != 0)
	{
		if (!func_94(0))
		{
			func_83(-1, Global_67755[iParam1 /*9*/]);
		}
		sVar20 = "MTPHPERRET";
		switch (Global_67755[iParam1 /*9*/].f_3)
		{
			case 4:
				sVar20 = "MTPHPERCHE";
				break;
			
			case 2:
				sVar20 = "MTPHPERSKI";
				break;
			
			case 3:
				sVar20 = "MTPHPERTAX";
				break;
			
			case 5:
				sVar20 = "MTPHPERNOREC";
				break;
		}
		if (iLocal_627 == Global_67755[iParam1 /*9*/].f_3)
		{
			sVar20 = "";
		}
		iLocal_627 = Global_67755[iParam1 /*9*/].f_3;
		func_89(uParam0, 6, sVar19, sVar20, Global_67755[iParam1 /*9*/].f_1, 0, 3, 0);
	}
	else
	{
		iLocal_627 = 0;
		switch (Var2.f_0)
		{
			case 1:
				func_89(uParam0, 8, sVar19, "", Global_67755[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 2:
				func_89(uParam0, 9, sVar19, "", Global_67755[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 3:
				func_89(uParam0, 0, sVar19, "", Global_67755[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 4:
			case 17:
				func_89(uParam0, 9, sVar19, "", Global_67755[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 5:
				func_89(uParam0, 11, sVar19, "", unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(Global_67755[iParam1 /*9*/].f_1) / unk_0xBBDA792448DB5A89(Var2.f_2)) * 100f)), 0, iVar18, 0);
				break;
			
			case 6:
				func_89(uParam0, 0, sVar19, "", Global_67755[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 7:
				if (iVar17 > Var2.f_2)
				{
					iVar17 = Var2.f_2;
				}
				func_89(uParam0, 2, sVar19, "", iVar17, Var2.f_2, iVar18, 0);
				break;
			
			case 8:
				iVar21 = Global_67755[iParam1 /*9*/].f_1;
				if (iVar21 > Var2.f_2)
				{
					iVar21 = Var2.f_2;
				}
				func_89(uParam0, 2, sVar19, "", iVar21, Var2.f_2, iVar18, 0);
				break;
			
			case 9:
				func_89(uParam0, 11, sVar19, "", unk_0xF2DB717A73826179(Global_67755[iParam1 /*9*/].f_2), 0, iVar18, 0);
				break;
			
			case 10:
			case 15:
			case 16:
				func_89(uParam0, 1, sVar19, "", Global_67755[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 11:
				func_89(uParam0, 11, sVar19, "", Global_67755[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 14:
				func_89(uParam0, 12, sVar19, "", Global_67755[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 12:
			case 13:
				func_89(uParam0, 3, sVar19, "", Global_67755[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			default:
				break;
			}
	}
	return 0;
}

char* func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTA_0";
		
		case 9:
			return "MISHSTA_1";
		
		case 10:
			return "MISHSTA_2";
		
		case 21:
			return "MISHSTA_1";
		
		case 22:
			return "MISHSTA_3";
		
		case 338:
			return "MISHSTA_0";
		
		case 339:
			return "MISHSTA_4";
		
		case 196:
			return "MISHSTA_5";
		
		case 197:
			return "MISHSTA_0";
		
		case 205:
			return "MISHSTA_6";
		
		case 206:
			return "MISHSTA_7";
		
		case 207:
			return "MISHSTA_8";
		
		case 218:
			return "MISHSTA_1";
		
		case 217:
			return "MISHSTA_0";
		
		case 384:
			return "MISHSTA_1";
		
		case 385:
			return "MISHSTA_9";
		
		case 372:
			return "MISHSTA_10";
		
		case 373:
			return "MISHSTA_11";
		
		case 375:
			return "MISHSTA_1";
		
		case 374:
			return "MISHSTA_12";
		
		case 486:
			return "MISHSTA_13";
		
		case 487:
			return "MISHSTA_11";
		
		case 488:
			return "MISHSTA_1";
		
		case 489:
			return "MISHSTA_14";
		
		case 490:
			return "MISHSTA_15";
		
		case 499:
			return "MISHSTA_11";
		
		case 500:
			return "MISHSTA_1";
		
		case 501:
			return "MISHSTA_16";
		
		case 502:
			return "MISHSTA_17";
		
		case 515:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 516:
			return "MISHSTA_18";
		
		case 517:
			return "MISHSTA_12";
		
		case 518:
			return "MISHSTA_19";
		
		case 137:
			return "MISHSTA_12";
		
		case 136:
			return "MISHSTA_20";
		
		case 148:
			return "MISHSTA_11";
		
		case 149:
			return "MISHSTA_12";
		
		case 150:
			return "MISHSTA_21";
		
		case 229:
			return "MISHSTA_6";
		
		case 230:
			return "MISHSTA_22";
		
		case 273:
			return "MISHSTA_10";
		
		case 274:
			return "MISHSTA_11";
		
		case 275:
			return "MISHSTA_1";
		
		case 276:
			return "MISHSTA_23";
		
		case 277:
			return "MISHSTA_12";
		
		case 283:
			return "MISHSTA_1";
		
		case 284:
			return "MISHSTA_10";
		
		case 285:
			return "MISHSTA_11";
		
		case 346:
			return "MISHSTA_1";
		
		case 239:
			return "MISHSTA_1";
		
		case 240:
			return "MISHSTA_24";
		
		case 241:
			return "MISHSTA_25";
		
		case 242:
			return "MISHSTA_26";
		
		case 294:
			return "MISHSTA_27";
		
		case 295:
			return "MISHSTA_28";
		
		case 296:
			return "MISHSTA_29";
		
		case 297:
			return "MISHSTA_30";
		
		case 298:
			return "MISHSTA_31";
		
		case 308:
			return "MISHSTA_32";
		
		case 102:
			return "MISHSTA_0";
		
		case 115:
			return "MISHSTA_33";
		
		default:
	}
	switch (iParam0)
	{
		case 114:
			return "MISHSTA_1";
		
		case 111:
			return "MISHSTA_34";
		
		case 112:
			return "MISHSTA_35";
		
		case 113:
			return "MISHSTA_36";
		
		case 396:
			return "MISHSTA_1";
		
		case 393:
			return "MISHSTA_37";
		
		case 394:
			return "MISHSTA_38";
		
		case 395:
			return "MISHSTA_39";
		
		case 120:
			return "MISHSTA_0";
		
		case 121:
			return "MISHSTA_6";
		
		case 122:
			return "MISHSTA_40";
		
		case 123:
			return "MISHSTA_41";
		
		case 124:
			return "MISHSTA_42";
		
		case 161:
			return "MISHSTA_43";
		
		case 172:
			return "MISHSTA_43";
		
		case 173:
			return "MISHSTA_1";
		
		case 174:
			return "MISHSTA_11";
		
		case 175:
			return "MISHSTA_44";
		
		case 185:
			return "MISHSTA_1";
		
		case 186:
			return "MISHSTA_6";
		
		case 187:
			return "MISHSTA_45";
		
		case 326:
			return "MISHSTA_46";
		
		case 129:
			return "MISHSTA_1";
		
		case 130:
			return "MISHSTA_0";
		
		case 466:
			return "MISHSTA_1";
		
		case 400:
			return "MISHSTA_1";
		
		case 401:
			return "MISHSTA_47";
		
		case 413:
			return "MISHSTA_48";
		
		case 414:
			return "MISHSTA_10";
		
		case 415:
			return "MISHSTA_11";
		
		case 416:
			return "MISHSTA_49";
		
		default:
	}
	switch (iParam0)
	{
		case 417:
			return "MISHSTA_50";
		
		case 249:
			return "MISHSTA_1";
		
		case 474:
			return "MISHSTA_1";
		
		case 257:
			return "MISHSTA_1";
		
		case 527:
			return "MISHSTA_51";
		
		case 528:
			return "MISHSTA_52";
		
		case 529:
			return "MISHSTA_53";
		
		case 534:
			return "MISHSTA_54";
		
		case 709:
			return "MISHSTA_55";
		
		case 576:
			return "MISHSTA_1";
		
		case 577:
			return "MISHSTA_56";
		
		case 578:
			return "MISHSTA_57";
		
		case 579:
			return "MISHSTA_58";
		
		case 742:
			return "MISHSTA_59";
		
		case 741:
			return "MISHSTA_60";
		
		case 743:
			return "MISHSTA_61";
		
		case 745:
			return "MISHSTA_62";
		
		case 748:
			return "MISHSTA_62";
		
		case 747:
			return "MISHSTA_63";
		
		case 749:
			return "MISHSTA_64";
		
		case 750:
			return "MISHSTA_65";
		
		case 751:
			return "MISHSTA_66";
		
		case 754:
			return "MISHSTA_67";
		
		case 753:
			return "MISHSTA_68";
		
		case 757:
			return "MISHSTA_69";
		
		case 756:
			return "MISHSTA_70";
		
		case 755:
			return "MISHSTA_71";
		
		case 759:
			return "MISHSTA_72";
		
		case 758:
			return "MISHSTA_73";
		
		case 761:
			return "MISHSTA_74";
		
		case 760:
			return "MISHSTA_75";
		
		default:
	}
	switch (iParam0)
	{
		case 762:
			return "MISHSTA_76";
		
		case 763:
			return "MISHSTA_77";
		
		case 766:
			return "MISHSTA_78";
		
		case 769:
			return "MISHSTA_79";
		
		case 768:
			return "MISHSTA_80";
		
		case 767:
			return "MISHSTA_81";
		
		case 771:
			return "MISHSTA_82";
		
		case 770:
			return "MISHSTA_83";
		
		case 773:
			return "MISHSTA_84";
		
		case 772:
			return "MISHSTA_85";
		
		case 775:
			return "MISHSTA_86";
		
		case 774:
			return "MISHSTA_87";
		
		case 777:
			return "MISHSTA_88";
		
		case 776:
			return "MISHSTA_89";
		
		case 779:
			return "MISHSTA_90";
		
		case 778:
			return "MISHSTA_91";
		
		case 782:
			return "MISHSTA_92";
		
		case 780:
			return "MISHSTA_93";
		
		case 781:
			return "MISHSTA_94";
		
		case 784:
			return "MISHSTA_95";
		
		case 783:
			return "MISHSTA_96";
		
		case 786:
			return "MISHSTA_97";
		
		case 785:
			return "MISHSTA_98";
		
		case 788:
			return "MISHSTA_99";
		
		case 787:
			return "MISHSTA_100";
		
		case 789:
			return "MISHSTA_101";
		
		case 792:
			return "MISHSTA_102";
		
		case 791:
			return "MISHSTA_103";
		
		case 790:
			return "MISHSTA_104";
		
		case 793:
			return "MISHSTA_105";
		
		case 794:
			return "MISHSTA_106";
		
		default:
	}
	switch (iParam0)
	{
		case 795:
			return "MISHSTA_0";
		
		case 796:
			return "MISHSTA_107";
		
		case 797:
			return "MISHSTA_108";
		
		case 798:
			return "MISHSTA_109";
		
		case 799:
			return "MISHSTA_110";
		
		case 800:
			return "MISHSTA_111";
		
		case 801:
			return "MISHSTA_112";
		
		case 802:
			return "MISHSTA_113";
		
		case 803:
			return "MISHSTA_114";
		
		case 804:
			return "MISHSTA_115";
		
		case 805:
			return "MISHSTA_116";
		
		case 806:
			return "MISHSTA_117";
		
		case 807:
			return "MISHSTA_118";
		
		case 808:
			return "MISHSTA_119";
		
		case 809:
			return "MISHSTA_120";
		
		case 429:
			return "MISHSTA_1";
		
		case 441:
			return "MISHSTA_1";
		
		case 4:
			return "MISHSTA_121";
		
		case 13:
			return "MISHSTA_11";
		
		case 341:
			return "MISHSTA_122";
		
		case 5:
			return "MISHSTA_123";
		
		case 6:
			return "MISHSTA_124";
		
		case 20:
			return "MISHSTA_10";
		
		case 169:
			return "MISHSTA_125";
		
		case 731:
			return "MISHSTA_126";
		
		case 737:
			return "MISHSTA_10";
		
		case 145:
			return "MISHSTA_127";
		
		case 159:
			return "MISHSTA_10";
		
		case 353:
			return "MISHSTA_10";
		
		case 357:
			return "MISHSTA_11";
		
		case 605:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 606:
			return "MISHSTA_10";
		
		case 613:
			return "MISHSTA_128";
		
		case 616:
			return "MISHSTA_129";
		
		case 628:
			return "MISHSTA_130";
		
		case 309:
			return "MISHSTA_11";
		
		case 310:
			return "MISHSTA_10";
		
		case 313:
			return "MISHSTA_131";
		
		case 477:
			return "MISHSTA_37";
		
		case 482:
			return "MISHSTA_132";
		
		case 484:
			return "MISHSTA_133";
		
		case 715:
			return "MISHSTA_123";
		
		case 570:
			return "MISHSTA_10";
		
		case 566:
			return "MISHSTA_11";
		
		case 565:
			return "MISHSTA_134";
		
		case 572:
			return "MISHSTA_135";
		
		case 574:
			return "MISHSTA_136";
		
		case 431:
			return "MISHSTA_11";
		
		case 443:
			return "MISHSTA_137";
		
		case 446:
			return "MISHSTA_138";
		
		case 452:
			return "MISHSTA_139";
		
		case 364:
			return "MISHSTA_11";
		
		case 365:
			return "MISHSTA_10";
		
		case 369:
			return "MISHSTA_140";
		
		case 668:
			return "MISHSTA_11";
		
		case 670:
			return "MISHSTA_141";
		
		case 678:
			return "MISHSTA_11";
		
		case 265:
			return "MISHSTA_11";
		
		case 266:
			return "MISHSTA_10";
		
		case 270:
			return "MISHSTA_142";
		
		case 271:
			return "MISHSTA_143";
		
		case 272:
			return "MISHSTA_144";
		
		default:
	}
	switch (iParam0)
	{
		case 765:
			return "MISHSTA_145";
		
		case 764:
			return "MISHSTA_146";
		
		case 330:
			return "MISHSTA_11";
		
		case 331:
			return "MISHSTA_10";
		
		case 643:
			return "MISHSTA_147";
		
		case 644:
			return "MISHSTA_148";
		
		case 645:
			return "MISHSTA_149";
		
		case 646:
			return "MISHSTA_150";
		
		case 404:
			return "MISHSTA_10";
		
		case 721:
			return "MISHSTA_151";
		
		case 752:
			return "MISHSTA_152";
		
		case 147:
			return "MISHSTA_1";
		
		case 336:
			return "MISHSTA_1";
		
		case 371:
			return "MISHSTA_1";
		
		case 557:
			return "MISHSTA_1";
		
		case 575:
			return "MISHSTA_1";
		
		case 629:
			return "MISHSTA_1";
		
		case 647:
			return "MISHSTA_1";
		
		case 685:
			return "MISHSTA_1";
		
		case 693:
			return "MISHSTA_1";
		
		case 738:
			return "MISHSTA_1";
		
		case 650:
			return "MISHSTA_0";
		
		case 649:
			return "MISHSTA_153";
		
		case 825:
			return "MISHSTA_154";
		
		case 824:
			return "MISHSTA_155";
		
		case 821:
			return "MISHSTA_156";
		
		case 820:
			return "MISHSTA_157";
		
		case 319:
			return "MISHSTA_158";
		
		case 318:
			return "MISHSTA_159";
		
		case 317:
			return "MISHSTA_1";
		
		case 322:
			return "MISHSTA_1";
		
		default:
	}
	switch (iParam0)
	{
		case 323:
			return "MISHSTA_0";
		
		case 324:
			return "MISHSTA_160";
		
		case 816:
			return "MISHSTA_161";
		
		case 815:
			return "MISHSTA_162";
		
		case 814:
			return "MISHSTA_163";
		
		case 746:
			return "MISHSTA_164";
		
		case 514:
			return "MISHSTA_165";
		
		case 744:
			return "MISHSTA_166";
		
		case 841:
			return "MISHSTA_167";
		
		case 840:
			return "MISHSTA_1";
		
		case 838:
			return "MISHSTA_167";
		
		case 828:
			return "MISHSTA_1";
		
		case 829:
			return "MISHSTA_167";
		
		case 831:
			return "MISHSTA_1";
		
		case 832:
			return "MISHSTA_167";
		
		case 834:
			return "MISHSTA_1";
		
		case 835:
			return "MISHSTA_167";
		
		case 837:
			return "MISHSTA_1";
		
		case 739:
			return "MISHSTA_168";
		
		case 619:
			return "MISHSTA_169";
		
		case 560:
			return "MISHSTA_170";
		
		case 559:
			return "MISHSTA_171";
		
		case 558:
			return "MISHSTA_172";
		
		case 673:
			return "MISHSTA_10";
		
		case 688:
			return "MISHSTA_10";
		
		case 687:
			return "MISHSTA_173";
		
		case 844:
			return "MISHSTA_174";
		
		case 845:
			return "MISHSTA_175";
		
		case 843:
			return "MISHSTA_176";
		
		case 236:
			return "MISHSTA_177";
		
		case 29:
			return "MISHSTA_178";
		
		default:
	}
	switch (iParam0)
	{
		case 109:
			return "MISHSTA_179";
		
		case 108:
			return "MISHSTA_180";
		
		case 135:
			return "MISHSTA_181";
		
		case 227:
			return "MISHSTA_182";
		
		case 852:
			return "MISHSTA_183";
		
		case 846:
			return "MISHSTA_184";
		
		case 440:
			return "MISHSTA_185";
		
		case 864:
			return "MISHSTA_186";
		
		case 863:
			return "MISHSTA_187";
		
		case 861:
			return "MISHSTA_1";
		
		case 862:
			return "MISHSTA_188";
		
		case 870:
			return "MISHSTA_1";
		
		case 544:
			return "MISHSTA_0";
		
		case 543:
			return "MISHSTA_189";
		
		case 593:
			return "MISHSTA_190";
		
		case 592:
			return "MISHSTA_1";
		
		case 603:
			return "MISHSTA_1";
		
		case 899:
			return "MISHSTA_1";
		
		case 900:
			return "MISHSTA_191";
		
		case 883:
			return "MISHSTA_192";
		
		case 891:
			return "MISHSTA_192";
		
		case 657:
			return "MISHSTA_193";
		
		case 875:
			return "MISHSTA_192";
		
		case 906:
			return "MISHSTA_194";
		
		case 706:
			return "MISHSTA_195";
		
		case 699:
			return "MISHSTA_196";
		
		case 726:
			return "MISHSTA_197";
		
		case 237:
			return "MISHSTA_198";
		
		case 658:
			return "MISHSTA_1";
		
		case 877:
			return "MISHSTA_0";
		
		case 885:
			return "MISHSTA_0";
		
		default:
	}
	switch (iParam0)
	{
		case 893:
			return "MISHSTA_0";
		
		case 694:
			return "MISHSTA_110";
		
		case 881:
			return "MISHSTA_199";
		
		case 889:
			return "MISHSTA_199";
		
		case 897:
			return "MISHSTA_199";
		
		case 633:
			return "MISHSTA_200";
		
		case 632:
			return "MISHSTA_201";
		
		case 38:
			return "MISHSTA_202";
		
		case 41:
			return "MISHSTA_203";
		
		case 39:
			return "MISHSTA_204";
		
		case 40:
			return "MISHSTA_205";
		
		case 42:
			return "MISHSTA_206";
		
		case 56:
			return "MISHSTA_205";
		
		case 52:
			return "MISHSTA_202";
		
		case 53:
			return "MISHSTA_207";
		
		case 54:
			return "MISHSTA_203";
		
		case 55:
			return "MISHSTA_206";
		
		case 70:
			return "MISHSTA_206";
		
		case 69:
			return "MISHSTA_203";
		
		case 67:
			return "MISHSTA_132";
		
		case 68:
			return "MISHSTA_205";
		
		case 66:
			return "MISHSTA_202";
		
		case 81:
			return "MISHSTA_202";
		
		case 82:
			return "MISHSTA_208";
		
		case 84:
			return "MISHSTA_203";
		
		case 83:
			return "MISHSTA_205";
		
		case 85:
			return "MISHSTA_206";
		
		case 97:
			return "MISHSTA_202";
		
		case 98:
			return "MISHSTA_209";
		
		case 100:
			return "MISHSTA_203";
		
		case 99:
			return "MISHSTA_205";
		
		default:
	}
	switch (iParam0)
	{
		case 101:
			return "MISHSTA_206";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_55884[iParam1 /*13*/].f_4;
	if (iVar0 == 0)
	{
		return;
	}
	Global_55884[iParam1 /*13*/].f_1 = iParam0;
	uVar1 = iParam0 + 1;
	unk_0x5716C8F12991E399(iVar0, uVar1, 1);
	if (func_94(0) && Global_55651)
	{
		unk_0x6353FFB938A64075(iVar0);
		unk_0x6353FFB938A64075(iParam0);
		unk_0x6353FFB938A64075(iParam1);
	}
}

int func_84(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (unk_0xBA16CA557222A92B(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

bool func_85(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_99250.f_1.f_118, iParam0);
}

int func_86(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_99250.f_7703.f_99.f_205[iParam0];
}

int func_87(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

char* func_88(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "JCSLMVANR";
		
		case 2:
			return "JCHMDRAZ";
		
		case 3:
			return "HSTAGNCUT";
		
		case 4:
			return "UNSELLWEAP";
		
		case 0:
			return "HSTECUT";
		
		case 5:
			return "HSTSLWLD";
		
		case 6:
			return "HSTCASECUT";
		
		default:
	}
	return "UNSET_HEISTPENALTY";
}

void func_89(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_90(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_91(int iParam0)
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
	
	if (Global_87659.f_3)
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
			Global_99250.f_1.f_126[iParam0 /*23*/].f_1 = 201600000;
			Global_99250.f_1.f_126[iParam0 /*23*/] = 201600000;
			break;
		
		case 3:
			Global_99250.f_1.f_126[iParam0 /*23*/].f_1 = 331985;
			Global_99250.f_1.f_126[iParam0 /*23*/] = 331985;
			break;
		
		case 1:
			Global_99250.f_1.f_126[iParam0 /*23*/] = 20000000;
			Global_99250.f_1.f_126[iParam0 /*23*/].f_1 = 20000000;
			break;
	}
	iVar0 = func_86(func_68(iParam0));
	iVar1 = Global_99250.f_1.f_126[iParam0 /*23*/].f_1;
	switch (iParam0)
	{
		case 0:
			func_93(iParam0, 2, 2500000);
			break;
		
		case 1:
			func_93(iParam0, 4, 20000000);
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		Global_99250.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < Global_87669[iParam0 /*38*/].f_37)
	{
		if (Global_87669[iParam0 /*38*/].f_31[iVar2] > 0)
		{
			iVar3 = (iVar3 + Global_87669[iParam0 /*38*/].f_31[iVar2]);
			Global_99250.f_1.f_126[iParam0 /*23*/].f_1 = (Global_99250.f_1.f_126[iParam0 /*23*/].f_1 - Global_87669[iParam0 /*38*/].f_31[iVar2]);
		}
		iVar2++;
	}
	iVar1 = (iVar1 - iVar3);
	if (iParam0 == 2)
	{
		iVar4 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(Global_99250.f_1.f_126[iParam0 /*23*/].f_1) * 0.78f));
		func_93(iParam0, 3, iVar4);
		Global_99250.f_1.f_126[iParam0 /*23*/].f_1 = (Global_99250.f_1.f_126[iParam0 /*23*/].f_1 - iVar4);
		iVar1 = (iVar1 - iVar4);
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		iVar5 = Global_99250.f_1.f_12[iVar0 /*6*/][iVar2];
		switch (Global_99250.f_1.f_126[iParam0 /*23*/].f_11[iVar2])
		{
			case 1:
			case 2:
			case 0:
				Global_99250.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(Global_87314[iVar5 /*5*/].f_1) * 0.01f) * IntToFloat(Global_99250.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
			
			case 3:
				Global_99250.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(Global_87314[iVar5 /*5*/].f_1) * 0.015f) * IntToFloat(Global_99250.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_87468[iVar0 /*19*/])
	{
		iVar1 = (iVar1 - Global_99250.f_1.f_126[iParam0 /*23*/].f_17[iVar2]);
		iVar2++;
	}
	Global_99250.f_1.f_126[0 /*23*/].f_2[0] = 0;
	Global_99250.f_1.f_126[0 /*23*/].f_2[1] = 0;
	Global_99250.f_1.f_126[0 /*23*/].f_2[2] = 0;
	Global_87659.f_7 = 0;
	switch (iParam0)
	{
		case 0:
			Global_99250.f_1.f_126[0 /*23*/].f_6[0] = 0f;
			Global_99250.f_1.f_126[0 /*23*/].f_6[1] = 0f;
			Global_99250.f_1.f_126[0 /*23*/].f_6[2] = -1f;
			Global_99250.f_1.f_126[0 /*23*/].f_2[1] = unk_0x11E019C8F43ACC8A((0.12f * IntToFloat(Global_99250.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_99250.f_1.f_126[0 /*23*/].f_2[1]);
			Global_87659.f_7 = unk_0x11E019C8F43ACC8A((0.14f * IntToFloat(Global_99250.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_87659.f_7);
			Global_87659.f_6 = 14f;
			Global_99250.f_1.f_126[0 /*23*/].f_2[0] = iVar1;
			break;
		
		case 1:
			Global_99250.f_1.f_126[1 /*23*/].f_6[0] = 0f;
			Global_99250.f_1.f_126[1 /*23*/].f_6[1] = 0f;
			Global_99250.f_1.f_126[1 /*23*/].f_6[2] = 0f;
			Global_99250.f_1.f_126[1 /*23*/].f_2[0] = 0;
			Global_99250.f_1.f_126[1 /*23*/].f_2[1] = 0;
			Global_99250.f_1.f_126[1 /*23*/].f_2[2] = 0;
			Global_87659.f_6 = -1f;
			break;
		
		case 2:
			Global_99250.f_1.f_126[2 /*23*/].f_6[0] = 0f;
			Global_99250.f_1.f_126[2 /*23*/].f_6[1] = 0f;
			Global_99250.f_1.f_126[2 /*23*/].f_6[2] = 0f;
			Global_87659.f_7 = unk_0x11E019C8F43ACC8A((0.12f * IntToFloat(Global_99250.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_87659.f_7);
			Global_87659.f_6 = 12f;
			Global_99250.f_1.f_126[2 /*23*/].f_2[0] = (iVar1 / 3);
			Global_99250.f_1.f_126[2 /*23*/].f_2[1] = (iVar1 / 3);
			Global_99250.f_1.f_126[2 /*23*/].f_2[2] = (iVar1 / 3);
			Global_87659.f_6 = 0f;
			break;
		
		case 3:
			Global_99250.f_1.f_126[3 /*23*/].f_6[0] = -1f;
			Global_99250.f_1.f_126[3 /*23*/].f_6[1] = 0f;
			Global_99250.f_1.f_126[3 /*23*/].f_6[2] = 0f;
			Global_87659.f_7 = unk_0x11E019C8F43ACC8A((0.12f * IntToFloat(Global_99250.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_87659.f_7);
			Global_87659.f_6 = 12f;
			Global_99250.f_1.f_126[3 /*23*/].f_2[1] = iVar1;
			break;
		
		case 4:
			Global_99250.f_1.f_126[4 /*23*/].f_6[0] = 0f;
			Global_99250.f_1.f_126[4 /*23*/].f_6[1] = 0f;
			Global_99250.f_1.f_126[4 /*23*/].f_6[2] = 0f;
			Global_87659.f_7 = unk_0x11E019C8F43ACC8A((0.12f * IntToFloat(Global_99250.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_87659.f_7);
			Global_87659.f_6 = 12f;
			Global_99250.f_1.f_126[4 /*23*/].f_2[0] = (iVar1 / 3);
			Global_99250.f_1.f_126[4 /*23*/].f_2[1] = (iVar1 / 3);
			Global_99250.f_1.f_126[4 /*23*/].f_2[2] = (iVar1 / 3);
			Global_87659.f_6 = 0f;
			break;
	}
	iVar6 = Global_99250.f_1.f_126[iParam0 /*23*/].f_1;
	if (Global_99250.f_1.f_126[iParam0 /*23*/].f_6[0] != -1f)
	{
		Global_99250.f_1.f_126[iParam0 /*23*/].f_6[0] = ((unk_0xBBDA792448DB5A89(Global_99250.f_1.f_126[iParam0 /*23*/].f_2[0]) / unk_0xBBDA792448DB5A89(iVar6)) * 100f);
	}
	if (Global_99250.f_1.f_126[iParam0 /*23*/].f_6[1] != -1f)
	{
		Global_99250.f_1.f_126[iParam0 /*23*/].f_6[1] = ((unk_0xBBDA792448DB5A89(Global_99250.f_1.f_126[iParam0 /*23*/].f_2[1]) / unk_0xBBDA792448DB5A89(iVar6)) * 100f);
	}
	if (Global_99250.f_1.f_126[iParam0 /*23*/].f_6[2] != -1f)
	{
		Global_99250.f_1.f_126[iParam0 /*23*/].f_6[2] = ((unk_0xBBDA792448DB5A89(Global_99250.f_1.f_126[iParam0 /*23*/].f_2[2]) / unk_0xBBDA792448DB5A89(iVar6)) * 100f);
	}
	if (Global_87659.f_6 != -1f)
	{
		Global_87659.f_6 = ((unk_0xBBDA792448DB5A89(Global_87659.f_7) / unk_0xBBDA792448DB5A89(iVar6)) * 100f);
	}
	switch (iParam0)
	{
		case 0:
			unk_0x5716C8F12991E399(joaat("jewel_heist_raw_take"), Global_99250.f_1.f_126[iParam0 /*23*/], 1);
			break;
	}
	iVar7 = 0;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		iVar7 = (iVar7 + Global_99250.f_1.f_126[iParam0 /*23*/].f_2[iVar8]);
		iVar8++;
	}
	switch (iParam0)
	{
		case 0:
			func_92(810, Global_99250.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_92(811, iVar7, 1);
			break;
		
		case 1:
			switch (func_86(8))
			{
				case 3:
					func_92(610, Global_99250.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_92(611, iVar7, 1);
					break;
				
				case 4:
					func_92(622, Global_99250.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_92(623, iVar7, 1);
					break;
			}
			break;
		
		case 2:
			func_92(734, Global_99250.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_92(735, iVar7, 1);
			break;
		
		case 3:
			switch (func_86(10))
			{
				case 6:
					break;
				
				case 7:
					break;
			}
			break;
		
		case 4:
			switch (func_86(11))
			{
				case 8:
					func_92(664, Global_99250.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_92(671, iVar7, 1);
					break;
				
				case 9:
					func_92(674, Global_99250.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_92(682, iVar7, 1);
					break;
			}
			break;
	}
	Global_87659.f_3 = 1;
	Global_55659 = 0;
}

void func_92(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		if (Global_67755[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_67755[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67755[iVar0 /*9*/].f_1 = (Global_67755[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_67755[iVar0 /*9*/] != -1)
	{
		if (Global_55884[Global_67755[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67755[iVar0 /*9*/].f_1 > 1)
			{
				Global_67755[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67755[iVar0 /*9*/].f_1 < 0)
			{
				Global_67755[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_93(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0)
	{
		return;
	}
	iVar0 = iParam2;
	if (iVar0 < 0)
	{
		iVar0 = (iVar0 * -1);
	}
	bVar1 = false;
	if (Global_87669[iParam0 /*38*/].f_37 == 5)
	{
		bVar1 = true;
	}
	iVar2 = Global_87669[iParam0 /*38*/].f_37;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_87669[iParam0 /*38*/].f_25[iVar3] == iParam1)
		{
			Global_87669[iParam0 /*38*/].f_25[iVar3] = iParam1;
			Global_87669[iParam0 /*38*/].f_31[iVar3] = iVar0;
			return;
		}
		iVar3++;
	}
	if (bVar1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					unk_0x5716C8F12991E399(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
					break;
				
				case 2:
					unk_0x5716C8F12991E399(joaat("hcs_penalty_paleto_drop_money"), iParam2, 1);
					break;
				
				case 4:
					unk_0x5716C8F12991E399(joaat("hcs_penalty_bigs_drop_money"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			unk_0x5716C8F12991E399(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
			break;
		
		case 2:
			unk_0x5716C8F12991E399(joaat("hcs_penalty_jewel_madr_house"), iParam2, 1);
			break;
		
		case 4:
			unk_0x5716C8F12991E399(joaat("hcs_penalty_docks_unsell_wpn"), iParam2, 1);
			break;
		
		case 3:
			unk_0x5716C8F12991E399(joaat("hcs_penalty_paleto_agent_cut"), iParam2, 1);
			break;
		
		case 5:
			unk_0x5716C8F12991E399(joaat("hcs_penalty_bigs_slow_loading"), iParam2, 1);
			break;
		
		case 6:
			unk_0x5716C8F12991E399(joaat("hcs_penalty_bigs_hostage_gift"), iParam2, 1);
			break;
	}
	Global_87669[iParam0 /*38*/].f_25[Global_87669[iParam0 /*38*/].f_37] = iParam1;
	Global_87669[iParam0 /*38*/].f_31[Global_87669[iParam0 /*38*/].f_37] = iVar0;
	Global_87669[iParam0 /*38*/].f_37++;
}

bool func_94(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

void func_95()
{
	int iVar0;
	int iVar1;
	
	if (Global_67754 > 16)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		if (Global_67755[iVar0 /*9*/].f_1 == 0)
		{
			if (Global_67755[iVar0 /*9*/].f_2 != 0f)
			{
				Global_67755[iVar0 /*9*/].f_1 = unk_0xF34EE736CF047844(Global_67755[iVar0 /*9*/].f_2);
			}
		}
		iVar1 = Global_67755[iVar0 /*9*/];
		if (iVar1 > 0)
		{
			if (Global_55884[iVar1 /*13*/] == 9)
			{
				Global_67755[iVar0 /*9*/].f_1 = unk_0xF2DB717A73826179(fLocal_629);
			}
			if (Global_55884[iVar1 /*13*/] == 15)
			{
				Global_67755[iVar0 /*9*/].f_1 = iLocal_630;
			}
		}
		iVar0++;
	}
}

void func_96()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_55678)
	{
		return;
	}
	Global_55678 = 1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (func_7(joaat("sp0_shots")) - Global_55682);
	iVar1 = (func_7(joaat("sp0_hits")) - Global_55681);
	iVar0 = (iVar0 + (func_7(joaat("sp1_shots")) - Global_55684));
	iVar1 = (iVar1 + (func_7(joaat("sp1_hits")) - Global_55683));
	iVar0 = (iVar0 + (func_7(joaat("sp2_shots")) - Global_55686));
	iVar1 = (iVar1 + (func_7(joaat("sp2_hits")) - Global_55685));
	unk_0x4EDE34FBADD967A6(0);
	fVar2 = 100f;
	if (!iVar0 == 0)
	{
		fVar3 = unk_0xBBDA792448DB5A89(iVar0);
		fVar4 = unk_0xBBDA792448DB5A89(iVar1);
		fVar2 = unk_0xBBDA792448DB5A89(unk_0xF34EE736CF047844(((fVar4 / fVar3) * 100f)));
		if (fVar2 > 100f)
		{
			fVar2 = 100f;
		}
	}
	fLocal_629 = fVar2;
	iLocal_630 = iVar0;
}

void func_97(var uParam0)
{
	func_62(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

int func_98()
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

void func_99()
{
	int iVar0;
	
	if (Global_25360 == 0 && !Global_25364)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		Global_67755[iVar0 /*9*/].f_3 = 4;
		iVar0++;
	}
}

void func_100()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	func_101();
	if (((Global_55665 && unk_0x6DF20EAB8093DF19(unk_0x7F3E348C0892D8D2())) && !unk_0x8F97015FD3089C6B()) && !unk_0x4F297F09162EFB5D())
	{
		Global_55665 = 0;
	}
	if (Global_55658)
	{
		Global_55658 = 0;
		iLocal_621 = 0;
	}
	bVar0 = true;
	bVar1 = true;
	if (unk_0x4F297F09162EFB5D())
	{
		bVar0 = false;
	}
	if (!unk_0x6A9CCF8AF1D0CCC8())
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (Global_55665)
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (!unk_0x116E9F29D23ADBBE(unk_0x7F3E348C0892D8D2()))
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (bVar0)
	{
		iLocal_621 = unk_0xF2DB717A73826179((unk_0x5CB0A4A4240C1B6A() * 1000f));
	}
	iVar2 = 0;
	fVar3 = 0f;
	iVar2 = 0;
	while (iVar2 < Global_67754)
	{
		if (Global_67755[iVar2 /*9*/] >= 0)
		{
			iVar4 = Global_55884[Global_67755[iVar2 /*9*/] /*13*/];
			switch (iVar4)
			{
				case 6:
					if (Global_67755[iVar2 /*9*/].f_6 != 0)
					{
						if (Global_67755[iVar2 /*9*/].f_7 == 1)
						{
							Global_67755[iVar2 /*9*/].f_8 = 0;
							Global_67755[iVar2 /*9*/].f_1 = 0;
							Global_67755[iVar2 /*9*/].f_7 = 0;
						}
						else if (unk_0x1F2158D615BC4B25(Global_67755[iVar2 /*9*/].f_6))
						{
							if (!unk_0x0B6E83A9A7ED3EBA(Global_67755[iVar2 /*9*/].f_6))
							{
								iLocal_625 = Global_67755[iVar2 /*9*/].f_8;
								iLocal_624 = unk_0x070BBD7287E8E744(Global_67755[iVar2 /*9*/].f_6);
								iLocal_626 = (iLocal_625 - iLocal_624);
								if (iLocal_626 > 0)
								{
									Global_67755[iVar2 /*9*/].f_1 = (Global_67755[iVar2 /*9*/].f_1 + iLocal_626);
									if (Global_67755[iVar2 /*9*/].f_1 < 0)
									{
										Global_67755[iVar2 /*9*/].f_1 = (Global_67755[iVar2 /*9*/].f_1 * -1);
									}
								}
								Global_67755[iVar2 /*9*/].f_8 = iLocal_624;
							}
						}
						else
						{
							Global_67755[iVar2 /*9*/].f_6 = 0;
						}
					}
					break;
				
				case 1:
					Global_67755[iVar2 /*9*/].f_1 = (Global_67755[iVar2 /*9*/].f_1 + iLocal_621);
					break;
				
				case 2:
					if (Global_55666)
					{
						Global_67755[iVar2 /*9*/].f_1 = (Global_67755[iVar2 /*9*/].f_1 + iLocal_621);
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (Global_55667)
					{
						if (Global_55669 == -1 || Global_67755[iVar2 /*9*/] == Global_55669)
						{
							if (((Global_67755[iVar2 /*9*/] == 339 || Global_67755[iVar2 /*9*/] == 179) || Global_67755[iVar2 /*9*/] == 342) || Global_67755[iVar2 /*9*/] == 234)
							{
								Global_67755[iVar2 /*9*/].f_1 = (Global_67755[iVar2 /*9*/].f_1 + unk_0xF2DB717A73826179((unk_0x5CB0A4A4240C1B6A() * 1000f)));
							}
							else
							{
								Global_67755[iVar2 /*9*/].f_1 = (Global_67755[iVar2 /*9*/].f_1 + iLocal_621);
							}
						}
					}
					break;
				
				case 5:
					if (bVar1)
					{
						if (Global_55671 == -1 || Global_55671 == Global_67755[iVar2 /*9*/])
						{
							if (!Global_55670 == 0)
							{
								if (unk_0x1F2158D615BC4B25(Global_55670))
								{
									if (!unk_0x0B6E83A9A7ED3EBA(Global_55670))
									{
										if (unk_0xDD21A3DB256904E7(Global_55670))
										{
											fVar3 = unk_0x2AA05370067DC5AC(Global_55670);
											if (fVar3 > Global_67755[iVar2 /*9*/].f_2)
											{
												Global_67755[iVar2 /*9*/].f_2 = fVar3;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 13:
					break;
				
				case 12:
					break;
				
				case 10:
				case 11:
				case 14:
					break;
				
				case 16:
					break;
				
				case 17:
					if (func_48(func_56()))
					{
						if (unk_0xB32A2CF30C462699(unk_0x7F3E348C0892D8D2()) && unk_0x465C8B0A7EC6F804(unk_0x7F3E348C0892D8D2()))
						{
							Global_67755[iVar2 /*9*/].f_1 = (Global_67755[iVar2 /*9*/].f_1 + iLocal_621);
						}
					}
					break;
				
				case 15:
					break;
				
				default:
					break;
				}
		}
		iVar2++;
	}
}

void func_101()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if ((((Global_67950 == 0 && Global_67940 == 0) && Global_55818 == 0) && Global_55688 == 0) && !Global_67906)
	{
		return;
	}
	iVar10 = 0;
	if (Global_55688 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_55689[iVar0 /*2*/] != 0)
			{
				if (!unk_0x1F2158D615BC4B25(Global_55689[iVar0 /*2*/]))
				{
					Global_55689[iVar0 /*2*/] = 0;
					Global_55688 = (Global_55688 - 1);
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xE8F73785A0FB2F57(0))
	{
		iVar3 = unk_0x6688A198308BEB5E(0, iVar0);
		switch (iVar3)
		{
			case 140:
				unk_0xA961A8FBAD16D683(0, iVar0, &iVar4, 1);
				if (unk_0x1F2158D615BC4B25(iVar4))
				{
					unk_0x0B6E83A9A7ED3EBA(iVar4);
					if (Global_55818 > 0)
					{
						iVar7 = unk_0xDF1398076E26B0E4(iVar4);
						iVar1 = 0;
						iVar1 = 0;
						while (iVar1 < Global_55818)
						{
							if (Global_55819[iVar1 /*2*/] == iVar7)
							{
								iVar10 = (iVar10 + Global_55819[iVar1 /*2*/].f_1);
							}
							iVar1++;
						}
					}
					if (unk_0x94195F7CA642F937(iVar4) && unk_0xCBABEE38E5DAB356(iVar4) != unk_0x77F050A399DB77ED())
					{
						uVar5 = unk_0x859EB53814D6F82C(unk_0xCBABEE38E5DAB356(iVar4));
						iVar14 = 0;
						if (unk_0x1F2158D615BC4B25(uVar5))
						{
							if (unk_0xDD21A3DB256904E7(iVar5))
							{
								if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
								{
									iVar15 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
								}
								else
								{
									iVar15 = unk_0xD8D1111EA0CFD1DB();
								}
								if (unk_0x1F2158D615BC4B25(iVar15) && unk_0x2EF671D3645D271D(iVar5) == iVar15)
								{
									iVar14 = 1;
								}
							}
						}
						if ((unk_0x94195F7CA642F937(iVar5) && unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2()) == unk_0xCBABEE38E5DAB356(iVar5)) || iVar14)
						{
							if (unk_0x94195F7CA642F937(iVar5))
							{
								iVar6 = unk_0x56315669EED55D9F(unk_0xCBABEE38E5DAB356(iVar4));
								if (Global_55688 > 0)
								{
									iVar11 = func_105(iVar4);
									if (iVar11 != -1)
									{
										unk_0xDEA2809B81E0954E(unk_0xCBABEE38E5DAB356(Global_55689[iVar11 /*2*/]), &iLocal_628);
										if (iLocal_628 == 31086 || iLocal_628 == 39317)
										{
											if (iVar6 != 0 && iVar6 != joaat("weapon_unarmed"))
											{
												func_104();
												Global_55689[iVar11 /*2*/] = 0;
												Global_55688 = (Global_55688 - 1);
											}
										}
									}
								}
								if (Global_67950 > 0)
								{
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < Global_67950)
									{
										if (Global_67941[iVar1 /*2*/] == iVar6)
										{
											func_92(Global_67941[iVar1 /*2*/].f_1, 1, 0);
										}
										iVar1++;
									}
								}
							}
							if (Global_67906)
							{
								iVar12 = unk_0xCBABEE38E5DAB356(iVar4);
								iVar13 = unk_0xDC362F65ACC02F67(iVar12);
								if (!unk_0x335346A332B62CA2(iVar4) && ((((((!iVar13 == 22 && !iVar13 == 19) && !iVar13 == 17) && !iVar13 == 18) && !iVar13 == 27) && !iVar13 == 29) && !iVar13 == 28))
								{
									iVar9 = unk_0xC691C73469AC78F7(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2()), unk_0xCBABEE38E5DAB356(iVar4));
									switch (iVar9)
									{
										case 255:
										case 0:
										case 1:
										case 2:
											if (unk_0x514A99186FEA3CF7(unk_0xCBABEE38E5DAB356(iVar4)))
											{
												func_103();
											}
											break;
										
										default:
											break;
										}
									}
							}
							if (Global_67940 > 0)
							{
								iVar1 = 0;
								iVar2 = Global_67940;
								bVar8 = false;
								while (!bVar8)
								{
									if (Global_67907[iVar1 /*2*/] != 0)
									{
										if (unk_0x1F2158D615BC4B25(Global_67907[iVar1 /*2*/]))
										{
											if (unk_0x0B6E83A9A7ED3EBA(Global_67907[iVar1 /*2*/]))
											{
												if (Global_67907[iVar1 /*2*/] == iVar4)
												{
													func_92(Global_67907[iVar1 /*2*/].f_1, 1, 0);
													Global_67907[iVar1 /*2*/] = 0;
												}
											}
										}
										else
										{
											Global_67907[iVar1 /*2*/] = 0;
										}
										iVar2 = (iVar2 - 1);
									}
									iVar1++;
									if (iVar1 == 16 || iVar2 == 0)
									{
										bVar8 = true;
									}
								}
								if (Global_67940 > 0)
								{
									while (Global_67907[(Global_67940 - 1) /*2*/] == 0 && Global_67940 > 1)
									{
										if (Global_67940 > 1)
										{
											Global_67940 = (Global_67940 - 1);
										}
									}
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
	if (iVar10 > 0)
	{
		func_102(iVar10);
	}
}

void func_102(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		iVar1 = Global_67755[iVar0 /*9*/];
		if (Global_55884[iVar1 /*13*/] == 13)
		{
			Global_67755[iVar0 /*9*/].f_1 = (Global_67755[iVar0 /*9*/].f_1 + iParam0);
		}
		iVar0++;
	}
}

void func_103()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		iVar1 = Global_67755[iVar0 /*9*/];
		if (Global_55884[iVar1 /*13*/] == 16)
		{
			Global_67755[iVar0 /*9*/].f_1++;
		}
		iVar0++;
	}
}

void func_104()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_55688 == 0)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Global_67754)
	{
		iVar2 = Global_67755[iVar1 /*9*/];
		if (Global_55884[iVar2 /*13*/] == 7)
		{
			Global_67755[iVar1 /*9*/].f_1++;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_105(int iParam0)
{
	int iVar0;
	
	if (Global_55688 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_55689[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0x92D1D279A9A46630())
	{
		if (unk_0xD7787CA859482EE6() == 33)
		{
			if (unk_0xF655496F41ADF34B() == 33)
			{
				iVar0 = unk_0xA49D87ED773E4231();
				iVar1 = -1;
				iVar2 = (iVar0 - 4);
				if (((iVar0 - 4) % 3) == 0)
				{
					iVar0 = ((iVar0 - 4) / 3);
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < iVar0)
					{
						iVar4 = unk_0x4AAF4ECF31B949F4(iVar3 * 3 + 1);
						iVar5 = unk_0x4AAF4ECF31B949F4(iVar3 * 3 + 2);
						switch (iVar5)
						{
							case 84:
							case 100:
							case 69:
							case 41:
							case 54:
								iVar1 = iVar4;
								break;
						}
						func_83(iVar4, iVar5);
						iVar3++;
					}
					uVar6 = unk_0x4AAF4ECF31B949F4(iVar2);
					iVar7 = unk_0x4AAF4ECF31B949F4(iVar2 + 1);
					bVar8 = false;
					if (unk_0x4AAF4ECF31B949F4(iVar2 + 2) > 0)
					{
						bVar8 = true;
					}
					iVar9 = 0;
					if (unk_0x4AAF4ECF31B949F4(iVar2 + 3) > 0)
					{
						iVar9 = 1;
					}
					Global_67904 = iVar9;
					Global_67905 = uVar6;
					if (iVar1 == -1)
					{
						func_71(unk_0xBBDA792448DB5A89(iVar7), bVar8);
					}
					else
					{
						func_71(unk_0xBBDA792448DB5A89(iVar1), bVar8);
					}
				}
				func_107();
			}
		}
		if (unk_0xD7787CA859482EE6() == 13)
		{
			if (unk_0xF655496F41ADF34B() == 37)
			{
				iVar10 = unk_0xA49D87ED773E4231();
				if (iVar10 == 3)
				{
					iVar11 = unk_0x4AAF4ECF31B949F4(0);
					iVar12 = unk_0x4AAF4ECF31B949F4(1);
					iVar13 = unk_0x4AAF4ECF31B949F4(2);
					Global_99250.f_1743[iVar11 /*2*/] = iVar12;
					Global_99250.f_1743[iVar11 /*2*/].f_1 = iVar13;
					func_107();
				}
			}
		}
	}
}

int func_107()
{
	if (func_94(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

void func_108()
{
	Global_69577 = 0;
	Global_69578 = 0;
	Global_55659 = 0;
	unk_0xC1B1E9A034A63A62(0);
	unk_0x5AE11BC36633DE4E(0);
	unk_0x7A72DD566E92DC37();
	iLocal_621 = 0;
	Global_55655 = 0;
	Global_55669 = -1;
	iLocal_631 = 0;
	Global_55653 = 0;
	Global_55652 = 0;
	iLocal_633 = 0;
	Global_55670 = 0;
	Global_55668 = 0;
	Global_55649 = 0;
	Global_67950 = 0;
	Global_67940 = 0;
	func_4();
	func_3();
	if (bLocal_634)
	{
		func_1(&Local_45);
		bLocal_634 = false;
	}
	if (Global_3)
	{
		unk_0x2F798BA2098FDADE();
	}
	Global_55664 = 0;
	Global_55660 = 0;
}

