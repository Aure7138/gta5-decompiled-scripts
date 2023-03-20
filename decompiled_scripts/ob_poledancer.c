#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	var uLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	char* sLocal_8 = NULL;
	int iLocal_9 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("a_f_y_beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";
	if (unk_0x86CCCD2FAE9D5E65(uScriptParam_0))
	{
		unk_0xA8F22633ACC22189(uScriptParam_0, 1);
		Local_2 = { unk_0xB07F27EC3B05E4EA(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x3306AAAFE3B25098(uScriptParam_0);
		unk_0x5CEA5F12775261F2(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x86CCCD2FAE9D5E65(uScriptParam_0))
		{
			if (unk_0xEBC80CF8CF0257A5(uScriptParam_0))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0x5CEA5F12775261F2(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x5FEB513A4402FD59(uLocal_1))
						{
							unk_0x492E306B5A7C779A(uLocal_1, -1);
							unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
							unk_0x6CB332CB31E9FA96(uLocal_1, 1);
							unk_0xC23A229F78DAD92A();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!unk_0x930F8FBB8E9537CC(uLocal_1))
	{
		if (!unk_0x331E7ACCFD0869AD(uLocal_1))
		{
			unk_0xF210D34D7F7152ED(&uLocal_1);
		}
		else
		{
			unk_0x6CB332CB31E9FA96(uLocal_1, 1);
		}
	}
	unk_0xC23A229F78DAD92A();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (!unk_0x5FEB513A4402FD59(uLocal_1))
		{
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xBBEF8270CE27C0EE(uLocal_1, unk_0x81873881071CD9FE(), 1))
			{
				return 1;
			}
			if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x5FEB513A4402FD59(uLocal_1))
	{
		if (unk_0xFA1212DE7C455679(uLocal_1, -2017877118) == 7)
		{
			unk_0x31C1393E4ACFD794(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xF20B51B02BB28ECA(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x31C1393E4ACFD794(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x0BAE7BE122182FA8(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x166A94585923DB38(uLocal_1, sLocal_8, sLocal_6, unk_0x3ECD26BA4F631EE2(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x930F8FBB8E9537CC(uLocal_1))
	{
		uLocal_1 = unk_0x206897C6DBC12488(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x6BC3C6046951661E(uLocal_1, 0);
		unk_0x33B1E568CEF14B0D(uLocal_1, 0);
		unk_0x1D15D99A10A15334(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x32A12757CBF48A33(iLocal_7);
	unk_0x295DC04FC13E025B(sLocal_8);
	if (unk_0x33ACB874CECA2D4B(iLocal_7) && unk_0x8E8B546E1A81D27F(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x32A12757CBF48A33(iLocal_7);
		unk_0x295DC04FC13E025B(sLocal_8);
	}
	return 0;
}

