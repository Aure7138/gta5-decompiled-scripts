#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xD63E63DFACCEB80E(83))
	{
		func_10();
	}
	unk_0xD6B7E966D6378295(0);
	unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_8270.f_25), 1);
	func_7();
	unk_0x0E294D1F9E68FE58(1);
	if (!unk_0x2E9CF5C574019636())
	{
		unk_0xC6EA7B53F52F1DF9(0);
	}
	iLocal_0 = unk_0xC97D787CE7726A2F("OPENING_CREDITS");
	while (!unk_0x5E3461E729DA646E(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0x2E9CF5C574019636())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x17103F66FBB44C3C() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0xC42238EA2EBA3C42())
	{
		func_7();
		if (!unk_0x94E72F17611BCD3C(Global_97358.f_8270.f_25, 1))
		{
			unk_0x10243718C63A4D3E(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x17103F66FBB44C3C() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x17103F66FBB44C3C() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x17103F66FBB44C3C() > iLocal_1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8270.f_25), 1);
				if (unk_0x32334E50A46287DA() || unk_0x708CE249B4F97BF8())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_10();
}

void func_1()
{
	Global_90001 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_90001.f_7 = iParam0;
	Global_90001.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x48F299599202B77A(iLocal_0, "HIDE_LOGO");
	unk_0x0F79C8080022554A("STRING");
	unk_0x7FAFF3E791AF486A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
	unk_0x7E86CE5F658823DB();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x48F299599202B77A(iLocal_0, "SHOW_LOGO");
	unk_0x0F79C8080022554A("STRING");
	unk_0x7FAFF3E791AF486A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
	unk_0xC4F81CF078CCB564(fParam1);
	unk_0xC4F81CF078CCB564(fParam2);
	unk_0xC4F81CF078CCB564(fParam3);
	unk_0xC4F81CF078CCB564(fParam4);
	unk_0xC4F81CF078CCB564(fParam5);
	unk_0xC4F81CF078CCB564(fParam6);
	unk_0xC4F81CF078CCB564(fParam7);
	unk_0x7E86CE5F658823DB();
}

void func_7()
{
	unk_0xF4BEBA2136120C64();
	unk_0x6A6A41C66448AD09(2, 199, 1);
	unk_0xF36D3CA21410B7D5(7);
	func_8();
}

void func_8()
{
	unk_0x125C94DBA75FDFFA();
	func_9();
}

void func_9()
{
	Global_17098.f_134 = 1;
}

void func_10()
{
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8270.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x76D57BAF1F432EA7(&iLocal_0);
	}
	unk_0xF36D3CA21410B7D5(4);
	unk_0x0E294D1F9E68FE58(0);
	unk_0xD6B7E966D6378295(1);
	unk_0xE60DEFFB2A853900();
}

