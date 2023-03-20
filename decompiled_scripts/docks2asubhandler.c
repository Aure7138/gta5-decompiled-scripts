#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x8D841F1DD3FA555F(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0x236D8AD7EE179F46(uLocal_2, 1))
	{
		if (!unk_0x236D8AD7EE179F46(uLocal_2, 0))
		{
			if (unk_0x86CCCD2FAE9D5E65(uLocal_0))
			{
				if (unk_0x7404950238A154C2(uLocal_0, 0))
				{
					unk_0xD768713E73165208(uLocal_0, 0, 1);
					unk_0xA8F22633ACC22189(uLocal_0, 1);
					unk_0xCEDA5B7DDF6C8846(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x86CCCD2FAE9D5E65(uLocal_1))
					{
						unk_0xD768713E73165208(uLocal_1, 0, 1);
						unk_0xA8F22633ACC22189(uLocal_1, 1);
						unk_0xCEDA5B7DDF6C8846(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xF3148AAF69AF9CBC(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x7404950238A154C2(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xF3148AAF69AF9CBC(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x331E7ACCFD0869AD(uLocal_0))
				{
					unk_0xF3148AAF69AF9CBC(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xF3148AAF69AF9CBC(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0xE0913C01F5C0CC3D(&uLocal_0);
	unk_0x3C6E68D2D7F41A39(&uLocal_1);
	unk_0xC23A229F78DAD92A();
}

