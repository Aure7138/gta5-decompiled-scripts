#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x24862A9CDC8F8874(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0xDCC86F723E82125E(uLocal_2, 1))
	{
		if (!unk_0xDCC86F723E82125E(uLocal_2, 0))
		{
			if (unk_0x95CCECA3948CFE7B(uLocal_0))
			{
				if (unk_0x5D42322C7DB888D0(uLocal_0, 0))
				{
					unk_0xFD816D0E738EB817(uLocal_0, 0, 1);
					unk_0xB7A2078CD1C9A82F(uLocal_0, 1);
					unk_0x916DBBB1A4A313B5(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x95CCECA3948CFE7B(uLocal_1))
					{
						unk_0xFD816D0E738EB817(uLocal_1, 0, 1);
						unk_0xB7A2078CD1C9A82F(uLocal_1, 1);
						unk_0x916DBBB1A4A313B5(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0x59A0729D503ED758(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x5D42322C7DB888D0(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0x59A0729D503ED758(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0xE77F5DDBC2E96204(uLocal_0))
				{
					unk_0x59A0729D503ED758(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0x59A0729D503ED758(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0xEF84021B2AB5E334(&uLocal_0);
	unk_0xBDC2957CCB5DFDC3(&uLocal_1);
	unk_0xA4E0D8FD51F2A6F7();
}

