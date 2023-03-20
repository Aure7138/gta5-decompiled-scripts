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
	if (unk_0x1F2158D615BC4B25(uScriptParam_0))
	{
		unk_0xB92C428B448B51A4(uScriptParam_0, 1);
		Local_2 = { unk_0x03C14E8A9400F2A9(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x7578EBD2DA3F8DD2(uScriptParam_0);
		unk_0x5817B24FA3E70BC6(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x1F2158D615BC4B25(uScriptParam_0))
		{
			if (unk_0xC6C2EDDDD51B6332(uScriptParam_0))
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
							unk_0x5817B24FA3E70BC6(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x1E80C02AC16B6622(uLocal_1))
						{
							unk_0xD3AF1785A0A4CD09(uLocal_1, -1);
							unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
							unk_0x112CD899A3BEE719(uLocal_1, 1);
							unk_0x2F798BA2098FDADE();
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
	if (!unk_0x0B6E83A9A7ED3EBA(uLocal_1))
	{
		if (!unk_0xF74B69DFD85D7CCE(uLocal_1))
		{
			unk_0xAB3098579170FA46(&uLocal_1);
		}
		else
		{
			unk_0x112CD899A3BEE719(uLocal_1, 1);
		}
	}
	unk_0x2F798BA2098FDADE();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (!unk_0x1E80C02AC16B6622(uLocal_1))
		{
			if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xCC580427ED36D7F8(uLocal_1, unk_0x77F050A399DB77ED(), 1))
			{
				return 1;
			}
			if (unk_0x32F9EB04315127B4(unk_0x77F050A399DB77ED(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x1E80C02AC16B6622(uLocal_1))
	{
		if (unk_0x49C650267EDFEBC6(uLocal_1, -2017877118) == 7)
		{
			unk_0x642DDF74A8A2B3BB(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x9CDAED65C619A5C6(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x642DDF74A8A2B3BB(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x5EE0E9E5B7A50C2A(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x92F13D723857BEC6(uLocal_1, sLocal_8, sLocal_6, unk_0x1BB2D16654966BFB(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x0B6E83A9A7ED3EBA(uLocal_1))
	{
		uLocal_1 = unk_0x6665DCC708A346F3(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x93A52E3574C76411(uLocal_1, 0);
		unk_0x26A7668D061F96E7(uLocal_1, 0);
		unk_0x9526D9575C237F2F(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0xC60576ADD1AECA45(iLocal_7);
	unk_0x6E2E777C1AD81C36(sLocal_8);
	if (unk_0x4A4B6FD54C499B7D(iLocal_7) && unk_0x5263DE3D9A17A86F(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0xC60576ADD1AECA45(iLocal_7);
		unk_0x6E2E777C1AD81C36(sLocal_8);
	}
	return 0;
}

