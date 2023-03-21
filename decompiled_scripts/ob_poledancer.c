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
	if (unk_0x31F12808DC47A9E5(uScriptParam_0))
	{
		unk_0x73D7E57BF0ED7FEB(uScriptParam_0, 1);
		Local_2 = { unk_0x0AF3D0AB54EA2104(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x93FDA3BF59E7B77F(uScriptParam_0);
		unk_0xF342BF6A7A4C7A8F(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x31F12808DC47A9E5(uScriptParam_0))
		{
			if (unk_0x7F92B610D05B72B6(uScriptParam_0))
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
							unk_0xF342BF6A7A4C7A8F(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x0FAE113CE72ED842(uLocal_1))
						{
							unk_0x9908B4382DC81484(uLocal_1, -1);
							unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
							unk_0x10F31830C95ED2E5(uLocal_1, 1);
							unk_0x810C5D6462DD69E6();
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
	if (!unk_0x74C2FE037DFC8B4A(uLocal_1, 0))
	{
		if (!unk_0x3AAE8FF7FB37F69E(uLocal_1))
		{
			unk_0x63C116C2153FAA3C(&uLocal_1);
		}
		else
		{
			unk_0x10F31830C95ED2E5(uLocal_1, 1);
		}
	}
	unk_0x810C5D6462DD69E6();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (!unk_0x0FAE113CE72ED842(uLocal_1))
		{
			if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x1B843A60307EECA4(uLocal_1, unk_0x18F7BE9ACB7D08F4(), 1))
			{
				return 1;
			}
			if (unk_0x8D11942CD2B49BB5(unk_0x18F7BE9ACB7D08F4(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x0FAE113CE72ED842(uLocal_1))
	{
		if (unk_0x2BBAA45ECDE3DAE2(uLocal_1, -2017877118) == 7)
		{
			unk_0xB5746603774C4C9D(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x5C9BE42A3C54E3E2(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0xB5746603774C4C9D(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0xDFEB6D8BCE2B43F6(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x23AE45186A3CCB95(uLocal_1, sLocal_8, sLocal_6, unk_0x3D81861E1A1652A9(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x74C2FE037DFC8B4A(uLocal_1, 0))
	{
		uLocal_1 = unk_0x364B87C5C64BD100(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x48FBF866E2964067(uLocal_1, 0);
		unk_0x44EB7E24C5D75087(uLocal_1, 0);
		unk_0x40E2910BAF39B1C7(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x9016574B77A748EE(iLocal_7);
	unk_0x831CD0FBFB26EC7E(sLocal_8);
	if (unk_0xEDFE27D1AEA0EA7F(iLocal_7) && unk_0x028356968FDD2DF2(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x9016574B77A748EE(iLocal_7);
		unk_0x831CD0FBFB26EC7E(sLocal_8);
	}
	return 0;
}

