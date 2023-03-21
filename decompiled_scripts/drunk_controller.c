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
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_26 = 0f;
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
	fLocal_16 = -99f;
	fLocal_26 = -1f;
	unk_0x0A2FDF6E490B25B3();
	if (unk_0xD4BE58A7E3E102AC(32))
	{
		func_31();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_30(0);
		func_29();
		func_22();
		func_19();
		func_14();
		func_2();
		iLocal_13++;
		if (iLocal_13 >= 16)
		{
			iLocal_13 = 0;
		}
		iLocal_14++;
		if (iLocal_14 >= 16)
		{
			iLocal_14 = 0;
		}
		iLocal_15++;
		if (iLocal_15 >= 5)
		{
			iLocal_15 = 0;
		}
		if (!func_1())
		{
			func_31();
		}
	}
}

int func_1()
{
	if (Global_42527)
	{
		return 1;
	}
	if (unk_0xD2652A8A890B29BA(Global_42528))
	{
		return 1;
	}
	if (unk_0x222F76006659B0EB(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_42320 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	if (!Global_42527)
	{
		return;
	}
	iVar1 = unk_0x9B35D07DCD0F0B43();
	if (Global_42529 > iVar1 || Global_42529 == -1)
	{
		if (unk_0x16587C6F71675106())
		{
			return;
		}
		iVar2 = func_13();
		iVar0 = (fLocal_17 - 1);
		while (iVar0 >= 1)
		{
			fLocal_17[iVar0] = fLocal_17[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_17[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_17)
		{
			fVar3 = (fVar3 + fLocal_17[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_8();
		if (Global_42532 != Global_42533)
		{
			fVar6 = (Global_42533 - Global_42532);
			Global_42532 = (Global_42532 + (fVar6 * 0.1f));
			if (unk_0x01CBD71E072E9F33((Global_42532 - Global_42533)) < 0.01f)
			{
				Global_42532 = Global_42533;
			}
		}
		if (!unk_0x0899D9C397A93497())
		{
			unk_0x1E5D19099FC87B4C("DRUNK_SHAKE", ((Global_42532 * fVar3) * fVar5));
		}
		if ((unk_0x9B35D07DCD0F0B43() % 100) == 0)
		{
			if (Global_42529 == -1)
			{
			}
			else
			{
				if (fLocal_26 == -1f)
				{
					fLocal_26 = fVar3;
				}
				unk_0xF10F748E1A2B5693(((Global_42532 * fVar3) * fVar5));
				unk_0x20BFC1E1350B8732(((Global_42531 * fVar3) * fVar5));
				fLocal_26 = fVar3;
			}
		}
		if (((Global_42531 * fVar3) * fVar5) < 1f)
		{
			unk_0xC3FE9FADA2E85678(((Global_42531 * fVar3) * fVar5));
		}
		else
		{
			unk_0xC3FE9FADA2E85678(1f);
		}
		if (!unk_0xB6C9272EBC1FDC95())
		{
			unk_0x01DB34EF8F50E4FF("DRUNK_SHAKE", (((Global_42532 * Global_42526) * fVar3) * fVar5));
		}
		unk_0x1179B09B9A833182((((Global_42532 * Global_42526) * fVar3) * fVar5));
		if (unk_0xD2652A8A890B29BA(Global_42528))
		{
			if (unk_0xF19B1386145597A1(Global_42528))
			{
				unk_0xBE6444D037FD0987(Global_42528, ((Global_42532 * fVar3) * fVar5));
			}
		}
		if (!unk_0x9591DE0F00127F2A(&Global_42555) && !unk_0x9591DE0F00127F2A(&Global_42539))
		{
			unk_0x7D17F1A2E0EEDBB9(&Global_42539);
			StringCopy(&Global_42555, "", 16);
		}
		unk_0x0D06F4419B08A0F8();
		if (Global_42534 > 0f)
		{
			if (fLocal_16 != Global_42534)
			{
				if (unk_0x906B5271359D05EF() != -1)
				{
				}
				else if (!unk_0xA4F36D1027968116())
				{
					unk_0xAEB98628F9259B92(&Global_42535, 15f);
					fLocal_16 = Global_42534;
				}
			}
			else
			{
				if (unk_0x906B5271359D05EF() != -1 && unk_0x5D0309FA10886971() != -1)
				{
					fLocal_16 = -99f;
				}
				unk_0xF43558A81654D1D4(2);
				iVar7 = (Global_42529 - iVar1);
				if (iVar7 <= (Global_42530 / 2) && Global_42529 != -1)
				{
					bVar8 = false;
					if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
					{
						if (unk_0x87D4B453D88A15C7(unk_0x0FA8183DAD2B3203()))
						{
							bVar8 = true;
						}
					}
					if (func_6(unk_0x0FA8183DAD2B3203()))
					{
						Global_42529 += 1000;
					}
					else if (bVar8)
					{
						Global_42529 += 1000;
					}
					else if (unk_0x906B5271359D05EF() != -1)
					{
						Global_42529 += 1000;
					}
					else if (func_5())
					{
						Global_42529 += 1000;
					}
					else
					{
						if (unk_0x5D0309FA10886971() != -1)
						{
							unk_0xDE83466C65D5AA01((unk_0xBBDA792448DB5A89((Global_42530 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_42534 = 0f;
						StringCopy(&Global_42535, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_17)
	{
		fLocal_17[iVar0] = 0f;
		iVar0++;
	}
	fLocal_26 = -1f;
	fLocal_16 = -99f;
	func_3(1);
	iLocal_12 = 1;
}

void func_3(bool bParam0)
{
	unk_0x20BFC1E1350B8732(0f);
	unk_0xC3FE9FADA2E85678(0f);
	unk_0xF10F748E1A2B5693(0f);
	unk_0x46E35A3D0C15DA6C(1);
	unk_0x1179B09B9A833182(0f);
	unk_0x020FD88F4306A195(1);
	unk_0xF43558A81654D1D4(0);
	if (unk_0x6FE3A7E505FEC20C("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x8E3496DF5BF7F24D("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x9591DE0F00127F2A(&Global_42539))
	{
		if (unk_0x6FE3A7E505FEC20C(&Global_42539))
		{
			unk_0x8E3496DF5BF7F24D(&Global_42539);
		}
	}
	if (unk_0xD2652A8A890B29BA(Global_42528))
	{
		if (unk_0xF19B1386145597A1(Global_42528))
		{
			unk_0xBE6444D037FD0987(Global_42528, 0f);
			unk_0x0E548D25BBAC1AA4(Global_42528, 1);
		}
	}
	if (unk_0x0D02B1D7D3E821AE())
	{
		unk_0x92F3CFBD517CD462(0);
	}
	if (bParam0)
	{
		if (unk_0x5D0309FA10886971() != -1 || unk_0x906B5271359D05EF() != -1)
		{
			unk_0xBAA4E225DE364743();
		}
		else if (unk_0x16587C6F71675106())
		{
			unk_0xBAA4E225DE364743();
		}
	}
	Global_42534 = 0f;
	StringCopy(&Global_42535, "", 16);
	StringCopy(&Global_42539, "", 64);
	StringCopy(&Global_42555, "", 16);
	func_4();
}

void func_4()
{
	Global_42527 = 0;
	Global_42528 = 0;
	Global_42529 = 0;
	Global_42530 = 30000;
	Global_42531 = 0f;
	Global_42533 = 0f;
	Global_42532 = 0f;
	Global_42534 = 0f;
	StringCopy(&Global_42535, "", 16);
}

bool func_5()
{
	return Global_2509232;
}

int func_6(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_7(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_7(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42348[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42348[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

float func_8()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0.1f;
	iVar1 = func_12(unk_0x0FA8183DAD2B3203());
	iVar2 = func_9(unk_0x0FA8183DAD2B3203());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xD4B321D9096B01FC(iParam0))
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42348[iVar1 /*5*/].f_4;
}

int func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42348[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_11(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42348[iVar0 /*5*/].f_1)
		{
			return Global_42348[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xD4B321D9096B01FC(iParam0))
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42348[iVar1 /*5*/].f_3;
}

float func_13()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x9B35D07DCD0F0B43();
	fVar1 = 1f;
	iVar2 = (Global_42529 - iVar0);
	if (iVar2 <= Global_42530)
	{
		if (Global_42529 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_42530));
		}
	}
	return fVar1;
}

void func_14()
{
	if (Global_42322[iLocal_15 /*5*/] == 0)
	{
		func_15(iLocal_15);
	}
}

void func_15(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (unk_0xF4B969E0807E76C7(Global_42322[iParam0 /*5*/].f_1, 0))
	{
		func_18(iParam0);
		return;
	}
	if (func_6(Global_42322[iParam0 /*5*/].f_1))
	{
		func_18(iParam0);
		return;
	}
	if (!unk_0x5F74A266852104C3("drunk"))
	{
		unk_0x42B7026D73D48D50("drunk");
		return;
	}
	iVar0 = func_17();
	if (iVar0 == -1)
	{
		func_18(iParam0);
		return;
	}
	Global_42348[iVar0 /*5*/] = func_16();
	Global_42348[iVar0 /*5*/].f_1 = Global_42322[iParam0 /*5*/].f_1;
	Global_42348[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_42322[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0x0915CE69760E0654("drunk");
	func_18(iParam0);
}

var func_16()
{
	var uVar0;
	
	uVar0 = Global_42319;
	Global_42319++;
	return uVar0;
}

int func_17()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42348[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_18(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42322[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42322[iParam0 /*5*/].f_1 == unk_0x0FA8183DAD2B3203())
		{
			Global_42559 = 0;
		}
	}
	Global_42322[iParam0 /*5*/] = 13;
	Global_42322[iParam0 /*5*/].f_1 = 0;
	Global_42322[iParam0 /*5*/].f_2 = 0;
	Global_42322[iParam0 /*5*/].f_3 = 0;
	Global_42322[iParam0 /*5*/].f_4 = 0;
	Global_42320 = (Global_42320 - 1);
	if (Global_42320 < 0)
	{
		Global_42320 = 0;
	}
}

void func_19()
{
	if (!Global_42429[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_42429[iLocal_13 /*6*/].f_1 == 0)
		{
			func_21(iLocal_13);
			func_20(iLocal_13);
		}
	}
}

void func_20(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42429[iParam0 /*6*/] = -1;
	Global_42429[iParam0 /*6*/].f_1 = -1;
	Global_42429[iParam0 /*6*/].f_2 = 6;
	Global_42429[iParam0 /*6*/].f_3 = 0;
	Global_42429[iParam0 /*6*/].f_4 = 0;
}

void func_21(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_42429[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_42348[iLocal_14 /*5*/] == -1)
	{
		iVar0 = func_28(Global_42348[iLocal_14 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_23(Global_42348[iLocal_14 /*5*/]);
		}
		else
		{
			func_20(iVar0);
		}
	}
}

void func_23(int iParam0)
{
	int iVar0;
	
	func_26(iParam0);
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_24(iVar0);
}

void func_24(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42348[iParam0 /*5*/] = -1;
	Global_42348[iParam0 /*5*/].f_1 = 0;
	Global_42348[iParam0 /*5*/].f_2 = -1;
	Global_42348[iParam0 /*5*/].f_3 = 0;
	Global_42348[iParam0 /*5*/].f_4 = 0;
}

int func_25(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42348[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_26(int iParam0)
{
	func_30(iParam0);
	func_27(iParam0);
}

void func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42429[iVar0 /*6*/].f_1)
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_42429[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42429[iVar0 /*6*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_29()
{
	if (Global_42429[iLocal_13 /*6*/] == 1)
	{
		Global_42429[iLocal_13 /*6*/] = 0;
	}
}

void func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42429[iVar0 /*6*/])
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

void func_31()
{
	func_32();
	if (!iLocal_12)
	{
		func_3(1);
	}
	unk_0x9C9E32388A7886A2();
}

void func_32()
{
	func_35();
	func_34();
	func_33();
	func_4();
	Global_42560 = 0;
	Global_42559 = 0;
	Global_42320 = 0;
	unk_0xE9DEB0815374FA4D("drunk");
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_20(iVar0);
		iVar0++;
	}
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_24(iVar0);
		iVar0++;
	}
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_18(iVar0);
		iVar0++;
	}
}

