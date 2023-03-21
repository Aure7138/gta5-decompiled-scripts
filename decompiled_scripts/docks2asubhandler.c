#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x78BF2001491914AC(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0xAA4F14DA15DB0B51(uLocal_2, 1))
	{
		if (!unk_0xAA4F14DA15DB0B51(uLocal_2, 0))
		{
			if (unk_0x2137828D03306CAF(uLocal_0))
			{
				if (unk_0x7FAC45D56235AB39(uLocal_0, 0))
				{
					unk_0x216B434C1A609F5B(uLocal_0, 0, 1);
					unk_0xA32D9C84C1A93920(uLocal_0, 1);
					unk_0x9C27A9366AD7DE0B(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x2137828D03306CAF(uLocal_1))
					{
						unk_0x216B434C1A609F5B(uLocal_1, 0, 1);
						unk_0xA32D9C84C1A93920(uLocal_1, 1);
						unk_0x9C27A9366AD7DE0B(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xF6082E2ADA1C795B(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0x7FAC45D56235AB39(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xF6082E2ADA1C795B(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x57F6052FCF93BCFF(uLocal_0))
				{
					unk_0xF6082E2ADA1C795B(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0xFECCD8AF38671477(&uLocal_0);
	unk_0xC76AD47E2B4CE25C(&uLocal_1);
	unk_0xA232817B0B36F2E5();
}

