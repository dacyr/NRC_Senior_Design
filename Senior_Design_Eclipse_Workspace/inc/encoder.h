/*
 * encoder.h
 *
 *  Created on: Feb 29, 2016
 *      Author: smith
 */

#ifndef ENCODER_H_
#define ENCODER_H_

typedef enum
{
	Azimuthal_Encoder,
	Claw_Encoder,
	Vertical_Encoder
}encoder_id_t;

class Encoder
{
	public:
		Encoder(void);

		int32_t getCount(void);
		void setCount(int32_t count32);

		bool getDirection(void);

		void enableEncoder(encoder_id_t encode);
		void Error_Handler(void);

		float getRevolutions(encoder_id_t encode);

	private:
		encoder_id_t encoder_id_;
		uint16_t prev_counter_;
		int16_t overflows_;

};



#endif /* ENCODER_H_ */
